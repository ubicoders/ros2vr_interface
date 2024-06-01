// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__BUILDER_HPP_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ubi_vrobots_interface/msg/detail/v_robot_actuator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ubi_vrobots_interface
{

namespace msg
{

namespace builder
{

class Init_VRobotActuator_force
{
public:
  explicit Init_VRobotActuator_force(::ubi_vrobots_interface::msg::VRobotActuator & msg)
  : msg_(msg)
  {}
  ::ubi_vrobots_interface::msg::VRobotActuator force(::ubi_vrobots_interface::msg::VRobotActuator::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotActuator msg_;
};

class Init_VRobotActuator_pwm
{
public:
  Init_VRobotActuator_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VRobotActuator_force pwm(::ubi_vrobots_interface::msg::VRobotActuator::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return Init_VRobotActuator_force(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotActuator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ubi_vrobots_interface::msg::VRobotActuator>()
{
  return ubi_vrobots_interface::msg::builder::Init_VRobotActuator_pwm();
}

}  // namespace ubi_vrobots_interface

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__BUILDER_HPP_
