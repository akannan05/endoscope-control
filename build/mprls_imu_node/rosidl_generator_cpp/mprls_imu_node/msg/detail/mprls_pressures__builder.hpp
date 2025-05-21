// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mprls_imu_node/msg/mprls_pressures.hpp"


#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__BUILDER_HPP_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mprls_imu_node/msg/detail/mprls_pressures__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mprls_imu_node
{

namespace msg
{

namespace builder
{

class Init_MPRLSPressures_pressure_sensor_2
{
public:
  explicit Init_MPRLSPressures_pressure_sensor_2(::mprls_imu_node::msg::MPRLSPressures & msg)
  : msg_(msg)
  {}
  ::mprls_imu_node::msg::MPRLSPressures pressure_sensor_2(::mprls_imu_node::msg::MPRLSPressures::_pressure_sensor_2_type arg)
  {
    msg_.pressure_sensor_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mprls_imu_node::msg::MPRLSPressures msg_;
};

class Init_MPRLSPressures_pressure_sensor_1
{
public:
  Init_MPRLSPressures_pressure_sensor_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MPRLSPressures_pressure_sensor_2 pressure_sensor_1(::mprls_imu_node::msg::MPRLSPressures::_pressure_sensor_1_type arg)
  {
    msg_.pressure_sensor_1 = std::move(arg);
    return Init_MPRLSPressures_pressure_sensor_2(msg_);
  }

private:
  ::mprls_imu_node::msg::MPRLSPressures msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mprls_imu_node::msg::MPRLSPressures>()
{
  return mprls_imu_node::msg::builder::Init_MPRLSPressures_pressure_sensor_1();
}

}  // namespace mprls_imu_node

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__BUILDER_HPP_
