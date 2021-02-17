get_filename_component(name ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${name})

include(${CMAKE_CURRENT_LIST_DIR}/option.cmake)

if(NOT DEFINED src_list)
	file(GLOB_RECURSE src_list "src/*.c*")
endif()
add_library(${name} ${src_list})

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../../../bin/${CMAKE_HOST_SYSTEM_NAME}_${ARCH}_${BUILD_TYPE})

include_directories(${PROJECT_SOURCE_DIR} "${PROJECT_SOURCE_DIR}/include" "${PROJECT_SOURCE_DIR}/../")

setup_result_library(${name})