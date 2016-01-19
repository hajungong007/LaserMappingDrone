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
CMAKE_SOURCE_DIR = /home/marko/research/VeloView-master/Superbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marko/research/VeloView-master/build

# Utility rule file for pythonqt.

# Include the progress variables for this target.
include CMakeFiles/pythonqt.dir/progress.make

CMakeFiles/pythonqt: CMakeFiles/pythonqt-complete

CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-install
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-mkdir
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-download
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-update
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-patch
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-configure
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-build
CMakeFiles/pythonqt-complete: pythonqt/src/pythonqt-stamp/pythonqt-install
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Completed 'pythonqt'"
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/CMakeFiles
	/usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/CMakeFiles/pythonqt-complete
	/usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-done

pythonqt/src/pythonqt-stamp/pythonqt-install: pythonqt/src/pythonqt-stamp/pythonqt-build
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing install step for 'pythonqt'"
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build && $(MAKE) install
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build && /usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-install

pythonqt/src/pythonqt-stamp/pythonqt-mkdir:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Creating directories for 'pythonqt'"
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/install
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/pythonqt/tmp
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp
	/usr/bin/cmake -E make_directory /home/marko/research/VeloView-master/build/downloads
	/usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-mkdir

pythonqt/src/pythonqt-stamp/pythonqt-download: pythonqt/src/pythonqt-stamp/pythonqt-gitinfo.txt
pythonqt/src/pythonqt-stamp/pythonqt-download: pythonqt/src/pythonqt-stamp/pythonqt-mkdir
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing download step (git clone) for 'pythonqt'"
	cd /home/marko/research/VeloView-master/build/pythonqt/src && /usr/bin/cmake -P /home/marko/research/VeloView-master/build/pythonqt/tmp/pythonqt-gitclone.cmake
	cd /home/marko/research/VeloView-master/build/pythonqt/src && /usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-download

pythonqt/src/pythonqt-stamp/pythonqt-update: pythonqt/src/pythonqt-stamp/pythonqt-download
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing update step for 'pythonqt'"
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt && /usr/bin/cmake -P /home/marko/research/VeloView-master/build/pythonqt/tmp/pythonqt-gitupdate.cmake

pythonqt/src/pythonqt-stamp/pythonqt-patch: pythonqt/src/pythonqt-stamp/pythonqt-download
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "No patch step for 'pythonqt'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-patch

pythonqt/src/pythonqt-stamp/pythonqt-configure: qt-prefix/src/qt-stamp/qt-done
pythonqt/src/pythonqt-stamp/pythonqt-configure: python-prefix/src/python-stamp/python-done
pythonqt/src/pythonqt-stamp/pythonqt-configure: pythonqt/tmp/pythonqt-cfgcmd.txt
pythonqt/src/pythonqt-stamp/pythonqt-configure: pythonqt/src/pythonqt-stamp/pythonqt-update
pythonqt/src/pythonqt-stamp/pythonqt-configure: pythonqt/src/pythonqt-stamp/pythonqt-patch
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing configure step for 'pythonqt'"
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build && /usr/bin/cmake -DBUILD_SHARED_LIBS:BOOL=ON -DPythonQt_Wrap_Qtcore:BOOL=ON -DPythonQt_Wrap_Qtgui:BOOL=ON -DPythonQt_Wrap_Qtuitools:BOOL=ON -DMACOSX_APP_INSTALL_PREFIX:PATH=/home/marko/research/VeloView-master/build/install/Applications -DCMAKE_INSTALL_PREFIX:PATH=/home/marko/research/VeloView-master/build/install -DCMAKE_PREFIX_PATH:PATH=/home/marko/research/VeloView-master/build/install -DCMAKE_C_FLAGS:STRING=-fPIC -DCMAKE_CXX_FLAGS:STRING=-fPIC -DCMAKE_SHARED_LINKER_FLAGS:STRING=-L/home/marko/research/VeloView-master/build/install/lib -DCMAKE_BUILD_TYPE:STRING= -DCMAKE_C_COMPILER:STRING=/usr/bin/cc -DCMAKE_C_FLAGS_DEBUG:STRING=-g "-DCMAKE_C_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG" "-DCMAKE_C_FLAGS_RELEASE:STRING=-O3 -DNDEBUG" "-DCMAKE_C_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG" -DCMAKE_CXX_COMPILER:STRING=/usr/bin/c++ -DCMAKE_CXX_FLAGS_DEBUG:STRING=-g "-DCMAKE_CXX_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG" "-DCMAKE_CXX_FLAGS_RELEASE:STRING=-O3 -DNDEBUG" "-DCMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG" -DQT_QMAKE_EXECUTABLE:FILEPATH=/usr/bin/qmake -DPYTHON_EXECUTABLE:FILEPATH=/usr/bin/python -DPYTHON_INCLUDE_DIR:PATH=/usr/include/python2.7 -DPYTHON_LIBRARY:FILEPATH=/usr/lib/x86_64-linux-gnu/libpython2.7.so "-GUnix Makefiles" /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build && /usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-configure

pythonqt/src/pythonqt-stamp/pythonqt-build: pythonqt/src/pythonqt-stamp/pythonqt-configure
	$(CMAKE_COMMAND) -E cmake_progress_report /home/marko/research/VeloView-master/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Performing build step for 'pythonqt'"
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build && /usr/bin/cmake -P /home/marko/research/VeloView-master/build/pv-pythonqt-build.cmake
	cd /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-build && /usr/bin/cmake -E touch /home/marko/research/VeloView-master/build/pythonqt/src/pythonqt-stamp/pythonqt-build

pythonqt: CMakeFiles/pythonqt
pythonqt: CMakeFiles/pythonqt-complete
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-install
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-mkdir
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-download
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-update
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-patch
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-configure
pythonqt: pythonqt/src/pythonqt-stamp/pythonqt-build
pythonqt: CMakeFiles/pythonqt.dir/build.make
.PHONY : pythonqt

# Rule to build all files generated by this target.
CMakeFiles/pythonqt.dir/build: pythonqt
.PHONY : CMakeFiles/pythonqt.dir/build

CMakeFiles/pythonqt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pythonqt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pythonqt.dir/clean

CMakeFiles/pythonqt.dir/depend:
	cd /home/marko/research/VeloView-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marko/research/VeloView-master/Superbuild /home/marko/research/VeloView-master/Superbuild /home/marko/research/VeloView-master/build /home/marko/research/VeloView-master/build /home/marko/research/VeloView-master/build/CMakeFiles/pythonqt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pythonqt.dir/depend

