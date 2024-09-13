cmake_minimum_required(VERSION 3.5)

include_directories("${PROJECT_SOURCE_DIR}/absl")

include(${CMAKE_CURRENT_LIST_DIR}/../libc/options.cmake)

set(src_folder "absl")

include(../build_tools/cmake/Library.cmake)
