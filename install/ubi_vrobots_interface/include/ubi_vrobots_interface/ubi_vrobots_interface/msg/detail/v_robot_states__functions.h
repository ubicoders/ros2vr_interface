// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ubi_vrobots_interface:msg/VRobotStates.idl
// generated code does not contain a copyright notice

#ifndef UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__FUNCTIONS_H_
#define UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ubi_vrobots_interface/msg/rosidl_generator_c__visibility_control.h"

#include "ubi_vrobots_interface/msg/detail/v_robot_states__struct.h"

/// Initialize msg/VRobotStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ubi_vrobots_interface__msg__VRobotStates
 * )) before or use
 * ubi_vrobots_interface__msg__VRobotStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
bool
ubi_vrobots_interface__msg__VRobotStates__init(ubi_vrobots_interface__msg__VRobotStates * msg);

/// Finalize msg/VRobotStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
void
ubi_vrobots_interface__msg__VRobotStates__fini(ubi_vrobots_interface__msg__VRobotStates * msg);

/// Create msg/VRobotStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ubi_vrobots_interface__msg__VRobotStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
ubi_vrobots_interface__msg__VRobotStates *
ubi_vrobots_interface__msg__VRobotStates__create();

/// Destroy msg/VRobotStates message.
/**
 * It calls
 * ubi_vrobots_interface__msg__VRobotStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
void
ubi_vrobots_interface__msg__VRobotStates__destroy(ubi_vrobots_interface__msg__VRobotStates * msg);

/// Check for msg/VRobotStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
bool
ubi_vrobots_interface__msg__VRobotStates__are_equal(const ubi_vrobots_interface__msg__VRobotStates * lhs, const ubi_vrobots_interface__msg__VRobotStates * rhs);

/// Copy a msg/VRobotStates message.
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
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
bool
ubi_vrobots_interface__msg__VRobotStates__copy(
  const ubi_vrobots_interface__msg__VRobotStates * input,
  ubi_vrobots_interface__msg__VRobotStates * output);

/// Initialize array of msg/VRobotStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * ubi_vrobots_interface__msg__VRobotStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
bool
ubi_vrobots_interface__msg__VRobotStates__Sequence__init(ubi_vrobots_interface__msg__VRobotStates__Sequence * array, size_t size);

/// Finalize array of msg/VRobotStates messages.
/**
 * It calls
 * ubi_vrobots_interface__msg__VRobotStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
void
ubi_vrobots_interface__msg__VRobotStates__Sequence__fini(ubi_vrobots_interface__msg__VRobotStates__Sequence * array);

/// Create array of msg/VRobotStates messages.
/**
 * It allocates the memory for the array and calls
 * ubi_vrobots_interface__msg__VRobotStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
ubi_vrobots_interface__msg__VRobotStates__Sequence *
ubi_vrobots_interface__msg__VRobotStates__Sequence__create(size_t size);

/// Destroy array of msg/VRobotStates messages.
/**
 * It calls
 * ubi_vrobots_interface__msg__VRobotStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
void
ubi_vrobots_interface__msg__VRobotStates__Sequence__destroy(ubi_vrobots_interface__msg__VRobotStates__Sequence * array);

/// Check for msg/VRobotStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
bool
ubi_vrobots_interface__msg__VRobotStates__Sequence__are_equal(const ubi_vrobots_interface__msg__VRobotStates__Sequence * lhs, const ubi_vrobots_interface__msg__VRobotStates__Sequence * rhs);

/// Copy an array of msg/VRobotStates messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ubi_vrobots_interface
bool
ubi_vrobots_interface__msg__VRobotStates__Sequence__copy(
  const ubi_vrobots_interface__msg__VRobotStates__Sequence * input,
  ubi_vrobots_interface__msg__VRobotStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UBI_VROBOTS_INTERFACE__MSG__DETAIL__V_ROBOT_STATES__FUNCTIONS_H_
