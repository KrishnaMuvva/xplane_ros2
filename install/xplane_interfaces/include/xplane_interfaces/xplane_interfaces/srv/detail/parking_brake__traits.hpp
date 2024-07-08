// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__TRAITS_HPP_
#define XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xplane_interfaces/srv/detail/parking_brake__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xplane_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ParkingBrake_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: parking_brake
  {
    out << "parking_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_brake, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingBrake_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parking_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_brake, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingBrake_Request & msg, bool use_flow_style = false)
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
  const xplane_interfaces::srv::ParkingBrake_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::srv::ParkingBrake_Request & msg)
{
  return xplane_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::srv::ParkingBrake_Request>()
{
  return "xplane_interfaces::srv::ParkingBrake_Request";
}

template<>
inline const char * name<xplane_interfaces::srv::ParkingBrake_Request>()
{
  return "xplane_interfaces/srv/ParkingBrake_Request";
}

template<>
struct has_fixed_size<xplane_interfaces::srv::ParkingBrake_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::srv::ParkingBrake_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::srv::ParkingBrake_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xplane_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ParkingBrake_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: brake_release
  {
    out << "brake_release: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_release, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingBrake_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: brake_release
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_release: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_release, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingBrake_Response & msg, bool use_flow_style = false)
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
  const xplane_interfaces::srv::ParkingBrake_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xplane_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xplane_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const xplane_interfaces::srv::ParkingBrake_Response & msg)
{
  return xplane_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xplane_interfaces::srv::ParkingBrake_Response>()
{
  return "xplane_interfaces::srv::ParkingBrake_Response";
}

template<>
inline const char * name<xplane_interfaces::srv::ParkingBrake_Response>()
{
  return "xplane_interfaces/srv/ParkingBrake_Response";
}

template<>
struct has_fixed_size<xplane_interfaces::srv::ParkingBrake_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xplane_interfaces::srv::ParkingBrake_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xplane_interfaces::srv::ParkingBrake_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xplane_interfaces::srv::ParkingBrake>()
{
  return "xplane_interfaces::srv::ParkingBrake";
}

template<>
inline const char * name<xplane_interfaces::srv::ParkingBrake>()
{
  return "xplane_interfaces/srv/ParkingBrake";
}

template<>
struct has_fixed_size<xplane_interfaces::srv::ParkingBrake>
  : std::integral_constant<
    bool,
    has_fixed_size<xplane_interfaces::srv::ParkingBrake_Request>::value &&
    has_fixed_size<xplane_interfaces::srv::ParkingBrake_Response>::value
  >
{
};

template<>
struct has_bounded_size<xplane_interfaces::srv::ParkingBrake>
  : std::integral_constant<
    bool,
    has_bounded_size<xplane_interfaces::srv::ParkingBrake_Request>::value &&
    has_bounded_size<xplane_interfaces::srv::ParkingBrake_Response>::value
  >
{
};

template<>
struct is_service<xplane_interfaces::srv::ParkingBrake>
  : std::true_type
{
};

template<>
struct is_service_request<xplane_interfaces::srv::ParkingBrake_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xplane_interfaces::srv::ParkingBrake_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__TRAITS_HPP_
