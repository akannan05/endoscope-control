// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mprls_imu_node/msg/detail/mprls_pressures__rosidl_typesupport_introspection_c.h"
#include "mprls_imu_node/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__functions.h"
#include "mprls_imu_node/msg/detail/mprls_pressures__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mprls_imu_node__msg__MPRLSPressures__init(message_memory);
}

void mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_fini_function(void * message_memory)
{
  mprls_imu_node__msg__MPRLSPressures__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_member_array[2] = {
  {
    "pressure_sensor_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mprls_imu_node__msg__MPRLSPressures, pressure_sensor_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_sensor_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mprls_imu_node__msg__MPRLSPressures, pressure_sensor_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_members = {
  "mprls_imu_node__msg",  // message namespace
  "MPRLSPressures",  // message name
  2,  // number of fields
  sizeof(mprls_imu_node__msg__MPRLSPressures),
  false,  // has_any_key_member_
  mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_member_array,  // message members
  mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_init_function,  // function to initialize message memory (memory has to be allocated)
  mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_type_support_handle = {
  0,
  &mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_members,
  get_message_typesupport_handle_function,
  &mprls_imu_node__msg__MPRLSPressures__get_type_hash,
  &mprls_imu_node__msg__MPRLSPressures__get_type_description,
  &mprls_imu_node__msg__MPRLSPressures__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mprls_imu_node
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mprls_imu_node, msg, MPRLSPressures)() {
  if (!mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_type_support_handle.typesupport_identifier) {
    mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mprls_imu_node__msg__MPRLSPressures__rosidl_typesupport_introspection_c__MPRLSPressures_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
