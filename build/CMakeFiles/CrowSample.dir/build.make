# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "E:\Program Files\Microsoft Visual Studio\2022\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\Microsoft Visual Studio\2022\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\ENMS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\ENMS\build

# Include any dependencies generated for this target.
include CMakeFiles/CrowSample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CrowSample.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CrowSample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CrowSample.dir/flags.make

CMakeFiles/CrowSample.dir/Website/main.cpp.obj: CMakeFiles/CrowSample.dir/flags.make
CMakeFiles/CrowSample.dir/Website/main.cpp.obj: CMakeFiles/CrowSample.dir/includes_CXX.rsp
CMakeFiles/CrowSample.dir/Website/main.cpp.obj: E:/ENMS/Website/main.cpp
CMakeFiles/CrowSample.dir/Website/main.cpp.obj: CMakeFiles/CrowSample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\ENMS\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CrowSample.dir/Website/main.cpp.obj"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CrowSample.dir/Website/main.cpp.obj -MF CMakeFiles\CrowSample.dir\Website\main.cpp.obj.d -o CMakeFiles\CrowSample.dir\Website\main.cpp.obj -c E:\ENMS\Website\main.cpp

CMakeFiles/CrowSample.dir/Website/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CrowSample.dir/Website/main.cpp.i"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\ENMS\Website\main.cpp > CMakeFiles\CrowSample.dir\Website\main.cpp.i

CMakeFiles/CrowSample.dir/Website/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CrowSample.dir/Website/main.cpp.s"
	C:\PROGRA~2\Dev-Cpp\MinGW64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\ENMS\Website\main.cpp -o CMakeFiles\CrowSample.dir\Website\main.cpp.s

# Object files for target CrowSample
CrowSample_OBJECTS = \
"CMakeFiles/CrowSample.dir/Website/main.cpp.obj"

# External object files for target CrowSample
CrowSample_EXTERNAL_OBJECTS =

CrowSample.exe: CMakeFiles/CrowSample.dir/Website/main.cpp.obj
CrowSample.exe: CMakeFiles/CrowSample.dir/build.make
CrowSample.exe: CMakeFiles/CrowSample.dir/linkLibs.rsp
CrowSample.exe: CMakeFiles/CrowSample.dir/objects1.rsp
CrowSample.exe: CMakeFiles/CrowSample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\ENMS\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CrowSample.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CrowSample.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CrowSample.dir/build: CrowSample.exe
.PHONY : CMakeFiles/CrowSample.dir/build

CMakeFiles/CrowSample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CrowSample.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CrowSample.dir/clean

CMakeFiles/CrowSample.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\ENMS E:\ENMS E:\ENMS\build E:\ENMS\build E:\ENMS\build\CMakeFiles\CrowSample.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CrowSample.dir/depend

