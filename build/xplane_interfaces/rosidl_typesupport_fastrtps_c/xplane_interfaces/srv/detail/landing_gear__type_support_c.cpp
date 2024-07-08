// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xplane_interfaces:srv/LandingGear.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/srv/detail/landing_gear__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xplane_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xplane_interfaces/srv/detail/landing_gear__struct.h"
#include "xplane_interfaces/srv/detail/landing_gear__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LandingGear_Request__ros_msg_type = xplane_interfaces__srv__LandingGear_Request;

static bool _LandingGear_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LandingGear_Request__ros_msg_type * ros_message = static_cast<const _LandingGear_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: landing_gear
  {
    cdr << (ros_message->landing_gear ? true : false);
  }

  return true;
}

static bool _LandingGear_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LandingGear_Request__ros_msg_type * ros_message = static_cast<_LandingGear_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: landing_gear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->landing_gear = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t get_serialized_size_xplane_interfaces__srv__LandingGear_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LandingGear_Request__ros_msg_type * ros_message = static_cast<const _LandingGear_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name landing_gear
  {
    size_t item_size = sizeof(ros_message->landing_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LandingGear_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xplane_interfaces__srv__LandingGear_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t max_serialized_size_xplane_interfaces__srv__LandingGear_Request(
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

  // member: landing_gear
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
    using DataType = xplane_interfaces__srv__LandingGear_Request;
    is_plain =
      (
      offsetof(DataType, landing_gear) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LandingGear_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xplane_interfaces__srv__LandingGear_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LandingGear_Request = {
  "xplane_interfaces::srv",
  "LandingGear_Request",
  _LandingGear_Request__cdr_serialize,
  _LandingGear_Request__cdr_deserialize,
  _LandingGear_Request__get_serialized_size,
  _LandingGear_Request__max_serialized_size
};

static rosidl_message_type_support_t _LandingGear_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LandingGear_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, LandingGear_Request)() {
  return &_LandingGear_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "xplane_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "xplane_interfaces/srv/detail/landing_gear__struct.h"
// already included above
// #include "xplane_interfaces/srv/detail/landing_gear__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _LandingGear_Response__ros_msg_type = xplane_interfaces__srv__LandingGear_Response;

static bool _LandingGear_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LandingGear_Response__ros_msg_type * ros_message = static_cast<const _LandingGear_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gear_release
  {
    cdr << (ros_message->gear_release ? true : false);
  }

  return true;
}

static bool _LandingGear_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LandingGear_Response__ros_msg_type * ros_message = static_cast<_LandingGear_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: gear_release
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gear_release = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t get_serialized_size_xplane_interfaces__srv__LandingGear_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LandingGear_Response__ros_msg_type * ros_message = static_cast<const _LandingGear_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gear_release
  {
    size_t item_size = sizeof(ros_message->gear_release);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LandingGear_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xplane_interfaces__srv__LandingGear_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t max_serialized_size_xplane_interfaces__srv__LandingGear_Response(
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

  // member: gear_release
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
    using DataType = xplane_interfaces__srv__LandingGear_Response;
    is_plain =
      (
      offsetof(DataType, gear_release) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LandingGear_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xplane_interfaces__srv__LandingGear_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LandingGear_Response = {
  "xplane_interfaces::srv",
  "LandingGear_Response",
  _LandingGear_Response__cdr_serialize,
  _LandingGear_Response__cdr_deserialize,
  _LandingGear_Response__get_serialized_size,
  _LandingGear_Response__max_serialized_size
};

static rosidl_message_type_support_t _LandingGear_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LandingGear_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, LandingGear_Response)() {
  return &_LandingGear_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "xplane_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xplane_interfaces/srv/landing_gear.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LandingGear__callbacks = {
  "xplane_interfaces::srv",
  "LandingGear",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, LandingGear_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, LandingGear_Response)(),
};

static rosidl_service_type_support_t LandingGear__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &LandingGear__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, LandingGear)() {
  return &LandingGear__handle;
}

#if defined(__cplusplus)
}
#endif
