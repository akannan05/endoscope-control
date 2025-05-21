// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__functions.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mprls_imu_node
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MPRLSPressures_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mprls_imu_node::msg::MPRLSPressures(_init);
}

void MPRLSPressures_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mprls_imu_node::msg::MPRLSPressures *>(message_memory);
  typed_message->~MPRLSPressures();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MPRLSPressures_message_member_array[2] = {
  {
    "pressure_sensor_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mprls_imu_node::msg::MPRLSPressures, pressure_sensor_1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pressure_sensor_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mprls_imu_node::msg::MPRLSPressures, pressure_sensor_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MPRLSPressures_message_members = {
  "mprls_imu_node::msg",  // message namespace
  "MPRLSPressures",  // message name
  2,  // number of fields
  sizeof(mprls_imu_node::msg::MPRLSPressures),
  false,  // has_any_key_member_
  MPRLSPressures_message_member_array,  // message members
  MPRLSPressures_init_function,  // function to initialize message memory (memory has to be allocated)
  MPRLSPressures_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MPRLSPressures_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MPRLSPressures_message_members,
  get_message_typesupport_handle_function,
  &mprls_imu_node__msg__MPRLSPressures__get_type_hash,
  &mprls_imu_node__msg__MPRLSPressures__get_type_description,
  &mprls_imu_node__msg__MPRLSPressures__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mprls_imu_node


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mprls_imu_node::msg::MPRLSPressures>()
{
  return &::mprls_imu_node::msg::rosidl_typesupport_introspection_cpp::MPRLSPressures_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mprls_imu_node, msg, MPRLSPressures)() {
  return &::mprls_imu_node::msg::rosidl_typesupport_introspection_cpp::MPRLSPressures_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
