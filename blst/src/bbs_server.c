#include "server.c"

#include "fields.h"
#include "bytes.h"
#include <stdio.h>

#define FR_BYTE_SIZE 48

const POINTonE1 BLS12_381_G1_P1 = {
    { TO_LIMB_T(0x0116646f7d850908), TO_LIMB_T(0xdbe7a7e23818b142),
        TO_LIMB_T(0xa6107c68d122c08e), TO_LIMB_T(0xb89d2d7c6795ab48),
        TO_LIMB_T(0x9ce9f90855c67e48), TO_LIMB_T(0x1019697ce9c4f52b) },
    { TO_LIMB_T(0xe8999ae376cb397c), TO_LIMB_T(0x3a3db0c5254c808b),
        TO_LIMB_T(0xd4459bc183f8a58e), TO_LIMB_T(0x26220a7862b7c9c4),
        TO_LIMB_T(0xa625433d10cc25a6), TO_LIMB_T(0x16597689fda005c5) }
};

void blst_hash_to_scalar(pow256* out, const byte* msg, size_t msg_len,
    const byte* DST, size_t DST_len)
{
    byte buf[64];
    int counter = 0;

    do {
        expand_message_xmd(buf, FR_BYTE_SIZE, msg, msg_len,
            (const unsigned char*)&counter, 1, DST, DST_len);
        counter++;
    } while (!blst_scalar_from_be_bytes((unsigned char*)out, buf, FR_BYTE_SIZE));
}
