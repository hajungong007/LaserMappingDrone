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
CMAKE_SOURCE_DIR = /home/marko/research/VeloView-master/build/liblas/src/liblas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marko/research/VeloView-master/build/liblas/src/liblas-build

# Include any dependencies generated for this target.
include apps/CMakeFiles/bigfile_test.dir/depend.make

# Include the progress variables for this target.
include apps/CMakeFiles/bigfile_test.dir/progress.make

# Include the compile flags for this target's objects.
include apps/CMakeFiles/bigfile_test.dir/flags.make

apps/CMakeFiles/bigfile_test.dir/bigtest.c.o: apps/CMakeFiles/bigfile_test.dir/flags.make
apps/CMakeFiles/bigfile_test.dir/bigtest.c.o: /home/marko/research/VeloView-master/build/liblas/src/liblas/apps/bigtest.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/liblas/src/liblas-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object apps/CMakeFiles/bigfile_test.dir/bigtest.c.o"
	cd /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bigfile_test.dir/bigtest.c.o   -c /home/marko/research/VeloView-master/build/liblas/src/liblas/apps/bigtest.c

apps/CMakeFiles/bigfile_test.dir/bigtest.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bigfile_test.dir/bigtest.c.i"
	cd /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/marko/research/VeloView-master/build/liblas/src/liblas/apps/bigtest.c > CMakeFiles/bigfile_test.dir/bigtest.c.i

apps/CMakeFiles/bigfile_test.dir/bigtest.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bigfile_test.dir/bigtest.c.s"
	cd /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/marko/research/VeloView-master/build/liblas/src/liblas/apps/bigtest.c -o CMakeFiles/bigfile_test.dir/bigtest.c.s

apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.requires:
.PHONY : apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.requires

apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.provides: apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.requires
	$(MAKE) -f apps/CMakeFiles/bigfile_test.dir/build.make apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.provides.build
.PHONY : apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.provides

apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.provides.build: apps/CMakeFiles/bigfile_test.dir/bigtest.c.o

# Object files for target bigfile_test
bigfile_test_OBJECTS = \
"CMakeFiles/bigfile_test.dir/bigtest.c.o"

# External object files for target bigfile_test
bigfile_test_EXTERNAL_OBJECTS =

bin/Release/bigfile_test: apps/CMakeFiles/bigfile_test.dir/bigtest.c.o
bin/Release/bigfile_test: apps/CMakeFiles/bigfile_test.dir/build.make
bin/Release/bigfile_test: bin/Release/liblas_c.so.2.1.0
bin/Release/bigfile_test: bin/Release/liblas.so.2.1.0
bin/Release/bigfile_test: /home/marko/research/VeloView-master/build/install/lib/libboost_chrono.so
bin/Release/bigfile_test: /home/marko/research/VeloView-master/build/install/lib/libboost_program_options.so
bin/Release/bigfile_test: /home/marko/research/VeloView-master/build/install/lib/libboost_thread.so
bin/Release/bigfile_test: /home/marko/research/VeloView-master/build/install/lib/libboost_system.so
bin/Release/bigfile_test: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/Release/bigfile_test: apps/CMakeFiles/bigfile_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ../bin/Release/bigfile_test"
	cd /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bigfile_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
apps/CMakeFiles/bigfile_test.dir/build: bin/Release/bigfile_test
.PHONY : apps/CMakeFiles/bigfile_test.dir/build

apps/CMakeFiles/bigfile_test.dir/requires: apps/CMakeFiles/bigfile_test.dir/bigtest.c.o.requires
.PHONY : apps/CMakeFiles/bigfile_test.dir/requires

apps/CMakeFiles/bigfile_test.dir/clean:
	cd /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps && $(CMAKE_COMMAND) -P CMakeFiles/bigfile_test.dir/cmake_clean.cmake
.PHONY : apps/CMakeFiles/bigfile_test.dir/clean

apps/CMakeFiles/bigfile_test.dir/depend:
	cd /home/marko/research/VeloView-master/build/liblas/src/liblas-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/build/liblas/src/liblas /home/marko/research/VeloView-master/build/liblas/src/liblas/apps /home/marko/research/VeloView-master/build/liblas/src/liblas-build /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps /home/marko/research/VeloView-master/build/liblas/src/liblas-build/apps/CMakeFiles/bigfile_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : apps/CMakeFiles/bigfile_test.dir/depend

