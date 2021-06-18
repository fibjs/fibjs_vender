cmake_minimum_required(VERSION 2.6)

include_directories(
    "${PROJECT_SOURCE_DIR}/../v8"
    "${PROJECT_SOURCE_DIR}/../v8/include"
    "${PROJECT_SOURCE_DIR}/.."
)

add_definitions(-DWIN32_LEAN_AND_MEAN -D_WIN32_WINNT=0x0600)

include(../build_tools/cmake/Library.cmake)