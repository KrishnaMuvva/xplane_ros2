// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/srv/detail/parking_brake__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xplane_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xplane_interfaces/srv/detail/parking_brake__struct.h"
#include "xplane_interfaces/srv/detail/parking_brake__functions.h"
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


using _ParkingBrake_Request__ros_msg_type = xplane_interfaces__srv__ParkingBrake_Request;

static bool _ParkingBrake_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParkingBrake_Request__ros_msg_type * ros_message = static_cast<const _ParkingBrake_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: parking_brake
  {
    cdr << (ros_message->parking_brake ? true : false);
  }

  return true;
}

static bool _ParkingBrake_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParkingBrake_Request__ros_msg_type * ros_message = static_cast<_ParkingBrake_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: parking_brake
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->parking_brake = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t get_serialized_size_xplane_interfaces__srv__ParkingBrake_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParkingBrake_Request__ros_msg_type * ros_message = static_cast<const _ParkingBrake_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name parking_brake
  {
    size_t item_size = sizeof(ros_message->parking_brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParkingBrake_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xplane_interfaces__srv__ParkingBrake_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t max_serialized_size_xplane_interfaces__srv__ParkingBrake_Request(
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

  // member: parking_brake
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
    using DataType = xplane_interfaces__srv__ParkingBrake_Request;
    is_plain =
      (
      offsetof(DataType, parking_brake) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParkingBrake_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xplane_interfaces__srv__ParkingBrake_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParkingBrake_Request = {
  "xplane_interfaces::srv",
  "ParkingBrake_Request",
  _ParkingBrake_Request__cdr_serialize,
  _ParkingBrake_Request__cdr_deserialize,
  _ParkingBrake_Request__get_serialized_size,
  _ParkingBrake_Request__max_serialized_size
};

static rosidl_message_type_support_t _ParkingBrake_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParkingBrake_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, ParkingBrake_Request)() {
  return &_ParkingBrake_Request__type_support;
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
// #include "xplane_interfaces/srv/detail/parking_brake__struct.h"
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__functions.h"
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


using _ParkingBrake_Response__ros_msg_type = xplane_interfaces__srv__ParkingBrake_Response;

static bool _ParkingBrake_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParkingBrake_Response__ros_msg_type * ros_message = static_cast<const _ParkingBrake_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: brake_release
  {
    cdr << (ros_message->brake_release ? true : false);
  }

  return true;
}

static bool _ParkingBrake_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParkingBrake_Response__ros_msg_type * ros_message = static_cast<_ParkingBrake_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: brake_release
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->brake_release = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t get_serialized_size_xplane_interfaces__srv__ParkingBrake_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParkingBrake_Response__ros_msg_type * ros_message = static_cast<const _ParkingBrake_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brake_release
  {
    size_t item_size = sizeof(ros_message->brake_release);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParkingBrake_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xplane_interfaces__srv__ParkingBrake_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t max_serialized_size_xplane_interfaces__srv__ParkingBrake_Response(
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

  // member: brake_release
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
    using DataType = xplane_interfaces__srv__ParkingBrake_Response;
    is_plain =
      (
      offsetof(DataType, brake_release) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParkingBrake_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xplane_interfaces__srv__ParkingBrake_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParkingBrake_Response = {
  "xplane_interfaces::srv",
  "ParkingBrake_Response",
  _ParkingBrake_Response__cdr_serialize,
  _ParkingBrake_Response__cdr_deserialize,
  _ParkingBrake_Response__get_serialized_size,
  _ParkingBrake_Response__max_serialized_size
};

static rosidl_message_type_support_t _ParkingBrake_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParkingBrake_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, ParkingBrake_Response)() {
  return &_ParkingBrake_Response__type_support;
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
#include "xplane_interfaces/srv/parking_brake.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ParkingBrake__callbacks = {
  "xplane_interfaces::srv",
  "ParkingBrake",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, ParkingBrake_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, ParkingBrake_Response)(),
};

static rosidl_service_type_support_t ParkingBrake__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ParkingBrake__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, srv, ParkingBrake)() {
  return &ParkingBrake__handle;
}

#if defined(__cplusplus)
}
#endif
