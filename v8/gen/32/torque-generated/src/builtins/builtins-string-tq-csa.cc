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
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/conversion-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/name-tq-csa.h"
#include "torque-generated/src/objects/oddball-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=13&c=1
TNode<String> ToStringImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block4, p_o);
  }

  TNode<Object> phi_bb4_2;
  TNode<BoolT> tmp0;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    tmp0 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{phi_bb4_2}, &block3, std::vector<compiler::Node*>{phi_bb4_2});
  }

  TNode<Object> phi_bb2_2;
  TNode<Number> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_2);
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Cast_Number_0(state_, TNode<Object>{phi_bb2_2}, &label2);
    ca_.Goto(&block7, phi_bb2_2, phi_bb2_2, phi_bb2_2);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block8, phi_bb2_2, phi_bb2_2, phi_bb2_2);
    }
  }

  TNode<Object> phi_bb8_2;
  TNode<Object> phi_bb8_3;
  TNode<Object> phi_bb8_4;
  TNode<String> tmp3;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_2, &phi_bb8_3, &phi_bb8_4);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Cast_String_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(phi_bb8_3)}, &label4);
    ca_.Goto(&block11, phi_bb8_2, phi_bb8_3);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block12, phi_bb8_2, phi_bb8_3);
    }
  }

  TNode<Object> phi_bb7_2;
  TNode<Object> phi_bb7_3;
  TNode<Object> phi_bb7_4;
  TNode<String> tmp5;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_2, &phi_bb7_3, &phi_bb7_4);
    tmp5 = CodeStubAssembler(state_).NumberToString(TNode<Number>{tmp1});
    ca_.Goto(&block1, tmp5);
  }

  TNode<Object> phi_bb12_2;
  TNode<Object> phi_bb12_3;
  TNode<Oddball> tmp6;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_2, &phi_bb12_3);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Oddball_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(phi_bb12_3)}, &label7);
    ca_.Goto(&block15, phi_bb12_2, phi_bb12_3);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16, phi_bb12_2, phi_bb12_3);
    }
  }

  TNode<Object> phi_bb11_2;
  TNode<Object> phi_bb11_3;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_2, &phi_bb11_3);
    ca_.Goto(&block1, tmp3);
  }

  TNode<Object> phi_bb16_2;
  TNode<Object> phi_bb16_3;
  TNode<JSReceiver> tmp8;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_2, &phi_bb16_3);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_JSReceiver_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(phi_bb16_3)}, &label9);
    ca_.Goto(&block19, phi_bb16_2, phi_bb16_3);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block20, phi_bb16_2, phi_bb16_3);
    }
  }

  TNode<Object> phi_bb15_2;
  TNode<Object> phi_bb15_3;
  TNode<IntPtrT> tmp10;
  TNode<String> tmp11;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_2, &phi_bb15_3);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp11 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp6, tmp10});
    ca_.Goto(&block1, tmp11);
  }

  TNode<Object> phi_bb20_2;
  TNode<Object> phi_bb20_3;
  TNode<Symbol> tmp12;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_2, &phi_bb20_3);
    compiler::CodeAssemblerLabel label13(&ca_);
    tmp12 = Cast_Symbol_0(state_, TNode<HeapObject>{ca_.UncheckedCast<PrimitiveHeapObject>(phi_bb20_3)}, &label13);
    ca_.Goto(&block23, phi_bb20_2, phi_bb20_3);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block24, phi_bb20_2, phi_bb20_3);
    }
  }

  TNode<Object> phi_bb19_2;
  TNode<Object> phi_bb19_3;
  TNode<Object> tmp14;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_2, &phi_bb19_3);
    tmp14 = NonPrimitiveToPrimitive_String_Inline_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{tmp8});
    ca_.Goto(&block4, tmp14);
  }

  TNode<Object> phi_bb24_2;
  TNode<Object> phi_bb24_3;
  TNode<String> tmp15;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_2, &phi_bb24_3);
    tmp15 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kToString, p_context, phi_bb24_2)); 
    ca_.Goto(&block1, tmp15);
  }

  TNode<Object> phi_bb23_2;
  TNode<Object> phi_bb23_3;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_2, &phi_bb23_3);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kSymbolToString);
  }

  TNode<Object> phi_bb3_2;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_2);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block25);
  }

    ca_.Bind(&block25);
  return TNode<String>{phi_bb1_2};
}

TF_BUILTIN(ToString, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kO);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ToStringImpl_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=46&c=1
TNode<String> ToString_Inline_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ToStringImpl_0(state_, TNode<Context>{p_context}, TNode<Object>{p_o});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<String>{tmp0};
}

TF_BUILTIN(StringPrototypeToString, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToThisValue(TNode<Context>{parameter0}, TNode<Object>{parameter1}, PrimitiveType::kString, "String.prototype.toString");
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StringPrototypeValueOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToThisValue(TNode<Context>{parameter0}, TNode<Object>{parameter1}, PrimitiveType::kString, "String.prototype.valueOf");
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(StringToList, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<String> parameter1 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Map> tmp2;
  TNode<Smi> tmp3;
  TNode<JSArray> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<FixedArrayBase> tmp6;
  TNode<FixedArray> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{parameter1});
    tmp1 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{parameter0});
    tmp2 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp1});
    tmp3 = CodeStubAssembler(state_).SmiTag(TNode<IntPtrT>{tmp0});
    tmp4 = CodeStubAssembler(state_).AllocateJSArray(ElementsKind::PACKED_ELEMENTS, TNode<Map>{tmp2}, TNode<IntPtrT>{tmp0}, TNode<Smi>{tmp3});
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp6 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp4, tmp5});
    tmp7 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp8, tmp9);
  }

  TNode<Smi> phi_bb3_7;
  TNode<IntPtrT> phi_bb3_8;
  TNode<BoolT> tmp10;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_7, &phi_bb3_8);
    tmp10 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb3_8}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp10, &block1, std::vector<compiler::Node*>{phi_bb3_7, phi_bb3_8}, &block2, std::vector<compiler::Node*>{phi_bb3_7, phi_bb3_8});
  }

  TNode<Smi> phi_bb1_7;
  TNode<IntPtrT> phi_bb1_8;
  TNode<Int32T> tmp11;
  TNode<String> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Smi> tmp15;
  TNode<Smi> tmp16;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_7, &phi_bb1_8);
    tmp11 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(TNode<String>{parameter1}, TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{phi_bb1_8}, UnicodeEncoding::UTF16);
    tmp12 = StringBuiltinsAssembler(state_).StringFromSingleUTF16EncodedCodePoint(TNode<Int32T>{tmp11});
    StoreFixedArrayDirect_0(state_, TNode<FixedArray>{tmp7}, TNode<Smi>{phi_bb1_7}, TNode<Object>{tmp12});
    tmp13 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp12});
    tmp14 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb1_8}, TNode<IntPtrT>{tmp13});
    tmp15 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp16 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb1_7}, TNode<Smi>{tmp15});
    ca_.Goto(&block3, tmp16, tmp14);
  }

  TNode<Smi> phi_bb2_7;
  TNode<IntPtrT> phi_bb2_8;
  TNode<IntPtrT> tmp17;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_7, &phi_bb2_8);
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Number>(CodeStubAssembler::Reference{tmp4, tmp17}, phi_bb2_7);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=101&c=1
void GenerateStringAt_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_position, const char* p_methodName, compiler::CodeAssemblerLabel* label_IfInBounds, compiler::TypedCodeAssemblerVariable<String>* label_IfInBounds_parameter_0, compiler::TypedCodeAssemblerVariable<UintPtrT>* label_IfInBounds_parameter_1, compiler::TypedCodeAssemblerVariable<UintPtrT>* label_IfInBounds_parameter_2, compiler::CodeAssemblerLabel* label_IfOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<String> tmp1;
  TNode<Number> tmp2;
  TNode<Smi> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, p_methodName);
    tmp1 = CodeStubAssembler(state_).ToThisString(TNode<Context>{p_context}, TNode<Object>{p_receiver}, TNode<String>{tmp0});
    tmp2 = ToInteger_Inline_0(state_, TNode<Context>{p_context}, TNode<Object>{p_position});
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Cast_Smi_0(state_, TNode<Object>{tmp2}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<UintPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<UintPtrT> tmp7;
  TNode<BoolT> tmp8;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = LoadStringLengthAsUintPtr_0(state_, TNode<String>{tmp1});
    tmp6 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp3});
    tmp7 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp6});
    StaticAssertStringLengthFitsSmi_0(state_);
    tmp8 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp8, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    *label_IfInBounds_parameter_2 = tmp5;
    *label_IfInBounds_parameter_1 = tmp7;
    *label_IfInBounds_parameter_0 = tmp1;
    ca_.Goto(label_IfInBounds);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_IfOutOfBounds);
  }
}

TF_BUILTIN(StringPrototypeCharAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPosition);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    compiler::TypedCodeAssemblerVariable<String> tmp1(&ca_);
    compiler::TypedCodeAssemblerVariable<UintPtrT> tmp2(&ca_);
    compiler::TypedCodeAssemblerVariable<UintPtrT> tmp3(&ca_);
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label4(&ca_);
    GenerateStringAt_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, "String.prototype.charAt", &label0, &tmp1, &tmp2, &tmp3, &label4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5);
    }
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  TNode<Uint16T> tmp5;
  TNode<String> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1.value()}, TNode<UintPtrT>{tmp2.value()});
    tmp6 = CodeStubAssembler(state_).StringFromSingleCharCode(TNode<Uint16T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<String> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp7);
  }
}

TF_BUILTIN(StringPrototypeCharCodeAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPosition);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    compiler::TypedCodeAssemblerVariable<String> tmp1(&ca_);
    compiler::TypedCodeAssemblerVariable<UintPtrT> tmp2(&ca_);
    compiler::TypedCodeAssemblerVariable<UintPtrT> tmp3(&ca_);
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label4(&ca_);
    GenerateStringAt_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, "String.prototype.charCodeAt", &label0, &tmp1, &tmp2, &tmp3, &label4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5);
    }
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  TNode<Uint16T> tmp5;
  TNode<Smi> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1.value()}, TNode<UintPtrT>{tmp2.value()});
    tmp6 = Convert_Smi_uint32_0(state_, TNode<Uint32T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<HeapNumber> tmp7;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = kNaN_0(state_);
    CodeStubAssembler(state_).Return(tmp7);
  }
}

TF_BUILTIN(StringPrototypeCodePointAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kPosition);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    compiler::TypedCodeAssemblerVariable<String> tmp1(&ca_);
    compiler::TypedCodeAssemblerVariable<UintPtrT> tmp2(&ca_);
    compiler::TypedCodeAssemblerVariable<UintPtrT> tmp3(&ca_);
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label4(&ca_);
    GenerateStringAt_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<Object>{parameter2}, "String.prototype.codePointAt", &label0, &tmp1, &tmp2, &tmp3, &label4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5);
    }
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Int32T> tmp7;
  TNode<Smi> tmp8;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp3.value()});
    tmp6 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp2.value()});
    tmp7 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(TNode<String>{tmp1.value()}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6}, UnicodeEncoding::UTF32);
    tmp8 = Convert_Smi_int32_0(state_, TNode<Int32T>{tmp7});
    CodeStubAssembler(state_).Return(tmp8);
  }

  TNode<Undefined> tmp9;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp9 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(StringPrototypeConcat, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  TNode<String> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_String_constexpr_string_0(state_, "String.prototype.concat");
    tmp1 = CodeStubAssembler(state_).ToThisString(TNode<Context>{parameter0}, TNode<Object>{parameter1}, TNode<String>{tmp0});
    tmp2 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{torque_arguments.length});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp1, tmp3);
  }

  TNode<String> phi_bb3_6;
  TNode<IntPtrT> phi_bb3_8;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_6, &phi_bb3_8);
    tmp4 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb3_8}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp4, &block1, std::vector<compiler::Node*>{phi_bb3_6, phi_bb3_8}, &block2, std::vector<compiler::Node*>{phi_bb3_6, phi_bb3_8});
  }

  TNode<String> phi_bb1_6;
  TNode<IntPtrT> phi_bb1_8;
  TNode<Object> tmp5;
  TNode<String> tmp6;
  TNode<String> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_6, &phi_bb1_8);
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{phi_bb1_8});
    tmp6 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp5});
    tmp7 = StringAdd_0(state_, TNode<Context>{parameter0}, TNode<String>{phi_bb1_6}, TNode<String>{tmp6});
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb1_8}, TNode<IntPtrT>{tmp8});
    ca_.Goto(&block3, tmp7, tmp9);
  }

  TNode<String> phi_bb2_6;
  TNode<IntPtrT> phi_bb2_8;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_6, &phi_bb2_8);
    arguments.PopAndReturn(phi_bb2_6);
  }
}

TF_BUILTIN(StringConstructor, CodeStubAssembler) {
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
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kJSNewTarget);
USE(parameter2);
  TNode<JSFunction> parameter3 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{torque_arguments.length});
    tmp1 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp2 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = CodeStubAssembler(state_).EmptyStringConstant();
    ca_.Goto(&block3, tmp3);
  }

  TNode<Undefined> tmp4;
  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = Undefined_0(state_);
    tmp5 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter2}, TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<Symbol> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Symbol_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7}, &label9);
    ca_.Goto(&block8);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block9);
    }
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block5);
  }

  TNode<String> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kSymbolDescriptiveString, parameter0, tmp8)); 
    arguments.PopAndReturn(tmp10);
  }

  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<String> tmp13;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp11});
    tmp13 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp12});
    ca_.Goto(&block3, tmp13);
  }

  TNode<String> phi_bb3_9;
  TNode<Undefined> tmp14;
  TNode<BoolT> tmp15;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_9);
    tmp14 = Undefined_0(state_);
    tmp15 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter2}, TNode<HeapObject>{tmp14});
    ca_.Branch(tmp15, &block10, std::vector<compiler::Node*>{phi_bb3_9}, &block11, std::vector<compiler::Node*>{phi_bb3_9});
  }

  TNode<String> phi_bb10_9;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_9);
    arguments.PopAndReturn(phi_bb10_9);
  }

  TNode<String> phi_bb11_9;
  TNode<BoolT> tmp16;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_9);
    tmp16 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{parameter3}, TNode<Object>{parameter2});
    ca_.Branch(tmp16, &block12, std::vector<compiler::Node*>{phi_bb11_9}, &block13, std::vector<compiler::Node*>{phi_bb11_9});
  }

  TNode<String> phi_bb12_9;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_9);
    CodeStubAssembler(state_).InvalidateStringWrapperToPrimitiveProtector();
    ca_.Goto(&block13, phi_bb12_9);
  }

  TNode<String> phi_bb13_9;
  TNode<JSReceiver> tmp17;
  TNode<Map> tmp18;
  TNode<JSObject> tmp19;
  TNode<JSPrimitiveWrapper> tmp20;
  TNode<IntPtrT> tmp21;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_9);
    tmp17 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp18 = GetDerivedMap_0(state_, TNode<Context>{parameter0}, TNode<JSFunction>{parameter3}, TNode<JSReceiver>{tmp17});
    tmp19 = AllocateFastOrSlowJSObjectFromMap_0(state_, TNode<Context>{parameter0}, TNode<Map>{tmp18});
    tmp20 = UnsafeCast_JSPrimitiveWrapper_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp19});
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp20, tmp21}, phi_bb13_9);
    arguments.PopAndReturn(tmp20);
  }
}

TF_BUILTIN(StringCreateLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSFunction> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<HeapObject> tmp2;
  TNode<Map> tmp3;
  TNode<JSObject> tmp4;
  TNode<JSPrimitiveWrapper> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<String> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetStringFunction_0(state_, TNode<Context>{parameter0});
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp2 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp0, tmp1});
    tmp3 = UnsafeCast_Map_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp2});
    tmp4 = AllocateFastOrSlowJSObjectFromMap_0(state_, TNode<Context>{parameter0}, TNode<Map>{tmp3});
    tmp5 = UnsafeCast_JSPrimitiveWrapper_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = UnsafeCast_String_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp7);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(StringAddConvertLeft, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kLeft);
  USE(parameter1);
  TNode<String> parameter2 = UncheckedParameter<String>(Descriptor::kRight);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<String> tmp1;
  TNode<String> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ToPrimitiveDefault_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = ToStringImpl_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp0});
    tmp2 = StringAdd_0(state_, TNode<Context>{parameter0}, TNode<String>{tmp1}, TNode<String>{parameter2});
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(StringAddConvertRight, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<String> parameter1 = UncheckedParameter<String>(Descriptor::kLeft);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kRight);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<String> tmp1;
  TNode<String> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ToPrimitiveDefault_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2});
    tmp1 = ToStringImpl_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp0});
    tmp2 = StringAdd_0(state_, TNode<Context>{parameter0}, TNode<String>{parameter1}, TNode<String>{tmp1});
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(StringCharAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<String> parameter1 = UncheckedParameter<String>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<UintPtrT> parameter2 = UncheckedParameter<UintPtrT>(Descriptor::kPosition);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint16T> tmp0;
  TNode<String> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{parameter1}, TNode<UintPtrT>{parameter2});
    tmp1 = CodeStubAssembler(state_).StringFromSingleCharCode(TNode<Uint16T>{tmp0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=189&c=26
TNode<IntPtrT> Convert_intptr_intptr_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=216&c=9
TNode<Symbol> Cast_Symbol_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<Symbol> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Symbol_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<Symbol>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=248&c=22
TNode<Map> UnsafeCast_Map_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Map>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=251&c=15
TNode<String> UnsafeCast_String_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<String> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<String>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=291&c=14
TorqueStructReference_char8_0 AddOffset_char8_0(compiler::CodeAssemblerState* state_, TorqueStructReference_char8_0 p_ref, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{p_offset});
    tmp1 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_ref.offset}, TNode<IntPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewReference_char8_0(state_, TNode<Object>{p_ref.object}, TNode<IntPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_char8_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=293&c=14
TorqueStructReference_char16_0 AddOffset_char16_0(compiler::CodeAssemblerState* state_, TorqueStructReference_char16_0 p_ref, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{p_offset});
    tmp1 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_ref.offset}, TNode<IntPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewReference_char16_0(state_, TNode<Object>{p_ref.object}, TNode<IntPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_char16_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
