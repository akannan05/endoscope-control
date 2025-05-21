// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mprls_imu_node/msg/mprls_pressures.h"


#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__FUNCTIONS_H_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mprls_imu_node/msg/rosidl_generator_c__visibility_control.h"

#include "mprls_imu_node/msg/detail/mprls_pressures__struct.h"

/// Initialize msg/MPRLSPressures message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mprls_imu_node__msg__MPRLSPressures
 * )) before or use
 * mprls_imu_node__msg__MPRLSPressures__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
bool
mprls_imu_node__msg__MPRLSPressures__init(mprls_imu_node__msg__MPRLSPressures * msg);

/// Finalize msg/MPRLSPressures message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
void
mprls_imu_node__msg__MPRLSPressures__fini(mprls_imu_node__msg__MPRLSPressures * msg);

/// Create msg/MPRLSPressures message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mprls_imu_node__msg__MPRLSPressures__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
mprls_imu_node__msg__MPRLSPressures *
mprls_imu_node__msg__MPRLSPressures__create(void);

/// Destroy msg/MPRLSPressures message.
/**
 * It calls
 * mprls_imu_node__msg__MPRLSPressures__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
void
mprls_imu_node__msg__MPRLSPressures__destroy(mprls_imu_node__msg__MPRLSPressures * msg);

/// Check for msg/MPRLSPressures message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
bool
mprls_imu_node__msg__MPRLSPressures__are_equal(const mprls_imu_node__msg__MPRLSPressures * lhs, const mprls_imu_node__msg__MPRLSPressures * rhs);

/// Copy a msg/MPRLSPressures message.
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
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
bool
mprls_imu_node__msg__MPRLSPressures__copy(
  const mprls_imu_node__msg__MPRLSPressures * input,
  mprls_imu_node__msg__MPRLSPressures * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
const rosidl_type_hash_t *
mprls_imu_node__msg__MPRLSPressures__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
const rosidl_runtime_c__type_description__TypeDescription *
mprls_imu_node__msg__MPRLSPressures__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
const rosidl_runtime_c__type_description__TypeSource *
mprls_imu_node__msg__MPRLSPressures__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mprls_imu_node__msg__MPRLSPressures__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MPRLSPressures messages.
/**
 * It allocates the memory for the number of elements and calls
 * mprls_imu_node__msg__MPRLSPressures__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
bool
mprls_imu_node__msg__MPRLSPressures__Sequence__init(mprls_imu_node__msg__MPRLSPressures__Sequence * array, size_t size);

/// Finalize array of msg/MPRLSPressures messages.
/**
 * It calls
 * mprls_imu_node__msg__MPRLSPressures__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
void
mprls_imu_node__msg__MPRLSPressures__Sequence__fini(mprls_imu_node__msg__MPRLSPressures__Sequence * array);

/// Create array of msg/MPRLSPressures messages.
/**
 * It allocates the memory for the array and calls
 * mprls_imu_node__msg__MPRLSPressures__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
mprls_imu_node__msg__MPRLSPressures__Sequence *
mprls_imu_node__msg__MPRLSPressures__Sequence__create(size_t size);

/// Destroy array of msg/MPRLSPressures messages.
/**
 * It calls
 * mprls_imu_node__msg__MPRLSPressures__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
void
mprls_imu_node__msg__MPRLSPressures__Sequence__destroy(mprls_imu_node__msg__MPRLSPressures__Sequence * array);

/// Check for msg/MPRLSPressures message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
bool
mprls_imu_node__msg__MPRLSPressures__Sequence__are_equal(const mprls_imu_node__msg__MPRLSPressures__Sequence * lhs, const mprls_imu_node__msg__MPRLSPressures__Sequence * rhs);

/// Copy an array of msg/MPRLSPressures messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
bool
mprls_imu_node__msg__MPRLSPressures__Sequence__copy(
  const mprls_imu_node__msg__MPRLSPressures__Sequence * input,
  mprls_imu_node__msg__MPRLSPressures__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__FUNCTIONS_H_
