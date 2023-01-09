cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(Backend VERSION 1.0)

add_subdirectory(src)
add_executable(Backend src/driver.cpp)

target_link_libraries(Backend PUBLIC HttpListener cpp-httplib)
target_include_directories(Backend PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/src"
                          )

