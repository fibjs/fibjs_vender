#ifndef V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<IntPtrT> CalculateWorkArrayLength_425(compiler::CodeAssemblerState* state_, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_initialReceiverLength);
compiler::TNode<SortState> NewSortState_426(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<HeapObject> p_comparefn, compiler::TNode<Number> p_initialReceiverLength);
  compiler::TNode<Smi> kSuccess_427(compiler::CodeAssemblerState* state_);
  int31_t kMaxMergePending_428(compiler::CodeAssemblerState* state_);
  int31_t kMinGallopWins_429(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSortStateTempSize_430(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> GetPendingRunsSize_431(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
compiler::TNode<Smi> GetPendingRunBase_432(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunBase_433(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
compiler::TNode<Smi> GetPendingRunLength_434(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
void SetPendingRunLength_435(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
void PushRun_436(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length);
compiler::TNode<FixedArray> GetTempArray_437(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_requestedSize);
void BinaryInsertionSort_438(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_low, compiler::TNode<Smi> p_startArg, compiler::TNode<Smi> p_high);
compiler::TNode<Smi> CountAndMakeRun_439(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_lowArg, compiler::TNode<Smi> p_high);
void ReverseRange_440(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
void MergeLow_441(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
void MergeHigh_442(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg);
compiler::TNode<Smi> ComputeMinRunLength_443(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_nArg);
compiler::TNode<BoolT> RunInvariantEstablished_444(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_n);
void MergeCollapse_445(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void MergeForceCollapse_446(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void ArrayTimSortImpl_447(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_length);
compiler::TNode<Smi> CompactReceiverElementsIntoWorkArray_448(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState);
void CopyWorkArrayToReceiver_449(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_sortState, compiler::TNode<Smi> p_numberOfNonUndefined);
compiler::TNode<JSReceiver> LoadSortStateReceiver_1256(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateReceiver_1257(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<JSReceiver> p_v);
compiler::TNode<Map> LoadSortStateInitialReceiverMap_1258(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverMap_1259(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Map> p_v);
compiler::TNode<Number> LoadSortStateInitialReceiverLength_1260(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateInitialReceiverLength_1261(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Number> p_v);
compiler::TNode<HeapObject> LoadSortStateUserCmpFn_1262(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateUserCmpFn_1263(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<HeapObject> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateSortComparePtr_1264(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortComparePtr_1265(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateLoadFn_1266(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateLoadFn_1267(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateStoreFn_1268(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateStoreFn_1269(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateDeleteFn_1270(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateDeleteFn_1271(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn_1272(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateCanUseSameAccessorFn_1273(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v);
compiler::TNode<Smi> LoadSortStateMinGallop_1274(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateMinGallop_1275(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStatePendingRunsSize_1276(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRunsSize_1277(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<FixedArray> LoadSortStatePendingRuns_1278(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStatePendingRuns_1279(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateWorkArray_1280(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateWorkArray_1281(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<FixedArray> LoadSortStateTempArray_1282(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateTempArray_1283(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v);
compiler::TNode<Smi> LoadSortStateSortLength_1284(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateSortLength_1285(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSortStateNumberOfUndefined_1286(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o);
void StoreSortStateNumberOfUndefined_1287(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> _method_SortState_Compare(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::TNode<Object> p_x, compiler::TNode<Object> p_y);
void _method_SortState_CheckAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<SortState> p_this, compiler::CodeAssemblerLabel* label_Bailout);
void _method_SortState_ResetToGenericAccessor(compiler::CodeAssemblerState* state_, compiler::TNode<SortState> p_this);
compiler::TNode<JSObject> UnsafeCast8JSObject_1359(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapNumber> UnsafeCast10HeapNumber_1360(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<HeapObject> Cast84UT19ATCallableApiObject17ATCallableJSProxy11ATUndefined15JSBoundFunction10JSFunction_1361(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_THIRD_PARTY_V8_BUILTINS_ARRAY_SORT_TQ_H_
