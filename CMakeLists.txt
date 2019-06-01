cmake_minimum_required(VERSION 3.14)
project(activity_tracker)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

add_executable(activity_tracker main.cpp Time.cpp Time.h)
set(SOURCE_FILES main.cpp Time.cpp Time.h Date.cpp Date.h Activity.cpp Activity.h ActivityTracker.cpp ActivityTracker.h)
add_library(core ${SOURCE_FILES})
target_link_libraries(activity_tracker core)

set(CURSES_NEED_NCURSES, TRUE)
find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries( activity_tracker ${CURSES_LIBRARIES} )