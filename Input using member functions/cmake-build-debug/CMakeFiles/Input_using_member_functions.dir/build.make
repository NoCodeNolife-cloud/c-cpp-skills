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
CMAKE_COMMAND = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Input_using_member_functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Input_using_member_functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Input_using_member_functions.dir/flags.make

CMakeFiles/Input_using_member_functions.dir/main.cpp.obj: CMakeFiles/Input_using_member_functions.dir/flags.make
CMakeFiles/Input_using_member_functions.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Input_using_member_functions.dir/main.cpp.obj"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Input_using_member_functions.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\main.cpp"

CMakeFiles/Input_using_member_functions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Input_using_member_functions.dir/main.cpp.i"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\main.cpp" > CMakeFiles\Input_using_member_functions.dir\main.cpp.i

CMakeFiles/Input_using_member_functions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Input_using_member_functions.dir/main.cpp.s"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\main.cpp" -o CMakeFiles\Input_using_member_functions.dir\main.cpp.s

# Object files for target Input_using_member_functions
Input_using_member_functions_OBJECTS = \
"CMakeFiles/Input_using_member_functions.dir/main.cpp.obj"

# External object files for target Input_using_member_functions
Input_using_member_functions_EXTERNAL_OBJECTS =

Input_using_member_functions.exe: CMakeFiles/Input_using_member_functions.dir/main.cpp.obj
Input_using_member_functions.exe: CMakeFiles/Input_using_member_functions.dir/build.make
Input_using_member_functions.exe: CMakeFiles/Input_using_member_functions.dir/linklibs.rsp
Input_using_member_functions.exe: CMakeFiles/Input_using_member_functions.dir/objects1.rsp
Input_using_member_functions.exe: CMakeFiles/Input_using_member_functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Input_using_member_functions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Input_using_member_functions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Input_using_member_functions.dir/build: Input_using_member_functions.exe

.PHONY : CMakeFiles/Input_using_member_functions.dir/build

CMakeFiles/Input_using_member_functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Input_using_member_functions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Input_using_member_functions.dir/clean

CMakeFiles/Input_using_member_functions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Input using member functions\cmake-build-debug\CMakeFiles\Input_using_member_functions.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Input_using_member_functions.dir/depend
