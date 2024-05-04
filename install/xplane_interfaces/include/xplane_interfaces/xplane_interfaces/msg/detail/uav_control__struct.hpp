// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:msg/UAVControl.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__STRUCT_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__msg__UAVControl __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__msg__UAVControl __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UAVControl_
{
  using Type = UAVControl_<ContainerAllocator>;

  explicit UAVControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->alieron = 0.0f;
      this->elevator = 0.0f;
      this->rudder = 0.0f;
    }
  }

  explicit UAVControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->alieron = 0.0f;
      this->elevator = 0.0f;
      this->rudder = 0.0f;
    }
  }

  // field types and members
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _alieron_type =
    float;
  _alieron_type alieron;
  using _elevator_type =
    float;
  _elevator_type elevator;
  using _rudder_type =
    float;
  _rudder_type rudder;

  // setters for named parameter idiom
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__alieron(
    const float & _arg)
  {
    this->alieron = _arg;
    return *this;
  }
  Type & set__elevator(
    const float & _arg)
  {
    this->elevator = _arg;
    return *this;
  }
  Type & set__rudder(
    const float & _arg)
  {
    this->rudder = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::msg::UAVControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::msg::UAVControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__msg__UAVControl
    std::shared_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__msg__UAVControl
    std::shared_ptr<xplane_interfaces::msg::UAVControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UAVControl_ & other) const
  {
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->alieron != other.alieron) {
      return false;
    }
    if (this->elevator != other.elevator) {
      return false;
    }
    if (this->rudder != other.rudder) {
      return false;
    }
    return true;
  }
  bool operator!=(const UAVControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UAVControl_

// alias to use template instance with default allocator
using UAVControl =
  xplane_interfaces::msg::UAVControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__STRUCT_HPP_
