// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xplane_interfaces/msg/detail/uav_global_state__rosidl_typesupport_introspection_c.h"
#include "xplane_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xplane_interfaces/msg/detail/uav_global_state__functions.h"
#include "xplane_interfaces/msg/detail/uav_global_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xplane_interfaces__msg__UAVGlobalState__init(message_memory);
}

void xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_fini_function(void * message_memory)
{
  xplane_interfaces__msg__UAVGlobalState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_member_array[8] = {
  {
    "lattitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, lattitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude_msl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, altitude_msl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude_agl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, altitude_agl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, global_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, global_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, global_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "groundspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__msg__UAVGlobalState, groundspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_members = {
  "xplane_interfaces__msg",  // message namespace
  "UAVGlobalState",  // message name
  8,  // number of fields
  sizeof(xplane_interfaces__msg__UAVGlobalState),
  xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_member_array,  // message members
  xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_init_function,  // function to initialize message memory (memory has to be allocated)
  xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_type_support_handle = {
  0,
  &xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xplane_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, msg, UAVGlobalState)() {
  if (!xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_type_support_handle.typesupport_identifier) {
    xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xplane_interfaces__msg__UAVGlobalState__rosidl_typesupport_introspection_c__UAVGlobalState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
