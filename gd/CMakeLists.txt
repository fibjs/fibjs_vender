cmake_minimum_required(VERSION 2.6)

add_definitions(-DHAVE_CONFIG_H=1)

include_directories(
	"${PROJECT_SOURCE_DIR}/../tiff/include/" 
	"${PROJECT_SOURCE_DIR}/../png/include/" 
	"${PROJECT_SOURCE_DIR}/../jpeg/include/" 
	"${PROJECT_SOURCE_DIR}/../webp/include/" 
	"${PROJECT_SOURCE_DIR}/../zlib/include/")

include(../build_tools/cmake/Library.cmake)