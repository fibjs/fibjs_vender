#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CONVERSION_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CONVERSION_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=162&c=1
TNode<JSAny> TryGetExoticToPrimitive_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_input, compiler::CodeAssemblerLabel* label_OrdinaryToPrimitive);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=173&c=1
TNode<JSPrimitive> CallExoticToPrimitive_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSAny> p_input, TNode<JSAny> p_exoticToPrimitive, TNode<String> p_hint);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=224&c=1
TNode<JSPrimitive> NonPrimitiveToPrimitive_String_Inline_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_input);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=255&c=1
TNode<JSPrimitive> TryToPrimitiveMethod_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSAny> p_input, TNode<String> p_name, compiler::CodeAssemblerLabel* label_Continue);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=293&c=1
TNode<JSPrimitive> OrdinaryToPrimitive_String_Inline_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSAny> p_input);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/conversion.tq?l=105&c=7
TNode<Name> Cast_Name_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_CONVERSION_TQ_CSA_H_
