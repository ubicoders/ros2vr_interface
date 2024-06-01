// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice
#include "ubi_vrobots_interface/msg/detail/v_robot_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `lin_acc`
// Member `lin_vel`
// Member `lin_pos`
// Member `ang_acc`
// Member `ang_vel`
// Member `euler`
// Member `euler_dot`
// Member `force`
// Member `torque`
// Member `accelerometer`
// Member `gyroscope`
// Member `magnetometer`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `pwm`
// Member `actuators`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ubi_vrobots_interface__msg__VRobotStates__init(ubi_vrobots_interface__msg__VRobotStates * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // id
  // timestamp
  // lin_acc
  if (!geometry_msgs__msg__Vector3__init(&msg->lin_acc)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // lin_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->lin_vel)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // lin_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->lin_pos)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // ang_acc
  if (!geometry_msgs__msg__Vector3__init(&msg->ang_acc)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // ang_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->ang_vel)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // euler
  if (!geometry_msgs__msg__Vector3__init(&msg->euler)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // euler_dot
  if (!geometry_msgs__msg__Vector3__init(&msg->euler_dot)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pwm, 0)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // actuators
  if (!rosidl_runtime_c__double__Sequence__init(&msg->actuators, 0)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__init(&msg->force)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__init(&msg->torque)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // accelerometer
  if (!geometry_msgs__msg__Vector3__init(&msg->accelerometer)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // gyroscope
  if (!geometry_msgs__msg__Vector3__init(&msg->gyroscope)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  // magnetometer
  if (!geometry_msgs__msg__Vector3__init(&msg->magnetometer)) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
    return false;
  }
  return true;
}

void
ubi_vrobots_interface__msg__VRobotStates__fini(ubi_vrobots_interface__msg__VRobotStates * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  // timestamp
  // lin_acc
  geometry_msgs__msg__Vector3__fini(&msg->lin_acc);
  // lin_vel
  geometry_msgs__msg__Vector3__fini(&msg->lin_vel);
  // lin_pos
  geometry_msgs__msg__Vector3__fini(&msg->lin_pos);
  // ang_acc
  geometry_msgs__msg__Vector3__fini(&msg->ang_acc);
  // ang_vel
  geometry_msgs__msg__Vector3__fini(&msg->ang_vel);
  // euler
  geometry_msgs__msg__Vector3__fini(&msg->euler);
  // euler_dot
  geometry_msgs__msg__Vector3__fini(&msg->euler_dot);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // pwm
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pwm);
  // actuators
  rosidl_runtime_c__double__Sequence__fini(&msg->actuators);
  // force
  geometry_msgs__msg__Vector3__fini(&msg->force);
  // torque
  geometry_msgs__msg__Vector3__fini(&msg->torque);
  // accelerometer
  geometry_msgs__msg__Vector3__fini(&msg->accelerometer);
  // gyroscope
  geometry_msgs__msg__Vector3__fini(&msg->gyroscope);
  // magnetometer
  geometry_msgs__msg__Vector3__fini(&msg->magnetometer);
}

bool
ubi_vrobots_interface__msg__VRobotStates__are_equal(const ubi_vrobots_interface__msg__VRobotStates * lhs, const ubi_vrobots_interface__msg__VRobotStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // lin_acc
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->lin_acc), &(rhs->lin_acc)))
  {
    return false;
  }
  // lin_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->lin_vel), &(rhs->lin_vel)))
  {
    return false;
  }
  // lin_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->lin_pos), &(rhs->lin_pos)))
  {
    return false;
  }
  // ang_acc
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ang_acc), &(rhs->ang_acc)))
  {
    return false;
  }
  // ang_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ang_vel), &(rhs->ang_vel)))
  {
    return false;
  }
  // euler
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->euler), &(rhs->euler)))
  {
    return false;
  }
  // euler_dot
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->euler_dot), &(rhs->euler_dot)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quaternion), &(rhs->quaternion)))
  {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pwm), &(rhs->pwm)))
  {
    return false;
  }
  // actuators
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->actuators), &(rhs->actuators)))
  {
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->force), &(rhs->force)))
  {
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->torque), &(rhs->torque)))
  {
    return false;
  }
  // accelerometer
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accelerometer), &(rhs->accelerometer)))
  {
    return false;
  }
  // gyroscope
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gyroscope), &(rhs->gyroscope)))
  {
    return false;
  }
  // magnetometer
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->magnetometer), &(rhs->magnetometer)))
  {
    return false;
  }
  return true;
}

bool
ubi_vrobots_interface__msg__VRobotStates__copy(
  const ubi_vrobots_interface__msg__VRobotStates * input,
  ubi_vrobots_interface__msg__VRobotStates * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // timestamp
  output->timestamp = input->timestamp;
  // lin_acc
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->lin_acc), &(output->lin_acc)))
  {
    return false;
  }
  // lin_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->lin_vel), &(output->lin_vel)))
  {
    return false;
  }
  // lin_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->lin_pos), &(output->lin_pos)))
  {
    return false;
  }
  // ang_acc
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ang_acc), &(output->ang_acc)))
  {
    return false;
  }
  // ang_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ang_vel), &(output->ang_vel)))
  {
    return false;
  }
  // euler
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->euler), &(output->euler)))
  {
    return false;
  }
  // euler_dot
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->euler_dot), &(output->euler_dot)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quaternion), &(output->quaternion)))
  {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pwm), &(output->pwm)))
  {
    return false;
  }
  // actuators
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->actuators), &(output->actuators)))
  {
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->force), &(output->force)))
  {
    return false;
  }
  // torque
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->torque), &(output->torque)))
  {
    return false;
  }
  // accelerometer
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accelerometer), &(output->accelerometer)))
  {
    return false;
  }
  // gyroscope
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gyroscope), &(output->gyroscope)))
  {
    return false;
  }
  // magnetometer
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->magnetometer), &(output->magnetometer)))
  {
    return false;
  }
  return true;
}

ubi_vrobots_interface__msg__VRobotStates *
ubi_vrobots_interface__msg__VRobotStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ubi_vrobots_interface__msg__VRobotStates * msg = (ubi_vrobots_interface__msg__VRobotStates *)allocator.allocate(sizeof(ubi_vrobots_interface__msg__VRobotStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ubi_vrobots_interface__msg__VRobotStates));
  bool success = ubi_vrobots_interface__msg__VRobotStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ubi_vrobots_interface__msg__VRobotStates__destroy(ubi_vrobots_interface__msg__VRobotStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ubi_vrobots_interface__msg__VRobotStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ubi_vrobots_interface__msg__VRobotStates__Sequence__init(ubi_vrobots_interface__msg__VRobotStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ubi_vrobots_interface__msg__VRobotStates * data = NULL;

  if (size) {
    data = (ubi_vrobots_interface__msg__VRobotStates *)allocator.zero_allocate(size, sizeof(ubi_vrobots_interface__msg__VRobotStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ubi_vrobots_interface__msg__VRobotStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ubi_vrobots_interface__msg__VRobotStates__fini(&data[i - 1]);
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
ubi_vrobots_interface__msg__VRobotStates__Sequence__fini(ubi_vrobots_interface__msg__VRobotStates__Sequence * array)
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
      ubi_vrobots_interface__msg__VRobotStates__fini(&array->data[i]);
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

ubi_vrobots_interface__msg__VRobotStates__Sequence *
ubi_vrobots_interface__msg__VRobotStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ubi_vrobots_interface__msg__VRobotStates__Sequence * array = (ubi_vrobots_interface__msg__VRobotStates__Sequence *)allocator.allocate(sizeof(ubi_vrobots_interface__msg__VRobotStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ubi_vrobots_interface__msg__VRobotStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ubi_vrobots_interface__msg__VRobotStates__Sequence__destroy(ubi_vrobots_interface__msg__VRobotStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ubi_vrobots_interface__msg__VRobotStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ubi_vrobots_interface__msg__VRobotStates__Sequence__are_equal(const ubi_vrobots_interface__msg__VRobotStates__Sequence * lhs, const ubi_vrobots_interface__msg__VRobotStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ubi_vrobots_interface__msg__VRobotStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ubi_vrobots_interface__msg__VRobotStates__Sequence__copy(
  const ubi_vrobots_interface__msg__VRobotStates__Sequence * input,
  ubi_vrobots_interface__msg__VRobotStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ubi_vrobots_interface__msg__VRobotStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ubi_vrobots_interface__msg__VRobotStates * data =
      (ubi_vrobots_interface__msg__VRobotStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ubi_vrobots_interface__msg__VRobotStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ubi_vrobots_interface__msg__VRobotStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ubi_vrobots_interface__msg__VRobotStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
