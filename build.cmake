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
    set(WORK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")
else()
    set(WORK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/.dist")
endif()

set(BIN_ROOT "${WORK_ROOT}/bin")
set(OUT_ROOT "${WORK_ROOT}/out")
set(DIST_DIRNAME "${CMAKE_HOST_SYSTEM_NAME}_${BUILD_ARCH}_${BUILD_TYPE}")

if("${CLEAN_BUILD}" STREQUAL "true")
    rimraf(${BIN_ROOT}/${DIST_DIRNAME})
    rimraf(${OUT_ROOT}/${DIST_DIRNAME})
else()
    set(OUT_PATH "${OUT_ROOT}/${DIST_DIRNAME}")

    foreach(lib ${libs})
        build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}" "${OUT_PATH}/${lib}")
    endforeach()

    foreach(lib ${libs})
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test")
            build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test" "${OUT_PATH}/${lib}_test")
        endif()
    endforeach()
endif()
