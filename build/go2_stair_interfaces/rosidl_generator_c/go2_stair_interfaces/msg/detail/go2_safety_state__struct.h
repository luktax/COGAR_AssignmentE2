// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from go2_stair_interfaces:msg/Go2SafetyState.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__STRUCT_H_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Go2SafetyState in the package go2_stair_interfaces.
typedef struct go2_stair_interfaces__msg__Go2SafetyState
{
  std_msgs__msg__Header header;
  /// Orientation from SportModeState IMU
  float roll;
  float pitch;
  float yaw;
  /// Angular velocity from IMU gyroscope
  float roll_rate;
  float pitch_rate;
  float yaw_rate;
  /// Linear acceleration from IMU
  float ax;
  float ay;
  float az;
  /// Body velocity from SportModeState
  float vx;
  float vy;
  float vz;
  /// High-level robot state
  float body_height;
  uint8_t mode;
  uint8_t gait_type;
  float foot_raise_height;
  uint32_t sport_error_code;
  /// Foot contacts from LowState
  int16_t foot_force[4];
  bool foot_contact[4];
  /// Foot kinematics from SportModeState
  float foot_position_body[12];
  float foot_speed_body[12];
  /// Joint state from LowState, first 12 motors only
  float joint_position[12];
  float joint_velocity[12];
  float joint_tau_est[12];
  /// Battery / power from LowState
  uint8_t battery_soc;
  float power_v;
  float power_a;
  /// Diagnostics
  bool sport_received;
  bool lowstate_received;
  float sport_age_s;
  float lowstate_age_s;
} go2_stair_interfaces__msg__Go2SafetyState;

// Struct for a sequence of go2_stair_interfaces__msg__Go2SafetyState.
typedef struct go2_stair_interfaces__msg__Go2SafetyState__Sequence
{
  go2_stair_interfaces__msg__Go2SafetyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} go2_stair_interfaces__msg__Go2SafetyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATE__STRUCT_H_
