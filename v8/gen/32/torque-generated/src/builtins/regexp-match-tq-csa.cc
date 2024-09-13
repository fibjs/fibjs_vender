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
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/array-flat-tq-csa.h"
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=20&c=1
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
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, String> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, String> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, HeapObject> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, String, String, Object> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, String, String, Object> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, String, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block95(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block98(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, Object> block99(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block104(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
  TNode<TrustedObject> tmp15;
  TNode<RegExpData> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Smi> tmp18;
  TNode<Number> tmp19;
  TNode<BoolT> tmp20;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp14 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    tmp15 = CodeStubAssembler(state_).LoadTrustedPointerFromObject(TNode<HeapObject>{tmp14}, JSRegExp::kDataOffset, kRegExpDataIndirectPointerTag);
    tmp16 = UnsafeCast_RegExpData_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp15});
    tmp17 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp18 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp19 = FromConstexpr_Number_constexpr_uint32_0(state_, static_cast<uint8_t>(RegExpData::Type::ATOM));
    tmp20 = IsNumberEqual_0(state_, TNode<Number>{tmp18}, TNode<Number>{tmp19});
    ca_.Branch(tmp20, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{tmp12, tmp13});
  }

  TNode<AtomRegExpData> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<String> tmp23;
  TNode<BoolT> tmp24;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp21 = UnsafeCast_AtomRegExpData_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp16});
    tmp22 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp23 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp21, tmp22});
    tmp24 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block26, tmp24, tmp23);
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
    ca_.Goto(&block29, tmp9, tmp10, tmp11);
  }

  TNode<FixedArray> phi_bb29_5;
  TNode<IntPtrT> phi_bb29_6;
  TNode<IntPtrT> phi_bb29_7;
  TNode<BoolT> tmp25;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_5, &phi_bb29_6, &phi_bb29_7);
    tmp25 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp25, &block27, std::vector<compiler::Node*>{phi_bb29_5, phi_bb29_6, phi_bb29_7}, &block28, std::vector<compiler::Node*>{phi_bb29_5, phi_bb29_6, phi_bb29_7});
  }

  TNode<FixedArray> phi_bb27_5;
  TNode<IntPtrT> phi_bb27_6;
  TNode<IntPtrT> phi_bb27_7;
  TNode<String> tmp26;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5, &phi_bb27_6, &phi_bb27_7);
    tmp26 = CodeStubAssembler(state_).EmptyStringConstant();
    if ((p_isFastPath)) {
      ca_.Goto(&block34, phi_bb27_5, phi_bb27_6, phi_bb27_7);
    } else {
      ca_.Goto(&block35, phi_bb27_5, phi_bb27_6, phi_bb27_7);
    }
  }

  TNode<FixedArray> phi_bb34_5;
  TNode<IntPtrT> phi_bb34_6;
  TNode<IntPtrT> phi_bb34_7;
  TNode<JSRegExp> tmp27;
  TNode<RegExpMatchInfo> tmp28;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_5, &phi_bb34_6, &phi_bb34_7);
    tmp27 = UnsafeCast_JSRegExp_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp});
    compiler::CodeAssemblerLabel label29(&ca_);
    tmp28 = RegExpPrototypeExecBodyWithoutResultFast_0(state_, TNode<Context>{p_context}, TNode<JSRegExp>{tmp27}, TNode<String>{p_string}, &label29);
    ca_.Goto(&block37, phi_bb34_5, phi_bb34_6, phi_bb34_7);
    if (label29.is_used()) {
      ca_.Bind(&label29);
      ca_.Goto(&block38, phi_bb34_5, phi_bb34_6, phi_bb34_7);
    }
  }

  TNode<FixedArray> phi_bb38_5;
  TNode<IntPtrT> phi_bb38_6;
  TNode<IntPtrT> phi_bb38_7;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_5, &phi_bb38_6, &phi_bb38_7);
    ca_.Goto(&block33, phi_bb38_5, phi_bb38_6, phi_bb38_7);
  }

  TNode<FixedArray> phi_bb37_5;
  TNode<IntPtrT> phi_bb37_6;
  TNode<IntPtrT> phi_bb37_7;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_5, &phi_bb37_6, &phi_bb37_7);
    ca_.Branch(phi_bb24_8, &block39, std::vector<compiler::Node*>{phi_bb37_5, phi_bb37_6, phi_bb37_7}, &block40, std::vector<compiler::Node*>{phi_bb37_5, phi_bb37_6, phi_bb37_7});
  }

  TNode<FixedArray> phi_bb39_5;
  TNode<IntPtrT> phi_bb39_6;
  TNode<IntPtrT> phi_bb39_7;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_5, &phi_bb39_6, &phi_bb39_7);
    ca_.Goto(&block41, phi_bb39_5, phi_bb39_6, phi_bb39_7, phi_bb24_9);
  }

  TNode<FixedArray> phi_bb40_5;
  TNode<IntPtrT> phi_bb40_6;
  TNode<IntPtrT> phi_bb40_7;
  TNode<Smi> tmp30;
  TNode<Smi> tmp31;
  TNode<Smi> tmp32;
  TNode<Smi> tmp33;
  TNode<String> tmp34;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_5, &phi_bb40_6, &phi_bb40_7);
    tmp30 = Method_RegExpMatchInfo_GetStartOfCapture_0(state_, TNode<RegExpMatchInfo>{tmp28}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull))));
    tmp31 = Method_RegExpMatchInfo_GetEndOfCapture_0(state_, TNode<RegExpMatchInfo>{tmp28}, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull))));
    tmp32 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp30});
    tmp33 = UnsafeCast_Smi_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp31});
    tmp34 = ca_.CallBuiltin<String>(Builtin::kSubString, p_context, p_string, tmp32, tmp33);
    ca_.Goto(&block41, phi_bb40_5, phi_bb40_6, phi_bb40_7, tmp34);
  }

  TNode<FixedArray> phi_bb41_5;
  TNode<IntPtrT> phi_bb41_6;
  TNode<IntPtrT> phi_bb41_7;
  TNode<String> phi_bb41_10;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_5, &phi_bb41_6, &phi_bb41_7, &phi_bb41_10);
    ca_.Goto(&block36, phi_bb41_5, phi_bb41_6, phi_bb41_7, phi_bb41_10);
  }

  TNode<FixedArray> phi_bb35_5;
  TNode<IntPtrT> phi_bb35_6;
  TNode<IntPtrT> phi_bb35_7;
  TNode<Object> tmp35;
  TNode<Null> tmp36;
  TNode<BoolT> tmp37;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_5, &phi_bb35_6, &phi_bb35_7);
    tmp35 = RegExpExec_0(state_, TNode<Context>{p_context}, TNode<JSReceiver>{p_regexp}, TNode<String>{p_string});
    tmp36 = Null_0(state_);
    tmp37 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp35}, TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block46, std::vector<compiler::Node*>{phi_bb35_5, phi_bb35_6, phi_bb35_7}, &block47, std::vector<compiler::Node*>{phi_bb35_5, phi_bb35_6, phi_bb35_7});
  }

  TNode<FixedArray> phi_bb46_5;
  TNode<IntPtrT> phi_bb46_6;
  TNode<IntPtrT> phi_bb46_7;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_5, &phi_bb46_6, &phi_bb46_7);
    ca_.Goto(&block33, phi_bb46_5, phi_bb46_6, phi_bb46_7);
  }

  TNode<FixedArray> phi_bb47_5;
  TNode<IntPtrT> phi_bb47_6;
  TNode<IntPtrT> phi_bb47_7;
  TNode<Smi> tmp38;
  TNode<Object> tmp39;
  TNode<String> tmp40;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_5, &phi_bb47_6, &phi_bb47_7);
    tmp38 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp39 = CodeStubAssembler(state_).GetProperty(TNode<Context>{p_context}, TNode<Object>{tmp35}, TNode<Object>{tmp38});
    tmp40 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{p_context}, TNode<Object>{tmp39});
    ca_.Goto(&block36, phi_bb47_5, phi_bb47_6, phi_bb47_7, tmp40);
  }

  TNode<FixedArray> phi_bb36_5;
  TNode<IntPtrT> phi_bb36_6;
  TNode<IntPtrT> phi_bb36_7;
  TNode<String> phi_bb36_10;
  TNode<BoolT> tmp41;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_5, &phi_bb36_6, &phi_bb36_7, &phi_bb36_10);
    tmp41 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb36_6}, TNode<IntPtrT>{phi_bb36_7});
    ca_.Branch(tmp41, &block72, std::vector<compiler::Node*>{phi_bb36_5, phi_bb36_6, phi_bb36_7, phi_bb36_10, phi_bb36_10, phi_bb36_10}, &block73, std::vector<compiler::Node*>{phi_bb36_5, phi_bb36_6, phi_bb36_7, phi_bb36_10, phi_bb36_10, phi_bb36_10});
  }

  TNode<FixedArray> phi_bb33_5;
  TNode<IntPtrT> phi_bb33_6;
  TNode<IntPtrT> phi_bb33_7;
  TNode<IntPtrT> tmp42;
  TNode<BoolT> tmp43;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_5, &phi_bb33_6, &phi_bb33_7);
    tmp42 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb33_7}, TNode<IntPtrT>{tmp42});
    ca_.Branch(tmp43, &block48, std::vector<compiler::Node*>{phi_bb33_5, phi_bb33_6, phi_bb33_7}, &block49, std::vector<compiler::Node*>{phi_bb33_5, phi_bb33_6, phi_bb33_7});
  }

  TNode<FixedArray> phi_bb48_5;
  TNode<IntPtrT> phi_bb48_6;
  TNode<IntPtrT> phi_bb48_7;
  TNode<Null> tmp44;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_5, &phi_bb48_6, &phi_bb48_7);
    tmp44 = Null_0(state_);
    ca_.Goto(&block50, phi_bb48_5, phi_bb48_6, phi_bb48_7, tmp44);
  }

  TNode<FixedArray> phi_bb49_5;
  TNode<IntPtrT> phi_bb49_6;
  TNode<IntPtrT> phi_bb49_7;
  TNode<NativeContext> tmp45;
  TNode<Map> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<Hole> tmp48;
  TNode<FixedArray> tmp49;
  TNode<Smi> tmp50;
  TNode<JSArray> tmp51;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_5, &phi_bb49_6, &phi_bb49_7);
    tmp45 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp46 = CodeStubAssembler(state_).LoadJSArrayElementsMap(ElementsKind::PACKED_ELEMENTS, TNode<NativeContext>{tmp45});
    tmp47 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp48 = TheHole_0(state_);
    tmp49 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb49_5}, TNode<IntPtrT>{tmp47}, TNode<IntPtrT>{phi_bb49_7}, TNode<IntPtrT>{phi_bb49_7}, TNode<Hole>{tmp48});
    tmp50 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{phi_bb49_7});
    tmp51 = CodeStubAssembler(state_).AllocateJSArray(TNode<Map>{tmp46}, TNode<FixedArrayBase>{tmp49}, TNode<Smi>{tmp50});
    ca_.Goto(&block50, phi_bb49_5, phi_bb49_6, phi_bb49_7, tmp51);
  }

  TNode<FixedArray> phi_bb50_5;
  TNode<IntPtrT> phi_bb50_6;
  TNode<IntPtrT> phi_bb50_7;
  TNode<HeapObject> phi_bb50_11;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_5, &phi_bb50_6, &phi_bb50_7, &phi_bb50_11);
    ca_.Goto(&block1, phi_bb50_11);
  }

  TNode<FixedArray> phi_bb72_5;
  TNode<IntPtrT> phi_bb72_6;
  TNode<IntPtrT> phi_bb72_7;
  TNode<String> phi_bb72_10;
  TNode<String> phi_bb72_11;
  TNode<Object> phi_bb72_12;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<IntPtrT> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<Hole> tmp58;
  TNode<FixedArray> tmp59;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_5, &phi_bb72_6, &phi_bb72_7, &phi_bb72_10, &phi_bb72_11, &phi_bb72_12);
    tmp52 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp53 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{phi_bb72_6}, TNode<IntPtrT>{tmp52});
    tmp54 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb72_6}, TNode<IntPtrT>{tmp53});
    tmp55 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x10ull));
    tmp56 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp54}, TNode<IntPtrT>{tmp55});
    tmp57 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp58 = TheHole_0(state_);
    tmp59 = ExtractFixedArray_0(state_, TNode<FixedArray>{phi_bb72_5}, TNode<IntPtrT>{tmp57}, TNode<IntPtrT>{phi_bb72_7}, TNode<IntPtrT>{tmp56}, TNode<Hole>{tmp58});
    ca_.Goto(&block73, tmp59, tmp56, phi_bb72_7, phi_bb72_10, phi_bb72_11, phi_bb72_12);
  }

  TNode<FixedArray> phi_bb73_5;
  TNode<IntPtrT> phi_bb73_6;
  TNode<IntPtrT> phi_bb73_7;
  TNode<String> phi_bb73_10;
  TNode<String> phi_bb73_11;
  TNode<Object> phi_bb73_12;
  TNode<Object> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<IntPtrT> tmp64;
  TNode<UintPtrT> tmp65;
  TNode<UintPtrT> tmp66;
  TNode<BoolT> tmp67;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_5, &phi_bb73_6, &phi_bb73_7, &phi_bb73_10, &phi_bb73_11, &phi_bb73_12);
    std::tie(tmp60, tmp61, tmp62) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb73_5}).Flatten();
    tmp63 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp64 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb73_7}, TNode<IntPtrT>{tmp63});
    tmp65 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb73_7});
    tmp66 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp62});
    tmp67 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp65}, TNode<UintPtrT>{tmp66});
    ca_.Branch(tmp67, &block91, std::vector<compiler::Node*>{phi_bb73_10, phi_bb73_11, phi_bb73_12, phi_bb73_7, phi_bb73_7, phi_bb73_7, phi_bb73_7}, &block92, std::vector<compiler::Node*>{phi_bb73_10, phi_bb73_11, phi_bb73_12, phi_bb73_7, phi_bb73_7, phi_bb73_7, phi_bb73_7});
  }

  TNode<String> phi_bb91_10;
  TNode<String> phi_bb91_11;
  TNode<Object> phi_bb91_12;
  TNode<IntPtrT> phi_bb91_17;
  TNode<IntPtrT> phi_bb91_18;
  TNode<IntPtrT> phi_bb91_22;
  TNode<IntPtrT> phi_bb91_23;
  TNode<IntPtrT> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<Object> tmp70;
  TNode<IntPtrT> tmp71;
  TNode<Smi> tmp72;
  TNode<Smi> tmp73;
  TNode<BoolT> tmp74;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_10, &phi_bb91_11, &phi_bb91_12, &phi_bb91_17, &phi_bb91_18, &phi_bb91_22, &phi_bb91_23);
    tmp68 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb91_23});
    tmp69 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp61}, TNode<IntPtrT>{tmp68});
    std::tie(tmp70, tmp71) = NewReference_Object_0(state_, TNode<Object>{tmp60}, TNode<IntPtrT>{tmp69}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp70, tmp71}, phi_bb91_12);
    tmp72 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{phi_bb91_10});
    tmp73 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp74 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp72}, TNode<Smi>{tmp73});
    ca_.Branch(tmp74, &block95, std::vector<compiler::Node*>{phi_bb91_10}, &block96, std::vector<compiler::Node*>{phi_bb91_10});
  }

  TNode<String> phi_bb92_10;
  TNode<String> phi_bb92_11;
  TNode<Object> phi_bb92_12;
  TNode<IntPtrT> phi_bb92_17;
  TNode<IntPtrT> phi_bb92_18;
  TNode<IntPtrT> phi_bb92_22;
  TNode<IntPtrT> phi_bb92_23;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_10, &phi_bb92_11, &phi_bb92_12, &phi_bb92_17, &phi_bb92_18, &phi_bb92_22, &phi_bb92_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb95_10;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_10);
    ca_.Goto(&block29, phi_bb73_5, phi_bb73_6, tmp64);
  }

  TNode<String> phi_bb96_10;
  TNode<Object> tmp75;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_10);
    tmp75 = LoadLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, p_isFastPath);
    if ((p_isFastPath)) {
      ca_.Goto(&block97, phi_bb96_10);
    } else {
      ca_.Goto(&block98, phi_bb96_10);
    }
  }

  TNode<String> phi_bb97_10;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_10);
    ca_.Goto(&block99, phi_bb97_10, tmp75);
  }

  TNode<String> phi_bb98_10;
  TNode<Number> tmp76;
  if (block98.is_used()) {
    ca_.Bind(&block98, &phi_bb98_10);
    tmp76 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{p_context}, TNode<Object>{tmp75});
    ca_.Goto(&block99, phi_bb98_10, tmp76);
  }

  TNode<String> phi_bb99_10;
  TNode<Object> phi_bb99_12;
  TNode<Number> tmp77;
  TNode<Number> tmp78;
  if (block99.is_used()) {
    ca_.Bind(&block99, &phi_bb99_10, &phi_bb99_12);
    tmp77 = UnsafeCast_Number_0(state_, TNode<Context>{p_context}, TNode<Object>{phi_bb99_12});
    tmp78 = RegExpBuiltinsAssembler(state_).AdvanceStringIndex(TNode<String>{p_string}, TNode<Number>{tmp77}, TNode<BoolT>{phi_bb21_5}, p_isFastPath);
    if ((p_isFastPath)) {
      ca_.Goto(&block104, phi_bb99_10);
    } else {
      ca_.Goto(&block105, phi_bb99_10);
    }
  }

  TNode<String> phi_bb104_10;
  if (block104.is_used()) {
    ca_.Bind(&block104, &phi_bb104_10);
    StaticAssertStringLengthFitsSmi_0(state_);
    ca_.Goto(&block106, phi_bb104_10);
  }

  TNode<String> phi_bb105_10;
  if (block105.is_used()) {
    ca_.Bind(&block105, &phi_bb105_10);
    ca_.Goto(&block106, phi_bb105_10);
  }

  TNode<String> phi_bb106_10;
  if (block106.is_used()) {
    ca_.Bind(&block106, &phi_bb106_10);
    StoreLastIndex_0(state_, TNode<Context>{p_context}, TNode<Object>{p_regexp}, TNode<Number>{tmp78}, p_isFastPath);
    ca_.Goto(&block29, phi_bb73_5, phi_bb73_6, tmp64);
  }

  TNode<FixedArray> phi_bb28_5;
  TNode<IntPtrT> phi_bb28_6;
  TNode<IntPtrT> phi_bb28_7;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5, &phi_bb28_6, &phi_bb28_7);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block111, phi_bb1_3);
  }

  TNode<Object> phi_bb111_3;
    ca_.Bind(&block111, &phi_bb111_3);
  return TNode<Object>{phi_bb111_3};
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
    tmp5 = ca_.CallBuiltin<Object>(Builtin::kRegExpMatchFast, parameter0, tmp2, tmp1);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=24&c=12
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=51&c=9
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=55&c=22
TNode<AtomRegExpData> UnsafeCast_AtomRegExpData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<AtomRegExpData> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<AtomRegExpData>{tmp0};
}

} // namespace internal
} // namespace v8
