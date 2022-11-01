# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
project ("Debugger")
#project(msvc_standard_libraries LANGUAGES CXX)


include_directories(include)

# Add source to this project's executable.
add_executable (Debugger "src/Debugger.cpp" "include/Debugger.h")