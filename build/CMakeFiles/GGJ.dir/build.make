# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/eme/c++/GGJ

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eme/c++/GGJ/build

# Include any dependencies generated for this target.
include CMakeFiles/GGJ.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GGJ.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GGJ.dir/flags.make

CMakeFiles/GGJ.dir/main.cpp.o: CMakeFiles/GGJ.dir/flags.make
CMakeFiles/GGJ.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eme/c++/GGJ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GGJ.dir/main.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GGJ.dir/main.cpp.o -c /home/eme/c++/GGJ/main.cpp

CMakeFiles/GGJ.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GGJ.dir/main.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eme/c++/GGJ/main.cpp > CMakeFiles/GGJ.dir/main.cpp.i

CMakeFiles/GGJ.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GGJ.dir/main.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eme/c++/GGJ/main.cpp -o CMakeFiles/GGJ.dir/main.cpp.s

CMakeFiles/GGJ.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/GGJ.dir/main.cpp.o.requires

CMakeFiles/GGJ.dir/main.cpp.o.provides: CMakeFiles/GGJ.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/GGJ.dir/build.make CMakeFiles/GGJ.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/GGJ.dir/main.cpp.o.provides

CMakeFiles/GGJ.dir/main.cpp.o.provides.build: CMakeFiles/GGJ.dir/main.cpp.o


CMakeFiles/GGJ.dir/RenderWindow.cpp.o: CMakeFiles/GGJ.dir/flags.make
CMakeFiles/GGJ.dir/RenderWindow.cpp.o: ../RenderWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eme/c++/GGJ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GGJ.dir/RenderWindow.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GGJ.dir/RenderWindow.cpp.o -c /home/eme/c++/GGJ/RenderWindow.cpp

CMakeFiles/GGJ.dir/RenderWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GGJ.dir/RenderWindow.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eme/c++/GGJ/RenderWindow.cpp > CMakeFiles/GGJ.dir/RenderWindow.cpp.i

CMakeFiles/GGJ.dir/RenderWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GGJ.dir/RenderWindow.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eme/c++/GGJ/RenderWindow.cpp -o CMakeFiles/GGJ.dir/RenderWindow.cpp.s

CMakeFiles/GGJ.dir/RenderWindow.cpp.o.requires:

.PHONY : CMakeFiles/GGJ.dir/RenderWindow.cpp.o.requires

CMakeFiles/GGJ.dir/RenderWindow.cpp.o.provides: CMakeFiles/GGJ.dir/RenderWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/GGJ.dir/build.make CMakeFiles/GGJ.dir/RenderWindow.cpp.o.provides.build
.PHONY : CMakeFiles/GGJ.dir/RenderWindow.cpp.o.provides

CMakeFiles/GGJ.dir/RenderWindow.cpp.o.provides.build: CMakeFiles/GGJ.dir/RenderWindow.cpp.o


CMakeFiles/GGJ.dir/Entity.cpp.o: CMakeFiles/GGJ.dir/flags.make
CMakeFiles/GGJ.dir/Entity.cpp.o: ../Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eme/c++/GGJ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GGJ.dir/Entity.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GGJ.dir/Entity.cpp.o -c /home/eme/c++/GGJ/Entity.cpp

CMakeFiles/GGJ.dir/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GGJ.dir/Entity.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eme/c++/GGJ/Entity.cpp > CMakeFiles/GGJ.dir/Entity.cpp.i

CMakeFiles/GGJ.dir/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GGJ.dir/Entity.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eme/c++/GGJ/Entity.cpp -o CMakeFiles/GGJ.dir/Entity.cpp.s

CMakeFiles/GGJ.dir/Entity.cpp.o.requires:

.PHONY : CMakeFiles/GGJ.dir/Entity.cpp.o.requires

CMakeFiles/GGJ.dir/Entity.cpp.o.provides: CMakeFiles/GGJ.dir/Entity.cpp.o.requires
	$(MAKE) -f CMakeFiles/GGJ.dir/build.make CMakeFiles/GGJ.dir/Entity.cpp.o.provides.build
.PHONY : CMakeFiles/GGJ.dir/Entity.cpp.o.provides

CMakeFiles/GGJ.dir/Entity.cpp.o.provides.build: CMakeFiles/GGJ.dir/Entity.cpp.o


CMakeFiles/GGJ.dir/Player.cpp.o: CMakeFiles/GGJ.dir/flags.make
CMakeFiles/GGJ.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eme/c++/GGJ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/GGJ.dir/Player.cpp.o"
	/usr/bin/x86_64-linux-gnu-g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GGJ.dir/Player.cpp.o -c /home/eme/c++/GGJ/Player.cpp

CMakeFiles/GGJ.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GGJ.dir/Player.cpp.i"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eme/c++/GGJ/Player.cpp > CMakeFiles/GGJ.dir/Player.cpp.i

CMakeFiles/GGJ.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GGJ.dir/Player.cpp.s"
	/usr/bin/x86_64-linux-gnu-g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eme/c++/GGJ/Player.cpp -o CMakeFiles/GGJ.dir/Player.cpp.s

CMakeFiles/GGJ.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/GGJ.dir/Player.cpp.o.requires

CMakeFiles/GGJ.dir/Player.cpp.o.provides: CMakeFiles/GGJ.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/GGJ.dir/build.make CMakeFiles/GGJ.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/GGJ.dir/Player.cpp.o.provides

CMakeFiles/GGJ.dir/Player.cpp.o.provides.build: CMakeFiles/GGJ.dir/Player.cpp.o


# Object files for target GGJ
GGJ_OBJECTS = \
"CMakeFiles/GGJ.dir/main.cpp.o" \
"CMakeFiles/GGJ.dir/RenderWindow.cpp.o" \
"CMakeFiles/GGJ.dir/Entity.cpp.o" \
"CMakeFiles/GGJ.dir/Player.cpp.o"

# External object files for target GGJ
GGJ_EXTERNAL_OBJECTS =

GGJ: CMakeFiles/GGJ.dir/main.cpp.o
GGJ: CMakeFiles/GGJ.dir/RenderWindow.cpp.o
GGJ: CMakeFiles/GGJ.dir/Entity.cpp.o
GGJ: CMakeFiles/GGJ.dir/Player.cpp.o
GGJ: CMakeFiles/GGJ.dir/build.make
GGJ: CMakeFiles/GGJ.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eme/c++/GGJ/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable GGJ"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GGJ.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GGJ.dir/build: GGJ

.PHONY : CMakeFiles/GGJ.dir/build

CMakeFiles/GGJ.dir/requires: CMakeFiles/GGJ.dir/main.cpp.o.requires
CMakeFiles/GGJ.dir/requires: CMakeFiles/GGJ.dir/RenderWindow.cpp.o.requires
CMakeFiles/GGJ.dir/requires: CMakeFiles/GGJ.dir/Entity.cpp.o.requires
CMakeFiles/GGJ.dir/requires: CMakeFiles/GGJ.dir/Player.cpp.o.requires

.PHONY : CMakeFiles/GGJ.dir/requires

CMakeFiles/GGJ.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GGJ.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GGJ.dir/clean

CMakeFiles/GGJ.dir/depend:
	cd /home/eme/c++/GGJ/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eme/c++/GGJ /home/eme/c++/GGJ /home/eme/c++/GGJ/build /home/eme/c++/GGJ/build /home/eme/c++/GGJ/build/CMakeFiles/GGJ.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GGJ.dir/depend

