// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__TRAITS_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/msg/detail/uav_global_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UAVGlobalState & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: altitude_msl
  {
    out << "altitude_msl: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_msl, out);
    out << ", ";
  }

  // member: altitude_agl
  {
    out << "altitude_agl: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_agl, out);
    out << ", ";
  }

  // member: global_roll
  {
    out << "global_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.global_roll, out);
    out << ", ";
  }

  // member: global_pitch
  {
    out << "global_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.global_pitch, out);
    out << ", ";
  }

  // member: global_yaw
  {
    out << "global_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.global_yaw, out);
    out << ", ";
  }

  // member: groundspeed
  {
    out << "groundspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.groundspeed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UAVGlobalState & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: altitude_msl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_msl: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_msl, out);
    out << "\n";
  }

  // member: altitude_agl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_agl: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_agl, out);
    out << "\n";
  }

  // member: global_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.global_roll, out);
    out << "\n";
  }

  // member: global_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.global_pitch, out);
    out << "\n";
  }

  // member: global_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.global_yaw, out);
    out << "\n";
  }

  // member: groundspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "groundspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.groundspeed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UAVGlobalState & msg, bool use_flow_style = false)
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
  const xplane_interfaces::msg::UAVGlobalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::msg::UAVGlobalState & msg)
{
  return xplane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::msg::UAVGlobalState>()
{
  return "xplane_interfaces::msg::UAVGlobalState";
}

template<>
inline const char * name<xplane_interfaces::msg::UAVGlobalState>()
{
  return "xplane_interfaces/msg/UAVGlobalState";
}

template<>
struct has_fixed_size<xplane_interfaces::msg::UAVGlobalState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::msg::UAVGlobalState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::msg::UAVGlobalState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__TRAITS_HPP_
