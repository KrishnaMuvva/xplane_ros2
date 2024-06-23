// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:msg/UAVLocalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__STRUCT_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UAVLocalState in the package xplane_interfaces.
typedef struct xplane_interfaces__msg__UAVLocalState
{
  double local_x;
  double local_y;
  double local_z;
  double local_vx;
  double local_vy;
  double local_vz;
  double local_ax;
  double local_ay;
  double local_az;
  double roll;
  double pitch;
  double yaw;
  double airspeed;
} xplane_interfaces__msg__UAVLocalState;

// Struct for a sequence of xplane_interfaces__msg__UAVLocalState.
typedef struct xplane_interfaces__msg__UAVLocalState__Sequence
{
  xplane_interfaces__msg__UAVLocalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__msg__UAVLocalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__STRUCT_H_
