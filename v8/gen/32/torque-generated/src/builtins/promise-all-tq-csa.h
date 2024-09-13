#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ALL_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ALL_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=17&c=1
TNode<Context> CreatePromiseAllResolveElementContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<PromiseCapability> p_capability, TNode<NativeContext> p_nativeContext);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=41&c=1
TNode<JSFunction> CreatePromiseAllResolveElementFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_resolveElementContext, TNode<Smi> p_index, intptr_t p_resolveFunction);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=56&c=1
TNode<Context> CreatePromiseResolvingFunctionsContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Boolean> p_debugEvent, TNode<NativeContext> p_nativeContext);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=79&c=1
TNode<BoolT> IsPromiseThenLookupChainIntact_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Map> p_receiverMap);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=24&c=3
void InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_constexpr_IntegerLiteral_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, IntegerLiteral p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=29&c=3
void InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<PromiseCapability> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=34&c=3
void InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_EmptyFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<FixedArray> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=64&c=3
void InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_JSPromise_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSPromise> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=67&c=3
void InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_False_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<False> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=70&c=3
void InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_Boolean_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Boolean> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=84&c=33
TorqueStructReference_JSObject_0 NativeContextSlot_JSObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=380&c=10
TNode<Object> GeneratePromiseAll_PromiseAllResolveElementFunctor_PromiseAllRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_iterable, TorqueStructPromiseAllResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllRejectElementFunctor_0 p_createRejectElementFunctor, const char* p_message);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=389&c=10
TNode<Object> GeneratePromiseAll_PromiseAllSettledResolveElementFunctor_PromiseAllSettledRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_iterable, TorqueStructPromiseAllSettledResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllSettledRejectElementFunctor_0 p_createRejectElementFunctor, const char* p_message);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=364&c=12
TNode<Object> PerformPromiseAll_PromiseAllResolveElementFunctor_PromiseAllRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TorqueStructIteratorRecord p_iter, TNode<JSReceiver> p_constructor, TNode<PromiseCapability> p_capability, TNode<Object> p_promiseResolveFunction, TorqueStructPromiseAllResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllRejectElementFunctor_0 p_createRejectElementFunctor, compiler::CodeAssemblerLabel* label_Reject, compiler::TypedCodeAssemblerVariable<Object>* label_Reject_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=364&c=12
TNode<Object> PerformPromiseAll_PromiseAllSettledResolveElementFunctor_PromiseAllSettledRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TorqueStructIteratorRecord p_iter, TNode<JSReceiver> p_constructor, TNode<PromiseCapability> p_capability, TNode<Object> p_promiseResolveFunction, TorqueStructPromiseAllSettledResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllSettledRejectElementFunctor_0 p_createRejectElementFunctor, compiler::CodeAssemblerLabel* label_Reject, compiler::TypedCodeAssemblerVariable<Object>* label_Reject_parameter_0);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROMISE_ALL_TQ_CSA_H_
