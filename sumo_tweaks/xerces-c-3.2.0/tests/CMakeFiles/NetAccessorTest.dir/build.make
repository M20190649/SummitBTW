# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0

# Include any dependencies generated for this target.
include tests/CMakeFiles/NetAccessorTest.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/NetAccessorTest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/NetAccessorTest.dir/flags.make

tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o: tests/CMakeFiles/NetAccessorTest.dir/flags.make
tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o: tests/src/NetAccessorTest/NetAccessorTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o -c /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests/src/NetAccessorTest/NetAccessorTest.cpp

tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.i"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests/src/NetAccessorTest/NetAccessorTest.cpp > CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.i

tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.s"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests/src/NetAccessorTest/NetAccessorTest.cpp -o CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.s

tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.requires:

.PHONY : tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.requires

tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.provides: tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/NetAccessorTest.dir/build.make tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.provides.build
.PHONY : tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.provides

tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.provides.build: tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o


# Object files for target NetAccessorTest
NetAccessorTest_OBJECTS = \
"CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o"

# External object files for target NetAccessorTest
NetAccessorTest_EXTERNAL_OBJECTS =

tests/NetAccessorTest: tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o
tests/NetAccessorTest: tests/CMakeFiles/NetAccessorTest.dir/build.make
tests/NetAccessorTest: src/libxerces-c-3.2.so
tests/NetAccessorTest: /usr/lib/x86_64-linux-gnu/libnsl.so
tests/NetAccessorTest: /home/gdor80/anaconda3/lib/libcurl.so
tests/NetAccessorTest: /home/gdor80/anaconda3/lib/libicuuc.so
tests/NetAccessorTest: /home/gdor80/anaconda3/lib/libicudata.so
tests/NetAccessorTest: tests/CMakeFiles/NetAccessorTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NetAccessorTest"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NetAccessorTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/NetAccessorTest.dir/build: tests/NetAccessorTest

.PHONY : tests/CMakeFiles/NetAccessorTest.dir/build

tests/CMakeFiles/NetAccessorTest.dir/requires: tests/CMakeFiles/NetAccessorTest.dir/src/NetAccessorTest/NetAccessorTest.cpp.o.requires

.PHONY : tests/CMakeFiles/NetAccessorTest.dir/requires

tests/CMakeFiles/NetAccessorTest.dir/clean:
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests && $(CMAKE_COMMAND) -P CMakeFiles/NetAccessorTest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/NetAccessorTest.dir/clean

tests/CMakeFiles/NetAccessorTest.dir/depend:
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/tests/CMakeFiles/NetAccessorTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/NetAccessorTest.dir/depend

