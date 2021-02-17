get_filename_component(src ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
get_filename_component(libname ${src} NAME)
set(name "${libname}_test")

project(${name})

include(${CMAKE_CURRENT_LIST_DIR}/option.cmake)

file(GLOB_RECURSE src_list "src/*.c*")
add_executable(${name} ${src_list})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../../../bin/${CMAKE_HOST_SYSTEM_NAME}_${ARCH}_${BUILD_TYPE})

include_directories(${PROJECT_SOURCE_DIR}/../ "${PROJECT_SOURCE_DIR}/../include" "${PROJECT_SOURCE_DIR}/../../")

set(libs gtest ${libname} ${libs})
foreach(lib ${libs})
	target_link_libraries(${name} "${EXECUTABLE_OUTPUT_PATH}/${CMAKE_STATIC_LIBRARY_PREFIX}${lib}${CMAKE_STATIC_LIBRARY_SUFFIX}")
endforeach()

setup_result_library(${name})

if(link_flags)
	set_target_properties(${name} PROPERTIES LINK_FLAGS ${link_flags})
endif()