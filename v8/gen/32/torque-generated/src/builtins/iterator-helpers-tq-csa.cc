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
// Required Builtins:
#include "torque-generated/src/builtins/iterator-helpers-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/iterator-from-tq-csa.h"
#include "torque-generated/src/builtins/iterator-helpers-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-iterator-helpers-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=9&c=1
TNode<BoolT> IsIteratorHelperExhausted_0(compiler::CodeAssemblerState* state_, TNode<JSIteratorHelper> p_helper) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<Oddball> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp2 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_helper, tmp2});
    tmp4 = Null_0(state_);
    tmp5 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp3}, TNode<HeapObject>{tmp4});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BoolT>{tmp5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=13&c=1
void MarkIteratorHelperAsExhausted_0(compiler::CodeAssemblerState* state_, TNode<JSIteratorHelper> p_helper) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Oddball> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp2 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    tmp3 = Null_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{p_helper, tmp2}, tmp3);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=18&c=1
TorqueStructIteratorRecord GetIteratorDirect_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_obj) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kNextString_0(state_);
    tmp1 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{p_obj}, TNode<Object>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructIteratorRecord{TNode<JSReceiver>{p_obj}, TNode<Object>{tmp1}};
}

TF_BUILTIN(IteratorHelperPrototypeNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSIteratorMapHelper> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSIteratorMapHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<JSIteratorFilterHelper> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorFilterHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter1)}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  TNode<Object> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kIteratorMapHelperNext), parameter0, tmp0);
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<JSIteratorTakeHelper> tmp5;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Cast_JSIteratorTakeHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter1)}, &label6);
    ca_.Goto(&block11);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block12);
    }
  }

  TNode<Object> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kIteratorFilterHelperNext), parameter0, tmp2);
    CodeStubAssembler(state_).Return(tmp7);
  }

  TNode<JSIteratorDropHelper> tmp8;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_JSIteratorDropHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter1)}, &label9);
    ca_.Goto(&block15);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block16);
    }
  }

  TNode<Object> tmp10;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp10 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kIteratorTakeHelperNext), parameter0, tmp5);
    CodeStubAssembler(state_).Return(tmp10);
  }

  TNode<JSIteratorFlatMapHelper> tmp11;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = Cast_JSIteratorFlatMapHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter1)}, &label12);
    ca_.Goto(&block19);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block20);
    }
  }

  TNode<Object> tmp13;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp13 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kIteratorDropHelperNext), parameter0, tmp8);
    CodeStubAssembler(state_).Return(tmp13);
  }

  TNode<Object> tmp14;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp14 = FromConstexpr_Object_constexpr_string_0(state_, "Iterator Helper.prototype.next");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp14}, TNode<Object>{parameter1});
  }

  TNode<Object> tmp15;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp15 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kIteratorFlatMapHelperNext), parameter0, tmp11);
    CodeStubAssembler(state_).Return(tmp15);
  }
}

TF_BUILTIN(IteratorHelperPrototypeReturn, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSIteratorFlatMapHelper> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSIteratorFlatMapHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<JSIteratorHelper> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorHelper_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label3);
    ca_.Goto(&block17);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block18);
    }
  }

  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{tmp0});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp5;
  TNode<Oddball> tmp6;
  TNode<JSObject> tmp7;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = Undefined_0(state_);
    tmp6 = True_0(state_);
    tmp7 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp5}, TNode<Oddball>{tmp6});
    CodeStubAssembler(state_).Return(tmp7);
  }

  TNode<IntPtrT> tmp8;
  TNode<Oddball> tmp9;
  TNode<Oddball> tmp10;
  TNode<BoolT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{tmp0});
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    tmp9 = CodeStubAssembler(state_).LoadReference<Oddball>(CodeStubAssembler::Reference{tmp0, tmp8});
    tmp10 = True_0(state_);
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp9}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp12;
      TNode<Object> tmp14;
  TNode<JSReceiver> tmp15;
  TNode<IntPtrT> tmp16;
      TNode<Object> tmp18;
  TNode<IntPtrT> tmp19;
      TNode<Object> tmp21;
  TNode<Object> tmp22;
      TNode<Object> tmp24;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerExceptionHandlerLabel catch13__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch13__label);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    }
    if (catch13__label.is_used()) {
      compiler::CodeAssemblerLabel catch13_skip(&ca_);
      ca_.Goto(&catch13_skip);
      ca_.Bind(&catch13__label, &tmp14);
      ca_.Goto(&block11);
      ca_.Bind(&catch13_skip);
    }
    tmp15 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp0, tmp12});
    compiler::CodeAssemblerExceptionHandlerLabel catch17__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch17__label);
    tmp16 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    }
    if (catch17__label.is_used()) {
      compiler::CodeAssemblerLabel catch17_skip(&ca_);
      ca_.Goto(&catch17_skip);
      ca_.Bind(&catch17__label, &tmp18);
      ca_.Goto(&block12);
      ca_.Bind(&catch17_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    tmp19 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp16});
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block13);
      ca_.Bind(&catch20_skip);
    }
    tmp22 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp0, tmp19});
    compiler::CodeAssemblerExceptionHandlerLabel catch23__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch23__label);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp15}, TNode<Object>{tmp22}});
    }
    if (catch23__label.is_used()) {
      compiler::CodeAssemblerLabel catch23_skip(&ca_);
      ca_.Goto(&catch23_skip);
      ca_.Bind(&catch23__label, &tmp24);
      ca_.Goto(&block14);
      ca_.Bind(&catch23_skip);
    }
    ca_.Goto(&block8);
  }

  TNode<HeapObject> tmp25;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp25 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp14, tmp25);
  }

  TNode<HeapObject> tmp26;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp26 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp18, tmp26);
  }

  TNode<HeapObject> tmp27;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp27 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp21, tmp27);
  }

  TNode<HeapObject> tmp28;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp28 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block10, tmp24, tmp28);
  }

  TNode<Object> phi_bb10_4;
  TNode<HeapObject> phi_bb10_5;
  TNode<IntPtrT> tmp29;
  TNode<JSReceiver> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<Object> tmp33;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_4, &phi_bb10_5);
    tmp29 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp30 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp0, tmp29});
    tmp31 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp31});
    tmp33 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp0, tmp32});
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp30}, TNode<Object>{tmp33}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb10_4, phi_bb10_5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp34;
  TNode<JSReceiver> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<Oddball> tmp39;
  TNode<Oddball> tmp40;
  TNode<JSObject> tmp41;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp35 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp0, tmp34});
    tmp36 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp34}, TNode<IntPtrT>{tmp36});
    tmp38 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp0, tmp37});
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp35}, TNode<Object>{tmp38}});
    tmp39 = Undefined_0(state_);
    tmp40 = True_0(state_);
    tmp41 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp39}, TNode<Oddball>{tmp40});
    CodeStubAssembler(state_).Return(tmp41);
  }

  TNode<Object> tmp42;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp42 = FromConstexpr_Object_constexpr_string_0(state_, "Iterator Helper.prototype.return");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp42}, TNode<Object>{parameter1});
  }

  TNode<BoolT> tmp43;
  TNode<BoolT> tmp44;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp43 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{tmp2});
    tmp44 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp43});
    ca_.Branch(tmp44, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp45;
  TNode<JSReceiver> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{tmp2});
    tmp45 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp46 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp2, tmp45});
    tmp47 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{tmp47});
    tmp49 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp2, tmp48});
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp46}, TNode<Object>{tmp49}});
    ca_.Goto(&block20);
  }

  TNode<Oddball> tmp50;
  TNode<Oddball> tmp51;
  TNode<JSObject> tmp52;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp50 = Undefined_0(state_);
    tmp51 = True_0(state_);
    tmp52 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp50}, TNode<Oddball>{tmp51});
    CodeStubAssembler(state_).Return(tmp52);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=121&c=1
TNode<JSIteratorMapHelper> NewJSIteratorMapHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<JSReceiver> p_mapper) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<FixedArray> tmp4;
  TNode<FixedArray> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<HeapObject> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Number> tmp18;
  TNode<JSIteratorMapHelper> tmp19;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ITERATOR_MAP_HELPER_MAP_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Map_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = kEmptyFixedArray_0(state_);
    tmp5 = kEmptyFixedArray_0(state_);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp9 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp8}, TNode<Map>{tmp3}, TNode<BoolT>{tmp6}, TNode<BoolT>{tmp7});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp3);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp11}, tmp4);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp9, tmp12}, tmp5);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp9, tmp13}, p_underlying.object);
    tmp14 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp15}, p_underlying.next);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp9, tmp16}, p_mapper);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp18 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp9, tmp17}, tmp18);
    tmp19 = TORQUE_CAST(TNode<HeapObject>{tmp9});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSIteratorMapHelper>{tmp19};
}

TF_BUILTIN(IteratorPrototypeMap, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kMapper);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.map");
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.map");
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<JSIteratorMapHelper> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = NewJSIteratorMapHelper_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<JSReceiver>{tmp2});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(IteratorMapHelperNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSIteratorMapHelper> parameter1 = UncheckedParameter<JSIteratorMapHelper>(Descriptor::kHelper);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<JSReceiver> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Number> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp2 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp3});
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp7 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{parameter1, tmp6});
    tmp8 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    ca_.Branch(tmp8, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp9;
  TNode<Oddball> tmp10;
  TNode<JSObject> tmp11;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp9 = Undefined_0(state_);
    tmp10 = True_0(state_);
    tmp11 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp9}, TNode<Oddball>{tmp10});
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<JSReceiver> tmp12;
      TNode<Object> tmp15;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    compiler::CodeAssemblerLabel label13(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch14__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch14__label);
    tmp12 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}}, TNode<Map>{tmp0}, &label13);
    }
    if (catch14__label.is_used()) {
      compiler::CodeAssemblerLabel catch14_skip(&ca_);
      ca_.Goto(&catch14_skip);
      ca_.Bind(&catch14__label, &tmp15);
      ca_.Goto(&block9);
      ca_.Bind(&catch14_skip);
    }
    ca_.Goto(&block7);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block8);
    }
  }

  TNode<HeapObject> tmp16;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp16 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp15, tmp16);
  }

      TNode<Object> tmp18;
  TNode<Oddball> tmp19;
  TNode<Oddball> tmp20;
  TNode<JSObject> tmp21;
      TNode<Object> tmp23;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::CodeAssemblerExceptionHandlerLabel catch17__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch17__label);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    }
    if (catch17__label.is_used()) {
      compiler::CodeAssemblerLabel catch17_skip(&ca_);
      ca_.Goto(&catch17_skip);
      ca_.Bind(&catch17__label, &tmp18);
      ca_.Goto(&block10);
      ca_.Bind(&catch17_skip);
    }
    tmp19 = Undefined_0(state_);
    tmp20 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch22__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch22__label);
    tmp21 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp19}, TNode<Oddball>{tmp20});
    }
    if (catch22__label.is_used()) {
      compiler::CodeAssemblerLabel catch22_skip(&ca_);
      ca_.Goto(&catch22_skip);
      ca_.Bind(&catch22__label, &tmp23);
      ca_.Goto(&block11);
      ca_.Bind(&catch22_skip);
    }
    CodeStubAssembler(state_).Return(tmp21);
  }

  TNode<Object> tmp24;
      TNode<Object> tmp26;
  TNode<IntPtrT> tmp27;
      TNode<Object> tmp29;
  TNode<JSReceiver> tmp30;
  TNode<Oddball> tmp31;
  TNode<Object> tmp32;
      TNode<Object> tmp34;
  TNode<IntPtrT> tmp35;
      TNode<Object> tmp37;
  TNode<Number> tmp38;
      TNode<Object> tmp40;
  TNode<Number> tmp41;
      TNode<Object> tmp43;
  TNode<Oddball> tmp44;
  TNode<JSObject> tmp45;
      TNode<Object> tmp47;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerExceptionHandlerLabel catch25__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch25__label);
    tmp24 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp12}, TNode<Map>{tmp0});
    }
    if (catch25__label.is_used()) {
      compiler::CodeAssemblerLabel catch25_skip(&ca_);
      ca_.Goto(&catch25_skip);
      ca_.Bind(&catch25__label, &tmp26);
      ca_.Goto(&block12);
      ca_.Bind(&catch25_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch28__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch28__label);
    tmp27 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    }
    if (catch28__label.is_used()) {
      compiler::CodeAssemblerLabel catch28_skip(&ca_);
      ca_.Goto(&catch28_skip);
      ca_.Bind(&catch28__label, &tmp29);
      ca_.Goto(&block15);
      ca_.Bind(&catch28_skip);
    }
    tmp30 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp27});
    tmp31 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch33__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch33__label);
    tmp32 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp30}, TNode<Object>{tmp31}, TNode<Object>{tmp24}, TNode<Object>{tmp7});
    }
    if (catch33__label.is_used()) {
      compiler::CodeAssemblerLabel catch33_skip(&ca_);
      ca_.Goto(&catch33_skip);
      ca_.Bind(&catch33__label, &tmp34);
      ca_.Goto(&block16);
      ca_.Bind(&catch33_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch36__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch36__label);
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    }
    if (catch36__label.is_used()) {
      compiler::CodeAssemblerLabel catch36_skip(&ca_);
      ca_.Goto(&catch36_skip);
      ca_.Bind(&catch36__label, &tmp37);
      ca_.Goto(&block17);
      ca_.Bind(&catch36_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch39__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch39__label);
    tmp38 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch39__label.is_used()) {
      compiler::CodeAssemblerLabel catch39_skip(&ca_);
      ca_.Goto(&catch39_skip);
      ca_.Bind(&catch39__label, &tmp40);
      ca_.Goto(&block18);
      ca_.Bind(&catch39_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch42__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch42__label);
    tmp41 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp7}, TNode<Number>{tmp38});
    }
    if (catch42__label.is_used()) {
      compiler::CodeAssemblerLabel catch42_skip(&ca_);
      ca_.Goto(&catch42_skip);
      ca_.Bind(&catch42__label, &tmp43);
      ca_.Goto(&block19);
      ca_.Bind(&catch42_skip);
    }
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{parameter1, tmp35}, tmp41);
    tmp44 = False_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch46__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch46__label);
    tmp45 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp32}, TNode<Oddball>{tmp44});
    }
    if (catch46__label.is_used()) {
      compiler::CodeAssemblerLabel catch46_skip(&ca_);
      ca_.Goto(&catch46_skip);
      ca_.Bind(&catch46__label, &tmp47);
      ca_.Goto(&block20);
      ca_.Bind(&catch46_skip);
    }
    CodeStubAssembler(state_).Return(tmp45);
  }

  TNode<HeapObject> tmp48;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp48 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp18, tmp48);
  }

  TNode<HeapObject> tmp49;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp49 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp23, tmp49);
  }

  TNode<HeapObject> tmp50;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp50 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp26, tmp50);
  }

  TNode<HeapObject> tmp51;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp51 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block14, tmp29, tmp51);
  }

  TNode<HeapObject> tmp52;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp52 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block14, tmp34, tmp52);
  }

  TNode<HeapObject> tmp53;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp53 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block14, tmp37, tmp53);
  }

  TNode<HeapObject> tmp54;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp54 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block14, tmp40, tmp54);
  }

  TNode<HeapObject> tmp55;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp55 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block14, tmp43, tmp55);
  }

  TNode<HeapObject> tmp56;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp56 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block14, tmp47, tmp56);
  }

  TNode<Object> phi_bb14_8;
  TNode<HeapObject> phi_bb14_9;
      TNode<Object> tmp58;
      TNode<Object> tmp60;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_8, &phi_bb14_9);
    compiler::CodeAssemblerExceptionHandlerLabel catch57__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch57__label);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}});
    }
    if (catch57__label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      ca_.Bind(&catch57__label, &tmp58);
      ca_.Goto(&block21);
      ca_.Bind(&catch57_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch59__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch59__label);
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb14_8, phi_bb14_9);
    CodeStubAssembler(state_).Unreachable();
    }
    if (catch59__label.is_used()) {
      compiler::CodeAssemblerLabel catch59_skip(&ca_);
      ca_.Bind(&catch59__label, &tmp60);
      ca_.Goto(&block22);
    }
  }

  TNode<HeapObject> tmp61;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp61 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp58, tmp61);
  }

  TNode<HeapObject> tmp62;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp62 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp60, tmp62);
  }

  TNode<Object> phi_bb4_6;
  TNode<HeapObject> phi_bb4_7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6, &phi_bb4_7);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb4_6, phi_bb4_7);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=217&c=1
TNode<JSIteratorFilterHelper> NewJSIteratorFilterHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<JSReceiver> p_predicate) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<FixedArray> tmp4;
  TNode<FixedArray> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<HeapObject> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Number> tmp18;
  TNode<JSIteratorFilterHelper> tmp19;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ITERATOR_FILTER_HELPER_MAP_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Map_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = kEmptyFixedArray_0(state_);
    tmp5 = kEmptyFixedArray_0(state_);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp9 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp8}, TNode<Map>{tmp3}, TNode<BoolT>{tmp6}, TNode<BoolT>{tmp7});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp3);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp11}, tmp4);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp9, tmp12}, tmp5);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp9, tmp13}, p_underlying.object);
    tmp14 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp15}, p_underlying.next);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp9, tmp16}, p_predicate);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp18 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp9, tmp17}, tmp18);
    tmp19 = TORQUE_CAST(TNode<HeapObject>{tmp9});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSIteratorFilterHelper>{tmp19};
}

TF_BUILTIN(IteratorPrototypeFilter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPredicate);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.filter");
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.filter");
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<JSIteratorFilterHelper> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = NewJSIteratorFilterHelper_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<JSReceiver>{tmp2});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(IteratorFilterHelperNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSIteratorFilterHelper> parameter1 = UncheckedParameter<JSIteratorFilterHelper>(Descriptor::kHelper);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<JSReceiver> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp2 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp3});
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp4});
    tmp6 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    ca_.Branch(tmp6, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp7;
  TNode<Oddball> tmp8;
  TNode<JSObject> tmp9;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp7 = Undefined_0(state_);
    tmp8 = True_0(state_);
    tmp9 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp7}, TNode<Oddball>{tmp8});
    CodeStubAssembler(state_).Return(tmp9);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block7);
  }

  TNode<BoolT> tmp10;
      TNode<Object> tmp12;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block8);
      ca_.Bind(&catch11_skip);
    }
    ca_.Branch(tmp10, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp12, tmp13);
  }

  TNode<IntPtrT> tmp14;
      TNode<Object> tmp16;
  TNode<Number> tmp17;
  TNode<JSReceiver> tmp18;
      TNode<Object> tmp21;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block9);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{parameter1, tmp14});
    compiler::CodeAssemblerLabel label19(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    tmp18 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}}, TNode<Map>{tmp0}, &label19);
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block14);
      ca_.Bind(&catch20_skip);
    }
    ca_.Goto(&block12);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block13);
    }
  }

  TNode<HeapObject> tmp22;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp22 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp16, tmp22);
  }

  TNode<HeapObject> tmp23;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp23 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp21, tmp23);
  }

      TNode<Object> tmp25;
  TNode<Oddball> tmp26;
  TNode<Oddball> tmp27;
  TNode<JSObject> tmp28;
      TNode<Object> tmp30;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    compiler::CodeAssemblerExceptionHandlerLabel catch24__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch24__label);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    }
    if (catch24__label.is_used()) {
      compiler::CodeAssemblerLabel catch24_skip(&ca_);
      ca_.Goto(&catch24_skip);
      ca_.Bind(&catch24__label, &tmp25);
      ca_.Goto(&block15);
      ca_.Bind(&catch24_skip);
    }
    tmp26 = Undefined_0(state_);
    tmp27 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch29__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch29__label);
    tmp28 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp26}, TNode<Oddball>{tmp27});
    }
    if (catch29__label.is_used()) {
      compiler::CodeAssemblerLabel catch29_skip(&ca_);
      ca_.Goto(&catch29_skip);
      ca_.Bind(&catch29__label, &tmp30);
      ca_.Goto(&block16);
      ca_.Bind(&catch29_skip);
    }
    CodeStubAssembler(state_).Return(tmp28);
  }

  TNode<Object> tmp31;
      TNode<Object> tmp33;
  TNode<IntPtrT> tmp34;
      TNode<Object> tmp36;
  TNode<JSReceiver> tmp37;
  TNode<Oddball> tmp38;
  TNode<Object> tmp39;
      TNode<Object> tmp41;
  TNode<IntPtrT> tmp42;
      TNode<Object> tmp44;
  TNode<Number> tmp45;
      TNode<Object> tmp47;
  TNode<Number> tmp48;
      TNode<Object> tmp50;
  TNode<BoolT> tmp51;
      TNode<Object> tmp53;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerExceptionHandlerLabel catch32__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch32__label);
    tmp31 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp18}, TNode<Map>{tmp0});
    }
    if (catch32__label.is_used()) {
      compiler::CodeAssemblerLabel catch32_skip(&ca_);
      ca_.Goto(&catch32_skip);
      ca_.Bind(&catch32__label, &tmp33);
      ca_.Goto(&block17);
      ca_.Bind(&catch32_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch35__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch35__label);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    }
    if (catch35__label.is_used()) {
      compiler::CodeAssemblerLabel catch35_skip(&ca_);
      ca_.Goto(&catch35_skip);
      ca_.Bind(&catch35__label, &tmp36);
      ca_.Goto(&block20);
      ca_.Bind(&catch35_skip);
    }
    tmp37 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp34});
    tmp38 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch40__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch40__label);
    tmp39 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp37}, TNode<Object>{tmp38}, TNode<Object>{tmp31}, TNode<Object>{tmp17});
    }
    if (catch40__label.is_used()) {
      compiler::CodeAssemblerLabel catch40_skip(&ca_);
      ca_.Goto(&catch40_skip);
      ca_.Bind(&catch40__label, &tmp41);
      ca_.Goto(&block21);
      ca_.Bind(&catch40_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch43__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch43__label);
    tmp42 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    }
    if (catch43__label.is_used()) {
      compiler::CodeAssemblerLabel catch43_skip(&ca_);
      ca_.Goto(&catch43_skip);
      ca_.Bind(&catch43__label, &tmp44);
      ca_.Goto(&block22);
      ca_.Bind(&catch43_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch46__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch46__label);
    tmp45 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch46__label.is_used()) {
      compiler::CodeAssemblerLabel catch46_skip(&ca_);
      ca_.Goto(&catch46_skip);
      ca_.Bind(&catch46__label, &tmp47);
      ca_.Goto(&block23);
      ca_.Bind(&catch46_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch49__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch49__label);
    tmp48 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp17}, TNode<Number>{tmp45});
    }
    if (catch49__label.is_used()) {
      compiler::CodeAssemblerLabel catch49_skip(&ca_);
      ca_.Goto(&catch49_skip);
      ca_.Bind(&catch49__label, &tmp50);
      ca_.Goto(&block24);
      ca_.Bind(&catch49_skip);
    }
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{parameter1, tmp42}, tmp48);
    compiler::CodeAssemblerExceptionHandlerLabel catch52__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch52__label);
    tmp51 = ToBoolean_0(state_, TNode<Object>{tmp39});
    }
    if (catch52__label.is_used()) {
      compiler::CodeAssemblerLabel catch52_skip(&ca_);
      ca_.Goto(&catch52_skip);
      ca_.Bind(&catch52__label, &tmp53);
      ca_.Goto(&block27);
      ca_.Bind(&catch52_skip);
    }
    ca_.Branch(tmp51, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp54;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp54 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp25, tmp54);
  }

  TNode<HeapObject> tmp55;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp55 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp30, tmp55);
  }

  TNode<HeapObject> tmp56;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp56 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp33, tmp56);
  }

  TNode<HeapObject> tmp57;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp57 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp36, tmp57);
  }

  TNode<HeapObject> tmp58;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp58 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp41, tmp58);
  }

  TNode<HeapObject> tmp59;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp59 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp44, tmp59);
  }

  TNode<HeapObject> tmp60;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp60 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp47, tmp60);
  }

  TNode<HeapObject> tmp61;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp61 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp50, tmp61);
  }

  TNode<HeapObject> tmp62;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp62 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp53, tmp62);
  }

  TNode<Oddball> tmp63;
  TNode<JSObject> tmp64;
      TNode<Object> tmp66;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp63 = False_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch65__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch65__label);
    tmp64 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp31}, TNode<Oddball>{tmp63});
    }
    if (catch65__label.is_used()) {
      compiler::CodeAssemblerLabel catch65_skip(&ca_);
      ca_.Goto(&catch65_skip);
      ca_.Bind(&catch65__label, &tmp66);
      ca_.Goto(&block28);
      ca_.Bind(&catch65_skip);
    }
    CodeStubAssembler(state_).Return(tmp64);
  }

  TNode<HeapObject> tmp67;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp67 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block19, tmp66, tmp67);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.Goto(&block7);
  }

  TNode<Object> phi_bb19_8;
  TNode<HeapObject> phi_bb19_9;
      TNode<Object> tmp69;
      TNode<Object> tmp71;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_8, &phi_bb19_9);
    compiler::CodeAssemblerExceptionHandlerLabel catch68__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch68__label);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}});
    }
    if (catch68__label.is_used()) {
      compiler::CodeAssemblerLabel catch68_skip(&ca_);
      ca_.Goto(&catch68_skip);
      ca_.Bind(&catch68__label, &tmp69);
      ca_.Goto(&block29);
      ca_.Bind(&catch68_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch70__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch70__label);
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb19_8, phi_bb19_9);
    CodeStubAssembler(state_).Unreachable();
    }
    if (catch70__label.is_used()) {
      compiler::CodeAssemblerLabel catch70_skip(&ca_);
      ca_.Bind(&catch70__label, &tmp71);
      ca_.Goto(&block30);
    }
  }

  TNode<HeapObject> tmp72;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp72 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp69, tmp72);
  }

  TNode<HeapObject> tmp73;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp73 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp71, tmp73);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb4_5;
  TNode<HeapObject> phi_bb4_6;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_6);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb4_5, phi_bb4_6);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=320&c=1
TNode<JSIteratorTakeHelper> NewJSIteratorTakeHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<Number> p_limit) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<FixedArray> tmp4;
  TNode<FixedArray> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<HeapObject> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<JSIteratorTakeHelper> tmp17;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ITERATOR_TAKE_HELPER_MAP_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Map_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = kEmptyFixedArray_0(state_);
    tmp5 = kEmptyFixedArray_0(state_);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp9 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp8}, TNode<Map>{tmp3}, TNode<BoolT>{tmp6}, TNode<BoolT>{tmp7});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp3);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp11}, tmp4);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp9, tmp12}, tmp5);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp9, tmp13}, p_underlying.object);
    tmp14 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp15}, p_underlying.next);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp9, tmp16}, p_limit);
    tmp17 = TORQUE_CAST(TNode<HeapObject>{tmp9});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSIteratorTakeHelper>{tmp17};
}

TF_BUILTIN(IteratorPrototypeTake, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kLimit);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.take");
  }

  TNode<Number> tmp2;
  TNode<BoolT> tmp3;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp3 = NumberIsNaN_0(state_, TNode<Number>{tmp2});
    ca_.Branch(tmp3, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  TNode<Number> tmp4;
  TNode<Number> tmp5;
  TNode<BoolT> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp4 = ToInteger_Inline_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    tmp5 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = NumberIsLessThan_0(state_, TNode<Number>{tmp4}, TNode<Number>{tmp5});
    ca_.Branch(tmp6, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<JSReceiver> tmp7;
  TNode<Object> tmp8;
  TNode<JSIteratorTakeHelper> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    std::tie(tmp7, tmp8) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp9 = NewJSIteratorTakeHelper_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp7}, TNode<Object>{tmp8}}, TNode<Number>{tmp4});
    CodeStubAssembler(state_).Return(tmp9);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kMustBePositive, TNode<Object>{parameter2});
  }
}

TF_BUILTIN(IteratorTakeHelperNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSIteratorTakeHelper> parameter1 = UncheckedParameter<JSIteratorTakeHelper>(Descriptor::kHelper);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<JSReceiver> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Number> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp2 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp3});
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp7 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{parameter1, tmp6});
    tmp8 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    ca_.Branch(tmp8, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp9;
  TNode<Oddball> tmp10;
  TNode<JSObject> tmp11;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp9 = Undefined_0(state_);
    tmp10 = True_0(state_);
    tmp11 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp9}, TNode<Oddball>{tmp10});
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Number> tmp12;
      TNode<Object> tmp14;
  TNode<BoolT> tmp15;
      TNode<Object> tmp17;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    compiler::CodeAssemblerExceptionHandlerLabel catch13__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch13__label);
    tmp12 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    }
    if (catch13__label.is_used()) {
      compiler::CodeAssemblerLabel catch13_skip(&ca_);
      ca_.Goto(&catch13_skip);
      ca_.Bind(&catch13__label, &tmp14);
      ca_.Goto(&block7);
      ca_.Bind(&catch13_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch16__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch16__label);
    tmp15 = IsNumberEqual_0(state_, TNode<Number>{tmp7}, TNode<Number>{tmp12});
    }
    if (catch16__label.is_used()) {
      compiler::CodeAssemblerLabel catch16_skip(&ca_);
      ca_.Goto(&catch16_skip);
      ca_.Bind(&catch16__label, &tmp17);
      ca_.Goto(&block8);
      ca_.Bind(&catch16_skip);
    }
    ca_.Branch(tmp15, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp18;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp14, tmp18);
  }

  TNode<HeapObject> tmp19;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp19 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp17, tmp19);
  }

      TNode<Object> tmp21;
      TNode<Object> tmp23;
  TNode<Oddball> tmp24;
  TNode<Oddball> tmp25;
  TNode<JSObject> tmp26;
      TNode<Object> tmp28;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block9);
      ca_.Bind(&catch20_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch22__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch22__label);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}});
    }
    if (catch22__label.is_used()) {
      compiler::CodeAssemblerLabel catch22_skip(&ca_);
      ca_.Goto(&catch22_skip);
      ca_.Bind(&catch22__label, &tmp23);
      ca_.Goto(&block10);
      ca_.Bind(&catch22_skip);
    }
    tmp24 = Undefined_0(state_);
    tmp25 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch27__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch27__label);
    tmp26 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp24}, TNode<Oddball>{tmp25});
    }
    if (catch27__label.is_used()) {
      compiler::CodeAssemblerLabel catch27_skip(&ca_);
      ca_.Goto(&catch27_skip);
      ca_.Bind(&catch27__label, &tmp28);
      ca_.Goto(&block11);
      ca_.Bind(&catch27_skip);
    }
    CodeStubAssembler(state_).Return(tmp26);
  }

  TNode<HeapObject> tmp29;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp29 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp21, tmp29);
  }

  TNode<HeapObject> tmp30;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp30 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp23, tmp30);
  }

  TNode<HeapObject> tmp31;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp31 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp28, tmp31);
  }

  TNode<BoolT> tmp32;
      TNode<Object> tmp34;
  TNode<BoolT> tmp35;
      TNode<Object> tmp37;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerExceptionHandlerLabel catch33__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch33__label);
    tmp32 = NumberIsSomeInfinity_0(state_, TNode<Number>{tmp7});
    }
    if (catch33__label.is_used()) {
      compiler::CodeAssemblerLabel catch33_skip(&ca_);
      ca_.Goto(&catch33_skip);
      ca_.Bind(&catch33__label, &tmp34);
      ca_.Goto(&block14);
      ca_.Bind(&catch33_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch36__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch36__label);
    tmp35 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp32});
    }
    if (catch36__label.is_used()) {
      compiler::CodeAssemblerLabel catch36_skip(&ca_);
      ca_.Goto(&catch36_skip);
      ca_.Bind(&catch36__label, &tmp37);
      ca_.Goto(&block15);
      ca_.Bind(&catch36_skip);
    }
    ca_.Branch(tmp35, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp38;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp38 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp34, tmp38);
  }

  TNode<HeapObject> tmp39;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp39 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp37, tmp39);
  }

  TNode<IntPtrT> tmp40;
      TNode<Object> tmp42;
  TNode<Number> tmp43;
      TNode<Object> tmp45;
  TNode<Number> tmp46;
      TNode<Object> tmp48;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerExceptionHandlerLabel catch41__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch41__label);
    tmp40 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    }
    if (catch41__label.is_used()) {
      compiler::CodeAssemblerLabel catch41_skip(&ca_);
      ca_.Goto(&catch41_skip);
      ca_.Bind(&catch41__label, &tmp42);
      ca_.Goto(&block16);
      ca_.Bind(&catch41_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch44__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch44__label);
    tmp43 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch44__label.is_used()) {
      compiler::CodeAssemblerLabel catch44_skip(&ca_);
      ca_.Goto(&catch44_skip);
      ca_.Bind(&catch44__label, &tmp45);
      ca_.Goto(&block17);
      ca_.Bind(&catch44_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch47__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch47__label);
    tmp46 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp7}, TNode<Number>{tmp43});
    }
    if (catch47__label.is_used()) {
      compiler::CodeAssemblerLabel catch47_skip(&ca_);
      ca_.Goto(&catch47_skip);
      ca_.Bind(&catch47__label, &tmp48);
      ca_.Goto(&block18);
      ca_.Bind(&catch47_skip);
    }
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{parameter1, tmp40}, tmp46);
    ca_.Goto(&block13);
  }

  TNode<HeapObject> tmp49;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp49 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp42, tmp49);
  }

  TNode<HeapObject> tmp50;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp50 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp45, tmp50);
  }

  TNode<HeapObject> tmp51;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp51 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp48, tmp51);
  }

  TNode<JSReceiver> tmp52;
      TNode<Object> tmp55;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    compiler::CodeAssemblerLabel label53(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch54__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch54__label);
    tmp52 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}}, TNode<Map>{tmp0}, &label53);
    }
    if (catch54__label.is_used()) {
      compiler::CodeAssemblerLabel catch54_skip(&ca_);
      ca_.Goto(&catch54_skip);
      ca_.Bind(&catch54__label, &tmp55);
      ca_.Goto(&block23);
      ca_.Bind(&catch54_skip);
    }
    ca_.Goto(&block21);
    if (label53.is_used()) {
      ca_.Bind(&label53);
      ca_.Goto(&block22);
    }
  }

  TNode<HeapObject> tmp56;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp56 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp55, tmp56);
  }

      TNode<Object> tmp58;
  TNode<Oddball> tmp59;
  TNode<Oddball> tmp60;
  TNode<JSObject> tmp61;
      TNode<Object> tmp63;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    compiler::CodeAssemblerExceptionHandlerLabel catch57__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch57__label);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    }
    if (catch57__label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      ca_.Bind(&catch57__label, &tmp58);
      ca_.Goto(&block24);
      ca_.Bind(&catch57_skip);
    }
    tmp59 = Undefined_0(state_);
    tmp60 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch62__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch62__label);
    tmp61 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp59}, TNode<Oddball>{tmp60});
    }
    if (catch62__label.is_used()) {
      compiler::CodeAssemblerLabel catch62_skip(&ca_);
      ca_.Goto(&catch62_skip);
      ca_.Bind(&catch62__label, &tmp63);
      ca_.Goto(&block25);
      ca_.Bind(&catch62_skip);
    }
    CodeStubAssembler(state_).Return(tmp61);
  }

  TNode<Object> tmp64;
      TNode<Object> tmp66;
  TNode<Oddball> tmp67;
  TNode<JSObject> tmp68;
      TNode<Object> tmp70;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    compiler::CodeAssemblerExceptionHandlerLabel catch65__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch65__label);
    tmp64 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp52}, TNode<Map>{tmp0});
    }
    if (catch65__label.is_used()) {
      compiler::CodeAssemblerLabel catch65_skip(&ca_);
      ca_.Goto(&catch65_skip);
      ca_.Bind(&catch65__label, &tmp66);
      ca_.Goto(&block26);
      ca_.Bind(&catch65_skip);
    }
    tmp67 = False_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch69__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch69__label);
    tmp68 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp64}, TNode<Oddball>{tmp67});
    }
    if (catch69__label.is_used()) {
      compiler::CodeAssemblerLabel catch69_skip(&ca_);
      ca_.Goto(&catch69_skip);
      ca_.Bind(&catch69__label, &tmp70);
      ca_.Goto(&block27);
      ca_.Bind(&catch69_skip);
    }
    CodeStubAssembler(state_).Return(tmp68);
  }

  TNode<HeapObject> tmp71;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp71 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp58, tmp71);
  }

  TNode<HeapObject> tmp72;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp72 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp63, tmp72);
  }

  TNode<HeapObject> tmp73;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp73 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp66, tmp73);
  }

  TNode<HeapObject> tmp74;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp74 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp70, tmp74);
  }

  TNode<Object> phi_bb4_6;
  TNode<HeapObject> phi_bb4_7;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6, &phi_bb4_7);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb4_6, phi_bb4_7);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=425&c=1
TNode<JSIteratorDropHelper> NewJSIteratorDropHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<Number> p_limit) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<FixedArray> tmp4;
  TNode<FixedArray> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<HeapObject> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<JSIteratorDropHelper> tmp17;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ITERATOR_DROP_HELPER_MAP_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Map_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = kEmptyFixedArray_0(state_);
    tmp5 = kEmptyFixedArray_0(state_);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp9 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp8}, TNode<Map>{tmp3}, TNode<BoolT>{tmp6}, TNode<BoolT>{tmp7});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp9, tmp10}, tmp3);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp11}, tmp4);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp9, tmp12}, tmp5);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp9, tmp13}, p_underlying.object);
    tmp14 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp15 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp14});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp9, tmp15}, p_underlying.next);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp9, tmp16}, p_limit);
    tmp17 = TORQUE_CAST(TNode<HeapObject>{tmp9});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSIteratorDropHelper>{tmp17};
}

TF_BUILTIN(IteratorPrototypeDrop, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kLimit);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.drop");
  }

  TNode<Number> tmp2;
  TNode<BoolT> tmp3;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp3 = NumberIsNaN_0(state_, TNode<Number>{tmp2});
    ca_.Branch(tmp3, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  TNode<Number> tmp4;
  TNode<Number> tmp5;
  TNode<BoolT> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp4 = ToInteger_Inline_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    tmp5 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = NumberIsLessThan_0(state_, TNode<Number>{tmp4}, TNode<Number>{tmp5});
    ca_.Branch(tmp6, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<JSReceiver> tmp7;
  TNode<Object> tmp8;
  TNode<JSIteratorDropHelper> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    std::tie(tmp7, tmp8) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp9 = NewJSIteratorDropHelper_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp7}, TNode<Object>{tmp8}}, TNode<Number>{tmp4});
    CodeStubAssembler(state_).Return(tmp9);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kMustBePositive, TNode<Object>{parameter2});
  }
}

TF_BUILTIN(IteratorDropHelperNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSIteratorDropHelper> parameter1 = UncheckedParameter<JSIteratorDropHelper>(Descriptor::kHelper);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, JSReceiver, Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<JSReceiver> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Number> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp2 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp3});
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp7 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{parameter1, tmp6});
    tmp8 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    ca_.Branch(tmp8, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp9;
  TNode<Oddball> tmp10;
  TNode<JSObject> tmp11;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp9 = Undefined_0(state_);
    tmp10 = True_0(state_);
    tmp11 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp9}, TNode<Oddball>{tmp10});
    CodeStubAssembler(state_).Return(tmp11);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block9, tmp7);
  }

  TNode<Number> phi_bb9_5;
  TNode<Number> tmp12;
      TNode<Object> tmp14;
  TNode<BoolT> tmp15;
      TNode<Object> tmp17;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5);
    compiler::CodeAssemblerExceptionHandlerLabel catch13__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch13__label);
    tmp12 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    }
    if (catch13__label.is_used()) {
      compiler::CodeAssemblerLabel catch13_skip(&ca_);
      ca_.Goto(&catch13_skip);
      ca_.Bind(&catch13__label, &tmp14);
      ca_.Goto(&block10, phi_bb9_5, phi_bb9_5, phi_bb9_5);
      ca_.Bind(&catch13_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch16__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch16__label);
    tmp15 = NumberIsGreaterThan_0(state_, TNode<Number>{phi_bb9_5}, TNode<Number>{tmp12});
    }
    if (catch16__label.is_used()) {
      compiler::CodeAssemblerLabel catch16_skip(&ca_);
      ca_.Goto(&catch16_skip);
      ca_.Bind(&catch16__label, &tmp17);
      ca_.Goto(&block11, phi_bb9_5, phi_bb9_5);
      ca_.Bind(&catch16_skip);
    }
    ca_.Branch(tmp15, &block7, std::vector<compiler::Node*>{phi_bb9_5}, &block8, std::vector<compiler::Node*>{phi_bb9_5});
  }

  TNode<Number> phi_bb10_5;
  TNode<Number> phi_bb10_7;
  TNode<Number> phi_bb10_8;
  TNode<HeapObject> tmp18;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_7, &phi_bb10_8);
    tmp18 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb10_5, ca_.Uninitialized<JSReceiver>(), tmp14, tmp18);
  }

  TNode<Number> phi_bb11_5;
  TNode<Number> phi_bb11_7;
  TNode<HeapObject> tmp19;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5, &phi_bb11_7);
    tmp19 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb11_5, ca_.Uninitialized<JSReceiver>(), tmp17, tmp19);
  }

  TNode<Number> phi_bb7_5;
  TNode<BoolT> tmp20;
      TNode<Object> tmp22;
  TNode<BoolT> tmp23;
      TNode<Object> tmp25;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_5);
    compiler::CodeAssemblerExceptionHandlerLabel catch21__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch21__label);
    tmp20 = NumberIsSomeInfinity_0(state_, TNode<Number>{phi_bb7_5});
    }
    if (catch21__label.is_used()) {
      compiler::CodeAssemblerLabel catch21_skip(&ca_);
      ca_.Goto(&catch21_skip);
      ca_.Bind(&catch21__label, &tmp22);
      ca_.Goto(&block14, phi_bb7_5, phi_bb7_5);
      ca_.Bind(&catch21_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch24__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch24__label);
    tmp23 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp20});
    }
    if (catch24__label.is_used()) {
      compiler::CodeAssemblerLabel catch24_skip(&ca_);
      ca_.Goto(&catch24_skip);
      ca_.Bind(&catch24__label, &tmp25);
      ca_.Goto(&block15, phi_bb7_5);
      ca_.Bind(&catch24_skip);
    }
    ca_.Branch(tmp23, &block12, std::vector<compiler::Node*>{phi_bb7_5}, &block13, std::vector<compiler::Node*>{phi_bb7_5});
  }

  TNode<Number> phi_bb14_5;
  TNode<Number> phi_bb14_7;
  TNode<HeapObject> tmp26;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_5, &phi_bb14_7);
    tmp26 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb14_5, ca_.Uninitialized<JSReceiver>(), tmp22, tmp26);
  }

  TNode<Number> phi_bb15_5;
  TNode<HeapObject> tmp27;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_5);
    tmp27 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb15_5, ca_.Uninitialized<JSReceiver>(), tmp25, tmp27);
  }

  TNode<Number> phi_bb12_5;
  TNode<Number> tmp28;
      TNode<Object> tmp30;
  TNode<Number> tmp31;
      TNode<Object> tmp33;
  TNode<IntPtrT> tmp34;
      TNode<Object> tmp36;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_5);
    compiler::CodeAssemblerExceptionHandlerLabel catch29__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch29__label);
    tmp28 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch29__label.is_used()) {
      compiler::CodeAssemblerLabel catch29_skip(&ca_);
      ca_.Goto(&catch29_skip);
      ca_.Bind(&catch29__label, &tmp30);
      ca_.Goto(&block16, phi_bb12_5, phi_bb12_5, phi_bb12_5);
      ca_.Bind(&catch29_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch32__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch32__label);
    tmp31 = CodeStubAssembler(state_).NumberSub(TNode<Number>{phi_bb12_5}, TNode<Number>{tmp28});
    }
    if (catch32__label.is_used()) {
      compiler::CodeAssemblerLabel catch32_skip(&ca_);
      ca_.Goto(&catch32_skip);
      ca_.Bind(&catch32__label, &tmp33);
      ca_.Goto(&block17, phi_bb12_5, phi_bb12_5);
      ca_.Bind(&catch32_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch35__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch35__label);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    }
    if (catch35__label.is_used()) {
      compiler::CodeAssemblerLabel catch35_skip(&ca_);
      ca_.Goto(&catch35_skip);
      ca_.Bind(&catch35__label, &tmp36);
      ca_.Goto(&block18);
      ca_.Bind(&catch35_skip);
    }
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{parameter1, tmp34}, tmp31);
    ca_.Goto(&block13, tmp31);
  }

  TNode<Number> phi_bb16_5;
  TNode<Number> phi_bb16_7;
  TNode<Number> phi_bb16_8;
  TNode<HeapObject> tmp37;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_5, &phi_bb16_7, &phi_bb16_8);
    tmp37 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb16_5, ca_.Uninitialized<JSReceiver>(), tmp30, tmp37);
  }

  TNode<Number> phi_bb17_5;
  TNode<Number> phi_bb17_7;
  TNode<HeapObject> tmp38;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_5, &phi_bb17_7);
    tmp38 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb17_5, ca_.Uninitialized<JSReceiver>(), tmp33, tmp38);
  }

  TNode<HeapObject> tmp39;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp39 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp31, ca_.Uninitialized<JSReceiver>(), tmp36, tmp39);
  }

  TNode<Number> phi_bb13_5;
  TNode<JSReceiver> tmp40;
      TNode<Object> tmp43;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_5);
    compiler::CodeAssemblerLabel label41(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch42__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch42__label);
    tmp40 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}}, TNode<Map>{tmp0}, &label41);
    }
    if (catch42__label.is_used()) {
      compiler::CodeAssemblerLabel catch42_skip(&ca_);
      ca_.Goto(&catch42_skip);
      ca_.Bind(&catch42__label, &tmp43);
      ca_.Goto(&block21);
      ca_.Bind(&catch42_skip);
    }
    ca_.Goto(&block19);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block20);
    }
  }

  TNode<HeapObject> tmp44;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp44 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb13_5, ca_.Uninitialized<JSReceiver>(), tmp43, tmp44);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block6, phi_bb13_5);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block9, phi_bb13_5);
  }

  TNode<Number> phi_bb8_5;
  TNode<JSReceiver> tmp45;
      TNode<Object> tmp48;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_5);
    compiler::CodeAssemblerLabel label46(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch47__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch47__label);
    tmp45 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}}, TNode<Map>{tmp0}, &label46);
    }
    if (catch47__label.is_used()) {
      compiler::CodeAssemblerLabel catch47_skip(&ca_);
      ca_.Goto(&catch47_skip);
      ca_.Bind(&catch47__label, &tmp48);
      ca_.Goto(&block24, phi_bb8_5);
      ca_.Bind(&catch47_skip);
    }
    ca_.Goto(&block22, phi_bb8_5);
    if (label46.is_used()) {
      ca_.Bind(&label46);
      ca_.Goto(&block23, phi_bb8_5);
    }
  }

  TNode<Number> phi_bb24_5;
  TNode<HeapObject> tmp49;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_5);
    tmp49 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb24_5, ca_.Uninitialized<JSReceiver>(), tmp48, tmp49);
  }

  TNode<Number> phi_bb23_5;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_5);
    ca_.Goto(&block6, phi_bb23_5);
  }

  TNode<Number> phi_bb22_5;
  TNode<Object> tmp50;
      TNode<Object> tmp52;
  TNode<Oddball> tmp53;
  TNode<JSObject> tmp54;
      TNode<Object> tmp56;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_5);
    compiler::CodeAssemblerExceptionHandlerLabel catch51__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch51__label);
    tmp50 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp45}, TNode<Map>{tmp0});
    }
    if (catch51__label.is_used()) {
      compiler::CodeAssemblerLabel catch51_skip(&ca_);
      ca_.Goto(&catch51_skip);
      ca_.Bind(&catch51__label, &tmp52);
      ca_.Goto(&block27, phi_bb22_5);
      ca_.Bind(&catch51_skip);
    }
    tmp53 = False_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch55__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch55__label);
    tmp54 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp50}, TNode<Oddball>{tmp53});
    }
    if (catch55__label.is_used()) {
      compiler::CodeAssemblerLabel catch55_skip(&ca_);
      ca_.Goto(&catch55_skip);
      ca_.Bind(&catch55__label, &tmp56);
      ca_.Goto(&block28, phi_bb22_5);
      ca_.Bind(&catch55_skip);
    }
    CodeStubAssembler(state_).Return(tmp54);
  }

  TNode<Number> phi_bb6_5;
      TNode<Object> tmp58;
  TNode<Oddball> tmp59;
  TNode<Oddball> tmp60;
  TNode<JSObject> tmp61;
      TNode<Object> tmp63;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5);
    compiler::CodeAssemblerExceptionHandlerLabel catch57__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch57__label);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    }
    if (catch57__label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      ca_.Bind(&catch57__label, &tmp58);
      ca_.Goto(&block25);
      ca_.Bind(&catch57_skip);
    }
    tmp59 = Undefined_0(state_);
    tmp60 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch62__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch62__label);
    tmp61 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp59}, TNode<Oddball>{tmp60});
    }
    if (catch62__label.is_used()) {
      compiler::CodeAssemblerLabel catch62_skip(&ca_);
      ca_.Goto(&catch62_skip);
      ca_.Bind(&catch62__label, &tmp63);
      ca_.Goto(&block26);
      ca_.Bind(&catch62_skip);
    }
    CodeStubAssembler(state_).Return(tmp61);
  }

  TNode<HeapObject> tmp64;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp64 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb6_5, ca_.Uninitialized<JSReceiver>(), tmp58, tmp64);
  }

  TNode<HeapObject> tmp65;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp65 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb6_5, ca_.Uninitialized<JSReceiver>(), tmp63, tmp65);
  }

  TNode<Number> phi_bb27_5;
  TNode<HeapObject> tmp66;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5);
    tmp66 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb27_5, tmp45, tmp52, tmp66);
  }

  TNode<Number> phi_bb28_5;
  TNode<HeapObject> tmp67;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5);
    tmp67 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, phi_bb28_5, tmp45, tmp56, tmp67);
  }

  TNode<Number> phi_bb4_5;
  TNode<JSReceiver> phi_bb4_6;
  TNode<Object> phi_bb4_7;
  TNode<HeapObject> phi_bb4_8;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_6, &phi_bb4_7, &phi_bb4_8);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb4_7, phi_bb4_8);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=529&c=1
const char* kFlatMapMethodName_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "Iterator.prototype.flatMap";}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=531&c=1
TNode<JSIteratorFlatMapHelper> NewJSIteratorFlatMapHelper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_underlying, TNode<JSReceiver> p_mapper) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Map> tmp3;
  TNode<FixedArray> tmp4;
  TNode<FixedArray> tmp5;
  TNode<Oddball> tmp6;
  TNode<BoolT> tmp7;
  TNode<BoolT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<HeapObject> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<Number> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<JSIteratorFlatMapHelper> tmp24;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ITERATOR_FLAT_MAP_HELPER_MAP_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Map_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = kEmptyFixedArray_0(state_);
    tmp5 = kEmptyFixedArray_0(state_);
    tmp6 = False_0(state_);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp9 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp10 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp9}, TNode<Map>{tmp3}, TNode<BoolT>{tmp7}, TNode<BoolT>{tmp8});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp10, tmp11}, tmp3);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp12}, tmp4);
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp10, tmp13}, tmp5);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp10, tmp14}, p_underlying.object);
    tmp15 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp16 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp15});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp16}, p_underlying.next);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp10, tmp17}, p_mapper);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp19 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp10, tmp18}, tmp19);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{tmp10, tmp20}, p_underlying.object);
    tmp21 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp22 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp22}, p_underlying.next);
    tmp23 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    CodeStubAssembler(state_).StoreReference<Oddball>(CodeStubAssembler::Reference{tmp10, tmp23}, tmp6);
    tmp24 = TORQUE_CAST(TNode<HeapObject>{tmp10});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSIteratorFlatMapHelper>{tmp24};
}

TF_BUILTIN(IteratorPrototypeFlatMap, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kMapper);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, kFlatMapMethodName_0(state_));
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, kFlatMapMethodName_0(state_));
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<JSIteratorFlatMapHelper> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = NewJSIteratorFlatMapHelper_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<JSReceiver>{tmp2});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(IteratorFlatMapHelperNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSIteratorFlatMapHelper> parameter1 = UncheckedParameter<JSIteratorFlatMapHelper>(Descriptor::kHelper);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Object, HeapObject> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block40(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, JSReceiver, Object> block51(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, JSReceiver, Object> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, JSReceiver, Object> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block52(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block53(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Object, HeapObject> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Object, HeapObject> block54(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Object, HeapObject, Object, HeapObject> block55(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<JSReceiver> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<BoolT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp2 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp3});
    tmp5 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp4});
    tmp6 = IsIteratorHelperExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    ca_.Branch(tmp6, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp7;
  TNode<Oddball> tmp8;
  TNode<JSObject> tmp9;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp7 = Undefined_0(state_);
    tmp8 = True_0(state_);
    tmp9 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp7}, TNode<Oddball>{tmp8});
    CodeStubAssembler(state_).Return(tmp9);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block7);
  }

  TNode<BoolT> tmp10;
      TNode<Object> tmp12;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block8);
      ca_.Bind(&catch11_skip);
    }
    ca_.Branch(tmp10, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp12, tmp13);
  }

  TNode<IntPtrT> tmp14;
      TNode<Object> tmp16;
  TNode<Number> tmp17;
  TNode<IntPtrT> tmp18;
      TNode<Object> tmp20;
  TNode<JSReceiver> tmp21;
  TNode<IntPtrT> tmp22;
      TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
      TNode<Object> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
      TNode<Object> tmp31;
  TNode<Oddball> tmp32;
  TNode<Oddball> tmp33;
  TNode<BoolT> tmp34;
      TNode<Object> tmp36;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block9);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{parameter1, tmp14});
    compiler::CodeAssemblerExceptionHandlerLabel catch19__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch19__label);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    }
    if (catch19__label.is_used()) {
      compiler::CodeAssemblerLabel catch19_skip(&ca_);
      ca_.Goto(&catch19_skip);
      ca_.Bind(&catch19__label, &tmp20);
      ca_.Goto(&block10);
      ca_.Bind(&catch19_skip);
    }
    tmp21 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp18});
    compiler::CodeAssemblerExceptionHandlerLabel catch23__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch23__label);
    tmp22 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    }
    if (catch23__label.is_used()) {
      compiler::CodeAssemblerLabel catch23_skip(&ca_);
      ca_.Goto(&catch23_skip);
      ca_.Bind(&catch23__label, &tmp24);
      ca_.Goto(&block11);
      ca_.Bind(&catch23_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch26__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch26__label);
    tmp25 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp22});
    }
    if (catch26__label.is_used()) {
      compiler::CodeAssemblerLabel catch26_skip(&ca_);
      ca_.Goto(&catch26_skip);
      ca_.Bind(&catch26__label, &tmp27);
      ca_.Goto(&block12);
      ca_.Bind(&catch26_skip);
    }
    tmp28 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp25});
    compiler::CodeAssemblerExceptionHandlerLabel catch30__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch30__label);
    tmp29 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    }
    if (catch30__label.is_used()) {
      compiler::CodeAssemblerLabel catch30_skip(&ca_);
      ca_.Goto(&catch30_skip);
      ca_.Bind(&catch30__label, &tmp31);
      ca_.Goto(&block15);
      ca_.Bind(&catch30_skip);
    }
    tmp32 = CodeStubAssembler(state_).LoadReference<Oddball>(CodeStubAssembler::Reference{parameter1, tmp29});
    tmp33 = False_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch35__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch35__label);
    tmp34 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp32}, TNode<HeapObject>{tmp33});
    }
    if (catch35__label.is_used()) {
      compiler::CodeAssemblerLabel catch35_skip(&ca_);
      ca_.Goto(&catch35_skip);
      ca_.Bind(&catch35__label, &tmp36);
      ca_.Goto(&block16);
      ca_.Bind(&catch35_skip);
    }
    ca_.Branch(tmp34, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{tmp21, tmp28});
  }

  TNode<HeapObject> tmp37;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp37 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp16, tmp37);
  }

  TNode<HeapObject> tmp38;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp38 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp20, tmp38);
  }

  TNode<HeapObject> tmp39;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp39 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp24, tmp39);
  }

  TNode<HeapObject> tmp40;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp40 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp27, tmp40);
  }

  TNode<HeapObject> tmp41;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp41 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp31, tmp41);
  }

  TNode<HeapObject> tmp42;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp42 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp36, tmp42);
  }

  TNode<JSReceiver> tmp43;
      TNode<Object> tmp46;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    compiler::CodeAssemblerLabel label44(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch45__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch45__label);
    tmp43 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}}, TNode<Map>{tmp0}, &label44);
    }
    if (catch45__label.is_used()) {
      compiler::CodeAssemblerLabel catch45_skip(&ca_);
      ca_.Goto(&catch45_skip);
      ca_.Bind(&catch45__label, &tmp46);
      ca_.Goto(&block21);
      ca_.Bind(&catch45_skip);
    }
    ca_.Goto(&block19);
    if (label44.is_used()) {
      ca_.Bind(&label44);
      ca_.Goto(&block20);
    }
  }

  TNode<HeapObject> tmp47;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp47 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp46, tmp47);
  }

      TNode<Object> tmp49;
  TNode<Oddball> tmp50;
  TNode<Oddball> tmp51;
  TNode<JSObject> tmp52;
      TNode<Object> tmp54;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::CodeAssemblerExceptionHandlerLabel catch48__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch48__label);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    }
    if (catch48__label.is_used()) {
      compiler::CodeAssemblerLabel catch48_skip(&ca_);
      ca_.Goto(&catch48_skip);
      ca_.Bind(&catch48__label, &tmp49);
      ca_.Goto(&block22);
      ca_.Bind(&catch48_skip);
    }
    tmp50 = Undefined_0(state_);
    tmp51 = True_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch53__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch53__label);
    tmp52 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp50}, TNode<Oddball>{tmp51});
    }
    if (catch53__label.is_used()) {
      compiler::CodeAssemblerLabel catch53_skip(&ca_);
      ca_.Goto(&catch53_skip);
      ca_.Bind(&catch53__label, &tmp54);
      ca_.Goto(&block23);
      ca_.Bind(&catch53_skip);
    }
    CodeStubAssembler(state_).Return(tmp52);
  }

  TNode<Object> tmp55;
      TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
      TNode<Object> tmp60;
  TNode<JSReceiver> tmp61;
  TNode<Oddball> tmp62;
  TNode<Object> tmp63;
      TNode<Object> tmp65;
  TNode<JSReceiver> tmp66;
      TNode<Object> tmp69;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    compiler::CodeAssemblerExceptionHandlerLabel catch56__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch56__label);
    tmp55 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp43}, TNode<Map>{tmp0});
    }
    if (catch56__label.is_used()) {
      compiler::CodeAssemblerLabel catch56_skip(&ca_);
      ca_.Goto(&catch56_skip);
      ca_.Bind(&catch56__label, &tmp57);
      ca_.Goto(&block24);
      ca_.Bind(&catch56_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch59__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch59__label);
    tmp58 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    }
    if (catch59__label.is_used()) {
      compiler::CodeAssemblerLabel catch59_skip(&ca_);
      ca_.Goto(&catch59_skip);
      ca_.Bind(&catch59__label, &tmp60);
      ca_.Goto(&block27);
      ca_.Bind(&catch59_skip);
    }
    tmp61 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp58});
    tmp62 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch64__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch64__label);
    tmp63 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, TNode<Object>{tmp55}, TNode<Object>{tmp17});
    }
    if (catch64__label.is_used()) {
      compiler::CodeAssemblerLabel catch64_skip(&ca_);
      ca_.Goto(&catch64_skip);
      ca_.Bind(&catch64__label, &tmp65);
      ca_.Goto(&block28);
      ca_.Bind(&catch64_skip);
    }
    compiler::CodeAssemblerLabel label67(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch68__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch68__label);
    tmp66 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp63}, &label67);
    }
    if (catch68__label.is_used()) {
      compiler::CodeAssemblerLabel catch68_skip(&ca_);
      ca_.Goto(&catch68_skip);
      ca_.Bind(&catch68__label, &tmp69);
      ca_.Goto(&block33);
      ca_.Bind(&catch68_skip);
    }
    ca_.Goto(&block31);
    if (label67.is_used()) {
      ca_.Bind(&label67);
      ca_.Goto(&block32);
    }
  }

  TNode<HeapObject> tmp70;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp70 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp49, tmp70);
  }

  TNode<HeapObject> tmp71;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp71 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp54, tmp71);
  }

  TNode<HeapObject> tmp72;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp72 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp57, tmp72);
  }

  TNode<HeapObject> tmp73;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp73 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp21, tmp28, tmp60, tmp73);
  }

  TNode<HeapObject> tmp74;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp74 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp21, tmp28, tmp65, tmp74);
  }

  TNode<HeapObject> tmp75;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp75 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp21, tmp28, tmp69, tmp75);
  }

      TNode<Object> tmp77;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    compiler::CodeAssemblerExceptionHandlerLabel catch76__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch76__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, kFlatMapMethodName_0(state_));
    }
    if (catch76__label.is_used()) {
      compiler::CodeAssemblerLabel catch76_skip(&ca_);
      ca_.Bind(&catch76__label, &tmp77);
      ca_.Goto(&block34);
    }
  }

  TNode<JSReceiver> tmp78;
  TNode<Object> tmp79;
      TNode<Object> tmp81;
  TNode<IntPtrT> tmp82;
      TNode<Object> tmp84;
  TNode<IntPtrT> tmp85;
      TNode<Object> tmp87;
  TNode<IntPtrT> tmp88;
      TNode<Object> tmp90;
  TNode<IntPtrT> tmp91;
      TNode<Object> tmp93;
  TNode<Oddball> tmp94;
  TNode<IntPtrT> tmp95;
      TNode<Object> tmp97;
  TNode<Number> tmp98;
      TNode<Object> tmp100;
  TNode<Number> tmp101;
      TNode<Object> tmp103;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    compiler::CodeAssemblerExceptionHandlerLabel catch80__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch80__label);
    std::tie(tmp78, tmp79) = GetIteratorFlattenable_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp66}).Flatten();
    }
    if (catch80__label.is_used()) {
      compiler::CodeAssemblerLabel catch80_skip(&ca_);
      ca_.Goto(&catch80_skip);
      ca_.Bind(&catch80__label, &tmp81);
      ca_.Goto(&block35);
      ca_.Bind(&catch80_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch83__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch83__label);
    tmp82 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    }
    if (catch83__label.is_used()) {
      compiler::CodeAssemblerLabel catch83_skip(&ca_);
      ca_.Goto(&catch83_skip);
      ca_.Bind(&catch83__label, &tmp84);
      ca_.Goto(&block36);
      ca_.Bind(&catch83_skip);
    }
    CodeStubAssembler(state_).StoreReference<JSReceiver>(CodeStubAssembler::Reference{parameter1, tmp82}, tmp78);
    compiler::CodeAssemblerExceptionHandlerLabel catch86__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch86__label);
    tmp85 = FromConstexpr_intptr_constexpr_intptr_0(state_, 4);
    }
    if (catch86__label.is_used()) {
      compiler::CodeAssemblerLabel catch86_skip(&ca_);
      ca_.Goto(&catch86_skip);
      ca_.Bind(&catch86__label, &tmp87);
      ca_.Goto(&block37);
      ca_.Bind(&catch86_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch89__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch89__label);
    tmp88 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp82}, TNode<IntPtrT>{tmp85});
    }
    if (catch89__label.is_used()) {
      compiler::CodeAssemblerLabel catch89_skip(&ca_);
      ca_.Goto(&catch89_skip);
      ca_.Bind(&catch89__label, &tmp90);
      ca_.Goto(&block38);
      ca_.Bind(&catch89_skip);
    }
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{parameter1, tmp88}, tmp79);
    compiler::CodeAssemblerExceptionHandlerLabel catch92__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch92__label);
    tmp91 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    }
    if (catch92__label.is_used()) {
      compiler::CodeAssemblerLabel catch92_skip(&ca_);
      ca_.Goto(&catch92_skip);
      ca_.Bind(&catch92__label, &tmp93);
      ca_.Goto(&block39);
      ca_.Bind(&catch92_skip);
    }
    tmp94 = True_0(state_);
    CodeStubAssembler(state_).StoreReference<Oddball>(CodeStubAssembler::Reference{parameter1, tmp91}, tmp94);
    compiler::CodeAssemblerExceptionHandlerLabel catch96__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch96__label);
    tmp95 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    }
    if (catch96__label.is_used()) {
      compiler::CodeAssemblerLabel catch96_skip(&ca_);
      ca_.Goto(&catch96_skip);
      ca_.Bind(&catch96__label, &tmp97);
      ca_.Goto(&block42);
      ca_.Bind(&catch96_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch99__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch99__label);
    tmp98 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch99__label.is_used()) {
      compiler::CodeAssemblerLabel catch99_skip(&ca_);
      ca_.Goto(&catch99_skip);
      ca_.Bind(&catch99__label, &tmp100);
      ca_.Goto(&block43);
      ca_.Bind(&catch99_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch102__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch102__label);
    tmp101 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp17}, TNode<Number>{tmp98});
    }
    if (catch102__label.is_used()) {
      compiler::CodeAssemblerLabel catch102_skip(&ca_);
      ca_.Goto(&catch102_skip);
      ca_.Bind(&catch102__label, &tmp103);
      ca_.Goto(&block44);
      ca_.Bind(&catch102_skip);
    }
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{parameter1, tmp95}, tmp101);
    ca_.Goto(&block14, tmp78, tmp79);
  }

  TNode<HeapObject> tmp104;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp104 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp21, tmp28, tmp77, tmp104);
  }

  TNode<HeapObject> tmp105;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    tmp105 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp21, tmp28, tmp81, tmp105);
  }

  TNode<HeapObject> tmp106;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp106 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp78, tmp79, tmp84, tmp106);
  }

  TNode<HeapObject> tmp107;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp107 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp78, tmp79, tmp87, tmp107);
  }

  TNode<HeapObject> tmp108;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp108 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp78, tmp79, tmp90, tmp108);
  }

  TNode<HeapObject> tmp109;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp109 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block26, tmp78, tmp79, tmp93, tmp109);
  }

  TNode<JSReceiver> phi_bb26_6;
  TNode<Object> phi_bb26_7;
  TNode<Object> phi_bb26_10;
  TNode<HeapObject> phi_bb26_11;
      TNode<Object> tmp111;
      TNode<Object> tmp113;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_6, &phi_bb26_7, &phi_bb26_10, &phi_bb26_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch110__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch110__label);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}});
    }
    if (catch110__label.is_used()) {
      compiler::CodeAssemblerLabel catch110_skip(&ca_);
      ca_.Goto(&catch110_skip);
      ca_.Bind(&catch110__label, &tmp111);
      ca_.Goto(&block40, phi_bb26_6, phi_bb26_7);
      ca_.Bind(&catch110_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch112__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch112__label);
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb26_10, phi_bb26_11);
    CodeStubAssembler(state_).Unreachable();
    }
    if (catch112__label.is_used()) {
      compiler::CodeAssemblerLabel catch112_skip(&ca_);
      ca_.Bind(&catch112__label, &tmp113);
      ca_.Goto(&block41, phi_bb26_6, phi_bb26_7);
    }
  }

  TNode<JSReceiver> phi_bb40_6;
  TNode<Object> phi_bb40_7;
  TNode<HeapObject> tmp114;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_6, &phi_bb40_7);
    tmp114 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp111, tmp114);
  }

  TNode<JSReceiver> phi_bb41_6;
  TNode<Object> phi_bb41_7;
  TNode<HeapObject> tmp115;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_6, &phi_bb41_7);
    tmp115 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp113, tmp115);
  }

  TNode<HeapObject> tmp116;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp116 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp97, tmp116);
  }

  TNode<HeapObject> tmp117;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp117 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp100, tmp117);
  }

  TNode<HeapObject> tmp118;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp118 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp103, tmp118);
  }

  TNode<JSReceiver> phi_bb14_6;
  TNode<Object> phi_bb14_7;
  TNode<JSReceiver> tmp119;
      TNode<Object> tmp122;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_6, &phi_bb14_7);
    compiler::CodeAssemblerLabel label120(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch121__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch121__label);
    tmp119 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{phi_bb14_6}, TNode<Object>{phi_bb14_7}}, TNode<Map>{tmp0}, &label120);
    }
    if (catch121__label.is_used()) {
      compiler::CodeAssemblerLabel catch121_skip(&ca_);
      ca_.Goto(&catch121_skip);
      ca_.Bind(&catch121__label, &tmp122);
      ca_.Goto(&block51, phi_bb14_6, phi_bb14_7, phi_bb14_6, phi_bb14_7);
      ca_.Bind(&catch121_skip);
    }
    ca_.Goto(&block49, phi_bb14_6, phi_bb14_7, phi_bb14_6, phi_bb14_7);
    if (label120.is_used()) {
      ca_.Bind(&label120);
      ca_.Goto(&block50, phi_bb14_6, phi_bb14_7, phi_bb14_6, phi_bb14_7);
    }
  }

  TNode<JSReceiver> phi_bb51_6;
  TNode<Object> phi_bb51_7;
  TNode<JSReceiver> phi_bb51_9;
  TNode<Object> phi_bb51_10;
  TNode<HeapObject> tmp123;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_6, &phi_bb51_7, &phi_bb51_9, &phi_bb51_10);
    tmp123 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block48, phi_bb51_6, phi_bb51_7, tmp122, tmp123);
  }

  TNode<JSReceiver> phi_bb50_6;
  TNode<Object> phi_bb50_7;
  TNode<JSReceiver> phi_bb50_9;
  TNode<Object> phi_bb50_10;
  TNode<IntPtrT> tmp124;
      TNode<Object> tmp126;
  TNode<Oddball> tmp127;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_6, &phi_bb50_7, &phi_bb50_9, &phi_bb50_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch125__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch125__label);
    tmp124 = FromConstexpr_intptr_constexpr_int31_0(state_, 36);
    }
    if (catch125__label.is_used()) {
      compiler::CodeAssemblerLabel catch125_skip(&ca_);
      ca_.Goto(&catch125_skip);
      ca_.Bind(&catch125__label, &tmp126);
      ca_.Goto(&block56, phi_bb50_6, phi_bb50_7);
      ca_.Bind(&catch125_skip);
    }
    tmp127 = False_0(state_);
    CodeStubAssembler(state_).StoreReference<Oddball>(CodeStubAssembler::Reference{parameter1, tmp124}, tmp127);
    ca_.Goto(&block7);
  }

  TNode<JSReceiver> phi_bb49_6;
  TNode<Object> phi_bb49_7;
  TNode<JSReceiver> phi_bb49_9;
  TNode<Object> phi_bb49_10;
  TNode<Object> tmp128;
      TNode<Object> tmp130;
  TNode<Oddball> tmp131;
  TNode<JSObject> tmp132;
      TNode<Object> tmp134;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_6, &phi_bb49_7, &phi_bb49_9, &phi_bb49_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch129__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch129__label);
    tmp128 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp119}, TNode<Map>{tmp0});
    }
    if (catch129__label.is_used()) {
      compiler::CodeAssemblerLabel catch129_skip(&ca_);
      ca_.Goto(&catch129_skip);
      ca_.Bind(&catch129__label, &tmp130);
      ca_.Goto(&block52, phi_bb49_6, phi_bb49_7);
      ca_.Bind(&catch129_skip);
    }
    tmp131 = False_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch133__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch133__label);
    tmp132 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{parameter0}, TNode<Object>{tmp128}, TNode<Oddball>{tmp131});
    }
    if (catch133__label.is_used()) {
      compiler::CodeAssemblerLabel catch133_skip(&ca_);
      ca_.Goto(&catch133_skip);
      ca_.Bind(&catch133__label, &tmp134);
      ca_.Goto(&block53, phi_bb49_6, phi_bb49_7);
      ca_.Bind(&catch133_skip);
    }
    CodeStubAssembler(state_).Return(tmp132);
  }

  TNode<JSReceiver> phi_bb52_6;
  TNode<Object> phi_bb52_7;
  TNode<HeapObject> tmp135;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_6, &phi_bb52_7);
    tmp135 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block48, phi_bb52_6, phi_bb52_7, tmp130, tmp135);
  }

  TNode<JSReceiver> phi_bb53_6;
  TNode<Object> phi_bb53_7;
  TNode<HeapObject> tmp136;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_6, &phi_bb53_7);
    tmp136 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block48, phi_bb53_6, phi_bb53_7, tmp134, tmp136);
  }

  TNode<JSReceiver> phi_bb48_6;
  TNode<Object> phi_bb48_7;
  TNode<Object> phi_bb48_8;
  TNode<HeapObject> phi_bb48_9;
      TNode<Object> tmp138;
      TNode<Object> tmp140;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_6, &phi_bb48_7, &phi_bb48_8, &phi_bb48_9);
    compiler::CodeAssemblerExceptionHandlerLabel catch137__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch137__label);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp5}});
    }
    if (catch137__label.is_used()) {
      compiler::CodeAssemblerLabel catch137_skip(&ca_);
      ca_.Goto(&catch137_skip);
      ca_.Bind(&catch137__label, &tmp138);
      ca_.Goto(&block54, phi_bb48_6, phi_bb48_7, phi_bb48_8, phi_bb48_9);
      ca_.Bind(&catch137_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch139__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch139__label);
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb48_8, phi_bb48_9);
    CodeStubAssembler(state_).Unreachable();
    }
    if (catch139__label.is_used()) {
      compiler::CodeAssemblerLabel catch139_skip(&ca_);
      ca_.Bind(&catch139__label, &tmp140);
      ca_.Goto(&block55, phi_bb48_6, phi_bb48_7, phi_bb48_8, phi_bb48_9, phi_bb48_8, phi_bb48_9);
    }
  }

  TNode<JSReceiver> phi_bb54_6;
  TNode<Object> phi_bb54_7;
  TNode<Object> phi_bb54_8;
  TNode<HeapObject> phi_bb54_9;
  TNode<HeapObject> tmp141;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_6, &phi_bb54_7, &phi_bb54_8, &phi_bb54_9);
    tmp141 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp138, tmp141);
  }

  TNode<JSReceiver> phi_bb55_6;
  TNode<Object> phi_bb55_7;
  TNode<Object> phi_bb55_8;
  TNode<HeapObject> phi_bb55_9;
  TNode<Object> phi_bb55_11;
  TNode<HeapObject> phi_bb55_12;
  TNode<HeapObject> tmp142;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_6, &phi_bb55_7, &phi_bb55_8, &phi_bb55_9, &phi_bb55_11, &phi_bb55_12);
    tmp142 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp140, tmp142);
  }

  TNode<JSReceiver> phi_bb56_6;
  TNode<Object> phi_bb56_7;
  TNode<HeapObject> tmp143;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_6, &phi_bb56_7);
    tmp143 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp126, tmp143);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb4_5;
  TNode<HeapObject> phi_bb4_6;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_6);
    MarkIteratorHelperAsExhausted_0(state_, TNode<JSIteratorHelper>{parameter1});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb4_5, phi_bb4_6);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(IteratorPrototypeReduce, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Number> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Number, Object, Number> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Number, Object, HeapObject> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.reduce");
  }

  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<JSReceiver> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, &label5);
    ca_.Goto(&block7);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.reduce");
  }

  TNode<JSReceiver> tmp6;
  TNode<Object> tmp7;
  TNode<Map> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp6, tmp7) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp8 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<JSReceiver> tmp11;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerLabel label12(&ca_);
    tmp11 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp6}, TNode<Object>{tmp7}}, TNode<Map>{tmp8}, &label12);
    ca_.Goto(&block14);
    if (label12.is_used()) {
      ca_.Bind(&label12);
      ca_.Goto(&block15);
    }
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kIteratorReduceNoInitial, "Iterator.prototype.reduce");
  }

  TNode<Object> tmp13;
  TNode<Number> tmp14;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp13 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp11}, TNode<Map>{tmp8});
    tmp14 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ca_.Goto(&block11, tmp11, tmp13, tmp14);
  }

  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Number> tmp17;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp15});
    tmp17 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block11, ca_.Uninitialized<JSReceiver>(), tmp16, tmp17);
  }

  TNode<JSReceiver> phi_bb11_11;
  TNode<Object> phi_bb11_12;
  TNode<Number> phi_bb11_13;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_11, &phi_bb11_12, &phi_bb11_13);
    ca_.Goto(&block18, phi_bb11_11, phi_bb11_12, phi_bb11_13);
  }

  TNode<JSReceiver> phi_bb18_11;
  TNode<Object> phi_bb18_12;
  TNode<Number> phi_bb18_13;
  TNode<BoolT> tmp18;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_11, &phi_bb18_12, &phi_bb18_13);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp18, &block16, std::vector<compiler::Node*>{phi_bb18_11, phi_bb18_12, phi_bb18_13}, &block17, std::vector<compiler::Node*>{phi_bb18_11, phi_bb18_12, phi_bb18_13});
  }

  TNode<JSReceiver> phi_bb16_11;
  TNode<Object> phi_bb16_12;
  TNode<Number> phi_bb16_13;
  TNode<JSReceiver> tmp19;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13);
    compiler::CodeAssemblerLabel label20(&ca_);
    tmp19 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp6}, TNode<Object>{tmp7}}, TNode<Map>{tmp8}, &label20);
    ca_.Goto(&block21, phi_bb16_11, phi_bb16_12, phi_bb16_13);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block22, phi_bb16_11, phi_bb16_12, phi_bb16_13);
    }
  }

  TNode<JSReceiver> phi_bb22_11;
  TNode<Object> phi_bb22_12;
  TNode<Number> phi_bb22_13;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_11, &phi_bb22_12, &phi_bb22_13);
    arguments.PopAndReturn(phi_bb22_12);
  }

  TNode<JSReceiver> phi_bb21_11;
  TNode<Object> phi_bb21_12;
  TNode<Number> phi_bb21_13;
  TNode<Object> tmp21;
  TNode<Oddball> tmp22;
  TNode<Object> tmp23;
      TNode<Object> tmp25;
  TNode<Number> tmp26;
      TNode<Object> tmp28;
  TNode<Number> tmp29;
      TNode<Object> tmp31;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_11, &phi_bb21_12, &phi_bb21_13);
    tmp21 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp19}, TNode<Map>{tmp8});
    tmp22 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch24__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch24__label);
    tmp23 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp4}, TNode<Object>{tmp22}, TNode<Object>{phi_bb21_12}, TNode<Object>{tmp21}, TNode<Object>{phi_bb21_13});
    }
    if (catch24__label.is_used()) {
      compiler::CodeAssemblerLabel catch24_skip(&ca_);
      ca_.Goto(&catch24_skip);
      ca_.Bind(&catch24__label, &tmp25);
      ca_.Goto(&block25, phi_bb21_12, phi_bb21_13, phi_bb21_12, phi_bb21_13);
      ca_.Bind(&catch24_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch27__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch27__label);
    tmp26 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch27__label.is_used()) {
      compiler::CodeAssemblerLabel catch27_skip(&ca_);
      ca_.Goto(&catch27_skip);
      ca_.Bind(&catch27__label, &tmp28);
      ca_.Goto(&block26, phi_bb21_13, phi_bb21_13, phi_bb21_13);
      ca_.Bind(&catch27_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch30__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch30__label);
    tmp29 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb21_13}, TNode<Number>{tmp26});
    }
    if (catch30__label.is_used()) {
      compiler::CodeAssemblerLabel catch30_skip(&ca_);
      ca_.Goto(&catch30_skip);
      ca_.Bind(&catch30__label, &tmp31);
      ca_.Goto(&block27, phi_bb21_13, phi_bb21_13);
      ca_.Bind(&catch30_skip);
    }
    ca_.Goto(&block18, tmp19, tmp23, tmp29);
  }

  TNode<Object> phi_bb25_12;
  TNode<Number> phi_bb25_13;
  TNode<Object> phi_bb25_18;
  TNode<Number> phi_bb25_20;
  TNode<HeapObject> tmp32;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_12, &phi_bb25_13, &phi_bb25_18, &phi_bb25_20);
    tmp32 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block24, phi_bb25_12, phi_bb25_13, tmp25, tmp32);
  }

  TNode<Number> phi_bb26_13;
  TNode<Number> phi_bb26_16;
  TNode<Number> phi_bb26_17;
  TNode<HeapObject> tmp33;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_13, &phi_bb26_16, &phi_bb26_17);
    tmp33 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block24, tmp23, phi_bb26_13, tmp28, tmp33);
  }

  TNode<Number> phi_bb27_13;
  TNode<Number> phi_bb27_16;
  TNode<HeapObject> tmp34;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_13, &phi_bb27_16);
    tmp34 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block24, tmp23, phi_bb27_13, tmp31, tmp34);
  }

  TNode<Object> phi_bb24_12;
  TNode<Number> phi_bb24_13;
  TNode<Object> phi_bb24_15;
  TNode<HeapObject> phi_bb24_16;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_12, &phi_bb24_13, &phi_bb24_15, &phi_bb24_16);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp6}, TNode<Object>{tmp7}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb24_15, phi_bb24_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSReceiver> phi_bb17_11;
  TNode<Object> phi_bb17_12;
  TNode<Number> phi_bb17_13;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(IteratorPrototypeToArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.toArray");
  }

  TNode<JSReceiver> tmp2;
  TNode<Object> tmp3;
  TNode<FixedArray> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Map> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    std::tie(tmp2, tmp3) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    std::tie(tmp4, tmp5, tmp6) = NewGrowableFixedArray_0(state_).Flatten();
    tmp7 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block7, tmp4, tmp5, tmp6, ca_.Uninitialized<JSReceiver>());
  }

  TNode<FixedArray> phi_bb7_5;
  TNode<IntPtrT> phi_bb7_6;
  TNode<IntPtrT> phi_bb7_7;
  TNode<JSReceiver> phi_bb7_9;
  TNode<BoolT> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_5, &phi_bb7_6, &phi_bb7_7, &phi_bb7_9);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp8, &block5, std::vector<compiler::Node*>{phi_bb7_5, phi_bb7_6, phi_bb7_7, phi_bb7_9}, &block6, std::vector<compiler::Node*>{phi_bb7_5, phi_bb7_6, phi_bb7_7, phi_bb7_9});
  }

  TNode<FixedArray> phi_bb5_5;
  TNode<IntPtrT> phi_bb5_6;
  TNode<IntPtrT> phi_bb5_7;
  TNode<JSReceiver> phi_bb5_9;
  TNode<JSReceiver> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_6, &phi_bb5_7, &phi_bb5_9);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp2}, TNode<Object>{tmp3}}, TNode<Map>{tmp7}, &label10);
    ca_.Goto(&block10, phi_bb5_5, phi_bb5_6, phi_bb5_7, phi_bb5_9);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block11, phi_bb5_5, phi_bb5_6, phi_bb5_7, phi_bb5_9);
    }
  }

  TNode<FixedArray> phi_bb11_5;
  TNode<IntPtrT> phi_bb11_6;
  TNode<IntPtrT> phi_bb11_7;
  TNode<JSReceiver> phi_bb11_9;
  TNode<NativeContext> tmp11;
  TNode<Map> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<FixedArray> tmp14;
  TNode<Smi> tmp15;
  TNode<JSArray> tmp16;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5, &phi_bb11_6, &phi_bb11_7, &phi_bb11_9);
    tmp11 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{parameter0});
    tmp12 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp11});
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb11_5}, TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{phi_bb11_7}, TNode<IntPtrT>{phi_bb11_7});
    tmp15 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb11_7});
    tmp16 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp12}, TNode<FixedArrayBase>{tmp14}, TNode<Smi>{tmp15});
    CodeStubAssembler(state_).Return(tmp16);
  }

  TNode<FixedArray> phi_bb10_5;
  TNode<IntPtrT> phi_bb10_6;
  TNode<IntPtrT> phi_bb10_7;
  TNode<JSReceiver> phi_bb10_9;
  TNode<Object> tmp17;
  TNode<BoolT> tmp18;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_6, &phi_bb10_7, &phi_bb10_9);
    tmp17 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp9}, TNode<Map>{tmp7});
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb10_6}, TNode<IntPtrT>{phi_bb10_7});
    ca_.Branch(tmp18, &block32, std::vector<compiler::Node*>{phi_bb10_5, phi_bb10_6, phi_bb10_7}, &block33, std::vector<compiler::Node*>{phi_bb10_5, phi_bb10_6, phi_bb10_7});
  }

  TNode<FixedArray> phi_bb32_5;
  TNode<IntPtrT> phi_bb32_6;
  TNode<IntPtrT> phi_bb32_7;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<FixedArray> tmp25;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_5, &phi_bb32_6, &phi_bb32_7);
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb32_6}, TNode<IntPtrT>{tmp19});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb32_6}, TNode<IntPtrT>{tmp20});
    tmp22 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp22});
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp25 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb32_5}, TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{phi_bb32_7}, TNode<IntPtrT>{tmp23});
    ca_.Goto(&block33, tmp25, tmp23, phi_bb32_7);
  }

  TNode<FixedArray> phi_bb33_5;
  TNode<IntPtrT> phi_bb33_6;
  TNode<IntPtrT> phi_bb33_7;
  TNode<Object> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<UintPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<BoolT> tmp33;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_5, &phi_bb33_6, &phi_bb33_7);
    std::tie(tmp26, tmp27, tmp28) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb33_5}).Flatten();
    tmp29 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp30 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb33_7}, TNode<IntPtrT>{tmp29});
    tmp31 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb33_7});
    tmp32 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp28});
    tmp33 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp31}, TNode<UintPtrT>{tmp32});
    ca_.Branch(tmp33, &block51, std::vector<compiler::Node*>{phi_bb33_7, phi_bb33_7, phi_bb33_7, phi_bb33_7}, &block52, std::vector<compiler::Node*>{phi_bb33_7, phi_bb33_7, phi_bb33_7, phi_bb33_7});
  }

  TNode<IntPtrT> phi_bb51_17;
  TNode<IntPtrT> phi_bb51_18;
  TNode<IntPtrT> phi_bb51_22;
  TNode<IntPtrT> phi_bb51_23;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<Object> tmp36;
  TNode<IntPtrT> tmp37;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_17, &phi_bb51_18, &phi_bb51_22, &phi_bb51_23);
    tmp34 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb51_23});
    tmp35 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp27}, TNode<IntPtrT>{tmp34});
    std::tie(tmp36, tmp37) = NewReference_Object_0(state_, TNode<Object>{tmp26}, TNode<IntPtrT>{tmp35}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp36, tmp37}, tmp17);
    ca_.Goto(&block7, phi_bb33_5, phi_bb33_6, tmp30, tmp9);
  }

  TNode<IntPtrT> phi_bb52_17;
  TNode<IntPtrT> phi_bb52_18;
  TNode<IntPtrT> phi_bb52_22;
  TNode<IntPtrT> phi_bb52_23;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_17, &phi_bb52_18, &phi_bb52_22, &phi_bb52_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb6_5;
  TNode<IntPtrT> phi_bb6_6;
  TNode<IntPtrT> phi_bb6_7;
  TNode<JSReceiver> phi_bb6_9;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5, &phi_bb6_6, &phi_bb6_7, &phi_bb6_9);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(IteratorPrototypeForEach, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kFn);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Object, HeapObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.forEach");
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.forEach");
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<Number> tmp6;
  TNode<Map> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block11, tmp6);
  }

  TNode<Number> phi_bb11_7;
  TNode<BoolT> tmp8;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{phi_bb11_7}, &block10, std::vector<compiler::Node*>{phi_bb11_7});
  }

  TNode<Number> phi_bb9_7;
  TNode<JSReceiver> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<Map>{tmp7}, &label10);
    ca_.Goto(&block14, phi_bb9_7);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block15, phi_bb9_7);
    }
  }

  TNode<Number> phi_bb15_7;
  TNode<Oddball> tmp11;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7);
    tmp11 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Number> phi_bb14_7;
  TNode<Object> tmp12;
  TNode<Oddball> tmp13;
  TNode<Object> tmp14;
      TNode<Object> tmp16;
  TNode<Number> tmp17;
      TNode<Object> tmp19;
  TNode<Number> tmp20;
      TNode<Object> tmp22;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7);
    tmp12 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp9}, TNode<Map>{tmp7});
    tmp13 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp14 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp2}, TNode<Object>{tmp13}, TNode<Object>{tmp12}, TNode<Object>{phi_bb14_7});
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block18, phi_bb14_7, phi_bb14_7);
      ca_.Bind(&catch15_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch18__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch18__label);
    tmp17 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    }
    if (catch18__label.is_used()) {
      compiler::CodeAssemblerLabel catch18_skip(&ca_);
      ca_.Goto(&catch18_skip);
      ca_.Bind(&catch18__label, &tmp19);
      ca_.Goto(&block19, phi_bb14_7, phi_bb14_7, phi_bb14_7);
      ca_.Bind(&catch18_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch21__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch21__label);
    tmp20 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb14_7}, TNode<Number>{tmp17});
    }
    if (catch21__label.is_used()) {
      compiler::CodeAssemblerLabel catch21_skip(&ca_);
      ca_.Goto(&catch21_skip);
      ca_.Bind(&catch21__label, &tmp22);
      ca_.Goto(&block20, phi_bb14_7, phi_bb14_7);
      ca_.Bind(&catch21_skip);
    }
    ca_.Goto(&block11, tmp20);
  }

  TNode<Number> phi_bb18_7;
  TNode<Number> phi_bb18_15;
  TNode<HeapObject> tmp23;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_15);
    tmp23 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block17, phi_bb18_7, tmp16, tmp23);
  }

  TNode<Number> phi_bb19_7;
  TNode<Number> phi_bb19_11;
  TNode<Number> phi_bb19_12;
  TNode<HeapObject> tmp24;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7, &phi_bb19_11, &phi_bb19_12);
    tmp24 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block17, phi_bb19_7, tmp19, tmp24);
  }

  TNode<Number> phi_bb20_7;
  TNode<Number> phi_bb20_11;
  TNode<HeapObject> tmp25;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_7, &phi_bb20_11);
    tmp25 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block17, phi_bb20_7, tmp22, tmp25);
  }

  TNode<Number> phi_bb17_7;
  TNode<Object> phi_bb17_11;
  TNode<HeapObject> phi_bb17_12;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_7, &phi_bb17_11, &phi_bb17_12);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb17_11, phi_bb17_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(IteratorPrototypeSome, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPredicate);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.some");
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.some");
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<Number> tmp6;
  TNode<Map> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block11, tmp6);
  }

  TNode<Number> phi_bb11_7;
  TNode<BoolT> tmp8;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{phi_bb11_7}, &block10, std::vector<compiler::Node*>{phi_bb11_7});
  }

  TNode<Number> phi_bb9_7;
  TNode<JSReceiver> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<Map>{tmp7}, &label10);
    ca_.Goto(&block14, phi_bb9_7);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block15, phi_bb9_7);
    }
  }

  TNode<Number> phi_bb15_7;
  TNode<Oddball> tmp11;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7);
    tmp11 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Number> phi_bb14_7;
  TNode<Object> tmp12;
  TNode<Oddball> tmp13;
  TNode<Object> tmp14;
      TNode<Object> tmp16;
  TNode<BoolT> tmp17;
  TNode<BoolT> tmp18;
  TNode<BoolT> tmp19;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7);
    tmp12 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp9}, TNode<Map>{tmp7});
    tmp13 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp14 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp2}, TNode<Object>{tmp13}, TNode<Object>{tmp12}, TNode<Object>{phi_bb14_7});
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block18, phi_bb14_7, phi_bb14_7);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = ToBoolean_0(state_, TNode<Object>{tmp14});
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp17}, TNode<BoolT>{tmp18});
    ca_.Branch(tmp19, &block19, std::vector<compiler::Node*>{phi_bb14_7}, &block20, std::vector<compiler::Node*>{phi_bb14_7});
  }

  TNode<Number> phi_bb18_7;
  TNode<Number> phi_bb18_16;
  TNode<HeapObject> tmp20;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_16);
    tmp20 = GetAndResetPendingMessage_0(state_);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, tmp16, tmp20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> phi_bb19_7;
  TNode<Oddball> tmp21;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    tmp21 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp21);
  }

  TNode<Number> phi_bb20_7;
  TNode<Number> tmp22;
  TNode<Number> tmp23;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_7);
    tmp22 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp23 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb20_7}, TNode<Number>{tmp22});
    ca_.Goto(&block11, tmp23);
  }

  TNode<Number> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(IteratorPrototypeEvery, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPredicate);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.every");
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.every");
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<Number> tmp6;
  TNode<Map> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block11, tmp6);
  }

  TNode<Number> phi_bb11_7;
  TNode<BoolT> tmp8;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{phi_bb11_7}, &block10, std::vector<compiler::Node*>{phi_bb11_7});
  }

  TNode<Number> phi_bb9_7;
  TNode<JSReceiver> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<Map>{tmp7}, &label10);
    ca_.Goto(&block14, phi_bb9_7);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block15, phi_bb9_7);
    }
  }

  TNode<Number> phi_bb15_7;
  TNode<Oddball> tmp11;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7);
    tmp11 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Number> phi_bb14_7;
  TNode<Object> tmp12;
  TNode<Oddball> tmp13;
  TNode<Object> tmp14;
      TNode<Object> tmp16;
  TNode<BoolT> tmp17;
  TNode<BoolT> tmp18;
  TNode<BoolT> tmp19;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7);
    tmp12 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp9}, TNode<Map>{tmp7});
    tmp13 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp14 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp2}, TNode<Object>{tmp13}, TNode<Object>{tmp12}, TNode<Object>{phi_bb14_7});
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block18, phi_bb14_7, phi_bb14_7);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = ToBoolean_0(state_, TNode<Object>{tmp14});
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp17}, TNode<BoolT>{tmp18});
    ca_.Branch(tmp19, &block19, std::vector<compiler::Node*>{phi_bb14_7}, &block20, std::vector<compiler::Node*>{phi_bb14_7});
  }

  TNode<Number> phi_bb18_7;
  TNode<Number> phi_bb18_16;
  TNode<HeapObject> tmp20;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_16);
    tmp20 = GetAndResetPendingMessage_0(state_);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, tmp16, tmp20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> phi_bb19_7;
  TNode<Oddball> tmp21;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    tmp21 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp21);
  }

  TNode<Number> phi_bb20_7;
  TNode<Number> tmp22;
  TNode<Number> tmp23;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_7);
    tmp22 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp23 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb20_7}, TNode<Number>{tmp22});
    ca_.Goto(&block11, tmp23);
  }

  TNode<Number> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(IteratorPrototypeFind, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPredicate);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledOnNonObject, "Iterator.prototype.find");
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, "Iterator.prototype.find");
  }

  TNode<JSReceiver> tmp4;
  TNode<Object> tmp5;
  TNode<Number> tmp6;
  TNode<Map> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    std::tie(tmp4, tmp5) = GetIteratorDirect_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}).Flatten();
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block11, tmp6);
  }

  TNode<Number> phi_bb11_7;
  TNode<BoolT> tmp8;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{phi_bb11_7}, &block10, std::vector<compiler::Node*>{phi_bb11_7});
  }

  TNode<Number> phi_bb9_7;
  TNode<JSReceiver> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7);
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, TNode<Map>{tmp7}, &label10);
    ca_.Goto(&block14, phi_bb9_7);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block15, phi_bb9_7);
    }
  }

  TNode<Number> phi_bb15_7;
  TNode<Oddball> tmp11;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_7);
    tmp11 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }

  TNode<Number> phi_bb14_7;
  TNode<Object> tmp12;
  TNode<Oddball> tmp13;
  TNode<Object> tmp14;
      TNode<Object> tmp16;
  TNode<BoolT> tmp17;
  TNode<BoolT> tmp18;
  TNode<BoolT> tmp19;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7);
    tmp12 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp9}, TNode<Map>{tmp7});
    tmp13 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch15__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch15__label);
    tmp14 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp2}, TNode<Object>{tmp13}, TNode<Object>{tmp12}, TNode<Object>{phi_bb14_7});
    }
    if (catch15__label.is_used()) {
      compiler::CodeAssemblerLabel catch15_skip(&ca_);
      ca_.Goto(&catch15_skip);
      ca_.Bind(&catch15__label, &tmp16);
      ca_.Goto(&block18, phi_bb14_7, phi_bb14_7);
      ca_.Bind(&catch15_skip);
    }
    tmp17 = ToBoolean_0(state_, TNode<Object>{tmp14});
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<BoolT>{tmp17}, TNode<BoolT>{tmp18});
    ca_.Branch(tmp19, &block19, std::vector<compiler::Node*>{phi_bb14_7}, &block20, std::vector<compiler::Node*>{phi_bb14_7});
  }

  TNode<Number> phi_bb18_7;
  TNode<Number> phi_bb18_16;
  TNode<HeapObject> tmp20;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_7, &phi_bb18_16);
    tmp20 = GetAndResetPendingMessage_0(state_);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, tmp16, tmp20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> phi_bb19_7;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_7);
    IteratorClose_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}});
    CodeStubAssembler(state_).Return(tmp12);
  }

  TNode<Number> phi_bb20_7;
  TNode<Number> tmp21;
  TNode<Number> tmp22;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_7);
    tmp21 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp22 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb20_7}, TNode<Number>{tmp21});
    ca_.Goto(&block11, tmp22);
  }

  TNode<Number> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=39&c=5
TNode<JSIteratorMapHelper> Cast_JSIteratorMapHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSIteratorMapHelper> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorMapHelper_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSIteratorMapHelper>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=42&c=5
TNode<JSIteratorFilterHelper> Cast_JSIteratorFilterHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSIteratorFilterHelper> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorFilterHelper_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSIteratorFilterHelper>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=45&c=5
TNode<JSIteratorTakeHelper> Cast_JSIteratorTakeHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSIteratorTakeHelper> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorTakeHelper_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSIteratorTakeHelper>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=48&c=5
TNode<JSIteratorDropHelper> Cast_JSIteratorDropHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSIteratorDropHelper> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorDropHelper_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSIteratorDropHelper>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=51&c=5
TNode<JSIteratorFlatMapHelper> Cast_JSIteratorFlatMapHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSIteratorFlatMapHelper> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorFlatMapHelper_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSIteratorFlatMapHelper>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator-helpers.tq?l=107&c=22
TNode<JSIteratorHelper> Cast_JSIteratorHelper_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSIteratorHelper> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSIteratorHelper_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSIteratorHelper>{tmp2};
}

} // namespace internal
} // namespace v8
