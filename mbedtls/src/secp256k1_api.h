
#include <secp256k1/include/secp256k1.h>
#include <secp256k1/include/secp256k1_ecdh.h>

#define KEYSIZE_256 32

static secp256k1_context* secp256k1_ctx()
{
    static secp256k1_context* _ctx = NULL;

    if (!_ctx)
        _ctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);

    return _ctx;
}

#define fix_hash(hash, hash_len, buffer)                         \
    if (hash_len > KEYSIZE_256) {                                \
        hash += hash_len - KEYSIZE_256;                          \
        hash_len = KEYSIZE_256;                                  \
    } else if (hash_len < KEYSIZE_256) {                         \
        memset(buffer, 0, KEYSIZE_256 - hash_len);               \
        memcpy(buffer + KEYSIZE_256 - hash_len, hash, hash_len); \
        hash = buffer;                                           \
        hash_len = KEYSIZE_256;                                  \
    }

static void mpi_write_key(const mbedtls_mpi* X, unsigned char* buf)
{
    mbedtls_mpi_write_binary(X, buf, KEYSIZE_256);
    for (int32_t i = 0; i < KEYSIZE_256 / 2; i++) {
        char x = buf[i];
        buf[i] = buf[KEYSIZE_256 - i - 1];
        buf[KEYSIZE_256 - i - 1] = x;
    }
}

static void mpi_read_key(mbedtls_mpi* X, unsigned char* buf)
{
    unsigned char buffer[KEYSIZE_256];

    for (int32_t i = 0; i < KEYSIZE_256; i++)
        buffer[i] = buf[KEYSIZE_256 - i - 1];

    mbedtls_mpi_read_binary(X, buffer, KEYSIZE_256);
}
