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
include Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/depend.make

# Include the progress variables for this target.
include Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/progress.make

# Include the compile flags for this target's objects.
include Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/flags.make

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/flags.make
Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o: /home/marko/research/VeloView-master/build/paraview/src/paraview/Utilities/ProcessXML/ProcessXML.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/paraview/src/paraview-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o -c /home/marko/research/VeloView-master/build/paraview/src/paraview/Utilities/ProcessXML/ProcessXML.cxx

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.i"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/marko/research/VeloView-master/build/paraview/src/paraview/Utilities/ProcessXML/ProcessXML.cxx > CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.i

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.s"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/marko/research/VeloView-master/build/paraview/src/paraview/Utilities/ProcessXML/ProcessXML.cxx -o CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.s

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.requires:
.PHONY : Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.requires

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.provides: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.requires
	$(MAKE) -f Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/build.make Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.provides.build
.PHONY : Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.provides

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.provides.build: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o

# Object files for target kwProcessXML
kwProcessXML_OBJECTS = \
"CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o"

# External object files for target kwProcessXML
kwProcessXML_EXTERNAL_OBJECTS =

bin/vtkkwProcessXML-pv4.3: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o
bin/vtkkwProcessXML-pv4.3: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/build.make
bin/vtkkwProcessXML-pv4.3: lib/libvtkCommonCore-pv4.3.so.1
bin/vtkkwProcessXML-pv4.3: lib/libvtksys-pv4.3.so.1
bin/vtkkwProcessXML-pv4.3: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/vtkkwProcessXML-pv4.3"
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kwProcessXML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/build: bin/vtkkwProcessXML-pv4.3
.PHONY : Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/build

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/requires: Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/ProcessXML.cxx.o.requires
.PHONY : Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/requires

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/clean:
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML && $(CMAKE_COMMAND) -P CMakeFiles/kwProcessXML.dir/cmake_clean.cmake
.PHONY : Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/clean

Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/depend:
	cd /home/marko/research/VeloView-master/build/paraview/src/paraview-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/build/paraview/src/paraview /home/marko/research/VeloView-master/build/paraview/src/paraview/Utilities/ProcessXML /home/marko/research/VeloView-master/build/paraview/src/paraview-build /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML /home/marko/research/VeloView-master/build/paraview/src/paraview-build/Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Utilities/ProcessXML/CMakeFiles/kwProcessXML.dir/depend

