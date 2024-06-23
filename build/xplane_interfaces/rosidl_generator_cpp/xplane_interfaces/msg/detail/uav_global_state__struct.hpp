// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__STRUCT_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__msg__UAVGlobalState __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__msg__UAVGlobalState __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UAVGlobalState_
{
  using Type = UAVGlobalState_<ContainerAllocator>;

  explicit UAVGlobalState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lattitude = 0.0;
      this->longitude = 0.0;
      this->altitude_msl = 0.0;
      this->altitude_agl = 0.0;
      this->global_roll = 0.0;
      this->global_pitch = 0.0;
      this->global_yaw = 0.0;
      this->groundspeed = 0.0;
    }
  }

  explicit UAVGlobalState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lattitude = 0.0;
      this->longitude = 0.0;
      this->altitude_msl = 0.0;
      this->altitude_agl = 0.0;
      this->global_roll = 0.0;
      this->global_pitch = 0.0;
      this->global_yaw = 0.0;
      this->groundspeed = 0.0;
    }
  }

  // field types and members
  using _lattitude_type =
    double;
  _lattitude_type lattitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_msl_type =
    double;
  _altitude_msl_type altitude_msl;
  using _altitude_agl_type =
    double;
  _altitude_agl_type altitude_agl;
  using _global_roll_type =
    double;
  _global_roll_type global_roll;
  using _global_pitch_type =
    double;
  _global_pitch_type global_pitch;
  using _global_yaw_type =
    double;
  _global_yaw_type global_yaw;
  using _groundspeed_type =
    double;
  _groundspeed_type groundspeed;

  // setters for named parameter idiom
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
  Type & set__altitude_msl(
    const double & _arg)
  {
    this->altitude_msl = _arg;
    return *this;
  }
  Type & set__altitude_agl(
    const double & _arg)
  {
    this->altitude_agl = _arg;
    return *this;
  }
  Type & set__global_roll(
    const double & _arg)
  {
    this->global_roll = _arg;
    return *this;
  }
  Type & set__global_pitch(
    const double & _arg)
  {
    this->global_pitch = _arg;
    return *this;
  }
  Type & set__global_yaw(
    const double & _arg)
  {
    this->global_yaw = _arg;
    return *this;
  }
  Type & set__groundspeed(
    const double & _arg)
  {
    this->groundspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__msg__UAVGlobalState
    std::shared_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__msg__UAVGlobalState
    std::shared_ptr<xplane_interfaces::msg::UAVGlobalState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UAVGlobalState_ & other) const
  {
    if (this->lattitude != other.lattitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude_msl != other.altitude_msl) {
      return false;
    }
    if (this->altitude_agl != other.altitude_agl) {
      return false;
    }
    if (this->global_roll != other.global_roll) {
      return false;
    }
    if (this->global_pitch != other.global_pitch) {
      return false;
    }
    if (this->global_yaw != other.global_yaw) {
      return false;
    }
    if (this->groundspeed != other.groundspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const UAVGlobalState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UAVGlobalState_

// alias to use template instance with default allocator
using UAVGlobalState =
  xplane_interfaces::msg::UAVGlobalState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__STRUCT_HPP_
