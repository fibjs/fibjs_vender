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

compiler::TNode<JSArray> HandleSimpleArgumentsSlice_38(compiler::CodeAssemblerState* state_, compiler::TNode<NativeContext> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<NativeContext> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 11);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, FixedArray::kMaxRegularLength);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<NativeContext> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<NativeContext> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 13);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 15);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp15);
    compiler::TNode<FixedArrayBase>tmp16 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp15});
    compiler::TNode<FixedArray> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = Cast10FixedArray_103(state_, compiler::TNode<HeapObject>{tmp16}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<NativeContext> tmp18;
    compiler::TNode<JSArgumentsObjectWithLength> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<NativeContext> tmp24;
    compiler::TNode<JSArgumentsObjectWithLength> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    compiler::TNode<FixedArrayBase> tmp29;
    compiler::TNode<FixedArray> tmp30;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 14);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 16);
    compiler::TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp31);
    compiler::TNode<Smi>tmp32 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp30, tmp31});
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp28}, compiler::TNode<Smi>{tmp32});
    ca_.Branch(tmp33, &block7, &block8, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<NativeContext> tmp34;
    compiler::TNode<JSArgumentsObjectWithLength> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<FixedArray> tmp39;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<NativeContext> tmp40;
    compiler::TNode<JSArgumentsObjectWithLength> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<FixedArray> tmp45;
    ca_.Bind(&block8, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 18);
    compiler::TNode<Map> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<NativeContext>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 20);
    compiler::TNode<JSArray> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp46}, compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp43});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 19);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 22);
    compiler::TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp48);
    compiler::TNode<FixedArrayBase>tmp49 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp47, tmp48});
    compiler::TNode<FixedArray> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = Cast10FixedArray_103(state_, compiler::TNode<HeapObject>{tmp49}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<NativeContext> tmp51;
    compiler::TNode<JSArgumentsObjectWithLength> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<FixedArray> tmp56;
    compiler::TNode<Map> tmp57;
    compiler::TNode<JSArray> tmp58;
    compiler::TNode<FixedArrayBase> tmp59;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    compiler::TNode<NativeContext> tmp60;
    compiler::TNode<JSArgumentsObjectWithLength> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<Map> tmp66;
    compiler::TNode<JSArray> tmp67;
    compiler::TNode<FixedArrayBase> tmp68;
    compiler::TNode<FixedArray> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 24);
    compiler::TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp62});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 25);
    compiler::TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp63});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 23);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp69}, compiler::TNode<IntPtrT>{tmp72}, compiler::TNode<FixedArrayBase>{tmp65}, compiler::TNode<IntPtrT>{tmp70}, compiler::TNode<IntPtrT>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 26);
    ca_.Goto(&block2, tmp60, tmp61, tmp62, tmp63, tmp67);
  }

  if (block2.is_used()) {
    compiler::TNode<NativeContext> tmp73;
    compiler::TNode<JSArgumentsObjectWithLength> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<JSArray> tmp77;
    ca_.Bind(&block2, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 6);
    ca_.Goto(&block11, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<NativeContext> tmp78;
    compiler::TNode<JSArgumentsObjectWithLength> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<JSArray> tmp82;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
  return compiler::TNode<JSArray>{tmp82};
}

compiler::TNode<JSArray> HandleFastAliasedSloppyArgumentsSlice_39(compiler::CodeAssemblerState* state_, compiler::TNode<NativeContext> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<NativeContext> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 34);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, FixedArray::kMaxRegularLength);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<NativeContext> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<NativeContext> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 37);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp14);
    compiler::TNode<FixedArrayBase>tmp15 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp14});
    compiler::TNode<FixedArray> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast25ATSloppyArgumentsElements_105(state_, compiler::TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<NativeContext> tmp17;
    compiler::TNode<JSArgumentsObjectWithLength> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<FixedArrayBase> tmp21;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<NativeContext> tmp22;
    compiler::TNode<JSArgumentsObjectWithLength> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<FixedArrayBase> tmp26;
    compiler::TNode<FixedArray> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 36);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 38);
    compiler::TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp28);
    compiler::TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp27, tmp28});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 40);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, SloppyArgumentsElements::kParameterMapStart);
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 39);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 44);
    compiler::TNode<Smi> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 46);
    compiler::TNode<IntPtrT> tmp33 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp33);
    compiler::TNode<IntPtrT> tmp34 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp34);
    compiler::TNode<Smi>tmp35 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp27, tmp34});
    compiler::TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    compiler::TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = Convert8ATintptr17ATconstexpr_int31_1349(state_, SloppyArgumentsElements::kArgumentsIndex);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp38;
    USE(tmp38);
    tmp38 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp37});
    compiler::TNode<UintPtrT> tmp39;
    USE(tmp39);
    tmp39 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp36});
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp38}, compiler::TNode<UintPtrT>{tmp39});
    ca_.Branch(tmp40, &block11, &block12, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp31, tmp32, tmp27, tmp33, tmp36, tmp37, tmp27, tmp33, tmp36, tmp37, tmp37);
  }

  if (block11.is_used()) {
    compiler::TNode<NativeContext> tmp41;
    compiler::TNode<JSArgumentsObjectWithLength> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<FixedArray> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<FixedArray> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<HeapObject> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    ca_.Bind(&block11, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp58;
    USE(tmp58);
    tmp58 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp57}, compiler::TNode<IntPtrT>{tmp58});
    compiler::TNode<IntPtrT> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp54}, compiler::TNode<IntPtrT>{tmp59});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp61;
    USE(tmp61);
    compiler::TNode<IntPtrT> tmp62;
    USE(tmp62);
    std::tie(tmp61, tmp62) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp53}, compiler::TNode<IntPtrT>{tmp60}).Flatten();
    ca_.Goto(&block10, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp61, tmp62);
  }

  if (block12.is_used()) {
    compiler::TNode<NativeContext> tmp63;
    compiler::TNode<JSArgumentsObjectWithLength> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<FixedArray> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<FixedArray> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<HeapObject> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    ca_.Bind(&block12, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block9, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block10.is_used()) {
    compiler::TNode<NativeContext> tmp80;
    compiler::TNode<JSArgumentsObjectWithLength> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<FixedArray> tmp84;
    compiler::TNode<Smi> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<FixedArray> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<IntPtrT> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<HeapObject> tmp92;
    compiler::TNode<IntPtrT> tmp93;
    compiler::TNode<IntPtrT> tmp94;
    compiler::TNode<IntPtrT> tmp95;
    compiler::TNode<IntPtrT> tmp96;
    compiler::TNode<HeapObject> tmp97;
    compiler::TNode<IntPtrT> tmp98;
    ca_.Bind(&block10, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block8, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp97, tmp98);
  }

  if (block9.is_used()) {
    compiler::TNode<NativeContext> tmp99;
    compiler::TNode<JSArgumentsObjectWithLength> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<FixedArray> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<FixedArray> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    ca_.Bind(&block9, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block8.is_used()) {
    compiler::TNode<NativeContext> tmp111;
    compiler::TNode<JSArgumentsObjectWithLength> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<FixedArray> tmp115;
    compiler::TNode<Smi> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<FixedArray> tmp119;
    compiler::TNode<IntPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<HeapObject> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    ca_.Bind(&block8, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.Goto(&block7, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp123, tmp124);
  }

  if (block7.is_used()) {
    compiler::TNode<NativeContext> tmp125;
    compiler::TNode<JSArgumentsObjectWithLength> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<FixedArray> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<FixedArray> tmp133;
    compiler::TNode<IntPtrT> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<HeapObject> tmp136;
    compiler::TNode<IntPtrT> tmp137;
    ca_.Bind(&block7, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 46);
    compiler::TNode<Object>tmp138 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp136, tmp137});
    compiler::TNode<FixedArray> tmp139;
    USE(tmp139);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp139 = Cast10FixedArray_1367(state_, compiler::TNode<Context>{tmp125}, compiler::TNode<Object>{tmp138}, &label0);
    ca_.Goto(&block14, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp138, tmp139);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp138);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<NativeContext> tmp140;
    compiler::TNode<JSArgumentsObjectWithLength> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<FixedArray> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Object> tmp148;
    ca_.Bind(&block15, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    compiler::TNode<NativeContext> tmp149;
    compiler::TNode<JSArgumentsObjectWithLength> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<FixedArray> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Smi> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<FixedArray> tmp158;
    ca_.Bind(&block14, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 48);
    compiler::TNode<IntPtrT> tmp159 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp159);
    compiler::TNode<Smi>tmp160 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp158, tmp159});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 49);
    compiler::TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp156}, compiler::TNode<Smi>{tmp160});
    ca_.Branch(tmp161, &block16, &block17, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp158, tmp160);
  }

  if (block16.is_used()) {
    compiler::TNode<NativeContext> tmp162;
    compiler::TNode<JSArgumentsObjectWithLength> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<FixedArray> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<FixedArray> tmp170;
    compiler::TNode<Smi> tmp171;
    ca_.Bind(&block16, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    ca_.Goto(&block1);
  }

  if (block17.is_used()) {
    compiler::TNode<NativeContext> tmp172;
    compiler::TNode<JSArgumentsObjectWithLength> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<FixedArray> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<FixedArray> tmp180;
    compiler::TNode<Smi> tmp181;
    ca_.Bind(&block17, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 52);
    compiler::TNode<IntPtrT> tmp182 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp182);
    compiler::TNode<IntPtrT> tmp183 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp183);
    compiler::TNode<Smi>tmp184 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp176, tmp183});
    compiler::TNode<IntPtrT> tmp185;
    USE(tmp185);
    tmp185 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp184});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    compiler::TNode<IntPtrT> tmp186;
    USE(tmp186);
    tmp186 = Convert8ATintptr17ATconstexpr_int31_1349(state_, SloppyArgumentsElements::kContextIndex);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp187;
    USE(tmp187);
    tmp187 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp186});
    compiler::TNode<UintPtrT> tmp188;
    USE(tmp188);
    tmp188 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp185});
    compiler::TNode<BoolT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp187}, compiler::TNode<UintPtrT>{tmp188});
    ca_.Branch(tmp189, &block22, &block23, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp176, tmp182, tmp185, tmp186, tmp176, tmp182, tmp185, tmp186, tmp186);
  }

  if (block22.is_used()) {
    compiler::TNode<NativeContext> tmp190;
    compiler::TNode<JSArgumentsObjectWithLength> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<FixedArray> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<FixedArray> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<FixedArray> tmp200;
    compiler::TNode<IntPtrT> tmp201;
    compiler::TNode<IntPtrT> tmp202;
    compiler::TNode<IntPtrT> tmp203;
    compiler::TNode<HeapObject> tmp204;
    compiler::TNode<IntPtrT> tmp205;
    compiler::TNode<IntPtrT> tmp206;
    compiler::TNode<IntPtrT> tmp207;
    compiler::TNode<IntPtrT> tmp208;
    ca_.Bind(&block22, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp209;
    USE(tmp209);
    tmp209 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp210;
    USE(tmp210);
    tmp210 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp208}, compiler::TNode<IntPtrT>{tmp209});
    compiler::TNode<IntPtrT> tmp211;
    USE(tmp211);
    tmp211 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp205}, compiler::TNode<IntPtrT>{tmp210});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp212;
    USE(tmp212);
    compiler::TNode<IntPtrT> tmp213;
    USE(tmp213);
    std::tie(tmp212, tmp213) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp204}, compiler::TNode<IntPtrT>{tmp211}).Flatten();
    ca_.Goto(&block21, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp212, tmp213);
  }

  if (block23.is_used()) {
    compiler::TNode<NativeContext> tmp214;
    compiler::TNode<JSArgumentsObjectWithLength> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<FixedArray> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<FixedArray> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<FixedArray> tmp224;
    compiler::TNode<IntPtrT> tmp225;
    compiler::TNode<IntPtrT> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    compiler::TNode<HeapObject> tmp228;
    compiler::TNode<IntPtrT> tmp229;
    compiler::TNode<IntPtrT> tmp230;
    compiler::TNode<IntPtrT> tmp231;
    compiler::TNode<IntPtrT> tmp232;
    ca_.Bind(&block23, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block20, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block21.is_used()) {
    compiler::TNode<NativeContext> tmp233;
    compiler::TNode<JSArgumentsObjectWithLength> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<FixedArray> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<Smi> tmp240;
    compiler::TNode<FixedArray> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<FixedArray> tmp243;
    compiler::TNode<IntPtrT> tmp244;
    compiler::TNode<IntPtrT> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    compiler::TNode<HeapObject> tmp247;
    compiler::TNode<IntPtrT> tmp248;
    compiler::TNode<IntPtrT> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<IntPtrT> tmp251;
    compiler::TNode<HeapObject> tmp252;
    compiler::TNode<IntPtrT> tmp253;
    ca_.Bind(&block21, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block19, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp252, tmp253);
  }

  if (block20.is_used()) {
    compiler::TNode<NativeContext> tmp254;
    compiler::TNode<JSArgumentsObjectWithLength> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<Smi> tmp257;
    compiler::TNode<FixedArray> tmp258;
    compiler::TNode<Smi> tmp259;
    compiler::TNode<Smi> tmp260;
    compiler::TNode<Smi> tmp261;
    compiler::TNode<FixedArray> tmp262;
    compiler::TNode<Smi> tmp263;
    compiler::TNode<FixedArray> tmp264;
    compiler::TNode<IntPtrT> tmp265;
    compiler::TNode<IntPtrT> tmp266;
    compiler::TNode<IntPtrT> tmp267;
    ca_.Bind(&block20, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block19.is_used()) {
    compiler::TNode<NativeContext> tmp268;
    compiler::TNode<JSArgumentsObjectWithLength> tmp269;
    compiler::TNode<Smi> tmp270;
    compiler::TNode<Smi> tmp271;
    compiler::TNode<FixedArray> tmp272;
    compiler::TNode<Smi> tmp273;
    compiler::TNode<Smi> tmp274;
    compiler::TNode<Smi> tmp275;
    compiler::TNode<FixedArray> tmp276;
    compiler::TNode<Smi> tmp277;
    compiler::TNode<FixedArray> tmp278;
    compiler::TNode<IntPtrT> tmp279;
    compiler::TNode<IntPtrT> tmp280;
    compiler::TNode<IntPtrT> tmp281;
    compiler::TNode<HeapObject> tmp282;
    compiler::TNode<IntPtrT> tmp283;
    ca_.Bind(&block19, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283);
    ca_.Goto(&block18, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp282, tmp283);
  }

  if (block18.is_used()) {
    compiler::TNode<NativeContext> tmp284;
    compiler::TNode<JSArgumentsObjectWithLength> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<Smi> tmp287;
    compiler::TNode<FixedArray> tmp288;
    compiler::TNode<Smi> tmp289;
    compiler::TNode<Smi> tmp290;
    compiler::TNode<Smi> tmp291;
    compiler::TNode<FixedArray> tmp292;
    compiler::TNode<Smi> tmp293;
    compiler::TNode<FixedArray> tmp294;
    compiler::TNode<IntPtrT> tmp295;
    compiler::TNode<IntPtrT> tmp296;
    compiler::TNode<HeapObject> tmp297;
    compiler::TNode<IntPtrT> tmp298;
    ca_.Bind(&block18, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 52);
    compiler::TNode<Object>tmp299 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp297, tmp298});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 51);
    compiler::TNode<Context> tmp300;
    USE(tmp300);
    tmp300 = UnsafeCast7Context_1368(state_, compiler::TNode<Context>{tmp284}, compiler::TNode<Object>{tmp299});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 54);
    compiler::TNode<Map> tmp301;
    USE(tmp301);
    tmp301 = CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<NativeContext>{tmp284});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 56);
    compiler::TNode<JSArray> tmp302;
    USE(tmp302);
    tmp302 = CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp301}, compiler::TNode<Smi>{tmp287}, compiler::TNode<Smi>{tmp287});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 55);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 58);
    compiler::TNode<Smi> tmp303;
    USE(tmp303);
    tmp303 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 59);
    compiler::TNode<IntPtrT> tmp304 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp304);
    compiler::TNode<FixedArrayBase>tmp305 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp302, tmp304});
    compiler::TNode<FixedArray> tmp306;
    USE(tmp306);
    tmp306 = UnsafeCast10FixedArray_1343(state_, compiler::TNode<Context>{tmp284}, compiler::TNode<Object>{tmp305});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 60);
    compiler::TNode<Smi> tmp307;
    USE(tmp307);
    tmp307 = CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp290}, compiler::TNode<Smi>{tmp291});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 63);
    ca_.Goto(&block27, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp300, tmp301, tmp302, tmp303, tmp306, tmp307, tmp286);
  }

  if (block27.is_used()) {
    compiler::TNode<NativeContext> tmp308;
    compiler::TNode<JSArgumentsObjectWithLength> tmp309;
    compiler::TNode<Smi> tmp310;
    compiler::TNode<Smi> tmp311;
    compiler::TNode<FixedArray> tmp312;
    compiler::TNode<Smi> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<Smi> tmp315;
    compiler::TNode<FixedArray> tmp316;
    compiler::TNode<Smi> tmp317;
    compiler::TNode<Context> tmp318;
    compiler::TNode<Map> tmp319;
    compiler::TNode<JSArray> tmp320;
    compiler::TNode<Smi> tmp321;
    compiler::TNode<FixedArray> tmp322;
    compiler::TNode<Smi> tmp323;
    compiler::TNode<Smi> tmp324;
    ca_.Bind(&block27, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324);
    compiler::TNode<BoolT> tmp325;
    USE(tmp325);
    tmp325 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp324}, compiler::TNode<Smi>{tmp323});
    ca_.Branch(tmp325, &block25, &block26, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324);
  }

  if (block25.is_used()) {
    compiler::TNode<NativeContext> tmp326;
    compiler::TNode<JSArgumentsObjectWithLength> tmp327;
    compiler::TNode<Smi> tmp328;
    compiler::TNode<Smi> tmp329;
    compiler::TNode<FixedArray> tmp330;
    compiler::TNode<Smi> tmp331;
    compiler::TNode<Smi> tmp332;
    compiler::TNode<Smi> tmp333;
    compiler::TNode<FixedArray> tmp334;
    compiler::TNode<Smi> tmp335;
    compiler::TNode<Context> tmp336;
    compiler::TNode<Map> tmp337;
    compiler::TNode<JSArray> tmp338;
    compiler::TNode<Smi> tmp339;
    compiler::TNode<FixedArray> tmp340;
    compiler::TNode<Smi> tmp341;
    compiler::TNode<Smi> tmp342;
    ca_.Bind(&block25, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 65);
    compiler::TNode<IntPtrT> tmp343 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp343);
    compiler::TNode<IntPtrT> tmp344 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp344);
    compiler::TNode<Smi>tmp345 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp330, tmp344});
    compiler::TNode<IntPtrT> tmp346;
    USE(tmp346);
    tmp346 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp345});
    compiler::TNode<Smi> tmp347;
    USE(tmp347);
    tmp347 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, SloppyArgumentsElements::kParameterMapStart);
    compiler::TNode<Smi> tmp348;
    USE(tmp348);
    tmp348 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp342}, compiler::TNode<Smi>{tmp347});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp349;
    USE(tmp349);
    tmp349 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp348});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp350;
    USE(tmp350);
    tmp350 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp349});
    compiler::TNode<UintPtrT> tmp351;
    USE(tmp351);
    tmp351 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp346});
    compiler::TNode<BoolT> tmp352;
    USE(tmp352);
    tmp352 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp350}, compiler::TNode<UintPtrT>{tmp351});
    ca_.Branch(tmp352, &block33, &block34, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp330, tmp343, tmp346, tmp348, tmp348, tmp349, tmp330, tmp343, tmp346, tmp349, tmp349);
  }

  if (block33.is_used()) {
    compiler::TNode<NativeContext> tmp353;
    compiler::TNode<JSArgumentsObjectWithLength> tmp354;
    compiler::TNode<Smi> tmp355;
    compiler::TNode<Smi> tmp356;
    compiler::TNode<FixedArray> tmp357;
    compiler::TNode<Smi> tmp358;
    compiler::TNode<Smi> tmp359;
    compiler::TNode<Smi> tmp360;
    compiler::TNode<FixedArray> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<Context> tmp363;
    compiler::TNode<Map> tmp364;
    compiler::TNode<JSArray> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<FixedArray> tmp367;
    compiler::TNode<Smi> tmp368;
    compiler::TNode<Smi> tmp369;
    compiler::TNode<FixedArray> tmp370;
    compiler::TNode<IntPtrT> tmp371;
    compiler::TNode<IntPtrT> tmp372;
    compiler::TNode<Smi> tmp373;
    compiler::TNode<Smi> tmp374;
    compiler::TNode<IntPtrT> tmp375;
    compiler::TNode<HeapObject> tmp376;
    compiler::TNode<IntPtrT> tmp377;
    compiler::TNode<IntPtrT> tmp378;
    compiler::TNode<IntPtrT> tmp379;
    compiler::TNode<IntPtrT> tmp380;
    ca_.Bind(&block33, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp381;
    USE(tmp381);
    tmp381 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp382;
    USE(tmp382);
    tmp382 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp380}, compiler::TNode<IntPtrT>{tmp381});
    compiler::TNode<IntPtrT> tmp383;
    USE(tmp383);
    tmp383 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp377}, compiler::TNode<IntPtrT>{tmp382});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp384;
    USE(tmp384);
    compiler::TNode<IntPtrT> tmp385;
    USE(tmp385);
    std::tie(tmp384, tmp385) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp376}, compiler::TNode<IntPtrT>{tmp383}).Flatten();
    ca_.Goto(&block32, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp384, tmp385);
  }

  if (block34.is_used()) {
    compiler::TNode<NativeContext> tmp386;
    compiler::TNode<JSArgumentsObjectWithLength> tmp387;
    compiler::TNode<Smi> tmp388;
    compiler::TNode<Smi> tmp389;
    compiler::TNode<FixedArray> tmp390;
    compiler::TNode<Smi> tmp391;
    compiler::TNode<Smi> tmp392;
    compiler::TNode<Smi> tmp393;
    compiler::TNode<FixedArray> tmp394;
    compiler::TNode<Smi> tmp395;
    compiler::TNode<Context> tmp396;
    compiler::TNode<Map> tmp397;
    compiler::TNode<JSArray> tmp398;
    compiler::TNode<Smi> tmp399;
    compiler::TNode<FixedArray> tmp400;
    compiler::TNode<Smi> tmp401;
    compiler::TNode<Smi> tmp402;
    compiler::TNode<FixedArray> tmp403;
    compiler::TNode<IntPtrT> tmp404;
    compiler::TNode<IntPtrT> tmp405;
    compiler::TNode<Smi> tmp406;
    compiler::TNode<Smi> tmp407;
    compiler::TNode<IntPtrT> tmp408;
    compiler::TNode<HeapObject> tmp409;
    compiler::TNode<IntPtrT> tmp410;
    compiler::TNode<IntPtrT> tmp411;
    compiler::TNode<IntPtrT> tmp412;
    compiler::TNode<IntPtrT> tmp413;
    ca_.Bind(&block34, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block31, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408);
  }

  if (block32.is_used()) {
    compiler::TNode<NativeContext> tmp414;
    compiler::TNode<JSArgumentsObjectWithLength> tmp415;
    compiler::TNode<Smi> tmp416;
    compiler::TNode<Smi> tmp417;
    compiler::TNode<FixedArray> tmp418;
    compiler::TNode<Smi> tmp419;
    compiler::TNode<Smi> tmp420;
    compiler::TNode<Smi> tmp421;
    compiler::TNode<FixedArray> tmp422;
    compiler::TNode<Smi> tmp423;
    compiler::TNode<Context> tmp424;
    compiler::TNode<Map> tmp425;
    compiler::TNode<JSArray> tmp426;
    compiler::TNode<Smi> tmp427;
    compiler::TNode<FixedArray> tmp428;
    compiler::TNode<Smi> tmp429;
    compiler::TNode<Smi> tmp430;
    compiler::TNode<FixedArray> tmp431;
    compiler::TNode<IntPtrT> tmp432;
    compiler::TNode<IntPtrT> tmp433;
    compiler::TNode<Smi> tmp434;
    compiler::TNode<Smi> tmp435;
    compiler::TNode<IntPtrT> tmp436;
    compiler::TNode<HeapObject> tmp437;
    compiler::TNode<IntPtrT> tmp438;
    compiler::TNode<IntPtrT> tmp439;
    compiler::TNode<IntPtrT> tmp440;
    compiler::TNode<IntPtrT> tmp441;
    compiler::TNode<HeapObject> tmp442;
    compiler::TNode<IntPtrT> tmp443;
    ca_.Bind(&block32, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block30, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp442, tmp443);
  }

  if (block31.is_used()) {
    compiler::TNode<NativeContext> tmp444;
    compiler::TNode<JSArgumentsObjectWithLength> tmp445;
    compiler::TNode<Smi> tmp446;
    compiler::TNode<Smi> tmp447;
    compiler::TNode<FixedArray> tmp448;
    compiler::TNode<Smi> tmp449;
    compiler::TNode<Smi> tmp450;
    compiler::TNode<Smi> tmp451;
    compiler::TNode<FixedArray> tmp452;
    compiler::TNode<Smi> tmp453;
    compiler::TNode<Context> tmp454;
    compiler::TNode<Map> tmp455;
    compiler::TNode<JSArray> tmp456;
    compiler::TNode<Smi> tmp457;
    compiler::TNode<FixedArray> tmp458;
    compiler::TNode<Smi> tmp459;
    compiler::TNode<Smi> tmp460;
    compiler::TNode<FixedArray> tmp461;
    compiler::TNode<IntPtrT> tmp462;
    compiler::TNode<IntPtrT> tmp463;
    compiler::TNode<Smi> tmp464;
    compiler::TNode<Smi> tmp465;
    compiler::TNode<IntPtrT> tmp466;
    ca_.Bind(&block31, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block30.is_used()) {
    compiler::TNode<NativeContext> tmp467;
    compiler::TNode<JSArgumentsObjectWithLength> tmp468;
    compiler::TNode<Smi> tmp469;
    compiler::TNode<Smi> tmp470;
    compiler::TNode<FixedArray> tmp471;
    compiler::TNode<Smi> tmp472;
    compiler::TNode<Smi> tmp473;
    compiler::TNode<Smi> tmp474;
    compiler::TNode<FixedArray> tmp475;
    compiler::TNode<Smi> tmp476;
    compiler::TNode<Context> tmp477;
    compiler::TNode<Map> tmp478;
    compiler::TNode<JSArray> tmp479;
    compiler::TNode<Smi> tmp480;
    compiler::TNode<FixedArray> tmp481;
    compiler::TNode<Smi> tmp482;
    compiler::TNode<Smi> tmp483;
    compiler::TNode<FixedArray> tmp484;
    compiler::TNode<IntPtrT> tmp485;
    compiler::TNode<IntPtrT> tmp486;
    compiler::TNode<Smi> tmp487;
    compiler::TNode<Smi> tmp488;
    compiler::TNode<IntPtrT> tmp489;
    compiler::TNode<HeapObject> tmp490;
    compiler::TNode<IntPtrT> tmp491;
    ca_.Bind(&block30, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.Goto(&block29, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp490, tmp491);
  }

  if (block29.is_used()) {
    compiler::TNode<NativeContext> tmp492;
    compiler::TNode<JSArgumentsObjectWithLength> tmp493;
    compiler::TNode<Smi> tmp494;
    compiler::TNode<Smi> tmp495;
    compiler::TNode<FixedArray> tmp496;
    compiler::TNode<Smi> tmp497;
    compiler::TNode<Smi> tmp498;
    compiler::TNode<Smi> tmp499;
    compiler::TNode<FixedArray> tmp500;
    compiler::TNode<Smi> tmp501;
    compiler::TNode<Context> tmp502;
    compiler::TNode<Map> tmp503;
    compiler::TNode<JSArray> tmp504;
    compiler::TNode<Smi> tmp505;
    compiler::TNode<FixedArray> tmp506;
    compiler::TNode<Smi> tmp507;
    compiler::TNode<Smi> tmp508;
    compiler::TNode<FixedArray> tmp509;
    compiler::TNode<IntPtrT> tmp510;
    compiler::TNode<IntPtrT> tmp511;
    compiler::TNode<Smi> tmp512;
    compiler::TNode<Smi> tmp513;
    compiler::TNode<HeapObject> tmp514;
    compiler::TNode<IntPtrT> tmp515;
    ca_.Bind(&block29, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 65);
    compiler::TNode<Object>tmp516 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp514, tmp515});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 64);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 67);
    compiler::TNode<Oddball> tmp517;
    USE(tmp517);
    tmp517 = TheHole_62(state_);
    compiler::TNode<BoolT> tmp518;
    USE(tmp518);
    tmp518 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<Object>{tmp516}, compiler::TNode<HeapObject>{tmp517});
    ca_.Branch(tmp518, &block36, &block37, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp516);
  }

  if (block36.is_used()) {
    compiler::TNode<NativeContext> tmp519;
    compiler::TNode<JSArgumentsObjectWithLength> tmp520;
    compiler::TNode<Smi> tmp521;
    compiler::TNode<Smi> tmp522;
    compiler::TNode<FixedArray> tmp523;
    compiler::TNode<Smi> tmp524;
    compiler::TNode<Smi> tmp525;
    compiler::TNode<Smi> tmp526;
    compiler::TNode<FixedArray> tmp527;
    compiler::TNode<Smi> tmp528;
    compiler::TNode<Context> tmp529;
    compiler::TNode<Map> tmp530;
    compiler::TNode<JSArray> tmp531;
    compiler::TNode<Smi> tmp532;
    compiler::TNode<FixedArray> tmp533;
    compiler::TNode<Smi> tmp534;
    compiler::TNode<Smi> tmp535;
    compiler::TNode<Object> tmp536;
    ca_.Bind(&block36, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536);
    compiler::TNode<Smi> tmp537;
    USE(tmp537);
    tmp537 = UnsafeCast5ATSmi_1344(state_, compiler::TNode<Context>{tmp519}, compiler::TNode<Object>{tmp536});
    compiler::TNode<Object> tmp538;
    USE(tmp538);
    tmp538 = CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp529}, compiler::TNode<Smi>{tmp537});
    ca_.Goto(&block39, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp538);
  }

  if (block37.is_used()) {
    compiler::TNode<NativeContext> tmp539;
    compiler::TNode<JSArgumentsObjectWithLength> tmp540;
    compiler::TNode<Smi> tmp541;
    compiler::TNode<Smi> tmp542;
    compiler::TNode<FixedArray> tmp543;
    compiler::TNode<Smi> tmp544;
    compiler::TNode<Smi> tmp545;
    compiler::TNode<Smi> tmp546;
    compiler::TNode<FixedArray> tmp547;
    compiler::TNode<Smi> tmp548;
    compiler::TNode<Context> tmp549;
    compiler::TNode<Map> tmp550;
    compiler::TNode<JSArray> tmp551;
    compiler::TNode<Smi> tmp552;
    compiler::TNode<FixedArray> tmp553;
    compiler::TNode<Smi> tmp554;
    compiler::TNode<Smi> tmp555;
    compiler::TNode<Object> tmp556;
    ca_.Bind(&block37, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 68);
    compiler::TNode<IntPtrT> tmp557 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp557);
    compiler::TNode<IntPtrT> tmp558 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp558);
    compiler::TNode<Smi>tmp559 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp547, tmp558});
    compiler::TNode<IntPtrT> tmp560;
    USE(tmp560);
    tmp560 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp559});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp561;
    USE(tmp561);
    tmp561 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp555});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp562;
    USE(tmp562);
    tmp562 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp561});
    compiler::TNode<UintPtrT> tmp563;
    USE(tmp563);
    tmp563 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp560});
    compiler::TNode<BoolT> tmp564;
    USE(tmp564);
    tmp564 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp562}, compiler::TNode<UintPtrT>{tmp563});
    ca_.Branch(tmp564, &block44, &block45, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp547, tmp557, tmp560, tmp555, tmp555, tmp561, tmp547, tmp557, tmp560, tmp561, tmp561);
  }

  if (block44.is_used()) {
    compiler::TNode<NativeContext> tmp565;
    compiler::TNode<JSArgumentsObjectWithLength> tmp566;
    compiler::TNode<Smi> tmp567;
    compiler::TNode<Smi> tmp568;
    compiler::TNode<FixedArray> tmp569;
    compiler::TNode<Smi> tmp570;
    compiler::TNode<Smi> tmp571;
    compiler::TNode<Smi> tmp572;
    compiler::TNode<FixedArray> tmp573;
    compiler::TNode<Smi> tmp574;
    compiler::TNode<Context> tmp575;
    compiler::TNode<Map> tmp576;
    compiler::TNode<JSArray> tmp577;
    compiler::TNode<Smi> tmp578;
    compiler::TNode<FixedArray> tmp579;
    compiler::TNode<Smi> tmp580;
    compiler::TNode<Smi> tmp581;
    compiler::TNode<Object> tmp582;
    compiler::TNode<FixedArray> tmp583;
    compiler::TNode<IntPtrT> tmp584;
    compiler::TNode<IntPtrT> tmp585;
    compiler::TNode<Smi> tmp586;
    compiler::TNode<Smi> tmp587;
    compiler::TNode<IntPtrT> tmp588;
    compiler::TNode<HeapObject> tmp589;
    compiler::TNode<IntPtrT> tmp590;
    compiler::TNode<IntPtrT> tmp591;
    compiler::TNode<IntPtrT> tmp592;
    compiler::TNode<IntPtrT> tmp593;
    ca_.Bind(&block44, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp594;
    USE(tmp594);
    tmp594 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp595;
    USE(tmp595);
    tmp595 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp593}, compiler::TNode<IntPtrT>{tmp594});
    compiler::TNode<IntPtrT> tmp596;
    USE(tmp596);
    tmp596 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp590}, compiler::TNode<IntPtrT>{tmp595});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp597;
    USE(tmp597);
    compiler::TNode<IntPtrT> tmp598;
    USE(tmp598);
    std::tie(tmp597, tmp598) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp589}, compiler::TNode<IntPtrT>{tmp596}).Flatten();
    ca_.Goto(&block43, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588, tmp589, tmp590, tmp591, tmp592, tmp593, tmp597, tmp598);
  }

  if (block45.is_used()) {
    compiler::TNode<NativeContext> tmp599;
    compiler::TNode<JSArgumentsObjectWithLength> tmp600;
    compiler::TNode<Smi> tmp601;
    compiler::TNode<Smi> tmp602;
    compiler::TNode<FixedArray> tmp603;
    compiler::TNode<Smi> tmp604;
    compiler::TNode<Smi> tmp605;
    compiler::TNode<Smi> tmp606;
    compiler::TNode<FixedArray> tmp607;
    compiler::TNode<Smi> tmp608;
    compiler::TNode<Context> tmp609;
    compiler::TNode<Map> tmp610;
    compiler::TNode<JSArray> tmp611;
    compiler::TNode<Smi> tmp612;
    compiler::TNode<FixedArray> tmp613;
    compiler::TNode<Smi> tmp614;
    compiler::TNode<Smi> tmp615;
    compiler::TNode<Object> tmp616;
    compiler::TNode<FixedArray> tmp617;
    compiler::TNode<IntPtrT> tmp618;
    compiler::TNode<IntPtrT> tmp619;
    compiler::TNode<Smi> tmp620;
    compiler::TNode<Smi> tmp621;
    compiler::TNode<IntPtrT> tmp622;
    compiler::TNode<HeapObject> tmp623;
    compiler::TNode<IntPtrT> tmp624;
    compiler::TNode<IntPtrT> tmp625;
    compiler::TNode<IntPtrT> tmp626;
    compiler::TNode<IntPtrT> tmp627;
    ca_.Bind(&block45, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block42, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622);
  }

  if (block43.is_used()) {
    compiler::TNode<NativeContext> tmp628;
    compiler::TNode<JSArgumentsObjectWithLength> tmp629;
    compiler::TNode<Smi> tmp630;
    compiler::TNode<Smi> tmp631;
    compiler::TNode<FixedArray> tmp632;
    compiler::TNode<Smi> tmp633;
    compiler::TNode<Smi> tmp634;
    compiler::TNode<Smi> tmp635;
    compiler::TNode<FixedArray> tmp636;
    compiler::TNode<Smi> tmp637;
    compiler::TNode<Context> tmp638;
    compiler::TNode<Map> tmp639;
    compiler::TNode<JSArray> tmp640;
    compiler::TNode<Smi> tmp641;
    compiler::TNode<FixedArray> tmp642;
    compiler::TNode<Smi> tmp643;
    compiler::TNode<Smi> tmp644;
    compiler::TNode<Object> tmp645;
    compiler::TNode<FixedArray> tmp646;
    compiler::TNode<IntPtrT> tmp647;
    compiler::TNode<IntPtrT> tmp648;
    compiler::TNode<Smi> tmp649;
    compiler::TNode<Smi> tmp650;
    compiler::TNode<IntPtrT> tmp651;
    compiler::TNode<HeapObject> tmp652;
    compiler::TNode<IntPtrT> tmp653;
    compiler::TNode<IntPtrT> tmp654;
    compiler::TNode<IntPtrT> tmp655;
    compiler::TNode<IntPtrT> tmp656;
    compiler::TNode<HeapObject> tmp657;
    compiler::TNode<IntPtrT> tmp658;
    ca_.Bind(&block43, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block41, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp657, tmp658);
  }

  if (block42.is_used()) {
    compiler::TNode<NativeContext> tmp659;
    compiler::TNode<JSArgumentsObjectWithLength> tmp660;
    compiler::TNode<Smi> tmp661;
    compiler::TNode<Smi> tmp662;
    compiler::TNode<FixedArray> tmp663;
    compiler::TNode<Smi> tmp664;
    compiler::TNode<Smi> tmp665;
    compiler::TNode<Smi> tmp666;
    compiler::TNode<FixedArray> tmp667;
    compiler::TNode<Smi> tmp668;
    compiler::TNode<Context> tmp669;
    compiler::TNode<Map> tmp670;
    compiler::TNode<JSArray> tmp671;
    compiler::TNode<Smi> tmp672;
    compiler::TNode<FixedArray> tmp673;
    compiler::TNode<Smi> tmp674;
    compiler::TNode<Smi> tmp675;
    compiler::TNode<Object> tmp676;
    compiler::TNode<FixedArray> tmp677;
    compiler::TNode<IntPtrT> tmp678;
    compiler::TNode<IntPtrT> tmp679;
    compiler::TNode<Smi> tmp680;
    compiler::TNode<Smi> tmp681;
    compiler::TNode<IntPtrT> tmp682;
    ca_.Bind(&block42, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block41.is_used()) {
    compiler::TNode<NativeContext> tmp683;
    compiler::TNode<JSArgumentsObjectWithLength> tmp684;
    compiler::TNode<Smi> tmp685;
    compiler::TNode<Smi> tmp686;
    compiler::TNode<FixedArray> tmp687;
    compiler::TNode<Smi> tmp688;
    compiler::TNode<Smi> tmp689;
    compiler::TNode<Smi> tmp690;
    compiler::TNode<FixedArray> tmp691;
    compiler::TNode<Smi> tmp692;
    compiler::TNode<Context> tmp693;
    compiler::TNode<Map> tmp694;
    compiler::TNode<JSArray> tmp695;
    compiler::TNode<Smi> tmp696;
    compiler::TNode<FixedArray> tmp697;
    compiler::TNode<Smi> tmp698;
    compiler::TNode<Smi> tmp699;
    compiler::TNode<Object> tmp700;
    compiler::TNode<FixedArray> tmp701;
    compiler::TNode<IntPtrT> tmp702;
    compiler::TNode<IntPtrT> tmp703;
    compiler::TNode<Smi> tmp704;
    compiler::TNode<Smi> tmp705;
    compiler::TNode<IntPtrT> tmp706;
    compiler::TNode<HeapObject> tmp707;
    compiler::TNode<IntPtrT> tmp708;
    ca_.Bind(&block41, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707, &tmp708);
    ca_.Goto(&block40, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704, tmp705, tmp707, tmp708);
  }

  if (block40.is_used()) {
    compiler::TNode<NativeContext> tmp709;
    compiler::TNode<JSArgumentsObjectWithLength> tmp710;
    compiler::TNode<Smi> tmp711;
    compiler::TNode<Smi> tmp712;
    compiler::TNode<FixedArray> tmp713;
    compiler::TNode<Smi> tmp714;
    compiler::TNode<Smi> tmp715;
    compiler::TNode<Smi> tmp716;
    compiler::TNode<FixedArray> tmp717;
    compiler::TNode<Smi> tmp718;
    compiler::TNode<Context> tmp719;
    compiler::TNode<Map> tmp720;
    compiler::TNode<JSArray> tmp721;
    compiler::TNode<Smi> tmp722;
    compiler::TNode<FixedArray> tmp723;
    compiler::TNode<Smi> tmp724;
    compiler::TNode<Smi> tmp725;
    compiler::TNode<Object> tmp726;
    compiler::TNode<FixedArray> tmp727;
    compiler::TNode<IntPtrT> tmp728;
    compiler::TNode<IntPtrT> tmp729;
    compiler::TNode<Smi> tmp730;
    compiler::TNode<Smi> tmp731;
    compiler::TNode<HeapObject> tmp732;
    compiler::TNode<IntPtrT> tmp733;
    ca_.Bind(&block40, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 68);
    compiler::TNode<Object>tmp734 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp732, tmp733});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 67);
    ca_.Goto(&block38, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723, tmp724, tmp725, tmp726, tmp734);
  }

  if (block39.is_used()) {
    compiler::TNode<NativeContext> tmp735;
    compiler::TNode<JSArgumentsObjectWithLength> tmp736;
    compiler::TNode<Smi> tmp737;
    compiler::TNode<Smi> tmp738;
    compiler::TNode<FixedArray> tmp739;
    compiler::TNode<Smi> tmp740;
    compiler::TNode<Smi> tmp741;
    compiler::TNode<Smi> tmp742;
    compiler::TNode<FixedArray> tmp743;
    compiler::TNode<Smi> tmp744;
    compiler::TNode<Context> tmp745;
    compiler::TNode<Map> tmp746;
    compiler::TNode<JSArray> tmp747;
    compiler::TNode<Smi> tmp748;
    compiler::TNode<FixedArray> tmp749;
    compiler::TNode<Smi> tmp750;
    compiler::TNode<Smi> tmp751;
    compiler::TNode<Object> tmp752;
    compiler::TNode<Object> tmp753;
    ca_.Bind(&block39, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753);
    ca_.Goto(&block38, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753);
  }

  if (block38.is_used()) {
    compiler::TNode<NativeContext> tmp754;
    compiler::TNode<JSArgumentsObjectWithLength> tmp755;
    compiler::TNode<Smi> tmp756;
    compiler::TNode<Smi> tmp757;
    compiler::TNode<FixedArray> tmp758;
    compiler::TNode<Smi> tmp759;
    compiler::TNode<Smi> tmp760;
    compiler::TNode<Smi> tmp761;
    compiler::TNode<FixedArray> tmp762;
    compiler::TNode<Smi> tmp763;
    compiler::TNode<Context> tmp764;
    compiler::TNode<Map> tmp765;
    compiler::TNode<JSArray> tmp766;
    compiler::TNode<Smi> tmp767;
    compiler::TNode<FixedArray> tmp768;
    compiler::TNode<Smi> tmp769;
    compiler::TNode<Smi> tmp770;
    compiler::TNode<Object> tmp771;
    compiler::TNode<Object> tmp772;
    ca_.Bind(&block38, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 66);
    compiler::TNode<Object> tmp773;
    USE(tmp773);
    tmp773 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1346(state_, compiler::TNode<Context>{tmp754}, compiler::TNode<Object>{tmp772});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 74);
    compiler::TNode<Smi> tmp774;
    USE(tmp774);
    tmp774 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp775;
    USE(tmp775);
    tmp775 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp767}, compiler::TNode<Smi>{tmp774});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 73);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp768}, compiler::TNode<Smi>{tmp767}, compiler::TNode<Object>{tmp773}, UNSAFE_SKIP_WRITE_BARRIER);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 63);
    ca_.Goto(&block28, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp775, tmp768, tmp769, tmp770);
  }

  if (block28.is_used()) {
    compiler::TNode<NativeContext> tmp776;
    compiler::TNode<JSArgumentsObjectWithLength> tmp777;
    compiler::TNode<Smi> tmp778;
    compiler::TNode<Smi> tmp779;
    compiler::TNode<FixedArray> tmp780;
    compiler::TNode<Smi> tmp781;
    compiler::TNode<Smi> tmp782;
    compiler::TNode<Smi> tmp783;
    compiler::TNode<FixedArray> tmp784;
    compiler::TNode<Smi> tmp785;
    compiler::TNode<Context> tmp786;
    compiler::TNode<Map> tmp787;
    compiler::TNode<JSArray> tmp788;
    compiler::TNode<Smi> tmp789;
    compiler::TNode<FixedArray> tmp790;
    compiler::TNode<Smi> tmp791;
    compiler::TNode<Smi> tmp792;
    ca_.Bind(&block28, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792);
    compiler::TNode<Smi> tmp793;
    USE(tmp793);
    tmp793 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp794;
    USE(tmp794);
    tmp794 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp792}, compiler::TNode<Smi>{tmp793});
    ca_.Goto(&block27, tmp776, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp794);
  }

  if (block26.is_used()) {
    compiler::TNode<NativeContext> tmp795;
    compiler::TNode<JSArgumentsObjectWithLength> tmp796;
    compiler::TNode<Smi> tmp797;
    compiler::TNode<Smi> tmp798;
    compiler::TNode<FixedArray> tmp799;
    compiler::TNode<Smi> tmp800;
    compiler::TNode<Smi> tmp801;
    compiler::TNode<Smi> tmp802;
    compiler::TNode<FixedArray> tmp803;
    compiler::TNode<Smi> tmp804;
    compiler::TNode<Context> tmp805;
    compiler::TNode<Map> tmp806;
    compiler::TNode<JSArray> tmp807;
    compiler::TNode<Smi> tmp808;
    compiler::TNode<FixedArray> tmp809;
    compiler::TNode<Smi> tmp810;
    compiler::TNode<Smi> tmp811;
    ca_.Bind(&block26, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 79);
    compiler::TNode<Smi> tmp812;
    USE(tmp812);
    tmp812 = CodeStubAssembler(state_).SmiMax(compiler::TNode<Smi>{tmp801}, compiler::TNode<Smi>{tmp797});
    compiler::TNode<Smi> tmp813;
    USE(tmp813);
    tmp813 = CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp812}, compiler::TNode<Smi>{tmp802});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 80);
    compiler::TNode<Smi> tmp814;
    USE(tmp814);
    tmp814 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp802}, compiler::TNode<Smi>{tmp813});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 82);
    compiler::TNode<IntPtrT> tmp815;
    USE(tmp815);
    tmp815 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp808});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 83);
    compiler::TNode<IntPtrT> tmp816;
    USE(tmp816);
    tmp816 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp813});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 84);
    compiler::TNode<IntPtrT> tmp817;
    USE(tmp817);
    tmp817 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp814});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 81);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp809}, compiler::TNode<IntPtrT>{tmp815}, compiler::TNode<FixedArrayBase>{tmp803}, compiler::TNode<IntPtrT>{tmp816}, compiler::TNode<IntPtrT>{tmp817});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 85);
    ca_.Goto(&block2, tmp795, tmp796, tmp797, tmp798, tmp807);
  }

  if (block2.is_used()) {
    compiler::TNode<NativeContext> tmp818;
    compiler::TNode<JSArgumentsObjectWithLength> tmp819;
    compiler::TNode<Smi> tmp820;
    compiler::TNode<Smi> tmp821;
    compiler::TNode<JSArray> tmp822;
    ca_.Bind(&block2, &tmp818, &tmp819, &tmp820, &tmp821, &tmp822);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 29);
    ca_.Goto(&block47, tmp818, tmp819, tmp820, tmp821, tmp822);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<NativeContext> tmp823;
    compiler::TNode<JSArgumentsObjectWithLength> tmp824;
    compiler::TNode<Smi> tmp825;
    compiler::TNode<Smi> tmp826;
    compiler::TNode<JSArray> tmp827;
    ca_.Bind(&block47, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827);
  return compiler::TNode<JSArray>{tmp827};
}

compiler::TNode<JSArray> HandleFastSlice_40(compiler::CodeAssemblerState* state_, compiler::TNode<NativeContext> p_context, compiler::TNode<Object> p_o, compiler::TNode<Number> p_startNumber, compiler::TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, Object, JSArgumentsObjectWithLength> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, BoolT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, BoolT, BoolT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map, NativeContext, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Map> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, Smi, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NativeContext, Object, Number, Number, JSArray> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_startNumber, p_countNumber);

  if (block0.is_used()) {
    compiler::TNode<NativeContext> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 92);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<NativeContext> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<NativeContext> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 93);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp13}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<NativeContext> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Number> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<NativeContext> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 96);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 97);
    compiler::TNode<JSArray> tmp30;
    USE(tmp30);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp30 = Cast20ATFastJSArrayForCopy_1369(state_, compiler::TNode<Context>{tmp23}, compiler::TNode<Object>{tmp24}, &label0);
    ca_.Goto(&block9, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24, tmp30);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29, tmp24, tmp24);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<NativeContext> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    ca_.Bind(&block10, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<NativeContext> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSArray> tmp47;
    ca_.Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 104);
    compiler::TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp44});
    compiler::TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp47});
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp48}, compiler::TNode<Smi>{tmp49});
    ca_.Branch(tmp50, &block11, &block12, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp47);
  }

  if (block11.is_used()) {
    compiler::TNode<NativeContext> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<Number> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSArray> tmp58;
    ca_.Bind(&block11, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    compiler::TNode<NativeContext> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSArray> tmp66;
    ca_.Bind(&block12, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 105);
    compiler::TNode<JSArray> tmp67;
    tmp67 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp59, tmp66, tmp63, tmp64));
    USE(tmp67);
    ca_.Goto(&block2, tmp59, tmp60, tmp61, tmp62, tmp67);
  }

  if (block8.is_used()) {
    compiler::TNode<NativeContext> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Object> tmp74;
    ca_.Bind(&block8, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    compiler::TNode<JSArgumentsObjectWithLength> tmp75;
    USE(tmp75);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp75 = Cast27JSArgumentsObjectWithLength_1370(state_, compiler::TNode<Context>{tmp68}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp74)}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74), tmp75);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, ca_.UncheckedCast<Object>(tmp74));
    }
  }

  if (block16.is_used()) {
    compiler::TNode<NativeContext> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block15.is_used()) {
    compiler::TNode<NativeContext> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Number> tmp86;
    compiler::TNode<Number> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<JSArgumentsObjectWithLength> tmp92;
    ca_.Bind(&block15, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 108);
    compiler::TNode<IntPtrT> tmp93 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp93);
    compiler::TNode<Map>tmp94 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp92, tmp93});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 109);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = CodeStubAssembler(state_).IsFastAliasedArgumentsMap(compiler::TNode<Context>{tmp84}, compiler::TNode<Map>{tmp94});
    ca_.Branch(tmp95, &block17, &block18, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp92, tmp94);
  }

  if (block17.is_used()) {
    compiler::TNode<NativeContext> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSArgumentsObjectWithLength> tmp103;
    compiler::TNode<Map> tmp104;
    ca_.Bind(&block17, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 110);
    compiler::TNode<JSArray> tmp105;
    USE(tmp105);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp105 = HandleFastAliasedSloppyArgumentsSlice_39(state_, compiler::TNode<NativeContext>{tmp96}, compiler::TNode<JSArgumentsObjectWithLength>{tmp103}, compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101}, &label0);
    ca_.Goto(&block20, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp96, tmp103, tmp100, tmp101, tmp105);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp96, tmp103, tmp100, tmp101);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<NativeContext> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Number> tmp108;
    compiler::TNode<Number> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<Smi> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<JSArgumentsObjectWithLength> tmp113;
    compiler::TNode<Map> tmp114;
    compiler::TNode<NativeContext> tmp115;
    compiler::TNode<JSArgumentsObjectWithLength> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<Smi> tmp118;
    ca_.Bind(&block21, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.Goto(&block1);
  }

  if (block20.is_used()) {
    compiler::TNode<NativeContext> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Number> tmp121;
    compiler::TNode<Number> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<JSArgumentsObjectWithLength> tmp126;
    compiler::TNode<Map> tmp127;
    compiler::TNode<NativeContext> tmp128;
    compiler::TNode<JSArgumentsObjectWithLength> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<JSArray> tmp132;
    ca_.Bind(&block20, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.Goto(&block2, tmp119, tmp120, tmp121, tmp122, tmp132);
  }

  if (block18.is_used()) {
    compiler::TNode<NativeContext> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Number> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<JSArgumentsObjectWithLength> tmp140;
    compiler::TNode<Map> tmp141;
    ca_.Bind(&block18, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 112);
    compiler::TNode<BoolT> tmp142;
    USE(tmp142);
    tmp142 = CodeStubAssembler(state_).IsStrictArgumentsMap(compiler::TNode<Context>{tmp133}, compiler::TNode<Map>{tmp141});
    ca_.Branch(tmp142, &block24, &block25, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
  }

  if (block24.is_used()) {
    compiler::TNode<NativeContext> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Number> tmp145;
    compiler::TNode<Number> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Object> tmp149;
    compiler::TNode<JSArgumentsObjectWithLength> tmp150;
    compiler::TNode<Map> tmp151;
    compiler::TNode<BoolT> tmp152;
    ca_.Bind(&block24, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    compiler::TNode<BoolT> tmp153;
    USE(tmp153);
    tmp153 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, true);
    ca_.Goto(&block26, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153);
  }

  if (block25.is_used()) {
    compiler::TNode<NativeContext> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Number> tmp156;
    compiler::TNode<Number> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<JSArgumentsObjectWithLength> tmp161;
    compiler::TNode<Map> tmp162;
    compiler::TNode<BoolT> tmp163;
    ca_.Bind(&block25, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    compiler::TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).IsSloppyArgumentsMap(compiler::TNode<Context>{tmp154}, compiler::TNode<Map>{tmp162});
    ca_.Goto(&block26, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164);
  }

  if (block26.is_used()) {
    compiler::TNode<NativeContext> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Number> tmp167;
    compiler::TNode<Number> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<JSArgumentsObjectWithLength> tmp172;
    compiler::TNode<Map> tmp173;
    compiler::TNode<BoolT> tmp174;
    compiler::TNode<BoolT> tmp175;
    ca_.Bind(&block26, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.Branch(tmp175, &block22, &block23, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block22.is_used()) {
    compiler::TNode<NativeContext> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Number> tmp178;
    compiler::TNode<Number> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<JSArgumentsObjectWithLength> tmp183;
    compiler::TNode<Map> tmp184;
    ca_.Bind(&block22, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 113);
    compiler::TNode<JSArray> tmp185;
    USE(tmp185);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp185 = HandleSimpleArgumentsSlice_38(state_, compiler::TNode<NativeContext>{tmp176}, compiler::TNode<JSArgumentsObjectWithLength>{tmp183}, compiler::TNode<Smi>{tmp180}, compiler::TNode<Smi>{tmp181}, &label0);
    ca_.Goto(&block27, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp176, tmp183, tmp180, tmp181, tmp185);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block28, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp176, tmp183, tmp180, tmp181);
    }
  }

  if (block28.is_used()) {
    compiler::TNode<NativeContext> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Number> tmp188;
    compiler::TNode<Number> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<JSArgumentsObjectWithLength> tmp193;
    compiler::TNode<Map> tmp194;
    compiler::TNode<NativeContext> tmp195;
    compiler::TNode<JSArgumentsObjectWithLength> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<Smi> tmp198;
    ca_.Bind(&block28, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.Goto(&block1);
  }

  if (block27.is_used()) {
    compiler::TNode<NativeContext> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Number> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<JSArgumentsObjectWithLength> tmp206;
    compiler::TNode<Map> tmp207;
    compiler::TNode<NativeContext> tmp208;
    compiler::TNode<JSArgumentsObjectWithLength> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<JSArray> tmp212;
    ca_.Bind(&block27, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block2, tmp199, tmp200, tmp201, tmp202, tmp212);
  }

  if (block23.is_used()) {
    compiler::TNode<NativeContext> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<Smi> tmp218;
    compiler::TNode<Object> tmp219;
    compiler::TNode<JSArgumentsObjectWithLength> tmp220;
    compiler::TNode<Map> tmp221;
    ca_.Bind(&block23, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 109);
    ca_.Goto(&block19, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221);
  }

  if (block19.is_used()) {
    compiler::TNode<NativeContext> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Number> tmp224;
    compiler::TNode<Number> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<JSArgumentsObjectWithLength> tmp229;
    compiler::TNode<Map> tmp230;
    ca_.Bind(&block19, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    ca_.Goto(&block13, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228);
  }

  if (block14.is_used()) {
    compiler::TNode<NativeContext> tmp231;
    compiler::TNode<Object> tmp232;
    compiler::TNode<Number> tmp233;
    compiler::TNode<Number> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Object> tmp237;
    ca_.Bind(&block14, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 117);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    ca_.Goto(&block13, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237);
  }

  if (block13.is_used()) {
    compiler::TNode<NativeContext> tmp238;
    compiler::TNode<Object> tmp239;
    compiler::TNode<Number> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<Object> tmp244;
    ca_.Bind(&block13, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 97);
    ca_.Goto(&block7, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244);
  }

  if (block7.is_used()) {
    compiler::TNode<NativeContext> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<Number> tmp247;
    compiler::TNode<Number> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<Smi> tmp250;
    compiler::TNode<Object> tmp251;
    ca_.Bind(&block7, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 96);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 120);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<NativeContext> tmp252;
    compiler::TNode<Object> tmp253;
    compiler::TNode<Number> tmp254;
    compiler::TNode<Number> tmp255;
    compiler::TNode<JSArray> tmp256;
    ca_.Bind(&block2, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 88);
    ca_.Goto(&block29, tmp252, tmp253, tmp254, tmp255, tmp256);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<NativeContext> tmp257;
    compiler::TNode<Object> tmp258;
    compiler::TNode<Number> tmp259;
    compiler::TNode<Number> tmp260;
    compiler::TNode<JSArray> tmp261;
    ca_.Bind(&block29, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
  return compiler::TNode<JSArray>{tmp261};
}

TF_BUILTIN(ArrayPrototypeSlice, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, NativeContext, JSReceiver, Number, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, NativeContext, JSReceiver, Number, Number, JSArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 128);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 129);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 130);
    compiler::TNode<JSArray> tmp12;
    USE(tmp12);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp12 = Cast20ATFastJSArrayForCopy_1369(state_, compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp11}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp11, tmp11, tmp12);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp11, tmp11);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSArray> tmp27;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 131);
    compiler::TNode<JSArray> tmp28;
    tmp28 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCloneFastJSArray, tmp23, tmp27));
    USE(tmp28);
    arguments.PopAndReturn(tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 133);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 130);
    ca_.Goto(&block3, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block3, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 129);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 128);
    ca_.Goto(&block2, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    ca_.Bind(&block2, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 139);
    compiler::TNode<JSReceiver> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 142);
    compiler::TNode<Number> tmp47;
    USE(tmp47);
    tmp47 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp46});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 145);
    compiler::TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp41}, compiler::TNode<RawPtrT>{tmp42}, compiler::TNode<IntPtrT>{tmp43}}, compiler::TNode<IntPtrT>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 146);
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp44}, compiler::TNode<Object>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 150);
    compiler::TNode<Number> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp50}, compiler::TNode<Number>{tmp51});
    ca_.Branch(tmp52, &block7, &block8, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<Context> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Number> tmp61;
    ca_.Bind(&block7, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Number> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp59}, compiler::TNode<Number>{tmp61});
    compiler::TNode<Number> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Number> tmp64;
    USE(tmp64);
    tmp64 = Max_81(state_, compiler::TNode<Number>{tmp62}, compiler::TNode<Number>{tmp63});
    ca_.Goto(&block10, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp64);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Number> tmp73;
    ca_.Bind(&block8, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 151);
    compiler::TNode<Number> tmp74;
    USE(tmp74);
    tmp74 = Min_80(state_, compiler::TNode<Number>{tmp73}, compiler::TNode<Number>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 150);
    ca_.Goto(&block9, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<RawPtrT> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<JSReceiver> tmp80;
    compiler::TNode<Number> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Number> tmp83;
    compiler::TNode<Number> tmp84;
    ca_.Bind(&block10, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block9, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<Number> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Number> tmp94;
    ca_.Bind(&block9, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 155);
    compiler::TNode<IntPtrT> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp85}, compiler::TNode<RawPtrT>{tmp86}, compiler::TNode<IntPtrT>{tmp87}}, compiler::TNode<IntPtrT>{tmp95});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 157);
    compiler::TNode<Oddball> tmp97;
    USE(tmp97);
    tmp97 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp98;
    USE(tmp98);
    tmp98 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp96}, compiler::TNode<HeapObject>{tmp97});
    ca_.Branch(tmp98, &block11, &block12, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp96);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<RawPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Number> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Number> tmp107;
    compiler::TNode<Number> tmp108;
    compiler::TNode<Object> tmp109;
    ca_.Bind(&block11, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block14, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp105);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp110;
    compiler::TNode<RawPtrT> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<Context> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<JSReceiver> tmp115;
    compiler::TNode<Number> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Number> tmp118;
    compiler::TNode<Number> tmp119;
    compiler::TNode<Object> tmp120;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    compiler::TNode<Number> tmp121;
    USE(tmp121);
    tmp121 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp113}, compiler::TNode<Object>{tmp120});
    ca_.Goto(&block13, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp122;
    compiler::TNode<RawPtrT> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<Context> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<Number> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<Number> tmp130;
    compiler::TNode<Number> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Number> tmp133;
    ca_.Bind(&block14, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.Goto(&block13, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp134;
    compiler::TNode<RawPtrT> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<Context> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Number> tmp142;
    compiler::TNode<Number> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Number> tmp145;
    ca_.Bind(&block13, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 156);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 162);
    compiler::TNode<Number> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp145}, compiler::TNode<Number>{tmp146});
    ca_.Branch(tmp147, &block15, &block16, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145);
  }

  if (block15.is_used()) {
    compiler::TNode<RawPtrT> tmp148;
    compiler::TNode<RawPtrT> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<Context> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Number> tmp156;
    compiler::TNode<Number> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<Number> tmp159;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    compiler::TNode<Number> tmp160;
    USE(tmp160);
    tmp160 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp154}, compiler::TNode<Number>{tmp159});
    compiler::TNode<Number> tmp161;
    USE(tmp161);
    tmp161 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Number> tmp162;
    USE(tmp162);
    tmp162 = Max_81(state_, compiler::TNode<Number>{tmp160}, compiler::TNode<Number>{tmp161});
    ca_.Goto(&block18, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp162);
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp163;
    compiler::TNode<RawPtrT> tmp164;
    compiler::TNode<IntPtrT> tmp165;
    compiler::TNode<Context> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<JSReceiver> tmp168;
    compiler::TNode<Number> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Number> tmp171;
    compiler::TNode<Number> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Number> tmp174;
    ca_.Bind(&block16, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    compiler::TNode<Number> tmp175;
    USE(tmp175);
    tmp175 = Min_80(state_, compiler::TNode<Number>{tmp174}, compiler::TNode<Number>{tmp169});
    ca_.Goto(&block17, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175);
  }

  if (block18.is_used()) {
    compiler::TNode<RawPtrT> tmp176;
    compiler::TNode<RawPtrT> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<Context> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<JSReceiver> tmp181;
    compiler::TNode<Number> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<Number> tmp184;
    compiler::TNode<Number> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Number> tmp188;
    ca_.Bind(&block18, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.Goto(&block17, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188);
  }

  if (block17.is_used()) {
    compiler::TNode<RawPtrT> tmp189;
    compiler::TNode<RawPtrT> tmp190;
    compiler::TNode<IntPtrT> tmp191;
    compiler::TNode<Context> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<JSReceiver> tmp194;
    compiler::TNode<Number> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<Number> tmp197;
    compiler::TNode<Number> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Number> tmp201;
    ca_.Bind(&block17, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 161);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 165);
    compiler::TNode<Number> tmp202;
    USE(tmp202);
    tmp202 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp201}, compiler::TNode<Number>{tmp198});
    compiler::TNode<Number> tmp203;
    USE(tmp203);
    tmp203 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Number> tmp204;
    USE(tmp204);
    tmp204 = Max_81(state_, compiler::TNode<Number>{tmp202}, compiler::TNode<Number>{tmp203});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 175);
    compiler::TNode<NativeContext> tmp205;
    USE(tmp205);
    tmp205 = UnsafeCast15ATNativeContext_1371(state_, compiler::TNode<Context>{tmp192}, compiler::TNode<Object>{tmp192});
    compiler::TNode<JSArray> tmp206;
    USE(tmp206);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp206 = HandleFastSlice_40(state_, compiler::TNode<NativeContext>{tmp205}, compiler::TNode<Object>{tmp194}, compiler::TNode<Number>{tmp198}, compiler::TNode<Number>{tmp204}, &label0);
    ca_.Goto(&block21, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp204, tmp205, tmp194, tmp198, tmp204, tmp206);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp204, tmp205, tmp194, tmp198, tmp204);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<RawPtrT> tmp207;
    compiler::TNode<RawPtrT> tmp208;
    compiler::TNode<IntPtrT> tmp209;
    compiler::TNode<Context> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Number> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Number> tmp218;
    compiler::TNode<Number> tmp219;
    compiler::TNode<Number> tmp220;
    compiler::TNode<NativeContext> tmp221;
    compiler::TNode<JSReceiver> tmp222;
    compiler::TNode<Number> tmp223;
    compiler::TNode<Number> tmp224;
    ca_.Bind(&block22, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224);
    ca_.Goto(&block20, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
  }

  if (block21.is_used()) {
    compiler::TNode<RawPtrT> tmp225;
    compiler::TNode<RawPtrT> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    compiler::TNode<Context> tmp228;
    compiler::TNode<Object> tmp229;
    compiler::TNode<JSReceiver> tmp230;
    compiler::TNode<Number> tmp231;
    compiler::TNode<Object> tmp232;
    compiler::TNode<Number> tmp233;
    compiler::TNode<Number> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<Number> tmp236;
    compiler::TNode<Number> tmp237;
    compiler::TNode<Number> tmp238;
    compiler::TNode<NativeContext> tmp239;
    compiler::TNode<JSReceiver> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<JSArray> tmp243;
    ca_.Bind(&block21, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    arguments.PopAndReturn(tmp243);
  }

  if (block20.is_used()) {
    compiler::TNode<RawPtrT> tmp244;
    compiler::TNode<RawPtrT> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    compiler::TNode<Context> tmp247;
    compiler::TNode<Object> tmp248;
    compiler::TNode<JSReceiver> tmp249;
    compiler::TNode<Number> tmp250;
    compiler::TNode<Object> tmp251;
    compiler::TNode<Number> tmp252;
    compiler::TNode<Number> tmp253;
    compiler::TNode<Object> tmp254;
    compiler::TNode<Number> tmp255;
    compiler::TNode<Number> tmp256;
    compiler::TNode<Number> tmp257;
    ca_.Bind(&block20, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 174);
    ca_.Goto(&block19, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257);
  }

  if (block19.is_used()) {
    compiler::TNode<RawPtrT> tmp258;
    compiler::TNode<RawPtrT> tmp259;
    compiler::TNode<IntPtrT> tmp260;
    compiler::TNode<Context> tmp261;
    compiler::TNode<Object> tmp262;
    compiler::TNode<JSReceiver> tmp263;
    compiler::TNode<Number> tmp264;
    compiler::TNode<Object> tmp265;
    compiler::TNode<Number> tmp266;
    compiler::TNode<Number> tmp267;
    compiler::TNode<Object> tmp268;
    compiler::TNode<Number> tmp269;
    compiler::TNode<Number> tmp270;
    compiler::TNode<Number> tmp271;
    ca_.Bind(&block19, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 181);
    compiler::TNode<JSReceiver> tmp272;
    USE(tmp272);
    tmp272 = CodeStubAssembler(state_).ArraySpeciesCreate(compiler::TNode<Context>{tmp261}, compiler::TNode<Object>{tmp263}, compiler::TNode<Number>{tmp271});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 184);
    compiler::TNode<Number> tmp273;
    USE(tmp273);
    tmp273 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 187);
    ca_.Goto(&block25, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273);
  }

  if (block25.is_used()) {
    compiler::TNode<RawPtrT> tmp274;
    compiler::TNode<RawPtrT> tmp275;
    compiler::TNode<IntPtrT> tmp276;
    compiler::TNode<Context> tmp277;
    compiler::TNode<Object> tmp278;
    compiler::TNode<JSReceiver> tmp279;
    compiler::TNode<Number> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<Number> tmp282;
    compiler::TNode<Number> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<Number> tmp285;
    compiler::TNode<Number> tmp286;
    compiler::TNode<Number> tmp287;
    compiler::TNode<JSReceiver> tmp288;
    compiler::TNode<Number> tmp289;
    ca_.Bind(&block25, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289);
    compiler::TNode<BoolT> tmp290;
    USE(tmp290);
    tmp290 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp283}, compiler::TNode<Number>{tmp286});
    ca_.Branch(tmp290, &block23, &block24, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289);
  }

  if (block23.is_used()) {
    compiler::TNode<RawPtrT> tmp291;
    compiler::TNode<RawPtrT> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    compiler::TNode<Context> tmp294;
    compiler::TNode<Object> tmp295;
    compiler::TNode<JSReceiver> tmp296;
    compiler::TNode<Number> tmp297;
    compiler::TNode<Object> tmp298;
    compiler::TNode<Number> tmp299;
    compiler::TNode<Number> tmp300;
    compiler::TNode<Object> tmp301;
    compiler::TNode<Number> tmp302;
    compiler::TNode<Number> tmp303;
    compiler::TNode<Number> tmp304;
    compiler::TNode<JSReceiver> tmp305;
    compiler::TNode<Number> tmp306;
    ca_.Bind(&block23, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 189);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 192);
    compiler::TNode<Oddball> tmp307;
    tmp307 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp294, tmp296, tmp300));
    USE(tmp307);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 195);
    compiler::TNode<Oddball> tmp308;
    USE(tmp308);
    tmp308 = True_65(state_);
    compiler::TNode<BoolT> tmp309;
    USE(tmp309);
    tmp309 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp307}, compiler::TNode<HeapObject>{tmp308});
    ca_.Branch(tmp309, &block26, &block27, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp300, tmp307);
  }

  if (block26.is_used()) {
    compiler::TNode<RawPtrT> tmp310;
    compiler::TNode<RawPtrT> tmp311;
    compiler::TNode<IntPtrT> tmp312;
    compiler::TNode<Context> tmp313;
    compiler::TNode<Object> tmp314;
    compiler::TNode<JSReceiver> tmp315;
    compiler::TNode<Number> tmp316;
    compiler::TNode<Object> tmp317;
    compiler::TNode<Number> tmp318;
    compiler::TNode<Number> tmp319;
    compiler::TNode<Object> tmp320;
    compiler::TNode<Number> tmp321;
    compiler::TNode<Number> tmp322;
    compiler::TNode<Number> tmp323;
    compiler::TNode<JSReceiver> tmp324;
    compiler::TNode<Number> tmp325;
    compiler::TNode<Number> tmp326;
    compiler::TNode<Oddball> tmp327;
    ca_.Bind(&block26, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 197);
    compiler::TNode<Object> tmp328;
    USE(tmp328);
    tmp328 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp313}, compiler::TNode<Object>{tmp315}, compiler::TNode<Object>{tmp326});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 200);
    compiler::TNode<Object> tmp329;
    tmp329 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp313, tmp324, tmp325, tmp328);
    USE(tmp329);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 195);
    ca_.Goto(&block27, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327);
  }

  if (block27.is_used()) {
    compiler::TNode<RawPtrT> tmp330;
    compiler::TNode<RawPtrT> tmp331;
    compiler::TNode<IntPtrT> tmp332;
    compiler::TNode<Context> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<JSReceiver> tmp335;
    compiler::TNode<Number> tmp336;
    compiler::TNode<Object> tmp337;
    compiler::TNode<Number> tmp338;
    compiler::TNode<Number> tmp339;
    compiler::TNode<Object> tmp340;
    compiler::TNode<Number> tmp341;
    compiler::TNode<Number> tmp342;
    compiler::TNode<Number> tmp343;
    compiler::TNode<JSReceiver> tmp344;
    compiler::TNode<Number> tmp345;
    compiler::TNode<Number> tmp346;
    compiler::TNode<Oddball> tmp347;
    ca_.Bind(&block27, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 204);
    compiler::TNode<Number> tmp348;
    USE(tmp348);
    tmp348 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp349;
    USE(tmp349);
    tmp349 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp339}, compiler::TNode<Number>{tmp348});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 207);
    compiler::TNode<Number> tmp350;
    USE(tmp350);
    tmp350 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp351;
    USE(tmp351);
    tmp351 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp345}, compiler::TNode<Number>{tmp350});
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 187);
    ca_.Goto(&block25, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp349, tmp340, tmp341, tmp342, tmp343, tmp344, tmp351);
  }

  if (block24.is_used()) {
    compiler::TNode<RawPtrT> tmp352;
    compiler::TNode<RawPtrT> tmp353;
    compiler::TNode<IntPtrT> tmp354;
    compiler::TNode<Context> tmp355;
    compiler::TNode<Object> tmp356;
    compiler::TNode<JSReceiver> tmp357;
    compiler::TNode<Number> tmp358;
    compiler::TNode<Object> tmp359;
    compiler::TNode<Number> tmp360;
    compiler::TNode<Number> tmp361;
    compiler::TNode<Object> tmp362;
    compiler::TNode<Number> tmp363;
    compiler::TNode<Number> tmp364;
    compiler::TNode<Number> tmp365;
    compiler::TNode<JSReceiver> tmp366;
    compiler::TNode<Number> tmp367;
    ca_.Bind(&block24, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 211);
    compiler::TNode<String> tmp368;
    USE(tmp368);
    tmp368 = kLengthString_68(state_);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp355, tmp366, tmp368, tmp367);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 214);
    arguments.PopAndReturn(tmp366);
  }
}

compiler::TNode<FixedArray> Cast10FixedArray_1367(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2043);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast10FixedArray_103(state_, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<FixedArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<FixedArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 46);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<FixedArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<FixedArray>{tmp23};
}

compiler::TNode<Context> UnsafeCast7Context_1368(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2807);
    compiler::TNode<Context> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 51);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Context>{tmp8};
}

compiler::TNode<JSArray> Cast20ATFastJSArrayForCopy_1369(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2043);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast20ATFastJSArrayForCopy_137(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 97);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArray>{tmp23};
}

compiler::TNode<JSArgumentsObjectWithLength> Cast27JSArgumentsObjectWithLength_1370(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArgumentsObjectWithLength> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArgumentsObjectWithLength> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2043);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArgumentsObjectWithLength> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast27JSArgumentsObjectWithLength_133(state_, compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArgumentsObjectWithLength> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<JSArgumentsObjectWithLength> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 107);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArgumentsObjectWithLength> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<JSArgumentsObjectWithLength>{tmp23};
}

compiler::TNode<NativeContext> UnsafeCast15ATNativeContext_1371(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, NativeContext> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, NativeContext> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2807);
    compiler::TNode<NativeContext> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<NativeContext> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array-slice.tq", 175);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<NativeContext> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<NativeContext>{tmp8};
}

}  // namespace internal
}  // namespace v8

