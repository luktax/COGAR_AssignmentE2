// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from go2_stair_interfaces:msg/Go2SafetyState.idl
// generated code does not contain a copyright notice
#include "go2_stair_interfaces/msg/detail/go2_safety_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
go2_stair_interfaces__msg__Go2SafetyState__init(go2_stair_interfaces__msg__Go2SafetyState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    go2_stair_interfaces__msg__Go2SafetyState__fini(msg);
    return false;
  }
  // roll
  // pitch
  // yaw
  // roll_rate
  // pitch_rate
  // yaw_rate
  // ax
  // ay
  // az
  // vx
  // vy
  // vz
  // body_height
  // mode
  // gait_type
  // foot_raise_height
  // sport_error_code
  // foot_force
  // foot_contact
  // foot_position_body
  // foot_speed_body
  // joint_position
  // joint_velocity
  // joint_tau_est
  // battery_soc
  // power_v
  // power_a
  // sport_received
  // lowstate_received
  // sport_age_s
  // lowstate_age_s
  return true;
}

void
go2_stair_interfaces__msg__Go2SafetyState__fini(go2_stair_interfaces__msg__Go2SafetyState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // roll
  // pitch
  // yaw
  // roll_rate
  // pitch_rate
  // yaw_rate
  // ax
  // ay
  // az
  // vx
  // vy
  // vz
  // body_height
  // mode
  // gait_type
  // foot_raise_height
  // sport_error_code
  // foot_force
  // foot_contact
  // foot_position_body
  // foot_speed_body
  // joint_position
  // joint_velocity
  // joint_tau_est
  // battery_soc
  // power_v
  // power_a
  // sport_received
  // lowstate_received
  // sport_age_s
  // lowstate_age_s
}

bool
go2_stair_interfaces__msg__Go2SafetyState__are_equal(const go2_stair_interfaces__msg__Go2SafetyState * lhs, const go2_stair_interfaces__msg__Go2SafetyState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // roll_rate
  if (lhs->roll_rate != rhs->roll_rate) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // body_height
  if (lhs->body_height != rhs->body_height) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // gait_type
  if (lhs->gait_type != rhs->gait_type) {
    return false;
  }
  // foot_raise_height
  if (lhs->foot_raise_height != rhs->foot_raise_height) {
    return false;
  }
  // sport_error_code
  if (lhs->sport_error_code != rhs->sport_error_code) {
    return false;
  }
  // foot_force
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->foot_force[i] != rhs->foot_force[i]) {
      return false;
    }
  }
  // foot_contact
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->foot_contact[i] != rhs->foot_contact[i]) {
      return false;
    }
  }
  // foot_position_body
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->foot_position_body[i] != rhs->foot_position_body[i]) {
      return false;
    }
  }
  // foot_speed_body
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->foot_speed_body[i] != rhs->foot_speed_body[i]) {
      return false;
    }
  }
  // joint_position
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->joint_position[i] != rhs->joint_position[i]) {
      return false;
    }
  }
  // joint_velocity
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->joint_velocity[i] != rhs->joint_velocity[i]) {
      return false;
    }
  }
  // joint_tau_est
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->joint_tau_est[i] != rhs->joint_tau_est[i]) {
      return false;
    }
  }
  // battery_soc
  if (lhs->battery_soc != rhs->battery_soc) {
    return false;
  }
  // power_v
  if (lhs->power_v != rhs->power_v) {
    return false;
  }
  // power_a
  if (lhs->power_a != rhs->power_a) {
    return false;
  }
  // sport_received
  if (lhs->sport_received != rhs->sport_received) {
    return false;
  }
  // lowstate_received
  if (lhs->lowstate_received != rhs->lowstate_received) {
    return false;
  }
  // sport_age_s
  if (lhs->sport_age_s != rhs->sport_age_s) {
    return false;
  }
  // lowstate_age_s
  if (lhs->lowstate_age_s != rhs->lowstate_age_s) {
    return false;
  }
  return true;
}

bool
go2_stair_interfaces__msg__Go2SafetyState__copy(
  const go2_stair_interfaces__msg__Go2SafetyState * input,
  go2_stair_interfaces__msg__Go2SafetyState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // roll_rate
  output->roll_rate = input->roll_rate;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // body_height
  output->body_height = input->body_height;
  // mode
  output->mode = input->mode;
  // gait_type
  output->gait_type = input->gait_type;
  // foot_raise_height
  output->foot_raise_height = input->foot_raise_height;
  // sport_error_code
  output->sport_error_code = input->sport_error_code;
  // foot_force
  for (size_t i = 0; i < 4; ++i) {
    output->foot_force[i] = input->foot_force[i];
  }
  // foot_contact
  for (size_t i = 0; i < 4; ++i) {
    output->foot_contact[i] = input->foot_contact[i];
  }
  // foot_position_body
  for (size_t i = 0; i < 12; ++i) {
    output->foot_position_body[i] = input->foot_position_body[i];
  }
  // foot_speed_body
  for (size_t i = 0; i < 12; ++i) {
    output->foot_speed_body[i] = input->foot_speed_body[i];
  }
  // joint_position
  for (size_t i = 0; i < 12; ++i) {
    output->joint_position[i] = input->joint_position[i];
  }
  // joint_velocity
  for (size_t i = 0; i < 12; ++i) {
    output->joint_velocity[i] = input->joint_velocity[i];
  }
  // joint_tau_est
  for (size_t i = 0; i < 12; ++i) {
    output->joint_tau_est[i] = input->joint_tau_est[i];
  }
  // battery_soc
  output->battery_soc = input->battery_soc;
  // power_v
  output->power_v = input->power_v;
  // power_a
  output->power_a = input->power_a;
  // sport_received
  output->sport_received = input->sport_received;
  // lowstate_received
  output->lowstate_received = input->lowstate_received;
  // sport_age_s
  output->sport_age_s = input->sport_age_s;
  // lowstate_age_s
  output->lowstate_age_s = input->lowstate_age_s;
  return true;
}

go2_stair_interfaces__msg__Go2SafetyState *
go2_stair_interfaces__msg__Go2SafetyState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  go2_stair_interfaces__msg__Go2SafetyState * msg = (go2_stair_interfaces__msg__Go2SafetyState *)allocator.allocate(sizeof(go2_stair_interfaces__msg__Go2SafetyState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(go2_stair_interfaces__msg__Go2SafetyState));
  bool success = go2_stair_interfaces__msg__Go2SafetyState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
go2_stair_interfaces__msg__Go2SafetyState__destroy(go2_stair_interfaces__msg__Go2SafetyState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    go2_stair_interfaces__msg__Go2SafetyState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
go2_stair_interfaces__msg__Go2SafetyState__Sequence__init(go2_stair_interfaces__msg__Go2SafetyState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  go2_stair_interfaces__msg__Go2SafetyState * data = NULL;

  if (size) {
    data = (go2_stair_interfaces__msg__Go2SafetyState *)allocator.zero_allocate(size, sizeof(go2_stair_interfaces__msg__Go2SafetyState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = go2_stair_interfaces__msg__Go2SafetyState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        go2_stair_interfaces__msg__Go2SafetyState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
go2_stair_interfaces__msg__Go2SafetyState__Sequence__fini(go2_stair_interfaces__msg__Go2SafetyState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      go2_stair_interfaces__msg__Go2SafetyState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

go2_stair_interfaces__msg__Go2SafetyState__Sequence *
go2_stair_interfaces__msg__Go2SafetyState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  go2_stair_interfaces__msg__Go2SafetyState__Sequence * array = (go2_stair_interfaces__msg__Go2SafetyState__Sequence *)allocator.allocate(sizeof(go2_stair_interfaces__msg__Go2SafetyState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = go2_stair_interfaces__msg__Go2SafetyState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
go2_stair_interfaces__msg__Go2SafetyState__Sequence__destroy(go2_stair_interfaces__msg__Go2SafetyState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    go2_stair_interfaces__msg__Go2SafetyState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
go2_stair_interfaces__msg__Go2SafetyState__Sequence__are_equal(const go2_stair_interfaces__msg__Go2SafetyState__Sequence * lhs, const go2_stair_interfaces__msg__Go2SafetyState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!go2_stair_interfaces__msg__Go2SafetyState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
go2_stair_interfaces__msg__Go2SafetyState__Sequence__copy(
  const go2_stair_interfaces__msg__Go2SafetyState__Sequence * input,
  go2_stair_interfaces__msg__Go2SafetyState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(go2_stair_interfaces__msg__Go2SafetyState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    go2_stair_interfaces__msg__Go2SafetyState * data =
      (go2_stair_interfaces__msg__Go2SafetyState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!go2_stair_interfaces__msg__Go2SafetyState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          go2_stair_interfaces__msg__Go2SafetyState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!go2_stair_interfaces__msg__Go2SafetyState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
