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
CMAKE_SOURCE_DIR = H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/partial_sum.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/partial_sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/partial_sum.dir/flags.make

CMakeFiles/partial_sum.dir/main.cpp.obj: CMakeFiles/partial_sum.dir/flags.make
CMakeFiles/partial_sum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/partial_sum.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\partial_sum.dir\main.cpp.obj -c H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\main.cpp

CMakeFiles/partial_sum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/partial_sum.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\main.cpp > CMakeFiles\partial_sum.dir\main.cpp.i

CMakeFiles/partial_sum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/partial_sum.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\main.cpp -o CMakeFiles\partial_sum.dir\main.cpp.s

# Object files for target partial_sum
partial_sum_OBJECTS = \
"CMakeFiles/partial_sum.dir/main.cpp.obj"

# External object files for target partial_sum
partial_sum_EXTERNAL_OBJECTS =

partial_sum.exe: CMakeFiles/partial_sum.dir/main.cpp.obj
partial_sum.exe: CMakeFiles/partial_sum.dir/build.make
partial_sum.exe: CMakeFiles/partial_sum.dir/linklibs.rsp
partial_sum.exe: CMakeFiles/partial_sum.dir/objects1.rsp
partial_sum.exe: CMakeFiles/partial_sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable partial_sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\partial_sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/partial_sum.dir/build: partial_sum.exe
.PHONY : CMakeFiles/partial_sum.dir/build

CMakeFiles/partial_sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\partial_sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/partial_sum.dir/clean

CMakeFiles/partial_sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\cmake-build-debug H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\cmake-build-debug H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\partial_sum\cmake-build-debug\CMakeFiles\partial_sum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/partial_sum.dir/depend

