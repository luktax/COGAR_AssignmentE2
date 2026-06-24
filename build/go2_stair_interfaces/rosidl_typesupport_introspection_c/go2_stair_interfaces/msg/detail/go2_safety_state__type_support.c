// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from go2_stair_interfaces:msg/Go2SafetyState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "go2_stair_interfaces/msg/detail/go2_safety_state__rosidl_typesupport_introspection_c.h"
#include "go2_stair_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "go2_stair_interfaces/msg/detail/go2_safety_state__functions.h"
#include "go2_stair_interfaces/msg/detail/go2_safety_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  go2_stair_interfaces__msg__Go2SafetyState__init(message_memory);
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_fini_function(void * message_memory)
{
  go2_stair_interfaces__msg__Go2SafetyState__fini(message_memory);
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_force(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_force(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_force(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_force(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_force(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_contact(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_contact(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_contact(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_contact(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_contact(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_position_body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_position_body(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_position_body(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_position_body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_position_body(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_position_body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_position_body(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_speed_body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_speed_body(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_speed_body(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_speed_body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_speed_body(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_speed_body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_speed_body(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__joint_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__joint_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__joint_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__joint_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__joint_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__joint_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__joint_tau_est(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_tau_est(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_tau_est(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__joint_tau_est(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_tau_est(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__joint_tau_est(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_tau_est(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_member_array[29] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, roll_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, pitch_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, ax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, ay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "az",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, az),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, vx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, vy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, vz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, body_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gait_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, gait_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_raise_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, foot_raise_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sport_error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, sport_error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, foot_force),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_force,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_force,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_force,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_force,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_force,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_contact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, foot_contact),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_contact,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_contact,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_contact,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_contact,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_contact,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_position_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, foot_position_body),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_position_body,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_position_body,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_position_body,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_position_body,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_position_body,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_speed_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, foot_speed_body),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__foot_speed_body,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__foot_speed_body,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__foot_speed_body,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__foot_speed_body,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__foot_speed_body,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, joint_position),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__joint_position,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_position,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_position,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__joint_position,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__joint_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, joint_velocity),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__joint_velocity,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_velocity,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_velocity,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__joint_velocity,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__joint_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_tau_est",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, joint_tau_est),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__size_function__Go2SafetyState__joint_tau_est,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyState__joint_tau_est,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__get_function__Go2SafetyState__joint_tau_est,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyState__joint_tau_est,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__assign_function__Go2SafetyState__joint_tau_est,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sport_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, sport_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lowstate_received",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, lowstate_received),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sport_age_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, sport_age_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lowstate_age_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyState, lowstate_age_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_members = {
  "go2_stair_interfaces__msg",  // message namespace
  "Go2SafetyState",  // message name
  29,  // number of fields
  sizeof(go2_stair_interfaces__msg__Go2SafetyState),
  go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_member_array,  // message members
  go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_init_function,  // function to initialize message memory (memory has to be allocated)
  go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_type_support_handle = {
  0,
  &go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_go2_stair_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, go2_stair_interfaces, msg, Go2SafetyState)() {
  go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_type_support_handle.typesupport_identifier) {
    go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &go2_stair_interfaces__msg__Go2SafetyState__rosidl_typesupport_introspection_c__Go2SafetyState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
