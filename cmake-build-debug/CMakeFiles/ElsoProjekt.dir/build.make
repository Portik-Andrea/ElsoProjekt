# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ElsoProjekt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ElsoProjekt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ElsoProjekt.dir/flags.make

CMakeFiles/ElsoProjekt.dir/main.c.obj: CMakeFiles/ElsoProjekt.dir/flags.make
CMakeFiles/ElsoProjekt.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ElsoProjekt.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ElsoProjekt.dir\main.c.obj   -c "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\main.c"

CMakeFiles/ElsoProjekt.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ElsoProjekt.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\main.c" > CMakeFiles\ElsoProjekt.dir\main.c.i

CMakeFiles/ElsoProjekt.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ElsoProjekt.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\main.c" -o CMakeFiles\ElsoProjekt.dir\main.c.s

CMakeFiles/ElsoProjekt.dir/users.c.obj: CMakeFiles/ElsoProjekt.dir/flags.make
CMakeFiles/ElsoProjekt.dir/users.c.obj: ../users.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ElsoProjekt.dir/users.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ElsoProjekt.dir\users.c.obj   -c "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\users.c"

CMakeFiles/ElsoProjekt.dir/users.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ElsoProjekt.dir/users.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\users.c" > CMakeFiles\ElsoProjekt.dir\users.c.i

CMakeFiles/ElsoProjekt.dir/users.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ElsoProjekt.dir/users.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\users.c" -o CMakeFiles\ElsoProjekt.dir\users.c.s

# Object files for target ElsoProjekt
ElsoProjekt_OBJECTS = \
"CMakeFiles/ElsoProjekt.dir/main.c.obj" \
"CMakeFiles/ElsoProjekt.dir/users.c.obj"

# External object files for target ElsoProjekt
ElsoProjekt_EXTERNAL_OBJECTS =

ElsoProjekt.exe: CMakeFiles/ElsoProjekt.dir/main.c.obj
ElsoProjekt.exe: CMakeFiles/ElsoProjekt.dir/users.c.obj
ElsoProjekt.exe: CMakeFiles/ElsoProjekt.dir/build.make
ElsoProjekt.exe: CMakeFiles/ElsoProjekt.dir/linklibs.rsp
ElsoProjekt.exe: CMakeFiles/ElsoProjekt.dir/objects1.rsp
ElsoProjekt.exe: CMakeFiles/ElsoProjekt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ElsoProjekt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ElsoProjekt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ElsoProjekt.dir/build: ElsoProjekt.exe

.PHONY : CMakeFiles/ElsoProjekt.dir/build

CMakeFiles/ElsoProjekt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ElsoProjekt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ElsoProjekt.dir/clean

CMakeFiles/ElsoProjekt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt" "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt" "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug" "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug" "C:\Users\porti\Documents\II. felev\AdatszerkezetEsStrukturak\ElsoProjekt\cmake-build-debug\CMakeFiles\ElsoProjekt.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ElsoProjekt.dir/depend

