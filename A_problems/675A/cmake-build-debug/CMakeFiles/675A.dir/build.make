# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/ahmdalgendi/Downloads/clion-2017.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ahmdalgendi/Downloads/clion-2017.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ahmdalgendi/ACM is the dream/A_problems/675A"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/675A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/675A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/675A.dir/flags.make

CMakeFiles/675A.dir/main.cpp.o: CMakeFiles/675A.dir/flags.make
CMakeFiles/675A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/675A.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/675A.dir/main.cpp.o -c "/home/ahmdalgendi/ACM is the dream/A_problems/675A/main.cpp"

CMakeFiles/675A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/675A.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmdalgendi/ACM is the dream/A_problems/675A/main.cpp" > CMakeFiles/675A.dir/main.cpp.i

CMakeFiles/675A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/675A.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmdalgendi/ACM is the dream/A_problems/675A/main.cpp" -o CMakeFiles/675A.dir/main.cpp.s

CMakeFiles/675A.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/675A.dir/main.cpp.o.requires

CMakeFiles/675A.dir/main.cpp.o.provides: CMakeFiles/675A.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/675A.dir/build.make CMakeFiles/675A.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/675A.dir/main.cpp.o.provides

CMakeFiles/675A.dir/main.cpp.o.provides.build: CMakeFiles/675A.dir/main.cpp.o


# Object files for target 675A
675A_OBJECTS = \
"CMakeFiles/675A.dir/main.cpp.o"

# External object files for target 675A
675A_EXTERNAL_OBJECTS =

675A: CMakeFiles/675A.dir/main.cpp.o
675A: CMakeFiles/675A.dir/build.make
675A: CMakeFiles/675A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 675A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/675A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/675A.dir/build: 675A

.PHONY : CMakeFiles/675A.dir/build

CMakeFiles/675A.dir/requires: CMakeFiles/675A.dir/main.cpp.o.requires

.PHONY : CMakeFiles/675A.dir/requires

CMakeFiles/675A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/675A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/675A.dir/clean

CMakeFiles/675A.dir/depend:
	cd "/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmdalgendi/ACM is the dream/A_problems/675A" "/home/ahmdalgendi/ACM is the dream/A_problems/675A" "/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug" "/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug" "/home/ahmdalgendi/ACM is the dream/A_problems/675A/cmake-build-debug/CMakeFiles/675A.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/675A.dir/depend

