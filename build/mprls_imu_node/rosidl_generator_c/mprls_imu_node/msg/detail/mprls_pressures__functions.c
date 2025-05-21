// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mprls_imu_node:msg/MPRLSPressures.idl
// generated code does not contain a copyright notice
#include "mprls_imu_node/msg/detail/mprls_pressures__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mprls_imu_node__msg__MPRLSPressures__init(mprls_imu_node__msg__MPRLSPressures * msg)
{
  if (!msg) {
    return false;
  }
  // pressure_sensor_1
  // pressure_sensor_2
  return true;
}

void
mprls_imu_node__msg__MPRLSPressures__fini(mprls_imu_node__msg__MPRLSPressures * msg)
{
  if (!msg) {
    return;
  }
  // pressure_sensor_1
  // pressure_sensor_2
}

bool
mprls_imu_node__msg__MPRLSPressures__are_equal(const mprls_imu_node__msg__MPRLSPressures * lhs, const mprls_imu_node__msg__MPRLSPressures * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pressure_sensor_1
  if (lhs->pressure_sensor_1 != rhs->pressure_sensor_1) {
    return false;
  }
  // pressure_sensor_2
  if (lhs->pressure_sensor_2 != rhs->pressure_sensor_2) {
    return false;
  }
  return true;
}

bool
mprls_imu_node__msg__MPRLSPressures__copy(
  const mprls_imu_node__msg__MPRLSPressures * input,
  mprls_imu_node__msg__MPRLSPressures * output)
{
  if (!input || !output) {
    return false;
  }
  // pressure_sensor_1
  output->pressure_sensor_1 = input->pressure_sensor_1;
  // pressure_sensor_2
  output->pressure_sensor_2 = input->pressure_sensor_2;
  return true;
}

mprls_imu_node__msg__MPRLSPressures *
mprls_imu_node__msg__MPRLSPressures__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mprls_imu_node__msg__MPRLSPressures * msg = (mprls_imu_node__msg__MPRLSPressures *)allocator.allocate(sizeof(mprls_imu_node__msg__MPRLSPressures), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mprls_imu_node__msg__MPRLSPressures));
  bool success = mprls_imu_node__msg__MPRLSPressures__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mprls_imu_node__msg__MPRLSPressures__destroy(mprls_imu_node__msg__MPRLSPressures * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mprls_imu_node__msg__MPRLSPressures__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mprls_imu_node__msg__MPRLSPressures__Sequence__init(mprls_imu_node__msg__MPRLSPressures__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mprls_imu_node__msg__MPRLSPressures * data = NULL;

  if (size) {
    data = (mprls_imu_node__msg__MPRLSPressures *)allocator.zero_allocate(size, sizeof(mprls_imu_node__msg__MPRLSPressures), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mprls_imu_node__msg__MPRLSPressures__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mprls_imu_node__msg__MPRLSPressures__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mprls_imu_node__msg__MPRLSPressures__Sequence__fini(mprls_imu_node__msg__MPRLSPressures__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mprls_imu_node__msg__MPRLSPressures__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mprls_imu_node__msg__MPRLSPressures__Sequence *
mprls_imu_node__msg__MPRLSPressures__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mprls_imu_node__msg__MPRLSPressures__Sequence * array = (mprls_imu_node__msg__MPRLSPressures__Sequence *)allocator.allocate(sizeof(mprls_imu_node__msg__MPRLSPressures__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mprls_imu_node__msg__MPRLSPressures__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mprls_imu_node__msg__MPRLSPressures__Sequence__destroy(mprls_imu_node__msg__MPRLSPressures__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mprls_imu_node__msg__MPRLSPressures__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mprls_imu_node__msg__MPRLSPressures__Sequence__are_equal(const mprls_imu_node__msg__MPRLSPressures__Sequence * lhs, const mprls_imu_node__msg__MPRLSPressures__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mprls_imu_node__msg__MPRLSPressures__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mprls_imu_node__msg__MPRLSPressures__Sequence__copy(
  const mprls_imu_node__msg__MPRLSPressures__Sequence * input,
  mprls_imu_node__msg__MPRLSPressures__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mprls_imu_node__msg__MPRLSPressures);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mprls_imu_node__msg__MPRLSPressures * data =
      (mprls_imu_node__msg__MPRLSPressures *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mprls_imu_node__msg__MPRLSPressures__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mprls_imu_node__msg__MPRLSPressures__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mprls_imu_node__msg__MPRLSPressures__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
