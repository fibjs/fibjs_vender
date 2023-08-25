#include "blst.h"

#ifndef __BBS_H__
#define __BBS_H__

#ifdef __cplusplus
extern "C" {
#endif

extern const blst_p1_affine BLS12_381_G1_P1;
extern const blst_p1_affine BLS12_381_G1_P1_XOF;

void blst_expand_message_xof(unsigned char* bytes, size_t len_in_bytes, const unsigned char* msg, size_t msg_len,
    const unsigned char* DST, size_t DST_len);
void blst_hash_to_g1_xof(blst_p1* out, const byte* msg, size_t msg_len, const byte* DST DEFNULL, size_t DST_len DEFNULL);

#ifdef __cplusplus
}
#endif
#endif
