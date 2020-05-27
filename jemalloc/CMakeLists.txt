cmake_minimum_required(VERSION 2.6)

include(../tools/Library.cmake)

add_definitions(
	-DJEMALLOC_NO_PRIVATE_NAMESPACE=1
)