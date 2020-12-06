cmake_minimum_required(VERSION 2.6)

set(libs exlib)

include(../../tools/LibraryTest.cmake)

if(${OS} STREQUAL "Windows")
    add_definitions(
        -DNOMINMAX
        -D_CRT_SECURE_NO_WARNINGS
        -DV8_NO_FAST_TLS
        -DV8_DEPRECATION_WARNINGS
        -DENABLE_HANDLE_ZAPPING
        -D_CONSOLE
    )
endif()