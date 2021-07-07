#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_JOIN_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_JOIN_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> CannotUseSameArrayAccessor7JSArray_8(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BuiltinPtr> p_loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p_originalMap, compiler::TNode<Number> p_originalLen);
compiler::TNode<BoolT> CannotUseSameArrayAccessor12JSTypedArray_9(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BuiltinPtr> p__loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p__initialMap, compiler::TNode<Number> p__initialLen);
compiler::TNode<IntPtrT> AddStringLength_10(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<IntPtrT> p_lenA, compiler::TNode<IntPtrT> p_lenB);
TorqueStructBuffer NewBuffer_11(compiler::CodeAssemblerState* state_, compiler::TNode<UintPtrT> p_len, compiler::TNode<String> p_sep);
compiler::TNode<String> BufferJoin_12(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructBuffer p_buffer, compiler::TNode<String> p_sep);
compiler::TNode<Object> ArrayJoin7JSArray_13(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<Object> ArrayJoin12JSTypedArray_14(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<FixedArray> LoadJoinStack_15(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_IfUninitialized);
void SetJoinStack_16(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_stack);
compiler::TNode<BoolT> JoinStackPushInline_17(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver);
void JoinStackPopInline_18(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver);
compiler::TNode<JSArray> UnsafeCast7JSArray_1341(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<NumberDictionary> UnsafeCast18ATNumberDictionary_1342(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<FixedArray> UnsafeCast10FixedArray_1343(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<Smi> UnsafeCast5ATSmi_1344(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<Object> UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1346(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<FixedDoubleArray> UnsafeCast16FixedDoubleArray_1347(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<JSTypedArray> UnsafeCast12JSTypedArray_1348(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<String> Cast6String_1350(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<String> ArrayJoinImpl7JSArray_1351(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<BuiltinPtr> p_initialLoadFn);
compiler::TNode<String> ArrayJoinImpl12JSTypedArray_1352(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<BuiltinPtr> p_initialLoadFn);
compiler::TNode<HeapObject> UnsafeCast10HeapObject_1353(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
compiler::TNode<FixedArray> StoreAndGrowFixedArray10JSReceiver_1354(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<JSReceiver> p_element);
compiler::TNode<Object> CycleProtectedArrayJoin7JSArray_1355(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<Object> CycleProtectedArrayJoin12JSTypedArray_1356(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<FixedArray> StoreAndGrowFixedArray5ATSmi_1421(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<Smi> p_element);
compiler::TNode<FixedArray> StoreAndGrowFixedArray6String_1422(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<String> p_element);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_JOIN_TQ_H_
