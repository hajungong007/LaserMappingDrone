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
include Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/depend.make

# Include the progress variables for this target.
include Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/progress.make

# Include the compile flags for this target's objects.
include Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/flags.make

Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx: bin/vtkWrapClientServer-pv4.3
Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx: /home/marko/research/VeloView-master/build/paraview/src/paraview/VTK/Wrapping/Tools/hints
Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx: Wrapping/ClientServer/vtkPVServerManagerApplicationCS.args
Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx: /home/marko/research/VeloView-master/build/paraview/src/paraview/ParaViewCore/ServerManager/SMApplication/vtkInitializationHelper.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "CS Wrapping - generating vtkInitializationHelperClientServer.cxx"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv4.3 @/home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkPVServerManagerApplicationCS.args -o /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx /home/marko/research/VeloView-master/build/paraview/src/paraview/ParaViewCore/ServerManager/SMApplication/vtkInitializationHelper.h

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o: Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o -c /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.i"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx > CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.s"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx -o CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.requires:
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o: Wrapping/ClientServer/vtkPVServerManagerApplicationCSInit.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o -c /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkPVServerManagerApplicationCSInit.cxx

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.i"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkPVServerManagerApplicationCSInit.cxx > CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.s"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/vtkPVServerManagerApplicationCSInit.cxx -o CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.requires:
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o

# Object files for target vtkPVServerManagerApplicationCS
vtkPVServerManagerApplicationCS_OBJECTS = \
"CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o" \
"CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o"

# External object files for target vtkPVServerManagerApplicationCS
vtkPVServerManagerApplicationCS_EXTERNAL_OBJECTS =

lib/libvtkPVServerManagerApplicationCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o
lib/libvtkPVServerManagerApplicationCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o
lib/libvtkPVServerManagerApplicationCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/build.make
lib/libvtkPVServerManagerApplicationCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/libvtkPVServerManagerApplicationCS-pv4.3.a"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkPVServerManagerApplicationCS.dir/cmake_clean_target.cmake
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkPVServerManagerApplicationCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/build: lib/libvtkPVServerManagerApplicationCS-pv4.3.a
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/build

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkInitializationHelperClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/vtkPVServerManagerApplicationCSInit.cxx.o.requires
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/requires

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/clean:
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkPVServerManagerApplicationCS.dir/cmake_clean.cmake
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/clean

Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/depend: Wrapping/ClientServer/vtkInitializationHelperClientServer.cxx
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/build/paraview/src/paraview /home/marko/research/VeloView-master/build/paraview/src/paraview/Wrapping/ClientServer /home/marko/research/VeloView-master/build/paraview/src/paraview-build /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkPVServerManagerApplicationCS.dir/depend

