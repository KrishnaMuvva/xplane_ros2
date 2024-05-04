// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__TRAITS_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/msg/detail/uav_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace xplane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UAVState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lattitude
  {
    out << "lattitude: ";
    rosidl_generator_traits::value_to_yaml(msg.lattitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: airspeed
  {
    out << "airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UAVState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: lattitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lattitude: ";
    rosidl_generator_traits::value_to_yaml(msg.lattitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
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

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UAVState & msg, bool use_flow_style = false)
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
  const xplane_interfaces::msg::UAVState & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::msg::UAVState & msg)
{
  return xplane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::msg::UAVState>()
{
  return "xplane_interfaces::msg::UAVState";
}

template<>
inline const char * name<xplane_interfaces::msg::UAVState>()
{
  return "xplane_interfaces/msg/UAVState";
}

template<>
struct has_fixed_size<xplane_interfaces::msg::UAVState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<xplane_interfaces::msg::UAVState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<xplane_interfaces::msg::UAVState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__TRAITS_HPP_
