// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:msg/UAVAutoPilot.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__STRUCT_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UAVAutoPilot in the package xplane_interfaces.
typedef struct xplane_interfaces__msg__UAVAutoPilot
{
  float heading;
} xplane_interfaces__msg__UAVAutoPilot;

// Struct for a sequence of xplane_interfaces__msg__UAVAutoPilot.
typedef struct xplane_interfaces__msg__UAVAutoPilot__Sequence
{
  xplane_interfaces__msg__UAVAutoPilot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__msg__UAVAutoPilot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_AUTO_PILOT__STRUCT_H_
