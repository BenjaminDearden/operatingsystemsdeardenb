# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/deardenb/operatingsystemsdeardenb/ProgramOneC++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/deardenb/operatingsystemsdeardenb/ProgramOneC++

# Include any dependencies generated for this target.
include CMakeFiles/ProgramOneC++.exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProgramOneC++.exe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProgramOneC++.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProgramOneC++.exe.dir/flags.make

CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o: CMakeFiles/ProgramOneC++.exe.dir/flags.make
CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o: source.cpp
CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o: CMakeFiles/ProgramOneC++.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/deardenb/operatingsystemsdeardenb/ProgramOneC++/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o -MF CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o.d -o CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o -c /home/deardenb/operatingsystemsdeardenb/ProgramOneC++/source.cpp

CMakeFiles/ProgramOneC++.exe.dir/source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProgramOneC++.exe.dir/source.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/deardenb/operatingsystemsdeardenb/ProgramOneC++/source.cpp > CMakeFiles/ProgramOneC++.exe.dir/source.cpp.i

CMakeFiles/ProgramOneC++.exe.dir/source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProgramOneC++.exe.dir/source.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/deardenb/operatingsystemsdeardenb/ProgramOneC++/source.cpp -o CMakeFiles/ProgramOneC++.exe.dir/source.cpp.s

# Object files for target ProgramOneC++.exe
ProgramOneC_______exe_OBJECTS = \
"CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o"

# External object files for target ProgramOneC++.exe
ProgramOneC_______exe_EXTERNAL_OBJECTS =

ProgramOneC++.exe: CMakeFiles/ProgramOneC++.exe.dir/source.cpp.o
ProgramOneC++.exe: CMakeFiles/ProgramOneC++.exe.dir/build.make
ProgramOneC++.exe: CMakeFiles/ProgramOneC++.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/deardenb/operatingsystemsdeardenb/ProgramOneC++/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProgramOneC++.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProgramOneC++.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProgramOneC++.exe.dir/build: ProgramOneC++.exe
.PHONY : CMakeFiles/ProgramOneC++.exe.dir/build

CMakeFiles/ProgramOneC++.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProgramOneC++.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProgramOneC++.exe.dir/clean

CMakeFiles/ProgramOneC++.exe.dir/depend:
	cd /home/deardenb/operatingsystemsdeardenb/ProgramOneC++ && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/deardenb/operatingsystemsdeardenb/ProgramOneC++ /home/deardenb/operatingsystemsdeardenb/ProgramOneC++ /home/deardenb/operatingsystemsdeardenb/ProgramOneC++ /home/deardenb/operatingsystemsdeardenb/ProgramOneC++ /home/deardenb/operatingsystemsdeardenb/ProgramOneC++/CMakeFiles/ProgramOneC++.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProgramOneC++.exe.dir/depend
