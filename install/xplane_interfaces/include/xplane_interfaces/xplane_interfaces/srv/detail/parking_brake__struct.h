// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__STRUCT_H_
#define XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ParkingBrake in the package xplane_interfaces.
typedef struct xplane_interfaces__srv__ParkingBrake_Request
{
  bool parking_brake;
} xplane_interfaces__srv__ParkingBrake_Request;

// Struct for a sequence of xplane_interfaces__srv__ParkingBrake_Request.
typedef struct xplane_interfaces__srv__ParkingBrake_Request__Sequence
{
  xplane_interfaces__srv__ParkingBrake_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__srv__ParkingBrake_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ParkingBrake in the package xplane_interfaces.
typedef struct xplane_interfaces__srv__ParkingBrake_Response
{
  bool brake_release;
} xplane_interfaces__srv__ParkingBrake_Response;

// Struct for a sequence of xplane_interfaces__srv__ParkingBrake_Response.
typedef struct xplane_interfaces__srv__ParkingBrake_Response__Sequence
{
  xplane_interfaces__srv__ParkingBrake_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__srv__ParkingBrake_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__SRV__DETAIL__PARKING_BRAKE__STRUCT_H_
