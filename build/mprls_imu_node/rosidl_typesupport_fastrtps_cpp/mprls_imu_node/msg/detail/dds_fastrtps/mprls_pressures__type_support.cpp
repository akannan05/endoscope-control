// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice
#include "mprls_imu_node/msg/detail/mprls_pressures__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mprls_imu_node/msg/detail/mprls_pressures__functions.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pressure_sensor_1
  cdr << ros_message.pressure_sensor_1;

  // Member: pressure_sensor_2
  cdr << ros_message.pressure_sensor_2;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mprls_imu_node::msg::MPRLSPressures & ros_message)
{
  // Member: pressure_sensor_1
  cdr >> ros_message.pressure_sensor_1;

  // Member: pressure_sensor_2
  cdr >> ros_message.pressure_sensor_2;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
get_serialized_size(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pressure_sensor_1
  {
    size_t item_size = sizeof(ros_message.pressure_sensor_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pressure_sensor_2
  {
    size_t item_size = sizeof(ros_message.pressure_sensor_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
max_serialized_size_MPRLSPressures(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: pressure_sensor_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pressure_sensor_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mprls_imu_node::msg::MPRLSPressures;
    is_plain =
      (
      offsetof(DataType, pressure_sensor_2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
cdr_serialize_key(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pressure_sensor_1
  cdr << ros_message.pressure_sensor_1;

  // Member: pressure_sensor_2
  cdr << ros_message.pressure_sensor_2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
get_serialized_size_key(
  const mprls_imu_node::msg::MPRLSPressures & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pressure_sensor_1
  {
    size_t item_size = sizeof(ros_message.pressure_sensor_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pressure_sensor_2
  {
    size_t item_size = sizeof(ros_message.pressure_sensor_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mprls_imu_node
max_serialized_size_key_MPRLSPressures(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: pressure_sensor_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pressure_sensor_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mprls_imu_node::msg::MPRLSPressures;
    is_plain =
      (
      offsetof(DataType, pressure_sensor_2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MPRLSPressures__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mprls_imu_node::msg::MPRLSPressures *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MPRLSPressures__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mprls_imu_node::msg::MPRLSPressures *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MPRLSPressures__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mprls_imu_node::msg::MPRLSPressures *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MPRLSPressures__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MPRLSPressures(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MPRLSPressures__callbacks = {
  "mprls_imu_node::msg",
  "MPRLSPressures",
  _MPRLSPressures__cdr_serialize,
  _MPRLSPressures__cdr_deserialize,
  _MPRLSPressures__get_serialized_size,
  _MPRLSPressures__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MPRLSPressures__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MPRLSPressures__callbacks,
  get_message_typesupport_handle_function,
  &mprls_imu_node__msg__MPRLSPressures__get_type_hash,
  &mprls_imu_node__msg__MPRLSPressures__get_type_description,
  &mprls_imu_node__msg__MPRLSPressures__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mprls_imu_node

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mprls_imu_node
const rosidl_message_type_support_t *
get_message_type_support_handle<mprls_imu_node::msg::MPRLSPressures>()
{
  return &mprls_imu_node::msg::typesupport_fastrtps_cpp::_MPRLSPressures__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mprls_imu_node, msg, MPRLSPressures)() {
  return &mprls_imu_node::msg::typesupport_fastrtps_cpp::_MPRLSPressures__handle;
}

#ifdef __cplusplus
}
#endif
