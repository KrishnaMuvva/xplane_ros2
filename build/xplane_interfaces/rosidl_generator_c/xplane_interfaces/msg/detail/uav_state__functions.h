// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xplane_interfaces:msg/UAVState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__FUNCTIONS_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xplane_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "xplane_interfaces/msg/detail/uav_state__struct.h"

/// Initialize msg/UAVState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xplane_interfaces__msg__UAVState
 * )) before or use
 * xplane_interfaces__msg__UAVState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVState__init(xplane_interfaces__msg__UAVState * msg);

/// Finalize msg/UAVState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVState__fini(xplane_interfaces__msg__UAVState * msg);

/// Create msg/UAVState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xplane_interfaces__msg__UAVState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__msg__UAVState *
xplane_interfaces__msg__UAVState__create();

/// Destroy msg/UAVState message.
/**
 * It calls
 * xplane_interfaces__msg__UAVState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVState__destroy(xplane_interfaces__msg__UAVState * msg);

/// Check for msg/UAVState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVState__are_equal(const xplane_interfaces__msg__UAVState * lhs, const xplane_interfaces__msg__UAVState * rhs);

/// Copy a msg/UAVState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVState__copy(
  const xplane_interfaces__msg__UAVState * input,
  xplane_interfaces__msg__UAVState * output);

/// Initialize array of msg/UAVState messages.
/**
 * It allocates the memory for the number of elements and calls
 * xplane_interfaces__msg__UAVState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVState__Sequence__init(xplane_interfaces__msg__UAVState__Sequence * array, size_t size);

/// Finalize array of msg/UAVState messages.
/**
 * It calls
 * xplane_interfaces__msg__UAVState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVState__Sequence__fini(xplane_interfaces__msg__UAVState__Sequence * array);

/// Create array of msg/UAVState messages.
/**
 * It allocates the memory for the array and calls
 * xplane_interfaces__msg__UAVState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__msg__UAVState__Sequence *
xplane_interfaces__msg__UAVState__Sequence__create(size_t size);

/// Destroy array of msg/UAVState messages.
/**
 * It calls
 * xplane_interfaces__msg__UAVState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVState__Sequence__destroy(xplane_interfaces__msg__UAVState__Sequence * array);

/// Check for msg/UAVState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVState__Sequence__are_equal(const xplane_interfaces__msg__UAVState__Sequence * lhs, const xplane_interfaces__msg__UAVState__Sequence * rhs);

/// Copy an array of msg/UAVState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVState__Sequence__copy(
  const xplane_interfaces__msg__UAVState__Sequence * input,
  xplane_interfaces__msg__UAVState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_STATE__FUNCTIONS_H_
