// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__STRUCT_H_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'lin_acc'
// Member 'lin_vel'
// Member 'lin_pos'
// Member 'ang_acc'
// Member 'ang_vel'
// Member 'euler'
// Member 'euler_dot'
// Member 'force'
// Member 'torque'
// Member 'accelerometer'
// Member 'gyroscope'
// Member 'magnetometer'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'pwm'
// Member 'actuators'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VRobotStates in the package ubi_vrobots_interface.
typedef struct ubi_vrobots_interface__msg__VRobotStates
{
  rosidl_runtime_c__String name;
  int32_t id;
  double timestamp;
  geometry_msgs__msg__Vector3 lin_acc;
  geometry_msgs__msg__Vector3 lin_vel;
  geometry_msgs__msg__Vector3 lin_pos;
  geometry_msgs__msg__Vector3 ang_acc;
  geometry_msgs__msg__Vector3 ang_vel;
  geometry_msgs__msg__Vector3 euler;
  geometry_msgs__msg__Vector3 euler_dot;
  geometry_msgs__msg__Quaternion quaternion;
  rosidl_runtime_c__uint32__Sequence pwm;
  rosidl_runtime_c__double__Sequence actuators;
  geometry_msgs__msg__Vector3 force;
  geometry_msgs__msg__Vector3 torque;
  geometry_msgs__msg__Vector3 accelerometer;
  geometry_msgs__msg__Vector3 gyroscope;
  geometry_msgs__msg__Vector3 magnetometer;
} ubi_vrobots_interface__msg__VRobotStates;

// Struct for a sequence of ubi_vrobots_interface__msg__VRobotStates.
typedef struct ubi_vrobots_interface__msg__VRobotStates__Sequence
{
  ubi_vrobots_interface__msg__VRobotStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ubi_vrobots_interface__msg__VRobotStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__STRUCT_H_
