#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BIGINT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BIGINT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BigInt> Convert8ATBigInt13MutableBigInt_256(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_i);
  compiler::TNode<Uint32T> kPositiveSign_257(compiler::CodeAssemblerState* state_);
  compiler::TNode<Uint32T> kNegativeSign_258(compiler::CodeAssemblerState* state_);
compiler::TNode<BoolT> IsCanonicalized_259(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_bigint);
compiler::TNode<Uint32T> InvertSign_260(compiler::CodeAssemblerState* state_, compiler::TNode<Uint32T> p_sign);
compiler::TNode<BigInt> AllocateEmptyBigIntNoThrow_261(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_sign, compiler::TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_BigIntTooBig);
compiler::TNode<BigInt> AllocateEmptyBigInt_262(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Uint32T> p_sign, compiler::TNode<IntPtrT> p_length);
compiler::TNode<Int32T> MutableBigIntAbsoluteCompare_263(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y);
compiler::TNode<BigInt> MutableBigIntAbsoluteSub_264(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y, compiler::TNode<Uint32T> p_resultSign);
compiler::TNode<BigInt> MutableBigIntAbsoluteAdd_265(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_xBigint, compiler::TNode<BigInt> p_yBigint, compiler::TNode<Uint32T> p_resultSign, compiler::CodeAssemblerLabel* label_BigIntTooBig);
compiler::TNode<BigInt> BigIntAddImpl_266(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BigInt> p_x, compiler::TNode<BigInt> p_y, compiler::CodeAssemblerLabel* label_BigIntTooBig);
compiler::TNode<BigInt> Convert10BigIntBase13MutableBigInt_1389(compiler::CodeAssemblerState* state_, compiler::TNode<BigInt> p_i);
compiler::TNode<BigInt> Cast8ATBigInt_1390(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_BIGINT_TQ_H_
