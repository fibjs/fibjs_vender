#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_REACTION_JOB_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_REACTION_JOB_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-reaction-job.tq?l=9&c=1
TNode<JSAny> RejectPromiseReactionJob_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability, TNode<JSAny> p_reason, PromiseReaction::Type p_reactionType);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-reaction-job.tq?l=41&c=1
TNode<JSAny> FuflfillPromiseReactionJob_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability, TNode<JSAny> p_result, PromiseReaction::Type p_reactionType);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-reaction-job.tq?l=70&c=1
TNode<JSAny> PromiseReactionJob_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSAny> p_argument, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction, Undefined>> p_handler, TNode<Union<JSPromise, PromiseCapability, Undefined>> p_promiseOrCapability, PromiseReaction::Type p_reactionType);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_REACTION_JOB_TQ_CSA_H_
