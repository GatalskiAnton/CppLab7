# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\ag629\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\ag629\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ag629\CLionProjects\CppLab77

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\main.cpp.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\main.cpp.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\main.cpp.dir\flags.make

CMakeFiles\main.cpp.dir\class.cpp.obj: CMakeFiles\main.cpp.dir\flags.make
CMakeFiles\main.cpp.dir\class.cpp.obj: ..\class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.cpp.dir/class.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\main.cpp.dir\class.cpp.obj /FdCMakeFiles\main.cpp.dir\ /FS -c C:\Users\ag629\CLionProjects\CppLab77\class.cpp
<<

CMakeFiles\main.cpp.dir\class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/class.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\main.cpp.dir\class.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ag629\CLionProjects\CppLab77\class.cpp
<<

CMakeFiles\main.cpp.dir\class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/class.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\main.cpp.dir\class.cpp.s /c C:\Users\ag629\CLionProjects\CppLab77\class.cpp
<<

CMakeFiles\main.cpp.dir\test.cpp.obj: CMakeFiles\main.cpp.dir\flags.make
CMakeFiles\main.cpp.dir\test.cpp.obj: ..\test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.cpp.dir/test.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\main.cpp.dir\test.cpp.obj /FdCMakeFiles\main.cpp.dir\ /FS -c C:\Users\ag629\CLionProjects\CppLab77\test.cpp
<<

CMakeFiles\main.cpp.dir\test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/test.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\main.cpp.dir\test.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ag629\CLionProjects\CppLab77\test.cpp
<<

CMakeFiles\main.cpp.dir\test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/test.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\main.cpp.dir\test.cpp.s /c C:\Users\ag629\CLionProjects\CppLab77\test.cpp
<<

# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles\main.cpp.dir\class.cpp.obj" \
"CMakeFiles\main.cpp.dir\test.cpp.obj"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

main.cpp.exe: CMakeFiles\main.cpp.dir\class.cpp.obj
main.cpp.exe: CMakeFiles\main.cpp.dir\test.cpp.obj
main.cpp.exe: CMakeFiles\main.cpp.dir\build.make
main.cpp.exe: CMakeFiles\main.cpp.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable main.cpp.exe"
	"C:\Users\ag629\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\main.cpp.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\main.cpp.dir\objects1.rsp @<<
 /out:main.cpp.exe /implib:main.cpp.lib /pdb:C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug\main.cpp.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\main.cpp.dir\build: main.cpp.exe
.PHONY : CMakeFiles\main.cpp.dir\build

CMakeFiles\main.cpp.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.cpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles\main.cpp.dir\clean

CMakeFiles\main.cpp.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\ag629\CLionProjects\CppLab77 C:\Users\ag629\CLionProjects\CppLab77 C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug C:\Users\ag629\CLionProjects\CppLab77\cmake-build-debug\CMakeFiles\main.cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\main.cpp.dir\depend

