// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ubi_vrobots_interface:msg/VRobotActuator.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__STRUCT_HPP_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ubi_vrobots_interface__msg__VRobotActuator __attribute__((deprecated))
#else
# define DEPRECATED__ubi_vrobots_interface__msg__VRobotActuator __declspec(deprecated)
#endif

namespace ubi_vrobots_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VRobotActuator_
{
  using Type = VRobotActuator_<ContainerAllocator>;

  explicit VRobotActuator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0f;
    }
  }

  explicit VRobotActuator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0f;
    }
  }

  // field types and members
  using _pwm_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _pwm_type pwm;
  using _force_type =
    float;
  _force_type force;

  // setters for named parameter idiom
  Type & set__pwm(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }
  Type & set__force(
    const float & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator> *;
  using ConstRawPtr =
    const ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ubi_vrobots_interface__msg__VRobotActuator
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ubi_vrobots_interface__msg__VRobotActuator
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotActuator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VRobotActuator_ & other) const
  {
    if (this->pwm != other.pwm) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const VRobotActuator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VRobotActuator_

// alias to use template instance with default allocator
using VRobotActuator =
  ubi_vrobots_interface::msg::VRobotActuator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ubi_vrobots_interface

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_ACTUATOR__STRUCT_HPP_
