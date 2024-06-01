// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ubi_vrobots_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VRobotActuator_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ubi_vrobots_interface::msg::VRobotActuator(_init);
}

void VRobotActuator_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ubi_vrobots_interface::msg::VRobotActuator *>(message_memory);
  typed_message->~VRobotActuator();
}

size_t size_function__VRobotActuator__pwm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VRobotActuator__pwm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__VRobotActuator__pwm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__VRobotActuator__pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__VRobotActuator__pwm(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__VRobotActuator__pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__VRobotActuator__pwm(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__VRobotActuator__pwm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VRobotActuator_message_member_array[2] = {
  {
    "pwm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface::msg::VRobotActuator, pwm),  // bytes offset in struct
    nullptr,  // default value
    size_function__VRobotActuator__pwm,  // size() function pointer
    get_const_function__VRobotActuator__pwm,  // get_const(index) function pointer
    get_function__VRobotActuator__pwm,  // get(index) function pointer
    fetch_function__VRobotActuator__pwm,  // fetch(index, &value) function pointer
    assign_function__VRobotActuator__pwm,  // assign(index, value) function pointer
    resize_function__VRobotActuator__pwm  // resize(index) function pointer
  },
  {
    "force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ubi_vrobots_interface::msg::VRobotActuator, force),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VRobotActuator_message_members = {
  "ubi_vrobots_interface::msg",  // message namespace
  "VRobotActuator",  // message name
  2,  // number of fields
  sizeof(ubi_vrobots_interface::msg::VRobotActuator),
  VRobotActuator_message_member_array,  // message members
  VRobotActuator_init_function,  // function to initialize message memory (memory has to be allocated)
  VRobotActuator_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VRobotActuator_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VRobotActuator_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ubi_vrobots_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ubi_vrobots_interface::msg::VRobotActuator>()
{
  return &::ubi_vrobots_interface::msg::rosidl_typesupport_introspection_cpp::VRobotActuator_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ubi_vrobots_interface, msg, VRobotActuator)() {
  return &::ubi_vrobots_interface::msg::rosidl_typesupport_introspection_cpp::VRobotActuator_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
