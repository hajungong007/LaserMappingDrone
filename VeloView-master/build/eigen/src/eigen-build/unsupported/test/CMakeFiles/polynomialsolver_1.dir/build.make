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
include unsupported/test/CMakeFiles/polynomialsolver_1.dir/depend.make

# Include the progress variables for this target.
include unsupported/test/CMakeFiles/polynomialsolver_1.dir/progress.make

# Include the compile flags for this target's objects.
include unsupported/test/CMakeFiles/polynomialsolver_1.dir/flags.make

unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o: unsupported/test/CMakeFiles/polynomialsolver_1.dir/flags.make
unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o: /home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/test/polynomialsolver.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/eigen/src/eigen-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o -c /home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/test/polynomialsolver.cpp

unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.i"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/test/polynomialsolver.cpp > CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.i

unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.s"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/test/polynomialsolver.cpp -o CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.s

unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.requires:
.PHONY : unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.requires

unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.provides: unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.requires
	$(MAKE) -f unsupported/test/CMakeFiles/polynomialsolver_1.dir/build.make unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.provides.build
.PHONY : unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.provides

unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.provides.build: unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o

# Object files for target polynomialsolver_1
polynomialsolver_1_OBJECTS = \
"CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o"

# External object files for target polynomialsolver_1
polynomialsolver_1_EXTERNAL_OBJECTS =

unsupported/test/polynomialsolver_1: unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o
unsupported/test/polynomialsolver_1: unsupported/test/CMakeFiles/polynomialsolver_1.dir/build.make
unsupported/test/polynomialsolver_1: unsupported/test/CMakeFiles/polynomialsolver_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable polynomialsolver_1"
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/polynomialsolver_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unsupported/test/CMakeFiles/polynomialsolver_1.dir/build: unsupported/test/polynomialsolver_1
.PHONY : unsupported/test/CMakeFiles/polynomialsolver_1.dir/build

unsupported/test/CMakeFiles/polynomialsolver_1.dir/requires: unsupported/test/CMakeFiles/polynomialsolver_1.dir/polynomialsolver.cpp.o.requires
.PHONY : unsupported/test/CMakeFiles/polynomialsolver_1.dir/requires

unsupported/test/CMakeFiles/polynomialsolver_1.dir/clean:
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test && $(CMAKE_COMMAND) -P CMakeFiles/polynomialsolver_1.dir/cmake_clean.cmake
.PHONY : unsupported/test/CMakeFiles/polynomialsolver_1.dir/clean

unsupported/test/CMakeFiles/polynomialsolver_1.dir/depend:
	cd /home/marko/research/VeloView-master/build/eigen/src/eigen-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/build/eigen/src/eigen /home/marko/research/VeloView-master/build/eigen/src/eigen/unsupported/test /home/marko/research/VeloView-master/build/eigen/src/eigen-build /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test /home/marko/research/VeloView-master/build/eigen/src/eigen-build/unsupported/test/CMakeFiles/polynomialsolver_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unsupported/test/CMakeFiles/polynomialsolver_1.dir/depend

