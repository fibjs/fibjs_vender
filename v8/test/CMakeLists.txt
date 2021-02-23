cmake_minimum_required(VERSION 2.6)

set(libs exlib)

include(../../tools/LibraryTest.cmake)

include_directories(
	"${PROJECT_SOURCE_DIR}/../gen"
	"${PROJECT_SOURCE_DIR}/../gen/include"
)