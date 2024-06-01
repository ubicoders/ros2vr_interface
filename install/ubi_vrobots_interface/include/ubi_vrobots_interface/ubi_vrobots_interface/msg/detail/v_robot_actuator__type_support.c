// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__rosidl_typesupport_introspection_c.h"
#include "ubi_vrobots_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__functions.h"
#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__struct.h"


// Include directives for member types
// Member `pwm`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ubi_vrobots_interface__msg__VRobotActuator__init(message_memory);
}

void ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_fini_function(void * message_memory)
{
  ubi_vrobots_interface__msg__VRobotActuator__fini(message_memory);
}

size_t ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__size_function__VRobotActuator__pwm(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__get_const_function__VRobotActuator__pwm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__get_function__VRobotActuator__pwm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__fetch_function__VRobotActuator__pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__get_const_function__VRobotActuator__pwm(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__assign_function__VRobotActuator__pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__get_function__VRobotActuator__pwm(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__resize_function__VRobotActuator__pwm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_member_array[2] = {
  {
    "pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotActuator, pwm),  // bytes offset in struct
    NULL,  // default value
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__size_function__VRobotActuator__pwm,  // size() function pointer
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__get_const_function__VRobotActuator__pwm,  // get_const(index) function pointer
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__get_function__VRobotActuator__pwm,  // get(index) function pointer
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__fetch_function__VRobotActuator__pwm,  // fetch(index, &value) function pointer
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__assign_function__VRobotActuator__pwm,  // assign(index, value) function pointer
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__resize_function__VRobotActuator__pwm  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface__msg__VRobotActuator, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_members = {
  "ubi_vrobots_interface__msg",  // message namespace
  "VRobotActuator",  // message name
  2,  // number of fields
  sizeof(ubi_vrobots_interface__msg__VRobotActuator),
  ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_member_array,  // message members
  ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_init_function,  // function to initialize message memory (memory has to be allocated)
  ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_type_support_handle = {
  0,
  &ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ubi_vrobots_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ubi_vrobots_interface, msg, VRobotActuator)() {
  if (!ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_type_support_handle.typesupport_identifier) {
    ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ubi_vrobots_interface__msg__VRobotActuator__rosidl_typesupport_introspection_c__VRobotActuator_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
