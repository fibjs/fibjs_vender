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

compiler::TNode<JSObject> ObjectFromEntriesFastCase_275(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 9);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 10);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast34ATFastJSArrayWithNoCustomIteration_1223(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 12);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp12);
    compiler::TNode<FixedArrayBase>tmp13 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp12});
    compiler::TNode<FixedArray> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = Cast10FixedArray_89(state_, compiler::TNode<HeapObject>{tmp13}, &label0);
    ca_.Goto(&block7, tmp7, tmp8, tmp9, tmp11, tmp13, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp11, tmp13);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSArray> tmp18;
    compiler::TNode<FixedArrayBase> tmp19;
    ca_.Bind(&block8, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    compiler::TNode<FixedArrayBase> tmp24;
    compiler::TNode<FixedArray> tmp25;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 11);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 13);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp23}));
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 14);
    compiler::TNode<JSObject> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<JSObject>(NewJSObject_61(state_, compiler::TNode<Context>{tmp20}));
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 16);
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 0));
    ca_.Goto(&block11, tmp20, tmp21, tmp22, tmp23, tmp25, tmp26, tmp27, tmp28);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSArray> tmp32;
    compiler::TNode<FixedArray> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<JSObject> tmp35;
    compiler::TNode<Smi> tmp36;
    ca_.Bind(&block11, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp36}, compiler::TNode<Smi>{tmp34}));
    ca_.Branch(tmp37, &block9, &block10, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSArray> tmp41;
    compiler::TNode<FixedArray> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<JSObject> tmp44;
    compiler::TNode<Smi> tmp45;
    ca_.Bind(&block9, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 17);
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(LoadElementOrUndefined_54(state_, compiler::TNode<FixedArray>{tmp42}, compiler::TNode<Smi>{tmp45}));
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 19);
    compiler::TNode<Object> tmp47;
    USE(tmp47);
    compiler::TNode<Object> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp47, tmp48) = LoadKeyValuePairNoSideEffects_229(state_, compiler::TNode<Context>{tmp38}, compiler::TNode<Object>{tmp46}, &label0).Flatten();
    ca_.Goto(&block13, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp46, tmp47, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp46);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSArray> tmp52;
    compiler::TNode<FixedArray> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<JSObject> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    ca_.Bind(&block14, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<JSArray> tmp62;
    compiler::TNode<FixedArray> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<JSObject> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    ca_.Bind(&block13, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 18);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 24);
    compiler::TNode<BoolT> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<BoolT>(Is10JSReceiver20UT5ATSmi10HeapObject_1224(state_, compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp69}));
    ca_.Branch(tmp71, &block15, &block16, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69, tmp70);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSArray> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<JSObject> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    ca_.Bind(&block15, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<JSArray> tmp86;
    compiler::TNode<FixedArray> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<JSObject> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block16, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 25);
    compiler::TNode<Object> tmp94;
    tmp94 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp83, tmp89, tmp92, tmp93);
    USE(tmp94);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 16);
    ca_.Goto(&block12, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<FixedArray> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<JSObject> tmp101;
    compiler::TNode<Smi> tmp102;
    ca_.Bind(&block12, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    compiler::TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<Smi>(FromConstexpr5ATSmi17ATconstexpr_int31_131(state_, 1));
    compiler::TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp102}, compiler::TNode<Smi>{tmp103}));
    ca_.Goto(&block11, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp104);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSArray> tmp108;
    compiler::TNode<FixedArray> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<JSObject> tmp111;
    compiler::TNode<Smi> tmp112;
    ca_.Bind(&block10, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 27);
    ca_.Goto(&block2, tmp105, tmp106, tmp111);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block4, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 30);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSObject> tmp118;
    ca_.Bind(&block2, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 7);
    ca_.Goto(&block17, tmp116, tmp117, tmp118);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    compiler::TNode<Context> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<JSObject> tmp121;
    ca_.Bind(&block17, &tmp119, &tmp120, &tmp121);
  return compiler::TNode<JSObject>{tmp121};
}

TF_BUILTIN(ObjectFromEntries, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object, Object, Map, Object> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object, JSObject, Object, Object, Object> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 38);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 40);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(compiler::TNode<Object>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 41);
    compiler::TNode<JSObject> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = ObjectFromEntriesFastCase_275(state_, compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp19}, &label0);
    ca_.Goto(&block7, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp19, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp19);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSObject> tmp35;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    arguments.PopAndReturn(tmp35);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<Object> tmp41;
    ca_.Bind(&block4, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 44);
    compiler::TNode<JSObject> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<JSObject>(NewJSObject_61(state_, compiler::TNode<Context>{tmp36}));
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 45);
    compiler::TNode<Map> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Map>(GetIteratorResultMap_204(state_, compiler::TNode<Context>{tmp36}));
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 46);
    compiler::TNode<JSReceiver> tmp44;
    USE(tmp44);
    compiler::TNode<Object> tmp45;
    USE(tmp45);
    std::tie(tmp44, tmp45) = IteratorBuiltinsAssembler(state_).GetIterator(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp41}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 49);
    ca_.Goto(&block13, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<RawPtrT> tmp48;
    compiler::TNode<RawPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSObject> tmp52;
    compiler::TNode<Map> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block13, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    compiler::CodeAssemblerExceptionHandlerLabel catch57_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch57_label);
    tmp56 = ca_.UncheckedCast<BoolT>(FromConstexpr6ATbool16ATconstexpr_bool_144(state_, true));
    }
    if (catch57_label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      compiler::TNode<Object> catch57_exception_object;
      ca_.Bind(&catch57_label, &catch57_exception_object);
      ca_.Goto(&block14, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, catch57_exception_object);
      ca_.Bind(&catch57_skip);
    }
    ca_.Branch(tmp56, &block11, &block12, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSObject> tmp64;
    compiler::TNode<Map> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    ca_.Bind(&block14, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block10, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<RawPtrT> tmp71;
    compiler::TNode<RawPtrT> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSObject> tmp75;
    compiler::TNode<Map> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<Object> tmp78;
    ca_.Bind(&block11, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 50);
    compiler::TNode<Object> tmp79;
    USE(tmp79);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch80_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch80_label);
    tmp79 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp69}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp77}, compiler::TNode<Object>{tmp78}}, compiler::TNode<Map>{tmp76}, &label0);
    }
    if (catch80_label.is_used()) {
      compiler::CodeAssemblerLabel catch80_skip(&ca_);
      ca_.Goto(&catch80_skip);
      compiler::TNode<Object> catch80_exception_object;
      ca_.Bind(&catch80_label, &catch80_exception_object);
      ca_.Goto(&block19, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp77, tmp78, tmp76, catch80_exception_object);
      ca_.Bind(&catch80_skip);
    }
    ca_.Goto(&block17, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp77, tmp78, tmp76, tmp79);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp77, tmp78, tmp76);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<RawPtrT> tmp83;
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<IntPtrT> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSObject> tmp87;
    compiler::TNode<Map> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Map> tmp93;
    compiler::TNode<Object> tmp94;
    ca_.Bind(&block19, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.Goto(&block10, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp94);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<RawPtrT> tmp97;
    compiler::TNode<RawPtrT> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<JSObject> tmp101;
    compiler::TNode<Map> tmp102;
    compiler::TNode<JSReceiver> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSReceiver> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Map> tmp107;
    ca_.Bind(&block18, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.Goto(&block16, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<RawPtrT> tmp110;
    compiler::TNode<RawPtrT> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<JSObject> tmp114;
    compiler::TNode<Map> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<Map> tmp120;
    compiler::TNode<Object> tmp121;
    ca_.Bind(&block17, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.Goto(&block15, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp121);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<RawPtrT> tmp124;
    compiler::TNode<RawPtrT> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<JSObject> tmp128;
    compiler::TNode<Map> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    compiler::TNode<Object> tmp131;
    ca_.Bind(&block16, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 51);
    arguments.PopAndReturn(tmp128);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<RawPtrT> tmp134;
    compiler::TNode<RawPtrT> tmp135;
    compiler::TNode<IntPtrT> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<JSObject> tmp138;
    compiler::TNode<Map> tmp139;
    compiler::TNode<JSReceiver> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    ca_.Bind(&block15, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 50);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 53);
    compiler::TNode<Object> tmp143;
    USE(tmp143);
    compiler::CodeAssemblerExceptionHandlerLabel catch144_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch144_label);
    tmp143 = ca_.UncheckedCast<Object>(IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp132}, compiler::TNode<Object>{tmp142}, compiler::TNode<Map>{tmp139}));
    }
    if (catch144_label.is_used()) {
      compiler::CodeAssemblerLabel catch144_skip(&ca_);
      ca_.Goto(&catch144_skip);
      compiler::TNode<Object> catch144_exception_object;
      ca_.Bind(&catch144_label, &catch144_exception_object);
      ca_.Goto(&block20, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp142, tmp139, catch144_exception_object);
      ca_.Bind(&catch144_skip);
    }
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 55);
    compiler::TNode<Object> tmp145;
    USE(tmp145);
    compiler::TNode<Object> tmp146;
    USE(tmp146);
    compiler::CodeAssemblerExceptionHandlerLabel catch147_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch147_label);
    std::tie(tmp145, tmp146) = LoadKeyValuePair_230(state_, compiler::TNode<Context>{tmp132}, compiler::TNode<Object>{tmp143}).Flatten();
    }
    if (catch147_label.is_used()) {
      compiler::CodeAssemblerLabel catch147_skip(&ca_);
      ca_.Goto(&catch147_skip);
      compiler::TNode<Object> catch147_exception_object;
      ca_.Bind(&catch147_label, &catch147_exception_object);
      ca_.Goto(&block21, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp143, catch147_exception_object);
      ca_.Bind(&catch147_skip);
    }
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 54);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 56);
    compiler::TNode<Object> tmp148;
    compiler::CodeAssemblerExceptionHandlerLabel catch149_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch149_label);
    tmp148 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp132, tmp138, tmp145, tmp146);
    USE(tmp148);
    }
    if (catch149_label.is_used()) {
      compiler::CodeAssemblerLabel catch149_skip(&ca_);
      ca_.Goto(&catch149_skip);
      compiler::TNode<Object> catch149_exception_object;
      ca_.Bind(&catch149_label, &catch149_exception_object);
      ca_.Goto(&block22, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp146, tmp138, tmp145, tmp146, catch149_exception_object);
      ca_.Bind(&catch149_skip);
    }
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 49);
    ca_.Goto(&block13, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<RawPtrT> tmp152;
    compiler::TNode<RawPtrT> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<JSObject> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Map> tmp162;
    compiler::TNode<Object> tmp163;
    ca_.Bind(&block20, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 53);
    ca_.Goto(&block10, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp163);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<RawPtrT> tmp166;
    compiler::TNode<RawPtrT> tmp167;
    compiler::TNode<IntPtrT> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<JSObject> tmp170;
    compiler::TNode<Map> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Object> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    ca_.Bind(&block21, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 55);
    ca_.Goto(&block10, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp177);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<RawPtrT> tmp180;
    compiler::TNode<RawPtrT> tmp181;
    compiler::TNode<IntPtrT> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<JSObject> tmp184;
    compiler::TNode<Map> tmp185;
    compiler::TNode<JSReceiver> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<JSObject> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    ca_.Bind(&block22, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 56);
    ca_.Goto(&block10, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp195);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<RawPtrT> tmp198;
    compiler::TNode<RawPtrT> tmp199;
    compiler::TNode<IntPtrT> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<JSObject> tmp202;
    compiler::TNode<Map> tmp203;
    compiler::TNode<JSReceiver> tmp204;
    compiler::TNode<Object> tmp205;
    ca_.Bind(&block12, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 58);
    arguments.PopAndReturn(tmp202);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<RawPtrT> tmp208;
    compiler::TNode<RawPtrT> tmp209;
    compiler::TNode<IntPtrT> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<JSObject> tmp212;
    compiler::TNode<Map> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<Object> tmp216;
    ca_.Bind(&block10, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 60);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(compiler::TNode<Context>{tmp206}, TorqueStructIteratorRecord{compiler::TNode<JSReceiver>{tmp214}, compiler::TNode<Object>{tmp215}}, compiler::TNode<Object>{tmp216});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp217;
    compiler::TNode<Object> tmp218;
    compiler::TNode<RawPtrT> tmp219;
    compiler::TNode<RawPtrT> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<Object> tmp222;
    ca_.Bind(&block2, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp217}, MessageTemplate::kNotIterable);
  }
}

}  // namespace internal
}  // namespace v8

