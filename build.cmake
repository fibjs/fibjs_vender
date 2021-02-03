cmake_minimum_required(VERSION 3.12)

include(tools/get_env.cmake)

set(libs
    exlib
    cares
    gtest
    expat
    gumbo
    gd
    tiff
    jpeg
    png
    webp
    zlib
    leveldb
    snappy
    msgpack
    pcre
    sqlite
    mongo
    umysql
    uuid
    exif
    mbedtls
    v8
    jssdk
    unzip
    uv
)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    set(libs ${libs}
        winiconv
    )
else()
    set(libs ${libs}
        jemalloc
        editline
        ev
    )
endif()

if(EXISTS "../build")
    set(OUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../out/${CMAKE_HOST_SYSTEM_NAME}_${BUILD_ARCH}_${BUILD_TYPE}")
else()
    set(OUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/.dist/out/${CMAKE_HOST_SYSTEM_NAME}_${BUILD_ARCH}_${BUILD_TYPE}")
endif()

foreach(lib ${libs})
    build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}" "${OUT_PATH}/${lib}")
endforeach()

foreach(lib ${libs})
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test")
        build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test" "${OUT_PATH}/${lib}_test")
    endif()
endforeach()
