cmake_minimum_required(VERSION 2.6)

include_directories(
    "${PROJECT_SOURCE_DIR}/../v8"
    "${PROJECT_SOURCE_DIR}/../v8/include"
    "${PROJECT_SOURCE_DIR}/.."
)

include(../v8/cmake/options.cmake)

include(../build_tools/cmake/Library.cmake)