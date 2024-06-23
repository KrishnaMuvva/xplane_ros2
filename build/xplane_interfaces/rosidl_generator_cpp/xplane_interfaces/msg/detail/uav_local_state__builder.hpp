// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:msg/UAVLocalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__BUILDER_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/msg/detail/uav_local_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace msg
{

namespace builder
{

class Init_UAVLocalState_airspeed
{
public:
  explicit Init_UAVLocalState_airspeed(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  ::xplane_interfaces::msg::UAVLocalState airspeed(::xplane_interfaces::msg::UAVLocalState::_airspeed_type arg)
  {
    msg_.airspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_yaw
{
public:
  explicit Init_UAVLocalState_yaw(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_airspeed yaw(::xplane_interfaces::msg::UAVLocalState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_UAVLocalState_airspeed(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_pitch
{
public:
  explicit Init_UAVLocalState_pitch(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_yaw pitch(::xplane_interfaces::msg::UAVLocalState::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_UAVLocalState_yaw(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_roll
{
public:
  explicit Init_UAVLocalState_roll(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_pitch roll(::xplane_interfaces::msg::UAVLocalState::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_UAVLocalState_pitch(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_az
{
public:
  explicit Init_UAVLocalState_local_az(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_roll local_az(::xplane_interfaces::msg::UAVLocalState::_local_az_type arg)
  {
    msg_.local_az = std::move(arg);
    return Init_UAVLocalState_roll(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_ay
{
public:
  explicit Init_UAVLocalState_local_ay(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_az local_ay(::xplane_interfaces::msg::UAVLocalState::_local_ay_type arg)
  {
    msg_.local_ay = std::move(arg);
    return Init_UAVLocalState_local_az(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_ax
{
public:
  explicit Init_UAVLocalState_local_ax(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_ay local_ax(::xplane_interfaces::msg::UAVLocalState::_local_ax_type arg)
  {
    msg_.local_ax = std::move(arg);
    return Init_UAVLocalState_local_ay(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_vz
{
public:
  explicit Init_UAVLocalState_local_vz(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_ax local_vz(::xplane_interfaces::msg::UAVLocalState::_local_vz_type arg)
  {
    msg_.local_vz = std::move(arg);
    return Init_UAVLocalState_local_ax(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_vy
{
public:
  explicit Init_UAVLocalState_local_vy(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_vz local_vy(::xplane_interfaces::msg::UAVLocalState::_local_vy_type arg)
  {
    msg_.local_vy = std::move(arg);
    return Init_UAVLocalState_local_vz(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_vx
{
public:
  explicit Init_UAVLocalState_local_vx(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_vy local_vx(::xplane_interfaces::msg::UAVLocalState::_local_vx_type arg)
  {
    msg_.local_vx = std::move(arg);
    return Init_UAVLocalState_local_vy(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_z
{
public:
  explicit Init_UAVLocalState_local_z(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_vx local_z(::xplane_interfaces::msg::UAVLocalState::_local_z_type arg)
  {
    msg_.local_z = std::move(arg);
    return Init_UAVLocalState_local_vx(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_y
{
public:
  explicit Init_UAVLocalState_local_y(::xplane_interfaces::msg::UAVLocalState & msg)
  : msg_(msg)
  {}
  Init_UAVLocalState_local_z local_y(::xplane_interfaces::msg::UAVLocalState::_local_y_type arg)
  {
    msg_.local_y = std::move(arg);
    return Init_UAVLocalState_local_z(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

class Init_UAVLocalState_local_x
{
public:
  Init_UAVLocalState_local_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UAVLocalState_local_y local_x(::xplane_interfaces::msg::UAVLocalState::_local_x_type arg)
  {
    msg_.local_x = std::move(arg);
    return Init_UAVLocalState_local_y(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVLocalState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::msg::UAVLocalState>()
{
  return xplane_interfaces::msg::builder::Init_UAVLocalState_local_x();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__BUILDER_HPP_
