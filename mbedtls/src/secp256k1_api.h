
#include "mbedtls/bignum.h"
#include <secp256k1/include/secp256k1.h>
#include <secp256k1/include/secp256k1_ecdh.h>

#ifdef __cplusplus
extern "C" {
#endif

#define KEYSIZE_256 32

extern secp256k1_context* secp256k1_ctx;

#define fix_hash(hash, hash_len, buffer)                         \
    if (hash_len < KEYSIZE_256) {                                \
        memset(buffer, 0, KEYSIZE_256 - hash_len);               \
        memcpy(buffer + KEYSIZE_256 - hash_len, hash, hash_len); \
        hash = buffer;                                           \
    }

void mpi_write_key(const mbedtls_mpi* X, unsigned char* buf);
void mpi_read_key(mbedtls_mpi* X, unsigned char* buf);

#ifdef __cplusplus
}
#endif
