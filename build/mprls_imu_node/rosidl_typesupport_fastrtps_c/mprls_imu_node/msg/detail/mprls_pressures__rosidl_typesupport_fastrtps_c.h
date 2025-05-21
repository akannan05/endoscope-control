// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice
#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mprls_imu_node/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
bool cdr_serialize_mprls_imu_node__msg__MPRLSPressures(
  const mprls_imu_node__msg__MPRLSPressures * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
bool cdr_deserialize_mprls_imu_node__msg__MPRLSPressures(
  eprosima::fastcdr::Cdr &,
  mprls_imu_node__msg__MPRLSPressures * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
size_t get_serialized_size_mprls_imu_node__msg__MPRLSPressures(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
size_t max_serialized_size_mprls_imu_node__msg__MPRLSPressures(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
bool cdr_serialize_key_mprls_imu_node__msg__MPRLSPressures(
  const mprls_imu_node__msg__MPRLSPressures * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
size_t get_serialized_size_key_mprls_imu_node__msg__MPRLSPressures(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
size_t max_serialized_size_key_mprls_imu_node__msg__MPRLSPressures(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mprls_imu_node
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mprls_imu_node, msg, MPRLSPressures)();

#ifdef __cplusplus
}
#endif

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
