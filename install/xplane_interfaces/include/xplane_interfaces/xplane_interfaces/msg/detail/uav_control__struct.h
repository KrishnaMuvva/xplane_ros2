// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:msg/UAVControl.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__STRUCT_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UAVControl in the package xplane_interfaces.
typedef struct xplane_interfaces__msg__UAVControl
{
  float throttle;
  float aileron;
  float elevator;
  float rudder;
} xplane_interfaces__msg__UAVControl;

// Struct for a sequence of xplane_interfaces__msg__UAVControl.
typedef struct xplane_interfaces__msg__UAVControl__Sequence
{
  xplane_interfaces__msg__UAVControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__msg__UAVControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_CONTROL__STRUCT_H_
