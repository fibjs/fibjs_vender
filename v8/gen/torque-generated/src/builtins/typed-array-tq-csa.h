#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<JSTypedArray> EnsureAttached_369(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached);
TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_370(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array);
compiler::TNode<BuiltinPtr> GetLoadFnForElementsKind_371(compiler::CodeAssemblerState* state_, compiler::TNode<Int32T> p_elementsKind);
ElementsKind KindForArrayType15ATUint8Elements_372(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType14ATInt8Elements_373(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint16Elements_374(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt16Elements_375(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint32Elements_376(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt32Elements_377(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat32Elements_378(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat64Elements_379(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType22ATUint8ClampedElements_380(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType19ATBigUint64Elements_381(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType18ATBigInt64Elements_382(compiler::CodeAssemblerState* state_);
compiler::TNode<Number> CallCompare_383(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b);
void TypedArrayMerge_384(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<FixedArray> p_source, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_middle, compiler::TNode<Smi> p_to, compiler::TNode<FixedArray> p_target);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TYPED_ARRAY_TQ_H_
