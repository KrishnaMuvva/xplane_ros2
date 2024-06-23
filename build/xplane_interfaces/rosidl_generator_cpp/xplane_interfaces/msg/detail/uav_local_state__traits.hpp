// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:msg/UAVLocalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__TRAITS_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/msg/detail/uav_local_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UAVLocalState & msg,
  std::ostream & out)
{
  out << "{";
  // member: local_x
  {
    out << "local_x: ";
    rosidl_generator_traits::value_to_yaml(msg.local_x, out);
    out << ", ";
  }

  // member: local_y
  {
    out << "local_y: ";
    rosidl_generator_traits::value_to_yaml(msg.local_y, out);
    out << ", ";
  }

  // member: local_z
  {
    out << "local_z: ";
    rosidl_generator_traits::value_to_yaml(msg.local_z, out);
    out << ", ";
  }

  // member: local_vx
  {
    out << "local_vx: ";
    rosidl_generator_traits::value_to_yaml(msg.local_vx, out);
    out << ", ";
  }

  // member: local_vy
  {
    out << "local_vy: ";
    rosidl_generator_traits::value_to_yaml(msg.local_vy, out);
    out << ", ";
  }

  // member: local_vz
  {
    out << "local_vz: ";
    rosidl_generator_traits::value_to_yaml(msg.local_vz, out);
    out << ", ";
  }

  // member: local_ax
  {
    out << "local_ax: ";
    rosidl_generator_traits::value_to_yaml(msg.local_ax, out);
    out << ", ";
  }

  // member: local_ay
  {
    out << "local_ay: ";
    rosidl_generator_traits::value_to_yaml(msg.local_ay, out);
    out << ", ";
  }

  // member: local_az
  {
    out << "local_az: ";
    rosidl_generator_traits::value_to_yaml(msg.local_az, out);
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

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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
  const UAVLocalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: local_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_x: ";
    rosidl_generator_traits::value_to_yaml(msg.local_x, out);
    out << "\n";
  }

  // member: local_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_y: ";
    rosidl_generator_traits::value_to_yaml(msg.local_y, out);
    out << "\n";
  }

  // member: local_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_z: ";
    rosidl_generator_traits::value_to_yaml(msg.local_z, out);
    out << "\n";
  }

  // member: local_vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_vx: ";
    rosidl_generator_traits::value_to_yaml(msg.local_vx, out);
    out << "\n";
  }

  // member: local_vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_vy: ";
    rosidl_generator_traits::value_to_yaml(msg.local_vy, out);
    out << "\n";
  }

  // member: local_vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_vz: ";
    rosidl_generator_traits::value_to_yaml(msg.local_vz, out);
    out << "\n";
  }

  // member: local_ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_ax: ";
    rosidl_generator_traits::value_to_yaml(msg.local_ax, out);
    out << "\n";
  }

  // member: local_ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_ay: ";
    rosidl_generator_traits::value_to_yaml(msg.local_ay, out);
    out << "\n";
  }

  // member: local_az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_az: ";
    rosidl_generator_traits::value_to_yaml(msg.local_az, out);
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

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
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

inline std::string to_yaml(const UAVLocalState & msg, bool use_flow_style = false)
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
  const xplane_interfaces::msg::UAVLocalState & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::msg::UAVLocalState & msg)
{
  return xplane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::msg::UAVLocalState>()
{
  return "xplane_interfaces::msg::UAVLocalState";
}

template<>
inline const char * name<xplane_interfaces::msg::UAVLocalState>()
{
  return "xplane_interfaces/msg/UAVLocalState";
}

template<>
struct has_fixed_size<xplane_interfaces::msg::UAVLocalState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::msg::UAVLocalState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::msg::UAVLocalState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__TRAITS_HPP_
