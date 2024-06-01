// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__BUILDER_HPP_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ubi_vrobots_interface/msg/detail/v_robot_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ubi_vrobots_interface
{

namespace msg
{

namespace builder
{

class Init_VRobotStates_magnetometer
{
public:
  explicit Init_VRobotStates_magnetometer(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  ::ubi_vrobots_interface::msg::VRobotStates magnetometer(::ubi_vrobots_interface::msg::VRobotStates::_magnetometer_type arg)
  {
    msg_.magnetometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_gyroscope
{
public:
  explicit Init_VRobotStates_gyroscope(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_magnetometer gyroscope(::ubi_vrobots_interface::msg::VRobotStates::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_VRobotStates_magnetometer(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_accelerometer
{
public:
  explicit Init_VRobotStates_accelerometer(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_gyroscope accelerometer(::ubi_vrobots_interface::msg::VRobotStates::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_VRobotStates_gyroscope(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_torque
{
public:
  explicit Init_VRobotStates_torque(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_accelerometer torque(::ubi_vrobots_interface::msg::VRobotStates::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_VRobotStates_accelerometer(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_force
{
public:
  explicit Init_VRobotStates_force(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_torque force(::ubi_vrobots_interface::msg::VRobotStates::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_VRobotStates_torque(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_actuators
{
public:
  explicit Init_VRobotStates_actuators(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_force actuators(::ubi_vrobots_interface::msg::VRobotStates::_actuators_type arg)
  {
    msg_.actuators = std::move(arg);
    return Init_VRobotStates_force(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_pwm
{
public:
  explicit Init_VRobotStates_pwm(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_actuators pwm(::ubi_vrobots_interface::msg::VRobotStates::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return Init_VRobotStates_actuators(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_quaternion
{
public:
  explicit Init_VRobotStates_quaternion(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_pwm quaternion(::ubi_vrobots_interface::msg::VRobotStates::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_VRobotStates_pwm(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_euler_dot
{
public:
  explicit Init_VRobotStates_euler_dot(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_quaternion euler_dot(::ubi_vrobots_interface::msg::VRobotStates::_euler_dot_type arg)
  {
    msg_.euler_dot = std::move(arg);
    return Init_VRobotStates_quaternion(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_euler
{
public:
  explicit Init_VRobotStates_euler(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_euler_dot euler(::ubi_vrobots_interface::msg::VRobotStates::_euler_type arg)
  {
    msg_.euler = std::move(arg);
    return Init_VRobotStates_euler_dot(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_ang_vel
{
public:
  explicit Init_VRobotStates_ang_vel(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_euler ang_vel(::ubi_vrobots_interface::msg::VRobotStates::_ang_vel_type arg)
  {
    msg_.ang_vel = std::move(arg);
    return Init_VRobotStates_euler(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_ang_acc
{
public:
  explicit Init_VRobotStates_ang_acc(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_ang_vel ang_acc(::ubi_vrobots_interface::msg::VRobotStates::_ang_acc_type arg)
  {
    msg_.ang_acc = std::move(arg);
    return Init_VRobotStates_ang_vel(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_lin_pos
{
public:
  explicit Init_VRobotStates_lin_pos(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_ang_acc lin_pos(::ubi_vrobots_interface::msg::VRobotStates::_lin_pos_type arg)
  {
    msg_.lin_pos = std::move(arg);
    return Init_VRobotStates_ang_acc(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_lin_vel
{
public:
  explicit Init_VRobotStates_lin_vel(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_lin_pos lin_vel(::ubi_vrobots_interface::msg::VRobotStates::_lin_vel_type arg)
  {
    msg_.lin_vel = std::move(arg);
    return Init_VRobotStates_lin_pos(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_lin_acc
{
public:
  explicit Init_VRobotStates_lin_acc(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_lin_vel lin_acc(::ubi_vrobots_interface::msg::VRobotStates::_lin_acc_type arg)
  {
    msg_.lin_acc = std::move(arg);
    return Init_VRobotStates_lin_vel(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_timestamp
{
public:
  explicit Init_VRobotStates_timestamp(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_lin_acc timestamp(::ubi_vrobots_interface::msg::VRobotStates::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VRobotStates_lin_acc(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_id
{
public:
  explicit Init_VRobotStates_id(::ubi_vrobots_interface::msg::VRobotStates & msg)
  : msg_(msg)
  {}
  Init_VRobotStates_timestamp id(::ubi_vrobots_interface::msg::VRobotStates::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VRobotStates_timestamp(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

class Init_VRobotStates_name
{
public:
  Init_VRobotStates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VRobotStates_id name(::ubi_vrobots_interface::msg::VRobotStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_VRobotStates_id(msg_);
  }

private:
  ::ubi_vrobots_interface::msg::VRobotStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ubi_vrobots_interface::msg::VRobotStates>()
{
  return ubi_vrobots_interface::msg::builder::Init_VRobotStates_name();
}

}  // namespace ubi_vrobots_interface

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__BUILDER_HPP_
