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
    mbedtls
    openssl
    secp256k1
    curve25519
    blst
    fips202
    blake2
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
