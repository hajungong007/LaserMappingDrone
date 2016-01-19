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
CMAKE_SOURCE_DIR = /home/marko/research/VeloView-master/build/paraview/src/paraview

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marko/research/VeloView-master/build/paraview/src/paraview-build

# Include any dependencies generated for this target.
include VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/depend.make

# Include the progress variables for this target.
include VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/progress.make

# Include the compile flags for this target's objects.
include VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/flags.make

VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: bin/vtkWrapHierarchy-pv4.3
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: VTK/IO/PLY/vtkIOPLYHierarchy.args
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: VTK/IO/PLY/vtkIOPLYHierarchy.data
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: lib/cmake/paraview-4.3/Modules/vtkCommonExecutionModelHierarchy.txt
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: lib/cmake/paraview-4.3/Modules/vtkCommonMiscHierarchy.txt
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: lib/cmake/paraview-4.3/Modules/vtkIOGeometryHierarchy.txt
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLY.h
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYReader.h
VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYWriter.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "For vtkIOPLY - updating vtkIOPLYHierarchy.txt"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && ../../../bin/vtkWrapHierarchy-pv4.3 @vtkIOPLYHierarchy.args -o /home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/cmake/paraview-4.3/Modules/vtkIOPLYHierarchy.txt vtkIOPLYHierarchy.data /home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/cmake/paraview-4.3/Modules/vtkCommonExecutionModelHierarchy.txt /home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/cmake/paraview-4.3/Modules/vtkCommonMiscHierarchy.txt /home/marko/research/VeloView-master/build/paraview/src/paraview-build/lib/cmake/paraview-4.3/Modules/vtkIOGeometryHierarchy.txt
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/flags.make
VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLY.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o -c /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLY.cxx

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.i"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLY.cxx > CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.i

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.s"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLY.cxx -o CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.s

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.requires:
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.requires

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.provides: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.requires
	$(MAKE) -f VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/build.make VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.provides.build
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.provides

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.provides.build: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/flags.make
VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYReader.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o -c /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYReader.cxx

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.i"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYReader.cxx > CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.i

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.s"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYReader.cxx -o CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.s

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.requires:
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.requires

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.provides: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.requires
	$(MAKE) -f VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/build.make VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.provides.build
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.provides

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.provides.build: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/flags.make
VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYWriter.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o -c /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYWriter.cxx

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.i"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYWriter.cxx > CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.i

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.s"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY/vtkPLYWriter.cxx -o CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.s

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.requires:
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.requires

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.provides: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.requires
	$(MAKE) -f VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/build.make VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.provides.build
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.provides

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.provides.build: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o

# Object files for target vtkIOPLY
vtkIOPLY_OBJECTS = \
"CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o" \
"CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o" \
"CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o"

# External object files for target vtkIOPLY
vtkIOPLY_EXTERNAL_OBJECTS =

lib/libvtkIOPLY-pv4.3.so.1: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o
lib/libvtkIOPLY-pv4.3.so.1: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o
lib/libvtkIOPLY-pv4.3.so.1: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o
lib/libvtkIOPLY-pv4.3.so.1: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/build.make
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkIOGeometry-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkIOCore-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonExecutionModel-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonDataModel-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonMisc-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonSystem-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonTransforms-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonMath-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: lib/libvtkCommonCore-pv4.3.so.1
lib/libvtkIOPLY-pv4.3.so.1: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../../lib/libvtkIOPLY-pv4.3.so"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkIOPLY.dir/link.txt --verbose=$(VERBOSE)
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../lib/libvtkIOPLY-pv4.3.so.1 ../../../lib/libvtkIOPLY-pv4.3.so.1 ../../../lib/libvtkIOPLY-pv4.3.so

lib/libvtkIOPLY-pv4.3.so: lib/libvtkIOPLY-pv4.3.so.1
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libvtkIOPLY-pv4.3.so

# Rule to build all files generated by this target.
VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/build: lib/libvtkIOPLY-pv4.3.so
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/build

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/requires: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLY.cxx.o.requires
VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/requires: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYReader.cxx.o.requires
VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/requires: VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/vtkPLYWriter.cxx.o.requires
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/requires

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/clean:
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOPLY.dir/cmake_clean.cmake
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/clean

VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/depend: VTK/IO/PLY/vtkIOPLYHierarchy.stamp.txt
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/build/paraview/src/paraview /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/IO/PLY /home/marko/research/VeloView-master/build/paraview/src/paraview-build /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY /home/marko/research/VeloView-master/build/paraview/src/paraview-build/VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : VTK/IO/PLY/CMakeFiles/vtkIOPLY.dir/depend

