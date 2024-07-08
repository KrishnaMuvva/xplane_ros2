// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
// generated code does not contain a copyright notice
#include "xplane_interfaces/srv/detail/parking_brake__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
xplane_interfaces__srv__ParkingBrake_Request__init(xplane_interfaces__srv__ParkingBrake_Request * msg)
{
  if (!msg) {
    return false;
  }
  // parking_brake
  return true;
}

void
xplane_interfaces__srv__ParkingBrake_Request__fini(xplane_interfaces__srv__ParkingBrake_Request * msg)
{
  if (!msg) {
    return;
  }
  // parking_brake
}

bool
xplane_interfaces__srv__ParkingBrake_Request__are_equal(const xplane_interfaces__srv__ParkingBrake_Request * lhs, const xplane_interfaces__srv__ParkingBrake_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parking_brake
  if (lhs->parking_brake != rhs->parking_brake) {
    return false;
  }
  return true;
}

bool
xplane_interfaces__srv__ParkingBrake_Request__copy(
  const xplane_interfaces__srv__ParkingBrake_Request * input,
  xplane_interfaces__srv__ParkingBrake_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // parking_brake
  output->parking_brake = input->parking_brake;
  return true;
}

xplane_interfaces__srv__ParkingBrake_Request *
xplane_interfaces__srv__ParkingBrake_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__srv__ParkingBrake_Request * msg = (xplane_interfaces__srv__ParkingBrake_Request *)allocator.allocate(sizeof(xplane_interfaces__srv__ParkingBrake_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__srv__ParkingBrake_Request));
  bool success = xplane_interfaces__srv__ParkingBrake_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__srv__ParkingBrake_Request__destroy(xplane_interfaces__srv__ParkingBrake_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__srv__ParkingBrake_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__srv__ParkingBrake_Request__Sequence__init(xplane_interfaces__srv__ParkingBrake_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__srv__ParkingBrake_Request * data = NULL;

  if (size) {
    data = (xplane_interfaces__srv__ParkingBrake_Request *)allocator.zero_allocate(size, sizeof(xplane_interfaces__srv__ParkingBrake_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__srv__ParkingBrake_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__srv__ParkingBrake_Request__fini(&data[i - 1]);
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
xplane_interfaces__srv__ParkingBrake_Request__Sequence__fini(xplane_interfaces__srv__ParkingBrake_Request__Sequence * array)
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
      xplane_interfaces__srv__ParkingBrake_Request__fini(&array->data[i]);
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

xplane_interfaces__srv__ParkingBrake_Request__Sequence *
xplane_interfaces__srv__ParkingBrake_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__srv__ParkingBrake_Request__Sequence * array = (xplane_interfaces__srv__ParkingBrake_Request__Sequence *)allocator.allocate(sizeof(xplane_interfaces__srv__ParkingBrake_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__srv__ParkingBrake_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__srv__ParkingBrake_Request__Sequence__destroy(xplane_interfaces__srv__ParkingBrake_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__srv__ParkingBrake_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__srv__ParkingBrake_Request__Sequence__are_equal(const xplane_interfaces__srv__ParkingBrake_Request__Sequence * lhs, const xplane_interfaces__srv__ParkingBrake_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__srv__ParkingBrake_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__srv__ParkingBrake_Request__Sequence__copy(
  const xplane_interfaces__srv__ParkingBrake_Request__Sequence * input,
  xplane_interfaces__srv__ParkingBrake_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__srv__ParkingBrake_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__srv__ParkingBrake_Request * data =
      (xplane_interfaces__srv__ParkingBrake_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__srv__ParkingBrake_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__srv__ParkingBrake_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__srv__ParkingBrake_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
xplane_interfaces__srv__ParkingBrake_Response__init(xplane_interfaces__srv__ParkingBrake_Response * msg)
{
  if (!msg) {
    return false;
  }
  // brake_release
  return true;
}

void
xplane_interfaces__srv__ParkingBrake_Response__fini(xplane_interfaces__srv__ParkingBrake_Response * msg)
{
  if (!msg) {
    return;
  }
  // brake_release
}

bool
xplane_interfaces__srv__ParkingBrake_Response__are_equal(const xplane_interfaces__srv__ParkingBrake_Response * lhs, const xplane_interfaces__srv__ParkingBrake_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brake_release
  if (lhs->brake_release != rhs->brake_release) {
    return false;
  }
  return true;
}

bool
xplane_interfaces__srv__ParkingBrake_Response__copy(
  const xplane_interfaces__srv__ParkingBrake_Response * input,
  xplane_interfaces__srv__ParkingBrake_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // brake_release
  output->brake_release = input->brake_release;
  return true;
}

xplane_interfaces__srv__ParkingBrake_Response *
xplane_interfaces__srv__ParkingBrake_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__srv__ParkingBrake_Response * msg = (xplane_interfaces__srv__ParkingBrake_Response *)allocator.allocate(sizeof(xplane_interfaces__srv__ParkingBrake_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xplane_interfaces__srv__ParkingBrake_Response));
  bool success = xplane_interfaces__srv__ParkingBrake_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xplane_interfaces__srv__ParkingBrake_Response__destroy(xplane_interfaces__srv__ParkingBrake_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xplane_interfaces__srv__ParkingBrake_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xplane_interfaces__srv__ParkingBrake_Response__Sequence__init(xplane_interfaces__srv__ParkingBrake_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__srv__ParkingBrake_Response * data = NULL;

  if (size) {
    data = (xplane_interfaces__srv__ParkingBrake_Response *)allocator.zero_allocate(size, sizeof(xplane_interfaces__srv__ParkingBrake_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xplane_interfaces__srv__ParkingBrake_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xplane_interfaces__srv__ParkingBrake_Response__fini(&data[i - 1]);
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
xplane_interfaces__srv__ParkingBrake_Response__Sequence__fini(xplane_interfaces__srv__ParkingBrake_Response__Sequence * array)
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
      xplane_interfaces__srv__ParkingBrake_Response__fini(&array->data[i]);
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

xplane_interfaces__srv__ParkingBrake_Response__Sequence *
xplane_interfaces__srv__ParkingBrake_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xplane_interfaces__srv__ParkingBrake_Response__Sequence * array = (xplane_interfaces__srv__ParkingBrake_Response__Sequence *)allocator.allocate(sizeof(xplane_interfaces__srv__ParkingBrake_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xplane_interfaces__srv__ParkingBrake_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xplane_interfaces__srv__ParkingBrake_Response__Sequence__destroy(xplane_interfaces__srv__ParkingBrake_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xplane_interfaces__srv__ParkingBrake_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xplane_interfaces__srv__ParkingBrake_Response__Sequence__are_equal(const xplane_interfaces__srv__ParkingBrake_Response__Sequence * lhs, const xplane_interfaces__srv__ParkingBrake_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xplane_interfaces__srv__ParkingBrake_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xplane_interfaces__srv__ParkingBrake_Response__Sequence__copy(
  const xplane_interfaces__srv__ParkingBrake_Response__Sequence * input,
  xplane_interfaces__srv__ParkingBrake_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xplane_interfaces__srv__ParkingBrake_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xplane_interfaces__srv__ParkingBrake_Response * data =
      (xplane_interfaces__srv__ParkingBrake_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xplane_interfaces__srv__ParkingBrake_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xplane_interfaces__srv__ParkingBrake_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xplane_interfaces__srv__ParkingBrake_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
