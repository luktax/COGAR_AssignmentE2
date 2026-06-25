#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "go2_stair_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__go2_stair_interfaces__msg__Go2SafetyState() -> *const std::ffi::c_void;
}

#[link(name = "go2_stair_interfaces__rosidl_generator_c")]
extern "C" {
    fn go2_stair_interfaces__msg__Go2SafetyState__init(msg: *mut Go2SafetyState) -> bool;
    fn go2_stair_interfaces__msg__Go2SafetyState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Go2SafetyState>, size: usize) -> bool;
    fn go2_stair_interfaces__msg__Go2SafetyState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Go2SafetyState>);
    fn go2_stair_interfaces__msg__Go2SafetyState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Go2SafetyState>, out_seq: *mut rosidl_runtime_rs::Sequence<Go2SafetyState>) -> bool;
}

// Corresponds to go2_stair_interfaces__msg__Go2SafetyState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Go2SafetyState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !go2_stair_interfaces__msg__Go2SafetyState__init(&mut msg as *mut _) {
        panic!("Call to go2_stair_interfaces__msg__Go2SafetyState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Go2SafetyState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { go2_stair_interfaces__msg__Go2SafetyState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { go2_stair_interfaces__msg__Go2SafetyState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { go2_stair_interfaces__msg__Go2SafetyState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Go2SafetyState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Go2SafetyState where Self: Sized {
  const TYPE_NAME: &'static str = "go2_stair_interfaces/msg/Go2SafetyState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__go2_stair_interfaces__msg__Go2SafetyState() }
  }
}


#[link(name = "go2_stair_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__go2_stair_interfaces__msg__Go2SafetyStatus() -> *const std::ffi::c_void;
}

#[link(name = "go2_stair_interfaces__rosidl_generator_c")]
extern "C" {
    fn go2_stair_interfaces__msg__Go2SafetyStatus__init(msg: *mut Go2SafetyStatus) -> bool;
    fn go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Go2SafetyStatus>, size: usize) -> bool;
    fn go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Go2SafetyStatus>);
    fn go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Go2SafetyStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<Go2SafetyStatus>) -> bool;
}

// Corresponds to go2_stair_interfaces__msg__Go2SafetyStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Go2SafetyStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_rate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_rate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_count: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_contact: [bool; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub state_timeout: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attitude_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub attitude_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rate_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rate_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_warning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_stop: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sport_age_s: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lowstate_age_s: f32,

}

impl Go2SafetyStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SAFE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WARNING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOP_REQUIRED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RECOVERY_REQUIRED: u8 = 3;

}


impl Default for Go2SafetyStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !go2_stair_interfaces__msg__Go2SafetyStatus__init(&mut msg as *mut _) {
        panic!("Call to go2_stair_interfaces__msg__Go2SafetyStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Go2SafetyStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Go2SafetyStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Go2SafetyStatus where Self: Sized {
  const TYPE_NAME: &'static str = "go2_stair_interfaces/msg/Go2SafetyStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__go2_stair_interfaces__msg__Go2SafetyStatus() }
  }
}


