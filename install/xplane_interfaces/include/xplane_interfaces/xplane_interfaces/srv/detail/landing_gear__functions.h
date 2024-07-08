// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xplane_interfaces:srv/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__FUNCTIONS_H_
#define XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xplane_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "xplane_interfaces/srv/detail/landing_gear__struct.h"

/// Initialize srv/LandingGear message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xplane_interfaces__srv__LandingGear_Request
 * )) before or use
 * xplane_interfaces__srv__LandingGear_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Request__init(xplane_interfaces__srv__LandingGear_Request * msg);

/// Finalize srv/LandingGear message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Request__fini(xplane_interfaces__srv__LandingGear_Request * msg);

/// Create srv/LandingGear message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xplane_interfaces__srv__LandingGear_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__srv__LandingGear_Request *
xplane_interfaces__srv__LandingGear_Request__create();

/// Destroy srv/LandingGear message.
/**
 * It calls
 * xplane_interfaces__srv__LandingGear_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Request__destroy(xplane_interfaces__srv__LandingGear_Request * msg);

/// Check for srv/LandingGear message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Request__are_equal(const xplane_interfaces__srv__LandingGear_Request * lhs, const xplane_interfaces__srv__LandingGear_Request * rhs);

/// Copy a srv/LandingGear message.
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
xplane_interfaces__srv__LandingGear_Request__copy(
  const xplane_interfaces__srv__LandingGear_Request * input,
  xplane_interfaces__srv__LandingGear_Request * output);

/// Initialize array of srv/LandingGear messages.
/**
 * It allocates the memory for the number of elements and calls
 * xplane_interfaces__srv__LandingGear_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Request__Sequence__init(xplane_interfaces__srv__LandingGear_Request__Sequence * array, size_t size);

/// Finalize array of srv/LandingGear messages.
/**
 * It calls
 * xplane_interfaces__srv__LandingGear_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Request__Sequence__fini(xplane_interfaces__srv__LandingGear_Request__Sequence * array);

/// Create array of srv/LandingGear messages.
/**
 * It allocates the memory for the array and calls
 * xplane_interfaces__srv__LandingGear_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__srv__LandingGear_Request__Sequence *
xplane_interfaces__srv__LandingGear_Request__Sequence__create(size_t size);

/// Destroy array of srv/LandingGear messages.
/**
 * It calls
 * xplane_interfaces__srv__LandingGear_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Request__Sequence__destroy(xplane_interfaces__srv__LandingGear_Request__Sequence * array);

/// Check for srv/LandingGear message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Request__Sequence__are_equal(const xplane_interfaces__srv__LandingGear_Request__Sequence * lhs, const xplane_interfaces__srv__LandingGear_Request__Sequence * rhs);

/// Copy an array of srv/LandingGear messages.
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
xplane_interfaces__srv__LandingGear_Request__Sequence__copy(
  const xplane_interfaces__srv__LandingGear_Request__Sequence * input,
  xplane_interfaces__srv__LandingGear_Request__Sequence * output);

/// Initialize srv/LandingGear message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xplane_interfaces__srv__LandingGear_Response
 * )) before or use
 * xplane_interfaces__srv__LandingGear_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Response__init(xplane_interfaces__srv__LandingGear_Response * msg);

/// Finalize srv/LandingGear message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Response__fini(xplane_interfaces__srv__LandingGear_Response * msg);

/// Create srv/LandingGear message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xplane_interfaces__srv__LandingGear_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__srv__LandingGear_Response *
xplane_interfaces__srv__LandingGear_Response__create();

/// Destroy srv/LandingGear message.
/**
 * It calls
 * xplane_interfaces__srv__LandingGear_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Response__destroy(xplane_interfaces__srv__LandingGear_Response * msg);

/// Check for srv/LandingGear message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Response__are_equal(const xplane_interfaces__srv__LandingGear_Response * lhs, const xplane_interfaces__srv__LandingGear_Response * rhs);

/// Copy a srv/LandingGear message.
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
xplane_interfaces__srv__LandingGear_Response__copy(
  const xplane_interfaces__srv__LandingGear_Response * input,
  xplane_interfaces__srv__LandingGear_Response * output);

/// Initialize array of srv/LandingGear messages.
/**
 * It allocates the memory for the number of elements and calls
 * xplane_interfaces__srv__LandingGear_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Response__Sequence__init(xplane_interfaces__srv__LandingGear_Response__Sequence * array, size_t size);

/// Finalize array of srv/LandingGear messages.
/**
 * It calls
 * xplane_interfaces__srv__LandingGear_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Response__Sequence__fini(xplane_interfaces__srv__LandingGear_Response__Sequence * array);

/// Create array of srv/LandingGear messages.
/**
 * It allocates the memory for the array and calls
 * xplane_interfaces__srv__LandingGear_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
xplane_interfaces__srv__LandingGear_Response__Sequence *
xplane_interfaces__srv__LandingGear_Response__Sequence__create(size_t size);

/// Destroy array of srv/LandingGear messages.
/**
 * It calls
 * xplane_interfaces__srv__LandingGear_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
void
xplane_interfaces__srv__LandingGear_Response__Sequence__destroy(xplane_interfaces__srv__LandingGear_Response__Sequence * array);

/// Check for srv/LandingGear message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xplane_interfaces
bool
xplane_interfaces__srv__LandingGear_Response__Sequence__are_equal(const xplane_interfaces__srv__LandingGear_Response__Sequence * lhs, const xplane_interfaces__srv__LandingGear_Response__Sequence * rhs);

/// Copy an array of srv/LandingGear messages.
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
xplane_interfaces__srv__LandingGear_Response__Sequence__copy(
  const xplane_interfaces__srv__LandingGear_Response__Sequence * input,
  xplane_interfaces__srv__LandingGear_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XPLANE_INTERFACES__SRV__DETAIL__LANDING_GEAR__FUNCTIONS_H_
