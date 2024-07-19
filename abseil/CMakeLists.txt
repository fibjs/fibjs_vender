cmake_minimum_required(VERSION 3.5)

include_directories("${PROJECT_SOURCE_DIR}/absl")

include(CheckIncludeFileCXX)
unset(HAS_COMPARE CACHE)
CHECK_INCLUDE_FILE_CXX(compare HAS_COMPARE)

if(NOT HAS_COMPARE)
	include_directories("${PROJECT_SOURCE_DIR}/../libc/include/10")
endif()

set(src_folder "absl")

include(../build_tools/cmake/Library.cmake)
