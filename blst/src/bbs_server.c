#include "server.c"

#include "fields.h"
#include "bytes.h"
#include <stdio.h>

#define FR_BYTE_SIZE 48

const POINTonE1 BLS12_381_G1_P1 = {
    { TO_LIMB_T(0xcbbca09048aca92e), TO_LIMB_T(0x44035f6216317fd5),
        TO_LIMB_T(0x95388041e9218d1b), TO_LIMB_T(0xe4b58b6b099a3bc8),
        TO_LIMB_T(0x58e6116ffcc2ab08), TO_LIMB_T(0x0d5288df7345fa9e) },
    { TO_LIMB_T(0x886572435ff05797), TO_LIMB_T(0xa66395c7d2bb0e58),
        TO_LIMB_T(0xb104b28548a7bc46), TO_LIMB_T(0x4f5ebbc008cb6cf1),
        TO_LIMB_T(0xea5bd123cf3662e1), TO_LIMB_T(0x167b4ad247d7ec89) }
};
