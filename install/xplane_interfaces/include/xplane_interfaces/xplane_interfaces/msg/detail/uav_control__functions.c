// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xplane_interfaces:msg/UAVControl.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/msg/detail/uav_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xplane_interfaces__msg__UAVControl__init(xplane_interfaces__msg__UAVControl * msg)
{
  if (!msg) {
    return false;
  }
  // throttle
  // aileron
  // elevator
  // rudder
  return true;
}

void
xplane_interfaces__msg__UAVControl__fini(xplane_interfaces__msg__UAVControl * msg)
{
  if (!msg) {
    return;
  }
  // throttle
  // aileron
  // elevator
  // rudder
}

bool
xplane_interfaces__msg__UAVControl__are_equal(const xplane_interfaces__msg__UAVControl * lhs, const xplane_interfaces__msg__UAVControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // aileron
  if (lhs->aileron != rhs->aileron) {
    return false;
  }
  // elevator
  if (lhs->elevator != rhs->elevator) {
    return false;
  }
  // rudder
  if (lhs->rudder != rhs->rudder) {
    return false;
  }
  return true;
}

bool
xplane_interfaces__msg__UAVControl__copy(
  const xplane_interfaces__msg__UAVControl * input,
  xplane_interfaces__msg__UAVControl * output)
{
  if (!input || !output) {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  // aileron
  output->aileron = input->aileron;
  // elevator
  output->elevator = input->elevator;
  // rudder
  output->rudder = input->rudder;
  return true;
}

xplane_interfaces__msg__UAVControl *
xplane_interfaces__msg__UAVControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVControl * msg = (xplane_interfaces__msg__UAVControl *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__msg__UAVControl));
  bool success = xplane_interfaces__msg__UAVControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__msg__UAVControl__destroy(xplane_interfaces__msg__UAVControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__msg__UAVControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__msg__UAVControl__Sequence__init(xplane_interfaces__msg__UAVControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVControl * data = NULL;

  if (size) {
    data = (xplane_interfaces__msg__UAVControl *)allocator.zero_allocate(size, sizeof(xplane_interfaces__msg__UAVControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__msg__UAVControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__msg__UAVControl__fini(&data[i - 1]);
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
xplane_interfaces__msg__UAVControl__Sequence__fini(xplane_interfaces__msg__UAVControl__Sequence * array)
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
      xplane_interfaces__msg__UAVControl__fini(&array->data[i]);
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

xplane_interfaces__msg__UAVControl__Sequence *
xplane_interfaces__msg__UAVControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVControl__Sequence * array = (xplane_interfaces__msg__UAVControl__Sequence *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__msg__UAVControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__msg__UAVControl__Sequence__destroy(xplane_interfaces__msg__UAVControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__msg__UAVControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__msg__UAVControl__Sequence__are_equal(const xplane_interfaces__msg__UAVControl__Sequence * lhs, const xplane_interfaces__msg__UAVControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__msg__UAVControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__msg__UAVControl__Sequence__copy(
  const xplane_interfaces__msg__UAVControl__Sequence * input,
  xplane_interfaces__msg__UAVControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__msg__UAVControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__msg__UAVControl * data =
      (xplane_interfaces__msg__UAVControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__msg__UAVControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__msg__UAVControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__msg__UAVControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
