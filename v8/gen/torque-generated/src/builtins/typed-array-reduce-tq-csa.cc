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

const char* kBuiltinName_360(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.reduce";
}

compiler::TNode<Object> ReduceAllElements_361(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_initialValue) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Smi, Context, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object, Object, Oddball> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object, Object, Context, JSReceiver, Oddball, Object, Object, Smi, JSTypedArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Object, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Object, Object, Oddball> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_callbackfn, p_initialValue);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 13);
    compiler::TNode<JSTypedArray> tmp4;
    USE(tmp4);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::TNode<BuiltinPtr> tmp6;
    USE(tmp6);
    std::tie(tmp4, tmp5, tmp6) = NewAttachedJSTypedArrayWitness_370(state_, compiler::TNode<JSTypedArray>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 91);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<JSTypedArray> tmp12;
    compiler::TNode<BuiltinPtr> tmp13;
    compiler::TNode<JSTypedArray> tmp14;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 16);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp15);
    compiler::TNode<UintPtrT>tmp16 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp14, tmp15});
    compiler::TNode<Number> tmp17;
    USE(tmp17);
    tmp17 = Convert20UT5ATSmi10HeapNumber9ATuintptr_201(state_, compiler::TNode<UintPtrT>{tmp16});
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp18 = Cast5ATSmi_83(state_, compiler::TNode<Object>{tmp17}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp17, tmp18);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp17);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSTypedArray> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSTypedArray> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<BuiltinPtr> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block6, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block3, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSTypedArray> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<JSTypedArray> tmp31;
    compiler::TNode<JSTypedArray> tmp32;
    compiler::TNode<BuiltinPtr> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Smi> tmp35;
    ca_.Bind(&block5, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block2, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<JSTypedArray> tmp37;
    compiler::TNode<JSReceiver> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<JSTypedArray> tmp40;
    compiler::TNode<JSTypedArray> tmp41;
    compiler::TNode<BuiltinPtr> tmp42;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSTypedArray> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<JSTypedArray> tmp47;
    compiler::TNode<JSTypedArray> tmp48;
    compiler::TNode<BuiltinPtr> tmp49;
    compiler::TNode<Smi> tmp50;
    ca_.Bind(&block2, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 17);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 18);
    compiler::TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 0);
    ca_.Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp46, tmp51);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSTypedArray> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSTypedArray> tmp56;
    compiler::TNode<JSTypedArray> tmp57;
    compiler::TNode<BuiltinPtr> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Smi> tmp61;
    ca_.Bind(&block9, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp61}, compiler::TNode<Smi>{tmp59});
    ca_.Branch(tmp62, &block7, &block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp63;
    compiler::TNode<JSTypedArray> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<JSTypedArray> tmp67;
    compiler::TNode<JSTypedArray> tmp68;
    compiler::TNode<BuiltinPtr> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Smi> tmp72;
    ca_.Bind(&block7, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 99);
    compiler::TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp73);
    compiler::TNode<JSArrayBuffer>tmp74 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp67, tmp73});
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp74});
    ca_.Branch(tmp75, &block14, &block15, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<JSTypedArray> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<JSTypedArray> tmp80;
    compiler::TNode<JSTypedArray> tmp81;
    compiler::TNode<BuiltinPtr> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Smi> tmp85;
    ca_.Bind(&block14, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block12, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSTypedArray> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSTypedArray> tmp90;
    compiler::TNode<JSTypedArray> tmp91;
    compiler::TNode<BuiltinPtr> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block15, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 100);
    compiler::TNode<JSTypedArray> tmp96;
    USE(tmp96);
    tmp96 = (compiler::TNode<JSTypedArray>{tmp90});
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 20);
    ca_.Goto(&block13, tmp86, tmp87, tmp88, tmp89, tmp90, tmp96, tmp92, tmp93, tmp94, tmp95);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<JSTypedArray> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<JSTypedArray> tmp101;
    compiler::TNode<JSTypedArray> tmp102;
    compiler::TNode<BuiltinPtr> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Smi> tmp106;
    ca_.Bind(&block13, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.Goto(&block11, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp107;
    compiler::TNode<JSTypedArray> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<JSTypedArray> tmp111;
    compiler::TNode<JSTypedArray> tmp112;
    compiler::TNode<BuiltinPtr> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<Smi> tmp116;
    ca_.Bind(&block12, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block8, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<JSTypedArray> tmp118;
    compiler::TNode<JSReceiver> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<JSTypedArray> tmp121;
    compiler::TNode<JSTypedArray> tmp122;
    compiler::TNode<BuiltinPtr> tmp123;
    compiler::TNode<Smi> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Smi> tmp126;
    ca_.Bind(&block11, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 104);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 105);
    compiler::TNode<Object> tmp127 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp123, tmp117, tmp122, tmp126); 
    USE(tmp127);
    ca_.Goto(&block16, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp126, tmp117, tmp126, tmp127);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp128;
    compiler::TNode<JSTypedArray> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<JSTypedArray> tmp132;
    compiler::TNode<JSTypedArray> tmp133;
    compiler::TNode<BuiltinPtr> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Context> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<Object> tmp141;
    ca_.Bind(&block16, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    compiler::TNode<Oddball> tmp142;
    USE(tmp142);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp142 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp136}, &label0);
    ca_.Goto(&block19, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp141, tmp136, tmp136, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block20, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp141, tmp136, tmp136);
    }
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<JSTypedArray> tmp144;
    compiler::TNode<JSReceiver> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<JSTypedArray> tmp147;
    compiler::TNode<JSTypedArray> tmp148;
    compiler::TNode<BuiltinPtr> tmp149;
    compiler::TNode<Smi> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    ca_.Bind(&block20, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.Goto(&block18, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<JSTypedArray> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<JSTypedArray> tmp160;
    compiler::TNode<JSTypedArray> tmp161;
    compiler::TNode<BuiltinPtr> tmp162;
    compiler::TNode<Smi> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<Oddball> tmp169;
    ca_.Bind(&block19, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 24);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    ca_.Goto(&block17, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp166, tmp165, tmp166, tmp167);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp170;
    compiler::TNode<JSTypedArray> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<JSTypedArray> tmp174;
    compiler::TNode<JSTypedArray> tmp175;
    compiler::TNode<BuiltinPtr> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<Object> tmp181;
    ca_.Bind(&block18, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 26);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 28);
    compiler::TNode<Oddball> tmp182;
    USE(tmp182);
    tmp182 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 95);
    ca_.Goto(&block21, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, ca_.UncheckedCast<Object>(tmp181), tmp170, tmp172, tmp182, ca_.UncheckedCast<Object>(tmp181), tmp180, tmp179, tmp174);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp183;
    compiler::TNode<JSTypedArray> tmp184;
    compiler::TNode<JSReceiver> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<JSTypedArray> tmp187;
    compiler::TNode<JSTypedArray> tmp188;
    compiler::TNode<BuiltinPtr> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<Context> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<Oddball> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<JSTypedArray> tmp202;
    ca_.Bind(&block21, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 27);
    compiler::TNode<Object> tmp203;
    USE(tmp203);
    tmp203 = CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp196}, compiler::TNode<JSReceiver>{tmp197}, compiler::TNode<Object>{tmp198}, compiler::TNode<Object>{tmp199}, compiler::TNode<Object>{tmp200}, compiler::TNode<Object>{tmp201}, compiler::TNode<Object>{tmp202});
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    ca_.Goto(&block17, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp203, tmp192, tmp193, tmp194);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp204;
    compiler::TNode<JSTypedArray> tmp205;
    compiler::TNode<JSReceiver> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<JSTypedArray> tmp208;
    compiler::TNode<JSTypedArray> tmp209;
    compiler::TNode<BuiltinPtr> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<Smi> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Object> tmp215;
    ca_.Bind(&block17, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 18);
    ca_.Goto(&block10, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp216;
    compiler::TNode<JSTypedArray> tmp217;
    compiler::TNode<JSReceiver> tmp218;
    compiler::TNode<Object> tmp219;
    compiler::TNode<JSTypedArray> tmp220;
    compiler::TNode<JSTypedArray> tmp221;
    compiler::TNode<BuiltinPtr> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Smi> tmp225;
    ca_.Bind(&block10, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225);
    compiler::TNode<Smi> tmp226;
    USE(tmp226);
    tmp226 = FromConstexpr5ATSmi17ATconstexpr_int31_152(state_, 1);
    compiler::TNode<Smi> tmp227;
    USE(tmp227);
    tmp227 = CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp225}, compiler::TNode<Smi>{tmp226});
    ca_.Goto(&block9, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp227);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp228;
    compiler::TNode<JSTypedArray> tmp229;
    compiler::TNode<JSReceiver> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<JSTypedArray> tmp232;
    compiler::TNode<JSTypedArray> tmp233;
    compiler::TNode<BuiltinPtr> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<Smi> tmp237;
    ca_.Bind(&block8, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 34);
    compiler::TNode<Oddball> tmp238;
    USE(tmp238);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp238 = Cast9ATTheHole_88(state_, compiler::TNode<Object>{tmp236}, &label0);
    ca_.Goto(&block24, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp236, tmp236, tmp238);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp236, tmp236);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp239;
    compiler::TNode<JSTypedArray> tmp240;
    compiler::TNode<JSReceiver> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<JSTypedArray> tmp243;
    compiler::TNode<JSTypedArray> tmp244;
    compiler::TNode<BuiltinPtr> tmp245;
    compiler::TNode<Smi> tmp246;
    compiler::TNode<Object> tmp247;
    compiler::TNode<Object> tmp248;
    compiler::TNode<Object> tmp249;
    ca_.Bind(&block25, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    ca_.Goto(&block23, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp250;
    compiler::TNode<JSTypedArray> tmp251;
    compiler::TNode<JSReceiver> tmp252;
    compiler::TNode<Object> tmp253;
    compiler::TNode<JSTypedArray> tmp254;
    compiler::TNode<JSTypedArray> tmp255;
    compiler::TNode<BuiltinPtr> tmp256;
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Object> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<Oddball> tmp261;
    ca_.Bind(&block24, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 35);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp250}, MessageTemplate::kReduceNoInitial, kBuiltinName_360(state_));
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp262;
    compiler::TNode<JSTypedArray> tmp263;
    compiler::TNode<JSReceiver> tmp264;
    compiler::TNode<Object> tmp265;
    compiler::TNode<JSTypedArray> tmp266;
    compiler::TNode<JSTypedArray> tmp267;
    compiler::TNode<BuiltinPtr> tmp268;
    compiler::TNode<Smi> tmp269;
    compiler::TNode<Object> tmp270;
    compiler::TNode<Object> tmp271;
    ca_.Bind(&block23, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 37);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 38);
    ca_.Goto(&block1, tmp262, tmp263, tmp264, tmp265, ca_.UncheckedCast<Object>(tmp271));
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp272;
    compiler::TNode<JSTypedArray> tmp273;
    compiler::TNode<JSReceiver> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Object> tmp276;
    ca_.Bind(&block1, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 10);
    ca_.Goto(&block26, tmp272, tmp273, tmp274, tmp275, tmp276);
  }

    compiler::TNode<Context> tmp277;
    compiler::TNode<JSTypedArray> tmp278;
    compiler::TNode<JSReceiver> tmp279;
    compiler::TNode<Object> tmp280;
    compiler::TNode<Object> tmp281;
    ca_.Bind(&block26, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281);
  return compiler::TNode<Object>{tmp281};
}

TF_BUILTIN(TypedArrayPrototypeReduce, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 50);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast12JSTypedArray_110(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<IntPtrT> tmp8;
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block8, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 52);
    compiler::TNode<JSTypedArray> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = EnsureAttached_369(state_, compiler::TNode<JSTypedArray>{tmp18}, &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    compiler::TNode<JSTypedArray> tmp26;
    ca_.Bind(&block10, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block2, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSTypedArray> tmp32;
    compiler::TNode<JSTypedArray> tmp33;
    compiler::TNode<JSTypedArray> tmp34;
    ca_.Bind(&block9, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 54);
    compiler::TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp27}, compiler::TNode<RawPtrT>{tmp28}, compiler::TNode<IntPtrT>{tmp29}}, compiler::TNode<IntPtrT>{tmp35});
    compiler::TNode<JSReceiver> tmp37;
    USE(tmp37);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp37 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1339(state_, compiler::TNode<Context>{tmp30}, compiler::TNode<Object>{tmp36}, &label0);
    ca_.Goto(&block11, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36, tmp37);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<JSTypedArray> tmp44;
    compiler::TNode<Object> tmp45;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.Goto(&block6, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<Context> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSTypedArray> tmp51;
    compiler::TNode<JSTypedArray> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    ca_.Bind(&block11, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 55);
    compiler::TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(compiler::TNode<IntPtrT>{tmp48}, compiler::TNode<IntPtrT>{tmp55});
    ca_.Branch(tmp56, &block13, &block14, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<JSTypedArray> tmp62;
    compiler::TNode<JSTypedArray> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    ca_.Bind(&block13, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    compiler::TNode<IntPtrT> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp57}, compiler::TNode<RawPtrT>{tmp58}, compiler::TNode<IntPtrT>{tmp59}}, compiler::TNode<IntPtrT>{tmp65});
    ca_.Goto(&block16, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp66);
  }

  if (block14.is_used()) {
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    compiler::TNode<Context> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<JSTypedArray> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    compiler::TNode<JSReceiver> tmp74;
    ca_.Bind(&block14, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    compiler::TNode<Oddball> tmp75;
    USE(tmp75);
    tmp75 = TheHole_62(state_);
    ca_.Goto(&block15, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75);
  }

  if (block16.is_used()) {
    compiler::TNode<RawPtrT> tmp76;
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<Context> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSTypedArray> tmp81;
    compiler::TNode<JSTypedArray> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block15, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block15.is_used()) {
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<IntPtrT> tmp87;
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSTypedArray> tmp90;
    compiler::TNode<JSTypedArray> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block15, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 56);
    compiler::TNode<Object> tmp94;
    USE(tmp94);
    tmp94 = ReduceAllElements_361(state_, compiler::TNode<Context>{tmp88}, compiler::TNode<JSTypedArray>{tmp91}, compiler::TNode<JSReceiver>{tmp92}, compiler::TNode<Object>{tmp93});
    arguments.PopAndReturn(tmp94);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp95;
    compiler::TNode<RawPtrT> tmp96;
    compiler::TNode<IntPtrT> tmp97;
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    ca_.Bind(&block6, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 59);
    compiler::TNode<IntPtrT> tmp100;
    USE(tmp100);
    tmp100 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp101;
    USE(tmp101);
    tmp101 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp95}, compiler::TNode<RawPtrT>{tmp96}, compiler::TNode<IntPtrT>{tmp97}}, compiler::TNode<IntPtrT>{tmp100});
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp98}, MessageTemplate::kCalledNonCallable, compiler::TNode<Object>{tmp101});
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp102;
    compiler::TNode<RawPtrT> tmp103;
    compiler::TNode<IntPtrT> tmp104;
    compiler::TNode<Context> tmp105;
    compiler::TNode<Object> tmp106;
    ca_.Bind(&block4, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 62);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp105}, MessageTemplate::kNotTypedArray, kBuiltinName_360(state_));
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp107;
    compiler::TNode<RawPtrT> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<Context> tmp110;
    compiler::TNode<Object> tmp111;
    ca_.Bind(&block2, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 65);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp110}, MessageTemplate::kDetachedOperation, kBuiltinName_360(state_));
  }
}

}  // namespace internal
}  // namespace v8

