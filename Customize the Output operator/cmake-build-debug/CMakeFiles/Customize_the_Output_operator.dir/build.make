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
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Customize_the_Output_operator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Customize_the_Output_operator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Customize_the_Output_operator.dir/flags.make

CMakeFiles/Customize_the_Output_operator.dir/main.cpp.obj: CMakeFiles/Customize_the_Output_operator.dir/flags.make
CMakeFiles/Customize_the_Output_operator.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Customize_the_Output_operator.dir/main.cpp.obj"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Customize_the_Output_operator.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\main.cpp"

CMakeFiles/Customize_the_Output_operator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Customize_the_Output_operator.dir/main.cpp.i"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\main.cpp" > CMakeFiles\Customize_the_Output_operator.dir\main.cpp.i

CMakeFiles/Customize_the_Output_operator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Customize_the_Output_operator.dir/main.cpp.s"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\main.cpp" -o CMakeFiles\Customize_the_Output_operator.dir\main.cpp.s

CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.obj: CMakeFiles/Customize_the_Output_operator.dir/flags.make
CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.obj: ../Fraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.obj"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Customize_the_Output_operator.dir\Fraction.cpp.obj -c "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\Fraction.cpp"

CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.i"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\Fraction.cpp" > CMakeFiles\Customize_the_Output_operator.dir\Fraction.cpp.i

CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.s"
	D:\CLION2~1.1\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\Fraction.cpp" -o CMakeFiles\Customize_the_Output_operator.dir\Fraction.cpp.s

# Object files for target Customize_the_Output_operator
Customize_the_Output_operator_OBJECTS = \
"CMakeFiles/Customize_the_Output_operator.dir/main.cpp.obj" \
"CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.obj"

# External object files for target Customize_the_Output_operator
Customize_the_Output_operator_EXTERNAL_OBJECTS =

Customize_the_Output_operator.exe: CMakeFiles/Customize_the_Output_operator.dir/main.cpp.obj
Customize_the_Output_operator.exe: CMakeFiles/Customize_the_Output_operator.dir/Fraction.cpp.obj
Customize_the_Output_operator.exe: CMakeFiles/Customize_the_Output_operator.dir/build.make
Customize_the_Output_operator.exe: CMakeFiles/Customize_the_Output_operator.dir/linklibs.rsp
Customize_the_Output_operator.exe: CMakeFiles/Customize_the_Output_operator.dir/objects1.rsp
Customize_the_Output_operator.exe: CMakeFiles/Customize_the_Output_operator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Customize_the_Output_operator.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Customize_the_Output_operator.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Customize_the_Output_operator.dir/build: Customize_the_Output_operator.exe

.PHONY : CMakeFiles/Customize_the_Output_operator.dir/build

CMakeFiles/Customize_the_Output_operator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Customize_the_Output_operator.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Customize_the_Output_operator.dir/clean

CMakeFiles/Customize_the_Output_operator.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug" "E:\programe\GitHub project warehouse manager\c-cpp-skills\Customize the Output operator\cmake-build-debug\CMakeFiles\Customize_the_Output_operator.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Customize_the_Output_operator.dir/depend

