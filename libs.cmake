set(libs
    v8
    ada
    abseil
    gtest
    unicode
    expat
    gumbo
    jemalloc
    zlib
    leveldb
    snappy
    msgpack
    pcre2
    sqlite
    umysql
    datachannel
    juice
    usrsctp
    openssl
    blst
    fips202
    jssdk
    unzip
    uv
    exlib
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
