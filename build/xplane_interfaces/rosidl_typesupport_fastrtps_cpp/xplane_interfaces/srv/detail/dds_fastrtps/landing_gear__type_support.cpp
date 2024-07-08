// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xplane_interfaces:srv/LandingGear.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/srv/detail/landing_gear__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xplane_interfaces/srv/detail/landing_gear__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace xplane_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
cdr_serialize(
  const xplane_interfaces::srv::LandingGear_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: landing_gear
  cdr << (ros_message.landing_gear ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xplane_interfaces::srv::LandingGear_Request & ros_message)
{
  // Member: landing_gear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.landing_gear = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
get_serialized_size(
  const xplane_interfaces::srv::LandingGear_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: landing_gear
  {
    size_t item_size = sizeof(ros_message.landing_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
max_serialized_size_LandingGear_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: landing_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xplane_interfaces::srv::LandingGear_Request;
    is_plain =
      (
      offsetof(DataType, landing_gear) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LandingGear_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xplane_interfaces::srv::LandingGear_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LandingGear_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xplane_interfaces::srv::LandingGear_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LandingGear_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xplane_interfaces::srv::LandingGear_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LandingGear_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LandingGear_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LandingGear_Request__callbacks = {
  "xplane_interfaces::srv",
  "LandingGear_Request",
  _LandingGear_Request__cdr_serialize,
  _LandingGear_Request__cdr_deserialize,
  _LandingGear_Request__get_serialized_size,
  _LandingGear_Request__max_serialized_size
};

static rosidl_message_type_support_t _LandingGear_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LandingGear_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace xplane_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xplane_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<xplane_interfaces::srv::LandingGear_Request>()
{
  return &xplane_interfaces::srv::typesupport_fastrtps_cpp::_LandingGear_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xplane_interfaces, srv, LandingGear_Request)() {
  return &xplane_interfaces::srv::typesupport_fastrtps_cpp::_LandingGear_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace xplane_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
cdr_serialize(
  const xplane_interfaces::srv::LandingGear_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gear_release
  cdr << (ros_message.gear_release ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xplane_interfaces::srv::LandingGear_Response & ros_message)
{
  // Member: gear_release
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gear_release = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
get_serialized_size(
  const xplane_interfaces::srv::LandingGear_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gear_release
  {
    size_t item_size = sizeof(ros_message.gear_release);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xplane_interfaces
max_serialized_size_LandingGear_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: gear_release
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xplane_interfaces::srv::LandingGear_Response;
    is_plain =
      (
      offsetof(DataType, gear_release) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LandingGear_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xplane_interfaces::srv::LandingGear_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LandingGear_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xplane_interfaces::srv::LandingGear_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LandingGear_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xplane_interfaces::srv::LandingGear_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LandingGear_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LandingGear_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LandingGear_Response__callbacks = {
  "xplane_interfaces::srv",
  "LandingGear_Response",
  _LandingGear_Response__cdr_serialize,
  _LandingGear_Response__cdr_deserialize,
  _LandingGear_Response__get_serialized_size,
  _LandingGear_Response__max_serialized_size
};

static rosidl_message_type_support_t _LandingGear_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LandingGear_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace xplane_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xplane_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<xplane_interfaces::srv::LandingGear_Response>()
{
  return &xplane_interfaces::srv::typesupport_fastrtps_cpp::_LandingGear_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xplane_interfaces, srv, LandingGear_Response)() {
  return &xplane_interfaces::srv::typesupport_fastrtps_cpp::_LandingGear_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace xplane_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _LandingGear__callbacks = {
  "xplane_interfaces::srv",
  "LandingGear",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xplane_interfaces, srv, LandingGear_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xplane_interfaces, srv, LandingGear_Response)(),
};

static rosidl_service_type_support_t _LandingGear__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LandingGear__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace xplane_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xplane_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<xplane_interfaces::srv::LandingGear>()
{
  return &xplane_interfaces::srv::typesupport_fastrtps_cpp::_LandingGear__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xplane_interfaces, srv, LandingGear)() {
  return &xplane_interfaces::srv::typesupport_fastrtps_cpp::_LandingGear__handle;
}

#ifdef __cplusplus
}
#endif
