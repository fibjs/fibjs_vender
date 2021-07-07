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

compiler::TNode<Object> LoadWithHoleCheck10FixedArray_19(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedArray, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_index);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArrayBase> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 13);
    compiler::TNode<FixedArray> tmp3;
    USE(tmp3);
    tmp3 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 14);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp4);
    compiler::TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp5);
    compiler::TNode<Smi>tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp3, tmp5});
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp8});
    compiler::TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp7});
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp9}, compiler::TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block7, &block8, tmp0, tmp1, tmp2, tmp3, tmp3, tmp4, tmp7, tmp2, tmp2, tmp8, tmp3, tmp4, tmp7, tmp8, tmp8);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<FixedArrayBase> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<FixedArray> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<HeapObject> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp26}, compiler::TNode<IntPtrT>{tmp27});
    compiler::TNode<IntPtrT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp23}, compiler::TNode<IntPtrT>{tmp28});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp30;
    USE(tmp30);
    compiler::TNode<IntPtrT> tmp31;
    USE(tmp31);
    std::tie(tmp30, tmp31) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp22}, compiler::TNode<IntPtrT>{tmp29}).Flatten();
    ca_.Goto(&block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp30, tmp31);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<FixedArrayBase> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<FixedArray> tmp35;
    compiler::TNode<FixedArray> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<Smi> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<HeapObject> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<FixedArrayBase> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<FixedArray> tmp50;
    compiler::TNode<FixedArray> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<HeapObject> tmp57;
    compiler::TNode<IntPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<HeapObject> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    ca_.Bind(&block6, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block4, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp62, tmp63);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<FixedArrayBase> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<FixedArray> tmp67;
    compiler::TNode<FixedArray> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    ca_.Bind(&block5, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<FixedArrayBase> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<FixedArray> tmp77;
    compiler::TNode<FixedArray> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<IntPtrT> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<IntPtrT> tmp83;
    compiler::TNode<HeapObject> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    ca_.Bind(&block4, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block3, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp84, tmp85);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<FixedArrayBase> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<FixedArray> tmp89;
    compiler::TNode<FixedArray> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<IntPtrT> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<HeapObject> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    ca_.Bind(&block3, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 14);
    compiler::TNode<Object>tmp97 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp95, tmp96});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 15);
    compiler::TNode<Oddball> tmp98;
    USE(tmp98);
    tmp98 = TheHole_62(state_);
    compiler::TNode<BoolT> tmp99;
    USE(tmp99);
    tmp99 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp97}, compiler::TNode<HeapObject>{tmp98});
    ca_.Branch(tmp99, &block10, &block11, tmp86, tmp87, tmp88, tmp89, tmp97);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp100;
    compiler::TNode<FixedArrayBase> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<FixedArray> tmp103;
    compiler::TNode<Object> tmp104;
    ca_.Bind(&block10, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.Goto(&block1);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<FixedArrayBase> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<FixedArray> tmp108;
    compiler::TNode<Object> tmp109;
    ca_.Bind(&block11, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 16);
    compiler::TNode<Object> tmp110;
    USE(tmp110);
    tmp110 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1346(state_, compiler::TNode<Context>{tmp105}, compiler::TNode<Object>{tmp109});
    ca_.Goto(&block2, tmp105, tmp106, tmp107, tmp110);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp111;
    compiler::TNode<FixedArrayBase> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<Object> tmp114;
    ca_.Bind(&block2, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 10);
    ca_.Goto(&block12, tmp111, tmp112, tmp113, tmp114);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    compiler::TNode<Context> tmp115;
    compiler::TNode<FixedArrayBase> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<Object> tmp118;
    ca_.Bind(&block12, &tmp115, &tmp116, &tmp117, &tmp118);
  return compiler::TNode<Object>{tmp118};
}

compiler::TNode<Object> LoadWithHoleCheck16FixedDoubleArray_20(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedDoubleArray, FixedDoubleArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, FixedDoubleArray, FixedDoubleArray, Smi, Float64T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArrayBase, Smi, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_elements, p_index);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArrayBase> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 22);
    compiler::TNode<FixedDoubleArray> tmp3;
    USE(tmp3);
    tmp3 = UnsafeCast16FixedDoubleArray_1347(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 23);
    compiler::TNode<Float64T> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = CodeStubAssembler(state_).LoadDoubleWithHoleCheck(compiler::TNode<FixedDoubleArray>{tmp3}, compiler::TNode<Smi>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<FixedArrayBase> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<FixedDoubleArray> tmp8;
    compiler::TNode<FixedDoubleArray> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<FixedArrayBase> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<FixedDoubleArray> tmp14;
    compiler::TNode<FixedDoubleArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Float64T> tmp17;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 25);
    compiler::TNode<HeapNumber> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp17});
    ca_.Goto(&block2, tmp11, tmp12, tmp13, tmp18);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<FixedArrayBase> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Object> tmp22;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 19);
    ca_.Goto(&block5, tmp19, tmp20, tmp21, tmp22);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    compiler::TNode<Context> tmp23;
    compiler::TNode<FixedArrayBase> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26);
  return compiler::TNode<Object>{tmp26};
}

compiler::TNode<Number> GetFromIndex_21(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_length, TorqueStructArguments p_arguments) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, RawPtrT, RawPtrT, IntPtrT, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_length, p_arguments.frame, p_arguments.base, p_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Number> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 65);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 66);
    compiler::TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp8}, compiler::TNode<Number>{tmp12});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 65);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 67);
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp16}, compiler::TNode<RawPtrT>{tmp17}, compiler::TNode<IntPtrT>{tmp18}}, compiler::TNode<IntPtrT>{tmp19});
    compiler::TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp20}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 65);
    ca_.Goto(&block4, tmp14, tmp15, tmp16, tmp17, tmp18, tmp21);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<Number> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 70);
    compiler::TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).SmiConstant(0);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 71);
    compiler::TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = NumberIsGreaterThanOrEqual_78(state_, compiler::TNode<Number>{tmp33}, compiler::TNode<Number>{tmp35});
    ca_.Branch(tmp36, &block6, &block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Number> tmp43;
    ca_.Bind(&block6, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 74);
    compiler::TNode<Number> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp38}, compiler::TNode<Number>{tmp44});
    compiler::TNode<Number> tmp46;
    USE(tmp46);
    tmp46 = Min_80(state_, compiler::TNode<Number>{tmp42}, compiler::TNode<Number>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 71);
    ca_.Goto(&block8, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp46);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Number> tmp52;
    compiler::TNode<Number> tmp53;
    ca_.Bind(&block7, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 77);
    compiler::TNode<Number> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp48}, compiler::TNode<Number>{tmp52});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 71);
    ca_.Goto(&block8, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    ca_.Bind(&block8, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 79);
    ca_.Goto(&block1, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Number> tmp63;
    compiler::TNode<RawPtrT> tmp64;
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<Number> tmp67;
    ca_.Bind(&block1, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 61);
    ca_.Goto(&block9, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

    compiler::TNode<Context> tmp68;
    compiler::TNode<Number> tmp69;
    compiler::TNode<RawPtrT> tmp70;
    compiler::TNode<RawPtrT> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<Number> tmp73;
    ca_.Bind(&block9, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
  return compiler::TNode<Number>{tmp73};
}

compiler::TNode<Object> TryFastArrayLastIndexOf_22(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Object> p_searchElement, compiler::TNode<Number> p_from, compiler::CodeAssemblerLabel* label_Slow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSReceiver, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Smi, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, JSArray, Smi, Smi, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_searchElement, p_from);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 86);
    compiler::TNode<JSArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast13ATFastJSArray_135(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<JSArray> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 87);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp15});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 88);
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp17});
    ca_.Branch(tmp18, &block5, &block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<JSArray> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiConstant(-1);
    ca_.Goto(&block2, tmp19, tmp20, tmp21, tmp22, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<JSArray> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 90);
    compiler::TNode<Smi> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp29}, &label0);
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp29, tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp29);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<JSArray> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Number> tmp39;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<JSArray> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block7, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 91);
    compiler::TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp48);
    compiler::TNode<Map>tmp49 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp44, tmp48});
    compiler::TNode<Int32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).LoadMapElementsKind(compiler::TNode<Map>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 92);
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).IsFastSmiOrTaggedElementsKind(compiler::TNode<Int32T>{tmp50});
    ca_.Branch(tmp51, &block9, &block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp47, tmp50);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Number> tmp55;
    compiler::TNode<JSArray> tmp56;
    compiler::TNode<Smi> tmp57;
    compiler::TNode<Smi> tmp58;
    compiler::TNode<Int32T> tmp59;
    ca_.Bind(&block9, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 94);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 93);
    compiler::TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = FastArrayLastIndexOf10FixedArray_1357(state_, compiler::TNode<Context>{tmp52}, compiler::TNode<JSArray>{tmp56}, compiler::TNode<Smi>{tmp58}, compiler::TNode<Object>{tmp54});
    ca_.Goto(&block2, tmp52, tmp53, tmp54, tmp55, tmp60);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp61;
    compiler::TNode<JSReceiver> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Number> tmp64;
    compiler::TNode<JSArray> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<Int32T> tmp68;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 98);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 97);
    compiler::TNode<Smi> tmp69;
    USE(tmp69);
    tmp69 = FastArrayLastIndexOf16FixedDoubleArray_1358(state_, compiler::TNode<Context>{tmp61}, compiler::TNode<JSArray>{tmp65}, compiler::TNode<Smi>{tmp67}, compiler::TNode<Object>{tmp63});
    ca_.Goto(&block2, tmp61, tmp62, tmp63, tmp64, tmp69);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Number> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block2, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 82);
    ca_.Goto(&block11, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

    compiler::TNode<Context> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Object> tmp79;
    ca_.Bind(&block11, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
  return compiler::TNode<Object>{tmp79};
}

compiler::TNode<Object> GenericArrayLastIndexOf_23(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_object, compiler::TNode<Object> p_searchElement, compiler::TNode<Number> p_from) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball, Object, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball, Object, Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Number, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object, p_searchElement, p_from);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 104);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 107);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8);
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = NumberIsGreaterThanOrEqual_78(state_, compiler::TNode<Number>{tmp8}, compiler::TNode<Number>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Number> tmp15;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 109);
    compiler::TNode<Oddball> tmp16;
    tmp16 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp11, tmp12, tmp15));
    USE(tmp16);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 112);
    compiler::TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = True_65(state_);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp16}, compiler::TNode<HeapObject>{tmp17});
    ca_.Branch(tmp18, &block5, &block6, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSReceiver> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Oddball> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 114);
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp19}, compiler::TNode<Object>{tmp20}, compiler::TNode<Object>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 118);
    compiler::TNode<Oddball> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).StrictEqual(compiler::TNode<Object>{tmp21}, compiler::TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 121);
    compiler::TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_65(state_);
    compiler::TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp26}, compiler::TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block7, &block8, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Number> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Oddball> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Oddball> tmp36;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block1, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Oddball> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Oddball> tmp44;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 112);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Oddball> tmp50;
    ca_.Bind(&block6, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 125);
    compiler::TNode<Number> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp49}, compiler::TNode<Number>{tmp51});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 107);
    ca_.Goto(&block4, tmp45, tmp46, tmp47, tmp48, tmp52);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<Number> tmp57;
    ca_.Bind(&block3, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 129);
    compiler::TNode<Smi> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).SmiConstant(-1);
    ca_.Goto(&block1, tmp53, tmp54, tmp55, tmp56, tmp58);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Object> tmp63;
    ca_.Bind(&block1, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 101);
    ca_.Goto(&block9, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

    compiler::TNode<Context> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Number> tmp67;
    compiler::TNode<Object> tmp68;
    ca_.Bind(&block9, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
  return compiler::TNode<Object>{tmp68};
}

TF_BUILTIN(ArrayPrototypeLastIndexOf, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Object, Context, JSReceiver, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Object, Context, JSReceiver, Object, Number, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 136);
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 139);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 142);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiConstant(0);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = IsNumberEqual_73(state_, compiler::TNode<Number>{tmp6}, compiler::TNode<Number>{tmp7});
    ca_.Branch(tmp8, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    compiler::TNode<Number> tmp15;
    ca_.Bind(&block1, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiConstant(-1);
    arguments.PopAndReturn(tmp16);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 145);
    compiler::TNode<Number> tmp24;
    USE(tmp24);
    tmp24 = GetFromIndex_21(state_, compiler::TNode<Context>{tmp20}, compiler::TNode<Number>{tmp23}, TorqueStructArguments{compiler::TNode<RawPtrT>{tmp17}, compiler::TNode<RawPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 147);
    compiler::TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp17}, compiler::TNode<RawPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}}, compiler::TNode<IntPtrT>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 150);
    compiler::TNode<Object> tmp27;
    USE(tmp27);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp27 = TryFastArrayLastIndexOf_22(state_, compiler::TNode<Context>{tmp20}, compiler::TNode<JSReceiver>{tmp22}, compiler::TNode<Object>{tmp26}, compiler::TNode<Number>{tmp24}, &label0);
    ca_.Goto(&block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26, tmp20, tmp22, tmp26, tmp24, tmp27);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26, tmp20, tmp22, tmp26, tmp24);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<Context> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Context> tmp50;
    compiler::TNode<JSReceiver> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Object> tmp54;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    arguments.PopAndReturn(tmp54);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Object> tmp63;
    ca_.Bind(&block4, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 154);
    compiler::TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = GenericArrayLastIndexOf_23(state_, compiler::TNode<Context>{tmp58}, compiler::TNode<JSReceiver>{tmp60}, compiler::TNode<Object>{tmp63}, compiler::TNode<Number>{tmp62});
    arguments.PopAndReturn(tmp64);
  }
}

compiler::TNode<Smi> FastArrayLastIndexOf10FixedArray_1357(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Object> p_searchElement) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_from, p_searchElement);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 30);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp4);
    compiler::TNode<FixedArrayBase>tmp5 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp1, tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    compiler::TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp6});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp2);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<FixedArrayBase> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 38);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp15);
    compiler::TNode<Smi>tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp13, tmp15});
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp18);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSArray> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<JSArray> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<FixedArrayBase> tmp29;
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp30}, compiler::TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block4, &block5, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSArray> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<FixedArrayBase> tmp37;
    compiler::TNode<Smi> tmp38;
    ca_.Bind(&block4, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 43);
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp39 = LoadWithHoleCheck10FixedArray_19(state_, compiler::TNode<Context>{tmp33}, compiler::TNode<FixedArrayBase>{tmp37}, compiler::TNode<Smi>{tmp38}, &label0);
    ca_.Goto(&block9, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38, tmp39);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<FixedArrayBase> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<FixedArrayBase> tmp46;
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block10, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.Goto(&block8, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<JSArray> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<FixedArrayBase> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<FixedArrayBase> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 46);
    compiler::TNode<Oddball> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).StrictEqual(compiler::TNode<Object>{tmp51}, compiler::TNode<Object>{tmp56});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 47);
    compiler::TNode<Oddball> tmp58;
    USE(tmp58);
    tmp58 = True_65(state_);
    compiler::TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp57}, compiler::TNode<HeapObject>{tmp58});
    ca_.Branch(tmp59, &block11, &block12, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp56, tmp57);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSArray> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<FixedArrayBase> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Oddball> tmp67;
    ca_.Bind(&block11, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 49);
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSArray> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<FixedArrayBase> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Oddball> tmp75;
    ca_.Bind(&block12, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 52);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSArray> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<FixedArrayBase> tmp80;
    compiler::TNode<Smi> tmp81;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.Goto(&block7, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSArray> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<FixedArrayBase> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 54);
    compiler::TNode<Smi> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp87}, compiler::TNode<Smi>{tmp88});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp82, tmp83, tmp84, tmp85, tmp86, tmp89);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<JSArray> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<FixedArrayBase> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block5, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 58);
    compiler::TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, -1);
    ca_.Goto(&block1, tmp90, tmp91, tmp92, tmp93, tmp96);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block1, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 93);
    ca_.Goto(&block13, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

    compiler::TNode<Context> tmp102;
    compiler::TNode<JSArray> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Smi> tmp106;
    ca_.Bind(&block13, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
  return compiler::TNode<Smi>{tmp106};
}

compiler::TNode<Smi> FastArrayLastIndexOf16FixedDoubleArray_1358(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Object> p_searchElement) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, FixedArrayBase, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi, Object, Oddball> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, FixedArrayBase, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_from, p_searchElement);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 30);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp4);
    compiler::TNode<FixedArrayBase>tmp5 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp1, tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    compiler::TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    compiler::TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp6});
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp2);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<FixedArrayBase> tmp13;
    compiler::TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 38);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp15);
    compiler::TNode<Smi>tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp13, tmp15});
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 37);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp18);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSArray> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<JSArray> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<FixedArrayBase> tmp29;
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block6, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp30}, compiler::TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block4, &block5, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSArray> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<FixedArrayBase> tmp37;
    compiler::TNode<Smi> tmp38;
    ca_.Bind(&block4, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 43);
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp39 = LoadWithHoleCheck16FixedDoubleArray_20(state_, compiler::TNode<Context>{tmp33}, compiler::TNode<FixedArrayBase>{tmp37}, compiler::TNode<Smi>{tmp38}, &label0);
    ca_.Goto(&block9, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38, tmp39);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp37, tmp38);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<FixedArrayBase> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<FixedArrayBase> tmp46;
    compiler::TNode<Smi> tmp47;
    ca_.Bind(&block10, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.Goto(&block8, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<JSArray> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<FixedArrayBase> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<FixedArrayBase> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block9, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 46);
    compiler::TNode<Oddball> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).StrictEqual(compiler::TNode<Object>{tmp51}, compiler::TNode<Object>{tmp56});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 47);
    compiler::TNode<Oddball> tmp58;
    USE(tmp58);
    tmp58 = True_65(state_);
    compiler::TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp57}, compiler::TNode<HeapObject>{tmp58});
    ca_.Branch(tmp59, &block11, &block12, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp56, tmp57);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSArray> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<FixedArrayBase> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Oddball> tmp67;
    ca_.Bind(&block11, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 49);
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSArray> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<FixedArrayBase> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Oddball> tmp75;
    ca_.Bind(&block12, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 52);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSArray> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<FixedArrayBase> tmp80;
    compiler::TNode<Smi> tmp81;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 42);
    ca_.Goto(&block7, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<JSArray> tmp83;
    compiler::TNode<Smi> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<FixedArrayBase> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 54);
    compiler::TNode<Smi> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp87}, compiler::TNode<Smi>{tmp88});
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 41);
    ca_.Goto(&block6, tmp82, tmp83, tmp84, tmp85, tmp86, tmp89);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<JSArray> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<FixedArrayBase> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block5, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 58);
    compiler::TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, -1);
    ca_.Goto(&block1, tmp90, tmp91, tmp92, tmp93, tmp96);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block1, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/array-lastindexof.tq", 97);
    ca_.Goto(&block13, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

    compiler::TNode<Context> tmp102;
    compiler::TNode<JSArray> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Smi> tmp106;
    ca_.Bind(&block13, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
  return compiler::TNode<Smi>{tmp106};
}

}  // namespace internal
}  // namespace v8

