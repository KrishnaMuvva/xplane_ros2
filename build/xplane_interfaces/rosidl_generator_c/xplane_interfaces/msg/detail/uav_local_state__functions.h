// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xplane_interfaces:msg/UAVLocalState.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__FUNCTIONS_H_
#define XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xplane_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "xplane_interfaces/msg/detail/uav_local_state__struct.h"

/// Initialize msg/UAVLocalState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xplane_interfaces__msg__UAVLocalState
 * )) before or use
 * xplane_interfaces__msg__UAVLocalState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVLocalState__init(xplane_interfaces__msg__UAVLocalState * msg);

/// Finalize msg/UAVLocalState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVLocalState__fini(xplane_interfaces__msg__UAVLocalState * msg);

/// Create msg/UAVLocalState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xplane_interfaces__msg__UAVLocalState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__msg__UAVLocalState *
xplane_interfaces__msg__UAVLocalState__create();

/// Destroy msg/UAVLocalState message.
/**
 * It calls
 * xplane_interfaces__msg__UAVLocalState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVLocalState__destroy(xplane_interfaces__msg__UAVLocalState * msg);

/// Check for msg/UAVLocalState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVLocalState__are_equal(const xplane_interfaces__msg__UAVLocalState * lhs, const xplane_interfaces__msg__UAVLocalState * rhs);

/// Copy a msg/UAVLocalState message.
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
xplane_interfaces__msg__UAVLocalState__copy(
  const xplane_interfaces__msg__UAVLocalState * input,
  xplane_interfaces__msg__UAVLocalState * output);

/// Initialize array of msg/UAVLocalState messages.
/**
 * It allocates the memory for the number of elements and calls
 * xplane_interfaces__msg__UAVLocalState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVLocalState__Sequence__init(xplane_interfaces__msg__UAVLocalState__Sequence * array, size_t size);

/// Finalize array of msg/UAVLocalState messages.
/**
 * It calls
 * xplane_interfaces__msg__UAVLocalState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVLocalState__Sequence__fini(xplane_interfaces__msg__UAVLocalState__Sequence * array);

/// Create array of msg/UAVLocalState messages.
/**
 * It allocates the memory for the array and calls
 * xplane_interfaces__msg__UAVLocalState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__msg__UAVLocalState__Sequence *
xplane_interfaces__msg__UAVLocalState__Sequence__create(size_t size);

/// Destroy array of msg/UAVLocalState messages.
/**
 * It calls
 * xplane_interfaces__msg__UAVLocalState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__msg__UAVLocalState__Sequence__destroy(xplane_interfaces__msg__UAVLocalState__Sequence * array);

/// Check for msg/UAVLocalState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__msg__UAVLocalState__Sequence__are_equal(const xplane_interfaces__msg__UAVLocalState__Sequence * lhs, const xplane_interfaces__msg__UAVLocalState__Sequence * rhs);

/// Copy an array of msg/UAVLocalState messages.
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
xplane_interfaces__msg__UAVLocalState__Sequence__copy(
  const xplane_interfaces__msg__UAVLocalState__Sequence * input,
  xplane_interfaces__msg__UAVLocalState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__MSG__DETAIL__UAV_LOCAL_STATE__FUNCTIONS_H_
