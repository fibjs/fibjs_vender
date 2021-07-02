#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Object> FastArrayEvery_2(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);
compiler::TNode<Object> FastArrayReduceRight_27(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_Bailout_parameter_1);
compiler::TNode<Object> FastArrayReduce_28(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_Bailout_parameter_1);
compiler::TNode<Object> FastArraySome_42(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);
void EnsureWriteableFastElements_52(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array);
compiler::TNode<BoolT> IsJSArray_53(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<Object> LoadElementOrUndefined_54(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_a, compiler::TNode<Smi> p_i);
compiler::TNode<Object> LoadElementOrUndefined_55(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i);
void StoreArrayHole_56(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_k);
void StoreArrayHole_57(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_k);
void CopyArrayElement_58(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<FixedArray> p_newElements, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
void CopyArrayElement_59(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<FixedDoubleArray> p_newElements, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
compiler::TNode<IntPtrT> CalculateWorkArrayLength_411(compiler::CodeAssemblerState* state_, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_initialReceiverLength);
compiler::TNode<FixedArray> NewSortState_412(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<Number> p_initialReceiverLength);
  compiler::TNode<Smi> kSuccess_413(compiler::CodeAssemblerState* state_);
  int31_t kMaxMergePending_414(compiler::CodeAssemblerState* state_);
  int31_t kMinGallopWins_415(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSortStateTempSize_416(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> GetPendingRunsSize_417(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
compiler::TNode<Smi> GetPendingRunBase_418(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunBase_419(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
compiler::TNode<Smi> GetPendingRunLength_420(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunLength_421(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
void PushRun_422(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length);
compiler::TNode<FixedArray> GetTempArray_423(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_requestedSize);
void BinaryInsertionSort_424(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_low, compiler::TNode<Smi> p_startArg, compiler::TNode<Smi> p_high);
compiler::TNode<Smi> CountAndMakeRun_425(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_lowArg, compiler::TNode<Smi> p_high);
void ReverseRange_426(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
void MergeLow_427(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
void MergeHigh_428(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
compiler::TNode<Smi> ComputeMinRunLength_429(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_nArg);
compiler::TNode<BoolT> RunInvariantEstablished_430(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_n);
void MergeCollapse_431(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
void MergeForceCollapse_432(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
void ArrayTimSortImpl_433(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_length);
compiler::TNode<Smi> CompactReceiverElementsIntoWorkArray_434(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
void CopyWorkArrayToReceiver_435(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_numberOfNonUndefined);
compiler::TNode<JSReceiver> LoadSortStateReceiver_1136(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateReceiver_1137(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<JSReceiver> p_v);
compiler::TNode<Map> LoadSortStateInitialReceiverMap_1138(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateInitialReceiverMap_1139(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Map> p_v);
compiler::TNode<Number> LoadSortStateInitialReceiverLength_1140(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateInitialReceiverLength_1141(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Number> p_v);
compiler::TNode<HeapObject> LoadSortStateUserCmpFn_1142(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateUserCmpFn_1143(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateSortComparePtr_1144(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateSortComparePtr_1145(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateLoadFn_1146(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateLoadFn_1147(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateStoreFn_1148(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateStoreFn_1149(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateDeleteFn_1150(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateDeleteFn_1151(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_1152(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateCanUseSameAccessorFn_1153(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<Smi> LoadSortStateMinGallop_1154(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateMinGallop_1155(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStatePendingRunsSize_1156(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStatePendingRunsSize_1157(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<FixedArray> LoadSortStatePendingRuns_1158(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStatePendingRuns_1159(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateWorkArray_1160(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateWorkArray_1161(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateTempArray_1162(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateTempArray_1163(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<Smi> LoadSortStateSortLength_1164(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateSortLength_1165(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStateNumberOfUndefined_1166(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSortStateNumberOfUndefined_1167(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> _method_SortState_Compare(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_this, compiler::TNode<Object> p_x, compiler::TNode<Object> p_y);
void _method_SortState_CheckAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_this, compiler::CodeAssemblerLabel* label_Bailout);
void _method_SortState_ResetToGenericAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_this);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_NAMESPACE_V8_H_
