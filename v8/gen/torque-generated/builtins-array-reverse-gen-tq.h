#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_REVERSE_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_REVERSE_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Smi> LoadElement23ATFastPackedSmiElements5ATSmi_29(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index);
compiler::TNode<Object> LoadElement26ATFastPackedObjectElements20UT5ATSmi10HeapObject_30(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index);
compiler::TNode<Float64T> LoadElement26ATFastPackedDoubleElements9ATfloat64_31(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index);
void StoreElement23ATFastPackedSmiElements5ATSmi_32(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Smi> p_value);
void StoreElement26ATFastPackedObjectElements20UT5ATSmi10HeapObject_33(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Object> p_value);
void StoreElement26ATFastPackedDoubleElements9ATfloat64_34(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Float64T> p_value);
compiler::TNode<Object> GenericArrayReverse_35(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver);
void TryFastPackedArrayReverse_36(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow);
void FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi_1190(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_length);
void FastPackedArrayReverse26ATFastPackedObjectElements20UT5ATSmi10HeapObject_1191(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_length);
void FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64_1192(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_length);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_REVERSE_NAMESPACE_V8_H_
