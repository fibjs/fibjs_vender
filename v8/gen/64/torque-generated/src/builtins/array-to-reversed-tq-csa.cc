#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/torque/runtime-support.h"
// Required Builtins:
#include "torque-generated/src/builtins/array-to-reversed-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-to-reversed-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=38&c=1
TNode<JSArray> TryFastPackedArrayToReversed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_FastJSArray_1(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<Smi> tmp2;
  TNode<Smi> tmp3;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp0});
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Number> tmp5;
  TNode<JSArray> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).ArrayCreate(TNode<Context>{p_context}, TNode<Number>{tmp5});
    ca_.Goto(&block2, tmp6);
  }

  TNode<IntPtrT> tmp7;
  TNode<Map> tmp8;
  TNode<Int32T> tmp9;
  TNode<Int32T> tmp10;
  TNode<BoolT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp8 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp0, tmp7});
    tmp9 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp8});
    tmp10 = FromConstexpr_ElementsKind_constexpr_PACKED_SMI_ELEMENTS_0(state_, ElementsKind::PACKED_SMI_ELEMENTS);
    tmp11 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp10});
    ca_.Branch(tmp11, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp12;
  TNode<FixedArrayBase> tmp13;
  TNode<Smi> tmp14;
  TNode<JSArray> tmp15;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp13 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp12});
    tmp14 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp0});
    tmp15 = FastPackedArrayToReversed_FastPackedSmiElements_Smi_0(state_, TNode<Context>{p_context}, ElementsKind::PACKED_SMI_ELEMENTS, TNode<FixedArrayBase>{tmp13}, TNode<Smi>{tmp14});
    ca_.Goto(&block2, tmp15);
  }

  TNode<Int32T> tmp16;
  TNode<BoolT> tmp17;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp16 = FromConstexpr_ElementsKind_constexpr_PACKED_ELEMENTS_0(state_, ElementsKind::PACKED_ELEMENTS);
    tmp17 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp16});
    ca_.Branch(tmp17, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp18;
  TNode<FixedArrayBase> tmp19;
  TNode<Smi> tmp20;
  TNode<JSArray> tmp21;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp19 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp18});
    tmp20 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp0});
    tmp21 = FastPackedArrayToReversed_FastPackedObjectElements_JSAny_0(state_, TNode<Context>{p_context}, ElementsKind::PACKED_ELEMENTS, TNode<FixedArrayBase>{tmp19}, TNode<Smi>{tmp20});
    ca_.Goto(&block2, tmp21);
  }

  TNode<Int32T> tmp22;
  TNode<BoolT> tmp23;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp22 = FromConstexpr_ElementsKind_constexpr_PACKED_DOUBLE_ELEMENTS_0(state_, ElementsKind::PACKED_DOUBLE_ELEMENTS);
    tmp23 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp22});
    ca_.Branch(tmp23, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp24;
  TNode<FixedArrayBase> tmp25;
  TNode<Smi> tmp26;
  TNode<JSArray> tmp27;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp25 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp24});
    tmp26 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp0});
    tmp27 = FastPackedArrayToReversed_FastPackedDoubleElements_float64_0(state_, TNode<Context>{p_context}, ElementsKind::PACKED_DOUBLE_ELEMENTS, TNode<FixedArrayBase>{tmp25}, TNode<Smi>{tmp26});
    ca_.Goto(&block2, tmp27);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block1);
  }

  TNode<JSArray> phi_bb2_2;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    ca_.Goto(&block13, phi_bb2_2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

  TNode<JSArray> phi_bb13_2;
    ca_.Bind(&block13, &phi_bb13_2);
  return TNode<JSArray>{phi_bb13_2};
}

TF_BUILTIN(GenericArrayToReversed, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<Number> tmp1;
  TNode<JSArray> tmp2;
  TNode<Number> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp0});
    tmp2 = CodeStubAssembler(state_).ArrayCreate(TNode<Context>{parameter0}, TNode<Number>{tmp1});
    tmp3 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp3);
  }

  TNode<Number> phi_bb3_5;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_5);
    tmp4 = NumberIsLessThan_0(state_, TNode<Number>{phi_bb3_5}, TNode<Number>{tmp1});
    ca_.Branch(tmp4, &block1, std::vector<compiler::Node*>{phi_bb3_5}, &block2, std::vector<compiler::Node*>{phi_bb3_5});
  }

  TNode<Number> phi_bb1_5;
  TNode<Number> tmp5;
  TNode<Number> tmp6;
  TNode<Number> tmp7;
  TNode<Object> tmp8;
  TNode<Object> tmp9;
  TNode<Number> tmp10;
  TNode<Number> tmp11;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_5);
    tmp5 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp1}, TNode<Number>{phi_bb1_5});
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp5}, TNode<Number>{tmp6});
    tmp8 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{tmp0}, TNode<Object>{tmp7});
    tmp9 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), parameter0, tmp2, phi_bb1_5, tmp8);
    tmp10 = FromConstexpr_Number_constexpr_int31_0(state_, 1);
    tmp11 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb1_5}, TNode<Number>{tmp10});
    ca_.Goto(&block3, tmp11);
  }

  TNode<Number> phi_bb2_5;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_5);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(ArrayPrototypeToReversed, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = TryFastPackedArrayToReversed_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kGenericArrayToReversed), parameter0, parameter1);
    arguments.PopAndReturn(tmp2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    arguments.PopAndReturn(tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=46&c=12
TNode<JSArray> FastPackedArrayToReversed_FastPackedSmiElements_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, ElementsKind p_kind, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArrayBase> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{p_length});
    tmp1 = CodeStubAssembler(state_).AllocateFixedArray(p_kind, TNode<IntPtrT>{tmp0}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp2);
  }

  TNode<Smi> phi_bb4_4;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    tmp3 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_4}, TNode<Smi>{p_length});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{phi_bb4_4}, &block3, std::vector<compiler::Node*>{phi_bb4_4});
  }

  TNode<Smi> phi_bb2_4;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4);
    tmp4 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_length}, TNode<Smi>{phi_bb2_4});
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp4}, TNode<Smi>{tmp5});
    tmp7 = LoadElement_FastPackedSmiElements_Smi_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{p_elements}, TNode<Smi>{tmp6});
    StoreElement_FastPackedSmiElements_Smi_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{tmp1}, TNode<Smi>{phi_bb2_4}, TNode<Smi>{tmp7});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb2_4}, TNode<Smi>{tmp8});
    ca_.Goto(&block4, tmp9);
  }

  TNode<Smi> phi_bb3_4;
  TNode<NativeContext> tmp10;
  TNode<Map> tmp11;
  TNode<JSArray> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4);
    tmp10 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp11 = CodeStubAssembler(state_).LoadJSArrayElementsMap(p_kind, TNode<NativeContext>{tmp10});
    tmp12 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp11}, TNode<FixedArrayBase>{tmp1});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<JSArray>{tmp12};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=50&c=12
TNode<JSArray> FastPackedArrayToReversed_FastPackedObjectElements_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, ElementsKind p_kind, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArrayBase> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{p_length});
    tmp1 = CodeStubAssembler(state_).AllocateFixedArray(p_kind, TNode<IntPtrT>{tmp0}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp2);
  }

  TNode<Smi> phi_bb4_4;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    tmp3 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_4}, TNode<Smi>{p_length});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{phi_bb4_4}, &block3, std::vector<compiler::Node*>{phi_bb4_4});
  }

  TNode<Smi> phi_bb2_4;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Object> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4);
    tmp4 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_length}, TNode<Smi>{phi_bb2_4});
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp4}, TNode<Smi>{tmp5});
    tmp7 = LoadElement_FastPackedObjectElements_JSAny_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{p_elements}, TNode<Smi>{tmp6});
    StoreElement_FastPackedObjectElements_JSAny_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{tmp1}, TNode<Smi>{phi_bb2_4}, TNode<Object>{tmp7});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb2_4}, TNode<Smi>{tmp8});
    ca_.Goto(&block4, tmp9);
  }

  TNode<Smi> phi_bb3_4;
  TNode<NativeContext> tmp10;
  TNode<Map> tmp11;
  TNode<JSArray> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4);
    tmp10 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp11 = CodeStubAssembler(state_).LoadJSArrayElementsMap(p_kind, TNode<NativeContext>{tmp10});
    tmp12 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp11}, TNode<FixedArrayBase>{tmp1});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<JSArray>{tmp12};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-to-reversed.tq?l=54&c=12
TNode<JSArray> FastPackedArrayToReversed_FastPackedDoubleElements_float64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, ElementsKind p_kind, TNode<FixedArrayBase> p_elements, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<FixedArrayBase> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{p_length});
    tmp1 = CodeStubAssembler(state_).AllocateFixedArray(p_kind, TNode<IntPtrT>{tmp0}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp2 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp2);
  }

  TNode<Smi> phi_bb4_4;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    tmp3 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb4_4}, TNode<Smi>{p_length});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{phi_bb4_4}, &block3, std::vector<compiler::Node*>{phi_bb4_4});
  }

  TNode<Smi> phi_bb2_4;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  TNode<Float64T> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4);
    tmp4 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{p_length}, TNode<Smi>{phi_bb2_4});
    tmp5 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp6 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp4}, TNode<Smi>{tmp5});
    tmp7 = LoadElement_FastPackedDoubleElements_float64_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{p_elements}, TNode<Smi>{tmp6});
    StoreElement_FastPackedDoubleElements_float64_0(state_, TNode<Context>{p_context}, TNode<FixedArrayBase>{tmp1}, TNode<Smi>{phi_bb2_4}, TNode<Float64T>{tmp7});
    tmp8 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb2_4}, TNode<Smi>{tmp8});
    ca_.Goto(&block4, tmp9);
  }

  TNode<Smi> phi_bb3_4;
  TNode<NativeContext> tmp10;
  TNode<Map> tmp11;
  TNode<JSArray> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4);
    tmp10 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp11 = CodeStubAssembler(state_).LoadJSArrayElementsMap(p_kind, TNode<NativeContext>{tmp10});
    tmp12 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp11}, TNode<FixedArrayBase>{tmp1});
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<JSArray>{tmp12};
}

} // namespace internal
} // namespace v8
