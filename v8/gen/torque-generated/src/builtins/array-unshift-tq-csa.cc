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

compiler::TNode<Number> GenericArrayUnshift_49(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, TorqueStructArguments p_arguments) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number, Number, Number, Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number, Number, Number, Oddball> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number, Number, Number, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi, Number, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_arguments.frame, p_arguments.base, p_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 11);
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 14);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 17);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = Convert5ATSmi8ATintptr_184(state_, compiler::TNode<IntPtrT>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 20);
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp7}, compiler::TNode<Smi>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 22);
    compiler::TNode<Number> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp16}, compiler::TNode<Number>{tmp17});
    compiler::TNode<Number> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_157(state_, kMaxSafeInteger);
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp18}, compiler::TNode<Number>{tmp19});
    ca_.Branch(tmp20, &block4, &block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<Number> tmp27;
    compiler::TNode<Smi> tmp28;
    ca_.Bind(&block4, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 23);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp21}, MessageTemplate::kInvalidArrayLength);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Smi> tmp36;
    ca_.Bind(&block5, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 27);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 30);
    ca_.Goto(&block8, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp35);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<Number> tmp45;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    compiler::TNode<Number> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp47;
    USE(tmp47);
    tmp47 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp45}, compiler::TNode<Number>{tmp46});
    ca_.Branch(tmp47, &block6, &block7, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Number> tmp56;
    ca_.Bind(&block6, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 32);
    compiler::TNode<Number> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp56}, compiler::TNode<Number>{tmp57});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 35);
    compiler::TNode<Number> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp56}, compiler::TNode<Number>{tmp55});
    compiler::TNode<Number> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp59}, compiler::TNode<Number>{tmp60});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 38);
    compiler::TNode<Oddball> tmp62;
    tmp62 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp48, tmp53, tmp58));
    USE(tmp62);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 41);
    compiler::TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = True_65(state_);
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp62}, compiler::TNode<HeapObject>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp58, tmp61, tmp62);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Number> tmp73;
    compiler::TNode<Number> tmp74;
    compiler::TNode<Number> tmp75;
    compiler::TNode<Oddball> tmp76;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 43);
    compiler::TNode<Object> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp65}, compiler::TNode<Object>{tmp70}, compiler::TNode<Object>{tmp74});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 46);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp65, tmp70, tmp75, tmp77);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 41);
    ca_.Goto(&block11, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<RawPtrT> tmp81;
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<Number> tmp87;
    compiler::TNode<Number> tmp88;
    compiler::TNode<Number> tmp89;
    compiler::TNode<Oddball> tmp90;
    ca_.Bind(&block10, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 49);
    compiler::TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp92;
    tmp92 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp79, tmp84, tmp89, tmp91));
    USE(tmp92);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 41);
    ca_.Goto(&block11, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<RawPtrT> tmp95;
    compiler::TNode<RawPtrT> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<JSReceiver> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Number> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Number> tmp103;
    compiler::TNode<Oddball> tmp104;
    ca_.Bind(&block11, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 53);
    compiler::TNode<Number> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp101}, compiler::TNode<Number>{tmp105});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 30);
    ca_.Goto(&block8, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp106);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<RawPtrT> tmp109;
    compiler::TNode<RawPtrT> tmp110;
    compiler::TNode<IntPtrT> tmp111;
    compiler::TNode<JSReceiver> tmp112;
    compiler::TNode<Number> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<Number> tmp115;
    ca_.Bind(&block7, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 57);
    compiler::TNode<Smi> tmp116;
    USE(tmp116);
    tmp116 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 62);
    ca_.Goto(&block14, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<Number> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<Smi> tmp126;
    ca_.Bind(&block14, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    compiler::TNode<BoolT> tmp127;
    USE(tmp127);
    tmp127 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp126}, compiler::TNode<Smi>{tmp124});
    ca_.Branch(tmp127, &block12, &block13, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<RawPtrT> tmp130;
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<IntPtrT> tmp132;
    compiler::TNode<JSReceiver> tmp133;
    compiler::TNode<Number> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Number> tmp136;
    compiler::TNode<Smi> tmp137;
    ca_.Bind(&block12, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 64);
    compiler::TNode<IntPtrT> tmp138;
    USE(tmp138);
    tmp138 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp137});
    compiler::TNode<Object> tmp139;
    USE(tmp139);
    tmp139 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp130}, compiler::TNode<RawPtrT>{tmp131}, compiler::TNode<IntPtrT>{tmp132}}, compiler::TNode<IntPtrT>{tmp138});
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp128, tmp133, tmp137, tmp139);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 67);
    compiler::TNode<Smi> tmp141;
    USE(tmp141);
    tmp141 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp142;
    USE(tmp142);
    tmp142 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp137}, compiler::TNode<Smi>{tmp141});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 62);
    ca_.Goto(&block14, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp142);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<RawPtrT> tmp145;
    compiler::TNode<RawPtrT> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<JSReceiver> tmp148;
    compiler::TNode<Number> tmp149;
    compiler::TNode<Smi> tmp150;
    compiler::TNode<Number> tmp151;
    compiler::TNode<Smi> tmp152;
    ca_.Bind(&block13, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 20);
    ca_.Goto(&block3, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<RawPtrT> tmp155;
    compiler::TNode<RawPtrT> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Number> tmp159;
    compiler::TNode<Smi> tmp160;
    ca_.Bind(&block3, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 72);
    compiler::TNode<Number> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp159}, compiler::TNode<Number>{tmp160});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 73);
    compiler::TNode<String> tmp162;
    USE(tmp162);
    tmp162 = kLengthString_68(state_);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp153, tmp158, tmp162, tmp161);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 76);
    ca_.Goto(&block1, tmp153, tmp154, tmp155, tmp156, tmp157, tmp161);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<RawPtrT> tmp166;
    compiler::TNode<RawPtrT> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    compiler::TNode<Number> tmp169;
    ca_.Bind(&block1, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 8);
    ca_.Goto(&block15, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169);
  }

    compiler::TNode<Context> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<RawPtrT> tmp172;
    compiler::TNode<RawPtrT> tmp173;
    compiler::TNode<IntPtrT> tmp174;
    compiler::TNode<Number> tmp175;
    ca_.Bind(&block15, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
  return compiler::TNode<Number>{tmp175};
}

TF_BUILTIN(ArrayPrototypeUnshift, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSArray, Map> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSArray, Map> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSArray, Map, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSArray, Map, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 83);
    compiler::TNode<JSArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast13ATFastJSArray_1363(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 84);
    EnsureWriteableFastElements_50(state_, compiler::TNode<Context>{tmp15}, compiler::TNode<JSArray>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 86);
    compiler::TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp19);
    compiler::TNode<Map>tmp20 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp18, tmp19});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 87);
    compiler::TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).IsExtensibleMap(compiler::TNode<Map>{tmp20});
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp21});
    ca_.Branch(tmp22, &block5, &block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp20);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<JSArray> tmp28;
    compiler::TNode<Map> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.Goto(&block2, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<Context> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSArray> tmp35;
    compiler::TNode<Map> tmp36;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 88);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).EnsureArrayLengthWritable(compiler::TNode<Map>{tmp36}, &label0);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp36);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp36);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<JSArray> tmp42;
    compiler::TNode<Map> tmp43;
    compiler::TNode<Map> tmp44;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block2, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSArray> tmp50;
    compiler::TNode<Map> tmp51;
    compiler::TNode<Map> tmp52;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 91);
    compiler::TNode<JSFunction> tmp53;
    USE(tmp53);
    tmp53 = LoadTargetFromFrame_304(state_);
    compiler::TNode<Oddball> tmp54;
    USE(tmp54);
    tmp54 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 92);
    compiler::TNode<Int32T> tmp55;
    USE(tmp55);
    tmp55 = Convert7ATint328ATintptr_183(state_, compiler::TNode<IntPtrT>{tmp47});
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 90);
   CodeStubAssembler(state_).TailCallBuiltin(Builtins::kArrayUnshift, tmp48, tmp53, tmp54, tmp55);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    ca_.Bind(&block2, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../src/builtins/array-unshift.tq", 95);
    compiler::TNode<Number> tmp61;
    USE(tmp61);
    tmp61 = GenericArrayUnshift_49(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp60}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp56}, compiler::TNode<RawPtrT>{tmp57}, compiler::TNode<IntPtrT>{tmp58}});
    arguments.PopAndReturn(tmp61);
  }
}

}  // namespace internal
}  // namespace v8

