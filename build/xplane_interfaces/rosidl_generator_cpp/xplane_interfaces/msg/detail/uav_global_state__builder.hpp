// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__BUILDER_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/msg/detail/uav_global_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace msg
{

namespace builder
{

class Init_UAVGlobalState_groundspeed
{
public:
  explicit Init_UAVGlobalState_groundspeed(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  ::xplane_interfaces::msg::UAVGlobalState groundspeed(::xplane_interfaces::msg::UAVGlobalState::_groundspeed_type arg)
  {
    msg_.groundspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_global_yaw
{
public:
  explicit Init_UAVGlobalState_global_yaw(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  Init_UAVGlobalState_groundspeed global_yaw(::xplane_interfaces::msg::UAVGlobalState::_global_yaw_type arg)
  {
    msg_.global_yaw = std::move(arg);
    return Init_UAVGlobalState_groundspeed(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_global_pitch
{
public:
  explicit Init_UAVGlobalState_global_pitch(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  Init_UAVGlobalState_global_yaw global_pitch(::xplane_interfaces::msg::UAVGlobalState::_global_pitch_type arg)
  {
    msg_.global_pitch = std::move(arg);
    return Init_UAVGlobalState_global_yaw(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_global_roll
{
public:
  explicit Init_UAVGlobalState_global_roll(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  Init_UAVGlobalState_global_pitch global_roll(::xplane_interfaces::msg::UAVGlobalState::_global_roll_type arg)
  {
    msg_.global_roll = std::move(arg);
    return Init_UAVGlobalState_global_pitch(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_altitude_agl
{
public:
  explicit Init_UAVGlobalState_altitude_agl(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  Init_UAVGlobalState_global_roll altitude_agl(::xplane_interfaces::msg::UAVGlobalState::_altitude_agl_type arg)
  {
    msg_.altitude_agl = std::move(arg);
    return Init_UAVGlobalState_global_roll(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_altitude_msl
{
public:
  explicit Init_UAVGlobalState_altitude_msl(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  Init_UAVGlobalState_altitude_agl altitude_msl(::xplane_interfaces::msg::UAVGlobalState::_altitude_msl_type arg)
  {
    msg_.altitude_msl = std::move(arg);
    return Init_UAVGlobalState_altitude_agl(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_longitude
{
public:
  explicit Init_UAVGlobalState_longitude(::xplane_interfaces::msg::UAVGlobalState & msg)
  : msg_(msg)
  {}
  Init_UAVGlobalState_altitude_msl longitude(::xplane_interfaces::msg::UAVGlobalState::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_UAVGlobalState_altitude_msl(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

class Init_UAVGlobalState_lattitude
{
public:
  Init_UAVGlobalState_lattitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UAVGlobalState_longitude lattitude(::xplane_interfaces::msg::UAVGlobalState::_lattitude_type arg)
  {
    msg_.lattitude = std::move(arg);
    return Init_UAVGlobalState_longitude(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVGlobalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::msg::UAVGlobalState>()
{
  return xplane_interfaces::msg::builder::Init_UAVGlobalState_lattitude();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__BUILDER_HPP_
