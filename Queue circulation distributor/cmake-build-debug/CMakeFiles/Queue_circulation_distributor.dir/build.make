# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Queue_circulation_distributor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Queue_circulation_distributor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Queue_circulation_distributor.dir/flags.make

CMakeFiles/Queue_circulation_distributor.dir/main.cpp.obj: CMakeFiles/Queue_circulation_distributor.dir/flags.make
CMakeFiles/Queue_circulation_distributor.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Queue_circulation_distributor.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Queue_circulation_distributor.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\main.cpp"

CMakeFiles/Queue_circulation_distributor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Queue_circulation_distributor.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\main.cpp" > CMakeFiles\Queue_circulation_distributor.dir\main.cpp.i

CMakeFiles/Queue_circulation_distributor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Queue_circulation_distributor.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\main.cpp" -o CMakeFiles\Queue_circulation_distributor.dir\main.cpp.s

# Object files for target Queue_circulation_distributor
Queue_circulation_distributor_OBJECTS = \
"CMakeFiles/Queue_circulation_distributor.dir/main.cpp.obj"

# External object files for target Queue_circulation_distributor
Queue_circulation_distributor_EXTERNAL_OBJECTS =

Queue_circulation_distributor.exe: CMakeFiles/Queue_circulation_distributor.dir/main.cpp.obj
Queue_circulation_distributor.exe: CMakeFiles/Queue_circulation_distributor.dir/build.make
Queue_circulation_distributor.exe: CMakeFiles/Queue_circulation_distributor.dir/linklibs.rsp
Queue_circulation_distributor.exe: CMakeFiles/Queue_circulation_distributor.dir/objects1.rsp
Queue_circulation_distributor.exe: CMakeFiles/Queue_circulation_distributor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Queue_circulation_distributor.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Queue_circulation_distributor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Queue_circulation_distributor.dir/build: Queue_circulation_distributor.exe

.PHONY : CMakeFiles/Queue_circulation_distributor.dir/build

CMakeFiles/Queue_circulation_distributor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Queue_circulation_distributor.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Queue_circulation_distributor.dir/clean

CMakeFiles/Queue_circulation_distributor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Queue circulation distributor\cmake-build-debug\CMakeFiles\Queue_circulation_distributor.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Queue_circulation_distributor.dir/depend

