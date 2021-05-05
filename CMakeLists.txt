
# The minimum version of CMake required
cmake_minimum_required(VERSION 3.15)
# The project name
project(SFMLTest)
# The C++ standard version. Can be 98 11 14 or 17
set(CMAKE_CXX_STANDARD 17)

set(SFML_INCLUDE_DIR "./SFML/include")
set(SFML_LIBRARY_DIR "./SFML/build/lib")

link_directories(${SFML_LIBRARY_DIR})
include_directories(${SFML_INCLUDE_DIR})

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

file(GLOB_RECURSE SOURCES
    ./source/*.h
    ./source/*.cpp
)

add_executable(SFMLTest ${SOURCES})

#add_executable(SFMLTest hello.cpp)
target_link_libraries (SFMLTest sfml-graphics sfml-window sfml-system)