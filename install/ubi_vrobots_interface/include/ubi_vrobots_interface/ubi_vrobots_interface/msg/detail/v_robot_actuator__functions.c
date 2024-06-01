// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice
#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pwm`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ubi_vrobots_interface__msg__VRobotActuator__init(ubi_vrobots_interface__msg__VRobotActuator * msg)
{
  if (!msg) {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->pwm, 0)) {
    ubi_vrobots_interface__msg__VRobotActuator__fini(msg);
    return false;
  }
  // force
  return true;
}

void
ubi_vrobots_interface__msg__VRobotActuator__fini(ubi_vrobots_interface__msg__VRobotActuator * msg)
{
  if (!msg) {
    return;
  }
  // pwm
  rosidl_runtime_c__int32__Sequence__fini(&msg->pwm);
  // force
}

bool
ubi_vrobots_interface__msg__VRobotActuator__are_equal(const ubi_vrobots_interface__msg__VRobotActuator * lhs, const ubi_vrobots_interface__msg__VRobotActuator * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->pwm), &(rhs->pwm)))
  {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  return true;
}

bool
ubi_vrobots_interface__msg__VRobotActuator__copy(
  const ubi_vrobots_interface__msg__VRobotActuator * input,
  ubi_vrobots_interface__msg__VRobotActuator * output)
{
  if (!input || !output) {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->pwm), &(output->pwm)))
  {
    return false;
  }
  // force
  output->force = input->force;
  return true;
}

ubi_vrobots_interface__msg__VRobotActuator *
ubi_vrobots_interface__msg__VRobotActuator__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ubi_vrobots_interface__msg__VRobotActuator * msg = (ubi_vrobots_interface__msg__VRobotActuator *)allocator.allocate(sizeof(ubi_vrobots_interface__msg__VRobotActuator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ubi_vrobots_interface__msg__VRobotActuator));
  bool success = ubi_vrobots_interface__msg__VRobotActuator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ubi_vrobots_interface__msg__VRobotActuator__destroy(ubi_vrobots_interface__msg__VRobotActuator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ubi_vrobots_interface__msg__VRobotActuator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ubi_vrobots_interface__msg__VRobotActuator__Sequence__init(ubi_vrobots_interface__msg__VRobotActuator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ubi_vrobots_interface__msg__VRobotActuator * data = NULL;

  if (size) {
    data = (ubi_vrobots_interface__msg__VRobotActuator *)allocator.zero_allocate(size, sizeof(ubi_vrobots_interface__msg__VRobotActuator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ubi_vrobots_interface__msg__VRobotActuator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ubi_vrobots_interface__msg__VRobotActuator__fini(&data[i - 1]);
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
ubi_vrobots_interface__msg__VRobotActuator__Sequence__fini(ubi_vrobots_interface__msg__VRobotActuator__Sequence * array)
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
      ubi_vrobots_interface__msg__VRobotActuator__fini(&array->data[i]);
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

ubi_vrobots_interface__msg__VRobotActuator__Sequence *
ubi_vrobots_interface__msg__VRobotActuator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ubi_vrobots_interface__msg__VRobotActuator__Sequence * array = (ubi_vrobots_interface__msg__VRobotActuator__Sequence *)allocator.allocate(sizeof(ubi_vrobots_interface__msg__VRobotActuator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ubi_vrobots_interface__msg__VRobotActuator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ubi_vrobots_interface__msg__VRobotActuator__Sequence__destroy(ubi_vrobots_interface__msg__VRobotActuator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ubi_vrobots_interface__msg__VRobotActuator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ubi_vrobots_interface__msg__VRobotActuator__Sequence__are_equal(const ubi_vrobots_interface__msg__VRobotActuator__Sequence * lhs, const ubi_vrobots_interface__msg__VRobotActuator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ubi_vrobots_interface__msg__VRobotActuator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ubi_vrobots_interface__msg__VRobotActuator__Sequence__copy(
  const ubi_vrobots_interface__msg__VRobotActuator__Sequence * input,
  ubi_vrobots_interface__msg__VRobotActuator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ubi_vrobots_interface__msg__VRobotActuator);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ubi_vrobots_interface__msg__VRobotActuator * data =
      (ubi_vrobots_interface__msg__VRobotActuator *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ubi_vrobots_interface__msg__VRobotActuator__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ubi_vrobots_interface__msg__VRobotActuator__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ubi_vrobots_interface__msg__VRobotActuator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
