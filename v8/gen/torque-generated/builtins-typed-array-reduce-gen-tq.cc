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

const char* kBuiltinName_308(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.reduce";
}

compiler::TNode<Object> ReduceAllElements_309(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_initialValue) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Context, JSReceiver, Oddball, Object, Object, Smi, JSTypedArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    std::tie(tmp4, tmp5, tmp6) = NewAttachedJSTypedArrayWitness_320(state_, compiler::TNode<JSTypedArray>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 102);
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
    tmp17 = ca_.UncheckedCast<Number>(Convert20UT5ATSmi10HeapNumber9ATuintptr_178(state_, compiler::TNode<UintPtrT>{tmp16}));
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp18 = Cast5ATSmi_84(state_, compiler::TNode<Object>{tmp17}, &label0);
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
    tmp51 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
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
    tmp62 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp61}, compiler::TNode<Smi>{tmp59}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 110);
    compiler::TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp73);
    compiler::TNode<JSArrayBuffer>tmp74 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp67, tmp73});
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp74}));
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 111);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 115);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 116);
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
    compiler::TNode<Oddball> tmp142;
    USE(tmp142);
    tmp142 = Hole_68(state_);
    compiler::TNode<BoolT> tmp143;
    USE(tmp143);
    tmp143 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp136}, compiler::TNode<HeapObject>{tmp142}));
    ca_.Branch(tmp143, &block17, &block18, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp141);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp144;
    compiler::TNode<JSTypedArray> tmp145;
    compiler::TNode<JSReceiver> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<JSTypedArray> tmp148;
    compiler::TNode<JSTypedArray> tmp149;
    compiler::TNode<BuiltinPtr> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<Object> tmp154;
    ca_.Bind(&block17, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 22);
    ca_.Goto(&block19, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp154, tmp153, tmp154);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp155;
    compiler::TNode<JSTypedArray> tmp156;
    compiler::TNode<JSReceiver> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<JSTypedArray> tmp159;
    compiler::TNode<JSTypedArray> tmp160;
    compiler::TNode<BuiltinPtr> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<Object> tmp165;
    ca_.Bind(&block18, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 26);
    compiler::TNode<Oddball> tmp166;
    USE(tmp166);
    tmp166 = Undefined_70(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 106);
    ca_.Goto(&block20, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp155, tmp157, tmp166, tmp163, tmp165, tmp164, tmp159);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp167;
    compiler::TNode<JSTypedArray> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<JSTypedArray> tmp171;
    compiler::TNode<JSTypedArray> tmp172;
    compiler::TNode<BuiltinPtr> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Context> tmp178;
    compiler::TNode<JSReceiver> tmp179;
    compiler::TNode<Oddball> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<JSTypedArray> tmp184;
    ca_.Bind(&block20, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 25);
    compiler::TNode<Object> tmp185;
    USE(tmp185);
    tmp185 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp178}, compiler::TNode<JSReceiver>{tmp179}, compiler::TNode<Object>{tmp180}, compiler::TNode<Object>{tmp181}, compiler::TNode<Object>{tmp182}, compiler::TNode<Object>{tmp183}, compiler::TNode<Object>{tmp184}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 22);
    ca_.Goto(&block19, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp185, tmp176, tmp177);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<JSTypedArray> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<JSTypedArray> tmp190;
    compiler::TNode<JSTypedArray> tmp191;
    compiler::TNode<BuiltinPtr> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Object> tmp196;
    ca_.Bind(&block19, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 18);
    ca_.Goto(&block10, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp197;
    compiler::TNode<JSTypedArray> tmp198;
    compiler::TNode<JSReceiver> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<JSTypedArray> tmp201;
    compiler::TNode<JSTypedArray> tmp202;
    compiler::TNode<BuiltinPtr> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<Smi> tmp206;
    ca_.Bind(&block10, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    compiler::TNode<Smi> tmp207;
    USE(tmp207);
    tmp207 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp208;
    USE(tmp208);
    tmp208 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp206}, compiler::TNode<Smi>{tmp207}));
    ca_.Goto(&block9, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp208);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<JSTypedArray> tmp210;
    compiler::TNode<JSReceiver> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<JSTypedArray> tmp213;
    compiler::TNode<JSTypedArray> tmp214;
    compiler::TNode<BuiltinPtr> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Smi> tmp218;
    ca_.Bind(&block8, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 30);
    compiler::TNode<Oddball> tmp219;
    USE(tmp219);
    tmp219 = Hole_68(state_);
    compiler::TNode<BoolT> tmp220;
    USE(tmp220);
    tmp220 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp217}, compiler::TNode<HeapObject>{tmp219}));
    ca_.Branch(tmp220, &block21, &block22, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp221;
    compiler::TNode<JSTypedArray> tmp222;
    compiler::TNode<JSReceiver> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<JSTypedArray> tmp225;
    compiler::TNode<JSTypedArray> tmp226;
    compiler::TNode<BuiltinPtr> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Object> tmp229;
    ca_.Bind(&block21, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 31);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp221}, MessageTemplate::kReduceNoInitial, kBuiltinName_308(state_));
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp230;
    compiler::TNode<JSTypedArray> tmp231;
    compiler::TNode<JSReceiver> tmp232;
    compiler::TNode<Object> tmp233;
    compiler::TNode<JSTypedArray> tmp234;
    compiler::TNode<JSTypedArray> tmp235;
    compiler::TNode<BuiltinPtr> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Object> tmp238;
    ca_.Bind(&block22, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 33);
    ca_.Goto(&block1, tmp230, tmp231, tmp232, tmp233, tmp238);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp239;
    compiler::TNode<JSTypedArray> tmp240;
    compiler::TNode<JSReceiver> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<Object> tmp243;
    ca_.Bind(&block1, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 10);
    ca_.Goto(&block23, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

    compiler::TNode<Context> tmp244;
    compiler::TNode<JSTypedArray> tmp245;
    compiler::TNode<JSReceiver> tmp246;
    compiler::TNode<Object> tmp247;
    compiler::TNode<Object> tmp248;
    ca_.Bind(&block23, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248);
  return compiler::TNode<Object>{tmp248};
}

TF_BUILTIN(TypedArrayPrototypeReduce, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSTypedArray, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 43);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast12JSTypedArray_96(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp1, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp3, tmp4, tmp1);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block8, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 45);
    compiler::TNode<JSTypedArray> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = EnsureAttached_319(state_, compiler::TNode<JSTypedArray>{tmp18}, &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<JSTypedArray> tmp25;
    compiler::TNode<JSTypedArray> tmp26;
    ca_.Bind(&block10, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block2, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<JSTypedArray> tmp32;
    compiler::TNode<JSTypedArray> tmp33;
    compiler::TNode<JSTypedArray> tmp34;
    ca_.Bind(&block9, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 47);
    compiler::TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp29}, compiler::TNode<RawPtrT>{tmp30}, compiler::TNode<IntPtrT>{tmp31}}, compiler::TNode<IntPtrT>{tmp35}));
    compiler::TNode<JSReceiver> tmp37;
    USE(tmp37);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp37 = Cast39UT15JSBoundFunction10JSFunction7JSProxy_1171(state_, compiler::TNode<Context>{tmp27}, compiler::TNode<Object>{tmp36}, &label0);
    ca_.Goto(&block11, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36, tmp37);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<JSTypedArray> tmp44;
    compiler::TNode<Object> tmp45;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.Goto(&block6, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<RawPtrT> tmp48;
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<JSTypedArray> tmp51;
    compiler::TNode<JSTypedArray> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    ca_.Bind(&block11, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 48);
    compiler::TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 2));
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(compiler::TNode<IntPtrT>{tmp50}, compiler::TNode<IntPtrT>{tmp55}));
    ca_.Branch(tmp56, &block13, &block14, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<JSTypedArray> tmp62;
    compiler::TNode<JSTypedArray> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    ca_.Bind(&block13, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    compiler::TNode<IntPtrT> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 1));
    compiler::TNode<Object> tmp66;
    USE(tmp66);
    tmp66 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp59}, compiler::TNode<RawPtrT>{tmp60}, compiler::TNode<IntPtrT>{tmp61}}, compiler::TNode<IntPtrT>{tmp65}));
    ca_.Goto(&block16, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp66);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<RawPtrT> tmp70;
    compiler::TNode<IntPtrT> tmp71;
    compiler::TNode<JSTypedArray> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    compiler::TNode<JSReceiver> tmp74;
    ca_.Bind(&block14, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    compiler::TNode<Oddball> tmp75;
    USE(tmp75);
    tmp75 = Hole_68(state_);
    ca_.Goto(&block15, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<RawPtrT> tmp78;
    compiler::TNode<RawPtrT> tmp79;
    compiler::TNode<IntPtrT> tmp80;
    compiler::TNode<JSTypedArray> tmp81;
    compiler::TNode<JSTypedArray> tmp82;
    compiler::TNode<JSReceiver> tmp83;
    compiler::TNode<Object> tmp84;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block15, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<RawPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<JSTypedArray> tmp90;
    compiler::TNode<JSTypedArray> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block15, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 49);
    compiler::TNode<Object> tmp94;
    USE(tmp94);
    tmp94 = ca_.UncheckedCast<Object>(ReduceAllElements_309(state_, compiler::TNode<Context>{tmp85}, compiler::TNode<JSTypedArray>{tmp91}, compiler::TNode<JSReceiver>{tmp92}, compiler::TNode<Object>{tmp93}));
    arguments.PopAndReturn(tmp94);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<RawPtrT> tmp97;
    compiler::TNode<RawPtrT> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    ca_.Bind(&block6, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 52);
    compiler::TNode<IntPtrT> tmp100;
    USE(tmp100);
    tmp100 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp97}, compiler::TNode<RawPtrT>{tmp98}, compiler::TNode<IntPtrT>{tmp99}}, compiler::TNode<IntPtrT>{tmp100}));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp95}, MessageTemplate::kCalledNonCallable, compiler::TNode<Object>{tmp101});
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<RawPtrT> tmp104;
    compiler::TNode<RawPtrT> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    ca_.Bind(&block4, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 55);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp102}, MessageTemplate::kNotTypedArray, kBuiltinName_308(state_));
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<RawPtrT> tmp109;
    compiler::TNode<RawPtrT> tmp110;
    compiler::TNode<IntPtrT> tmp111;
    ca_.Bind(&block2, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 58);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp107}, MessageTemplate::kDetachedOperation, kBuiltinName_308(state_));
  }
}

}  // namespace internal
}  // namespace v8

