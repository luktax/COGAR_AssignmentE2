#!/usr/bin/env python3

import math
from typing import Optional

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

from go2_stair_interfaces.msg import Go2SafetyStatus

class Go2VelocitySupervisor(Node):
    def __init__(self):
        super().__init__("go2_velocity_supervisor")

        self.cmd_input_topic = "/cmd_vel_desired"
        self.safety_status_topic = "/go2/safety_status"
        self.cmd_output_topic = "/go2/cmd_vel_safe"

        # Same thresholds used conceptually by the safety monitor
        self.roll_warning = math.radians(15.0)
        self.roll_stop = math.radians(25.0)

        self.pitch_warning = math.radians(18.0)
        self.pitch_stop = math.radians(35.0)

        self.roll_rate_warning = 1.5
        self.roll_rate_stop = 2.5

        self.pitch_rate_warning = 1.5
        self.pitch_rate_stop = 2.5

        # Command limits
        self.max_abs_vx = 0.50
        self.max_abs_vy = 0.20
        self.max_abs_yaw_rate = 0.80

        # Speed scale filtering
        self.publish_hz = 20.0
        self.dt = 1.0 / self.publish_hz

        # Slower acceleration, faster deceleration
        self.scale_increase_rate = 0.8
        self.scale_decrease_rate = 4.0

        self.speed_scale = 0.0

        self.latest_cmd: Optional[Twist] = None
        self.latest_status: Optional[Go2SafetyStatus] = None

        self.create_subscription(
            Twist,
            self.cmd_input_topic,
            self.cmd_callback,
            10,
        )

        self.create_subscription(
            Go2SafetyStatus,
            self.safety_status_topic,
            self.safety_status_callback,
            10,
        )

        self.cmd_pub = self.create_publisher(
            Twist,
            self.cmd_output_topic,
            10,
        )

        self.create_timer(self.dt, self.timer_callback)

        self.get_logger().info("Go2 Velocity Supervisor started.")
        self.get_logger().info(f"Input velocity:  {self.cmd_input_topic}")
        self.get_logger().info(f"Safety status:   {self.safety_status_topic}")
        self.get_logger().info(f"Output velocity: {self.cmd_output_topic}")
        self.get_logger().info("This node only publishes safe velocity. It does not call Unitree SDK directly.")

    def cmd_callback(self, msg: Twist):
        self.latest_cmd = msg
    
    def safety_status_callback(self, msg: Go2SafetyStatus):
        self.latest_status = msg

    def clamp(self, value, low, high):
        return max(low, min(high, value))
    
    def risk_between(self, value_abs, warning_threshold, stop_threshold):
        if stop_threshold <= warning_threshold:
            return 1.0

        risk = (value_abs - warning_threshold) / (stop_threshold - warning_threshold)
        return self.clamp(risk, 0.0, 1.0)
    
    def limit_cmd(self, cmd: Twist):
        vx = self.clamp(cmd.linear.x, -self.max_abs_vx, self.max_abs_vx)
        vy = self.clamp(cmd.linear.y, -self.max_abs_vy, self.max_abs_vy)
        yaw_rate = self.clamp(cmd.angular.z, -self.max_abs_yaw_rate, self.max_abs_yaw_rate)
        return vx, vy, yaw_rate
    
    def update_speed_scale(self, target_scale: float, forced_stop: bool):
        target_scale = self.clamp(target_scale, 0.0, 1.0)

        if forced_stop:
            self.speed_scale = 0.0
            return

        if target_scale < self.speed_scale:
            max_step = self.scale_decrease_rate * self.dt
            self.speed_scale = max(target_scale, self.speed_scale - max_step)
        else:
            max_step = self.scale_increase_rate * self.dt
            self.speed_scale = min(target_scale, self.speed_scale + max_step)

    def compute_risk_from_status(self, status: Go2SafetyStatus):
        roll_risk = self.risk_between(
            abs(float(status.roll_error)),
            self.roll_warning,
            self.roll_stop,
        )

        pitch_risk = self.risk_between(
            abs(float(status.pitch_error)),
            self.pitch_warning,
            self.pitch_stop,
        )

        roll_rate_risk = self.risk_between(
            abs(float(status.roll_rate)),
            self.roll_rate_warning,
            self.roll_rate_stop,
        )

        pitch_rate_risk = self.risk_between(
            abs(float(status.pitch_rate)),
            self.pitch_rate_warning,
            self.pitch_rate_stop,
        )

        total_risk = max(
            roll_risk,
            pitch_risk,
            roll_rate_risk,
            pitch_rate_risk,
        )

        return total_risk

    def timer_callback(self):
        out = Twist()

        # If there is no desired command, send zero velocity.
        if self.latest_cmd is None:
            self.speed_scale = 0.0
            self.cmd_pub.publish(out)
            return

        # If safety status is missing, do not move.
        if self.latest_status is None:
            self.speed_scale = 0.0
            self.cmd_pub.publish(out)
            return

        cmd = self.latest_cmd
        status = self.latest_status

        desired_vx, desired_vy, desired_yaw_rate = self.limit_cmd(cmd)

        forced_stop = (
            status.status == Go2SafetyStatus.STOP_REQUIRED
            or status.status == Go2SafetyStatus.RECOVERY_REQUIRED
            or bool(status.state_timeout)
        )

        if forced_stop:
            target_scale = 0.0
        else:
            risk = self.compute_risk_from_status(status)
            target_scale = 1.0 - risk

        self.update_speed_scale(target_scale, forced_stop)

        out.linear.x = float(desired_vx * self.speed_scale)
        out.linear.y = float(desired_vy * self.speed_scale)
        out.linear.z = 0.0

        out.angular.x = 0.0
        out.angular.y = 0.0
        out.angular.z = float(desired_yaw_rate * self.speed_scale)

        self.cmd_pub.publish(out)


def main(args=None):
    rclpy.init(args=args)
    node = Go2VelocitySupervisor()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()

    