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

const char* kBuiltinName_312(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.slice";
}

void FastCopy_313(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_src, compiler::TNode<JSTypedArray> p_dest, compiler::TNode<IntPtrT> p_k, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, Int32T, Smi, Smi, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi, Int32T, UintPtrT, Int32T, UintPtrT, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_src, p_dest, p_k, p_count);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 16);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<JSTypedArray> tmp4;
    compiler::TNode<JSTypedArray> tmp5;
    compiler::TNode<IntPtrT> tmp6;
    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<Smi> tmp11;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 18);
    compiler::TNode<Int32T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp8}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 19);
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    std::tie(tmp13, tmp14) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(compiler::TNode<JSTypedArray>{tmp9}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 25);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(ElementsKindNotEqual_78(state_, compiler::TNode<Int32T>{tmp12}, compiler::TNode<Int32T>{tmp14}));
    ca_.Branch(tmp15, &block5, &block6, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    compiler::TNode<JSTypedArray> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Int32T> tmp20;
    compiler::TNode<UintPtrT> tmp21;
    compiler::TNode<Int32T> tmp22;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Int32T> tmp27;
    compiler::TNode<UintPtrT> tmp28;
    compiler::TNode<Int32T> tmp29;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 26);
    compiler::TNode<IntPtrT> tmp30 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp30);
    compiler::TNode<JSArrayBuffer>tmp31 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp24, tmp30});
    compiler::TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).BitcastTaggedToWord(compiler::TNode<Object>{tmp31}));
    compiler::TNode<IntPtrT> tmp33 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp33);
    compiler::TNode<JSArrayBuffer>tmp34 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp23, tmp33});
    compiler::TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).BitcastTaggedToWord(compiler::TNode<Object>{tmp34}));
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp32}, compiler::TNode<IntPtrT>{tmp35}));
    ca_.Branch(tmp36, &block7, &block8, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29);
  }

  if (block7.is_used()) {
    compiler::TNode<JSTypedArray> tmp37;
    compiler::TNode<JSTypedArray> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Int32T> tmp41;
    compiler::TNode<UintPtrT> tmp42;
    compiler::TNode<Int32T> tmp43;
    ca_.Bind(&block7, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 27);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<JSTypedArray> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<UintPtrT> tmp49;
    compiler::TNode<Int32T> tmp50;
    ca_.Bind(&block8, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp47}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp51}, compiler::TNode<UintPtrT>{tmp49}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp52}, compiler::TNode<UintPtrT>{tmp49}));
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp53}, compiler::TNode<UintPtrT>{tmp51}));
    ca_.Branch(tmp54, &block12, &block13, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp49, tmp50, tmp47, tmp47, tmp51, tmp52);
  }

  if (block12.is_used()) {
    compiler::TNode<JSTypedArray> tmp55;
    compiler::TNode<JSTypedArray> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<Smi> tmp58;
    compiler::TNode<Int32T> tmp59;
    compiler::TNode<UintPtrT> tmp60;
    compiler::TNode<Int32T> tmp61;
    compiler::TNode<UintPtrT> tmp62;
    compiler::TNode<Int32T> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<UintPtrT> tmp66;
    compiler::TNode<UintPtrT> tmp67;
    ca_.Bind(&block12, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block10, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block13.is_used()) {
    compiler::TNode<JSTypedArray> tmp68;
    compiler::TNode<JSTypedArray> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Int32T> tmp72;
    compiler::TNode<UintPtrT> tmp73;
    compiler::TNode<Int32T> tmp74;
    compiler::TNode<UintPtrT> tmp75;
    compiler::TNode<Int32T> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<UintPtrT> tmp79;
    compiler::TNode<UintPtrT> tmp80;
    ca_.Bind(&block13, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block11, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp80);
  }

  if (block11.is_used()) {
    compiler::TNode<JSTypedArray> tmp81;
    compiler::TNode<JSTypedArray> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Int32T> tmp85;
    compiler::TNode<UintPtrT> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<UintPtrT> tmp88;
    compiler::TNode<Int32T> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<UintPtrT> tmp92;
    ca_.Bind(&block11, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 31);
    ca_.Goto(&block9, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp92);
  }

  if (block10.is_used()) {
    compiler::TNode<JSTypedArray> tmp93;
    compiler::TNode<JSTypedArray> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<Int32T> tmp97;
    compiler::TNode<UintPtrT> tmp98;
    compiler::TNode<Int32T> tmp99;
    ca_.Bind(&block10, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<JSTypedArray> tmp100;
    compiler::TNode<JSTypedArray> tmp101;
    compiler::TNode<IntPtrT> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Int32T> tmp104;
    compiler::TNode<UintPtrT> tmp105;
    compiler::TNode<Int32T> tmp106;
    compiler::TNode<UintPtrT> tmp107;
    ca_.Bind(&block9, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 30);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 33);
    compiler::TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = ca_.UncheckedCast<Smi>(Convert13ATPositiveSmi8ATintptr_166(state_, compiler::TNode<IntPtrT>{tmp102}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp109;
    USE(tmp109);
    tmp109 = ca_.UncheckedCast<UintPtrT>(Convert9ATuintptr13ATPositiveSmi_164(state_, compiler::TNode<Smi>{tmp108}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp110;
    USE(tmp110);
    tmp110 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp109}, compiler::TNode<UintPtrT>{tmp105}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp111;
    USE(tmp111);
    tmp111 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp110}, compiler::TNode<UintPtrT>{tmp105}));
    compiler::TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp111}, compiler::TNode<UintPtrT>{tmp109}));
    ca_.Branch(tmp112, &block17, &block18, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp105, tmp106, tmp108, tmp108, tmp109, tmp110);
  }

  if (block17.is_used()) {
    compiler::TNode<JSTypedArray> tmp113;
    compiler::TNode<JSTypedArray> tmp114;
    compiler::TNode<IntPtrT> tmp115;
    compiler::TNode<Smi> tmp116;
    compiler::TNode<Int32T> tmp117;
    compiler::TNode<UintPtrT> tmp118;
    compiler::TNode<Int32T> tmp119;
    compiler::TNode<UintPtrT> tmp120;
    compiler::TNode<UintPtrT> tmp121;
    compiler::TNode<Int32T> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<UintPtrT> tmp125;
    compiler::TNode<UintPtrT> tmp126;
    ca_.Bind(&block17, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.Goto(&block15, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120);
  }

  if (block18.is_used()) {
    compiler::TNode<JSTypedArray> tmp127;
    compiler::TNode<JSTypedArray> tmp128;
    compiler::TNode<IntPtrT> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Int32T> tmp131;
    compiler::TNode<UintPtrT> tmp132;
    compiler::TNode<Int32T> tmp133;
    compiler::TNode<UintPtrT> tmp134;
    compiler::TNode<UintPtrT> tmp135;
    compiler::TNode<Int32T> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<UintPtrT> tmp139;
    compiler::TNode<UintPtrT> tmp140;
    ca_.Bind(&block18, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block16, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp140);
  }

  if (block16.is_used()) {
    compiler::TNode<JSTypedArray> tmp141;
    compiler::TNode<JSTypedArray> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Int32T> tmp145;
    compiler::TNode<UintPtrT> tmp146;
    compiler::TNode<Int32T> tmp147;
    compiler::TNode<UintPtrT> tmp148;
    compiler::TNode<UintPtrT> tmp149;
    compiler::TNode<Int32T> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<UintPtrT> tmp153;
    ca_.Bind(&block16, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 33);
    ca_.Goto(&block14, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp153);
  }

  if (block15.is_used()) {
    compiler::TNode<JSTypedArray> tmp154;
    compiler::TNode<JSTypedArray> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Int32T> tmp158;
    compiler::TNode<UintPtrT> tmp159;
    compiler::TNode<Int32T> tmp160;
    compiler::TNode<UintPtrT> tmp161;
    ca_.Bind(&block15, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 34);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block14.is_used()) {
    compiler::TNode<JSTypedArray> tmp162;
    compiler::TNode<JSTypedArray> tmp163;
    compiler::TNode<IntPtrT> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Int32T> tmp166;
    compiler::TNode<UintPtrT> tmp167;
    compiler::TNode<Int32T> tmp168;
    compiler::TNode<UintPtrT> tmp169;
    compiler::TNode<UintPtrT> tmp170;
    ca_.Bind(&block14, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 35);
    compiler::TNode<RawPtrT> tmp171;
    USE(tmp171);
    tmp171 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp162}));
    compiler::TNode<IntPtrT> tmp172;
    USE(tmp172);
    tmp172 = ca_.UncheckedCast<IntPtrT>(Convert8ATintptr9ATuintptr_165(state_, compiler::TNode<UintPtrT>{tmp170}));
    compiler::TNode<RawPtrT> tmp173;
    USE(tmp173);
    tmp173 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).RawPtrAdd(compiler::TNode<RawPtrT>{tmp171}, compiler::TNode<IntPtrT>{tmp172}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 40);
    compiler::TNode<RawPtrT> tmp174;
    USE(tmp174);
    tmp174 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp163}));
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(compiler::TNode<RawPtrT>{tmp174}, compiler::TNode<RawPtrT>{tmp173}, compiler::TNode<UintPtrT>{tmp169});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 15);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 13);
    ca_.Goto(&block2, tmp162, tmp163, tmp164, tmp165);
  }

  if (block2.is_used()) {
    compiler::TNode<JSTypedArray> tmp175;
    compiler::TNode<JSTypedArray> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<Smi> tmp178;
    ca_.Bind(&block2, &tmp175, &tmp176, &tmp177, &tmp178);
    ca_.Goto(&block19, tmp175, tmp176, tmp177, tmp178);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    compiler::TNode<JSTypedArray> tmp179;
    compiler::TNode<JSTypedArray> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<Smi> tmp182;
    ca_.Bind(&block19, &tmp179, &tmp180, &tmp181, &tmp182);
}

void SlowCopy_314(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_src, compiler::TNode<JSTypedArray> p_dest, compiler::TNode<IntPtrT> p_k, compiler::TNode<IntPtrT> p_final) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSTypedArray, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_src, p_dest, p_k, p_final);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSTypedArray> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 45);
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(compiler::TNode<Int32T>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 46);
    compiler::TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp2}));
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(compiler::TNode<Int32T>{tmp7}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 45);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<BoolT>{tmp6}, compiler::TNode<BoolT>{tmp8}));
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<JSTypedArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 48);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp10}, MessageTemplate::kBigIntMixedTypes);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSTypedArray> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 51);
    TypedArrayBuiltinsAssembler(state_).CallCCopyTypedArrayElementsSlice(compiler::TNode<JSTypedArray>{tmp16}, compiler::TNode<JSTypedArray>{tmp17}, compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 43);
    ca_.Goto(&block1, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSTypedArray> tmp21;
    compiler::TNode<JSTypedArray> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    ca_.Bind(&block1, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

    compiler::TNode<Context> tmp25;
    compiler::TNode<JSTypedArray> tmp26;
    compiler::TNode<JSTypedArray> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
}

TF_BUILTIN(TypedArrayPrototypeSlice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray, JSTypedArray, IntPtrT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray, JSTypedArray, IntPtrT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 63);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSTypedArray>(TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, kBuiltinName_312(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 66);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp6);
    compiler::TNode<UintPtrT>tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp5, tmp6});
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<IntPtrT>(Convert8ATintptr9ATuintptr_165(state_, compiler::TNode<UintPtrT>{tmp7}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 71);
    compiler::TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp9}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 73);
    compiler::TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp10}, compiler::TNode<HeapObject>{tmp11}));
    ca_.Branch(tmp12, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp8, tmp10);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    compiler::TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp13}, compiler::TNode<Object>{tmp20}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<JSTypedArray> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Object> tmp29;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    compiler::TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    ca_.Goto(&block3, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<RawPtrT> tmp33;
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<JSTypedArray> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block3, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 72);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 79);
    compiler::TNode<IntPtrT> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 1));
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp42}, compiler::TNode<RawPtrT>{tmp43}, compiler::TNode<IntPtrT>{tmp44}}, compiler::TNode<IntPtrT>{tmp49}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 81);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp50}, compiler::TNode<HeapObject>{tmp51}));
    ca_.Branch(tmp52, &block5, &block6, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<JSTypedArray> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block5, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp53}, compiler::TNode<Object>{tmp62}, compiler::TNode<IntPtrT>{tmp59}));
    ca_.Goto(&block8, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<JSTypedArray> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block6, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block7, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp70);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<RawPtrT> tmp76;
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<JSTypedArray> tmp79;
    compiler::TNode<IntPtrT> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    ca_.Bind(&block8, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block7, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<RawPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<JSTypedArray> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    ca_.Bind(&block7, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 80);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 84);
    compiler::TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp95}, compiler::TNode<IntPtrT>{tmp93}));
    compiler::TNode<IntPtrT> tmp97;
    USE(tmp97);
    tmp97 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<IntPtrT> tmp98;
    USE(tmp98);
    tmp98 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrMax(compiler::TNode<IntPtrT>{tmp96}, compiler::TNode<IntPtrT>{tmp97}));
    compiler::TNode<Smi> tmp99;
    USE(tmp99);
    tmp99 = ca_.UncheckedCast<Smi>(Convert13ATPositiveSmi8ATintptr_166(state_, compiler::TNode<IntPtrT>{tmp98}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 89);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 88);
    compiler::TNode<JSTypedArray> tmp100;
    USE(tmp100);
    tmp100 = ca_.UncheckedCast<JSTypedArray>(TypedArraySpeciesCreateByLength_298(state_, compiler::TNode<Context>{tmp85}, kBuiltinName_312(state_), compiler::TNode<JSTypedArray>{tmp90}, compiler::TNode<Smi>{tmp99}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 91);
    compiler::TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    compiler::TNode<BoolT> tmp102;
    USE(tmp102);
    tmp102 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp99}, compiler::TNode<Smi>{tmp101}));
    ca_.Branch(tmp102, &block9, &block10, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp99, tmp100);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<RawPtrT> tmp105;
    compiler::TNode<RawPtrT> tmp106;
    compiler::TNode<IntPtrT> tmp107;
    compiler::TNode<JSTypedArray> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<IntPtrT> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<IntPtrT> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<JSTypedArray> tmp115;
    ca_.Bind(&block9, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 93);
    compiler::TNode<JSTypedArray> tmp116;
    USE(tmp116);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp116 = EnsureAttached_319(state_, compiler::TNode<JSTypedArray>{tmp108}, &label0);
    ca_.Goto(&block15, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp108, tmp116);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp108);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<JSTypedArray> tmp122;
    compiler::TNode<IntPtrT> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<IntPtrT> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<IntPtrT> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<JSTypedArray> tmp129;
    compiler::TNode<JSTypedArray> tmp130;
    ca_.Bind(&block16, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    ca_.Goto(&block14, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<RawPtrT> tmp133;
    compiler::TNode<RawPtrT> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<JSTypedArray> tmp136;
    compiler::TNode<IntPtrT> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<IntPtrT> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<IntPtrT> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<JSTypedArray> tmp143;
    compiler::TNode<JSTypedArray> tmp144;
    compiler::TNode<JSTypedArray> tmp145;
    ca_.Bind(&block15, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 95);
    compiler::CodeAssemblerLabel label0(&ca_);
    FastCopy_313(state_, compiler::TNode<JSTypedArray>{tmp145}, compiler::TNode<JSTypedArray>{tmp143}, compiler::TNode<IntPtrT>{tmp139}, compiler::TNode<Smi>{tmp142}, &label0);
    ca_.Goto(&block17, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp145, tmp143, tmp139, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp145, tmp143, tmp139, tmp142);
    }
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<RawPtrT> tmp148;
    compiler::TNode<RawPtrT> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<JSTypedArray> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<IntPtrT> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<JSTypedArray> tmp158;
    compiler::TNode<JSTypedArray> tmp159;
    compiler::TNode<JSTypedArray> tmp160;
    compiler::TNode<JSTypedArray> tmp161;
    compiler::TNode<IntPtrT> tmp162;
    compiler::TNode<Smi> tmp163;
    ca_.Bind(&block18, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.Goto(&block12, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<RawPtrT> tmp166;
    compiler::TNode<RawPtrT> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    compiler::TNode<JSTypedArray> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<IntPtrT> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<IntPtrT> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<JSTypedArray> tmp176;
    compiler::TNode<JSTypedArray> tmp177;
    compiler::TNode<JSTypedArray> tmp178;
    compiler::TNode<JSTypedArray> tmp179;
    compiler::TNode<IntPtrT> tmp180;
    compiler::TNode<Smi> tmp181;
    ca_.Bind(&block17, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 92);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 97);
    ca_.Goto(&block13, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<RawPtrT> tmp184;
    compiler::TNode<RawPtrT> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    compiler::TNode<JSTypedArray> tmp187;
    compiler::TNode<IntPtrT> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<IntPtrT> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<IntPtrT> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<JSTypedArray> tmp194;
    ca_.Bind(&block14, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 98);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp182}, MessageTemplate::kDetachedOperation, kBuiltinName_312(state_));
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<RawPtrT> tmp197;
    compiler::TNode<RawPtrT> tmp198;
    compiler::TNode<IntPtrT> tmp199;
    compiler::TNode<JSTypedArray> tmp200;
    compiler::TNode<IntPtrT> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<IntPtrT> tmp205;
    compiler::TNode<Smi> tmp206;
    compiler::TNode<JSTypedArray> tmp207;
    ca_.Bind(&block13, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 100);
    ca_.Goto(&block11, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<RawPtrT> tmp210;
    compiler::TNode<RawPtrT> tmp211;
    compiler::TNode<IntPtrT> tmp212;
    compiler::TNode<JSTypedArray> tmp213;
    compiler::TNode<IntPtrT> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<IntPtrT> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<JSTypedArray> tmp220;
    ca_.Bind(&block12, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 101);
    SlowCopy_314(state_, compiler::TNode<Context>{tmp208}, compiler::TNode<JSTypedArray>{tmp213}, compiler::TNode<JSTypedArray>{tmp220}, compiler::TNode<IntPtrT>{tmp216}, compiler::TNode<IntPtrT>{tmp218});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 92);
    ca_.Goto(&block11, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<RawPtrT> tmp223;
    compiler::TNode<RawPtrT> tmp224;
    compiler::TNode<IntPtrT> tmp225;
    compiler::TNode<JSTypedArray> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<IntPtrT> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<IntPtrT> tmp231;
    compiler::TNode<Smi> tmp232;
    compiler::TNode<JSTypedArray> tmp233;
    ca_.Bind(&block11, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 91);
    ca_.Goto(&block10, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<RawPtrT> tmp236;
    compiler::TNode<RawPtrT> tmp237;
    compiler::TNode<IntPtrT> tmp238;
    compiler::TNode<JSTypedArray> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<IntPtrT> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<IntPtrT> tmp244;
    compiler::TNode<Smi> tmp245;
    compiler::TNode<JSTypedArray> tmp246;
    ca_.Bind(&block10, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 105);
    arguments.PopAndReturn(tmp246);
  }
}

}  // namespace internal
}  // namespace v8

