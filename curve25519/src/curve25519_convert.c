#include <memory.h>
#include "curve25519_mehdi.h"
#include "sha512.h"

void curve25519_dh_ConvertPublicKey(unsigned char* r, const unsigned char* pk)
{
    U_WORD y[K_WORDS];
    U_WORD z[K_WORDS];
    U_WORD t[K_WORDS];

    ecp_DecodeInt(y, pk);
    ecp_SetValue(z, 1);

    ecp_AddReduce(t, z, y);
    ecp_SubReduce(z, z, y);
    ecp_Inverse(z, z);
    ecp_MulMod(t, t, z);
    ecp_WordsToBytes(r, t);
}

void curve25519_dh_ConvertPrivateKey(unsigned char* r, const unsigned char* sk)
{
    SHA512_CTX H;
    U8 md[SHA512_DIGEST_LENGTH];

    SHA512_Init(&H);
    SHA512_Update(&H, sk, 32);
    SHA512_Final(md, &H);

    md[0] &= 248;
    md[31] &= 127;
    md[31] |= 64;

    memcpy(r, md, 32);
}
