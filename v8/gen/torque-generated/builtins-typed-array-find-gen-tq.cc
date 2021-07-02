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

const char* kBuiltinName_302(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.find";
}

compiler::TNode<Object> FindAllElements_303(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Smi, Context, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Object, Context, JSReceiver, Object, Object, Smi, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_callbackfn, p_thisArg);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 13);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 16);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 17);
    compiler::TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    ca_.Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51);
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
    compiler::TNode<Smi> tmp60;
    ca_.Bind(&block9, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    compiler::TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp60}, compiler::TNode<Smi>{tmp59}));
    ca_.Branch(tmp61, &block7, &block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<JSTypedArray> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSTypedArray> tmp66;
    compiler::TNode<JSTypedArray> tmp67;
    compiler::TNode<BuiltinPtr> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    ca_.Bind(&block7, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 110);
    compiler::TNode<IntPtrT> tmp71 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp71);
    compiler::TNode<JSArrayBuffer>tmp72 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp66, tmp71});
    compiler::TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp72}));
    ca_.Branch(tmp73, &block14, &block15, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<JSTypedArray> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSTypedArray> tmp78;
    compiler::TNode<JSTypedArray> tmp79;
    compiler::TNode<BuiltinPtr> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<Smi> tmp82;
    ca_.Bind(&block14, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block12, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<JSTypedArray> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSTypedArray> tmp87;
    compiler::TNode<JSTypedArray> tmp88;
    compiler::TNode<BuiltinPtr> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Smi> tmp91;
    ca_.Bind(&block15, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 111);
    compiler::TNode<JSTypedArray> tmp92;
    USE(tmp92);
    tmp92 = (compiler::TNode<JSTypedArray>{tmp87});
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 19);
    ca_.Goto(&block13, tmp83, tmp84, tmp85, tmp86, tmp87, tmp92, tmp89, tmp90, tmp91);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<JSTypedArray> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<JSTypedArray> tmp97;
    compiler::TNode<JSTypedArray> tmp98;
    compiler::TNode<BuiltinPtr> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    ca_.Bind(&block13, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block11, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<JSTypedArray> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<JSTypedArray> tmp106;
    compiler::TNode<JSTypedArray> tmp107;
    compiler::TNode<BuiltinPtr> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Smi> tmp110;
    ca_.Bind(&block12, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.Goto(&block8, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp111;
    compiler::TNode<JSTypedArray> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<JSTypedArray> tmp115;
    compiler::TNode<JSTypedArray> tmp116;
    compiler::TNode<BuiltinPtr> tmp117;
    compiler::TNode<Smi> tmp118;
    compiler::TNode<Smi> tmp119;
    ca_.Bind(&block11, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 20);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 115);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 116);
    compiler::TNode<Object> tmp120 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp117, tmp111, tmp116, tmp119); 
    USE(tmp120);
    ca_.Goto(&block16, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp119, tmp111, tmp119, tmp120);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<JSTypedArray> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<JSTypedArray> tmp125;
    compiler::TNode<JSTypedArray> tmp126;
    compiler::TNode<BuiltinPtr> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<Context> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Object> tmp133;
    ca_.Bind(&block16, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 20);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 106);
    ca_.Goto(&block17, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp133, tmp121, tmp123, tmp124, tmp133, tmp129, tmp125);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp134;
    compiler::TNode<JSTypedArray> tmp135;
    compiler::TNode<JSReceiver> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<JSTypedArray> tmp138;
    compiler::TNode<JSTypedArray> tmp139;
    compiler::TNode<BuiltinPtr> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Context> tmp144;
    compiler::TNode<JSReceiver> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<JSTypedArray> tmp149;
    ca_.Bind(&block17, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 22);
    compiler::TNode<Object> tmp150;
    USE(tmp150);
    tmp150 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp144}, compiler::TNode<JSReceiver>{tmp145}, compiler::TNode<Object>{tmp146}, compiler::TNode<Object>{tmp147}, compiler::TNode<Object>{tmp148}, compiler::TNode<Object>{tmp149}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 23);
    compiler::TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = ca_.UncheckedCast<BoolT>(ToBoolean_217(state_, compiler::TNode<Object>{tmp150}));
    ca_.Branch(tmp151, &block18, &block19, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp150);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp152;
    compiler::TNode<JSTypedArray> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<JSTypedArray> tmp156;
    compiler::TNode<JSTypedArray> tmp157;
    compiler::TNode<BuiltinPtr> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<Smi> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    ca_.Bind(&block18, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 24);
    ca_.Goto(&block1, tmp152, tmp153, tmp154, tmp155, tmp161);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp163;
    compiler::TNode<JSTypedArray> tmp164;
    compiler::TNode<JSReceiver> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<JSTypedArray> tmp167;
    compiler::TNode<JSTypedArray> tmp168;
    compiler::TNode<BuiltinPtr> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Object> tmp172;
    compiler::TNode<Object> tmp173;
    ca_.Bind(&block19, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 17);
    ca_.Goto(&block10, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<JSTypedArray> tmp175;
    compiler::TNode<JSReceiver> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<JSTypedArray> tmp178;
    compiler::TNode<JSTypedArray> tmp179;
    compiler::TNode<BuiltinPtr> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Smi> tmp182;
    ca_.Bind(&block10, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    compiler::TNode<Smi> tmp183;
    USE(tmp183);
    tmp183 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp184;
    USE(tmp184);
    tmp184 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp182}, compiler::TNode<Smi>{tmp183}));
    ca_.Goto(&block9, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp184);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp185;
    compiler::TNode<JSTypedArray> tmp186;
    compiler::TNode<JSReceiver> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<JSTypedArray> tmp189;
    compiler::TNode<JSTypedArray> tmp190;
    compiler::TNode<BuiltinPtr> tmp191;
    compiler::TNode<Smi> tmp192;
    compiler::TNode<Smi> tmp193;
    ca_.Bind(&block8, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 27);
    compiler::TNode<Oddball> tmp194;
    USE(tmp194);
    tmp194 = Undefined_70(state_);
    ca_.Goto(&block1, tmp185, tmp186, tmp187, tmp188, tmp194);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp195;
    compiler::TNode<JSTypedArray> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<Object> tmp199;
    ca_.Bind(&block1, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 10);
    ca_.Goto(&block20, tmp195, tmp196, tmp197, tmp198, tmp199);
  }

    compiler::TNode<Context> tmp200;
    compiler::TNode<JSTypedArray> tmp201;
    compiler::TNode<JSReceiver> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Object> tmp204;
    ca_.Bind(&block20, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204);
  return compiler::TNode<Object>{tmp204};
}

TF_BUILTIN(TypedArrayPrototypeFind, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 37);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 39);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 41);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 42);
    compiler::TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 1));
    compiler::TNode<Object> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp48}, compiler::TNode<RawPtrT>{tmp49}, compiler::TNode<IntPtrT>{tmp50}}, compiler::TNode<IntPtrT>{tmp55}));
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 43);
    compiler::TNode<Object> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<Object>(FindAllElements_303(state_, compiler::TNode<Context>{tmp46}, compiler::TNode<JSTypedArray>{tmp52}, compiler::TNode<JSReceiver>{tmp54}, compiler::TNode<Object>{tmp56}));
    arguments.PopAndReturn(tmp57);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    ca_.Bind(&block6, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 46);
    compiler::TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp60}, compiler::TNode<RawPtrT>{tmp61}, compiler::TNode<IntPtrT>{tmp62}}, compiler::TNode<IntPtrT>{tmp63}));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp58}, MessageTemplate::kCalledNonCallable, compiler::TNode<Object>{tmp64});
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<RawPtrT> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<IntPtrT> tmp69;
    ca_.Bind(&block4, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 49);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp65}, MessageTemplate::kNotTypedArray, kBuiltinName_302(state_));
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<RawPtrT> tmp72;
    compiler::TNode<RawPtrT> tmp73;
    compiler::TNode<IntPtrT> tmp74;
    ca_.Bind(&block2, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 52);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp70}, MessageTemplate::kDetachedOperation, kBuiltinName_302(state_));
  }
}

}  // namespace internal
}  // namespace v8

