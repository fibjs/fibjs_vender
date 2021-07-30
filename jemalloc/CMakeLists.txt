cmake_minimum_required(VERSION 2.6)

include(../build_tools/cmake/Library.cmake)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
	include_directories("${PROJECT_SOURCE_DIR}/include/msvc_compat")
endif()

add_definitions(
	-DJEMALLOC_NO_PRIVATE_NAMESPACE=1
)