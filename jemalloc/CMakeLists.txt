cmake_minimum_required(VERSION 2.6)

include(../build_tools/cmake/Library.cmake)

add_definitions(
	-DJEMALLOC_NO_PRIVATE_NAMESPACE=1
)