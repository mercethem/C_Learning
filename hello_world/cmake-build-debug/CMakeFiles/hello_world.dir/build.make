# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\C\C_Learning\hello_world

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\C\C_Learning\hello_world\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hello_world.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello_world.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_world.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_world.dir/flags.make

CMakeFiles/hello_world.dir/main.c.obj: CMakeFiles/hello_world.dir/flags.make
CMakeFiles/hello_world.dir/main.c.obj: ../main.c
CMakeFiles/hello_world.dir/main.c.obj: CMakeFiles/hello_world.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\C\C_Learning\hello_world\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hello_world.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/hello_world.dir/main.c.obj -MF CMakeFiles\hello_world.dir\main.c.obj.d -o CMakeFiles\hello_world.dir\main.c.obj -c E:\C\C_Learning\hello_world\main.c

CMakeFiles/hello_world.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hello_world.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\C\C_Learning\hello_world\main.c > CMakeFiles\hello_world.dir\main.c.i

CMakeFiles/hello_world.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hello_world.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\C\C_Learning\hello_world\main.c -o CMakeFiles\hello_world.dir\main.c.s

# Object files for target hello_world
hello_world_OBJECTS = \
"CMakeFiles/hello_world.dir/main.c.obj"

# External object files for target hello_world
hello_world_EXTERNAL_OBJECTS =

hello_world.exe: CMakeFiles/hello_world.dir/main.c.obj
hello_world.exe: CMakeFiles/hello_world.dir/build.make
hello_world.exe: CMakeFiles/hello_world.dir/linklibs.rsp
hello_world.exe: CMakeFiles/hello_world.dir/objects1.rsp
hello_world.exe: CMakeFiles/hello_world.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\C\C_Learning\hello_world\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable hello_world.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hello_world.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_world.dir/build: hello_world.exe
.PHONY : CMakeFiles/hello_world.dir/build

CMakeFiles/hello_world.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hello_world.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hello_world.dir/clean

CMakeFiles/hello_world.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\C\C_Learning\hello_world E:\C\C_Learning\hello_world E:\C\C_Learning\hello_world\cmake-build-debug E:\C\C_Learning\hello_world\cmake-build-debug E:\C\C_Learning\hello_world\cmake-build-debug\CMakeFiles\hello_world.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_world.dir/depend

