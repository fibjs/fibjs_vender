#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-disposable-stack.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator-inl.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-element-closure-tq-csa.h"
#include "torque-generated/src/builtins/promise-any-tq-csa.h"
#include "torque-generated/src/builtins/promise-constructor-tq-csa.h"
#include "torque-generated/src/builtins/promise-jobs-tq-csa.h"
#include "torque-generated/src/builtins/promise-misc-tq-csa.h"
#include "torque-generated/src/builtins/promise-resolve-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=17&c=1
TNode<Context> CreatePromiseAllResolveElementContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<PromiseCapability> p_capability, TNode<NativeContext> p_nativeContext) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Context> tmp1;
  TNode<Context> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<FixedArray> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, PromiseBuiltins::PromiseAllResolveElementContextSlots::kPromiseAllResolveElementLength);
    tmp1 = AllocateSyntheticFunctionContext_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp0});
    tmp2 = (TNode<Context>{tmp1});
    tmp3 = kPromiseAllResolveElementRemainingSlot_0(state_);
    InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_constexpr_IntegerLiteral_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp3}, IntegerLiteral(false, 0x1ull));
    tmp4 = kPromiseAllResolveElementCapabilitySlot_0(state_);
    InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_PromiseCapability_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp4}, TNode<PromiseCapability>{p_capability});
    tmp5 = kPromiseAllResolveElementValuesSlot_0(state_);
    tmp6 = kEmptyFixedArray_0(state_);
    InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_EmptyFixedArray_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp5}, TNode<FixedArray>{tmp6});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Context>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=41&c=1
TNode<JSFunction> CreatePromiseAllResolveElementFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Context> p_resolveElementContext, TNode<Smi> p_index, intptr_t p_resolveFunction) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSFunction> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).AllocateRootFunctionWithContext(p_resolveFunction, TNode<Context>{p_resolveElementContext});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp0, tmp1}, p_index);
    ca_.Goto(&block14);
  }

    ca_.Bind(&block14);
  return TNode<JSFunction>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=56&c=1
TNode<Context> CreatePromiseResolvingFunctionsContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Boolean> p_debugEvent, TNode<NativeContext> p_nativeContext) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Context> tmp1;
  TNode<Context> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<False> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<BoolT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, PromiseBuiltins::PromiseResolvingFunctionContextSlot::kPromiseContextLength);
    tmp1 = AllocateSyntheticFunctionContext_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp0});
    tmp2 = (TNode<Context>{tmp1});
    tmp3 = kPromiseSlot_0(state_);
    InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_JSPromise_JSPromise_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp3}, TNode<JSPromise>{p_promise});
    tmp4 = kAlreadyResolvedSlot_0(state_);
    tmp5 = False_0(state_);
    InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_False_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp4}, TNode<False>{tmp5});
    tmp6 = kDebugEventSlot_0(state_);
    InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_Boolean_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp6}, TNode<Boolean>{p_debugEvent});
    tmp7 = FromConstexpr_intptr_constexpr_intptr_0(state_, Context::Field::MIN_CONTEXT_SLOTS);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp8});
    tmp10 = FromConstexpr_intptr_constexpr_intptr_0(state_, PromiseBuiltins::PromiseResolvingFunctionContextSlot::kPromiseContextLength);
    tmp11 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp9});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp11}, "static_assert(PromiseResolvingFunctionContextSlot::kPromiseContextLength ==\n      ContextSlot::MIN_CONTEXT_SLOTS + 3) at https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=73&c=3");
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Context>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=79&c=1
TNode<BoolT> IsPromiseThenLookupChainIntact_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Map> p_receiverMap) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = IsForceSlowPath_0(state_);
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).IsJSPromiseMap(TNode<Map>{p_receiverMap});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp4);
  }

  TNode<IntPtrT> tmp5;
  TNode<HeapObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<JSObject> tmp10;
  TNode<BoolT> tmp11;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp6 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_receiverMap, tmp5});
    tmp7 = PROMISE_PROTOTYPE_INDEX_0(state_);
    std::tie(tmp8, tmp9) = NativeContextSlot_JSObject_0(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<JSObject>(CodeStubAssembler::Reference{tmp8, tmp9});
    tmp11 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp6}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp12;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp12);
  }

  TNode<BoolT> tmp13;
  TNode<BoolT> tmp14;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp13 = CodeStubAssembler(state_).IsPromiseThenProtectorCellInvalid();
    tmp14 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp13});
    ca_.Goto(&block1, tmp14);
  }

  TNode<BoolT> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block8, phi_bb1_3);
  }

  TNode<BoolT> phi_bb8_3;
    ca_.Bind(&block8, &phi_bb8_3);
  return TNode<BoolT>{phi_bb8_3};
}

TF_BUILTIN(PromiseAll, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kIterable);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GeneratePromiseAll_PromiseAllResolveElementFunctor_PromiseAllRejectElementFunctor_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, TorqueStructPromiseAllResolveElementFunctor_0{}, TorqueStructPromiseAllRejectElementFunctor_0{}, "Promise.all");
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(PromiseAllSettled, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kIterable);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GeneratePromiseAll_PromiseAllSettledResolveElementFunctor_PromiseAllSettledRejectElementFunctor_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, TorqueStructPromiseAllSettledResolveElementFunctor_0{}, TorqueStructPromiseAllSettledRejectElementFunctor_0{}, "Promise.allSettled");
    CodeStubAssembler(state_).Return(tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=24&c=3
void InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_constexpr_IntegerLiteral_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, IntegerLiteral p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, p_value);
    std::tie(tmp1, tmp2, tmp3) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp3});
    tmp6 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp4}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp7 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10) = NewReference_Object_0(state_, TNode<Object>{tmp1}, TNode<IntPtrT>{tmp8}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp0);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=29&c=3
void InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<PromiseCapability> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=34&c=3
void InitContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_EmptyFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<FixedArray> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=64&c=3
void InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_JSPromise_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSPromise> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=67&c=3
void InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_False_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<False> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=70&c=3
void InitContextSlot_PromiseResolvingFunctionContext_PromiseResolvingFunctionContext_Boolean_Boolean_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Boolean> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=84&c=33
TorqueStructReference_JSObject_0 NativeContextSlot_JSObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = ContextSlot_NativeContext_NativeContext_JSObject_0(state_, TNode<NativeContext>{p_context}, TNode<IntPtrT>{p_index}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_JSObject_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=380&c=10
TNode<Object> GeneratePromiseAll_PromiseAllResolveElementFunctor_PromiseAllRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_iterable, TorqueStructPromiseAllResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllRejectElementFunctor_0 p_createRejectElementFunctor, const char* p_message) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<JSReceiver> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Cast_JSReceiver_1(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver}, &label2);
    ca_.Goto(&block4);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kCalledOnNonObject, p_message);
  }

  TNode<False> tmp3;
  TNode<PromiseCapability> tmp4;
  TNode<JSReceiver> tmp5;
  TNode<Object> tmp6;
      TNode<Object> tmp8;
  TNode<JSReceiver> tmp9;
  TNode<Object> tmp10;
      TNode<Object> tmp12;
  TNode<Object> tmp13;
    compiler::TypedCodeAssemblerVariable<Object> tmp15(&ca_);
      TNode<Object> tmp17;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = False_0(state_);
    tmp4 = ca_.CallBuiltin<PromiseCapability>(Builtin::kNewPromiseCapability, p_context, tmp1, tmp3);
    tmp5 = UnsafeCast_Constructor_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp1});
    compiler::CodeAssemblerExceptionHandlerLabel catch7__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch7__label);
    tmp6 = GetPromiseResolve_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{tmp0}, TNode<JSReceiver>{tmp5});
    }
    if (catch7__label.is_used()) {
      compiler::CodeAssemblerLabel catch7_skip(&ca_);
      ca_.Goto(&catch7_skip);
      ca_.Bind(&catch7__label, &tmp8);
      ca_.Goto(&block14);
      ca_.Bind(&catch7_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    std::tie(tmp9, tmp10) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{p_context}, TNode<Object>{p_iterable}).Flatten();
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block15);
      ca_.Bind(&catch11_skip);
    }
    compiler::CodeAssemblerLabel label14(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch16__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch16__label);
    tmp13 = PerformPromiseAll_PromiseAllResolveElementFunctor_PromiseAllRejectElementFunctor_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{tmp0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp9}, TNode<Object>{tmp10}}, TNode<JSReceiver>{tmp5}, TNode<PromiseCapability>{tmp4}, TNode<Object>{tmp6}, TorqueStructPromiseAllResolveElementFunctor_0{}, TorqueStructPromiseAllRejectElementFunctor_0{}, &label14, &tmp15);
    }
    if (catch16__label.is_used()) {
      compiler::CodeAssemblerLabel catch16_skip(&ca_);
      ca_.Goto(&catch16_skip);
      ca_.Bind(&catch16__label, &tmp17);
      ca_.Goto(&block18);
      ca_.Bind(&catch16_skip);
    }
    ca_.Goto(&block16);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block17);
    }
  }

  TNode<HeapObject> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp8, tmp18);
  }

  TNode<HeapObject> tmp19;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp19 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp12, tmp19);
  }

  TNode<HeapObject> tmp20;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp20 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp17, tmp20);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block11, tmp15.value());
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block1, tmp13);
  }

  TNode<Object> phi_bb13_7;
  TNode<HeapObject> phi_bb13_8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8);
    ca_.Goto(&block11, phi_bb13_7);
  }

  TNode<Object> phi_bb11_7;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<Object> tmp23;
  TNode<Undefined> tmp24;
  TNode<Object> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<HeapObject> tmp27;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp22 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp4, tmp21});
    tmp23 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp22});
    tmp24 = Undefined_0(state_);
    tmp25 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp23}, TNode<Object>{tmp24}, TNode<Object>{phi_bb11_7});
    tmp26 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp27 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp4, tmp26});
    ca_.Goto(&block1, tmp27);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block19);
  }

    ca_.Bind(&block19);
  return TNode<Object>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=389&c=10
TNode<Object> GeneratePromiseAll_PromiseAllSettledResolveElementFunctor_PromiseAllSettledRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_iterable, TorqueStructPromiseAllSettledResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllSettledRejectElementFunctor_0 p_createRejectElementFunctor, const char* p_message) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<JSReceiver> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Cast_JSReceiver_1(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver}, &label2);
    ca_.Goto(&block4);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kCalledOnNonObject, p_message);
  }

  TNode<False> tmp3;
  TNode<PromiseCapability> tmp4;
  TNode<JSReceiver> tmp5;
  TNode<Object> tmp6;
      TNode<Object> tmp8;
  TNode<JSReceiver> tmp9;
  TNode<Object> tmp10;
      TNode<Object> tmp12;
  TNode<Object> tmp13;
    compiler::TypedCodeAssemblerVariable<Object> tmp15(&ca_);
      TNode<Object> tmp17;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = False_0(state_);
    tmp4 = ca_.CallBuiltin<PromiseCapability>(Builtin::kNewPromiseCapability, p_context, tmp1, tmp3);
    tmp5 = UnsafeCast_Constructor_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp1});
    compiler::CodeAssemblerExceptionHandlerLabel catch7__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch7__label);
    tmp6 = GetPromiseResolve_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{tmp0}, TNode<JSReceiver>{tmp5});
    }
    if (catch7__label.is_used()) {
      compiler::CodeAssemblerLabel catch7_skip(&ca_);
      ca_.Goto(&catch7_skip);
      ca_.Bind(&catch7__label, &tmp8);
      ca_.Goto(&block14);
      ca_.Bind(&catch7_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    std::tie(tmp9, tmp10) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{p_context}, TNode<Object>{p_iterable}).Flatten();
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block15);
      ca_.Bind(&catch11_skip);
    }
    compiler::CodeAssemblerLabel label14(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch16__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch16__label);
    tmp13 = PerformPromiseAll_PromiseAllSettledResolveElementFunctor_PromiseAllSettledRejectElementFunctor_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{tmp0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp9}, TNode<Object>{tmp10}}, TNode<JSReceiver>{tmp5}, TNode<PromiseCapability>{tmp4}, TNode<Object>{tmp6}, TorqueStructPromiseAllSettledResolveElementFunctor_0{}, TorqueStructPromiseAllSettledRejectElementFunctor_0{}, &label14, &tmp15);
    }
    if (catch16__label.is_used()) {
      compiler::CodeAssemblerLabel catch16_skip(&ca_);
      ca_.Goto(&catch16_skip);
      ca_.Bind(&catch16__label, &tmp17);
      ca_.Goto(&block18);
      ca_.Bind(&catch16_skip);
    }
    ca_.Goto(&block16);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block17);
    }
  }

  TNode<HeapObject> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp8, tmp18);
  }

  TNode<HeapObject> tmp19;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp19 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp12, tmp19);
  }

  TNode<HeapObject> tmp20;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp20 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp17, tmp20);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block11, tmp15.value());
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block1, tmp13);
  }

  TNode<Object> phi_bb13_7;
  TNode<HeapObject> phi_bb13_8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8);
    ca_.Goto(&block11, phi_bb13_7);
  }

  TNode<Object> phi_bb11_7;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<Object> tmp23;
  TNode<Undefined> tmp24;
  TNode<Object> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<HeapObject> tmp27;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp22 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp4, tmp21});
    tmp23 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp22});
    tmp24 = Undefined_0(state_);
    tmp25 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp23}, TNode<Object>{tmp24}, TNode<Object>{phi_bb11_7});
    tmp26 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp27 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp4, tmp26});
    ca_.Goto(&block1, tmp27);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block19);
  }

    ca_.Bind(&block19);
  return TNode<Object>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=364&c=12
TNode<Object> PerformPromiseAll_PromiseAllResolveElementFunctor_PromiseAllRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TorqueStructIteratorRecord p_iter, TNode<JSReceiver> p_constructor, TNode<PromiseCapability> p_capability, TNode<Object> p_promiseResolveFunction, TorqueStructPromiseAllResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllRejectElementFunctor_0 p_createRejectElementFunctor, compiler::CodeAssemblerLabel* label_Reject, compiler::TypedCodeAssemblerVariable<Object>* label_Reject_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, HeapObject> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block30(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block39(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block40(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block44(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block54(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block55(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block57(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block58(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block60(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block61(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block62(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block65(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block69(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block70(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block63(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block71(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block72(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block73(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block77(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block79(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_capability, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_capability, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_capability, tmp4});
    tmp6 = CodeStubAssembler(state_).IsDebugActive();
    ca_.Branch(tmp6, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Symbol> tmp7;
  TNode<True> tmp8;
  TNode<Object> tmp9;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp7 = kPromiseForwardingHandlerSymbol_0(state_);
    tmp8 = True_0(state_);
    tmp9 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{p_context}, TNode<Object>{tmp5}, TNode<Object>{tmp7}, TNode<Object>{tmp8});
    ca_.Goto(&block4);
  }

  TNode<Context> tmp10;
  TNode<Smi> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
      TNode<Object> tmp16;
  TNode<Map> tmp17;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp10 = CreatePromiseAllResolveElementContext_0(state_, TNode<Context>{p_context}, TNode<PromiseCapability>{p_capability}, TNode<NativeContext>{p_nativeContext});
    tmp11 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = ITERATOR_RESULT_MAP_INDEX_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    std::tie(tmp13, tmp14) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp12}).Flatten();
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block9);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp13, tmp14});
    ca_.Goto(&block12, tmp11);
  }

  TNode<HeapObject> tmp18;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, tmp11, tmp16, tmp18);
  }

  TNode<Smi> phi_bb12_11;
  TNode<BoolT> tmp19;
      TNode<Object> tmp21;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block13, phi_bb12_11);
      ca_.Bind(&catch20_skip);
    }
    ca_.Branch(tmp19, &block10, std::vector<compiler::Node*>{phi_bb12_11}, &block11, std::vector<compiler::Node*>{phi_bb12_11});
  }

  TNode<Smi> phi_bb13_11;
  TNode<HeapObject> tmp22;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_11);
    tmp22 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb13_11, tmp21, tmp22);
  }

  TNode<Smi> phi_bb10_11;
  TNode<JSReceiver> tmp23;
      TNode<Object> tmp26;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_11);
    compiler::CodeAssemblerLabel label24(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch25__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch25__label);
    tmp23 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{p_iter.object}, TNode<Object>{p_iter.next}}, TNode<Map>{tmp17}, &label24);
    }
    if (catch25__label.is_used()) {
      compiler::CodeAssemblerLabel catch25_skip(&ca_);
      ca_.Goto(&catch25_skip);
      ca_.Bind(&catch25__label, &tmp26);
      ca_.Goto(&block20, phi_bb10_11);
      ca_.Bind(&catch25_skip);
    }
    ca_.Goto(&block18, phi_bb10_11);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block19, phi_bb10_11);
    }
  }

  TNode<Smi> phi_bb20_11;
  TNode<HeapObject> tmp27;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_11);
    tmp27 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block15, phi_bb20_11, tmp26, tmp27);
  }

  TNode<Smi> phi_bb19_11;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_11);
    ca_.Goto(&block5, phi_bb19_11);
  }

  TNode<Smi> phi_bb18_11;
  TNode<Object> tmp28;
      TNode<Object> tmp30;
  TNode<Smi> tmp31;
      TNode<Object> tmp33;
  TNode<BoolT> tmp34;
      TNode<Object> tmp36;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch29__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch29__label);
    tmp28 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{p_context}, TNode<JSReceiver>{tmp23}, TNode<Map>{tmp17});
    }
    if (catch29__label.is_used()) {
      compiler::CodeAssemblerLabel catch29_skip(&ca_);
      ca_.Goto(&catch29_skip);
      ca_.Bind(&catch29__label, &tmp30);
      ca_.Goto(&block21, phi_bb18_11);
      ca_.Bind(&catch29_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch32__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch32__label);
    tmp31 = FromConstexpr_Smi_constexpr_int31_0(state_, PropertyArray::HashField::kMax);
    }
    if (catch32__label.is_used()) {
      compiler::CodeAssemblerLabel catch32_skip(&ca_);
      ca_.Goto(&catch32_skip);
      ca_.Bind(&catch32__label, &tmp33);
      ca_.Goto(&block24, phi_bb18_11, phi_bb18_11, phi_bb18_11);
      ca_.Bind(&catch32_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch35__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch35__label);
    tmp34 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb18_11}, TNode<Smi>{tmp31});
    }
    if (catch35__label.is_used()) {
      compiler::CodeAssemblerLabel catch35_skip(&ca_);
      ca_.Goto(&catch35_skip);
      ca_.Bind(&catch35__label, &tmp36);
      ca_.Goto(&block25, phi_bb18_11, phi_bb18_11);
      ca_.Bind(&catch35_skip);
    }
    ca_.Branch(tmp34, &block22, std::vector<compiler::Node*>{phi_bb18_11}, &block23, std::vector<compiler::Node*>{phi_bb18_11});
  }

  TNode<Smi> phi_bb21_11;
  TNode<HeapObject> tmp37;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_11);
    tmp37 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block15, phi_bb21_11, tmp30, tmp37);
  }

  TNode<Smi> phi_bb15_11;
  TNode<Object> phi_bb15_14;
  TNode<HeapObject> phi_bb15_15;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_11, &phi_bb15_14, &phi_bb15_15);
    ca_.Goto(&block1, phi_bb15_14);
  }

  TNode<Smi> phi_bb24_11;
  TNode<Smi> phi_bb24_14;
  TNode<Smi> phi_bb24_15;
  TNode<HeapObject> tmp38;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_11, &phi_bb24_14, &phi_bb24_15);
    tmp38 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb24_11, tmp33, tmp38);
  }

  TNode<Smi> phi_bb25_11;
  TNode<Smi> phi_bb25_14;
  TNode<HeapObject> tmp39;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_11, &phi_bb25_14);
    tmp39 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb25_11, tmp36, tmp39);
  }

  TNode<Smi> phi_bb22_11;
  TNode<Object> tmp40;
      TNode<Object> tmp42;
      TNode<Object> tmp44;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch41__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch41__label);
    tmp40 = FromConstexpr_Object_constexpr_string_0(state_, "all");
    }
    if (catch41__label.is_used()) {
      compiler::CodeAssemblerLabel catch41_skip(&ca_);
      ca_.Goto(&catch41_skip);
      ca_.Bind(&catch41__label, &tmp42);
      ca_.Goto(&block26, phi_bb22_11);
      ca_.Bind(&catch41_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch43__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch43__label);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{p_context}, MessageTemplate::kTooManyElementsInPromiseCombinator, TNode<Object>{tmp40});
    }
    if (catch43__label.is_used()) {
      compiler::CodeAssemblerLabel catch43_skip(&ca_);
      ca_.Bind(&catch43__label, &tmp44);
      ca_.Goto(&block27, phi_bb22_11);
    }
  }

  TNode<Smi> phi_bb26_11;
  TNode<HeapObject> tmp45;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_11);
    tmp45 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb26_11, tmp42, tmp45);
  }

  TNode<Smi> phi_bb27_11;
  TNode<HeapObject> tmp46;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_11);
    tmp46 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb27_11, tmp44, tmp46);
  }

  TNode<Smi> phi_bb23_11;
  TNode<IntPtrT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
      TNode<Object> tmp51;
  TNode<Smi> tmp52;
  TNode<Smi> tmp53;
      TNode<Object> tmp55;
  TNode<Smi> tmp56;
      TNode<Object> tmp58;
  TNode<JSFunction> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<JSReceiver> tmp62;
  TNode<Undefined> tmp63;
  TNode<BoolT> tmp64;
      TNode<Object> tmp66;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_11);
    tmp47 = kPromiseAllResolveElementRemainingSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch50__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch50__label);
    std::tie(tmp48, tmp49) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{tmp10}, TNode<IntPtrT>{tmp47}).Flatten();
    }
    if (catch50__label.is_used()) {
      compiler::CodeAssemblerLabel catch50_skip(&ca_);
      ca_.Goto(&catch50_skip);
      ca_.Bind(&catch50__label, &tmp51);
      ca_.Goto(&block28, phi_bb23_11);
      ca_.Bind(&catch50_skip);
    }
    tmp52 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp48, tmp49});
    compiler::CodeAssemblerExceptionHandlerLabel catch54__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch54__label);
    tmp53 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch54__label.is_used()) {
      compiler::CodeAssemblerLabel catch54_skip(&ca_);
      ca_.Goto(&catch54_skip);
      ca_.Bind(&catch54__label, &tmp55);
      ca_.Goto(&block29, phi_bb23_11);
      ca_.Bind(&catch54_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch57__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch57__label);
    tmp56 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp52}, TNode<Smi>{tmp53});
    }
    if (catch57__label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      ca_.Bind(&catch57__label, &tmp58);
      ca_.Goto(&block30, phi_bb23_11);
      ca_.Bind(&catch57_skip);
    }
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp48, tmp49}, tmp56);
    tmp59 = CreatePromiseAllResolveElementFunction_0(state_, TNode<Context>{p_context}, TNode<Context>{tmp10}, TNode<Smi>{phi_bb23_11}, static_cast<intptr_t>(RootIndex::kPromiseAllResolveElementClosureSharedFun));
    tmp60 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp61 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_capability, tmp60});
    tmp62 = UnsafeCast_Callable_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp61});
    tmp63 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch65__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch65__label);
    tmp64 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{p_promiseResolveFunction}, TNode<HeapObject>{tmp63});
    }
    if (catch65__label.is_used()) {
      compiler::CodeAssemblerLabel catch65_skip(&ca_);
      ca_.Goto(&catch65_skip);
      ca_.Bind(&catch65__label, &tmp66);
      ca_.Goto(&block35, phi_bb23_11);
      ca_.Bind(&catch65_skip);
    }
    ca_.Branch(tmp64, &block36, std::vector<compiler::Node*>{phi_bb23_11}, &block37, std::vector<compiler::Node*>{phi_bb23_11});
  }

  TNode<Smi> phi_bb28_11;
  TNode<HeapObject> tmp67;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_11);
    tmp67 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb28_11, tmp51, tmp67);
  }

  TNode<Smi> phi_bb29_11;
  TNode<HeapObject> tmp68;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_11);
    tmp68 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb29_11, tmp55, tmp68);
  }

  TNode<Smi> phi_bb30_11;
  TNode<HeapObject> tmp69;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_11);
    tmp69 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb30_11, tmp58, tmp69);
  }

  TNode<Smi> phi_bb35_11;
  TNode<HeapObject> tmp70;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_11);
    tmp70 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb35_11, tmp66, tmp70);
  }

  TNode<Smi> phi_bb36_11;
  TNode<BoolT> tmp71;
      TNode<Object> tmp73;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch72__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch72__label);
    tmp71 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch72__label.is_used()) {
      compiler::CodeAssemblerLabel catch72_skip(&ca_);
      ca_.Goto(&catch72_skip);
      ca_.Bind(&catch72__label, &tmp73);
      ca_.Goto(&block39, phi_bb36_11);
      ca_.Bind(&catch72_skip);
    }
    ca_.Goto(&block38, phi_bb36_11, tmp71);
  }

  TNode<Smi> phi_bb39_11;
  TNode<HeapObject> tmp74;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_11);
    tmp74 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb39_11, tmp73, tmp74);
  }

  TNode<Smi> phi_bb37_11;
  TNode<BoolT> tmp75;
      TNode<Object> tmp77;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch76__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch76__label);
    tmp75 = CodeStubAssembler(state_).NeedsAnyPromiseHooks();
    }
    if (catch76__label.is_used()) {
      compiler::CodeAssemblerLabel catch76_skip(&ca_);
      ca_.Goto(&catch76_skip);
      ca_.Bind(&catch76__label, &tmp77);
      ca_.Goto(&block40, phi_bb37_11);
      ca_.Bind(&catch76_skip);
    }
    ca_.Goto(&block38, phi_bb37_11, tmp75);
  }

  TNode<Smi> phi_bb40_11;
  TNode<HeapObject> tmp78;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_11);
    tmp78 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb40_11, tmp77, tmp78);
  }

  TNode<Smi> phi_bb38_11;
  TNode<BoolT> phi_bb38_17;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_11, &phi_bb38_17);
    ca_.Branch(phi_bb38_17, &block41, std::vector<compiler::Node*>{phi_bb38_11}, &block42, std::vector<compiler::Node*>{phi_bb38_11});
  }

  TNode<Smi> phi_bb41_11;
  TNode<BoolT> tmp79;
      TNode<Object> tmp81;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch80__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch80__label);
    tmp79 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch80__label.is_used()) {
      compiler::CodeAssemblerLabel catch80_skip(&ca_);
      ca_.Goto(&catch80_skip);
      ca_.Bind(&catch80__label, &tmp81);
      ca_.Goto(&block44, phi_bb41_11);
      ca_.Bind(&catch80_skip);
    }
    ca_.Goto(&block43, phi_bb41_11, tmp79);
  }

  TNode<Smi> phi_bb44_11;
  TNode<HeapObject> tmp82;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_11);
    tmp82 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb44_11, tmp81, tmp82);
  }

  TNode<Smi> phi_bb42_11;
  TNode<BoolT> tmp83;
      TNode<Object> tmp85;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch84__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch84__label);
    tmp83 = CodeStubAssembler(state_).IsPromiseSpeciesProtectorCellInvalid();
    }
    if (catch84__label.is_used()) {
      compiler::CodeAssemblerLabel catch84_skip(&ca_);
      ca_.Goto(&catch84_skip);
      ca_.Bind(&catch84__label, &tmp85);
      ca_.Goto(&block45, phi_bb42_11);
      ca_.Bind(&catch84_skip);
    }
    ca_.Goto(&block43, phi_bb42_11, tmp83);
  }

  TNode<Smi> phi_bb45_11;
  TNode<HeapObject> tmp86;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_11);
    tmp86 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb45_11, tmp85, tmp86);
  }

  TNode<Smi> phi_bb43_11;
  TNode<BoolT> phi_bb43_17;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_11, &phi_bb43_17);
    ca_.Branch(phi_bb43_17, &block46, std::vector<compiler::Node*>{phi_bb43_11}, &block47, std::vector<compiler::Node*>{phi_bb43_11});
  }

  TNode<Smi> phi_bb46_11;
  TNode<BoolT> tmp87;
      TNode<Object> tmp89;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch88__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch88__label);
    tmp87 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch88__label.is_used()) {
      compiler::CodeAssemblerLabel catch88_skip(&ca_);
      ca_.Goto(&catch88_skip);
      ca_.Bind(&catch88__label, &tmp89);
      ca_.Goto(&block49, phi_bb46_11);
      ca_.Bind(&catch88_skip);
    }
    ca_.Goto(&block48, phi_bb46_11, tmp87);
  }

  TNode<Smi> phi_bb49_11;
  TNode<HeapObject> tmp90;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_11);
    tmp90 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb49_11, tmp89, tmp90);
  }

  TNode<Smi> phi_bb47_11;
  TNode<BoolT> tmp91;
      TNode<Object> tmp93;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch92__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch92__label);
    tmp91 = Is_Smi_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp28});
    }
    if (catch92__label.is_used()) {
      compiler::CodeAssemblerLabel catch92_skip(&ca_);
      ca_.Goto(&catch92_skip);
      ca_.Bind(&catch92__label, &tmp93);
      ca_.Goto(&block50, phi_bb47_11);
      ca_.Bind(&catch92_skip);
    }
    ca_.Goto(&block48, phi_bb47_11, tmp91);
  }

  TNode<Smi> phi_bb50_11;
  TNode<HeapObject> tmp94;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_11);
    tmp94 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb50_11, tmp93, tmp94);
  }

  TNode<Smi> phi_bb48_11;
  TNode<BoolT> phi_bb48_17;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_11, &phi_bb48_17);
    ca_.Branch(phi_bb48_17, &block51, std::vector<compiler::Node*>{phi_bb48_11}, &block52, std::vector<compiler::Node*>{phi_bb48_11});
  }

  TNode<Smi> phi_bb51_11;
  TNode<BoolT> tmp95;
      TNode<Object> tmp97;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch96__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch96__label);
    tmp95 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch96__label.is_used()) {
      compiler::CodeAssemblerLabel catch96_skip(&ca_);
      ca_.Goto(&catch96_skip);
      ca_.Bind(&catch96__label, &tmp97);
      ca_.Goto(&block54, phi_bb51_11);
      ca_.Bind(&catch96_skip);
    }
    ca_.Goto(&block53, phi_bb51_11, tmp95);
  }

  TNode<Smi> phi_bb54_11;
  TNode<HeapObject> tmp98;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_11);
    tmp98 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb54_11, tmp97, tmp98);
  }

  TNode<Smi> phi_bb52_11;
  TNode<HeapObject> tmp99;
      TNode<Object> tmp101;
  TNode<IntPtrT> tmp102;
      TNode<Object> tmp104;
  TNode<Map> tmp105;
  TNode<BoolT> tmp106;
      TNode<Object> tmp108;
  TNode<BoolT> tmp109;
      TNode<Object> tmp111;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch100__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch100__label);
    tmp99 = UnsafeCast_HeapObject_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp28});
    }
    if (catch100__label.is_used()) {
      compiler::CodeAssemblerLabel catch100_skip(&ca_);
      ca_.Goto(&catch100_skip);
      ca_.Bind(&catch100__label, &tmp101);
      ca_.Goto(&block55, phi_bb52_11);
      ca_.Bind(&catch100_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch103__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch103__label);
    tmp102 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    }
    if (catch103__label.is_used()) {
      compiler::CodeAssemblerLabel catch103_skip(&ca_);
      ca_.Goto(&catch103_skip);
      ca_.Bind(&catch103__label, &tmp104);
      ca_.Goto(&block56, phi_bb52_11);
      ca_.Bind(&catch103_skip);
    }
    tmp105 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp99, tmp102});
    compiler::CodeAssemblerExceptionHandlerLabel catch107__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch107__label);
    tmp106 = IsPromiseThenLookupChainIntact_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{p_nativeContext}, TNode<Map>{tmp105});
    }
    if (catch107__label.is_used()) {
      compiler::CodeAssemblerLabel catch107_skip(&ca_);
      ca_.Goto(&catch107_skip);
      ca_.Bind(&catch107__label, &tmp108);
      ca_.Goto(&block57, phi_bb52_11);
      ca_.Bind(&catch107_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch110__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch110__label);
    tmp109 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp106});
    }
    if (catch110__label.is_used()) {
      compiler::CodeAssemblerLabel catch110_skip(&ca_);
      ca_.Goto(&catch110_skip);
      ca_.Bind(&catch110__label, &tmp111);
      ca_.Goto(&block58, phi_bb52_11);
      ca_.Bind(&catch110_skip);
    }
    ca_.Goto(&block53, phi_bb52_11, tmp109);
  }

  TNode<Smi> phi_bb55_11;
  TNode<HeapObject> tmp112;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_11);
    tmp112 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb55_11, tmp101, tmp112);
  }

  TNode<Smi> phi_bb56_11;
  TNode<HeapObject> tmp113;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_11);
    tmp113 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb56_11, tmp104, tmp113);
  }

  TNode<Smi> phi_bb57_11;
  TNode<HeapObject> tmp114;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_11);
    tmp114 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb57_11, tmp108, tmp114);
  }

  TNode<Smi> phi_bb58_11;
  TNode<HeapObject> tmp115;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_11);
    tmp115 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb58_11, tmp111, tmp115);
  }

  TNode<Smi> phi_bb53_11;
  TNode<BoolT> phi_bb53_17;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_11, &phi_bb53_17);
    ca_.Branch(phi_bb53_17, &block33, std::vector<compiler::Node*>{phi_bb53_11}, &block34, std::vector<compiler::Node*>{phi_bb53_11});
  }

  TNode<Smi> phi_bb33_11;
  TNode<Object> tmp116;
      TNode<Object> tmp118;
  TNode<String> tmp119;
  TNode<Object> tmp120;
      TNode<Object> tmp122;
  TNode<Object> tmp123;
      TNode<Object> tmp125;
  TNode<BoolT> tmp126;
      TNode<Object> tmp128;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch117__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch117__label);
    tmp116 = CallResolve_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_constructor}, TNode<Object>{p_promiseResolveFunction}, TNode<Object>{tmp28});
    }
    if (catch117__label.is_used()) {
      compiler::CodeAssemblerLabel catch117_skip(&ca_);
      ca_.Goto(&catch117_skip);
      ca_.Bind(&catch117__label, &tmp118);
      ca_.Goto(&block60, phi_bb33_11);
      ca_.Bind(&catch117_skip);
    }
    tmp119 = kThenString_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch121__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch121__label);
    tmp120 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp116}, TNode<Object>{tmp119});
    }
    if (catch121__label.is_used()) {
      compiler::CodeAssemblerLabel catch121_skip(&ca_);
      ca_.Goto(&catch121_skip);
      ca_.Bind(&catch121__label, &tmp122);
      ca_.Goto(&block61, phi_bb33_11);
      ca_.Bind(&catch121_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch124__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch124__label);
    tmp123 = CodeStubAssembler(state_).Call(TNode<Context>{p_nativeContext}, TNode<Object>{tmp120}, TNode<Object>{tmp116}, TNode<Object>{tmp59}, TNode<Object>{tmp62});
    }
    if (catch124__label.is_used()) {
      compiler::CodeAssemblerLabel catch124_skip(&ca_);
      ca_.Goto(&catch124_skip);
      ca_.Bind(&catch124__label, &tmp125);
      ca_.Goto(&block62, phi_bb33_11);
      ca_.Bind(&catch124_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch127__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch127__label);
    tmp126 = CodeStubAssembler(state_).IsDebugActive();
    }
    if (catch127__label.is_used()) {
      compiler::CodeAssemblerLabel catch127_skip(&ca_);
      ca_.Goto(&catch127_skip);
      ca_.Bind(&catch127__label, &tmp128);
      ca_.Goto(&block65, phi_bb33_11);
      ca_.Bind(&catch127_skip);
    }
    ca_.Branch(tmp126, &block66, std::vector<compiler::Node*>{phi_bb33_11}, &block67, std::vector<compiler::Node*>{phi_bb33_11});
  }

  TNode<Smi> phi_bb60_11;
  TNode<HeapObject> tmp129;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_11);
    tmp129 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb60_11, tmp118, tmp129);
  }

  TNode<Smi> phi_bb61_11;
  TNode<HeapObject> tmp130;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_11);
    tmp130 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb61_11, tmp122, tmp130);
  }

  TNode<Smi> phi_bb62_11;
  TNode<HeapObject> tmp131;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_11);
    tmp131 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb62_11, tmp125, tmp131);
  }

  TNode<Smi> phi_bb65_11;
  TNode<HeapObject> tmp132;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_11);
    tmp132 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb65_11, tmp128, tmp132);
  }

  TNode<Smi> phi_bb66_11;
  TNode<BoolT> tmp133;
      TNode<Object> tmp135;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch134__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch134__label);
    tmp133 = Is_JSPromise_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp123});
    }
    if (catch134__label.is_used()) {
      compiler::CodeAssemblerLabel catch134_skip(&ca_);
      ca_.Goto(&catch134_skip);
      ca_.Bind(&catch134__label, &tmp135);
      ca_.Goto(&block69, phi_bb66_11);
      ca_.Bind(&catch134_skip);
    }
    ca_.Goto(&block68, phi_bb66_11, tmp133);
  }

  TNode<Smi> phi_bb69_11;
  TNode<HeapObject> tmp136;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_11);
    tmp136 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb69_11, tmp135, tmp136);
  }

  TNode<Smi> phi_bb67_11;
  TNode<BoolT> tmp137;
      TNode<Object> tmp139;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch138__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch138__label);
    tmp137 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    }
    if (catch138__label.is_used()) {
      compiler::CodeAssemblerLabel catch138_skip(&ca_);
      ca_.Goto(&catch138_skip);
      ca_.Bind(&catch138__label, &tmp139);
      ca_.Goto(&block70, phi_bb67_11);
      ca_.Bind(&catch138_skip);
    }
    ca_.Goto(&block68, phi_bb67_11, tmp137);
  }

  TNode<Smi> phi_bb70_11;
  TNode<HeapObject> tmp140;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_11);
    tmp140 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb70_11, tmp139, tmp140);
  }

  TNode<Smi> phi_bb68_11;
  TNode<BoolT> phi_bb68_20;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_11, &phi_bb68_20);
    ca_.Branch(phi_bb68_20, &block63, std::vector<compiler::Node*>{phi_bb68_11}, &block64, std::vector<compiler::Node*>{phi_bb68_11});
  }

  TNode<Smi> phi_bb63_11;
  TNode<Symbol> tmp141;
  TNode<Object> tmp142;
      TNode<Object> tmp144;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_11);
    tmp141 = kPromiseHandledBySymbol_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch143__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch143__label);
    tmp142 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{p_context}, TNode<Object>{tmp123}, TNode<Object>{tmp141}, TNode<Object>{tmp1});
    }
    if (catch143__label.is_used()) {
      compiler::CodeAssemblerLabel catch143_skip(&ca_);
      ca_.Goto(&catch143_skip);
      ca_.Bind(&catch143__label, &tmp144);
      ca_.Goto(&block71, phi_bb63_11);
      ca_.Bind(&catch143_skip);
    }
    ca_.Goto(&block64, phi_bb63_11);
  }

  TNode<Smi> phi_bb71_11;
  TNode<HeapObject> tmp145;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_11);
    tmp145 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb71_11, tmp144, tmp145);
  }

  TNode<Smi> phi_bb64_11;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_11);
    ca_.Goto(&block59, phi_bb64_11);
  }

  TNode<Smi> phi_bb34_11;
  TNode<JSPromise> tmp146;
      TNode<Object> tmp148;
  TNode<Undefined> tmp149;
      TNode<Object> tmp151;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch147__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch147__label);
    tmp146 = UnsafeCast_JSPromise_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp28});
    }
    if (catch147__label.is_used()) {
      compiler::CodeAssemblerLabel catch147_skip(&ca_);
      ca_.Goto(&catch147_skip);
      ca_.Bind(&catch147__label, &tmp148);
      ca_.Goto(&block72, phi_bb34_11);
      ca_.Bind(&catch147_skip);
    }
    tmp149 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch150__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch150__label);
    PerformPromiseThenImpl_0(state_, TNode<Context>{p_context}, TNode<JSPromise>{tmp146}, TNode<HeapObject>{tmp59}, TNode<HeapObject>{tmp62}, TNode<HeapObject>{tmp149});
    }
    if (catch150__label.is_used()) {
      compiler::CodeAssemblerLabel catch150_skip(&ca_);
      ca_.Goto(&catch150_skip);
      ca_.Bind(&catch150__label, &tmp151);
      ca_.Goto(&block73, phi_bb34_11);
      ca_.Bind(&catch150_skip);
    }
    ca_.Goto(&block59, phi_bb34_11);
  }

  TNode<Smi> phi_bb72_11;
  TNode<HeapObject> tmp152;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_11);
    tmp152 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb72_11, tmp148, tmp152);
  }

  TNode<Smi> phi_bb73_11;
  TNode<HeapObject> tmp153;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_11);
    tmp153 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb73_11, tmp151, tmp153);
  }

  TNode<Smi> phi_bb59_11;
  TNode<Smi> tmp154;
      TNode<Object> tmp156;
  TNode<Smi> tmp157;
      TNode<Object> tmp159;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch155__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch155__label);
    tmp154 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch155__label.is_used()) {
      compiler::CodeAssemblerLabel catch155_skip(&ca_);
      ca_.Goto(&catch155_skip);
      ca_.Bind(&catch155__label, &tmp156);
      ca_.Goto(&block74, phi_bb59_11, phi_bb59_11, phi_bb59_11);
      ca_.Bind(&catch155_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch158__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch158__label);
    tmp157 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb59_11}, TNode<Smi>{tmp154});
    }
    if (catch158__label.is_used()) {
      compiler::CodeAssemblerLabel catch158_skip(&ca_);
      ca_.Goto(&catch158_skip);
      ca_.Bind(&catch158__label, &tmp159);
      ca_.Goto(&block75, phi_bb59_11, phi_bb59_11);
      ca_.Bind(&catch158_skip);
    }
    ca_.Goto(&block12, tmp157);
  }

  TNode<Smi> phi_bb74_11;
  TNode<Smi> phi_bb74_16;
  TNode<Smi> phi_bb74_17;
  TNode<HeapObject> tmp160;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_11, &phi_bb74_16, &phi_bb74_17);
    tmp160 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb74_11, tmp156, tmp160);
  }

  TNode<Smi> phi_bb75_11;
  TNode<Smi> phi_bb75_16;
  TNode<HeapObject> tmp161;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_11, &phi_bb75_16);
    tmp161 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb75_11, tmp159, tmp161);
  }

  TNode<Smi> phi_bb11_11;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_11);
    ca_.Goto(&block5, phi_bb11_11);
  }

  TNode<Smi> phi_bb8_11;
  TNode<Object> phi_bb8_12;
  TNode<HeapObject> phi_bb8_13;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_11, &phi_bb8_12, &phi_bb8_13);
    IteratorCloseOnException_0(state_, TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{p_iter.object}, TNode<Object>{p_iter.next}});
    ca_.Goto(&block1, phi_bb8_12);
  }

  TNode<Smi> phi_bb5_11;
  TNode<IntPtrT> tmp162;
  TNode<Object> tmp163;
  TNode<IntPtrT> tmp164;
  TNode<Smi> tmp165;
  TNode<Smi> tmp166;
  TNode<Smi> tmp167;
  TNode<Smi> tmp168;
  TNode<BoolT> tmp169;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_11);
    tmp162 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp163, tmp164) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{tmp10}, TNode<IntPtrT>{tmp162}).Flatten();
    tmp165 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp163, tmp164});
    tmp166 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp167 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp165}, TNode<Smi>{tmp166});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp163, tmp164}, tmp167);
    tmp168 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp169 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp167}, TNode<Smi>{tmp168});
    ca_.Branch(tmp169, &block76, std::vector<compiler::Node*>{phi_bb5_11}, &block77, std::vector<compiler::Node*>{phi_bb5_11});
  }

  TNode<Smi> phi_bb77_11;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-all.tq", 288});
      CodeStubAssembler(state_).FailAssert("Torque assert 'remainingElementsCount >= 0' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb76_11;
  TNode<IntPtrT> tmp170;
  TNode<Object> tmp171;
  TNode<IntPtrT> tmp172;
  TNode<FixedArray> tmp173;
  TNode<Smi> tmp174;
  TNode<BoolT> tmp175;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_11);
    tmp170 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp171, tmp172) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{tmp10}, TNode<IntPtrT>{tmp170}).Flatten();
    tmp173 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp171, tmp172});
    tmp174 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp175 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp167}, TNode<Smi>{tmp174});
    ca_.Branch(tmp175, &block78, std::vector<compiler::Node*>{phi_bb76_11}, &block79, std::vector<compiler::Node*>{phi_bb76_11});
  }

  TNode<Smi> phi_bb78_11;
  TNode<IntPtrT> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<IntPtrT> tmp179;
  TNode<BoolT> tmp180;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_11);
    tmp176 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{phi_bb78_11});
    tmp177 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp178 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp176}, TNode<IntPtrT>{tmp177});
    tmp179 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp173});
    tmp180 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp179}, TNode<IntPtrT>{tmp178});
    ca_.Branch(tmp180, &block81, std::vector<compiler::Node*>{phi_bb78_11}, &block82, std::vector<compiler::Node*>{phi_bb78_11});
  }

  TNode<Smi> phi_bb81_11;
  TNode<Hole> tmp181;
  TNode<IntPtrT> tmp182;
  TNode<FixedArray> tmp183;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_11);
    tmp181 = PromiseHole_0(state_);
    tmp182 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp183 = ExtractFixedArray_0(state_, TNode<FixedArray>{tmp173}, TNode<IntPtrT>{tmp182}, TNode<IntPtrT>{tmp179}, TNode<IntPtrT>{tmp178}, TNode<Hole>{tmp181});
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp171, tmp172}, tmp183);
    ca_.Goto(&block82, phi_bb81_11);
  }

  TNode<Smi> phi_bb82_11;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_11);
    ca_.Goto(&block80, phi_bb82_11);
  }

  TNode<Smi> phi_bb79_11;
  TNode<IntPtrT> tmp184;
  TNode<Object> tmp185;
  TNode<IntPtrT> tmp186;
  TNode<Map> tmp187;
  TNode<FixedArray> tmp188;
  TNode<JSArray> tmp189;
  TNode<Object> tmp190;
  TNode<Undefined> tmp191;
  TNode<Object> tmp192;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_11);
    tmp184 = JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(state_);
    std::tie(tmp185, tmp186) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp184}).Flatten();
    tmp187 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp185, tmp186});
    tmp188 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp171, tmp172}, tmp188);
    tmp189 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp187}, TNode<FixedArrayBase>{tmp173});
    tmp190 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp3});
    tmp191 = Undefined_0(state_);
    tmp192 = CodeStubAssembler(state_).Call(TNode<Context>{p_nativeContext}, TNode<Object>{tmp190}, TNode<Object>{tmp191}, TNode<Object>{tmp189});
    ca_.Goto(&block80, phi_bb79_11);
  }

  TNode<Smi> phi_bb80_11;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_11);
    ca_.Goto(&block83);
  }

  TNode<Object> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    *label_Reject_parameter_0 = phi_bb1_0;
    ca_.Goto(label_Reject);
  }

    ca_.Bind(&block83);
  return TNode<Object>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=364&c=12
TNode<Object> PerformPromiseAll_PromiseAllSettledResolveElementFunctor_PromiseAllSettledRejectElementFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TorqueStructIteratorRecord p_iter, TNode<JSReceiver> p_constructor, TNode<PromiseCapability> p_capability, TNode<Object> p_promiseResolveFunction, TorqueStructPromiseAllSettledResolveElementFunctor_0 p_createResolveElementFunctor, TorqueStructPromiseAllSettledRejectElementFunctor_0 p_createRejectElementFunctor, compiler::CodeAssemblerLabel* label_Reject, compiler::TypedCodeAssemblerVariable<Object>* label_Reject_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, HeapObject> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block30(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block39(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block40(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block44(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block54(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block55(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block57(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block58(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block60(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block61(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block62(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block65(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block69(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block70(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block63(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block71(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block72(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block73(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block77(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block79(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_capability, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_capability, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_capability, tmp4});
    tmp6 = CodeStubAssembler(state_).IsDebugActive();
    ca_.Branch(tmp6, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Symbol> tmp7;
  TNode<True> tmp8;
  TNode<Object> tmp9;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp7 = kPromiseForwardingHandlerSymbol_0(state_);
    tmp8 = True_0(state_);
    tmp9 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{p_context}, TNode<Object>{tmp5}, TNode<Object>{tmp7}, TNode<Object>{tmp8});
    ca_.Goto(&block4);
  }

  TNode<Context> tmp10;
  TNode<Smi> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
      TNode<Object> tmp16;
  TNode<Map> tmp17;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp10 = CreatePromiseAllResolveElementContext_0(state_, TNode<Context>{p_context}, TNode<PromiseCapability>{p_capability}, TNode<NativeContext>{p_nativeContext});
    tmp11 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = ITERATOR_RESULT_MAP_INDEX_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    std::tie(tmp13, tmp14) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp12}).Flatten();
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block9);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp13, tmp14});
    ca_.Goto(&block12, tmp11);
  }

  TNode<HeapObject> tmp18;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, tmp11, tmp16, tmp18);
  }

  TNode<Smi> phi_bb12_11;
  TNode<BoolT> tmp19;
      TNode<Object> tmp21;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block13, phi_bb12_11);
      ca_.Bind(&catch20_skip);
    }
    ca_.Branch(tmp19, &block10, std::vector<compiler::Node*>{phi_bb12_11}, &block11, std::vector<compiler::Node*>{phi_bb12_11});
  }

  TNode<Smi> phi_bb13_11;
  TNode<HeapObject> tmp22;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_11);
    tmp22 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb13_11, tmp21, tmp22);
  }

  TNode<Smi> phi_bb10_11;
  TNode<JSReceiver> tmp23;
      TNode<Object> tmp26;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_11);
    compiler::CodeAssemblerLabel label24(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch25__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch25__label);
    tmp23 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{p_iter.object}, TNode<Object>{p_iter.next}}, TNode<Map>{tmp17}, &label24);
    }
    if (catch25__label.is_used()) {
      compiler::CodeAssemblerLabel catch25_skip(&ca_);
      ca_.Goto(&catch25_skip);
      ca_.Bind(&catch25__label, &tmp26);
      ca_.Goto(&block20, phi_bb10_11);
      ca_.Bind(&catch25_skip);
    }
    ca_.Goto(&block18, phi_bb10_11);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block19, phi_bb10_11);
    }
  }

  TNode<Smi> phi_bb20_11;
  TNode<HeapObject> tmp27;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_11);
    tmp27 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block15, phi_bb20_11, tmp26, tmp27);
  }

  TNode<Smi> phi_bb19_11;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_11);
    ca_.Goto(&block5, phi_bb19_11);
  }

  TNode<Smi> phi_bb18_11;
  TNode<Object> tmp28;
      TNode<Object> tmp30;
  TNode<Smi> tmp31;
      TNode<Object> tmp33;
  TNode<BoolT> tmp34;
      TNode<Object> tmp36;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch29__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch29__label);
    tmp28 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{p_context}, TNode<JSReceiver>{tmp23}, TNode<Map>{tmp17});
    }
    if (catch29__label.is_used()) {
      compiler::CodeAssemblerLabel catch29_skip(&ca_);
      ca_.Goto(&catch29_skip);
      ca_.Bind(&catch29__label, &tmp30);
      ca_.Goto(&block21, phi_bb18_11);
      ca_.Bind(&catch29_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch32__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch32__label);
    tmp31 = FromConstexpr_Smi_constexpr_int31_0(state_, PropertyArray::HashField::kMax);
    }
    if (catch32__label.is_used()) {
      compiler::CodeAssemblerLabel catch32_skip(&ca_);
      ca_.Goto(&catch32_skip);
      ca_.Bind(&catch32__label, &tmp33);
      ca_.Goto(&block24, phi_bb18_11, phi_bb18_11, phi_bb18_11);
      ca_.Bind(&catch32_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch35__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch35__label);
    tmp34 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb18_11}, TNode<Smi>{tmp31});
    }
    if (catch35__label.is_used()) {
      compiler::CodeAssemblerLabel catch35_skip(&ca_);
      ca_.Goto(&catch35_skip);
      ca_.Bind(&catch35__label, &tmp36);
      ca_.Goto(&block25, phi_bb18_11, phi_bb18_11);
      ca_.Bind(&catch35_skip);
    }
    ca_.Branch(tmp34, &block22, std::vector<compiler::Node*>{phi_bb18_11}, &block23, std::vector<compiler::Node*>{phi_bb18_11});
  }

  TNode<Smi> phi_bb21_11;
  TNode<HeapObject> tmp37;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_11);
    tmp37 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block15, phi_bb21_11, tmp30, tmp37);
  }

  TNode<Smi> phi_bb15_11;
  TNode<Object> phi_bb15_14;
  TNode<HeapObject> phi_bb15_15;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_11, &phi_bb15_14, &phi_bb15_15);
    ca_.Goto(&block1, phi_bb15_14);
  }

  TNode<Smi> phi_bb24_11;
  TNode<Smi> phi_bb24_14;
  TNode<Smi> phi_bb24_15;
  TNode<HeapObject> tmp38;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_11, &phi_bb24_14, &phi_bb24_15);
    tmp38 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb24_11, tmp33, tmp38);
  }

  TNode<Smi> phi_bb25_11;
  TNode<Smi> phi_bb25_14;
  TNode<HeapObject> tmp39;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_11, &phi_bb25_14);
    tmp39 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb25_11, tmp36, tmp39);
  }

  TNode<Smi> phi_bb22_11;
  TNode<Object> tmp40;
      TNode<Object> tmp42;
      TNode<Object> tmp44;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch41__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch41__label);
    tmp40 = FromConstexpr_Object_constexpr_string_0(state_, "all");
    }
    if (catch41__label.is_used()) {
      compiler::CodeAssemblerLabel catch41_skip(&ca_);
      ca_.Goto(&catch41_skip);
      ca_.Bind(&catch41__label, &tmp42);
      ca_.Goto(&block26, phi_bb22_11);
      ca_.Bind(&catch41_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch43__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch43__label);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{p_context}, MessageTemplate::kTooManyElementsInPromiseCombinator, TNode<Object>{tmp40});
    }
    if (catch43__label.is_used()) {
      compiler::CodeAssemblerLabel catch43_skip(&ca_);
      ca_.Bind(&catch43__label, &tmp44);
      ca_.Goto(&block27, phi_bb22_11);
    }
  }

  TNode<Smi> phi_bb26_11;
  TNode<HeapObject> tmp45;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_11);
    tmp45 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb26_11, tmp42, tmp45);
  }

  TNode<Smi> phi_bb27_11;
  TNode<HeapObject> tmp46;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_11);
    tmp46 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb27_11, tmp44, tmp46);
  }

  TNode<Smi> phi_bb23_11;
  TNode<IntPtrT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
      TNode<Object> tmp51;
  TNode<Smi> tmp52;
  TNode<Smi> tmp53;
      TNode<Object> tmp55;
  TNode<Smi> tmp56;
      TNode<Object> tmp58;
  TNode<JSFunction> tmp59;
  TNode<JSFunction> tmp60;
  TNode<Undefined> tmp61;
  TNode<BoolT> tmp62;
      TNode<Object> tmp64;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_11);
    tmp47 = kPromiseAllResolveElementRemainingSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch50__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch50__label);
    std::tie(tmp48, tmp49) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{tmp10}, TNode<IntPtrT>{tmp47}).Flatten();
    }
    if (catch50__label.is_used()) {
      compiler::CodeAssemblerLabel catch50_skip(&ca_);
      ca_.Goto(&catch50_skip);
      ca_.Bind(&catch50__label, &tmp51);
      ca_.Goto(&block28, phi_bb23_11);
      ca_.Bind(&catch50_skip);
    }
    tmp52 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp48, tmp49});
    compiler::CodeAssemblerExceptionHandlerLabel catch54__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch54__label);
    tmp53 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch54__label.is_used()) {
      compiler::CodeAssemblerLabel catch54_skip(&ca_);
      ca_.Goto(&catch54_skip);
      ca_.Bind(&catch54__label, &tmp55);
      ca_.Goto(&block29, phi_bb23_11);
      ca_.Bind(&catch54_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch57__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch57__label);
    tmp56 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp52}, TNode<Smi>{tmp53});
    }
    if (catch57__label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      ca_.Bind(&catch57__label, &tmp58);
      ca_.Goto(&block30, phi_bb23_11);
      ca_.Bind(&catch57_skip);
    }
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp48, tmp49}, tmp56);
    tmp59 = CreatePromiseAllResolveElementFunction_0(state_, TNode<Context>{p_context}, TNode<Context>{tmp10}, TNode<Smi>{phi_bb23_11}, static_cast<intptr_t>(RootIndex::kPromiseAllSettledResolveElementClosureSharedFun));
    tmp60 = CreatePromiseAllResolveElementFunction_0(state_, TNode<Context>{p_context}, TNode<Context>{tmp10}, TNode<Smi>{phi_bb23_11}, static_cast<intptr_t>(RootIndex::kPromiseAllSettledRejectElementClosureSharedFun));
    tmp61 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch63__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch63__label);
    tmp62 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{p_promiseResolveFunction}, TNode<HeapObject>{tmp61});
    }
    if (catch63__label.is_used()) {
      compiler::CodeAssemblerLabel catch63_skip(&ca_);
      ca_.Goto(&catch63_skip);
      ca_.Bind(&catch63__label, &tmp64);
      ca_.Goto(&block35, phi_bb23_11);
      ca_.Bind(&catch63_skip);
    }
    ca_.Branch(tmp62, &block36, std::vector<compiler::Node*>{phi_bb23_11}, &block37, std::vector<compiler::Node*>{phi_bb23_11});
  }

  TNode<Smi> phi_bb28_11;
  TNode<HeapObject> tmp65;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_11);
    tmp65 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb28_11, tmp51, tmp65);
  }

  TNode<Smi> phi_bb29_11;
  TNode<HeapObject> tmp66;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_11);
    tmp66 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb29_11, tmp55, tmp66);
  }

  TNode<Smi> phi_bb30_11;
  TNode<HeapObject> tmp67;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_11);
    tmp67 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb30_11, tmp58, tmp67);
  }

  TNode<Smi> phi_bb35_11;
  TNode<HeapObject> tmp68;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_11);
    tmp68 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb35_11, tmp64, tmp68);
  }

  TNode<Smi> phi_bb36_11;
  TNode<BoolT> tmp69;
      TNode<Object> tmp71;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch70__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch70__label);
    tmp69 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch70__label.is_used()) {
      compiler::CodeAssemblerLabel catch70_skip(&ca_);
      ca_.Goto(&catch70_skip);
      ca_.Bind(&catch70__label, &tmp71);
      ca_.Goto(&block39, phi_bb36_11);
      ca_.Bind(&catch70_skip);
    }
    ca_.Goto(&block38, phi_bb36_11, tmp69);
  }

  TNode<Smi> phi_bb39_11;
  TNode<HeapObject> tmp72;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_11);
    tmp72 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb39_11, tmp71, tmp72);
  }

  TNode<Smi> phi_bb37_11;
  TNode<BoolT> tmp73;
      TNode<Object> tmp75;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch74__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch74__label);
    tmp73 = CodeStubAssembler(state_).NeedsAnyPromiseHooks();
    }
    if (catch74__label.is_used()) {
      compiler::CodeAssemblerLabel catch74_skip(&ca_);
      ca_.Goto(&catch74_skip);
      ca_.Bind(&catch74__label, &tmp75);
      ca_.Goto(&block40, phi_bb37_11);
      ca_.Bind(&catch74_skip);
    }
    ca_.Goto(&block38, phi_bb37_11, tmp73);
  }

  TNode<Smi> phi_bb40_11;
  TNode<HeapObject> tmp76;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_11);
    tmp76 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb40_11, tmp75, tmp76);
  }

  TNode<Smi> phi_bb38_11;
  TNode<BoolT> phi_bb38_17;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_11, &phi_bb38_17);
    ca_.Branch(phi_bb38_17, &block41, std::vector<compiler::Node*>{phi_bb38_11}, &block42, std::vector<compiler::Node*>{phi_bb38_11});
  }

  TNode<Smi> phi_bb41_11;
  TNode<BoolT> tmp77;
      TNode<Object> tmp79;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch78__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch78__label);
    tmp77 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch78__label.is_used()) {
      compiler::CodeAssemblerLabel catch78_skip(&ca_);
      ca_.Goto(&catch78_skip);
      ca_.Bind(&catch78__label, &tmp79);
      ca_.Goto(&block44, phi_bb41_11);
      ca_.Bind(&catch78_skip);
    }
    ca_.Goto(&block43, phi_bb41_11, tmp77);
  }

  TNode<Smi> phi_bb44_11;
  TNode<HeapObject> tmp80;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_11);
    tmp80 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb44_11, tmp79, tmp80);
  }

  TNode<Smi> phi_bb42_11;
  TNode<BoolT> tmp81;
      TNode<Object> tmp83;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch82__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch82__label);
    tmp81 = CodeStubAssembler(state_).IsPromiseSpeciesProtectorCellInvalid();
    }
    if (catch82__label.is_used()) {
      compiler::CodeAssemblerLabel catch82_skip(&ca_);
      ca_.Goto(&catch82_skip);
      ca_.Bind(&catch82__label, &tmp83);
      ca_.Goto(&block45, phi_bb42_11);
      ca_.Bind(&catch82_skip);
    }
    ca_.Goto(&block43, phi_bb42_11, tmp81);
  }

  TNode<Smi> phi_bb45_11;
  TNode<HeapObject> tmp84;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_11);
    tmp84 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb45_11, tmp83, tmp84);
  }

  TNode<Smi> phi_bb43_11;
  TNode<BoolT> phi_bb43_17;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_11, &phi_bb43_17);
    ca_.Branch(phi_bb43_17, &block46, std::vector<compiler::Node*>{phi_bb43_11}, &block47, std::vector<compiler::Node*>{phi_bb43_11});
  }

  TNode<Smi> phi_bb46_11;
  TNode<BoolT> tmp85;
      TNode<Object> tmp87;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch86__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch86__label);
    tmp85 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch86__label.is_used()) {
      compiler::CodeAssemblerLabel catch86_skip(&ca_);
      ca_.Goto(&catch86_skip);
      ca_.Bind(&catch86__label, &tmp87);
      ca_.Goto(&block49, phi_bb46_11);
      ca_.Bind(&catch86_skip);
    }
    ca_.Goto(&block48, phi_bb46_11, tmp85);
  }

  TNode<Smi> phi_bb49_11;
  TNode<HeapObject> tmp88;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_11);
    tmp88 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb49_11, tmp87, tmp88);
  }

  TNode<Smi> phi_bb47_11;
  TNode<BoolT> tmp89;
      TNode<Object> tmp91;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch90__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch90__label);
    tmp89 = Is_Smi_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp28});
    }
    if (catch90__label.is_used()) {
      compiler::CodeAssemblerLabel catch90_skip(&ca_);
      ca_.Goto(&catch90_skip);
      ca_.Bind(&catch90__label, &tmp91);
      ca_.Goto(&block50, phi_bb47_11);
      ca_.Bind(&catch90_skip);
    }
    ca_.Goto(&block48, phi_bb47_11, tmp89);
  }

  TNode<Smi> phi_bb50_11;
  TNode<HeapObject> tmp92;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_11);
    tmp92 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb50_11, tmp91, tmp92);
  }

  TNode<Smi> phi_bb48_11;
  TNode<BoolT> phi_bb48_17;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_11, &phi_bb48_17);
    ca_.Branch(phi_bb48_17, &block51, std::vector<compiler::Node*>{phi_bb48_11}, &block52, std::vector<compiler::Node*>{phi_bb48_11});
  }

  TNode<Smi> phi_bb51_11;
  TNode<BoolT> tmp93;
      TNode<Object> tmp95;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch94__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch94__label);
    tmp93 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch94__label.is_used()) {
      compiler::CodeAssemblerLabel catch94_skip(&ca_);
      ca_.Goto(&catch94_skip);
      ca_.Bind(&catch94__label, &tmp95);
      ca_.Goto(&block54, phi_bb51_11);
      ca_.Bind(&catch94_skip);
    }
    ca_.Goto(&block53, phi_bb51_11, tmp93);
  }

  TNode<Smi> phi_bb54_11;
  TNode<HeapObject> tmp96;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_11);
    tmp96 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb54_11, tmp95, tmp96);
  }

  TNode<Smi> phi_bb52_11;
  TNode<HeapObject> tmp97;
      TNode<Object> tmp99;
  TNode<IntPtrT> tmp100;
      TNode<Object> tmp102;
  TNode<Map> tmp103;
  TNode<BoolT> tmp104;
      TNode<Object> tmp106;
  TNode<BoolT> tmp107;
      TNode<Object> tmp109;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch98__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch98__label);
    tmp97 = UnsafeCast_HeapObject_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp28});
    }
    if (catch98__label.is_used()) {
      compiler::CodeAssemblerLabel catch98_skip(&ca_);
      ca_.Goto(&catch98_skip);
      ca_.Bind(&catch98__label, &tmp99);
      ca_.Goto(&block55, phi_bb52_11);
      ca_.Bind(&catch98_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch101__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch101__label);
    tmp100 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    }
    if (catch101__label.is_used()) {
      compiler::CodeAssemblerLabel catch101_skip(&ca_);
      ca_.Goto(&catch101_skip);
      ca_.Bind(&catch101__label, &tmp102);
      ca_.Goto(&block56, phi_bb52_11);
      ca_.Bind(&catch101_skip);
    }
    tmp103 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp97, tmp100});
    compiler::CodeAssemblerExceptionHandlerLabel catch105__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch105__label);
    tmp104 = IsPromiseThenLookupChainIntact_0(state_, TNode<Context>{p_context}, TNode<NativeContext>{p_nativeContext}, TNode<Map>{tmp103});
    }
    if (catch105__label.is_used()) {
      compiler::CodeAssemblerLabel catch105_skip(&ca_);
      ca_.Goto(&catch105_skip);
      ca_.Bind(&catch105__label, &tmp106);
      ca_.Goto(&block57, phi_bb52_11);
      ca_.Bind(&catch105_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch108__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch108__label);
    tmp107 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp104});
    }
    if (catch108__label.is_used()) {
      compiler::CodeAssemblerLabel catch108_skip(&ca_);
      ca_.Goto(&catch108_skip);
      ca_.Bind(&catch108__label, &tmp109);
      ca_.Goto(&block58, phi_bb52_11);
      ca_.Bind(&catch108_skip);
    }
    ca_.Goto(&block53, phi_bb52_11, tmp107);
  }

  TNode<Smi> phi_bb55_11;
  TNode<HeapObject> tmp110;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_11);
    tmp110 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb55_11, tmp99, tmp110);
  }

  TNode<Smi> phi_bb56_11;
  TNode<HeapObject> tmp111;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_11);
    tmp111 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb56_11, tmp102, tmp111);
  }

  TNode<Smi> phi_bb57_11;
  TNode<HeapObject> tmp112;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_11);
    tmp112 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb57_11, tmp106, tmp112);
  }

  TNode<Smi> phi_bb58_11;
  TNode<HeapObject> tmp113;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_11);
    tmp113 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb58_11, tmp109, tmp113);
  }

  TNode<Smi> phi_bb53_11;
  TNode<BoolT> phi_bb53_17;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_11, &phi_bb53_17);
    ca_.Branch(phi_bb53_17, &block33, std::vector<compiler::Node*>{phi_bb53_11}, &block34, std::vector<compiler::Node*>{phi_bb53_11});
  }

  TNode<Smi> phi_bb33_11;
  TNode<Object> tmp114;
      TNode<Object> tmp116;
  TNode<String> tmp117;
  TNode<Object> tmp118;
      TNode<Object> tmp120;
  TNode<Object> tmp121;
      TNode<Object> tmp123;
  TNode<BoolT> tmp124;
      TNode<Object> tmp126;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch115__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch115__label);
    tmp114 = CallResolve_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_constructor}, TNode<Object>{p_promiseResolveFunction}, TNode<Object>{tmp28});
    }
    if (catch115__label.is_used()) {
      compiler::CodeAssemblerLabel catch115_skip(&ca_);
      ca_.Goto(&catch115_skip);
      ca_.Bind(&catch115__label, &tmp116);
      ca_.Goto(&block60, phi_bb33_11);
      ca_.Bind(&catch115_skip);
    }
    tmp117 = kThenString_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch119__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch119__label);
    tmp118 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp114}, TNode<Object>{tmp117});
    }
    if (catch119__label.is_used()) {
      compiler::CodeAssemblerLabel catch119_skip(&ca_);
      ca_.Goto(&catch119_skip);
      ca_.Bind(&catch119__label, &tmp120);
      ca_.Goto(&block61, phi_bb33_11);
      ca_.Bind(&catch119_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch122__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch122__label);
    tmp121 = CodeStubAssembler(state_).Call(TNode<Context>{p_nativeContext}, TNode<Object>{tmp118}, TNode<Object>{tmp114}, TNode<Object>{tmp59}, TNode<Object>{tmp60});
    }
    if (catch122__label.is_used()) {
      compiler::CodeAssemblerLabel catch122_skip(&ca_);
      ca_.Goto(&catch122_skip);
      ca_.Bind(&catch122__label, &tmp123);
      ca_.Goto(&block62, phi_bb33_11);
      ca_.Bind(&catch122_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch125__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch125__label);
    tmp124 = CodeStubAssembler(state_).IsDebugActive();
    }
    if (catch125__label.is_used()) {
      compiler::CodeAssemblerLabel catch125_skip(&ca_);
      ca_.Goto(&catch125_skip);
      ca_.Bind(&catch125__label, &tmp126);
      ca_.Goto(&block65, phi_bb33_11);
      ca_.Bind(&catch125_skip);
    }
    ca_.Branch(tmp124, &block66, std::vector<compiler::Node*>{phi_bb33_11}, &block67, std::vector<compiler::Node*>{phi_bb33_11});
  }

  TNode<Smi> phi_bb60_11;
  TNode<HeapObject> tmp127;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_11);
    tmp127 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb60_11, tmp116, tmp127);
  }

  TNode<Smi> phi_bb61_11;
  TNode<HeapObject> tmp128;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_11);
    tmp128 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb61_11, tmp120, tmp128);
  }

  TNode<Smi> phi_bb62_11;
  TNode<HeapObject> tmp129;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_11);
    tmp129 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb62_11, tmp123, tmp129);
  }

  TNode<Smi> phi_bb65_11;
  TNode<HeapObject> tmp130;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_11);
    tmp130 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb65_11, tmp126, tmp130);
  }

  TNode<Smi> phi_bb66_11;
  TNode<BoolT> tmp131;
      TNode<Object> tmp133;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch132__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch132__label);
    tmp131 = Is_JSPromise_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp121});
    }
    if (catch132__label.is_used()) {
      compiler::CodeAssemblerLabel catch132_skip(&ca_);
      ca_.Goto(&catch132_skip);
      ca_.Bind(&catch132__label, &tmp133);
      ca_.Goto(&block69, phi_bb66_11);
      ca_.Bind(&catch132_skip);
    }
    ca_.Goto(&block68, phi_bb66_11, tmp131);
  }

  TNode<Smi> phi_bb69_11;
  TNode<HeapObject> tmp134;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_11);
    tmp134 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb69_11, tmp133, tmp134);
  }

  TNode<Smi> phi_bb67_11;
  TNode<BoolT> tmp135;
      TNode<Object> tmp137;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch136__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch136__label);
    tmp135 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    }
    if (catch136__label.is_used()) {
      compiler::CodeAssemblerLabel catch136_skip(&ca_);
      ca_.Goto(&catch136_skip);
      ca_.Bind(&catch136__label, &tmp137);
      ca_.Goto(&block70, phi_bb67_11);
      ca_.Bind(&catch136_skip);
    }
    ca_.Goto(&block68, phi_bb67_11, tmp135);
  }

  TNode<Smi> phi_bb70_11;
  TNode<HeapObject> tmp138;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_11);
    tmp138 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb70_11, tmp137, tmp138);
  }

  TNode<Smi> phi_bb68_11;
  TNode<BoolT> phi_bb68_20;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_11, &phi_bb68_20);
    ca_.Branch(phi_bb68_20, &block63, std::vector<compiler::Node*>{phi_bb68_11}, &block64, std::vector<compiler::Node*>{phi_bb68_11});
  }

  TNode<Smi> phi_bb63_11;
  TNode<Symbol> tmp139;
  TNode<Object> tmp140;
      TNode<Object> tmp142;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_11);
    tmp139 = kPromiseHandledBySymbol_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch141__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch141__label);
    tmp140 = CodeStubAssembler(state_).SetPropertyStrict(TNode<Context>{p_context}, TNode<Object>{tmp121}, TNode<Object>{tmp139}, TNode<Object>{tmp1});
    }
    if (catch141__label.is_used()) {
      compiler::CodeAssemblerLabel catch141_skip(&ca_);
      ca_.Goto(&catch141_skip);
      ca_.Bind(&catch141__label, &tmp142);
      ca_.Goto(&block71, phi_bb63_11);
      ca_.Bind(&catch141_skip);
    }
    ca_.Goto(&block64, phi_bb63_11);
  }

  TNode<Smi> phi_bb71_11;
  TNode<HeapObject> tmp143;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_11);
    tmp143 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb71_11, tmp142, tmp143);
  }

  TNode<Smi> phi_bb64_11;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_11);
    ca_.Goto(&block59, phi_bb64_11);
  }

  TNode<Smi> phi_bb34_11;
  TNode<JSPromise> tmp144;
      TNode<Object> tmp146;
  TNode<Undefined> tmp147;
      TNode<Object> tmp149;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch145__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch145__label);
    tmp144 = UnsafeCast_JSPromise_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp28});
    }
    if (catch145__label.is_used()) {
      compiler::CodeAssemblerLabel catch145_skip(&ca_);
      ca_.Goto(&catch145_skip);
      ca_.Bind(&catch145__label, &tmp146);
      ca_.Goto(&block72, phi_bb34_11);
      ca_.Bind(&catch145_skip);
    }
    tmp147 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch148__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch148__label);
    PerformPromiseThenImpl_0(state_, TNode<Context>{p_context}, TNode<JSPromise>{tmp144}, TNode<HeapObject>{tmp59}, TNode<HeapObject>{tmp60}, TNode<HeapObject>{tmp147});
    }
    if (catch148__label.is_used()) {
      compiler::CodeAssemblerLabel catch148_skip(&ca_);
      ca_.Goto(&catch148_skip);
      ca_.Bind(&catch148__label, &tmp149);
      ca_.Goto(&block73, phi_bb34_11);
      ca_.Bind(&catch148_skip);
    }
    ca_.Goto(&block59, phi_bb34_11);
  }

  TNode<Smi> phi_bb72_11;
  TNode<HeapObject> tmp150;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_11);
    tmp150 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb72_11, tmp146, tmp150);
  }

  TNode<Smi> phi_bb73_11;
  TNode<HeapObject> tmp151;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_11);
    tmp151 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb73_11, tmp149, tmp151);
  }

  TNode<Smi> phi_bb59_11;
  TNode<Smi> tmp152;
      TNode<Object> tmp154;
  TNode<Smi> tmp155;
      TNode<Object> tmp157;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch153__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch153__label);
    tmp152 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch153__label.is_used()) {
      compiler::CodeAssemblerLabel catch153_skip(&ca_);
      ca_.Goto(&catch153_skip);
      ca_.Bind(&catch153__label, &tmp154);
      ca_.Goto(&block74, phi_bb59_11, phi_bb59_11, phi_bb59_11);
      ca_.Bind(&catch153_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch156__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch156__label);
    tmp155 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb59_11}, TNode<Smi>{tmp152});
    }
    if (catch156__label.is_used()) {
      compiler::CodeAssemblerLabel catch156_skip(&ca_);
      ca_.Goto(&catch156_skip);
      ca_.Bind(&catch156__label, &tmp157);
      ca_.Goto(&block75, phi_bb59_11, phi_bb59_11);
      ca_.Bind(&catch156_skip);
    }
    ca_.Goto(&block12, tmp155);
  }

  TNode<Smi> phi_bb74_11;
  TNode<Smi> phi_bb74_16;
  TNode<Smi> phi_bb74_17;
  TNode<HeapObject> tmp158;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_11, &phi_bb74_16, &phi_bb74_17);
    tmp158 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb74_11, tmp154, tmp158);
  }

  TNode<Smi> phi_bb75_11;
  TNode<Smi> phi_bb75_16;
  TNode<HeapObject> tmp159;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_11, &phi_bb75_16);
    tmp159 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block8, phi_bb75_11, tmp157, tmp159);
  }

  TNode<Smi> phi_bb11_11;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_11);
    ca_.Goto(&block5, phi_bb11_11);
  }

  TNode<Smi> phi_bb8_11;
  TNode<Object> phi_bb8_12;
  TNode<HeapObject> phi_bb8_13;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_11, &phi_bb8_12, &phi_bb8_13);
    IteratorCloseOnException_0(state_, TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{p_iter.object}, TNode<Object>{p_iter.next}});
    ca_.Goto(&block1, phi_bb8_12);
  }

  TNode<Smi> phi_bb5_11;
  TNode<IntPtrT> tmp160;
  TNode<Object> tmp161;
  TNode<IntPtrT> tmp162;
  TNode<Smi> tmp163;
  TNode<Smi> tmp164;
  TNode<Smi> tmp165;
  TNode<Smi> tmp166;
  TNode<BoolT> tmp167;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_11);
    tmp160 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp161, tmp162) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{tmp10}, TNode<IntPtrT>{tmp160}).Flatten();
    tmp163 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp161, tmp162});
    tmp164 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp165 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp163}, TNode<Smi>{tmp164});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp161, tmp162}, tmp165);
    tmp166 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp167 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp165}, TNode<Smi>{tmp166});
    ca_.Branch(tmp167, &block76, std::vector<compiler::Node*>{phi_bb5_11}, &block77, std::vector<compiler::Node*>{phi_bb5_11});
  }

  TNode<Smi> phi_bb77_11;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_11);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-all.tq", 288});
      CodeStubAssembler(state_).FailAssert("Torque assert 'remainingElementsCount >= 0' failed", pos_stack);
    }
  }

  TNode<Smi> phi_bb76_11;
  TNode<IntPtrT> tmp168;
  TNode<Object> tmp169;
  TNode<IntPtrT> tmp170;
  TNode<FixedArray> tmp171;
  TNode<Smi> tmp172;
  TNode<BoolT> tmp173;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_11);
    tmp168 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp169, tmp170) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{tmp10}, TNode<IntPtrT>{tmp168}).Flatten();
    tmp171 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp169, tmp170});
    tmp172 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp173 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp165}, TNode<Smi>{tmp172});
    ca_.Branch(tmp173, &block78, std::vector<compiler::Node*>{phi_bb76_11}, &block79, std::vector<compiler::Node*>{phi_bb76_11});
  }

  TNode<Smi> phi_bb78_11;
  TNode<IntPtrT> tmp174;
  TNode<IntPtrT> tmp175;
  TNode<IntPtrT> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<BoolT> tmp178;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_11);
    tmp174 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{phi_bb78_11});
    tmp175 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp176 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp174}, TNode<IntPtrT>{tmp175});
    tmp177 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp171});
    tmp178 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp177}, TNode<IntPtrT>{tmp176});
    ca_.Branch(tmp178, &block81, std::vector<compiler::Node*>{phi_bb78_11}, &block82, std::vector<compiler::Node*>{phi_bb78_11});
  }

  TNode<Smi> phi_bb81_11;
  TNode<Hole> tmp179;
  TNode<IntPtrT> tmp180;
  TNode<FixedArray> tmp181;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_11);
    tmp179 = PromiseHole_0(state_);
    tmp180 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp181 = ExtractFixedArray_0(state_, TNode<FixedArray>{tmp171}, TNode<IntPtrT>{tmp180}, TNode<IntPtrT>{tmp177}, TNode<IntPtrT>{tmp176}, TNode<Hole>{tmp179});
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp169, tmp170}, tmp181);
    ca_.Goto(&block82, phi_bb81_11);
  }

  TNode<Smi> phi_bb82_11;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_11);
    ca_.Goto(&block80, phi_bb82_11);
  }

  TNode<Smi> phi_bb79_11;
  TNode<IntPtrT> tmp182;
  TNode<Object> tmp183;
  TNode<IntPtrT> tmp184;
  TNode<Map> tmp185;
  TNode<FixedArray> tmp186;
  TNode<JSArray> tmp187;
  TNode<Object> tmp188;
  TNode<Undefined> tmp189;
  TNode<Object> tmp190;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_11);
    tmp182 = JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(state_);
    std::tie(tmp183, tmp184) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp182}).Flatten();
    tmp185 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp183, tmp184});
    tmp186 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp169, tmp170}, tmp186);
    tmp187 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp185}, TNode<FixedArrayBase>{tmp171});
    tmp188 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp3});
    tmp189 = Undefined_0(state_);
    tmp190 = CodeStubAssembler(state_).Call(TNode<Context>{p_nativeContext}, TNode<Object>{tmp188}, TNode<Object>{tmp189}, TNode<Object>{tmp187});
    ca_.Goto(&block80, phi_bb79_11);
  }

  TNode<Smi> phi_bb80_11;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_11);
    ca_.Goto(&block83);
  }

  TNode<Object> phi_bb1_0;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0);
    *label_Reject_parameter_0 = phi_bb1_0;
    ca_.Goto(label_Reject);
  }

    ca_.Bind(&block83);
  return TNode<Object>{tmp1};
}

} // namespace internal
} // namespace v8
