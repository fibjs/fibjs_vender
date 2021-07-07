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

const char* kBuiltinName_364(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.slice";
}

void FastCopy_365(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_src, compiler::TNode<JSTypedArray> p_dest, compiler::TNode<IntPtrT> p_k, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, IntPtrT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = IsForceSlowPath_239(state_);
    ca_.Branch(tmp4, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<JSTypedArray> tmp5;
    compiler::TNode<JSTypedArray> tmp6;
    compiler::TNode<IntPtrT> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<JSTypedArray> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block4, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 18);
    compiler::TNode<Int32T> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 19);
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    compiler::TNode<Int32T> tmp15;
    USE(tmp15);
    std::tie(tmp14, tmp15) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(compiler::TNode<JSTypedArray>{tmp10}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 25);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = ElementsKindNotEqual_72(state_, compiler::TNode<Int32T>{tmp13}, compiler::TNode<Int32T>{tmp15});
    ca_.Branch(tmp16, &block5, &block6, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block5.is_used()) {
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Int32T> tmp21;
    compiler::TNode<UintPtrT> tmp22;
    compiler::TNode<Int32T> tmp23;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Int32T> tmp28;
    compiler::TNode<UintPtrT> tmp29;
    compiler::TNode<Int32T> tmp30;
    ca_.Bind(&block6, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 26);
    compiler::TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp31);
    compiler::TNode<JSArrayBuffer>tmp32 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp25, tmp31});
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).BitcastTaggedToWord(compiler::TNode<Object>{tmp32});
    compiler::TNode<IntPtrT> tmp34 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp34);
    compiler::TNode<JSArrayBuffer>tmp35 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp24, tmp34});
    compiler::TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).BitcastTaggedToWord(compiler::TNode<Object>{tmp35});
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp33}, compiler::TNode<IntPtrT>{tmp36});
    ca_.Branch(tmp37, &block7, &block8, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<JSTypedArray> tmp38;
    compiler::TNode<JSTypedArray> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Int32T> tmp42;
    compiler::TNode<UintPtrT> tmp43;
    compiler::TNode<Int32T> tmp44;
    ca_.Bind(&block7, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 27);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<JSTypedArray> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<UintPtrT> tmp50;
    compiler::TNode<Int32T> tmp51;
    ca_.Bind(&block8, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = Convert9ATuintptr13ATPositiveSmi_187(state_, compiler::TNode<Smi>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp52}, compiler::TNode<UintPtrT>{tmp50});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp53}, compiler::TNode<UintPtrT>{tmp50});
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp54}, compiler::TNode<UintPtrT>{tmp52});
    ca_.Branch(tmp55, &block12, &block13, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp50, tmp51, tmp48, tmp48, tmp52, tmp53);
  }

  if (block12.is_used()) {
    compiler::TNode<JSTypedArray> tmp56;
    compiler::TNode<JSTypedArray> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Int32T> tmp60;
    compiler::TNode<UintPtrT> tmp61;
    compiler::TNode<Int32T> tmp62;
    compiler::TNode<UintPtrT> tmp63;
    compiler::TNode<Int32T> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<UintPtrT> tmp67;
    compiler::TNode<UintPtrT> tmp68;
    ca_.Bind(&block12, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block13.is_used()) {
    compiler::TNode<JSTypedArray> tmp69;
    compiler::TNode<JSTypedArray> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Int32T> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<Int32T> tmp75;
    compiler::TNode<UintPtrT> tmp76;
    compiler::TNode<Int32T> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<UintPtrT> tmp80;
    compiler::TNode<UintPtrT> tmp81;
    ca_.Bind(&block13, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block11, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp81);
  }

  if (block11.is_used()) {
    compiler::TNode<JSTypedArray> tmp82;
    compiler::TNode<JSTypedArray> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<Int32T> tmp86;
    compiler::TNode<UintPtrT> tmp87;
    compiler::TNode<Int32T> tmp88;
    compiler::TNode<UintPtrT> tmp89;
    compiler::TNode<Int32T> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<UintPtrT> tmp93;
    ca_.Bind(&block11, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 31);
    ca_.Goto(&block9, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp93);
  }

  if (block10.is_used()) {
    compiler::TNode<JSTypedArray> tmp94;
    compiler::TNode<JSTypedArray> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<Int32T> tmp98;
    compiler::TNode<UintPtrT> tmp99;
    compiler::TNode<Int32T> tmp100;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<JSTypedArray> tmp101;
    compiler::TNode<JSTypedArray> tmp102;
    compiler::TNode<IntPtrT> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Int32T> tmp105;
    compiler::TNode<UintPtrT> tmp106;
    compiler::TNode<Int32T> tmp107;
    compiler::TNode<UintPtrT> tmp108;
    ca_.Bind(&block9, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 30);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 33);
    compiler::TNode<Smi> tmp109;
    USE(tmp109);
    tmp109 = Convert13ATPositiveSmi8ATintptr_189(state_, compiler::TNode<IntPtrT>{tmp103});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    compiler::TNode<UintPtrT> tmp110;
    USE(tmp110);
    tmp110 = Convert9ATuintptr13ATPositiveSmi_187(state_, compiler::TNode<Smi>{tmp109});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    compiler::TNode<UintPtrT> tmp111;
    USE(tmp111);
    tmp111 = CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp110}, compiler::TNode<UintPtrT>{tmp106});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    compiler::TNode<UintPtrT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp111}, compiler::TNode<UintPtrT>{tmp106});
    compiler::TNode<BoolT> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp112}, compiler::TNode<UintPtrT>{tmp110});
    ca_.Branch(tmp113, &block17, &block18, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp106, tmp107, tmp109, tmp109, tmp110, tmp111);
  }

  if (block17.is_used()) {
    compiler::TNode<JSTypedArray> tmp114;
    compiler::TNode<JSTypedArray> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<Int32T> tmp118;
    compiler::TNode<UintPtrT> tmp119;
    compiler::TNode<Int32T> tmp120;
    compiler::TNode<UintPtrT> tmp121;
    compiler::TNode<UintPtrT> tmp122;
    compiler::TNode<Int32T> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<UintPtrT> tmp126;
    compiler::TNode<UintPtrT> tmp127;
    ca_.Bind(&block17, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.Goto(&block15, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block18.is_used()) {
    compiler::TNode<JSTypedArray> tmp128;
    compiler::TNode<JSTypedArray> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Int32T> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    compiler::TNode<Int32T> tmp134;
    compiler::TNode<UintPtrT> tmp135;
    compiler::TNode<UintPtrT> tmp136;
    compiler::TNode<Int32T> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<UintPtrT> tmp140;
    compiler::TNode<UintPtrT> tmp141;
    ca_.Bind(&block18, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block16, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp141);
  }

  if (block16.is_used()) {
    compiler::TNode<JSTypedArray> tmp142;
    compiler::TNode<JSTypedArray> tmp143;
    compiler::TNode<IntPtrT> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<Int32T> tmp146;
    compiler::TNode<UintPtrT> tmp147;
    compiler::TNode<Int32T> tmp148;
    compiler::TNode<UintPtrT> tmp149;
    compiler::TNode<UintPtrT> tmp150;
    compiler::TNode<Int32T> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<UintPtrT> tmp154;
    ca_.Bind(&block16, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 33);
    ca_.Goto(&block14, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp154);
  }

  if (block15.is_used()) {
    compiler::TNode<JSTypedArray> tmp155;
    compiler::TNode<JSTypedArray> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Int32T> tmp159;
    compiler::TNode<UintPtrT> tmp160;
    compiler::TNode<Int32T> tmp161;
    compiler::TNode<UintPtrT> tmp162;
    ca_.Bind(&block15, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 34);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block14.is_used()) {
    compiler::TNode<JSTypedArray> tmp163;
    compiler::TNode<JSTypedArray> tmp164;
    compiler::TNode<IntPtrT> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Int32T> tmp167;
    compiler::TNode<UintPtrT> tmp168;
    compiler::TNode<Int32T> tmp169;
    compiler::TNode<UintPtrT> tmp170;
    compiler::TNode<UintPtrT> tmp171;
    ca_.Bind(&block14, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 35);
    compiler::TNode<RawPtrT> tmp172;
    USE(tmp172);
    tmp172 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp163});
    compiler::TNode<IntPtrT> tmp173;
    USE(tmp173);
    tmp173 = Convert8ATintptr9ATuintptr_188(state_, compiler::TNode<UintPtrT>{tmp171});
    compiler::TNode<RawPtrT> tmp174;
    USE(tmp174);
    tmp174 = CodeStubAssembler(state_).RawPtrAdd(compiler::TNode<RawPtrT>{tmp172}, compiler::TNode<IntPtrT>{tmp173});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 40);
    compiler::TNode<RawPtrT> tmp175;
    USE(tmp175);
    tmp175 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp164});
    TypedArrayBuiltinsAssembler(state_).CallCMemmove(compiler::TNode<RawPtrT>{tmp175}, compiler::TNode<RawPtrT>{tmp174}, compiler::TNode<UintPtrT>{tmp170});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 15);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 13);
    ca_.Goto(&block2, tmp163, tmp164, tmp165, tmp166);
  }

  if (block2.is_used()) {
    compiler::TNode<JSTypedArray> tmp176;
    compiler::TNode<JSTypedArray> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<Smi> tmp179;
    ca_.Bind(&block2, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.Goto(&block19, tmp176, tmp177, tmp178, tmp179);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    compiler::TNode<JSTypedArray> tmp180;
    compiler::TNode<JSTypedArray> tmp181;
    compiler::TNode<IntPtrT> tmp182;
    compiler::TNode<Smi> tmp183;
    ca_.Bind(&block19, &tmp180, &tmp181, &tmp182, &tmp183);
}

void SlowCopy_366(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_src, compiler::TNode<JSTypedArray> p_dest, compiler::TNode<IntPtrT> p_k, compiler::TNode<IntPtrT> p_final) {
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
    tmp5 = CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp1});
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(compiler::TNode<Int32T>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 46);
    compiler::TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp2});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = TypedArrayBuiltinsAssembler(state_).IsBigInt64ElementsKind(compiler::TNode<Int32T>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 45);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<BoolT>{tmp6}, compiler::TNode<BoolT>{tmp8});
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray, JSTypedArray, IntPtrT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray, JSTypedArray, JSTypedArray, JSTypedArray, IntPtrT, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 63);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    tmp5 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, kBuiltinName_364(state_));
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 66);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp6);
    compiler::TNode<UintPtrT>tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp5, tmp6});
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert8ATintptr9ATuintptr_188(state_, compiler::TNode<UintPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 71);
    compiler::TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 73);
    compiler::TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<Object>{tmp10}, compiler::TNode<HeapObject>{tmp11});
    ca_.Branch(tmp12, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp8, tmp10);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    compiler::TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp16}, compiler::TNode<Object>{tmp20}, compiler::TNode<IntPtrT>{tmp19});
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSTypedArray> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Object> tmp29;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    compiler::TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    ca_.Goto(&block3, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<JSTypedArray> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block3, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<Context> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 72);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 79);
    compiler::TNode<IntPtrT> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp40}, compiler::TNode<RawPtrT>{tmp41}, compiler::TNode<IntPtrT>{tmp42}}, compiler::TNode<IntPtrT>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 81);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<Object>{tmp50}, compiler::TNode<HeapObject>{tmp51});
    ca_.Branch(tmp52, &block5, &block6, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<Context> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSTypedArray> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<Object> tmp62;
    ca_.Bind(&block5, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp56}, compiler::TNode<Object>{tmp62}, compiler::TNode<IntPtrT>{tmp59});
    ca_.Goto(&block8, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp64;
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<Context> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<JSTypedArray> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block6, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block7, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp70);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
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
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
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
    tmp96 = CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp95}, compiler::TNode<IntPtrT>{tmp93});
    compiler::TNode<IntPtrT> tmp97;
    USE(tmp97);
    tmp97 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<IntPtrT> tmp98;
    USE(tmp98);
    tmp98 = CodeStubAssembler(state_).IntPtrMax(compiler::TNode<IntPtrT>{tmp96}, compiler::TNode<IntPtrT>{tmp97});
    compiler::TNode<Smi> tmp99;
    USE(tmp99);
    tmp99 = Convert13ATPositiveSmi8ATintptr_189(state_, compiler::TNode<IntPtrT>{tmp98});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 89);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 88);
    compiler::TNode<JSTypedArray> tmp100;
    USE(tmp100);
    tmp100 = TypedArraySpeciesCreateByLength_350(state_, compiler::TNode<Context>{tmp88}, kBuiltinName_364(state_), compiler::TNode<JSTypedArray>{tmp90}, compiler::TNode<Smi>{tmp99});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 91);
    compiler::TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp99}, compiler::TNode<Smi>{tmp101});
    ca_.Branch(tmp102, &block9, &block10, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp99, tmp100);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp103;
    compiler::TNode<RawPtrT> tmp104;
    compiler::TNode<IntPtrT> tmp105;
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
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
    tmp116 = EnsureAttached_369(state_, compiler::TNode<JSTypedArray>{tmp108}, &label0);
    ca_.Goto(&block15, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp108, tmp116);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp108);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp117;
    compiler::TNode<RawPtrT> tmp118;
    compiler::TNode<IntPtrT> tmp119;
    compiler::TNode<Context> tmp120;
    compiler::TNode<Object> tmp121;
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
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<Context> tmp134;
    compiler::TNode<Object> tmp135;
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
    FastCopy_365(state_, compiler::TNode<JSTypedArray>{tmp145}, compiler::TNode<JSTypedArray>{tmp143}, compiler::TNode<IntPtrT>{tmp139}, compiler::TNode<Smi>{tmp142}, &label0);
    ca_.Goto(&block17, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp145, tmp143, tmp139, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp145, tmp143, tmp139, tmp142);
    }
  }

  if (block18.is_used()) {
    compiler::TNode<RawPtrT> tmp146;
    compiler::TNode<RawPtrT> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<Context> tmp149;
    compiler::TNode<Object> tmp150;
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
    compiler::TNode<RawPtrT> tmp164;
    compiler::TNode<RawPtrT> tmp165;
    compiler::TNode<IntPtrT> tmp166;
    compiler::TNode<Context> tmp167;
    compiler::TNode<Object> tmp168;
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
    compiler::TNode<RawPtrT> tmp182;
    compiler::TNode<RawPtrT> tmp183;
    compiler::TNode<IntPtrT> tmp184;
    compiler::TNode<Context> tmp185;
    compiler::TNode<Object> tmp186;
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
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp185}, MessageTemplate::kDetachedOperation, kBuiltinName_364(state_));
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp195;
    compiler::TNode<RawPtrT> tmp196;
    compiler::TNode<IntPtrT> tmp197;
    compiler::TNode<Context> tmp198;
    compiler::TNode<Object> tmp199;
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
    compiler::TNode<RawPtrT> tmp208;
    compiler::TNode<RawPtrT> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<Context> tmp211;
    compiler::TNode<Object> tmp212;
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
    SlowCopy_366(state_, compiler::TNode<Context>{tmp211}, compiler::TNode<JSTypedArray>{tmp213}, compiler::TNode<JSTypedArray>{tmp220}, compiler::TNode<IntPtrT>{tmp216}, compiler::TNode<IntPtrT>{tmp218});
    ca_.SetSourcePosition("../../src/builtins/typed-array-slice.tq", 92);
    ca_.Goto(&block11, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp221;
    compiler::TNode<RawPtrT> tmp222;
    compiler::TNode<IntPtrT> tmp223;
    compiler::TNode<Context> tmp224;
    compiler::TNode<Object> tmp225;
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
    compiler::TNode<RawPtrT> tmp234;
    compiler::TNode<RawPtrT> tmp235;
    compiler::TNode<IntPtrT> tmp236;
    compiler::TNode<Context> tmp237;
    compiler::TNode<Object> tmp238;
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

