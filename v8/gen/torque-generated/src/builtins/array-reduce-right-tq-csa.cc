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

TF_BUILTIN(ArrayReduceRightPreLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 17);
    compiler::TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10JSReceiver_1338(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp13, tmp15);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18, &tmp19);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    ca_.Bind(&block1, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 18);
    compiler::TNode<JSReceiver> tmp25;
    USE(tmp25);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp25 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp20}, compiler::TNode<Object>{tmp22}, &label0);
    ca_.Goto(&block7, tmp20, tmp21, tmp22, tmp23, tmp24, tmp22, tmp25);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp20, tmp21, tmp22, tmp23, tmp24, tmp22);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block8, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block6, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 19);
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = Cast20UT5ATSmi10HeapNumber_85(state_, compiler::TNode<Object>{tmp47}, &label0);
    ca_.Goto(&block11, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp47, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp47);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Object> tmp57;
    ca_.Bind(&block12, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block10, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Number> tmp65;
    ca_.Bind(&block11, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.Goto(&block9, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<Number> tmp78;
    ca_.Bind(&block9, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 25);
    compiler::TNode<Oddball> tmp79;
    USE(tmp79);
    tmp79 = TheHole_62(state_);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 24);
    compiler::TNode<Number> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Object> tmp81;
    tmp81 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceRightLoopContinuation, tmp72, tmp76, tmp77, tmp79, tmp76, tmp80, tmp78);
    USE(tmp81);
    CodeStubAssembler(state_).Return(tmp81);
  }
}

TF_BUILTIN(ArrayReduceRightLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kAccumulator));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 40);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_1338(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 41);
    compiler::TNode<JSReceiver> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block6, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block5, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 42);
    compiler::TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_85(state_, compiler::TNode<Object>{tmp63}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Number> tmp87;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Number> tmp104;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 43);
    compiler::TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_85(state_, compiler::TNode<Object>{tmp100}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block16, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Number> tmp126;
    ca_.Bind(&block15, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<JSReceiver> tmp134;
    compiler::TNode<Number> tmp135;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<JSReceiver> tmp143;
    compiler::TNode<Number> tmp144;
    compiler::TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 45);
    compiler::TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceRightLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceRightLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Number, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 56);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_1338(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    ca_.Bind(&block1, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 57);
    compiler::TNode<JSReceiver> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp30);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block6, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block5, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    ca_.Bind(&block6, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 58);
    compiler::TNode<Number> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = Cast20UT5ATSmi10HeapNumber_85(state_, compiler::TNode<Object>{tmp63}, &label0);
    ca_.Goto(&block11, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp63);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Number> tmp87;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block9, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<JSReceiver> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    ca_.Bind(&block10, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Number> tmp104;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 59);
    compiler::TNode<Number> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = Cast20UT5ATSmi10HeapNumber_85(state_, compiler::TNode<Object>{tmp100}, &label0);
    ca_.Goto(&block15, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp100);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block16, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Number> tmp126;
    ca_.Bind(&block15, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<JSReceiver> tmp134;
    compiler::TNode<Number> tmp135;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<JSReceiver> tmp143;
    compiler::TNode<Number> tmp144;
    compiler::TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 63);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 62);
    compiler::TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceRightLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 64);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceRightLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSReceiver> parameter1 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kCallbackfn));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kInitialAccumulator));
  USE(parameter3);
  compiler::TNode<JSReceiver> parameter4 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kO));
  USE(parameter4);
  compiler::TNode<Number> parameter5 = UncheckedCast<Number>(Parameter(Descriptor::kInitialK));
  USE(parameter5);
  compiler::TNode<Number> parameter6 = UncheckedCast<Number>(Parameter(Descriptor::kLength));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object, Object, Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Object, Object, Oddball> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, Number, Number, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Number> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 72);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 75);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Number> tmp15;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    compiler::TNode<Number> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = NumberIsGreaterThanOrEqual_78(state_, compiler::TNode<Number>{tmp15}, compiler::TNode<Number>{tmp16});
    ca_.Branch(tmp17, &block1, &block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 81);
    compiler::TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).HasProperty_Inline(compiler::TNode<Context>{tmp18}, compiler::TNode<JSReceiver>{tmp22}, compiler::TNode<Object>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 84);
    compiler::TNode<Oddball> tmp28;
    USE(tmp28);
    tmp28 = True_65(state_);
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp27}, compiler::TNode<HeapObject>{tmp28});
    ca_.Branch(tmp29, &block5, &block6, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<Oddball> tmp39;
    ca_.Bind(&block5, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 86);
    compiler::TNode<Object> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp30}, compiler::TNode<Object>{tmp34}, compiler::TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 88);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 89);
    compiler::TNode<Oddball> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp37}, &label0);
    ca_.Goto(&block9, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp37, tmp37, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp37, tmp37);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Number> tmp50;
    compiler::TNode<Oddball> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    ca_.Bind(&block10, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.Goto(&block8, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Number> tmp63;
    compiler::TNode<Oddball> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Oddball> tmp68;
    ca_.Bind(&block9, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 91);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 89);
    ca_.Goto(&block7, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp65, tmp63, tmp64, tmp65, tmp66);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<Number> tmp74;
    compiler::TNode<Number> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Number> tmp77;
    compiler::TNode<Oddball> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    ca_.Bind(&block8, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 93);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 97);
    compiler::TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 98);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 96);
    compiler::TNode<Object> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp69}, compiler::TNode<JSReceiver>{tmp71}, compiler::TNode<Object>{tmp81}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp80)}, compiler::TNode<Object>{tmp79}, compiler::TNode<Object>{tmp77}, compiler::TNode<Object>{tmp73});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 89);
    ca_.Goto(&block7, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp82, tmp77, tmp78, tmp79, tmp80);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<Number> tmp88;
    compiler::TNode<Number> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Number> tmp91;
    compiler::TNode<Oddball> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    ca_.Bind(&block7, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 88);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 84);
    ca_.Goto(&block6, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<JSReceiver> tmp96;
    compiler::TNode<JSReceiver> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Number> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Number> tmp103;
    compiler::TNode<Oddball> tmp104;
    ca_.Bind(&block6, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 75);
    ca_.Goto(&block4, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<JSReceiver> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Number> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Number> tmp113;
    ca_.Bind(&block4, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    compiler::TNode<Number> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp115;
    USE(tmp115);
    tmp115 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp113}, compiler::TNode<Number>{tmp114});
    ca_.Goto(&block3, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp115);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<JSReceiver> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<JSReceiver> tmp120;
    compiler::TNode<Number> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Number> tmp124;
    ca_.Bind(&block2, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 109);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 110);
    compiler::TNode<Oddball> tmp125;
    USE(tmp125);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp125 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp123}, &label0);
    ca_.Goto(&block13, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp123, tmp123, tmp125);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp123, tmp123);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<JSReceiver> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<Number> tmp131;
    compiler::TNode<Number> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<Object> tmp135;
    ca_.Bind(&block14, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.Goto(&block12, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<JSReceiver> tmp140;
    compiler::TNode<Number> tmp141;
    compiler::TNode<Number> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<Oddball> tmp146;
    ca_.Bind(&block13, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 111);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp136}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduceRight");
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp147;
    compiler::TNode<JSReceiver> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Number> tmp152;
    compiler::TNode<Number> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    ca_.Bind(&block12, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 113);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 114);
    CodeStubAssembler(state_).Return(ca_.UncheckedCast<Object>(tmp155));
  }
}

compiler::TNode<Object> FastArrayReduceRight_26(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, JSArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object, Oddball> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object, Context, JSReceiver, Oddball, Object, Object, Smi, JSArray> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Object, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Object, Object, Oddball> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi, JSArray, JSArray, JSArray, Map, BoolT, Object> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_len, p_callbackfn, p_initialAccumulator);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 124);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp2, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp2);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSReceiver> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Number> tmp12;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block3, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp20);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block4, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    compiler::TNode<Number> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp23}, compiler::TNode<Number>{tmp27});
    ca_.Goto(&block1, tmp28, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Smi> tmp35;
    ca_.Bind(&block3, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 125);
    compiler::TNode<JSArray> tmp36;
    USE(tmp36);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp36 = Cast20ATFastJSArrayForRead_136(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<HeapObject>{tmp30}, &label0);
    ca_.Goto(&block9, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp30, tmp36);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp30);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Number> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    ca_.Bind(&block10, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block8, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<JSArray> tmp53;
    ca_.Bind(&block9, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block7, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp53);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Smi> tmp60;
    ca_.Bind(&block8, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 126);
    compiler::TNode<Number> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp56}, compiler::TNode<Number>{tmp61});
    ca_.Goto(&block1, tmp62, tmp59);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Number> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<JSArray> tmp70;
    ca_.Bind(&block7, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 127);
    compiler::TNode<JSArray> tmp71;
    USE(tmp71);
    compiler::TNode<JSArray> tmp72;
    USE(tmp72);
    compiler::TNode<Map> tmp73;
    USE(tmp73);
    compiler::TNode<BoolT> tmp74;
    USE(tmp74);
    std::tie(tmp71, tmp72, tmp73, tmp74) = NewFastJSArrayForReadWitness_237(state_, compiler::TNode<JSArray>{tmp70}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 130);
    compiler::TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp69}, compiler::TNode<Smi>{tmp75});
    ca_.Goto(&block13, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp76);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<JSReceiver> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<JSArray> tmp84;
    compiler::TNode<JSArray> tmp85;
    compiler::TNode<JSArray> tmp86;
    compiler::TNode<Map> tmp87;
    compiler::TNode<BoolT> tmp88;
    compiler::TNode<Smi> tmp89;
    ca_.Bind(&block13, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    compiler::TNode<Smi> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp91;
    USE(tmp91);
    tmp91 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp89}, compiler::TNode<Smi>{tmp90});
    ca_.Branch(tmp91, &block11, &block12, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<Number> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<JSArray> tmp99;
    compiler::TNode<JSArray> tmp100;
    compiler::TNode<JSArray> tmp101;
    compiler::TNode<Map> tmp102;
    compiler::TNode<BoolT> tmp103;
    compiler::TNode<Smi> tmp104;
    ca_.Bind(&block11, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3229);
    compiler::TNode<IntPtrT> tmp105 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp105);
    compiler::TNode<Map>tmp106 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp100, tmp105});
    compiler::TNode<BoolT> tmp107;
    USE(tmp107);
    tmp107 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<HeapObject>{tmp106}, compiler::TNode<HeapObject>{tmp102});
    ca_.Branch(tmp107, &block18, &block19, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<JSReceiver> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<JSArray> tmp115;
    compiler::TNode<JSArray> tmp116;
    compiler::TNode<JSArray> tmp117;
    compiler::TNode<Map> tmp118;
    compiler::TNode<BoolT> tmp119;
    compiler::TNode<Smi> tmp120;
    ca_.Bind(&block18, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.Goto(&block16, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<Number> tmp123;
    compiler::TNode<JSReceiver> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<JSArray> tmp128;
    compiler::TNode<JSArray> tmp129;
    compiler::TNode<JSArray> tmp130;
    compiler::TNode<Map> tmp131;
    compiler::TNode<BoolT> tmp132;
    compiler::TNode<Smi> tmp133;
    ca_.Bind(&block19, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3236);
    compiler::TNode<BoolT> tmp134;
    USE(tmp134);
    tmp134 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp134, &block20, &block21, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<JSReceiver> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<JSArray> tmp142;
    compiler::TNode<JSArray> tmp143;
    compiler::TNode<JSArray> tmp144;
    compiler::TNode<Map> tmp145;
    compiler::TNode<BoolT> tmp146;
    compiler::TNode<Smi> tmp147;
    ca_.Bind(&block20, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.Goto(&block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<JSArray> tmp155;
    compiler::TNode<JSArray> tmp156;
    compiler::TNode<JSArray> tmp157;
    compiler::TNode<Map> tmp158;
    compiler::TNode<BoolT> tmp159;
    compiler::TNode<Smi> tmp160;
    ca_.Bind(&block21, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3237);
    compiler::TNode<JSArray> tmp161;
    USE(tmp161);
    tmp161 = (compiler::TNode<JSArray>{tmp156});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 131);
    ca_.Goto(&block17, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp161, tmp158, tmp159, tmp160);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<JSReceiver> tmp163;
    compiler::TNode<Number> tmp164;
    compiler::TNode<JSReceiver> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<JSArray> tmp169;
    compiler::TNode<JSArray> tmp170;
    compiler::TNode<JSArray> tmp171;
    compiler::TNode<Map> tmp172;
    compiler::TNode<BoolT> tmp173;
    compiler::TNode<Smi> tmp174;
    ca_.Bind(&block17, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.Goto(&block15, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp175;
    compiler::TNode<JSReceiver> tmp176;
    compiler::TNode<Number> tmp177;
    compiler::TNode<JSReceiver> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<JSArray> tmp182;
    compiler::TNode<JSArray> tmp183;
    compiler::TNode<JSArray> tmp184;
    compiler::TNode<Map> tmp185;
    compiler::TNode<BoolT> tmp186;
    compiler::TNode<Smi> tmp187;
    ca_.Bind(&block16, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.Goto(&block1, tmp187, tmp180);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp188;
    compiler::TNode<JSReceiver> tmp189;
    compiler::TNode<Number> tmp190;
    compiler::TNode<JSReceiver> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<JSArray> tmp195;
    compiler::TNode<JSArray> tmp196;
    compiler::TNode<JSArray> tmp197;
    compiler::TNode<Map> tmp198;
    compiler::TNode<BoolT> tmp199;
    compiler::TNode<Smi> tmp200;
    ca_.Bind(&block15, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 134);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Goto(&block24, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp200, tmp197);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp201;
    compiler::TNode<JSReceiver> tmp202;
    compiler::TNode<Number> tmp203;
    compiler::TNode<JSReceiver> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<JSArray> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<JSArray> tmp210;
    compiler::TNode<Map> tmp211;
    compiler::TNode<BoolT> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<JSArray> tmp215;
    ca_.Bind(&block24, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 134);
    compiler::TNode<IntPtrT> tmp216 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp216);
    compiler::TNode<Number>tmp217 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp215, tmp216});
    compiler::TNode<BoolT> tmp218;
    USE(tmp218);
    tmp218 = NumberIsGreaterThanOrEqual_78(state_, compiler::TNode<Number>{tmp214}, compiler::TNode<Number>{tmp217});
    ca_.Branch(tmp218, &block22, &block23, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp219;
    compiler::TNode<JSReceiver> tmp220;
    compiler::TNode<Number> tmp221;
    compiler::TNode<JSReceiver> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<JSArray> tmp226;
    compiler::TNode<JSArray> tmp227;
    compiler::TNode<JSArray> tmp228;
    compiler::TNode<Map> tmp229;
    compiler::TNode<BoolT> tmp230;
    compiler::TNode<Smi> tmp231;
    ca_.Bind(&block22, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231);
    ca_.Goto(&block1, tmp231, tmp224);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp232;
    compiler::TNode<JSReceiver> tmp233;
    compiler::TNode<Number> tmp234;
    compiler::TNode<JSReceiver> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<JSArray> tmp239;
    compiler::TNode<JSArray> tmp240;
    compiler::TNode<JSArray> tmp241;
    compiler::TNode<Map> tmp242;
    compiler::TNode<BoolT> tmp243;
    compiler::TNode<Smi> tmp244;
    ca_.Bind(&block23, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 136);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3242);
    ca_.Branch(tmp243, &block28, &block29, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp244, tmp232, tmp244);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp245;
    compiler::TNode<JSReceiver> tmp246;
    compiler::TNode<Number> tmp247;
    compiler::TNode<JSReceiver> tmp248;
    compiler::TNode<Object> tmp249;
    compiler::TNode<Object> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<JSArray> tmp252;
    compiler::TNode<JSArray> tmp253;
    compiler::TNode<JSArray> tmp254;
    compiler::TNode<Map> tmp255;
    compiler::TNode<BoolT> tmp256;
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Smi> tmp258;
    compiler::TNode<Context> tmp259;
    compiler::TNode<Smi> tmp260;
    ca_.Bind(&block28, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3243);
    compiler::TNode<Object> tmp261;
    USE(tmp261);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp261 = LoadElementNoHole16FixedDoubleArray_235(state_, compiler::TNode<Context>{tmp259}, compiler::TNode<JSArray>{tmp254}, compiler::TNode<Smi>{tmp260}, &label0);
    ca_.Goto(&block31, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp254, tmp260, tmp261);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block32, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp254, tmp260);
    }
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp262;
    compiler::TNode<JSReceiver> tmp263;
    compiler::TNode<Number> tmp264;
    compiler::TNode<JSReceiver> tmp265;
    compiler::TNode<Object> tmp266;
    compiler::TNode<Object> tmp267;
    compiler::TNode<Smi> tmp268;
    compiler::TNode<JSArray> tmp269;
    compiler::TNode<JSArray> tmp270;
    compiler::TNode<JSArray> tmp271;
    compiler::TNode<Map> tmp272;
    compiler::TNode<BoolT> tmp273;
    compiler::TNode<Smi> tmp274;
    compiler::TNode<Smi> tmp275;
    compiler::TNode<Context> tmp276;
    compiler::TNode<Smi> tmp277;
    compiler::TNode<JSArray> tmp278;
    compiler::TNode<Smi> tmp279;
    ca_.Bind(&block32, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279);
    ca_.Goto(&block26, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp280;
    compiler::TNode<JSReceiver> tmp281;
    compiler::TNode<Number> tmp282;
    compiler::TNode<JSReceiver> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<Object> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<JSArray> tmp287;
    compiler::TNode<JSArray> tmp288;
    compiler::TNode<JSArray> tmp289;
    compiler::TNode<Map> tmp290;
    compiler::TNode<BoolT> tmp291;
    compiler::TNode<Smi> tmp292;
    compiler::TNode<Smi> tmp293;
    compiler::TNode<Context> tmp294;
    compiler::TNode<Smi> tmp295;
    compiler::TNode<JSArray> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<Object> tmp298;
    ca_.Bind(&block31, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298);
    ca_.Goto(&block27, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp298);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp299;
    compiler::TNode<JSReceiver> tmp300;
    compiler::TNode<Number> tmp301;
    compiler::TNode<JSReceiver> tmp302;
    compiler::TNode<Object> tmp303;
    compiler::TNode<Object> tmp304;
    compiler::TNode<Smi> tmp305;
    compiler::TNode<JSArray> tmp306;
    compiler::TNode<JSArray> tmp307;
    compiler::TNode<JSArray> tmp308;
    compiler::TNode<Map> tmp309;
    compiler::TNode<BoolT> tmp310;
    compiler::TNode<Smi> tmp311;
    compiler::TNode<Smi> tmp312;
    compiler::TNode<Context> tmp313;
    compiler::TNode<Smi> tmp314;
    ca_.Bind(&block29, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3246);
    compiler::TNode<Object> tmp315;
    USE(tmp315);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp315 = LoadElementNoHole10FixedArray_234(state_, compiler::TNode<Context>{tmp313}, compiler::TNode<JSArray>{tmp308}, compiler::TNode<Smi>{tmp314}, &label0);
    ca_.Goto(&block33, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp308, tmp314, tmp315);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp308, tmp314);
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp316;
    compiler::TNode<JSReceiver> tmp317;
    compiler::TNode<Number> tmp318;
    compiler::TNode<JSReceiver> tmp319;
    compiler::TNode<Object> tmp320;
    compiler::TNode<Object> tmp321;
    compiler::TNode<Smi> tmp322;
    compiler::TNode<JSArray> tmp323;
    compiler::TNode<JSArray> tmp324;
    compiler::TNode<JSArray> tmp325;
    compiler::TNode<Map> tmp326;
    compiler::TNode<BoolT> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<Smi> tmp329;
    compiler::TNode<Context> tmp330;
    compiler::TNode<Smi> tmp331;
    compiler::TNode<JSArray> tmp332;
    compiler::TNode<Smi> tmp333;
    ca_.Bind(&block34, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333);
    ca_.Goto(&block26, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp334;
    compiler::TNode<JSReceiver> tmp335;
    compiler::TNode<Number> tmp336;
    compiler::TNode<JSReceiver> tmp337;
    compiler::TNode<Object> tmp338;
    compiler::TNode<Object> tmp339;
    compiler::TNode<Smi> tmp340;
    compiler::TNode<JSArray> tmp341;
    compiler::TNode<JSArray> tmp342;
    compiler::TNode<JSArray> tmp343;
    compiler::TNode<Map> tmp344;
    compiler::TNode<BoolT> tmp345;
    compiler::TNode<Smi> tmp346;
    compiler::TNode<Smi> tmp347;
    compiler::TNode<Context> tmp348;
    compiler::TNode<Smi> tmp349;
    compiler::TNode<JSArray> tmp350;
    compiler::TNode<Smi> tmp351;
    compiler::TNode<Object> tmp352;
    ca_.Bind(&block33, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352);
    ca_.Goto(&block27, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp352);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp353;
    compiler::TNode<JSReceiver> tmp354;
    compiler::TNode<Number> tmp355;
    compiler::TNode<JSReceiver> tmp356;
    compiler::TNode<Object> tmp357;
    compiler::TNode<Object> tmp358;
    compiler::TNode<Smi> tmp359;
    compiler::TNode<JSArray> tmp360;
    compiler::TNode<JSArray> tmp361;
    compiler::TNode<JSArray> tmp362;
    compiler::TNode<Map> tmp363;
    compiler::TNode<BoolT> tmp364;
    compiler::TNode<Smi> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<Context> tmp367;
    compiler::TNode<Smi> tmp368;
    compiler::TNode<Object> tmp369;
    ca_.Bind(&block27, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 136);
    ca_.Goto(&block25, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp369);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp370;
    compiler::TNode<JSReceiver> tmp371;
    compiler::TNode<Number> tmp372;
    compiler::TNode<JSReceiver> tmp373;
    compiler::TNode<Object> tmp374;
    compiler::TNode<Object> tmp375;
    compiler::TNode<Smi> tmp376;
    compiler::TNode<JSArray> tmp377;
    compiler::TNode<JSArray> tmp378;
    compiler::TNode<JSArray> tmp379;
    compiler::TNode<Map> tmp380;
    compiler::TNode<BoolT> tmp381;
    compiler::TNode<Smi> tmp382;
    ca_.Bind(&block26, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382);
    ca_.Goto(&block14, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp383;
    compiler::TNode<JSReceiver> tmp384;
    compiler::TNode<Number> tmp385;
    compiler::TNode<JSReceiver> tmp386;
    compiler::TNode<Object> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<Smi> tmp389;
    compiler::TNode<JSArray> tmp390;
    compiler::TNode<JSArray> tmp391;
    compiler::TNode<JSArray> tmp392;
    compiler::TNode<Map> tmp393;
    compiler::TNode<BoolT> tmp394;
    compiler::TNode<Smi> tmp395;
    compiler::TNode<Object> tmp396;
    ca_.Bind(&block25, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 137);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 138);
    compiler::TNode<Oddball> tmp397;
    USE(tmp397);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp397 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp388}, &label0);
    ca_.Goto(&block37, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp388, tmp388, tmp397);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp388, tmp388);
    }
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp398;
    compiler::TNode<JSReceiver> tmp399;
    compiler::TNode<Number> tmp400;
    compiler::TNode<JSReceiver> tmp401;
    compiler::TNode<Object> tmp402;
    compiler::TNode<Object> tmp403;
    compiler::TNode<Smi> tmp404;
    compiler::TNode<JSArray> tmp405;
    compiler::TNode<JSArray> tmp406;
    compiler::TNode<JSArray> tmp407;
    compiler::TNode<Map> tmp408;
    compiler::TNode<BoolT> tmp409;
    compiler::TNode<Smi> tmp410;
    compiler::TNode<Object> tmp411;
    compiler::TNode<Object> tmp412;
    compiler::TNode<Object> tmp413;
    ca_.Bind(&block38, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.Goto(&block36, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp414;
    compiler::TNode<JSReceiver> tmp415;
    compiler::TNode<Number> tmp416;
    compiler::TNode<JSReceiver> tmp417;
    compiler::TNode<Object> tmp418;
    compiler::TNode<Object> tmp419;
    compiler::TNode<Smi> tmp420;
    compiler::TNode<JSArray> tmp421;
    compiler::TNode<JSArray> tmp422;
    compiler::TNode<JSArray> tmp423;
    compiler::TNode<Map> tmp424;
    compiler::TNode<BoolT> tmp425;
    compiler::TNode<Smi> tmp426;
    compiler::TNode<Object> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<Object> tmp429;
    compiler::TNode<Oddball> tmp430;
    ca_.Bind(&block37, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 139);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 138);
    ca_.Goto(&block35, tmp414, tmp415, tmp416, tmp417, tmp418, tmp427, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp431;
    compiler::TNode<JSReceiver> tmp432;
    compiler::TNode<Number> tmp433;
    compiler::TNode<JSReceiver> tmp434;
    compiler::TNode<Object> tmp435;
    compiler::TNode<Object> tmp436;
    compiler::TNode<Smi> tmp437;
    compiler::TNode<JSArray> tmp438;
    compiler::TNode<JSArray> tmp439;
    compiler::TNode<JSArray> tmp440;
    compiler::TNode<Map> tmp441;
    compiler::TNode<BoolT> tmp442;
    compiler::TNode<Smi> tmp443;
    compiler::TNode<Object> tmp444;
    compiler::TNode<Object> tmp445;
    ca_.Bind(&block36, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 141);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 143);
    compiler::TNode<Oddball> tmp446;
    USE(tmp446);
    tmp446 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Goto(&block39, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, ca_.UncheckedCast<Object>(tmp445), tmp431, tmp434, tmp446, ca_.UncheckedCast<Object>(tmp445), tmp444, tmp443, tmp440);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp447;
    compiler::TNode<JSReceiver> tmp448;
    compiler::TNode<Number> tmp449;
    compiler::TNode<JSReceiver> tmp450;
    compiler::TNode<Object> tmp451;
    compiler::TNode<Object> tmp452;
    compiler::TNode<Smi> tmp453;
    compiler::TNode<JSArray> tmp454;
    compiler::TNode<JSArray> tmp455;
    compiler::TNode<JSArray> tmp456;
    compiler::TNode<Map> tmp457;
    compiler::TNode<BoolT> tmp458;
    compiler::TNode<Smi> tmp459;
    compiler::TNode<Object> tmp460;
    compiler::TNode<Object> tmp461;
    compiler::TNode<Object> tmp462;
    compiler::TNode<Context> tmp463;
    compiler::TNode<JSReceiver> tmp464;
    compiler::TNode<Oddball> tmp465;
    compiler::TNode<Object> tmp466;
    compiler::TNode<Object> tmp467;
    compiler::TNode<Smi> tmp468;
    compiler::TNode<JSArray> tmp469;
    ca_.Bind(&block39, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 142);
    compiler::TNode<Object> tmp470;
    USE(tmp470);
    tmp470 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp463}, compiler::TNode<JSReceiver>{tmp464}, compiler::TNode<Object>{tmp465}, compiler::TNode<Object>{tmp466}, compiler::TNode<Object>{tmp467}, compiler::TNode<Object>{tmp468}, compiler::TNode<Object>{tmp469});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 138);
    ca_.Goto(&block35, tmp447, tmp448, tmp449, tmp450, tmp451, tmp470, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp471;
    compiler::TNode<JSReceiver> tmp472;
    compiler::TNode<Number> tmp473;
    compiler::TNode<JSReceiver> tmp474;
    compiler::TNode<Object> tmp475;
    compiler::TNode<Object> tmp476;
    compiler::TNode<Smi> tmp477;
    compiler::TNode<JSArray> tmp478;
    compiler::TNode<JSArray> tmp479;
    compiler::TNode<JSArray> tmp480;
    compiler::TNode<Map> tmp481;
    compiler::TNode<BoolT> tmp482;
    compiler::TNode<Smi> tmp483;
    compiler::TNode<Object> tmp484;
    compiler::TNode<Object> tmp485;
    ca_.Bind(&block35, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 137);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 130);
    ca_.Goto(&block14, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp486;
    compiler::TNode<JSReceiver> tmp487;
    compiler::TNode<Number> tmp488;
    compiler::TNode<JSReceiver> tmp489;
    compiler::TNode<Object> tmp490;
    compiler::TNode<Object> tmp491;
    compiler::TNode<Smi> tmp492;
    compiler::TNode<JSArray> tmp493;
    compiler::TNode<JSArray> tmp494;
    compiler::TNode<JSArray> tmp495;
    compiler::TNode<Map> tmp496;
    compiler::TNode<BoolT> tmp497;
    compiler::TNode<Smi> tmp498;
    ca_.Bind(&block14, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498);
    compiler::TNode<Smi> tmp499;
    USE(tmp499);
    tmp499 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp500;
    USE(tmp500);
    tmp500 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp498}, compiler::TNode<Smi>{tmp499});
    ca_.Goto(&block13, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp500);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp501;
    compiler::TNode<JSReceiver> tmp502;
    compiler::TNode<Number> tmp503;
    compiler::TNode<JSReceiver> tmp504;
    compiler::TNode<Object> tmp505;
    compiler::TNode<Object> tmp506;
    compiler::TNode<Smi> tmp507;
    compiler::TNode<JSArray> tmp508;
    compiler::TNode<JSArray> tmp509;
    compiler::TNode<JSArray> tmp510;
    compiler::TNode<Map> tmp511;
    compiler::TNode<BoolT> tmp512;
    compiler::TNode<Smi> tmp513;
    ca_.Bind(&block12, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 148);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 149);
    compiler::TNode<Oddball> tmp514;
    USE(tmp514);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp514 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp506}, &label0);
    ca_.Goto(&block42, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp506, tmp506, tmp514);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block43, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp506, tmp506);
    }
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp515;
    compiler::TNode<JSReceiver> tmp516;
    compiler::TNode<Number> tmp517;
    compiler::TNode<JSReceiver> tmp518;
    compiler::TNode<Object> tmp519;
    compiler::TNode<Object> tmp520;
    compiler::TNode<Smi> tmp521;
    compiler::TNode<JSArray> tmp522;
    compiler::TNode<JSArray> tmp523;
    compiler::TNode<JSArray> tmp524;
    compiler::TNode<Map> tmp525;
    compiler::TNode<BoolT> tmp526;
    compiler::TNode<Object> tmp527;
    compiler::TNode<Object> tmp528;
    ca_.Bind(&block43, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528);
    ca_.Goto(&block41, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp529;
    compiler::TNode<JSReceiver> tmp530;
    compiler::TNode<Number> tmp531;
    compiler::TNode<JSReceiver> tmp532;
    compiler::TNode<Object> tmp533;
    compiler::TNode<Object> tmp534;
    compiler::TNode<Smi> tmp535;
    compiler::TNode<JSArray> tmp536;
    compiler::TNode<JSArray> tmp537;
    compiler::TNode<JSArray> tmp538;
    compiler::TNode<Map> tmp539;
    compiler::TNode<BoolT> tmp540;
    compiler::TNode<Object> tmp541;
    compiler::TNode<Object> tmp542;
    compiler::TNode<Oddball> tmp543;
    ca_.Bind(&block42, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 150);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp529}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduceRight");
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp544;
    compiler::TNode<JSReceiver> tmp545;
    compiler::TNode<Number> tmp546;
    compiler::TNode<JSReceiver> tmp547;
    compiler::TNode<Object> tmp548;
    compiler::TNode<Object> tmp549;
    compiler::TNode<Smi> tmp550;
    compiler::TNode<JSArray> tmp551;
    compiler::TNode<JSArray> tmp552;
    compiler::TNode<JSArray> tmp553;
    compiler::TNode<Map> tmp554;
    compiler::TNode<BoolT> tmp555;
    compiler::TNode<Object> tmp556;
    ca_.Bind(&block41, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 152);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 153);
    ca_.Goto(&block2, tmp544, tmp545, tmp546, tmp547, tmp548, ca_.UncheckedCast<Object>(tmp556));
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp557;
    compiler::TNode<JSReceiver> tmp558;
    compiler::TNode<Number> tmp559;
    compiler::TNode<JSReceiver> tmp560;
    compiler::TNode<Object> tmp561;
    compiler::TNode<Object> tmp562;
    ca_.Bind(&block2, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 119);
    ca_.Goto(&block44, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp563;
    compiler::TNode<Object> tmp564;
    ca_.Bind(&block1, &tmp563, &tmp564);
    *label_Bailout_parameter_1 = tmp564;
    *label_Bailout_parameter_0 = tmp563;
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp565;
    compiler::TNode<JSReceiver> tmp566;
    compiler::TNode<Number> tmp567;
    compiler::TNode<JSReceiver> tmp568;
    compiler::TNode<Object> tmp569;
    compiler::TNode<Object> tmp570;
    ca_.Bind(&block44, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570);
  return compiler::TNode<Object>{tmp570};
}

TF_BUILTIN(ArrayReduceRight, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSReceiver, Object, Number, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSReceiver, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, JSReceiver, Object, Number, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 163);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    tmp5 = RequireObjectCoercible_241(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, "Array.prototype.reduceRight");
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 166);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 169);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 172);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 173);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 175);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp17}, compiler::TNode<RawPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}}, compiler::TNode<IntPtrT>{tmp24});
    compiler::TNode<JSReceiver> tmp26;
    USE(tmp26);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp26 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp20}, compiler::TNode<Object>{tmp25}, &label0);
    ca_.Goto(&block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25, tmp26);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block6, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block2, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    ca_.Bind(&block5, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 182);
    compiler::TNode<IntPtrT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp37}, compiler::TNode<IntPtrT>{tmp44});
    ca_.Branch(tmp45, &block7, &block8, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<Context> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<Number> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    ca_.Bind(&block7, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    compiler::TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp46}, compiler::TNode<RawPtrT>{tmp47}, compiler::TNode<IntPtrT>{tmp48}}, compiler::TNode<IntPtrT>{tmp54});
    ca_.Goto(&block10, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    compiler::TNode<Oddball> tmp64;
    USE(tmp64);
    tmp64 = TheHole_62(state_);
    ca_.Goto(&block9, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block10, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block9, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<JSReceiver> tmp81;
    compiler::TNode<Object> tmp82;
    ca_.Bind(&block9, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 181);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 185);
    compiler::TNode<Object> tmp83;
    USE(tmp83);
    compiler::TypedCodeAssemblerVariable<Number> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = FastArrayReduceRight_26(state_, compiler::TNode<Context>{tmp77}, compiler::TNode<JSReceiver>{tmp79}, compiler::TNode<Number>{tmp80}, compiler::TNode<JSReceiver>{tmp81}, compiler::TNode<Object>{tmp82}, &label0, &result_0_0, &result_0_1);
    ca_.Goto(&block13, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, tmp83);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp79, tmp80, tmp81, tmp82, result_0_0.value(), result_0_1.value());
    }
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<JSReceiver> tmp93;
    compiler::TNode<Number> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Number> tmp97;
    compiler::TNode<Object> tmp98;
    ca_.Bind(&block14, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block12, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp97, tmp98);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<RawPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Number> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSReceiver> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<JSReceiver> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    ca_.Bind(&block13, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    arguments.PopAndReturn(tmp112);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp113;
    compiler::TNode<RawPtrT> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Number> tmp119;
    compiler::TNode<JSReceiver> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<Object> tmp123;
    ca_.Bind(&block12, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 190);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 189);
    compiler::TNode<Object> tmp124;
    tmp124 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceRightLoopContinuation, tmp116, tmp118, tmp120, tmp123, tmp118, tmp122, tmp119);
    USE(tmp124);
    arguments.PopAndReturn(tmp124);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp125;
    compiler::TNode<RawPtrT> tmp126;
    compiler::TNode<IntPtrT> tmp127;
    compiler::TNode<Context> tmp128;
    compiler::TNode<Object> tmp129;
    ca_.Bind(&block2, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.SetSourcePosition("../../src/builtins/array-reduce-right.tq", 194);
    compiler::TNode<IntPtrT> tmp130;
    USE(tmp130);
    tmp130 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp125}, compiler::TNode<RawPtrT>{tmp126}, compiler::TNode<IntPtrT>{tmp127}}, compiler::TNode<IntPtrT>{tmp130});
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp128}, MessageTemplate::kCalledNonCallable, compiler::TNode<Object>{tmp131});
  }
}

}  // namespace internal
}  // namespace v8

