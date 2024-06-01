// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__TRAITS_HPP_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ubi_vrobots_interface/msg/detail/v_robot_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
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
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace ubi_vrobots_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VRobotStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: lin_acc
  {
    out << "lin_acc: ";
    to_flow_style_yaml(msg.lin_acc, out);
    out << ", ";
  }

  // member: lin_vel
  {
    out << "lin_vel: ";
    to_flow_style_yaml(msg.lin_vel, out);
    out << ", ";
  }

  // member: lin_pos
  {
    out << "lin_pos: ";
    to_flow_style_yaml(msg.lin_pos, out);
    out << ", ";
  }

  // member: ang_acc
  {
    out << "ang_acc: ";
    to_flow_style_yaml(msg.ang_acc, out);
    out << ", ";
  }

  // member: ang_vel
  {
    out << "ang_vel: ";
    to_flow_style_yaml(msg.ang_vel, out);
    out << ", ";
  }

  // member: euler
  {
    out << "euler: ";
    to_flow_style_yaml(msg.euler, out);
    out << ", ";
  }

  // member: euler_dot
  {
    out << "euler_dot: ";
    to_flow_style_yaml(msg.euler_dot, out);
    out << ", ";
  }

  // member: quaternion
  {
    out << "quaternion: ";
    to_flow_style_yaml(msg.quaternion, out);
    out << ", ";
  }

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

  // member: actuators
  {
    if (msg.actuators.size() == 0) {
      out << "actuators: []";
    } else {
      out << "actuators: [";
      size_t pending_items = msg.actuators.size();
      for (auto item : msg.actuators) {
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
    to_flow_style_yaml(msg.force, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    to_flow_style_yaml(msg.torque, out);
    out << ", ";
  }

  // member: accelerometer
  {
    out << "accelerometer: ";
    to_flow_style_yaml(msg.accelerometer, out);
    out << ", ";
  }

  // member: gyroscope
  {
    out << "gyroscope: ";
    to_flow_style_yaml(msg.gyroscope, out);
    out << ", ";
  }

  // member: magnetometer
  {
    out << "magnetometer: ";
    to_flow_style_yaml(msg.magnetometer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VRobotStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: lin_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_acc:\n";
    to_block_style_yaml(msg.lin_acc, out, indentation + 2);
  }

  // member: lin_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_vel:\n";
    to_block_style_yaml(msg.lin_vel, out, indentation + 2);
  }

  // member: lin_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_pos:\n";
    to_block_style_yaml(msg.lin_pos, out, indentation + 2);
  }

  // member: ang_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_acc:\n";
    to_block_style_yaml(msg.ang_acc, out, indentation + 2);
  }

  // member: ang_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel:\n";
    to_block_style_yaml(msg.ang_vel, out, indentation + 2);
  }

  // member: euler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler:\n";
    to_block_style_yaml(msg.euler, out, indentation + 2);
  }

  // member: euler_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "euler_dot:\n";
    to_block_style_yaml(msg.euler_dot, out, indentation + 2);
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion:\n";
    to_block_style_yaml(msg.quaternion, out, indentation + 2);
  }

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

  // member: actuators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actuators.size() == 0) {
      out << "actuators: []\n";
    } else {
      out << "actuators:\n";
      for (auto item : msg.actuators) {
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
    out << "force:\n";
    to_block_style_yaml(msg.force, out, indentation + 2);
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque:\n";
    to_block_style_yaml(msg.torque, out, indentation + 2);
  }

  // member: accelerometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer:\n";
    to_block_style_yaml(msg.accelerometer, out, indentation + 2);
  }

  // member: gyroscope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyroscope:\n";
    to_block_style_yaml(msg.gyroscope, out, indentation + 2);
  }

  // member: magnetometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetometer:\n";
    to_block_style_yaml(msg.magnetometer, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VRobotStates & msg, bool use_flow_style = false)
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
  const ubi_vrobots_interface::msg::VRobotStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  ubi_vrobots_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ubi_vrobots_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const ubi_vrobots_interface::msg::VRobotStates & msg)
{
  return ubi_vrobots_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ubi_vrobots_interface::msg::VRobotStates>()
{
  return "ubi_vrobots_interface::msg::VRobotStates";
}

template<>
inline const char * name<ubi_vrobots_interface::msg::VRobotStates>()
{
  return "ubi_vrobots_interface/msg/VRobotStates";
}

template<>
struct has_fixed_size<ubi_vrobots_interface::msg::VRobotStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ubi_vrobots_interface::msg::VRobotStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ubi_vrobots_interface::msg::VRobotStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__TRAITS_HPP_
