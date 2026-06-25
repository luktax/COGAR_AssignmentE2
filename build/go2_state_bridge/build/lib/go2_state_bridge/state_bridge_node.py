import math
import rclpy
from rclpy.node import Node
from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    DurabilityPolicy,
    HistoryPolicy,
)

from unitree_go.msg import SportModeState, LowState
from go2_stair_interfaces.msg import Go2SafetyState

class Go2StateBridge(Node):
    def __init__(self):
        super().__init__("go2_state_bridge")

        self.sport_topic = "/lf/sportmodestate"
        self.lowstate_topic = "/lf/lowstate"
        self.output_topic = "/go2/safety_state"
        self.publish_hz = 20.0
        self.contact_force_threshold = 5.0

        qos = QoSProfile(
            history=HistoryPolicy.KEEP_LAST,
            depth=10,
            reliability=ReliabilityPolicy.BEST_EFFORT,
            durability=DurabilityPolicy.VOLATILE,
        )

        self.latest_sport = None
        self.latest_lowstate = None
        self.latest_sport_rx_time = None
        self.latest_lowstate_rx_time = None

        self.create_subscription(
            SportModeState,
            self.sport_topic,
            self.sport_callback,
            qos,
        )

        self.create_subscription(
            LowState,
            self.lowstate_topic,
            self.lowstate_callback,
            qos,
        )

        self.pub = self.create_publisher(
            Go2SafetyState,
            self.output_topic,
            10,
        )

        self.create_timer(1.0 / self.publish_hz, self.timer_callback)

        self.get_logger().info("Go2 state bridge started.")
        self.get_logger().info(f"Subscribing sport state: {self.sport_topic}")
        self.get_logger().info(f"Subscribing low state:   {self.lowstate_topic}")
        self.get_logger().info(f"Publishing safety state: {self.output_topic}")
        self.get_logger().info("READ-ONLY node: no robot command is sent.")

    def sport_callback(self, msg: SportModeState):
        self.latest_sport = msg
        self.latest_sport_rx_time = self.get_clock().now()
    
    def lowstate_callback(self, msg: LowState):
        self.latest_lowstate = msg
        self.latest_lowstate_rx_time = self.get_clock().now()
    
    def compute_age_s(self, rx_time):
        if rx_time is None:
            return math.inf
        now = self.get_clock().now()
        return (now - rx_time).nanoseconds * 1e-9
    
    def timer_callback(self):
        if self.latest_sport is None and self.latest_lowstate is None:
            return

        out = Go2SafetyState()
        now_msg = self.get_clock().now().to_msg()
        out.header.stamp = now_msg
        out.header.frame_id = "base_link"

        sport = self.latest_sport
        low = self.latest_lowstate

        out.sport_received = sport is not None
        out.lowstate_received = low is not None
        out.sport_age_s = float(self.compute_age_s(self.latest_sport_rx_time))
        out.lowstate_age_s = float(self.compute_age_s(self.latest_lowstate_rx_time))

        if sport is not None:
            # SportModeState gives already RPY in radians.
            out.roll = float(sport.imu_state.rpy[0])
            out.pitch = float(sport.imu_state.rpy[1])
            out.yaw = float(sport.imu_state.rpy[2])

            out.roll_rate = float(sport.imu_state.gyroscope[0])
            out.pitch_rate = float(sport.imu_state.gyroscope[1])
            out.yaw_rate = float(sport.imu_state.gyroscope[2])

            out.ax = float(sport.imu_state.accelerometer[0])
            out.ay = float(sport.imu_state.accelerometer[1])
            out.az = float(sport.imu_state.accelerometer[2])

            out.vx = float(sport.velocity[0])
            out.vy = float(sport.velocity[1])
            out.vz = float(sport.velocity[2])

            out.body_height = float(sport.body_height)
            out.mode = int(sport.mode)
            out.gait_type = int(sport.gait_type)
            out.foot_raise_height = float(sport.foot_raise_height)
            out.sport_error_code = int(sport.error_code)

            out.foot_position_body = [float(x) for x in sport.foot_position_body]
            out.foot_speed_body = [float(x) for x in sport.foot_speed_body]

        if low is not None:
            # Foot forces from LowState are meaningful. SportModeState had zeros in your test.
            forces = [int(x) for x in low.foot_force]
            out.foot_force = forces
            out.foot_contact = [
                abs(f) >= self.contact_force_threshold for f in forces
            ]

            # First 12 motor states are the 12 Go2 leg joints.
            joint_q = []
            joint_dq = []
            joint_tau = []

            for i in range(12):
                joint_q.append(float(low.motor_state[i].q))
                joint_dq.append(float(low.motor_state[i].dq))
                joint_tau.append(float(low.motor_state[i].tau_est))

            out.joint_position = joint_q
            out.joint_velocity = joint_dq
            out.joint_tau_est = joint_tau

        self.pub.publish(out)

def main(args=None):
    rclpy.init(args=args)
    node = Go2StateBridge()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()