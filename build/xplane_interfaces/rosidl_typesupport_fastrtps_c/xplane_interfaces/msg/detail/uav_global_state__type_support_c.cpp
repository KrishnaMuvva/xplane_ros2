// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/msg/detail/uav_global_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xplane_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xplane_interfaces/msg/detail/uav_global_state__struct.h"
#include "xplane_interfaces/msg/detail/uav_global_state__functions.h"
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


using _UAVGlobalState__ros_msg_type = xplane_interfaces__msg__UAVGlobalState;

static bool _UAVGlobalState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UAVGlobalState__ros_msg_type * ros_message = static_cast<const _UAVGlobalState__ros_msg_type *>(untyped_ros_message);
  // Field name: lattitude
  {
    cdr << ros_message->lattitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: altitude_msl
  {
    cdr << ros_message->altitude_msl;
  }

  // Field name: altitude_agl
  {
    cdr << ros_message->altitude_agl;
  }

  // Field name: global_roll
  {
    cdr << ros_message->global_roll;
  }

  // Field name: global_pitch
  {
    cdr << ros_message->global_pitch;
  }

  // Field name: global_yaw
  {
    cdr << ros_message->global_yaw;
  }

  // Field name: groundspeed
  {
    cdr << ros_message->groundspeed;
  }

  return true;
}

static bool _UAVGlobalState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UAVGlobalState__ros_msg_type * ros_message = static_cast<_UAVGlobalState__ros_msg_type *>(untyped_ros_message);
  // Field name: lattitude
  {
    cdr >> ros_message->lattitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: altitude_msl
  {
    cdr >> ros_message->altitude_msl;
  }

  // Field name: altitude_agl
  {
    cdr >> ros_message->altitude_agl;
  }

  // Field name: global_roll
  {
    cdr >> ros_message->global_roll;
  }

  // Field name: global_pitch
  {
    cdr >> ros_message->global_pitch;
  }

  // Field name: global_yaw
  {
    cdr >> ros_message->global_yaw;
  }

  // Field name: groundspeed
  {
    cdr >> ros_message->groundspeed;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t get_serialized_size_xplane_interfaces__msg__UAVGlobalState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UAVGlobalState__ros_msg_type * ros_message = static_cast<const _UAVGlobalState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lattitude
  {
    size_t item_size = sizeof(ros_message->lattitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_msl
  {
    size_t item_size = sizeof(ros_message->altitude_msl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_agl
  {
    size_t item_size = sizeof(ros_message->altitude_agl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_roll
  {
    size_t item_size = sizeof(ros_message->global_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_pitch
  {
    size_t item_size = sizeof(ros_message->global_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_yaw
  {
    size_t item_size = sizeof(ros_message->global_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name groundspeed
  {
    size_t item_size = sizeof(ros_message->groundspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UAVGlobalState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xplane_interfaces__msg__UAVGlobalState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xplane_interfaces
size_t max_serialized_size_xplane_interfaces__msg__UAVGlobalState(
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

  // member: lattitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude_msl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude_agl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: global_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: global_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: global_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: groundspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xplane_interfaces__msg__UAVGlobalState;
    is_plain =
      (
      offsetof(DataType, groundspeed) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UAVGlobalState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xplane_interfaces__msg__UAVGlobalState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UAVGlobalState = {
  "xplane_interfaces::msg",
  "UAVGlobalState",
  _UAVGlobalState__cdr_serialize,
  _UAVGlobalState__cdr_deserialize,
  _UAVGlobalState__get_serialized_size,
  _UAVGlobalState__max_serialized_size
};

static rosidl_message_type_support_t _UAVGlobalState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UAVGlobalState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xplane_interfaces, msg, UAVGlobalState)() {
  return &_UAVGlobalState__type_support;
}

#if defined(__cplusplus)
}
#endif
