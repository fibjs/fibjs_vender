#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FINALIZATION_REGISTRY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FINALIZATION_REGISTRY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=18&c=1
void PushCell_0(compiler::CodeAssemblerState* state_, TNode<JSFinalizationRegistry> p_finalizationRegistry, TNode<WeakCell> p_cell);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=50&c=32
TNode<JSFinalizationRegistry> UnsafeCast_JSFinalizationRegistry_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=58&c=7
TNode<Smi> SmiTag_FinalizationRegistryFlags_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=72&c=32
TNode<JSFinalizationRegistry> Cast_JSFinalizationRegistry_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/finalization-registry.tq?l=80&c=18
TNode<Union<JSReceiver, Symbol>> UnsafeCast_Symbol_OR_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FINALIZATION_REGISTRY_TQ_CSA_H_
