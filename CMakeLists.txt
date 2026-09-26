cmake_minimum_required(VERSION 3.10)

# vender is built in two roles:
#
#   * standalone (vender CI, or a developer in the vender repository)
#   * as a subdirectory of the fibjs build tree (-DBT_VENDER=in-tree)
#
# Every library below calls project() on its own, so ${PROJECT_SOURCE_DIR}
# keeps resolving to the library directory in both roles.
#
# config.cmake comes first: it detects the platform/arch and the compiler
# (CC/CXX) that project() is about to use.
include(${CMAKE_CURRENT_LIST_DIR}/build_tools/cmake/config.cmake)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    project(fibjs_vender C CXX)
endif()

# Feature checks (glibc/iconv/C++20) and the generated configuration headers,
# once for the whole tree.
include(${CMAKE_CURRENT_LIST_DIR}/build_tools/cmake/option_config.cmake)
bt_config_target()

include(${CMAKE_CURRENT_LIST_DIR}/libs.cmake)

foreach(lib ${libs})
    if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/${lib}/CMakeLists.txt")
        add_subdirectory(${lib})
    endif()
endforeach()

foreach(lib ${libs})
    if(EXISTS "${CMAKE_CURRENT_LIST_DIR}/${lib}/test/CMakeLists.txt")
        add_subdirectory(${lib}/test)
    endif()
endforeach()
