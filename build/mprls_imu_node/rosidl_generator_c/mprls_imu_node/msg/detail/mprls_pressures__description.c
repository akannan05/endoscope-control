// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

#include "mprls_imu_node/msg/detail/mprls_pressures__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mprls_imu_node
const rosidl_type_hash_t *
mprls_imu_node__msg__MPRLSPressures__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x03, 0xea, 0xf4, 0xe0, 0xcf, 0x6a, 0xea,
      0x90, 0x0c, 0xea, 0x9a, 0x9e, 0x81, 0x4d, 0x32,
      0xaa, 0xb5, 0x80, 0x2c, 0x13, 0x67, 0x0b, 0xb9,
      0xb9, 0xee, 0x6d, 0xf5, 0xf4, 0xbe, 0x50, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mprls_imu_node__msg__MPRLSPressures__TYPE_NAME[] = "mprls_imu_node/msg/MPRLSPressures";

// Define type names, field names, and default values
static char mprls_imu_node__msg__MPRLSPressures__FIELD_NAME__pressure_sensor_1[] = "pressure_sensor_1";
static char mprls_imu_node__msg__MPRLSPressures__FIELD_NAME__pressure_sensor_2[] = "pressure_sensor_2";

static rosidl_runtime_c__type_description__Field mprls_imu_node__msg__MPRLSPressures__FIELDS[] = {
  {
    {mprls_imu_node__msg__MPRLSPressures__FIELD_NAME__pressure_sensor_1, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mprls_imu_node__msg__MPRLSPressures__FIELD_NAME__pressure_sensor_2, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mprls_imu_node__msg__MPRLSPressures__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mprls_imu_node__msg__MPRLSPressures__TYPE_NAME, 33, 33},
      {mprls_imu_node__msg__MPRLSPressures__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 pressure_sensor_1\n"
  "float32 pressure_sensor_2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mprls_imu_node__msg__MPRLSPressures__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mprls_imu_node__msg__MPRLSPressures__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mprls_imu_node__msg__MPRLSPressures__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mprls_imu_node__msg__MPRLSPressures__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
