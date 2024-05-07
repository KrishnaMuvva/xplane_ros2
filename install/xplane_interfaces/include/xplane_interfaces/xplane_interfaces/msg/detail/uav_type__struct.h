// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xplane_interfaces:msg/UAVType.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__STRUCT_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/UAVType in the package xplane_interfaces.
typedef struct xplane_interfaces__msg__UAVType
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String name;
} xplane_interfaces__msg__UAVType;

// Struct for a sequence of xplane_interfaces__msg__UAVType.
typedef struct xplane_interfaces__msg__UAVType__Sequence
{
  xplane_interfaces__msg__UAVType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xplane_interfaces__msg__UAVType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_TYPE__STRUCT_H_
