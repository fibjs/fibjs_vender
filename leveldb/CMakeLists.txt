cmake_minimum_required(VERSION 2.6)

include_directories("${PROJECT_SOURCE_DIR}/../exlib/include/" "${PROJECT_SOURCE_DIR}/src/" "${PROJECT_SOURCE_DIR}/../snappy/include/")

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	add_definitions(-DLEVELDB_PLATFORM_WINDOWS)
else()
	add_definitions(-DLEVELDB_PLATFORM_POSIX)
endif()

add_definitions(-DHAVE_SNAPPY)

include(../build_tools/cmake/Library.cmake)
