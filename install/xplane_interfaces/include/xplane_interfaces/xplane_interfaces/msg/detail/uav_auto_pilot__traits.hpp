// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:msg/UAVAutoPilot.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__TRAITS_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/msg/detail/uav_auto_pilot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UAVAutoPilot & msg,
  std::ostream & out)
{
  out << "{";
  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: airspeed
  {
    out << "airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed, out);
    out << ", ";
  }

  // member: vertical_velocity
  {
    out << "vertical_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UAVAutoPilot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed, out);
    out << "\n";
  }

  // member: vertical_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UAVAutoPilot & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xplane_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xplane_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xplane_interfaces::msg::UAVAutoPilot & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::msg::UAVAutoPilot & msg)
{
  return xplane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::msg::UAVAutoPilot>()
{
  return "xplane_interfaces::msg::UAVAutoPilot";
}

template<>
inline const char * name<xplane_interfaces::msg::UAVAutoPilot>()
{
  return "xplane_interfaces/msg/UAVAutoPilot";
}

template<>
struct has_fixed_size<xplane_interfaces::msg::UAVAutoPilot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::msg::UAVAutoPilot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::msg::UAVAutoPilot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__TRAITS_HPP_
