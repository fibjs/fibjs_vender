set(libs
    v8
    abseil
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
    datachannel
    juice
    usrsctp
    openssl
    blst
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
