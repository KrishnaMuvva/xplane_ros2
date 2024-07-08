// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:srv/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__BUILDER_HPP_
#define XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/srv/detail/landing_gear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace srv
{

namespace builder
{

class Init_LandingGear_Request_landing_gear
{
public:
  Init_LandingGear_Request_landing_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xplane_interfaces::srv::LandingGear_Request landing_gear(::xplane_interfaces::srv::LandingGear_Request::_landing_gear_type arg)
  {
    msg_.landing_gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::srv::LandingGear_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::srv::LandingGear_Request>()
{
  return xplane_interfaces::srv::builder::Init_LandingGear_Request_landing_gear();
}

}  // namespace xplane_interfaces


namespace xplane_interfaces
{

namespace srv
{

namespace builder
{

class Init_LandingGear_Response_gear_release
{
public:
  Init_LandingGear_Response_gear_release()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xplane_interfaces::srv::LandingGear_Response gear_release(::xplane_interfaces::srv::LandingGear_Response::_gear_release_type arg)
  {
    msg_.gear_release = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::srv::LandingGear_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::srv::LandingGear_Response>()
{
  return xplane_interfaces::srv::builder::Init_LandingGear_Response_gear_release();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__BUILDER_HPP_
