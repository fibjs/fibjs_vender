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

int31_t kStringPadStart_334(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 0;
}

int31_t kStringPadEnd_335(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 1;
}

compiler::TNode<String> StringPad_336(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, TorqueStructArguments p_arguments, const char* p_methodName, int31_t p_variant) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String, Int32T, Int32T, Int32T, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String, Int32T, Int32T, Int32T, Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_arguments.frame, p_arguments.base, p_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 18);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_154(state_, p_methodName);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 19);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 21);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<String> tmp15;
    compiler::TNode<Smi> tmp16;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 22);
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<String> tmp22;
    compiler::TNode<Smi> tmp23;
    ca_.Bind(&block3, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 24);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp19}, compiler::TNode<RawPtrT>{tmp20}, compiler::TNode<IntPtrT>{tmp21}}, compiler::TNode<IntPtrT>{tmp24});
    compiler::TNode<Number> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).ToLength_Inline(compiler::TNode<Context>{tmp17}, compiler::TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 27);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 28);
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp27 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp26}, &label0);
    ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp26, tmp26, tmp26, tmp27);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp26, tmp26, tmp26);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<Number> tmp37;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block5, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<String> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Smi> tmp48;
    ca_.Bind(&block6, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 29);
    compiler::TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).SmiLessThanOrEqual(compiler::TNode<Smi>{tmp48}, compiler::TNode<Smi>{tmp44});
    ca_.Branch(tmp49, &block8, &block9, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp48);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<String> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Smi> tmp59;
    ca_.Bind(&block8, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 30);
    ca_.Goto(&block1, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<RawPtrT> tmp62;
    compiler::TNode<RawPtrT> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<String> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Number> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Smi> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 28);
    ca_.Goto(&block4, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<RawPtrT> tmp72;
    compiler::TNode<RawPtrT> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<String> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<Number> tmp77;
    compiler::TNode<Number> tmp78;
    ca_.Bind(&block5, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 28);
    ca_.Goto(&block4, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<RawPtrT> tmp81;
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<String> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<Number> tmp86;
    compiler::TNode<Number> tmp87;
    ca_.Bind(&block4, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 27);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 37);
    compiler::TNode<String> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr6String18ATconstexpr_string_154(state_, " ");
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 38);
    compiler::TNode<IntPtrT> tmp89;
    USE(tmp89);
    tmp89 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 40);
    compiler::TNode<IntPtrT> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<BoolT> tmp91;
    USE(tmp91);
    tmp91 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<IntPtrT>{tmp83}, compiler::TNode<IntPtrT>{tmp90});
    ca_.Branch(tmp91, &block10, &block11, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp88, tmp89);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<RawPtrT> tmp94;
    compiler::TNode<RawPtrT> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<String> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<String> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    ca_.Bind(&block10, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 41);
    compiler::TNode<IntPtrT> tmp102;
    USE(tmp102);
    tmp102 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp103;
    USE(tmp103);
    tmp103 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp94}, compiler::TNode<RawPtrT>{tmp95}, compiler::TNode<IntPtrT>{tmp96}}, compiler::TNode<IntPtrT>{tmp102});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 42);
    compiler::TNode<Oddball> tmp104;
    USE(tmp104);
    tmp104 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<Object>{tmp103}, compiler::TNode<HeapObject>{tmp104});
    ca_.Branch(tmp105, &block12, &block13, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp103);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<RawPtrT> tmp108;
    compiler::TNode<RawPtrT> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    compiler::TNode<String> tmp111;
    compiler::TNode<Smi> tmp112;
    compiler::TNode<Number> tmp113;
    compiler::TNode<String> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<Object> tmp116;
    ca_.Bind(&block12, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 43);
    compiler::TNode<String> tmp117;
    USE(tmp117);
    tmp117 = CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp106}, compiler::TNode<Object>{tmp116});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 44);
    compiler::TNode<IntPtrT> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp117});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 45);
    compiler::TNode<IntPtrT> tmp119;
    USE(tmp119);
    tmp119 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp120;
    USE(tmp120);
    tmp120 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp118}, compiler::TNode<IntPtrT>{tmp119});
    ca_.Branch(tmp120, &block14, &block15, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp117, tmp118, tmp116);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<RawPtrT> tmp123;
    compiler::TNode<RawPtrT> tmp124;
    compiler::TNode<IntPtrT> tmp125;
    compiler::TNode<String> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<Number> tmp128;
    compiler::TNode<String> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<Object> tmp131;
    ca_.Bind(&block14, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 46);
    ca_.Goto(&block1, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<RawPtrT> tmp134;
    compiler::TNode<RawPtrT> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<String> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<String> tmp140;
    compiler::TNode<IntPtrT> tmp141;
    compiler::TNode<Object> tmp142;
    ca_.Bind(&block15, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 42);
    ca_.Goto(&block13, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<RawPtrT> tmp145;
    compiler::TNode<RawPtrT> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<String> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<String> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<Object> tmp153;
    ca_.Bind(&block13, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 40);
    ca_.Goto(&block11, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<RawPtrT> tmp156;
    compiler::TNode<RawPtrT> tmp157;
    compiler::TNode<IntPtrT> tmp158;
    compiler::TNode<String> tmp159;
    compiler::TNode<Smi> tmp160;
    compiler::TNode<Number> tmp161;
    compiler::TNode<String> tmp162;
    compiler::TNode<IntPtrT> tmp163;
    ca_.Bind(&block11, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 54);
    compiler::TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).TaggedIsSmi(compiler::TNode<Object>{tmp161});
    compiler::TNode<BoolT> tmp165;
    USE(tmp165);
    tmp165 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp164});
    ca_.Branch(tmp165, &block16, &block17, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<RawPtrT> tmp168;
    compiler::TNode<RawPtrT> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<String> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Number> tmp173;
    compiler::TNode<String> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    ca_.Bind(&block16, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 55);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, tmp166);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<RawPtrT> tmp179;
    compiler::TNode<RawPtrT> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<String> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<Number> tmp184;
    compiler::TNode<String> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    ca_.Bind(&block17, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 58);
    compiler::TNode<Smi> tmp187;
    USE(tmp187);
    tmp187 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp177}, compiler::TNode<Object>{tmp184});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 59);
    compiler::TNode<Smi> tmp188;
    USE(tmp188);
    tmp188 = CodeStubAssembler(state_).SmiConstant(String::kMaxLength);
    compiler::TNode<BoolT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp187}, compiler::TNode<Smi>{tmp188});
    ca_.Branch(tmp189, &block18, &block19, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<RawPtrT> tmp192;
    compiler::TNode<RawPtrT> tmp193;
    compiler::TNode<IntPtrT> tmp194;
    compiler::TNode<String> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Number> tmp197;
    compiler::TNode<String> tmp198;
    compiler::TNode<IntPtrT> tmp199;
    compiler::TNode<Smi> tmp200;
    ca_.Bind(&block18, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 60);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, tmp190);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<RawPtrT> tmp204;
    compiler::TNode<RawPtrT> tmp205;
    compiler::TNode<IntPtrT> tmp206;
    compiler::TNode<String> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<Number> tmp209;
    compiler::TNode<String> tmp210;
    compiler::TNode<IntPtrT> tmp211;
    compiler::TNode<Smi> tmp212;
    ca_.Bind(&block19, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 63);
    compiler::TNode<Smi> tmp213;
    USE(tmp213);
    tmp213 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp212}, compiler::TNode<Smi>{tmp208});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 65);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 66);
    compiler::TNode<IntPtrT> tmp214;
    USE(tmp214);
    tmp214 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<BoolT> tmp215;
    USE(tmp215);
    tmp215 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp211}, compiler::TNode<IntPtrT>{tmp214});
    ca_.Branch(tmp215, &block20, &block21, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, ca_.Uninitialized<String>());
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<RawPtrT> tmp218;
    compiler::TNode<RawPtrT> tmp219;
    compiler::TNode<IntPtrT> tmp220;
    compiler::TNode<String> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<Number> tmp223;
    compiler::TNode<String> tmp224;
    compiler::TNode<IntPtrT> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<String> tmp228;
    ca_.Bind(&block20, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 70);
    compiler::TNode<String> tmp229;
    tmp229 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringRepeat, tmp216, tmp224, tmp227));
    USE(tmp229);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 66);
    ca_.Goto(&block22, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp229);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<RawPtrT> tmp232;
    compiler::TNode<RawPtrT> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<String> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Number> tmp237;
    compiler::TNode<String> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    compiler::TNode<Smi> tmp240;
    compiler::TNode<Smi> tmp241;
    compiler::TNode<String> tmp242;
    ca_.Bind(&block21, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 73);
    compiler::TNode<Int32T> tmp243;
    USE(tmp243);
    tmp243 = CodeStubAssembler(state_).TruncateIntPtrToInt32(compiler::TNode<IntPtrT>{tmp239});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 74);
    compiler::TNode<Int32T> tmp244;
    USE(tmp244);
    tmp244 = Convert7ATint325ATSmi_192(state_, compiler::TNode<Smi>{tmp241});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 75);
    compiler::TNode<Int32T> tmp245;
    USE(tmp245);
    tmp245 = CodeStubAssembler(state_).Int32Div(compiler::TNode<Int32T>{tmp244}, compiler::TNode<Int32T>{tmp243});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 76);
    compiler::TNode<Int32T> tmp246;
    USE(tmp246);
    tmp246 = CodeStubAssembler(state_).Int32Mod(compiler::TNode<Int32T>{tmp244}, compiler::TNode<Int32T>{tmp243});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 78);
    compiler::TNode<Smi> tmp247;
    USE(tmp247);
    tmp247 = Convert5ATSmi7ATint32_176(state_, compiler::TNode<Int32T>{tmp245});
    compiler::TNode<String> tmp248;
    tmp248 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringRepeat, tmp230, tmp238, tmp247));
    USE(tmp248);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 77);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 80);
    compiler::TNode<Int32T> tmp249;
    USE(tmp249);
    tmp249 = FromConstexpr7ATint3217ATconstexpr_int31_146(state_, 0);
    compiler::TNode<BoolT> tmp250;
    USE(tmp250);
    tmp250 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Int32T>{tmp246}, compiler::TNode<Int32T>{tmp249});
    ca_.Branch(tmp250, &block23, &block24, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp248, tmp243, tmp244, tmp245, tmp246);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp251;
    compiler::TNode<Object> tmp252;
    compiler::TNode<RawPtrT> tmp253;
    compiler::TNode<RawPtrT> tmp254;
    compiler::TNode<IntPtrT> tmp255;
    compiler::TNode<String> tmp256;
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Number> tmp258;
    compiler::TNode<String> tmp259;
    compiler::TNode<IntPtrT> tmp260;
    compiler::TNode<Smi> tmp261;
    compiler::TNode<Smi> tmp262;
    compiler::TNode<String> tmp263;
    compiler::TNode<Int32T> tmp264;
    compiler::TNode<Int32T> tmp265;
    compiler::TNode<Int32T> tmp266;
    compiler::TNode<Int32T> tmp267;
    ca_.Bind(&block23, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 82);
    compiler::TNode<IntPtrT> tmp268;
    USE(tmp268);
    tmp268 = Convert8ATintptr7ATint32_174(state_, compiler::TNode<Int32T>{tmp267});
    compiler::TNode<IntPtrT> tmp269;
    USE(tmp269);
    tmp269 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<String> tmp270;
    tmp270 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringSubstring, tmp251, tmp259, tmp269, tmp268));
    USE(tmp270);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 83);
    compiler::TNode<String> tmp271;
    USE(tmp271);
    tmp271 = StringAdd_82(state_, compiler::TNode<Context>{tmp251}, compiler::TNode<String>{tmp263}, compiler::TNode<String>{tmp270});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 80);
    ca_.Goto(&block24, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp271, tmp264, tmp265, tmp266, tmp267);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp272;
    compiler::TNode<Object> tmp273;
    compiler::TNode<RawPtrT> tmp274;
    compiler::TNode<RawPtrT> tmp275;
    compiler::TNode<IntPtrT> tmp276;
    compiler::TNode<String> tmp277;
    compiler::TNode<Smi> tmp278;
    compiler::TNode<Number> tmp279;
    compiler::TNode<String> tmp280;
    compiler::TNode<IntPtrT> tmp281;
    compiler::TNode<Smi> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<String> tmp284;
    compiler::TNode<Int32T> tmp285;
    compiler::TNode<Int32T> tmp286;
    compiler::TNode<Int32T> tmp287;
    compiler::TNode<Int32T> tmp288;
    ca_.Bind(&block24, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 71);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 66);
    ca_.Goto(&block22, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp289;
    compiler::TNode<Object> tmp290;
    compiler::TNode<RawPtrT> tmp291;
    compiler::TNode<RawPtrT> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    compiler::TNode<String> tmp294;
    compiler::TNode<Smi> tmp295;
    compiler::TNode<Number> tmp296;
    compiler::TNode<String> tmp297;
    compiler::TNode<IntPtrT> tmp298;
    compiler::TNode<Smi> tmp299;
    compiler::TNode<Smi> tmp300;
    compiler::TNode<String> tmp301;
    ca_.Bind(&block22, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 89);
    compiler::TNode<BoolT> tmp302;
    USE(tmp302);
    tmp302 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(p_variant, kStringPadStart_334(state_))));
    ca_.Branch(tmp302, &block25, &block26, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp303;
    compiler::TNode<Object> tmp304;
    compiler::TNode<RawPtrT> tmp305;
    compiler::TNode<RawPtrT> tmp306;
    compiler::TNode<IntPtrT> tmp307;
    compiler::TNode<String> tmp308;
    compiler::TNode<Smi> tmp309;
    compiler::TNode<Number> tmp310;
    compiler::TNode<String> tmp311;
    compiler::TNode<IntPtrT> tmp312;
    compiler::TNode<Smi> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<String> tmp315;
    ca_.Bind(&block25, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 90);
    compiler::TNode<String> tmp316;
    USE(tmp316);
    tmp316 = StringAdd_82(state_, compiler::TNode<Context>{tmp303}, compiler::TNode<String>{tmp315}, compiler::TNode<String>{tmp308});
    ca_.Goto(&block1, tmp303, tmp304, tmp305, tmp306, tmp307, tmp316);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp317;
    compiler::TNode<Object> tmp318;
    compiler::TNode<RawPtrT> tmp319;
    compiler::TNode<RawPtrT> tmp320;
    compiler::TNode<IntPtrT> tmp321;
    compiler::TNode<String> tmp322;
    compiler::TNode<Smi> tmp323;
    compiler::TNode<Number> tmp324;
    compiler::TNode<String> tmp325;
    compiler::TNode<IntPtrT> tmp326;
    compiler::TNode<Smi> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<String> tmp329;
    ca_.Bind(&block26, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 93);
    compiler::TNode<String> tmp330;
    USE(tmp330);
    tmp330 = StringAdd_82(state_, compiler::TNode<Context>{tmp317}, compiler::TNode<String>{tmp322}, compiler::TNode<String>{tmp329});
    ca_.Goto(&block1, tmp317, tmp318, tmp319, tmp320, tmp321, tmp330);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp331;
    compiler::TNode<Object> tmp332;
    compiler::TNode<RawPtrT> tmp333;
    compiler::TNode<RawPtrT> tmp334;
    compiler::TNode<IntPtrT> tmp335;
    compiler::TNode<String> tmp336;
    ca_.Bind(&block1, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 15);
    ca_.Goto(&block27, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336);
  }

    compiler::TNode<Context> tmp337;
    compiler::TNode<Object> tmp338;
    compiler::TNode<RawPtrT> tmp339;
    compiler::TNode<RawPtrT> tmp340;
    compiler::TNode<IntPtrT> tmp341;
    compiler::TNode<String> tmp342;
    ca_.Bind(&block27, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
  return compiler::TNode<String>{tmp342};
}

TF_BUILTIN(StringPrototypePadStart, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 101);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringPad_336(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, "String.prototype.padStart", kStringPadStart_334(state_));
    arguments.PopAndReturn(tmp5);
  }
}

TF_BUILTIN(StringPrototypePadEnd, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 109);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringPad_336(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, "String.prototype.padEnd", kStringPadEnd_335(state_));
    arguments.PopAndReturn(tmp5);
  }
}

}  // namespace internal
}  // namespace v8

