// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice
#include "go2_stair_interfaces/msg/detail/go2_safety_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"

bool
go2_stair_interfaces__msg__Go2SafetyStatus__init(go2_stair_interfaces__msg__Go2SafetyStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    go2_stair_interfaces__msg__Go2SafetyStatus__fini(msg);
    return false;
  }
  // status
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    go2_stair_interfaces__msg__Go2SafetyStatus__fini(msg);
    return false;
  }
  // roll_error
  // pitch_error
  // roll_rate
  // pitch_rate
  // contact_count
  // foot_contact
  // state_timeout
  // attitude_warning
  // attitude_stop
  // rate_warning
  // rate_stop
  // contact_warning
  // contact_stop
  // sport_age_s
  // lowstate_age_s
  return true;
}

void
go2_stair_interfaces__msg__Go2SafetyStatus__fini(go2_stair_interfaces__msg__Go2SafetyStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
  // roll_error
  // pitch_error
  // roll_rate
  // pitch_rate
  // contact_count
  // foot_contact
  // state_timeout
  // attitude_warning
  // attitude_stop
  // rate_warning
  // rate_stop
  // contact_warning
  // contact_stop
  // sport_age_s
  // lowstate_age_s
}

bool
go2_stair_interfaces__msg__Go2SafetyStatus__are_equal(const go2_stair_interfaces__msg__Go2SafetyStatus * lhs, const go2_stair_interfaces__msg__Go2SafetyStatus * rhs)
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
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  // roll_error
  if (lhs->roll_error != rhs->roll_error) {
    return false;
  }
  // pitch_error
  if (lhs->pitch_error != rhs->pitch_error) {
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
  // contact_count
  if (lhs->contact_count != rhs->contact_count) {
    return false;
  }
  // foot_contact
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->foot_contact[i] != rhs->foot_contact[i]) {
      return false;
    }
  }
  // state_timeout
  if (lhs->state_timeout != rhs->state_timeout) {
    return false;
  }
  // attitude_warning
  if (lhs->attitude_warning != rhs->attitude_warning) {
    return false;
  }
  // attitude_stop
  if (lhs->attitude_stop != rhs->attitude_stop) {
    return false;
  }
  // rate_warning
  if (lhs->rate_warning != rhs->rate_warning) {
    return false;
  }
  // rate_stop
  if (lhs->rate_stop != rhs->rate_stop) {
    return false;
  }
  // contact_warning
  if (lhs->contact_warning != rhs->contact_warning) {
    return false;
  }
  // contact_stop
  if (lhs->contact_stop != rhs->contact_stop) {
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
go2_stair_interfaces__msg__Go2SafetyStatus__copy(
  const go2_stair_interfaces__msg__Go2SafetyStatus * input,
  go2_stair_interfaces__msg__Go2SafetyStatus * output)
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
  // status
  output->status = input->status;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  // roll_error
  output->roll_error = input->roll_error;
  // pitch_error
  output->pitch_error = input->pitch_error;
  // roll_rate
  output->roll_rate = input->roll_rate;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // contact_count
  output->contact_count = input->contact_count;
  // foot_contact
  for (size_t i = 0; i < 4; ++i) {
    output->foot_contact[i] = input->foot_contact[i];
  }
  // state_timeout
  output->state_timeout = input->state_timeout;
  // attitude_warning
  output->attitude_warning = input->attitude_warning;
  // attitude_stop
  output->attitude_stop = input->attitude_stop;
  // rate_warning
  output->rate_warning = input->rate_warning;
  // rate_stop
  output->rate_stop = input->rate_stop;
  // contact_warning
  output->contact_warning = input->contact_warning;
  // contact_stop
  output->contact_stop = input->contact_stop;
  // sport_age_s
  output->sport_age_s = input->sport_age_s;
  // lowstate_age_s
  output->lowstate_age_s = input->lowstate_age_s;
  return true;
}

go2_stair_interfaces__msg__Go2SafetyStatus *
go2_stair_interfaces__msg__Go2SafetyStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  go2_stair_interfaces__msg__Go2SafetyStatus * msg = (go2_stair_interfaces__msg__Go2SafetyStatus *)allocator.allocate(sizeof(go2_stair_interfaces__msg__Go2SafetyStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(go2_stair_interfaces__msg__Go2SafetyStatus));
  bool success = go2_stair_interfaces__msg__Go2SafetyStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
go2_stair_interfaces__msg__Go2SafetyStatus__destroy(go2_stair_interfaces__msg__Go2SafetyStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    go2_stair_interfaces__msg__Go2SafetyStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__init(go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  go2_stair_interfaces__msg__Go2SafetyStatus * data = NULL;

  if (size) {
    data = (go2_stair_interfaces__msg__Go2SafetyStatus *)allocator.zero_allocate(size, sizeof(go2_stair_interfaces__msg__Go2SafetyStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = go2_stair_interfaces__msg__Go2SafetyStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        go2_stair_interfaces__msg__Go2SafetyStatus__fini(&data[i - 1]);
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
go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__fini(go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * array)
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
      go2_stair_interfaces__msg__Go2SafetyStatus__fini(&array->data[i]);
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

go2_stair_interfaces__msg__Go2SafetyStatus__Sequence *
go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * array = (go2_stair_interfaces__msg__Go2SafetyStatus__Sequence *)allocator.allocate(sizeof(go2_stair_interfaces__msg__Go2SafetyStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__destroy(go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__are_equal(const go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * lhs, const go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!go2_stair_interfaces__msg__Go2SafetyStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
go2_stair_interfaces__msg__Go2SafetyStatus__Sequence__copy(
  const go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * input,
  go2_stair_interfaces__msg__Go2SafetyStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(go2_stair_interfaces__msg__Go2SafetyStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    go2_stair_interfaces__msg__Go2SafetyStatus * data =
      (go2_stair_interfaces__msg__Go2SafetyStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!go2_stair_interfaces__msg__Go2SafetyStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          go2_stair_interfaces__msg__Go2SafetyStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!go2_stair_interfaces__msg__Go2SafetyStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
