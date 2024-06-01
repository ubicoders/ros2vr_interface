// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ubi_vrobots_interface/msg/detail/v_robot_states__rosidl_typesupport_introspection_c.h"
#include "ubi_vrobots_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ubi_vrobots_interface/msg/detail/v_robot_states__functions.h"
#include "ubi_vrobots_interface/msg/detail/v_robot_states__struct.h"


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
#include "geometry_msgs/msg/vector3.h"
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
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `quaternion`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `pwm`
// Member `actuators`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ubi_vrobots_interface__msg__VRobotStates__init(message_memory);
}

void ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_fini_function(void * message_memory)
{
  ubi_vrobots_interface__msg__VRobotStates__fini(message_memory);
}

size_t ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__size_function__VRobotStates__pwm(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_const_function__VRobotStates__pwm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_function__VRobotStates__pwm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__fetch_function__VRobotStates__pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_const_function__VRobotStates__pwm(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__assign_function__VRobotStates__pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_function__VRobotStates__pwm(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__resize_function__VRobotStates__pwm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__size_function__VRobotStates__actuators(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_const_function__VRobotStates__actuators(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_function__VRobotStates__actuators(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__fetch_function__VRobotStates__actuators(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_const_function__VRobotStates__actuators(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__assign_function__VRobotStates__actuators(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_function__VRobotStates__actuators(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__resize_function__VRobotStates__actuators(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[18] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lin_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, lin_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lin_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, lin_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lin_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, lin_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, ang_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ang_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, ang_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "euler",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, euler),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "euler_dot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, euler_dot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, pwm),  // bytes offset in struct
    NULL,  // default value
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__size_function__VRobotStates__pwm,  // size() function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_const_function__VRobotStates__pwm,  // get_const(index) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_function__VRobotStates__pwm,  // get(index) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__fetch_function__VRobotStates__pwm,  // fetch(index, &value) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__assign_function__VRobotStates__pwm,  // assign(index, value) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__resize_function__VRobotStates__pwm  // resize(index) function pointer
  },
  {
    "actuators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, actuators),  // bytes offset in struct
    NULL,  // default value
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__size_function__VRobotStates__actuators,  // size() function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_const_function__VRobotStates__actuators,  // get_const(index) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__get_function__VRobotStates__actuators,  // get(index) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__fetch_function__VRobotStates__actuators,  // fetch(index, &value) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__assign_function__VRobotStates__actuators,  // assign(index, value) function pointer
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__resize_function__VRobotStates__actuators  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, accelerometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyroscope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, gyroscope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "magnetometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotStates, magnetometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_members = {
  "ubi_vrobots_interface__msg",  // message namespace
  "VRobotStates",  // message name
  18,  // number of fields
  sizeof(ubi_vrobots_interface__msg__VRobotStates),
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array,  // message members
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_init_function,  // function to initialize message memory (memory has to be allocated)
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_type_support_handle = {
  0,
  &ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ubi_vrobots_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ubi_vrobots_interface, msg, VRobotStates)() {
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_type_support_handle.typesupport_identifier) {
    ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ubi_vrobots_interface__msg__VRobotStates__rosidl_typesupport_introspection_c__VRobotStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
