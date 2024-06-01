// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__TRAITS_HPP_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ubi_vrobots_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VRobotActuator & msg,
  std::ostream & out)
{
  out << "{";
  // member: pwm
  {
    if (msg.pwm.size() == 0) {
      out << "pwm: []";
    } else {
      out << "pwm: [";
      size_t pending_items = msg.pwm.size();
      for (auto item : msg.pwm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VRobotActuator & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm.size() == 0) {
      out << "pwm: []\n";
    } else {
      out << "pwm:\n";
      for (auto item : msg.pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VRobotActuator & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ubi_vrobots_interface

namespace rosidl_generator_traits
{

[[deprecated("use ubi_vrobots_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ubi_vrobots_interface::msg::VRobotActuator & msg,
  std::ostream & out, size_t indentation = 0)
{
  ubi_vrobots_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ubi_vrobots_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ubi_vrobots_interface::msg::VRobotActuator & msg)
{
  return ubi_vrobots_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ubi_vrobots_interface::msg::VRobotActuator>()
{
  return "ubi_vrobots_interface::msg::VRobotActuator";
}

template<>
inline const char * name<ubi_vrobots_interface::msg::VRobotActuator>()
{
  return "ubi_vrobots_interface/msg/VRobotActuator";
}

template<>
struct has_fixed_size<ubi_vrobots_interface::msg::VRobotActuator>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ubi_vrobots_interface::msg::VRobotActuator>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ubi_vrobots_interface::msg::VRobotActuator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__TRAITS_HPP_
