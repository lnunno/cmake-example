cmake_minimum_required (VERSION 3.5)
project (Tutorial)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include extra modules to help CMake find packages.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# Example of a simple program.
add_executable(main main.cpp)

# Example of finding the Python interpreter.
find_package(PythonInterp REQUIRED)
message("-- PythonInterp: " ${PYTHON_EXECUTABLE})

# Example of finding and including a Boost header library.
find_package(Boost REQUIRED)
include_directories( ${Boost_INCLUDE_DIR} )
add_executable(boost_example boost_example.cpp)

find_package(NumPy REQUIRED)
