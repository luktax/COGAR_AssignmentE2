#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to go2_stair_interfaces__msg__Go2SafetyState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Go2SafetyState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Orientation from SportModeState IMU
    pub roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,

    /// Angular velocity from IMU gyroscope
    pub roll_rate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_rate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate: f32,

    /// Linear acceleration from IMU
    pub ax: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ay: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub az: f32,

    /// Body velocity from SportModeState
    pub vx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vz: f32,

    /// High-level robot state
    pub body_height: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gait_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_raise_height: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sport_error_code: u32,

    /// Foot contacts from LowState
    pub foot_force: [i16; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_contact: [bool; 4],

    /// Foot kinematics from SportModeState
    pub foot_position_body: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_speed_body: [f32; 12],

    /// Joint state from LowState, first 12 motors only
    pub joint_position: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_velocity: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_tau_est: [f32; 12],

    /// Battery / power from LowState
    pub battery_soc: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_v: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power_a: f32,

    /// Diagnostics
    pub sport_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lowstate_received: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sport_age_s: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lowstate_age_s: f32,

}



impl Default for Go2SafetyState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Go2SafetyState::default())
  }
}

impl rosidl_runtime_rs::Message for Go2SafetyState {
  type RmwMsg = super::msg::rmw::Go2SafetyState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        roll_rate: msg.roll_rate,
        pitch_rate: msg.pitch_rate,
        yaw_rate: msg.yaw_rate,
        ax: msg.ax,
        ay: msg.ay,
        az: msg.az,
        vx: msg.vx,
        vy: msg.vy,
        vz: msg.vz,
        body_height: msg.body_height,
        mode: msg.mode,
        gait_type: msg.gait_type,
        foot_raise_height: msg.foot_raise_height,
        sport_error_code: msg.sport_error_code,
        foot_force: msg.foot_force,
        foot_contact: msg.foot_contact,
        foot_position_body: msg.foot_position_body,
        foot_speed_body: msg.foot_speed_body,
        joint_position: msg.joint_position,
        joint_velocity: msg.joint_velocity,
        joint_tau_est: msg.joint_tau_est,
        battery_soc: msg.battery_soc,
        power_v: msg.power_v,
        power_a: msg.power_a,
        sport_received: msg.sport_received,
        lowstate_received: msg.lowstate_received,
        sport_age_s: msg.sport_age_s,
        lowstate_age_s: msg.lowstate_age_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      roll_rate: msg.roll_rate,
      pitch_rate: msg.pitch_rate,
      yaw_rate: msg.yaw_rate,
      ax: msg.ax,
      ay: msg.ay,
      az: msg.az,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      body_height: msg.body_height,
      mode: msg.mode,
      gait_type: msg.gait_type,
      foot_raise_height: msg.foot_raise_height,
      sport_error_code: msg.sport_error_code,
        foot_force: msg.foot_force,
        foot_contact: msg.foot_contact,
        foot_position_body: msg.foot_position_body,
        foot_speed_body: msg.foot_speed_body,
        joint_position: msg.joint_position,
        joint_velocity: msg.joint_velocity,
        joint_tau_est: msg.joint_tau_est,
      battery_soc: msg.battery_soc,
      power_v: msg.power_v,
      power_a: msg.power_a,
      sport_received: msg.sport_received,
      lowstate_received: msg.lowstate_received,
      sport_age_s: msg.sport_age_s,
      lowstate_age_s: msg.lowstate_age_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      roll_rate: msg.roll_rate,
      pitch_rate: msg.pitch_rate,
      yaw_rate: msg.yaw_rate,
      ax: msg.ax,
      ay: msg.ay,
      az: msg.az,
      vx: msg.vx,
      vy: msg.vy,
      vz: msg.vz,
      body_height: msg.body_height,
      mode: msg.mode,
      gait_type: msg.gait_type,
      foot_raise_height: msg.foot_raise_height,
      sport_error_code: msg.sport_error_code,
      foot_force: msg.foot_force,
      foot_contact: msg.foot_contact,
      foot_position_body: msg.foot_position_body,
      foot_speed_body: msg.foot_speed_body,
      joint_position: msg.joint_position,
      joint_velocity: msg.joint_velocity,
      joint_tau_est: msg.joint_tau_est,
      battery_soc: msg.battery_soc,
      power_v: msg.power_v,
      power_a: msg.power_a,
      sport_received: msg.sport_received,
      lowstate_received: msg.lowstate_received,
      sport_age_s: msg.sport_age_s,
      lowstate_age_s: msg.lowstate_age_s,
    }
  }
}


