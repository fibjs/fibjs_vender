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

TF_BUILTIN(ArrayReducePreLoopEagerDeoptContinuation, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 17);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 18);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 19);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 25);
    compiler::TNode<Oddball> tmp79;
    USE(tmp79);
    tmp79 = TheHole_62(state_);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 24);
    compiler::TNode<Number> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Object> tmp81;
    tmp81 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp72, tmp76, tmp77, tmp79, tmp76, tmp80, tmp78);
    USE(tmp81);
    CodeStubAssembler(state_).Return(tmp81);
  }
}

TF_BUILTIN(ArrayReduceLoopEagerDeoptContinuation, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 40);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 41);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 42);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 43);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 45);
    compiler::TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceLoopLazyDeoptContinuation, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 56);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 57);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 58);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 59);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 63);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 62);
    compiler::TNode<Object> tmp146;
    tmp146 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp136, tmp142, tmp143, tmp141, tmp142, tmp144, tmp145);
    USE(tmp146);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 64);
    CodeStubAssembler(state_).Return(tmp146);
  }
}

TF_BUILTIN(ArrayReduceLoopContinuation, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 71);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 74);
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
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp15}, compiler::TNode<Number>{tmp13});
    ca_.Branch(tmp16, &block1, &block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSReceiver> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Number> tmp25;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 80);
    compiler::TNode<Oddball> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).HasProperty_Inline(compiler::TNode<Context>{tmp17}, compiler::TNode<JSReceiver>{tmp21}, compiler::TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 83);
    compiler::TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_65(state_);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp26}, compiler::TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block5, &block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<Oddball> tmp38;
    ca_.Bind(&block5, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 85);
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp29}, compiler::TNode<Object>{tmp33}, compiler::TNode<Object>{tmp37});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 88);
    compiler::TNode<Oddball> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp36}, &label0);
    ca_.Goto(&block9, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp36, tmp36, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp36, tmp36);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Oddball> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block8, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Oddball> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Oddball> tmp67;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 90);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 88);
    ca_.Goto(&block7, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp64, tmp62, tmp63, tmp64, tmp65);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<Number> tmp73;
    compiler::TNode<Number> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Oddball> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    ca_.Bind(&block8, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 92);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 96);
    compiler::TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 97);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 95);
    compiler::TNode<Object> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp68}, compiler::TNode<JSReceiver>{tmp70}, compiler::TNode<Object>{tmp80}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp79)}, compiler::TNode<Object>{tmp78}, compiler::TNode<Object>{tmp76}, compiler::TNode<Object>{tmp72});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 88);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp81, tmp76, tmp77, tmp78, tmp79);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<JSReceiver> tmp86;
    compiler::TNode<Number> tmp87;
    compiler::TNode<Number> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<Oddball> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 83);
    ca_.Goto(&block6, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<JSReceiver> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<JSReceiver> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Oddball> tmp103;
    ca_.Bind(&block6, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 74);
    ca_.Goto(&block4, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<JSReceiver> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSReceiver> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Number> tmp112;
    ca_.Bind(&block4, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    compiler::TNode<Number> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp112}, compiler::TNode<Number>{tmp113});
    ca_.Goto(&block3, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp114);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<JSReceiver> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<JSReceiver> tmp119;
    compiler::TNode<Number> tmp120;
    compiler::TNode<Number> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Number> tmp123;
    ca_.Bind(&block2, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 108);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 109);
    compiler::TNode<Oddball> tmp124;
    USE(tmp124);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp124 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp122}, &label0);
    ca_.Goto(&block13, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp122, tmp122, tmp124);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp122, tmp122);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSReceiver> tmp129;
    compiler::TNode<Number> tmp130;
    compiler::TNode<Number> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    ca_.Bind(&block14, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block12, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<JSReceiver> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<Number> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Oddball> tmp145;
    ca_.Bind(&block13, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 110);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp135}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduce");
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<JSReceiver> tmp147;
    compiler::TNode<JSReceiver> tmp148;
    compiler::TNode<Object> tmp149;
    compiler::TNode<JSReceiver> tmp150;
    compiler::TNode<Number> tmp151;
    compiler::TNode<Number> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Object> tmp154;
    ca_.Bind(&block12, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 112);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 113);
    CodeStubAssembler(state_).Return(ca_.UncheckedCast<Object>(tmp154));
  }
}

compiler::TNode<Object> FastArrayReduce_27(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSReceiver, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, JSArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, JSArray, Smi, Object> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Smi, Context, Smi, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object, Oddball> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object, Object, Context, JSReceiver, Oddball, Object, Object, Smi, JSArray> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi, Object, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Object, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Object, Object, Oddball> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, Object, Object, JSArray, JSArray, JSArray, Map, BoolT, Object> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 123);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 124);
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
    tmp27 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    ca_.Goto(&block1, tmp27, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<JSReceiver> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Smi> tmp34;
    ca_.Bind(&block3, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 126);
    compiler::TNode<JSArray> tmp35;
    USE(tmp35);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp35 = Cast20ATFastJSArrayForRead_136(state_, compiler::TNode<Context>{tmp28}, compiler::TNode<HeapObject>{tmp29}, &label0);
    ca_.Goto(&block9, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp29, tmp35);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp29);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    ca_.Bind(&block10, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block8, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<JSReceiver> tmp49;
    compiler::TNode<JSArray> tmp50;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block8, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    compiler::TNode<Number> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    ca_.Goto(&block1, tmp57, tmp56);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSArray> tmp64;
    ca_.Bind(&block7, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 127);
    compiler::TNode<JSArray> tmp65;
    USE(tmp65);
    compiler::TNode<JSArray> tmp66;
    USE(tmp66);
    compiler::TNode<Map> tmp67;
    USE(tmp67);
    compiler::TNode<BoolT> tmp68;
    USE(tmp68);
    std::tie(tmp65, tmp66, tmp67, tmp68) = NewFastJSArrayForReadWitness_237(state_, compiler::TNode<JSArray>{tmp64}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 130);
    compiler::TNode<Smi> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block13, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<JSArray> tmp76;
    compiler::TNode<JSArray> tmp77;
    compiler::TNode<JSArray> tmp78;
    compiler::TNode<Map> tmp79;
    compiler::TNode<BoolT> tmp80;
    compiler::TNode<Smi> tmp81;
    ca_.Bind(&block13, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    compiler::TNode<BoolT> tmp82;
    USE(tmp82);
    tmp82 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp81}, compiler::TNode<Number>{tmp72});
    ca_.Branch(tmp82, &block11, &block12, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<JSReceiver> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSArray> tmp89;
    compiler::TNode<JSArray> tmp90;
    compiler::TNode<JSArray> tmp91;
    compiler::TNode<Map> tmp92;
    compiler::TNode<BoolT> tmp93;
    compiler::TNode<Smi> tmp94;
    ca_.Bind(&block11, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3229);
    compiler::TNode<IntPtrT> tmp95 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp95);
    compiler::TNode<Map>tmp96 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp90, tmp95});
    compiler::TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<HeapObject>{tmp96}, compiler::TNode<HeapObject>{tmp92});
    ca_.Branch(tmp97, &block18, &block19, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<JSReceiver> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<JSArray> tmp104;
    compiler::TNode<JSArray> tmp105;
    compiler::TNode<JSArray> tmp106;
    compiler::TNode<Map> tmp107;
    compiler::TNode<BoolT> tmp108;
    compiler::TNode<Smi> tmp109;
    ca_.Bind(&block18, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block16, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<JSReceiver> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<JSArray> tmp116;
    compiler::TNode<JSArray> tmp117;
    compiler::TNode<JSArray> tmp118;
    compiler::TNode<Map> tmp119;
    compiler::TNode<BoolT> tmp120;
    compiler::TNode<Smi> tmp121;
    ca_.Bind(&block19, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3236);
    compiler::TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp122, &block20, &block21, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp123;
    compiler::TNode<JSReceiver> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSArray> tmp129;
    compiler::TNode<JSArray> tmp130;
    compiler::TNode<JSArray> tmp131;
    compiler::TNode<Map> tmp132;
    compiler::TNode<BoolT> tmp133;
    compiler::TNode<Smi> tmp134;
    ca_.Bind(&block20, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block16, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<JSReceiver> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<JSArray> tmp141;
    compiler::TNode<JSArray> tmp142;
    compiler::TNode<JSArray> tmp143;
    compiler::TNode<Map> tmp144;
    compiler::TNode<BoolT> tmp145;
    compiler::TNode<Smi> tmp146;
    ca_.Bind(&block21, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3237);
    compiler::TNode<JSArray> tmp147;
    USE(tmp147);
    tmp147 = (compiler::TNode<JSArray>{tmp142});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 131);
    ca_.Goto(&block17, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp147, tmp144, tmp145, tmp146);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<JSArray> tmp154;
    compiler::TNode<JSArray> tmp155;
    compiler::TNode<JSArray> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<BoolT> tmp158;
    compiler::TNode<Smi> tmp159;
    ca_.Bind(&block17, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.Goto(&block15, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp160;
    compiler::TNode<JSReceiver> tmp161;
    compiler::TNode<Number> tmp162;
    compiler::TNode<JSReceiver> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<JSArray> tmp166;
    compiler::TNode<JSArray> tmp167;
    compiler::TNode<JSArray> tmp168;
    compiler::TNode<Map> tmp169;
    compiler::TNode<BoolT> tmp170;
    compiler::TNode<Smi> tmp171;
    ca_.Bind(&block16, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.Goto(&block1, tmp171, tmp165);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp172;
    compiler::TNode<JSReceiver> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<JSReceiver> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<JSArray> tmp178;
    compiler::TNode<JSArray> tmp179;
    compiler::TNode<JSArray> tmp180;
    compiler::TNode<Map> tmp181;
    compiler::TNode<BoolT> tmp182;
    compiler::TNode<Smi> tmp183;
    ca_.Bind(&block15, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 134);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Goto(&block24, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp183, tmp180);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp184;
    compiler::TNode<JSReceiver> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<JSReceiver> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<JSArray> tmp190;
    compiler::TNode<JSArray> tmp191;
    compiler::TNode<JSArray> tmp192;
    compiler::TNode<Map> tmp193;
    compiler::TNode<BoolT> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<JSArray> tmp197;
    ca_.Bind(&block24, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 134);
    compiler::TNode<IntPtrT> tmp198 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp198);
    compiler::TNode<Number>tmp199 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp197, tmp198});
    compiler::TNode<BoolT> tmp200;
    USE(tmp200);
    tmp200 = NumberIsGreaterThanOrEqual_78(state_, compiler::TNode<Number>{tmp196}, compiler::TNode<Number>{tmp199});
    ca_.Branch(tmp200, &block22, &block23, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp201;
    compiler::TNode<JSReceiver> tmp202;
    compiler::TNode<Number> tmp203;
    compiler::TNode<JSReceiver> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<JSArray> tmp207;
    compiler::TNode<JSArray> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<Map> tmp210;
    compiler::TNode<BoolT> tmp211;
    compiler::TNode<Smi> tmp212;
    ca_.Bind(&block22, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block1, tmp212, tmp206);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<JSReceiver> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Object> tmp218;
    compiler::TNode<JSArray> tmp219;
    compiler::TNode<JSArray> tmp220;
    compiler::TNode<JSArray> tmp221;
    compiler::TNode<Map> tmp222;
    compiler::TNode<BoolT> tmp223;
    compiler::TNode<Smi> tmp224;
    ca_.Bind(&block23, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 136);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3242);
    ca_.Branch(tmp223, &block28, &block29, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp224, tmp213, tmp224);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp225;
    compiler::TNode<JSReceiver> tmp226;
    compiler::TNode<Number> tmp227;
    compiler::TNode<JSReceiver> tmp228;
    compiler::TNode<Object> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<JSArray> tmp231;
    compiler::TNode<JSArray> tmp232;
    compiler::TNode<JSArray> tmp233;
    compiler::TNode<Map> tmp234;
    compiler::TNode<BoolT> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Context> tmp238;
    compiler::TNode<Smi> tmp239;
    ca_.Bind(&block28, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3243);
    compiler::TNode<Object> tmp240;
    USE(tmp240);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp240 = LoadElementNoHole16FixedDoubleArray_235(state_, compiler::TNode<Context>{tmp238}, compiler::TNode<JSArray>{tmp233}, compiler::TNode<Smi>{tmp239}, &label0);
    ca_.Goto(&block31, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp233, tmp239, tmp240);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block32, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp233, tmp239);
    }
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp241;
    compiler::TNode<JSReceiver> tmp242;
    compiler::TNode<Number> tmp243;
    compiler::TNode<JSReceiver> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<JSArray> tmp247;
    compiler::TNode<JSArray> tmp248;
    compiler::TNode<JSArray> tmp249;
    compiler::TNode<Map> tmp250;
    compiler::TNode<BoolT> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Smi> tmp253;
    compiler::TNode<Context> tmp254;
    compiler::TNode<Smi> tmp255;
    compiler::TNode<JSArray> tmp256;
    compiler::TNode<Smi> tmp257;
    ca_.Bind(&block32, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257);
    ca_.Goto(&block26, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp258;
    compiler::TNode<JSReceiver> tmp259;
    compiler::TNode<Number> tmp260;
    compiler::TNode<JSReceiver> tmp261;
    compiler::TNode<Object> tmp262;
    compiler::TNode<Object> tmp263;
    compiler::TNode<JSArray> tmp264;
    compiler::TNode<JSArray> tmp265;
    compiler::TNode<JSArray> tmp266;
    compiler::TNode<Map> tmp267;
    compiler::TNode<BoolT> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Smi> tmp270;
    compiler::TNode<Context> tmp271;
    compiler::TNode<Smi> tmp272;
    compiler::TNode<JSArray> tmp273;
    compiler::TNode<Smi> tmp274;
    compiler::TNode<Object> tmp275;
    ca_.Bind(&block31, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275);
    ca_.Goto(&block27, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp275);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp276;
    compiler::TNode<JSReceiver> tmp277;
    compiler::TNode<Number> tmp278;
    compiler::TNode<JSReceiver> tmp279;
    compiler::TNode<Object> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<JSArray> tmp282;
    compiler::TNode<JSArray> tmp283;
    compiler::TNode<JSArray> tmp284;
    compiler::TNode<Map> tmp285;
    compiler::TNode<BoolT> tmp286;
    compiler::TNode<Smi> tmp287;
    compiler::TNode<Smi> tmp288;
    compiler::TNode<Context> tmp289;
    compiler::TNode<Smi> tmp290;
    ca_.Bind(&block29, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3246);
    compiler::TNode<Object> tmp291;
    USE(tmp291);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp291 = LoadElementNoHole10FixedArray_234(state_, compiler::TNode<Context>{tmp289}, compiler::TNode<JSArray>{tmp284}, compiler::TNode<Smi>{tmp290}, &label0);
    ca_.Goto(&block33, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp284, tmp290, tmp291);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp284, tmp290);
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp292;
    compiler::TNode<JSReceiver> tmp293;
    compiler::TNode<Number> tmp294;
    compiler::TNode<JSReceiver> tmp295;
    compiler::TNode<Object> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<JSArray> tmp298;
    compiler::TNode<JSArray> tmp299;
    compiler::TNode<JSArray> tmp300;
    compiler::TNode<Map> tmp301;
    compiler::TNode<BoolT> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Context> tmp305;
    compiler::TNode<Smi> tmp306;
    compiler::TNode<JSArray> tmp307;
    compiler::TNode<Smi> tmp308;
    ca_.Bind(&block34, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308);
    ca_.Goto(&block26, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp309;
    compiler::TNode<JSReceiver> tmp310;
    compiler::TNode<Number> tmp311;
    compiler::TNode<JSReceiver> tmp312;
    compiler::TNode<Object> tmp313;
    compiler::TNode<Object> tmp314;
    compiler::TNode<JSArray> tmp315;
    compiler::TNode<JSArray> tmp316;
    compiler::TNode<JSArray> tmp317;
    compiler::TNode<Map> tmp318;
    compiler::TNode<BoolT> tmp319;
    compiler::TNode<Smi> tmp320;
    compiler::TNode<Smi> tmp321;
    compiler::TNode<Context> tmp322;
    compiler::TNode<Smi> tmp323;
    compiler::TNode<JSArray> tmp324;
    compiler::TNode<Smi> tmp325;
    compiler::TNode<Object> tmp326;
    ca_.Bind(&block33, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326);
    ca_.Goto(&block27, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp326);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp327;
    compiler::TNode<JSReceiver> tmp328;
    compiler::TNode<Number> tmp329;
    compiler::TNode<JSReceiver> tmp330;
    compiler::TNode<Object> tmp331;
    compiler::TNode<Object> tmp332;
    compiler::TNode<JSArray> tmp333;
    compiler::TNode<JSArray> tmp334;
    compiler::TNode<JSArray> tmp335;
    compiler::TNode<Map> tmp336;
    compiler::TNode<BoolT> tmp337;
    compiler::TNode<Smi> tmp338;
    compiler::TNode<Smi> tmp339;
    compiler::TNode<Context> tmp340;
    compiler::TNode<Smi> tmp341;
    compiler::TNode<Object> tmp342;
    ca_.Bind(&block27, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 136);
    ca_.Goto(&block25, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp342);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp343;
    compiler::TNode<JSReceiver> tmp344;
    compiler::TNode<Number> tmp345;
    compiler::TNode<JSReceiver> tmp346;
    compiler::TNode<Object> tmp347;
    compiler::TNode<Object> tmp348;
    compiler::TNode<JSArray> tmp349;
    compiler::TNode<JSArray> tmp350;
    compiler::TNode<JSArray> tmp351;
    compiler::TNode<Map> tmp352;
    compiler::TNode<BoolT> tmp353;
    compiler::TNode<Smi> tmp354;
    ca_.Bind(&block26, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354);
    ca_.Goto(&block14, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp355;
    compiler::TNode<JSReceiver> tmp356;
    compiler::TNode<Number> tmp357;
    compiler::TNode<JSReceiver> tmp358;
    compiler::TNode<Object> tmp359;
    compiler::TNode<Object> tmp360;
    compiler::TNode<JSArray> tmp361;
    compiler::TNode<JSArray> tmp362;
    compiler::TNode<JSArray> tmp363;
    compiler::TNode<Map> tmp364;
    compiler::TNode<BoolT> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<Object> tmp367;
    ca_.Bind(&block25, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 137);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 138);
    compiler::TNode<Oddball> tmp368;
    USE(tmp368);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp368 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp360}, &label0);
    ca_.Goto(&block37, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp360, tmp360, tmp368);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp360, tmp360);
    }
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp369;
    compiler::TNode<JSReceiver> tmp370;
    compiler::TNode<Number> tmp371;
    compiler::TNode<JSReceiver> tmp372;
    compiler::TNode<Object> tmp373;
    compiler::TNode<Object> tmp374;
    compiler::TNode<JSArray> tmp375;
    compiler::TNode<JSArray> tmp376;
    compiler::TNode<JSArray> tmp377;
    compiler::TNode<Map> tmp378;
    compiler::TNode<BoolT> tmp379;
    compiler::TNode<Smi> tmp380;
    compiler::TNode<Object> tmp381;
    compiler::TNode<Object> tmp382;
    compiler::TNode<Object> tmp383;
    ca_.Bind(&block38, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.Goto(&block36, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp384;
    compiler::TNode<JSReceiver> tmp385;
    compiler::TNode<Number> tmp386;
    compiler::TNode<JSReceiver> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<Object> tmp389;
    compiler::TNode<JSArray> tmp390;
    compiler::TNode<JSArray> tmp391;
    compiler::TNode<JSArray> tmp392;
    compiler::TNode<Map> tmp393;
    compiler::TNode<BoolT> tmp394;
    compiler::TNode<Smi> tmp395;
    compiler::TNode<Object> tmp396;
    compiler::TNode<Object> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Oddball> tmp399;
    ca_.Bind(&block37, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 139);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 138);
    ca_.Goto(&block35, tmp384, tmp385, tmp386, tmp387, tmp388, tmp396, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp400;
    compiler::TNode<JSReceiver> tmp401;
    compiler::TNode<Number> tmp402;
    compiler::TNode<JSReceiver> tmp403;
    compiler::TNode<Object> tmp404;
    compiler::TNode<Object> tmp405;
    compiler::TNode<JSArray> tmp406;
    compiler::TNode<JSArray> tmp407;
    compiler::TNode<JSArray> tmp408;
    compiler::TNode<Map> tmp409;
    compiler::TNode<BoolT> tmp410;
    compiler::TNode<Smi> tmp411;
    compiler::TNode<Object> tmp412;
    compiler::TNode<Object> tmp413;
    ca_.Bind(&block36, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 141);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 143);
    compiler::TNode<Oddball> tmp414;
    USE(tmp414);
    tmp414 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Goto(&block39, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, ca_.UncheckedCast<Object>(tmp413), tmp400, tmp403, tmp414, ca_.UncheckedCast<Object>(tmp413), tmp412, tmp411, tmp408);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp415;
    compiler::TNode<JSReceiver> tmp416;
    compiler::TNode<Number> tmp417;
    compiler::TNode<JSReceiver> tmp418;
    compiler::TNode<Object> tmp419;
    compiler::TNode<Object> tmp420;
    compiler::TNode<JSArray> tmp421;
    compiler::TNode<JSArray> tmp422;
    compiler::TNode<JSArray> tmp423;
    compiler::TNode<Map> tmp424;
    compiler::TNode<BoolT> tmp425;
    compiler::TNode<Smi> tmp426;
    compiler::TNode<Object> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<Object> tmp429;
    compiler::TNode<Context> tmp430;
    compiler::TNode<JSReceiver> tmp431;
    compiler::TNode<Oddball> tmp432;
    compiler::TNode<Object> tmp433;
    compiler::TNode<Object> tmp434;
    compiler::TNode<Smi> tmp435;
    compiler::TNode<JSArray> tmp436;
    ca_.Bind(&block39, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 142);
    compiler::TNode<Object> tmp437;
    USE(tmp437);
    tmp437 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp430}, compiler::TNode<JSReceiver>{tmp431}, compiler::TNode<Object>{tmp432}, compiler::TNode<Object>{tmp433}, compiler::TNode<Object>{tmp434}, compiler::TNode<Object>{tmp435}, compiler::TNode<Object>{tmp436});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 138);
    ca_.Goto(&block35, tmp415, tmp416, tmp417, tmp418, tmp419, tmp437, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp438;
    compiler::TNode<JSReceiver> tmp439;
    compiler::TNode<Number> tmp440;
    compiler::TNode<JSReceiver> tmp441;
    compiler::TNode<Object> tmp442;
    compiler::TNode<Object> tmp443;
    compiler::TNode<JSArray> tmp444;
    compiler::TNode<JSArray> tmp445;
    compiler::TNode<JSArray> tmp446;
    compiler::TNode<Map> tmp447;
    compiler::TNode<BoolT> tmp448;
    compiler::TNode<Smi> tmp449;
    compiler::TNode<Object> tmp450;
    compiler::TNode<Object> tmp451;
    ca_.Bind(&block35, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 137);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 130);
    ca_.Goto(&block14, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp452;
    compiler::TNode<JSReceiver> tmp453;
    compiler::TNode<Number> tmp454;
    compiler::TNode<JSReceiver> tmp455;
    compiler::TNode<Object> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<JSArray> tmp458;
    compiler::TNode<JSArray> tmp459;
    compiler::TNode<JSArray> tmp460;
    compiler::TNode<Map> tmp461;
    compiler::TNode<BoolT> tmp462;
    compiler::TNode<Smi> tmp463;
    ca_.Bind(&block14, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463);
    compiler::TNode<Smi> tmp464;
    USE(tmp464);
    tmp464 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp465;
    USE(tmp465);
    tmp465 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp463}, compiler::TNode<Smi>{tmp464});
    ca_.Goto(&block13, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp465);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp466;
    compiler::TNode<JSReceiver> tmp467;
    compiler::TNode<Number> tmp468;
    compiler::TNode<JSReceiver> tmp469;
    compiler::TNode<Object> tmp470;
    compiler::TNode<Object> tmp471;
    compiler::TNode<JSArray> tmp472;
    compiler::TNode<JSArray> tmp473;
    compiler::TNode<JSArray> tmp474;
    compiler::TNode<Map> tmp475;
    compiler::TNode<BoolT> tmp476;
    compiler::TNode<Smi> tmp477;
    ca_.Bind(&block12, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 148);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 149);
    compiler::TNode<Oddball> tmp478;
    USE(tmp478);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp478 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp471}, &label0);
    ca_.Goto(&block42, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp471, tmp471, tmp478);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block43, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp471, tmp471);
    }
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp479;
    compiler::TNode<JSReceiver> tmp480;
    compiler::TNode<Number> tmp481;
    compiler::TNode<JSReceiver> tmp482;
    compiler::TNode<Object> tmp483;
    compiler::TNode<Object> tmp484;
    compiler::TNode<JSArray> tmp485;
    compiler::TNode<JSArray> tmp486;
    compiler::TNode<JSArray> tmp487;
    compiler::TNode<Map> tmp488;
    compiler::TNode<BoolT> tmp489;
    compiler::TNode<Object> tmp490;
    compiler::TNode<Object> tmp491;
    ca_.Bind(&block43, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.Goto(&block41, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp492;
    compiler::TNode<JSReceiver> tmp493;
    compiler::TNode<Number> tmp494;
    compiler::TNode<JSReceiver> tmp495;
    compiler::TNode<Object> tmp496;
    compiler::TNode<Object> tmp497;
    compiler::TNode<JSArray> tmp498;
    compiler::TNode<JSArray> tmp499;
    compiler::TNode<JSArray> tmp500;
    compiler::TNode<Map> tmp501;
    compiler::TNode<BoolT> tmp502;
    compiler::TNode<Object> tmp503;
    compiler::TNode<Object> tmp504;
    compiler::TNode<Oddball> tmp505;
    ca_.Bind(&block42, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 150);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp492}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduce");
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp506;
    compiler::TNode<JSReceiver> tmp507;
    compiler::TNode<Number> tmp508;
    compiler::TNode<JSReceiver> tmp509;
    compiler::TNode<Object> tmp510;
    compiler::TNode<Object> tmp511;
    compiler::TNode<JSArray> tmp512;
    compiler::TNode<JSArray> tmp513;
    compiler::TNode<JSArray> tmp514;
    compiler::TNode<Map> tmp515;
    compiler::TNode<BoolT> tmp516;
    compiler::TNode<Object> tmp517;
    ca_.Bind(&block41, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 152);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 153);
    ca_.Goto(&block2, tmp506, tmp507, tmp508, tmp509, tmp510, ca_.UncheckedCast<Object>(tmp517));
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp518;
    compiler::TNode<JSReceiver> tmp519;
    compiler::TNode<Number> tmp520;
    compiler::TNode<JSReceiver> tmp521;
    compiler::TNode<Object> tmp522;
    compiler::TNode<Object> tmp523;
    ca_.Bind(&block2, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 118);
    ca_.Goto(&block44, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp524;
    compiler::TNode<Object> tmp525;
    ca_.Bind(&block1, &tmp524, &tmp525);
    *label_Bailout_parameter_1 = tmp525;
    *label_Bailout_parameter_0 = tmp524;
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp526;
    compiler::TNode<JSReceiver> tmp527;
    compiler::TNode<Number> tmp528;
    compiler::TNode<JSReceiver> tmp529;
    compiler::TNode<Object> tmp530;
    compiler::TNode<Object> tmp531;
    ca_.Bind(&block44, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531);
  return compiler::TNode<Object>{tmp531};
}

TF_BUILTIN(ArrayReduce, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 163);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    tmp5 = RequireObjectCoercible_241(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, "Array.prototype.reduce");
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 166);
    compiler::TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 169);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 172);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 173);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 175);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 182);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 181);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 185);
    compiler::TNode<Object> tmp83;
    USE(tmp83);
    compiler::TypedCodeAssemblerVariable<Number> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Object> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp83 = FastArrayReduce_27(state_, compiler::TNode<Context>{tmp77}, compiler::TNode<JSReceiver>{tmp79}, compiler::TNode<Number>{tmp80}, compiler::TNode<JSReceiver>{tmp81}, compiler::TNode<Object>{tmp82}, &label0, &result_0_0, &result_0_1);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 190);
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 189);
    compiler::TNode<Object> tmp124;
    tmp124 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayReduceLoopContinuation, tmp116, tmp118, tmp120, tmp123, tmp118, tmp122, tmp119);
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
    ca_.SetSourcePosition("../../src/builtins/array-reduce.tq", 194);
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

