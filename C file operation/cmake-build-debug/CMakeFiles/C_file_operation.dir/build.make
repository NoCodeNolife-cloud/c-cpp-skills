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
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/C_file_operation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C_file_operation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C_file_operation.dir/flags.make

CMakeFiles/C_file_operation.dir/main.cpp.obj: CMakeFiles/C_file_operation.dir/flags.make
CMakeFiles/C_file_operation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C_file_operation.dir/main.cpp.obj"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\C_file_operation.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\main.cpp"

CMakeFiles/C_file_operation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C_file_operation.dir/main.cpp.i"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\main.cpp" > CMakeFiles\C_file_operation.dir\main.cpp.i

CMakeFiles/C_file_operation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C_file_operation.dir/main.cpp.s"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\main.cpp" -o CMakeFiles\C_file_operation.dir\main.cpp.s

# Object files for target C_file_operation
C_file_operation_OBJECTS = \
"CMakeFiles/C_file_operation.dir/main.cpp.obj"

# External object files for target C_file_operation
C_file_operation_EXTERNAL_OBJECTS =

C_file_operation.exe: CMakeFiles/C_file_operation.dir/main.cpp.obj
C_file_operation.exe: CMakeFiles/C_file_operation.dir/build.make
C_file_operation.exe: CMakeFiles/C_file_operation.dir/linklibs.rsp
C_file_operation.exe: CMakeFiles/C_file_operation.dir/objects1.rsp
C_file_operation.exe: CMakeFiles/C_file_operation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C_file_operation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C_file_operation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C_file_operation.dir/build: C_file_operation.exe

.PHONY : CMakeFiles/C_file_operation.dir/build

CMakeFiles/C_file_operation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C_file_operation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C_file_operation.dir/clean

CMakeFiles/C_file_operation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation" "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation" "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\C file operation\cmake-build-debug\CMakeFiles\C_file_operation.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/C_file_operation.dir/depend
