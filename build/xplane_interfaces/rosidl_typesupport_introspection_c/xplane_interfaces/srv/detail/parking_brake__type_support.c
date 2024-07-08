// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xplane_interfaces/srv/detail/parking_brake__rosidl_typesupport_introspection_c.h"
#include "xplane_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xplane_interfaces/srv/detail/parking_brake__functions.h"
#include "xplane_interfaces/srv/detail/parking_brake__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xplane_interfaces__srv__ParkingBrake_Request__init(message_memory);
}

void xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_fini_function(void * message_memory)
{
  xplane_interfaces__srv__ParkingBrake_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_member_array[1] = {
  {
    "parking_brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__srv__ParkingBrake_Request, parking_brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_members = {
  "xplane_interfaces__srv",  // message namespace
  "ParkingBrake_Request",  // message name
  1,  // number of fields
  sizeof(xplane_interfaces__srv__ParkingBrake_Request),
  xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_member_array,  // message members
  xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_type_support_handle = {
  0,
  &xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xplane_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake_Request)() {
  if (!xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_type_support_handle.typesupport_identifier) {
    xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xplane_interfaces__srv__ParkingBrake_Request__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__rosidl_typesupport_introspection_c.h"
// already included above
// #include "xplane_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__functions.h"
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xplane_interfaces__srv__ParkingBrake_Response__init(message_memory);
}

void xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_fini_function(void * message_memory)
{
  xplane_interfaces__srv__ParkingBrake_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_member_array[1] = {
  {
    "brake_release",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xplane_interfaces__srv__ParkingBrake_Response, brake_release),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_members = {
  "xplane_interfaces__srv",  // message namespace
  "ParkingBrake_Response",  // message name
  1,  // number of fields
  sizeof(xplane_interfaces__srv__ParkingBrake_Response),
  xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_member_array,  // message members
  xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_type_support_handle = {
  0,
  &xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xplane_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake_Response)() {
  if (!xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_type_support_handle.typesupport_identifier) {
    xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xplane_interfaces__srv__ParkingBrake_Response__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "xplane_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_members = {
  "xplane_interfaces__srv",  // service namespace
  "ParkingBrake",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_Request_message_type_support_handle,
  NULL  // response message
  // xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_Response_message_type_support_handle
};

static rosidl_service_type_support_t xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_type_support_handle = {
  0,
  &xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xplane_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake)() {
  if (!xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_type_support_handle.typesupport_identifier) {
    xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xplane_interfaces, srv, ParkingBrake_Response)()->data;
  }

  return &xplane_interfaces__srv__detail__parking_brake__rosidl_typesupport_introspection_c__ParkingBrake_service_type_support_handle;
}
