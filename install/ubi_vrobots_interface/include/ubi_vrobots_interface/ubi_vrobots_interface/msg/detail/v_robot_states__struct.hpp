// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__STRUCT_HPP_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


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
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ubi_vrobots_interface__msg__VRobotStates __attribute__((deprecated))
#else
# define DEPRECATED__ubi_vrobots_interface__msg__VRobotStates __declspec(deprecated)
#endif

namespace ubi_vrobots_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VRobotStates_
{
  using Type = VRobotStates_<ContainerAllocator>;

  explicit VRobotStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lin_acc(_init),
    lin_vel(_init),
    lin_pos(_init),
    ang_acc(_init),
    ang_vel(_init),
    euler(_init),
    euler_dot(_init),
    quaternion(_init),
    force(_init),
    torque(_init),
    accelerometer(_init),
    gyroscope(_init),
    magnetometer(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0l;
      this->timestamp = 0.0;
    }
  }

  explicit VRobotStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    lin_acc(_alloc, _init),
    lin_vel(_alloc, _init),
    lin_pos(_alloc, _init),
    ang_acc(_alloc, _init),
    ang_vel(_alloc, _init),
    euler(_alloc, _init),
    euler_dot(_alloc, _init),
    quaternion(_alloc, _init),
    force(_alloc, _init),
    torque(_alloc, _init),
    accelerometer(_alloc, _init),
    gyroscope(_alloc, _init),
    magnetometer(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->id = 0l;
      this->timestamp = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    int32_t;
  _id_type id;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _lin_acc_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _lin_acc_type lin_acc;
  using _lin_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _lin_vel_type lin_vel;
  using _lin_pos_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _lin_pos_type lin_pos;
  using _ang_acc_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ang_acc_type ang_acc;
  using _ang_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ang_vel_type ang_vel;
  using _euler_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _euler_type euler;
  using _euler_dot_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _euler_dot_type euler_dot;
  using _quaternion_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;
  using _pwm_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _pwm_type pwm;
  using _actuators_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _actuators_type actuators;
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;
  using _torque_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _torque_type torque;
  using _accelerometer_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accelerometer_type accelerometer;
  using _gyroscope_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gyroscope_type gyroscope;
  using _magnetometer_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _magnetometer_type magnetometer;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lin_acc(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->lin_acc = _arg;
    return *this;
  }
  Type & set__lin_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->lin_vel = _arg;
    return *this;
  }
  Type & set__lin_pos(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->lin_pos = _arg;
    return *this;
  }
  Type & set__ang_acc(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ang_acc = _arg;
    return *this;
  }
  Type & set__ang_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ang_vel = _arg;
    return *this;
  }
  Type & set__euler(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->euler = _arg;
    return *this;
  }
  Type & set__euler_dot(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->euler_dot = _arg;
    return *this;
  }
  Type & set__quaternion(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__pwm(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }
  Type & set__actuators(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->actuators = _arg;
    return *this;
  }
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__torque(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__accelerometer(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accelerometer = _arg;
    return *this;
  }
  Type & set__gyroscope(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gyroscope = _arg;
    return *this;
  }
  Type & set__magnetometer(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->magnetometer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ubi_vrobots_interface__msg__VRobotStates
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ubi_vrobots_interface__msg__VRobotStates
    std::shared_ptr<ubi_vrobots_interface::msg::VRobotStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VRobotStates_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lin_acc != other.lin_acc) {
      return false;
    }
    if (this->lin_vel != other.lin_vel) {
      return false;
    }
    if (this->lin_pos != other.lin_pos) {
      return false;
    }
    if (this->ang_acc != other.ang_acc) {
      return false;
    }
    if (this->ang_vel != other.ang_vel) {
      return false;
    }
    if (this->euler != other.euler) {
      return false;
    }
    if (this->euler_dot != other.euler_dot) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->pwm != other.pwm) {
      return false;
    }
    if (this->actuators != other.actuators) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->accelerometer != other.accelerometer) {
      return false;
    }
    if (this->gyroscope != other.gyroscope) {
      return false;
    }
    if (this->magnetometer != other.magnetometer) {
      return false;
    }
    return true;
  }
  bool operator!=(const VRobotStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VRobotStates_

// alias to use template instance with default allocator
using VRobotStates =
  ubi_vrobots_interface::msg::VRobotStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ubi_vrobots_interface

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__STRUCT_HPP_
