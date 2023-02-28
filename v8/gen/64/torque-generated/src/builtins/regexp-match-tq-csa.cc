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
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/number-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-all-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/regexp-match-info-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=22&c=1
TNode<Object> RegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string, bool p_isFastPath) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, HeapObject> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String, String, Object> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String, String, String, Object> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String, String, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String, String, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String, Object> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String, String> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, BoolT, String> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block127(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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

  TNode<BoolT> tmp0;
  TNode<BoolT> tmp1;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp0 = RegExpBuiltinsAssembler(state_).FlagGetter(TNode<Context>{p_context}, TNode<Object>{p_regexp}, JSRegExp::Flag::kGlobal, p_isFastPath);
    tmp1 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp0});
    ca_.Branch(tmp1, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp2;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, p_isFastPath);
    ca_.Branch(tmp2, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp3;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp3 = RegExpPrototypeExecBodyFast_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    ca_.Goto(&block13, tmp3);
  }

  TNode<Object> tmp4;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp4 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    ca_.Goto(&block13, tmp4);
  }

  TNode<Object> phi_bb13_4;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_4);
    ca_.Goto(&block1, phi_bb13_4);
  }

  TNode<BoolT> tmp5;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp5 = RegExpBuiltinsAssembler(state_).FlagGetter(TNode<Context>{p_context}, TNode<Object>{p_regexp}, JSRegExp::Flag::kUnicode, p_isFastPath);
    ca_.Branch(tmp5, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp6;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block21, tmp6);
  }

  TNode<BoolT> tmp7;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp7 = RegExpBuiltinsAssembler(state_).FlagGetter(TNode<Context>{p_context}, TNode<Object>{p_regexp}, JSRegExp::Flag::kUnicodeSets, p_isFastPath);
    ca_.Goto(&block21, tmp7);
  }

  TNode<BoolT> phi_bb21_5;
  TNode<Number> tmp8;
  TNode<FixedArray> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<BoolT> tmp12;
  TNode<String> tmp13;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_5);
    tmp8 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, TNode<Number>{tmp8}, p_isFastPath);
    std::tie(tmp9, tmp10, tmp11) = NewGrowableFixedArray_0(state_).Flatten();
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp13 = CodeStubAssembler(state_).EmptyStringConstant();
    if ((p_isFastPath)) {
      ca_.Goto(&block22);
    } else {
      ca_.Goto(&block23);
    }
  }

  TNode<JSRegExp> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<HeapObject> tmp16;
  TNode<FixedArray> tmp17;
  TNode<Object> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<UintPtrT> tmp22;
  TNode<UintPtrT> tmp23;
  TNode<BoolT> tmp24;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp14 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp16 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = UnsafeCast_FixedArray_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    std::tie(tmp18, tmp19, tmp20) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp17}).Flatten();
    tmp21 = Convert_intptr_constexpr_int31_0(state_, JSRegExp::kTagIndex);
    tmp22 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp21});
    tmp23 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp20});
    tmp24 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp23});
    ca_.Branch(tmp24, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Object> tmp29;
  TNode<Smi> tmp30;
  TNode<Smi> tmp31;
  TNode<BoolT> tmp32;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp25 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp21});
    tmp26 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp25});
    std::tie(tmp27, tmp28) = NewReference_Object_0(state_, TNode<Object>{tmp18}, TNode<IntPtrT>{tmp26}).Flatten();
    tmp29 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp27, tmp28});
    tmp30 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp29});
    tmp31 = FromConstexpr_Smi_constexpr_int31_0(state_, JSRegExp::ATOM);
    tmp32 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp30}, TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{tmp12, tmp13});
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<UintPtrT> tmp37;
  TNode<UintPtrT> tmp38;
  TNode<BoolT> tmp39;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    std::tie(tmp33, tmp34, tmp35) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp17}).Flatten();
    tmp36 = Convert_intptr_constexpr_int31_0(state_, JSRegExp::kAtomPatternIndex);
    tmp37 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp36});
    tmp38 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp35});
    tmp39 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp37}, TNode<UintPtrT>{tmp38});
    ca_.Branch(tmp39, &block39, std::vector<compiler::Node*>{}, &block40, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<String> tmp45;
  TNode<BoolT> tmp46;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp40 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp36});
    tmp41 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp34}, TNode<IntPtrT>{tmp40});
    std::tie(tmp42, tmp43) = NewReference_Object_0(state_, TNode<Object>{tmp33}, TNode<IntPtrT>{tmp41}).Flatten();
    tmp44 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp42, tmp43});
    tmp45 = UnsafeCast_String_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp44});
    tmp46 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block26, tmp46, tmp45);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb26_8;
  TNode<String> phi_bb26_9;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_8, &phi_bb26_9);
    ca_.Goto(&block24, phi_bb26_8, phi_bb26_9);
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.Goto(&block24, tmp12, tmp13);
  }

  TNode<BoolT> phi_bb24_8;
  TNode<String> phi_bb24_9;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_8, &phi_bb24_9);
    ca_.Goto(&block45, tmp9, tmp10, tmp11, phi_bb24_8, phi_bb24_9);
  }

  TNode<FixedArray> phi_bb45_5;
  TNode<IntPtrT> phi_bb45_6;
  TNode<IntPtrT> phi_bb45_7;
  TNode<BoolT> phi_bb45_8;
  TNode<String> phi_bb45_9;
  TNode<BoolT> tmp47;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_5, &phi_bb45_6, &phi_bb45_7, &phi_bb45_8, &phi_bb45_9);
    tmp47 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp47, &block43, std::vector<compiler::Node*>{phi_bb45_5, phi_bb45_6, phi_bb45_7, phi_bb45_8, phi_bb45_9}, &block44, std::vector<compiler::Node*>{phi_bb45_5, phi_bb45_6, phi_bb45_7, phi_bb45_8, phi_bb45_9});
  }

  TNode<FixedArray> phi_bb43_5;
  TNode<IntPtrT> phi_bb43_6;
  TNode<IntPtrT> phi_bb43_7;
  TNode<BoolT> phi_bb43_8;
  TNode<String> phi_bb43_9;
  TNode<String> tmp48;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_5, &phi_bb43_6, &phi_bb43_7, &phi_bb43_8, &phi_bb43_9);
    tmp48 = CodeStubAssembler(state_).EmptyStringConstant();
    if ((p_isFastPath)) {
      ca_.Goto(&block50, phi_bb43_5, phi_bb43_6, phi_bb43_7, phi_bb43_8, phi_bb43_9);
    } else {
      ca_.Goto(&block51, phi_bb43_5, phi_bb43_6, phi_bb43_7, phi_bb43_8, phi_bb43_9);
    }
  }

  TNode<FixedArray> phi_bb50_5;
  TNode<IntPtrT> phi_bb50_6;
  TNode<IntPtrT> phi_bb50_7;
  TNode<BoolT> phi_bb50_8;
  TNode<String> phi_bb50_9;
  TNode<JSRegExp> tmp49;
  TNode<RegExpMatchInfo> tmp50;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_5, &phi_bb50_6, &phi_bb50_7, &phi_bb50_8, &phi_bb50_9);
    tmp49 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    compiler::CodeAssemblerLabel label51(&ca_);
    tmp50 = RegExpPrototypeExecBodyWithoutResultFast_0(state_, TNode<Context>{p_context}, TNode<JSRegExp>{tmp49}, TNode<String>{p_string}, &label51);
    ca_.Goto(&block53, phi_bb50_5, phi_bb50_6, phi_bb50_7, phi_bb50_8, phi_bb50_9);
    if (label51.is_used()) {
      ca_.Bind(&label51);
      ca_.Goto(&block54, phi_bb50_5, phi_bb50_6, phi_bb50_7, phi_bb50_8, phi_bb50_9);
    }
  }

  TNode<FixedArray> phi_bb54_5;
  TNode<IntPtrT> phi_bb54_6;
  TNode<IntPtrT> phi_bb54_7;
  TNode<BoolT> phi_bb54_8;
  TNode<String> phi_bb54_9;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_5, &phi_bb54_6, &phi_bb54_7, &phi_bb54_8, &phi_bb54_9);
    ca_.Goto(&block49, phi_bb54_5, phi_bb54_6, phi_bb54_7, phi_bb54_8, phi_bb54_9);
  }

  TNode<FixedArray> phi_bb53_5;
  TNode<IntPtrT> phi_bb53_6;
  TNode<IntPtrT> phi_bb53_7;
  TNode<BoolT> phi_bb53_8;
  TNode<String> phi_bb53_9;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_5, &phi_bb53_6, &phi_bb53_7, &phi_bb53_8, &phi_bb53_9);
    ca_.Branch(phi_bb53_8, &block55, std::vector<compiler::Node*>{phi_bb53_5, phi_bb53_6, phi_bb53_7, phi_bb53_8, phi_bb53_9}, &block56, std::vector<compiler::Node*>{phi_bb53_5, phi_bb53_6, phi_bb53_7, phi_bb53_8, phi_bb53_9});
  }

  TNode<FixedArray> phi_bb55_5;
  TNode<IntPtrT> phi_bb55_6;
  TNode<IntPtrT> phi_bb55_7;
  TNode<BoolT> phi_bb55_8;
  TNode<String> phi_bb55_9;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_5, &phi_bb55_6, &phi_bb55_7, &phi_bb55_8, &phi_bb55_9);
    ca_.Goto(&block57, phi_bb55_5, phi_bb55_6, phi_bb55_7, phi_bb55_8, phi_bb55_9, phi_bb55_9);
  }

  TNode<FixedArray> phi_bb56_5;
  TNode<IntPtrT> phi_bb56_6;
  TNode<IntPtrT> phi_bb56_7;
  TNode<BoolT> phi_bb56_8;
  TNode<String> phi_bb56_9;
  TNode<Object> tmp52;
  TNode<Object> tmp53;
  TNode<Smi> tmp54;
  TNode<Smi> tmp55;
  TNode<String> tmp56;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_5, &phi_bb56_6, &phi_bb56_7, &phi_bb56_8, &phi_bb56_9);
    tmp52 = CodeStubAssembler(state_).UnsafeLoadFixedArrayElement(TNode<RegExpMatchInfo>{tmp50}, RegExpMatchInfo::kFirstCaptureIndex);
    tmp53 = CodeStubAssembler(state_).UnsafeLoadFixedArrayElement(TNode<RegExpMatchInfo>{tmp50}, (CodeStubAssembler(state_).ConstexprInt31Add(RegExpMatchInfo::kFirstCaptureIndex, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull))))));
    tmp54 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp52});
    tmp55 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp53});
    tmp56 = ca_.CallStub<String>(Builtins::CallableFor(ca_.isolate(), Builtin::kSubString), p_context, p_string, tmp54, tmp55);
    ca_.Goto(&block57, phi_bb56_5, phi_bb56_6, phi_bb56_7, phi_bb56_8, phi_bb56_9, tmp56);
  }

  TNode<FixedArray> phi_bb57_5;
  TNode<IntPtrT> phi_bb57_6;
  TNode<IntPtrT> phi_bb57_7;
  TNode<BoolT> phi_bb57_8;
  TNode<String> phi_bb57_9;
  TNode<String> phi_bb57_10;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_5, &phi_bb57_6, &phi_bb57_7, &phi_bb57_8, &phi_bb57_9, &phi_bb57_10);
    ca_.Goto(&block52, phi_bb57_5, phi_bb57_6, phi_bb57_7, phi_bb57_8, phi_bb57_9, phi_bb57_10);
  }

  TNode<FixedArray> phi_bb51_5;
  TNode<IntPtrT> phi_bb51_6;
  TNode<IntPtrT> phi_bb51_7;
  TNode<BoolT> phi_bb51_8;
  TNode<String> phi_bb51_9;
  TNode<Object> tmp57;
  TNode<Oddball> tmp58;
  TNode<BoolT> tmp59;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_5, &phi_bb51_6, &phi_bb51_7, &phi_bb51_8, &phi_bb51_9);
    tmp57 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    tmp58 = Null_0(state_);
    tmp59 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp57}, TNode<HeapObject>{tmp58});
    ca_.Branch(tmp59, &block62, std::vector<compiler::Node*>{phi_bb51_5, phi_bb51_6, phi_bb51_7, phi_bb51_8, phi_bb51_9}, &block63, std::vector<compiler::Node*>{phi_bb51_5, phi_bb51_6, phi_bb51_7, phi_bb51_8, phi_bb51_9});
  }

  TNode<FixedArray> phi_bb62_5;
  TNode<IntPtrT> phi_bb62_6;
  TNode<IntPtrT> phi_bb62_7;
  TNode<BoolT> phi_bb62_8;
  TNode<String> phi_bb62_9;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_5, &phi_bb62_6, &phi_bb62_7, &phi_bb62_8, &phi_bb62_9);
    ca_.Goto(&block49, phi_bb62_5, phi_bb62_6, phi_bb62_7, phi_bb62_8, phi_bb62_9);
  }

  TNode<FixedArray> phi_bb63_5;
  TNode<IntPtrT> phi_bb63_6;
  TNode<IntPtrT> phi_bb63_7;
  TNode<BoolT> phi_bb63_8;
  TNode<String> phi_bb63_9;
  TNode<Smi> tmp60;
  TNode<Object> tmp61;
  TNode<String> tmp62;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_5, &phi_bb63_6, &phi_bb63_7, &phi_bb63_8, &phi_bb63_9);
    tmp60 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp61 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp57}, TNode<Object>{tmp60});
    tmp62 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{tmp61});
    ca_.Goto(&block52, phi_bb63_5, phi_bb63_6, phi_bb63_7, phi_bb63_8, phi_bb63_9, tmp62);
  }

  TNode<FixedArray> phi_bb52_5;
  TNode<IntPtrT> phi_bb52_6;
  TNode<IntPtrT> phi_bb52_7;
  TNode<BoolT> phi_bb52_8;
  TNode<String> phi_bb52_9;
  TNode<String> phi_bb52_10;
  TNode<BoolT> tmp63;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_5, &phi_bb52_6, &phi_bb52_7, &phi_bb52_8, &phi_bb52_9, &phi_bb52_10);
    tmp63 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb52_6}, TNode<IntPtrT>{phi_bb52_7});
    ca_.Branch(tmp63, &block88, std::vector<compiler::Node*>{phi_bb52_5, phi_bb52_6, phi_bb52_7, phi_bb52_8, phi_bb52_9, phi_bb52_10, phi_bb52_10, phi_bb52_10}, &block89, std::vector<compiler::Node*>{phi_bb52_5, phi_bb52_6, phi_bb52_7, phi_bb52_8, phi_bb52_9, phi_bb52_10, phi_bb52_10, phi_bb52_10});
  }

  TNode<FixedArray> phi_bb49_5;
  TNode<IntPtrT> phi_bb49_6;
  TNode<IntPtrT> phi_bb49_7;
  TNode<BoolT> phi_bb49_8;
  TNode<String> phi_bb49_9;
  TNode<IntPtrT> tmp64;
  TNode<BoolT> tmp65;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_5, &phi_bb49_6, &phi_bb49_7, &phi_bb49_8, &phi_bb49_9);
    tmp64 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp65 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb49_7}, TNode<IntPtrT>{tmp64});
    ca_.Branch(tmp65, &block64, std::vector<compiler::Node*>{phi_bb49_5, phi_bb49_6, phi_bb49_7, phi_bb49_8, phi_bb49_9}, &block65, std::vector<compiler::Node*>{phi_bb49_5, phi_bb49_6, phi_bb49_7, phi_bb49_8, phi_bb49_9});
  }

  TNode<FixedArray> phi_bb64_5;
  TNode<IntPtrT> phi_bb64_6;
  TNode<IntPtrT> phi_bb64_7;
  TNode<BoolT> phi_bb64_8;
  TNode<String> phi_bb64_9;
  TNode<Oddball> tmp66;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_5, &phi_bb64_6, &phi_bb64_7, &phi_bb64_8, &phi_bb64_9);
    tmp66 = Null_0(state_);
    ca_.Goto(&block66, phi_bb64_5, phi_bb64_6, phi_bb64_7, phi_bb64_8, phi_bb64_9, tmp66);
  }

  TNode<FixedArray> phi_bb65_5;
  TNode<IntPtrT> phi_bb65_6;
  TNode<IntPtrT> phi_bb65_7;
  TNode<BoolT> phi_bb65_8;
  TNode<String> phi_bb65_9;
  TNode<NativeContext> tmp67;
  TNode<Map> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<FixedArray> tmp70;
  TNode<Smi> tmp71;
  TNode<JSArray> tmp72;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_5, &phi_bb65_6, &phi_bb65_7, &phi_bb65_8, &phi_bb65_9);
    tmp67 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp68 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp67});
    tmp69 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp70 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb65_5}, TNode<IntPtrT>{tmp69}, TNode<IntPtrT>{phi_bb65_7}, TNode<IntPtrT>{phi_bb65_7});
    tmp71 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb65_7});
    tmp72 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp68}, TNode<FixedArrayBase>{tmp70}, TNode<Smi>{tmp71});
    ca_.Goto(&block66, phi_bb65_5, phi_bb65_6, phi_bb65_7, phi_bb65_8, phi_bb65_9, tmp72);
  }

  TNode<FixedArray> phi_bb66_5;
  TNode<IntPtrT> phi_bb66_6;
  TNode<IntPtrT> phi_bb66_7;
  TNode<BoolT> phi_bb66_8;
  TNode<String> phi_bb66_9;
  TNode<HeapObject> phi_bb66_11;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_5, &phi_bb66_6, &phi_bb66_7, &phi_bb66_8, &phi_bb66_9, &phi_bb66_11);
    ca_.Goto(&block1, phi_bb66_11);
  }

  TNode<FixedArray> phi_bb88_5;
  TNode<IntPtrT> phi_bb88_6;
  TNode<IntPtrT> phi_bb88_7;
  TNode<BoolT> phi_bb88_8;
  TNode<String> phi_bb88_9;
  TNode<String> phi_bb88_10;
  TNode<String> phi_bb88_11;
  TNode<Object> phi_bb88_12;
  TNode<IntPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<IntPtrT> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<FixedArray> tmp79;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_5, &phi_bb88_6, &phi_bb88_7, &phi_bb88_8, &phi_bb88_9, &phi_bb88_10, &phi_bb88_11, &phi_bb88_12);
    tmp73 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp74 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb88_6}, TNode<IntPtrT>{tmp73});
    tmp75 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb88_6}, TNode<IntPtrT>{tmp74});
    tmp76 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp77 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp75}, TNode<IntPtrT>{tmp76});
    tmp78 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp79 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb88_5}, TNode<IntPtrT>{tmp78}, TNode<IntPtrT>{phi_bb88_7}, TNode<IntPtrT>{tmp77});
    ca_.Goto(&block89, tmp79, tmp77, phi_bb88_7, phi_bb88_8, phi_bb88_9, phi_bb88_10, phi_bb88_11, phi_bb88_12);
  }

  TNode<FixedArray> phi_bb89_5;
  TNode<IntPtrT> phi_bb89_6;
  TNode<IntPtrT> phi_bb89_7;
  TNode<BoolT> phi_bb89_8;
  TNode<String> phi_bb89_9;
  TNode<String> phi_bb89_10;
  TNode<String> phi_bb89_11;
  TNode<Object> phi_bb89_12;
  TNode<Object> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<UintPtrT> tmp85;
  TNode<UintPtrT> tmp86;
  TNode<BoolT> tmp87;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_5, &phi_bb89_6, &phi_bb89_7, &phi_bb89_8, &phi_bb89_9, &phi_bb89_10, &phi_bb89_11, &phi_bb89_12);
    std::tie(tmp80, tmp81, tmp82) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb89_5}).Flatten();
    tmp83 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp84 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb89_7}, TNode<IntPtrT>{tmp83});
    tmp85 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb89_7});
    tmp86 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp82});
    tmp87 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp85}, TNode<UintPtrT>{tmp86});
    ca_.Branch(tmp87, &block107, std::vector<compiler::Node*>{phi_bb89_8, phi_bb89_9, phi_bb89_10, phi_bb89_11, phi_bb89_12, phi_bb89_7, phi_bb89_7, phi_bb89_7, phi_bb89_7}, &block108, std::vector<compiler::Node*>{phi_bb89_8, phi_bb89_9, phi_bb89_10, phi_bb89_11, phi_bb89_12, phi_bb89_7, phi_bb89_7, phi_bb89_7, phi_bb89_7});
  }

  TNode<BoolT> phi_bb107_8;
  TNode<String> phi_bb107_9;
  TNode<String> phi_bb107_10;
  TNode<String> phi_bb107_11;
  TNode<Object> phi_bb107_12;
  TNode<IntPtrT> phi_bb107_17;
  TNode<IntPtrT> phi_bb107_18;
  TNode<IntPtrT> phi_bb107_22;
  TNode<IntPtrT> phi_bb107_23;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<Object> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<Smi> tmp92;
  TNode<Smi> tmp93;
  TNode<BoolT> tmp94;
  if (block107.is_used()) {
    ca_.Bind(&block107, &phi_bb107_8, &phi_bb107_9, &phi_bb107_10, &phi_bb107_11, &phi_bb107_12, &phi_bb107_17, &phi_bb107_18, &phi_bb107_22, &phi_bb107_23);
    tmp88 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb107_23});
    tmp89 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp81}, TNode<IntPtrT>{tmp88});
    std::tie(tmp90, tmp91) = NewReference_Object_0(state_, TNode<Object>{tmp80}, TNode<IntPtrT>{tmp89}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp90, tmp91}, phi_bb107_12);
    tmp92 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{phi_bb107_10});
    tmp93 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp94 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp92}, TNode<Smi>{tmp93});
    ca_.Branch(tmp94, &block111, std::vector<compiler::Node*>{phi_bb107_8, phi_bb107_9, phi_bb107_10}, &block112, std::vector<compiler::Node*>{phi_bb107_8, phi_bb107_9, phi_bb107_10});
  }

  TNode<BoolT> phi_bb108_8;
  TNode<String> phi_bb108_9;
  TNode<String> phi_bb108_10;
  TNode<String> phi_bb108_11;
  TNode<Object> phi_bb108_12;
  TNode<IntPtrT> phi_bb108_17;
  TNode<IntPtrT> phi_bb108_18;
  TNode<IntPtrT> phi_bb108_22;
  TNode<IntPtrT> phi_bb108_23;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_8, &phi_bb108_9, &phi_bb108_10, &phi_bb108_11, &phi_bb108_12, &phi_bb108_17, &phi_bb108_18, &phi_bb108_22, &phi_bb108_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb111_8;
  TNode<String> phi_bb111_9;
  TNode<String> phi_bb111_10;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_8, &phi_bb111_9, &phi_bb111_10);
    ca_.Goto(&block45, phi_bb89_5, phi_bb89_6, tmp84, phi_bb111_8, phi_bb111_9);
  }

  TNode<BoolT> phi_bb112_8;
  TNode<String> phi_bb112_9;
  TNode<String> phi_bb112_10;
  TNode<Object> tmp95;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_8, &phi_bb112_9, &phi_bb112_10);
    tmp95 = LoadLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, p_isFastPath);
    if ((p_isFastPath)) {
      ca_.Goto(&block113, phi_bb112_8, phi_bb112_9, phi_bb112_10);
    } else {
      ca_.Goto(&block114, phi_bb112_8, phi_bb112_9, phi_bb112_10);
    }
  }

  TNode<BoolT> phi_bb113_8;
  TNode<String> phi_bb113_9;
  TNode<String> phi_bb113_10;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_8, &phi_bb113_9, &phi_bb113_10);
    ca_.Goto(&block115, phi_bb113_8, phi_bb113_9, phi_bb113_10, tmp95);
  }

  TNode<BoolT> phi_bb114_8;
  TNode<String> phi_bb114_9;
  TNode<String> phi_bb114_10;
  TNode<Number> tmp96;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_8, &phi_bb114_9, &phi_bb114_10);
    tmp96 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{p_context}, TNode<Object>{tmp95});
    ca_.Goto(&block115, phi_bb114_8, phi_bb114_9, phi_bb114_10, tmp96);
  }

  TNode<BoolT> phi_bb115_8;
  TNode<String> phi_bb115_9;
  TNode<String> phi_bb115_10;
  TNode<Object> phi_bb115_12;
  TNode<Number> tmp97;
  TNode<Number> tmp98;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_8, &phi_bb115_9, &phi_bb115_10, &phi_bb115_12);
    tmp97 = UnsafeCast_Number_0(state_, TNode<Context>{p_context}, TNode<Object>{phi_bb115_12});
    tmp98 = RegExpBuiltinsAssembler(state_).AdvanceStringIndex(TNode<String>{p_string}, TNode<Number>{tmp97}, TNode<BoolT>{phi_bb21_5}, p_isFastPath);
    if ((p_isFastPath)) {
      ca_.Goto(&block120, phi_bb115_8, phi_bb115_9, phi_bb115_10);
    } else {
      ca_.Goto(&block121, phi_bb115_8, phi_bb115_9, phi_bb115_10);
    }
  }

  TNode<BoolT> phi_bb120_8;
  TNode<String> phi_bb120_9;
  TNode<String> phi_bb120_10;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_8, &phi_bb120_9, &phi_bb120_10);
    StaticAssertStringLengthFitsSmi_0(state_);
    ca_.Goto(&block122, phi_bb120_8, phi_bb120_9, phi_bb120_10);
  }

  TNode<BoolT> phi_bb121_8;
  TNode<String> phi_bb121_9;
  TNode<String> phi_bb121_10;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_8, &phi_bb121_9, &phi_bb121_10);
    ca_.Goto(&block122, phi_bb121_8, phi_bb121_9, phi_bb121_10);
  }

  TNode<BoolT> phi_bb122_8;
  TNode<String> phi_bb122_9;
  TNode<String> phi_bb122_10;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_8, &phi_bb122_9, &phi_bb122_10);
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, TNode<Number>{tmp98}, p_isFastPath);
    ca_.Goto(&block45, phi_bb89_5, phi_bb89_6, tmp84, phi_bb122_8, phi_bb122_9);
  }

  TNode<FixedArray> phi_bb44_5;
  TNode<IntPtrT> phi_bb44_6;
  TNode<IntPtrT> phi_bb44_7;
  TNode<BoolT> phi_bb44_8;
  TNode<String> phi_bb44_9;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_5, &phi_bb44_6, &phi_bb44_7, &phi_bb44_8, &phi_bb44_9);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block127, phi_bb1_3);
  }

  TNode<Object> phi_bb127_3;
    ca_.Bind(&block127, &phi_bb127_3);
  return TNode<Object>{phi_bb127_3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=123&c=1
TNode<Object> FastRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchBody_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_string}, true);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=128&c=1
TNode<Object> SlowRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RegExpPrototypeMatchBody_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_receiver}, TNode<String>{p_string}, false);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp0};
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

  TNode<Object> tmp0;
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
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kString);
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
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{parameter0}, TNode<Object>{parameter1}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@match");
    tmp0 = UnsafeCast_JSReceiver_0(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1});
    tmp1 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{parameter0}, TNode<Object>{parameter2});
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSRegExp_0(state_, TNode<Context>{parameter0}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block3);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block4);
    }
  }

  TNode<Object> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = SlowRegExpPrototypeMatchBody_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp0}, TNode<String>{tmp1});
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<Object> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kRegExpMatchFast), parameter0, tmp2, tmp1);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=25&c=12
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

} // namespace internal
} // namespace v8
