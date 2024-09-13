#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
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
#include "src/objects/js-disposable-stack.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator-inl.h"
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
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-buffer-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(LoadJoinElement_DictionaryElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<FixedArrayBase> tmp2;
  TNode<NumberDictionary> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp2 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp1});
    tmp3 = UnsafeCast_NumberDictionary_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    tmp4 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{parameter2});
    compiler::CodeAssemblerLabel label6(&ca_);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp5 = CodeStubAssembler(state_).BasicLoadNumberDictionaryElement(TNode<NumberDictionary>{tmp3}, TNode<IntPtrT>{tmp4}, &label6, &label7);
    ca_.Goto(&block5);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block6);
    }
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block7);
    }
  }

  TNode<Number> tmp8;
  TNode<Object> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp8 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{parameter2});
    tmp9 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp8});
    CodeStubAssembler(state_).Return(tmp9);
  }

  TNode<String> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp10 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp10);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(LoadJoinElement_FastSmiOrObjectElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<FixedArrayBase> tmp2;
  TNode<FixedArray> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp2 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp1});
    tmp3 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    std::tie(tmp4, tmp5, tmp6) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp3}).Flatten();
    tmp7 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{parameter2});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<Hole> tmp16;
  TNode<BoolT> tmp17;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp11 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp7});
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14) = NewReference_Object_0(state_, TNode<Object>{tmp4}, TNode<IntPtrT>{tmp12}).Flatten();
    tmp15 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp13, tmp14});
    tmp16 = TheHole_0(state_);
    tmp17 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp15}, TNode<HeapObject>{tmp16});
    ca_.Branch(tmp17, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> tmp18;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp18 = kEmptyString_0(state_);
    ca_.Goto(&block11, tmp18);
  }

  TNode<Object> tmp19;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp19 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp15});
    ca_.Goto(&block11, tmp19);
  }

  TNode<Object> phi_bb11_6;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6);
    CodeStubAssembler(state_).Return(phi_bb11_6);
  }
}

TF_BUILTIN(LoadJoinElement_FastDoubleElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<FixedArrayBase> tmp2;
  TNode<FixedDoubleArray> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp2 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp0, tmp1});
    tmp3 = UnsafeCast_FixedDoubleArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    std::tie(tmp4, tmp5, tmp6) = FieldSliceFixedDoubleArrayFloats_0(state_, TNode<FixedDoubleArray>{tmp3}).Flatten();
    tmp7 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{parameter2});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<BoolT> tmp15;
  TNode<Float64T> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = TimesSizeOf_float64_or_hole_0(state_, TNode<IntPtrT>{tmp7});
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14) = NewReference_float64_or_hole_0(state_, TNode<Object>{tmp4}, TNode<IntPtrT>{tmp12}).Flatten();
    std::tie(tmp15, tmp16) = LoadFloat64OrHole_0(state_, TorqueStructReference_float64_or_hole_0{TNode<Object>{tmp13}, TNode<IntPtrT>{tmp14}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Branch(tmp15, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> tmp17;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp17 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp17);
  }

  TNode<HeapNumber> tmp18;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp18 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp16});
    CodeStubAssembler(state_).Return(tmp18);
  }
}

TF_BUILTIN(ConvertToLocaleString, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kElement);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kLocales);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kOptions);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{parameter1});
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp1;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp1 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<Object> tmp2;
  TNode<Object> tmp3;
  TNode<JSReceiver> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_JSAny_constexpr_string_0(state_, "toLocaleString");
    tmp3 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, &label5);
    ca_.Goto(&block5);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, tmp3);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp6;
  TNode<String> tmp7;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp6 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp4}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, TNode<Object>{parameter3});
    tmp7 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp6});
    CodeStubAssembler(state_).Return(tmp7);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=101&c=1
TNode<BoolT> CannotUseSameArrayAccessor_JSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BuiltinPtr> p_loadFn, TNode<JSReceiver> p_receiver, TNode<Map> p_originalMap, TNode<Number> p_originalLen) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{p_loadFn}, TNode<Smi>{ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_GenericElementsAccessor_0))});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  TNode<JSArray> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Map> tmp4;
  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp2 = UnsafeCast_JSArray_0(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp4 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{p_originalMap}, TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp6);
  }

  TNode<IntPtrT> tmp7;
  TNode<Number> tmp8;
  TNode<BoolT> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp8 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp2, tmp7});
    tmp9 = IsNumberNotEqual_0(state_, TNode<Number>{p_originalLen}, TNode<Number>{tmp8});
    ca_.Branch(tmp9, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp10);
  }

  TNode<BoolT> tmp11;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp11, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp12);
  }

  TNode<BoolT> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp13);
  }

  TNode<BoolT> phi_bb1_5;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_5);
    ca_.Goto(&block10, phi_bb1_5);
  }

  TNode<BoolT> phi_bb10_5;
    ca_.Bind(&block10, &phi_bb10_5);
  return TNode<BoolT>{phi_bb10_5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=113&c=1
TNode<BoolT> CannotUseSameArrayAccessor_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<BuiltinPtr> p__loadFn, TNode<JSReceiver> p_receiver, TNode<Map> p__initialMap, TNode<Number> p__initialLen) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<JSArrayBuffer> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{p_receiver});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp2 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp0, tmp1});
    tmp3 = IsDetachedBuffer_0(state_, TNode<JSArrayBuffer>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp4);
  }

  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = IsVariableLengthJSArrayBufferView_0(state_, TNode<JSArrayBufferView>{tmp0});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp6);
  }

  TNode<BoolT> tmp7;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp7);
  }

  TNode<BoolT> phi_bb1_5;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_5);
    ca_.Goto(&block6, phi_bb1_5);
  }

  TNode<BoolT> phi_bb6_5;
    ca_.Bind(&block6, &phi_bb6_5);
  return TNode<BoolT>{phi_bb6_5};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=135&c=1
TNode<IntPtrT> AddStringLength_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_lenA, TNode<IntPtrT> p_lenB) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TryIntPtrAdd(TNode<IntPtrT>{p_lenA}, TNode<IntPtrT>{p_lenB}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block3);
  }

  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, String::kMaxLength);
    tmp3 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block3);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block8);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, p_context);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block8);
  return TNode<IntPtrT>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=269&c=1
TorqueStructBuffer_0 NewBuffer_0(compiler::CodeAssemblerState* state_, TNode<UintPtrT> p_len, TNode<String> p_sep) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uintptr_constexpr_int31_0(state_, FixedArray::kMaxRegularLength);
    tmp1 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{p_len}, TNode<UintPtrT>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, FixedArray::kMaxRegularLength);
    ca_.Goto(&block4, tmp2);
  }

  TNode<IntPtrT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{p_len});
    ca_.Goto(&block4, tmp3);
  }

  TNode<IntPtrT> phi_bb4_2;
  TNode<FixedArray> tmp4;
  TNode<Uint16T> tmp5;
  TNode<BoolT> tmp6;
  TNode<Null> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    tmp4 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{phi_bb4_2});
    tmp5 = CodeStubAssembler(state_).LoadInstanceType(TNode<HeapObject>{p_sep});
    tmp6 = CodeStubAssembler(state_).IsOneByteStringInstanceType(TNode<Uint16T>{tmp5});
    tmp7 = Null_0(state_);
    tmp8 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
  return TorqueStructBuffer_0{TNode<FixedArray>{tmp4}, TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp9}, TNode<BoolT>{tmp6}, TNode<PrimitiveHeapObject>{tmp7}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=283&c=1
TNode<String> BufferJoin_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructBuffer_0 p_buffer, TNode<String> p_sep) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{p_buffer.totalStringLength}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp2;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = kEmptyString_0(state_);
    ca_.Goto(&block1, tmp2);
  }

  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{p_buffer.index}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    std::tie(tmp5, tmp6, tmp7) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_buffer.fixedArray}).Flatten();
    tmp8 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp9});
    tmp11 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp12 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp10}, TNode<UintPtrT>{tmp11});
    ca_.Branch(tmp12, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<String> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp13 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp9});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp13});
    std::tie(tmp15, tmp16) = NewReference_Object_0(state_, TNode<Object>{tmp5}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp17 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp15, tmp16});
    compiler::CodeAssemblerLabel label19(&ca_);
    tmp18 = Cast_String_1(state_, TNode<Context>{p_context}, TNode<Object>{tmp17}, &label19);
    ca_.Goto(&block21);
    if (label19.is_used()) {
      ca_.Bind(&label19);
      ca_.Goto(&block22);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp20;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = Cast_Smi_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp17)}, &label21);
    ca_.Goto(&block25);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block26);
    }
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block1, tmp18);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> tmp22;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp22 = ca_.CallBuiltin<String>(Builtin::kStringRepeat, p_context, p_sep, tmp20);
    ca_.Goto(&block1, tmp22);
  }

  TNode<UintPtrT> tmp23;
  TNode<Uint32T> tmp24;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp23 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_buffer.totalStringLength});
    tmp24 = Convert_uint32_uintptr_0(state_, TNode<UintPtrT>{tmp23});
    ca_.Branch(p_buffer.isOneByte, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp25;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp25 = AllocateSeqOneByteString_0(state_, TNode<Uint32T>{tmp24});
    ca_.Goto(&block33, tmp25);
  }

  TNode<String> tmp26;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp26 = AllocateSeqTwoByteString_0(state_, TNode<Uint32T>{tmp24});
    ca_.Goto(&block33, tmp26);
  }

  TNode<String> phi_bb33_8;
  TNode<String> tmp27;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_8);
    tmp27 = ArrayBuiltinsAssembler(state_).CallJSArrayArrayJoinConcatToSequentialString(TNode<FixedArray>{p_buffer.fixedArray}, TNode<IntPtrT>{p_buffer.index}, TNode<String>{p_sep}, TNode<String>{phi_bb33_8});
    ca_.Goto(&block1, tmp27);
  }

  TNode<String> phi_bb1_7;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_7);
    ca_.Goto(&block35, phi_bb1_7);
  }

  TNode<String> phi_bb35_7;
    ca_.Bind(&block35, &phi_bb35_7);
  return TNode<String>{phi_bb35_7};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=388&c=1
TNode<Object> ArrayJoin_JSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lenNumber, TNode<Object> p_locales, TNode<Object> p_options) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<Int32T> tmp2;
  TNode<JSArray> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_receiver, tmp0});
    tmp2 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp1});
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Cast_JSArray_0(state_, TNode<HeapObject>{p_receiver}, &label4);
    ca_.Goto(&block4);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block3);
  }

  TNode<IntPtrT> tmp5;
  TNode<Number> tmp6;
  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp6 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp3, tmp5});
    tmp7 = IsNumberNotEqual_0(state_, TNode<Number>{tmp6}, TNode<Number>{p_lenNumber});
    ca_.Branch(tmp7, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block3);
  }

  TNode<BoolT> tmp8;
  TNode<BoolT> tmp9;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp8 = CodeStubAssembler(state_).IsPrototypeInitialArrayPrototype(TNode<Context>{p_context}, TNode<Map>{tmp1});
    tmp9 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp8});
    ca_.Branch(tmp9, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block3);
  }

  TNode<BoolT> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp10, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block3);
  }

  TNode<BoolT> tmp11;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp11 = CodeStubAssembler(state_).IsElementsKindLessThanOrEqual(TNode<Int32T>{tmp2}, ElementsKind::HOLEY_ELEMENTS);
    ca_.Branch(tmp11, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block14, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_FastSmiOrObjectElements_0)));
  }

  TNode<BoolT> tmp12;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp12 = CodeStubAssembler(state_).IsElementsKindLessThanOrEqual(TNode<Int32T>{tmp2}, ElementsKind::HOLEY_DOUBLE_ELEMENTS);
    ca_.Branch(tmp12, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.Goto(&block17, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_FastDoubleElements_0)));
  }

  TNode<Int32T> tmp13;
  TNode<BoolT> tmp14;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp13 = FromConstexpr_ElementsKind_constexpr_DICTIONARY_ELEMENTS_0(state_, ElementsKind::DICTIONARY_ELEMENTS);
    tmp14 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp13});
    ca_.Branch(tmp14, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp15;
  TNode<FixedArrayBase> tmp16;
  TNode<NumberDictionary> tmp17;
  TNode<Smi> tmp18;
  TNode<Smi> tmp19;
  TNode<BoolT> tmp20;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp16 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp3, tmp15});
    tmp17 = UnsafeCast_NumberDictionary_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    tmp18 = CodeStubAssembler(state_).GetNumberDictionaryNumberOfElements(TNode<NumberDictionary>{tmp17});
    tmp19 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp18}, TNode<Smi>{tmp19});
    ca_.Branch(tmp20, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp21;
  TNode<BoolT> tmp22;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp21 = kEmptyString_0(state_);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_sep}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block24, std::vector<compiler::Node*>{}, &block25, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp23;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp23 = kEmptyString_0(state_);
    ca_.Goto(&block1, tmp23);
  }

  TNode<Number> tmp24;
  TNode<Number> tmp25;
  TNode<Smi> tmp26;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp24 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).NumberSub(TNode<Number>{p_lenNumber}, TNode<Number>{tmp24});
    compiler::CodeAssemblerLabel label27(&ca_);
    tmp26 = Cast_Smi_0(state_, TNode<Object>{tmp25}, &label27);
    ca_.Goto(&block28);
    if (label27.is_used()) {
      ca_.Bind(&label27);
      ca_.Goto(&block29);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, p_context);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> tmp28;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp28 = ca_.CallBuiltin<String>(Builtin::kStringRepeat, p_context, p_sep, tmp26);
    ca_.Goto(&block1, tmp28);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block17, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_DictionaryElements_0)));
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block3);
  }

  TNode<BuiltinPtr> phi_bb17_8;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_8);
    ca_.Goto(&block14, phi_bb17_8);
  }

  TNode<BuiltinPtr> phi_bb14_8;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_8);
    ca_.Goto(&block2, phi_bb14_8);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_GenericElementsAccessor_0)));
  }

  TNode<BuiltinPtr> phi_bb2_8;
  TNode<String> tmp29;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_8);
    tmp29 = ArrayJoinImpl_JSArray_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_sep}, TNode<Number>{p_lenNumber}, p_useToLocaleString, TNode<Object>{p_locales}, TNode<Object>{p_options}, TNode<BuiltinPtr>{phi_bb2_8});
    ca_.Goto(&block1, tmp29);
  }

  TNode<Object> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block30, phi_bb1_6);
  }

  TNode<Object> phi_bb30_6;
    ca_.Bind(&block30, &phi_bb30_6);
  return TNode<Object>{phi_bb30_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=435&c=1
TNode<Object> ArrayJoin_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lenNumber, TNode<Object> p_locales, TNode<Object> p_options) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<Int32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_receiver, tmp0});
    tmp2 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp1});
    tmp3 = CodeStubAssembler(state_).IsElementsKindGreaterThan(TNode<Int32T>{tmp2}, ElementsKind::UINT32_ELEMENTS);
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp4;
  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_ElementsKind_constexpr_INT32_ELEMENTS_0(state_, ElementsKind::INT32_ELEMENTS);
    tmp5 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp4});
    ca_.Branch(tmp5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Int32Elements_0)));
  }

  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = FromConstexpr_ElementsKind_constexpr_FLOAT16_ELEMENTS_0(state_, ElementsKind::FLOAT16_ELEMENTS);
    tmp7 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block10, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Float16Elements_0)));
  }

  TNode<Int32T> tmp8;
  TNode<BoolT> tmp9;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp8 = FromConstexpr_ElementsKind_constexpr_FLOAT32_ELEMENTS_0(state_, ElementsKind::FLOAT32_ELEMENTS);
    tmp9 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp8});
    ca_.Branch(tmp9, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block13, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Float32Elements_0)));
  }

  TNode<Int32T> tmp10;
  TNode<BoolT> tmp11;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp10 = FromConstexpr_ElementsKind_constexpr_FLOAT64_ELEMENTS_0(state_, ElementsKind::FLOAT64_ELEMENTS);
    tmp11 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp10});
    ca_.Branch(tmp11, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block16, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Float64Elements_0)));
  }

  TNode<Int32T> tmp12;
  TNode<BoolT> tmp13;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp12 = FromConstexpr_ElementsKind_constexpr_UINT8_CLAMPED_ELEMENTS_0(state_, ElementsKind::UINT8_CLAMPED_ELEMENTS);
    tmp13 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp12});
    ca_.Branch(tmp13, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block19, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint8ClampedElements_0)));
  }

  TNode<Int32T> tmp14;
  TNode<BoolT> tmp15;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp14 = FromConstexpr_ElementsKind_constexpr_BIGUINT64_ELEMENTS_0(state_, ElementsKind::BIGUINT64_ELEMENTS);
    tmp15 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp14});
    ca_.Branch(tmp15, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block22, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_BigUint64Elements_0)));
  }

  TNode<Int32T> tmp16;
  TNode<BoolT> tmp17;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp16 = FromConstexpr_ElementsKind_constexpr_BIGINT64_ELEMENTS_0(state_, ElementsKind::BIGINT64_ELEMENTS);
    tmp17 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp16});
    ca_.Branch(tmp17, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.Goto(&block25, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_BigInt64Elements_0)));
  }

  TNode<Int32T> tmp18;
  TNode<BoolT> tmp19;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    tmp18 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_UINT8_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_UINT8_ELEMENTS);
    tmp19 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp18});
    ca_.Branch(tmp19, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.Goto(&block28, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint8Elements_0)));
  }

  TNode<Int32T> tmp20;
  TNode<BoolT> tmp21;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp20 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_INT8_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_INT8_ELEMENTS);
    tmp21 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp20});
    ca_.Branch(tmp21, &block29, std::vector<compiler::Node*>{}, &block30, std::vector<compiler::Node*>{});
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.Goto(&block31, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Int8Elements_0)));
  }

  TNode<Int32T> tmp22;
  TNode<BoolT> tmp23;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp22 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_UINT16_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_UINT16_ELEMENTS);
    tmp23 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp22});
    ca_.Branch(tmp23, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.Goto(&block34, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint16Elements_0)));
  }

  TNode<Int32T> tmp24;
  TNode<BoolT> tmp25;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp24 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_INT16_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_INT16_ELEMENTS);
    tmp25 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp24});
    ca_.Branch(tmp25, &block35, std::vector<compiler::Node*>{}, &block36, std::vector<compiler::Node*>{});
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    ca_.Goto(&block37, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Int16Elements_0)));
  }

  TNode<Int32T> tmp26;
  TNode<BoolT> tmp27;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    tmp26 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_UINT32_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_UINT32_ELEMENTS);
    tmp27 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp26});
    ca_.Branch(tmp27, &block38, std::vector<compiler::Node*>{}, &block39, std::vector<compiler::Node*>{});
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    ca_.Goto(&block40, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint32Elements_0)));
  }

  TNode<Int32T> tmp28;
  TNode<BoolT> tmp29;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp28 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_INT32_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_INT32_ELEMENTS);
    tmp29 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp28});
    ca_.Branch(tmp29, &block41, std::vector<compiler::Node*>{}, &block42, std::vector<compiler::Node*>{});
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    ca_.Goto(&block43, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Int32Elements_0)));
  }

  TNode<Int32T> tmp30;
  TNode<BoolT> tmp31;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp30 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_FLOAT16_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_FLOAT16_ELEMENTS);
    tmp31 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp30});
    ca_.Branch(tmp31, &block44, std::vector<compiler::Node*>{}, &block45, std::vector<compiler::Node*>{});
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    ca_.Goto(&block46, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Float16Elements_0)));
  }

  TNode<Int32T> tmp32;
  TNode<BoolT> tmp33;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp32 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_FLOAT32_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_FLOAT32_ELEMENTS);
    tmp33 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp32});
    ca_.Branch(tmp33, &block47, std::vector<compiler::Node*>{}, &block48, std::vector<compiler::Node*>{});
  }

  if (block47.is_used()) {
    ca_.Bind(&block47);
    ca_.Goto(&block49, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Float32Elements_0)));
  }

  TNode<Int32T> tmp34;
  TNode<BoolT> tmp35;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp34 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_FLOAT64_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_FLOAT64_ELEMENTS);
    tmp35 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp34});
    ca_.Branch(tmp35, &block50, std::vector<compiler::Node*>{}, &block51, std::vector<compiler::Node*>{});
  }

  if (block50.is_used()) {
    ca_.Bind(&block50);
    ca_.Goto(&block52, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Float64Elements_0)));
  }

  TNode<Int32T> tmp36;
  TNode<BoolT> tmp37;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp36 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_UINT8_CLAMPED_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_UINT8_CLAMPED_ELEMENTS);
    tmp37 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp36});
    ca_.Branch(tmp37, &block53, std::vector<compiler::Node*>{}, &block54, std::vector<compiler::Node*>{});
  }

  if (block53.is_used()) {
    ca_.Bind(&block53);
    ca_.Goto(&block55, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint8ClampedElements_0)));
  }

  TNode<Int32T> tmp38;
  TNode<BoolT> tmp39;
  if (block54.is_used()) {
    ca_.Bind(&block54);
    tmp38 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_BIGUINT64_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_BIGUINT64_ELEMENTS);
    tmp39 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp38});
    ca_.Branch(tmp39, &block56, std::vector<compiler::Node*>{}, &block57, std::vector<compiler::Node*>{});
  }

  if (block56.is_used()) {
    ca_.Bind(&block56);
    ca_.Goto(&block58, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_BigUint64Elements_0)));
  }

  TNode<Int32T> tmp40;
  TNode<BoolT> tmp41;
  if (block57.is_used()) {
    ca_.Bind(&block57);
    tmp40 = FromConstexpr_ElementsKind_constexpr_RAB_GSAB_BIGINT64_ELEMENTS_0(state_, ElementsKind::RAB_GSAB_BIGINT64_ELEMENTS);
    tmp41 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp40});
    ca_.Branch(tmp41, &block59, std::vector<compiler::Node*>{}, &block60, std::vector<compiler::Node*>{});
  }

  if (block59.is_used()) {
    ca_.Bind(&block59);
    ca_.Goto(&block58, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_BigInt64Elements_0)));
  }

  if (block60.is_used()) {
    ca_.Bind(&block60);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BuiltinPtr> phi_bb58_8;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_8);
    ca_.Goto(&block55, phi_bb58_8);
  }

  TNode<BuiltinPtr> phi_bb55_8;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_8);
    ca_.Goto(&block52, phi_bb55_8);
  }

  TNode<BuiltinPtr> phi_bb52_8;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_8);
    ca_.Goto(&block49, phi_bb52_8);
  }

  TNode<BuiltinPtr> phi_bb49_8;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_8);
    ca_.Goto(&block46, phi_bb49_8);
  }

  TNode<BuiltinPtr> phi_bb46_8;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_8);
    ca_.Goto(&block43, phi_bb46_8);
  }

  TNode<BuiltinPtr> phi_bb43_8;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_8);
    ca_.Goto(&block40, phi_bb43_8);
  }

  TNode<BuiltinPtr> phi_bb40_8;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_8);
    ca_.Goto(&block37, phi_bb40_8);
  }

  TNode<BuiltinPtr> phi_bb37_8;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_8);
    ca_.Goto(&block34, phi_bb37_8);
  }

  TNode<BuiltinPtr> phi_bb34_8;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_8);
    ca_.Goto(&block31, phi_bb34_8);
  }

  TNode<BuiltinPtr> phi_bb31_8;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_8);
    ca_.Goto(&block28, phi_bb31_8);
  }

  TNode<BuiltinPtr> phi_bb28_8;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_8);
    ca_.Goto(&block25, phi_bb28_8);
  }

  TNode<BuiltinPtr> phi_bb25_8;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_8);
    ca_.Goto(&block22, phi_bb25_8);
  }

  TNode<BuiltinPtr> phi_bb22_8;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_8);
    ca_.Goto(&block19, phi_bb22_8);
  }

  TNode<BuiltinPtr> phi_bb19_8;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_8);
    ca_.Goto(&block16, phi_bb19_8);
  }

  TNode<BuiltinPtr> phi_bb16_8;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_8);
    ca_.Goto(&block13, phi_bb16_8);
  }

  TNode<BuiltinPtr> phi_bb13_8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_8);
    ca_.Goto(&block10, phi_bb13_8);
  }

  TNode<BuiltinPtr> phi_bb10_8;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_8);
    ca_.Goto(&block7, phi_bb10_8);
  }

  TNode<BuiltinPtr> phi_bb7_8;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_8);
    ca_.Goto(&block4, phi_bb7_8);
  }

  TNode<Int32T> tmp42;
  TNode<BoolT> tmp43;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp42 = FromConstexpr_ElementsKind_constexpr_UINT8_ELEMENTS_0(state_, ElementsKind::UINT8_ELEMENTS);
    tmp43 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp42});
    ca_.Branch(tmp43, &block62, std::vector<compiler::Node*>{}, &block63, std::vector<compiler::Node*>{});
  }

  if (block62.is_used()) {
    ca_.Bind(&block62);
    ca_.Goto(&block64, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint8Elements_0)));
  }

  TNode<Int32T> tmp44;
  TNode<BoolT> tmp45;
  if (block63.is_used()) {
    ca_.Bind(&block63);
    tmp44 = FromConstexpr_ElementsKind_constexpr_INT8_ELEMENTS_0(state_, ElementsKind::INT8_ELEMENTS);
    tmp45 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp44});
    ca_.Branch(tmp45, &block65, std::vector<compiler::Node*>{}, &block66, std::vector<compiler::Node*>{});
  }

  if (block65.is_used()) {
    ca_.Bind(&block65);
    ca_.Goto(&block67, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Int8Elements_0)));
  }

  TNode<Int32T> tmp46;
  TNode<BoolT> tmp47;
  if (block66.is_used()) {
    ca_.Bind(&block66);
    tmp46 = FromConstexpr_ElementsKind_constexpr_UINT16_ELEMENTS_0(state_, ElementsKind::UINT16_ELEMENTS);
    tmp47 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp46});
    ca_.Branch(tmp47, &block68, std::vector<compiler::Node*>{}, &block69, std::vector<compiler::Node*>{});
  }

  if (block68.is_used()) {
    ca_.Bind(&block68);
    ca_.Goto(&block70, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint16Elements_0)));
  }

  TNode<Int32T> tmp48;
  TNode<BoolT> tmp49;
  if (block69.is_used()) {
    ca_.Bind(&block69);
    tmp48 = FromConstexpr_ElementsKind_constexpr_INT16_ELEMENTS_0(state_, ElementsKind::INT16_ELEMENTS);
    tmp49 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp48});
    ca_.Branch(tmp49, &block71, std::vector<compiler::Node*>{}, &block72, std::vector<compiler::Node*>{});
  }

  if (block71.is_used()) {
    ca_.Bind(&block71);
    ca_.Goto(&block73, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Int16Elements_0)));
  }

  TNode<Int32T> tmp50;
  TNode<BoolT> tmp51;
  if (block72.is_used()) {
    ca_.Bind(&block72);
    tmp50 = FromConstexpr_ElementsKind_constexpr_UINT32_ELEMENTS_0(state_, ElementsKind::UINT32_ELEMENTS);
    tmp51 = CodeStubAssembler(state_).ElementsKindEqual(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp50});
    ca_.Branch(tmp51, &block74, std::vector<compiler::Node*>{}, &block75, std::vector<compiler::Node*>{});
  }

  if (block74.is_used()) {
    ca_.Bind(&block74);
    ca_.Goto(&block73, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinTypedElement_Uint32Elements_0)));
  }

  if (block75.is_used()) {
    ca_.Bind(&block75);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BuiltinPtr> phi_bb73_8;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_8);
    ca_.Goto(&block70, phi_bb73_8);
  }

  TNode<BuiltinPtr> phi_bb70_8;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_8);
    ca_.Goto(&block67, phi_bb70_8);
  }

  TNode<BuiltinPtr> phi_bb67_8;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_8);
    ca_.Goto(&block64, phi_bb67_8);
  }

  TNode<BuiltinPtr> phi_bb64_8;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_8);
    ca_.Goto(&block4, phi_bb64_8);
  }

  TNode<BuiltinPtr> phi_bb4_8;
  TNode<String> tmp52;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_8);
    tmp52 = ArrayJoinImpl_JSTypedArray_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_sep}, TNode<Number>{p_lenNumber}, p_useToLocaleString, TNode<Object>{p_locales}, TNode<Object>{p_options}, TNode<BuiltinPtr>{phi_bb4_8});
    ca_.Goto(&block77);
  }

    ca_.Bind(&block77);
  return TNode<Object>{tmp52};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=511&c=1
TNode<FixedArray> LoadJoinStack_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_IfUninitialized) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<HeapObject> tmp3;
  TNode<Undefined> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ARRAY_JOIN_STACK_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Undefined_OR_FixedArray_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Undefined_2(state_, TNode<HeapObject>{tmp3}, &label5);
    ca_.Goto(&block5);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block7);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(label_IfUninitialized);
  }

    ca_.Bind(&block7);
  return TNode<FixedArray>{ca_.UncheckedCast<FixedArray>(tmp3)};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=523&c=1
void SetJoinStack_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_stack) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ARRAY_JOIN_STACK_INDEX_0(state_);
    std::tie(tmp1, tmp2) = NativeContextSlot_Context_Undefined_OR_FixedArray_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    CodeStubAssembler(state_).StoreReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp2}, p_stack);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

TF_BUILTIN(JoinStackPush, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<FixedArray> parameter1 = UncheckedParameter<FixedArray>(Descriptor::kStack);
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp1);
  }

  TNode<IntPtrT> phi_bb3_4;
  TNode<BoolT> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4);
    tmp2 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb3_4}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{phi_bb3_4}, &block2, std::vector<compiler::Node*>{phi_bb3_4});
  }

  TNode<IntPtrT> phi_bb1_4;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<BoolT> tmp8;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    std::tie(tmp3, tmp4, tmp5) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter1}).Flatten();
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb1_4});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp5});
    tmp8 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp6}, TNode<UintPtrT>{tmp7});
    ca_.Branch(tmp8, &block9, std::vector<compiler::Node*>{phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4}, &block10, std::vector<compiler::Node*>{phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4});
  }

  TNode<IntPtrT> phi_bb9_4;
  TNode<IntPtrT> phi_bb9_9;
  TNode<IntPtrT> phi_bb9_10;
  TNode<IntPtrT> phi_bb9_14;
  TNode<IntPtrT> phi_bb9_15;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<Hole> tmp14;
  TNode<BoolT> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_4, &phi_bb9_9, &phi_bb9_10, &phi_bb9_14, &phi_bb9_15);
    tmp9 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb9_15});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_Object_0(state_, TNode<Object>{tmp3}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp11, tmp12});
    tmp14 = TheHole_0(state_);
    tmp15 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp13}, TNode<HeapObject>{tmp14});
    ca_.Branch(tmp15, &block13, std::vector<compiler::Node*>{phi_bb9_4}, &block14, std::vector<compiler::Node*>{phi_bb9_4});
  }

  TNode<IntPtrT> phi_bb10_4;
  TNode<IntPtrT> phi_bb10_9;
  TNode<IntPtrT> phi_bb10_10;
  TNode<IntPtrT> phi_bb10_14;
  TNode<IntPtrT> phi_bb10_15;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_4, &phi_bb10_9, &phi_bb10_10, &phi_bb10_14, &phi_bb10_15);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb13_4;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_4);
    std::tie(tmp16, tmp17, tmp18) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter1}).Flatten();
    tmp19 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb13_4});
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Branch(tmp21, &block19, std::vector<compiler::Node*>{phi_bb13_4, phi_bb13_4, phi_bb13_4, phi_bb13_4, phi_bb13_4}, &block20, std::vector<compiler::Node*>{phi_bb13_4, phi_bb13_4, phi_bb13_4, phi_bb13_4, phi_bb13_4});
  }

  TNode<IntPtrT> phi_bb19_4;
  TNode<IntPtrT> phi_bb19_10;
  TNode<IntPtrT> phi_bb19_11;
  TNode<IntPtrT> phi_bb19_15;
  TNode<IntPtrT> phi_bb19_16;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<True> tmp26;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_4, &phi_bb19_10, &phi_bb19_11, &phi_bb19_15, &phi_bb19_16);
    tmp22 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb19_16});
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp22});
    std::tie(tmp24, tmp25) = NewReference_Object_0(state_, TNode<Object>{tmp16}, TNode<IntPtrT>{tmp23}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp24, tmp25}, parameter2);
    tmp26 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp26);
  }

  TNode<IntPtrT> phi_bb20_4;
  TNode<IntPtrT> phi_bb20_10;
  TNode<IntPtrT> phi_bb20_11;
  TNode<IntPtrT> phi_bb20_15;
  TNode<IntPtrT> phi_bb20_16;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_4, &phi_bb20_10, &phi_bb20_11, &phi_bb20_15, &phi_bb20_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb14_4;
  TNode<BoolT> tmp27;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_4);
    tmp27 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{parameter2}, TNode<Object>{tmp13});
    ca_.Branch(tmp27, &block23, std::vector<compiler::Node*>{phi_bb14_4}, &block24, std::vector<compiler::Node*>{phi_bb14_4});
  }

  TNode<IntPtrT> phi_bb23_4;
  TNode<False> tmp28;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_4);
    tmp28 = False_0(state_);
    CodeStubAssembler(state_).Return(tmp28);
  }

  TNode<IntPtrT> phi_bb24_4;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_4);
    tmp29 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp30 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb24_4}, TNode<IntPtrT>{tmp29});
    ca_.Goto(&block3, tmp30);
  }

  TNode<IntPtrT> phi_bb2_4;
  TNode<FixedArray> tmp31;
  TNode<True> tmp32;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4);
    tmp31 = StoreAndGrowFixedArray_JSReceiver_0(state_, TNode<FixedArray>{parameter1}, TNode<IntPtrT>{tmp0}, TNode<JSReceiver>{parameter2});
    SetJoinStack_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp31});
    tmp32 = True_0(state_);
    CodeStubAssembler(state_).Return(tmp32);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=556&c=1
TNode<BoolT> JoinStackPushInline_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = LoadJoinStack_0(state_, TNode<Context>{p_context}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<IntPtrT> tmp2;
  TNode<FixedArray> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<UintPtrT> tmp10;
  TNode<BoolT> tmp11;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, JSArray::kMinJoinStackSize);
    tmp3 = CodeStubAssembler(state_).AllocateFixedArrayWithHoles(TNode<IntPtrT>{tmp2}, CodeStubAssembler::AllocationFlag::kNone);
    std::tie(tmp4, tmp5, tmp6) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp3}).Flatten();
    tmp7 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp8 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp7});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp8});
    tmp10 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp6});
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp10});
    ca_.Branch(tmp11, &block34, std::vector<compiler::Node*>{}, &block35, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<UintPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<BoolT> tmp19;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    std::tie(tmp12, tmp13, tmp14) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp15 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp16 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp15});
    tmp17 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp16});
    tmp18 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp14});
    tmp19 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp17}, TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp19, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<Hole> tmp25;
  TNode<BoolT> tmp26;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp20 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp16});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_Object_0(state_, TNode<Object>{tmp12}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp22, tmp23});
    tmp25 = TheHole_0(state_);
    tmp26 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp24}, TNode<HeapObject>{tmp25});
    ca_.Branch(tmp26, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<UintPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<BoolT> tmp34;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    std::tie(tmp27, tmp28, tmp29) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp30 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp31 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp30});
    tmp32 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp31});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp29});
    tmp34 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp33});
    ca_.Branch(tmp34, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<Object> tmp37;
  TNode<IntPtrT> tmp38;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp35 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp31});
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp35});
    std::tie(tmp37, tmp38) = NewReference_Object_0(state_, TNode<Object>{tmp27}, TNode<IntPtrT>{tmp36}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp37, tmp38}, p_receiver);
    ca_.Goto(&block17);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Boolean> tmp39;
  TNode<False> tmp40;
  TNode<BoolT> tmp41;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp39 = ca_.CallBuiltin<Boolean>(Builtin::kJoinStackPush, p_context, tmp0, p_receiver);
    tmp40 = False_0(state_);
    tmp41 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp39}, TNode<HeapObject>{tmp40});
    ca_.Branch(tmp41, &block27, std::vector<compiler::Node*>{}, &block28, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp42;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp42 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp42);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.Goto(&block17);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp43 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp8});
    tmp44 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp43});
    std::tie(tmp45, tmp46) = NewReference_Object_0(state_, TNode<Object>{tmp4}, TNode<IntPtrT>{tmp44}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp45, tmp46}, p_receiver);
    SetJoinStack_0(state_, TNode<Context>{p_context}, TNode<FixedArray>{tmp3});
    ca_.Goto(&block2);
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp47;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp47 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp47);
  }

  TNode<BoolT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block38, phi_bb1_2);
  }

  TNode<BoolT> phi_bb38_2;
    ca_.Bind(&block38, &phi_bb38_2);
  return TNode<BoolT>{phi_bb38_2};
}

TF_BUILTIN(JoinStackPop, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<FixedArray> parameter1 = UncheckedParameter<FixedArray>(Descriptor::kStack);
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{parameter1});
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp1);
  }

  TNode<IntPtrT> phi_bb3_4;
  TNode<BoolT> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4);
    tmp2 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb3_4}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{phi_bb3_4}, &block2, std::vector<compiler::Node*>{phi_bb3_4});
  }

  TNode<IntPtrT> phi_bb1_4;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<BoolT> tmp8;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    std::tie(tmp3, tmp4, tmp5) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter1}).Flatten();
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb1_4});
    tmp7 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp5});
    tmp8 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp6}, TNode<UintPtrT>{tmp7});
    ca_.Branch(tmp8, &block11, std::vector<compiler::Node*>{phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4}, &block12, std::vector<compiler::Node*>{phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4, phi_bb1_4});
  }

  TNode<IntPtrT> phi_bb11_4;
  TNode<IntPtrT> phi_bb11_9;
  TNode<IntPtrT> phi_bb11_10;
  TNode<IntPtrT> phi_bb11_14;
  TNode<IntPtrT> phi_bb11_15;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<BoolT> tmp14;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_4, &phi_bb11_9, &phi_bb11_10, &phi_bb11_14, &phi_bb11_15);
    tmp9 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb11_15});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp9});
    std::tie(tmp11, tmp12) = NewReference_Object_0(state_, TNode<Object>{tmp3}, TNode<IntPtrT>{tmp10}).Flatten();
    tmp13 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp11, tmp12});
    tmp14 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp13}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp14, &block5, std::vector<compiler::Node*>{phi_bb11_4}, &block6, std::vector<compiler::Node*>{phi_bb11_4});
  }

  TNode<IntPtrT> phi_bb12_4;
  TNode<IntPtrT> phi_bb12_9;
  TNode<IntPtrT> phi_bb12_10;
  TNode<IntPtrT> phi_bb12_14;
  TNode<IntPtrT> phi_bb12_15;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_4, &phi_bb12_9, &phi_bb12_10, &phi_bb12_14, &phi_bb12_15);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb5_4;
  TNode<IntPtrT> tmp15;
  TNode<BoolT> tmp16;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_4);
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp16 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb5_4}, TNode<IntPtrT>{tmp15});
    ca_.Branch(tmp16, &block17, std::vector<compiler::Node*>{phi_bb5_4}, &block18, std::vector<compiler::Node*>{phi_bb5_4});
  }

  TNode<IntPtrT> phi_bb17_4;
  TNode<IntPtrT> tmp17;
  TNode<BoolT> tmp18;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_4);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, JSArray::kMinJoinStackSize);
    tmp18 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp17});
    ca_.Goto(&block19, phi_bb17_4, tmp18);
  }

  TNode<IntPtrT> phi_bb18_4;
  TNode<BoolT> tmp19;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_4);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block19, phi_bb18_4, tmp19);
  }

  TNode<IntPtrT> phi_bb19_4;
  TNode<BoolT> phi_bb19_6;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_4, &phi_bb19_6);
    ca_.Branch(phi_bb19_6, &block15, std::vector<compiler::Node*>{phi_bb19_4}, &block16, std::vector<compiler::Node*>{phi_bb19_4});
  }

  TNode<IntPtrT> phi_bb15_4;
  TNode<IntPtrT> tmp20;
  TNode<FixedArray> tmp21;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_4);
    tmp20 = FromConstexpr_intptr_constexpr_int31_0(state_, JSArray::kMinJoinStackSize);
    tmp21 = CodeStubAssembler(state_).AllocateFixedArrayWithHoles(TNode<IntPtrT>{tmp20}, CodeStubAssembler::AllocationFlag::kNone);
    SetJoinStack_0(state_, TNode<Context>{parameter0}, TNode<FixedArray>{tmp21});
    ca_.Goto(&block20, phi_bb15_4);
  }

  TNode<IntPtrT> phi_bb16_4;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<BoolT> tmp27;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_4);
    std::tie(tmp22, tmp23, tmp24) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter1}).Flatten();
    tmp25 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb16_4});
    tmp26 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp24});
    tmp27 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp25}, TNode<UintPtrT>{tmp26});
    ca_.Branch(tmp27, &block25, std::vector<compiler::Node*>{phi_bb16_4, phi_bb16_4, phi_bb16_4, phi_bb16_4, phi_bb16_4}, &block26, std::vector<compiler::Node*>{phi_bb16_4, phi_bb16_4, phi_bb16_4, phi_bb16_4, phi_bb16_4});
  }

  TNode<IntPtrT> phi_bb25_4;
  TNode<IntPtrT> phi_bb25_9;
  TNode<IntPtrT> phi_bb25_10;
  TNode<IntPtrT> phi_bb25_14;
  TNode<IntPtrT> phi_bb25_15;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Hole> tmp32;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_4, &phi_bb25_9, &phi_bb25_10, &phi_bb25_14, &phi_bb25_15);
    tmp28 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb25_15});
    tmp29 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp28});
    std::tie(tmp30, tmp31) = NewReference_Object_0(state_, TNode<Object>{tmp22}, TNode<IntPtrT>{tmp29}).Flatten();
    tmp32 = TheHole_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp30, tmp31}, tmp32);
    ca_.Goto(&block20, phi_bb25_4);
  }

  TNode<IntPtrT> phi_bb26_4;
  TNode<IntPtrT> phi_bb26_9;
  TNode<IntPtrT> phi_bb26_10;
  TNode<IntPtrT> phi_bb26_14;
  TNode<IntPtrT> phi_bb26_15;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_4, &phi_bb26_9, &phi_bb26_10, &phi_bb26_14, &phi_bb26_15);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb20_4;
  TNode<Undefined> tmp33;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_4);
    tmp33 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp33);
  }

  TNode<IntPtrT> phi_bb6_4;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_4);
    tmp34 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp35 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb6_4}, TNode<IntPtrT>{tmp34});
    ca_.Goto(&block3, tmp35);
  }

  TNode<IntPtrT> phi_bb2_4;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=601&c=1
void JoinStackPopInline_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = LoadJoinStack_0(state_, TNode<Context>{p_context}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp0});
    std::tie(tmp3, tmp4, tmp5) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp6 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp6});
    tmp8 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp7});
    tmp9 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp5});
    tmp10 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp9});
    ca_.Branch(tmp10, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<BoolT> tmp16;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp11 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp7});
    tmp12 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14) = NewReference_Object_0(state_, TNode<Object>{tmp3}, TNode<IntPtrT>{tmp12}).Flatten();
    tmp15 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp13, tmp14});
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp15}, TNode<HeapObject>{p_receiver});
    ca_.Branch(tmp16, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp17;
  TNode<BoolT> tmp18;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, JSArray::kMinJoinStackSize);
    tmp18 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp17});
    ca_.Goto(&block19, tmp18);
  }

  TNode<BoolT> tmp19;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block19, tmp19);
  }

  TNode<BoolT> phi_bb19_5;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_5);
    ca_.Branch(phi_bb19_5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<BoolT> tmp27;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    std::tie(tmp20, tmp21, tmp22) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp0}).Flatten();
    tmp23 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp24 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp23});
    tmp25 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp24});
    tmp26 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp22});
    tmp27 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp25}, TNode<UintPtrT>{tmp26});
    ca_.Branch(tmp27, &block26, std::vector<compiler::Node*>{}, &block27, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Hole> tmp32;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp28 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp24});
    tmp29 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp28});
    std::tie(tmp30, tmp31) = NewReference_Object_0(state_, TNode<Object>{tmp20}, TNode<IntPtrT>{tmp29}).Flatten();
    tmp32 = TheHole_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp30, tmp31}, tmp32);
    ca_.Goto(&block20);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp33;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp33 = ca_.CallBuiltin<Object>(Builtin::kJoinStackPop, p_context, tmp0, p_receiver);
    ca_.Goto(&block20);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.Goto(&block30);
  }

    ca_.Bind(&block30);
}

TF_BUILTIN(ArrayPrototypeJoin, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<JSReceiver> tmp2;
  TNode<Number> tmp3;
  TNode<Number> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp3 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    tmp4 = FromConstexpr_Number_constexpr_uint32_0(state_, JSArray::kMaxArrayLength);
    tmp5 = NumberIsGreaterThan_0(state_, TNode<Number>{tmp3}, TNode<Number>{tmp4});
    ca_.Branch(tmp5, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidArrayLength);
  }

  TNode<Undefined> tmp6;
  TNode<Undefined> tmp7;
  TNode<Object> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = Undefined_0(state_);
    tmp7 = Undefined_0(state_);
    tmp8 = CycleProtectedArrayJoin_JSArray_0(state_, TNode<Context>{parameter0}, false, TNode<JSReceiver>{tmp2}, TNode<Number>{tmp3}, TNode<Object>{tmp1}, TNode<Object>{tmp6}, TNode<Object>{tmp7});
    arguments.PopAndReturn(tmp8);
  }
}

TF_BUILTIN(ArrayPrototypeToLocaleString, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<JSReceiver> tmp4;
  TNode<Number> tmp5;
  TNode<Number> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp5 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    tmp6 = FromConstexpr_Number_constexpr_uint32_0(state_, JSArray::kMaxArrayLength);
    tmp7 = NumberIsGreaterThan_0(state_, TNode<Number>{tmp5}, TNode<Number>{tmp6});
    ca_.Branch(tmp7, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidArrayLength);
  }

  TNode<Object> tmp8;
  TNode<Object> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp8 = FromConstexpr_JSAny_constexpr_string_0(state_, ",");
    tmp9 = CycleProtectedArrayJoin_JSArray_0(state_, TNode<Context>{parameter0}, true, TNode<JSReceiver>{tmp4}, TNode<Number>{tmp5}, TNode<Object>{tmp8}, TNode<Object>{tmp1}, TNode<Object>{tmp3});
    arguments.PopAndReturn(tmp9);
  }
}

TF_BUILTIN(ArrayPrototypeToString, CodeStubAssembler) {
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

  TNode<JSReceiver> tmp0;
  TNode<Object> tmp1;
  TNode<Object> tmp2;
  TNode<JSReceiver> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = FromConstexpr_JSAny_constexpr_string_0(state_, "join");
    tmp2 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{tmp0}, TNode<Object>{tmp1});
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2}, &label4);
    ca_.Goto(&block3);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block4);
    }
  }

  TNode<String> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = ca_.CallBuiltin<String>(Builtin::kObjectToString, parameter0, tmp0);
    arguments.PopAndReturn(tmp5);
  }

  TNode<Object> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp6 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<Object>{tmp0});
    arguments.PopAndReturn(tmp6);
  }
}

TF_BUILTIN(TypedArrayPrototypeJoin, CodeStubAssembler) {
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
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<JSTypedArray> tmp3;
  TNode<Number> tmp4;
  TNode<Undefined> tmp5;
  TNode<Undefined> tmp6;
  TNode<Object> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArrayAndGetLength(TNode<Context>{parameter0}, TNode<Object>{parameter1}, "%TypedArray%.prototype.join");
    tmp3 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp4 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp2});
    tmp5 = Undefined_0(state_);
    tmp6 = Undefined_0(state_);
    tmp7 = CycleProtectedArrayJoin_JSTypedArray_0(state_, TNode<Context>{parameter0}, false, TNode<JSReceiver>{tmp3}, TNode<Number>{tmp4}, TNode<Object>{tmp1}, TNode<Object>{tmp5}, TNode<Object>{tmp6});
    arguments.PopAndReturn(tmp7);
  }
}

TF_BUILTIN(TypedArrayPrototypeToLocaleString, CodeStubAssembler) {
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
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<JSTypedArray> tmp5;
  TNode<Number> tmp6;
  TNode<Object> tmp7;
  TNode<Object> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArrayAndGetLength(TNode<Context>{parameter0}, TNode<Object>{parameter1}, "%TypedArray%.prototype.toLocaleString");
    tmp5 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp6 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{tmp4});
    tmp7 = FromConstexpr_JSAny_constexpr_string_0(state_, ",");
    tmp8 = CycleProtectedArrayJoin_JSTypedArray_0(state_, TNode<Context>{parameter0}, true, TNode<JSReceiver>{tmp5}, TNode<Number>{tmp6}, TNode<Object>{tmp7}, TNode<Object>{tmp1}, TNode<Object>{tmp3});
    arguments.PopAndReturn(tmp8);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=25&c=26
TNode<JSArray> UnsafeCast_JSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSArray>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=26&c=34
TNode<NumberDictionary> UnsafeCast_NumberDictionary_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NumberDictionary> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<NumberDictionary>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=40&c=34
TNode<FixedArray> UnsafeCast_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<FixedArray>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=42&c=46
TNode<Object> UnsafeCast_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=49&c=7
TNode<FixedDoubleArray> UnsafeCast_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<FixedDoubleArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<FixedDoubleArray>{tmp0};
}

TF_BUILTIN(LoadJoinElement_GenericElementsAccessor_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Number> tmp0;
  TNode<Object> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{parameter2});
    tmp1 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{tmp0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=116&c=36
TNode<JSTypedArray> UnsafeCast_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSTypedArray>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=294&c=7
TNode<String> Cast_String_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
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

  TNode<String> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_String_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<String>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=431&c=10
TNode<String> ArrayJoinImpl_JSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lengthNumber, bool p_useToLocaleString, TNode<Object> p_locales, TNode<Object> p_options, TNode<BuiltinPtr> p_initialLoadFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, BoolT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, BoolT> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block88(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block90(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<FixedArray> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<BoolT> tmp8;
  TNode<PrimitiveHeapObject> tmp9;
  TNode<UintPtrT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_receiver, tmp0});
    tmp2 = Convert_uintptr_Number_0(state_, TNode<Number>{p_lengthNumber});
    tmp3 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{p_sep});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp5, tmp6, tmp7, tmp8, tmp9) = NewBuffer_0(state_, TNode<UintPtrT>{tmp2}, TNode<String>{p_sep}).Flatten();
    tmp10 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp4, p_initialLoadFn, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  TNode<IntPtrT> phi_bb4_10;
  TNode<BuiltinPtr> phi_bb4_11;
  TNode<FixedArray> phi_bb4_12;
  TNode<IntPtrT> phi_bb4_13;
  TNode<IntPtrT> phi_bb4_14;
  TNode<BoolT> phi_bb4_15;
  TNode<PrimitiveHeapObject> phi_bb4_16;
  TNode<UintPtrT> phi_bb4_17;
  TNode<BoolT> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_10, &phi_bb4_11, &phi_bb4_12, &phi_bb4_13, &phi_bb4_14, &phi_bb4_15, &phi_bb4_16, &phi_bb4_17);
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb4_17}, TNode<UintPtrT>{tmp2});
    ca_.Branch(tmp11, &block2, std::vector<compiler::Node*>{phi_bb4_10, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_15, phi_bb4_16, phi_bb4_17}, &block3, std::vector<compiler::Node*>{phi_bb4_10, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_15, phi_bb4_16, phi_bb4_17});
  }

  TNode<IntPtrT> phi_bb2_10;
  TNode<BuiltinPtr> phi_bb2_11;
  TNode<FixedArray> phi_bb2_12;
  TNode<IntPtrT> phi_bb2_13;
  TNode<IntPtrT> phi_bb2_14;
  TNode<BoolT> phi_bb2_15;
  TNode<PrimitiveHeapObject> phi_bb2_16;
  TNode<UintPtrT> phi_bb2_17;
  TNode<BoolT> tmp12;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_10, &phi_bb2_11, &phi_bb2_12, &phi_bb2_13, &phi_bb2_14, &phi_bb2_15, &phi_bb2_16, &phi_bb2_17);
    tmp12 = CannotUseSameArrayAccessor_JSArray_0(state_, TNode<Context>{p_context}, TNode<BuiltinPtr>{phi_bb2_11}, TNode<JSReceiver>{p_receiver}, TNode<Map>{tmp1}, TNode<Number>{p_lengthNumber});
    ca_.Branch(tmp12, &block5, std::vector<compiler::Node*>{phi_bb2_10, phi_bb2_11, phi_bb2_12, phi_bb2_13, phi_bb2_14, phi_bb2_15, phi_bb2_16, phi_bb2_17}, &block6, std::vector<compiler::Node*>{phi_bb2_10, phi_bb2_11, phi_bb2_12, phi_bb2_13, phi_bb2_14, phi_bb2_15, phi_bb2_16, phi_bb2_17});
  }

  TNode<IntPtrT> phi_bb5_10;
  TNode<BuiltinPtr> phi_bb5_11;
  TNode<FixedArray> phi_bb5_12;
  TNode<IntPtrT> phi_bb5_13;
  TNode<IntPtrT> phi_bb5_14;
  TNode<BoolT> phi_bb5_15;
  TNode<PrimitiveHeapObject> phi_bb5_16;
  TNode<UintPtrT> phi_bb5_17;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_10, &phi_bb5_11, &phi_bb5_12, &phi_bb5_13, &phi_bb5_14, &phi_bb5_15, &phi_bb5_16, &phi_bb5_17);
    ca_.Goto(&block6, phi_bb5_10, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_GenericElementsAccessor_0)), phi_bb5_12, phi_bb5_13, phi_bb5_14, phi_bb5_15, phi_bb5_16, phi_bb5_17);
  }

  TNode<IntPtrT> phi_bb6_10;
  TNode<BuiltinPtr> phi_bb6_11;
  TNode<FixedArray> phi_bb6_12;
  TNode<IntPtrT> phi_bb6_13;
  TNode<IntPtrT> phi_bb6_14;
  TNode<BoolT> phi_bb6_15;
  TNode<PrimitiveHeapObject> phi_bb6_16;
  TNode<UintPtrT> phi_bb6_17;
  TNode<UintPtrT> tmp13;
  TNode<BoolT> tmp14;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_10, &phi_bb6_11, &phi_bb6_12, &phi_bb6_13, &phi_bb6_14, &phi_bb6_15, &phi_bb6_16, &phi_bb6_17);
    tmp13 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{phi_bb6_17}, TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block7, std::vector<compiler::Node*>{phi_bb6_10, phi_bb6_12, phi_bb6_13, phi_bb6_14, phi_bb6_15, phi_bb6_16, phi_bb6_17}, &block8, std::vector<compiler::Node*>{phi_bb6_10, phi_bb6_12, phi_bb6_13, phi_bb6_14, phi_bb6_15, phi_bb6_16, phi_bb6_17});
  }

  TNode<IntPtrT> phi_bb7_10;
  TNode<FixedArray> phi_bb7_12;
  TNode<IntPtrT> phi_bb7_13;
  TNode<IntPtrT> phi_bb7_14;
  TNode<BoolT> phi_bb7_15;
  TNode<PrimitiveHeapObject> phi_bb7_16;
  TNode<UintPtrT> phi_bb7_17;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_10, &phi_bb7_12, &phi_bb7_13, &phi_bb7_14, &phi_bb7_15, &phi_bb7_16, &phi_bb7_17);
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb7_10}, TNode<IntPtrT>{tmp15});
    ca_.Goto(&block8, tmp16, phi_bb7_12, phi_bb7_13, phi_bb7_14, phi_bb7_15, phi_bb7_16, phi_bb7_17);
  }

  TNode<IntPtrT> phi_bb8_10;
  TNode<FixedArray> phi_bb8_12;
  TNode<IntPtrT> phi_bb8_13;
  TNode<IntPtrT> phi_bb8_14;
  TNode<BoolT> phi_bb8_15;
  TNode<PrimitiveHeapObject> phi_bb8_16;
  TNode<UintPtrT> phi_bb8_17;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<Object> tmp19;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_10, &phi_bb8_12, &phi_bb8_13, &phi_bb8_14, &phi_bb8_15, &phi_bb8_16, &phi_bb8_17);
    tmp17 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp18 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb8_17}, TNode<UintPtrT>{tmp17});
tmp19 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallInterfaceDescriptorFor(ExampleBuiltinForTorqueFunctionPointerType(0)), phi_bb6_11, p_context, p_receiver, phi_bb8_17);
    if ((p_useToLocaleString)) {
      ca_.Goto(&block9, phi_bb8_12, phi_bb8_13, phi_bb8_14, phi_bb8_15, phi_bb8_16);
    } else {
      ca_.Goto(&block10, phi_bb8_12, phi_bb8_13, phi_bb8_14, phi_bb8_15, phi_bb8_16);
    }
  }

  TNode<FixedArray> phi_bb9_12;
  TNode<IntPtrT> phi_bb9_13;
  TNode<IntPtrT> phi_bb9_14;
  TNode<BoolT> phi_bb9_15;
  TNode<PrimitiveHeapObject> phi_bb9_16;
  TNode<String> tmp20;
  TNode<String> tmp21;
  TNode<BoolT> tmp22;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_12, &phi_bb9_13, &phi_bb9_14, &phi_bb9_15, &phi_bb9_16);
    tmp20 = ca_.CallBuiltin<String>(Builtin::kConvertToLocaleString, p_context, tmp19, p_locales, p_options);
    tmp21 = kEmptyString_0(state_);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block12, std::vector<compiler::Node*>{phi_bb9_12, phi_bb9_13, phi_bb9_14, phi_bb9_15, phi_bb9_16}, &block13, std::vector<compiler::Node*>{phi_bb9_12, phi_bb9_13, phi_bb9_14, phi_bb9_15, phi_bb9_16});
  }

  TNode<FixedArray> phi_bb12_12;
  TNode<IntPtrT> phi_bb12_13;
  TNode<IntPtrT> phi_bb12_14;
  TNode<BoolT> phi_bb12_15;
  TNode<PrimitiveHeapObject> phi_bb12_16;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14, &phi_bb12_15, &phi_bb12_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb12_12, phi_bb12_13, phi_bb12_14, phi_bb12_15, phi_bb12_16, tmp18);
  }

  TNode<FixedArray> phi_bb13_12;
  TNode<IntPtrT> phi_bb13_13;
  TNode<IntPtrT> phi_bb13_14;
  TNode<BoolT> phi_bb13_15;
  TNode<PrimitiveHeapObject> phi_bb13_16;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14, &phi_bb13_15, &phi_bb13_16);
    ca_.Goto(&block11, phi_bb13_12, phi_bb13_13, phi_bb13_14, phi_bb13_15, phi_bb13_16, tmp20);
  }

  TNode<FixedArray> phi_bb10_12;
  TNode<IntPtrT> phi_bb10_13;
  TNode<IntPtrT> phi_bb10_14;
  TNode<BoolT> phi_bb10_15;
  TNode<PrimitiveHeapObject> phi_bb10_16;
  TNode<String> tmp23;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_12, &phi_bb10_13, &phi_bb10_14, &phi_bb10_15, &phi_bb10_16);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = Cast_String_1(state_, TNode<Context>{p_context}, TNode<Object>{tmp19}, &label24);
    ca_.Goto(&block16, phi_bb10_12, phi_bb10_13, phi_bb10_14, phi_bb10_15, phi_bb10_16);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block17, phi_bb10_12, phi_bb10_13, phi_bb10_14, phi_bb10_15, phi_bb10_16);
    }
  }

  TNode<FixedArray> phi_bb17_12;
  TNode<IntPtrT> phi_bb17_13;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> phi_bb17_15;
  TNode<PrimitiveHeapObject> phi_bb17_16;
  TNode<Number> tmp25;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14, &phi_bb17_15, &phi_bb17_16);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = Cast_Number_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp19)}, &label26);
    ca_.Goto(&block22, phi_bb17_12, phi_bb17_13, phi_bb17_14, phi_bb17_15, phi_bb17_16);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block23, phi_bb17_12, phi_bb17_13, phi_bb17_14, phi_bb17_15, phi_bb17_16);
    }
  }

  TNode<FixedArray> phi_bb16_12;
  TNode<IntPtrT> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<BoolT> phi_bb16_15;
  TNode<PrimitiveHeapObject> phi_bb16_16;
  TNode<String> tmp27;
  TNode<BoolT> tmp28;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14, &phi_bb16_15, &phi_bb16_16);
    tmp27 = kEmptyString_0(state_);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp23}, TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block18, std::vector<compiler::Node*>{phi_bb16_12, phi_bb16_13, phi_bb16_14, phi_bb16_15, phi_bb16_16}, &block19, std::vector<compiler::Node*>{phi_bb16_12, phi_bb16_13, phi_bb16_14, phi_bb16_15, phi_bb16_16});
  }

  TNode<FixedArray> phi_bb18_12;
  TNode<IntPtrT> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<BoolT> phi_bb18_15;
  TNode<PrimitiveHeapObject> phi_bb18_16;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_12, &phi_bb18_13, &phi_bb18_14, &phi_bb18_15, &phi_bb18_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb18_12, phi_bb18_13, phi_bb18_14, phi_bb18_15, phi_bb18_16, tmp18);
  }

  TNode<FixedArray> phi_bb19_12;
  TNode<IntPtrT> phi_bb19_13;
  TNode<IntPtrT> phi_bb19_14;
  TNode<BoolT> phi_bb19_15;
  TNode<PrimitiveHeapObject> phi_bb19_16;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14, &phi_bb19_15, &phi_bb19_16);
    ca_.Goto(&block14, phi_bb19_12, phi_bb19_13, phi_bb19_14, phi_bb19_15, phi_bb19_16, tmp23);
  }

  TNode<FixedArray> phi_bb23_12;
  TNode<IntPtrT> phi_bb23_13;
  TNode<IntPtrT> phi_bb23_14;
  TNode<BoolT> phi_bb23_15;
  TNode<PrimitiveHeapObject> phi_bb23_16;
  TNode<BoolT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_12, &phi_bb23_13, &phi_bb23_14, &phi_bb23_15, &phi_bb23_16);
    tmp29 = CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp19)});
    ca_.Branch(tmp29, &block24, std::vector<compiler::Node*>{phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_15, phi_bb23_16}, &block25, std::vector<compiler::Node*>{phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_15, phi_bb23_16});
  }

  TNode<FixedArray> phi_bb22_12;
  TNode<IntPtrT> phi_bb22_13;
  TNode<IntPtrT> phi_bb22_14;
  TNode<BoolT> phi_bb22_15;
  TNode<PrimitiveHeapObject> phi_bb22_16;
  TNode<String> tmp30;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_12, &phi_bb22_13, &phi_bb22_14, &phi_bb22_15, &phi_bb22_16);
    tmp30 = CodeStubAssembler(state_).NumberToString(TNode<Number>{tmp25});
    ca_.Goto(&block20, phi_bb22_12, phi_bb22_13, phi_bb22_14, phi_bb22_15, phi_bb22_16, tmp30);
  }

  TNode<FixedArray> phi_bb24_12;
  TNode<IntPtrT> phi_bb24_13;
  TNode<IntPtrT> phi_bb24_14;
  TNode<BoolT> phi_bb24_15;
  TNode<PrimitiveHeapObject> phi_bb24_16;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_12, &phi_bb24_13, &phi_bb24_14, &phi_bb24_15, &phi_bb24_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb24_12, phi_bb24_13, phi_bb24_14, phi_bb24_15, phi_bb24_16, tmp18);
  }

  TNode<FixedArray> phi_bb25_12;
  TNode<IntPtrT> phi_bb25_13;
  TNode<IntPtrT> phi_bb25_14;
  TNode<BoolT> phi_bb25_15;
  TNode<PrimitiveHeapObject> phi_bb25_16;
  TNode<String> tmp31;
  TNode<String> tmp32;
  TNode<BoolT> tmp33;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_12, &phi_bb25_13, &phi_bb25_14, &phi_bb25_15, &phi_bb25_16);
    tmp31 = ToString_Inline_0(state_, TNode<Context>{p_context}, TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp19)});
    tmp32 = kEmptyString_0(state_);
    tmp33 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp31}, TNode<HeapObject>{tmp32});
    ca_.Branch(tmp33, &block26, std::vector<compiler::Node*>{phi_bb25_12, phi_bb25_13, phi_bb25_14, phi_bb25_15, phi_bb25_16}, &block27, std::vector<compiler::Node*>{phi_bb25_12, phi_bb25_13, phi_bb25_14, phi_bb25_15, phi_bb25_16});
  }

  TNode<FixedArray> phi_bb26_12;
  TNode<IntPtrT> phi_bb26_13;
  TNode<IntPtrT> phi_bb26_14;
  TNode<BoolT> phi_bb26_15;
  TNode<PrimitiveHeapObject> phi_bb26_16;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_12, &phi_bb26_13, &phi_bb26_14, &phi_bb26_15, &phi_bb26_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb26_12, phi_bb26_13, phi_bb26_14, phi_bb26_15, phi_bb26_16, tmp18);
  }

  TNode<FixedArray> phi_bb27_12;
  TNode<IntPtrT> phi_bb27_13;
  TNode<IntPtrT> phi_bb27_14;
  TNode<BoolT> phi_bb27_15;
  TNode<PrimitiveHeapObject> phi_bb27_16;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_12, &phi_bb27_13, &phi_bb27_14, &phi_bb27_15, &phi_bb27_16);
    ca_.Goto(&block20, phi_bb27_12, phi_bb27_13, phi_bb27_14, phi_bb27_15, phi_bb27_16, tmp31);
  }

  TNode<FixedArray> phi_bb20_12;
  TNode<IntPtrT> phi_bb20_13;
  TNode<IntPtrT> phi_bb20_14;
  TNode<BoolT> phi_bb20_15;
  TNode<PrimitiveHeapObject> phi_bb20_16;
  TNode<String> phi_bb20_19;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_12, &phi_bb20_13, &phi_bb20_14, &phi_bb20_15, &phi_bb20_16, &phi_bb20_19);
    ca_.Goto(&block14, phi_bb20_12, phi_bb20_13, phi_bb20_14, phi_bb20_15, phi_bb20_16, phi_bb20_19);
  }

  TNode<FixedArray> phi_bb14_12;
  TNode<IntPtrT> phi_bb14_13;
  TNode<IntPtrT> phi_bb14_14;
  TNode<BoolT> phi_bb14_15;
  TNode<PrimitiveHeapObject> phi_bb14_16;
  TNode<String> phi_bb14_19;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14, &phi_bb14_15, &phi_bb14_16, &phi_bb14_19);
    ca_.Goto(&block11, phi_bb14_12, phi_bb14_13, phi_bb14_14, phi_bb14_15, phi_bb14_16, phi_bb14_19);
  }

  TNode<FixedArray> phi_bb11_12;
  TNode<IntPtrT> phi_bb11_13;
  TNode<IntPtrT> phi_bb11_14;
  TNode<BoolT> phi_bb11_15;
  TNode<PrimitiveHeapObject> phi_bb11_16;
  TNode<String> phi_bb11_19;
  TNode<IntPtrT> tmp34;
  TNode<BoolT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<BoolT> tmp37;
  TNode<BoolT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<BoolT> tmp40;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_12, &phi_bb11_13, &phi_bb11_14, &phi_bb11_15, &phi_bb11_16, &phi_bb11_19);
    tmp34 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp35 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb11_13}, TNode<IntPtrT>{tmp34});
    tmp36 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp37 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb8_10}, TNode<IntPtrT>{tmp36});
    tmp38 = CodeStubAssembler(state_).Word32Or(TNode<BoolT>{tmp35}, TNode<BoolT>{tmp37});
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp40 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb8_10}, TNode<IntPtrT>{tmp39});
    ca_.Branch(tmp40, &block32, std::vector<compiler::Node*>{phi_bb11_12, phi_bb11_13, phi_bb11_14, phi_bb11_15, phi_bb11_16, phi_bb11_19, phi_bb11_19, phi_bb11_19}, &block33, std::vector<compiler::Node*>{phi_bb11_12, phi_bb11_13, phi_bb11_14, phi_bb11_15, phi_bb11_16, phi_bb11_19, phi_bb11_19, phi_bb11_19});
  }

  TNode<FixedArray> phi_bb32_12;
  TNode<IntPtrT> phi_bb32_13;
  TNode<IntPtrT> phi_bb32_14;
  TNode<BoolT> phi_bb32_15;
  TNode<PrimitiveHeapObject> phi_bb32_16;
  TNode<String> phi_bb32_19;
  TNode<String> phi_bb32_20;
  TNode<String> phi_bb32_25;
  TNode<BoolT> tmp41;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_12, &phi_bb32_13, &phi_bb32_14, &phi_bb32_15, &phi_bb32_16, &phi_bb32_19, &phi_bb32_20, &phi_bb32_25);
    tmp41 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block34, phi_bb32_12, phi_bb32_13, phi_bb32_14, phi_bb32_15, phi_bb32_16, phi_bb32_19, phi_bb32_20, phi_bb32_25, tmp41);
  }

  TNode<FixedArray> phi_bb33_12;
  TNode<IntPtrT> phi_bb33_13;
  TNode<IntPtrT> phi_bb33_14;
  TNode<BoolT> phi_bb33_15;
  TNode<PrimitiveHeapObject> phi_bb33_16;
  TNode<String> phi_bb33_19;
  TNode<String> phi_bb33_20;
  TNode<String> phi_bb33_25;
  TNode<IntPtrT> tmp42;
  TNode<BoolT> tmp43;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_12, &phi_bb33_13, &phi_bb33_14, &phi_bb33_15, &phi_bb33_16, &phi_bb33_19, &phi_bb33_20, &phi_bb33_25);
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp42});
    ca_.Goto(&block34, phi_bb33_12, phi_bb33_13, phi_bb33_14, phi_bb33_15, phi_bb33_16, phi_bb33_19, phi_bb33_20, phi_bb33_25, tmp43);
  }

  TNode<FixedArray> phi_bb34_12;
  TNode<IntPtrT> phi_bb34_13;
  TNode<IntPtrT> phi_bb34_14;
  TNode<BoolT> phi_bb34_15;
  TNode<PrimitiveHeapObject> phi_bb34_16;
  TNode<String> phi_bb34_19;
  TNode<String> phi_bb34_20;
  TNode<String> phi_bb34_25;
  TNode<BoolT> phi_bb34_38;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_12, &phi_bb34_13, &phi_bb34_14, &phi_bb34_15, &phi_bb34_16, &phi_bb34_19, &phi_bb34_20, &phi_bb34_25, &phi_bb34_38);
    ca_.Branch(phi_bb34_38, &block30, std::vector<compiler::Node*>{phi_bb34_12, phi_bb34_13, phi_bb34_14, phi_bb34_15, phi_bb34_16, phi_bb34_19, phi_bb34_20, phi_bb34_25}, &block31, std::vector<compiler::Node*>{phi_bb34_12, phi_bb34_13, phi_bb34_14, phi_bb34_15, phi_bb34_16, phi_bb34_19, phi_bb34_20, phi_bb34_25});
  }

  TNode<FixedArray> phi_bb30_12;
  TNode<IntPtrT> phi_bb30_13;
  TNode<IntPtrT> phi_bb30_14;
  TNode<BoolT> phi_bb30_15;
  TNode<PrimitiveHeapObject> phi_bb30_16;
  TNode<String> phi_bb30_19;
  TNode<String> phi_bb30_20;
  TNode<String> phi_bb30_25;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_12, &phi_bb30_13, &phi_bb30_14, &phi_bb30_15, &phi_bb30_16, &phi_bb30_19, &phi_bb30_20, &phi_bb30_25);
    ca_.Goto(&block29, phi_bb30_12, phi_bb30_13, phi_bb30_14, phi_bb30_15, phi_bb30_16, phi_bb30_19, phi_bb30_20, phi_bb30_25);
  }

  TNode<FixedArray> phi_bb31_12;
  TNode<IntPtrT> phi_bb31_13;
  TNode<IntPtrT> phi_bb31_14;
  TNode<BoolT> phi_bb31_15;
  TNode<PrimitiveHeapObject> phi_bb31_16;
  TNode<String> phi_bb31_19;
  TNode<String> phi_bb31_20;
  TNode<String> phi_bb31_25;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<BoolT> tmp46;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_12, &phi_bb31_13, &phi_bb31_14, &phi_bb31_15, &phi_bb31_16, &phi_bb31_19, &phi_bb31_20, &phi_bb31_25);
    tmp44 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{phi_bb8_10});
    tmp45 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp44}, TNode<IntPtrT>{tmp3});
    tmp46 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{phi_bb8_10});
    ca_.Branch(tmp46, &block35, std::vector<compiler::Node*>{phi_bb31_12, phi_bb31_13, phi_bb31_14, phi_bb31_15, phi_bb31_16, phi_bb31_19, phi_bb31_20, phi_bb31_25}, &block36, std::vector<compiler::Node*>{phi_bb31_12, phi_bb31_13, phi_bb31_14, phi_bb31_15, phi_bb31_16, phi_bb31_19, phi_bb31_20, phi_bb31_25});
  }

  TNode<FixedArray> phi_bb35_12;
  TNode<IntPtrT> phi_bb35_13;
  TNode<IntPtrT> phi_bb35_14;
  TNode<BoolT> phi_bb35_15;
  TNode<PrimitiveHeapObject> phi_bb35_16;
  TNode<String> phi_bb35_19;
  TNode<String> phi_bb35_20;
  TNode<String> phi_bb35_25;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_12, &phi_bb35_13, &phi_bb35_14, &phi_bb35_15, &phi_bb35_16, &phi_bb35_19, &phi_bb35_20, &phi_bb35_25);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, p_context);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb36_12;
  TNode<IntPtrT> phi_bb36_13;
  TNode<IntPtrT> phi_bb36_14;
  TNode<BoolT> phi_bb36_15;
  TNode<PrimitiveHeapObject> phi_bb36_16;
  TNode<String> phi_bb36_19;
  TNode<String> phi_bb36_20;
  TNode<String> phi_bb36_25;
  TNode<IntPtrT> tmp47;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_12, &phi_bb36_13, &phi_bb36_14, &phi_bb36_15, &phi_bb36_16, &phi_bb36_19, &phi_bb36_20, &phi_bb36_25);
    tmp47 = AddStringLength_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{phi_bb36_14}, TNode<IntPtrT>{tmp44});
    ca_.Branch(tmp38, &block37, std::vector<compiler::Node*>{phi_bb36_12, phi_bb36_13, phi_bb36_15, phi_bb36_16, phi_bb36_19, phi_bb36_20, phi_bb36_25}, &block38, std::vector<compiler::Node*>{phi_bb36_12, phi_bb36_13, phi_bb36_15, phi_bb36_16, phi_bb36_19, phi_bb36_20, phi_bb36_25});
  }

  TNode<FixedArray> phi_bb37_12;
  TNode<IntPtrT> phi_bb37_13;
  TNode<BoolT> phi_bb37_15;
  TNode<PrimitiveHeapObject> phi_bb37_16;
  TNode<String> phi_bb37_19;
  TNode<String> phi_bb37_20;
  TNode<String> phi_bb37_25;
  TNode<IntPtrT> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Smi> tmp50;
  TNode<FixedArray> tmp51;
  TNode<Null> tmp52;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_12, &phi_bb37_13, &phi_bb37_15, &phi_bb37_16, &phi_bb37_19, &phi_bb37_20, &phi_bb37_25);
    tmp48 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp49 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb37_13}, TNode<IntPtrT>{tmp48});
    tmp50 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb8_10});
    tmp51 = StoreAndGrowFixedArray_Smi_0(state_, TNode<FixedArray>{phi_bb37_12}, TNode<IntPtrT>{phi_bb37_13}, TNode<Smi>{tmp50});
    tmp52 = Null_0(state_);
    ca_.Goto(&block38, tmp51, tmp49, phi_bb37_15, tmp52, phi_bb37_19, phi_bb37_20, phi_bb37_25);
  }

  TNode<FixedArray> phi_bb38_12;
  TNode<IntPtrT> phi_bb38_13;
  TNode<BoolT> phi_bb38_15;
  TNode<PrimitiveHeapObject> phi_bb38_16;
  TNode<String> phi_bb38_19;
  TNode<String> phi_bb38_20;
  TNode<String> phi_bb38_25;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_12, &phi_bb38_13, &phi_bb38_15, &phi_bb38_16, &phi_bb38_19, &phi_bb38_20, &phi_bb38_25);
    ca_.Goto(&block29, phi_bb38_12, phi_bb38_13, tmp47, phi_bb38_15, phi_bb38_16, phi_bb38_19, phi_bb38_20, phi_bb38_25);
  }

  TNode<FixedArray> phi_bb29_12;
  TNode<IntPtrT> phi_bb29_13;
  TNode<IntPtrT> phi_bb29_14;
  TNode<BoolT> phi_bb29_15;
  TNode<PrimitiveHeapObject> phi_bb29_16;
  TNode<String> phi_bb29_19;
  TNode<String> phi_bb29_20;
  TNode<String> phi_bb29_25;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<BoolT> tmp55;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_12, &phi_bb29_13, &phi_bb29_14, &phi_bb29_15, &phi_bb29_16, &phi_bb29_19, &phi_bb29_20, &phi_bb29_25);
    tmp53 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{phi_bb29_25});
    tmp54 = AddStringLength_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{phi_bb29_14}, TNode<IntPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{phi_bb29_25}, TNode<MaybeObject>{phi_bb29_16});
    ca_.Branch(tmp55, &block39, std::vector<compiler::Node*>{phi_bb29_12, phi_bb29_13, phi_bb29_15, phi_bb29_16, phi_bb29_19, phi_bb29_20, phi_bb29_25}, &block40, std::vector<compiler::Node*>{phi_bb29_12, phi_bb29_13, phi_bb29_15, phi_bb29_16, phi_bb29_19, phi_bb29_20, phi_bb29_25});
  }

  TNode<FixedArray> phi_bb39_12;
  TNode<IntPtrT> phi_bb39_13;
  TNode<BoolT> phi_bb39_15;
  TNode<PrimitiveHeapObject> phi_bb39_16;
  TNode<String> phi_bb39_19;
  TNode<String> phi_bb39_20;
  TNode<String> phi_bb39_25;
  TNode<Object> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<UintPtrT> tmp61;
  TNode<UintPtrT> tmp62;
  TNode<BoolT> tmp63;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_12, &phi_bb39_13, &phi_bb39_15, &phi_bb39_16, &phi_bb39_19, &phi_bb39_20, &phi_bb39_25);
    std::tie(tmp56, tmp57, tmp58) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb39_12}).Flatten();
    tmp59 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp60 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb39_13}, TNode<IntPtrT>{tmp59});
    tmp61 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp60});
    tmp62 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp58});
    tmp63 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp61}, TNode<UintPtrT>{tmp62});
    ca_.Branch(tmp63, &block51, std::vector<compiler::Node*>{phi_bb39_12, phi_bb39_13, phi_bb39_15, phi_bb39_16, phi_bb39_19, phi_bb39_20, phi_bb39_25, phi_bb39_12}, &block52, std::vector<compiler::Node*>{phi_bb39_12, phi_bb39_13, phi_bb39_15, phi_bb39_16, phi_bb39_19, phi_bb39_20, phi_bb39_25, phi_bb39_12});
  }

  TNode<FixedArray> phi_bb51_12;
  TNode<IntPtrT> phi_bb51_13;
  TNode<BoolT> phi_bb51_15;
  TNode<PrimitiveHeapObject> phi_bb51_16;
  TNode<String> phi_bb51_19;
  TNode<String> phi_bb51_20;
  TNode<String> phi_bb51_25;
  TNode<FixedArray> phi_bb51_29;
  TNode<IntPtrT> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<Object> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<Object> tmp68;
  TNode<HeapObject> tmp69;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_12, &phi_bb51_13, &phi_bb51_15, &phi_bb51_16, &phi_bb51_19, &phi_bb51_20, &phi_bb51_25, &phi_bb51_29);
    tmp64 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp60});
    tmp65 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp57}, TNode<IntPtrT>{tmp64});
    std::tie(tmp66, tmp67) = NewReference_Object_0(state_, TNode<Object>{tmp56}, TNode<IntPtrT>{tmp65}).Flatten();
    tmp68 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp66, tmp67});
    compiler::CodeAssemblerLabel label70(&ca_);
    tmp69 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp68}, &label70);
    ca_.Goto(&block58, phi_bb51_12, phi_bb51_13, phi_bb51_15, phi_bb51_16, phi_bb51_19, phi_bb51_20, phi_bb51_25);
    if (label70.is_used()) {
      ca_.Bind(&label70);
      ca_.Goto(&block59, phi_bb51_12, phi_bb51_13, phi_bb51_15, phi_bb51_16, phi_bb51_19, phi_bb51_20, phi_bb51_25);
    }
  }

  TNode<FixedArray> phi_bb52_12;
  TNode<IntPtrT> phi_bb52_13;
  TNode<BoolT> phi_bb52_15;
  TNode<PrimitiveHeapObject> phi_bb52_16;
  TNode<String> phi_bb52_19;
  TNode<String> phi_bb52_20;
  TNode<String> phi_bb52_25;
  TNode<FixedArray> phi_bb52_29;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_12, &phi_bb52_13, &phi_bb52_15, &phi_bb52_16, &phi_bb52_19, &phi_bb52_20, &phi_bb52_25, &phi_bb52_29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb59_12;
  TNode<IntPtrT> phi_bb59_13;
  TNode<BoolT> phi_bb59_15;
  TNode<PrimitiveHeapObject> phi_bb59_16;
  TNode<String> phi_bb59_19;
  TNode<String> phi_bb59_20;
  TNode<String> phi_bb59_25;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_12, &phi_bb59_13, &phi_bb59_15, &phi_bb59_16, &phi_bb59_19, &phi_bb59_20, &phi_bb59_25);
    ca_.Goto(&block56, phi_bb59_12, phi_bb59_13, phi_bb59_15, phi_bb59_16, phi_bb59_19, phi_bb59_20, phi_bb59_25);
  }

  TNode<FixedArray> phi_bb58_12;
  TNode<IntPtrT> phi_bb58_13;
  TNode<BoolT> phi_bb58_15;
  TNode<PrimitiveHeapObject> phi_bb58_16;
  TNode<String> phi_bb58_19;
  TNode<String> phi_bb58_20;
  TNode<String> phi_bb58_25;
  TNode<String> tmp71;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_12, &phi_bb58_13, &phi_bb58_15, &phi_bb58_16, &phi_bb58_19, &phi_bb58_20, &phi_bb58_25);
    compiler::CodeAssemblerLabel label72(&ca_);
    tmp71 = Cast_String_0(state_, TNode<HeapObject>{tmp69}, &label72);
    ca_.Goto(&block60, phi_bb58_12, phi_bb58_13, phi_bb58_15, phi_bb58_16, phi_bb58_19, phi_bb58_20, phi_bb58_25);
    if (label72.is_used()) {
      ca_.Bind(&label72);
      ca_.Goto(&block61, phi_bb58_12, phi_bb58_13, phi_bb58_15, phi_bb58_16, phi_bb58_19, phi_bb58_20, phi_bb58_25);
    }
  }

  TNode<FixedArray> phi_bb61_12;
  TNode<IntPtrT> phi_bb61_13;
  TNode<BoolT> phi_bb61_15;
  TNode<PrimitiveHeapObject> phi_bb61_16;
  TNode<String> phi_bb61_19;
  TNode<String> phi_bb61_20;
  TNode<String> phi_bb61_25;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_12, &phi_bb61_13, &phi_bb61_15, &phi_bb61_16, &phi_bb61_19, &phi_bb61_20, &phi_bb61_25);
    ca_.Goto(&block56, phi_bb61_12, phi_bb61_13, phi_bb61_15, phi_bb61_16, phi_bb61_19, phi_bb61_20, phi_bb61_25);
  }

  TNode<FixedArray> phi_bb60_12;
  TNode<IntPtrT> phi_bb60_13;
  TNode<BoolT> phi_bb60_15;
  TNode<PrimitiveHeapObject> phi_bb60_16;
  TNode<String> phi_bb60_19;
  TNode<String> phi_bb60_20;
  TNode<String> phi_bb60_25;
  TNode<IntPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<Smi> tmp75;
  TNode<FixedArray> tmp76;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_12, &phi_bb60_13, &phi_bb60_15, &phi_bb60_16, &phi_bb60_19, &phi_bb60_20, &phi_bb60_25);
    tmp73 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp74 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb60_13}, TNode<IntPtrT>{tmp73});
    tmp75 = SmiConstant_0(state_, IntegerLiteral(true, 0x1ull));
    tmp76 = StoreAndGrowFixedArray_Smi_0(state_, TNode<FixedArray>{phi_bb60_12}, TNode<IntPtrT>{phi_bb60_13}, TNode<Smi>{tmp75});
    ca_.Goto(&block55, tmp76, tmp74, phi_bb60_15, phi_bb60_16, phi_bb60_19, phi_bb60_20, phi_bb60_25);
  }

  TNode<FixedArray> phi_bb56_12;
  TNode<IntPtrT> phi_bb56_13;
  TNode<BoolT> phi_bb56_15;
  TNode<PrimitiveHeapObject> phi_bb56_16;
  TNode<String> phi_bb56_19;
  TNode<String> phi_bb56_20;
  TNode<String> phi_bb56_25;
  TNode<Smi> tmp77;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_12, &phi_bb56_13, &phi_bb56_15, &phi_bb56_16, &phi_bb56_19, &phi_bb56_20, &phi_bb56_25);
    compiler::CodeAssemblerLabel label78(&ca_);
    tmp77 = Cast_Smi_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp68)}, &label78);
    ca_.Goto(&block64, phi_bb56_12, phi_bb56_13, phi_bb56_15, phi_bb56_16, phi_bb56_19, phi_bb56_20, phi_bb56_25);
    if (label78.is_used()) {
      ca_.Bind(&label78);
      ca_.Goto(&block65, phi_bb56_12, phi_bb56_13, phi_bb56_15, phi_bb56_16, phi_bb56_19, phi_bb56_20, phi_bb56_25);
    }
  }

  TNode<FixedArray> phi_bb65_12;
  TNode<IntPtrT> phi_bb65_13;
  TNode<BoolT> phi_bb65_15;
  TNode<PrimitiveHeapObject> phi_bb65_16;
  TNode<String> phi_bb65_19;
  TNode<String> phi_bb65_20;
  TNode<String> phi_bb65_25;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_12, &phi_bb65_13, &phi_bb65_15, &phi_bb65_16, &phi_bb65_19, &phi_bb65_20, &phi_bb65_25);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb64_12;
  TNode<IntPtrT> phi_bb64_13;
  TNode<BoolT> phi_bb64_15;
  TNode<PrimitiveHeapObject> phi_bb64_16;
  TNode<String> phi_bb64_19;
  TNode<String> phi_bb64_20;
  TNode<String> phi_bb64_25;
  TNode<Object> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<UintPtrT> tmp84;
  TNode<UintPtrT> tmp85;
  TNode<BoolT> tmp86;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_12, &phi_bb64_13, &phi_bb64_15, &phi_bb64_16, &phi_bb64_19, &phi_bb64_20, &phi_bb64_25);
    std::tie(tmp79, tmp80, tmp81) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb64_12}).Flatten();
    tmp82 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp83 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb64_13}, TNode<IntPtrT>{tmp82});
    tmp84 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp83});
    tmp85 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp81});
    tmp86 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp84}, TNode<UintPtrT>{tmp85});
    ca_.Branch(tmp86, &block78, std::vector<compiler::Node*>{phi_bb64_12, phi_bb64_13, phi_bb64_15, phi_bb64_16, phi_bb64_19, phi_bb64_20, phi_bb64_25, phi_bb64_12}, &block79, std::vector<compiler::Node*>{phi_bb64_12, phi_bb64_13, phi_bb64_15, phi_bb64_16, phi_bb64_19, phi_bb64_20, phi_bb64_25, phi_bb64_12});
  }

  TNode<FixedArray> phi_bb78_12;
  TNode<IntPtrT> phi_bb78_13;
  TNode<BoolT> phi_bb78_15;
  TNode<PrimitiveHeapObject> phi_bb78_16;
  TNode<String> phi_bb78_19;
  TNode<String> phi_bb78_20;
  TNode<String> phi_bb78_25;
  TNode<FixedArray> phi_bb78_31;
  TNode<IntPtrT> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<Object> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<Smi> tmp91;
  TNode<Smi> tmp92;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_12, &phi_bb78_13, &phi_bb78_15, &phi_bb78_16, &phi_bb78_19, &phi_bb78_20, &phi_bb78_25, &phi_bb78_31);
    tmp87 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp83});
    tmp88 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp80}, TNode<IntPtrT>{tmp87});
    std::tie(tmp89, tmp90) = NewReference_Object_0(state_, TNode<Object>{tmp79}, TNode<IntPtrT>{tmp88}).Flatten();
    tmp91 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp92 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp77}, TNode<Smi>{tmp91});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp89, tmp90}, tmp92);
    ca_.Goto(&block55, phi_bb78_12, phi_bb78_13, phi_bb78_15, phi_bb78_16, phi_bb78_19, phi_bb78_20, phi_bb78_25);
  }

  TNode<FixedArray> phi_bb79_12;
  TNode<IntPtrT> phi_bb79_13;
  TNode<BoolT> phi_bb79_15;
  TNode<PrimitiveHeapObject> phi_bb79_16;
  TNode<String> phi_bb79_19;
  TNode<String> phi_bb79_20;
  TNode<String> phi_bb79_25;
  TNode<FixedArray> phi_bb79_31;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_12, &phi_bb79_13, &phi_bb79_15, &phi_bb79_16, &phi_bb79_19, &phi_bb79_20, &phi_bb79_25, &phi_bb79_31);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb55_12;
  TNode<IntPtrT> phi_bb55_13;
  TNode<BoolT> phi_bb55_15;
  TNode<PrimitiveHeapObject> phi_bb55_16;
  TNode<String> phi_bb55_19;
  TNode<String> phi_bb55_20;
  TNode<String> phi_bb55_25;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_12, &phi_bb55_13, &phi_bb55_15, &phi_bb55_16, &phi_bb55_19, &phi_bb55_20, &phi_bb55_25);
    ca_.Goto(&block41, phi_bb55_12, phi_bb55_13, phi_bb55_15, phi_bb55_16, phi_bb55_19, phi_bb55_20, phi_bb55_25);
  }

  TNode<FixedArray> phi_bb40_12;
  TNode<IntPtrT> phi_bb40_13;
  TNode<BoolT> phi_bb40_15;
  TNode<PrimitiveHeapObject> phi_bb40_16;
  TNode<String> phi_bb40_19;
  TNode<String> phi_bb40_20;
  TNode<String> phi_bb40_25;
  TNode<IntPtrT> tmp93;
  TNode<IntPtrT> tmp94;
  TNode<FixedArray> tmp95;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_12, &phi_bb40_13, &phi_bb40_15, &phi_bb40_16, &phi_bb40_19, &phi_bb40_20, &phi_bb40_25);
    tmp93 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp94 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb40_13}, TNode<IntPtrT>{tmp93});
    tmp95 = StoreAndGrowFixedArray_String_0(state_, TNode<FixedArray>{phi_bb40_12}, TNode<IntPtrT>{phi_bb40_13}, TNode<String>{phi_bb40_25});
    ca_.Goto(&block41, tmp95, tmp94, phi_bb40_15, phi_bb40_25, phi_bb40_19, phi_bb40_20, phi_bb40_25);
  }

  TNode<FixedArray> phi_bb41_12;
  TNode<IntPtrT> phi_bb41_13;
  TNode<BoolT> phi_bb41_15;
  TNode<PrimitiveHeapObject> phi_bb41_16;
  TNode<String> phi_bb41_19;
  TNode<String> phi_bb41_20;
  TNode<String> phi_bb41_25;
  TNode<Uint16T> tmp96;
  TNode<BoolT> tmp97;
  TNode<BoolT> tmp98;
  TNode<IntPtrT> tmp99;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_12, &phi_bb41_13, &phi_bb41_15, &phi_bb41_16, &phi_bb41_19, &phi_bb41_20, &phi_bb41_25);
    tmp96 = CodeStubAssembler(state_).LoadInstanceType(TNode<HeapObject>{phi_bb41_25});
    tmp97 = CodeStubAssembler(state_).IsOneByteStringInstanceType(TNode<Uint16T>{tmp96});
    tmp98 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp97}, TNode<BoolT>{phi_bb41_15});
    tmp99 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp99, phi_bb6_11, phi_bb41_12, phi_bb41_13, tmp54, tmp98, phi_bb41_16, tmp18);
  }

  TNode<IntPtrT> phi_bb3_10;
  TNode<BuiltinPtr> phi_bb3_11;
  TNode<FixedArray> phi_bb3_12;
  TNode<IntPtrT> phi_bb3_13;
  TNode<IntPtrT> phi_bb3_14;
  TNode<BoolT> phi_bb3_15;
  TNode<PrimitiveHeapObject> phi_bb3_16;
  TNode<UintPtrT> phi_bb3_17;
  TNode<BoolT> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<BoolT> tmp102;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_10, &phi_bb3_11, &phi_bb3_12, &phi_bb3_13, &phi_bb3_14, &phi_bb3_15, &phi_bb3_16, &phi_bb3_17);
    tmp100 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp101 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp102 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb3_10}, TNode<IntPtrT>{tmp101});
    ca_.Branch(tmp102, &block85, std::vector<compiler::Node*>{phi_bb3_10, phi_bb3_11, phi_bb3_12, phi_bb3_13, phi_bb3_14, phi_bb3_15, phi_bb3_16, phi_bb3_17, phi_bb3_10, phi_bb3_10}, &block86, std::vector<compiler::Node*>{phi_bb3_10, phi_bb3_11, phi_bb3_12, phi_bb3_13, phi_bb3_14, phi_bb3_15, phi_bb3_16, phi_bb3_17, phi_bb3_10, phi_bb3_10});
  }

  TNode<IntPtrT> phi_bb85_10;
  TNode<BuiltinPtr> phi_bb85_11;
  TNode<FixedArray> phi_bb85_12;
  TNode<IntPtrT> phi_bb85_13;
  TNode<IntPtrT> phi_bb85_14;
  TNode<BoolT> phi_bb85_15;
  TNode<PrimitiveHeapObject> phi_bb85_16;
  TNode<UintPtrT> phi_bb85_17;
  TNode<IntPtrT> phi_bb85_18;
  TNode<IntPtrT> phi_bb85_22;
  TNode<BoolT> tmp103;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_10, &phi_bb85_11, &phi_bb85_12, &phi_bb85_13, &phi_bb85_14, &phi_bb85_15, &phi_bb85_16, &phi_bb85_17, &phi_bb85_18, &phi_bb85_22);
    tmp103 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block87, phi_bb85_10, phi_bb85_11, phi_bb85_12, phi_bb85_13, phi_bb85_14, phi_bb85_15, phi_bb85_16, phi_bb85_17, phi_bb85_18, phi_bb85_22, tmp103);
  }

  TNode<IntPtrT> phi_bb86_10;
  TNode<BuiltinPtr> phi_bb86_11;
  TNode<FixedArray> phi_bb86_12;
  TNode<IntPtrT> phi_bb86_13;
  TNode<IntPtrT> phi_bb86_14;
  TNode<BoolT> phi_bb86_15;
  TNode<PrimitiveHeapObject> phi_bb86_16;
  TNode<UintPtrT> phi_bb86_17;
  TNode<IntPtrT> phi_bb86_18;
  TNode<IntPtrT> phi_bb86_22;
  TNode<IntPtrT> tmp104;
  TNode<BoolT> tmp105;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_10, &phi_bb86_11, &phi_bb86_12, &phi_bb86_13, &phi_bb86_14, &phi_bb86_15, &phi_bb86_16, &phi_bb86_17, &phi_bb86_18, &phi_bb86_22);
    tmp104 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp105 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp104});
    ca_.Goto(&block87, phi_bb86_10, phi_bb86_11, phi_bb86_12, phi_bb86_13, phi_bb86_14, phi_bb86_15, phi_bb86_16, phi_bb86_17, phi_bb86_18, phi_bb86_22, tmp105);
  }

  TNode<IntPtrT> phi_bb87_10;
  TNode<BuiltinPtr> phi_bb87_11;
  TNode<FixedArray> phi_bb87_12;
  TNode<IntPtrT> phi_bb87_13;
  TNode<IntPtrT> phi_bb87_14;
  TNode<BoolT> phi_bb87_15;
  TNode<PrimitiveHeapObject> phi_bb87_16;
  TNode<UintPtrT> phi_bb87_17;
  TNode<IntPtrT> phi_bb87_18;
  TNode<IntPtrT> phi_bb87_22;
  TNode<BoolT> phi_bb87_26;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_10, &phi_bb87_11, &phi_bb87_12, &phi_bb87_13, &phi_bb87_14, &phi_bb87_15, &phi_bb87_16, &phi_bb87_17, &phi_bb87_18, &phi_bb87_22, &phi_bb87_26);
    ca_.Branch(phi_bb87_26, &block83, std::vector<compiler::Node*>{phi_bb87_10, phi_bb87_11, phi_bb87_12, phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_17, phi_bb87_18, phi_bb87_22}, &block84, std::vector<compiler::Node*>{phi_bb87_10, phi_bb87_11, phi_bb87_12, phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_17, phi_bb87_18, phi_bb87_22});
  }

  TNode<IntPtrT> phi_bb83_10;
  TNode<BuiltinPtr> phi_bb83_11;
  TNode<FixedArray> phi_bb83_12;
  TNode<IntPtrT> phi_bb83_13;
  TNode<IntPtrT> phi_bb83_14;
  TNode<BoolT> phi_bb83_15;
  TNode<PrimitiveHeapObject> phi_bb83_16;
  TNode<UintPtrT> phi_bb83_17;
  TNode<IntPtrT> phi_bb83_18;
  TNode<IntPtrT> phi_bb83_22;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_10, &phi_bb83_11, &phi_bb83_12, &phi_bb83_13, &phi_bb83_14, &phi_bb83_15, &phi_bb83_16, &phi_bb83_17, &phi_bb83_18, &phi_bb83_22);
    ca_.Goto(&block82, phi_bb83_10, phi_bb83_11, phi_bb83_12, phi_bb83_13, phi_bb83_14, phi_bb83_15, phi_bb83_16, phi_bb83_17, phi_bb83_18, phi_bb83_22);
  }

  TNode<IntPtrT> phi_bb84_10;
  TNode<BuiltinPtr> phi_bb84_11;
  TNode<FixedArray> phi_bb84_12;
  TNode<IntPtrT> phi_bb84_13;
  TNode<IntPtrT> phi_bb84_14;
  TNode<BoolT> phi_bb84_15;
  TNode<PrimitiveHeapObject> phi_bb84_16;
  TNode<UintPtrT> phi_bb84_17;
  TNode<IntPtrT> phi_bb84_18;
  TNode<IntPtrT> phi_bb84_22;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<BoolT> tmp108;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_10, &phi_bb84_11, &phi_bb84_12, &phi_bb84_13, &phi_bb84_14, &phi_bb84_15, &phi_bb84_16, &phi_bb84_17, &phi_bb84_18, &phi_bb84_22);
    tmp106 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{phi_bb84_22});
    tmp107 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp106}, TNode<IntPtrT>{tmp3});
    tmp108 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp107}, TNode<IntPtrT>{phi_bb84_22});
    ca_.Branch(tmp108, &block88, std::vector<compiler::Node*>{phi_bb84_10, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_16, phi_bb84_17, phi_bb84_18, phi_bb84_22, phi_bb84_22}, &block89, std::vector<compiler::Node*>{phi_bb84_10, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_16, phi_bb84_17, phi_bb84_18, phi_bb84_22, phi_bb84_22});
  }

  TNode<IntPtrT> phi_bb88_10;
  TNode<BuiltinPtr> phi_bb88_11;
  TNode<FixedArray> phi_bb88_12;
  TNode<IntPtrT> phi_bb88_13;
  TNode<IntPtrT> phi_bb88_14;
  TNode<BoolT> phi_bb88_15;
  TNode<PrimitiveHeapObject> phi_bb88_16;
  TNode<UintPtrT> phi_bb88_17;
  TNode<IntPtrT> phi_bb88_18;
  TNode<IntPtrT> phi_bb88_22;
  TNode<IntPtrT> phi_bb88_25;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_10, &phi_bb88_11, &phi_bb88_12, &phi_bb88_13, &phi_bb88_14, &phi_bb88_15, &phi_bb88_16, &phi_bb88_17, &phi_bb88_18, &phi_bb88_22, &phi_bb88_25);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, p_context);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb89_10;
  TNode<BuiltinPtr> phi_bb89_11;
  TNode<FixedArray> phi_bb89_12;
  TNode<IntPtrT> phi_bb89_13;
  TNode<IntPtrT> phi_bb89_14;
  TNode<BoolT> phi_bb89_15;
  TNode<PrimitiveHeapObject> phi_bb89_16;
  TNode<UintPtrT> phi_bb89_17;
  TNode<IntPtrT> phi_bb89_18;
  TNode<IntPtrT> phi_bb89_22;
  TNode<IntPtrT> phi_bb89_25;
  TNode<IntPtrT> tmp109;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_10, &phi_bb89_11, &phi_bb89_12, &phi_bb89_13, &phi_bb89_14, &phi_bb89_15, &phi_bb89_16, &phi_bb89_17, &phi_bb89_18, &phi_bb89_22, &phi_bb89_25);
    tmp109 = AddStringLength_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{phi_bb89_14}, TNode<IntPtrT>{tmp106});
    ca_.Branch(tmp100, &block90, std::vector<compiler::Node*>{phi_bb89_10, phi_bb89_11, phi_bb89_12, phi_bb89_13, phi_bb89_15, phi_bb89_16, phi_bb89_17, phi_bb89_18, phi_bb89_22, phi_bb89_25}, &block91, std::vector<compiler::Node*>{phi_bb89_10, phi_bb89_11, phi_bb89_12, phi_bb89_13, phi_bb89_15, phi_bb89_16, phi_bb89_17, phi_bb89_18, phi_bb89_22, phi_bb89_25});
  }

  TNode<IntPtrT> phi_bb90_10;
  TNode<BuiltinPtr> phi_bb90_11;
  TNode<FixedArray> phi_bb90_12;
  TNode<IntPtrT> phi_bb90_13;
  TNode<BoolT> phi_bb90_15;
  TNode<PrimitiveHeapObject> phi_bb90_16;
  TNode<UintPtrT> phi_bb90_17;
  TNode<IntPtrT> phi_bb90_18;
  TNode<IntPtrT> phi_bb90_22;
  TNode<IntPtrT> phi_bb90_25;
  TNode<IntPtrT> tmp110;
  TNode<IntPtrT> tmp111;
  TNode<Smi> tmp112;
  TNode<FixedArray> tmp113;
  TNode<Null> tmp114;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_10, &phi_bb90_11, &phi_bb90_12, &phi_bb90_13, &phi_bb90_15, &phi_bb90_16, &phi_bb90_17, &phi_bb90_18, &phi_bb90_22, &phi_bb90_25);
    tmp110 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp111 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb90_13}, TNode<IntPtrT>{tmp110});
    tmp112 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb90_25});
    tmp113 = StoreAndGrowFixedArray_Smi_0(state_, TNode<FixedArray>{phi_bb90_12}, TNode<IntPtrT>{phi_bb90_13}, TNode<Smi>{tmp112});
    tmp114 = Null_0(state_);
    ca_.Goto(&block91, phi_bb90_10, phi_bb90_11, tmp113, tmp111, phi_bb90_15, tmp114, phi_bb90_17, phi_bb90_18, phi_bb90_22, phi_bb90_25);
  }

  TNode<IntPtrT> phi_bb91_10;
  TNode<BuiltinPtr> phi_bb91_11;
  TNode<FixedArray> phi_bb91_12;
  TNode<IntPtrT> phi_bb91_13;
  TNode<BoolT> phi_bb91_15;
  TNode<PrimitiveHeapObject> phi_bb91_16;
  TNode<UintPtrT> phi_bb91_17;
  TNode<IntPtrT> phi_bb91_18;
  TNode<IntPtrT> phi_bb91_22;
  TNode<IntPtrT> phi_bb91_25;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_10, &phi_bb91_11, &phi_bb91_12, &phi_bb91_13, &phi_bb91_15, &phi_bb91_16, &phi_bb91_17, &phi_bb91_18, &phi_bb91_22, &phi_bb91_25);
    ca_.Goto(&block82, phi_bb91_10, phi_bb91_11, phi_bb91_12, phi_bb91_13, tmp109, phi_bb91_15, phi_bb91_16, phi_bb91_17, phi_bb91_18, phi_bb91_22);
  }

  TNode<IntPtrT> phi_bb82_10;
  TNode<BuiltinPtr> phi_bb82_11;
  TNode<FixedArray> phi_bb82_12;
  TNode<IntPtrT> phi_bb82_13;
  TNode<IntPtrT> phi_bb82_14;
  TNode<BoolT> phi_bb82_15;
  TNode<PrimitiveHeapObject> phi_bb82_16;
  TNode<UintPtrT> phi_bb82_17;
  TNode<IntPtrT> phi_bb82_18;
  TNode<IntPtrT> phi_bb82_22;
  TNode<String> tmp115;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_10, &phi_bb82_11, &phi_bb82_12, &phi_bb82_13, &phi_bb82_14, &phi_bb82_15, &phi_bb82_16, &phi_bb82_17, &phi_bb82_18, &phi_bb82_22);
    tmp115 = BufferJoin_0(state_, TNode<Context>{p_context}, TorqueStructBuffer_0{TNode<FixedArray>{phi_bb82_12}, TNode<IntPtrT>{phi_bb82_13}, TNode<IntPtrT>{phi_bb82_14}, TNode<BoolT>{phi_bb82_15}, TNode<PrimitiveHeapObject>{phi_bb82_16}}, TNode<String>{p_sep});
    ca_.Goto(&block92);
  }

    ca_.Bind(&block92);
  return TNode<String>{tmp115};
}

TF_BUILTIN(LoadJoinTypedElement_Int32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Int32Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Float16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Float16Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Float32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Float32Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Float64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Float64Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Uint8ClampedElements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Uint8ClampedElements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_BigUint64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_BigUint64Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_BigInt64Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_BigInt64Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Uint8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Uint8Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Int8Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Int8Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Uint16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Uint16Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Int16Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Int16Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(LoadJoinTypedElement_Uint32Elements_0, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kK);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSTypedArray> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Numeric> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = UnsafeCast_JSTypedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp0});
    tmp2 = CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(TNode<RawPtrT>{tmp1}, TNode<UintPtrT>{parameter2}, (KindForArrayType_Uint32Elements_0(state_)));
    CodeStubAssembler(state_).Return(tmp2);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=500&c=10
TNode<String> ArrayJoinImpl_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_sep, TNode<Number> p_lengthNumber, bool p_useToLocaleString, TNode<Object> p_locales, TNode<Object> p_options, TNode<BuiltinPtr> p_initialLoadFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, BoolT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String, FixedArray> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, String, String, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, BoolT> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block88(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block90(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT, IntPtrT> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, BuiltinPtr, FixedArray, IntPtrT, IntPtrT, BoolT, PrimitiveHeapObject, UintPtrT, IntPtrT, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<UintPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<FixedArray> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<BoolT> tmp8;
  TNode<PrimitiveHeapObject> tmp9;
  TNode<UintPtrT> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_receiver, tmp0});
    tmp2 = Convert_uintptr_Number_0(state_, TNode<Number>{p_lengthNumber});
    tmp3 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{p_sep});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp5, tmp6, tmp7, tmp8, tmp9) = NewBuffer_0(state_, TNode<UintPtrT>{tmp2}, TNode<String>{p_sep}).Flatten();
    tmp10 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp4, p_initialLoadFn, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  TNode<IntPtrT> phi_bb4_10;
  TNode<BuiltinPtr> phi_bb4_11;
  TNode<FixedArray> phi_bb4_12;
  TNode<IntPtrT> phi_bb4_13;
  TNode<IntPtrT> phi_bb4_14;
  TNode<BoolT> phi_bb4_15;
  TNode<PrimitiveHeapObject> phi_bb4_16;
  TNode<UintPtrT> phi_bb4_17;
  TNode<BoolT> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_10, &phi_bb4_11, &phi_bb4_12, &phi_bb4_13, &phi_bb4_14, &phi_bb4_15, &phi_bb4_16, &phi_bb4_17);
    tmp11 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb4_17}, TNode<UintPtrT>{tmp2});
    ca_.Branch(tmp11, &block2, std::vector<compiler::Node*>{phi_bb4_10, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_15, phi_bb4_16, phi_bb4_17}, &block3, std::vector<compiler::Node*>{phi_bb4_10, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_15, phi_bb4_16, phi_bb4_17});
  }

  TNode<IntPtrT> phi_bb2_10;
  TNode<BuiltinPtr> phi_bb2_11;
  TNode<FixedArray> phi_bb2_12;
  TNode<IntPtrT> phi_bb2_13;
  TNode<IntPtrT> phi_bb2_14;
  TNode<BoolT> phi_bb2_15;
  TNode<PrimitiveHeapObject> phi_bb2_16;
  TNode<UintPtrT> phi_bb2_17;
  TNode<BoolT> tmp12;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_10, &phi_bb2_11, &phi_bb2_12, &phi_bb2_13, &phi_bb2_14, &phi_bb2_15, &phi_bb2_16, &phi_bb2_17);
    tmp12 = CannotUseSameArrayAccessor_JSTypedArray_0(state_, TNode<Context>{p_context}, TNode<BuiltinPtr>{phi_bb2_11}, TNode<JSReceiver>{p_receiver}, TNode<Map>{tmp1}, TNode<Number>{p_lengthNumber});
    ca_.Branch(tmp12, &block5, std::vector<compiler::Node*>{phi_bb2_10, phi_bb2_11, phi_bb2_12, phi_bb2_13, phi_bb2_14, phi_bb2_15, phi_bb2_16, phi_bb2_17}, &block6, std::vector<compiler::Node*>{phi_bb2_10, phi_bb2_11, phi_bb2_12, phi_bb2_13, phi_bb2_14, phi_bb2_15, phi_bb2_16, phi_bb2_17});
  }

  TNode<IntPtrT> phi_bb5_10;
  TNode<BuiltinPtr> phi_bb5_11;
  TNode<FixedArray> phi_bb5_12;
  TNode<IntPtrT> phi_bb5_13;
  TNode<IntPtrT> phi_bb5_14;
  TNode<BoolT> phi_bb5_15;
  TNode<PrimitiveHeapObject> phi_bb5_16;
  TNode<UintPtrT> phi_bb5_17;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_10, &phi_bb5_11, &phi_bb5_12, &phi_bb5_13, &phi_bb5_14, &phi_bb5_15, &phi_bb5_16, &phi_bb5_17);
    ca_.Goto(&block6, phi_bb5_10, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtin::kLoadJoinElement_GenericElementsAccessor_0)), phi_bb5_12, phi_bb5_13, phi_bb5_14, phi_bb5_15, phi_bb5_16, phi_bb5_17);
  }

  TNode<IntPtrT> phi_bb6_10;
  TNode<BuiltinPtr> phi_bb6_11;
  TNode<FixedArray> phi_bb6_12;
  TNode<IntPtrT> phi_bb6_13;
  TNode<IntPtrT> phi_bb6_14;
  TNode<BoolT> phi_bb6_15;
  TNode<PrimitiveHeapObject> phi_bb6_16;
  TNode<UintPtrT> phi_bb6_17;
  TNode<UintPtrT> tmp13;
  TNode<BoolT> tmp14;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_10, &phi_bb6_11, &phi_bb6_12, &phi_bb6_13, &phi_bb6_14, &phi_bb6_15, &phi_bb6_16, &phi_bb6_17);
    tmp13 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp14 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{phi_bb6_17}, TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block7, std::vector<compiler::Node*>{phi_bb6_10, phi_bb6_12, phi_bb6_13, phi_bb6_14, phi_bb6_15, phi_bb6_16, phi_bb6_17}, &block8, std::vector<compiler::Node*>{phi_bb6_10, phi_bb6_12, phi_bb6_13, phi_bb6_14, phi_bb6_15, phi_bb6_16, phi_bb6_17});
  }

  TNode<IntPtrT> phi_bb7_10;
  TNode<FixedArray> phi_bb7_12;
  TNode<IntPtrT> phi_bb7_13;
  TNode<IntPtrT> phi_bb7_14;
  TNode<BoolT> phi_bb7_15;
  TNode<PrimitiveHeapObject> phi_bb7_16;
  TNode<UintPtrT> phi_bb7_17;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_10, &phi_bb7_12, &phi_bb7_13, &phi_bb7_14, &phi_bb7_15, &phi_bb7_16, &phi_bb7_17);
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb7_10}, TNode<IntPtrT>{tmp15});
    ca_.Goto(&block8, tmp16, phi_bb7_12, phi_bb7_13, phi_bb7_14, phi_bb7_15, phi_bb7_16, phi_bb7_17);
  }

  TNode<IntPtrT> phi_bb8_10;
  TNode<FixedArray> phi_bb8_12;
  TNode<IntPtrT> phi_bb8_13;
  TNode<IntPtrT> phi_bb8_14;
  TNode<BoolT> phi_bb8_15;
  TNode<PrimitiveHeapObject> phi_bb8_16;
  TNode<UintPtrT> phi_bb8_17;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<Object> tmp19;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_10, &phi_bb8_12, &phi_bb8_13, &phi_bb8_14, &phi_bb8_15, &phi_bb8_16, &phi_bb8_17);
    tmp17 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp18 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb8_17}, TNode<UintPtrT>{tmp17});
tmp19 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallInterfaceDescriptorFor(ExampleBuiltinForTorqueFunctionPointerType(0)), phi_bb6_11, p_context, p_receiver, phi_bb8_17);
    if ((p_useToLocaleString)) {
      ca_.Goto(&block9, phi_bb8_12, phi_bb8_13, phi_bb8_14, phi_bb8_15, phi_bb8_16);
    } else {
      ca_.Goto(&block10, phi_bb8_12, phi_bb8_13, phi_bb8_14, phi_bb8_15, phi_bb8_16);
    }
  }

  TNode<FixedArray> phi_bb9_12;
  TNode<IntPtrT> phi_bb9_13;
  TNode<IntPtrT> phi_bb9_14;
  TNode<BoolT> phi_bb9_15;
  TNode<PrimitiveHeapObject> phi_bb9_16;
  TNode<String> tmp20;
  TNode<String> tmp21;
  TNode<BoolT> tmp22;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_12, &phi_bb9_13, &phi_bb9_14, &phi_bb9_15, &phi_bb9_16);
    tmp20 = ca_.CallBuiltin<String>(Builtin::kConvertToLocaleString, p_context, tmp19, p_locales, p_options);
    tmp21 = kEmptyString_0(state_);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block12, std::vector<compiler::Node*>{phi_bb9_12, phi_bb9_13, phi_bb9_14, phi_bb9_15, phi_bb9_16}, &block13, std::vector<compiler::Node*>{phi_bb9_12, phi_bb9_13, phi_bb9_14, phi_bb9_15, phi_bb9_16});
  }

  TNode<FixedArray> phi_bb12_12;
  TNode<IntPtrT> phi_bb12_13;
  TNode<IntPtrT> phi_bb12_14;
  TNode<BoolT> phi_bb12_15;
  TNode<PrimitiveHeapObject> phi_bb12_16;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14, &phi_bb12_15, &phi_bb12_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb12_12, phi_bb12_13, phi_bb12_14, phi_bb12_15, phi_bb12_16, tmp18);
  }

  TNode<FixedArray> phi_bb13_12;
  TNode<IntPtrT> phi_bb13_13;
  TNode<IntPtrT> phi_bb13_14;
  TNode<BoolT> phi_bb13_15;
  TNode<PrimitiveHeapObject> phi_bb13_16;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14, &phi_bb13_15, &phi_bb13_16);
    ca_.Goto(&block11, phi_bb13_12, phi_bb13_13, phi_bb13_14, phi_bb13_15, phi_bb13_16, tmp20);
  }

  TNode<FixedArray> phi_bb10_12;
  TNode<IntPtrT> phi_bb10_13;
  TNode<IntPtrT> phi_bb10_14;
  TNode<BoolT> phi_bb10_15;
  TNode<PrimitiveHeapObject> phi_bb10_16;
  TNode<String> tmp23;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_12, &phi_bb10_13, &phi_bb10_14, &phi_bb10_15, &phi_bb10_16);
    compiler::CodeAssemblerLabel label24(&ca_);
    tmp23 = Cast_String_1(state_, TNode<Context>{p_context}, TNode<Object>{tmp19}, &label24);
    ca_.Goto(&block16, phi_bb10_12, phi_bb10_13, phi_bb10_14, phi_bb10_15, phi_bb10_16);
    if (label24.is_used()) {
      ca_.Bind(&label24);
      ca_.Goto(&block17, phi_bb10_12, phi_bb10_13, phi_bb10_14, phi_bb10_15, phi_bb10_16);
    }
  }

  TNode<FixedArray> phi_bb17_12;
  TNode<IntPtrT> phi_bb17_13;
  TNode<IntPtrT> phi_bb17_14;
  TNode<BoolT> phi_bb17_15;
  TNode<PrimitiveHeapObject> phi_bb17_16;
  TNode<Number> tmp25;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14, &phi_bb17_15, &phi_bb17_16);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = Cast_Number_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp19)}, &label26);
    ca_.Goto(&block22, phi_bb17_12, phi_bb17_13, phi_bb17_14, phi_bb17_15, phi_bb17_16);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block23, phi_bb17_12, phi_bb17_13, phi_bb17_14, phi_bb17_15, phi_bb17_16);
    }
  }

  TNode<FixedArray> phi_bb16_12;
  TNode<IntPtrT> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<BoolT> phi_bb16_15;
  TNode<PrimitiveHeapObject> phi_bb16_16;
  TNode<String> tmp27;
  TNode<BoolT> tmp28;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14, &phi_bb16_15, &phi_bb16_16);
    tmp27 = kEmptyString_0(state_);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp23}, TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block18, std::vector<compiler::Node*>{phi_bb16_12, phi_bb16_13, phi_bb16_14, phi_bb16_15, phi_bb16_16}, &block19, std::vector<compiler::Node*>{phi_bb16_12, phi_bb16_13, phi_bb16_14, phi_bb16_15, phi_bb16_16});
  }

  TNode<FixedArray> phi_bb18_12;
  TNode<IntPtrT> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<BoolT> phi_bb18_15;
  TNode<PrimitiveHeapObject> phi_bb18_16;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_12, &phi_bb18_13, &phi_bb18_14, &phi_bb18_15, &phi_bb18_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb18_12, phi_bb18_13, phi_bb18_14, phi_bb18_15, phi_bb18_16, tmp18);
  }

  TNode<FixedArray> phi_bb19_12;
  TNode<IntPtrT> phi_bb19_13;
  TNode<IntPtrT> phi_bb19_14;
  TNode<BoolT> phi_bb19_15;
  TNode<PrimitiveHeapObject> phi_bb19_16;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14, &phi_bb19_15, &phi_bb19_16);
    ca_.Goto(&block14, phi_bb19_12, phi_bb19_13, phi_bb19_14, phi_bb19_15, phi_bb19_16, tmp23);
  }

  TNode<FixedArray> phi_bb23_12;
  TNode<IntPtrT> phi_bb23_13;
  TNode<IntPtrT> phi_bb23_14;
  TNode<BoolT> phi_bb23_15;
  TNode<PrimitiveHeapObject> phi_bb23_16;
  TNode<BoolT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_12, &phi_bb23_13, &phi_bb23_14, &phi_bb23_15, &phi_bb23_16);
    tmp29 = CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp19)});
    ca_.Branch(tmp29, &block24, std::vector<compiler::Node*>{phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_15, phi_bb23_16}, &block25, std::vector<compiler::Node*>{phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_15, phi_bb23_16});
  }

  TNode<FixedArray> phi_bb22_12;
  TNode<IntPtrT> phi_bb22_13;
  TNode<IntPtrT> phi_bb22_14;
  TNode<BoolT> phi_bb22_15;
  TNode<PrimitiveHeapObject> phi_bb22_16;
  TNode<String> tmp30;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_12, &phi_bb22_13, &phi_bb22_14, &phi_bb22_15, &phi_bb22_16);
    tmp30 = CodeStubAssembler(state_).NumberToString(TNode<Number>{tmp25});
    ca_.Goto(&block20, phi_bb22_12, phi_bb22_13, phi_bb22_14, phi_bb22_15, phi_bb22_16, tmp30);
  }

  TNode<FixedArray> phi_bb24_12;
  TNode<IntPtrT> phi_bb24_13;
  TNode<IntPtrT> phi_bb24_14;
  TNode<BoolT> phi_bb24_15;
  TNode<PrimitiveHeapObject> phi_bb24_16;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_12, &phi_bb24_13, &phi_bb24_14, &phi_bb24_15, &phi_bb24_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb24_12, phi_bb24_13, phi_bb24_14, phi_bb24_15, phi_bb24_16, tmp18);
  }

  TNode<FixedArray> phi_bb25_12;
  TNode<IntPtrT> phi_bb25_13;
  TNode<IntPtrT> phi_bb25_14;
  TNode<BoolT> phi_bb25_15;
  TNode<PrimitiveHeapObject> phi_bb25_16;
  TNode<String> tmp31;
  TNode<String> tmp32;
  TNode<BoolT> tmp33;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_12, &phi_bb25_13, &phi_bb25_14, &phi_bb25_15, &phi_bb25_16);
    tmp31 = ToString_Inline_0(state_, TNode<Context>{p_context}, TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp19)});
    tmp32 = kEmptyString_0(state_);
    tmp33 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp31}, TNode<HeapObject>{tmp32});
    ca_.Branch(tmp33, &block26, std::vector<compiler::Node*>{phi_bb25_12, phi_bb25_13, phi_bb25_14, phi_bb25_15, phi_bb25_16}, &block27, std::vector<compiler::Node*>{phi_bb25_12, phi_bb25_13, phi_bb25_14, phi_bb25_15, phi_bb25_16});
  }

  TNode<FixedArray> phi_bb26_12;
  TNode<IntPtrT> phi_bb26_13;
  TNode<IntPtrT> phi_bb26_14;
  TNode<BoolT> phi_bb26_15;
  TNode<PrimitiveHeapObject> phi_bb26_16;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_12, &phi_bb26_13, &phi_bb26_14, &phi_bb26_15, &phi_bb26_16);
    ca_.Goto(&block4, phi_bb8_10, phi_bb6_11, phi_bb26_12, phi_bb26_13, phi_bb26_14, phi_bb26_15, phi_bb26_16, tmp18);
  }

  TNode<FixedArray> phi_bb27_12;
  TNode<IntPtrT> phi_bb27_13;
  TNode<IntPtrT> phi_bb27_14;
  TNode<BoolT> phi_bb27_15;
  TNode<PrimitiveHeapObject> phi_bb27_16;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_12, &phi_bb27_13, &phi_bb27_14, &phi_bb27_15, &phi_bb27_16);
    ca_.Goto(&block20, phi_bb27_12, phi_bb27_13, phi_bb27_14, phi_bb27_15, phi_bb27_16, tmp31);
  }

  TNode<FixedArray> phi_bb20_12;
  TNode<IntPtrT> phi_bb20_13;
  TNode<IntPtrT> phi_bb20_14;
  TNode<BoolT> phi_bb20_15;
  TNode<PrimitiveHeapObject> phi_bb20_16;
  TNode<String> phi_bb20_19;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_12, &phi_bb20_13, &phi_bb20_14, &phi_bb20_15, &phi_bb20_16, &phi_bb20_19);
    ca_.Goto(&block14, phi_bb20_12, phi_bb20_13, phi_bb20_14, phi_bb20_15, phi_bb20_16, phi_bb20_19);
  }

  TNode<FixedArray> phi_bb14_12;
  TNode<IntPtrT> phi_bb14_13;
  TNode<IntPtrT> phi_bb14_14;
  TNode<BoolT> phi_bb14_15;
  TNode<PrimitiveHeapObject> phi_bb14_16;
  TNode<String> phi_bb14_19;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14, &phi_bb14_15, &phi_bb14_16, &phi_bb14_19);
    ca_.Goto(&block11, phi_bb14_12, phi_bb14_13, phi_bb14_14, phi_bb14_15, phi_bb14_16, phi_bb14_19);
  }

  TNode<FixedArray> phi_bb11_12;
  TNode<IntPtrT> phi_bb11_13;
  TNode<IntPtrT> phi_bb11_14;
  TNode<BoolT> phi_bb11_15;
  TNode<PrimitiveHeapObject> phi_bb11_16;
  TNode<String> phi_bb11_19;
  TNode<IntPtrT> tmp34;
  TNode<BoolT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<BoolT> tmp37;
  TNode<BoolT> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<BoolT> tmp40;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_12, &phi_bb11_13, &phi_bb11_14, &phi_bb11_15, &phi_bb11_16, &phi_bb11_19);
    tmp34 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp35 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb11_13}, TNode<IntPtrT>{tmp34});
    tmp36 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp37 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb8_10}, TNode<IntPtrT>{tmp36});
    tmp38 = CodeStubAssembler(state_).Word32Or(TNode<BoolT>{tmp35}, TNode<BoolT>{tmp37});
    tmp39 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp40 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb8_10}, TNode<IntPtrT>{tmp39});
    ca_.Branch(tmp40, &block32, std::vector<compiler::Node*>{phi_bb11_12, phi_bb11_13, phi_bb11_14, phi_bb11_15, phi_bb11_16, phi_bb11_19, phi_bb11_19, phi_bb11_19}, &block33, std::vector<compiler::Node*>{phi_bb11_12, phi_bb11_13, phi_bb11_14, phi_bb11_15, phi_bb11_16, phi_bb11_19, phi_bb11_19, phi_bb11_19});
  }

  TNode<FixedArray> phi_bb32_12;
  TNode<IntPtrT> phi_bb32_13;
  TNode<IntPtrT> phi_bb32_14;
  TNode<BoolT> phi_bb32_15;
  TNode<PrimitiveHeapObject> phi_bb32_16;
  TNode<String> phi_bb32_19;
  TNode<String> phi_bb32_20;
  TNode<String> phi_bb32_25;
  TNode<BoolT> tmp41;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_12, &phi_bb32_13, &phi_bb32_14, &phi_bb32_15, &phi_bb32_16, &phi_bb32_19, &phi_bb32_20, &phi_bb32_25);
    tmp41 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block34, phi_bb32_12, phi_bb32_13, phi_bb32_14, phi_bb32_15, phi_bb32_16, phi_bb32_19, phi_bb32_20, phi_bb32_25, tmp41);
  }

  TNode<FixedArray> phi_bb33_12;
  TNode<IntPtrT> phi_bb33_13;
  TNode<IntPtrT> phi_bb33_14;
  TNode<BoolT> phi_bb33_15;
  TNode<PrimitiveHeapObject> phi_bb33_16;
  TNode<String> phi_bb33_19;
  TNode<String> phi_bb33_20;
  TNode<String> phi_bb33_25;
  TNode<IntPtrT> tmp42;
  TNode<BoolT> tmp43;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_12, &phi_bb33_13, &phi_bb33_14, &phi_bb33_15, &phi_bb33_16, &phi_bb33_19, &phi_bb33_20, &phi_bb33_25);
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp42});
    ca_.Goto(&block34, phi_bb33_12, phi_bb33_13, phi_bb33_14, phi_bb33_15, phi_bb33_16, phi_bb33_19, phi_bb33_20, phi_bb33_25, tmp43);
  }

  TNode<FixedArray> phi_bb34_12;
  TNode<IntPtrT> phi_bb34_13;
  TNode<IntPtrT> phi_bb34_14;
  TNode<BoolT> phi_bb34_15;
  TNode<PrimitiveHeapObject> phi_bb34_16;
  TNode<String> phi_bb34_19;
  TNode<String> phi_bb34_20;
  TNode<String> phi_bb34_25;
  TNode<BoolT> phi_bb34_38;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_12, &phi_bb34_13, &phi_bb34_14, &phi_bb34_15, &phi_bb34_16, &phi_bb34_19, &phi_bb34_20, &phi_bb34_25, &phi_bb34_38);
    ca_.Branch(phi_bb34_38, &block30, std::vector<compiler::Node*>{phi_bb34_12, phi_bb34_13, phi_bb34_14, phi_bb34_15, phi_bb34_16, phi_bb34_19, phi_bb34_20, phi_bb34_25}, &block31, std::vector<compiler::Node*>{phi_bb34_12, phi_bb34_13, phi_bb34_14, phi_bb34_15, phi_bb34_16, phi_bb34_19, phi_bb34_20, phi_bb34_25});
  }

  TNode<FixedArray> phi_bb30_12;
  TNode<IntPtrT> phi_bb30_13;
  TNode<IntPtrT> phi_bb30_14;
  TNode<BoolT> phi_bb30_15;
  TNode<PrimitiveHeapObject> phi_bb30_16;
  TNode<String> phi_bb30_19;
  TNode<String> phi_bb30_20;
  TNode<String> phi_bb30_25;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_12, &phi_bb30_13, &phi_bb30_14, &phi_bb30_15, &phi_bb30_16, &phi_bb30_19, &phi_bb30_20, &phi_bb30_25);
    ca_.Goto(&block29, phi_bb30_12, phi_bb30_13, phi_bb30_14, phi_bb30_15, phi_bb30_16, phi_bb30_19, phi_bb30_20, phi_bb30_25);
  }

  TNode<FixedArray> phi_bb31_12;
  TNode<IntPtrT> phi_bb31_13;
  TNode<IntPtrT> phi_bb31_14;
  TNode<BoolT> phi_bb31_15;
  TNode<PrimitiveHeapObject> phi_bb31_16;
  TNode<String> phi_bb31_19;
  TNode<String> phi_bb31_20;
  TNode<String> phi_bb31_25;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<BoolT> tmp46;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_12, &phi_bb31_13, &phi_bb31_14, &phi_bb31_15, &phi_bb31_16, &phi_bb31_19, &phi_bb31_20, &phi_bb31_25);
    tmp44 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{phi_bb8_10});
    tmp45 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp44}, TNode<IntPtrT>{tmp3});
    tmp46 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{phi_bb8_10});
    ca_.Branch(tmp46, &block35, std::vector<compiler::Node*>{phi_bb31_12, phi_bb31_13, phi_bb31_14, phi_bb31_15, phi_bb31_16, phi_bb31_19, phi_bb31_20, phi_bb31_25}, &block36, std::vector<compiler::Node*>{phi_bb31_12, phi_bb31_13, phi_bb31_14, phi_bb31_15, phi_bb31_16, phi_bb31_19, phi_bb31_20, phi_bb31_25});
  }

  TNode<FixedArray> phi_bb35_12;
  TNode<IntPtrT> phi_bb35_13;
  TNode<IntPtrT> phi_bb35_14;
  TNode<BoolT> phi_bb35_15;
  TNode<PrimitiveHeapObject> phi_bb35_16;
  TNode<String> phi_bb35_19;
  TNode<String> phi_bb35_20;
  TNode<String> phi_bb35_25;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_12, &phi_bb35_13, &phi_bb35_14, &phi_bb35_15, &phi_bb35_16, &phi_bb35_19, &phi_bb35_20, &phi_bb35_25);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, p_context);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb36_12;
  TNode<IntPtrT> phi_bb36_13;
  TNode<IntPtrT> phi_bb36_14;
  TNode<BoolT> phi_bb36_15;
  TNode<PrimitiveHeapObject> phi_bb36_16;
  TNode<String> phi_bb36_19;
  TNode<String> phi_bb36_20;
  TNode<String> phi_bb36_25;
  TNode<IntPtrT> tmp47;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_12, &phi_bb36_13, &phi_bb36_14, &phi_bb36_15, &phi_bb36_16, &phi_bb36_19, &phi_bb36_20, &phi_bb36_25);
    tmp47 = AddStringLength_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{phi_bb36_14}, TNode<IntPtrT>{tmp44});
    ca_.Branch(tmp38, &block37, std::vector<compiler::Node*>{phi_bb36_12, phi_bb36_13, phi_bb36_15, phi_bb36_16, phi_bb36_19, phi_bb36_20, phi_bb36_25}, &block38, std::vector<compiler::Node*>{phi_bb36_12, phi_bb36_13, phi_bb36_15, phi_bb36_16, phi_bb36_19, phi_bb36_20, phi_bb36_25});
  }

  TNode<FixedArray> phi_bb37_12;
  TNode<IntPtrT> phi_bb37_13;
  TNode<BoolT> phi_bb37_15;
  TNode<PrimitiveHeapObject> phi_bb37_16;
  TNode<String> phi_bb37_19;
  TNode<String> phi_bb37_20;
  TNode<String> phi_bb37_25;
  TNode<IntPtrT> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Smi> tmp50;
  TNode<FixedArray> tmp51;
  TNode<Null> tmp52;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_12, &phi_bb37_13, &phi_bb37_15, &phi_bb37_16, &phi_bb37_19, &phi_bb37_20, &phi_bb37_25);
    tmp48 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp49 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb37_13}, TNode<IntPtrT>{tmp48});
    tmp50 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb8_10});
    tmp51 = StoreAndGrowFixedArray_Smi_0(state_, TNode<FixedArray>{phi_bb37_12}, TNode<IntPtrT>{phi_bb37_13}, TNode<Smi>{tmp50});
    tmp52 = Null_0(state_);
    ca_.Goto(&block38, tmp51, tmp49, phi_bb37_15, tmp52, phi_bb37_19, phi_bb37_20, phi_bb37_25);
  }

  TNode<FixedArray> phi_bb38_12;
  TNode<IntPtrT> phi_bb38_13;
  TNode<BoolT> phi_bb38_15;
  TNode<PrimitiveHeapObject> phi_bb38_16;
  TNode<String> phi_bb38_19;
  TNode<String> phi_bb38_20;
  TNode<String> phi_bb38_25;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_12, &phi_bb38_13, &phi_bb38_15, &phi_bb38_16, &phi_bb38_19, &phi_bb38_20, &phi_bb38_25);
    ca_.Goto(&block29, phi_bb38_12, phi_bb38_13, tmp47, phi_bb38_15, phi_bb38_16, phi_bb38_19, phi_bb38_20, phi_bb38_25);
  }

  TNode<FixedArray> phi_bb29_12;
  TNode<IntPtrT> phi_bb29_13;
  TNode<IntPtrT> phi_bb29_14;
  TNode<BoolT> phi_bb29_15;
  TNode<PrimitiveHeapObject> phi_bb29_16;
  TNode<String> phi_bb29_19;
  TNode<String> phi_bb29_20;
  TNode<String> phi_bb29_25;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<BoolT> tmp55;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_12, &phi_bb29_13, &phi_bb29_14, &phi_bb29_15, &phi_bb29_16, &phi_bb29_19, &phi_bb29_20, &phi_bb29_25);
    tmp53 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{phi_bb29_25});
    tmp54 = AddStringLength_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{phi_bb29_14}, TNode<IntPtrT>{tmp53});
    tmp55 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{phi_bb29_25}, TNode<MaybeObject>{phi_bb29_16});
    ca_.Branch(tmp55, &block39, std::vector<compiler::Node*>{phi_bb29_12, phi_bb29_13, phi_bb29_15, phi_bb29_16, phi_bb29_19, phi_bb29_20, phi_bb29_25}, &block40, std::vector<compiler::Node*>{phi_bb29_12, phi_bb29_13, phi_bb29_15, phi_bb29_16, phi_bb29_19, phi_bb29_20, phi_bb29_25});
  }

  TNode<FixedArray> phi_bb39_12;
  TNode<IntPtrT> phi_bb39_13;
  TNode<BoolT> phi_bb39_15;
  TNode<PrimitiveHeapObject> phi_bb39_16;
  TNode<String> phi_bb39_19;
  TNode<String> phi_bb39_20;
  TNode<String> phi_bb39_25;
  TNode<Object> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<UintPtrT> tmp61;
  TNode<UintPtrT> tmp62;
  TNode<BoolT> tmp63;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_12, &phi_bb39_13, &phi_bb39_15, &phi_bb39_16, &phi_bb39_19, &phi_bb39_20, &phi_bb39_25);
    std::tie(tmp56, tmp57, tmp58) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb39_12}).Flatten();
    tmp59 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp60 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb39_13}, TNode<IntPtrT>{tmp59});
    tmp61 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp60});
    tmp62 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp58});
    tmp63 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp61}, TNode<UintPtrT>{tmp62});
    ca_.Branch(tmp63, &block51, std::vector<compiler::Node*>{phi_bb39_12, phi_bb39_13, phi_bb39_15, phi_bb39_16, phi_bb39_19, phi_bb39_20, phi_bb39_25, phi_bb39_12}, &block52, std::vector<compiler::Node*>{phi_bb39_12, phi_bb39_13, phi_bb39_15, phi_bb39_16, phi_bb39_19, phi_bb39_20, phi_bb39_25, phi_bb39_12});
  }

  TNode<FixedArray> phi_bb51_12;
  TNode<IntPtrT> phi_bb51_13;
  TNode<BoolT> phi_bb51_15;
  TNode<PrimitiveHeapObject> phi_bb51_16;
  TNode<String> phi_bb51_19;
  TNode<String> phi_bb51_20;
  TNode<String> phi_bb51_25;
  TNode<FixedArray> phi_bb51_29;
  TNode<IntPtrT> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<Object> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<Object> tmp68;
  TNode<HeapObject> tmp69;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_12, &phi_bb51_13, &phi_bb51_15, &phi_bb51_16, &phi_bb51_19, &phi_bb51_20, &phi_bb51_25, &phi_bb51_29);
    tmp64 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp60});
    tmp65 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp57}, TNode<IntPtrT>{tmp64});
    std::tie(tmp66, tmp67) = NewReference_Object_0(state_, TNode<Object>{tmp56}, TNode<IntPtrT>{tmp65}).Flatten();
    tmp68 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp66, tmp67});
    compiler::CodeAssemblerLabel label70(&ca_);
    tmp69 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp68}, &label70);
    ca_.Goto(&block58, phi_bb51_12, phi_bb51_13, phi_bb51_15, phi_bb51_16, phi_bb51_19, phi_bb51_20, phi_bb51_25);
    if (label70.is_used()) {
      ca_.Bind(&label70);
      ca_.Goto(&block59, phi_bb51_12, phi_bb51_13, phi_bb51_15, phi_bb51_16, phi_bb51_19, phi_bb51_20, phi_bb51_25);
    }
  }

  TNode<FixedArray> phi_bb52_12;
  TNode<IntPtrT> phi_bb52_13;
  TNode<BoolT> phi_bb52_15;
  TNode<PrimitiveHeapObject> phi_bb52_16;
  TNode<String> phi_bb52_19;
  TNode<String> phi_bb52_20;
  TNode<String> phi_bb52_25;
  TNode<FixedArray> phi_bb52_29;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_12, &phi_bb52_13, &phi_bb52_15, &phi_bb52_16, &phi_bb52_19, &phi_bb52_20, &phi_bb52_25, &phi_bb52_29);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb59_12;
  TNode<IntPtrT> phi_bb59_13;
  TNode<BoolT> phi_bb59_15;
  TNode<PrimitiveHeapObject> phi_bb59_16;
  TNode<String> phi_bb59_19;
  TNode<String> phi_bb59_20;
  TNode<String> phi_bb59_25;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_12, &phi_bb59_13, &phi_bb59_15, &phi_bb59_16, &phi_bb59_19, &phi_bb59_20, &phi_bb59_25);
    ca_.Goto(&block56, phi_bb59_12, phi_bb59_13, phi_bb59_15, phi_bb59_16, phi_bb59_19, phi_bb59_20, phi_bb59_25);
  }

  TNode<FixedArray> phi_bb58_12;
  TNode<IntPtrT> phi_bb58_13;
  TNode<BoolT> phi_bb58_15;
  TNode<PrimitiveHeapObject> phi_bb58_16;
  TNode<String> phi_bb58_19;
  TNode<String> phi_bb58_20;
  TNode<String> phi_bb58_25;
  TNode<String> tmp71;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_12, &phi_bb58_13, &phi_bb58_15, &phi_bb58_16, &phi_bb58_19, &phi_bb58_20, &phi_bb58_25);
    compiler::CodeAssemblerLabel label72(&ca_);
    tmp71 = Cast_String_0(state_, TNode<HeapObject>{tmp69}, &label72);
    ca_.Goto(&block60, phi_bb58_12, phi_bb58_13, phi_bb58_15, phi_bb58_16, phi_bb58_19, phi_bb58_20, phi_bb58_25);
    if (label72.is_used()) {
      ca_.Bind(&label72);
      ca_.Goto(&block61, phi_bb58_12, phi_bb58_13, phi_bb58_15, phi_bb58_16, phi_bb58_19, phi_bb58_20, phi_bb58_25);
    }
  }

  TNode<FixedArray> phi_bb61_12;
  TNode<IntPtrT> phi_bb61_13;
  TNode<BoolT> phi_bb61_15;
  TNode<PrimitiveHeapObject> phi_bb61_16;
  TNode<String> phi_bb61_19;
  TNode<String> phi_bb61_20;
  TNode<String> phi_bb61_25;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_12, &phi_bb61_13, &phi_bb61_15, &phi_bb61_16, &phi_bb61_19, &phi_bb61_20, &phi_bb61_25);
    ca_.Goto(&block56, phi_bb61_12, phi_bb61_13, phi_bb61_15, phi_bb61_16, phi_bb61_19, phi_bb61_20, phi_bb61_25);
  }

  TNode<FixedArray> phi_bb60_12;
  TNode<IntPtrT> phi_bb60_13;
  TNode<BoolT> phi_bb60_15;
  TNode<PrimitiveHeapObject> phi_bb60_16;
  TNode<String> phi_bb60_19;
  TNode<String> phi_bb60_20;
  TNode<String> phi_bb60_25;
  TNode<IntPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<Smi> tmp75;
  TNode<FixedArray> tmp76;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_12, &phi_bb60_13, &phi_bb60_15, &phi_bb60_16, &phi_bb60_19, &phi_bb60_20, &phi_bb60_25);
    tmp73 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp74 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb60_13}, TNode<IntPtrT>{tmp73});
    tmp75 = SmiConstant_0(state_, IntegerLiteral(true, 0x1ull));
    tmp76 = StoreAndGrowFixedArray_Smi_0(state_, TNode<FixedArray>{phi_bb60_12}, TNode<IntPtrT>{phi_bb60_13}, TNode<Smi>{tmp75});
    ca_.Goto(&block55, tmp76, tmp74, phi_bb60_15, phi_bb60_16, phi_bb60_19, phi_bb60_20, phi_bb60_25);
  }

  TNode<FixedArray> phi_bb56_12;
  TNode<IntPtrT> phi_bb56_13;
  TNode<BoolT> phi_bb56_15;
  TNode<PrimitiveHeapObject> phi_bb56_16;
  TNode<String> phi_bb56_19;
  TNode<String> phi_bb56_20;
  TNode<String> phi_bb56_25;
  TNode<Smi> tmp77;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_12, &phi_bb56_13, &phi_bb56_15, &phi_bb56_16, &phi_bb56_19, &phi_bb56_20, &phi_bb56_25);
    compiler::CodeAssemblerLabel label78(&ca_);
    tmp77 = Cast_Smi_0(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp68)}, &label78);
    ca_.Goto(&block64, phi_bb56_12, phi_bb56_13, phi_bb56_15, phi_bb56_16, phi_bb56_19, phi_bb56_20, phi_bb56_25);
    if (label78.is_used()) {
      ca_.Bind(&label78);
      ca_.Goto(&block65, phi_bb56_12, phi_bb56_13, phi_bb56_15, phi_bb56_16, phi_bb56_19, phi_bb56_20, phi_bb56_25);
    }
  }

  TNode<FixedArray> phi_bb65_12;
  TNode<IntPtrT> phi_bb65_13;
  TNode<BoolT> phi_bb65_15;
  TNode<PrimitiveHeapObject> phi_bb65_16;
  TNode<String> phi_bb65_19;
  TNode<String> phi_bb65_20;
  TNode<String> phi_bb65_25;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_12, &phi_bb65_13, &phi_bb65_15, &phi_bb65_16, &phi_bb65_19, &phi_bb65_20, &phi_bb65_25);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb64_12;
  TNode<IntPtrT> phi_bb64_13;
  TNode<BoolT> phi_bb64_15;
  TNode<PrimitiveHeapObject> phi_bb64_16;
  TNode<String> phi_bb64_19;
  TNode<String> phi_bb64_20;
  TNode<String> phi_bb64_25;
  TNode<Object> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<UintPtrT> tmp84;
  TNode<UintPtrT> tmp85;
  TNode<BoolT> tmp86;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_12, &phi_bb64_13, &phi_bb64_15, &phi_bb64_16, &phi_bb64_19, &phi_bb64_20, &phi_bb64_25);
    std::tie(tmp79, tmp80, tmp81) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb64_12}).Flatten();
    tmp82 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp83 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb64_13}, TNode<IntPtrT>{tmp82});
    tmp84 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp83});
    tmp85 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp81});
    tmp86 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp84}, TNode<UintPtrT>{tmp85});
    ca_.Branch(tmp86, &block78, std::vector<compiler::Node*>{phi_bb64_12, phi_bb64_13, phi_bb64_15, phi_bb64_16, phi_bb64_19, phi_bb64_20, phi_bb64_25, phi_bb64_12}, &block79, std::vector<compiler::Node*>{phi_bb64_12, phi_bb64_13, phi_bb64_15, phi_bb64_16, phi_bb64_19, phi_bb64_20, phi_bb64_25, phi_bb64_12});
  }

  TNode<FixedArray> phi_bb78_12;
  TNode<IntPtrT> phi_bb78_13;
  TNode<BoolT> phi_bb78_15;
  TNode<PrimitiveHeapObject> phi_bb78_16;
  TNode<String> phi_bb78_19;
  TNode<String> phi_bb78_20;
  TNode<String> phi_bb78_25;
  TNode<FixedArray> phi_bb78_31;
  TNode<IntPtrT> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<Object> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<Smi> tmp91;
  TNode<Smi> tmp92;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_12, &phi_bb78_13, &phi_bb78_15, &phi_bb78_16, &phi_bb78_19, &phi_bb78_20, &phi_bb78_25, &phi_bb78_31);
    tmp87 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp83});
    tmp88 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp80}, TNode<IntPtrT>{tmp87});
    std::tie(tmp89, tmp90) = NewReference_Object_0(state_, TNode<Object>{tmp79}, TNode<IntPtrT>{tmp88}).Flatten();
    tmp91 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp92 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp77}, TNode<Smi>{tmp91});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp89, tmp90}, tmp92);
    ca_.Goto(&block55, phi_bb78_12, phi_bb78_13, phi_bb78_15, phi_bb78_16, phi_bb78_19, phi_bb78_20, phi_bb78_25);
  }

  TNode<FixedArray> phi_bb79_12;
  TNode<IntPtrT> phi_bb79_13;
  TNode<BoolT> phi_bb79_15;
  TNode<PrimitiveHeapObject> phi_bb79_16;
  TNode<String> phi_bb79_19;
  TNode<String> phi_bb79_20;
  TNode<String> phi_bb79_25;
  TNode<FixedArray> phi_bb79_31;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_12, &phi_bb79_13, &phi_bb79_15, &phi_bb79_16, &phi_bb79_19, &phi_bb79_20, &phi_bb79_25, &phi_bb79_31);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb55_12;
  TNode<IntPtrT> phi_bb55_13;
  TNode<BoolT> phi_bb55_15;
  TNode<PrimitiveHeapObject> phi_bb55_16;
  TNode<String> phi_bb55_19;
  TNode<String> phi_bb55_20;
  TNode<String> phi_bb55_25;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_12, &phi_bb55_13, &phi_bb55_15, &phi_bb55_16, &phi_bb55_19, &phi_bb55_20, &phi_bb55_25);
    ca_.Goto(&block41, phi_bb55_12, phi_bb55_13, phi_bb55_15, phi_bb55_16, phi_bb55_19, phi_bb55_20, phi_bb55_25);
  }

  TNode<FixedArray> phi_bb40_12;
  TNode<IntPtrT> phi_bb40_13;
  TNode<BoolT> phi_bb40_15;
  TNode<PrimitiveHeapObject> phi_bb40_16;
  TNode<String> phi_bb40_19;
  TNode<String> phi_bb40_20;
  TNode<String> phi_bb40_25;
  TNode<IntPtrT> tmp93;
  TNode<IntPtrT> tmp94;
  TNode<FixedArray> tmp95;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_12, &phi_bb40_13, &phi_bb40_15, &phi_bb40_16, &phi_bb40_19, &phi_bb40_20, &phi_bb40_25);
    tmp93 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp94 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb40_13}, TNode<IntPtrT>{tmp93});
    tmp95 = StoreAndGrowFixedArray_String_0(state_, TNode<FixedArray>{phi_bb40_12}, TNode<IntPtrT>{phi_bb40_13}, TNode<String>{phi_bb40_25});
    ca_.Goto(&block41, tmp95, tmp94, phi_bb40_15, phi_bb40_25, phi_bb40_19, phi_bb40_20, phi_bb40_25);
  }

  TNode<FixedArray> phi_bb41_12;
  TNode<IntPtrT> phi_bb41_13;
  TNode<BoolT> phi_bb41_15;
  TNode<PrimitiveHeapObject> phi_bb41_16;
  TNode<String> phi_bb41_19;
  TNode<String> phi_bb41_20;
  TNode<String> phi_bb41_25;
  TNode<Uint16T> tmp96;
  TNode<BoolT> tmp97;
  TNode<BoolT> tmp98;
  TNode<IntPtrT> tmp99;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_12, &phi_bb41_13, &phi_bb41_15, &phi_bb41_16, &phi_bb41_19, &phi_bb41_20, &phi_bb41_25);
    tmp96 = CodeStubAssembler(state_).LoadInstanceType(TNode<HeapObject>{phi_bb41_25});
    tmp97 = CodeStubAssembler(state_).IsOneByteStringInstanceType(TNode<Uint16T>{tmp96});
    tmp98 = CodeStubAssembler(state_).Word32And(TNode<BoolT>{tmp97}, TNode<BoolT>{phi_bb41_15});
    tmp99 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block4, tmp99, phi_bb6_11, phi_bb41_12, phi_bb41_13, tmp54, tmp98, phi_bb41_16, tmp18);
  }

  TNode<IntPtrT> phi_bb3_10;
  TNode<BuiltinPtr> phi_bb3_11;
  TNode<FixedArray> phi_bb3_12;
  TNode<IntPtrT> phi_bb3_13;
  TNode<IntPtrT> phi_bb3_14;
  TNode<BoolT> phi_bb3_15;
  TNode<PrimitiveHeapObject> phi_bb3_16;
  TNode<UintPtrT> phi_bb3_17;
  TNode<BoolT> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<BoolT> tmp102;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_10, &phi_bb3_11, &phi_bb3_12, &phi_bb3_13, &phi_bb3_14, &phi_bb3_15, &phi_bb3_16, &phi_bb3_17);
    tmp100 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp101 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp102 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb3_10}, TNode<IntPtrT>{tmp101});
    ca_.Branch(tmp102, &block85, std::vector<compiler::Node*>{phi_bb3_10, phi_bb3_11, phi_bb3_12, phi_bb3_13, phi_bb3_14, phi_bb3_15, phi_bb3_16, phi_bb3_17, phi_bb3_10, phi_bb3_10}, &block86, std::vector<compiler::Node*>{phi_bb3_10, phi_bb3_11, phi_bb3_12, phi_bb3_13, phi_bb3_14, phi_bb3_15, phi_bb3_16, phi_bb3_17, phi_bb3_10, phi_bb3_10});
  }

  TNode<IntPtrT> phi_bb85_10;
  TNode<BuiltinPtr> phi_bb85_11;
  TNode<FixedArray> phi_bb85_12;
  TNode<IntPtrT> phi_bb85_13;
  TNode<IntPtrT> phi_bb85_14;
  TNode<BoolT> phi_bb85_15;
  TNode<PrimitiveHeapObject> phi_bb85_16;
  TNode<UintPtrT> phi_bb85_17;
  TNode<IntPtrT> phi_bb85_18;
  TNode<IntPtrT> phi_bb85_22;
  TNode<BoolT> tmp103;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_10, &phi_bb85_11, &phi_bb85_12, &phi_bb85_13, &phi_bb85_14, &phi_bb85_15, &phi_bb85_16, &phi_bb85_17, &phi_bb85_18, &phi_bb85_22);
    tmp103 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block87, phi_bb85_10, phi_bb85_11, phi_bb85_12, phi_bb85_13, phi_bb85_14, phi_bb85_15, phi_bb85_16, phi_bb85_17, phi_bb85_18, phi_bb85_22, tmp103);
  }

  TNode<IntPtrT> phi_bb86_10;
  TNode<BuiltinPtr> phi_bb86_11;
  TNode<FixedArray> phi_bb86_12;
  TNode<IntPtrT> phi_bb86_13;
  TNode<IntPtrT> phi_bb86_14;
  TNode<BoolT> phi_bb86_15;
  TNode<PrimitiveHeapObject> phi_bb86_16;
  TNode<UintPtrT> phi_bb86_17;
  TNode<IntPtrT> phi_bb86_18;
  TNode<IntPtrT> phi_bb86_22;
  TNode<IntPtrT> tmp104;
  TNode<BoolT> tmp105;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_10, &phi_bb86_11, &phi_bb86_12, &phi_bb86_13, &phi_bb86_14, &phi_bb86_15, &phi_bb86_16, &phi_bb86_17, &phi_bb86_18, &phi_bb86_22);
    tmp104 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp105 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp104});
    ca_.Goto(&block87, phi_bb86_10, phi_bb86_11, phi_bb86_12, phi_bb86_13, phi_bb86_14, phi_bb86_15, phi_bb86_16, phi_bb86_17, phi_bb86_18, phi_bb86_22, tmp105);
  }

  TNode<IntPtrT> phi_bb87_10;
  TNode<BuiltinPtr> phi_bb87_11;
  TNode<FixedArray> phi_bb87_12;
  TNode<IntPtrT> phi_bb87_13;
  TNode<IntPtrT> phi_bb87_14;
  TNode<BoolT> phi_bb87_15;
  TNode<PrimitiveHeapObject> phi_bb87_16;
  TNode<UintPtrT> phi_bb87_17;
  TNode<IntPtrT> phi_bb87_18;
  TNode<IntPtrT> phi_bb87_22;
  TNode<BoolT> phi_bb87_26;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_10, &phi_bb87_11, &phi_bb87_12, &phi_bb87_13, &phi_bb87_14, &phi_bb87_15, &phi_bb87_16, &phi_bb87_17, &phi_bb87_18, &phi_bb87_22, &phi_bb87_26);
    ca_.Branch(phi_bb87_26, &block83, std::vector<compiler::Node*>{phi_bb87_10, phi_bb87_11, phi_bb87_12, phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_17, phi_bb87_18, phi_bb87_22}, &block84, std::vector<compiler::Node*>{phi_bb87_10, phi_bb87_11, phi_bb87_12, phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_17, phi_bb87_18, phi_bb87_22});
  }

  TNode<IntPtrT> phi_bb83_10;
  TNode<BuiltinPtr> phi_bb83_11;
  TNode<FixedArray> phi_bb83_12;
  TNode<IntPtrT> phi_bb83_13;
  TNode<IntPtrT> phi_bb83_14;
  TNode<BoolT> phi_bb83_15;
  TNode<PrimitiveHeapObject> phi_bb83_16;
  TNode<UintPtrT> phi_bb83_17;
  TNode<IntPtrT> phi_bb83_18;
  TNode<IntPtrT> phi_bb83_22;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_10, &phi_bb83_11, &phi_bb83_12, &phi_bb83_13, &phi_bb83_14, &phi_bb83_15, &phi_bb83_16, &phi_bb83_17, &phi_bb83_18, &phi_bb83_22);
    ca_.Goto(&block82, phi_bb83_10, phi_bb83_11, phi_bb83_12, phi_bb83_13, phi_bb83_14, phi_bb83_15, phi_bb83_16, phi_bb83_17, phi_bb83_18, phi_bb83_22);
  }

  TNode<IntPtrT> phi_bb84_10;
  TNode<BuiltinPtr> phi_bb84_11;
  TNode<FixedArray> phi_bb84_12;
  TNode<IntPtrT> phi_bb84_13;
  TNode<IntPtrT> phi_bb84_14;
  TNode<BoolT> phi_bb84_15;
  TNode<PrimitiveHeapObject> phi_bb84_16;
  TNode<UintPtrT> phi_bb84_17;
  TNode<IntPtrT> phi_bb84_18;
  TNode<IntPtrT> phi_bb84_22;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<BoolT> tmp108;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_10, &phi_bb84_11, &phi_bb84_12, &phi_bb84_13, &phi_bb84_14, &phi_bb84_15, &phi_bb84_16, &phi_bb84_17, &phi_bb84_18, &phi_bb84_22);
    tmp106 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{phi_bb84_22});
    tmp107 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp106}, TNode<IntPtrT>{tmp3});
    tmp108 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp107}, TNode<IntPtrT>{phi_bb84_22});
    ca_.Branch(tmp108, &block88, std::vector<compiler::Node*>{phi_bb84_10, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_16, phi_bb84_17, phi_bb84_18, phi_bb84_22, phi_bb84_22}, &block89, std::vector<compiler::Node*>{phi_bb84_10, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_16, phi_bb84_17, phi_bb84_18, phi_bb84_22, phi_bb84_22});
  }

  TNode<IntPtrT> phi_bb88_10;
  TNode<BuiltinPtr> phi_bb88_11;
  TNode<FixedArray> phi_bb88_12;
  TNode<IntPtrT> phi_bb88_13;
  TNode<IntPtrT> phi_bb88_14;
  TNode<BoolT> phi_bb88_15;
  TNode<PrimitiveHeapObject> phi_bb88_16;
  TNode<UintPtrT> phi_bb88_17;
  TNode<IntPtrT> phi_bb88_18;
  TNode<IntPtrT> phi_bb88_22;
  TNode<IntPtrT> phi_bb88_25;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_10, &phi_bb88_11, &phi_bb88_12, &phi_bb88_13, &phi_bb88_14, &phi_bb88_15, &phi_bb88_16, &phi_bb88_17, &phi_bb88_18, &phi_bb88_22, &phi_bb88_25);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, p_context);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb89_10;
  TNode<BuiltinPtr> phi_bb89_11;
  TNode<FixedArray> phi_bb89_12;
  TNode<IntPtrT> phi_bb89_13;
  TNode<IntPtrT> phi_bb89_14;
  TNode<BoolT> phi_bb89_15;
  TNode<PrimitiveHeapObject> phi_bb89_16;
  TNode<UintPtrT> phi_bb89_17;
  TNode<IntPtrT> phi_bb89_18;
  TNode<IntPtrT> phi_bb89_22;
  TNode<IntPtrT> phi_bb89_25;
  TNode<IntPtrT> tmp109;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_10, &phi_bb89_11, &phi_bb89_12, &phi_bb89_13, &phi_bb89_14, &phi_bb89_15, &phi_bb89_16, &phi_bb89_17, &phi_bb89_18, &phi_bb89_22, &phi_bb89_25);
    tmp109 = AddStringLength_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{phi_bb89_14}, TNode<IntPtrT>{tmp106});
    ca_.Branch(tmp100, &block90, std::vector<compiler::Node*>{phi_bb89_10, phi_bb89_11, phi_bb89_12, phi_bb89_13, phi_bb89_15, phi_bb89_16, phi_bb89_17, phi_bb89_18, phi_bb89_22, phi_bb89_25}, &block91, std::vector<compiler::Node*>{phi_bb89_10, phi_bb89_11, phi_bb89_12, phi_bb89_13, phi_bb89_15, phi_bb89_16, phi_bb89_17, phi_bb89_18, phi_bb89_22, phi_bb89_25});
  }

  TNode<IntPtrT> phi_bb90_10;
  TNode<BuiltinPtr> phi_bb90_11;
  TNode<FixedArray> phi_bb90_12;
  TNode<IntPtrT> phi_bb90_13;
  TNode<BoolT> phi_bb90_15;
  TNode<PrimitiveHeapObject> phi_bb90_16;
  TNode<UintPtrT> phi_bb90_17;
  TNode<IntPtrT> phi_bb90_18;
  TNode<IntPtrT> phi_bb90_22;
  TNode<IntPtrT> phi_bb90_25;
  TNode<IntPtrT> tmp110;
  TNode<IntPtrT> tmp111;
  TNode<Smi> tmp112;
  TNode<FixedArray> tmp113;
  TNode<Null> tmp114;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_10, &phi_bb90_11, &phi_bb90_12, &phi_bb90_13, &phi_bb90_15, &phi_bb90_16, &phi_bb90_17, &phi_bb90_18, &phi_bb90_22, &phi_bb90_25);
    tmp110 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp111 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb90_13}, TNode<IntPtrT>{tmp110});
    tmp112 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb90_25});
    tmp113 = StoreAndGrowFixedArray_Smi_0(state_, TNode<FixedArray>{phi_bb90_12}, TNode<IntPtrT>{phi_bb90_13}, TNode<Smi>{tmp112});
    tmp114 = Null_0(state_);
    ca_.Goto(&block91, phi_bb90_10, phi_bb90_11, tmp113, tmp111, phi_bb90_15, tmp114, phi_bb90_17, phi_bb90_18, phi_bb90_22, phi_bb90_25);
  }

  TNode<IntPtrT> phi_bb91_10;
  TNode<BuiltinPtr> phi_bb91_11;
  TNode<FixedArray> phi_bb91_12;
  TNode<IntPtrT> phi_bb91_13;
  TNode<BoolT> phi_bb91_15;
  TNode<PrimitiveHeapObject> phi_bb91_16;
  TNode<UintPtrT> phi_bb91_17;
  TNode<IntPtrT> phi_bb91_18;
  TNode<IntPtrT> phi_bb91_22;
  TNode<IntPtrT> phi_bb91_25;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_10, &phi_bb91_11, &phi_bb91_12, &phi_bb91_13, &phi_bb91_15, &phi_bb91_16, &phi_bb91_17, &phi_bb91_18, &phi_bb91_22, &phi_bb91_25);
    ca_.Goto(&block82, phi_bb91_10, phi_bb91_11, phi_bb91_12, phi_bb91_13, tmp109, phi_bb91_15, phi_bb91_16, phi_bb91_17, phi_bb91_18, phi_bb91_22);
  }

  TNode<IntPtrT> phi_bb82_10;
  TNode<BuiltinPtr> phi_bb82_11;
  TNode<FixedArray> phi_bb82_12;
  TNode<IntPtrT> phi_bb82_13;
  TNode<IntPtrT> phi_bb82_14;
  TNode<BoolT> phi_bb82_15;
  TNode<PrimitiveHeapObject> phi_bb82_16;
  TNode<UintPtrT> phi_bb82_17;
  TNode<IntPtrT> phi_bb82_18;
  TNode<IntPtrT> phi_bb82_22;
  TNode<String> tmp115;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_10, &phi_bb82_11, &phi_bb82_12, &phi_bb82_13, &phi_bb82_14, &phi_bb82_15, &phi_bb82_16, &phi_bb82_17, &phi_bb82_18, &phi_bb82_22);
    tmp115 = BufferJoin_0(state_, TNode<Context>{p_context}, TorqueStructBuffer_0{TNode<FixedArray>{phi_bb82_12}, TNode<IntPtrT>{phi_bb82_13}, TNode<IntPtrT>{phi_bb82_14}, TNode<BoolT>{phi_bb82_15}, TNode<PrimitiveHeapObject>{phi_bb82_16}}, TNode<String>{p_sep});
    ca_.Goto(&block92);
  }

    ca_.Bind(&block92);
  return TNode<String>{tmp115};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=513&c=16
TorqueStructReference_Undefined_OR_FixedArray_0 NativeContextSlot_Context_Undefined_OR_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = NativeContextSlot_Undefined_OR_FixedArray_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{p_index}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_Undefined_OR_FixedArray_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=549&c=7
TNode<FixedArray> StoreAndGrowFixedArray_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_fixedArray, TNode<IntPtrT> p_index, TNode<JSReceiver> p_element) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{p_fixedArray});
    tmp1 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{p_index}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    std::tie(tmp2, tmp3, tmp4) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_fixedArray}).Flatten();
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp7 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp7, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp8 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp8});
    std::tie(tmp10, tmp11) = NewReference_Object_0(state_, TNode<Object>{tmp2}, TNode<IntPtrT>{tmp9}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, p_element);
    ca_.Goto(&block1, p_fixedArray);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp12;
  TNode<Hole> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<FixedArray> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = CodeStubAssembler(state_).CalculateNewElementsCapacity(TNode<IntPtrT>{tmp0});
    tmp13 = TheHole_0(state_);
    tmp14 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = ExtractFixedArray_0(state_, TNode<FixedArray>{p_fixedArray}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp12}, TNode<Hole>{tmp13});
    std::tie(tmp16, tmp17, tmp18) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp15}).Flatten();
    tmp19 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Branch(tmp21, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp22 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp22});
    std::tie(tmp24, tmp25) = NewReference_Object_0(state_, TNode<Object>{tmp16}, TNode<IntPtrT>{tmp23}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp24, tmp25}, p_element);
    ca_.Goto(&block1, tmp15);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block29);
  }

    ca_.Bind(&block29);
  return TNode<FixedArray>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=660&c=10
TNode<Object> CycleProtectedArrayJoin_JSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Object> p_sepObj, TNode<Object> p_locales, TNode<Object> p_options) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Undefined> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_sepObj}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_String_constexpr_string_0(state_, ",");
    ca_.Goto(&block4, tmp2);
  }

  TNode<String> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{p_sepObj});
    ca_.Goto(&block4, tmp3);
  }

  TNode<String> phi_bb4_6;
  TNode<Number> tmp4;
  TNode<BoolT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6);
    tmp4 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = NumberIsGreaterThan_0(state_, TNode<Number>{p_len}, TNode<Number>{tmp4});
    ca_.Branch(tmp5, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp6 = JoinStackPushInline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    ca_.Goto(&block10, tmp6);
  }

  TNode<BoolT> tmp7;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block10, tmp7);
  }

  TNode<BoolT> phi_bb10_8;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_8);
    ca_.Branch(phi_bb10_8, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp8;
      TNode<Object> tmp10;
      TNode<Object> tmp12;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerExceptionHandlerLabel catch9__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch9__label);
    tmp8 = ArrayJoin_JSArray_0(state_, TNode<Context>{p_context}, p_useToLocaleString, TNode<JSReceiver>{p_o}, TNode<String>{phi_bb4_6}, TNode<Number>{p_len}, TNode<Object>{p_locales}, TNode<Object>{p_options});
    }
    if (catch9__label.is_used()) {
      compiler::CodeAssemblerLabel catch9_skip(&ca_);
      ca_.Goto(&catch9_skip);
      ca_.Bind(&catch9__label, &tmp10);
      ca_.Goto(&block14);
      ca_.Bind(&catch9_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    JoinStackPopInline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block15);
      ca_.Bind(&catch11_skip);
    }
    ca_.Goto(&block1, tmp8);
  }

  TNode<HeapObject> tmp13;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp13 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp10, tmp13);
  }

  TNode<HeapObject> tmp14;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp14 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp12, tmp14);
  }

  TNode<Object> phi_bb13_7;
  TNode<HeapObject> phi_bb13_8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8);
    JoinStackPopInline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, p_context, phi_bb13_7, phi_bb13_8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> tmp15;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp15 = kEmptyString_0(state_);
    ca_.Goto(&block1, tmp15);
  }

  TNode<Object> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block16);
  }

    ca_.Bind(&block16);
  return TNode<Object>{phi_bb1_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=716&c=10
TNode<Object> CycleProtectedArrayJoin_JSTypedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_useToLocaleString, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Object> p_sepObj, TNode<Object> p_locales, TNode<Object> p_options) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Undefined> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Undefined_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_sepObj}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_String_constexpr_string_0(state_, ",");
    ca_.Goto(&block4, tmp2);
  }

  TNode<String> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{p_sepObj});
    ca_.Goto(&block4, tmp3);
  }

  TNode<String> phi_bb4_6;
  TNode<Number> tmp4;
  TNode<BoolT> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6);
    tmp4 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = NumberIsGreaterThan_0(state_, TNode<Number>{p_len}, TNode<Number>{tmp4});
    ca_.Branch(tmp5, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp6 = JoinStackPushInline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    ca_.Goto(&block10, tmp6);
  }

  TNode<BoolT> tmp7;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block10, tmp7);
  }

  TNode<BoolT> phi_bb10_8;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_8);
    ca_.Branch(phi_bb10_8, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp8;
      TNode<Object> tmp10;
      TNode<Object> tmp12;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerExceptionHandlerLabel catch9__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch9__label);
    tmp8 = ArrayJoin_JSTypedArray_0(state_, TNode<Context>{p_context}, p_useToLocaleString, TNode<JSReceiver>{p_o}, TNode<String>{phi_bb4_6}, TNode<Number>{p_len}, TNode<Object>{p_locales}, TNode<Object>{p_options});
    }
    if (catch9__label.is_used()) {
      compiler::CodeAssemblerLabel catch9_skip(&ca_);
      ca_.Goto(&catch9_skip);
      ca_.Bind(&catch9__label, &tmp10);
      ca_.Goto(&block14);
      ca_.Bind(&catch9_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch11__label);
    JoinStackPopInline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      ca_.Bind(&catch11__label, &tmp12);
      ca_.Goto(&block15);
      ca_.Bind(&catch11_skip);
    }
    ca_.Goto(&block1, tmp8);
  }

  TNode<HeapObject> tmp13;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp13 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp10, tmp13);
  }

  TNode<HeapObject> tmp14;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp14 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block13, tmp12, tmp14);
  }

  TNode<Object> phi_bb13_7;
  TNode<HeapObject> phi_bb13_8;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8);
    JoinStackPopInline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_o});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, p_context, phi_bb13_7, phi_bb13_8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> tmp15;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp15 = kEmptyString_0(state_);
    ca_.Goto(&block1, tmp15);
  }

  TNode<Object> phi_bb1_6;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6);
    ca_.Goto(&block16);
  }

    ca_.Bind(&block16);
  return TNode<Object>{phi_bb1_6};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=209&c=27
TNode<FixedArray> StoreAndGrowFixedArray_Smi_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_fixedArray, TNode<IntPtrT> p_index, TNode<Smi> p_element) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{p_fixedArray});
    tmp1 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{p_index}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    std::tie(tmp2, tmp3, tmp4) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_fixedArray}).Flatten();
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp7 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp7, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp8 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp8});
    std::tie(tmp10, tmp11) = NewReference_Object_0(state_, TNode<Object>{tmp2}, TNode<IntPtrT>{tmp9}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, p_element);
    ca_.Goto(&block1, p_fixedArray);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp12;
  TNode<Hole> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<FixedArray> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = CodeStubAssembler(state_).CalculateNewElementsCapacity(TNode<IntPtrT>{tmp0});
    tmp13 = TheHole_0(state_);
    tmp14 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = ExtractFixedArray_0(state_, TNode<FixedArray>{p_fixedArray}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp12}, TNode<Hole>{tmp13});
    std::tie(tmp16, tmp17, tmp18) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp15}).Flatten();
    tmp19 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Branch(tmp21, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp22 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp22});
    std::tie(tmp24, tmp25) = NewReference_Object_0(state_, TNode<Object>{tmp16}, TNode<IntPtrT>{tmp23}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp24, tmp25}, p_element);
    ca_.Goto(&block1, tmp15);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block29);
  }

    ca_.Bind(&block29);
  return TNode<FixedArray>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-join.tq?l=187&c=11
TNode<FixedArray> StoreAndGrowFixedArray_String_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_fixedArray, TNode<IntPtrT> p_index, TNode<String> p_element) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{p_fixedArray});
    tmp1 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{p_index}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    std::tie(tmp2, tmp3, tmp4) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{p_fixedArray}).Flatten();
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp7 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp7, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp8 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp8});
    std::tie(tmp10, tmp11) = NewReference_Object_0(state_, TNode<Object>{tmp2}, TNode<IntPtrT>{tmp9}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, p_element);
    ca_.Goto(&block1, p_fixedArray);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp12;
  TNode<Hole> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<FixedArray> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<UintPtrT> tmp20;
  TNode<BoolT> tmp21;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = CodeStubAssembler(state_).CalculateNewElementsCapacity(TNode<IntPtrT>{tmp0});
    tmp13 = TheHole_0(state_);
    tmp14 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = ExtractFixedArray_0(state_, TNode<FixedArray>{p_fixedArray}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp12}, TNode<Hole>{tmp13});
    std::tie(tmp16, tmp17, tmp18) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp15}).Flatten();
    tmp19 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp20 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp18});
    tmp21 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp20});
    ca_.Branch(tmp21, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp22 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp22});
    std::tie(tmp24, tmp25) = NewReference_Object_0(state_, TNode<Object>{tmp16}, TNode<IntPtrT>{tmp23}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp24, tmp25}, p_element);
    ca_.Goto(&block1, tmp15);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<FixedArray> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block29);
  }

    ca_.Bind(&block29);
  return TNode<FixedArray>{phi_bb1_3};
}

} // namespace internal
} // namespace v8
