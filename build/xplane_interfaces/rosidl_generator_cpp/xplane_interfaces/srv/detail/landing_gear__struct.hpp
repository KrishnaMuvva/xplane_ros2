// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:srv/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__STRUCT_HPP_
#define XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__srv__LandingGear_Request __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__srv__LandingGear_Request __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LandingGear_Request_
{
  using Type = LandingGear_Request_<ContainerAllocator>;

  explicit LandingGear_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->landing_gear = false;
    }
  }

  explicit LandingGear_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->landing_gear = false;
    }
  }

  // field types and members
  using _landing_gear_type =
    bool;
  _landing_gear_type landing_gear;

  // setters for named parameter idiom
  Type & set__landing_gear(
    const bool & _arg)
  {
    this->landing_gear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__srv__LandingGear_Request
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__srv__LandingGear_Request
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandingGear_Request_ & other) const
  {
    if (this->landing_gear != other.landing_gear) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandingGear_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandingGear_Request_

// alias to use template instance with default allocator
using LandingGear_Request =
  xplane_interfaces::srv::LandingGear_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xplane_interfaces


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__srv__LandingGear_Response __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__srv__LandingGear_Response __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LandingGear_Response_
{
  using Type = LandingGear_Response_<ContainerAllocator>;

  explicit LandingGear_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gear_release = false;
    }
  }

  explicit LandingGear_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gear_release = false;
    }
  }

  // field types and members
  using _gear_release_type =
    bool;
  _gear_release_type gear_release;

  // setters for named parameter idiom
  Type & set__gear_release(
    const bool & _arg)
  {
    this->gear_release = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__srv__LandingGear_Response
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__srv__LandingGear_Response
    std::shared_ptr<xplane_interfaces::srv::LandingGear_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandingGear_Response_ & other) const
  {
    if (this->gear_release != other.gear_release) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandingGear_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandingGear_Response_

// alias to use template instance with default allocator
using LandingGear_Response =
  xplane_interfaces::srv::LandingGear_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xplane_interfaces

namespace xplane_interfaces
{

namespace srv
{

struct LandingGear
{
  using Request = xplane_interfaces::srv::LandingGear_Request;
  using Response = xplane_interfaces::srv::LandingGear_Response;
};

}  // namespace srv

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__STRUCT_HPP_
