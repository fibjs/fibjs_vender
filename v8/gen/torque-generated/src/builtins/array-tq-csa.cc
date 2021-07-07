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

void EnsureWriteableFastElements_50(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, FixedArrayBase, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 22);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp2);
    compiler::TNode<FixedArrayBase>tmp3 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp1, tmp2});
    ca_.SetSourcePosition("../../src/builtins/array.tq", 23);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp4);
    compiler::TNode<Map>tmp5 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp3, tmp4});
    compiler::TNode<Map> tmp6;
    USE(tmp6);
    tmp6 = kCOWMap_210(state_);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<HeapObject>{tmp5}, compiler::TNode<HeapObject>{tmp6});
    ca_.Branch(tmp7, &block2, &block3, tmp0, tmp1, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSArray> tmp9;
    compiler::TNode<FixedArrayBase> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSArray> tmp12;
    compiler::TNode<FixedArrayBase> tmp13;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 29);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp14);
    compiler::TNode<Number>tmp15 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp12, tmp14});
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp15}, &label0);
    ca_.Goto(&block6, tmp11, tmp12, tmp13, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp11, tmp12, tmp13, tmp15);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSArray> tmp18;
    compiler::TNode<FixedArrayBase> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block7, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block5, tmp17, tmp18, tmp19);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSArray> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Smi> tmp25;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp25);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSArray> tmp27;
    compiler::TNode<FixedArrayBase> tmp28;
    ca_.Bind(&block5, &tmp26, &tmp27, &tmp28);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSArray> tmp30;
    compiler::TNode<FixedArrayBase> tmp31;
    compiler::TNode<Smi> tmp32;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 30);
    compiler::TNode<IntPtrT> tmp33 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp33);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 31);
    compiler::TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<FixedArrayBase> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).ExtractFixedArray(compiler::TNode<FixedArrayBase>{tmp31}, compiler::TNode<Smi>{tmp34}, compiler::TNode<Smi>{tmp32}, compiler::TNode<Smi>{tmp32}, CodeStubAssembler::ExtractFixedArrayFlag::kFixedArrays);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 30);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp30, tmp33}, tmp35);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 19);
    ca_.Goto(&block1, tmp29, tmp30);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSArray> tmp37;
    ca_.Bind(&block1, &tmp36, &tmp37);
    ca_.Goto(&block8, tmp36, tmp37);
  }

    compiler::TNode<Context> tmp38;
    compiler::TNode<JSArray> tmp39;
    ca_.Bind(&block8, &tmp38, &tmp39);
}

compiler::TNode<Object> LoadElementOrUndefined_51(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_a, compiler::TNode<Smi> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_a, p_i);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<FixedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 37);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp3);
    compiler::TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp4);
    compiler::TNode<Smi>tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp4});
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp7});
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp6});
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp8}, compiler::TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block6, &block7, tmp0, tmp1, tmp2, tmp1, tmp3, tmp6, tmp2, tmp2, tmp7, tmp1, tmp3, tmp6, tmp7, tmp7);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<FixedArray> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<HeapObject> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp24}, compiler::TNode<IntPtrT>{tmp25});
    compiler::TNode<IntPtrT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp21}, compiler::TNode<IntPtrT>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp28;
    USE(tmp28);
    compiler::TNode<IntPtrT> tmp29;
    USE(tmp29);
    std::tie(tmp28, tmp29) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp20}, compiler::TNode<IntPtrT>{tmp27}).Flatten();
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp28, tmp29);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<FixedArray> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<FixedArray> tmp33;
    compiler::TNode<IntPtrT> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<HeapObject> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    ca_.Bind(&block7, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<FixedArray> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<FixedArray> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<HeapObject> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<HeapObject> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    ca_.Bind(&block5, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp58, tmp59);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<FixedArray> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<FixedArray> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    ca_.Bind(&block4, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<FixedArray> tmp70;
    compiler::TNode<Smi> tmp71;
    compiler::TNode<FixedArray> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<HeapObject> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    ca_.Bind(&block3, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.Goto(&block2, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp78, tmp79);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<FixedArray> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<FixedArray> tmp83;
    compiler::TNode<IntPtrT> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<HeapObject> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    ca_.Bind(&block2, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 37);
    compiler::TNode<Object>tmp90 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp88, tmp89});
    compiler::TNode<Object> tmp91;
    USE(tmp91);
    tmp91 = UnsafeCast100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1374(state_, compiler::TNode<Context>{tmp80}, compiler::TNode<Object>{tmp90});
    ca_.SetSourcePosition("../../src/builtins/array.tq", 38);
    compiler::TNode<Object> tmp92;
    USE(tmp92);
    tmp92 = ReplaceTheHoleWithUndefined_255(state_, compiler::TNode<Object>{tmp91});
    ca_.Goto(&block1, tmp80, tmp81, tmp82, tmp92);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Object> tmp96;
    ca_.Bind(&block1, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 35);
    ca_.Goto(&block9, tmp93, tmp94, tmp95, tmp96);
  }

    compiler::TNode<Context> tmp97;
    compiler::TNode<FixedArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Object> tmp100;
    ca_.Bind(&block9, &tmp97, &tmp98, &tmp99, &tmp100);
  return compiler::TNode<Object>{tmp100};
}

compiler::TNode<Object> LoadElementOrUndefined_52(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, FixedDoubleArray, Smi, Float64T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_i);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 42);
    compiler::TNode<Float64T> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).LoadDoubleWithHoleCheck(compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<Smi>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp0, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp0, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<FixedDoubleArray> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<FixedDoubleArray> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<Float64T> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    compiler::TNode<Oddball> tmp14;
    USE(tmp14);
    tmp14 = Undefined_64(state_);
    ca_.Goto(&block1, tmp12, tmp13, tmp14);
  }

  if (block2.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Float64T> tmp17;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 43);
    compiler::TNode<HeapNumber> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp17});
    ca_.Goto(&block1, tmp15, tmp16, tmp18);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 41);
    ca_.Goto(&block6, tmp19, tmp20, tmp21);
  }

    compiler::TNode<FixedDoubleArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Object> tmp24;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24);
  return compiler::TNode<Object>{tmp24};
}

void StoreArrayHole_53(compiler::CodeAssemblerState* state_, compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_k) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_k);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 47);
    CodeStubAssembler(state_).StoreFixedDoubleArrayHoleSmi(compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array.tq", 46);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    compiler::TNode<FixedDoubleArray> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
}

void StoreArrayHole_54(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_k) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_k);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 51);
    compiler::TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp2);
    compiler::TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp3);
    compiler::TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp3});
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp6});
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp5});
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block6, &block7, tmp0, tmp1, tmp0, tmp2, tmp5, tmp1, tmp1, tmp6, tmp0, tmp2, tmp5, tmp6, tmp6);
  }

  if (block6.is_used()) {
    compiler::TNode<FixedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<FixedArray> tmp12;
    compiler::TNode<IntPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<HeapObject> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<IntPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp22}, compiler::TNode<IntPtrT>{tmp23});
    compiler::TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp19}, compiler::TNode<IntPtrT>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp26;
    USE(tmp26);
    compiler::TNode<IntPtrT> tmp27;
    USE(tmp27);
    std::tie(tmp26, tmp27) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp18}, compiler::TNode<IntPtrT>{tmp25}).Flatten();
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp26, tmp27);
  }

  if (block7.is_used()) {
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<FixedArray> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    compiler::TNode<HeapObject> tmp36;
    compiler::TNode<IntPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35);
  }

  if (block5.is_used()) {
    compiler::TNode<FixedArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<FixedArray> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<HeapObject> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<HeapObject> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp54, tmp55);
  }

  if (block4.is_used()) {
    compiler::TNode<FixedArray> tmp56;
    compiler::TNode<Smi> tmp57;
    compiler::TNode<FixedArray> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<Smi> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<IntPtrT> tmp63;
    ca_.Bind(&block4, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<FixedArray> tmp64;
    compiler::TNode<Smi> tmp65;
    compiler::TNode<FixedArray> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<IntPtrT> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    compiler::TNode<HeapObject> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    ca_.Bind(&block3, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block2, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp72, tmp73);
  }

  if (block2.is_used()) {
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<HeapObject> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    ca_.Bind(&block2, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 51);
    compiler::TNode<Oddball> tmp83;
    USE(tmp83);
    tmp83 = TheHole_62(state_);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp81, tmp82}, tmp83);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 50);
    ca_.Goto(&block1, tmp74, tmp75);
  }

  if (block1.is_used()) {
    compiler::TNode<FixedArray> tmp84;
    compiler::TNode<Smi> tmp85;
    ca_.Bind(&block1, &tmp84, &tmp85);
    ca_.Goto(&block9, tmp84, tmp85);
  }

    compiler::TNode<FixedArray> tmp86;
    compiler::TNode<Smi> tmp87;
    ca_.Bind(&block9, &tmp86, &tmp87);
}

compiler::TNode<Object> UnsafeCast100UT8ATBigInt7ATFalse6ATNull5ATSmi9ATTheHole6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1374(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2807);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/array.tq", 37);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<Object>{tmp8};
}

}  // namespace internal
}  // namespace v8

