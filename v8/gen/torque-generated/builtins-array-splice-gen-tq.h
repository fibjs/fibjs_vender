#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_SPLICE_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_SPLICE_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<FixedArray> Extract10FixedArray_43(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_first, compiler::TNode<Smi> p_count, compiler::TNode<Smi> p_capacity);
compiler::TNode<FixedDoubleArray> Extract16FixedDoubleArray_44(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_first, compiler::TNode<Smi> p_count, compiler::TNode<Smi> p_capacity);
compiler::TNode<Object> FastArraySplice_45(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_args, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_originalLengthNumber, compiler::TNode<Number> p_actualStartNumber, compiler::TNode<Smi> p_insertCount, compiler::TNode<Number> p_actualDeleteCountNumber, compiler::CodeAssemblerLabel* label_Bailout);
compiler::TNode<Object> FillDeletedElementsArray_46(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount, compiler::TNode<JSReceiver> p_a);
void HandleForwardCase_47(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_itemCount, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount);
void HandleBackwardCase_48(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_itemCount, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount);
compiler::TNode<Object> SlowSplice_49(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_arguments, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Number> p_actualDeleteCount);
void FastSplice10FixedArray20UT5ATSmi10HeapObject_1197(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_args, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_newLength, compiler::TNode<Smi> p_lengthDelta, compiler::TNode<Smi> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Smi> p_actualDeleteCount, compiler::CodeAssemblerLabel* label_Bailout);
void FastSplice16FixedDoubleArray20UT5ATSmi10HeapNumber_1198(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructArguments p_args, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_newLength, compiler::TNode<Smi> p_lengthDelta, compiler::TNode<Smi> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Smi> p_actualDeleteCount, compiler::CodeAssemblerLabel* label_Bailout);
void DoMoveElements10FixedArray_1240(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
void StoreHoles10FixedArray_1241(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_holeStartIndex, compiler::TNode<Smi> p_holeEndIndex);
void DoCopyElements10FixedArray_1242(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_dstElements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<FixedArray> p_srcElements, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
void DoMoveElements16FixedDoubleArray_1243(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
void StoreHoles16FixedDoubleArray_1244(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_holeStartIndex, compiler::TNode<Smi> p_holeEndIndex);
void DoCopyElements16FixedDoubleArray_1245(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_dstElements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<FixedDoubleArray> p_srcElements, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_SPLICE_NAMESPACE_V8_H_
