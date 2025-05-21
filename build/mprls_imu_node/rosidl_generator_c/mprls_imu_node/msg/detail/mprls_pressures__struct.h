// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mprls_imu_node/msg/mprls_pressures.h"


#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__STRUCT_H_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MPRLSPressures in the package mprls_imu_node.
typedef struct mprls_imu_node__msg__MPRLSPressures
{
  float pressure_sensor_1;
  float pressure_sensor_2;
} mprls_imu_node__msg__MPRLSPressures;

// Struct for a sequence of mprls_imu_node__msg__MPRLSPressures.
typedef struct mprls_imu_node__msg__MPRLSPressures__Sequence
{
  mprls_imu_node__msg__MPRLSPressures * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mprls_imu_node__msg__MPRLSPressures__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__STRUCT_H_
