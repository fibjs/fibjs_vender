cmake_minimum_required(VERSION 3.5)

include_directories("${PROJECT_SOURCE_DIR}/../zlib/include/")

add_definitions(-DUSE_FILE32API)

include(../build_tools/cmake/Library.cmake)