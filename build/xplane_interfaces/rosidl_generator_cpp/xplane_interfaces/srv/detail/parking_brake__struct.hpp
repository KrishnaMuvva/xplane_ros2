// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__STRUCT_HPP_
#define XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__srv__ParkingBrake_Request __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__srv__ParkingBrake_Request __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ParkingBrake_Request_
{
  using Type = ParkingBrake_Request_<ContainerAllocator>;

  explicit ParkingBrake_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_brake = false;
    }
  }

  explicit ParkingBrake_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parking_brake = false;
    }
  }

  // field types and members
  using _parking_brake_type =
    bool;
  _parking_brake_type parking_brake;

  // setters for named parameter idiom
  Type & set__parking_brake(
    const bool & _arg)
  {
    this->parking_brake = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__srv__ParkingBrake_Request
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__srv__ParkingBrake_Request
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingBrake_Request_ & other) const
  {
    if (this->parking_brake != other.parking_brake) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingBrake_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingBrake_Request_

// alias to use template instance with default allocator
using ParkingBrake_Request =
  xplane_interfaces::srv::ParkingBrake_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xplane_interfaces


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__srv__ParkingBrake_Response __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__srv__ParkingBrake_Response __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ParkingBrake_Response_
{
  using Type = ParkingBrake_Response_<ContainerAllocator>;

  explicit ParkingBrake_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_release = false;
    }
  }

  explicit ParkingBrake_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_release = false;
    }
  }

  // field types and members
  using _brake_release_type =
    bool;
  _brake_release_type brake_release;

  // setters for named parameter idiom
  Type & set__brake_release(
    const bool & _arg)
  {
    this->brake_release = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__srv__ParkingBrake_Response
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__srv__ParkingBrake_Response
    std::shared_ptr<xplane_interfaces::srv::ParkingBrake_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingBrake_Response_ & other) const
  {
    if (this->brake_release != other.brake_release) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingBrake_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingBrake_Response_

// alias to use template instance with default allocator
using ParkingBrake_Response =
  xplane_interfaces::srv::ParkingBrake_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xplane_interfaces

namespace xplane_interfaces
{

namespace srv
{

struct ParkingBrake
{
  using Request = xplane_interfaces::srv::ParkingBrake_Request;
  using Response = xplane_interfaces::srv::ParkingBrake_Response;
};

}  // namespace srv

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__STRUCT_HPP_
