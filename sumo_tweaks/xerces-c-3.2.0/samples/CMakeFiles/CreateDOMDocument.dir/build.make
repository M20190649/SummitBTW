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
include samples/CMakeFiles/CreateDOMDocument.dir/depend.make

# Include the progress variables for this target.
include samples/CMakeFiles/CreateDOMDocument.dir/progress.make

# Include the compile flags for this target's objects.
include samples/CMakeFiles/CreateDOMDocument.dir/flags.make

samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o: samples/CMakeFiles/CreateDOMDocument.dir/flags.make
samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o: samples/src/CreateDOMDocument/CreateDOMDocument.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o -c /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples/src/CreateDOMDocument/CreateDOMDocument.cpp

samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.i"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples/src/CreateDOMDocument/CreateDOMDocument.cpp > CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.i

samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.s"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples/src/CreateDOMDocument/CreateDOMDocument.cpp -o CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.s

samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.requires:

.PHONY : samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.requires

samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.provides: samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.requires
	$(MAKE) -f samples/CMakeFiles/CreateDOMDocument.dir/build.make samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.provides.build
.PHONY : samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.provides

samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.provides.build: samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o


# Object files for target CreateDOMDocument
CreateDOMDocument_OBJECTS = \
"CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o"

# External object files for target CreateDOMDocument
CreateDOMDocument_EXTERNAL_OBJECTS =

samples/CreateDOMDocument: samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o
samples/CreateDOMDocument: samples/CMakeFiles/CreateDOMDocument.dir/build.make
samples/CreateDOMDocument: src/libxerces-c-3.2.so
samples/CreateDOMDocument: /usr/lib/x86_64-linux-gnu/libnsl.so
samples/CreateDOMDocument: /home/gdor80/anaconda3/lib/libcurl.so
samples/CreateDOMDocument: /home/gdor80/anaconda3/lib/libicuuc.so
samples/CreateDOMDocument: /home/gdor80/anaconda3/lib/libicudata.so
samples/CreateDOMDocument: samples/CMakeFiles/CreateDOMDocument.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CreateDOMDocument"
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CreateDOMDocument.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
samples/CMakeFiles/CreateDOMDocument.dir/build: samples/CreateDOMDocument

.PHONY : samples/CMakeFiles/CreateDOMDocument.dir/build

samples/CMakeFiles/CreateDOMDocument.dir/requires: samples/CMakeFiles/CreateDOMDocument.dir/src/CreateDOMDocument/CreateDOMDocument.cpp.o.requires

.PHONY : samples/CMakeFiles/CreateDOMDocument.dir/requires

samples/CMakeFiles/CreateDOMDocument.dir/clean:
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples && $(CMAKE_COMMAND) -P CMakeFiles/CreateDOMDocument.dir/cmake_clean.cmake
.PHONY : samples/CMakeFiles/CreateDOMDocument.dir/clean

samples/CMakeFiles/CreateDOMDocument.dir/depend:
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/samples/CMakeFiles/CreateDOMDocument.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : samples/CMakeFiles/CreateDOMDocument.dir/depend

