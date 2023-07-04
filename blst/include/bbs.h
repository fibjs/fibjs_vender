#include "blst.h"

#ifndef __BBS_H__
#define __BBS_H__

#ifdef __cplusplus
extern "C" {
#endif

extern const blst_p1_affine BLS12_381_G1_P1;
void blst_hash_to_scalar(blst_scalar* out, const byte* msg, size_t msg_len, const byte* DST, size_t DST_len);

#ifdef __cplusplus
}
#endif
#endif
