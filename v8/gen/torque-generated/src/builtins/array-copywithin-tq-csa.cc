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

compiler::TNode<Number> ConvertToRelativeIndex_1(compiler::CodeAssemblerState* state_, compiler::TNode<Number> p_index, compiler::TNode<Number> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_index, p_length);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 7);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp2});
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Number> tmp4;
    compiler::TNode<Number> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp4}, compiler::TNode<Number>{tmp5});
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = Max_81(state_, compiler::TNode<Number>{tmp6}, compiler::TNode<Number>{tmp7});
    ca_.Goto(&block5, tmp4, tmp5, tmp8);
  }

  if (block3.is_used()) {
    compiler::TNode<Number> tmp9;
    compiler::TNode<Number> tmp10;
    ca_.Bind(&block3, &tmp9, &tmp10);
    compiler::TNode<Number> tmp11;
    USE(tmp11);
    tmp11 = Min_80(state_, compiler::TNode<Number>{tmp9}, compiler::TNode<Number>{tmp10});
    ca_.Goto(&block4, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block4, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<Number> tmp17;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block1, tmp15, tmp16, tmp17);
  }

  if (block1.is_used()) {
    compiler::TNode<Number> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 6);
    ca_.Goto(&block6, tmp18, tmp19, tmp20);
  }

    compiler::TNode<Number> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<Number> tmp23;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23);
  return compiler::TNode<Number>{tmp23};
}

TF_BUILTIN(ArrayPrototypeCopyWithin, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number, Oddball> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number, Oddball> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSReceiver, Number, Number, Number, Number, Number, Number, Number, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 14);
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 17);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = GetLengthProperty_244(state_, compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 20);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 0);
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp7});
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 24);
    compiler::TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = ConvertToRelativeIndex_1(state_, compiler::TNode<Number>{tmp9}, compiler::TNode<Number>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 27);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 1);
    compiler::TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp11});
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp3}, compiler::TNode<Object>{tmp12});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 31);
    compiler::TNode<Number> tmp14;
    USE(tmp14);
    tmp14 = ConvertToRelativeIndex_1(state_, compiler::TNode<Number>{tmp13}, compiler::TNode<Number>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 35);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 36);
    compiler::TNode<IntPtrT> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    compiler::TNode<Object> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp0}, compiler::TNode<RawPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}}, compiler::TNode<IntPtrT>{tmp15});
    compiler::TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = Undefined_64(state_);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).TaggedNotEqual(compiler::TNode<Object>{tmp16}, compiler::TNode<HeapObject>{tmp17});
    ca_.Branch(tmp18, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp9, tmp10, tmp13, tmp14, tmp6);
  }

  if (block1.is_used()) {
    compiler::TNode<RawPtrT> tmp19;
    compiler::TNode<RawPtrT> tmp20;
    compiler::TNode<IntPtrT> tmp21;
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Number> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Number> tmp30;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 37);
    compiler::TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr8ATintptr17ATconstexpr_int31_148(state_, 2);
    compiler::TNode<Object> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{compiler::TNode<RawPtrT>{tmp19}, compiler::TNode<RawPtrT>{tmp20}, compiler::TNode<IntPtrT>{tmp21}}, compiler::TNode<IntPtrT>{tmp31});
    compiler::TNode<Number> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp22}, compiler::TNode<Object>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 36);
    ca_.Goto(&block2, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp33);
  }

  if (block2.is_used()) {
    compiler::TNode<RawPtrT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<IntPtrT> tmp36;
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<Number> tmp44;
    compiler::TNode<Number> tmp45;
    ca_.Bind(&block2, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 42);
    compiler::TNode<Number> tmp46;
    USE(tmp46);
    tmp46 = ConvertToRelativeIndex_1(state_, compiler::TNode<Number>{tmp45}, compiler::TNode<Number>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 45);
    compiler::TNode<Number> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp46}, compiler::TNode<Number>{tmp44});
    compiler::TNode<Number> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp40}, compiler::TNode<Number>{tmp42});
    compiler::TNode<Number> tmp49;
    USE(tmp49);
    tmp49 = Min_80(state_, compiler::TNode<Number>{tmp47}, compiler::TNode<Number>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 48);
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    tmp50 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 50);
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp44}, compiler::TNode<Number>{tmp42});
    ca_.Branch(tmp51, &block5, &block6, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp49, tmp50, tmp51);
  }

  if (block5.is_used()) {
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<Context> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Number> tmp63;
    compiler::TNode<Number> tmp64;
    compiler::TNode<Number> tmp65;
    compiler::TNode<Number> tmp66;
    compiler::TNode<BoolT> tmp67;
    ca_.Bind(&block5, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    compiler::TNode<Number> tmp68;
    USE(tmp68);
    tmp68 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp62}, compiler::TNode<Number>{tmp65});
    compiler::TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = NumberIsLessThan_75(state_, compiler::TNode<Number>{tmp60}, compiler::TNode<Number>{tmp68});
    ca_.Goto(&block7, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69);
  }

  if (block6.is_used()) {
    compiler::TNode<RawPtrT> tmp70;
    compiler::TNode<RawPtrT> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<Context> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Number> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<Number> tmp81;
    compiler::TNode<Number> tmp82;
    compiler::TNode<Number> tmp83;
    compiler::TNode<Number> tmp84;
    compiler::TNode<BoolT> tmp85;
    ca_.Bind(&block6, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    compiler::TNode<BoolT> tmp86;
    USE(tmp86);
    tmp86 = FromConstexpr6ATbool16ATconstexpr_bool_165(state_, false);
    ca_.Goto(&block7, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86);
  }

  if (block7.is_used()) {
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<RawPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<Context> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Number> tmp94;
    compiler::TNode<Number> tmp95;
    compiler::TNode<Number> tmp96;
    compiler::TNode<Number> tmp97;
    compiler::TNode<Number> tmp98;
    compiler::TNode<Number> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Number> tmp101;
    compiler::TNode<BoolT> tmp102;
    compiler::TNode<BoolT> tmp103;
    ca_.Bind(&block7, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.Branch(tmp103, &block3, &block4, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

  if (block3.is_used()) {
    compiler::TNode<RawPtrT> tmp104;
    compiler::TNode<RawPtrT> tmp105;
    compiler::TNode<IntPtrT> tmp106;
    compiler::TNode<Context> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Number> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<Number> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Number> tmp115;
    compiler::TNode<Number> tmp116;
    compiler::TNode<Number> tmp117;
    compiler::TNode<Number> tmp118;
    ca_.Bind(&block3, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 52);
    compiler::TNode<Number> tmp119;
    USE(tmp119);
    tmp119 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, -1);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 55);
    compiler::TNode<Number> tmp120;
    USE(tmp120);
    tmp120 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp114}, compiler::TNode<Number>{tmp117});
    compiler::TNode<Number> tmp121;
    USE(tmp121);
    tmp121 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp120}, compiler::TNode<Number>{tmp121});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 58);
    compiler::TNode<Number> tmp123;
    USE(tmp123);
    tmp123 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp112}, compiler::TNode<Number>{tmp117});
    compiler::TNode<Number> tmp124;
    USE(tmp124);
    tmp124 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp125;
    USE(tmp125);
    tmp125 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp123}, compiler::TNode<Number>{tmp124});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 50);
    ca_.Goto(&block4, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp125, tmp113, tmp122, tmp115, tmp116, tmp117, tmp119);
  }

  if (block4.is_used()) {
    compiler::TNode<RawPtrT> tmp126;
    compiler::TNode<RawPtrT> tmp127;
    compiler::TNode<IntPtrT> tmp128;
    compiler::TNode<Context> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<JSReceiver> tmp131;
    compiler::TNode<Number> tmp132;
    compiler::TNode<Number> tmp133;
    compiler::TNode<Number> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Number> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<Number> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<Number> tmp140;
    ca_.Bind(&block4, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 62);
    ca_.Goto(&block10, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block10.is_used()) {
    compiler::TNode<RawPtrT> tmp141;
    compiler::TNode<RawPtrT> tmp142;
    compiler::TNode<IntPtrT> tmp143;
    compiler::TNode<Context> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<JSReceiver> tmp146;
    compiler::TNode<Number> tmp147;
    compiler::TNode<Number> tmp148;
    compiler::TNode<Number> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<Number> tmp151;
    compiler::TNode<Number> tmp152;
    compiler::TNode<Number> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<Number> tmp155;
    ca_.Bind(&block10, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    compiler::TNode<Number> tmp156;
    USE(tmp156);
    tmp156 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 0);
    compiler::TNode<BoolT> tmp157;
    USE(tmp157);
    tmp157 = NumberIsGreaterThan_77(state_, compiler::TNode<Number>{tmp154}, compiler::TNode<Number>{tmp156});
    ca_.Branch(tmp157, &block8, &block9, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155);
  }

  if (block8.is_used()) {
    compiler::TNode<RawPtrT> tmp158;
    compiler::TNode<RawPtrT> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<Context> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<JSReceiver> tmp163;
    compiler::TNode<Number> tmp164;
    compiler::TNode<Number> tmp165;
    compiler::TNode<Number> tmp166;
    compiler::TNode<Number> tmp167;
    compiler::TNode<Number> tmp168;
    compiler::TNode<Number> tmp169;
    compiler::TNode<Number> tmp170;
    compiler::TNode<Number> tmp171;
    compiler::TNode<Number> tmp172;
    ca_.Bind(&block8, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 66);
    compiler::TNode<Oddball> tmp173;
    tmp173 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp161, tmp163, tmp168));
    USE(tmp173);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 69);
    compiler::TNode<Oddball> tmp174;
    USE(tmp174);
    tmp174 = True_65(state_);
    compiler::TNode<BoolT> tmp175;
    USE(tmp175);
    tmp175 = CodeStubAssembler(state_).TaggedEqual(compiler::TNode<HeapObject>{tmp173}, compiler::TNode<HeapObject>{tmp174});
    ca_.Branch(tmp175, &block11, &block12, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block11.is_used()) {
    compiler::TNode<RawPtrT> tmp176;
    compiler::TNode<RawPtrT> tmp177;
    compiler::TNode<IntPtrT> tmp178;
    compiler::TNode<Context> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<JSReceiver> tmp181;
    compiler::TNode<Number> tmp182;
    compiler::TNode<Number> tmp183;
    compiler::TNode<Number> tmp184;
    compiler::TNode<Number> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Number> tmp188;
    compiler::TNode<Number> tmp189;
    compiler::TNode<Number> tmp190;
    compiler::TNode<Oddball> tmp191;
    ca_.Bind(&block11, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 71);
    compiler::TNode<Object> tmp192;
    USE(tmp192);
    tmp192 = CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp179}, compiler::TNode<Object>{tmp181}, compiler::TNode<Object>{tmp186});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 74);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp179, tmp181, tmp184, tmp192);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 69);
    ca_.Goto(&block13, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191);
  }

  if (block12.is_used()) {
    compiler::TNode<RawPtrT> tmp194;
    compiler::TNode<RawPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<Context> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<JSReceiver> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Number> tmp202;
    compiler::TNode<Number> tmp203;
    compiler::TNode<Number> tmp204;
    compiler::TNode<Number> tmp205;
    compiler::TNode<Number> tmp206;
    compiler::TNode<Number> tmp207;
    compiler::TNode<Number> tmp208;
    compiler::TNode<Oddball> tmp209;
    ca_.Bind(&block12, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 77);
    compiler::TNode<Smi> tmp210;
    USE(tmp210);
    tmp210 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_166(state_, LanguageMode::kStrict);
    compiler::TNode<Oddball> tmp211;
    tmp211 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp197, tmp199, tmp202, tmp210));
    USE(tmp211);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 69);
    ca_.Goto(&block13, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209);
  }

  if (block13.is_used()) {
    compiler::TNode<RawPtrT> tmp212;
    compiler::TNode<RawPtrT> tmp213;
    compiler::TNode<IntPtrT> tmp214;
    compiler::TNode<Context> tmp215;
    compiler::TNode<Object> tmp216;
    compiler::TNode<JSReceiver> tmp217;
    compiler::TNode<Number> tmp218;
    compiler::TNode<Number> tmp219;
    compiler::TNode<Number> tmp220;
    compiler::TNode<Number> tmp221;
    compiler::TNode<Number> tmp222;
    compiler::TNode<Number> tmp223;
    compiler::TNode<Number> tmp224;
    compiler::TNode<Number> tmp225;
    compiler::TNode<Number> tmp226;
    compiler::TNode<Oddball> tmp227;
    ca_.Bind(&block13, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 81);
    compiler::TNode<Number> tmp228;
    USE(tmp228);
    tmp228 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp222}, compiler::TNode<Number>{tmp226});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 84);
    compiler::TNode<Number> tmp229;
    USE(tmp229);
    tmp229 = CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp220}, compiler::TNode<Number>{tmp226});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 87);
    compiler::TNode<Number> tmp230;
    USE(tmp230);
    tmp230 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_158(state_, 1);
    compiler::TNode<Number> tmp231;
    USE(tmp231);
    tmp231 = CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp225}, compiler::TNode<Number>{tmp230});
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 62);
    ca_.Goto(&block10, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp229, tmp221, tmp228, tmp223, tmp224, tmp231, tmp226);
  }

  if (block9.is_used()) {
    compiler::TNode<RawPtrT> tmp232;
    compiler::TNode<RawPtrT> tmp233;
    compiler::TNode<IntPtrT> tmp234;
    compiler::TNode<Context> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<JSReceiver> tmp237;
    compiler::TNode<Number> tmp238;
    compiler::TNode<Number> tmp239;
    compiler::TNode<Number> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<Number> tmp243;
    compiler::TNode<Number> tmp244;
    compiler::TNode<Number> tmp245;
    compiler::TNode<Number> tmp246;
    ca_.Bind(&block9, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246);
    ca_.SetSourcePosition("../../src/builtins/array-copywithin.tq", 91);
    arguments.PopAndReturn(tmp237);
  }
}

}  // namespace internal
}  // namespace v8

