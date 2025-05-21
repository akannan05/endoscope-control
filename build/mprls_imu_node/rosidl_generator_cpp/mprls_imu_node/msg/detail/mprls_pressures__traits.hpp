// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mprls_imu_node/msg/mprls_pressures.hpp"


#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__TRAITS_HPP_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mprls_imu_node/msg/detail/mprls_pressures__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mprls_imu_node
{

namespace msg
{

inline void to_flow_style_yaml(
  const MPRLSPressures & msg,
  std::ostream & out)
{
  out << "{";
  // member: pressure_sensor_1
  {
    out << "pressure_sensor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_sensor_1, out);
    out << ", ";
  }

  // member: pressure_sensor_2
  {
    out << "pressure_sensor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_sensor_2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MPRLSPressures & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pressure_sensor_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_sensor_1: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_sensor_1, out);
    out << "\n";
  }

  // member: pressure_sensor_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_sensor_2: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_sensor_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MPRLSPressures & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mprls_imu_node

namespace rosidl_generator_traits
{

[[deprecated("use mprls_imu_node::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mprls_imu_node::msg::MPRLSPressures & msg,
  std::ostream & out, size_t indentation = 0)
{
  mprls_imu_node::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mprls_imu_node::msg::to_yaml() instead")]]
inline std::string to_yaml(const mprls_imu_node::msg::MPRLSPressures & msg)
{
  return mprls_imu_node::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mprls_imu_node::msg::MPRLSPressures>()
{
  return "mprls_imu_node::msg::MPRLSPressures";
}

template<>
inline const char * name<mprls_imu_node::msg::MPRLSPressures>()
{
  return "mprls_imu_node/msg/MPRLSPressures";
}

template<>
struct has_fixed_size<mprls_imu_node::msg::MPRLSPressures>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mprls_imu_node::msg::MPRLSPressures>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mprls_imu_node::msg::MPRLSPressures>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__TRAITS_HPP_
