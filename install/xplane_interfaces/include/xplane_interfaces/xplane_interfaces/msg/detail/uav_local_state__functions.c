// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xplane_interfaces:msg/UAVLocalState.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/msg/detail/uav_local_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xplane_interfaces__msg__UAVLocalState__init(xplane_interfaces__msg__UAVLocalState * msg)
{
  if (!msg) {
    return false;
  }
  // local_x
  // local_y
  // local_z
  // local_vx
  // local_vy
  // local_vz
  // local_ax
  // local_ay
  // local_az
  // roll
  // pitch
  // yaw
  // airspeed
  return true;
}

void
xplane_interfaces__msg__UAVLocalState__fini(xplane_interfaces__msg__UAVLocalState * msg)
{
  if (!msg) {
    return;
  }
  // local_x
  // local_y
  // local_z
  // local_vx
  // local_vy
  // local_vz
  // local_ax
  // local_ay
  // local_az
  // roll
  // pitch
  // yaw
  // airspeed
}

bool
xplane_interfaces__msg__UAVLocalState__are_equal(const xplane_interfaces__msg__UAVLocalState * lhs, const xplane_interfaces__msg__UAVLocalState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_x
  if (lhs->local_x != rhs->local_x) {
    return false;
  }
  // local_y
  if (lhs->local_y != rhs->local_y) {
    return false;
  }
  // local_z
  if (lhs->local_z != rhs->local_z) {
    return false;
  }
  // local_vx
  if (lhs->local_vx != rhs->local_vx) {
    return false;
  }
  // local_vy
  if (lhs->local_vy != rhs->local_vy) {
    return false;
  }
  // local_vz
  if (lhs->local_vz != rhs->local_vz) {
    return false;
  }
  // local_ax
  if (lhs->local_ax != rhs->local_ax) {
    return false;
  }
  // local_ay
  if (lhs->local_ay != rhs->local_ay) {
    return false;
  }
  // local_az
  if (lhs->local_az != rhs->local_az) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // airspeed
  if (lhs->airspeed != rhs->airspeed) {
    return false;
  }
  return true;
}

bool
xplane_interfaces__msg__UAVLocalState__copy(
  const xplane_interfaces__msg__UAVLocalState * input,
  xplane_interfaces__msg__UAVLocalState * output)
{
  if (!input || !output) {
    return false;
  }
  // local_x
  output->local_x = input->local_x;
  // local_y
  output->local_y = input->local_y;
  // local_z
  output->local_z = input->local_z;
  // local_vx
  output->local_vx = input->local_vx;
  // local_vy
  output->local_vy = input->local_vy;
  // local_vz
  output->local_vz = input->local_vz;
  // local_ax
  output->local_ax = input->local_ax;
  // local_ay
  output->local_ay = input->local_ay;
  // local_az
  output->local_az = input->local_az;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // airspeed
  output->airspeed = input->airspeed;
  return true;
}

xplane_interfaces__msg__UAVLocalState *
xplane_interfaces__msg__UAVLocalState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVLocalState * msg = (xplane_interfaces__msg__UAVLocalState *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVLocalState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__msg__UAVLocalState));
  bool success = xplane_interfaces__msg__UAVLocalState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__msg__UAVLocalState__destroy(xplane_interfaces__msg__UAVLocalState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__msg__UAVLocalState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__msg__UAVLocalState__Sequence__init(xplane_interfaces__msg__UAVLocalState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVLocalState * data = NULL;

  if (size) {
    data = (xplane_interfaces__msg__UAVLocalState *)allocator.zero_allocate(size, sizeof(xplane_interfaces__msg__UAVLocalState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__msg__UAVLocalState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__msg__UAVLocalState__fini(&data[i - 1]);
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
xplane_interfaces__msg__UAVLocalState__Sequence__fini(xplane_interfaces__msg__UAVLocalState__Sequence * array)
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
      xplane_interfaces__msg__UAVLocalState__fini(&array->data[i]);
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

xplane_interfaces__msg__UAVLocalState__Sequence *
xplane_interfaces__msg__UAVLocalState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVLocalState__Sequence * array = (xplane_interfaces__msg__UAVLocalState__Sequence *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVLocalState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__msg__UAVLocalState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__msg__UAVLocalState__Sequence__destroy(xplane_interfaces__msg__UAVLocalState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__msg__UAVLocalState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__msg__UAVLocalState__Sequence__are_equal(const xplane_interfaces__msg__UAVLocalState__Sequence * lhs, const xplane_interfaces__msg__UAVLocalState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__msg__UAVLocalState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__msg__UAVLocalState__Sequence__copy(
  const xplane_interfaces__msg__UAVLocalState__Sequence * input,
  xplane_interfaces__msg__UAVLocalState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__msg__UAVLocalState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__msg__UAVLocalState * data =
      (xplane_interfaces__msg__UAVLocalState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__msg__UAVLocalState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__msg__UAVLocalState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__msg__UAVLocalState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
