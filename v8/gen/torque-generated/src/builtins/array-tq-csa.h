#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void EnsureWriteableFastElements_50(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array);
compiler::TNode<Object> LoadElementOrUndefined_51(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_a, compiler::TNode<Smi> p_i);
compiler::TNode<Object> LoadElementOrUndefined_52(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i);
void StoreArrayHole_53(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_k);
void StoreArrayHole_54(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_k);
compiler::TNode<Object> UnsafeCast100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1374(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TQ_H_
