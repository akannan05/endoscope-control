// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mprls_imu_node/msg/mprls_pressures.hpp"


#ifndef MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__STRUCT_HPP_
#define MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mprls_imu_node__msg__MPRLSPressures __attribute__((deprecated))
#else
# define DEPRECATED__mprls_imu_node__msg__MPRLSPressures __declspec(deprecated)
#endif

namespace mprls_imu_node
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPRLSPressures_
{
  using Type = MPRLSPressures_<ContainerAllocator>;

  explicit MPRLSPressures_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressure_sensor_1 = 0.0f;
      this->pressure_sensor_2 = 0.0f;
    }
  }

  explicit MPRLSPressures_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressure_sensor_1 = 0.0f;
      this->pressure_sensor_2 = 0.0f;
    }
  }

  // field types and members
  using _pressure_sensor_1_type =
    float;
  _pressure_sensor_1_type pressure_sensor_1;
  using _pressure_sensor_2_type =
    float;
  _pressure_sensor_2_type pressure_sensor_2;

  // setters for named parameter idiom
  Type & set__pressure_sensor_1(
    const float & _arg)
  {
    this->pressure_sensor_1 = _arg;
    return *this;
  }
  Type & set__pressure_sensor_2(
    const float & _arg)
  {
    this->pressure_sensor_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator> *;
  using ConstRawPtr =
    const mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mprls_imu_node__msg__MPRLSPressures
    std::shared_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mprls_imu_node__msg__MPRLSPressures
    std::shared_ptr<mprls_imu_node::msg::MPRLSPressures_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPRLSPressures_ & other) const
  {
    if (this->pressure_sensor_1 != other.pressure_sensor_1) {
      return false;
    }
    if (this->pressure_sensor_2 != other.pressure_sensor_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPRLSPressures_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPRLSPressures_

// alias to use template instance with default allocator
using MPRLSPressures =
  mprls_imu_node::msg::MPRLSPressures_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mprls_imu_node

#endif  // MPRLS_IMU_NODE__MSG__DETAIL__MPRLS_PRESSURES__STRUCT_HPP_
