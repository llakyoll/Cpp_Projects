# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/pomas/cpp/staffControlTerminal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pomas/cpp/staffControlTerminal/build

# Include any dependencies generated for this target.
include CMakeFiles/Staff.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Staff.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Staff.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Staff.dir/flags.make

CMakeFiles/Staff.dir/src/main.cpp.o: CMakeFiles/Staff.dir/flags.make
CMakeFiles/Staff.dir/src/main.cpp.o: /home/pomas/cpp/staffControlTerminal/src/main.cpp
CMakeFiles/Staff.dir/src/main.cpp.o: CMakeFiles/Staff.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pomas/cpp/staffControlTerminal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Staff.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Staff.dir/src/main.cpp.o -MF CMakeFiles/Staff.dir/src/main.cpp.o.d -o CMakeFiles/Staff.dir/src/main.cpp.o -c /home/pomas/cpp/staffControlTerminal/src/main.cpp

CMakeFiles/Staff.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Staff.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pomas/cpp/staffControlTerminal/src/main.cpp > CMakeFiles/Staff.dir/src/main.cpp.i

CMakeFiles/Staff.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Staff.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pomas/cpp/staffControlTerminal/src/main.cpp -o CMakeFiles/Staff.dir/src/main.cpp.s

CMakeFiles/Staff.dir/src/staff.cpp.o: CMakeFiles/Staff.dir/flags.make
CMakeFiles/Staff.dir/src/staff.cpp.o: /home/pomas/cpp/staffControlTerminal/src/staff.cpp
CMakeFiles/Staff.dir/src/staff.cpp.o: CMakeFiles/Staff.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pomas/cpp/staffControlTerminal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Staff.dir/src/staff.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Staff.dir/src/staff.cpp.o -MF CMakeFiles/Staff.dir/src/staff.cpp.o.d -o CMakeFiles/Staff.dir/src/staff.cpp.o -c /home/pomas/cpp/staffControlTerminal/src/staff.cpp

CMakeFiles/Staff.dir/src/staff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Staff.dir/src/staff.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pomas/cpp/staffControlTerminal/src/staff.cpp > CMakeFiles/Staff.dir/src/staff.cpp.i

CMakeFiles/Staff.dir/src/staff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Staff.dir/src/staff.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pomas/cpp/staffControlTerminal/src/staff.cpp -o CMakeFiles/Staff.dir/src/staff.cpp.s

# Object files for target Staff
Staff_OBJECTS = \
"CMakeFiles/Staff.dir/src/main.cpp.o" \
"CMakeFiles/Staff.dir/src/staff.cpp.o"

# External object files for target Staff
Staff_EXTERNAL_OBJECTS =

Staff: CMakeFiles/Staff.dir/src/main.cpp.o
Staff: CMakeFiles/Staff.dir/src/staff.cpp.o
Staff: CMakeFiles/Staff.dir/build.make
Staff: CMakeFiles/Staff.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pomas/cpp/staffControlTerminal/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Staff"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Staff.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Staff.dir/build: Staff
.PHONY : CMakeFiles/Staff.dir/build

CMakeFiles/Staff.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Staff.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Staff.dir/clean

CMakeFiles/Staff.dir/depend:
	cd /home/pomas/cpp/staffControlTerminal/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pomas/cpp/staffControlTerminal /home/pomas/cpp/staffControlTerminal /home/pomas/cpp/staffControlTerminal/build /home/pomas/cpp/staffControlTerminal/build /home/pomas/cpp/staffControlTerminal/build/CMakeFiles/Staff.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Staff.dir/depend

