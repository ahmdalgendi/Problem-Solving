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
CMAKE_SOURCE_DIR = "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy "

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/J__The_Hell_Boy_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/J__The_Hell_Boy_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/J__The_Hell_Boy_.dir/flags.make

CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o: CMakeFiles/J__The_Hell_Boy_.dir/flags.make
CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o -c "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /main.cpp"

CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /main.cpp" > CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.i

CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /main.cpp" -o CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.s

CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.requires

CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.provides: CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/J__The_Hell_Boy_.dir/build.make CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.provides

CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.provides.build: CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o


# Object files for target J__The_Hell_Boy_
J__The_Hell_Boy__OBJECTS = \
"CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o"

# External object files for target J__The_Hell_Boy_
J__The_Hell_Boy__EXTERNAL_OBJECTS =

J__The_Hell_Boy_: CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o
J__The_Hell_Boy_: CMakeFiles/J__The_Hell_Boy_.dir/build.make
J__The_Hell_Boy_: CMakeFiles/J__The_Hell_Boy_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable J__The_Hell_Boy_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/J__The_Hell_Boy_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/J__The_Hell_Boy_.dir/build: J__The_Hell_Boy_

.PHONY : CMakeFiles/J__The_Hell_Boy_.dir/build

CMakeFiles/J__The_Hell_Boy_.dir/requires: CMakeFiles/J__The_Hell_Boy_.dir/main.cpp.o.requires

.PHONY : CMakeFiles/J__The_Hell_Boy_.dir/requires

CMakeFiles/J__The_Hell_Boy_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/J__The_Hell_Boy_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/J__The_Hell_Boy_.dir/clean

CMakeFiles/J__The_Hell_Boy_.dir/depend:
	cd "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy " "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy " "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug" "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug" "/home/ahmdalgendi/ACM is the dream/A_problems/J. The Hell Boy /cmake-build-debug/CMakeFiles/J__The_Hell_Boy_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/J__The_Hell_Boy_.dir/depend

