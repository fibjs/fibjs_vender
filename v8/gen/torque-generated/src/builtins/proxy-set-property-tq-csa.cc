#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "torque-generated/src/builtins/arguments-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/bigint-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"

namespace v8 {
namespace internal {

void CallThrowTypeErrorIfStrict_318(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, MessageTemplate p_message) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 15);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).SmiConstant(p_message);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_63(state_);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_63(state_);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowTypeErrorIfStrict, tmp0, tmp1, tmp2, tmp3);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 13);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block1, &tmp5);
    ca_.Goto(&block2, tmp5);
  }

    compiler::TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
}

TF_BUILTIN(ProxySetProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kReceiverValue));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name, Name> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name, Name, Symbol> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Name> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, HeapObject, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, JSReceiver, JSReceiver, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Name> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Name> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 28);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 30);
    compiler::TNode<Symbol> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast15ATPrivateSymbol_125(state_, compiler::TNode<HeapObject>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<Name>(), tmp2, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<Name>(), tmp2, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSProxy> tmp7;
    compiler::TNode<Name> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Name> tmp11;
    compiler::TNode<Name> tmp12;
    compiler::TNode<Name> tmp13;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSProxy> tmp15;
    compiler::TNode<Name> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Name> tmp19;
    compiler::TNode<Name> tmp20;
    compiler::TNode<Name> tmp21;
    compiler::TNode<Symbol> tmp22;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 31);
    CallThrowTypeErrorIfStrict_318(state_, compiler::TNode<Context>{tmp14}, MessageTemplate::kProxyPrivate);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 32);
    compiler::TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSProxy> tmp25;
    compiler::TNode<Name> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Name> tmp29;
    compiler::TNode<Name> tmp30;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 34);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 35);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 30);
    ca_.Goto(&block1, tmp24, tmp25, tmp26, tmp27, tmp28, ca_.UncheckedCast<Name>(tmp30), tmp30);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSProxy> tmp32;
    compiler::TNode<Name> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Name> tmp36;
    compiler::TNode<Name> tmp37;
    ca_.Bind(&block1, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 45);
    compiler::TNode<IntPtrT> tmp38 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp38);
    compiler::TNode<HeapObject>tmp39 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp32, tmp38});
    compiler::TNode<JSReceiver> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = Cast10JSReceiver_140(state_, compiler::TNode<HeapObject>{tmp39}, &label0);
    ca_.Goto(&block9, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp39, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp39);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSProxy> tmp42;
    compiler::TNode<Name> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Name> tmp46;
    compiler::TNode<HeapObject> tmp47;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.Goto(&block6, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<JSProxy> tmp49;
    compiler::TNode<Name> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Name> tmp53;
    compiler::TNode<HeapObject> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 48);
    compiler::TNode<IntPtrT> tmp56 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp56);
    compiler::TNode<HeapObject>tmp57 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp49, tmp56});
    compiler::TNode<JSReceiver> tmp58;
    USE(tmp58);
    tmp58 = UnsafeCast10JSReceiver_1391(state_, compiler::TNode<Context>{tmp48}, compiler::TNode<Object>{tmp57});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 52);
    compiler::TNode<JSReceiver> tmp59;
    USE(tmp59);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp59 = GetMethod_245(state_, compiler::TNode<Context>{tmp48}, compiler::TNode<Object>{tmp55}, "set", &label0);
    ca_.Goto(&block13, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp58, tmp55, tmp59);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp58, tmp55);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSProxy> tmp61;
    compiler::TNode<Name> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Name> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<JSReceiver> tmp68;
    ca_.Bind(&block14, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<JSProxy> tmp70;
    compiler::TNode<Name> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Name> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    ca_.Bind(&block13, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block11, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp78);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<JSProxy> tmp80;
    compiler::TNode<Name> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Name> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<JSReceiver> tmp86;
    ca_.Bind(&block12, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 53);
    ca_.Goto(&block8, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp86);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<JSProxy> tmp88;
    compiler::TNode<Name> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Name> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    ca_.Bind(&block11, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 70);
    compiler::TNode<Object> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp87}, compiler::TNode<JSReceiver>{tmp95}, compiler::TNode<Object>{tmp93}, compiler::TNode<Object>{tmp94}, compiler::TNode<Object>{tmp92}, compiler::TNode<Object>{tmp90}, compiler::TNode<Object>{tmp91});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 71);
    compiler::TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = ToBoolean_240(state_, compiler::TNode<Object>{tmp96});
    ca_.Branch(tmp97, &block15, &block16, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<JSProxy> tmp99;
    compiler::TNode<Name> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Name> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<JSReceiver> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<Object> tmp107;
    ca_.Bind(&block15, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 72);
    ProxiesCodeStubAssembler(state_).CheckGetSetTrapResult(compiler::TNode<Context>{tmp98}, compiler::TNode<JSReceiver>{tmp105}, compiler::TNode<JSProxy>{tmp99}, compiler::TNode<Name>{tmp100}, compiler::TNode<Object>{tmp101}, JSProxy::AccessKind::kSet);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 73);
    CodeStubAssembler(state_).Return(tmp101);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<JSProxy> tmp109;
    compiler::TNode<Name> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Name> tmp113;
    compiler::TNode<JSReceiver> tmp114;
    compiler::TNode<JSReceiver> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Object> tmp117;
    ca_.Bind(&block16, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 76);
    compiler::TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kProxyTrapReturnedFalsishFor);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 75);
    compiler::TNode<Object> tmp119;
    USE(tmp119);
    tmp119 = FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_168(state_, "set");
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowTypeErrorIfStrict, tmp108, tmp118, tmp119, tmp110);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 77);
    CodeStubAssembler(state_).Return(tmp111);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<JSProxy> tmp122;
    compiler::TNode<Name> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Name> tmp126;
    compiler::TNode<Object> tmp127;
    ca_.Bind(&block8, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 81);
    CodeStubAssembler(state_).CallRuntime(Runtime::kSetPropertyWithReceiver, tmp121, tmp127, tmp123, tmp124, tmp125);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 82);
    CodeStubAssembler(state_).Return(tmp124);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<JSProxy> tmp130;
    compiler::TNode<Name> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Name> tmp134;
    ca_.Bind(&block6, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 85);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp129}, MessageTemplate::kProxyRevoked, "set");
  }
}

}  // namespace internal
}  // namespace v8

