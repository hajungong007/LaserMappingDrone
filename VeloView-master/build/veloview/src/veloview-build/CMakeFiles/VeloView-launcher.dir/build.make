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
CMAKE_SOURCE_DIR = /home/marko/research/VeloView-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marko/research/VeloView-master/build/veloview/src/veloview-build

# Include any dependencies generated for this target.
include CMakeFiles/VeloView-launcher.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VeloView-launcher.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VeloView-launcher.dir/flags.make

CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o: CMakeFiles/VeloView-launcher.dir/flags.make
CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o: VeloView-forward.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/veloview/src/veloview-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o   -c /home/marko/research/VeloView-master/build/veloview/src/veloview-build/VeloView-forward.c

CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/marko/research/VeloView-master/build/veloview/src/veloview-build/VeloView-forward.c > CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.i

CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/marko/research/VeloView-master/build/veloview/src/veloview-build/VeloView-forward.c -o CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.s

CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.requires:
.PHONY : CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.requires

CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.provides: CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.requires
	$(MAKE) -f CMakeFiles/VeloView-launcher.dir/build.make CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.provides.build
.PHONY : CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.provides

CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.provides.build: CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o

# Object files for target VeloView-launcher
VeloView__launcher_OBJECTS = \
"CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o"

# External object files for target VeloView-launcher
VeloView__launcher_EXTERNAL_OBJECTS =

launcher/VeloView: CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o
launcher/VeloView: CMakeFiles/VeloView-launcher.dir/build.make
launcher/VeloView: CMakeFiles/VeloView-launcher.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable launcher/VeloView"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VeloView-launcher.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VeloView-launcher.dir/build: launcher/VeloView
.PHONY : CMakeFiles/VeloView-launcher.dir/build

CMakeFiles/VeloView-launcher.dir/requires: CMakeFiles/VeloView-launcher.dir/VeloView-forward.c.o.requires
.PHONY : CMakeFiles/VeloView-launcher.dir/requires

CMakeFiles/VeloView-launcher.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VeloView-launcher.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VeloView-launcher.dir/clean

CMakeFiles/VeloView-launcher.dir/depend:
	cd /home/marko/research/VeloView-master/build/veloview/src/veloview-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master /home/marko/research/VeloView-master /home/marko/research/VeloView-master/build/veloview/src/veloview-build /home/marko/research/VeloView-master/build/veloview/src/veloview-build /home/marko/research/VeloView-master/build/veloview/src/veloview-build/CMakeFiles/VeloView-launcher.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VeloView-launcher.dir/depend

