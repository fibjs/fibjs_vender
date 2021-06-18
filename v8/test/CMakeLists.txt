cmake_minimum_required(VERSION 2.6)

set(test_libs gtest)
set(libs exlib)

include(../../build_tools/cmake/LibraryTest.cmake)

include_directories(
	"${PROJECT_SOURCE_DIR}/../gen"
	"${PROJECT_SOURCE_DIR}/../gen/include"
)