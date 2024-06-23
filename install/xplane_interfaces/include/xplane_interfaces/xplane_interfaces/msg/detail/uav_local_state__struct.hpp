// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:msg/UAVLocalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__STRUCT_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__msg__UAVLocalState __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__msg__UAVLocalState __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UAVLocalState_
{
  using Type = UAVLocalState_<ContainerAllocator>;

  explicit UAVLocalState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_x = 0.0;
      this->local_y = 0.0;
      this->local_z = 0.0;
      this->local_vx = 0.0;
      this->local_vy = 0.0;
      this->local_vz = 0.0;
      this->local_ax = 0.0;
      this->local_ay = 0.0;
      this->local_az = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->airspeed = 0.0;
    }
  }

  explicit UAVLocalState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_x = 0.0;
      this->local_y = 0.0;
      this->local_z = 0.0;
      this->local_vx = 0.0;
      this->local_vy = 0.0;
      this->local_vz = 0.0;
      this->local_ax = 0.0;
      this->local_ay = 0.0;
      this->local_az = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->airspeed = 0.0;
    }
  }

  // field types and members
  using _local_x_type =
    double;
  _local_x_type local_x;
  using _local_y_type =
    double;
  _local_y_type local_y;
  using _local_z_type =
    double;
  _local_z_type local_z;
  using _local_vx_type =
    double;
  _local_vx_type local_vx;
  using _local_vy_type =
    double;
  _local_vy_type local_vy;
  using _local_vz_type =
    double;
  _local_vz_type local_vz;
  using _local_ax_type =
    double;
  _local_ax_type local_ax;
  using _local_ay_type =
    double;
  _local_ay_type local_ay;
  using _local_az_type =
    double;
  _local_az_type local_az;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _airspeed_type =
    double;
  _airspeed_type airspeed;

  // setters for named parameter idiom
  Type & set__local_x(
    const double & _arg)
  {
    this->local_x = _arg;
    return *this;
  }
  Type & set__local_y(
    const double & _arg)
  {
    this->local_y = _arg;
    return *this;
  }
  Type & set__local_z(
    const double & _arg)
  {
    this->local_z = _arg;
    return *this;
  }
  Type & set__local_vx(
    const double & _arg)
  {
    this->local_vx = _arg;
    return *this;
  }
  Type & set__local_vy(
    const double & _arg)
  {
    this->local_vy = _arg;
    return *this;
  }
  Type & set__local_vz(
    const double & _arg)
  {
    this->local_vz = _arg;
    return *this;
  }
  Type & set__local_ax(
    const double & _arg)
  {
    this->local_ax = _arg;
    return *this;
  }
  Type & set__local_ay(
    const double & _arg)
  {
    this->local_ay = _arg;
    return *this;
  }
  Type & set__local_az(
    const double & _arg)
  {
    this->local_az = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__airspeed(
    const double & _arg)
  {
    this->airspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::msg::UAVLocalState_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::msg::UAVLocalState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVLocalState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVLocalState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__msg__UAVLocalState
    std::shared_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__msg__UAVLocalState
    std::shared_ptr<xplane_interfaces::msg::UAVLocalState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UAVLocalState_ & other) const
  {
    if (this->local_x != other.local_x) {
      return false;
    }
    if (this->local_y != other.local_y) {
      return false;
    }
    if (this->local_z != other.local_z) {
      return false;
    }
    if (this->local_vx != other.local_vx) {
      return false;
    }
    if (this->local_vy != other.local_vy) {
      return false;
    }
    if (this->local_vz != other.local_vz) {
      return false;
    }
    if (this->local_ax != other.local_ax) {
      return false;
    }
    if (this->local_ay != other.local_ay) {
      return false;
    }
    if (this->local_az != other.local_az) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->airspeed != other.airspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const UAVLocalState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UAVLocalState_

// alias to use template instance with default allocator
using UAVLocalState =
  xplane_interfaces::msg::UAVLocalState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__STRUCT_HPP_
