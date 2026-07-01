#!/usr/bin/env python3

import math
from typing import Optional

import rclpy
from rclpy.node import Node

from go2_stair_interfaces.msg import Go2SafetyState, Go2SafetyStatus


class Go2SafetyMonitor(Node):
    def __init__(self):
        super().__init__("go2_safety_monitor")

        self.input_topic = "/go2/safety_state"
        self.output_topic = "/go2/safety_status"

        # Calibration for initial robot posture
        self.calibration_time_s = 2.0

        # Roll thresholds
        self.roll_warning = math.radians(15.0)
        self.roll_stop = math.radians(25.0)
        self.roll_recovery = math.radians(35.0)

        # Pitch thresholds
        self.pitch_warning = math.radians(18.0)
        self.pitch_stop = math.radians(35.0)
        self.pitch_recovery = math.radians(45.0)

        # Angular rate thresholds
        self.roll_rate_warning = 1.5
        self.roll_rate_stop = 2.5

        self.pitch_rate_warning = 1.5
        self.pitch_rate_stop = 2.5

        # State timeout
        self.state_timeout_s = 0.20

        # Contact thresholds
        self.min_contacts_warning = 2
        self.min_contacts_stop = 2

        # Internal state
        self.latest_state: Optional[Go2SafetyState] = None
        self.latest_state_rx_time = None

        self.calibrated = False
        self.calibration_start_time = None
        self.roll_samples = []
        self.pitch_samples = []

        self.roll0 = 0.0
        self.pitch0 = 0.0

        self.last_log_time = self.get_clock().now()

        self.create_subscription(
            Go2SafetyState,
            self.input_topic,
            self.safety_state_callback,
            10,
        )

        self.status_pub = self.create_publisher(
            Go2SafetyStatus,
            self.output_topic,
            10,
        )

        self.create_timer(0.05, self.timer_callback)  # 20 Hz

        self.get_logger().info("Go2 Safety Monitor started.")
        self.get_logger().info(f"Subscribing: {self.input_topic}")
        self.get_logger().info(f"Publishing:  {self.output_topic}")
        self.get_logger().info("READ-ONLY node: no robot command is sent.")

    def safety_state_callback(self, msg: Go2SafetyState):
        self.latest_state = msg
        self.latest_state_rx_time = self.get_clock().now()

        if self.calibration_start_time is None:
            self.calibration_start_time = self.get_clock().now()
            self.get_logger().info("Starting roll/pitch calibration...")

    def compute_local_state_age_s(self) -> float:
        if self.latest_state_rx_time is None:
            return math.inf

        now = self.get_clock().now()
        return (now - self.latest_state_rx_time).nanoseconds * 1e-9

    def update_calibration(self, state: Go2SafetyState):
        if self.calibrated:
            return

        now = self.get_clock().now()

        if self.calibration_start_time is None:
            self.calibration_start_time = now
            return

        elapsed = (now - self.calibration_start_time).nanoseconds * 1e-9

        self.roll_samples.append(float(state.roll))
        self.pitch_samples.append(float(state.pitch))

        if elapsed >= self.calibration_time_s:
            if len(self.roll_samples) > 0:
                self.roll0 = sum(self.roll_samples) / len(self.roll_samples)
                self.pitch0 = sum(self.pitch_samples) / len(self.pitch_samples)

            self.calibrated = True

            self.get_logger().info(
                "Calibration completed: "
                f"roll0={math.degrees(self.roll0):.2f} deg, "
                f"pitch0={math.degrees(self.pitch0):.2f} deg"
            )

    def timer_callback(self):
        status_msg = Go2SafetyStatus()
        status_msg.header.stamp = self.get_clock().now().to_msg()
        status_msg.header.frame_id = "base_link"

        status_msg.status = Go2SafetyStatus.STOP_REQUIRED
        status_msg.reason = "no_safety_state"

        if self.latest_state is None:
            status_msg.state_timeout = True
            self.status_pub.publish(status_msg)
            return

        state = self.latest_state
        self.update_calibration(state)

        local_age_s = self.compute_local_state_age_s()

        roll_error = float(state.roll)
        pitch_error = float(state.pitch) - self.pitch0
        pitch_abs = float(state.pitch)

        roll_rate = float(state.roll_rate)
        pitch_rate = float(state.pitch_rate)

        foot_contact = list(state.foot_contact)
        contact_count = sum(1 for c in foot_contact if c)

        # Timeout checks
        state_timeout = (
            local_age_s > self.state_timeout_s
            or float(state.sport_age_s) > self.state_timeout_s
            or float(state.lowstate_age_s) > self.state_timeout_s
            or not state.sport_received
            or not state.lowstate_received
        )

        # Attitude checks
        attitude_warning = (
            abs(roll_error) > self.roll_warning
            or abs(pitch_error) > self.pitch_warning
        )

        attitude_stop = (
            abs(roll_error) > self.roll_stop
            or abs(pitch_abs) > self.pitch_stop
        )

        attitude_recovery = (
            abs(roll_error) > self.roll_recovery
            or abs(pitch_abs) > self.pitch_recovery
        )

        # Angular rate checks
        rate_warning = (
            abs(roll_rate) > self.roll_rate_warning
            or abs(pitch_rate) > self.pitch_rate_warning
        )

        rate_stop = (
            abs(roll_rate) > self.roll_rate_stop
            or abs(pitch_rate) > self.pitch_rate_stop
        )

        # Contact checks
        contact_warning = contact_count < self.min_contacts_warning
        contact_stop = contact_count < self.min_contacts_stop
        contact_recovery = contact_count <= 1

        # Fill message
        status_msg.roll_error = float(roll_error)
        status_msg.pitch_error = float(pitch_error)
        status_msg.roll_rate = float(roll_rate)
        status_msg.pitch_rate = float(pitch_rate)

        status_msg.contact_count = int(contact_count)
        status_msg.foot_contact = foot_contact

        status_msg.state_timeout = bool(state_timeout)
        status_msg.attitude_warning = bool(attitude_warning)
        status_msg.attitude_stop = bool(attitude_stop)
        status_msg.rate_warning = bool(rate_warning)
        status_msg.rate_stop = bool(rate_stop)
        status_msg.contact_warning = bool(contact_warning)
        status_msg.contact_stop = bool(contact_stop)

        status_msg.sport_age_s = float(state.sport_age_s)
        status_msg.lowstate_age_s = float(state.lowstate_age_s)

        reasons = []

        if not self.calibrated:
            reasons.append("calibrating")

        if state_timeout:
            reasons.append("state_timeout")

        if attitude_warning:
            reasons.append("attitude_warning")
        if attitude_stop:
            reasons.append("attitude_stop")
        if attitude_recovery:
            reasons.append("attitude_recovery")

        if rate_warning:
            reasons.append("rate_warning")
        if rate_stop:
            reasons.append("rate_stop")

        if contact_warning:
            reasons.append("contact_warning")
        if contact_stop:
            reasons.append("contact_stop")
        if contact_recovery:
            reasons.append("contact_recovery")

        # Global safety status
        if attitude_recovery or contact_recovery:
            status_msg.status = Go2SafetyStatus.RECOVERY_REQUIRED

        elif state_timeout or attitude_stop or rate_stop or contact_stop:
            status_msg.status = Go2SafetyStatus.STOP_REQUIRED

        elif (
            not self.calibrated
            or attitude_warning
            or rate_warning
            or contact_warning
        ):
            status_msg.status = Go2SafetyStatus.WARNING

        else:
            status_msg.status = Go2SafetyStatus.SAFE
            reasons.append("safe")

        status_msg.reason = " ".join(reasons)

        self.status_pub.publish(status_msg)
        self.log_status_once_per_second(status_msg)

    def log_status_once_per_second(self, msg: Go2SafetyStatus):
        now = self.get_clock().now()
        elapsed = (now - self.last_log_time).nanoseconds * 1e-9

        if elapsed < 1.0:
            return

        self.last_log_time = now

        status_name = {
            Go2SafetyStatus.SAFE: "SAFE",
            Go2SafetyStatus.WARNING: "WARNING",
            Go2SafetyStatus.STOP_REQUIRED: "STOP_REQUIRED",
            Go2SafetyStatus.RECOVERY_REQUIRED: "RECOVERY_REQUIRED",
        }.get(msg.status, "UNKNOWN")

        self.get_logger().info(
            f"[{status_name}] "
            f"roll_err={math.degrees(msg.roll_error):.2f} deg "
            f"pitch_err={math.degrees(msg.pitch_error):.2f} deg "
            f"roll_rate={msg.roll_rate:.3f} rad/s "
            f"pitch_rate={msg.pitch_rate:.3f} rad/s "
            f"contacts={msg.contact_count} "
            f"reason='{msg.reason}'"
        )


def main(args=None):
    rclpy.init(args=args)
    node = Go2SafetyMonitor()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()