# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/marko/research/VeloView-master/build/eigen/src/eigen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marko/research/VeloView-master/build/eigen/src/eigen-build

# Include any dependencies generated for this target.
include test/CMakeFiles/diagonalmatrices_8.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/diagonalmatrices_8.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/diagonalmatrices_8.dir/flags.make

test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o: test/CMakeFiles/diagonalmatrices_8.dir/flags.make
test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o: /home/marko/research/VeloView-master/build/eigen/src/eigen/test/diagonalmatrices.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/eigen/src/eigen-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o -c /home/marko/research/VeloView-master/build/eigen/src/eigen/test/diagonalmatrices.cpp

test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.i"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/eigen/src/eigen/test/diagonalmatrices.cpp > CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.i

test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.s"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/eigen/src/eigen/test/diagonalmatrices.cpp -o CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.s

test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.requires:
.PHONY : test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.requires

test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.provides: test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/diagonalmatrices_8.dir/build.make test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.provides.build
.PHONY : test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.provides

test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.provides.build: test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o

# Object files for target diagonalmatrices_8
diagonalmatrices_8_OBJECTS = \
"CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o"

# External object files for target diagonalmatrices_8
diagonalmatrices_8_EXTERNAL_OBJECTS =

test/diagonalmatrices_8: test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o
test/diagonalmatrices_8: test/CMakeFiles/diagonalmatrices_8.dir/build.make
test/diagonalmatrices_8: test/CMakeFiles/diagonalmatrices_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable diagonalmatrices_8"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/diagonalmatrices_8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/diagonalmatrices_8.dir/build: test/diagonalmatrices_8
.PHONY : test/CMakeFiles/diagonalmatrices_8.dir/build

test/CMakeFiles/diagonalmatrices_8.dir/requires: test/CMakeFiles/diagonalmatrices_8.dir/diagonalmatrices.cpp.o.requires
.PHONY : test/CMakeFiles/diagonalmatrices_8.dir/requires

test/CMakeFiles/diagonalmatrices_8.dir/clean:
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test && $(CMAKE_COMMAND) -P CMakeFiles/diagonalmatrices_8.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/diagonalmatrices_8.dir/clean

test/CMakeFiles/diagonalmatrices_8.dir/depend:
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/build/eigen/src/eigen /home/marko/research/VeloView-master/build/eigen/src/eigen/test /home/marko/research/VeloView-master/build/eigen/src/eigen-build /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test /home/marko/research/VeloView-master/build/eigen/src/eigen-build/test/CMakeFiles/diagonalmatrices_8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/diagonalmatrices_8.dir/depend

