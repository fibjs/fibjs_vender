cmake_minimum_required(VERSION 3.5)

include_directories("${PROJECT_SOURCE_DIR}/absl")

if("${BUILD_OS}" STREQUAL "Linux" AND CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	include_directories("${PROJECT_SOURCE_DIR}/../libc/include/10")
endif()


set(src_folder "absl")

include(../build_tools/cmake/Library.cmake)
