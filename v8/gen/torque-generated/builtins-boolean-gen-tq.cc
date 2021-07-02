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

TF_BUILTIN(BooleanConstructor, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Oddball, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Oddball, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Oddball, Object, JSFunction, Map, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Oddball, Object, JSFunction, Map, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 23);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(ToBoolean_217(state_, compiler::TNode<Object>{tmp6}));
    compiler::TNode<Oddball> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).SelectBooleanConstant(compiler::TNode<BoolT>{tmp7}));
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 25);
    compiler::TNode<Object> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Parameter(Descriptor::kJSNewTarget));
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 26);
    compiler::TNode<Oddball> tmp10;
    USE(tmp10);
    tmp10 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp9}, compiler::TNode<HeapObject>{tmp10}));
    ca_.Branch(tmp11, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp8, tmp9);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Oddball> tmp17;
    compiler::TNode<Object> tmp18;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 27);
    arguments.PopAndReturn(tmp17);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<Oddball> tmp24;
    compiler::TNode<Object> tmp25;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 30);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Parameter(Descriptor::kJSTarget));
    compiler::TNode<JSFunction> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<JSFunction>(UnsafeCast10JSFunction_1206(state_, compiler::TNode<Context>{tmp19}, compiler::TNode<Object>{tmp26}));
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 31);
    compiler::TNode<JSReceiver> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<JSReceiver>(UnsafeCast10JSReceiver_1217(state_, compiler::TNode<Context>{tmp19}, compiler::TNode<Object>{tmp25}));
    compiler::TNode<Map> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Map>(GetDerivedMap_62(state_, compiler::TNode<Context>{tmp19}, compiler::TNode<JSFunction>{tmp27}, compiler::TNode<JSReceiver>{tmp28}));
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 32);
    compiler::TNode<FixedArray> tmp30;
    USE(tmp30);
    tmp30 = kEmptyFixedArray_190(state_);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 33);
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(ConstructorBuiltinsAssembler(state_).IsDictionaryMap(compiler::TNode<Map>{tmp29}));
    ca_.Branch(tmp31, &block3, &block4, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp30);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Oddball> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSFunction> tmp39;
    compiler::TNode<Map> tmp40;
    compiler::TNode<FixedArray> tmp41;
    ca_.Bind(&block3, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 34);
    compiler::TNode<FixedArray> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).AllocateNameDictionary(NameDictionary::kInitialCapacity));
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 33);
    ca_.Goto(&block4, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp42);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<Oddball> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<JSFunction> tmp50;
    compiler::TNode<Map> tmp51;
    compiler::TNode<FixedArray> tmp52;
    ca_.Bind(&block4, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 38);
    compiler::TNode<FixedArray> tmp53;
    USE(tmp53);
    tmp53 = kEmptyFixedArray_190(state_);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 37);
    compiler::TNode<JSObject> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<JSObject>(CodeStubAssembler(state_).AllocateJSObjectFromMap(compiler::TNode<Map>{tmp51}, compiler::TNode<FixedArray>{tmp52}, compiler::TNode<FixedArray>{tmp53}, CodeStubAssembler::kNone, SlackTrackingMode::kWithSlackTracking));
    compiler::TNode<JSValue> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<JSValue>(UnsafeCast7JSValue_1218(state_, compiler::TNode<Context>{tmp43}, compiler::TNode<Object>{tmp54}));
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 39);
    compiler::TNode<IntPtrT> tmp56 = ca_.IntPtrConstant(JSValue::kValueOffset);
    USE(tmp56);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp55, tmp56}, tmp48);
    ca_.SetSourcePosition("../../src/builtins/boolean.tq", 40);
    arguments.PopAndReturn(tmp55);
  }
}

}  // namespace internal
}  // namespace v8

