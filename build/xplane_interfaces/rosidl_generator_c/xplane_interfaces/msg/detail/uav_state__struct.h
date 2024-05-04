// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__STRUCT_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/UAVState in the package xplane_interfaces.
typedef struct xplane_interfaces__msg__UAVState
{
  std_msgs__msg__Header header;
  double lattitude;
  double longitude;
  double altitude;
  float roll;
  float pitch;
  float heading;
  float airspeed;
} xplane_interfaces__msg__UAVState;

// Struct for a sequence of xplane_interfaces__msg__UAVState.
typedef struct xplane_interfaces__msg__UAVState__Sequence
{
  xplane_interfaces__msg__UAVState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__msg__UAVState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__STRUCT_H_
