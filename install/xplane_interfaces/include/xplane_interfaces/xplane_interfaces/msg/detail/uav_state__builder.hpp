// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__BUILDER_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/msg/detail/uav_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace msg
{

namespace builder
{

class Init_UAVState_local_az
{
public:
  explicit Init_UAVState_local_az(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  ::xplane_interfaces::msg::UAVState local_az(::xplane_interfaces::msg::UAVState::_local_az_type arg)
  {
    msg_.local_az = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_ay
{
public:
  explicit Init_UAVState_local_ay(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_az local_ay(::xplane_interfaces::msg::UAVState::_local_ay_type arg)
  {
    msg_.local_ay = std::move(arg);
    return Init_UAVState_local_az(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_ax
{
public:
  explicit Init_UAVState_local_ax(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_ay local_ax(::xplane_interfaces::msg::UAVState::_local_ax_type arg)
  {
    msg_.local_ax = std::move(arg);
    return Init_UAVState_local_ay(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_vz
{
public:
  explicit Init_UAVState_local_vz(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_ax local_vz(::xplane_interfaces::msg::UAVState::_local_vz_type arg)
  {
    msg_.local_vz = std::move(arg);
    return Init_UAVState_local_ax(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_vy
{
public:
  explicit Init_UAVState_local_vy(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_vz local_vy(::xplane_interfaces::msg::UAVState::_local_vy_type arg)
  {
    msg_.local_vy = std::move(arg);
    return Init_UAVState_local_vz(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_vx
{
public:
  explicit Init_UAVState_local_vx(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_vy local_vx(::xplane_interfaces::msg::UAVState::_local_vx_type arg)
  {
    msg_.local_vx = std::move(arg);
    return Init_UAVState_local_vy(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_z
{
public:
  explicit Init_UAVState_local_z(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_vx local_z(::xplane_interfaces::msg::UAVState::_local_z_type arg)
  {
    msg_.local_z = std::move(arg);
    return Init_UAVState_local_vx(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_y
{
public:
  explicit Init_UAVState_local_y(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_z local_y(::xplane_interfaces::msg::UAVState::_local_y_type arg)
  {
    msg_.local_y = std::move(arg);
    return Init_UAVState_local_z(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_local_x
{
public:
  explicit Init_UAVState_local_x(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_y local_x(::xplane_interfaces::msg::UAVState::_local_x_type arg)
  {
    msg_.local_x = std::move(arg);
    return Init_UAVState_local_y(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_airspeed
{
public:
  explicit Init_UAVState_airspeed(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_local_x airspeed(::xplane_interfaces::msg::UAVState::_airspeed_type arg)
  {
    msg_.airspeed = std::move(arg);
    return Init_UAVState_local_x(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_heading
{
public:
  explicit Init_UAVState_heading(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_airspeed heading(::xplane_interfaces::msg::UAVState::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_UAVState_airspeed(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_pitch
{
public:
  explicit Init_UAVState_pitch(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_heading pitch(::xplane_interfaces::msg::UAVState::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_UAVState_heading(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_roll
{
public:
  explicit Init_UAVState_roll(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_pitch roll(::xplane_interfaces::msg::UAVState::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_UAVState_pitch(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_altitude
{
public:
  explicit Init_UAVState_altitude(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_roll altitude(::xplane_interfaces::msg::UAVState::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_UAVState_roll(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_longitude
{
public:
  explicit Init_UAVState_longitude(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_altitude longitude(::xplane_interfaces::msg::UAVState::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_UAVState_altitude(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_lattitude
{
public:
  explicit Init_UAVState_lattitude(::xplane_interfaces::msg::UAVState & msg)
  : msg_(msg)
  {}
  Init_UAVState_longitude lattitude(::xplane_interfaces::msg::UAVState::_lattitude_type arg)
  {
    msg_.lattitude = std::move(arg);
    return Init_UAVState_longitude(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

class Init_UAVState_header
{
public:
  Init_UAVState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UAVState_lattitude header(::xplane_interfaces::msg::UAVState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UAVState_lattitude(msg_);
  }

private:
  ::xplane_interfaces::msg::UAVState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::msg::UAVState>()
{
  return xplane_interfaces::msg::builder::Init_UAVState_header();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__BUILDER_HPP_
