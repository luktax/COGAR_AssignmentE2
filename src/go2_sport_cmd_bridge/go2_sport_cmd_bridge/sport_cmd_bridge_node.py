#!/usr/bin/env python3

import math

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

from unitree_sdk2py.core.channel import ChannelFactoryInitialize
from unitree_sdk2py.go2.sport.sport_client import SportClient

CMD_TOPIC = "/go2/cmd_vel_safe"

NETWORK_INTERFACE = "eth0"

SEND_HZ = 20.0
CMD_TIMEOUT_S = 0.30

MAX_VX = 3.0
MAX_VY = 2.0
MAX_YAW_RATE = 0.80

class Go2SportCmdBridge(Node):
    def __init__(self):
        super().__init__("go2_sport_cmd_bridge")

        self.latest_cmd = None
        self.latest_cmd_time = None

        self.get_logger().info("Initializing Unitree SportClient...")
        ChannelFactoryInitialize(0, NETWORK_INTERFACE)

        self.client = SportClient()
        self.client.SetTimeout(10.0)
        self.client.Init()

        self.sub = self.create_subscription(
            Twist,
            CMD_TOPIC,
            self.cmd_callback,
            10,
        )

        self.timer = self.create_timer(1.0 / SEND_HZ, self.timer_callback)

        self.last_log_time = self.get_clock().now()

        self.get_logger().info("Go2 Sport Command Bridge started.")
        self.get_logger().info(f"Subscribing: {CMD_TOPIC}")
        self.get_logger().info("This node sends real SportClient.Move commands to the robot.")

    def cmd_callback(self, msg: Twist):
        self.latest_cmd = msg
        self.latest_cmd_time = self.get_clock().now()

    def clamp(self, value, limit):
        return max(-limit, min(limit,value))

    def cmd_age_s(self):
        if self.latest_cmd_time is None:
            return math.inf
        
        now = self.get_clock().now()
        return (now - self.latest_cmd_time).nanoseconds * 1e-9

    def send_stop(self):
        try:
            self.client.StopMove()
        except Exception as e:
            self.get_logger().error(f"StopMove failed: {e}")
    
    def send_move(self, vx, vy, yaw_rate):
        try:
            self.client.Move(float(vx), float(vy), float(yaw_rate))
        except Exception as e:
            self.get_logger().error(f"Move failed: {e}")
            self.send_stop()
    
    def timer_callback(self):
        if self.latest_cmd is None:
            self.send_stop()
            self.log_status(0.0, 0.0, 0.0, "no_cmd")
            return

        if self.cmd_age_s() > CMD_TIMEOUT_S:
            self.send_stop()
            self.log_status(0.0, 0.0, 0.0, "cmd_timeout")
            return

        vx = self.clamp(self.latest_cmd.linear.x, MAX_VX)
        vy = self.clamp(self.latest_cmd.linear.y, MAX_VY)
        yaw_rate = self.clamp(self.latest_cmd.angular.z, MAX_YAW_RATE)

        if abs(vx) < 1e-3 and abs(vy) < 1e-3 and abs(yaw_rate) < 1e-3:
            self.send_stop()
            self.log_status(0.0, 0.0, 0.0, "zero_cmd")
            return

        self.send_move(vx, vy, yaw_rate)
        self.log_status(vx, vy, yaw_rate, "move")
    
    def log_status(self, vx, vy, yaw_rate, reason):
        now = self.get_clock().now()
        elapsed = (now - self.last_log_time).nanoseconds * 1e-9

        if elapsed < 1.0:
            return

        self.last_log_time = now

        self.get_logger().info(
            f"[SDK CMD] reason={reason} "
            f"vx={vx:.3f} vy={vy:.3f} yaw_rate={yaw_rate:.3f}"
        )
    
    def destroy_node(self):
        self.get_logger().warn("Stopping robot before shutdown...")
        self.send_stop()
        super().destroy_node()
    
def main(args=None):
    rclpy.init(args=args)

    node = Go2SportCmdBridge()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.send_stop()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()