# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ricardo/EstruturaDeDadosEmC3001

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ricardo/EstruturaDeDadosEmC3001/build

# Include any dependencies generated for this target.
include CMakeFiles/make_c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/make_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/make_c.dir/flags.make

CMakeFiles/make_c.dir/make_c.cpp.o: CMakeFiles/make_c.dir/flags.make
CMakeFiles/make_c.dir/make_c.cpp.o: ../make_c.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ricardo/EstruturaDeDadosEmC3001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/make_c.dir/make_c.cpp.o"
	/bin/x86_64-linux-gnu-g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/make_c.dir/make_c.cpp.o -c /home/ricardo/EstruturaDeDadosEmC3001/make_c.cpp

CMakeFiles/make_c.dir/make_c.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/make_c.dir/make_c.cpp.i"
	/bin/x86_64-linux-gnu-g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ricardo/EstruturaDeDadosEmC3001/make_c.cpp > CMakeFiles/make_c.dir/make_c.cpp.i

CMakeFiles/make_c.dir/make_c.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/make_c.dir/make_c.cpp.s"
	/bin/x86_64-linux-gnu-g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ricardo/EstruturaDeDadosEmC3001/make_c.cpp -o CMakeFiles/make_c.dir/make_c.cpp.s

# Object files for target make_c
make_c_OBJECTS = \
"CMakeFiles/make_c.dir/make_c.cpp.o"

# External object files for target make_c
make_c_EXTERNAL_OBJECTS =

libmake_c.a: CMakeFiles/make_c.dir/make_c.cpp.o
libmake_c.a: CMakeFiles/make_c.dir/build.make
libmake_c.a: CMakeFiles/make_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ricardo/EstruturaDeDadosEmC3001/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmake_c.a"
	$(CMAKE_COMMAND) -P CMakeFiles/make_c.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/make_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/make_c.dir/build: libmake_c.a

.PHONY : CMakeFiles/make_c.dir/build

CMakeFiles/make_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/make_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/make_c.dir/clean

CMakeFiles/make_c.dir/depend:
	cd /home/ricardo/EstruturaDeDadosEmC3001/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ricardo/EstruturaDeDadosEmC3001 /home/ricardo/EstruturaDeDadosEmC3001 /home/ricardo/EstruturaDeDadosEmC3001/build /home/ricardo/EstruturaDeDadosEmC3001/build /home/ricardo/EstruturaDeDadosEmC3001/build/CMakeFiles/make_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/make_c.dir/depend

