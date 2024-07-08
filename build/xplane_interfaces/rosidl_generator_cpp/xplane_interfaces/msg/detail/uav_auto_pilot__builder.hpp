// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:msg/UAVAutoPilot.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__BUILDER_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/msg/detail/uav_auto_pilot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace msg
{

namespace builder
{

class Init_UAVAutoPilot_vertical_velocity
{
public:
  explicit Init_UAVAutoPilot_vertical_velocity(::xplane_interfaces::msg::UAVAutoPilot & msg)
  : msg_(msg)
  {}
  ::xplane_interfaces::msg::UAVAutoPilot vertical_velocity(::xplane_interfaces::msg::UAVAutoPilot::_vertical_velocity_type arg)
  {
    msg_.vertical_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVAutoPilot msg_;
};

class Init_UAVAutoPilot_airspeed
{
public:
  explicit Init_UAVAutoPilot_airspeed(::xplane_interfaces::msg::UAVAutoPilot & msg)
  : msg_(msg)
  {}
  Init_UAVAutoPilot_vertical_velocity airspeed(::xplane_interfaces::msg::UAVAutoPilot::_airspeed_type arg)
  {
    msg_.airspeed = std::move(arg);
    return Init_UAVAutoPilot_vertical_velocity(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVAutoPilot msg_;
};

class Init_UAVAutoPilot_altitude
{
public:
  explicit Init_UAVAutoPilot_altitude(::xplane_interfaces::msg::UAVAutoPilot & msg)
  : msg_(msg)
  {}
  Init_UAVAutoPilot_airspeed altitude(::xplane_interfaces::msg::UAVAutoPilot::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_UAVAutoPilot_airspeed(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVAutoPilot msg_;
};

class Init_UAVAutoPilot_heading
{
public:
  Init_UAVAutoPilot_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UAVAutoPilot_altitude heading(::xplane_interfaces::msg::UAVAutoPilot::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_UAVAutoPilot_altitude(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVAutoPilot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::msg::UAVAutoPilot>()
{
  return xplane_interfaces::msg::builder::Init_UAVAutoPilot_heading();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__BUILDER_HPP_
