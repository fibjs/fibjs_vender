#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_IC_CALLABLE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_IC_CALLABLE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=14&c=1
TNode<BoolT> IsMonomorphic_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_feedback, TNode<Object> p_target);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=18&c=1
TNode<BoolT> InSameNativeContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_lhs, TNode<Context> p_rhs);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=22&c=1
void TryInitializeAsMonomorphic_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_maybeTarget, TNode<FeedbackVector> p_feedbackVector, TNode<UintPtrT> p_slotId, compiler::CodeAssemblerLabel* label_TransitionToMegamorphic);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=45&c=1
void TransitionToMegamorphic_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FeedbackVector> p_feedbackVector, TNode<UintPtrT> p_slotId);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=52&c=1
TNode<BoolT> TaggedEqualPrototypeApplyFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_target);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=57&c=1
TNode<BoolT> FeedbackValueIsReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FeedbackVector> p_feedbackVector, TNode<UintPtrT> p_slotId);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=66&c=1
void SetCallFeedbackContent_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FeedbackVector> p_feedbackVector, TNode<UintPtrT> p_slotId, CallFeedbackContent p_callFeedbackContent);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=87&c=1
void CollectCallFeedback_0(compiler::CodeAssemblerState* state_, TNode<Object> p_maybeTarget, std::function<TNode<Object>()> p_maybeReceiver, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=166&c=1
void CollectInstanceOfFeedback_0(compiler::CodeAssemblerState* state_, TNode<Object> p_maybeTarget, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=199&c=1
TNode<BoolT> BothTaggedEqualArrayFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_first, TNode<Object> p_second);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=207&c=1
TNode<FeedbackVector> CastFeedbackVector_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_maybeFeedbackVector, UpdateFeedbackMode p_updateFeedbackMode, compiler::CodeAssemblerLabel* label_Fallback);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=223&c=1
void CollectConstructFeedback_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_target, TNode<Object> p_newTarget, TNode<HeapObject> p_maybeFeedbackVector, TNode<TaggedIndex> p_slotId, UpdateFeedbackMode p_updateFeedbackMode, compiler::CodeAssemblerLabel* label_ConstructGeneric, compiler::CodeAssemblerLabel* label_ConstructArray, compiler::TypedCodeAssemblerVariable<AllocationSite>* label_ConstructArray_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=30&c=10
TNode<BoolT> Is_JSBoundFunction_HeapObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=32&c=9
TNode<JSBoundFunction> UnsafeCast_JSBoundFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=60&c=38
TNode<Smi> Cast_Smi_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<MaybeObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=95&c=7
TNode<BoolT> Is_FeedbackVector_Undefined_OR_FeedbackVector_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=212&c=12
TNode<FeedbackVector> UnsafeCast_FeedbackVector_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=251&c=11
TNode<BoolT> Is_AllocationSite_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic-callable.tq?l=253&c=31
TNode<AllocationSite> UnsafeCast_AllocationSite_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_IC_CALLABLE_TQ_CSA_H_
