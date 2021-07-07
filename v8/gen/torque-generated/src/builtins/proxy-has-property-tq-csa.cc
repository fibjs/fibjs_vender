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

TF_BUILTIN(ProxyHasProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, HeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, HeapObject, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver, JSReceiver, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, JSReceiver, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Name> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 15);
    CodeStubAssembler(state_).PerformStackCheck(compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 27);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp3);
    compiler::TNode<HeapObject>tmp4 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp3});
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast10JSReceiver_140(state_, compiler::TNode<HeapObject>{tmp4}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp4);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSProxy> tmp7;
    compiler::TNode<Name> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSProxy> tmp11;
    compiler::TNode<Name> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 30);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp15);
    compiler::TNode<HeapObject>tmp16 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp11, tmp15});
    compiler::TNode<JSReceiver> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast10JSReceiver_140(state_, compiler::TNode<HeapObject>{tmp16}, &label0);
    ca_.Goto(&block9, tmp10, tmp11, tmp12, tmp14, tmp16, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp10, tmp11, tmp12, tmp14, tmp16);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSProxy> tmp19;
    compiler::TNode<Name> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<HeapObject> tmp22;
    ca_.Bind(&block10, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block8, tmp18, tmp19, tmp20, tmp21);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSProxy> tmp24;
    compiler::TNode<Name> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<HeapObject> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    ca_.Bind(&block9, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block7, tmp23, tmp24, tmp25, tmp26, tmp28);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSProxy> tmp30;
    compiler::TNode<Name> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    ca_.Bind(&block8, &tmp29, &tmp30, &tmp31, &tmp32);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSProxy> tmp34;
    compiler::TNode<Name> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    ca_.Bind(&block7, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 34);
    compiler::TNode<JSReceiver> tmp38;
    USE(tmp38);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp38 = GetMethod_245(state_, compiler::TNode<Context>{tmp33}, compiler::TNode<Object>{tmp36}, "has", &label0);
    ca_.Goto(&block13, tmp33, tmp34, tmp35, tmp36, tmp37, tmp36, tmp38);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp33, tmp34, tmp35, tmp36, tmp37, tmp36);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSProxy> tmp40;
    compiler::TNode<Name> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    ca_.Bind(&block14, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block12, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<JSProxy> tmp46;
    compiler::TNode<Name> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    ca_.Bind(&block13, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.Goto(&block11, tmp45, tmp46, tmp47, tmp48, tmp49, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSProxy> tmp53;
    compiler::TNode<Name> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 35);
    ca_.Goto(&block4, tmp52, tmp53, tmp54, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<JSProxy> tmp58;
    compiler::TNode<Name> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 34);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 42);
    compiler::TNode<Object> tmp63;
    USE(tmp63);
    tmp63 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp57}, compiler::TNode<JSReceiver>{tmp62}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp59});
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 43);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = ToBoolean_240(state_, compiler::TNode<Object>{tmp63});
    ca_.Branch(tmp64, &block15, &block16, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<JSProxy> tmp66;
    compiler::TNode<Name> tmp67;
    compiler::TNode<JSReceiver> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Object> tmp71;
    ca_.Bind(&block15, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 44);
    compiler::TNode<Oddball> tmp72;
    USE(tmp72);
    tmp72 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp72);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<JSProxy> tmp74;
    compiler::TNode<Name> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Object> tmp79;
    ca_.Bind(&block16, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 46);
    ProxiesCodeStubAssembler(state_).CheckHasTrapResult(compiler::TNode<Context>{tmp73}, compiler::TNode<JSReceiver>{tmp77}, compiler::TNode<JSProxy>{tmp74}, compiler::TNode<Name>{tmp75});
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 47);
    compiler::TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = False_66(state_);
    CodeStubAssembler(state_).Return(tmp80);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<JSProxy> tmp82;
    compiler::TNode<Name> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block4, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 51);
   CodeStubAssembler(state_).TailCallBuiltin(Builtins::kHasProperty, tmp81, tmp84, tmp83);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSProxy> tmp86;
    compiler::TNode<Name> tmp87;
    ca_.Bind(&block2, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 54);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp85}, MessageTemplate::kProxyRevoked, "has");
  }
}

}  // namespace internal
}  // namespace v8

