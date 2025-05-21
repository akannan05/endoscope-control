// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mprls_imu_node/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mprls_imu_node
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
cdr_serialize(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mprls_imu_node::msg::MPRLSPressures & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
get_serialized_size(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
max_serialized_size_MPRLSPressures(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
cdr_serialize_key(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
get_serialized_size_key(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
max_serialized_size_key_MPRLSPressures(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mprls_imu_node

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mprls_imu_node, msg, MPRLSPressures)();

#ifdef __cplusplus
}
#endif

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
