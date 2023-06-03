#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ITERATOR_HELPERS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ITERATOR_HELPERS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=9&c=1
TNode<BoolT> IsIteratorHelperExhausted_0(compiler::CodeAssemblerState* state_, TNode<JSIteratorHelper> p_helper);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=13&c=1
void MarkIteratorHelperAsExhausted_0(compiler::CodeAssemblerState* state_, TNode<JSIteratorHelper> p_helper);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=18&c=1
TorqueStructIteratorRecord GetIteratorDirect_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_obj);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=121&c=1
TNode<JSIteratorMapHelper> NewJSIteratorMapHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<JSReceiver> p_mapper);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=217&c=1
TNode<JSIteratorFilterHelper> NewJSIteratorFilterHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<JSReceiver> p_predicate);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=320&c=1
TNode<JSIteratorTakeHelper> NewJSIteratorTakeHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<Number> p_limit);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=425&c=1
TNode<JSIteratorDropHelper> NewJSIteratorDropHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<Number> p_limit);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=529&c=1
const char* kFlatMapMethodName_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=531&c=1
TNode<JSIteratorFlatMapHelper> NewJSIteratorFlatMapHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<JSReceiver> p_mapper);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=39&c=5
TNode<JSIteratorMapHelper> Cast_JSIteratorMapHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=42&c=5
TNode<JSIteratorFilterHelper> Cast_JSIteratorFilterHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=45&c=5
TNode<JSIteratorTakeHelper> Cast_JSIteratorTakeHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=48&c=5
TNode<JSIteratorDropHelper> Cast_JSIteratorDropHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=51&c=5
TNode<JSIteratorFlatMapHelper> Cast_JSIteratorFlatMapHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=107&c=22
TNode<JSIteratorHelper> Cast_JSIteratorHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ITERATOR_HELPERS_TQ_CSA_H_
