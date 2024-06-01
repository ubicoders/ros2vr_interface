// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__STRUCT_H_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pwm'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VRobotActuator in the package ubi_vrobots_interface.
typedef struct ubi_vrobots_interface__msg__VRobotActuator
{
  rosidl_runtime_c__int32__Sequence pwm;
  float force;
} ubi_vrobots_interface__msg__VRobotActuator;

// Struct for a sequence of ubi_vrobots_interface__msg__VRobotActuator.
typedef struct ubi_vrobots_interface__msg__VRobotActuator__Sequence
{
  ubi_vrobots_interface__msg__VRobotActuator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ubi_vrobots_interface__msg__VRobotActuator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__STRUCT_H_
