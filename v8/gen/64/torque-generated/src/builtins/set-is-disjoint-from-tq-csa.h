#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_SET_IS_DISJOINT_FROM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_SET_IS_DISJOINT_FROM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-is-disjoint-from.tq?l=41&c=18
TNode<Boolean> FastIsDisjointFrom_OrderedHashSet_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashSet> p_tableToLookup);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/set-is-disjoint-from.tq?l=56&c=18
TNode<Boolean> FastIsDisjointFrom_OrderedHashMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<OrderedHashSet> p_collectionToIterate, TNode<OrderedHashMap> p_tableToLookup);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_SET_IS_DISJOINT_FROM_TQ_CSA_H_
