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
CMAKE_SOURCE_DIR = H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mutex.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/mutex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mutex.dir/flags.make

CMakeFiles/mutex.dir/main.cpp.obj: CMakeFiles/mutex.dir/flags.make
CMakeFiles/mutex.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mutex.dir/main.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mutex.dir\main.cpp.obj -c H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\main.cpp

CMakeFiles/mutex.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mutex.dir/main.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\main.cpp > CMakeFiles\mutex.dir\main.cpp.i

CMakeFiles/mutex.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mutex.dir/main.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\main.cpp -o CMakeFiles\mutex.dir\main.cpp.s

# Object files for target mutex
mutex_OBJECTS = \
"CMakeFiles/mutex.dir/main.cpp.obj"

# External object files for target mutex
mutex_EXTERNAL_OBJECTS =

mutex.exe: CMakeFiles/mutex.dir/main.cpp.obj
mutex.exe: CMakeFiles/mutex.dir/build.make
mutex.exe: CMakeFiles/mutex.dir/linklibs.rsp
mutex.exe: CMakeFiles/mutex.dir/objects1.rsp
mutex.exe: CMakeFiles/mutex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mutex.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mutex.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mutex.dir/build: mutex.exe
.PHONY : CMakeFiles/mutex.dir/build

CMakeFiles/mutex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mutex.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mutex.dir/clean

CMakeFiles/mutex.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\cmake-build-debug H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\cmake-build-debug H:\programe\GitHub-project-warehouse-manager\c-cpp-skills\mutex\cmake-build-debug\CMakeFiles\mutex.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mutex.dir/depend

