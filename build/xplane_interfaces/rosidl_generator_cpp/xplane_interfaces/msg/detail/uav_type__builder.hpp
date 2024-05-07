// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:msg/UAVType.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__BUILDER_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/msg/detail/uav_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace msg
{

namespace builder
{

class Init_UAVType_name
{
public:
  explicit Init_UAVType_name(::xplane_interfaces::msg::UAVType & msg)
  : msg_(msg)
  {}
  ::xplane_interfaces::msg::UAVType name(::xplane_interfaces::msg::UAVType::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVType msg_;
};

class Init_UAVType_id
{
public:
  Init_UAVType_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UAVType_name id(::xplane_interfaces::msg::UAVType::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_UAVType_name(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::msg::UAVType>()
{
  return xplane_interfaces::msg::builder::Init_UAVType_id();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__BUILDER_HPP_
