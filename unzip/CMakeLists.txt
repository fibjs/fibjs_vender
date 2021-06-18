cmake_minimum_required(VERSION 2.6)

include_directories("${PROJECT_SOURCE_DIR}/../zlib/include/")

add_definitions(-DUSE_FILE32API)

include(../build_tools/cmake/Library.cmake)