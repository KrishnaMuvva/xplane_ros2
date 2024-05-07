// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xplane_interfaces:msg/UAVType.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__STRUCT_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xplane_interfaces__msg__UAVType __attribute__((deprecated))
#else
# define DEPRECATED__xplane_interfaces__msg__UAVType __declspec(deprecated)
#endif

namespace xplane_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UAVType_
{
  using Type = UAVType_<ContainerAllocator>;

  explicit UAVType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->name = "";
    }
  }

  explicit UAVType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->name = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xplane_interfaces::msg::UAVType_<ContainerAllocator> *;
  using ConstRawPtr =
    const xplane_interfaces::msg::UAVType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xplane_interfaces::msg::UAVType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xplane_interfaces__msg__UAVType
    std::shared_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xplane_interfaces__msg__UAVType
    std::shared_ptr<xplane_interfaces::msg::UAVType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UAVType_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const UAVType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UAVType_

// alias to use template instance with default allocator
using UAVType =
  xplane_interfaces::msg::UAVType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__STRUCT_HPP_
