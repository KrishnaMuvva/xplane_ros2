// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:msg/UAVType.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__TRAITS_HPP_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/msg/detail/uav_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UAVType & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UAVType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UAVType & msg, bool use_flow_style = false)
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
  const xplane_interfaces::msg::UAVType & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::msg::UAVType & msg)
{
  return xplane_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::msg::UAVType>()
{
  return "xplane_interfaces::msg::UAVType";
}

template<>
inline const char * name<xplane_interfaces::msg::UAVType>()
{
  return "xplane_interfaces/msg/UAVType";
}

template<>
struct has_fixed_size<xplane_interfaces::msg::UAVType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xplane_interfaces::msg::UAVType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xplane_interfaces::msg::UAVType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__TRAITS_HPP_
