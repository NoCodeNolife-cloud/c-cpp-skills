# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/partition.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/partition.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/partition.dir/flags.make

CMakeFiles/partition.dir/main.cpp.obj: CMakeFiles/partition.dir/flags.make
CMakeFiles/partition.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/partition.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\partition.dir\main.cpp.obj -c H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\main.cpp

CMakeFiles/partition.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/partition.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\main.cpp > CMakeFiles\partition.dir\main.cpp.i

CMakeFiles/partition.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/partition.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\main.cpp -o CMakeFiles\partition.dir\main.cpp.s

# Object files for target partition
partition_OBJECTS = \
"CMakeFiles/partition.dir/main.cpp.obj"

# External object files for target partition
partition_EXTERNAL_OBJECTS =

partition.exe: CMakeFiles/partition.dir/main.cpp.obj
partition.exe: CMakeFiles/partition.dir/build.make
partition.exe: CMakeFiles/partition.dir/linklibs.rsp
partition.exe: CMakeFiles/partition.dir/objects1.rsp
partition.exe: CMakeFiles/partition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable partition.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\partition.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/partition.dir/build: partition.exe
.PHONY : CMakeFiles/partition.dir/build

CMakeFiles/partition.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\partition.dir\cmake_clean.cmake
.PHONY : CMakeFiles/partition.dir/clean

CMakeFiles/partition.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\cmake-build-debug H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\cmake-build-debug H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partition\cmake-build-debug\CMakeFiles\partition.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/partition.dir/depend

