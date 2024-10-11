cmake_minimum_required(VERSION 3.0.2)
project(test_roslaunch_required)

find_package(catkin REQUIRED COMPONENTS roscpp)

catkin_package(
  CATKIN_DEPENDS roscpp
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(no_operation src/no_operation.cpp)
add_dependencies(no_operation ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(no_operation ${catkin_LIBRARIES})

add_executable(periodic_print src/periodic_print.cpp)
add_dependencies(periodic_print ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(periodic_print ${catkin_LIBRARIES})
