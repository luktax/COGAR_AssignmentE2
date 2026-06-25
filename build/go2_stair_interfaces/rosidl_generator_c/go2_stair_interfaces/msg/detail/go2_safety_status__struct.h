// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice

#ifndef GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__STRUCT_H_
#define GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SAFE'.
enum
{
  go2_stair_interfaces__msg__Go2SafetyStatus__SAFE = 0
};

/// Constant 'WARNING'.
enum
{
  go2_stair_interfaces__msg__Go2SafetyStatus__WARNING = 1
};

/// Constant 'STOP_REQUIRED'.
enum
{
  go2_stair_interfaces__msg__Go2SafetyStatus__STOP_REQUIRED = 2
};

/// Constant 'RECOVERY_REQUIRED'.
enum
{
  go2_stair_interfaces__msg__Go2SafetyStatus__RECOVERY_REQUIRED = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Go2SafetyStatus in the package go2_stair_interfaces.
typedef struct go2_stair_interfaces__msg__Go2SafetyStatus
{
  std_msgs__msg__Header header;
  uint8_t status;
  rosidl_runtime_c__String reason;
  float roll_error;
  float pitch_error;
  float roll_rate;
  float pitch_rate;
  uint8_t contact_count;
  bool foot_contact[4];
  bool state_timeout;
  bool attitude_warning;
  bool attitude_stop;
  bool rate_warning;
  bool rate_stop;
  bool contact_warning;
  bool contact_stop;
  float sport_age_s;
  float lowstate_age_s;
} go2_stair_interfaces__msg__Go2SafetyStatus;

// Struct for a sequence of go2_stair_interfaces__msg__Go2SafetyStatus.
typedef struct go2_stair_interfaces__msg__Go2SafetyStatus__Sequence
{
  go2_stair_interfaces__msg__Go2SafetyStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} go2_stair_interfaces__msg__Go2SafetyStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GO2_STAIR_INTERFACES__MSG__DETAIL__GO2_SAFETY_STATUS__STRUCT_H_
