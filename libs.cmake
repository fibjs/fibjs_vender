set(libs
    v8
    exlib
    cares
    gtest
    unicode
    expat
    gumbo
    jemalloc
    zlib
    leveldb
    snappy
    msgpack
    pcre
    sqlite
    umysql
    uuid
    exif
    juice
    openssl
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
