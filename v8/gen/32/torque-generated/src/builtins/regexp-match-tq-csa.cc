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
#include "src/wasm/wasm-module.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/number-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=28&c=1
TNode<JSAny> RegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string, bool p_isFastPath) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAny> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, Union<JSArray, Null>> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAny> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((p_isFastPath)) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block4);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block4);
  }

  TNode<String> tmp0;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp0 = CodeStubAssembler(state_).StringConstant("");
    if ((p_isFastPath)) {
      ca_.Goto(&block9);
    } else {
      ca_.Goto(&block10);
    }
  }

  TNode<JSRegExp> tmp1;
  TNode<BoolT> tmp2;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp1 = UnsafeCast_FastJSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    tmp2 = RegExpBuiltinsAssembler(state_).FastFlagGetter(TNode<JSRegExp>{tmp1}, JSRegExp::Flag::kGlobal);
    ca_.Goto(&block11, tmp2, tmp0);
  }

  TNode<JSAny> tmp3;
  TNode<JSAny> tmp4;
  TNode<String> tmp5;
  TNode<String> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<BoolT> tmp10;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp3 = FromConstexpr_JSAny_constexpr_string_0(state_, "flags");
    tmp4 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<JSAny>{p_regexp}, TNode<JSAny>{tmp3});
    tmp5 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<JSAny>{tmp4});
    tmp6 = CodeStubAssembler(state_).StringConstant("g");
    tmp7 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp8 = ca_.CallBuiltin<Smi>(Builtin::kStringIndexOf, TNode<Object>(), tmp5, tmp6, tmp7);
    tmp9 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    tmp10 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    ca_.Goto(&block11, tmp10, tmp5);
  }

  TNode<BoolT> phi_bb11_3;
  TNode<String> phi_bb11_4;
  TNode<BoolT> tmp11;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_3, &phi_bb11_4);
    tmp11 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb11_3});
    ca_.Branch(tmp11, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp12;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, p_isFastPath);
    ca_.Branch(tmp12, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  TNode<JSAny> tmp13;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp13 = RegExpPrototypeExecBodyFast_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    ca_.Goto(&block16, tmp13);
  }

  TNode<JSAny> tmp14;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp14 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    ca_.Goto(&block16, tmp14);
  }

  TNode<JSAny> phi_bb16_5;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_5);
    ca_.Goto(&block1, phi_bb16_5);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    if ((p_isFastPath)) {
      ca_.Goto(&block22);
    } else {
      ca_.Goto(&block23);
    }
  }

  TNode<JSRegExp> tmp15;
  TNode<TrustedObject> tmp16;
  TNode<RegExpData> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<Smi> tmp19;
  TNode<Number> tmp20;
  TNode<BoolT> tmp21;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp15 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    tmp16 = CodeStubAssembler(state_).LoadTrustedPointerFromObject(TNode<HeapObject>{tmp15}, JSRegExp::kDataOffset, kRegExpDataIndirectPointerTag);
    tmp17 = UnsafeCast_RegExpData_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp18});
    tmp20 = FromConstexpr_Number_constexpr_WasmCodePointer_0(state_, static_cast<uint8_t>(RegExpData::Type::ATOM));
    tmp21 = IsNumberEqual_0(state_, TNode<Number>{tmp19}, TNode<Number>{tmp20});
    ca_.Branch(tmp21, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<JSAny> tmp22;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp22 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpMatchGlobalAtom, p_context, tmp15, p_string, tmp17)); 
    ca_.Goto(&block1, tmp22);
  }

  TNode<JSAny> tmp23;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp23 = RegExpBuiltinsAssembler(state_).RegExpMatchGlobal(TNode<Context>{p_context}, TNode<JSRegExp>{tmp15}, TNode<String>{p_string}, TNode<RegExpData>{tmp17});
    ca_.Goto(&block1, tmp23);
  }

  TNode<String> tmp24;
  TNode<String> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  TNode<Smi> tmp28;
  TNode<BoolT> tmp29;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp24 = CodeStubAssembler(state_).StringConstant("u");
    tmp25 = CodeStubAssembler(state_).StringConstant("v");
    tmp26 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp27 = ca_.CallBuiltin<Smi>(Builtin::kStringIndexOf, TNode<Object>(), phi_bb11_4, tmp24, tmp26);
    tmp28 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    tmp29 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp27}, TNode<Smi>{tmp28});
    ca_.Branch(tmp29, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp30;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp30 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block33, tmp30);
  }

  TNode<Smi> tmp31;
  TNode<Smi> tmp32;
  TNode<Smi> tmp33;
  TNode<BoolT> tmp34;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp31 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp32 = ca_.CallBuiltin<Smi>(Builtin::kStringIndexOf, TNode<Object>(), phi_bb11_4, tmp25, tmp31);
    tmp33 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    tmp34 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp32}, TNode<Smi>{tmp33});
    ca_.Goto(&block33, tmp34);
  }

  TNode<BoolT> phi_bb33_8;
  TNode<Number> tmp35;
  TNode<FixedArray> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_8);
    tmp35 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<JSAny>{p_regexp}, TNode<Number>{tmp35}, p_isFastPath);
    std::tie(tmp36, tmp37, tmp38) = NewGrowableFixedArray_0(state_).Flatten();
    ca_.Goto(&block36, tmp36, tmp37, tmp38);
  }

  TNode<FixedArray> phi_bb36_8;
  TNode<IntPtrT> phi_bb36_9;
  TNode<IntPtrT> phi_bb36_10;
  TNode<BoolT> tmp39;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_8, &phi_bb36_9, &phi_bb36_10);
    tmp39 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp39, &block34, std::vector<compiler::Node*>{phi_bb36_8, phi_bb36_9, phi_bb36_10}, &block35, std::vector<compiler::Node*>{phi_bb36_8, phi_bb36_9, phi_bb36_10});
  }

  TNode<FixedArray> phi_bb34_8;
  TNode<IntPtrT> phi_bb34_9;
  TNode<IntPtrT> phi_bb34_10;
  TNode<String> tmp40;
  TNode<JSAny> tmp41;
  TNode<Null> tmp42;
  TNode<BoolT> tmp43;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_8, &phi_bb34_9, &phi_bb34_10);
    tmp40 = CodeStubAssembler(state_).EmptyStringConstant();
    tmp41 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    tmp42 = Null_0(state_);
    tmp43 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp41}, TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp42});
    ca_.Branch(tmp43, &block41, std::vector<compiler::Node*>{phi_bb34_8, phi_bb34_9, phi_bb34_10}, &block42, std::vector<compiler::Node*>{phi_bb34_8, phi_bb34_9, phi_bb34_10});
  }

  TNode<FixedArray> phi_bb41_8;
  TNode<IntPtrT> phi_bb41_9;
  TNode<IntPtrT> phi_bb41_10;
  TNode<IntPtrT> tmp44;
  TNode<BoolT> tmp45;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_8, &phi_bb41_9, &phi_bb41_10);
    tmp44 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp45 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb41_10}, TNode<IntPtrT>{tmp44});
    ca_.Branch(tmp45, &block43, std::vector<compiler::Node*>{phi_bb41_8, phi_bb41_9, phi_bb41_10}, &block44, std::vector<compiler::Node*>{phi_bb41_8, phi_bb41_9, phi_bb41_10});
  }

  TNode<FixedArray> phi_bb42_8;
  TNode<IntPtrT> phi_bb42_9;
  TNode<IntPtrT> phi_bb42_10;
  TNode<Smi> tmp46;
  TNode<JSAny> tmp47;
  TNode<String> tmp48;
  TNode<BoolT> tmp49;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_8, &phi_bb42_9, &phi_bb42_10);
    tmp46 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp47 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<JSAny>{tmp41}, TNode<JSAny>{tmp46});
    tmp48 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<JSAny>{tmp47});
    tmp49 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb42_9}, TNode<IntPtrT>{phi_bb42_10});
    ca_.Branch(tmp49, &block67, std::vector<compiler::Node*>{phi_bb42_8, phi_bb42_9, phi_bb42_10}, &block68, std::vector<compiler::Node*>{phi_bb42_8, phi_bb42_9, phi_bb42_10});
  }

  TNode<FixedArray> phi_bb43_8;
  TNode<IntPtrT> phi_bb43_9;
  TNode<IntPtrT> phi_bb43_10;
  TNode<Null> tmp50;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_8, &phi_bb43_9, &phi_bb43_10);
    tmp50 = Null_0(state_);
    ca_.Goto(&block45, phi_bb43_8, phi_bb43_9, phi_bb43_10, tmp50);
  }

  TNode<FixedArray> phi_bb44_8;
  TNode<IntPtrT> phi_bb44_9;
  TNode<IntPtrT> phi_bb44_10;
  TNode<NativeContext> tmp51;
  TNode<Map> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Hole> tmp54;
  TNode<FixedArray> tmp55;
  TNode<Smi> tmp56;
  TNode<JSArray> tmp57;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_8, &phi_bb44_9, &phi_bb44_10);
    tmp51 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp52 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp51});
    tmp53 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp54 = TheHole_0(state_);
    tmp55 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb44_8}, TNode<IntPtrT>{tmp53}, TNode<IntPtrT>{phi_bb44_10}, TNode<IntPtrT>{phi_bb44_10}, TNode<Hole>{tmp54});
    tmp56 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb44_10});
    tmp57 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp52}, TNode<FixedArrayBase>{tmp55}, TNode<Smi>{tmp56});
    ca_.Goto(&block45, phi_bb44_8, phi_bb44_9, phi_bb44_10, tmp57);
  }

  TNode<FixedArray> phi_bb45_8;
  TNode<IntPtrT> phi_bb45_9;
  TNode<IntPtrT> phi_bb45_10;
  TNode<Union<JSArray, Null>> phi_bb45_12;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_8, &phi_bb45_9, &phi_bb45_10, &phi_bb45_12);
    ca_.Goto(&block1, phi_bb45_12);
  }

  TNode<FixedArray> phi_bb67_8;
  TNode<IntPtrT> phi_bb67_9;
  TNode<IntPtrT> phi_bb67_10;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<Hole> tmp64;
  TNode<FixedArray> tmp65;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_8, &phi_bb67_9, &phi_bb67_10);
    tmp58 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp59 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb67_9}, TNode<IntPtrT>{tmp58});
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb67_9}, TNode<IntPtrT>{tmp59});
    tmp61 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp62 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp60}, TNode<IntPtrT>{tmp61});
    tmp63 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp64 = TheHole_0(state_);
    tmp65 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb67_8}, TNode<IntPtrT>{tmp63}, TNode<IntPtrT>{phi_bb67_10}, TNode<IntPtrT>{tmp62}, TNode<Hole>{tmp64});
    ca_.Goto(&block68, tmp65, tmp62, phi_bb67_10);
  }

  TNode<FixedArray> phi_bb68_8;
  TNode<IntPtrT> phi_bb68_9;
  TNode<IntPtrT> phi_bb68_10;
  TNode<Union<HeapObject, TaggedIndex>> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<UintPtrT> tmp71;
  TNode<UintPtrT> tmp72;
  TNode<BoolT> tmp73;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_8, &phi_bb68_9, &phi_bb68_10);
    std::tie(tmp66, tmp67, tmp68) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb68_8}).Flatten();
    tmp69 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp70 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb68_10}, TNode<IntPtrT>{tmp69});
    tmp71 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb68_10});
    tmp72 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp68});
    tmp73 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp71}, TNode<UintPtrT>{tmp72});
    ca_.Branch(tmp73, &block86, std::vector<compiler::Node*>{phi_bb68_10, phi_bb68_10, phi_bb68_10, phi_bb68_10}, &block87, std::vector<compiler::Node*>{phi_bb68_10, phi_bb68_10, phi_bb68_10, phi_bb68_10});
  }

  TNode<IntPtrT> phi_bb86_18;
  TNode<IntPtrT> phi_bb86_19;
  TNode<IntPtrT> phi_bb86_23;
  TNode<IntPtrT> phi_bb86_24;
  TNode<IntPtrT> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<Union<HeapObject, TaggedIndex>> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<Smi> tmp78;
  TNode<Smi> tmp79;
  TNode<BoolT> tmp80;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_18, &phi_bb86_19, &phi_bb86_23, &phi_bb86_24);
    tmp74 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb86_24});
    tmp75 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp67}, TNode<IntPtrT>{tmp74});
    std::tie(tmp76, tmp77) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp66}, TNode<IntPtrT>{tmp75}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp76, tmp77}, tmp48);
    tmp78 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp48});
    tmp79 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp80 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp78}, TNode<Smi>{tmp79});
    ca_.Branch(tmp80, &block90, std::vector<compiler::Node*>{}, &block91, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> phi_bb87_18;
  TNode<IntPtrT> phi_bb87_19;
  TNode<IntPtrT> phi_bb87_23;
  TNode<IntPtrT> phi_bb87_24;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_18, &phi_bb87_19, &phi_bb87_23, &phi_bb87_24);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block90.is_used()) {
    ca_.Bind(&block90);
    ca_.Goto(&block36, phi_bb68_8, phi_bb68_9, tmp70);
  }

  TNode<JSAny> tmp81;
  TNode<Number> tmp82;
  TNode<Number> tmp83;
  TNode<Number> tmp84;
  if (block91.is_used()) {
    ca_.Bind(&block91);
    tmp81 = LoadLastIndex_0(state_, TNode<Context>{p_context}, TNode<JSAny>{p_regexp}, p_isFastPath);
    tmp82 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{p_context}, TNode<JSAny>{tmp81});
    tmp83 = UnsafeCast_Number_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp82});
    tmp84 = RegExpBuiltinsAssembler(state_).AdvanceStringIndex(TNode<String>{p_string}, TNode<Number>{tmp83}, TNode<BoolT>{phi_bb33_8}, p_isFastPath);
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<JSAny>{p_regexp}, TNode<Number>{tmp84}, p_isFastPath);
    ca_.Goto(&block36, phi_bb68_8, phi_bb68_9, tmp70);
  }

  TNode<FixedArray> phi_bb35_8;
  TNode<IntPtrT> phi_bb35_9;
  TNode<IntPtrT> phi_bb35_10;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_8, &phi_bb35_9, &phi_bb35_10);
    VerifiedUnreachable_0(state_);
  }

  TNode<JSAny> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block92);
  }

    ca_.Bind(&block92);
  return TNode<JSAny>{phi_bb1_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=122&c=1
TNode<JSAny> FastRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSAny> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchBody_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_string}, true);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSAny>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=127&c=1
TNode<JSAny> SlowRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSAny> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchBody_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_string}, false);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<JSAny>{tmp0};
}

TF_BUILTIN(RegExpMatchFast, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedParameter<JSRegExp>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<String> parameter2 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSAny> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FastRegExpPrototypeMatchBody_0(state_, TNode<Context>{parameter0}, TNode<JSRegExp>{parameter1}, TNode<String>{parameter2});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(RegExpPrototypeMatch, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kString);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  TNode<String> tmp1;
  TNode<JSRegExp> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{parameter0}, TNode<JSAny>{parameter1}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@match");
    tmp0 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<JSAny>{parameter2});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSRegExp_0(state_, TNode<Context>{parameter0}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block3);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block4);
    }
  }

  TNode<JSAny> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = SlowRegExpPrototypeMatchBody_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}, TNode<String>{tmp1});
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<JSAny> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = ca_.CallBuiltin<JSAny>(Builtin::kRegExpMatchFast, parameter0, tmp2, tmp1);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=32&c=12
TNode<BoolT> Is_FastJSRegExp_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSRegExp> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_FastJSRegExp_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{p_o}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp3);
  }

  TNode<BoolT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<BoolT>{phi_bb1_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=61&c=9
TNode<RegExpData> UnsafeCast_RegExpData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RegExpData> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<RegExpData>{tmp0};
}

} // namespace internal
} // namespace v8
