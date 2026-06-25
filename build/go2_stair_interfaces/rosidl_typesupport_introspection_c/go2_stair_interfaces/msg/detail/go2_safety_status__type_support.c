// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "go2_stair_interfaces/msg/detail/go2_safety_status__rosidl_typesupport_introspection_c.h"
#include "go2_stair_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "go2_stair_interfaces/msg/detail/go2_safety_status__functions.h"
#include "go2_stair_interfaces/msg/detail/go2_safety_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  go2_stair_interfaces__msg__Go2SafetyStatus__init(message_memory);
}

void go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_fini_function(void * message_memory)
{
  go2_stair_interfaces__msg__Go2SafetyStatus__fini(message_memory);
}

size_t go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__size_function__Go2SafetyStatus__foot_contact(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyStatus__foot_contact(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__get_function__Go2SafetyStatus__foot_contact(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyStatus__foot_contact(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyStatus__foot_contact(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__assign_function__Go2SafetyStatus__foot_contact(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__get_function__Go2SafetyStatus__foot_contact(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_member_array[18] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, roll_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, pitch_error),  // bytes offset in struct
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
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, roll_rate),  // bytes offset in struct
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
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, pitch_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, contact_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, foot_contact),  // bytes offset in struct
    NULL,  // default value
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__size_function__Go2SafetyStatus__foot_contact,  // size() function pointer
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__get_const_function__Go2SafetyStatus__foot_contact,  // get_const(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__get_function__Go2SafetyStatus__foot_contact,  // get(index) function pointer
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__fetch_function__Go2SafetyStatus__foot_contact,  // fetch(index, &value) function pointer
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__assign_function__Go2SafetyStatus__foot_contact,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, state_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attitude_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, attitude_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attitude_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, attitude_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rate_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, rate_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rate_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, rate_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_warning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, contact_warning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, contact_stop),  // bytes offset in struct
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
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, sport_age_s),  // bytes offset in struct
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
    offsetof(go2_stair_interfaces__msg__Go2SafetyStatus, lowstate_age_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_members = {
  "go2_stair_interfaces__msg",  // message namespace
  "Go2SafetyStatus",  // message name
  18,  // number of fields
  sizeof(go2_stair_interfaces__msg__Go2SafetyStatus),
  go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_member_array,  // message members
  go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_type_support_handle = {
  0,
  &go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_go2_stair_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, go2_stair_interfaces, msg, Go2SafetyStatus)() {
  go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_type_support_handle.typesupport_identifier) {
    go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &go2_stair_interfaces__msg__Go2SafetyStatus__rosidl_typesupport_introspection_c__Go2SafetyStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
