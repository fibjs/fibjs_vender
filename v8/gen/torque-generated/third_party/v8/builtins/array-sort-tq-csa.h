#ifndef V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<IntPtrT> CalculateWorkArrayLength_465(compiler::CodeAssemblerState* state_, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_initialReceiverLength);
compiler::TNode<SortState> NewSortState_466(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<Number> p_initialReceiverLength);
  compiler::TNode<Smi> kSuccess_467(compiler::CodeAssemblerState* state_);
  int31_t kMaxMergePending_468(compiler::CodeAssemblerState* state_);
  int31_t kMinGallopWins_469(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSortStateTempSize_470(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> GetPendingRunsSize_471(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
compiler::TNode<Smi> GetPendingRunBase_472(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunBase_473(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
compiler::TNode<Smi> GetPendingRunLength_474(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunLength_475(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
void PushRun_476(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length);
compiler::TNode<FixedArray> GetTempArray_477(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_requestedSize);
void BinaryInsertionSort_478(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_low, compiler::TNode<Smi> p_startArg, compiler::TNode<Smi> p_high);
compiler::TNode<Smi> CountAndMakeRun_479(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_lowArg, compiler::TNode<Smi> p_high);
void ReverseRange_480(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
void MergeLow_481(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
void MergeHigh_482(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
compiler::TNode<Smi> ComputeMinRunLength_483(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_nArg);
compiler::TNode<BoolT> RunInvariantEstablished_484(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_n);
void MergeCollapse_485(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void MergeForceCollapse_486(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void ArrayTimSortImpl_487(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_length);
compiler::TNode<Smi> CompactReceiverElementsIntoWorkArray_488(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void CopyWorkArrayToReceiver_489(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_numberOfNonUndefined);
compiler::TNode<JSReceiver> LoadSortStateReceiver_1306(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateReceiver_1307(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<JSReceiver> p_v);
compiler::TNode<Map> LoadSortStateInitialReceiverMap_1308(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverMap_1309(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Map> p_v);
compiler::TNode<Number> LoadSortStateInitialReceiverLength_1310(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverLength_1311(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Number> p_v);
compiler::TNode<HeapObject> LoadSortStateUserCmpFn_1312(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateUserCmpFn_1313(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateSortComparePtr_1314(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortComparePtr_1315(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateLoadFn_1316(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateLoadFn_1317(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateStoreFn_1318(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateStoreFn_1319(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateDeleteFn_1320(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateDeleteFn_1321(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_1322(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateCanUseSameAccessorFn_1323(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<Smi> LoadSortStateMinGallop_1324(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateMinGallop_1325(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStatePendingRunsSize_1326(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRunsSize_1327(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<FixedArray> LoadSortStatePendingRuns_1328(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRuns_1329(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateWorkArray_1330(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateWorkArray_1331(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateTempArray_1332(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateTempArray_1333(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<Smi> LoadSortStateSortLength_1334(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortLength_1335(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStateNumberOfUndefined_1336(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateNumberOfUndefined_1337(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> _method_SortState_Compare(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::TNode<Object> p_x, compiler::TNode<Object> p_y);
void _method_SortState_CheckAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout);
void _method_SortState_ResetToGenericAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_this);
compiler::TNode<JSObject> UnsafeCast8JSObject_1418(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapNumber> UnsafeCast10HeapNumber_1419(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapObject> Cast84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction_1420(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
