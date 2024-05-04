// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/msg/detail/uav_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
xplane_interfaces__msg__UAVState__init(xplane_interfaces__msg__UAVState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    xplane_interfaces__msg__UAVState__fini(msg);
    return false;
  }
  // lattitude
  // longitude
  // altitude
  // roll
  // pitch
  // heading
  // airspeed
  return true;
}

void
xplane_interfaces__msg__UAVState__fini(xplane_interfaces__msg__UAVState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lattitude
  // longitude
  // altitude
  // roll
  // pitch
  // heading
  // airspeed
}

bool
xplane_interfaces__msg__UAVState__are_equal(const xplane_interfaces__msg__UAVState * lhs, const xplane_interfaces__msg__UAVState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
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
  // altitude
  if (lhs->altitude != rhs->altitude) {
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
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // airspeed
  if (lhs->airspeed != rhs->airspeed) {
    return false;
  }
  return true;
}

bool
xplane_interfaces__msg__UAVState__copy(
  const xplane_interfaces__msg__UAVState * input,
  xplane_interfaces__msg__UAVState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // lattitude
  output->lattitude = input->lattitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // heading
  output->heading = input->heading;
  // airspeed
  output->airspeed = input->airspeed;
  return true;
}

xplane_interfaces__msg__UAVState *
xplane_interfaces__msg__UAVState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVState * msg = (xplane_interfaces__msg__UAVState *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__msg__UAVState));
  bool success = xplane_interfaces__msg__UAVState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__msg__UAVState__destroy(xplane_interfaces__msg__UAVState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__msg__UAVState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__msg__UAVState__Sequence__init(xplane_interfaces__msg__UAVState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVState * data = NULL;

  if (size) {
    data = (xplane_interfaces__msg__UAVState *)allocator.zero_allocate(size, sizeof(xplane_interfaces__msg__UAVState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__msg__UAVState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__msg__UAVState__fini(&data[i - 1]);
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
xplane_interfaces__msg__UAVState__Sequence__fini(xplane_interfaces__msg__UAVState__Sequence * array)
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
      xplane_interfaces__msg__UAVState__fini(&array->data[i]);
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

xplane_interfaces__msg__UAVState__Sequence *
xplane_interfaces__msg__UAVState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVState__Sequence * array = (xplane_interfaces__msg__UAVState__Sequence *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__msg__UAVState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__msg__UAVState__Sequence__destroy(xplane_interfaces__msg__UAVState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__msg__UAVState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__msg__UAVState__Sequence__are_equal(const xplane_interfaces__msg__UAVState__Sequence * lhs, const xplane_interfaces__msg__UAVState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__msg__UAVState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__msg__UAVState__Sequence__copy(
  const xplane_interfaces__msg__UAVState__Sequence * input,
  xplane_interfaces__msg__UAVState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__msg__UAVState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__msg__UAVState * data =
      (xplane_interfaces__msg__UAVState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__msg__UAVState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__msg__UAVState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__msg__UAVState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
