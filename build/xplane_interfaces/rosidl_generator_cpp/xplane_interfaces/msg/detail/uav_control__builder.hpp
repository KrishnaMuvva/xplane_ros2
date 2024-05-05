// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:msg/UAVControl.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__BUILDER_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/msg/detail/uav_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace msg
{

namespace builder
{

class Init_UAVControl_rudder
{
public:
  explicit Init_UAVControl_rudder(::xplane_interfaces::msg::UAVControl & msg)
  : msg_(msg)
  {}
  ::xplane_interfaces::msg::UAVControl rudder(::xplane_interfaces::msg::UAVControl::_rudder_type arg)
  {
    msg_.rudder = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVControl msg_;
};

class Init_UAVControl_elevator
{
public:
  explicit Init_UAVControl_elevator(::xplane_interfaces::msg::UAVControl & msg)
  : msg_(msg)
  {}
  Init_UAVControl_rudder elevator(::xplane_interfaces::msg::UAVControl::_elevator_type arg)
  {
    msg_.elevator = std::move(arg);
    return Init_UAVControl_rudder(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVControl msg_;
};

class Init_UAVControl_aileron
{
public:
  explicit Init_UAVControl_aileron(::xplane_interfaces::msg::UAVControl & msg)
  : msg_(msg)
  {}
  Init_UAVControl_elevator aileron(::xplane_interfaces::msg::UAVControl::_aileron_type arg)
  {
    msg_.aileron = std::move(arg);
    return Init_UAVControl_elevator(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVControl msg_;
};

class Init_UAVControl_throttle
{
public:
  Init_UAVControl_throttle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UAVControl_aileron throttle(::xplane_interfaces::msg::UAVControl::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_UAVControl_aileron(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::msg::UAVControl>()
{
  return xplane_interfaces::msg::builder::Init_UAVControl_throttle();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__BUILDER_HPP_
