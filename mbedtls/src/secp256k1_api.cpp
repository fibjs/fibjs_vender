#include "secp256k1_api.h"

secp256k1_context* secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);

void mpi_write_key(const mbedtls_mpi* X, unsigned char* buf)
{
    mbedtls_mpi_write_binary(X, buf, KEYSIZE_256);
    for (int i = 0; i < KEYSIZE_256 / 2; i++) {
        char x = buf[i];
        buf[i] = buf[KEYSIZE_256 - i - 1];
        buf[KEYSIZE_256 - i - 1] = x;
    }
}

void mpi_read_key(mbedtls_mpi* X, unsigned char* buf)
{
    unsigned char buffer[KEYSIZE_256];

    for (int i = 0; i < KEYSIZE_256; i++)
        buffer[i] = buf[KEYSIZE_256 - i - 1];

    mbedtls_mpi_read_binary(X, buffer, KEYSIZE_256);
}
