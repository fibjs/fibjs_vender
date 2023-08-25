#include "server.c"

#include "fields.h"
#include "bytes.h"
#include <stdio.h>
#include <fips202/include/fips202.h>

const POINTonE1 BLS12_381_G1_P1 = {
    { TO_LIMB_T(0xcbbca09048aca92e), TO_LIMB_T(0x44035f6216317fd5),
        TO_LIMB_T(0x95388041e9218d1b), TO_LIMB_T(0xe4b58b6b099a3bc8),
        TO_LIMB_T(0x58e6116ffcc2ab08), TO_LIMB_T(0x0d5288df7345fa9e) },
    { TO_LIMB_T(0x886572435ff05797), TO_LIMB_T(0xa66395c7d2bb0e58),
        TO_LIMB_T(0xb104b28548a7bc46), TO_LIMB_T(0x4f5ebbc008cb6cf1),
        TO_LIMB_T(0xea5bd123cf3662e1), TO_LIMB_T(0x167b4ad247d7ec89) }
};

const POINTonE1 BLS12_381_G1_P1_XOF = {
    { TO_LIMB_T(0x33af9e15bf6cd36c), TO_LIMB_T(0x8090fdcf5e8d03c1),
        TO_LIMB_T(0x32b816539398037d), TO_LIMB_T(0x895dc27b69aab762),
        TO_LIMB_T(0x86142b53c0e0815f), TO_LIMB_T(0x1414d96d827449f7) },
    { TO_LIMB_T(0xa0adf1d851193fa4), TO_LIMB_T(0x464f70bc933679e9),
        TO_LIMB_T(0x8d585e5873d40d0d), TO_LIMB_T(0xb2fbf0c57c497a7b),
        TO_LIMB_T(0x2b262e3c41dd8219), TO_LIMB_T(0x06866e40ac0da653) }
};

void blst_expand_message_xof(unsigned char* bytes, size_t len_in_bytes, const unsigned char* msg, size_t msg_len,
    const unsigned char* DST, size_t DST_len)
{
    shake256incctx ctx;

    shake256_inc_init(&ctx);

    shake256_inc_absorb(&ctx, msg, msg_len);

    unsigned char buf[2];
    buf[0] = (len_in_bytes >> 8) & 0xff;
    buf[1] = len_in_bytes & 0xff;
    shake256_inc_absorb(&ctx, buf, sizeof(buf));

    shake256_inc_absorb(&ctx, DST, DST_len);

    buf[0] = DST_len & 0xff;
    shake256_inc_absorb(&ctx, buf, 1);

    shake256_inc_finalize(&ctx);
    shake256_inc_squeeze(bytes, len_in_bytes, &ctx);
    shake256_inc_ctx_release(&ctx);
}

void blst_hash_to_g1_xof(POINTonE1* p, const unsigned char* msg, size_t msg_len,
    const unsigned char* DST, size_t DST_len)
{
    vec384 u[2];
    vec384* elems = u;
    size_t nelems = 2;

    size_t L = sizeof(vec384) + 128 / 8; /* ceil((ceil(log2(p)) + k) / 8) */
    size_t len_in_bytes = L * nelems; /* divisible by 64, hurray!      */
#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 199901 \
    || defined(__STDC_NO_VLA__)
    limb_t* pseudo_random = alloca(len_in_bytes);
#else
    limb_t pseudo_random[len_in_bytes / sizeof(limb_t)];
#endif
    unsigned char* bytes;
    vec768 elem;

    DST_len = DST != NULL ? DST_len : 0;

    blst_expand_message_xof((unsigned char*)pseudo_random, len_in_bytes, msg, msg_len, DST, DST_len);

    vec_zero(elem, sizeof(elem));
    bytes = (unsigned char*)pseudo_random;
    while (nelems--) {
        limbs_from_be_bytes(elem, bytes, L);
        bytes += L;

        redc_mont_384(elems[0], elem, BLS12_381_P, p0);
        mul_mont_384(elems[0], elems[0], BLS12_381_RRRR, BLS12_381_P, p0);
        elems++;
    }

    map_to_g1(p, u[0], u[1]);
}
