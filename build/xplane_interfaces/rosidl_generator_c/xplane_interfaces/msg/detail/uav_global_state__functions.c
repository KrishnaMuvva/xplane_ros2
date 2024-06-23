// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/msg/detail/uav_global_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xplane_interfaces__msg__UAVGlobalState__init(xplane_interfaces__msg__UAVGlobalState * msg)
{
  if (!msg) {
    return false;
  }
  // lattitude
  // longitude
  // altitude_msl
  // altitude_agl
  // global_roll
  // global_pitch
  // global_yaw
  // groundspeed
  return true;
}

void
xplane_interfaces__msg__UAVGlobalState__fini(xplane_interfaces__msg__UAVGlobalState * msg)
{
  if (!msg) {
    return;
  }
  // lattitude
  // longitude
  // altitude_msl
  // altitude_agl
  // global_roll
  // global_pitch
  // global_yaw
  // groundspeed
}

bool
xplane_interfaces__msg__UAVGlobalState__are_equal(const xplane_interfaces__msg__UAVGlobalState * lhs, const xplane_interfaces__msg__UAVGlobalState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lattitude
  if (lhs->lattitude != rhs->lattitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude_msl
  if (lhs->altitude_msl != rhs->altitude_msl) {
    return false;
  }
  // altitude_agl
  if (lhs->altitude_agl != rhs->altitude_agl) {
    return false;
  }
  // global_roll
  if (lhs->global_roll != rhs->global_roll) {
    return false;
  }
  // global_pitch
  if (lhs->global_pitch != rhs->global_pitch) {
    return false;
  }
  // global_yaw
  if (lhs->global_yaw != rhs->global_yaw) {
    return false;
  }
  // groundspeed
  if (lhs->groundspeed != rhs->groundspeed) {
    return false;
  }
  return true;
}

bool
xplane_interfaces__msg__UAVGlobalState__copy(
  const xplane_interfaces__msg__UAVGlobalState * input,
  xplane_interfaces__msg__UAVGlobalState * output)
{
  if (!input || !output) {
    return false;
  }
  // lattitude
  output->lattitude = input->lattitude;
  // longitude
  output->longitude = input->longitude;
  // altitude_msl
  output->altitude_msl = input->altitude_msl;
  // altitude_agl
  output->altitude_agl = input->altitude_agl;
  // global_roll
  output->global_roll = input->global_roll;
  // global_pitch
  output->global_pitch = input->global_pitch;
  // global_yaw
  output->global_yaw = input->global_yaw;
  // groundspeed
  output->groundspeed = input->groundspeed;
  return true;
}

xplane_interfaces__msg__UAVGlobalState *
xplane_interfaces__msg__UAVGlobalState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVGlobalState * msg = (xplane_interfaces__msg__UAVGlobalState *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVGlobalState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__msg__UAVGlobalState));
  bool success = xplane_interfaces__msg__UAVGlobalState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__msg__UAVGlobalState__destroy(xplane_interfaces__msg__UAVGlobalState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__msg__UAVGlobalState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__msg__UAVGlobalState__Sequence__init(xplane_interfaces__msg__UAVGlobalState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVGlobalState * data = NULL;

  if (size) {
    data = (xplane_interfaces__msg__UAVGlobalState *)allocator.zero_allocate(size, sizeof(xplane_interfaces__msg__UAVGlobalState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__msg__UAVGlobalState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__msg__UAVGlobalState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xplane_interfaces__msg__UAVGlobalState__Sequence__fini(xplane_interfaces__msg__UAVGlobalState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xplane_interfaces__msg__UAVGlobalState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xplane_interfaces__msg__UAVGlobalState__Sequence *
xplane_interfaces__msg__UAVGlobalState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVGlobalState__Sequence * array = (xplane_interfaces__msg__UAVGlobalState__Sequence *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVGlobalState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__msg__UAVGlobalState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__msg__UAVGlobalState__Sequence__destroy(xplane_interfaces__msg__UAVGlobalState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__msg__UAVGlobalState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__msg__UAVGlobalState__Sequence__are_equal(const xplane_interfaces__msg__UAVGlobalState__Sequence * lhs, const xplane_interfaces__msg__UAVGlobalState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__msg__UAVGlobalState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__msg__UAVGlobalState__Sequence__copy(
  const xplane_interfaces__msg__UAVGlobalState__Sequence * input,
  xplane_interfaces__msg__UAVGlobalState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__msg__UAVGlobalState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__msg__UAVGlobalState * data =
      (xplane_interfaces__msg__UAVGlobalState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__msg__UAVGlobalState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__msg__UAVGlobalState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__msg__UAVGlobalState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
