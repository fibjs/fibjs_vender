#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SPLICE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SPLICE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=12&c=1
TNode<FixedArray> Extract_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_source, TNode<Smi> p_startIndex, TNode<Smi> p_count, TNode<Smi> p_resultCapacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=20&c=1
TNode<FixedArrayBase> Extract_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArrayBase> p_source, TNode<Smi> p_startIndex, TNode<Smi> p_count, TNode<Smi> p_resultCapacity);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=127&c=1
TNode<Int32T> TransitionElementsKindForInsertionIfNeeded_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_a, TNode<Int32T> p_originalElementsKind, TorqueStructArguments p_args, IntegerLiteral p_argsStart);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=161&c=1
TNode<Object> FastArraySplice_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSReceiver> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, compiler::CodeAssemblerLabel* label_Bailout);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=213&c=1
TNode<Object> FillDeletedElementsArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount, TNode<JSReceiver> p_a);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=246&c=1
void HandleForwardCase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=294&c=1
void HandleBackwardCase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_itemCount, TNode<Number> p_actualStart, TNode<Number> p_actualDeleteCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=331&c=1
TNode<Object> SlowSplice_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_arguments, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Number> p_actualStart, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=138&c=40
TNode<HeapObject> UnsafeCast_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=154&c=47
TNode<Int32T> Convert_int32_ElementsKind_0(compiler::CodeAssemblerState* state_, TNode<Int32T> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=201&c=5
void FastSplice_FixedArray_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=205&c=5
void FastSplice_FixedDoubleArray_Number_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArguments p_args, TNode<JSArray> p_a, TNode<Smi> p_length, TNode<Smi> p_newLength, TNode<Smi> p_actualStart, TNode<Smi> p_insertCount, TNode<Smi> p_actualDeleteCount);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=96&c=7
void DoMoveElements_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_dstIndex, TNode<Smi> p_srcIndex, TNode<Smi> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=98&c=7
void StoreHoles_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<Smi> p_holeStartIndex, TNode<Smi> p_holeEndIndex);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=111&c=11
void DoCopyElements_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_dstElements, TNode<Smi> p_dstIndex, TNode<FixedArray> p_srcElements, TNode<Smi> p_srcIndex, TNode<Smi> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=90&c=22
TNode<FixedArrayBase> UnsafeCast_FixedDoubleArray_OR_EmptyFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=96&c=7
void DoMoveElements_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_dstIndex, TNode<Smi> p_srcIndex, TNode<Smi> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=98&c=7
void StoreHoles_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<Smi> p_holeStartIndex, TNode<Smi> p_holeEndIndex);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-splice.tq?l=111&c=11
void DoCopyElements_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_dstElements, TNode<Smi> p_dstIndex, TNode<FixedDoubleArray> p_srcElements, TNode<Smi> p_srcIndex, TNode<Smi> p_count);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_SPLICE_TQ_CSA_H_
