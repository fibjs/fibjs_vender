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

TF_BUILTIN(ProxyDeleteProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  compiler::TNode<Smi> parameter3 = UncheckedCast<Smi>(Parameter(Descriptor::kLanguageMode));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, JSReceiver, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Name> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 16);
    CodeStubAssembler(state_).PerformStackCheck(compiler::TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 28);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp4);
    compiler::TNode<HeapObject>tmp5 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp4});
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_140(state_, compiler::TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp5);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSProxy> tmp8;
    compiler::TNode<Name> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<HeapObject> tmp11;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<JSProxy> tmp13;
    compiler::TNode<Name> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 31);
    compiler::TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp18);
    compiler::TNode<HeapObject>tmp19 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp13, tmp18});
    compiler::TNode<JSReceiver> tmp20;
    USE(tmp20);
    tmp20 = UnsafeCast10JSReceiver_1391(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 35);
    compiler::TNode<JSReceiver> tmp21;
    USE(tmp21);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp21 = GetMethod_245(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp17}, "deleteProperty", &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp17, tmp20, tmp17, tmp21);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp17, tmp20, tmp17);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSProxy> tmp23;
    compiler::TNode<Name> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<JSReceiver> tmp28;
    ca_.Bind(&block10, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block8, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSProxy> tmp30;
    compiler::TNode<Name> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    ca_.Bind(&block9, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block7, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp36);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSProxy> tmp38;
    compiler::TNode<Name> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 36);
    ca_.Goto(&block4, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSProxy> tmp44;
    compiler::TNode<Name> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    ca_.Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 35);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 40);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp43}, compiler::TNode<JSReceiver>{tmp49}, compiler::TNode<Object>{tmp47}, compiler::TNode<Object>{tmp48}, compiler::TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 43);
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = ToBoolean_240(state_, compiler::TNode<Object>{tmp50});
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp51});
    ca_.Branch(tmp52, &block11, &block12, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<JSProxy> tmp54;
    compiler::TNode<Name> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Object> tmp60;
    ca_.Bind(&block11, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 44);
    compiler::TNode<Smi> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).SmiConstant(LanguageMode::kStrict);
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp56}, compiler::TNode<Smi>{tmp61});
    ca_.Branch(tmp62, &block13, &block14, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSProxy> tmp64;
    compiler::TNode<Name> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<JSReceiver> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    compiler::TNode<Object> tmp70;
    ca_.Bind(&block13, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 45);
    compiler::TNode<Object> tmp71;
    USE(tmp71);
    tmp71 = FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_168(state_, "deleteProperty");
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp63}, MessageTemplate::kProxyTrapReturnedFalsishFor, compiler::TNode<Object>{tmp71}, compiler::TNode<Object>{tmp65});
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<JSProxy> tmp73;
    compiler::TNode<Name> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Object> tmp79;
    ca_.Bind(&block14, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 47);
    compiler::TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = False_66(state_);
    CodeStubAssembler(state_).Return(tmp80);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<JSProxy> tmp82;
    compiler::TNode<Name> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<JSReceiver> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<Object> tmp88;
    ca_.Bind(&block12, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 56);
    ProxiesCodeStubAssembler(state_).CheckDeleteTrapResult(compiler::TNode<Context>{tmp81}, compiler::TNode<JSReceiver>{tmp86}, compiler::TNode<JSProxy>{tmp82}, compiler::TNode<Name>{tmp83});
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 59);
    compiler::TNode<Oddball> tmp89;
    USE(tmp89);
    tmp89 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp89);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<JSProxy> tmp91;
    compiler::TNode<Name> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Object> tmp94;
    ca_.Bind(&block4, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 63);
    compiler::TNode<Oddball> tmp95;
    tmp95 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp90, tmp94, tmp92, tmp93));
    USE(tmp95);
    CodeStubAssembler(state_).Return(tmp95);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<JSProxy> tmp97;
    compiler::TNode<Name> tmp98;
    compiler::TNode<Smi> tmp99;
    ca_.Bind(&block2, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/proxy-delete-property.tq", 66);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp96}, MessageTemplate::kProxyRevoked, "deleteProperty");
  }
}

}  // namespace internal
}  // namespace v8

