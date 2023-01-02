cmake_minimum_required(VERSION 2.6)

set(test_libs gtest)
set(libs exlib)

include_directories(${PROJECT_SOURCE_DIR}/..)

if(${ARCH} MATCHES "64")
	include_directories(${PROJECT_SOURCE_DIR}/../gen/64)
else()
	include_directories(${PROJECT_SOURCE_DIR}/../gen/32)
endif()

include(../cmake/options.cmake)
include(../../build_tools/cmake/LibraryTest.cmake)
