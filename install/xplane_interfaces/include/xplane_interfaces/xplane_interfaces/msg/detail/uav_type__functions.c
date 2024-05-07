// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xplane_interfaces:msg/UAVType.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/msg/detail/uav_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
xplane_interfaces__msg__UAVType__init(xplane_interfaces__msg__UAVType * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    xplane_interfaces__msg__UAVType__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    xplane_interfaces__msg__UAVType__fini(msg);
    return false;
  }
  return true;
}

void
xplane_interfaces__msg__UAVType__fini(xplane_interfaces__msg__UAVType * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
xplane_interfaces__msg__UAVType__are_equal(const xplane_interfaces__msg__UAVType * lhs, const xplane_interfaces__msg__UAVType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
xplane_interfaces__msg__UAVType__copy(
  const xplane_interfaces__msg__UAVType * input,
  xplane_interfaces__msg__UAVType * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

xplane_interfaces__msg__UAVType *
xplane_interfaces__msg__UAVType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVType * msg = (xplane_interfaces__msg__UAVType *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__msg__UAVType));
  bool success = xplane_interfaces__msg__UAVType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__msg__UAVType__destroy(xplane_interfaces__msg__UAVType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__msg__UAVType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__msg__UAVType__Sequence__init(xplane_interfaces__msg__UAVType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVType * data = NULL;

  if (size) {
    data = (xplane_interfaces__msg__UAVType *)allocator.zero_allocate(size, sizeof(xplane_interfaces__msg__UAVType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__msg__UAVType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__msg__UAVType__fini(&data[i - 1]);
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
xplane_interfaces__msg__UAVType__Sequence__fini(xplane_interfaces__msg__UAVType__Sequence * array)
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
      xplane_interfaces__msg__UAVType__fini(&array->data[i]);
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

xplane_interfaces__msg__UAVType__Sequence *
xplane_interfaces__msg__UAVType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__msg__UAVType__Sequence * array = (xplane_interfaces__msg__UAVType__Sequence *)allocator.allocate(sizeof(xplane_interfaces__msg__UAVType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__msg__UAVType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__msg__UAVType__Sequence__destroy(xplane_interfaces__msg__UAVType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__msg__UAVType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__msg__UAVType__Sequence__are_equal(const xplane_interfaces__msg__UAVType__Sequence * lhs, const xplane_interfaces__msg__UAVType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__msg__UAVType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__msg__UAVType__Sequence__copy(
  const xplane_interfaces__msg__UAVType__Sequence * input,
  xplane_interfaces__msg__UAVType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__msg__UAVType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__msg__UAVType * data =
      (xplane_interfaces__msg__UAVType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__msg__UAVType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__msg__UAVType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__msg__UAVType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
