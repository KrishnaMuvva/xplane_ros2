// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__STRUCT_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__msg__UAVState __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__msg__UAVState __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UAVState_
{
  using Type = UAVState_<ContainerAllocator>;

  explicit UAVState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lattitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->heading = 0.0f;
      this->airspeed = 0.0f;
    }
  }

  explicit UAVState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lattitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->heading = 0.0f;
      this->airspeed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lattitude_type =
    double;
  _lattitude_type lattitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _heading_type =
    float;
  _heading_type heading;
  using _airspeed_type =
    float;
  _airspeed_type airspeed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lattitude(
    const double & _arg)
  {
    this->lattitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__airspeed(
    const float & _arg)
  {
    this->airspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::msg::UAVState_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::msg::UAVState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__msg__UAVState
    std::shared_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__msg__UAVState
    std::shared_ptr<xplane_interfaces::msg::UAVState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UAVState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lattitude != other.lattitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->airspeed != other.airspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const UAVState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UAVState_

// alias to use template instance with default allocator
using UAVState =
  xplane_interfaces::msg::UAVState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__STRUCT_HPP_
