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

# Utility rule file for doc-xml.

# Include the progress variables for this target.
include doc/CMakeFiles/doc-xml.dir/progress.make

doc-xml: doc/CMakeFiles/doc-xml.dir/build.make

.PHONY : doc-xml

# Rule to build all files generated by this target.
doc/CMakeFiles/doc-xml.dir/build: doc-xml

.PHONY : doc/CMakeFiles/doc-xml.dir/build

doc/CMakeFiles/doc-xml.dir/clean:
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/doc && $(CMAKE_COMMAND) -P CMakeFiles/doc-xml.dir/cmake_clean.cmake
.PHONY : doc/CMakeFiles/doc-xml.dir/clean

doc/CMakeFiles/doc-xml.dir/depend:
	cd /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/doc /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0 /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/doc /home/gdor80/Desktop/SummitBTW/sumo/xerces-c-3.2.0/doc/CMakeFiles/doc-xml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/CMakeFiles/doc-xml.dir/depend

