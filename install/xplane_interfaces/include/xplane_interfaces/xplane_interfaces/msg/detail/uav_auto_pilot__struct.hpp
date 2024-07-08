// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:msg/UAVAutoPilot.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__STRUCT_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__msg__UAVAutoPilot __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__msg__UAVAutoPilot __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UAVAutoPilot_
{
  using Type = UAVAutoPilot_<ContainerAllocator>;

  explicit UAVAutoPilot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
      this->altitude = 0.0f;
      this->airspeed = 0.0f;
      this->vertical_velocity = 0.0f;
    }
  }

  explicit UAVAutoPilot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0f;
      this->altitude = 0.0f;
      this->airspeed = 0.0f;
      this->vertical_velocity = 0.0f;
    }
  }

  // field types and members
  using _heading_type =
    float;
  _heading_type heading;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _airspeed_type =
    float;
  _airspeed_type airspeed;
  using _vertical_velocity_type =
    float;
  _vertical_velocity_type vertical_velocity;

  // setters for named parameter idiom
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__airspeed(
    const float & _arg)
  {
    this->airspeed = _arg;
    return *this;
  }
  Type & set__vertical_velocity(
    const float & _arg)
  {
    this->vertical_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__msg__UAVAutoPilot
    std::shared_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__msg__UAVAutoPilot
    std::shared_ptr<xplane_interfaces::msg::UAVAutoPilot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UAVAutoPilot_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->airspeed != other.airspeed) {
      return false;
    }
    if (this->vertical_velocity != other.vertical_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const UAVAutoPilot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UAVAutoPilot_

// alias to use template instance with default allocator
using UAVAutoPilot =
  xplane_interfaces::msg::UAVAutoPilot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__STRUCT_HPP_
