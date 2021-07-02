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
#include "src/objects/module.h"
#include "src/objects/objects.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/template-objects.h"
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
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
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
#include "torque-generated/builtins-base-gen-tq.h"
#include "torque-generated/builtins-arguments-gen-tq.h"
#include "torque-generated/builtins-array-copywithin-gen-tq.h"
#include "torque-generated/builtins-array-gen-tq.h"
#include "torque-generated/builtins-array-filter-gen-tq.h"
#include "torque-generated/builtins-array-find-gen-tq.h"
#include "torque-generated/builtins-array-findindex-gen-tq.h"
#include "torque-generated/builtins-array-foreach-gen-tq.h"
#include "torque-generated/builtins-array-join-gen-tq.h"
#include "torque-generated/builtins-array-lastindexof-gen-tq.h"
#include "torque-generated/builtins-array-map-gen-tq.h"
#include "torque-generated/builtins-array-of-gen-tq.h"
#include "torque-generated/builtins-array-reverse-gen-tq.h"
#include "torque-generated/builtins-array-shift-gen-tq.h"
#include "torque-generated/builtins-array-slice-gen-tq.h"
#include "torque-generated/builtins-array-splice-gen-tq.h"
#include "torque-generated/builtins-array-unshift-gen-tq.h"
#include "torque-generated/builtins-runtime-gen-tq.h"
#include "torque-generated/builtins-boolean-gen-tq.h"
#include "torque-generated/builtins-collections-gen-tq.h"
#include "torque-generated/builtins-data-view-gen-tq.h"
#include "torque-generated/builtins-extras-utils-gen-tq.h"
#include "torque-generated/builtins-growable-fixed-array-gen-tq.h"
#include "torque-generated/builtins-internal-coverage-gen-tq.h"
#include "torque-generated/builtins-iterator-gen-tq.h"
#include "torque-generated/builtins-math-gen-tq.h"
#include "torque-generated/builtins-object-gen-tq.h"
#include "torque-generated/builtins-proxy-gen-tq.h"
#include "torque-generated/builtins-regexp-replace-gen-tq.h"
#include "torque-generated/builtins-regexp-gen-tq.h"
#include "torque-generated/builtins-string-gen-tq.h"
#include "torque-generated/builtins-string-html-gen-tq.h"
#include "torque-generated/builtins-string-iterator-gen-tq.h"
#include "torque-generated/builtins-string-repeat-gen-tq.h"
#include "torque-generated/builtins-string-slice-gen-tq.h"
#include "torque-generated/builtins-string-substring-gen-tq.h"
#include "torque-generated/builtins-typed-array-createtypedarray-gen-tq.h"
#include "torque-generated/builtins-typed-array-every-gen-tq.h"
#include "torque-generated/builtins-typed-array-filter-gen-tq.h"
#include "torque-generated/builtins-typed-array-find-gen-tq.h"
#include "torque-generated/builtins-typed-array-findindex-gen-tq.h"
#include "torque-generated/builtins-typed-array-foreach-gen-tq.h"
#include "torque-generated/builtins-typed-array-reduce-gen-tq.h"
#include "torque-generated/builtins-typed-array-reduceright-gen-tq.h"
#include "torque-generated/builtins-typed-array-slice-gen-tq.h"
#include "torque-generated/builtins-typed-array-some-gen-tq.h"
#include "torque-generated/builtins-typed-array-subarray-gen-tq.h"
#include "torque-generated/builtins-typed-array-gen-tq.h"
#include "torque-generated/builtins-test-gen-tq.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ProxyConstructor, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kTarget));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kHandler));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 19);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(ProxiesCodeStubAssembler(state_).GetProxyConstructorJSNewTarget());
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 20);
    compiler::TNode<Oddball> tmp5;
    USE(tmp5);
    tmp5 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp4}, compiler::TNode<HeapObject>{tmp5}));
    ca_.Branch(tmp6, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 21);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp7}, MessageTemplate::kConstructorNotFunction, "Proxy");
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    ca_.Bind(&block6, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 33);
    compiler::TNode<JSReceiver> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp14}, &label0);
    ca_.Goto(&block7, tmp12, tmp13, tmp14, tmp15, tmp16, tmp14, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp12, tmp13, tmp14, tmp15, tmp16, tmp14);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block8, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    ca_.Bind(&block7, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 34);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(IsRevokedProxy_279(state_, compiler::TNode<Context>{tmp24}, compiler::TNode<JSReceiver>{tmp30}));
    ca_.Branch(tmp31, &block9, &block10, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    ca_.Bind(&block9, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 35);
    ca_.Goto(&block2, tmp32, tmp33, tmp34, tmp35);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    ca_.Bind(&block10, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 39);
    compiler::TNode<JSReceiver> tmp44;
    USE(tmp44);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp44 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp38}, compiler::TNode<Object>{tmp41}, &label0);
    ca_.Goto(&block11, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp41, tmp44);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp41);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Object> tmp51;
    ca_.Bind(&block12, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.Goto(&block4, tmp45, tmp46, tmp47, tmp48);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    ca_.Bind(&block11, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 40);
    compiler::TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<BoolT>(IsRevokedProxy_279(state_, compiler::TNode<Context>{tmp52}, compiler::TNode<JSReceiver>{tmp59}));
    ca_.Branch(tmp60, &block13, &block14, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp59);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    ca_.Bind(&block13, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 41);
    ca_.Goto(&block2, tmp61, tmp62, tmp63, tmp64);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<JSReceiver> tmp74;
    ca_.Bind(&block14, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 54);
    compiler::TNode<JSProxy> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<JSProxy>(AllocateProxy_278(state_, compiler::TNode<Context>{tmp68}, compiler::TNode<JSReceiver>{tmp73}, compiler::TNode<JSReceiver>{tmp74}));
    CodeStubAssembler(state_).Return(tmp75);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    ca_.Bind(&block4, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 57);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp76}, MessageTemplate::kProxyNonObject);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    ca_.Bind(&block2, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../src/builtins/proxy-constructor.tq", 60);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp80}, MessageTemplate::kProxyHandlerOrTargetRevoked);
  }
}

TF_BUILTIN(ProxyGetProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kReceiverValue));
  USE(parameter3);
  compiler::TNode<Smi> parameter4 = UncheckedCast<Smi>(Parameter(Descriptor::kOnNonExistent));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, Object, JSReceiver, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, Object, JSReceiver, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, Object, JSReceiver, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Smi, Object, JSReceiver, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Name> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Smi> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 25);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp5);
    compiler::TNode<Object>tmp6 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1, tmp5});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 28);
    compiler::TNode<Oddball> tmp7;
    USE(tmp7);
    tmp7 = Null_69(state_);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp6}, compiler::TNode<HeapObject>{tmp7}));
    ca_.Branch(tmp8, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSProxy> tmp10;
    compiler::TNode<Name> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block1, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 29);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp9}, MessageTemplate::kProxyRevoked, "get");
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSProxy> tmp16;
    compiler::TNode<Name> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 33);
    compiler::TNode<JSReceiver> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<JSReceiver>(UnsafeCast10JSReceiver_1217(state_, compiler::TNode<Context>{tmp15}, compiler::TNode<Object>{tmp20}));
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 36);
    compiler::TNode<IntPtrT> tmp22 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp22);
    compiler::TNode<Object>tmp23 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp16, tmp22});
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 42);
    compiler::TNode<JSReceiver> tmp24;
    USE(tmp24);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp24 = GetMethod_220(state_, compiler::TNode<Context>{tmp15}, compiler::TNode<Object>{tmp21}, "get", &label0);
    ca_.Goto(&block5, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp23, tmp21, tmp24);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp23, tmp21);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<JSProxy> tmp26;
    compiler::TNode<Name> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block4, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<JSProxy> tmp35;
    compiler::TNode<Name> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block3, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSProxy> tmp45;
    compiler::TNode<Name> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Object> tmp51;
    ca_.Bind(&block4, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 44);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 43);
    compiler::TNode<Object> tmp52;
    tmp52 = CodeStubAssembler(state_).CallRuntime(Runtime::kGetPropertyWithReceiver, tmp44, tmp51, tmp46, tmp47, tmp48); 
    USE(tmp52);
    CodeStubAssembler(state_).Return(tmp52);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<JSProxy> tmp54;
    compiler::TNode<Name> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Smi> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    ca_.Bind(&block3, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 42);
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 48);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp53}, compiler::TNode<JSReceiver>{tmp61}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp55}, compiler::TNode<Object>{tmp56}));
    ca_.SetSourcePosition("../../src/builtins/proxy-get-property.tq", 61);
    compiler::TNode<Object> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<Object>(ProxiesCodeStubAssembler(state_).CheckGetSetTrapResult(compiler::TNode<Context>{tmp53}, compiler::TNode<Object>{tmp60}, compiler::TNode<JSProxy>{tmp54}, compiler::TNode<Name>{tmp55}, compiler::TNode<Object>{tmp62}, JSProxy::AccessKind::kGet));
    CodeStubAssembler(state_).Return(tmp63);
  }
}

TF_BUILTIN(ProxyHasProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  compiler::TNode<Name> parameter2 = UncheckedCast<Name>(Parameter(Descriptor::kName));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, JSReceiver, Object, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 26);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp3);
    compiler::TNode<Object>tmp4 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1, tmp3});
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}, &label0);
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
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSProxy> tmp11;
    compiler::TNode<Name> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 29);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp15);
    compiler::TNode<Object>tmp16 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp11, tmp15});
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 33);
    compiler::TNode<JSReceiver> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = GetMethod_220(state_, compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp14}, "has", &label0);
    ca_.Goto(&block9, tmp10, tmp11, tmp12, tmp14, tmp16, tmp14, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp10, tmp11, tmp12, tmp14, tmp16, tmp14);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSProxy> tmp19;
    compiler::TNode<Name> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    ca_.Bind(&block10, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block8, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSProxy> tmp25;
    compiler::TNode<Name> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    ca_.Bind(&block9, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block7, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSProxy> tmp32;
    compiler::TNode<Name> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<Object> tmp35;
    ca_.Bind(&block8, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 34);
    ca_.Goto(&block4, tmp31, tmp32, tmp33, tmp35);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSProxy> tmp37;
    compiler::TNode<Name> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    ca_.Bind(&block7, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 41);
    compiler::TNode<Object> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp36}, compiler::TNode<JSReceiver>{tmp41}, compiler::TNode<Object>{tmp39}, compiler::TNode<Object>{tmp40}, compiler::TNode<Object>{tmp38}));
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 42);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsTrue(compiler::TNode<Object>{tmp42}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp42);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block14, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp42);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSProxy> tmp44;
    compiler::TNode<Name> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block13, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block11, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSProxy> tmp52;
    compiler::TNode<Name> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    ca_.Bind(&block14, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block12, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSProxy> tmp60;
    compiler::TNode<Name> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Object> tmp65;
    ca_.Bind(&block11, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 43);
    compiler::TNode<Oddball> tmp66;
    USE(tmp66);
    tmp66 = True_71(state_);
    CodeStubAssembler(state_).Return(tmp66);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<JSProxy> tmp68;
    compiler::TNode<Name> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block12, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 45);
    compiler::TNode<Object> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Object>(ProxiesCodeStubAssembler(state_).CheckHasTrapResult(compiler::TNode<Context>{tmp67}, compiler::TNode<Object>{tmp71}, compiler::TNode<JSProxy>{tmp68}, compiler::TNode<Name>{tmp69}));
    CodeStubAssembler(state_).Return(tmp74);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<JSProxy> tmp76;
    compiler::TNode<Name> tmp77;
    compiler::TNode<Object> tmp78;
    ca_.Bind(&block4, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 49);
   CodeStubAssembler(state_).TailCallBuiltin(Builtins::kHasProperty, tmp75, tmp78, tmp77);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<JSProxy> tmp80;
    compiler::TNode<Name> tmp81;
    ca_.Bind(&block2, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/proxy-has-property.tq", 52);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp79}, MessageTemplate::kProxyRevoked, "has");
  }
}

compiler::TNode<JSFunction> AllocateProxyRevokeFunction_276(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSProxy> p_proxy) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_proxy);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 13);
    compiler::TNode<JSFunction> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<JSFunction>(ProxiesCodeStubAssembler(state_).AllocateProxyRevokeFunction(compiler::TNode<Object>{tmp1}, compiler::TNode<Object>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<JSProxy> tmp4;
    compiler::TNode<JSFunction> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 11);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<JSProxy> tmp7;
    compiler::TNode<JSFunction> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<JSFunction>{tmp8};
}

TF_BUILTIN(ProxyRevocable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kTarget));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kHandler));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 24);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp2);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block6, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 25);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<BoolT>(IsRevokedProxy_279(state_, compiler::TNode<Context>{tmp10}, compiler::TNode<JSReceiver>{tmp15}));
    ca_.Branch(tmp16, &block7, &block8, tmp10, tmp11, tmp12, tmp13, tmp15);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    ca_.Bind(&block7, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 26);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 30);
    compiler::TNode<JSReceiver> tmp27;
    USE(tmp27);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp27 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp22}, compiler::TNode<Object>{tmp25}, &label0);
    ca_.Goto(&block9, tmp22, tmp23, tmp24, tmp25, tmp26, tmp25, tmp27);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp22, tmp23, tmp24, tmp25, tmp26, tmp25);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block10, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    ca_.Bind(&block9, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 31);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<BoolT>(IsRevokedProxy_279(state_, compiler::TNode<Context>{tmp34}, compiler::TNode<JSReceiver>{tmp40}));
    ca_.Branch(tmp41, &block11, &block12, tmp34, tmp35, tmp36, tmp37, tmp38, tmp40);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    ca_.Bind(&block11, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 32);
    ca_.Goto(&block2, tmp42, tmp43, tmp44, tmp45);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    ca_.Bind(&block12, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 36);
    compiler::TNode<JSProxy> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<JSProxy>(AllocateProxy_278(state_, compiler::TNode<Context>{tmp48}, compiler::TNode<JSReceiver>{tmp52}, compiler::TNode<JSReceiver>{tmp53}));
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 42);
    compiler::TNode<JSFunction> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<JSFunction>(AllocateProxyRevokeFunction_276(state_, compiler::TNode<Context>{tmp48}, compiler::TNode<JSProxy>{tmp54}));
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 48);
    compiler::TNode<JSProxyRevocableResult> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<JSProxyRevocableResult>(NewJSProxyRevocableResult_63(state_, compiler::TNode<Context>{tmp48}, compiler::TNode<JSProxy>{tmp54}, compiler::TNode<JSFunction>{tmp55}));
    CodeStubAssembler(state_).Return(tmp56);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    ca_.Bind(&block4, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 51);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp57}, MessageTemplate::kProxyNonObject, "Proxy.revocable");
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    ca_.Bind(&block2, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/proxy-revocable.tq", 54);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp61}, MessageTemplate::kProxyHandlerOrTargetRevoked, "Proxy.revocable");
  }
}

TF_BUILTIN(ProxyRevoke, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 14);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(FromConstexpr13ATContextSlot23ATconstexpr_ContextSlot_149(state_, Context::MIN_CONTEXT_SLOTS));
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp0}, compiler::TNode<IntPtrT>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 17);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_69(state_);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp2}, compiler::TNode<HeapObject>{tmp3}));
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 18);
    compiler::TNode<Oddball> tmp7;
    USE(tmp7);
    tmp7 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 22);
    compiler::TNode<Oddball> tmp10;
    USE(tmp10);
    tmp10 = Null_69(state_);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<IntPtrT>(FromConstexpr13ATContextSlot23ATconstexpr_ContextSlot_149(state_, Context::MIN_CONTEXT_SLOTS));
    CodeStubAssembler(state_).StoreContextElement(compiler::TNode<Context>{tmp8}, compiler::TNode<IntPtrT>{tmp11}, compiler::TNode<Object>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 25);
    compiler::TNode<JSProxy> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<JSProxy>(UnsafeCast7JSProxy_1225(state_, compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp9}));
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 28);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp13);
    compiler::TNode<Oddball> tmp14;
    USE(tmp14);
    tmp14 = Null_69(state_);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp12, tmp13}, tmp14);
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 31);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp15);
    compiler::TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = Null_69(state_);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp12, tmp15}, tmp16);
    ca_.SetSourcePosition("../../src/builtins/proxy-revoke.tq", 34);
    compiler::TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp17);
  }
}

void CallThrowTypeErrorIfStrict_277(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, MessageTemplate p_message) {
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
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiConstant(p_message));
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_69(state_);
    compiler::TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_69(state_);
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
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, JSReceiver, Object, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Name, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSProxy> tmp1;
    compiler::TNode<Name> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 28);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsPrivateSymbol(compiler::TNode<HeapObject>{tmp2}));
    ca_.Branch(tmp5, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSProxy> tmp7;
    compiler::TNode<Name> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 29);
    CallThrowTypeErrorIfStrict_277(state_, compiler::TNode<Context>{tmp6}, MessageTemplate::kProxyPrivate);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 30);
    compiler::TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<JSProxy> tmp13;
    compiler::TNode<Name> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 34);
    compiler::TNode<IntPtrT> tmp17 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp17);
    compiler::TNode<Object>tmp18 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp13, tmp17});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 40);
    compiler::TNode<JSReceiver> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp18}, &label0);
    ca_.Goto(&block7, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSProxy> tmp21;
    compiler::TNode<Name> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block8, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSProxy> tmp28;
    compiler::TNode<Name> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block7, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 43);
    compiler::TNode<IntPtrT> tmp35 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp35);
    compiler::TNode<Object>tmp36 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp28, tmp35});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 47);
    compiler::TNode<JSReceiver> tmp37;
    USE(tmp37);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp37 = GetMethod_220(state_, compiler::TNode<Context>{tmp27}, compiler::TNode<Object>{tmp34}, "set", &label0);
    ca_.Goto(&block11, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36, tmp34, tmp37);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36, tmp34);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<JSProxy> tmp39;
    compiler::TNode<Name> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.Goto(&block10, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<JSProxy> tmp48;
    compiler::TNode<Name> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    ca_.Bind(&block11, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block9, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp56);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<JSProxy> tmp58;
    compiler::TNode<Name> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<Object> tmp64;
    ca_.Bind(&block10, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 48);
    ca_.Goto(&block6, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp64);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<JSProxy> tmp66;
    compiler::TNode<Name> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 47);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 65);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 64);
    compiler::TNode<Object> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp65}, compiler::TNode<JSReceiver>{tmp73}, compiler::TNode<Object>{tmp71}, compiler::TNode<Object>{tmp72}, compiler::TNode<Object>{tmp67}, compiler::TNode<Object>{tmp68}, compiler::TNode<Object>{tmp69}));
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 66);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsTrue(compiler::TNode<Object>{tmp74}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp74);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block16, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp74);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<JSProxy> tmp76;
    compiler::TNode<Name> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Object> tmp85;
    ca_.Bind(&block15, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block13, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSProxy> tmp87;
    compiler::TNode<Name> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<Object> tmp96;
    ca_.Bind(&block16, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block14, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSProxy> tmp98;
    compiler::TNode<Name> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSReceiver> tmp105;
    compiler::TNode<Object> tmp106;
    ca_.Bind(&block13, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 68);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 67);
    compiler::TNode<Object> tmp107;
    USE(tmp107);
    tmp107 = ca_.UncheckedCast<Object>(ProxiesCodeStubAssembler(state_).CheckGetSetTrapResult(compiler::TNode<Context>{tmp97}, compiler::TNode<Object>{tmp104}, compiler::TNode<JSProxy>{tmp98}, compiler::TNode<Name>{tmp99}, compiler::TNode<Object>{tmp106}, JSProxy::AccessKind::kSet));
    CodeStubAssembler(state_).Return(tmp107);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<JSProxy> tmp109;
    compiler::TNode<Name> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<JSReceiver> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Object> tmp117;
    ca_.Bind(&block14, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 71);
    compiler::TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiConstant(MessageTemplate::kProxyTrapReturnedFalsishFor));
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 70);
    compiler::TNode<Object> tmp119;
    USE(tmp119);
    tmp119 = ca_.UncheckedCast<Object>(FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_147(state_, "set"));
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowTypeErrorIfStrict, tmp108, tmp118, tmp119, tmp110);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 72);
    CodeStubAssembler(state_).Return(tmp111);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<JSProxy> tmp122;
    compiler::TNode<Name> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<Object> tmp127;
    ca_.Bind(&block6, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 76);
    CodeStubAssembler(state_).CallRuntime(Runtime::kSetPropertyWithReceiver, tmp121, tmp127, tmp123, tmp124, tmp125);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 77);
    CodeStubAssembler(state_).Return(tmp124);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<JSProxy> tmp130;
    compiler::TNode<Name> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    ca_.Bind(&block4, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-property.tq", 81);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp129}, MessageTemplate::kProxyRevoked, "set");
  }
}

compiler::TNode<JSProxy> AllocateProxy_278(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_target, compiler::TNode<JSReceiver> p_handler) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, JSProxy> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, JSProxy> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_target, p_handler);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 13);
    compiler::TNode<JSProxy> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<JSProxy>(ProxiesCodeStubAssembler(state_).AllocateProxy(compiler::TNode<JSReceiver>{tmp1}, compiler::TNode<JSReceiver>{tmp2}, compiler::TNode<Context>{tmp0}));
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    compiler::TNode<JSProxy> tmp7;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 11);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

    compiler::TNode<Context> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    compiler::TNode<JSProxy> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
  return compiler::TNode<JSProxy>{tmp11};
}

compiler::TNode<BoolT> IsRevokedProxy_279(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, JSProxy> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSProxy> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSProxy, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSProxy, Object, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSProxy> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSProxy, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 17);
    compiler::TNode<JSProxy> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast7JSProxy_93(state_, compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSReceiver> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<JSProxy> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(FromConstexpr6ATbool16ATconstexpr_bool_144(state_, false));
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<JSProxy> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 19);
    compiler::TNode<IntPtrT> tmp16 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp16);
    compiler::TNode<Object>tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    compiler::TNode<JSReceiver> tmp18;
    USE(tmp18);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp18 = Cast10JSReceiver_1170(state_, compiler::TNode<Context>{tmp13}, compiler::TNode<Object>{tmp17}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp17, tmp18);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp17);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    compiler::TNode<JSProxy> tmp21;
    compiler::TNode<Object> tmp22;
    ca_.Bind(&block9, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block7, tmp19, tmp20, tmp21);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<JSProxy> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    ca_.Bind(&block8, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block6, tmp23, tmp24, tmp25, tmp27);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<JSProxy> tmp30;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(FromConstexpr6ATbool16ATconstexpr_bool_144(state_, true));
    ca_.Goto(&block1, tmp28, tmp29, tmp31);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<JSProxy> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    ca_.Bind(&block6, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 18);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 20);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<BoolT>(FromConstexpr6ATbool16ATconstexpr_bool_144(state_, false));
    ca_.Goto(&block1, tmp32, tmp33, tmp36);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<BoolT> tmp39;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/proxy.tq", 16);
    ca_.Goto(&block10, tmp37, tmp38, tmp39);
  }

    compiler::TNode<Context> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<BoolT> tmp42;
    ca_.Bind(&block10, &tmp40, &tmp41, &tmp42);
  return compiler::TNode<BoolT>{tmp42};
}

}  // namespace internal
}  // namespace v8

