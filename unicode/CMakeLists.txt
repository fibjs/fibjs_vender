cmake_minimum_required(VERSION 2.6)

file(GLOB_RECURSE src_list "*.c*")

include_directories(
	${PROJECT_SOURCE_DIR}/include
	${PROJECT_SOURCE_DIR}/common
	${PROJECT_SOURCE_DIR}/i18n
)

add_definitions(-DU_COMMON_IMPLEMENTATION -DU_I18N_IMPLEMENTATION)

include(../build_tools/cmake/Library.cmake)