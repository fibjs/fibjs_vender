cmake_minimum_required(VERSION 3.10)

get_filename_component(lib_name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${lib_name})

include_directories(${PROJECT_SOURCE_DIR}/include/juice)

add_definitions(-DJUICE_STATIC)

# tcp.c uses MSG_NOSIGNAL, which older glibc headers only expose with
# _GNU_SOURCE.  The define is harmless on the other POSIX platforms.
if(NOT ${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    add_definitions(-D_GNU_SOURCE)
endif()

include(../build_tools/cmake/Library.cmake)
