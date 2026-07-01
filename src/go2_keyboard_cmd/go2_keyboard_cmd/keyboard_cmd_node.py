#!/usr/bin/env python3

import sys
import select
import termios
import tty
from typing import Optional

import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from geometry_msgs.msg import Twist


class FixedKeyboardCmd(Node):
    def __init__(self):
        super().__init__("fixed_keyboard_cmd")

        self.output_topic = "/cmd_vel_desired"

        # Parameters, changeable at runtime with ros2 param set
        self.declare_parameter("linear_speed", 0.50)       # m/s
        self.declare_parameter("lateral_speed", 0.40)      # m/s
        self.declare_parameter("yaw_speed", 0.60)          # rad/s
        self.declare_parameter("publish_hz", 20.0)
        self.declare_parameter("key_timeout_s", 0.12)

        self.linear_speed = float(self.get_parameter("linear_speed").value)
        self.lateral_speed = float(self.get_parameter("lateral_speed").value)
        self.yaw_speed = float(self.get_parameter("yaw_speed").value)
        self.publish_hz = float(self.get_parameter("publish_hz").value)
        self.key_timeout_s = float(self.get_parameter("key_timeout_s").value)

        self.add_on_set_parameters_callback(self.parameter_callback)

        self.pub = self.create_publisher(Twist, self.output_topic, 10)

        self.active_key: Optional[str] = None
        self.last_key_time = self.get_clock().now()

        self.old_terminal_settings = None
        self.configure_terminal()

        self.timer = self.create_timer(1.0 / self.publish_hz, self.timer_callback)

        self.get_logger().info("Fixed keyboard command node started.")
        self.get_logger().info(f"Publishing: {self.output_topic}")
        self.get_logger().info("Controls:")
        self.get_logger().info("  W/S: forward/backward")
        self.get_logger().info("  A/D: lateral left/right")
        self.get_logger().info("  Q/E: yaw left/right")
        self.get_logger().info("  SPACE: stop")
        self.get_logger().info("  CTRL+C: exit")
        self.get_logger().info(
            f"Current speeds: linear={self.linear_speed:.2f} m/s, "
            f"lateral={self.lateral_speed:.2f} m/s, "
            f"yaw={self.yaw_speed:.2f} rad/s"
        )

    def configure_terminal(self):
        if not sys.stdin.isatty():
            self.get_logger().warn("stdin is not a terminal. Keyboard input may not work.")
            return

        self.old_terminal_settings = termios.tcgetattr(sys.stdin)
        tty.setcbreak(sys.stdin.fileno())

    def restore_terminal(self):
        if self.old_terminal_settings is not None:
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.old_terminal_settings)
            self.old_terminal_settings = None

    def parameter_callback(self, params):
        for p in params:
            if p.name == "linear_speed":
                if p.value < 0.0:
                    return SetParametersResult(successful=False, reason="linear_speed must be >= 0")
                self.linear_speed = float(p.value)

            elif p.name == "lateral_speed":
                if p.value < 0.0:
                    return SetParametersResult(successful=False, reason="lateral_speed must be >= 0")
                self.lateral_speed = float(p.value)

            elif p.name == "yaw_speed":
                if p.value < 0.0:
                    return SetParametersResult(successful=False, reason="yaw_speed must be >= 0")
                self.yaw_speed = float(p.value)

            elif p.name == "key_timeout_s":
                if p.value <= 0.0:
                    return SetParametersResult(successful=False, reason="key_timeout_s must be > 0")
                self.key_timeout_s = float(p.value)

        self.get_logger().info(
            f"Updated speeds: linear={self.linear_speed:.2f} m/s, "
            f"lateral={self.lateral_speed:.2f} m/s, "
            f"yaw={self.yaw_speed:.2f} rad/s"
        )

        return SetParametersResult(successful=True)

    def read_keys_nonblocking(self):
        keys = []

        if not sys.stdin.isatty():
            return None

        while True:
            readable, _, _ = select.select([sys.stdin], [], [], 0.0)
            if not readable:
                break
            
            key = sys.stdin.read(1)
            keys.append(key)
        return keys
    
    def flush_keyboard_buffer(self):
        if not sys.stdin.isatty():
            return

        try:
            termios.tcflush(sys.stdin, termios.TCIFLUSH)
        except termios.error:
            pass

    def update_active_key(self):
        keys = self.read_keys_nonblocking()

        if not keys:
            return

        latest_valid_key = None
        stop_requested = False

        for key in keys:
            key = key.lower()

            if key == "\x03":  # CTRL+C
                raise KeyboardInterrupt

            if key == " ":
                stop_requested = True
                latest_valid_key = None

            elif key in ["w", "a", "s", "d", "q", "e"]:
                latest_valid_key = key
                stop_requested = False

        if stop_requested:
            self.active_key = None
            self.flush_keyboard_buffer()
            return

        if latest_valid_key is not None:
            previous_key = self.active_key

            self.active_key = latest_valid_key
            self.last_key_time = self.get_clock().now()

            # If the command changed, discard old repeated characters.
            if previous_key is not None and latest_valid_key != previous_key:
                self.flush_keyboard_buffer()

    def build_cmd_from_key(self) -> Twist:
        msg = Twist()

        if self.active_key is None:
            return msg

        now = self.get_clock().now()
        age_s = (now - self.last_key_time).nanoseconds * 1e-9

        # If the key is no longer being repeated, stop automatically.
        if age_s > self.key_timeout_s:
            self.active_key = None
            return msg

        if self.active_key == "w":
            msg.linear.x = self.linear_speed

        elif self.active_key == "s":
            msg.linear.x = -self.linear_speed

        elif self.active_key == "a":
            msg.linear.y = self.lateral_speed

        elif self.active_key == "d":
            msg.linear.y = -self.lateral_speed

        elif self.active_key == "q":
            msg.angular.z = self.yaw_speed

        elif self.active_key == "e":
            msg.angular.z = -self.yaw_speed

        return msg

    def timer_callback(self):
        self.update_active_key()
        msg = self.build_cmd_from_key()
        self.pub.publish(msg)

    def destroy_node(self):
        self.restore_terminal()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = FixedKeyboardCmd()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.restore_terminal()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()