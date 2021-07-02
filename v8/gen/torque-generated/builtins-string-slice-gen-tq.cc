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

TF_BUILTIN(StringPrototypeSlice, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, IntPtrT, IntPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, IntPtrT, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, IntPtrT, IntPtrT, Object, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, IntPtrT, IntPtrT, Object, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, IntPtrT, IntPtrT, Object, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, IntPtrT, IntPtrT, Object, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 15);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.slice"));
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 18);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).LoadStringLengthAsWord(compiler::TNode<String>{tmp6}));
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 21);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp8}));
    compiler::TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp9}, compiler::TNode<IntPtrT>{tmp7}));
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 25);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 1));
    compiler::TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp11}));
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 27);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_70(state_);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp12}, compiler::TNode<HeapObject>{tmp13}));
    ca_.Branch(tmp14, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7, tmp10, tmp12);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<String> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<IntPtrT> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block1, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block4, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<String> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<Object> tmp32;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp24}, compiler::TNode<Object>{tmp32}, compiler::TNode<IntPtrT>{tmp30}));
    ca_.Goto(&block3, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<String> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block3, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<String> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    compiler::TNode<IntPtrT> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<IntPtrT> tmp53;
    ca_.Bind(&block3, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 26);
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 29);
    compiler::TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrLessThanOrEqual(compiler::TNode<IntPtrT>{tmp53}, compiler::TNode<IntPtrT>{tmp51}));
    ca_.Branch(tmp54, &block5, &block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<RawPtrT> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<IntPtrT> tmp59;
    compiler::TNode<String> tmp60;
    compiler::TNode<IntPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<IntPtrT> tmp64;
    ca_.Bind(&block5, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 30);
    compiler::TNode<String> tmp65;
    USE(tmp65);
    tmp65 = kEmptyString_73(state_);
    arguments.PopAndReturn(tmp65);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<String> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<IntPtrT> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    ca_.Bind(&block6, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/string-slice.tq", 33);
    compiler::TNode<String> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).SubString(compiler::TNode<String>{tmp71}, compiler::TNode<IntPtrT>{tmp73}, compiler::TNode<IntPtrT>{tmp75}));
    arguments.PopAndReturn(tmp76);
  }
}

}  // namespace internal
}  // namespace v8

