// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__BUILDER_HPP_
#define XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xplane_interfaces/srv/detail/parking_brake__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xplane_interfaces
{

namespace srv
{

namespace builder
{

class Init_ParkingBrake_Request_parking_brake
{
public:
  Init_ParkingBrake_Request_parking_brake()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xplane_interfaces::srv::ParkingBrake_Request parking_brake(::xplane_interfaces::srv::ParkingBrake_Request::_parking_brake_type arg)
  {
    msg_.parking_brake = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::srv::ParkingBrake_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::srv::ParkingBrake_Request>()
{
  return xplane_interfaces::srv::builder::Init_ParkingBrake_Request_parking_brake();
}

}  // namespace xplane_interfaces


namespace xplane_interfaces
{

namespace srv
{

namespace builder
{

class Init_ParkingBrake_Response_brake_release
{
public:
  Init_ParkingBrake_Response_brake_release()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xplane_interfaces::srv::ParkingBrake_Response brake_release(::xplane_interfaces::srv::ParkingBrake_Response::_brake_release_type arg)
  {
    msg_.brake_release = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xplane_interfaces::srv::ParkingBrake_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xplane_interfaces::srv::ParkingBrake_Response>()
{
  return xplane_interfaces::srv::builder::Init_ParkingBrake_Response_brake_release();
}

}  // namespace xplane_interfaces

#endif  // XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__BUILDER_HPP_
