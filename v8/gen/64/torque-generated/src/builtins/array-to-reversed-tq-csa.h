#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TO_REVERSED_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TO_REVERSED_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=38&c=1
TNode<JSArray> TryFastPackedArrayToReversed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=46&c=12
TNode<JSArray> FastPackedArrayToReversed_FastPackedSmiElements_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, ElementsKind p_kind, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=50&c=12
TNode<JSArray> FastPackedArrayToReversed_FastPackedObjectElements_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, ElementsKind p_kind, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=54&c=12
TNode<JSArray> FastPackedArrayToReversed_FastPackedDoubleElements_float64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, ElementsKind p_kind, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_ARRAY_TO_REVERSED_TQ_CSA_H_
