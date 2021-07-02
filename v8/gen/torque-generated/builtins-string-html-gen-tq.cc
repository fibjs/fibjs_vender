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

TF_BUILTIN(CreateHTML, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kMethodName));
  USE(parameter2);
  compiler::TNode<String> parameter3 = UncheckedCast<String>(Parameter(Descriptor::kTagName));
  USE(parameter3);
  compiler::TNode<String> parameter4 = UncheckedCast<String>(Parameter(Descriptor::kAttr));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kAttrValue));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, String, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, String, String, Object, String, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, String, String, Object, String, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<String> tmp2;
    compiler::TNode<String> tmp3;
    compiler::TNode<String> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 12);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp2}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 13);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "<"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp0}, compiler::TNode<String>{tmp7}, compiler::TNode<String>{tmp3}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 14);
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = kEmptyString_73(state_);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp4}, compiler::TNode<HeapObject>{tmp9}));
    ca_.Branch(tmp10, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp8);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<String> tmp13;
    compiler::TNode<String> tmp14;
    compiler::TNode<String> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<String> tmp17;
    compiler::TNode<String> tmp18;
    ca_.Bind(&block1, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 16);
    compiler::TNode<String> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToString_Inline(compiler::TNode<Context>{tmp11}, compiler::TNode<Object>{tmp16}));
    compiler::TNode<String> tmp20;
    tmp20 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringEscapeQuotes, tmp11, tmp19)); 
    USE(tmp20);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 15);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 17);
    compiler::TNode<String> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, " "));
    compiler::TNode<String> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp18}, compiler::TNode<String>{tmp21}));
    compiler::TNode<String> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp22}, compiler::TNode<String>{tmp15}));
    compiler::TNode<String> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "=\""));
    compiler::TNode<String> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp23}, compiler::TNode<String>{tmp24}));
    compiler::TNode<String> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp25}, compiler::TNode<String>{tmp20}));
    compiler::TNode<String> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "\""));
    compiler::TNode<String> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp11}, compiler::TNode<String>{tmp26}, compiler::TNode<String>{tmp27}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 14);
    ca_.Goto(&block2, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp28);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<String> tmp31;
    compiler::TNode<String> tmp32;
    compiler::TNode<String> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<String> tmp35;
    compiler::TNode<String> tmp36;
    ca_.Bind(&block2, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 20);
    compiler::TNode<String> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, ">"));
    compiler::TNode<String> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp36}, compiler::TNode<String>{tmp37}));
    compiler::TNode<String> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp38}, compiler::TNode<String>{tmp35}));
    compiler::TNode<String> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "</"));
    compiler::TNode<String> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp39}, compiler::TNode<String>{tmp40}));
    compiler::TNode<String> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp41}, compiler::TNode<String>{tmp32}));
    compiler::TNode<String> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, ">"));
    compiler::TNode<String> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<String>(StringAdd_83(state_, compiler::TNode<Context>{tmp29}, compiler::TNode<String>{tmp42}, compiler::TNode<String>{tmp43}));
    CodeStubAssembler(state_).Return(tmp44);
  }
}

TF_BUILTIN(StringPrototypeAnchor, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 27);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 26);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.anchor"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "a"));
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "name"));
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeBig, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 34);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 33);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.big"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "big"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeBlink, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 42);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 43);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 41);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.blink"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "blink"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeBold, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 51);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 50);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.bold"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "b"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeFontcolor, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 59);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 58);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.fontcolor"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "font"));
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "color"));
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeFontsize, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 67);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 66);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.fontsize"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "font"));
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "size"));
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeFixed, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 75);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 74);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.fixed"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "tt"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeItalics, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 83);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 82);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.italics"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "i"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeLink, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 91);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(FromConstexpr8ATintptr17ATconstexpr_int31_127(state_, 0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 90);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.link"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "a"));
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "href"));
    compiler::TNode<String> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp9, tmp6));
    USE(tmp10);
    arguments.PopAndReturn(tmp10);
  }
}

TF_BUILTIN(StringPrototypeSmall, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 99);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 100);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 98);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.small"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "small"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeStrike, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 108);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 109);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 107);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.strike"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "strike"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeSub, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 116);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 115);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.sub"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "sub"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(StringPrototypeSup, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 123);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = kEmptyString_73(state_);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = kEmptyString_73(state_);
    ca_.SetSourcePosition("../../src/builtins/string-html.tq", 122);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "String.prototype.sup"));
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(FromConstexpr6String18ATconstexpr_string_133(state_, "sup"));
    compiler::TNode<String> tmp9;
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateHTML, tmp0, tmp1, tmp7, tmp8, tmp5, tmp6));
    USE(tmp9);
    arguments.PopAndReturn(tmp9);
  }
}

}  // namespace internal
}  // namespace v8

