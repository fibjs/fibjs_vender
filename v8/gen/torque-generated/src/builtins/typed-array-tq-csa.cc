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

compiler::TNode<JSTypedArray> EnsureAttached_369(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 85);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp1);
    compiler::TNode<JSArrayBuffer>tmp2 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp2});
    ca_.Branch(tmp3, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<JSTypedArray> tmp4;
    ca_.Bind(&block3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<JSTypedArray> tmp5;
    ca_.Bind(&block4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 86);
    compiler::TNode<JSTypedArray> tmp6;
    USE(tmp6);
    tmp6 = (compiler::TNode<JSTypedArray>{tmp5});
    ca_.Goto(&block2, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<JSTypedArray> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 83);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Detached);
  }

    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<JSTypedArray> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return compiler::TNode<JSTypedArray>{tmp10};
}

TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_370(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, JSTypedArray, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, JSTypedArray, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 115);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 117);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 118);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 119);
    compiler::TNode<BuiltinPtr> tmp2;
    USE(tmp2);
    tmp2 = GetLoadFnForElementsKind_371(state_, compiler::TNode<Int32T>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 116);
    ca_.Goto(&block1, tmp0, tmp0, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSTypedArray> tmp3;
    compiler::TNode<JSTypedArray> tmp4;
    compiler::TNode<JSTypedArray> tmp5;
    compiler::TNode<BuiltinPtr> tmp6;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 113);
    ca_.Goto(&block2, tmp3, tmp4, tmp5, tmp6);
  }

    compiler::TNode<JSTypedArray> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<BuiltinPtr> tmp10;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10);
  return TorqueStructAttachedJSTypedArrayWitness{compiler::TNode<JSTypedArray>{tmp8}, compiler::TNode<JSTypedArray>{tmp9}, compiler::TNode<BuiltinPtr>{tmp10}};
}

compiler::TNode<BuiltinPtr> GetLoadFnForElementsKind_371(compiler::CodeAssemblerState* state_, compiler::TNode<Int32T> p_elementsKind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T, BuiltinPtr> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elementsKind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 124);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).IsElementsKindGreaterThan(compiler::TNode<Int32T>{tmp0}, UINT32_ELEMENTS);
    ca_.Branch(tmp1, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 125);
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, INT32_ELEMENTS);
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp2}, compiler::TNode<Int32T>{tmp3});
    ca_.Branch(tmp4, &block5, &block6, tmp2);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block5, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 126);
    ca_.Goto(&block1, tmp5, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt32Elements)));
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block6, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 127);
    compiler::TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, FLOAT32_ELEMENTS);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp6}, compiler::TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block8, &block9, tmp6);
  }

  if (block8.is_used()) {
    compiler::TNode<Int32T> tmp9;
    ca_.Bind(&block8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 128);
    ca_.Goto(&block1, tmp9, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat32Elements)));
  }

  if (block9.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 129);
    compiler::TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, FLOAT64_ELEMENTS);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp10}, compiler::TNode<Int32T>{tmp11});
    ca_.Branch(tmp12, &block11, &block12, tmp10);
  }

  if (block11.is_used()) {
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block11, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 130);
    ca_.Goto(&block1, tmp13, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat64Elements)));
  }

  if (block12.is_used()) {
    compiler::TNode<Int32T> tmp14;
    ca_.Bind(&block12, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 131);
    compiler::TNode<Int32T> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT8_CLAMPED_ELEMENTS);
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp14}, compiler::TNode<Int32T>{tmp15});
    ca_.Branch(tmp16, &block14, &block15, tmp14);
  }

  if (block14.is_used()) {
    compiler::TNode<Int32T> tmp17;
    ca_.Bind(&block14, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 132);
    ca_.Goto(&block1, tmp17, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement22ATUint8ClampedElements)));
  }

  if (block15.is_used()) {
    compiler::TNode<Int32T> tmp18;
    ca_.Bind(&block15, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 133);
    compiler::TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, BIGUINT64_ELEMENTS);
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp18}, compiler::TNode<Int32T>{tmp19});
    ca_.Branch(tmp20, &block17, &block18, tmp18);
  }

  if (block17.is_used()) {
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block17, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 134);
    ca_.Goto(&block1, tmp21, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement19ATBigUint64Elements)));
  }

  if (block18.is_used()) {
    compiler::TNode<Int32T> tmp22;
    ca_.Bind(&block18, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 135);
    compiler::TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, BIGINT64_ELEMENTS);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp22}, compiler::TNode<Int32T>{tmp23});
    ca_.Branch(tmp24, &block20, &block21, tmp22);
  }

  if (block20.is_used()) {
    compiler::TNode<Int32T> tmp25;
    ca_.Bind(&block20, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 136);
    ca_.Goto(&block1, tmp25, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement18ATBigInt64Elements)));
  }

  if (block21.is_used()) {
    compiler::TNode<Int32T> tmp26;
    ca_.Bind(&block21, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 138);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block3, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 141);
    compiler::TNode<Int32T> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT8_ELEMENTS);
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp27}, compiler::TNode<Int32T>{tmp28});
    ca_.Branch(tmp29, &block23, &block24, tmp27);
  }

  if (block23.is_used()) {
    compiler::TNode<Int32T> tmp30;
    ca_.Bind(&block23, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 142);
    ca_.Goto(&block1, tmp30, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATUint8Elements)));
  }

  if (block24.is_used()) {
    compiler::TNode<Int32T> tmp31;
    ca_.Bind(&block24, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 143);
    compiler::TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, INT8_ELEMENTS);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp31}, compiler::TNode<Int32T>{tmp32});
    ca_.Branch(tmp33, &block26, &block27, tmp31);
  }

  if (block26.is_used()) {
    compiler::TNode<Int32T> tmp34;
    ca_.Bind(&block26, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 144);
    ca_.Goto(&block1, tmp34, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement14ATInt8Elements)));
  }

  if (block27.is_used()) {
    compiler::TNode<Int32T> tmp35;
    ca_.Bind(&block27, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 145);
    compiler::TNode<Int32T> tmp36;
    USE(tmp36);
    tmp36 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT16_ELEMENTS);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp35}, compiler::TNode<Int32T>{tmp36});
    ca_.Branch(tmp37, &block29, &block30, tmp35);
  }

  if (block29.is_used()) {
    compiler::TNode<Int32T> tmp38;
    ca_.Bind(&block29, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 146);
    ca_.Goto(&block1, tmp38, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint16Elements)));
  }

  if (block30.is_used()) {
    compiler::TNode<Int32T> tmp39;
    ca_.Bind(&block30, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 147);
    compiler::TNode<Int32T> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, INT16_ELEMENTS);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp39}, compiler::TNode<Int32T>{tmp40});
    ca_.Branch(tmp41, &block32, &block33, tmp39);
  }

  if (block32.is_used()) {
    compiler::TNode<Int32T> tmp42;
    ca_.Bind(&block32, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 148);
    ca_.Goto(&block1, tmp42, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt16Elements)));
  }

  if (block33.is_used()) {
    compiler::TNode<Int32T> tmp43;
    ca_.Bind(&block33, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 149);
    compiler::TNode<Int32T> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT32_ELEMENTS);
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp43}, compiler::TNode<Int32T>{tmp44});
    ca_.Branch(tmp45, &block35, &block36, tmp43);
  }

  if (block35.is_used()) {
    compiler::TNode<Int32T> tmp46;
    ca_.Bind(&block35, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 150);
    ca_.Goto(&block1, tmp46, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint32Elements)));
  }

  if (block36.is_used()) {
    compiler::TNode<Int32T> tmp47;
    ca_.Bind(&block36, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 152);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<BuiltinPtr> tmp49;
    ca_.Bind(&block1, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 123);
    ca_.Goto(&block38, tmp48, tmp49);
  }

    compiler::TNode<Int32T> tmp50;
    compiler::TNode<BuiltinPtr> tmp51;
    ca_.Bind(&block38, &tmp50, &tmp51);
  return compiler::TNode<BuiltinPtr>{tmp51};
}

ElementsKind KindForArrayType15ATUint8Elements_372(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 159);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 158);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT8_ELEMENTS;
}

ElementsKind KindForArrayType14ATInt8Elements_373(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 162);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 161);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT8_ELEMENTS;
}

ElementsKind KindForArrayType16ATUint16Elements_374(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 165);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 164);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT16_ELEMENTS;
}

ElementsKind KindForArrayType15ATInt16Elements_375(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 168);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 167);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT16_ELEMENTS;
}

ElementsKind KindForArrayType16ATUint32Elements_376(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 171);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 170);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT32_ELEMENTS;
}

ElementsKind KindForArrayType15ATInt32Elements_377(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 174);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 173);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT32_ELEMENTS;
}

ElementsKind KindForArrayType17ATFloat32Elements_378(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 177);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 176);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return FLOAT32_ELEMENTS;
}

ElementsKind KindForArrayType17ATFloat64Elements_379(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 180);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 179);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return FLOAT64_ELEMENTS;
}

ElementsKind KindForArrayType22ATUint8ClampedElements_380(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 183);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 182);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT8_CLAMPED_ELEMENTS;
}

ElementsKind KindForArrayType19ATBigUint64Elements_381(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 186);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 185);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return BIGUINT64_ELEMENTS;
}

ElementsKind KindForArrayType18ATBigInt64Elements_382(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 189);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 188);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return BIGINT64_ELEMENTS;
}

compiler::TNode<Number> CallCompare_383(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_comparefn, p_a, p_b);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 211);
    compiler::TNode<Oddball> tmp5;
    USE(tmp5);
    tmp5 = Undefined_64(state_);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp0}, compiler::TNode<JSReceiver>{tmp2}, compiler::TNode<Object>{tmp5}, compiler::TNode<Object>{tmp3}, compiler::TNode<Object>{tmp4});
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 210);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 214);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp8);
    compiler::TNode<JSArrayBuffer>tmp9 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp8});
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSTypedArray> tmp12;
    compiler::TNode<JSReceiver> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp11}, MessageTemplate::kDetachedOperation, "%TypedArray%.prototype.sort");
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Number> tmp22;
    ca_.Bind(&block3, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 219);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = NumberIsNaN_238(state_, compiler::TNode<Number>{tmp22});
    ca_.Branch(tmp23, &block4, &block5, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    compiler::TNode<JSReceiver> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Number> tmp29;
    ca_.Bind(&block4, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    compiler::TNode<Number> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    ca_.Goto(&block1, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSTypedArray> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Number> tmp36;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 222);
    ca_.Goto(&block1, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSTypedArray> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Number> tmp42;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

    compiler::TNode<Context> tmp43;
    compiler::TNode<JSTypedArray> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Number> tmp48;
    ca_.Bind(&block6, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
  return compiler::TNode<Number>{tmp48};
}

void TypedArrayMerge_384(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<FixedArray> p_source, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_middle, compiler::TNode<Smi> p_to, compiler::TNode<FixedArray> p_target) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_comparefn, p_source, p_from, p_middle, p_to, p_target);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<FixedArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<Smi> tmp6;
    compiler::TNode<FixedArray> tmp7;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 231);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 232);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 234);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp4, tmp5, tmp4);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    compiler::TNode<FixedArray> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<FixedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp14});
    ca_.Branch(tmp19, &block2, &block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<JSTypedArray> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<FixedArray> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<FixedArray> tmp27;
    compiler::TNode<Smi> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 235);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp28}, compiler::TNode<Smi>{tmp25});
    ca_.Branch(tmp31, &block8, &block9, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<JSTypedArray> tmp33;
    compiler::TNode<JSReceiver> tmp34;
    compiler::TNode<FixedArray> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<FixedArray> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<BoolT> tmp43;
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp41}, compiler::TNode<Smi>{tmp38});
    ca_.Goto(&block10, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<JSTypedArray> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<FixedArray> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<FixedArray> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<BoolT> tmp56;
    ca_.Bind(&block9, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    compiler::TNode<BoolT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block10, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<JSTypedArray> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<FixedArray> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<BoolT> tmp69;
    compiler::TNode<BoolT> tmp70;
    ca_.Bind(&block10, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.Branch(tmp70, &block6, &block7, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp71;
    compiler::TNode<JSTypedArray> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    compiler::TNode<FixedArray> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<FixedArray> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    ca_.Bind(&block6, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 238);
    compiler::TNode<IntPtrT> tmp82 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp82);
    compiler::TNode<IntPtrT> tmp83 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp83);
    compiler::TNode<Smi>tmp84 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp78, tmp83});
    compiler::TNode<IntPtrT> tmp85;
    USE(tmp85);
    tmp85 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp84});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp86;
    USE(tmp86);
    tmp86 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp81});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp87;
    USE(tmp87);
    tmp87 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp86});
    compiler::TNode<UintPtrT> tmp88;
    USE(tmp88);
    tmp88 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp85});
    compiler::TNode<BoolT> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp87}, compiler::TNode<UintPtrT>{tmp88});
    ca_.Branch(tmp89, &block16, &block17, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp78, tmp82, tmp85, tmp81, tmp81, tmp86, tmp78, tmp82, tmp85, tmp86, tmp86);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<JSTypedArray> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<FixedArray> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Smi> tmp96;
    compiler::TNode<FixedArray> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<FixedArray> tmp101;
    compiler::TNode<IntPtrT> tmp102;
    compiler::TNode<IntPtrT> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<HeapObject> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    compiler::TNode<IntPtrT> tmp111;
    ca_.Bind(&block16, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp112;
    USE(tmp112);
    tmp112 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp113;
    USE(tmp113);
    tmp113 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp111}, compiler::TNode<IntPtrT>{tmp112});
    compiler::TNode<IntPtrT> tmp114;
    USE(tmp114);
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp108}, compiler::TNode<IntPtrT>{tmp113});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp115;
    USE(tmp115);
    compiler::TNode<IntPtrT> tmp116;
    USE(tmp116);
    std::tie(tmp115, tmp116) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp107}, compiler::TNode<IntPtrT>{tmp114}).Flatten();
    ca_.Goto(&block15, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp115, tmp116);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<JSTypedArray> tmp118;
    compiler::TNode<JSReceiver> tmp119;
    compiler::TNode<FixedArray> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<FixedArray> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<FixedArray> tmp128;
    compiler::TNode<IntPtrT> tmp129;
    compiler::TNode<IntPtrT> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<HeapObject> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<IntPtrT> tmp137;
    compiler::TNode<IntPtrT> tmp138;
    ca_.Bind(&block17, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block14, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp139;
    compiler::TNode<JSTypedArray> tmp140;
    compiler::TNode<JSReceiver> tmp141;
    compiler::TNode<FixedArray> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Smi> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<FixedArray> tmp150;
    compiler::TNode<IntPtrT> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<IntPtrT> tmp155;
    compiler::TNode<HeapObject> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<IntPtrT> tmp158;
    compiler::TNode<IntPtrT> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<HeapObject> tmp161;
    compiler::TNode<IntPtrT> tmp162;
    ca_.Bind(&block15, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block13, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp161, tmp162);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp163;
    compiler::TNode<JSTypedArray> tmp164;
    compiler::TNode<JSReceiver> tmp165;
    compiler::TNode<FixedArray> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<FixedArray> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<FixedArray> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<IntPtrT> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<IntPtrT> tmp179;
    ca_.Bind(&block14, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp180;
    compiler::TNode<JSTypedArray> tmp181;
    compiler::TNode<JSReceiver> tmp182;
    compiler::TNode<FixedArray> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<FixedArray> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<FixedArray> tmp191;
    compiler::TNode<IntPtrT> tmp192;
    compiler::TNode<IntPtrT> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<HeapObject> tmp197;
    compiler::TNode<IntPtrT> tmp198;
    ca_.Bind(&block13, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.Goto(&block12, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp197, tmp198);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp199;
    compiler::TNode<JSTypedArray> tmp200;
    compiler::TNode<JSReceiver> tmp201;
    compiler::TNode<FixedArray> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<FixedArray> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<FixedArray> tmp210;
    compiler::TNode<IntPtrT> tmp211;
    compiler::TNode<IntPtrT> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<HeapObject> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    ca_.Bind(&block12, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 238);
    compiler::TNode<IntPtrT> tmp217 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp217);
    compiler::TNode<IntPtrT> tmp218 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp218);
    compiler::TNode<Smi>tmp219 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp202, tmp218});
    compiler::TNode<IntPtrT> tmp220;
    USE(tmp220);
    tmp220 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp219});
    compiler::TNode<Smi> tmp221;
    USE(tmp221);
    tmp221 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp222;
    USE(tmp222);
    tmp222 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp207}, compiler::TNode<Smi>{tmp221});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp223;
    USE(tmp223);
    tmp223 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp207});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp224;
    USE(tmp224);
    tmp224 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp223});
    compiler::TNode<UintPtrT> tmp225;
    USE(tmp225);
    tmp225 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp220});
    compiler::TNode<BoolT> tmp226;
    USE(tmp226);
    tmp226 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp224}, compiler::TNode<UintPtrT>{tmp225});
    ca_.Branch(tmp226, &block23, &block24, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp222, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp202, tmp217, tmp220, tmp207, tmp207, tmp223, tmp202, tmp217, tmp220, tmp223, tmp223);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp227;
    compiler::TNode<JSTypedArray> tmp228;
    compiler::TNode<JSReceiver> tmp229;
    compiler::TNode<FixedArray> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<Smi> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<FixedArray> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<FixedArray> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    compiler::TNode<IntPtrT> tmp240;
    compiler::TNode<Smi> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<HeapObject> tmp243;
    compiler::TNode<IntPtrT> tmp244;
    compiler::TNode<FixedArray> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    compiler::TNode<IntPtrT> tmp247;
    compiler::TNode<Smi> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<IntPtrT> tmp250;
    compiler::TNode<HeapObject> tmp251;
    compiler::TNode<IntPtrT> tmp252;
    compiler::TNode<IntPtrT> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<IntPtrT> tmp255;
    ca_.Bind(&block23, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp256;
    USE(tmp256);
    tmp256 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp257;
    USE(tmp257);
    tmp257 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp255}, compiler::TNode<IntPtrT>{tmp256});
    compiler::TNode<IntPtrT> tmp258;
    USE(tmp258);
    tmp258 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp252}, compiler::TNode<IntPtrT>{tmp257});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp259;
    USE(tmp259);
    compiler::TNode<IntPtrT> tmp260;
    USE(tmp260);
    std::tie(tmp259, tmp260) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp251}, compiler::TNode<IntPtrT>{tmp258}).Flatten();
    ca_.Goto(&block22, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp259, tmp260);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp261;
    compiler::TNode<JSTypedArray> tmp262;
    compiler::TNode<JSReceiver> tmp263;
    compiler::TNode<FixedArray> tmp264;
    compiler::TNode<Smi> tmp265;
    compiler::TNode<Smi> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<FixedArray> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Smi> tmp270;
    compiler::TNode<Smi> tmp271;
    compiler::TNode<FixedArray> tmp272;
    compiler::TNode<IntPtrT> tmp273;
    compiler::TNode<IntPtrT> tmp274;
    compiler::TNode<Smi> tmp275;
    compiler::TNode<Smi> tmp276;
    compiler::TNode<HeapObject> tmp277;
    compiler::TNode<IntPtrT> tmp278;
    compiler::TNode<FixedArray> tmp279;
    compiler::TNode<IntPtrT> tmp280;
    compiler::TNode<IntPtrT> tmp281;
    compiler::TNode<Smi> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<IntPtrT> tmp284;
    compiler::TNode<HeapObject> tmp285;
    compiler::TNode<IntPtrT> tmp286;
    compiler::TNode<IntPtrT> tmp287;
    compiler::TNode<IntPtrT> tmp288;
    compiler::TNode<IntPtrT> tmp289;
    ca_.Bind(&block24, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block21, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp290;
    compiler::TNode<JSTypedArray> tmp291;
    compiler::TNode<JSReceiver> tmp292;
    compiler::TNode<FixedArray> tmp293;
    compiler::TNode<Smi> tmp294;
    compiler::TNode<Smi> tmp295;
    compiler::TNode<Smi> tmp296;
    compiler::TNode<FixedArray> tmp297;
    compiler::TNode<Smi> tmp298;
    compiler::TNode<Smi> tmp299;
    compiler::TNode<Smi> tmp300;
    compiler::TNode<FixedArray> tmp301;
    compiler::TNode<IntPtrT> tmp302;
    compiler::TNode<IntPtrT> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Smi> tmp305;
    compiler::TNode<HeapObject> tmp306;
    compiler::TNode<IntPtrT> tmp307;
    compiler::TNode<FixedArray> tmp308;
    compiler::TNode<IntPtrT> tmp309;
    compiler::TNode<IntPtrT> tmp310;
    compiler::TNode<Smi> tmp311;
    compiler::TNode<Smi> tmp312;
    compiler::TNode<IntPtrT> tmp313;
    compiler::TNode<HeapObject> tmp314;
    compiler::TNode<IntPtrT> tmp315;
    compiler::TNode<IntPtrT> tmp316;
    compiler::TNode<IntPtrT> tmp317;
    compiler::TNode<IntPtrT> tmp318;
    compiler::TNode<HeapObject> tmp319;
    compiler::TNode<IntPtrT> tmp320;
    ca_.Bind(&block22, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block20, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp319, tmp320);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp321;
    compiler::TNode<JSTypedArray> tmp322;
    compiler::TNode<JSReceiver> tmp323;
    compiler::TNode<FixedArray> tmp324;
    compiler::TNode<Smi> tmp325;
    compiler::TNode<Smi> tmp326;
    compiler::TNode<Smi> tmp327;
    compiler::TNode<FixedArray> tmp328;
    compiler::TNode<Smi> tmp329;
    compiler::TNode<Smi> tmp330;
    compiler::TNode<Smi> tmp331;
    compiler::TNode<FixedArray> tmp332;
    compiler::TNode<IntPtrT> tmp333;
    compiler::TNode<IntPtrT> tmp334;
    compiler::TNode<Smi> tmp335;
    compiler::TNode<Smi> tmp336;
    compiler::TNode<HeapObject> tmp337;
    compiler::TNode<IntPtrT> tmp338;
    compiler::TNode<FixedArray> tmp339;
    compiler::TNode<IntPtrT> tmp340;
    compiler::TNode<IntPtrT> tmp341;
    compiler::TNode<Smi> tmp342;
    compiler::TNode<Smi> tmp343;
    compiler::TNode<IntPtrT> tmp344;
    ca_.Bind(&block21, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp345;
    compiler::TNode<JSTypedArray> tmp346;
    compiler::TNode<JSReceiver> tmp347;
    compiler::TNode<FixedArray> tmp348;
    compiler::TNode<Smi> tmp349;
    compiler::TNode<Smi> tmp350;
    compiler::TNode<Smi> tmp351;
    compiler::TNode<FixedArray> tmp352;
    compiler::TNode<Smi> tmp353;
    compiler::TNode<Smi> tmp354;
    compiler::TNode<Smi> tmp355;
    compiler::TNode<FixedArray> tmp356;
    compiler::TNode<IntPtrT> tmp357;
    compiler::TNode<IntPtrT> tmp358;
    compiler::TNode<Smi> tmp359;
    compiler::TNode<Smi> tmp360;
    compiler::TNode<HeapObject> tmp361;
    compiler::TNode<IntPtrT> tmp362;
    compiler::TNode<FixedArray> tmp363;
    compiler::TNode<IntPtrT> tmp364;
    compiler::TNode<IntPtrT> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<Smi> tmp367;
    compiler::TNode<IntPtrT> tmp368;
    compiler::TNode<HeapObject> tmp369;
    compiler::TNode<IntPtrT> tmp370;
    ca_.Bind(&block20, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370);
    ca_.Goto(&block19, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp369, tmp370);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp371;
    compiler::TNode<JSTypedArray> tmp372;
    compiler::TNode<JSReceiver> tmp373;
    compiler::TNode<FixedArray> tmp374;
    compiler::TNode<Smi> tmp375;
    compiler::TNode<Smi> tmp376;
    compiler::TNode<Smi> tmp377;
    compiler::TNode<FixedArray> tmp378;
    compiler::TNode<Smi> tmp379;
    compiler::TNode<Smi> tmp380;
    compiler::TNode<Smi> tmp381;
    compiler::TNode<FixedArray> tmp382;
    compiler::TNode<IntPtrT> tmp383;
    compiler::TNode<IntPtrT> tmp384;
    compiler::TNode<Smi> tmp385;
    compiler::TNode<Smi> tmp386;
    compiler::TNode<HeapObject> tmp387;
    compiler::TNode<IntPtrT> tmp388;
    compiler::TNode<FixedArray> tmp389;
    compiler::TNode<IntPtrT> tmp390;
    compiler::TNode<IntPtrT> tmp391;
    compiler::TNode<Smi> tmp392;
    compiler::TNode<Smi> tmp393;
    compiler::TNode<HeapObject> tmp394;
    compiler::TNode<IntPtrT> tmp395;
    ca_.Bind(&block19, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 238);
    compiler::TNode<Object>tmp396 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp394, tmp395});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp387, tmp388}, tmp396);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 235);
    ca_.Goto(&block11, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp397;
    compiler::TNode<JSTypedArray> tmp398;
    compiler::TNode<JSReceiver> tmp399;
    compiler::TNode<FixedArray> tmp400;
    compiler::TNode<Smi> tmp401;
    compiler::TNode<Smi> tmp402;
    compiler::TNode<Smi> tmp403;
    compiler::TNode<FixedArray> tmp404;
    compiler::TNode<Smi> tmp405;
    compiler::TNode<Smi> tmp406;
    compiler::TNode<Smi> tmp407;
    ca_.Bind(&block7, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 239);
    compiler::TNode<BoolT> tmp408;
    USE(tmp408);
    tmp408 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp405}, compiler::TNode<Smi>{tmp402});
    ca_.Branch(tmp408, &block26, &block27, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp409;
    compiler::TNode<JSTypedArray> tmp410;
    compiler::TNode<JSReceiver> tmp411;
    compiler::TNode<FixedArray> tmp412;
    compiler::TNode<Smi> tmp413;
    compiler::TNode<Smi> tmp414;
    compiler::TNode<Smi> tmp415;
    compiler::TNode<FixedArray> tmp416;
    compiler::TNode<Smi> tmp417;
    compiler::TNode<Smi> tmp418;
    compiler::TNode<Smi> tmp419;
    ca_.Bind(&block26, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 241);
    compiler::TNode<IntPtrT> tmp420 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp420);
    compiler::TNode<IntPtrT> tmp421 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp421);
    compiler::TNode<Smi>tmp422 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp412, tmp421});
    compiler::TNode<IntPtrT> tmp423;
    USE(tmp423);
    tmp423 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp422});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp424;
    USE(tmp424);
    tmp424 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp417});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp425;
    USE(tmp425);
    tmp425 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp424});
    compiler::TNode<UintPtrT> tmp426;
    USE(tmp426);
    tmp426 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp423});
    compiler::TNode<BoolT> tmp427;
    USE(tmp427);
    tmp427 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp425}, compiler::TNode<UintPtrT>{tmp426});
    ca_.Branch(tmp427, &block33, &block34, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp412, tmp420, tmp423, tmp417, tmp417, tmp424, tmp412, tmp420, tmp423, tmp424, tmp424);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp428;
    compiler::TNode<JSTypedArray> tmp429;
    compiler::TNode<JSReceiver> tmp430;
    compiler::TNode<FixedArray> tmp431;
    compiler::TNode<Smi> tmp432;
    compiler::TNode<Smi> tmp433;
    compiler::TNode<Smi> tmp434;
    compiler::TNode<FixedArray> tmp435;
    compiler::TNode<Smi> tmp436;
    compiler::TNode<Smi> tmp437;
    compiler::TNode<Smi> tmp438;
    compiler::TNode<FixedArray> tmp439;
    compiler::TNode<IntPtrT> tmp440;
    compiler::TNode<IntPtrT> tmp441;
    compiler::TNode<Smi> tmp442;
    compiler::TNode<Smi> tmp443;
    compiler::TNode<IntPtrT> tmp444;
    compiler::TNode<HeapObject> tmp445;
    compiler::TNode<IntPtrT> tmp446;
    compiler::TNode<IntPtrT> tmp447;
    compiler::TNode<IntPtrT> tmp448;
    compiler::TNode<IntPtrT> tmp449;
    ca_.Bind(&block33, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp450;
    USE(tmp450);
    tmp450 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp451;
    USE(tmp451);
    tmp451 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp449}, compiler::TNode<IntPtrT>{tmp450});
    compiler::TNode<IntPtrT> tmp452;
    USE(tmp452);
    tmp452 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp446}, compiler::TNode<IntPtrT>{tmp451});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp453;
    USE(tmp453);
    compiler::TNode<IntPtrT> tmp454;
    USE(tmp454);
    std::tie(tmp453, tmp454) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp445}, compiler::TNode<IntPtrT>{tmp452}).Flatten();
    ca_.Goto(&block32, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp453, tmp454);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp455;
    compiler::TNode<JSTypedArray> tmp456;
    compiler::TNode<JSReceiver> tmp457;
    compiler::TNode<FixedArray> tmp458;
    compiler::TNode<Smi> tmp459;
    compiler::TNode<Smi> tmp460;
    compiler::TNode<Smi> tmp461;
    compiler::TNode<FixedArray> tmp462;
    compiler::TNode<Smi> tmp463;
    compiler::TNode<Smi> tmp464;
    compiler::TNode<Smi> tmp465;
    compiler::TNode<FixedArray> tmp466;
    compiler::TNode<IntPtrT> tmp467;
    compiler::TNode<IntPtrT> tmp468;
    compiler::TNode<Smi> tmp469;
    compiler::TNode<Smi> tmp470;
    compiler::TNode<IntPtrT> tmp471;
    compiler::TNode<HeapObject> tmp472;
    compiler::TNode<IntPtrT> tmp473;
    compiler::TNode<IntPtrT> tmp474;
    compiler::TNode<IntPtrT> tmp475;
    compiler::TNode<IntPtrT> tmp476;
    ca_.Bind(&block34, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block31, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp477;
    compiler::TNode<JSTypedArray> tmp478;
    compiler::TNode<JSReceiver> tmp479;
    compiler::TNode<FixedArray> tmp480;
    compiler::TNode<Smi> tmp481;
    compiler::TNode<Smi> tmp482;
    compiler::TNode<Smi> tmp483;
    compiler::TNode<FixedArray> tmp484;
    compiler::TNode<Smi> tmp485;
    compiler::TNode<Smi> tmp486;
    compiler::TNode<Smi> tmp487;
    compiler::TNode<FixedArray> tmp488;
    compiler::TNode<IntPtrT> tmp489;
    compiler::TNode<IntPtrT> tmp490;
    compiler::TNode<Smi> tmp491;
    compiler::TNode<Smi> tmp492;
    compiler::TNode<IntPtrT> tmp493;
    compiler::TNode<HeapObject> tmp494;
    compiler::TNode<IntPtrT> tmp495;
    compiler::TNode<IntPtrT> tmp496;
    compiler::TNode<IntPtrT> tmp497;
    compiler::TNode<IntPtrT> tmp498;
    compiler::TNode<HeapObject> tmp499;
    compiler::TNode<IntPtrT> tmp500;
    ca_.Bind(&block32, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block30, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp499, tmp500);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp501;
    compiler::TNode<JSTypedArray> tmp502;
    compiler::TNode<JSReceiver> tmp503;
    compiler::TNode<FixedArray> tmp504;
    compiler::TNode<Smi> tmp505;
    compiler::TNode<Smi> tmp506;
    compiler::TNode<Smi> tmp507;
    compiler::TNode<FixedArray> tmp508;
    compiler::TNode<Smi> tmp509;
    compiler::TNode<Smi> tmp510;
    compiler::TNode<Smi> tmp511;
    compiler::TNode<FixedArray> tmp512;
    compiler::TNode<IntPtrT> tmp513;
    compiler::TNode<IntPtrT> tmp514;
    compiler::TNode<Smi> tmp515;
    compiler::TNode<Smi> tmp516;
    compiler::TNode<IntPtrT> tmp517;
    ca_.Bind(&block31, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp518;
    compiler::TNode<JSTypedArray> tmp519;
    compiler::TNode<JSReceiver> tmp520;
    compiler::TNode<FixedArray> tmp521;
    compiler::TNode<Smi> tmp522;
    compiler::TNode<Smi> tmp523;
    compiler::TNode<Smi> tmp524;
    compiler::TNode<FixedArray> tmp525;
    compiler::TNode<Smi> tmp526;
    compiler::TNode<Smi> tmp527;
    compiler::TNode<Smi> tmp528;
    compiler::TNode<FixedArray> tmp529;
    compiler::TNode<IntPtrT> tmp530;
    compiler::TNode<IntPtrT> tmp531;
    compiler::TNode<Smi> tmp532;
    compiler::TNode<Smi> tmp533;
    compiler::TNode<IntPtrT> tmp534;
    compiler::TNode<HeapObject> tmp535;
    compiler::TNode<IntPtrT> tmp536;
    ca_.Bind(&block30, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536);
    ca_.Goto(&block29, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp535, tmp536);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp537;
    compiler::TNode<JSTypedArray> tmp538;
    compiler::TNode<JSReceiver> tmp539;
    compiler::TNode<FixedArray> tmp540;
    compiler::TNode<Smi> tmp541;
    compiler::TNode<Smi> tmp542;
    compiler::TNode<Smi> tmp543;
    compiler::TNode<FixedArray> tmp544;
    compiler::TNode<Smi> tmp545;
    compiler::TNode<Smi> tmp546;
    compiler::TNode<Smi> tmp547;
    compiler::TNode<FixedArray> tmp548;
    compiler::TNode<IntPtrT> tmp549;
    compiler::TNode<IntPtrT> tmp550;
    compiler::TNode<Smi> tmp551;
    compiler::TNode<Smi> tmp552;
    compiler::TNode<HeapObject> tmp553;
    compiler::TNode<IntPtrT> tmp554;
    ca_.Bind(&block29, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 241);
    compiler::TNode<Object>tmp555 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp553, tmp554});
    compiler::TNode<Object> tmp556;
    USE(tmp556);
    tmp556 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1346(state_, compiler::TNode<Context>{tmp537}, compiler::TNode<Object>{tmp555});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 242);
    compiler::TNode<IntPtrT> tmp557 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp557);
    compiler::TNode<IntPtrT> tmp558 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp558);
    compiler::TNode<Smi>tmp559 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp540, tmp558});
    compiler::TNode<IntPtrT> tmp560;
    USE(tmp560);
    tmp560 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp559});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp561;
    USE(tmp561);
    tmp561 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp546});
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
    ca_.Branch(tmp564, &block40, &block41, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp556, tmp540, tmp557, tmp560, tmp546, tmp546, tmp561, tmp540, tmp557, tmp560, tmp561, tmp561);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp565;
    compiler::TNode<JSTypedArray> tmp566;
    compiler::TNode<JSReceiver> tmp567;
    compiler::TNode<FixedArray> tmp568;
    compiler::TNode<Smi> tmp569;
    compiler::TNode<Smi> tmp570;
    compiler::TNode<Smi> tmp571;
    compiler::TNode<FixedArray> tmp572;
    compiler::TNode<Smi> tmp573;
    compiler::TNode<Smi> tmp574;
    compiler::TNode<Smi> tmp575;
    compiler::TNode<Object> tmp576;
    compiler::TNode<FixedArray> tmp577;
    compiler::TNode<IntPtrT> tmp578;
    compiler::TNode<IntPtrT> tmp579;
    compiler::TNode<Smi> tmp580;
    compiler::TNode<Smi> tmp581;
    compiler::TNode<IntPtrT> tmp582;
    compiler::TNode<HeapObject> tmp583;
    compiler::TNode<IntPtrT> tmp584;
    compiler::TNode<IntPtrT> tmp585;
    compiler::TNode<IntPtrT> tmp586;
    compiler::TNode<IntPtrT> tmp587;
    ca_.Bind(&block40, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp588;
    USE(tmp588);
    tmp588 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp589;
    USE(tmp589);
    tmp589 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp587}, compiler::TNode<IntPtrT>{tmp588});
    compiler::TNode<IntPtrT> tmp590;
    USE(tmp590);
    tmp590 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp584}, compiler::TNode<IntPtrT>{tmp589});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp591;
    USE(tmp591);
    compiler::TNode<IntPtrT> tmp592;
    USE(tmp592);
    std::tie(tmp591, tmp592) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp583}, compiler::TNode<IntPtrT>{tmp590}).Flatten();
    ca_.Goto(&block39, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp591, tmp592);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp593;
    compiler::TNode<JSTypedArray> tmp594;
    compiler::TNode<JSReceiver> tmp595;
    compiler::TNode<FixedArray> tmp596;
    compiler::TNode<Smi> tmp597;
    compiler::TNode<Smi> tmp598;
    compiler::TNode<Smi> tmp599;
    compiler::TNode<FixedArray> tmp600;
    compiler::TNode<Smi> tmp601;
    compiler::TNode<Smi> tmp602;
    compiler::TNode<Smi> tmp603;
    compiler::TNode<Object> tmp604;
    compiler::TNode<FixedArray> tmp605;
    compiler::TNode<IntPtrT> tmp606;
    compiler::TNode<IntPtrT> tmp607;
    compiler::TNode<Smi> tmp608;
    compiler::TNode<Smi> tmp609;
    compiler::TNode<IntPtrT> tmp610;
    compiler::TNode<HeapObject> tmp611;
    compiler::TNode<IntPtrT> tmp612;
    compiler::TNode<IntPtrT> tmp613;
    compiler::TNode<IntPtrT> tmp614;
    compiler::TNode<IntPtrT> tmp615;
    ca_.Bind(&block41, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block38, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp616;
    compiler::TNode<JSTypedArray> tmp617;
    compiler::TNode<JSReceiver> tmp618;
    compiler::TNode<FixedArray> tmp619;
    compiler::TNode<Smi> tmp620;
    compiler::TNode<Smi> tmp621;
    compiler::TNode<Smi> tmp622;
    compiler::TNode<FixedArray> tmp623;
    compiler::TNode<Smi> tmp624;
    compiler::TNode<Smi> tmp625;
    compiler::TNode<Smi> tmp626;
    compiler::TNode<Object> tmp627;
    compiler::TNode<FixedArray> tmp628;
    compiler::TNode<IntPtrT> tmp629;
    compiler::TNode<IntPtrT> tmp630;
    compiler::TNode<Smi> tmp631;
    compiler::TNode<Smi> tmp632;
    compiler::TNode<IntPtrT> tmp633;
    compiler::TNode<HeapObject> tmp634;
    compiler::TNode<IntPtrT> tmp635;
    compiler::TNode<IntPtrT> tmp636;
    compiler::TNode<IntPtrT> tmp637;
    compiler::TNode<IntPtrT> tmp638;
    compiler::TNode<HeapObject> tmp639;
    compiler::TNode<IntPtrT> tmp640;
    ca_.Bind(&block39, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block37, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp639, tmp640);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp641;
    compiler::TNode<JSTypedArray> tmp642;
    compiler::TNode<JSReceiver> tmp643;
    compiler::TNode<FixedArray> tmp644;
    compiler::TNode<Smi> tmp645;
    compiler::TNode<Smi> tmp646;
    compiler::TNode<Smi> tmp647;
    compiler::TNode<FixedArray> tmp648;
    compiler::TNode<Smi> tmp649;
    compiler::TNode<Smi> tmp650;
    compiler::TNode<Smi> tmp651;
    compiler::TNode<Object> tmp652;
    compiler::TNode<FixedArray> tmp653;
    compiler::TNode<IntPtrT> tmp654;
    compiler::TNode<IntPtrT> tmp655;
    compiler::TNode<Smi> tmp656;
    compiler::TNode<Smi> tmp657;
    compiler::TNode<IntPtrT> tmp658;
    ca_.Bind(&block38, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp659;
    compiler::TNode<JSTypedArray> tmp660;
    compiler::TNode<JSReceiver> tmp661;
    compiler::TNode<FixedArray> tmp662;
    compiler::TNode<Smi> tmp663;
    compiler::TNode<Smi> tmp664;
    compiler::TNode<Smi> tmp665;
    compiler::TNode<FixedArray> tmp666;
    compiler::TNode<Smi> tmp667;
    compiler::TNode<Smi> tmp668;
    compiler::TNode<Smi> tmp669;
    compiler::TNode<Object> tmp670;
    compiler::TNode<FixedArray> tmp671;
    compiler::TNode<IntPtrT> tmp672;
    compiler::TNode<IntPtrT> tmp673;
    compiler::TNode<Smi> tmp674;
    compiler::TNode<Smi> tmp675;
    compiler::TNode<IntPtrT> tmp676;
    compiler::TNode<HeapObject> tmp677;
    compiler::TNode<IntPtrT> tmp678;
    ca_.Bind(&block37, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678);
    ca_.Goto(&block36, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp677, tmp678);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp679;
    compiler::TNode<JSTypedArray> tmp680;
    compiler::TNode<JSReceiver> tmp681;
    compiler::TNode<FixedArray> tmp682;
    compiler::TNode<Smi> tmp683;
    compiler::TNode<Smi> tmp684;
    compiler::TNode<Smi> tmp685;
    compiler::TNode<FixedArray> tmp686;
    compiler::TNode<Smi> tmp687;
    compiler::TNode<Smi> tmp688;
    compiler::TNode<Smi> tmp689;
    compiler::TNode<Object> tmp690;
    compiler::TNode<FixedArray> tmp691;
    compiler::TNode<IntPtrT> tmp692;
    compiler::TNode<IntPtrT> tmp693;
    compiler::TNode<Smi> tmp694;
    compiler::TNode<Smi> tmp695;
    compiler::TNode<HeapObject> tmp696;
    compiler::TNode<IntPtrT> tmp697;
    ca_.Bind(&block36, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 242);
    compiler::TNode<Object>tmp698 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp696, tmp697});
    compiler::TNode<Object> tmp699;
    USE(tmp699);
    tmp699 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1346(state_, compiler::TNode<Context>{tmp679}, compiler::TNode<Object>{tmp698});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    compiler::TNode<Number> tmp700;
    USE(tmp700);
    tmp700 = CallCompare_383(state_, compiler::TNode<Context>{tmp679}, compiler::TNode<JSTypedArray>{tmp680}, compiler::TNode<JSReceiver>{tmp681}, compiler::TNode<Object>{tmp690}, compiler::TNode<Object>{tmp699});
    compiler::TNode<Number> tmp701;
    USE(tmp701);
    tmp701 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp702;
    USE(tmp702);
    tmp702 = NumberIsLessThanOrEqual_76(state_, compiler::TNode<Number>{tmp700}, compiler::TNode<Number>{tmp701});
    ca_.Branch(tmp702, &block43, &block44, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp690, tmp699);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp703;
    compiler::TNode<JSTypedArray> tmp704;
    compiler::TNode<JSReceiver> tmp705;
    compiler::TNode<FixedArray> tmp706;
    compiler::TNode<Smi> tmp707;
    compiler::TNode<Smi> tmp708;
    compiler::TNode<Smi> tmp709;
    compiler::TNode<FixedArray> tmp710;
    compiler::TNode<Smi> tmp711;
    compiler::TNode<Smi> tmp712;
    compiler::TNode<Smi> tmp713;
    compiler::TNode<Object> tmp714;
    compiler::TNode<Object> tmp715;
    ca_.Bind(&block43, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 244);
    compiler::TNode<IntPtrT> tmp716 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp716);
    compiler::TNode<IntPtrT> tmp717 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp717);
    compiler::TNode<Smi>tmp718 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp710, tmp717});
    compiler::TNode<IntPtrT> tmp719;
    USE(tmp719);
    tmp719 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp718});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp720;
    USE(tmp720);
    tmp720 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp713});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp721;
    USE(tmp721);
    tmp721 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp720});
    compiler::TNode<UintPtrT> tmp722;
    USE(tmp722);
    tmp722 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp719});
    compiler::TNode<BoolT> tmp723;
    USE(tmp723);
    tmp723 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp721}, compiler::TNode<UintPtrT>{tmp722});
    ca_.Branch(tmp723, &block50, &block51, tmp703, tmp704, tmp705, tmp706, tmp707, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp710, tmp716, tmp719, tmp713, tmp713, tmp720, tmp710, tmp716, tmp719, tmp720, tmp720);
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp724;
    compiler::TNode<JSTypedArray> tmp725;
    compiler::TNode<JSReceiver> tmp726;
    compiler::TNode<FixedArray> tmp727;
    compiler::TNode<Smi> tmp728;
    compiler::TNode<Smi> tmp729;
    compiler::TNode<Smi> tmp730;
    compiler::TNode<FixedArray> tmp731;
    compiler::TNode<Smi> tmp732;
    compiler::TNode<Smi> tmp733;
    compiler::TNode<Smi> tmp734;
    compiler::TNode<Object> tmp735;
    compiler::TNode<Object> tmp736;
    compiler::TNode<FixedArray> tmp737;
    compiler::TNode<IntPtrT> tmp738;
    compiler::TNode<IntPtrT> tmp739;
    compiler::TNode<Smi> tmp740;
    compiler::TNode<Smi> tmp741;
    compiler::TNode<IntPtrT> tmp742;
    compiler::TNode<HeapObject> tmp743;
    compiler::TNode<IntPtrT> tmp744;
    compiler::TNode<IntPtrT> tmp745;
    compiler::TNode<IntPtrT> tmp746;
    compiler::TNode<IntPtrT> tmp747;
    ca_.Bind(&block50, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp748;
    USE(tmp748);
    tmp748 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp749;
    USE(tmp749);
    tmp749 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp747}, compiler::TNode<IntPtrT>{tmp748});
    compiler::TNode<IntPtrT> tmp750;
    USE(tmp750);
    tmp750 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp744}, compiler::TNode<IntPtrT>{tmp749});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp751;
    USE(tmp751);
    compiler::TNode<IntPtrT> tmp752;
    USE(tmp752);
    std::tie(tmp751, tmp752) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp743}, compiler::TNode<IntPtrT>{tmp750}).Flatten();
    ca_.Goto(&block49, tmp724, tmp725, tmp726, tmp727, tmp728, tmp729, tmp730, tmp731, tmp732, tmp733, tmp734, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp751, tmp752);
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp753;
    compiler::TNode<JSTypedArray> tmp754;
    compiler::TNode<JSReceiver> tmp755;
    compiler::TNode<FixedArray> tmp756;
    compiler::TNode<Smi> tmp757;
    compiler::TNode<Smi> tmp758;
    compiler::TNode<Smi> tmp759;
    compiler::TNode<FixedArray> tmp760;
    compiler::TNode<Smi> tmp761;
    compiler::TNode<Smi> tmp762;
    compiler::TNode<Smi> tmp763;
    compiler::TNode<Object> tmp764;
    compiler::TNode<Object> tmp765;
    compiler::TNode<FixedArray> tmp766;
    compiler::TNode<IntPtrT> tmp767;
    compiler::TNode<IntPtrT> tmp768;
    compiler::TNode<Smi> tmp769;
    compiler::TNode<Smi> tmp770;
    compiler::TNode<IntPtrT> tmp771;
    compiler::TNode<HeapObject> tmp772;
    compiler::TNode<IntPtrT> tmp773;
    compiler::TNode<IntPtrT> tmp774;
    compiler::TNode<IntPtrT> tmp775;
    compiler::TNode<IntPtrT> tmp776;
    ca_.Bind(&block51, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block48, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771);
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp777;
    compiler::TNode<JSTypedArray> tmp778;
    compiler::TNode<JSReceiver> tmp779;
    compiler::TNode<FixedArray> tmp780;
    compiler::TNode<Smi> tmp781;
    compiler::TNode<Smi> tmp782;
    compiler::TNode<Smi> tmp783;
    compiler::TNode<FixedArray> tmp784;
    compiler::TNode<Smi> tmp785;
    compiler::TNode<Smi> tmp786;
    compiler::TNode<Smi> tmp787;
    compiler::TNode<Object> tmp788;
    compiler::TNode<Object> tmp789;
    compiler::TNode<FixedArray> tmp790;
    compiler::TNode<IntPtrT> tmp791;
    compiler::TNode<IntPtrT> tmp792;
    compiler::TNode<Smi> tmp793;
    compiler::TNode<Smi> tmp794;
    compiler::TNode<IntPtrT> tmp795;
    compiler::TNode<HeapObject> tmp796;
    compiler::TNode<IntPtrT> tmp797;
    compiler::TNode<IntPtrT> tmp798;
    compiler::TNode<IntPtrT> tmp799;
    compiler::TNode<IntPtrT> tmp800;
    compiler::TNode<HeapObject> tmp801;
    compiler::TNode<IntPtrT> tmp802;
    ca_.Bind(&block49, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block47, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp792, tmp793, tmp794, tmp795, tmp801, tmp802);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp803;
    compiler::TNode<JSTypedArray> tmp804;
    compiler::TNode<JSReceiver> tmp805;
    compiler::TNode<FixedArray> tmp806;
    compiler::TNode<Smi> tmp807;
    compiler::TNode<Smi> tmp808;
    compiler::TNode<Smi> tmp809;
    compiler::TNode<FixedArray> tmp810;
    compiler::TNode<Smi> tmp811;
    compiler::TNode<Smi> tmp812;
    compiler::TNode<Smi> tmp813;
    compiler::TNode<Object> tmp814;
    compiler::TNode<Object> tmp815;
    compiler::TNode<FixedArray> tmp816;
    compiler::TNode<IntPtrT> tmp817;
    compiler::TNode<IntPtrT> tmp818;
    compiler::TNode<Smi> tmp819;
    compiler::TNode<Smi> tmp820;
    compiler::TNode<IntPtrT> tmp821;
    ca_.Bind(&block48, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813, &tmp814, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp822;
    compiler::TNode<JSTypedArray> tmp823;
    compiler::TNode<JSReceiver> tmp824;
    compiler::TNode<FixedArray> tmp825;
    compiler::TNode<Smi> tmp826;
    compiler::TNode<Smi> tmp827;
    compiler::TNode<Smi> tmp828;
    compiler::TNode<FixedArray> tmp829;
    compiler::TNode<Smi> tmp830;
    compiler::TNode<Smi> tmp831;
    compiler::TNode<Smi> tmp832;
    compiler::TNode<Object> tmp833;
    compiler::TNode<Object> tmp834;
    compiler::TNode<FixedArray> tmp835;
    compiler::TNode<IntPtrT> tmp836;
    compiler::TNode<IntPtrT> tmp837;
    compiler::TNode<Smi> tmp838;
    compiler::TNode<Smi> tmp839;
    compiler::TNode<IntPtrT> tmp840;
    compiler::TNode<HeapObject> tmp841;
    compiler::TNode<IntPtrT> tmp842;
    ca_.Bind(&block47, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842);
    ca_.Goto(&block46, tmp822, tmp823, tmp824, tmp825, tmp826, tmp827, tmp828, tmp829, tmp830, tmp831, tmp832, tmp833, tmp834, tmp835, tmp836, tmp837, tmp838, tmp839, tmp841, tmp842);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp843;
    compiler::TNode<JSTypedArray> tmp844;
    compiler::TNode<JSReceiver> tmp845;
    compiler::TNode<FixedArray> tmp846;
    compiler::TNode<Smi> tmp847;
    compiler::TNode<Smi> tmp848;
    compiler::TNode<Smi> tmp849;
    compiler::TNode<FixedArray> tmp850;
    compiler::TNode<Smi> tmp851;
    compiler::TNode<Smi> tmp852;
    compiler::TNode<Smi> tmp853;
    compiler::TNode<Object> tmp854;
    compiler::TNode<Object> tmp855;
    compiler::TNode<FixedArray> tmp856;
    compiler::TNode<IntPtrT> tmp857;
    compiler::TNode<IntPtrT> tmp858;
    compiler::TNode<Smi> tmp859;
    compiler::TNode<Smi> tmp860;
    compiler::TNode<HeapObject> tmp861;
    compiler::TNode<IntPtrT> tmp862;
    ca_.Bind(&block46, &tmp843, &tmp844, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 244);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp861, tmp862}, tmp854);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 245);
    compiler::TNode<Smi> tmp863;
    USE(tmp863);
    tmp863 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp864;
    USE(tmp864);
    tmp864 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp851}, compiler::TNode<Smi>{tmp863});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    ca_.Goto(&block45, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp864, tmp852, tmp853, tmp854, tmp855);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp865;
    compiler::TNode<JSTypedArray> tmp866;
    compiler::TNode<JSReceiver> tmp867;
    compiler::TNode<FixedArray> tmp868;
    compiler::TNode<Smi> tmp869;
    compiler::TNode<Smi> tmp870;
    compiler::TNode<Smi> tmp871;
    compiler::TNode<FixedArray> tmp872;
    compiler::TNode<Smi> tmp873;
    compiler::TNode<Smi> tmp874;
    compiler::TNode<Smi> tmp875;
    compiler::TNode<Object> tmp876;
    compiler::TNode<Object> tmp877;
    ca_.Bind(&block44, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874, &tmp875, &tmp876, &tmp877);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    compiler::TNode<IntPtrT> tmp878 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp878);
    compiler::TNode<IntPtrT> tmp879 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp879);
    compiler::TNode<Smi>tmp880 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp872, tmp879});
    compiler::TNode<IntPtrT> tmp881;
    USE(tmp881);
    tmp881 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp880});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp882;
    USE(tmp882);
    tmp882 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp875});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp883;
    USE(tmp883);
    tmp883 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp882});
    compiler::TNode<UintPtrT> tmp884;
    USE(tmp884);
    tmp884 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp881});
    compiler::TNode<BoolT> tmp885;
    USE(tmp885);
    tmp885 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp883}, compiler::TNode<UintPtrT>{tmp884});
    ca_.Branch(tmp885, &block57, &block58, tmp865, tmp866, tmp867, tmp868, tmp869, tmp870, tmp871, tmp872, tmp873, tmp874, tmp875, tmp876, tmp877, tmp872, tmp878, tmp881, tmp875, tmp875, tmp882, tmp872, tmp878, tmp881, tmp882, tmp882);
  }

  if (block57.is_used()) {
    compiler::TNode<Context> tmp886;
    compiler::TNode<JSTypedArray> tmp887;
    compiler::TNode<JSReceiver> tmp888;
    compiler::TNode<FixedArray> tmp889;
    compiler::TNode<Smi> tmp890;
    compiler::TNode<Smi> tmp891;
    compiler::TNode<Smi> tmp892;
    compiler::TNode<FixedArray> tmp893;
    compiler::TNode<Smi> tmp894;
    compiler::TNode<Smi> tmp895;
    compiler::TNode<Smi> tmp896;
    compiler::TNode<Object> tmp897;
    compiler::TNode<Object> tmp898;
    compiler::TNode<FixedArray> tmp899;
    compiler::TNode<IntPtrT> tmp900;
    compiler::TNode<IntPtrT> tmp901;
    compiler::TNode<Smi> tmp902;
    compiler::TNode<Smi> tmp903;
    compiler::TNode<IntPtrT> tmp904;
    compiler::TNode<HeapObject> tmp905;
    compiler::TNode<IntPtrT> tmp906;
    compiler::TNode<IntPtrT> tmp907;
    compiler::TNode<IntPtrT> tmp908;
    compiler::TNode<IntPtrT> tmp909;
    ca_.Bind(&block57, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893, &tmp894, &tmp895, &tmp896, &tmp897, &tmp898, &tmp899, &tmp900, &tmp901, &tmp902, &tmp903, &tmp904, &tmp905, &tmp906, &tmp907, &tmp908, &tmp909);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp910;
    USE(tmp910);
    tmp910 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp911;
    USE(tmp911);
    tmp911 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp909}, compiler::TNode<IntPtrT>{tmp910});
    compiler::TNode<IntPtrT> tmp912;
    USE(tmp912);
    tmp912 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp906}, compiler::TNode<IntPtrT>{tmp911});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp913;
    USE(tmp913);
    compiler::TNode<IntPtrT> tmp914;
    USE(tmp914);
    std::tie(tmp913, tmp914) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp905}, compiler::TNode<IntPtrT>{tmp912}).Flatten();
    ca_.Goto(&block56, tmp886, tmp887, tmp888, tmp889, tmp890, tmp891, tmp892, tmp893, tmp894, tmp895, tmp896, tmp897, tmp898, tmp899, tmp900, tmp901, tmp902, tmp903, tmp904, tmp905, tmp906, tmp907, tmp908, tmp909, tmp913, tmp914);
  }

  if (block58.is_used()) {
    compiler::TNode<Context> tmp915;
    compiler::TNode<JSTypedArray> tmp916;
    compiler::TNode<JSReceiver> tmp917;
    compiler::TNode<FixedArray> tmp918;
    compiler::TNode<Smi> tmp919;
    compiler::TNode<Smi> tmp920;
    compiler::TNode<Smi> tmp921;
    compiler::TNode<FixedArray> tmp922;
    compiler::TNode<Smi> tmp923;
    compiler::TNode<Smi> tmp924;
    compiler::TNode<Smi> tmp925;
    compiler::TNode<Object> tmp926;
    compiler::TNode<Object> tmp927;
    compiler::TNode<FixedArray> tmp928;
    compiler::TNode<IntPtrT> tmp929;
    compiler::TNode<IntPtrT> tmp930;
    compiler::TNode<Smi> tmp931;
    compiler::TNode<Smi> tmp932;
    compiler::TNode<IntPtrT> tmp933;
    compiler::TNode<HeapObject> tmp934;
    compiler::TNode<IntPtrT> tmp935;
    compiler::TNode<IntPtrT> tmp936;
    compiler::TNode<IntPtrT> tmp937;
    compiler::TNode<IntPtrT> tmp938;
    ca_.Bind(&block58, &tmp915, &tmp916, &tmp917, &tmp918, &tmp919, &tmp920, &tmp921, &tmp922, &tmp923, &tmp924, &tmp925, &tmp926, &tmp927, &tmp928, &tmp929, &tmp930, &tmp931, &tmp932, &tmp933, &tmp934, &tmp935, &tmp936, &tmp937, &tmp938);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block55, tmp915, tmp916, tmp917, tmp918, tmp919, tmp920, tmp921, tmp922, tmp923, tmp924, tmp925, tmp926, tmp927, tmp928, tmp929, tmp930, tmp931, tmp932, tmp933);
  }

  if (block56.is_used()) {
    compiler::TNode<Context> tmp939;
    compiler::TNode<JSTypedArray> tmp940;
    compiler::TNode<JSReceiver> tmp941;
    compiler::TNode<FixedArray> tmp942;
    compiler::TNode<Smi> tmp943;
    compiler::TNode<Smi> tmp944;
    compiler::TNode<Smi> tmp945;
    compiler::TNode<FixedArray> tmp946;
    compiler::TNode<Smi> tmp947;
    compiler::TNode<Smi> tmp948;
    compiler::TNode<Smi> tmp949;
    compiler::TNode<Object> tmp950;
    compiler::TNode<Object> tmp951;
    compiler::TNode<FixedArray> tmp952;
    compiler::TNode<IntPtrT> tmp953;
    compiler::TNode<IntPtrT> tmp954;
    compiler::TNode<Smi> tmp955;
    compiler::TNode<Smi> tmp956;
    compiler::TNode<IntPtrT> tmp957;
    compiler::TNode<HeapObject> tmp958;
    compiler::TNode<IntPtrT> tmp959;
    compiler::TNode<IntPtrT> tmp960;
    compiler::TNode<IntPtrT> tmp961;
    compiler::TNode<IntPtrT> tmp962;
    compiler::TNode<HeapObject> tmp963;
    compiler::TNode<IntPtrT> tmp964;
    ca_.Bind(&block56, &tmp939, &tmp940, &tmp941, &tmp942, &tmp943, &tmp944, &tmp945, &tmp946, &tmp947, &tmp948, &tmp949, &tmp950, &tmp951, &tmp952, &tmp953, &tmp954, &tmp955, &tmp956, &tmp957, &tmp958, &tmp959, &tmp960, &tmp961, &tmp962, &tmp963, &tmp964);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block54, tmp939, tmp940, tmp941, tmp942, tmp943, tmp944, tmp945, tmp946, tmp947, tmp948, tmp949, tmp950, tmp951, tmp952, tmp953, tmp954, tmp955, tmp956, tmp957, tmp963, tmp964);
  }

  if (block55.is_used()) {
    compiler::TNode<Context> tmp965;
    compiler::TNode<JSTypedArray> tmp966;
    compiler::TNode<JSReceiver> tmp967;
    compiler::TNode<FixedArray> tmp968;
    compiler::TNode<Smi> tmp969;
    compiler::TNode<Smi> tmp970;
    compiler::TNode<Smi> tmp971;
    compiler::TNode<FixedArray> tmp972;
    compiler::TNode<Smi> tmp973;
    compiler::TNode<Smi> tmp974;
    compiler::TNode<Smi> tmp975;
    compiler::TNode<Object> tmp976;
    compiler::TNode<Object> tmp977;
    compiler::TNode<FixedArray> tmp978;
    compiler::TNode<IntPtrT> tmp979;
    compiler::TNode<IntPtrT> tmp980;
    compiler::TNode<Smi> tmp981;
    compiler::TNode<Smi> tmp982;
    compiler::TNode<IntPtrT> tmp983;
    ca_.Bind(&block55, &tmp965, &tmp966, &tmp967, &tmp968, &tmp969, &tmp970, &tmp971, &tmp972, &tmp973, &tmp974, &tmp975, &tmp976, &tmp977, &tmp978, &tmp979, &tmp980, &tmp981, &tmp982, &tmp983);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block54.is_used()) {
    compiler::TNode<Context> tmp984;
    compiler::TNode<JSTypedArray> tmp985;
    compiler::TNode<JSReceiver> tmp986;
    compiler::TNode<FixedArray> tmp987;
    compiler::TNode<Smi> tmp988;
    compiler::TNode<Smi> tmp989;
    compiler::TNode<Smi> tmp990;
    compiler::TNode<FixedArray> tmp991;
    compiler::TNode<Smi> tmp992;
    compiler::TNode<Smi> tmp993;
    compiler::TNode<Smi> tmp994;
    compiler::TNode<Object> tmp995;
    compiler::TNode<Object> tmp996;
    compiler::TNode<FixedArray> tmp997;
    compiler::TNode<IntPtrT> tmp998;
    compiler::TNode<IntPtrT> tmp999;
    compiler::TNode<Smi> tmp1000;
    compiler::TNode<Smi> tmp1001;
    compiler::TNode<IntPtrT> tmp1002;
    compiler::TNode<HeapObject> tmp1003;
    compiler::TNode<IntPtrT> tmp1004;
    ca_.Bind(&block54, &tmp984, &tmp985, &tmp986, &tmp987, &tmp988, &tmp989, &tmp990, &tmp991, &tmp992, &tmp993, &tmp994, &tmp995, &tmp996, &tmp997, &tmp998, &tmp999, &tmp1000, &tmp1001, &tmp1002, &tmp1003, &tmp1004);
    ca_.Goto(&block53, tmp984, tmp985, tmp986, tmp987, tmp988, tmp989, tmp990, tmp991, tmp992, tmp993, tmp994, tmp995, tmp996, tmp997, tmp998, tmp999, tmp1000, tmp1001, tmp1003, tmp1004);
  }

  if (block53.is_used()) {
    compiler::TNode<Context> tmp1005;
    compiler::TNode<JSTypedArray> tmp1006;
    compiler::TNode<JSReceiver> tmp1007;
    compiler::TNode<FixedArray> tmp1008;
    compiler::TNode<Smi> tmp1009;
    compiler::TNode<Smi> tmp1010;
    compiler::TNode<Smi> tmp1011;
    compiler::TNode<FixedArray> tmp1012;
    compiler::TNode<Smi> tmp1013;
    compiler::TNode<Smi> tmp1014;
    compiler::TNode<Smi> tmp1015;
    compiler::TNode<Object> tmp1016;
    compiler::TNode<Object> tmp1017;
    compiler::TNode<FixedArray> tmp1018;
    compiler::TNode<IntPtrT> tmp1019;
    compiler::TNode<IntPtrT> tmp1020;
    compiler::TNode<Smi> tmp1021;
    compiler::TNode<Smi> tmp1022;
    compiler::TNode<HeapObject> tmp1023;
    compiler::TNode<IntPtrT> tmp1024;
    ca_.Bind(&block53, &tmp1005, &tmp1006, &tmp1007, &tmp1008, &tmp1009, &tmp1010, &tmp1011, &tmp1012, &tmp1013, &tmp1014, &tmp1015, &tmp1016, &tmp1017, &tmp1018, &tmp1019, &tmp1020, &tmp1021, &tmp1022, &tmp1023, &tmp1024);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1023, tmp1024}, tmp1017);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 248);
    compiler::TNode<Smi> tmp1025;
    USE(tmp1025);
    tmp1025 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp1026;
    USE(tmp1026);
    tmp1026 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1014}, compiler::TNode<Smi>{tmp1025});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    ca_.Goto(&block45, tmp1005, tmp1006, tmp1007, tmp1008, tmp1009, tmp1010, tmp1011, tmp1012, tmp1013, tmp1026, tmp1015, tmp1016, tmp1017);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp1027;
    compiler::TNode<JSTypedArray> tmp1028;
    compiler::TNode<JSReceiver> tmp1029;
    compiler::TNode<FixedArray> tmp1030;
    compiler::TNode<Smi> tmp1031;
    compiler::TNode<Smi> tmp1032;
    compiler::TNode<Smi> tmp1033;
    compiler::TNode<FixedArray> tmp1034;
    compiler::TNode<Smi> tmp1035;
    compiler::TNode<Smi> tmp1036;
    compiler::TNode<Smi> tmp1037;
    compiler::TNode<Object> tmp1038;
    compiler::TNode<Object> tmp1039;
    ca_.Bind(&block45, &tmp1027, &tmp1028, &tmp1029, &tmp1030, &tmp1031, &tmp1032, &tmp1033, &tmp1034, &tmp1035, &tmp1036, &tmp1037, &tmp1038, &tmp1039);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 239);
    ca_.Goto(&block28, tmp1027, tmp1028, tmp1029, tmp1030, tmp1031, tmp1032, tmp1033, tmp1034, tmp1035, tmp1036, tmp1037);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp1040;
    compiler::TNode<JSTypedArray> tmp1041;
    compiler::TNode<JSReceiver> tmp1042;
    compiler::TNode<FixedArray> tmp1043;
    compiler::TNode<Smi> tmp1044;
    compiler::TNode<Smi> tmp1045;
    compiler::TNode<Smi> tmp1046;
    compiler::TNode<FixedArray> tmp1047;
    compiler::TNode<Smi> tmp1048;
    compiler::TNode<Smi> tmp1049;
    compiler::TNode<Smi> tmp1050;
    ca_.Bind(&block27, &tmp1040, &tmp1041, &tmp1042, &tmp1043, &tmp1044, &tmp1045, &tmp1046, &tmp1047, &tmp1048, &tmp1049, &tmp1050);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 254);
    compiler::TNode<IntPtrT> tmp1051 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp1051);
    compiler::TNode<IntPtrT> tmp1052 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1052);
    compiler::TNode<Smi>tmp1053 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1047, tmp1052});
    compiler::TNode<IntPtrT> tmp1054;
    USE(tmp1054);
    tmp1054 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1053});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp1055;
    USE(tmp1055);
    tmp1055 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1050});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp1056;
    USE(tmp1056);
    tmp1056 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp1055});
    compiler::TNode<UintPtrT> tmp1057;
    USE(tmp1057);
    tmp1057 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp1054});
    compiler::TNode<BoolT> tmp1058;
    USE(tmp1058);
    tmp1058 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp1056}, compiler::TNode<UintPtrT>{tmp1057});
    ca_.Branch(tmp1058, &block64, &block65, tmp1040, tmp1041, tmp1042, tmp1043, tmp1044, tmp1045, tmp1046, tmp1047, tmp1048, tmp1049, tmp1050, tmp1047, tmp1051, tmp1054, tmp1050, tmp1050, tmp1055, tmp1047, tmp1051, tmp1054, tmp1055, tmp1055);
  }

  if (block64.is_used()) {
    compiler::TNode<Context> tmp1059;
    compiler::TNode<JSTypedArray> tmp1060;
    compiler::TNode<JSReceiver> tmp1061;
    compiler::TNode<FixedArray> tmp1062;
    compiler::TNode<Smi> tmp1063;
    compiler::TNode<Smi> tmp1064;
    compiler::TNode<Smi> tmp1065;
    compiler::TNode<FixedArray> tmp1066;
    compiler::TNode<Smi> tmp1067;
    compiler::TNode<Smi> tmp1068;
    compiler::TNode<Smi> tmp1069;
    compiler::TNode<FixedArray> tmp1070;
    compiler::TNode<IntPtrT> tmp1071;
    compiler::TNode<IntPtrT> tmp1072;
    compiler::TNode<Smi> tmp1073;
    compiler::TNode<Smi> tmp1074;
    compiler::TNode<IntPtrT> tmp1075;
    compiler::TNode<HeapObject> tmp1076;
    compiler::TNode<IntPtrT> tmp1077;
    compiler::TNode<IntPtrT> tmp1078;
    compiler::TNode<IntPtrT> tmp1079;
    compiler::TNode<IntPtrT> tmp1080;
    ca_.Bind(&block64, &tmp1059, &tmp1060, &tmp1061, &tmp1062, &tmp1063, &tmp1064, &tmp1065, &tmp1066, &tmp1067, &tmp1068, &tmp1069, &tmp1070, &tmp1071, &tmp1072, &tmp1073, &tmp1074, &tmp1075, &tmp1076, &tmp1077, &tmp1078, &tmp1079, &tmp1080);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp1081;
    USE(tmp1081);
    tmp1081 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp1082;
    USE(tmp1082);
    tmp1082 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp1080}, compiler::TNode<IntPtrT>{tmp1081});
    compiler::TNode<IntPtrT> tmp1083;
    USE(tmp1083);
    tmp1083 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp1077}, compiler::TNode<IntPtrT>{tmp1082});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp1084;
    USE(tmp1084);
    compiler::TNode<IntPtrT> tmp1085;
    USE(tmp1085);
    std::tie(tmp1084, tmp1085) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp1076}, compiler::TNode<IntPtrT>{tmp1083}).Flatten();
    ca_.Goto(&block63, tmp1059, tmp1060, tmp1061, tmp1062, tmp1063, tmp1064, tmp1065, tmp1066, tmp1067, tmp1068, tmp1069, tmp1070, tmp1071, tmp1072, tmp1073, tmp1074, tmp1075, tmp1076, tmp1077, tmp1078, tmp1079, tmp1080, tmp1084, tmp1085);
  }

  if (block65.is_used()) {
    compiler::TNode<Context> tmp1086;
    compiler::TNode<JSTypedArray> tmp1087;
    compiler::TNode<JSReceiver> tmp1088;
    compiler::TNode<FixedArray> tmp1089;
    compiler::TNode<Smi> tmp1090;
    compiler::TNode<Smi> tmp1091;
    compiler::TNode<Smi> tmp1092;
    compiler::TNode<FixedArray> tmp1093;
    compiler::TNode<Smi> tmp1094;
    compiler::TNode<Smi> tmp1095;
    compiler::TNode<Smi> tmp1096;
    compiler::TNode<FixedArray> tmp1097;
    compiler::TNode<IntPtrT> tmp1098;
    compiler::TNode<IntPtrT> tmp1099;
    compiler::TNode<Smi> tmp1100;
    compiler::TNode<Smi> tmp1101;
    compiler::TNode<IntPtrT> tmp1102;
    compiler::TNode<HeapObject> tmp1103;
    compiler::TNode<IntPtrT> tmp1104;
    compiler::TNode<IntPtrT> tmp1105;
    compiler::TNode<IntPtrT> tmp1106;
    compiler::TNode<IntPtrT> tmp1107;
    ca_.Bind(&block65, &tmp1086, &tmp1087, &tmp1088, &tmp1089, &tmp1090, &tmp1091, &tmp1092, &tmp1093, &tmp1094, &tmp1095, &tmp1096, &tmp1097, &tmp1098, &tmp1099, &tmp1100, &tmp1101, &tmp1102, &tmp1103, &tmp1104, &tmp1105, &tmp1106, &tmp1107);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block62, tmp1086, tmp1087, tmp1088, tmp1089, tmp1090, tmp1091, tmp1092, tmp1093, tmp1094, tmp1095, tmp1096, tmp1097, tmp1098, tmp1099, tmp1100, tmp1101, tmp1102);
  }

  if (block63.is_used()) {
    compiler::TNode<Context> tmp1108;
    compiler::TNode<JSTypedArray> tmp1109;
    compiler::TNode<JSReceiver> tmp1110;
    compiler::TNode<FixedArray> tmp1111;
    compiler::TNode<Smi> tmp1112;
    compiler::TNode<Smi> tmp1113;
    compiler::TNode<Smi> tmp1114;
    compiler::TNode<FixedArray> tmp1115;
    compiler::TNode<Smi> tmp1116;
    compiler::TNode<Smi> tmp1117;
    compiler::TNode<Smi> tmp1118;
    compiler::TNode<FixedArray> tmp1119;
    compiler::TNode<IntPtrT> tmp1120;
    compiler::TNode<IntPtrT> tmp1121;
    compiler::TNode<Smi> tmp1122;
    compiler::TNode<Smi> tmp1123;
    compiler::TNode<IntPtrT> tmp1124;
    compiler::TNode<HeapObject> tmp1125;
    compiler::TNode<IntPtrT> tmp1126;
    compiler::TNode<IntPtrT> tmp1127;
    compiler::TNode<IntPtrT> tmp1128;
    compiler::TNode<IntPtrT> tmp1129;
    compiler::TNode<HeapObject> tmp1130;
    compiler::TNode<IntPtrT> tmp1131;
    ca_.Bind(&block63, &tmp1108, &tmp1109, &tmp1110, &tmp1111, &tmp1112, &tmp1113, &tmp1114, &tmp1115, &tmp1116, &tmp1117, &tmp1118, &tmp1119, &tmp1120, &tmp1121, &tmp1122, &tmp1123, &tmp1124, &tmp1125, &tmp1126, &tmp1127, &tmp1128, &tmp1129, &tmp1130, &tmp1131);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block61, tmp1108, tmp1109, tmp1110, tmp1111, tmp1112, tmp1113, tmp1114, tmp1115, tmp1116, tmp1117, tmp1118, tmp1119, tmp1120, tmp1121, tmp1122, tmp1123, tmp1124, tmp1130, tmp1131);
  }

  if (block62.is_used()) {
    compiler::TNode<Context> tmp1132;
    compiler::TNode<JSTypedArray> tmp1133;
    compiler::TNode<JSReceiver> tmp1134;
    compiler::TNode<FixedArray> tmp1135;
    compiler::TNode<Smi> tmp1136;
    compiler::TNode<Smi> tmp1137;
    compiler::TNode<Smi> tmp1138;
    compiler::TNode<FixedArray> tmp1139;
    compiler::TNode<Smi> tmp1140;
    compiler::TNode<Smi> tmp1141;
    compiler::TNode<Smi> tmp1142;
    compiler::TNode<FixedArray> tmp1143;
    compiler::TNode<IntPtrT> tmp1144;
    compiler::TNode<IntPtrT> tmp1145;
    compiler::TNode<Smi> tmp1146;
    compiler::TNode<Smi> tmp1147;
    compiler::TNode<IntPtrT> tmp1148;
    ca_.Bind(&block62, &tmp1132, &tmp1133, &tmp1134, &tmp1135, &tmp1136, &tmp1137, &tmp1138, &tmp1139, &tmp1140, &tmp1141, &tmp1142, &tmp1143, &tmp1144, &tmp1145, &tmp1146, &tmp1147, &tmp1148);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block61.is_used()) {
    compiler::TNode<Context> tmp1149;
    compiler::TNode<JSTypedArray> tmp1150;
    compiler::TNode<JSReceiver> tmp1151;
    compiler::TNode<FixedArray> tmp1152;
    compiler::TNode<Smi> tmp1153;
    compiler::TNode<Smi> tmp1154;
    compiler::TNode<Smi> tmp1155;
    compiler::TNode<FixedArray> tmp1156;
    compiler::TNode<Smi> tmp1157;
    compiler::TNode<Smi> tmp1158;
    compiler::TNode<Smi> tmp1159;
    compiler::TNode<FixedArray> tmp1160;
    compiler::TNode<IntPtrT> tmp1161;
    compiler::TNode<IntPtrT> tmp1162;
    compiler::TNode<Smi> tmp1163;
    compiler::TNode<Smi> tmp1164;
    compiler::TNode<IntPtrT> tmp1165;
    compiler::TNode<HeapObject> tmp1166;
    compiler::TNode<IntPtrT> tmp1167;
    ca_.Bind(&block61, &tmp1149, &tmp1150, &tmp1151, &tmp1152, &tmp1153, &tmp1154, &tmp1155, &tmp1156, &tmp1157, &tmp1158, &tmp1159, &tmp1160, &tmp1161, &tmp1162, &tmp1163, &tmp1164, &tmp1165, &tmp1166, &tmp1167);
    ca_.Goto(&block60, tmp1149, tmp1150, tmp1151, tmp1152, tmp1153, tmp1154, tmp1155, tmp1156, tmp1157, tmp1158, tmp1159, tmp1160, tmp1161, tmp1162, tmp1163, tmp1164, tmp1166, tmp1167);
  }

  if (block60.is_used()) {
    compiler::TNode<Context> tmp1168;
    compiler::TNode<JSTypedArray> tmp1169;
    compiler::TNode<JSReceiver> tmp1170;
    compiler::TNode<FixedArray> tmp1171;
    compiler::TNode<Smi> tmp1172;
    compiler::TNode<Smi> tmp1173;
    compiler::TNode<Smi> tmp1174;
    compiler::TNode<FixedArray> tmp1175;
    compiler::TNode<Smi> tmp1176;
    compiler::TNode<Smi> tmp1177;
    compiler::TNode<Smi> tmp1178;
    compiler::TNode<FixedArray> tmp1179;
    compiler::TNode<IntPtrT> tmp1180;
    compiler::TNode<IntPtrT> tmp1181;
    compiler::TNode<Smi> tmp1182;
    compiler::TNode<Smi> tmp1183;
    compiler::TNode<HeapObject> tmp1184;
    compiler::TNode<IntPtrT> tmp1185;
    ca_.Bind(&block60, &tmp1168, &tmp1169, &tmp1170, &tmp1171, &tmp1172, &tmp1173, &tmp1174, &tmp1175, &tmp1176, &tmp1177, &tmp1178, &tmp1179, &tmp1180, &tmp1181, &tmp1182, &tmp1183, &tmp1184, &tmp1185);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 254);
    compiler::TNode<IntPtrT> tmp1186 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp1186);
    compiler::TNode<IntPtrT> tmp1187 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1187);
    compiler::TNode<Smi>tmp1188 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1171, tmp1187});
    compiler::TNode<IntPtrT> tmp1189;
    USE(tmp1189);
    tmp1189 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1188});
    compiler::TNode<Smi> tmp1190;
    USE(tmp1190);
    tmp1190 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp1191;
    USE(tmp1191);
    tmp1191 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1177}, compiler::TNode<Smi>{tmp1190});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp1192;
    USE(tmp1192);
    tmp1192 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1177});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp1193;
    USE(tmp1193);
    tmp1193 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp1192});
    compiler::TNode<UintPtrT> tmp1194;
    USE(tmp1194);
    tmp1194 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp1189});
    compiler::TNode<BoolT> tmp1195;
    USE(tmp1195);
    tmp1195 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp1193}, compiler::TNode<UintPtrT>{tmp1194});
    ca_.Branch(tmp1195, &block71, &block72, tmp1168, tmp1169, tmp1170, tmp1171, tmp1172, tmp1173, tmp1174, tmp1175, tmp1176, tmp1191, tmp1178, tmp1179, tmp1180, tmp1181, tmp1182, tmp1183, tmp1184, tmp1185, tmp1171, tmp1186, tmp1189, tmp1177, tmp1177, tmp1192, tmp1171, tmp1186, tmp1189, tmp1192, tmp1192);
  }

  if (block71.is_used()) {
    compiler::TNode<Context> tmp1196;
    compiler::TNode<JSTypedArray> tmp1197;
    compiler::TNode<JSReceiver> tmp1198;
    compiler::TNode<FixedArray> tmp1199;
    compiler::TNode<Smi> tmp1200;
    compiler::TNode<Smi> tmp1201;
    compiler::TNode<Smi> tmp1202;
    compiler::TNode<FixedArray> tmp1203;
    compiler::TNode<Smi> tmp1204;
    compiler::TNode<Smi> tmp1205;
    compiler::TNode<Smi> tmp1206;
    compiler::TNode<FixedArray> tmp1207;
    compiler::TNode<IntPtrT> tmp1208;
    compiler::TNode<IntPtrT> tmp1209;
    compiler::TNode<Smi> tmp1210;
    compiler::TNode<Smi> tmp1211;
    compiler::TNode<HeapObject> tmp1212;
    compiler::TNode<IntPtrT> tmp1213;
    compiler::TNode<FixedArray> tmp1214;
    compiler::TNode<IntPtrT> tmp1215;
    compiler::TNode<IntPtrT> tmp1216;
    compiler::TNode<Smi> tmp1217;
    compiler::TNode<Smi> tmp1218;
    compiler::TNode<IntPtrT> tmp1219;
    compiler::TNode<HeapObject> tmp1220;
    compiler::TNode<IntPtrT> tmp1221;
    compiler::TNode<IntPtrT> tmp1222;
    compiler::TNode<IntPtrT> tmp1223;
    compiler::TNode<IntPtrT> tmp1224;
    ca_.Bind(&block71, &tmp1196, &tmp1197, &tmp1198, &tmp1199, &tmp1200, &tmp1201, &tmp1202, &tmp1203, &tmp1204, &tmp1205, &tmp1206, &tmp1207, &tmp1208, &tmp1209, &tmp1210, &tmp1211, &tmp1212, &tmp1213, &tmp1214, &tmp1215, &tmp1216, &tmp1217, &tmp1218, &tmp1219, &tmp1220, &tmp1221, &tmp1222, &tmp1223, &tmp1224);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp1225;
    USE(tmp1225);
    tmp1225 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp1226;
    USE(tmp1226);
    tmp1226 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp1224}, compiler::TNode<IntPtrT>{tmp1225});
    compiler::TNode<IntPtrT> tmp1227;
    USE(tmp1227);
    tmp1227 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp1221}, compiler::TNode<IntPtrT>{tmp1226});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp1228;
    USE(tmp1228);
    compiler::TNode<IntPtrT> tmp1229;
    USE(tmp1229);
    std::tie(tmp1228, tmp1229) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp1220}, compiler::TNode<IntPtrT>{tmp1227}).Flatten();
    ca_.Goto(&block70, tmp1196, tmp1197, tmp1198, tmp1199, tmp1200, tmp1201, tmp1202, tmp1203, tmp1204, tmp1205, tmp1206, tmp1207, tmp1208, tmp1209, tmp1210, tmp1211, tmp1212, tmp1213, tmp1214, tmp1215, tmp1216, tmp1217, tmp1218, tmp1219, tmp1220, tmp1221, tmp1222, tmp1223, tmp1224, tmp1228, tmp1229);
  }

  if (block72.is_used()) {
    compiler::TNode<Context> tmp1230;
    compiler::TNode<JSTypedArray> tmp1231;
    compiler::TNode<JSReceiver> tmp1232;
    compiler::TNode<FixedArray> tmp1233;
    compiler::TNode<Smi> tmp1234;
    compiler::TNode<Smi> tmp1235;
    compiler::TNode<Smi> tmp1236;
    compiler::TNode<FixedArray> tmp1237;
    compiler::TNode<Smi> tmp1238;
    compiler::TNode<Smi> tmp1239;
    compiler::TNode<Smi> tmp1240;
    compiler::TNode<FixedArray> tmp1241;
    compiler::TNode<IntPtrT> tmp1242;
    compiler::TNode<IntPtrT> tmp1243;
    compiler::TNode<Smi> tmp1244;
    compiler::TNode<Smi> tmp1245;
    compiler::TNode<HeapObject> tmp1246;
    compiler::TNode<IntPtrT> tmp1247;
    compiler::TNode<FixedArray> tmp1248;
    compiler::TNode<IntPtrT> tmp1249;
    compiler::TNode<IntPtrT> tmp1250;
    compiler::TNode<Smi> tmp1251;
    compiler::TNode<Smi> tmp1252;
    compiler::TNode<IntPtrT> tmp1253;
    compiler::TNode<HeapObject> tmp1254;
    compiler::TNode<IntPtrT> tmp1255;
    compiler::TNode<IntPtrT> tmp1256;
    compiler::TNode<IntPtrT> tmp1257;
    compiler::TNode<IntPtrT> tmp1258;
    ca_.Bind(&block72, &tmp1230, &tmp1231, &tmp1232, &tmp1233, &tmp1234, &tmp1235, &tmp1236, &tmp1237, &tmp1238, &tmp1239, &tmp1240, &tmp1241, &tmp1242, &tmp1243, &tmp1244, &tmp1245, &tmp1246, &tmp1247, &tmp1248, &tmp1249, &tmp1250, &tmp1251, &tmp1252, &tmp1253, &tmp1254, &tmp1255, &tmp1256, &tmp1257, &tmp1258);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block69, tmp1230, tmp1231, tmp1232, tmp1233, tmp1234, tmp1235, tmp1236, tmp1237, tmp1238, tmp1239, tmp1240, tmp1241, tmp1242, tmp1243, tmp1244, tmp1245, tmp1246, tmp1247, tmp1248, tmp1249, tmp1250, tmp1251, tmp1252, tmp1253);
  }

  if (block70.is_used()) {
    compiler::TNode<Context> tmp1259;
    compiler::TNode<JSTypedArray> tmp1260;
    compiler::TNode<JSReceiver> tmp1261;
    compiler::TNode<FixedArray> tmp1262;
    compiler::TNode<Smi> tmp1263;
    compiler::TNode<Smi> tmp1264;
    compiler::TNode<Smi> tmp1265;
    compiler::TNode<FixedArray> tmp1266;
    compiler::TNode<Smi> tmp1267;
    compiler::TNode<Smi> tmp1268;
    compiler::TNode<Smi> tmp1269;
    compiler::TNode<FixedArray> tmp1270;
    compiler::TNode<IntPtrT> tmp1271;
    compiler::TNode<IntPtrT> tmp1272;
    compiler::TNode<Smi> tmp1273;
    compiler::TNode<Smi> tmp1274;
    compiler::TNode<HeapObject> tmp1275;
    compiler::TNode<IntPtrT> tmp1276;
    compiler::TNode<FixedArray> tmp1277;
    compiler::TNode<IntPtrT> tmp1278;
    compiler::TNode<IntPtrT> tmp1279;
    compiler::TNode<Smi> tmp1280;
    compiler::TNode<Smi> tmp1281;
    compiler::TNode<IntPtrT> tmp1282;
    compiler::TNode<HeapObject> tmp1283;
    compiler::TNode<IntPtrT> tmp1284;
    compiler::TNode<IntPtrT> tmp1285;
    compiler::TNode<IntPtrT> tmp1286;
    compiler::TNode<IntPtrT> tmp1287;
    compiler::TNode<HeapObject> tmp1288;
    compiler::TNode<IntPtrT> tmp1289;
    ca_.Bind(&block70, &tmp1259, &tmp1260, &tmp1261, &tmp1262, &tmp1263, &tmp1264, &tmp1265, &tmp1266, &tmp1267, &tmp1268, &tmp1269, &tmp1270, &tmp1271, &tmp1272, &tmp1273, &tmp1274, &tmp1275, &tmp1276, &tmp1277, &tmp1278, &tmp1279, &tmp1280, &tmp1281, &tmp1282, &tmp1283, &tmp1284, &tmp1285, &tmp1286, &tmp1287, &tmp1288, &tmp1289);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block68, tmp1259, tmp1260, tmp1261, tmp1262, tmp1263, tmp1264, tmp1265, tmp1266, tmp1267, tmp1268, tmp1269, tmp1270, tmp1271, tmp1272, tmp1273, tmp1274, tmp1275, tmp1276, tmp1277, tmp1278, tmp1279, tmp1280, tmp1281, tmp1282, tmp1288, tmp1289);
  }

  if (block69.is_used()) {
    compiler::TNode<Context> tmp1290;
    compiler::TNode<JSTypedArray> tmp1291;
    compiler::TNode<JSReceiver> tmp1292;
    compiler::TNode<FixedArray> tmp1293;
    compiler::TNode<Smi> tmp1294;
    compiler::TNode<Smi> tmp1295;
    compiler::TNode<Smi> tmp1296;
    compiler::TNode<FixedArray> tmp1297;
    compiler::TNode<Smi> tmp1298;
    compiler::TNode<Smi> tmp1299;
    compiler::TNode<Smi> tmp1300;
    compiler::TNode<FixedArray> tmp1301;
    compiler::TNode<IntPtrT> tmp1302;
    compiler::TNode<IntPtrT> tmp1303;
    compiler::TNode<Smi> tmp1304;
    compiler::TNode<Smi> tmp1305;
    compiler::TNode<HeapObject> tmp1306;
    compiler::TNode<IntPtrT> tmp1307;
    compiler::TNode<FixedArray> tmp1308;
    compiler::TNode<IntPtrT> tmp1309;
    compiler::TNode<IntPtrT> tmp1310;
    compiler::TNode<Smi> tmp1311;
    compiler::TNode<Smi> tmp1312;
    compiler::TNode<IntPtrT> tmp1313;
    ca_.Bind(&block69, &tmp1290, &tmp1291, &tmp1292, &tmp1293, &tmp1294, &tmp1295, &tmp1296, &tmp1297, &tmp1298, &tmp1299, &tmp1300, &tmp1301, &tmp1302, &tmp1303, &tmp1304, &tmp1305, &tmp1306, &tmp1307, &tmp1308, &tmp1309, &tmp1310, &tmp1311, &tmp1312, &tmp1313);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block68.is_used()) {
    compiler::TNode<Context> tmp1314;
    compiler::TNode<JSTypedArray> tmp1315;
    compiler::TNode<JSReceiver> tmp1316;
    compiler::TNode<FixedArray> tmp1317;
    compiler::TNode<Smi> tmp1318;
    compiler::TNode<Smi> tmp1319;
    compiler::TNode<Smi> tmp1320;
    compiler::TNode<FixedArray> tmp1321;
    compiler::TNode<Smi> tmp1322;
    compiler::TNode<Smi> tmp1323;
    compiler::TNode<Smi> tmp1324;
    compiler::TNode<FixedArray> tmp1325;
    compiler::TNode<IntPtrT> tmp1326;
    compiler::TNode<IntPtrT> tmp1327;
    compiler::TNode<Smi> tmp1328;
    compiler::TNode<Smi> tmp1329;
    compiler::TNode<HeapObject> tmp1330;
    compiler::TNode<IntPtrT> tmp1331;
    compiler::TNode<FixedArray> tmp1332;
    compiler::TNode<IntPtrT> tmp1333;
    compiler::TNode<IntPtrT> tmp1334;
    compiler::TNode<Smi> tmp1335;
    compiler::TNode<Smi> tmp1336;
    compiler::TNode<IntPtrT> tmp1337;
    compiler::TNode<HeapObject> tmp1338;
    compiler::TNode<IntPtrT> tmp1339;
    ca_.Bind(&block68, &tmp1314, &tmp1315, &tmp1316, &tmp1317, &tmp1318, &tmp1319, &tmp1320, &tmp1321, &tmp1322, &tmp1323, &tmp1324, &tmp1325, &tmp1326, &tmp1327, &tmp1328, &tmp1329, &tmp1330, &tmp1331, &tmp1332, &tmp1333, &tmp1334, &tmp1335, &tmp1336, &tmp1337, &tmp1338, &tmp1339);
    ca_.Goto(&block67, tmp1314, tmp1315, tmp1316, tmp1317, tmp1318, tmp1319, tmp1320, tmp1321, tmp1322, tmp1323, tmp1324, tmp1325, tmp1326, tmp1327, tmp1328, tmp1329, tmp1330, tmp1331, tmp1332, tmp1333, tmp1334, tmp1335, tmp1336, tmp1338, tmp1339);
  }

  if (block67.is_used()) {
    compiler::TNode<Context> tmp1340;
    compiler::TNode<JSTypedArray> tmp1341;
    compiler::TNode<JSReceiver> tmp1342;
    compiler::TNode<FixedArray> tmp1343;
    compiler::TNode<Smi> tmp1344;
    compiler::TNode<Smi> tmp1345;
    compiler::TNode<Smi> tmp1346;
    compiler::TNode<FixedArray> tmp1347;
    compiler::TNode<Smi> tmp1348;
    compiler::TNode<Smi> tmp1349;
    compiler::TNode<Smi> tmp1350;
    compiler::TNode<FixedArray> tmp1351;
    compiler::TNode<IntPtrT> tmp1352;
    compiler::TNode<IntPtrT> tmp1353;
    compiler::TNode<Smi> tmp1354;
    compiler::TNode<Smi> tmp1355;
    compiler::TNode<HeapObject> tmp1356;
    compiler::TNode<IntPtrT> tmp1357;
    compiler::TNode<FixedArray> tmp1358;
    compiler::TNode<IntPtrT> tmp1359;
    compiler::TNode<IntPtrT> tmp1360;
    compiler::TNode<Smi> tmp1361;
    compiler::TNode<Smi> tmp1362;
    compiler::TNode<HeapObject> tmp1363;
    compiler::TNode<IntPtrT> tmp1364;
    ca_.Bind(&block67, &tmp1340, &tmp1341, &tmp1342, &tmp1343, &tmp1344, &tmp1345, &tmp1346, &tmp1347, &tmp1348, &tmp1349, &tmp1350, &tmp1351, &tmp1352, &tmp1353, &tmp1354, &tmp1355, &tmp1356, &tmp1357, &tmp1358, &tmp1359, &tmp1360, &tmp1361, &tmp1362, &tmp1363, &tmp1364);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 254);
    compiler::TNode<Object>tmp1365 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1363, tmp1364});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1356, tmp1357}, tmp1365);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 239);
    ca_.Goto(&block28, tmp1340, tmp1341, tmp1342, tmp1343, tmp1344, tmp1345, tmp1346, tmp1347, tmp1348, tmp1349, tmp1350);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp1366;
    compiler::TNode<JSTypedArray> tmp1367;
    compiler::TNode<JSReceiver> tmp1368;
    compiler::TNode<FixedArray> tmp1369;
    compiler::TNode<Smi> tmp1370;
    compiler::TNode<Smi> tmp1371;
    compiler::TNode<Smi> tmp1372;
    compiler::TNode<FixedArray> tmp1373;
    compiler::TNode<Smi> tmp1374;
    compiler::TNode<Smi> tmp1375;
    compiler::TNode<Smi> tmp1376;
    ca_.Bind(&block28, &tmp1366, &tmp1367, &tmp1368, &tmp1369, &tmp1370, &tmp1371, &tmp1372, &tmp1373, &tmp1374, &tmp1375, &tmp1376);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 235);
    ca_.Goto(&block11, tmp1366, tmp1367, tmp1368, tmp1369, tmp1370, tmp1371, tmp1372, tmp1373, tmp1374, tmp1375, tmp1376);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp1377;
    compiler::TNode<JSTypedArray> tmp1378;
    compiler::TNode<JSReceiver> tmp1379;
    compiler::TNode<FixedArray> tmp1380;
    compiler::TNode<Smi> tmp1381;
    compiler::TNode<Smi> tmp1382;
    compiler::TNode<Smi> tmp1383;
    compiler::TNode<FixedArray> tmp1384;
    compiler::TNode<Smi> tmp1385;
    compiler::TNode<Smi> tmp1386;
    compiler::TNode<Smi> tmp1387;
    ca_.Bind(&block11, &tmp1377, &tmp1378, &tmp1379, &tmp1380, &tmp1381, &tmp1382, &tmp1383, &tmp1384, &tmp1385, &tmp1386, &tmp1387);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 234);
    ca_.Goto(&block5, tmp1377, tmp1378, tmp1379, tmp1380, tmp1381, tmp1382, tmp1383, tmp1384, tmp1385, tmp1386, tmp1387);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp1388;
    compiler::TNode<JSTypedArray> tmp1389;
    compiler::TNode<JSReceiver> tmp1390;
    compiler::TNode<FixedArray> tmp1391;
    compiler::TNode<Smi> tmp1392;
    compiler::TNode<Smi> tmp1393;
    compiler::TNode<Smi> tmp1394;
    compiler::TNode<FixedArray> tmp1395;
    compiler::TNode<Smi> tmp1396;
    compiler::TNode<Smi> tmp1397;
    compiler::TNode<Smi> tmp1398;
    ca_.Bind(&block5, &tmp1388, &tmp1389, &tmp1390, &tmp1391, &tmp1392, &tmp1393, &tmp1394, &tmp1395, &tmp1396, &tmp1397, &tmp1398);
    compiler::TNode<Smi> tmp1399;
    USE(tmp1399);
    tmp1399 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp1400;
    USE(tmp1400);
    tmp1400 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1398}, compiler::TNode<Smi>{tmp1399});
    ca_.Goto(&block4, tmp1388, tmp1389, tmp1390, tmp1391, tmp1392, tmp1393, tmp1394, tmp1395, tmp1396, tmp1397, tmp1400);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp1401;
    compiler::TNode<JSTypedArray> tmp1402;
    compiler::TNode<JSReceiver> tmp1403;
    compiler::TNode<FixedArray> tmp1404;
    compiler::TNode<Smi> tmp1405;
    compiler::TNode<Smi> tmp1406;
    compiler::TNode<Smi> tmp1407;
    compiler::TNode<FixedArray> tmp1408;
    compiler::TNode<Smi> tmp1409;
    compiler::TNode<Smi> tmp1410;
    compiler::TNode<Smi> tmp1411;
    ca_.Bind(&block3, &tmp1401, &tmp1402, &tmp1403, &tmp1404, &tmp1405, &tmp1406, &tmp1407, &tmp1408, &tmp1409, &tmp1410, &tmp1411);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 230);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 227);
    ca_.Goto(&block1, tmp1401, tmp1402, tmp1403, tmp1404, tmp1405, tmp1406, tmp1407, tmp1408);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp1412;
    compiler::TNode<JSTypedArray> tmp1413;
    compiler::TNode<JSReceiver> tmp1414;
    compiler::TNode<FixedArray> tmp1415;
    compiler::TNode<Smi> tmp1416;
    compiler::TNode<Smi> tmp1417;
    compiler::TNode<Smi> tmp1418;
    compiler::TNode<FixedArray> tmp1419;
    ca_.Bind(&block1, &tmp1412, &tmp1413, &tmp1414, &tmp1415, &tmp1416, &tmp1417, &tmp1418, &tmp1419);
    ca_.Goto(&block74, tmp1412, tmp1413, tmp1414, tmp1415, tmp1416, tmp1417, tmp1418, tmp1419);
  }

    compiler::TNode<Context> tmp1420;
    compiler::TNode<JSTypedArray> tmp1421;
    compiler::TNode<JSReceiver> tmp1422;
    compiler::TNode<FixedArray> tmp1423;
    compiler::TNode<Smi> tmp1424;
    compiler::TNode<Smi> tmp1425;
    compiler::TNode<Smi> tmp1426;
    compiler::TNode<FixedArray> tmp1427;
    ca_.Bind(&block74, &tmp1420, &tmp1421, &tmp1422, &tmp1423, &tmp1424, &tmp1425, &tmp1426, &tmp1427);
}

TF_BUILTIN(TypedArrayMergeSort, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(parameter2);
  compiler::TNode<FixedArray> parameter3 = UncheckedCast<FixedArray>(Parameter(Descriptor::kSource));
  USE(parameter3);
  compiler::TNode<Smi> parameter4 = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(parameter4);
  compiler::TNode<Smi> parameter5 = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(parameter5);
  compiler::TNode<FixedArray> parameter6 = UncheckedCast<FixedArray>(Parameter(Descriptor::kTarget));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, FixedArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<FixedArray> tmp3;
    compiler::TNode<Smi> tmp4;
    compiler::TNode<Smi> tmp5;
    compiler::TNode<FixedArray> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 264);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp4});
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiSar(compiler::TNode<Smi>{tmp7}, 1);
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp4}, compiler::TNode<Smi>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 269);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp9}, compiler::TNode<Smi>{tmp4});
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSTypedArray> tmp14;
    compiler::TNode<JSReceiver> tmp15;
    compiler::TNode<FixedArray> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<FixedArray> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    compiler::TNode<Object> tmp21;
    tmp21 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp13, tmp14, tmp15, tmp19, tmp17, tmp20, tmp16);
    USE(tmp21);
    ca_.Goto(&block2, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 270);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp29});
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp30}, compiler::TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block3, &block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSTypedArray> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<FixedArray> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<FixedArray> tmp39;
    compiler::TNode<Smi> tmp40;
    ca_.Bind(&block3, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    compiler::TNode<Object> tmp41;
    tmp41 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp33, tmp34, tmp35, tmp39, tmp40, tmp38, tmp36);
    USE(tmp41);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<FixedArray> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<FixedArray> tmp48;
    compiler::TNode<Smi> tmp49;
    ca_.Bind(&block4, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 272);
    TypedArrayMerge_384(state_, compiler::TNode<Context>{tmp42}, compiler::TNode<JSTypedArray>{tmp43}, compiler::TNode<JSReceiver>{tmp44}, compiler::TNode<FixedArray>{tmp45}, compiler::TNode<Smi>{tmp46}, compiler::TNode<Smi>{tmp49}, compiler::TNode<Smi>{tmp47}, compiler::TNode<FixedArray>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 274);
    compiler::TNode<Oddball> tmp50;
    USE(tmp50);
    tmp50 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp50);
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Number, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, Object, JSReceiver> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi, Context, JSTypedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 283);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<IntPtrT> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<RawPtrT>{tmp8}, compiler::TNode<IntPtrT>{tmp9}}, compiler::TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 284);
    compiler::TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<Object>{tmp31}, compiler::TNode<HeapObject>{tmp32});
    ca_.Branch(tmp33, &block7, &block8, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<BoolT> tmp40;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).TaggedIsCallable(compiler::TNode<Object>{tmp39});
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp41});
    ca_.Goto(&block9, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<BoolT> tmp49;
    ca_.Bind(&block8, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp51;
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    compiler::TNode<Context> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<BoolT> tmp57;
    compiler::TNode<BoolT> tmp58;
    ca_.Bind(&block9, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Branch(tmp58, &block5, &block6, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<Context> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    ca_.Bind(&block5, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 285);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp62}, MessageTemplate::kBadSortComparisonFunction, compiler::TNode<Object>{tmp64});
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<RawPtrT> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    ca_.Bind(&block6, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 289);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 294);
    compiler::TNode<JSTypedArray> tmp71;
    USE(tmp71);
    tmp71 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp68}, compiler::TNode<Object>{tmp69}, "%TypedArray%.prototype.sort");
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 293);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 297);
    compiler::TNode<Oddball> tmp72;
    USE(tmp72);
    tmp72 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<Object>{tmp70}, compiler::TNode<HeapObject>{tmp72});
    ca_.Branch(tmp73, &block10, &block11, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp69, tmp71);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSTypedArray> tmp81;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 298);
    compiler::TNode<JSTypedArray> tmp82;
    tmp82 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArraySortFast, tmp77, tmp80)); 
    USE(tmp82);
    arguments.PopAndReturn(tmp82);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<Context> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSTypedArray> tmp90;
    ca_.Bind(&block11, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 303);
    compiler::TNode<IntPtrT> tmp91 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp91);
    compiler::TNode<UintPtrT>tmp92 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp90, tmp91});
    compiler::TNode<Number> tmp93;
    USE(tmp93);
    tmp93 = Convert20UT5ATSmi10HeapNumber9ATuintptr_201(state_, compiler::TNode<UintPtrT>{tmp92});
    compiler::TNode<Smi> tmp94;
    USE(tmp94);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp94 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp93}, &label0);
    ca_.Goto(&block14, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp93, tmp94);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp93);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<RawPtrT> tmp95;
    compiler::TNode<RawPtrT> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSTypedArray> tmp102;
    compiler::TNode<Number> tmp103;
    ca_.Bind(&block15, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.Goto(&block13, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp104;
    compiler::TNode<RawPtrT> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<Context> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<JSTypedArray> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<Smi> tmp113;
    ca_.Bind(&block14, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.Goto(&block12, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp113);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp114;
    compiler::TNode<RawPtrT> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    compiler::TNode<Context> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<JSTypedArray> tmp121;
    ca_.Bind(&block13, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp122;
    compiler::TNode<RawPtrT> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<Context> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSTypedArray> tmp129;
    compiler::TNode<Smi> tmp130;
    ca_.Bind(&block12, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 306);
    compiler::TNode<Smi> tmp131;
    USE(tmp131);
    tmp131 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 2);
    compiler::TNode<BoolT> tmp132;
    USE(tmp132);
    tmp132 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp130}, compiler::TNode<Smi>{tmp131});
    ca_.Branch(tmp132, &block16, &block17, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130);
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp133;
    compiler::TNode<RawPtrT> tmp134;
    compiler::TNode<IntPtrT> tmp135;
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<JSTypedArray> tmp140;
    compiler::TNode<Smi> tmp141;
    ca_.Bind(&block16, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    arguments.PopAndReturn(tmp140);
  }

  if (block17.is_used()) {
    compiler::TNode<RawPtrT> tmp142;
    compiler::TNode<RawPtrT> tmp143;
    compiler::TNode<IntPtrT> tmp144;
    compiler::TNode<Context> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<JSTypedArray> tmp149;
    compiler::TNode<Smi> tmp150;
    ca_.Bind(&block17, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 309);
    compiler::TNode<JSReceiver> tmp151;
    USE(tmp151);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp151 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp145}, compiler::TNode<Object>{tmp147}, &label0);
    ca_.Goto(&block20, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp147, tmp151);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp147);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<RawPtrT> tmp152;
    compiler::TNode<RawPtrT> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<Context> tmp155;
    compiler::TNode<Object> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<JSTypedArray> tmp159;
    compiler::TNode<Smi> tmp160;
    compiler::TNode<Object> tmp161;
    ca_.Bind(&block21, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.Goto(&block19, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160);
  }

  if (block20.is_used()) {
    compiler::TNode<RawPtrT> tmp162;
    compiler::TNode<RawPtrT> tmp163;
    compiler::TNode<IntPtrT> tmp164;
    compiler::TNode<Context> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<JSTypedArray> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    ca_.Bind(&block20, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172);
    ca_.Goto(&block18, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp172);
  }

  if (block19.is_used()) {
    compiler::TNode<RawPtrT> tmp173;
    compiler::TNode<RawPtrT> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<Context> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<JSTypedArray> tmp180;
    compiler::TNode<Smi> tmp181;
    ca_.Bind(&block19, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block18.is_used()) {
    compiler::TNode<RawPtrT> tmp182;
    compiler::TNode<RawPtrT> tmp183;
    compiler::TNode<IntPtrT> tmp184;
    compiler::TNode<Context> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<JSTypedArray> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<JSReceiver> tmp191;
    ca_.Bind(&block18, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 308);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 310);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 311);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 313);
    compiler::TNode<Int32T> tmp192;
    USE(tmp192);
    tmp192 = CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp189});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 315);
    compiler::TNode<BoolT> tmp193;
    USE(tmp193);
    tmp193 = CodeStubAssembler(state_).IsElementsKindGreaterThan(compiler::TNode<Int32T>{tmp192}, UINT32_ELEMENTS);
    ca_.Branch(tmp193, &block22, &block23, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, ca_.Uninitialized<BuiltinPtr>(), ca_.Uninitialized<BuiltinPtr>(), tmp192);
  }

  if (block22.is_used()) {
    compiler::TNode<RawPtrT> tmp194;
    compiler::TNode<RawPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<Context> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<JSTypedArray> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<JSReceiver> tmp203;
    compiler::TNode<BuiltinPtr> tmp204;
    compiler::TNode<BuiltinPtr> tmp205;
    compiler::TNode<Int32T> tmp206;
    ca_.Bind(&block22, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 316);
    compiler::TNode<Int32T> tmp207;
    USE(tmp207);
    tmp207 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, INT32_ELEMENTS);
    compiler::TNode<BoolT> tmp208;
    USE(tmp208);
    tmp208 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp206}, compiler::TNode<Int32T>{tmp207});
    ca_.Branch(tmp208, &block25, &block26, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206);
  }

  if (block25.is_used()) {
    compiler::TNode<RawPtrT> tmp209;
    compiler::TNode<RawPtrT> tmp210;
    compiler::TNode<IntPtrT> tmp211;
    compiler::TNode<Context> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<JSTypedArray> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<JSReceiver> tmp218;
    compiler::TNode<BuiltinPtr> tmp219;
    compiler::TNode<BuiltinPtr> tmp220;
    compiler::TNode<Int32T> tmp221;
    ca_.Bind(&block25, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 317);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 318);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 316);
    ca_.Goto(&block27, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATInt32Elements)), tmp221);
  }

  if (block26.is_used()) {
    compiler::TNode<RawPtrT> tmp222;
    compiler::TNode<RawPtrT> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<Context> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<JSTypedArray> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<JSReceiver> tmp231;
    compiler::TNode<BuiltinPtr> tmp232;
    compiler::TNode<BuiltinPtr> tmp233;
    compiler::TNode<Int32T> tmp234;
    ca_.Bind(&block26, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 319);
    compiler::TNode<Int32T> tmp235;
    USE(tmp235);
    tmp235 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, FLOAT32_ELEMENTS);
    compiler::TNode<BoolT> tmp236;
    USE(tmp236);
    tmp236 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp234}, compiler::TNode<Int32T>{tmp235});
    ca_.Branch(tmp236, &block28, &block29, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block28.is_used()) {
    compiler::TNode<RawPtrT> tmp237;
    compiler::TNode<RawPtrT> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    compiler::TNode<Context> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<JSTypedArray> tmp244;
    compiler::TNode<Smi> tmp245;
    compiler::TNode<JSReceiver> tmp246;
    compiler::TNode<BuiltinPtr> tmp247;
    compiler::TNode<BuiltinPtr> tmp248;
    compiler::TNode<Int32T> tmp249;
    ca_.Bind(&block28, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 320);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 321);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 319);
    ca_.Goto(&block30, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement17ATFloat32Elements)), tmp249);
  }

  if (block29.is_used()) {
    compiler::TNode<RawPtrT> tmp250;
    compiler::TNode<RawPtrT> tmp251;
    compiler::TNode<IntPtrT> tmp252;
    compiler::TNode<Context> tmp253;
    compiler::TNode<Object> tmp254;
    compiler::TNode<Object> tmp255;
    compiler::TNode<Object> tmp256;
    compiler::TNode<JSTypedArray> tmp257;
    compiler::TNode<Smi> tmp258;
    compiler::TNode<JSReceiver> tmp259;
    compiler::TNode<BuiltinPtr> tmp260;
    compiler::TNode<BuiltinPtr> tmp261;
    compiler::TNode<Int32T> tmp262;
    ca_.Bind(&block29, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 322);
    compiler::TNode<Int32T> tmp263;
    USE(tmp263);
    tmp263 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, FLOAT64_ELEMENTS);
    compiler::TNode<BoolT> tmp264;
    USE(tmp264);
    tmp264 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp262}, compiler::TNode<Int32T>{tmp263});
    ca_.Branch(tmp264, &block31, &block32, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262);
  }

  if (block31.is_used()) {
    compiler::TNode<RawPtrT> tmp265;
    compiler::TNode<RawPtrT> tmp266;
    compiler::TNode<IntPtrT> tmp267;
    compiler::TNode<Context> tmp268;
    compiler::TNode<Object> tmp269;
    compiler::TNode<Object> tmp270;
    compiler::TNode<Object> tmp271;
    compiler::TNode<JSTypedArray> tmp272;
    compiler::TNode<Smi> tmp273;
    compiler::TNode<JSReceiver> tmp274;
    compiler::TNode<BuiltinPtr> tmp275;
    compiler::TNode<BuiltinPtr> tmp276;
    compiler::TNode<Int32T> tmp277;
    ca_.Bind(&block31, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 323);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 324);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 322);
    ca_.Goto(&block33, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement17ATFloat64Elements)), tmp277);
  }

  if (block32.is_used()) {
    compiler::TNode<RawPtrT> tmp278;
    compiler::TNode<RawPtrT> tmp279;
    compiler::TNode<IntPtrT> tmp280;
    compiler::TNode<Context> tmp281;
    compiler::TNode<Object> tmp282;
    compiler::TNode<Object> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<JSTypedArray> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<JSReceiver> tmp287;
    compiler::TNode<BuiltinPtr> tmp288;
    compiler::TNode<BuiltinPtr> tmp289;
    compiler::TNode<Int32T> tmp290;
    ca_.Bind(&block32, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 325);
    compiler::TNode<Int32T> tmp291;
    USE(tmp291);
    tmp291 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT8_CLAMPED_ELEMENTS);
    compiler::TNode<BoolT> tmp292;
    USE(tmp292);
    tmp292 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp290}, compiler::TNode<Int32T>{tmp291});
    ca_.Branch(tmp292, &block34, &block35, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290);
  }

  if (block34.is_used()) {
    compiler::TNode<RawPtrT> tmp293;
    compiler::TNode<RawPtrT> tmp294;
    compiler::TNode<IntPtrT> tmp295;
    compiler::TNode<Context> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<Object> tmp298;
    compiler::TNode<Object> tmp299;
    compiler::TNode<JSTypedArray> tmp300;
    compiler::TNode<Smi> tmp301;
    compiler::TNode<JSReceiver> tmp302;
    compiler::TNode<BuiltinPtr> tmp303;
    compiler::TNode<BuiltinPtr> tmp304;
    compiler::TNode<Int32T> tmp305;
    ca_.Bind(&block34, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 326);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 325);
    ca_.Goto(&block36, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement22ATUint8ClampedElements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement22ATUint8ClampedElements)), tmp305);
  }

  if (block35.is_used()) {
    compiler::TNode<RawPtrT> tmp306;
    compiler::TNode<RawPtrT> tmp307;
    compiler::TNode<IntPtrT> tmp308;
    compiler::TNode<Context> tmp309;
    compiler::TNode<Object> tmp310;
    compiler::TNode<Object> tmp311;
    compiler::TNode<Object> tmp312;
    compiler::TNode<JSTypedArray> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<JSReceiver> tmp315;
    compiler::TNode<BuiltinPtr> tmp316;
    compiler::TNode<BuiltinPtr> tmp317;
    compiler::TNode<Int32T> tmp318;
    ca_.Bind(&block35, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    compiler::TNode<Int32T> tmp319;
    USE(tmp319);
    tmp319 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, BIGUINT64_ELEMENTS);
    compiler::TNode<BoolT> tmp320;
    USE(tmp320);
    tmp320 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp318}, compiler::TNode<Int32T>{tmp319});
    ca_.Branch(tmp320, &block37, &block38, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318);
  }

  if (block37.is_used()) {
    compiler::TNode<RawPtrT> tmp321;
    compiler::TNode<RawPtrT> tmp322;
    compiler::TNode<IntPtrT> tmp323;
    compiler::TNode<Context> tmp324;
    compiler::TNode<Object> tmp325;
    compiler::TNode<Object> tmp326;
    compiler::TNode<Object> tmp327;
    compiler::TNode<JSTypedArray> tmp328;
    compiler::TNode<Smi> tmp329;
    compiler::TNode<JSReceiver> tmp330;
    compiler::TNode<BuiltinPtr> tmp331;
    compiler::TNode<BuiltinPtr> tmp332;
    compiler::TNode<Int32T> tmp333;
    ca_.Bind(&block37, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 329);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 330);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    ca_.Goto(&block39, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement19ATBigUint64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement19ATBigUint64Elements)), tmp333);
  }

  if (block38.is_used()) {
    compiler::TNode<RawPtrT> tmp334;
    compiler::TNode<RawPtrT> tmp335;
    compiler::TNode<IntPtrT> tmp336;
    compiler::TNode<Context> tmp337;
    compiler::TNode<Object> tmp338;
    compiler::TNode<Object> tmp339;
    compiler::TNode<Object> tmp340;
    compiler::TNode<JSTypedArray> tmp341;
    compiler::TNode<Smi> tmp342;
    compiler::TNode<JSReceiver> tmp343;
    compiler::TNode<BuiltinPtr> tmp344;
    compiler::TNode<BuiltinPtr> tmp345;
    compiler::TNode<Int32T> tmp346;
    ca_.Bind(&block38, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 331);
    compiler::TNode<Int32T> tmp347;
    USE(tmp347);
    tmp347 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, BIGINT64_ELEMENTS);
    compiler::TNode<BoolT> tmp348;
    USE(tmp348);
    tmp348 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp346}, compiler::TNode<Int32T>{tmp347});
    ca_.Branch(tmp348, &block40, &block41, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346);
  }

  if (block40.is_used()) {
    compiler::TNode<RawPtrT> tmp349;
    compiler::TNode<RawPtrT> tmp350;
    compiler::TNode<IntPtrT> tmp351;
    compiler::TNode<Context> tmp352;
    compiler::TNode<Object> tmp353;
    compiler::TNode<Object> tmp354;
    compiler::TNode<Object> tmp355;
    compiler::TNode<JSTypedArray> tmp356;
    compiler::TNode<Smi> tmp357;
    compiler::TNode<JSReceiver> tmp358;
    compiler::TNode<BuiltinPtr> tmp359;
    compiler::TNode<BuiltinPtr> tmp360;
    compiler::TNode<Int32T> tmp361;
    ca_.Bind(&block40, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 332);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 333);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 331);
    ca_.Goto(&block42, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement18ATBigInt64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement18ATBigInt64Elements)), tmp361);
  }

  if (block41.is_used()) {
    compiler::TNode<RawPtrT> tmp362;
    compiler::TNode<RawPtrT> tmp363;
    compiler::TNode<IntPtrT> tmp364;
    compiler::TNode<Context> tmp365;
    compiler::TNode<Object> tmp366;
    compiler::TNode<Object> tmp367;
    compiler::TNode<Object> tmp368;
    compiler::TNode<JSTypedArray> tmp369;
    compiler::TNode<Smi> tmp370;
    compiler::TNode<JSReceiver> tmp371;
    compiler::TNode<BuiltinPtr> tmp372;
    compiler::TNode<BuiltinPtr> tmp373;
    compiler::TNode<Int32T> tmp374;
    ca_.Bind(&block41, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 335);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block42.is_used()) {
    compiler::TNode<RawPtrT> tmp375;
    compiler::TNode<RawPtrT> tmp376;
    compiler::TNode<IntPtrT> tmp377;
    compiler::TNode<Context> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<Object> tmp380;
    compiler::TNode<Object> tmp381;
    compiler::TNode<JSTypedArray> tmp382;
    compiler::TNode<Smi> tmp383;
    compiler::TNode<JSReceiver> tmp384;
    compiler::TNode<BuiltinPtr> tmp385;
    compiler::TNode<BuiltinPtr> tmp386;
    compiler::TNode<Int32T> tmp387;
    ca_.Bind(&block42, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    ca_.Goto(&block39, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387);
  }

  if (block39.is_used()) {
    compiler::TNode<RawPtrT> tmp388;
    compiler::TNode<RawPtrT> tmp389;
    compiler::TNode<IntPtrT> tmp390;
    compiler::TNode<Context> tmp391;
    compiler::TNode<Object> tmp392;
    compiler::TNode<Object> tmp393;
    compiler::TNode<Object> tmp394;
    compiler::TNode<JSTypedArray> tmp395;
    compiler::TNode<Smi> tmp396;
    compiler::TNode<JSReceiver> tmp397;
    compiler::TNode<BuiltinPtr> tmp398;
    compiler::TNode<BuiltinPtr> tmp399;
    compiler::TNode<Int32T> tmp400;
    ca_.Bind(&block39, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 325);
    ca_.Goto(&block36, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400);
  }

  if (block36.is_used()) {
    compiler::TNode<RawPtrT> tmp401;
    compiler::TNode<RawPtrT> tmp402;
    compiler::TNode<IntPtrT> tmp403;
    compiler::TNode<Context> tmp404;
    compiler::TNode<Object> tmp405;
    compiler::TNode<Object> tmp406;
    compiler::TNode<Object> tmp407;
    compiler::TNode<JSTypedArray> tmp408;
    compiler::TNode<Smi> tmp409;
    compiler::TNode<JSReceiver> tmp410;
    compiler::TNode<BuiltinPtr> tmp411;
    compiler::TNode<BuiltinPtr> tmp412;
    compiler::TNode<Int32T> tmp413;
    ca_.Bind(&block36, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 322);
    ca_.Goto(&block33, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413);
  }

  if (block33.is_used()) {
    compiler::TNode<RawPtrT> tmp414;
    compiler::TNode<RawPtrT> tmp415;
    compiler::TNode<IntPtrT> tmp416;
    compiler::TNode<Context> tmp417;
    compiler::TNode<Object> tmp418;
    compiler::TNode<Object> tmp419;
    compiler::TNode<Object> tmp420;
    compiler::TNode<JSTypedArray> tmp421;
    compiler::TNode<Smi> tmp422;
    compiler::TNode<JSReceiver> tmp423;
    compiler::TNode<BuiltinPtr> tmp424;
    compiler::TNode<BuiltinPtr> tmp425;
    compiler::TNode<Int32T> tmp426;
    ca_.Bind(&block33, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 319);
    ca_.Goto(&block30, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426);
  }

  if (block30.is_used()) {
    compiler::TNode<RawPtrT> tmp427;
    compiler::TNode<RawPtrT> tmp428;
    compiler::TNode<IntPtrT> tmp429;
    compiler::TNode<Context> tmp430;
    compiler::TNode<Object> tmp431;
    compiler::TNode<Object> tmp432;
    compiler::TNode<Object> tmp433;
    compiler::TNode<JSTypedArray> tmp434;
    compiler::TNode<Smi> tmp435;
    compiler::TNode<JSReceiver> tmp436;
    compiler::TNode<BuiltinPtr> tmp437;
    compiler::TNode<BuiltinPtr> tmp438;
    compiler::TNode<Int32T> tmp439;
    ca_.Bind(&block30, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 316);
    ca_.Goto(&block27, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439);
  }

  if (block27.is_used()) {
    compiler::TNode<RawPtrT> tmp440;
    compiler::TNode<RawPtrT> tmp441;
    compiler::TNode<IntPtrT> tmp442;
    compiler::TNode<Context> tmp443;
    compiler::TNode<Object> tmp444;
    compiler::TNode<Object> tmp445;
    compiler::TNode<Object> tmp446;
    compiler::TNode<JSTypedArray> tmp447;
    compiler::TNode<Smi> tmp448;
    compiler::TNode<JSReceiver> tmp449;
    compiler::TNode<BuiltinPtr> tmp450;
    compiler::TNode<BuiltinPtr> tmp451;
    compiler::TNode<Int32T> tmp452;
    ca_.Bind(&block27, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 315);
    ca_.Goto(&block24, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452);
  }

  if (block23.is_used()) {
    compiler::TNode<RawPtrT> tmp453;
    compiler::TNode<RawPtrT> tmp454;
    compiler::TNode<IntPtrT> tmp455;
    compiler::TNode<Context> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<Object> tmp458;
    compiler::TNode<Object> tmp459;
    compiler::TNode<JSTypedArray> tmp460;
    compiler::TNode<Smi> tmp461;
    compiler::TNode<JSReceiver> tmp462;
    compiler::TNode<BuiltinPtr> tmp463;
    compiler::TNode<BuiltinPtr> tmp464;
    compiler::TNode<Int32T> tmp465;
    ca_.Bind(&block23, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 338);
    compiler::TNode<Int32T> tmp466;
    USE(tmp466);
    tmp466 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT8_ELEMENTS);
    compiler::TNode<BoolT> tmp467;
    USE(tmp467);
    tmp467 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp465}, compiler::TNode<Int32T>{tmp466});
    ca_.Branch(tmp467, &block43, &block44, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465);
  }

  if (block43.is_used()) {
    compiler::TNode<RawPtrT> tmp468;
    compiler::TNode<RawPtrT> tmp469;
    compiler::TNode<IntPtrT> tmp470;
    compiler::TNode<Context> tmp471;
    compiler::TNode<Object> tmp472;
    compiler::TNode<Object> tmp473;
    compiler::TNode<Object> tmp474;
    compiler::TNode<JSTypedArray> tmp475;
    compiler::TNode<Smi> tmp476;
    compiler::TNode<JSReceiver> tmp477;
    compiler::TNode<BuiltinPtr> tmp478;
    compiler::TNode<BuiltinPtr> tmp479;
    compiler::TNode<Int32T> tmp480;
    ca_.Bind(&block43, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 339);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 340);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 338);
    ca_.Goto(&block45, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATUint8Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATUint8Elements)), tmp480);
  }

  if (block44.is_used()) {
    compiler::TNode<RawPtrT> tmp481;
    compiler::TNode<RawPtrT> tmp482;
    compiler::TNode<IntPtrT> tmp483;
    compiler::TNode<Context> tmp484;
    compiler::TNode<Object> tmp485;
    compiler::TNode<Object> tmp486;
    compiler::TNode<Object> tmp487;
    compiler::TNode<JSTypedArray> tmp488;
    compiler::TNode<Smi> tmp489;
    compiler::TNode<JSReceiver> tmp490;
    compiler::TNode<BuiltinPtr> tmp491;
    compiler::TNode<BuiltinPtr> tmp492;
    compiler::TNode<Int32T> tmp493;
    ca_.Bind(&block44, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 341);
    compiler::TNode<Int32T> tmp494;
    USE(tmp494);
    tmp494 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, INT8_ELEMENTS);
    compiler::TNode<BoolT> tmp495;
    USE(tmp495);
    tmp495 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp493}, compiler::TNode<Int32T>{tmp494});
    ca_.Branch(tmp495, &block46, &block47, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493);
  }

  if (block46.is_used()) {
    compiler::TNode<RawPtrT> tmp496;
    compiler::TNode<RawPtrT> tmp497;
    compiler::TNode<IntPtrT> tmp498;
    compiler::TNode<Context> tmp499;
    compiler::TNode<Object> tmp500;
    compiler::TNode<Object> tmp501;
    compiler::TNode<Object> tmp502;
    compiler::TNode<JSTypedArray> tmp503;
    compiler::TNode<Smi> tmp504;
    compiler::TNode<JSReceiver> tmp505;
    compiler::TNode<BuiltinPtr> tmp506;
    compiler::TNode<BuiltinPtr> tmp507;
    compiler::TNode<Int32T> tmp508;
    ca_.Bind(&block46, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 342);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 343);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 341);
    ca_.Goto(&block48, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement14ATInt8Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement14ATInt8Elements)), tmp508);
  }

  if (block47.is_used()) {
    compiler::TNode<RawPtrT> tmp509;
    compiler::TNode<RawPtrT> tmp510;
    compiler::TNode<IntPtrT> tmp511;
    compiler::TNode<Context> tmp512;
    compiler::TNode<Object> tmp513;
    compiler::TNode<Object> tmp514;
    compiler::TNode<Object> tmp515;
    compiler::TNode<JSTypedArray> tmp516;
    compiler::TNode<Smi> tmp517;
    compiler::TNode<JSReceiver> tmp518;
    compiler::TNode<BuiltinPtr> tmp519;
    compiler::TNode<BuiltinPtr> tmp520;
    compiler::TNode<Int32T> tmp521;
    ca_.Bind(&block47, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 344);
    compiler::TNode<Int32T> tmp522;
    USE(tmp522);
    tmp522 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT16_ELEMENTS);
    compiler::TNode<BoolT> tmp523;
    USE(tmp523);
    tmp523 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp521}, compiler::TNode<Int32T>{tmp522});
    ca_.Branch(tmp523, &block49, &block50, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521);
  }

  if (block49.is_used()) {
    compiler::TNode<RawPtrT> tmp524;
    compiler::TNode<RawPtrT> tmp525;
    compiler::TNode<IntPtrT> tmp526;
    compiler::TNode<Context> tmp527;
    compiler::TNode<Object> tmp528;
    compiler::TNode<Object> tmp529;
    compiler::TNode<Object> tmp530;
    compiler::TNode<JSTypedArray> tmp531;
    compiler::TNode<Smi> tmp532;
    compiler::TNode<JSReceiver> tmp533;
    compiler::TNode<BuiltinPtr> tmp534;
    compiler::TNode<BuiltinPtr> tmp535;
    compiler::TNode<Int32T> tmp536;
    ca_.Bind(&block49, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 345);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 346);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 344);
    ca_.Goto(&block51, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint16Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement16ATUint16Elements)), tmp536);
  }

  if (block50.is_used()) {
    compiler::TNode<RawPtrT> tmp537;
    compiler::TNode<RawPtrT> tmp538;
    compiler::TNode<IntPtrT> tmp539;
    compiler::TNode<Context> tmp540;
    compiler::TNode<Object> tmp541;
    compiler::TNode<Object> tmp542;
    compiler::TNode<Object> tmp543;
    compiler::TNode<JSTypedArray> tmp544;
    compiler::TNode<Smi> tmp545;
    compiler::TNode<JSReceiver> tmp546;
    compiler::TNode<BuiltinPtr> tmp547;
    compiler::TNode<BuiltinPtr> tmp548;
    compiler::TNode<Int32T> tmp549;
    ca_.Bind(&block50, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 347);
    compiler::TNode<Int32T> tmp550;
    USE(tmp550);
    tmp550 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, INT16_ELEMENTS);
    compiler::TNode<BoolT> tmp551;
    USE(tmp551);
    tmp551 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp549}, compiler::TNode<Int32T>{tmp550});
    ca_.Branch(tmp551, &block52, &block53, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp548, tmp549);
  }

  if (block52.is_used()) {
    compiler::TNode<RawPtrT> tmp552;
    compiler::TNode<RawPtrT> tmp553;
    compiler::TNode<IntPtrT> tmp554;
    compiler::TNode<Context> tmp555;
    compiler::TNode<Object> tmp556;
    compiler::TNode<Object> tmp557;
    compiler::TNode<Object> tmp558;
    compiler::TNode<JSTypedArray> tmp559;
    compiler::TNode<Smi> tmp560;
    compiler::TNode<JSReceiver> tmp561;
    compiler::TNode<BuiltinPtr> tmp562;
    compiler::TNode<BuiltinPtr> tmp563;
    compiler::TNode<Int32T> tmp564;
    ca_.Bind(&block52, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 348);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 349);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 347);
    ca_.Goto(&block54, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt16Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATInt16Elements)), tmp564);
  }

  if (block53.is_used()) {
    compiler::TNode<RawPtrT> tmp565;
    compiler::TNode<RawPtrT> tmp566;
    compiler::TNode<IntPtrT> tmp567;
    compiler::TNode<Context> tmp568;
    compiler::TNode<Object> tmp569;
    compiler::TNode<Object> tmp570;
    compiler::TNode<Object> tmp571;
    compiler::TNode<JSTypedArray> tmp572;
    compiler::TNode<Smi> tmp573;
    compiler::TNode<JSReceiver> tmp574;
    compiler::TNode<BuiltinPtr> tmp575;
    compiler::TNode<BuiltinPtr> tmp576;
    compiler::TNode<Int32T> tmp577;
    ca_.Bind(&block53, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 350);
    compiler::TNode<Int32T> tmp578;
    USE(tmp578);
    tmp578 = FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_167(state_, UINT32_ELEMENTS);
    compiler::TNode<BoolT> tmp579;
    USE(tmp579);
    tmp579 = CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp577}, compiler::TNode<Int32T>{tmp578});
    ca_.Branch(tmp579, &block55, &block56, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577);
  }

  if (block55.is_used()) {
    compiler::TNode<RawPtrT> tmp580;
    compiler::TNode<RawPtrT> tmp581;
    compiler::TNode<IntPtrT> tmp582;
    compiler::TNode<Context> tmp583;
    compiler::TNode<Object> tmp584;
    compiler::TNode<Object> tmp585;
    compiler::TNode<Object> tmp586;
    compiler::TNode<JSTypedArray> tmp587;
    compiler::TNode<Smi> tmp588;
    compiler::TNode<JSReceiver> tmp589;
    compiler::TNode<BuiltinPtr> tmp590;
    compiler::TNode<BuiltinPtr> tmp591;
    compiler::TNode<Int32T> tmp592;
    ca_.Bind(&block55, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 351);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 352);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 350);
    ca_.Goto(&block57, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588, tmp589, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement16ATUint32Elements)), tmp592);
  }

  if (block56.is_used()) {
    compiler::TNode<RawPtrT> tmp593;
    compiler::TNode<RawPtrT> tmp594;
    compiler::TNode<IntPtrT> tmp595;
    compiler::TNode<Context> tmp596;
    compiler::TNode<Object> tmp597;
    compiler::TNode<Object> tmp598;
    compiler::TNode<Object> tmp599;
    compiler::TNode<JSTypedArray> tmp600;
    compiler::TNode<Smi> tmp601;
    compiler::TNode<JSReceiver> tmp602;
    compiler::TNode<BuiltinPtr> tmp603;
    compiler::TNode<BuiltinPtr> tmp604;
    compiler::TNode<Int32T> tmp605;
    ca_.Bind(&block56, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 354);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block57.is_used()) {
    compiler::TNode<RawPtrT> tmp606;
    compiler::TNode<RawPtrT> tmp607;
    compiler::TNode<IntPtrT> tmp608;
    compiler::TNode<Context> tmp609;
    compiler::TNode<Object> tmp610;
    compiler::TNode<Object> tmp611;
    compiler::TNode<Object> tmp612;
    compiler::TNode<JSTypedArray> tmp613;
    compiler::TNode<Smi> tmp614;
    compiler::TNode<JSReceiver> tmp615;
    compiler::TNode<BuiltinPtr> tmp616;
    compiler::TNode<BuiltinPtr> tmp617;
    compiler::TNode<Int32T> tmp618;
    ca_.Bind(&block57, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 347);
    ca_.Goto(&block54, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618);
  }

  if (block54.is_used()) {
    compiler::TNode<RawPtrT> tmp619;
    compiler::TNode<RawPtrT> tmp620;
    compiler::TNode<IntPtrT> tmp621;
    compiler::TNode<Context> tmp622;
    compiler::TNode<Object> tmp623;
    compiler::TNode<Object> tmp624;
    compiler::TNode<Object> tmp625;
    compiler::TNode<JSTypedArray> tmp626;
    compiler::TNode<Smi> tmp627;
    compiler::TNode<JSReceiver> tmp628;
    compiler::TNode<BuiltinPtr> tmp629;
    compiler::TNode<BuiltinPtr> tmp630;
    compiler::TNode<Int32T> tmp631;
    ca_.Bind(&block54, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 344);
    ca_.Goto(&block51, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631);
  }

  if (block51.is_used()) {
    compiler::TNode<RawPtrT> tmp632;
    compiler::TNode<RawPtrT> tmp633;
    compiler::TNode<IntPtrT> tmp634;
    compiler::TNode<Context> tmp635;
    compiler::TNode<Object> tmp636;
    compiler::TNode<Object> tmp637;
    compiler::TNode<Object> tmp638;
    compiler::TNode<JSTypedArray> tmp639;
    compiler::TNode<Smi> tmp640;
    compiler::TNode<JSReceiver> tmp641;
    compiler::TNode<BuiltinPtr> tmp642;
    compiler::TNode<BuiltinPtr> tmp643;
    compiler::TNode<Int32T> tmp644;
    ca_.Bind(&block51, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 341);
    ca_.Goto(&block48, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644);
  }

  if (block48.is_used()) {
    compiler::TNode<RawPtrT> tmp645;
    compiler::TNode<RawPtrT> tmp646;
    compiler::TNode<IntPtrT> tmp647;
    compiler::TNode<Context> tmp648;
    compiler::TNode<Object> tmp649;
    compiler::TNode<Object> tmp650;
    compiler::TNode<Object> tmp651;
    compiler::TNode<JSTypedArray> tmp652;
    compiler::TNode<Smi> tmp653;
    compiler::TNode<JSReceiver> tmp654;
    compiler::TNode<BuiltinPtr> tmp655;
    compiler::TNode<BuiltinPtr> tmp656;
    compiler::TNode<Int32T> tmp657;
    ca_.Bind(&block48, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 338);
    ca_.Goto(&block45, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657);
  }

  if (block45.is_used()) {
    compiler::TNode<RawPtrT> tmp658;
    compiler::TNode<RawPtrT> tmp659;
    compiler::TNode<IntPtrT> tmp660;
    compiler::TNode<Context> tmp661;
    compiler::TNode<Object> tmp662;
    compiler::TNode<Object> tmp663;
    compiler::TNode<Object> tmp664;
    compiler::TNode<JSTypedArray> tmp665;
    compiler::TNode<Smi> tmp666;
    compiler::TNode<JSReceiver> tmp667;
    compiler::TNode<BuiltinPtr> tmp668;
    compiler::TNode<BuiltinPtr> tmp669;
    compiler::TNode<Int32T> tmp670;
    ca_.Bind(&block45, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 315);
    ca_.Goto(&block24, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670);
  }

  if (block24.is_used()) {
    compiler::TNode<RawPtrT> tmp671;
    compiler::TNode<RawPtrT> tmp672;
    compiler::TNode<IntPtrT> tmp673;
    compiler::TNode<Context> tmp674;
    compiler::TNode<Object> tmp675;
    compiler::TNode<Object> tmp676;
    compiler::TNode<Object> tmp677;
    compiler::TNode<JSTypedArray> tmp678;
    compiler::TNode<Smi> tmp679;
    compiler::TNode<JSReceiver> tmp680;
    compiler::TNode<BuiltinPtr> tmp681;
    compiler::TNode<BuiltinPtr> tmp682;
    compiler::TNode<Int32T> tmp683;
    ca_.Bind(&block24, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 361);
    compiler::TNode<IntPtrT> tmp684;
    USE(tmp684);
    tmp684 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp679});
    compiler::TNode<FixedArray> tmp685;
    USE(tmp685);
    tmp685 = CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp684});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 362);
    compiler::TNode<IntPtrT> tmp686;
    USE(tmp686);
    tmp686 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp679});
    compiler::TNode<FixedArray> tmp687;
    USE(tmp687);
    tmp687 = CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp686});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 364);
    compiler::TNode<Smi> tmp688;
    USE(tmp688);
    tmp688 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block60, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp685, tmp687, tmp688);
  }

  if (block60.is_used()) {
    compiler::TNode<RawPtrT> tmp689;
    compiler::TNode<RawPtrT> tmp690;
    compiler::TNode<IntPtrT> tmp691;
    compiler::TNode<Context> tmp692;
    compiler::TNode<Object> tmp693;
    compiler::TNode<Object> tmp694;
    compiler::TNode<Object> tmp695;
    compiler::TNode<JSTypedArray> tmp696;
    compiler::TNode<Smi> tmp697;
    compiler::TNode<JSReceiver> tmp698;
    compiler::TNode<BuiltinPtr> tmp699;
    compiler::TNode<BuiltinPtr> tmp700;
    compiler::TNode<Int32T> tmp701;
    compiler::TNode<FixedArray> tmp702;
    compiler::TNode<FixedArray> tmp703;
    compiler::TNode<Smi> tmp704;
    ca_.Bind(&block60, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704);
    compiler::TNode<BoolT> tmp705;
    USE(tmp705);
    tmp705 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp704}, compiler::TNode<Smi>{tmp697});
    ca_.Branch(tmp705, &block58, &block59, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704);
  }

  if (block58.is_used()) {
    compiler::TNode<RawPtrT> tmp706;
    compiler::TNode<RawPtrT> tmp707;
    compiler::TNode<IntPtrT> tmp708;
    compiler::TNode<Context> tmp709;
    compiler::TNode<Object> tmp710;
    compiler::TNode<Object> tmp711;
    compiler::TNode<Object> tmp712;
    compiler::TNode<JSTypedArray> tmp713;
    compiler::TNode<Smi> tmp714;
    compiler::TNode<JSReceiver> tmp715;
    compiler::TNode<BuiltinPtr> tmp716;
    compiler::TNode<BuiltinPtr> tmp717;
    compiler::TNode<Int32T> tmp718;
    compiler::TNode<FixedArray> tmp719;
    compiler::TNode<FixedArray> tmp720;
    compiler::TNode<Smi> tmp721;
    ca_.Bind(&block58, &tmp706, &tmp707, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 365);
    compiler::TNode<Object> tmp722 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp716, tmp709, tmp713, tmp721); 
    USE(tmp722);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 366);
    compiler::TNode<IntPtrT> tmp723 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp723);
    compiler::TNode<IntPtrT> tmp724 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp724);
    compiler::TNode<Smi>tmp725 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp719, tmp724});
    compiler::TNode<IntPtrT> tmp726;
    USE(tmp726);
    tmp726 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp725});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp727;
    USE(tmp727);
    tmp727 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp721});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp728;
    USE(tmp728);
    tmp728 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp727});
    compiler::TNode<UintPtrT> tmp729;
    USE(tmp729);
    tmp729 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp726});
    compiler::TNode<BoolT> tmp730;
    USE(tmp730);
    tmp730 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp728}, compiler::TNode<UintPtrT>{tmp729});
    ca_.Branch(tmp730, &block66, &block67, tmp706, tmp707, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp719, tmp723, tmp726, tmp721, tmp721, tmp727, tmp719, tmp723, tmp726, tmp727, tmp727);
  }

  if (block66.is_used()) {
    compiler::TNode<RawPtrT> tmp731;
    compiler::TNode<RawPtrT> tmp732;
    compiler::TNode<IntPtrT> tmp733;
    compiler::TNode<Context> tmp734;
    compiler::TNode<Object> tmp735;
    compiler::TNode<Object> tmp736;
    compiler::TNode<Object> tmp737;
    compiler::TNode<JSTypedArray> tmp738;
    compiler::TNode<Smi> tmp739;
    compiler::TNode<JSReceiver> tmp740;
    compiler::TNode<BuiltinPtr> tmp741;
    compiler::TNode<BuiltinPtr> tmp742;
    compiler::TNode<Int32T> tmp743;
    compiler::TNode<FixedArray> tmp744;
    compiler::TNode<FixedArray> tmp745;
    compiler::TNode<Smi> tmp746;
    compiler::TNode<Object> tmp747;
    compiler::TNode<FixedArray> tmp748;
    compiler::TNode<IntPtrT> tmp749;
    compiler::TNode<IntPtrT> tmp750;
    compiler::TNode<Smi> tmp751;
    compiler::TNode<Smi> tmp752;
    compiler::TNode<IntPtrT> tmp753;
    compiler::TNode<HeapObject> tmp754;
    compiler::TNode<IntPtrT> tmp755;
    compiler::TNode<IntPtrT> tmp756;
    compiler::TNode<IntPtrT> tmp757;
    compiler::TNode<IntPtrT> tmp758;
    ca_.Bind(&block66, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp759;
    USE(tmp759);
    tmp759 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp760;
    USE(tmp760);
    tmp760 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp758}, compiler::TNode<IntPtrT>{tmp759});
    compiler::TNode<IntPtrT> tmp761;
    USE(tmp761);
    tmp761 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp755}, compiler::TNode<IntPtrT>{tmp760});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp762;
    USE(tmp762);
    compiler::TNode<IntPtrT> tmp763;
    USE(tmp763);
    std::tie(tmp762, tmp763) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp754}, compiler::TNode<IntPtrT>{tmp761}).Flatten();
    ca_.Goto(&block65, tmp731, tmp732, tmp733, tmp734, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp762, tmp763);
  }

  if (block67.is_used()) {
    compiler::TNode<RawPtrT> tmp764;
    compiler::TNode<RawPtrT> tmp765;
    compiler::TNode<IntPtrT> tmp766;
    compiler::TNode<Context> tmp767;
    compiler::TNode<Object> tmp768;
    compiler::TNode<Object> tmp769;
    compiler::TNode<Object> tmp770;
    compiler::TNode<JSTypedArray> tmp771;
    compiler::TNode<Smi> tmp772;
    compiler::TNode<JSReceiver> tmp773;
    compiler::TNode<BuiltinPtr> tmp774;
    compiler::TNode<BuiltinPtr> tmp775;
    compiler::TNode<Int32T> tmp776;
    compiler::TNode<FixedArray> tmp777;
    compiler::TNode<FixedArray> tmp778;
    compiler::TNode<Smi> tmp779;
    compiler::TNode<Object> tmp780;
    compiler::TNode<FixedArray> tmp781;
    compiler::TNode<IntPtrT> tmp782;
    compiler::TNode<IntPtrT> tmp783;
    compiler::TNode<Smi> tmp784;
    compiler::TNode<Smi> tmp785;
    compiler::TNode<IntPtrT> tmp786;
    compiler::TNode<HeapObject> tmp787;
    compiler::TNode<IntPtrT> tmp788;
    compiler::TNode<IntPtrT> tmp789;
    compiler::TNode<IntPtrT> tmp790;
    compiler::TNode<IntPtrT> tmp791;
    ca_.Bind(&block67, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block64, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775, tmp776, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786);
  }

  if (block65.is_used()) {
    compiler::TNode<RawPtrT> tmp792;
    compiler::TNode<RawPtrT> tmp793;
    compiler::TNode<IntPtrT> tmp794;
    compiler::TNode<Context> tmp795;
    compiler::TNode<Object> tmp796;
    compiler::TNode<Object> tmp797;
    compiler::TNode<Object> tmp798;
    compiler::TNode<JSTypedArray> tmp799;
    compiler::TNode<Smi> tmp800;
    compiler::TNode<JSReceiver> tmp801;
    compiler::TNode<BuiltinPtr> tmp802;
    compiler::TNode<BuiltinPtr> tmp803;
    compiler::TNode<Int32T> tmp804;
    compiler::TNode<FixedArray> tmp805;
    compiler::TNode<FixedArray> tmp806;
    compiler::TNode<Smi> tmp807;
    compiler::TNode<Object> tmp808;
    compiler::TNode<FixedArray> tmp809;
    compiler::TNode<IntPtrT> tmp810;
    compiler::TNode<IntPtrT> tmp811;
    compiler::TNode<Smi> tmp812;
    compiler::TNode<Smi> tmp813;
    compiler::TNode<IntPtrT> tmp814;
    compiler::TNode<HeapObject> tmp815;
    compiler::TNode<IntPtrT> tmp816;
    compiler::TNode<IntPtrT> tmp817;
    compiler::TNode<IntPtrT> tmp818;
    compiler::TNode<IntPtrT> tmp819;
    compiler::TNode<HeapObject> tmp820;
    compiler::TNode<IntPtrT> tmp821;
    ca_.Bind(&block65, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813, &tmp814, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block63, tmp792, tmp793, tmp794, tmp795, tmp796, tmp797, tmp798, tmp799, tmp800, tmp801, tmp802, tmp803, tmp804, tmp805, tmp806, tmp807, tmp808, tmp809, tmp810, tmp811, tmp812, tmp813, tmp814, tmp820, tmp821);
  }

  if (block64.is_used()) {
    compiler::TNode<RawPtrT> tmp822;
    compiler::TNode<RawPtrT> tmp823;
    compiler::TNode<IntPtrT> tmp824;
    compiler::TNode<Context> tmp825;
    compiler::TNode<Object> tmp826;
    compiler::TNode<Object> tmp827;
    compiler::TNode<Object> tmp828;
    compiler::TNode<JSTypedArray> tmp829;
    compiler::TNode<Smi> tmp830;
    compiler::TNode<JSReceiver> tmp831;
    compiler::TNode<BuiltinPtr> tmp832;
    compiler::TNode<BuiltinPtr> tmp833;
    compiler::TNode<Int32T> tmp834;
    compiler::TNode<FixedArray> tmp835;
    compiler::TNode<FixedArray> tmp836;
    compiler::TNode<Smi> tmp837;
    compiler::TNode<Object> tmp838;
    compiler::TNode<FixedArray> tmp839;
    compiler::TNode<IntPtrT> tmp840;
    compiler::TNode<IntPtrT> tmp841;
    compiler::TNode<Smi> tmp842;
    compiler::TNode<Smi> tmp843;
    compiler::TNode<IntPtrT> tmp844;
    ca_.Bind(&block64, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842, &tmp843, &tmp844);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block63.is_used()) {
    compiler::TNode<RawPtrT> tmp845;
    compiler::TNode<RawPtrT> tmp846;
    compiler::TNode<IntPtrT> tmp847;
    compiler::TNode<Context> tmp848;
    compiler::TNode<Object> tmp849;
    compiler::TNode<Object> tmp850;
    compiler::TNode<Object> tmp851;
    compiler::TNode<JSTypedArray> tmp852;
    compiler::TNode<Smi> tmp853;
    compiler::TNode<JSReceiver> tmp854;
    compiler::TNode<BuiltinPtr> tmp855;
    compiler::TNode<BuiltinPtr> tmp856;
    compiler::TNode<Int32T> tmp857;
    compiler::TNode<FixedArray> tmp858;
    compiler::TNode<FixedArray> tmp859;
    compiler::TNode<Smi> tmp860;
    compiler::TNode<Object> tmp861;
    compiler::TNode<FixedArray> tmp862;
    compiler::TNode<IntPtrT> tmp863;
    compiler::TNode<IntPtrT> tmp864;
    compiler::TNode<Smi> tmp865;
    compiler::TNode<Smi> tmp866;
    compiler::TNode<IntPtrT> tmp867;
    compiler::TNode<HeapObject> tmp868;
    compiler::TNode<IntPtrT> tmp869;
    ca_.Bind(&block63, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862, &tmp863, &tmp864, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869);
    ca_.Goto(&block62, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp851, tmp852, tmp853, tmp854, tmp855, tmp856, tmp857, tmp858, tmp859, tmp860, tmp861, tmp862, tmp863, tmp864, tmp865, tmp866, tmp868, tmp869);
  }

  if (block62.is_used()) {
    compiler::TNode<RawPtrT> tmp870;
    compiler::TNode<RawPtrT> tmp871;
    compiler::TNode<IntPtrT> tmp872;
    compiler::TNode<Context> tmp873;
    compiler::TNode<Object> tmp874;
    compiler::TNode<Object> tmp875;
    compiler::TNode<Object> tmp876;
    compiler::TNode<JSTypedArray> tmp877;
    compiler::TNode<Smi> tmp878;
    compiler::TNode<JSReceiver> tmp879;
    compiler::TNode<BuiltinPtr> tmp880;
    compiler::TNode<BuiltinPtr> tmp881;
    compiler::TNode<Int32T> tmp882;
    compiler::TNode<FixedArray> tmp883;
    compiler::TNode<FixedArray> tmp884;
    compiler::TNode<Smi> tmp885;
    compiler::TNode<Object> tmp886;
    compiler::TNode<FixedArray> tmp887;
    compiler::TNode<IntPtrT> tmp888;
    compiler::TNode<IntPtrT> tmp889;
    compiler::TNode<Smi> tmp890;
    compiler::TNode<Smi> tmp891;
    compiler::TNode<HeapObject> tmp892;
    compiler::TNode<IntPtrT> tmp893;
    ca_.Bind(&block62, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874, &tmp875, &tmp876, &tmp877, &tmp878, &tmp879, &tmp880, &tmp881, &tmp882, &tmp883, &tmp884, &tmp885, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 366);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp892, tmp893}, tmp886);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 367);
    compiler::TNode<IntPtrT> tmp894 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp894);
    compiler::TNode<IntPtrT> tmp895 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp895);
    compiler::TNode<Smi>tmp896 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp884, tmp895});
    compiler::TNode<IntPtrT> tmp897;
    USE(tmp897);
    tmp897 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp896});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp898;
    USE(tmp898);
    tmp898 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp885});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp899;
    USE(tmp899);
    tmp899 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp898});
    compiler::TNode<UintPtrT> tmp900;
    USE(tmp900);
    tmp900 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp897});
    compiler::TNode<BoolT> tmp901;
    USE(tmp901);
    tmp901 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp899}, compiler::TNode<UintPtrT>{tmp900});
    ca_.Branch(tmp901, &block73, &block74, tmp870, tmp871, tmp872, tmp873, tmp874, tmp875, tmp876, tmp877, tmp878, tmp879, tmp880, tmp881, tmp882, tmp883, tmp884, tmp885, tmp886, tmp884, tmp894, tmp897, tmp885, tmp885, tmp898, tmp884, tmp894, tmp897, tmp898, tmp898);
  }

  if (block73.is_used()) {
    compiler::TNode<RawPtrT> tmp902;
    compiler::TNode<RawPtrT> tmp903;
    compiler::TNode<IntPtrT> tmp904;
    compiler::TNode<Context> tmp905;
    compiler::TNode<Object> tmp906;
    compiler::TNode<Object> tmp907;
    compiler::TNode<Object> tmp908;
    compiler::TNode<JSTypedArray> tmp909;
    compiler::TNode<Smi> tmp910;
    compiler::TNode<JSReceiver> tmp911;
    compiler::TNode<BuiltinPtr> tmp912;
    compiler::TNode<BuiltinPtr> tmp913;
    compiler::TNode<Int32T> tmp914;
    compiler::TNode<FixedArray> tmp915;
    compiler::TNode<FixedArray> tmp916;
    compiler::TNode<Smi> tmp917;
    compiler::TNode<Object> tmp918;
    compiler::TNode<FixedArray> tmp919;
    compiler::TNode<IntPtrT> tmp920;
    compiler::TNode<IntPtrT> tmp921;
    compiler::TNode<Smi> tmp922;
    compiler::TNode<Smi> tmp923;
    compiler::TNode<IntPtrT> tmp924;
    compiler::TNode<HeapObject> tmp925;
    compiler::TNode<IntPtrT> tmp926;
    compiler::TNode<IntPtrT> tmp927;
    compiler::TNode<IntPtrT> tmp928;
    compiler::TNode<IntPtrT> tmp929;
    ca_.Bind(&block73, &tmp902, &tmp903, &tmp904, &tmp905, &tmp906, &tmp907, &tmp908, &tmp909, &tmp910, &tmp911, &tmp912, &tmp913, &tmp914, &tmp915, &tmp916, &tmp917, &tmp918, &tmp919, &tmp920, &tmp921, &tmp922, &tmp923, &tmp924, &tmp925, &tmp926, &tmp927, &tmp928, &tmp929);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp930;
    USE(tmp930);
    tmp930 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp931;
    USE(tmp931);
    tmp931 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp929}, compiler::TNode<IntPtrT>{tmp930});
    compiler::TNode<IntPtrT> tmp932;
    USE(tmp932);
    tmp932 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp926}, compiler::TNode<IntPtrT>{tmp931});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp933;
    USE(tmp933);
    compiler::TNode<IntPtrT> tmp934;
    USE(tmp934);
    std::tie(tmp933, tmp934) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp925}, compiler::TNode<IntPtrT>{tmp932}).Flatten();
    ca_.Goto(&block72, tmp902, tmp903, tmp904, tmp905, tmp906, tmp907, tmp908, tmp909, tmp910, tmp911, tmp912, tmp913, tmp914, tmp915, tmp916, tmp917, tmp918, tmp919, tmp920, tmp921, tmp922, tmp923, tmp924, tmp925, tmp926, tmp927, tmp928, tmp929, tmp933, tmp934);
  }

  if (block74.is_used()) {
    compiler::TNode<RawPtrT> tmp935;
    compiler::TNode<RawPtrT> tmp936;
    compiler::TNode<IntPtrT> tmp937;
    compiler::TNode<Context> tmp938;
    compiler::TNode<Object> tmp939;
    compiler::TNode<Object> tmp940;
    compiler::TNode<Object> tmp941;
    compiler::TNode<JSTypedArray> tmp942;
    compiler::TNode<Smi> tmp943;
    compiler::TNode<JSReceiver> tmp944;
    compiler::TNode<BuiltinPtr> tmp945;
    compiler::TNode<BuiltinPtr> tmp946;
    compiler::TNode<Int32T> tmp947;
    compiler::TNode<FixedArray> tmp948;
    compiler::TNode<FixedArray> tmp949;
    compiler::TNode<Smi> tmp950;
    compiler::TNode<Object> tmp951;
    compiler::TNode<FixedArray> tmp952;
    compiler::TNode<IntPtrT> tmp953;
    compiler::TNode<IntPtrT> tmp954;
    compiler::TNode<Smi> tmp955;
    compiler::TNode<Smi> tmp956;
    compiler::TNode<IntPtrT> tmp957;
    compiler::TNode<HeapObject> tmp958;
    compiler::TNode<IntPtrT> tmp959;
    compiler::TNode<IntPtrT> tmp960;
    compiler::TNode<IntPtrT> tmp961;
    compiler::TNode<IntPtrT> tmp962;
    ca_.Bind(&block74, &tmp935, &tmp936, &tmp937, &tmp938, &tmp939, &tmp940, &tmp941, &tmp942, &tmp943, &tmp944, &tmp945, &tmp946, &tmp947, &tmp948, &tmp949, &tmp950, &tmp951, &tmp952, &tmp953, &tmp954, &tmp955, &tmp956, &tmp957, &tmp958, &tmp959, &tmp960, &tmp961, &tmp962);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block71, tmp935, tmp936, tmp937, tmp938, tmp939, tmp940, tmp941, tmp942, tmp943, tmp944, tmp945, tmp946, tmp947, tmp948, tmp949, tmp950, tmp951, tmp952, tmp953, tmp954, tmp955, tmp956, tmp957);
  }

  if (block72.is_used()) {
    compiler::TNode<RawPtrT> tmp963;
    compiler::TNode<RawPtrT> tmp964;
    compiler::TNode<IntPtrT> tmp965;
    compiler::TNode<Context> tmp966;
    compiler::TNode<Object> tmp967;
    compiler::TNode<Object> tmp968;
    compiler::TNode<Object> tmp969;
    compiler::TNode<JSTypedArray> tmp970;
    compiler::TNode<Smi> tmp971;
    compiler::TNode<JSReceiver> tmp972;
    compiler::TNode<BuiltinPtr> tmp973;
    compiler::TNode<BuiltinPtr> tmp974;
    compiler::TNode<Int32T> tmp975;
    compiler::TNode<FixedArray> tmp976;
    compiler::TNode<FixedArray> tmp977;
    compiler::TNode<Smi> tmp978;
    compiler::TNode<Object> tmp979;
    compiler::TNode<FixedArray> tmp980;
    compiler::TNode<IntPtrT> tmp981;
    compiler::TNode<IntPtrT> tmp982;
    compiler::TNode<Smi> tmp983;
    compiler::TNode<Smi> tmp984;
    compiler::TNode<IntPtrT> tmp985;
    compiler::TNode<HeapObject> tmp986;
    compiler::TNode<IntPtrT> tmp987;
    compiler::TNode<IntPtrT> tmp988;
    compiler::TNode<IntPtrT> tmp989;
    compiler::TNode<IntPtrT> tmp990;
    compiler::TNode<HeapObject> tmp991;
    compiler::TNode<IntPtrT> tmp992;
    ca_.Bind(&block72, &tmp963, &tmp964, &tmp965, &tmp966, &tmp967, &tmp968, &tmp969, &tmp970, &tmp971, &tmp972, &tmp973, &tmp974, &tmp975, &tmp976, &tmp977, &tmp978, &tmp979, &tmp980, &tmp981, &tmp982, &tmp983, &tmp984, &tmp985, &tmp986, &tmp987, &tmp988, &tmp989, &tmp990, &tmp991, &tmp992);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block70, tmp963, tmp964, tmp965, tmp966, tmp967, tmp968, tmp969, tmp970, tmp971, tmp972, tmp973, tmp974, tmp975, tmp976, tmp977, tmp978, tmp979, tmp980, tmp981, tmp982, tmp983, tmp984, tmp985, tmp991, tmp992);
  }

  if (block71.is_used()) {
    compiler::TNode<RawPtrT> tmp993;
    compiler::TNode<RawPtrT> tmp994;
    compiler::TNode<IntPtrT> tmp995;
    compiler::TNode<Context> tmp996;
    compiler::TNode<Object> tmp997;
    compiler::TNode<Object> tmp998;
    compiler::TNode<Object> tmp999;
    compiler::TNode<JSTypedArray> tmp1000;
    compiler::TNode<Smi> tmp1001;
    compiler::TNode<JSReceiver> tmp1002;
    compiler::TNode<BuiltinPtr> tmp1003;
    compiler::TNode<BuiltinPtr> tmp1004;
    compiler::TNode<Int32T> tmp1005;
    compiler::TNode<FixedArray> tmp1006;
    compiler::TNode<FixedArray> tmp1007;
    compiler::TNode<Smi> tmp1008;
    compiler::TNode<Object> tmp1009;
    compiler::TNode<FixedArray> tmp1010;
    compiler::TNode<IntPtrT> tmp1011;
    compiler::TNode<IntPtrT> tmp1012;
    compiler::TNode<Smi> tmp1013;
    compiler::TNode<Smi> tmp1014;
    compiler::TNode<IntPtrT> tmp1015;
    ca_.Bind(&block71, &tmp993, &tmp994, &tmp995, &tmp996, &tmp997, &tmp998, &tmp999, &tmp1000, &tmp1001, &tmp1002, &tmp1003, &tmp1004, &tmp1005, &tmp1006, &tmp1007, &tmp1008, &tmp1009, &tmp1010, &tmp1011, &tmp1012, &tmp1013, &tmp1014, &tmp1015);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block70.is_used()) {
    compiler::TNode<RawPtrT> tmp1016;
    compiler::TNode<RawPtrT> tmp1017;
    compiler::TNode<IntPtrT> tmp1018;
    compiler::TNode<Context> tmp1019;
    compiler::TNode<Object> tmp1020;
    compiler::TNode<Object> tmp1021;
    compiler::TNode<Object> tmp1022;
    compiler::TNode<JSTypedArray> tmp1023;
    compiler::TNode<Smi> tmp1024;
    compiler::TNode<JSReceiver> tmp1025;
    compiler::TNode<BuiltinPtr> tmp1026;
    compiler::TNode<BuiltinPtr> tmp1027;
    compiler::TNode<Int32T> tmp1028;
    compiler::TNode<FixedArray> tmp1029;
    compiler::TNode<FixedArray> tmp1030;
    compiler::TNode<Smi> tmp1031;
    compiler::TNode<Object> tmp1032;
    compiler::TNode<FixedArray> tmp1033;
    compiler::TNode<IntPtrT> tmp1034;
    compiler::TNode<IntPtrT> tmp1035;
    compiler::TNode<Smi> tmp1036;
    compiler::TNode<Smi> tmp1037;
    compiler::TNode<IntPtrT> tmp1038;
    compiler::TNode<HeapObject> tmp1039;
    compiler::TNode<IntPtrT> tmp1040;
    ca_.Bind(&block70, &tmp1016, &tmp1017, &tmp1018, &tmp1019, &tmp1020, &tmp1021, &tmp1022, &tmp1023, &tmp1024, &tmp1025, &tmp1026, &tmp1027, &tmp1028, &tmp1029, &tmp1030, &tmp1031, &tmp1032, &tmp1033, &tmp1034, &tmp1035, &tmp1036, &tmp1037, &tmp1038, &tmp1039, &tmp1040);
    ca_.Goto(&block69, tmp1016, tmp1017, tmp1018, tmp1019, tmp1020, tmp1021, tmp1022, tmp1023, tmp1024, tmp1025, tmp1026, tmp1027, tmp1028, tmp1029, tmp1030, tmp1031, tmp1032, tmp1033, tmp1034, tmp1035, tmp1036, tmp1037, tmp1039, tmp1040);
  }

  if (block69.is_used()) {
    compiler::TNode<RawPtrT> tmp1041;
    compiler::TNode<RawPtrT> tmp1042;
    compiler::TNode<IntPtrT> tmp1043;
    compiler::TNode<Context> tmp1044;
    compiler::TNode<Object> tmp1045;
    compiler::TNode<Object> tmp1046;
    compiler::TNode<Object> tmp1047;
    compiler::TNode<JSTypedArray> tmp1048;
    compiler::TNode<Smi> tmp1049;
    compiler::TNode<JSReceiver> tmp1050;
    compiler::TNode<BuiltinPtr> tmp1051;
    compiler::TNode<BuiltinPtr> tmp1052;
    compiler::TNode<Int32T> tmp1053;
    compiler::TNode<FixedArray> tmp1054;
    compiler::TNode<FixedArray> tmp1055;
    compiler::TNode<Smi> tmp1056;
    compiler::TNode<Object> tmp1057;
    compiler::TNode<FixedArray> tmp1058;
    compiler::TNode<IntPtrT> tmp1059;
    compiler::TNode<IntPtrT> tmp1060;
    compiler::TNode<Smi> tmp1061;
    compiler::TNode<Smi> tmp1062;
    compiler::TNode<HeapObject> tmp1063;
    compiler::TNode<IntPtrT> tmp1064;
    ca_.Bind(&block69, &tmp1041, &tmp1042, &tmp1043, &tmp1044, &tmp1045, &tmp1046, &tmp1047, &tmp1048, &tmp1049, &tmp1050, &tmp1051, &tmp1052, &tmp1053, &tmp1054, &tmp1055, &tmp1056, &tmp1057, &tmp1058, &tmp1059, &tmp1060, &tmp1061, &tmp1062, &tmp1063, &tmp1064);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 367);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1063, tmp1064}, tmp1057);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 364);
    ca_.Goto(&block61, tmp1041, tmp1042, tmp1043, tmp1044, tmp1045, tmp1046, tmp1047, tmp1048, tmp1049, tmp1050, tmp1051, tmp1052, tmp1053, tmp1054, tmp1055, tmp1056);
  }

  if (block61.is_used()) {
    compiler::TNode<RawPtrT> tmp1065;
    compiler::TNode<RawPtrT> tmp1066;
    compiler::TNode<IntPtrT> tmp1067;
    compiler::TNode<Context> tmp1068;
    compiler::TNode<Object> tmp1069;
    compiler::TNode<Object> tmp1070;
    compiler::TNode<Object> tmp1071;
    compiler::TNode<JSTypedArray> tmp1072;
    compiler::TNode<Smi> tmp1073;
    compiler::TNode<JSReceiver> tmp1074;
    compiler::TNode<BuiltinPtr> tmp1075;
    compiler::TNode<BuiltinPtr> tmp1076;
    compiler::TNode<Int32T> tmp1077;
    compiler::TNode<FixedArray> tmp1078;
    compiler::TNode<FixedArray> tmp1079;
    compiler::TNode<Smi> tmp1080;
    ca_.Bind(&block61, &tmp1065, &tmp1066, &tmp1067, &tmp1068, &tmp1069, &tmp1070, &tmp1071, &tmp1072, &tmp1073, &tmp1074, &tmp1075, &tmp1076, &tmp1077, &tmp1078, &tmp1079, &tmp1080);
    compiler::TNode<Smi> tmp1081;
    USE(tmp1081);
    tmp1081 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp1082;
    USE(tmp1082);
    tmp1082 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1080}, compiler::TNode<Smi>{tmp1081});
    ca_.Goto(&block60, tmp1065, tmp1066, tmp1067, tmp1068, tmp1069, tmp1070, tmp1071, tmp1072, tmp1073, tmp1074, tmp1075, tmp1076, tmp1077, tmp1078, tmp1079, tmp1082);
  }

  if (block59.is_used()) {
    compiler::TNode<RawPtrT> tmp1083;
    compiler::TNode<RawPtrT> tmp1084;
    compiler::TNode<IntPtrT> tmp1085;
    compiler::TNode<Context> tmp1086;
    compiler::TNode<Object> tmp1087;
    compiler::TNode<Object> tmp1088;
    compiler::TNode<Object> tmp1089;
    compiler::TNode<JSTypedArray> tmp1090;
    compiler::TNode<Smi> tmp1091;
    compiler::TNode<JSReceiver> tmp1092;
    compiler::TNode<BuiltinPtr> tmp1093;
    compiler::TNode<BuiltinPtr> tmp1094;
    compiler::TNode<Int32T> tmp1095;
    compiler::TNode<FixedArray> tmp1096;
    compiler::TNode<FixedArray> tmp1097;
    compiler::TNode<Smi> tmp1098;
    ca_.Bind(&block59, &tmp1083, &tmp1084, &tmp1085, &tmp1086, &tmp1087, &tmp1088, &tmp1089, &tmp1090, &tmp1091, &tmp1092, &tmp1093, &tmp1094, &tmp1095, &tmp1096, &tmp1097, &tmp1098);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 370);
    compiler::TNode<Smi> tmp1099;
    USE(tmp1099);
    tmp1099 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    compiler::TNode<Object> tmp1100;
    tmp1100 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp1086, tmp1090, tmp1092, tmp1097, tmp1099, tmp1091, tmp1096);
    USE(tmp1100);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 373);
    compiler::TNode<Smi> tmp1101;
    USE(tmp1101);
    tmp1101 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block78, tmp1083, tmp1084, tmp1085, tmp1086, tmp1087, tmp1088, tmp1089, tmp1090, tmp1091, tmp1092, tmp1093, tmp1094, tmp1095, tmp1096, tmp1097, tmp1101);
  }

  if (block78.is_used()) {
    compiler::TNode<RawPtrT> tmp1102;
    compiler::TNode<RawPtrT> tmp1103;
    compiler::TNode<IntPtrT> tmp1104;
    compiler::TNode<Context> tmp1105;
    compiler::TNode<Object> tmp1106;
    compiler::TNode<Object> tmp1107;
    compiler::TNode<Object> tmp1108;
    compiler::TNode<JSTypedArray> tmp1109;
    compiler::TNode<Smi> tmp1110;
    compiler::TNode<JSReceiver> tmp1111;
    compiler::TNode<BuiltinPtr> tmp1112;
    compiler::TNode<BuiltinPtr> tmp1113;
    compiler::TNode<Int32T> tmp1114;
    compiler::TNode<FixedArray> tmp1115;
    compiler::TNode<FixedArray> tmp1116;
    compiler::TNode<Smi> tmp1117;
    ca_.Bind(&block78, &tmp1102, &tmp1103, &tmp1104, &tmp1105, &tmp1106, &tmp1107, &tmp1108, &tmp1109, &tmp1110, &tmp1111, &tmp1112, &tmp1113, &tmp1114, &tmp1115, &tmp1116, &tmp1117);
    compiler::TNode<BoolT> tmp1118;
    USE(tmp1118);
    tmp1118 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp1117}, compiler::TNode<Smi>{tmp1110});
    ca_.Branch(tmp1118, &block76, &block77, tmp1102, tmp1103, tmp1104, tmp1105, tmp1106, tmp1107, tmp1108, tmp1109, tmp1110, tmp1111, tmp1112, tmp1113, tmp1114, tmp1115, tmp1116, tmp1117);
  }

  if (block76.is_used()) {
    compiler::TNode<RawPtrT> tmp1119;
    compiler::TNode<RawPtrT> tmp1120;
    compiler::TNode<IntPtrT> tmp1121;
    compiler::TNode<Context> tmp1122;
    compiler::TNode<Object> tmp1123;
    compiler::TNode<Object> tmp1124;
    compiler::TNode<Object> tmp1125;
    compiler::TNode<JSTypedArray> tmp1126;
    compiler::TNode<Smi> tmp1127;
    compiler::TNode<JSReceiver> tmp1128;
    compiler::TNode<BuiltinPtr> tmp1129;
    compiler::TNode<BuiltinPtr> tmp1130;
    compiler::TNode<Int32T> tmp1131;
    compiler::TNode<FixedArray> tmp1132;
    compiler::TNode<FixedArray> tmp1133;
    compiler::TNode<Smi> tmp1134;
    ca_.Bind(&block76, &tmp1119, &tmp1120, &tmp1121, &tmp1122, &tmp1123, &tmp1124, &tmp1125, &tmp1126, &tmp1127, &tmp1128, &tmp1129, &tmp1130, &tmp1131, &tmp1132, &tmp1133, &tmp1134);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 374);
    compiler::TNode<IntPtrT> tmp1135 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp1135);
    compiler::TNode<IntPtrT> tmp1136 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1136);
    compiler::TNode<Smi>tmp1137 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1132, tmp1136});
    compiler::TNode<IntPtrT> tmp1138;
    USE(tmp1138);
    tmp1138 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1137});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    compiler::TNode<IntPtrT> tmp1139;
    USE(tmp1139);
    tmp1139 = Convert8ATintptr5ATSmi_186(state_, compiler::TNode<Smi>{tmp1134});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    compiler::TNode<UintPtrT> tmp1140;
    USE(tmp1140);
    tmp1140 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp1139});
    compiler::TNode<UintPtrT> tmp1141;
    USE(tmp1141);
    tmp1141 = Convert9ATuintptr8ATintptr_203(state_, compiler::TNode<IntPtrT>{tmp1138});
    compiler::TNode<BoolT> tmp1142;
    USE(tmp1142);
    tmp1142 = CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp1140}, compiler::TNode<UintPtrT>{tmp1141});
    ca_.Branch(tmp1142, &block84, &block85, tmp1119, tmp1120, tmp1121, tmp1122, tmp1123, tmp1124, tmp1125, tmp1126, tmp1127, tmp1128, tmp1129, tmp1130, tmp1131, tmp1132, tmp1133, tmp1134, tmp1122, tmp1126, tmp1134, tmp1132, tmp1135, tmp1138, tmp1134, tmp1134, tmp1139, tmp1132, tmp1135, tmp1138, tmp1139, tmp1139);
  }

  if (block84.is_used()) {
    compiler::TNode<RawPtrT> tmp1143;
    compiler::TNode<RawPtrT> tmp1144;
    compiler::TNode<IntPtrT> tmp1145;
    compiler::TNode<Context> tmp1146;
    compiler::TNode<Object> tmp1147;
    compiler::TNode<Object> tmp1148;
    compiler::TNode<Object> tmp1149;
    compiler::TNode<JSTypedArray> tmp1150;
    compiler::TNode<Smi> tmp1151;
    compiler::TNode<JSReceiver> tmp1152;
    compiler::TNode<BuiltinPtr> tmp1153;
    compiler::TNode<BuiltinPtr> tmp1154;
    compiler::TNode<Int32T> tmp1155;
    compiler::TNode<FixedArray> tmp1156;
    compiler::TNode<FixedArray> tmp1157;
    compiler::TNode<Smi> tmp1158;
    compiler::TNode<Context> tmp1159;
    compiler::TNode<JSTypedArray> tmp1160;
    compiler::TNode<Smi> tmp1161;
    compiler::TNode<FixedArray> tmp1162;
    compiler::TNode<IntPtrT> tmp1163;
    compiler::TNode<IntPtrT> tmp1164;
    compiler::TNode<Smi> tmp1165;
    compiler::TNode<Smi> tmp1166;
    compiler::TNode<IntPtrT> tmp1167;
    compiler::TNode<HeapObject> tmp1168;
    compiler::TNode<IntPtrT> tmp1169;
    compiler::TNode<IntPtrT> tmp1170;
    compiler::TNode<IntPtrT> tmp1171;
    compiler::TNode<IntPtrT> tmp1172;
    ca_.Bind(&block84, &tmp1143, &tmp1144, &tmp1145, &tmp1146, &tmp1147, &tmp1148, &tmp1149, &tmp1150, &tmp1151, &tmp1152, &tmp1153, &tmp1154, &tmp1155, &tmp1156, &tmp1157, &tmp1158, &tmp1159, &tmp1160, &tmp1161, &tmp1162, &tmp1163, &tmp1164, &tmp1165, &tmp1166, &tmp1167, &tmp1168, &tmp1169, &tmp1170, &tmp1171, &tmp1172);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    compiler::TNode<IntPtrT> tmp1173;
    USE(tmp1173);
    tmp1173 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, (SizeOf20UT5ATSmi10HeapObject_339(state_)));
    compiler::TNode<IntPtrT> tmp1174;
    USE(tmp1174);
    tmp1174 = CodeStubAssembler(state_).IntPtrMul(compiler::TNode<IntPtrT>{tmp1172}, compiler::TNode<IntPtrT>{tmp1173});
    compiler::TNode<IntPtrT> tmp1175;
    USE(tmp1175);
    tmp1175 = CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp1169}, compiler::TNode<IntPtrT>{tmp1174});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    compiler::TNode<HeapObject> tmp1176;
    USE(tmp1176);
    compiler::TNode<IntPtrT> tmp1177;
    USE(tmp1177);
    std::tie(tmp1176, tmp1177) = UnsafeNewReference20UT5ATSmi10HeapObject_1345(state_, compiler::TNode<HeapObject>{tmp1168}, compiler::TNode<IntPtrT>{tmp1175}).Flatten();
    ca_.Goto(&block83, tmp1143, tmp1144, tmp1145, tmp1146, tmp1147, tmp1148, tmp1149, tmp1150, tmp1151, tmp1152, tmp1153, tmp1154, tmp1155, tmp1156, tmp1157, tmp1158, tmp1159, tmp1160, tmp1161, tmp1162, tmp1163, tmp1164, tmp1165, tmp1166, tmp1167, tmp1168, tmp1169, tmp1170, tmp1171, tmp1172, tmp1176, tmp1177);
  }

  if (block85.is_used()) {
    compiler::TNode<RawPtrT> tmp1178;
    compiler::TNode<RawPtrT> tmp1179;
    compiler::TNode<IntPtrT> tmp1180;
    compiler::TNode<Context> tmp1181;
    compiler::TNode<Object> tmp1182;
    compiler::TNode<Object> tmp1183;
    compiler::TNode<Object> tmp1184;
    compiler::TNode<JSTypedArray> tmp1185;
    compiler::TNode<Smi> tmp1186;
    compiler::TNode<JSReceiver> tmp1187;
    compiler::TNode<BuiltinPtr> tmp1188;
    compiler::TNode<BuiltinPtr> tmp1189;
    compiler::TNode<Int32T> tmp1190;
    compiler::TNode<FixedArray> tmp1191;
    compiler::TNode<FixedArray> tmp1192;
    compiler::TNode<Smi> tmp1193;
    compiler::TNode<Context> tmp1194;
    compiler::TNode<JSTypedArray> tmp1195;
    compiler::TNode<Smi> tmp1196;
    compiler::TNode<FixedArray> tmp1197;
    compiler::TNode<IntPtrT> tmp1198;
    compiler::TNode<IntPtrT> tmp1199;
    compiler::TNode<Smi> tmp1200;
    compiler::TNode<Smi> tmp1201;
    compiler::TNode<IntPtrT> tmp1202;
    compiler::TNode<HeapObject> tmp1203;
    compiler::TNode<IntPtrT> tmp1204;
    compiler::TNode<IntPtrT> tmp1205;
    compiler::TNode<IntPtrT> tmp1206;
    compiler::TNode<IntPtrT> tmp1207;
    ca_.Bind(&block85, &tmp1178, &tmp1179, &tmp1180, &tmp1181, &tmp1182, &tmp1183, &tmp1184, &tmp1185, &tmp1186, &tmp1187, &tmp1188, &tmp1189, &tmp1190, &tmp1191, &tmp1192, &tmp1193, &tmp1194, &tmp1195, &tmp1196, &tmp1197, &tmp1198, &tmp1199, &tmp1200, &tmp1201, &tmp1202, &tmp1203, &tmp1204, &tmp1205, &tmp1206, &tmp1207);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block82, tmp1178, tmp1179, tmp1180, tmp1181, tmp1182, tmp1183, tmp1184, tmp1185, tmp1186, tmp1187, tmp1188, tmp1189, tmp1190, tmp1191, tmp1192, tmp1193, tmp1194, tmp1195, tmp1196, tmp1197, tmp1198, tmp1199, tmp1200, tmp1201, tmp1202);
  }

  if (block83.is_used()) {
    compiler::TNode<RawPtrT> tmp1208;
    compiler::TNode<RawPtrT> tmp1209;
    compiler::TNode<IntPtrT> tmp1210;
    compiler::TNode<Context> tmp1211;
    compiler::TNode<Object> tmp1212;
    compiler::TNode<Object> tmp1213;
    compiler::TNode<Object> tmp1214;
    compiler::TNode<JSTypedArray> tmp1215;
    compiler::TNode<Smi> tmp1216;
    compiler::TNode<JSReceiver> tmp1217;
    compiler::TNode<BuiltinPtr> tmp1218;
    compiler::TNode<BuiltinPtr> tmp1219;
    compiler::TNode<Int32T> tmp1220;
    compiler::TNode<FixedArray> tmp1221;
    compiler::TNode<FixedArray> tmp1222;
    compiler::TNode<Smi> tmp1223;
    compiler::TNode<Context> tmp1224;
    compiler::TNode<JSTypedArray> tmp1225;
    compiler::TNode<Smi> tmp1226;
    compiler::TNode<FixedArray> tmp1227;
    compiler::TNode<IntPtrT> tmp1228;
    compiler::TNode<IntPtrT> tmp1229;
    compiler::TNode<Smi> tmp1230;
    compiler::TNode<Smi> tmp1231;
    compiler::TNode<IntPtrT> tmp1232;
    compiler::TNode<HeapObject> tmp1233;
    compiler::TNode<IntPtrT> tmp1234;
    compiler::TNode<IntPtrT> tmp1235;
    compiler::TNode<IntPtrT> tmp1236;
    compiler::TNode<IntPtrT> tmp1237;
    compiler::TNode<HeapObject> tmp1238;
    compiler::TNode<IntPtrT> tmp1239;
    ca_.Bind(&block83, &tmp1208, &tmp1209, &tmp1210, &tmp1211, &tmp1212, &tmp1213, &tmp1214, &tmp1215, &tmp1216, &tmp1217, &tmp1218, &tmp1219, &tmp1220, &tmp1221, &tmp1222, &tmp1223, &tmp1224, &tmp1225, &tmp1226, &tmp1227, &tmp1228, &tmp1229, &tmp1230, &tmp1231, &tmp1232, &tmp1233, &tmp1234, &tmp1235, &tmp1236, &tmp1237, &tmp1238, &tmp1239);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block81, tmp1208, tmp1209, tmp1210, tmp1211, tmp1212, tmp1213, tmp1214, tmp1215, tmp1216, tmp1217, tmp1218, tmp1219, tmp1220, tmp1221, tmp1222, tmp1223, tmp1224, tmp1225, tmp1226, tmp1227, tmp1228, tmp1229, tmp1230, tmp1231, tmp1232, tmp1238, tmp1239);
  }

  if (block82.is_used()) {
    compiler::TNode<RawPtrT> tmp1240;
    compiler::TNode<RawPtrT> tmp1241;
    compiler::TNode<IntPtrT> tmp1242;
    compiler::TNode<Context> tmp1243;
    compiler::TNode<Object> tmp1244;
    compiler::TNode<Object> tmp1245;
    compiler::TNode<Object> tmp1246;
    compiler::TNode<JSTypedArray> tmp1247;
    compiler::TNode<Smi> tmp1248;
    compiler::TNode<JSReceiver> tmp1249;
    compiler::TNode<BuiltinPtr> tmp1250;
    compiler::TNode<BuiltinPtr> tmp1251;
    compiler::TNode<Int32T> tmp1252;
    compiler::TNode<FixedArray> tmp1253;
    compiler::TNode<FixedArray> tmp1254;
    compiler::TNode<Smi> tmp1255;
    compiler::TNode<Context> tmp1256;
    compiler::TNode<JSTypedArray> tmp1257;
    compiler::TNode<Smi> tmp1258;
    compiler::TNode<FixedArray> tmp1259;
    compiler::TNode<IntPtrT> tmp1260;
    compiler::TNode<IntPtrT> tmp1261;
    compiler::TNode<Smi> tmp1262;
    compiler::TNode<Smi> tmp1263;
    compiler::TNode<IntPtrT> tmp1264;
    ca_.Bind(&block82, &tmp1240, &tmp1241, &tmp1242, &tmp1243, &tmp1244, &tmp1245, &tmp1246, &tmp1247, &tmp1248, &tmp1249, &tmp1250, &tmp1251, &tmp1252, &tmp1253, &tmp1254, &tmp1255, &tmp1256, &tmp1257, &tmp1258, &tmp1259, &tmp1260, &tmp1261, &tmp1262, &tmp1263, &tmp1264);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block81.is_used()) {
    compiler::TNode<RawPtrT> tmp1265;
    compiler::TNode<RawPtrT> tmp1266;
    compiler::TNode<IntPtrT> tmp1267;
    compiler::TNode<Context> tmp1268;
    compiler::TNode<Object> tmp1269;
    compiler::TNode<Object> tmp1270;
    compiler::TNode<Object> tmp1271;
    compiler::TNode<JSTypedArray> tmp1272;
    compiler::TNode<Smi> tmp1273;
    compiler::TNode<JSReceiver> tmp1274;
    compiler::TNode<BuiltinPtr> tmp1275;
    compiler::TNode<BuiltinPtr> tmp1276;
    compiler::TNode<Int32T> tmp1277;
    compiler::TNode<FixedArray> tmp1278;
    compiler::TNode<FixedArray> tmp1279;
    compiler::TNode<Smi> tmp1280;
    compiler::TNode<Context> tmp1281;
    compiler::TNode<JSTypedArray> tmp1282;
    compiler::TNode<Smi> tmp1283;
    compiler::TNode<FixedArray> tmp1284;
    compiler::TNode<IntPtrT> tmp1285;
    compiler::TNode<IntPtrT> tmp1286;
    compiler::TNode<Smi> tmp1287;
    compiler::TNode<Smi> tmp1288;
    compiler::TNode<IntPtrT> tmp1289;
    compiler::TNode<HeapObject> tmp1290;
    compiler::TNode<IntPtrT> tmp1291;
    ca_.Bind(&block81, &tmp1265, &tmp1266, &tmp1267, &tmp1268, &tmp1269, &tmp1270, &tmp1271, &tmp1272, &tmp1273, &tmp1274, &tmp1275, &tmp1276, &tmp1277, &tmp1278, &tmp1279, &tmp1280, &tmp1281, &tmp1282, &tmp1283, &tmp1284, &tmp1285, &tmp1286, &tmp1287, &tmp1288, &tmp1289, &tmp1290, &tmp1291);
    ca_.Goto(&block80, tmp1265, tmp1266, tmp1267, tmp1268, tmp1269, tmp1270, tmp1271, tmp1272, tmp1273, tmp1274, tmp1275, tmp1276, tmp1277, tmp1278, tmp1279, tmp1280, tmp1281, tmp1282, tmp1283, tmp1284, tmp1285, tmp1286, tmp1287, tmp1288, tmp1290, tmp1291);
  }

  if (block80.is_used()) {
    compiler::TNode<RawPtrT> tmp1292;
    compiler::TNode<RawPtrT> tmp1293;
    compiler::TNode<IntPtrT> tmp1294;
    compiler::TNode<Context> tmp1295;
    compiler::TNode<Object> tmp1296;
    compiler::TNode<Object> tmp1297;
    compiler::TNode<Object> tmp1298;
    compiler::TNode<JSTypedArray> tmp1299;
    compiler::TNode<Smi> tmp1300;
    compiler::TNode<JSReceiver> tmp1301;
    compiler::TNode<BuiltinPtr> tmp1302;
    compiler::TNode<BuiltinPtr> tmp1303;
    compiler::TNode<Int32T> tmp1304;
    compiler::TNode<FixedArray> tmp1305;
    compiler::TNode<FixedArray> tmp1306;
    compiler::TNode<Smi> tmp1307;
    compiler::TNode<Context> tmp1308;
    compiler::TNode<JSTypedArray> tmp1309;
    compiler::TNode<Smi> tmp1310;
    compiler::TNode<FixedArray> tmp1311;
    compiler::TNode<IntPtrT> tmp1312;
    compiler::TNode<IntPtrT> tmp1313;
    compiler::TNode<Smi> tmp1314;
    compiler::TNode<Smi> tmp1315;
    compiler::TNode<HeapObject> tmp1316;
    compiler::TNode<IntPtrT> tmp1317;
    ca_.Bind(&block80, &tmp1292, &tmp1293, &tmp1294, &tmp1295, &tmp1296, &tmp1297, &tmp1298, &tmp1299, &tmp1300, &tmp1301, &tmp1302, &tmp1303, &tmp1304, &tmp1305, &tmp1306, &tmp1307, &tmp1308, &tmp1309, &tmp1310, &tmp1311, &tmp1312, &tmp1313, &tmp1314, &tmp1315, &tmp1316, &tmp1317);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 374);
    compiler::TNode<Object>tmp1318 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1316, tmp1317});
    compiler::TNode<Object> tmp1319;
    USE(tmp1319);
    tmp1319 = UnsafeCast90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1346(state_, compiler::TNode<Context>{tmp1295}, compiler::TNode<Object>{tmp1318});
    compiler::TNode<Object> tmp1320 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp1303, tmp1308, tmp1309, tmp1310, tmp1319); 
    USE(tmp1320);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 373);
    ca_.Goto(&block79, tmp1292, tmp1293, tmp1294, tmp1295, tmp1296, tmp1297, tmp1298, tmp1299, tmp1300, tmp1301, tmp1302, tmp1303, tmp1304, tmp1305, tmp1306, tmp1307);
  }

  if (block79.is_used()) {
    compiler::TNode<RawPtrT> tmp1321;
    compiler::TNode<RawPtrT> tmp1322;
    compiler::TNode<IntPtrT> tmp1323;
    compiler::TNode<Context> tmp1324;
    compiler::TNode<Object> tmp1325;
    compiler::TNode<Object> tmp1326;
    compiler::TNode<Object> tmp1327;
    compiler::TNode<JSTypedArray> tmp1328;
    compiler::TNode<Smi> tmp1329;
    compiler::TNode<JSReceiver> tmp1330;
    compiler::TNode<BuiltinPtr> tmp1331;
    compiler::TNode<BuiltinPtr> tmp1332;
    compiler::TNode<Int32T> tmp1333;
    compiler::TNode<FixedArray> tmp1334;
    compiler::TNode<FixedArray> tmp1335;
    compiler::TNode<Smi> tmp1336;
    ca_.Bind(&block79, &tmp1321, &tmp1322, &tmp1323, &tmp1324, &tmp1325, &tmp1326, &tmp1327, &tmp1328, &tmp1329, &tmp1330, &tmp1331, &tmp1332, &tmp1333, &tmp1334, &tmp1335, &tmp1336);
    compiler::TNode<Smi> tmp1337;
    USE(tmp1337);
    tmp1337 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp1338;
    USE(tmp1338);
    tmp1338 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1336}, compiler::TNode<Smi>{tmp1337});
    ca_.Goto(&block78, tmp1321, tmp1322, tmp1323, tmp1324, tmp1325, tmp1326, tmp1327, tmp1328, tmp1329, tmp1330, tmp1331, tmp1332, tmp1333, tmp1334, tmp1335, tmp1338);
  }

  if (block77.is_used()) {
    compiler::TNode<RawPtrT> tmp1339;
    compiler::TNode<RawPtrT> tmp1340;
    compiler::TNode<IntPtrT> tmp1341;
    compiler::TNode<Context> tmp1342;
    compiler::TNode<Object> tmp1343;
    compiler::TNode<Object> tmp1344;
    compiler::TNode<Object> tmp1345;
    compiler::TNode<JSTypedArray> tmp1346;
    compiler::TNode<Smi> tmp1347;
    compiler::TNode<JSReceiver> tmp1348;
    compiler::TNode<BuiltinPtr> tmp1349;
    compiler::TNode<BuiltinPtr> tmp1350;
    compiler::TNode<Int32T> tmp1351;
    compiler::TNode<FixedArray> tmp1352;
    compiler::TNode<FixedArray> tmp1353;
    compiler::TNode<Smi> tmp1354;
    ca_.Bind(&block77, &tmp1339, &tmp1340, &tmp1341, &tmp1342, &tmp1343, &tmp1344, &tmp1345, &tmp1346, &tmp1347, &tmp1348, &tmp1349, &tmp1350, &tmp1351, &tmp1352, &tmp1353, &tmp1354);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 376);
    arguments.PopAndReturn(tmp1346);
  }
}

TF_BUILTIN(LoadFixedElement15ATInt32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType15ATInt32Elements_377(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement17ATFloat32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType17ATFloat32Elements_378(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement17ATFloat64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType17ATFloat64Elements_379(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement22ATUint8ClampedElements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType22ATUint8ClampedElements_380(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement19ATBigUint64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType19ATBigUint64Elements_381(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement18ATBigInt64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType18ATBigInt64Elements_382(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement15ATUint8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType15ATUint8Elements_372(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement14ATInt8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType14ATInt8Elements_373(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement16ATUint16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType16ATUint16Elements_374(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement15ATInt16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType15ATInt16Elements_375(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(LoadFixedElement16ATUint32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 195);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    compiler::TNode<Numeric> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType16ATUint32Elements_376(state_)));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement15ATInt32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType15ATInt32Elements_377(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFloat32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType17ATFloat32Elements_378(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFloat64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType17ATFloat64Elements_379(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement22ATUint8ClampedElements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType22ATUint8ClampedElements_380(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement19ATBigUint64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType19ATBigUint64Elements_381(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement18ATBigInt64Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType18ATBigInt64Elements_382(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement15ATUint8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType15ATUint8Elements_372(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement14ATInt8Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType14ATInt8Elements_373(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement16ATUint16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType16ATUint16Elements_374(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement15ATInt16Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType15ATInt16Elements_375(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement16ATUint32Elements, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kTypedArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 202);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 201);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType16ATUint32Elements_376(state_)));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 203);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

}  // namespace internal
}  // namespace v8

