# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/70/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alessio/CLionProjects/activity_tracker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alessio/CLionProjects/activity_tracker/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/runTests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/runTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/runTests.dir/flags.make

test/CMakeFiles/runTests.dir/runAllTests.cpp.o: test/CMakeFiles/runTests.dir/flags.make
test/CMakeFiles/runTests.dir/runAllTests.cpp.o: ../test/runAllTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alessio/CLionProjects/activity_tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/runTests.dir/runAllTests.cpp.o"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/runAllTests.cpp.o -c /home/alessio/CLionProjects/activity_tracker/test/runAllTests.cpp

test/CMakeFiles/runTests.dir/runAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/runAllTests.cpp.i"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alessio/CLionProjects/activity_tracker/test/runAllTests.cpp > CMakeFiles/runTests.dir/runAllTests.cpp.i

test/CMakeFiles/runTests.dir/runAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/runAllTests.cpp.s"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alessio/CLionProjects/activity_tracker/test/runAllTests.cpp -o CMakeFiles/runTests.dir/runAllTests.cpp.s

test/CMakeFiles/runTests.dir/TimeTests.cpp.o: test/CMakeFiles/runTests.dir/flags.make
test/CMakeFiles/runTests.dir/TimeTests.cpp.o: ../test/TimeTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alessio/CLionProjects/activity_tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/runTests.dir/TimeTests.cpp.o"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runTests.dir/TimeTests.cpp.o -c /home/alessio/CLionProjects/activity_tracker/test/TimeTests.cpp

test/CMakeFiles/runTests.dir/TimeTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runTests.dir/TimeTests.cpp.i"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alessio/CLionProjects/activity_tracker/test/TimeTests.cpp > CMakeFiles/runTests.dir/TimeTests.cpp.i

test/CMakeFiles/runTests.dir/TimeTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runTests.dir/TimeTests.cpp.s"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alessio/CLionProjects/activity_tracker/test/TimeTests.cpp -o CMakeFiles/runTests.dir/TimeTests.cpp.s

# Object files for target runTests
runTests_OBJECTS = \
"CMakeFiles/runTests.dir/runAllTests.cpp.o" \
"CMakeFiles/runTests.dir/TimeTests.cpp.o"

# External object files for target runTests
runTests_EXTERNAL_OBJECTS =

test/runTests: test/CMakeFiles/runTests.dir/runAllTests.cpp.o
test/runTests: test/CMakeFiles/runTests.dir/TimeTests.cpp.o
test/runTests: test/CMakeFiles/runTests.dir/build.make
test/runTests: test/lib/googletest/libgtestd.a
test/runTests: test/lib/googletest/libgtest_maind.a
test/runTests: libcore.a
test/runTests: test/lib/googletest/libgtestd.a
test/runTests: test/CMakeFiles/runTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alessio/CLionProjects/activity_tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable runTests"
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/runTests.dir/build: test/runTests

.PHONY : test/CMakeFiles/runTests.dir/build

test/CMakeFiles/runTests.dir/clean:
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/runTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/runTests.dir/clean

test/CMakeFiles/runTests.dir/depend:
	cd /home/alessio/CLionProjects/activity_tracker/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alessio/CLionProjects/activity_tracker /home/alessio/CLionProjects/activity_tracker/test /home/alessio/CLionProjects/activity_tracker/cmake-build-debug /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test /home/alessio/CLionProjects/activity_tracker/cmake-build-debug/test/CMakeFiles/runTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runTests.dir/depend

