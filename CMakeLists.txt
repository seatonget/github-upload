cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name and version
project(GitTest VERSION 1.0)


target_sources(GitTest
    ./src/main.cpp 
    ./src/Foo.cpp)

# add the executable
add_executable(GitTest)

configure_file(GitTestConfig.h.in GitTestConfig.h)

#target_include_directories(GitTest PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           )
