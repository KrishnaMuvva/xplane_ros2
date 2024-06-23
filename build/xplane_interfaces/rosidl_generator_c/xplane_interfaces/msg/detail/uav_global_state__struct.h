// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__STRUCT_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UAVGlobalState in the package xplane_interfaces.
typedef struct xplane_interfaces__msg__UAVGlobalState
{
  double lattitude;
  double longitude;
  double altitude_msl;
  double altitude_agl;
  double global_roll;
  double global_pitch;
  double global_yaw;
  double groundspeed;
} xplane_interfaces__msg__UAVGlobalState;

// Struct for a sequence of xplane_interfaces__msg__UAVGlobalState.
typedef struct xplane_interfaces__msg__UAVGlobalState__Sequence
{
  xplane_interfaces__msg__UAVGlobalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__msg__UAVGlobalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_GLOBAL_STATE__STRUCT_H_
