#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_JOIN_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_JOIN_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void CannotUseSameArrayAccessor7JSArray_8(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BuiltinPtr> p_loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p_originalMap, compiler::TNode<Number> p_originalLen, compiler::CodeAssemblerLabel* label_Cannot, compiler::CodeAssemblerLabel* label_Can);
void CannotUseSameArrayAccessor12JSTypedArray_9(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<BuiltinPtr> p_loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p_initialMap, compiler::TNode<Number> p_initialLen, compiler::CodeAssemblerLabel* label_Cannot, compiler::CodeAssemblerLabel* label_Can);
compiler::TNode<IntPtrT> AddStringLength_10(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<IntPtrT> p_lenA, compiler::TNode<IntPtrT> p_lenB);
TorqueStructBuffer NewBuffer_11(compiler::CodeAssemblerState* state_, compiler::TNode<UintPtrT> p_len, compiler::TNode<String> p_sep);
compiler::TNode<String> BufferJoin_12(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, TorqueStructBuffer p_buffer, compiler::TNode<String> p_sep);
compiler::TNode<Object> ArrayJoin7JSArray_13(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<Object> ArrayJoin12JSTypedArray_14(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<FixedArray> LoadJoinStack_15(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_IfUninitialized);
void SetJoinStack_16(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_stack);
void JoinStackPushInline_17(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::CodeAssemblerLabel* label_ReceiverAdded, compiler::CodeAssemblerLabel* label_ReceiverNotAdded);
void JoinStackPopInline_18(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver);
compiler::TNode<FixedArray> StoreAndGrowFixedArray5ATSmi_1168(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<Smi> p_element);
compiler::TNode<FixedArray> StoreAndGrowFixedArray6String_1169(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<String> p_element);
compiler::TNode<String> ArrayJoinImpl7JSArray_1180(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<BuiltinPtr> p_initialLoadFn);
compiler::TNode<String> ArrayJoinImpl12JSTypedArray_1181(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<BuiltinPtr> p_initialLoadFn);
compiler::TNode<FixedArray> StoreAndGrowFixedArray10JSReceiver_1183(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<JSReceiver> p_element);
compiler::TNode<Object> CycleProtectedArrayJoin7JSArray_1184(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
compiler::TNode<Object> CycleProtectedArrayJoin12JSTypedArray_1185(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_JOIN_NAMESPACE_V8_H_
