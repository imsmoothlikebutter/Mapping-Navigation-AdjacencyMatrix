# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build

# Include any dependencies generated for this target.
include CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/flags.make

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/flags.make
CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o: /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/graph.c
CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o -MF CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o.d -o CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o -c /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/graph.c

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/graph.c > CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.i

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/graph.c -o CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.s

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/flags.make
CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o: /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/main.c
CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o -MF CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o.d -o CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o -c /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/main.c

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/main.c > CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.i

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/main.c -o CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.s

# Object files for target ICT2104_B1_MappingAndNavigation
ICT2104_B1_MappingAndNavigation_OBJECTS = \
"CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o" \
"CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o"

# External object files for target ICT2104_B1_MappingAndNavigation
ICT2104_B1_MappingAndNavigation_EXTERNAL_OBJECTS =

ICT2104_B1_MappingAndNavigation: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/graph.c.o
ICT2104_B1_MappingAndNavigation: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/main.c.o
ICT2104_B1_MappingAndNavigation: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/build.make
ICT2104_B1_MappingAndNavigation: CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ICT2104_B1_MappingAndNavigation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/build: ICT2104_B1_MappingAndNavigation
.PHONY : CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/build

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/clean

CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/depend:
	cd /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build /Users/muhdismaelosman/git/ICT2104-B1-MappingAndNavigation/build/CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ICT2104_B1_MappingAndNavigation.dir/depend
