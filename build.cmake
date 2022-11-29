include(build_tools/cmake-scripts/get_env.cmake)

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
    jemalloc
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
    secp256k1
    curve25519
    blst
    blake2
    v8
    jssdk
    unzip
    uv
)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    list(APPEND libs
        winiconv
    )
else()
    list(APPEND libs
        editline
        ev
    )
endif()

set(WORK_ROOT $ENV{WORK_ROOT})
if(NOT WORK_ROOT)
    if(EXISTS "../build")
        set(WORK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")
    else()
        set(WORK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/.dist")
    endif()
endif()

if("${CLEAN_BUILD}" STREQUAL "true")
    rimraf(${WORK_ROOT}/out)
    rimraf(${WORK_ROOT}/bin)
else()
    foreach(lib ${libs})
        build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}" "${WORK_ROOT}" "${lib}")
    endforeach()

    foreach(lib ${libs})
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test")
            build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test" "${WORK_ROOT}" "${lib}_test")
        endif()
    endforeach()
endif()
