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

compiler::TNode<BuiltinPtr> UnsafeCast52FT7Context12JSTypedArray5ATSmi20UT5ATSmi10HeapObject_317(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 85);
    compiler::TNode<BuiltinPtr> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<BuiltinPtr> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 84);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<BuiltinPtr> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<BuiltinPtr>{tmp8};
}

compiler::TNode<BuiltinPtr> UnsafeCast74FT7Context12JSTypedArray5ATSmi20UT5ATSmi10HeapObject20UT5ATSmi10HeapObject_318(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 88);
    compiler::TNode<BuiltinPtr> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<BuiltinPtr> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 87);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<BuiltinPtr> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return compiler::TNode<BuiltinPtr>{tmp8};
}

compiler::TNode<JSTypedArray> EnsureAttached_319(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array, compiler::CodeAssemblerLabel* label_Detached) {
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 96);
    compiler::TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp1);
    compiler::TNode<JSArrayBuffer>tmp2 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp0, tmp1});
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp2}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 97);
    compiler::TNode<JSTypedArray> tmp6;
    USE(tmp6);
    tmp6 = (compiler::TNode<JSTypedArray>{tmp5});
    ca_.Goto(&block2, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<JSTypedArray> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 94);
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

TorqueStructAttachedJSTypedArrayWitness NewAttachedJSTypedArrayWitness_320(compiler::CodeAssemblerState* state_, compiler::TNode<JSTypedArray> p_array) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, JSTypedArray, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, JSTypedArray, JSTypedArray, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array);

  if (block0.is_used()) {
    compiler::TNode<JSTypedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 126);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp0}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 128);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 129);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 130);
    compiler::TNode<BuiltinPtr> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BuiltinPtr>(GetLoadFnForElementsKind_321(state_, compiler::TNode<Int32T>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 127);
    ca_.Goto(&block1, tmp0, tmp0, tmp0, tmp2);
  }

  if (block1.is_used()) {
    compiler::TNode<JSTypedArray> tmp3;
    compiler::TNode<JSTypedArray> tmp4;
    compiler::TNode<JSTypedArray> tmp5;
    compiler::TNode<BuiltinPtr> tmp6;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 124);
    ca_.Goto(&block2, tmp3, tmp4, tmp5, tmp6);
  }

    compiler::TNode<JSTypedArray> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<JSTypedArray> tmp9;
    compiler::TNode<BuiltinPtr> tmp10;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10);
  return TorqueStructAttachedJSTypedArrayWitness{compiler::TNode<JSTypedArray>{tmp8}, compiler::TNode<JSTypedArray>{tmp9}, compiler::TNode<BuiltinPtr>{tmp10}};
}

compiler::TNode<BuiltinPtr> GetLoadFnForElementsKind_321(compiler::CodeAssemblerState* state_, compiler::TNode<Int32T> p_elementsKind) {
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 135);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsElementsKindGreaterThan(compiler::TNode<Int32T>{tmp0}, UINT32_ELEMENTS));
    ca_.Branch(tmp1, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 136);
    compiler::TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, INT32_ELEMENTS));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp2}, compiler::TNode<Int32T>{tmp3}));
    ca_.Branch(tmp4, &block5, &block6, tmp2);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block5, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 137);
    ca_.Goto(&block1, tmp5, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt32Elements)));
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp6;
    ca_.Bind(&block6, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 138);
    compiler::TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, FLOAT32_ELEMENTS));
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp6}, compiler::TNode<Int32T>{tmp7}));
    ca_.Branch(tmp8, &block8, &block9, tmp6);
  }

  if (block8.is_used()) {
    compiler::TNode<Int32T> tmp9;
    ca_.Bind(&block8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 139);
    ca_.Goto(&block1, tmp9, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat32Elements)));
  }

  if (block9.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 140);
    compiler::TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, FLOAT64_ELEMENTS));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp10}, compiler::TNode<Int32T>{tmp11}));
    ca_.Branch(tmp12, &block11, &block12, tmp10);
  }

  if (block11.is_used()) {
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block11, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 141);
    ca_.Goto(&block1, tmp13, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat64Elements)));
  }

  if (block12.is_used()) {
    compiler::TNode<Int32T> tmp14;
    ca_.Bind(&block12, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 142);
    compiler::TNode<Int32T> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT8_CLAMPED_ELEMENTS));
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp14}, compiler::TNode<Int32T>{tmp15}));
    ca_.Branch(tmp16, &block14, &block15, tmp14);
  }

  if (block14.is_used()) {
    compiler::TNode<Int32T> tmp17;
    ca_.Bind(&block14, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 143);
    ca_.Goto(&block1, tmp17, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement22ATUint8ClampedElements)));
  }

  if (block15.is_used()) {
    compiler::TNode<Int32T> tmp18;
    ca_.Bind(&block15, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 144);
    compiler::TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, BIGUINT64_ELEMENTS));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp18}, compiler::TNode<Int32T>{tmp19}));
    ca_.Branch(tmp20, &block17, &block18, tmp18);
  }

  if (block17.is_used()) {
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block17, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 145);
    ca_.Goto(&block1, tmp21, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement19ATBigUint64Elements)));
  }

  if (block18.is_used()) {
    compiler::TNode<Int32T> tmp22;
    ca_.Bind(&block18, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 146);
    compiler::TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, BIGINT64_ELEMENTS));
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp22}, compiler::TNode<Int32T>{tmp23}));
    ca_.Branch(tmp24, &block20, &block21, tmp22);
  }

  if (block20.is_used()) {
    compiler::TNode<Int32T> tmp25;
    ca_.Bind(&block20, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 147);
    ca_.Goto(&block1, tmp25, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement18ATBigInt64Elements)));
  }

  if (block21.is_used()) {
    compiler::TNode<Int32T> tmp26;
    ca_.Bind(&block21, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 149);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block3, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 152);
    compiler::TNode<Int32T> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT8_ELEMENTS));
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp27}, compiler::TNode<Int32T>{tmp28}));
    ca_.Branch(tmp29, &block23, &block24, tmp27);
  }

  if (block23.is_used()) {
    compiler::TNode<Int32T> tmp30;
    ca_.Bind(&block23, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 153);
    ca_.Goto(&block1, tmp30, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATUint8Elements)));
  }

  if (block24.is_used()) {
    compiler::TNode<Int32T> tmp31;
    ca_.Bind(&block24, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 154);
    compiler::TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, INT8_ELEMENTS));
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp31}, compiler::TNode<Int32T>{tmp32}));
    ca_.Branch(tmp33, &block26, &block27, tmp31);
  }

  if (block26.is_used()) {
    compiler::TNode<Int32T> tmp34;
    ca_.Bind(&block26, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 155);
    ca_.Goto(&block1, tmp34, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement14ATInt8Elements)));
  }

  if (block27.is_used()) {
    compiler::TNode<Int32T> tmp35;
    ca_.Bind(&block27, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 156);
    compiler::TNode<Int32T> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT16_ELEMENTS));
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp35}, compiler::TNode<Int32T>{tmp36}));
    ca_.Branch(tmp37, &block29, &block30, tmp35);
  }

  if (block29.is_used()) {
    compiler::TNode<Int32T> tmp38;
    ca_.Bind(&block29, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 157);
    ca_.Goto(&block1, tmp38, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint16Elements)));
  }

  if (block30.is_used()) {
    compiler::TNode<Int32T> tmp39;
    ca_.Bind(&block30, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 158);
    compiler::TNode<Int32T> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, INT16_ELEMENTS));
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp39}, compiler::TNode<Int32T>{tmp40}));
    ca_.Branch(tmp41, &block32, &block33, tmp39);
  }

  if (block32.is_used()) {
    compiler::TNode<Int32T> tmp42;
    ca_.Bind(&block32, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 159);
    ca_.Goto(&block1, tmp42, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt16Elements)));
  }

  if (block33.is_used()) {
    compiler::TNode<Int32T> tmp43;
    ca_.Bind(&block33, &tmp43);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 160);
    compiler::TNode<Int32T> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT32_ELEMENTS));
    compiler::TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp43}, compiler::TNode<Int32T>{tmp44}));
    ca_.Branch(tmp45, &block35, &block36, tmp43);
  }

  if (block35.is_used()) {
    compiler::TNode<Int32T> tmp46;
    ca_.Bind(&block35, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 161);
    ca_.Goto(&block1, tmp46, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint32Elements)));
  }

  if (block36.is_used()) {
    compiler::TNode<Int32T> tmp47;
    ca_.Bind(&block36, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 163);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Int32T> tmp48;
    compiler::TNode<BuiltinPtr> tmp49;
    ca_.Bind(&block1, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 134);
    ca_.Goto(&block38, tmp48, tmp49);
  }

    compiler::TNode<Int32T> tmp50;
    compiler::TNode<BuiltinPtr> tmp51;
    ca_.Bind(&block38, &tmp50, &tmp51);
  return compiler::TNode<BuiltinPtr>{tmp51};
}

ElementsKind KindForArrayType15ATUint8Elements_322(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 170);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 169);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT8_ELEMENTS;
}

ElementsKind KindForArrayType14ATInt8Elements_323(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 173);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 172);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT8_ELEMENTS;
}

ElementsKind KindForArrayType16ATUint16Elements_324(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 176);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 175);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT16_ELEMENTS;
}

ElementsKind KindForArrayType15ATInt16Elements_325(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 179);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 178);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT16_ELEMENTS;
}

ElementsKind KindForArrayType16ATUint32Elements_326(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 182);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 181);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT32_ELEMENTS;
}

ElementsKind KindForArrayType15ATInt32Elements_327(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 185);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 184);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return INT32_ELEMENTS;
}

ElementsKind KindForArrayType17ATFloat32Elements_328(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 188);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 187);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return FLOAT32_ELEMENTS;
}

ElementsKind KindForArrayType17ATFloat64Elements_329(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 191);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 190);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return FLOAT64_ELEMENTS;
}

ElementsKind KindForArrayType22ATUint8ClampedElements_330(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 194);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 193);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return UINT8_CLAMPED_ELEMENTS;
}

ElementsKind KindForArrayType19ATBigUint64Elements_331(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 197);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 196);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return BIGUINT64_ELEMENTS;
}

ElementsKind KindForArrayType18ATBigInt64Elements_332(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 200);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 199);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return BIGINT64_ELEMENTS;
}

compiler::TNode<Number> CallCompare_333(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b) {
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 223);
    compiler::TNode<Oddball> tmp5;
    USE(tmp5);
    tmp5 = Undefined_70(state_);
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp0}, compiler::TNode<JSReceiver>{tmp2}, compiler::TNode<Object>{tmp5}, compiler::TNode<Object>{tmp3}, compiler::TNode<Object>{tmp4}));
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp6}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 222);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 226);
    compiler::TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp8);
    compiler::TNode<JSArrayBuffer>tmp9 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp8});
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp9}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 227);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 231);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<BoolT>(NumberIsNaN_216(state_, compiler::TNode<Number>{tmp22}));
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
    tmp30 = ca_.UncheckedCast<Number>(FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_137(state_, 0));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 234);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 218);
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

void TypedArrayMerge_334(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<FixedArray> p_source, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_middle, compiler::TNode<Smi> p_to, compiler::TNode<FixedArray> p_target) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, FixedArray, Smi, Smi, Smi, FixedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 243);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 244);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 246);
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
    tmp19 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp18}, compiler::TNode<Smi>{tmp14}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp28}, compiler::TNode<Smi>{tmp25}));
    ca_.Branch(tmp31, &block8, &block7, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30);
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
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    compiler::TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp41}, compiler::TNode<Smi>{tmp38}));
    ca_.Branch(tmp43, &block6, &block7, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSTypedArray> tmp45;
    compiler::TNode<JSReceiver> tmp46;
    compiler::TNode<FixedArray> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<FixedArray> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Smi> tmp54;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 250);
    compiler::TNode<Smi> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp52}, compiler::TNode<Smi>{tmp55}));
    compiler::TNode<Object> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp47}, compiler::TNode<Smi>{tmp52}));
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp51}, compiler::TNode<Smi>{tmp54}, compiler::TNode<Object>{tmp57});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    ca_.Goto(&block9, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp56, tmp53, tmp54);
  }

  if (block7.is_used()) {
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
    ca_.Bind(&block7, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 251);
    compiler::TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp66}, compiler::TNode<Smi>{tmp63}));
    ca_.Branch(tmp69, &block10, &block11, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<JSTypedArray> tmp71;
    compiler::TNode<JSReceiver> tmp72;
    compiler::TNode<FixedArray> tmp73;
    compiler::TNode<Smi> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<FixedArray> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Smi> tmp80;
    ca_.Bind(&block10, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 253);
    compiler::TNode<Object> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp73}, compiler::TNode<Smi>{tmp78}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 254);
    compiler::TNode<Object> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp73}, compiler::TNode<Smi>{tmp79}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 255);
    compiler::TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Number>(CallCompare_333(state_, compiler::TNode<Context>{tmp70}, compiler::TNode<JSTypedArray>{tmp71}, compiler::TNode<JSReceiver>{tmp72}, compiler::TNode<Object>{tmp81}, compiler::TNode<Object>{tmp82}));
    compiler::TNode<Number> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<Number>(FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_137(state_, 0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp83}, compiler::TNode<Number>{tmp84}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block16, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83);
    }
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSTypedArray> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<FixedArray> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<FixedArray> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<Number> tmp98;
    ca_.Bind(&block15, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block13, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp99;
    compiler::TNode<JSTypedArray> tmp100;
    compiler::TNode<JSReceiver> tmp101;
    compiler::TNode<FixedArray> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<FixedArray> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Smi> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Number> tmp112;
    ca_.Bind(&block16, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.Goto(&block14, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<JSTypedArray> tmp114;
    compiler::TNode<JSReceiver> tmp115;
    compiler::TNode<FixedArray> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<FixedArray> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Smi> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Object> tmp125;
    ca_.Bind(&block13, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 256);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp120}, compiler::TNode<Smi>{tmp123}, compiler::TNode<Object>{tmp124});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 257);
    compiler::TNode<Smi> tmp126;
    USE(tmp126);
    tmp126 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp127;
    USE(tmp127);
    tmp127 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp121}, compiler::TNode<Smi>{tmp126}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 255);
    ca_.Goto(&block17, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp127, tmp122, tmp123, tmp124, tmp125);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<JSTypedArray> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<FixedArray> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<FixedArray> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    ca_.Bind(&block14, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 259);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp135}, compiler::TNode<Smi>{tmp138}, compiler::TNode<Object>{tmp140});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 260);
    compiler::TNode<Smi> tmp141;
    USE(tmp141);
    tmp141 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp142;
    USE(tmp142);
    tmp142 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp137}, compiler::TNode<Smi>{tmp141}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 255);
    ca_.Goto(&block17, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp142, tmp138, tmp139, tmp140);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<JSTypedArray> tmp144;
    compiler::TNode<JSReceiver> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<FixedArray> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    ca_.Bind(&block17, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 251);
    ca_.Goto(&block12, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<JSTypedArray> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<FixedArray> tmp159;
    compiler::TNode<Smi> tmp160;
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<FixedArray> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Smi> tmp166;
    ca_.Bind(&block11, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 266);
    compiler::TNode<Smi> tmp167;
    USE(tmp167);
    tmp167 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp168;
    USE(tmp168);
    tmp168 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp165}, compiler::TNode<Smi>{tmp167}));
    compiler::TNode<Object> tmp169;
    USE(tmp169);
    tmp169 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp159}, compiler::TNode<Smi>{tmp165}));
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp163}, compiler::TNode<Smi>{tmp166}, compiler::TNode<Object>{tmp169});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 251);
    ca_.Goto(&block12, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp168, tmp166);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp170;
    compiler::TNode<JSTypedArray> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<FixedArray> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<FixedArray> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Smi> tmp180;
    ca_.Bind(&block12, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 247);
    ca_.Goto(&block9, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp181;
    compiler::TNode<JSTypedArray> tmp182;
    compiler::TNode<JSReceiver> tmp183;
    compiler::TNode<FixedArray> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<FixedArray> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Smi> tmp191;
    ca_.Bind(&block9, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 246);
    ca_.Goto(&block5, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp192;
    compiler::TNode<JSTypedArray> tmp193;
    compiler::TNode<JSReceiver> tmp194;
    compiler::TNode<FixedArray> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<Smi> tmp198;
    compiler::TNode<FixedArray> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<Smi> tmp202;
    ca_.Bind(&block5, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    compiler::TNode<Smi> tmp203;
    USE(tmp203);
    tmp203 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp204;
    USE(tmp204);
    tmp204 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp202}, compiler::TNode<Smi>{tmp203}));
    ca_.Goto(&block4, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp204);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<JSTypedArray> tmp206;
    compiler::TNode<JSReceiver> tmp207;
    compiler::TNode<FixedArray> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<FixedArray> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Smi> tmp215;
    ca_.Bind(&block3, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 242);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 239);
    ca_.Goto(&block1, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp216;
    compiler::TNode<JSTypedArray> tmp217;
    compiler::TNode<JSReceiver> tmp218;
    compiler::TNode<FixedArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Smi> tmp222;
    compiler::TNode<FixedArray> tmp223;
    ca_.Bind(&block1, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.Goto(&block18, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223);
  }

    compiler::TNode<Context> tmp224;
    compiler::TNode<JSTypedArray> tmp225;
    compiler::TNode<JSReceiver> tmp226;
    compiler::TNode<FixedArray> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<FixedArray> tmp231;
    ca_.Bind(&block18, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 276);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp5}, compiler::TNode<Smi>{tmp4}));
    compiler::TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSar(compiler::TNode<Smi>{tmp7}, 1));
    compiler::TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp4}, compiler::TNode<Smi>{tmp8}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 281);
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp9}, compiler::TNode<Smi>{tmp4}));
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 282);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp29}));
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp30}, compiler::TNode<Smi>{tmp31}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 284);
    TypedArrayMerge_334(state_, compiler::TNode<Context>{tmp42}, compiler::TNode<JSTypedArray>{tmp43}, compiler::TNode<JSReceiver>{tmp44}, compiler::TNode<FixedArray>{tmp45}, compiler::TNode<Smi>{tmp46}, compiler::TNode<Smi>{tmp49}, compiler::TNode<Smi>{tmp47}, compiler::TNode<FixedArray>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 286);
    compiler::TNode<Oddball> tmp50;
    USE(tmp50);
    tmp50 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp50);
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Number, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, Object, JSReceiver> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSTypedArray, Smi, JSReceiver, BuiltinPtr, BuiltinPtr, Int32T, FixedArray, FixedArray, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 295);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp9}, compiler::TNode<RawPtrT>{tmp10}, compiler::TNode<IntPtrT>{tmp11}}, compiler::TNode<IntPtrT>{tmp12}));
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    compiler::TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_70(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 294);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 296);
    compiler::TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp31}, compiler::TNode<HeapObject>{tmp32}));
    ca_.Branch(tmp33, &block7, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<Object> tmp39;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).TaggedIsCallable(compiler::TNode<Object>{tmp39}));
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp40}));
    ca_.Branch(tmp41, &block5, &block6, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<IntPtrT> tmp46;
    compiler::TNode<Object> tmp47;
    ca_.Bind(&block5, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 297);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp42}, MessageTemplate::kBadSortComparisonFunction, compiler::TNode<Object>{tmp47});
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<Object> tmp53;
    ca_.Bind(&block6, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 301);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 306);
    compiler::TNode<JSTypedArray> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<JSTypedArray>(TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp48}, compiler::TNode<Object>{tmp49}, "%TypedArray%.prototype.sort"));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 305);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 309);
    compiler::TNode<Oddball> tmp55;
    USE(tmp55);
    tmp55 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp53}, compiler::TNode<HeapObject>{tmp55}));
    ca_.Branch(tmp56, &block8, &block9, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp49, tmp54);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSTypedArray> tmp64;
    ca_.Bind(&block8, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 310);
    compiler::TNode<JSTypedArray> tmp65;
    tmp65 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArraySortFast, tmp57, tmp63)); 
    USE(tmp65);
    arguments.PopAndReturn(tmp65);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    ca_.Bind(&block9, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 315);
    compiler::TNode<IntPtrT> tmp74 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp74);
    compiler::TNode<UintPtrT>tmp75 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp73, tmp74});
    compiler::TNode<Number> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<Number>(Convert20UT5ATSmi10HeapNumber9ATuintptr_178(state_, compiler::TNode<UintPtrT>{tmp75}));
    compiler::TNode<Smi> tmp77;
    USE(tmp77);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp77 = Cast5ATSmi_84(state_, compiler::TNode<Object>{tmp76}, &label0);
    ca_.Goto(&block12, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp76, tmp77);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp76);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<RawPtrT> tmp80;
    compiler::TNode<RawPtrT> tmp81;
    compiler::TNode<IntPtrT> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<JSTypedArray> tmp85;
    compiler::TNode<Number> tmp86;
    ca_.Bind(&block13, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.Goto(&block11, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<RawPtrT> tmp89;
    compiler::TNode<RawPtrT> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<JSTypedArray> tmp94;
    compiler::TNode<Number> tmp95;
    compiler::TNode<Smi> tmp96;
    ca_.Bind(&block12, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block10, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp96);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<RawPtrT> tmp99;
    compiler::TNode<RawPtrT> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<JSTypedArray> tmp104;
    ca_.Bind(&block11, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<RawPtrT> tmp107;
    compiler::TNode<RawPtrT> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSTypedArray> tmp112;
    compiler::TNode<Smi> tmp113;
    ca_.Bind(&block10, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 318);
    compiler::TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 2));
    compiler::TNode<BoolT> tmp115;
    USE(tmp115);
    tmp115 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp113}, compiler::TNode<Smi>{tmp114}));
    ca_.Branch(tmp115, &block14, &block15, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<RawPtrT> tmp118;
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<IntPtrT> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<JSTypedArray> tmp123;
    compiler::TNode<Smi> tmp124;
    ca_.Bind(&block14, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    arguments.PopAndReturn(tmp123);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<RawPtrT> tmp127;
    compiler::TNode<RawPtrT> tmp128;
    compiler::TNode<IntPtrT> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<JSTypedArray> tmp132;
    compiler::TNode<Smi> tmp133;
    ca_.Bind(&block15, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 321);
    compiler::TNode<JSReceiver> tmp134;
    USE(tmp134);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp134 = Cast39UT15JSBoundFunction10JSFunction7JSProxy_1171(state_, compiler::TNode<Context>{tmp125}, compiler::TNode<Object>{tmp130}, &label0);
    ca_.Goto(&block18, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp130, tmp134);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block19, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp130);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<RawPtrT> tmp137;
    compiler::TNode<RawPtrT> tmp138;
    compiler::TNode<IntPtrT> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSTypedArray> tmp142;
    compiler::TNode<Smi> tmp143;
    compiler::TNode<Object> tmp144;
    ca_.Bind(&block19, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144);
    ca_.Goto(&block17, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<RawPtrT> tmp147;
    compiler::TNode<RawPtrT> tmp148;
    compiler::TNode<IntPtrT> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<JSTypedArray> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<JSReceiver> tmp155;
    ca_.Bind(&block18, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.Goto(&block16, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp155);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<RawPtrT> tmp158;
    compiler::TNode<RawPtrT> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<JSTypedArray> tmp163;
    compiler::TNode<Smi> tmp164;
    ca_.Bind(&block17, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<RawPtrT> tmp167;
    compiler::TNode<RawPtrT> tmp168;
    compiler::TNode<IntPtrT> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<JSTypedArray> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<JSReceiver> tmp174;
    ca_.Bind(&block16, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 320);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 322);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 323);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 325);
    compiler::TNode<Int32T> tmp175;
    USE(tmp175);
    tmp175 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp172}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    compiler::TNode<BoolT> tmp176;
    USE(tmp176);
    tmp176 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsElementsKindGreaterThan(compiler::TNode<Int32T>{tmp175}, UINT32_ELEMENTS));
    ca_.Branch(tmp176, &block20, &block21, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, ca_.Uninitialized<BuiltinPtr>(), ca_.Uninitialized<BuiltinPtr>(), tmp175);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<RawPtrT> tmp179;
    compiler::TNode<RawPtrT> tmp180;
    compiler::TNode<IntPtrT> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<JSTypedArray> tmp184;
    compiler::TNode<Smi> tmp185;
    compiler::TNode<JSReceiver> tmp186;
    compiler::TNode<BuiltinPtr> tmp187;
    compiler::TNode<BuiltinPtr> tmp188;
    compiler::TNode<Int32T> tmp189;
    ca_.Bind(&block20, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    compiler::TNode<Int32T> tmp190;
    USE(tmp190);
    tmp190 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, INT32_ELEMENTS));
    compiler::TNode<BoolT> tmp191;
    USE(tmp191);
    tmp191 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp189}, compiler::TNode<Int32T>{tmp190}));
    ca_.Branch(tmp191, &block23, &block24, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<RawPtrT> tmp194;
    compiler::TNode<RawPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<JSTypedArray> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<JSReceiver> tmp201;
    compiler::TNode<BuiltinPtr> tmp202;
    compiler::TNode<BuiltinPtr> tmp203;
    compiler::TNode<Int32T> tmp204;
    ca_.Bind(&block23, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 329);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 330);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    ca_.Goto(&block25, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATInt32Elements)), tmp204);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<RawPtrT> tmp207;
    compiler::TNode<RawPtrT> tmp208;
    compiler::TNode<IntPtrT> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<JSTypedArray> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    compiler::TNode<BuiltinPtr> tmp215;
    compiler::TNode<BuiltinPtr> tmp216;
    compiler::TNode<Int32T> tmp217;
    ca_.Bind(&block24, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 331);
    compiler::TNode<Int32T> tmp218;
    USE(tmp218);
    tmp218 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, FLOAT32_ELEMENTS));
    compiler::TNode<BoolT> tmp219;
    USE(tmp219);
    tmp219 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp217}, compiler::TNode<Int32T>{tmp218}));
    ca_.Branch(tmp219, &block26, &block27, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp220;
    compiler::TNode<Object> tmp221;
    compiler::TNode<RawPtrT> tmp222;
    compiler::TNode<RawPtrT> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<Object> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<JSTypedArray> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<JSReceiver> tmp229;
    compiler::TNode<BuiltinPtr> tmp230;
    compiler::TNode<BuiltinPtr> tmp231;
    compiler::TNode<Int32T> tmp232;
    ca_.Bind(&block26, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 332);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 333);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 331);
    ca_.Goto(&block28, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement17ATFloat32Elements)), tmp232);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp233;
    compiler::TNode<Object> tmp234;
    compiler::TNode<RawPtrT> tmp235;
    compiler::TNode<RawPtrT> tmp236;
    compiler::TNode<IntPtrT> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<Object> tmp239;
    compiler::TNode<JSTypedArray> tmp240;
    compiler::TNode<Smi> tmp241;
    compiler::TNode<JSReceiver> tmp242;
    compiler::TNode<BuiltinPtr> tmp243;
    compiler::TNode<BuiltinPtr> tmp244;
    compiler::TNode<Int32T> tmp245;
    ca_.Bind(&block27, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 334);
    compiler::TNode<Int32T> tmp246;
    USE(tmp246);
    tmp246 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, FLOAT64_ELEMENTS));
    compiler::TNode<BoolT> tmp247;
    USE(tmp247);
    tmp247 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp245}, compiler::TNode<Int32T>{tmp246}));
    ca_.Branch(tmp247, &block29, &block30, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp248;
    compiler::TNode<Object> tmp249;
    compiler::TNode<RawPtrT> tmp250;
    compiler::TNode<RawPtrT> tmp251;
    compiler::TNode<IntPtrT> tmp252;
    compiler::TNode<Object> tmp253;
    compiler::TNode<Object> tmp254;
    compiler::TNode<JSTypedArray> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<JSReceiver> tmp257;
    compiler::TNode<BuiltinPtr> tmp258;
    compiler::TNode<BuiltinPtr> tmp259;
    compiler::TNode<Int32T> tmp260;
    ca_.Bind(&block29, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 335);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 336);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 334);
    ca_.Goto(&block31, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement17ATFloat64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement17ATFloat64Elements)), tmp260);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp261;
    compiler::TNode<Object> tmp262;
    compiler::TNode<RawPtrT> tmp263;
    compiler::TNode<RawPtrT> tmp264;
    compiler::TNode<IntPtrT> tmp265;
    compiler::TNode<Object> tmp266;
    compiler::TNode<Object> tmp267;
    compiler::TNode<JSTypedArray> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<JSReceiver> tmp270;
    compiler::TNode<BuiltinPtr> tmp271;
    compiler::TNode<BuiltinPtr> tmp272;
    compiler::TNode<Int32T> tmp273;
    ca_.Bind(&block30, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 337);
    compiler::TNode<Int32T> tmp274;
    USE(tmp274);
    tmp274 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT8_CLAMPED_ELEMENTS));
    compiler::TNode<BoolT> tmp275;
    USE(tmp275);
    tmp275 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp273}, compiler::TNode<Int32T>{tmp274}));
    ca_.Branch(tmp275, &block32, &block33, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp276;
    compiler::TNode<Object> tmp277;
    compiler::TNode<RawPtrT> tmp278;
    compiler::TNode<RawPtrT> tmp279;
    compiler::TNode<IntPtrT> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<Object> tmp282;
    compiler::TNode<JSTypedArray> tmp283;
    compiler::TNode<Smi> tmp284;
    compiler::TNode<JSReceiver> tmp285;
    compiler::TNode<BuiltinPtr> tmp286;
    compiler::TNode<BuiltinPtr> tmp287;
    compiler::TNode<Int32T> tmp288;
    ca_.Bind(&block32, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 338);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 339);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 337);
    ca_.Goto(&block34, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement22ATUint8ClampedElements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement22ATUint8ClampedElements)), tmp288);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp289;
    compiler::TNode<Object> tmp290;
    compiler::TNode<RawPtrT> tmp291;
    compiler::TNode<RawPtrT> tmp292;
    compiler::TNode<IntPtrT> tmp293;
    compiler::TNode<Object> tmp294;
    compiler::TNode<Object> tmp295;
    compiler::TNode<JSTypedArray> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<JSReceiver> tmp298;
    compiler::TNode<BuiltinPtr> tmp299;
    compiler::TNode<BuiltinPtr> tmp300;
    compiler::TNode<Int32T> tmp301;
    ca_.Bind(&block33, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 340);
    compiler::TNode<Int32T> tmp302;
    USE(tmp302);
    tmp302 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, BIGUINT64_ELEMENTS));
    compiler::TNode<BoolT> tmp303;
    USE(tmp303);
    tmp303 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp301}, compiler::TNode<Int32T>{tmp302}));
    ca_.Branch(tmp303, &block35, &block36, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp304;
    compiler::TNode<Object> tmp305;
    compiler::TNode<RawPtrT> tmp306;
    compiler::TNode<RawPtrT> tmp307;
    compiler::TNode<IntPtrT> tmp308;
    compiler::TNode<Object> tmp309;
    compiler::TNode<Object> tmp310;
    compiler::TNode<JSTypedArray> tmp311;
    compiler::TNode<Smi> tmp312;
    compiler::TNode<JSReceiver> tmp313;
    compiler::TNode<BuiltinPtr> tmp314;
    compiler::TNode<BuiltinPtr> tmp315;
    compiler::TNode<Int32T> tmp316;
    ca_.Bind(&block35, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 341);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 342);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 340);
    ca_.Goto(&block37, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement19ATBigUint64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement19ATBigUint64Elements)), tmp316);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp317;
    compiler::TNode<Object> tmp318;
    compiler::TNode<RawPtrT> tmp319;
    compiler::TNode<RawPtrT> tmp320;
    compiler::TNode<IntPtrT> tmp321;
    compiler::TNode<Object> tmp322;
    compiler::TNode<Object> tmp323;
    compiler::TNode<JSTypedArray> tmp324;
    compiler::TNode<Smi> tmp325;
    compiler::TNode<JSReceiver> tmp326;
    compiler::TNode<BuiltinPtr> tmp327;
    compiler::TNode<BuiltinPtr> tmp328;
    compiler::TNode<Int32T> tmp329;
    ca_.Bind(&block36, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 343);
    compiler::TNode<Int32T> tmp330;
    USE(tmp330);
    tmp330 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, BIGINT64_ELEMENTS));
    compiler::TNode<BoolT> tmp331;
    USE(tmp331);
    tmp331 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp329}, compiler::TNode<Int32T>{tmp330}));
    ca_.Branch(tmp331, &block38, &block39, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp332;
    compiler::TNode<Object> tmp333;
    compiler::TNode<RawPtrT> tmp334;
    compiler::TNode<RawPtrT> tmp335;
    compiler::TNode<IntPtrT> tmp336;
    compiler::TNode<Object> tmp337;
    compiler::TNode<Object> tmp338;
    compiler::TNode<JSTypedArray> tmp339;
    compiler::TNode<Smi> tmp340;
    compiler::TNode<JSReceiver> tmp341;
    compiler::TNode<BuiltinPtr> tmp342;
    compiler::TNode<BuiltinPtr> tmp343;
    compiler::TNode<Int32T> tmp344;
    ca_.Bind(&block38, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 344);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 345);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 343);
    ca_.Goto(&block40, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement18ATBigInt64Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement18ATBigInt64Elements)), tmp344);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp345;
    compiler::TNode<Object> tmp346;
    compiler::TNode<RawPtrT> tmp347;
    compiler::TNode<RawPtrT> tmp348;
    compiler::TNode<IntPtrT> tmp349;
    compiler::TNode<Object> tmp350;
    compiler::TNode<Object> tmp351;
    compiler::TNode<JSTypedArray> tmp352;
    compiler::TNode<Smi> tmp353;
    compiler::TNode<JSReceiver> tmp354;
    compiler::TNode<BuiltinPtr> tmp355;
    compiler::TNode<BuiltinPtr> tmp356;
    compiler::TNode<Int32T> tmp357;
    ca_.Bind(&block39, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 347);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp358;
    compiler::TNode<Object> tmp359;
    compiler::TNode<RawPtrT> tmp360;
    compiler::TNode<RawPtrT> tmp361;
    compiler::TNode<IntPtrT> tmp362;
    compiler::TNode<Object> tmp363;
    compiler::TNode<Object> tmp364;
    compiler::TNode<JSTypedArray> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<JSReceiver> tmp367;
    compiler::TNode<BuiltinPtr> tmp368;
    compiler::TNode<BuiltinPtr> tmp369;
    compiler::TNode<Int32T> tmp370;
    ca_.Bind(&block40, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 340);
    ca_.Goto(&block37, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp371;
    compiler::TNode<Object> tmp372;
    compiler::TNode<RawPtrT> tmp373;
    compiler::TNode<RawPtrT> tmp374;
    compiler::TNode<IntPtrT> tmp375;
    compiler::TNode<Object> tmp376;
    compiler::TNode<Object> tmp377;
    compiler::TNode<JSTypedArray> tmp378;
    compiler::TNode<Smi> tmp379;
    compiler::TNode<JSReceiver> tmp380;
    compiler::TNode<BuiltinPtr> tmp381;
    compiler::TNode<BuiltinPtr> tmp382;
    compiler::TNode<Int32T> tmp383;
    ca_.Bind(&block37, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 337);
    ca_.Goto(&block34, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp384;
    compiler::TNode<Object> tmp385;
    compiler::TNode<RawPtrT> tmp386;
    compiler::TNode<RawPtrT> tmp387;
    compiler::TNode<IntPtrT> tmp388;
    compiler::TNode<Object> tmp389;
    compiler::TNode<Object> tmp390;
    compiler::TNode<JSTypedArray> tmp391;
    compiler::TNode<Smi> tmp392;
    compiler::TNode<JSReceiver> tmp393;
    compiler::TNode<BuiltinPtr> tmp394;
    compiler::TNode<BuiltinPtr> tmp395;
    compiler::TNode<Int32T> tmp396;
    ca_.Bind(&block34, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 334);
    ca_.Goto(&block31, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<RawPtrT> tmp399;
    compiler::TNode<RawPtrT> tmp400;
    compiler::TNode<IntPtrT> tmp401;
    compiler::TNode<Object> tmp402;
    compiler::TNode<Object> tmp403;
    compiler::TNode<JSTypedArray> tmp404;
    compiler::TNode<Smi> tmp405;
    compiler::TNode<JSReceiver> tmp406;
    compiler::TNode<BuiltinPtr> tmp407;
    compiler::TNode<BuiltinPtr> tmp408;
    compiler::TNode<Int32T> tmp409;
    ca_.Bind(&block31, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 331);
    ca_.Goto(&block28, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp410;
    compiler::TNode<Object> tmp411;
    compiler::TNode<RawPtrT> tmp412;
    compiler::TNode<RawPtrT> tmp413;
    compiler::TNode<IntPtrT> tmp414;
    compiler::TNode<Object> tmp415;
    compiler::TNode<Object> tmp416;
    compiler::TNode<JSTypedArray> tmp417;
    compiler::TNode<Smi> tmp418;
    compiler::TNode<JSReceiver> tmp419;
    compiler::TNode<BuiltinPtr> tmp420;
    compiler::TNode<BuiltinPtr> tmp421;
    compiler::TNode<Int32T> tmp422;
    ca_.Bind(&block28, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 328);
    ca_.Goto(&block25, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp423;
    compiler::TNode<Object> tmp424;
    compiler::TNode<RawPtrT> tmp425;
    compiler::TNode<RawPtrT> tmp426;
    compiler::TNode<IntPtrT> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<Object> tmp429;
    compiler::TNode<JSTypedArray> tmp430;
    compiler::TNode<Smi> tmp431;
    compiler::TNode<JSReceiver> tmp432;
    compiler::TNode<BuiltinPtr> tmp433;
    compiler::TNode<BuiltinPtr> tmp434;
    compiler::TNode<Int32T> tmp435;
    ca_.Bind(&block25, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    ca_.Goto(&block22, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<RawPtrT> tmp438;
    compiler::TNode<RawPtrT> tmp439;
    compiler::TNode<IntPtrT> tmp440;
    compiler::TNode<Object> tmp441;
    compiler::TNode<Object> tmp442;
    compiler::TNode<JSTypedArray> tmp443;
    compiler::TNode<Smi> tmp444;
    compiler::TNode<JSReceiver> tmp445;
    compiler::TNode<BuiltinPtr> tmp446;
    compiler::TNode<BuiltinPtr> tmp447;
    compiler::TNode<Int32T> tmp448;
    ca_.Bind(&block21, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 350);
    compiler::TNode<Int32T> tmp449;
    USE(tmp449);
    tmp449 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT8_ELEMENTS));
    compiler::TNode<BoolT> tmp450;
    USE(tmp450);
    tmp450 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp448}, compiler::TNode<Int32T>{tmp449}));
    ca_.Branch(tmp450, &block41, &block42, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp451;
    compiler::TNode<Object> tmp452;
    compiler::TNode<RawPtrT> tmp453;
    compiler::TNode<RawPtrT> tmp454;
    compiler::TNode<IntPtrT> tmp455;
    compiler::TNode<Object> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<JSTypedArray> tmp458;
    compiler::TNode<Smi> tmp459;
    compiler::TNode<JSReceiver> tmp460;
    compiler::TNode<BuiltinPtr> tmp461;
    compiler::TNode<BuiltinPtr> tmp462;
    compiler::TNode<Int32T> tmp463;
    ca_.Bind(&block41, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 351);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 352);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 350);
    ca_.Goto(&block43, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATUint8Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATUint8Elements)), tmp463);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp464;
    compiler::TNode<Object> tmp465;
    compiler::TNode<RawPtrT> tmp466;
    compiler::TNode<RawPtrT> tmp467;
    compiler::TNode<IntPtrT> tmp468;
    compiler::TNode<Object> tmp469;
    compiler::TNode<Object> tmp470;
    compiler::TNode<JSTypedArray> tmp471;
    compiler::TNode<Smi> tmp472;
    compiler::TNode<JSReceiver> tmp473;
    compiler::TNode<BuiltinPtr> tmp474;
    compiler::TNode<BuiltinPtr> tmp475;
    compiler::TNode<Int32T> tmp476;
    ca_.Bind(&block42, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 353);
    compiler::TNode<Int32T> tmp477;
    USE(tmp477);
    tmp477 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, INT8_ELEMENTS));
    compiler::TNode<BoolT> tmp478;
    USE(tmp478);
    tmp478 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp476}, compiler::TNode<Int32T>{tmp477}));
    ca_.Branch(tmp478, &block44, &block45, tmp464, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp479;
    compiler::TNode<Object> tmp480;
    compiler::TNode<RawPtrT> tmp481;
    compiler::TNode<RawPtrT> tmp482;
    compiler::TNode<IntPtrT> tmp483;
    compiler::TNode<Object> tmp484;
    compiler::TNode<Object> tmp485;
    compiler::TNode<JSTypedArray> tmp486;
    compiler::TNode<Smi> tmp487;
    compiler::TNode<JSReceiver> tmp488;
    compiler::TNode<BuiltinPtr> tmp489;
    compiler::TNode<BuiltinPtr> tmp490;
    compiler::TNode<Int32T> tmp491;
    ca_.Bind(&block44, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 354);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 355);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 353);
    ca_.Goto(&block46, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement14ATInt8Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement14ATInt8Elements)), tmp491);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp492;
    compiler::TNode<Object> tmp493;
    compiler::TNode<RawPtrT> tmp494;
    compiler::TNode<RawPtrT> tmp495;
    compiler::TNode<IntPtrT> tmp496;
    compiler::TNode<Object> tmp497;
    compiler::TNode<Object> tmp498;
    compiler::TNode<JSTypedArray> tmp499;
    compiler::TNode<Smi> tmp500;
    compiler::TNode<JSReceiver> tmp501;
    compiler::TNode<BuiltinPtr> tmp502;
    compiler::TNode<BuiltinPtr> tmp503;
    compiler::TNode<Int32T> tmp504;
    ca_.Bind(&block45, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 356);
    compiler::TNode<Int32T> tmp505;
    USE(tmp505);
    tmp505 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT16_ELEMENTS));
    compiler::TNode<BoolT> tmp506;
    USE(tmp506);
    tmp506 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp504}, compiler::TNode<Int32T>{tmp505}));
    ca_.Branch(tmp506, &block47, &block48, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp507;
    compiler::TNode<Object> tmp508;
    compiler::TNode<RawPtrT> tmp509;
    compiler::TNode<RawPtrT> tmp510;
    compiler::TNode<IntPtrT> tmp511;
    compiler::TNode<Object> tmp512;
    compiler::TNode<Object> tmp513;
    compiler::TNode<JSTypedArray> tmp514;
    compiler::TNode<Smi> tmp515;
    compiler::TNode<JSReceiver> tmp516;
    compiler::TNode<BuiltinPtr> tmp517;
    compiler::TNode<BuiltinPtr> tmp518;
    compiler::TNode<Int32T> tmp519;
    ca_.Bind(&block47, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 357);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 358);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 356);
    ca_.Goto(&block49, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint16Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement16ATUint16Elements)), tmp519);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp520;
    compiler::TNode<Object> tmp521;
    compiler::TNode<RawPtrT> tmp522;
    compiler::TNode<RawPtrT> tmp523;
    compiler::TNode<IntPtrT> tmp524;
    compiler::TNode<Object> tmp525;
    compiler::TNode<Object> tmp526;
    compiler::TNode<JSTypedArray> tmp527;
    compiler::TNode<Smi> tmp528;
    compiler::TNode<JSReceiver> tmp529;
    compiler::TNode<BuiltinPtr> tmp530;
    compiler::TNode<BuiltinPtr> tmp531;
    compiler::TNode<Int32T> tmp532;
    ca_.Bind(&block48, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 359);
    compiler::TNode<Int32T> tmp533;
    USE(tmp533);
    tmp533 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, INT16_ELEMENTS));
    compiler::TNode<BoolT> tmp534;
    USE(tmp534);
    tmp534 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp532}, compiler::TNode<Int32T>{tmp533}));
    ca_.Branch(tmp534, &block50, &block51, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532);
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp535;
    compiler::TNode<Object> tmp536;
    compiler::TNode<RawPtrT> tmp537;
    compiler::TNode<RawPtrT> tmp538;
    compiler::TNode<IntPtrT> tmp539;
    compiler::TNode<Object> tmp540;
    compiler::TNode<Object> tmp541;
    compiler::TNode<JSTypedArray> tmp542;
    compiler::TNode<Smi> tmp543;
    compiler::TNode<JSReceiver> tmp544;
    compiler::TNode<BuiltinPtr> tmp545;
    compiler::TNode<BuiltinPtr> tmp546;
    compiler::TNode<Int32T> tmp547;
    ca_.Bind(&block50, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 360);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 361);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 359);
    ca_.Goto(&block52, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement15ATInt16Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement15ATInt16Elements)), tmp547);
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp548;
    compiler::TNode<Object> tmp549;
    compiler::TNode<RawPtrT> tmp550;
    compiler::TNode<RawPtrT> tmp551;
    compiler::TNode<IntPtrT> tmp552;
    compiler::TNode<Object> tmp553;
    compiler::TNode<Object> tmp554;
    compiler::TNode<JSTypedArray> tmp555;
    compiler::TNode<Smi> tmp556;
    compiler::TNode<JSReceiver> tmp557;
    compiler::TNode<BuiltinPtr> tmp558;
    compiler::TNode<BuiltinPtr> tmp559;
    compiler::TNode<Int32T> tmp560;
    ca_.Bind(&block51, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 362);
    compiler::TNode<Int32T> tmp561;
    USE(tmp561);
    tmp561 = ca_.UncheckedCast<Int32T>(FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind_146(state_, UINT32_ELEMENTS));
    compiler::TNode<BoolT> tmp562;
    USE(tmp562);
    tmp562 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp560}, compiler::TNode<Int32T>{tmp561}));
    ca_.Branch(tmp562, &block53, &block54, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560);
  }

  if (block53.is_used()) {
    compiler::TNode<Context> tmp563;
    compiler::TNode<Object> tmp564;
    compiler::TNode<RawPtrT> tmp565;
    compiler::TNode<RawPtrT> tmp566;
    compiler::TNode<IntPtrT> tmp567;
    compiler::TNode<Object> tmp568;
    compiler::TNode<Object> tmp569;
    compiler::TNode<JSTypedArray> tmp570;
    compiler::TNode<Smi> tmp571;
    compiler::TNode<JSReceiver> tmp572;
    compiler::TNode<BuiltinPtr> tmp573;
    compiler::TNode<BuiltinPtr> tmp574;
    compiler::TNode<Int32T> tmp575;
    ca_.Bind(&block53, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 363);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 364);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 362);
    ca_.Goto(&block55, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kLoadFixedElement16ATUint32Elements)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kStoreFixedElement16ATUint32Elements)), tmp575);
  }

  if (block54.is_used()) {
    compiler::TNode<Context> tmp576;
    compiler::TNode<Object> tmp577;
    compiler::TNode<RawPtrT> tmp578;
    compiler::TNode<RawPtrT> tmp579;
    compiler::TNode<IntPtrT> tmp580;
    compiler::TNode<Object> tmp581;
    compiler::TNode<Object> tmp582;
    compiler::TNode<JSTypedArray> tmp583;
    compiler::TNode<Smi> tmp584;
    compiler::TNode<JSReceiver> tmp585;
    compiler::TNode<BuiltinPtr> tmp586;
    compiler::TNode<BuiltinPtr> tmp587;
    compiler::TNode<Int32T> tmp588;
    ca_.Bind(&block54, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 366);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block55.is_used()) {
    compiler::TNode<Context> tmp589;
    compiler::TNode<Object> tmp590;
    compiler::TNode<RawPtrT> tmp591;
    compiler::TNode<RawPtrT> tmp592;
    compiler::TNode<IntPtrT> tmp593;
    compiler::TNode<Object> tmp594;
    compiler::TNode<Object> tmp595;
    compiler::TNode<JSTypedArray> tmp596;
    compiler::TNode<Smi> tmp597;
    compiler::TNode<JSReceiver> tmp598;
    compiler::TNode<BuiltinPtr> tmp599;
    compiler::TNode<BuiltinPtr> tmp600;
    compiler::TNode<Int32T> tmp601;
    ca_.Bind(&block55, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 359);
    ca_.Goto(&block52, tmp589, tmp590, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601);
  }

  if (block52.is_used()) {
    compiler::TNode<Context> tmp602;
    compiler::TNode<Object> tmp603;
    compiler::TNode<RawPtrT> tmp604;
    compiler::TNode<RawPtrT> tmp605;
    compiler::TNode<IntPtrT> tmp606;
    compiler::TNode<Object> tmp607;
    compiler::TNode<Object> tmp608;
    compiler::TNode<JSTypedArray> tmp609;
    compiler::TNode<Smi> tmp610;
    compiler::TNode<JSReceiver> tmp611;
    compiler::TNode<BuiltinPtr> tmp612;
    compiler::TNode<BuiltinPtr> tmp613;
    compiler::TNode<Int32T> tmp614;
    ca_.Bind(&block52, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 356);
    ca_.Goto(&block49, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614);
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp615;
    compiler::TNode<Object> tmp616;
    compiler::TNode<RawPtrT> tmp617;
    compiler::TNode<RawPtrT> tmp618;
    compiler::TNode<IntPtrT> tmp619;
    compiler::TNode<Object> tmp620;
    compiler::TNode<Object> tmp621;
    compiler::TNode<JSTypedArray> tmp622;
    compiler::TNode<Smi> tmp623;
    compiler::TNode<JSReceiver> tmp624;
    compiler::TNode<BuiltinPtr> tmp625;
    compiler::TNode<BuiltinPtr> tmp626;
    compiler::TNode<Int32T> tmp627;
    ca_.Bind(&block49, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 353);
    ca_.Goto(&block46, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp628;
    compiler::TNode<Object> tmp629;
    compiler::TNode<RawPtrT> tmp630;
    compiler::TNode<RawPtrT> tmp631;
    compiler::TNode<IntPtrT> tmp632;
    compiler::TNode<Object> tmp633;
    compiler::TNode<Object> tmp634;
    compiler::TNode<JSTypedArray> tmp635;
    compiler::TNode<Smi> tmp636;
    compiler::TNode<JSReceiver> tmp637;
    compiler::TNode<BuiltinPtr> tmp638;
    compiler::TNode<BuiltinPtr> tmp639;
    compiler::TNode<Int32T> tmp640;
    ca_.Bind(&block46, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 350);
    ca_.Goto(&block43, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp641;
    compiler::TNode<Object> tmp642;
    compiler::TNode<RawPtrT> tmp643;
    compiler::TNode<RawPtrT> tmp644;
    compiler::TNode<IntPtrT> tmp645;
    compiler::TNode<Object> tmp646;
    compiler::TNode<Object> tmp647;
    compiler::TNode<JSTypedArray> tmp648;
    compiler::TNode<Smi> tmp649;
    compiler::TNode<JSReceiver> tmp650;
    compiler::TNode<BuiltinPtr> tmp651;
    compiler::TNode<BuiltinPtr> tmp652;
    compiler::TNode<Int32T> tmp653;
    ca_.Bind(&block43, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 327);
    ca_.Goto(&block22, tmp641, tmp642, tmp643, tmp644, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp654;
    compiler::TNode<Object> tmp655;
    compiler::TNode<RawPtrT> tmp656;
    compiler::TNode<RawPtrT> tmp657;
    compiler::TNode<IntPtrT> tmp658;
    compiler::TNode<Object> tmp659;
    compiler::TNode<Object> tmp660;
    compiler::TNode<JSTypedArray> tmp661;
    compiler::TNode<Smi> tmp662;
    compiler::TNode<JSReceiver> tmp663;
    compiler::TNode<BuiltinPtr> tmp664;
    compiler::TNode<BuiltinPtr> tmp665;
    compiler::TNode<Int32T> tmp666;
    ca_.Bind(&block22, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 373);
    compiler::TNode<IntPtrT> tmp667;
    USE(tmp667);
    tmp667 = ca_.UncheckedCast<IntPtrT>(Convert8ATintptr5ATSmi_163(state_, compiler::TNode<Smi>{tmp662}));
    compiler::TNode<FixedArray> tmp668;
    USE(tmp668);
    tmp668 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp667}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 374);
    compiler::TNode<IntPtrT> tmp669;
    USE(tmp669);
    tmp669 = ca_.UncheckedCast<IntPtrT>(Convert8ATintptr5ATSmi_163(state_, compiler::TNode<Smi>{tmp662}));
    compiler::TNode<FixedArray> tmp670;
    USE(tmp670);
    tmp670 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).AllocateZeroedFixedArray(compiler::TNode<IntPtrT>{tmp669}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 376);
    compiler::TNode<Smi> tmp671;
    USE(tmp671);
    tmp671 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    ca_.Goto(&block58, tmp654, tmp655, tmp656, tmp657, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp668, tmp670, tmp671);
  }

  if (block58.is_used()) {
    compiler::TNode<Context> tmp672;
    compiler::TNode<Object> tmp673;
    compiler::TNode<RawPtrT> tmp674;
    compiler::TNode<RawPtrT> tmp675;
    compiler::TNode<IntPtrT> tmp676;
    compiler::TNode<Object> tmp677;
    compiler::TNode<Object> tmp678;
    compiler::TNode<JSTypedArray> tmp679;
    compiler::TNode<Smi> tmp680;
    compiler::TNode<JSReceiver> tmp681;
    compiler::TNode<BuiltinPtr> tmp682;
    compiler::TNode<BuiltinPtr> tmp683;
    compiler::TNode<Int32T> tmp684;
    compiler::TNode<FixedArray> tmp685;
    compiler::TNode<FixedArray> tmp686;
    compiler::TNode<Smi> tmp687;
    ca_.Bind(&block58, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687);
    compiler::TNode<BoolT> tmp688;
    USE(tmp688);
    tmp688 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp687}, compiler::TNode<Smi>{tmp680}));
    ca_.Branch(tmp688, &block56, &block57, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687);
  }

  if (block56.is_used()) {
    compiler::TNode<Context> tmp689;
    compiler::TNode<Object> tmp690;
    compiler::TNode<RawPtrT> tmp691;
    compiler::TNode<RawPtrT> tmp692;
    compiler::TNode<IntPtrT> tmp693;
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
    ca_.Bind(&block56, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 377);
    compiler::TNode<Object> tmp705 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp699, tmp689, tmp696, tmp704); 
    USE(tmp705);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 378);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp702}, compiler::TNode<Smi>{tmp704}, compiler::TNode<Object>{tmp705});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 379);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp703}, compiler::TNode<Smi>{tmp704}, compiler::TNode<Object>{tmp705});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 376);
    ca_.Goto(&block59, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704);
  }

  if (block59.is_used()) {
    compiler::TNode<Context> tmp706;
    compiler::TNode<Object> tmp707;
    compiler::TNode<RawPtrT> tmp708;
    compiler::TNode<RawPtrT> tmp709;
    compiler::TNode<IntPtrT> tmp710;
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
    ca_.Bind(&block59, &tmp706, &tmp707, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721);
    compiler::TNode<Smi> tmp722;
    USE(tmp722);
    tmp722 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp723;
    USE(tmp723);
    tmp723 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp721}, compiler::TNode<Smi>{tmp722}));
    ca_.Goto(&block58, tmp706, tmp707, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp723);
  }

  if (block57.is_used()) {
    compiler::TNode<Context> tmp724;
    compiler::TNode<Object> tmp725;
    compiler::TNode<RawPtrT> tmp726;
    compiler::TNode<RawPtrT> tmp727;
    compiler::TNode<IntPtrT> tmp728;
    compiler::TNode<Object> tmp729;
    compiler::TNode<Object> tmp730;
    compiler::TNode<JSTypedArray> tmp731;
    compiler::TNode<Smi> tmp732;
    compiler::TNode<JSReceiver> tmp733;
    compiler::TNode<BuiltinPtr> tmp734;
    compiler::TNode<BuiltinPtr> tmp735;
    compiler::TNode<Int32T> tmp736;
    compiler::TNode<FixedArray> tmp737;
    compiler::TNode<FixedArray> tmp738;
    compiler::TNode<Smi> tmp739;
    ca_.Bind(&block57, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 382);
    compiler::TNode<Smi> tmp740;
    USE(tmp740);
    tmp740 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    compiler::TNode<Object> tmp741;
    tmp741 = CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayMergeSort, tmp724, tmp731, tmp733, tmp738, tmp740, tmp732, tmp737);
    USE(tmp741);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 385);
    compiler::TNode<Smi> tmp742;
    USE(tmp742);
    tmp742 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    ca_.Goto(&block62, tmp724, tmp725, tmp726, tmp727, tmp728, tmp729, tmp730, tmp731, tmp732, tmp733, tmp734, tmp735, tmp736, tmp737, tmp738, tmp742);
  }

  if (block62.is_used()) {
    compiler::TNode<Context> tmp743;
    compiler::TNode<Object> tmp744;
    compiler::TNode<RawPtrT> tmp745;
    compiler::TNode<RawPtrT> tmp746;
    compiler::TNode<IntPtrT> tmp747;
    compiler::TNode<Object> tmp748;
    compiler::TNode<Object> tmp749;
    compiler::TNode<JSTypedArray> tmp750;
    compiler::TNode<Smi> tmp751;
    compiler::TNode<JSReceiver> tmp752;
    compiler::TNode<BuiltinPtr> tmp753;
    compiler::TNode<BuiltinPtr> tmp754;
    compiler::TNode<Int32T> tmp755;
    compiler::TNode<FixedArray> tmp756;
    compiler::TNode<FixedArray> tmp757;
    compiler::TNode<Smi> tmp758;
    ca_.Bind(&block62, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758);
    compiler::TNode<BoolT> tmp759;
    USE(tmp759);
    tmp759 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp758}, compiler::TNode<Smi>{tmp751}));
    ca_.Branch(tmp759, &block60, &block61, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758);
  }

  if (block60.is_used()) {
    compiler::TNode<Context> tmp760;
    compiler::TNode<Object> tmp761;
    compiler::TNode<RawPtrT> tmp762;
    compiler::TNode<RawPtrT> tmp763;
    compiler::TNode<IntPtrT> tmp764;
    compiler::TNode<Object> tmp765;
    compiler::TNode<Object> tmp766;
    compiler::TNode<JSTypedArray> tmp767;
    compiler::TNode<Smi> tmp768;
    compiler::TNode<JSReceiver> tmp769;
    compiler::TNode<BuiltinPtr> tmp770;
    compiler::TNode<BuiltinPtr> tmp771;
    compiler::TNode<Int32T> tmp772;
    compiler::TNode<FixedArray> tmp773;
    compiler::TNode<FixedArray> tmp774;
    compiler::TNode<Smi> tmp775;
    ca_.Bind(&block60, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 386);
    compiler::TNode<Object> tmp776;
    USE(tmp776);
    tmp776 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp773}, compiler::TNode<Smi>{tmp775}));
    compiler::TNode<Object> tmp777 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp771, tmp760, tmp767, tmp775, tmp776); 
    USE(tmp777);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 385);
    ca_.Goto(&block63, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775);
  }

  if (block63.is_used()) {
    compiler::TNode<Context> tmp778;
    compiler::TNode<Object> tmp779;
    compiler::TNode<RawPtrT> tmp780;
    compiler::TNode<RawPtrT> tmp781;
    compiler::TNode<IntPtrT> tmp782;
    compiler::TNode<Object> tmp783;
    compiler::TNode<Object> tmp784;
    compiler::TNode<JSTypedArray> tmp785;
    compiler::TNode<Smi> tmp786;
    compiler::TNode<JSReceiver> tmp787;
    compiler::TNode<BuiltinPtr> tmp788;
    compiler::TNode<BuiltinPtr> tmp789;
    compiler::TNode<Int32T> tmp790;
    compiler::TNode<FixedArray> tmp791;
    compiler::TNode<FixedArray> tmp792;
    compiler::TNode<Smi> tmp793;
    ca_.Bind(&block63, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792, &tmp793);
    compiler::TNode<Smi> tmp794;
    USE(tmp794);
    tmp794 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp795;
    USE(tmp795);
    tmp795 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp793}, compiler::TNode<Smi>{tmp794}));
    ca_.Goto(&block62, tmp778, tmp779, tmp780, tmp781, tmp782, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp792, tmp795);
  }

  if (block61.is_used()) {
    compiler::TNode<Context> tmp796;
    compiler::TNode<Object> tmp797;
    compiler::TNode<RawPtrT> tmp798;
    compiler::TNode<RawPtrT> tmp799;
    compiler::TNode<IntPtrT> tmp800;
    compiler::TNode<Object> tmp801;
    compiler::TNode<Object> tmp802;
    compiler::TNode<JSTypedArray> tmp803;
    compiler::TNode<Smi> tmp804;
    compiler::TNode<JSReceiver> tmp805;
    compiler::TNode<BuiltinPtr> tmp806;
    compiler::TNode<BuiltinPtr> tmp807;
    compiler::TNode<Int32T> tmp808;
    compiler::TNode<FixedArray> tmp809;
    compiler::TNode<FixedArray> tmp810;
    compiler::TNode<Smi> tmp811;
    ca_.Bind(&block61, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804, &tmp805, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 388);
    arguments.PopAndReturn(tmp803);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType15ATInt32Elements_327(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType17ATFloat32Elements_328(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType17ATFloat64Elements_329(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType22ATUint8ClampedElements_330(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType19ATBigUint64Elements_331(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType18ATBigInt64Elements_332(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType15ATUint8Elements_322(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType14ATInt8Elements_323(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType16ATUint16Elements_324(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType15ATInt16Elements_325(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 206);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSTypedArrayBackingStore(compiler::TNode<JSTypedArray>{tmp1}));
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 205);
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (KindForArrayType16ATUint32Elements_326(state_)), CodeStubAssembler::SMI_PARAMETERS));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType15ATInt32Elements_327(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType17ATFloat32Elements_328(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType17ATFloat64Elements_329(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType22ATUint8ClampedElements_330(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType19ATBigUint64Elements_331(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType18ATBigInt64Elements_332(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType15ATUint8Elements_322(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType14ATInt8Elements_323(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType16ATUint16Elements_324(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType15ATInt16Elements_325(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 213);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 212);
    CodeStubAssembler(state_).StoreJSTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (KindForArrayType16ATUint32Elements_326(state_)), CodeStubAssembler::SMI_PARAMETERS);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 215);
    compiler::TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_70(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

}  // namespace internal
}  // namespace v8

