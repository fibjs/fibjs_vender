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

TF_BUILTIN(ProxyGetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, Object, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSReceiver, HeapObject, JSReceiver, Object, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 13);
    CodeStubAssembler(state_).PerformStackCheck(compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 21);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp2);
    compiler::TNode<HeapObject>tmp3 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp2});
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10JSReceiver_140(state_, compiler::TNode<HeapObject>{tmp3}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp3);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSProxy> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block8, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block4, tmp5, tmp6);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSProxy> tmp9;
    compiler::TNode<HeapObject> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    ca_.Bind(&block7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 24);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp12);
    compiler::TNode<HeapObject>tmp13 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp9, tmp12});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 28);
    compiler::TNode<JSReceiver> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = GetMethod_245(state_, compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp11}, "getPrototypeOf", &label0);
    ca_.Goto(&block11, tmp8, tmp9, tmp11, tmp13, tmp11, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp8, tmp9, tmp11, tmp13, tmp11);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSProxy> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    compiler::TNode<HeapObject> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    ca_.Bind(&block12, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block10, tmp15, tmp16, tmp17, tmp18);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSProxy> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<HeapObject> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<JSReceiver> tmp25;
    ca_.Bind(&block11, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block9, tmp20, tmp21, tmp22, tmp23, tmp25);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSProxy> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    compiler::TNode<HeapObject> tmp29;
    ca_.Bind(&block10, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 29);
    ca_.Goto(&block6, tmp26, tmp27, tmp29);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<JSProxy> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<HeapObject> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block9, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 28);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 32);
    compiler::TNode<Object> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp30}, compiler::TNode<JSReceiver>{tmp34}, compiler::TNode<Object>{tmp32}, compiler::TNode<Object>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 36);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = Is10JSReceiver90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1398(state_, compiler::TNode<Context>{tmp30}, compiler::TNode<Object>{tmp35});
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp36});
    ca_.Branch(tmp37, &block13, &block14, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<JSProxy> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<HeapObject> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block13, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 37);
    ca_.Goto(&block2, tmp38, tmp39);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSProxy> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<HeapObject> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Object> tmp49;
    ca_.Bind(&block14, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 42);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    tmp50 = ObjectIsExtensible_311(state_, compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp47});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 44);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = True_65(state_);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp50}, compiler::TNode<HeapObject>{tmp51});
    ca_.Branch(tmp52, &block15, &block16, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<JSProxy> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<HeapObject> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    ca_.Bind(&block15, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 45);
    CodeStubAssembler(state_).Return(tmp58);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSProxy> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<HeapObject> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Object> tmp66;
    ca_.Bind(&block16, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 49);
    compiler::TNode<Object> tmp67;
    USE(tmp67);
    tmp67 = ObjectGetPrototypeOf_314(state_, compiler::TNode<Context>{tmp60}, compiler::TNode<Object>{tmp63});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 54);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = SameValue_242(state_, compiler::TNode<Object>{tmp67}, compiler::TNode<Object>{tmp65});
    ca_.Branch(tmp68, &block17, &block18, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<JSProxy> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<HeapObject> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Object> tmp76;
    ca_.Bind(&block17, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 55);
    CodeStubAssembler(state_).Return(tmp74);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp77;
    compiler::TNode<JSProxy> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<HeapObject> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block18, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 57);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp77}, MessageTemplate::kProxyGetPrototypeOfNonExtensible);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSProxy> tmp86;
    compiler::TNode<Object> tmp87;
    ca_.Bind(&block6, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 61);
    compiler::TNode<Object> tmp88;
    USE(tmp88);
    tmp88 = ObjectGetPrototypeOf_314(state_, compiler::TNode<Context>{tmp85}, compiler::TNode<Object>{tmp87});
    CodeStubAssembler(state_).Return(tmp88);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp89;
    compiler::TNode<JSProxy> tmp90;
    ca_.Bind(&block4, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp89}, MessageTemplate::kProxyRevoked, "getPrototypeOf");
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<JSProxy> tmp92;
    ca_.Bind(&block2, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-prototype-of.tq", 67);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp91}, MessageTemplate::kProxyGetPrototypeOfInvalid);
  }
}

}  // namespace internal
}  // namespace v8

