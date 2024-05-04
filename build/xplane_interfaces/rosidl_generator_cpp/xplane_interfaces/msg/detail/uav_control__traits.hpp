// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:msg/UAVControl.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__TRAITS_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/msg/detail/uav_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UAVControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: alieron
  {
    out << "alieron: ";
    rosidl_generator_traits::value_to_yaml(msg.alieron, out);
    out << ", ";
  }

  // member: elevator
  {
    out << "elevator: ";
    rosidl_generator_traits::value_to_yaml(msg.elevator, out);
    out << ", ";
  }

  // member: rudder
  {
    out << "rudder: ";
    rosidl_generator_traits::value_to_yaml(msg.rudder, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UAVControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: alieron
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alieron: ";
    rosidl_generator_traits::value_to_yaml(msg.alieron, out);
    out << "\n";
  }

  // member: elevator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevator: ";
    rosidl_generator_traits::value_to_yaml(msg.elevator, out);
    out << "\n";
  }

  // member: rudder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rudder: ";
    rosidl_generator_traits::value_to_yaml(msg.rudder, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UAVControl & msg, bool use_flow_style = false)
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
  const xplane_interfaces::msg::UAVControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::msg::UAVControl & msg)
{
  return xplane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::msg::UAVControl>()
{
  return "xplane_interfaces::msg::UAVControl";
}

template<>
inline const char * name<xplane_interfaces::msg::UAVControl>()
{
  return "xplane_interfaces/msg/UAVControl";
}

template<>
struct has_fixed_size<xplane_interfaces::msg::UAVControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::msg::UAVControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::msg::UAVControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__TRAITS_HPP_
