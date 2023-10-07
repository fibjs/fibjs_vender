#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
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
#include "src/objects/js-segment-iterator.h"
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
#include "src/wasm/wasm-linkage.h"
// Required Builtins:
#include "torque-generated/src/builtins/promise-all-element-closure-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/conversion-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-element-closure-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementRemainingSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementCapabilitySlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementValuesSlot_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementLength_0(compiler::CodeAssemblerState* state_, PromiseBuiltins::PromiseAllResolveElementContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> kPromiseAllResolveElementRemainingSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementRemainingSlot_0(state_, PromiseBuiltins::PromiseAllResolveElementContextSlots::kPromiseAllResolveElementRemainingSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> kPromiseAllResolveElementCapabilitySlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementCapabilitySlot_0(state_, PromiseBuiltins::PromiseAllResolveElementContextSlots::kPromiseAllResolveElementCapabilitySlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=66&c=1
TNode<IntPtrT> kPromiseAllResolveElementValuesSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_PromiseAllResolveElementContextSlots_constexpr_kPromiseAllResolveElementValuesSlot_0(state_, PromiseBuiltins::PromiseAllResolveElementContextSlots::kPromiseAllResolveElementValuesSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

TF_BUILTIN(PromiseAllResolveElementClosure, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{parameter0});
    tmp1 = PromiseAllResolveElementClosure_PromiseAllWrapResultAsFulfilledFunctor_0(state_, TNode<Context>{tmp0}, TNode<Object>{parameter3}, TNode<JSFunction>{parameter2}, TorqueStructPromiseAllWrapResultAsFulfilledFunctor_0{}, false);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(PromiseAllSettledResolveElementClosure, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{parameter0});
    tmp1 = PromiseAllResolveElementClosure_PromiseAllSettledWrapResultAsFulfilledFunctor_0(state_, TNode<Context>{tmp0}, TNode<Object>{parameter3}, TNode<JSFunction>{parameter2}, TorqueStructPromiseAllSettledWrapResultAsFulfilledFunctor_0{}, true);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(PromiseAllSettledRejectElementClosure, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{parameter0});
    tmp1 = PromiseAllResolveElementClosure_PromiseAllSettledWrapResultAsRejectedFunctor_0(state_, TNode<Context>{tmp0}, TNode<Object>{parameter3}, TNode<JSFunction>{parameter2}, TorqueStructPromiseAllSettledWrapResultAsRejectedFunctor_0{}, true);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=205&c=10
TNode<Object> PromiseAllResolveElementClosure_PromiseAllWrapResultAsFulfilledFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<JSFunction> p_function, TorqueStructPromiseAllWrapResultAsFulfilledFunctor_0 p_wrapResultFunctor, bool p_hasResolveAndRejectClosures) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_NativeContext_0(state_, TNode<HeapObject>{p_context}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<NativeContext> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Uint32T> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{ca_.UncheckedCast<Context>(p_context)});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Context>(CodeStubAssembler::Reference{p_function, tmp3}, tmp2);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = CodeStubAssembler(state_).LoadJSReceiverIdentityHash(TNode<JSReceiver>{p_function}, &label5);
    ca_.Goto(&block16);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block17);
    }
  }

  TNode<Undefined> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = Undefined_0(state_);
    ca_.Goto(&block1, tmp6);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Smi> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<FixedArray> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<BoolT> tmp22;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp7 = CodeStubAssembler(state_).ChangeUint32ToWord(TNode<Uint32T>{tmp4});
    tmp8 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp7});
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp9});
    tmp11 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp12, tmp13) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp16, tmp17) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp18});
    tmp22 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    ca_.Branch(tmp22, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{tmp18});
  }

  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<FixedArray> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp23 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp18});
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp25 = ExtractFixedArray_0(state_, TNode<FixedArray>{tmp18}, TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp20});
    tmp26 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp27, tmp28) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp26}).Flatten();
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp27, tmp28}, tmp25);
    ca_.Goto(&block23, tmp25);
  }

  TNode<FixedArray> phi_bb23_8;
  TNode<BoolT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_8);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, p_hasResolveAndRejectClosures);
    ca_.Branch(tmp29, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    std::tie(tmp30, tmp31, tmp32) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb23_8}).Flatten();
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp35 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp34});
    ca_.Branch(tmp35, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<Hole> tmp41;
  TNode<BoolT> tmp42;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp36 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp31}, TNode<IntPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewReference_Object_0(state_, TNode<Object>{tmp30}, TNode<IntPtrT>{tmp37}).Flatten();
    tmp40 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp38, tmp39});
    tmp41 = TheHole_0(state_);
    tmp42 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp40}, TNode<HeapObject>{tmp41});
    ca_.Branch(tmp42, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Undefined> tmp43;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp43 = Undefined_0(state_);
    ca_.Goto(&block1, tmp43);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.Goto(&block25);
  }

  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<UintPtrT> tmp48;
  TNode<BoolT> tmp49;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    std::tie(tmp44, tmp45, tmp46) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb23_8}).Flatten();
    tmp47 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp48 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp46});
    tmp49 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp47}, TNode<UintPtrT>{tmp48});
    ca_.Branch(tmp49, &block41, std::vector<compiler::Node*>{}, &block42, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Smi> tmp54;
  TNode<Smi> tmp55;
  TNode<Smi> tmp56;
  TNode<BoolT> tmp57;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp50 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp51 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{tmp50});
    std::tie(tmp52, tmp53) = NewReference_Object_0(state_, TNode<Object>{tmp44}, TNode<IntPtrT>{tmp51}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp52, tmp53}, p_value);
    tmp54 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp55 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp14}, TNode<Smi>{tmp54});
    tmp56 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp57 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp55}, TNode<Smi>{tmp56});
    ca_.Branch(tmp57, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-all-element-closure.tq", 162});
      CodeStubAssembler(state_).FailAssert("Torque assert 'remainingElementsCount >= 0' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp58;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Smi> tmp61;
  TNode<BoolT> tmp62;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp58 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp59, tmp60) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp58}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp59, tmp60}, tmp55);
    tmp61 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp62 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp55}, TNode<Smi>{tmp61});
    ca_.Branch(tmp62, &block47, std::vector<compiler::Node*>{}, &block48, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp63;
  TNode<Object> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<PromiseCapability> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<Object> tmp68;
  TNode<Object> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<Object> tmp71;
  TNode<IntPtrT> tmp72;
  TNode<Map> tmp73;
  TNode<BoolT> tmp74;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp63 = kPromiseAllResolveElementCapabilitySlot_0(state_);
    std::tie(tmp64, tmp65) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp63}).Flatten();
    tmp66 = CodeStubAssembler(state_).LoadReference<PromiseCapability>(CodeStubAssembler::Reference{tmp64, tmp65});
    tmp67 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp68 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp66, tmp67});
    tmp69 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp68});
    tmp70 = JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(state_);
    std::tie(tmp71, tmp72) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{tmp2}, TNode<IntPtrT>{tmp70}).Flatten();
    tmp73 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp71, tmp72});
    tmp74 = FromConstexpr_bool_constexpr_bool_0(state_, p_hasResolveAndRejectClosures);
    ca_.Branch(tmp74, &block49, std::vector<compiler::Node*>{}, &block50, std::vector<compiler::Node*>{});
  }

  if (block49.is_used()) {
    ca_.Bind(&block49);
    CodeStubAssembler(state_).MakeFixedArrayCOW(TNode<FixedArray>{phi_bb23_8});
    ca_.Goto(&block51);
  }

  TNode<IntPtrT> tmp75;
  TNode<Object> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<FixedArray> tmp78;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    tmp75 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp76, tmp77) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp75}).Flatten();
    tmp78 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp76, tmp77}, tmp78);
    ca_.Goto(&block51);
  }

  TNode<JSArray> tmp79;
  TNode<Undefined> tmp80;
  TNode<Object> tmp81;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp79 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp73}, TNode<FixedArrayBase>{phi_bb23_8});
    tmp80 = Undefined_0(state_);
    tmp81 = CodeStubAssembler(state_).Call(TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<Object>{tmp69}, TNode<Object>{tmp80}, TNode<Object>{tmp79});
    ca_.Goto(&block48);
  }

  TNode<Undefined> tmp82;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp82 = Undefined_0(state_);
    ca_.Goto(&block1, tmp82);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block52, phi_bb1_3);
  }

  TNode<Object> phi_bb52_3;
    ca_.Bind(&block52, &phi_bb52_3);
  return TNode<Object>{phi_bb52_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=214&c=10
TNode<Object> PromiseAllResolveElementClosure_PromiseAllSettledWrapResultAsFulfilledFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<JSFunction> p_function, TorqueStructPromiseAllSettledWrapResultAsFulfilledFunctor_0 p_wrapResultFunctor, bool p_hasResolveAndRejectClosures) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_NativeContext_0(state_, TNode<HeapObject>{p_context}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<NativeContext> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Uint32T> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{ca_.UncheckedCast<Context>(p_context)});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Context>(CodeStubAssembler::Reference{p_function, tmp3}, tmp2);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = CodeStubAssembler(state_).LoadJSReceiverIdentityHash(TNode<JSReceiver>{p_function}, &label5);
    ca_.Goto(&block16);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block17);
    }
  }

  TNode<Undefined> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = Undefined_0(state_);
    ca_.Goto(&block1, tmp6);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Smi> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<FixedArray> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<BoolT> tmp22;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp7 = CodeStubAssembler(state_).ChangeUint32ToWord(TNode<Uint32T>{tmp4});
    tmp8 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp7});
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp9});
    tmp11 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp12, tmp13) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp16, tmp17) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp18});
    tmp22 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    ca_.Branch(tmp22, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{tmp18});
  }

  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<FixedArray> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp23 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp18});
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp25 = ExtractFixedArray_0(state_, TNode<FixedArray>{tmp18}, TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp20});
    tmp26 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp27, tmp28) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp26}).Flatten();
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp27, tmp28}, tmp25);
    ca_.Goto(&block23, tmp25);
  }

  TNode<FixedArray> phi_bb23_8;
  TNode<BoolT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_8);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, p_hasResolveAndRejectClosures);
    ca_.Branch(tmp29, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    std::tie(tmp30, tmp31, tmp32) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb23_8}).Flatten();
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp35 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp34});
    ca_.Branch(tmp35, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<Hole> tmp41;
  TNode<BoolT> tmp42;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp36 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp31}, TNode<IntPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewReference_Object_0(state_, TNode<Object>{tmp30}, TNode<IntPtrT>{tmp37}).Flatten();
    tmp40 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp38, tmp39});
    tmp41 = TheHole_0(state_);
    tmp42 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp40}, TNode<HeapObject>{tmp41});
    ca_.Branch(tmp42, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Undefined> tmp43;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp43 = Undefined_0(state_);
    ca_.Goto(&block1, tmp43);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.Goto(&block25);
  }

  TNode<IntPtrT> tmp44;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<JSFunction> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<HeapObject> tmp49;
  TNode<Map> tmp50;
  TNode<JSObject> tmp51;
  TNode<String> tmp52;
  TNode<String> tmp53;
  TNode<Object> tmp54;
  TNode<String> tmp55;
  TNode<Object> tmp56;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<UintPtrT> tmp60;
  TNode<UintPtrT> tmp61;
  TNode<BoolT> tmp62;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp44 = OBJECT_FUNCTION_INDEX_0(state_);
    std::tie(tmp45, tmp46) = NativeContextSlot_JSFunction_0(state_, TNode<NativeContext>{tmp2}, TNode<IntPtrT>{tmp44}).Flatten();
    tmp47 = CodeStubAssembler(state_).LoadReference<JSFunction>(CodeStubAssembler::Reference{tmp45, tmp46});
    tmp48 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    tmp49 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp47, tmp48});
    tmp50 = UnsafeCast_Map_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp49});
    tmp51 = CodeStubAssembler(state_).AllocateJSObjectFromMap(TNode<Map>{tmp50});
    tmp52 = CodeStubAssembler(state_).StringConstant("status");
    tmp53 = CodeStubAssembler(state_).StringConstant("fulfilled");
    tmp54 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), p_context, tmp51, tmp52, tmp53);
    tmp55 = CodeStubAssembler(state_).StringConstant("value");
    tmp56 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), p_context, tmp51, tmp55, p_value);
    std::tie(tmp57, tmp58, tmp59) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb23_8}).Flatten();
    tmp60 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp61 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp59});
    tmp62 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp61});
    ca_.Branch(tmp62, &block41, std::vector<compiler::Node*>{}, &block42, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp63;
  TNode<IntPtrT> tmp64;
  TNode<Object> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<Smi> tmp67;
  TNode<Smi> tmp68;
  TNode<Smi> tmp69;
  TNode<BoolT> tmp70;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp63 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp64 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    std::tie(tmp65, tmp66) = NewReference_Object_0(state_, TNode<Object>{tmp57}, TNode<IntPtrT>{tmp64}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp65, tmp66}, tmp51);
    tmp67 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp68 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp14}, TNode<Smi>{tmp67});
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp70 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp68}, TNode<Smi>{tmp69});
    ca_.Branch(tmp70, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-all-element-closure.tq", 162});
      CodeStubAssembler(state_).FailAssert("Torque assert 'remainingElementsCount >= 0' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp71;
  TNode<Object> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<Smi> tmp74;
  TNode<BoolT> tmp75;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp71 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp72, tmp73) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp71}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp72, tmp73}, tmp68);
    tmp74 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp75 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp68}, TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block47, std::vector<compiler::Node*>{}, &block48, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp76;
  TNode<Object> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<PromiseCapability> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<Object> tmp81;
  TNode<Object> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<Object> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<Map> tmp86;
  TNode<BoolT> tmp87;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp76 = kPromiseAllResolveElementCapabilitySlot_0(state_);
    std::tie(tmp77, tmp78) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp76}).Flatten();
    tmp79 = CodeStubAssembler(state_).LoadReference<PromiseCapability>(CodeStubAssembler::Reference{tmp77, tmp78});
    tmp80 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp81 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp79, tmp80});
    tmp82 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp81});
    tmp83 = JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(state_);
    std::tie(tmp84, tmp85) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{tmp2}, TNode<IntPtrT>{tmp83}).Flatten();
    tmp86 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp84, tmp85});
    tmp87 = FromConstexpr_bool_constexpr_bool_0(state_, p_hasResolveAndRejectClosures);
    ca_.Branch(tmp87, &block49, std::vector<compiler::Node*>{}, &block50, std::vector<compiler::Node*>{});
  }

  if (block49.is_used()) {
    ca_.Bind(&block49);
    CodeStubAssembler(state_).MakeFixedArrayCOW(TNode<FixedArray>{phi_bb23_8});
    ca_.Goto(&block51);
  }

  TNode<IntPtrT> tmp88;
  TNode<Object> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<FixedArray> tmp91;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    tmp88 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp89, tmp90) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp88}).Flatten();
    tmp91 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp89, tmp90}, tmp91);
    ca_.Goto(&block51);
  }

  TNode<JSArray> tmp92;
  TNode<Undefined> tmp93;
  TNode<Object> tmp94;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp92 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp86}, TNode<FixedArrayBase>{phi_bb23_8});
    tmp93 = Undefined_0(state_);
    tmp94 = CodeStubAssembler(state_).Call(TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<Object>{tmp82}, TNode<Object>{tmp93}, TNode<Object>{tmp92});
    ca_.Goto(&block48);
  }

  TNode<Undefined> tmp95;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp95 = Undefined_0(state_);
    ca_.Goto(&block1, tmp95);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block52, phi_bb1_3);
  }

  TNode<Object> phi_bb52_3;
    ca_.Bind(&block52, &phi_bb52_3);
  return TNode<Object>{phi_bb52_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=223&c=10
TNode<Object> PromiseAllResolveElementClosure_PromiseAllSettledWrapResultAsRejectedFunctor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<JSFunction> p_function, TorqueStructPromiseAllSettledWrapResultAsRejectedFunctor_0 p_wrapResultFunctor, bool p_hasResolveAndRejectClosures) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_NativeContext_0(state_, TNode<HeapObject>{p_context}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<NativeContext> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Uint32T> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{ca_.UncheckedCast<Context>(p_context)});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    CodeStubAssembler(state_).StoreReference<Context>(CodeStubAssembler::Reference{p_function, tmp3}, tmp2);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = CodeStubAssembler(state_).LoadJSReceiverIdentityHash(TNode<JSReceiver>{p_function}, &label5);
    ca_.Goto(&block16);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block17);
    }
  }

  TNode<Undefined> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = Undefined_0(state_);
    ca_.Goto(&block1, tmp6);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Smi> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<FixedArray> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<BoolT> tmp22;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp7 = CodeStubAssembler(state_).ChangeUint32ToWord(TNode<Uint32T>{tmp4});
    tmp8 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp7});
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp9});
    tmp11 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp12, tmp13) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp11}).Flatten();
    tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp13});
    tmp15 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp16, tmp17) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp15}).Flatten();
    tmp18 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp18});
    tmp22 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    ca_.Branch(tmp22, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{tmp18});
  }

  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<FixedArray> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp23 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp18});
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp25 = ExtractFixedArray_0(state_, TNode<FixedArray>{tmp18}, TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp20});
    tmp26 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp27, tmp28) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp26}).Flatten();
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp27, tmp28}, tmp25);
    ca_.Goto(&block23, tmp25);
  }

  TNode<FixedArray> phi_bb23_8;
  TNode<BoolT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_8);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, p_hasResolveAndRejectClosures);
    ca_.Branch(tmp29, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    std::tie(tmp30, tmp31, tmp32) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb23_8}).Flatten();
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp35 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp34});
    ca_.Branch(tmp35, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<Object> tmp40;
  TNode<Hole> tmp41;
  TNode<BoolT> tmp42;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp36 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp31}, TNode<IntPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewReference_Object_0(state_, TNode<Object>{tmp30}, TNode<IntPtrT>{tmp37}).Flatten();
    tmp40 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp38, tmp39});
    tmp41 = TheHole_0(state_);
    tmp42 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp40}, TNode<HeapObject>{tmp41});
    ca_.Branch(tmp42, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Undefined> tmp43;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp43 = Undefined_0(state_);
    ca_.Goto(&block1, tmp43);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.Goto(&block25);
  }

  TNode<IntPtrT> tmp44;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<JSFunction> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<HeapObject> tmp49;
  TNode<Map> tmp50;
  TNode<JSObject> tmp51;
  TNode<String> tmp52;
  TNode<String> tmp53;
  TNode<Object> tmp54;
  TNode<String> tmp55;
  TNode<Object> tmp56;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<UintPtrT> tmp60;
  TNode<UintPtrT> tmp61;
  TNode<BoolT> tmp62;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp44 = OBJECT_FUNCTION_INDEX_0(state_);
    std::tie(tmp45, tmp46) = NativeContextSlot_JSFunction_0(state_, TNode<NativeContext>{tmp2}, TNode<IntPtrT>{tmp44}).Flatten();
    tmp47 = CodeStubAssembler(state_).LoadReference<JSFunction>(CodeStubAssembler::Reference{tmp45, tmp46});
    tmp48 = FromConstexpr_intptr_constexpr_int31_0(state_, 56);
    tmp49 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp47, tmp48});
    tmp50 = UnsafeCast_Map_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp49});
    tmp51 = CodeStubAssembler(state_).AllocateJSObjectFromMap(TNode<Map>{tmp50});
    tmp52 = CodeStubAssembler(state_).StringConstant("status");
    tmp53 = CodeStubAssembler(state_).StringConstant("rejected");
    tmp54 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), p_context, tmp51, tmp52, tmp53);
    tmp55 = CodeStubAssembler(state_).StringConstant("reason");
    tmp56 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), p_context, tmp51, tmp55, p_value);
    std::tie(tmp57, tmp58, tmp59) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb23_8}).Flatten();
    tmp60 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp10});
    tmp61 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp59});
    tmp62 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp61});
    ca_.Branch(tmp62, &block41, std::vector<compiler::Node*>{}, &block42, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp63;
  TNode<IntPtrT> tmp64;
  TNode<Object> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<Smi> tmp67;
  TNode<Smi> tmp68;
  TNode<Smi> tmp69;
  TNode<BoolT> tmp70;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp63 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp10});
    tmp64 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    std::tie(tmp65, tmp66) = NewReference_Object_0(state_, TNode<Object>{tmp57}, TNode<IntPtrT>{tmp64}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp65, tmp66}, tmp51);
    tmp67 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp68 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp14}, TNode<Smi>{tmp67});
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp70 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{tmp68}, TNode<Smi>{tmp69});
    ca_.Branch(tmp70, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/promise-all-element-closure.tq", 162});
      CodeStubAssembler(state_).FailAssert("Torque assert 'remainingElementsCount >= 0' failed", pos_stack);
    }
  }

  TNode<IntPtrT> tmp71;
  TNode<Object> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<Smi> tmp74;
  TNode<BoolT> tmp75;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp71 = kPromiseAllResolveElementRemainingSlot_0(state_);
    std::tie(tmp72, tmp73) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp71}).Flatten();
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp72, tmp73}, tmp68);
    tmp74 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp75 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp68}, TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block47, std::vector<compiler::Node*>{}, &block48, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp76;
  TNode<Object> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<PromiseCapability> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<Object> tmp81;
  TNode<Object> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<Object> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<Map> tmp86;
  TNode<BoolT> tmp87;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp76 = kPromiseAllResolveElementCapabilitySlot_0(state_);
    std::tie(tmp77, tmp78) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp76}).Flatten();
    tmp79 = CodeStubAssembler(state_).LoadReference<PromiseCapability>(CodeStubAssembler::Reference{tmp77, tmp78});
    tmp80 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp81 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp79, tmp80});
    tmp82 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp81});
    tmp83 = JS_ARRAY_PACKED_ELEMENTS_MAP_INDEX_0(state_);
    std::tie(tmp84, tmp85) = NativeContextSlot_Map_1(state_, TNode<NativeContext>{tmp2}, TNode<IntPtrT>{tmp83}).Flatten();
    tmp86 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp84, tmp85});
    tmp87 = FromConstexpr_bool_constexpr_bool_0(state_, p_hasResolveAndRejectClosures);
    ca_.Branch(tmp87, &block49, std::vector<compiler::Node*>{}, &block50, std::vector<compiler::Node*>{});
  }

  if (block49.is_used()) {
    ca_.Bind(&block49);
    CodeStubAssembler(state_).MakeFixedArrayCOW(TNode<FixedArray>{phi_bb23_8});
    ca_.Goto(&block51);
  }

  TNode<IntPtrT> tmp88;
  TNode<Object> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<FixedArray> tmp91;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    tmp88 = kPromiseAllResolveElementValuesSlot_0(state_);
    std::tie(tmp89, tmp90) = ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(state_, TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<IntPtrT>{tmp88}).Flatten();
    tmp91 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<FixedArray>(CodeStubAssembler::Reference{tmp89, tmp90}, tmp91);
    ca_.Goto(&block51);
  }

  TNode<JSArray> tmp92;
  TNode<Undefined> tmp93;
  TNode<Object> tmp94;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp92 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp86}, TNode<FixedArrayBase>{phi_bb23_8});
    tmp93 = Undefined_0(state_);
    tmp94 = CodeStubAssembler(state_).Call(TNode<Context>{ca_.UncheckedCast<Context>(p_context)}, TNode<Object>{tmp82}, TNode<Object>{tmp93}, TNode<Object>{tmp92});
    ca_.Goto(&block48);
  }

  TNode<Undefined> tmp95;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp95 = Undefined_0(state_);
    ca_.Goto(&block1, tmp95);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block52, phi_bb1_3);
  }

  TNode<Object> phi_bb52_3;
    ca_.Bind(&block52, &phi_bb52_3);
  return TNode<Object>{phi_bb52_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=120&c=33
TorqueStructReference_Smi_0 ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_Smi_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_Smi_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=125&c=17
TorqueStructReference_FixedArray_0 ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_FixedArray_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_FixedArray_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all-element-closure.tq?l=169&c=25
TorqueStructReference_PromiseCapability_0 ContextSlot_PromiseAllResolveElementContext_PromiseAllResolveElementContext_PromiseCapability_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_PromiseCapability_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_PromiseCapability_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
