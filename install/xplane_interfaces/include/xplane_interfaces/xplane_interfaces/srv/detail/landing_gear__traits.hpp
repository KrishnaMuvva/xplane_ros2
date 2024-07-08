// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:srv/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__TRAITS_HPP_
#define XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/srv/detail/landing_gear__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LandingGear_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: landing_gear
  {
    out << "landing_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_gear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LandingGear_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: landing_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landing_gear: ";
    rosidl_generator_traits::value_to_yaml(msg.landing_gear, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LandingGear_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xplane_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xplane_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xplane_interfaces::srv::LandingGear_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::srv::LandingGear_Request & msg)
{
  return xplane_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::srv::LandingGear_Request>()
{
  return "xplane_interfaces::srv::LandingGear_Request";
}

template<>
inline const char * name<xplane_interfaces::srv::LandingGear_Request>()
{
  return "xplane_interfaces/srv/LandingGear_Request";
}

template<>
struct has_fixed_size<xplane_interfaces::srv::LandingGear_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::srv::LandingGear_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::srv::LandingGear_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xplane_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LandingGear_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: gear_release
  {
    out << "gear_release: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_release, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LandingGear_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gear_release
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_release: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_release, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LandingGear_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xplane_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use xplane_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xplane_interfaces::srv::LandingGear_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::srv::LandingGear_Response & msg)
{
  return xplane_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::srv::LandingGear_Response>()
{
  return "xplane_interfaces::srv::LandingGear_Response";
}

template<>
inline const char * name<xplane_interfaces::srv::LandingGear_Response>()
{
  return "xplane_interfaces/srv/LandingGear_Response";
}

template<>
struct has_fixed_size<xplane_interfaces::srv::LandingGear_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::srv::LandingGear_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::srv::LandingGear_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xplane_interfaces::srv::LandingGear>()
{
  return "xplane_interfaces::srv::LandingGear";
}

template<>
inline const char * name<xplane_interfaces::srv::LandingGear>()
{
  return "xplane_interfaces/srv/LandingGear";
}

template<>
struct has_fixed_size<xplane_interfaces::srv::LandingGear>
  : std::integral_constant<
    bool,
    has_fixed_size<xplane_interfaces::srv::LandingGear_Request>::value &&
    has_fixed_size<xplane_interfaces::srv::LandingGear_Response>::value
  >
{
};

template<>
struct has_bounded_size<xplane_interfaces::srv::LandingGear>
  : std::integral_constant<
    bool,
    has_bounded_size<xplane_interfaces::srv::LandingGear_Request>::value &&
    has_bounded_size<xplane_interfaces::srv::LandingGear_Response>::value
  >
{
};

template<>
struct is_service<xplane_interfaces::srv::LandingGear>
  : std::true_type
{
};

template<>
struct is_service_request<xplane_interfaces::srv::LandingGear_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xplane_interfaces::srv::LandingGear_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__TRAITS_HPP_
