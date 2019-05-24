cmake_minimum_required(VERSION 3.14)
project(activity_tracker)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

add_executable(activity_tracker main.cpp Time.cpp Time.h)
set(SOURCE_FILES main.cpp Time.cpp Time.h test/runAllTests.cpp test/TimeTests.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(activity_tracker core)