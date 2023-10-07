#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_SET_DIFFERENCE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_SET_DIFFERENCE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=15&c=13
TNode<JSSet> Cast_JSSet_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=22&c=17
TNode<OrderedHashSet> Cast_OrderedHashSet_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=36&c=7
TNode<JSSet> Cast_JSSetWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=47&c=15
TNode<Smi> FastDifference_OrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashSet> p_tableToLookup, TNode<OrderedHashSet> p_resultSetData);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=54&c=7
TNode<JSMap> Cast_JSMapWithNoCustomIteration_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=58&c=13
TNode<OrderedHashMap> Cast_OrderedHashMap_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-difference.tq?l=65&c=15
TNode<Smi> FastDifference_OrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashMap> p_tableToLookup, TNode<OrderedHashSet> p_resultSetData);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_SET_DIFFERENCE_TQ_CSA_H_
