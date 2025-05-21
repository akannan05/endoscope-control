cmake_minimum_required(VERSION 3.8)
project(mprls_imu_node)

# --------------------------------------------------
#  Compiler & language settings
# --------------------------------------------------
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --------------------------------------------------
#  ROS2 + msg generation
# --------------------------------------------------
find_package(ament_cmake      	REQUIRED)
find_package(rclcpp           	REQUIRED)
find_package(std_msgs         	REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MPRLSPressures.msg"
)
ament_export_dependencies(rosidl_default_runtime)

include_directories(include)

# --------------------------------------------------
#  Shared driver library  (now really SHARED)
# --------------------------------------------------
add_library(sensor_drivers SHARED      	# <-- changed to SHARED
  src/Adafruit_MPRLS.cpp
  src/TCA9548A.cpp
)
target_include_directories(sensor_drivers PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
target_link_libraries(sensor_drivers i2c)  # <-- link libi2c once, here
ament_target_dependencies(sensor_drivers rclcpp)

install(TARGETS sensor_drivers
  DESTINATION lib/${PROJECT_NAME}
)

# --------------------------------------------------
#  Test executables
# --------------------------------------------------
add_executable(test_tca src/test_TCA.cpp)
target_link_libraries(test_tca sensor_drivers)
set_target_properties(test_tca PROPERTIES
  BUILD_WITH_INSTALL_RPATH TRUE
  INSTALL_RPATH "$ORIGIN"
)
install(TARGETS test_tca DESTINATION lib/${PROJECT_NAME})

add_executable(test_mprls_node src/test_mprls_publisher.cpp)
target_link_libraries(test_mprls_node sensor_drivers)
ament_target_dependencies(test_mprls_node rclcpp std_msgs)
set_target_properties(test_mprls_node PROPERTIES
  BUILD_WITH_INSTALL_RPATH TRUE
  INSTALL_RPATH "$ORIGIN"
)
rosidl_target_interfaces(test_mprls_node ${PROJECT_NAME} "rosidl_typesupport_cpp")
install(TARGETS test_mprls_node DESTINATION lib/${PROJECT_NAME})

# --------------------------------------------------
#  Install headers & msg files
# --------------------------------------------------
install(DIRECTORY include/ DESTINATION include)
install(DIRECTORY msg/ 	DESTINATION share/${PROJECT_NAME}/msg)

# --------------------------------------------------
ament_package()

