#ifndef V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BuiltinPtr> UnsafeCast52FT7Context12JSTypedArray5ATSmi20UT5ATSmi10HeapObject_317(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<BuiltinPtr> UnsafeCast74FT7Context12JSTypedArray5ATSmi20UT5ATSmi10HeapObject20UT5ATSmi10HeapObject_318(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<JSTypedArray> EnsureAttached_319(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached);
TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_320(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array);
compiler::TNode<BuiltinPtr> GetLoadFnForElementsKind_321(compiler::CodeAssemblerState* state_, compiler::TNode<Int32T> p_elementsKind);
ElementsKind KindForArrayType15ATUint8Elements_322(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType14ATInt8Elements_323(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint16Elements_324(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt16Elements_325(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType16ATUint32Elements_326(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType15ATInt32Elements_327(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat32Elements_328(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType17ATFloat64Elements_329(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType22ATUint8ClampedElements_330(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType19ATBigUint64Elements_331(compiler::CodeAssemblerState* state_);
ElementsKind KindForArrayType18ATBigInt64Elements_332(compiler::CodeAssemblerState* state_);
compiler::TNode<Number> CallCompare_333(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b);
void TypedArrayMerge_334(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<FixedArray> p_source, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_middle, compiler::TNode<Smi> p_to, compiler::TNode<FixedArray> p_target);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_NAMESPACE_V8_H_
