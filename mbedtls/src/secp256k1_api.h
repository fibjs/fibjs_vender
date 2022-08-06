#include "mbedtls/bignum.h"

#define SECP256K1_WIDEMUL_INT64 1
#define ECMULT_WINDOW_SIZE 15
#define ECMULT_GEN_PREC_BITS 4
#define SECP256K1_API

#define SECP256K1_BUILD
#define ENABLE_MODULE_ECDH 1
#define ENABLE_MODULE_RECOVERY 1
#define ENABLE_MODULE_EXTRAKEYS 1
#define ENABLE_MODULE_SCHNORRSIG 1

#define secp256k1_context_create secp256k1_context_create_ex
#define secp256k1_context_clone secp256k1_context_clone_ex
#define secp256k1_context_destroy secp256k1_context_destroy_ex
#define secp256k1_context_no_precomp secp256k1_context_no_precomp_ex
#define secp256k1_context_preallocated_clone secp256k1_context_preallocated_clone_ex
#define secp256k1_context_preallocated_clone_size secp256k1_context_preallocated_clone_size_ex
#define secp256k1_context_preallocated_create secp256k1_context_preallocated_create_ex
#define secp256k1_context_preallocated_destroy secp256k1_context_preallocated_destroy_ex
#define secp256k1_context_preallocated_size secp256k1_context_preallocated_size_ex
#define secp256k1_context_randomize secp256k1_context_randomize_ex
#define secp256k1_context_set_error_callback secp256k1_context_set_error_callback_ex
#define secp256k1_context_set_illegal_callback secp256k1_context_set_illegal_callback_ex
#define secp256k1_ec_privkey_negate secp256k1_ec_privkey_negate_ex
#define secp256k1_ec_privkey_tweak_add secp256k1_ec_privkey_tweak_add_ex
#define secp256k1_ec_privkey_tweak_mul secp256k1_ec_privkey_tweak_mul_ex
#define secp256k1_ec_pubkey_combine secp256k1_ec_pubkey_combine_ex
#define secp256k1_ec_pubkey_cmp secp256k1_ec_pubkey_cmp_ex
#define secp256k1_ec_pubkey_create secp256k1_ec_pubkey_create_ex
#define secp256k1_ec_pubkey_negate secp256k1_ec_pubkey_negate_ex
#define secp256k1_ec_pubkey_parse secp256k1_ec_pubkey_parse_ex
#define secp256k1_ec_pubkey_serialize secp256k1_ec_pubkey_serialize_ex
#define secp256k1_ec_pubkey_tweak_add secp256k1_ec_pubkey_tweak_add_ex
#define secp256k1_ec_pubkey_tweak_mul secp256k1_ec_pubkey_tweak_mul_ex
#define secp256k1_ec_seckey_negate secp256k1_ec_seckey_negate_ex
#define secp256k1_ec_seckey_tweak_add secp256k1_ec_seckey_tweak_add_ex
#define secp256k1_ec_seckey_tweak_mul secp256k1_ec_seckey_tweak_mul_ex
#define secp256k1_ec_seckey_verify secp256k1_ec_seckey_verify_ex
#define secp256k1_ecdsa_recover secp256k1_ecdsa_recover_ex
#define secp256k1_ecdsa_recoverable_signature_convert secp256k1_ecdsa_recoverable_signature_convert_ex
#define secp256k1_ecdsa_recoverable_signature_parse_compact secp256k1_ecdsa_recoverable_signature_parse_compact_ex
#define secp256k1_ecdsa_recoverable_signature_serialize_compact secp256k1_ecdsa_recoverable_signature_serialize_compact_ex
#define secp256k1_ecdsa_sign secp256k1_ecdsa_sign_ex
#define secp256k1_ecdsa_sign_recoverable secp256k1_ecdsa_sign_recoverable_ex
#define secp256k1_ecdsa_signature_normalize secp256k1_ecdsa_signature_normalize_ex
#define secp256k1_ecdsa_signature_parse_compact secp256k1_ecdsa_signature_parse_compact_ex
#define secp256k1_ecdsa_signature_parse_der secp256k1_ecdsa_signature_parse_der_ex
#define secp256k1_ecdsa_signature_serialize_compact secp256k1_ecdsa_signature_serialize_compact_ex
#define secp256k1_ecdsa_signature_serialize_der secp256k1_ecdsa_signature_serialize_der_ex
#define secp256k1_ecdsa_verify secp256k1_ecdsa_verify_ex
#define secp256k1_nonce_function_default secp256k1_nonce_function_default_ex
#define secp256k1_nonce_function_rfc6979 secp256k1_nonce_function_rfc6979_ex
#define secp256k1_scratch_space_create secp256k1_scratch_space_create_ex
#define secp256k1_scratch_space_destroy secp256k1_scratch_space_destroy_ex
#define secp256k1_tagged_sha256 secp256k1_tagged_sha256_ex

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

#ifdef __cplusplus
}
#endif
