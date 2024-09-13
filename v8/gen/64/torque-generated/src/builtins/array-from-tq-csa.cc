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
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayFrom, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi, Object, HeapObject> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi, Object> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver, Smi, Object> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, JSReceiver, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).HasBuiltinSubclassingFlag();
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block3, parameter1);
  }

  TNode<JSFunction> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = GetArrayFunction_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block3, tmp1);
  }

  TNode<Object> phi_bb3_6;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_6);
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<JSFunction> tmp4;
  TNode<BoolT> tmp5;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp4 = GetArrayFunction_0(state_, TNode<Context>{parameter0});
    tmp5 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{phi_bb3_6}, TNode<HeapObject>{tmp4});
    ca_.Goto(&block9, tmp5);
  }

  TNode<BoolT> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block9, tmp6);
  }

  TNode<BoolT> phi_bb9_8;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_8);
    ca_.Branch(phi_bb9_8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<JSArray> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp7 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp7});
    compiler::CodeAssemblerLabel label10(&ca_);
    tmp9 = IteratorBuiltinsAssembler(state_).FastIterableToList(TNode<Context>{parameter0}, TNode<Object>{tmp8}, &label10);
    ca_.Goto(&block12);
    if (label10.is_used()) {
      ca_.Bind(&label10);
      ca_.Goto(&block13);
    }
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block6);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    arguments.PopAndReturn(tmp9);
  }

  TNode<IntPtrT> tmp11;
  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<Undefined> tmp17;
  TNode<BoolT> tmp18;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp11});
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp14 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp13});
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp16 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp15});
    tmp17 = Undefined_0(state_);
    tmp18 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp14}, TNode<HeapObject>{tmp17});
    ca_.Branch(tmp18, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp19;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block16, tmp19);
  }

  TNode<BoolT> tmp20;
  TNode<BoolT> tmp21;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp20 = Is_Callable_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp14});
    tmp21 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp20});
    ca_.Branch(tmp21, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, tmp14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> tmp22;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp22 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block16, tmp22);
  }

  TNode<BoolT> phi_bb16_10;
  TNode<Symbol> tmp23;
  TNode<JSReceiver> tmp24;
    compiler::TypedCodeAssemblerVariable<Object> tmp27(&ca_);
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_10);
    tmp23 = CodeStubAssembler(state_).IteratorSymbolConstant();
    compiler::CodeAssemblerLabel label25(&ca_);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp24 = GetMethod_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp12}, TNode<Name>{tmp23}, &label25, &label26, &tmp27);
    ca_.Goto(&block23, phi_bb16_10);
    if (label25.is_used()) {
      ca_.Bind(&label25);
      ca_.Goto(&block24, phi_bb16_10);
    }
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block25, phi_bb16_10);
    }
  }

  TNode<BoolT> phi_bb24_10;
  TNode<JSReceiver> tmp28;
  TNode<Number> tmp29;
  TNode<JSFunction> tmp30;
  TNode<BoolT> tmp31;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_10);
    tmp28 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp12});
    tmp29 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp28});
    tmp30 = GetArrayFunction_0(state_, TNode<Context>{parameter0});
    tmp31 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{phi_bb3_6}, TNode<HeapObject>{tmp30});
    ca_.Branch(tmp31, &block53, std::vector<compiler::Node*>{phi_bb24_10}, &block54, std::vector<compiler::Node*>{phi_bb24_10});
  }

  TNode<BoolT> phi_bb25_10;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_10);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kFirstArgumentIteratorSymbolNonCallable, "%Array%.from");
  }

  TNode<BoolT> phi_bb23_10;
  TNode<JSReceiver> tmp32;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_10);
    compiler::CodeAssemblerLabel label33(&ca_);
    tmp32 = Cast_Constructor_1(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb3_6}, &label33);
    ca_.Goto(&block28, phi_bb23_10);
    if (label33.is_used()) {
      ca_.Bind(&label33);
      ca_.Goto(&block29, phi_bb23_10);
    }
  }

  TNode<BoolT> phi_bb29_10;
  TNode<Number> tmp34;
  TNode<JSArray> tmp35;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_10);
    tmp34 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp35 = CodeStubAssembler(state_).ArrayCreate(TNode<Context>{parameter0}, TNode<Number>{tmp34});
    ca_.Goto(&block26, phi_bb29_10, tmp35);
  }

  TNode<BoolT> phi_bb28_10;
  TNode<JSReceiver> tmp36;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_10);
    tmp36 = CodeStubAssembler(state_).Construct(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp32});
    ca_.Goto(&block26, phi_bb28_10, tmp36);
  }

  TNode<BoolT> phi_bb26_10;
  TNode<JSReceiver> phi_bb26_12;
  TNode<JSReceiver> tmp37;
  TNode<Object> tmp38;
  TNode<Map> tmp39;
  TNode<Smi> tmp40;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_10, &phi_bb26_12);
    std::tie(tmp37, tmp38) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{parameter0}, TNode<Object>{tmp12}, TNode<Object>{tmp24}).Flatten();
    tmp39 = GetIteratorResultMap_0(state_, TNode<Context>{parameter0});
    tmp40 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block32, phi_bb26_10, tmp40);
  }

  TNode<BoolT> phi_bb32_10;
  TNode<Smi> phi_bb32_16;
  TNode<BoolT> tmp41;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_10, &phi_bb32_16);
    tmp41 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp41, &block30, std::vector<compiler::Node*>{phi_bb32_10, phi_bb32_16}, &block31, std::vector<compiler::Node*>{phi_bb32_10, phi_bb32_16});
  }

  TNode<BoolT> phi_bb30_10;
  TNode<Smi> phi_bb30_16;
  TNode<JSReceiver> tmp42;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_10, &phi_bb30_16);
    compiler::CodeAssemblerLabel label43(&ca_);
    tmp42 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp37}, TNode<Object>{tmp38}}, TNode<Map>{tmp39}, &label43);
    ca_.Goto(&block39, phi_bb30_10, phi_bb30_16);
    if (label43.is_used()) {
      ca_.Bind(&label43);
      ca_.Goto(&block40, phi_bb30_10, phi_bb30_16);
    }
  }

  TNode<BoolT> phi_bb40_10;
  TNode<Smi> phi_bb40_16;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_10, &phi_bb40_16);
    CodeStubAssembler(state_).SetPropertyLength(TNode<Context>{parameter0}, TNode<Object>{phi_bb26_12}, TNode<Number>{phi_bb40_16});
    arguments.PopAndReturn(phi_bb26_12);
  }

  TNode<BoolT> phi_bb39_10;
  TNode<Smi> phi_bb39_16;
  TNode<Object> tmp44;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_10, &phi_bb39_16);
    tmp44 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp42}, TNode<Map>{tmp39});
    ca_.Branch(phi_bb39_10, &block41, std::vector<compiler::Node*>{phi_bb39_10, phi_bb39_16}, &block42, std::vector<compiler::Node*>{phi_bb39_10, phi_bb39_16});
  }

  TNode<BoolT> phi_bb41_10;
  TNode<Smi> phi_bb41_16;
  TNode<JSReceiver> tmp45;
      TNode<Object> tmp47;
  TNode<Object> tmp48;
      TNode<Object> tmp50;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_10, &phi_bb41_16);
    compiler::CodeAssemblerExceptionHandlerLabel catch46__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch46__label);
    tmp45 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp14});
    }
    if (catch46__label.is_used()) {
      compiler::CodeAssemblerLabel catch46_skip(&ca_);
      ca_.Goto(&catch46_skip);
      ca_.Bind(&catch46__label, &tmp47);
      ca_.Goto(&block46, phi_bb41_10, phi_bb41_16);
      ca_.Bind(&catch46_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch49__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch49__label);
    tmp48 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp45}, TNode<Object>{tmp16}, TNode<Object>{tmp44}, TNode<Object>{phi_bb41_16});
    }
    if (catch49__label.is_used()) {
      compiler::CodeAssemblerLabel catch49_skip(&ca_);
      ca_.Goto(&catch49_skip);
      ca_.Bind(&catch49__label, &tmp50);
      ca_.Goto(&block47, phi_bb41_10, phi_bb41_16, phi_bb41_16);
      ca_.Bind(&catch49_skip);
    }
    ca_.Goto(&block43, phi_bb41_10, phi_bb41_16, tmp48);
  }

  TNode<BoolT> phi_bb46_10;
  TNode<Smi> phi_bb46_16;
  TNode<HeapObject> tmp51;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_10, &phi_bb46_16);
    tmp51 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block45, phi_bb46_10, phi_bb46_16, tmp47, tmp51);
  }

  TNode<BoolT> phi_bb47_10;
  TNode<Smi> phi_bb47_16;
  TNode<Smi> phi_bb47_24;
  TNode<HeapObject> tmp52;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_10, &phi_bb47_16, &phi_bb47_24);
    tmp52 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block45, phi_bb47_10, phi_bb47_16, tmp50, tmp52);
  }

  TNode<BoolT> phi_bb45_10;
  TNode<Smi> phi_bb45_16;
  TNode<Object> phi_bb45_20;
  TNode<HeapObject> phi_bb45_21;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_10, &phi_bb45_16, &phi_bb45_20, &phi_bb45_21);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp37}, TNode<Object>{tmp38}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, phi_bb45_20, phi_bb45_21);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb42_10;
  TNode<Smi> phi_bb42_16;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_10, &phi_bb42_16);
    ca_.Goto(&block43, phi_bb42_10, phi_bb42_16, tmp44);
  }

  TNode<BoolT> phi_bb43_10;
  TNode<Smi> phi_bb43_16;
  TNode<Object> phi_bb43_19;
  TNode<Object> tmp53;
      TNode<Object> tmp55;
  TNode<Smi> tmp56;
  TNode<Smi> tmp57;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_10, &phi_bb43_16, &phi_bb43_19);
    compiler::CodeAssemblerExceptionHandlerLabel catch54__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch54__label);
    tmp53 = ca_.CallBuiltin<Object>(Builtin::kFastCreateDataProperty, parameter0, phi_bb26_12, phi_bb43_16, phi_bb43_19);
    }
    if (catch54__label.is_used()) {
      compiler::CodeAssemblerLabel catch54_skip(&ca_);
      ca_.Goto(&catch54_skip);
      ca_.Bind(&catch54__label, &tmp55);
      ca_.Goto(&block50, phi_bb43_10, phi_bb43_16, phi_bb43_16);
      ca_.Bind(&catch54_skip);
    }
    tmp56 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp57 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb43_16}, TNode<Smi>{tmp56});
    ca_.Goto(&block32, phi_bb43_10, tmp57);
  }

  TNode<BoolT> phi_bb50_10;
  TNode<Smi> phi_bb50_16;
  TNode<Smi> phi_bb50_21;
  TNode<HeapObject> tmp58;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_10, &phi_bb50_16, &phi_bb50_21);
    tmp58 = GetAndResetPendingMessage_0(state_);
    IteratorCloseOnException_0(state_, TNode<Context>{parameter0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp37}, TNode<Object>{tmp38}});
    CodeStubAssembler(state_).CallRuntime(Runtime::kReThrowWithMessage, parameter0, tmp55, tmp58);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb31_10;
  TNode<Smi> phi_bb31_16;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_10, &phi_bb31_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<BoolT> phi_bb53_10;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_10);
    ca_.Goto(&block52, phi_bb53_10);
  }

  TNode<BoolT> phi_bb54_10;
  TNode<Number> tmp59;
  TNode<BoolT> tmp60;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_10);
    tmp59 = FromConstexpr_Number_constexpr_int31_0(state_, JSArray::kMaxFastArrayLength);
    tmp60 = NumberIsGreaterThan_0(state_, TNode<Number>{tmp29}, TNode<Number>{tmp59});
    ca_.Branch(tmp60, &block55, std::vector<compiler::Node*>{phi_bb54_10}, &block56, std::vector<compiler::Node*>{phi_bb54_10});
  }

  TNode<BoolT> phi_bb55_10;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_10);
    ca_.Goto(&block52, phi_bb55_10);
  }

  TNode<BoolT> phi_bb56_10;
  TNode<Smi> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<Map> tmp63;
  TNode<JSArray> tmp64;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_10);
    tmp61 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp62 = Convert_intptr_Number_0(state_, TNode<Number>{tmp29});
    tmp63 = GetFastPackedSmiElementsJSArrayMap_0(state_, TNode<Context>{parameter0});
    tmp64 = CodeStubAssembler(state_).AllocateJSArray(ElementsKind::PACKED_SMI_ELEMENTS, TNode<Map>{tmp63}, TNode<IntPtrT>{tmp62}, TNode<Smi>{tmp61});
    ca_.Goto(&block51, phi_bb56_10, tmp64);
  }

  TNode<BoolT> phi_bb52_10;
  TNode<JSReceiver> tmp65;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_10);
    compiler::CodeAssemblerLabel label66(&ca_);
    tmp65 = Cast_Constructor_1(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb3_6}, &label66);
    ca_.Goto(&block59, phi_bb52_10);
    if (label66.is_used()) {
      ca_.Bind(&label66);
      ca_.Goto(&block60, phi_bb52_10);
    }
  }

  TNode<BoolT> phi_bb60_10;
  TNode<JSArray> tmp67;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_10);
    tmp67 = CodeStubAssembler(state_).ArrayCreate(TNode<Context>{parameter0}, TNode<Number>{tmp29});
    ca_.Goto(&block57, phi_bb60_10, tmp67);
  }

  TNode<BoolT> phi_bb59_10;
  TNode<JSReceiver> tmp68;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_10);
    tmp68 = CodeStubAssembler(state_).Construct(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp65}, TNode<Object>{tmp29});
    ca_.Goto(&block57, phi_bb59_10, tmp68);
  }

  TNode<BoolT> phi_bb57_10;
  TNode<JSReceiver> phi_bb57_13;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_10, &phi_bb57_13);
    ca_.Goto(&block51, phi_bb57_10, phi_bb57_13);
  }

  TNode<BoolT> phi_bb51_10;
  TNode<JSReceiver> phi_bb51_13;
  TNode<Smi> tmp69;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_10, &phi_bb51_13);
    tmp69 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block63, phi_bb51_10, phi_bb51_13, tmp69);
  }

  TNode<BoolT> phi_bb63_10;
  TNode<JSReceiver> phi_bb63_13;
  TNode<Smi> phi_bb63_14;
  TNode<BoolT> tmp70;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_10, &phi_bb63_13, &phi_bb63_14);
    tmp70 = NumberIsLessThan_0(state_, TNode<Number>{phi_bb63_14}, TNode<Number>{tmp29});
    ca_.Branch(tmp70, &block61, std::vector<compiler::Node*>{phi_bb63_10, phi_bb63_13, phi_bb63_14}, &block62, std::vector<compiler::Node*>{phi_bb63_10, phi_bb63_13, phi_bb63_14});
  }

  TNode<BoolT> phi_bb61_10;
  TNode<JSReceiver> phi_bb61_13;
  TNode<Smi> phi_bb61_14;
  TNode<Object> tmp71;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_10, &phi_bb61_13, &phi_bb61_14);
    tmp71 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{tmp28}, TNode<Object>{phi_bb61_14});
    ca_.Branch(phi_bb61_10, &block64, std::vector<compiler::Node*>{phi_bb61_10, phi_bb61_13, phi_bb61_14}, &block65, std::vector<compiler::Node*>{phi_bb61_10, phi_bb61_13, phi_bb61_14});
  }

  TNode<BoolT> phi_bb64_10;
  TNode<JSReceiver> phi_bb64_13;
  TNode<Smi> phi_bb64_14;
  TNode<JSReceiver> tmp72;
  TNode<Object> tmp73;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_10, &phi_bb64_13, &phi_bb64_14);
    tmp72 = UnsafeCast_Callable_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp14});
    tmp73 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp72}, TNode<Object>{tmp16}, TNode<Object>{tmp71}, TNode<Object>{phi_bb64_14});
    ca_.Goto(&block66, phi_bb64_10, phi_bb64_13, phi_bb64_14, tmp73);
  }

  TNode<BoolT> phi_bb65_10;
  TNode<JSReceiver> phi_bb65_13;
  TNode<Smi> phi_bb65_14;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_10, &phi_bb65_13, &phi_bb65_14);
    ca_.Goto(&block66, phi_bb65_10, phi_bb65_13, phi_bb65_14, tmp71);
  }

  TNode<BoolT> phi_bb66_10;
  TNode<JSReceiver> phi_bb66_13;
  TNode<Smi> phi_bb66_14;
  TNode<Object> phi_bb66_16;
  TNode<Object> tmp74;
  TNode<Smi> tmp75;
  TNode<Smi> tmp76;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_10, &phi_bb66_13, &phi_bb66_14, &phi_bb66_16);
    tmp74 = ca_.CallBuiltin<Object>(Builtin::kFastCreateDataProperty, parameter0, phi_bb66_13, phi_bb66_14, phi_bb66_16);
    tmp75 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp76 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb66_14}, TNode<Smi>{tmp75});
    ca_.Goto(&block63, phi_bb66_10, phi_bb66_13, tmp76);
  }

  TNode<BoolT> phi_bb62_10;
  TNode<JSReceiver> phi_bb62_13;
  TNode<Smi> phi_bb62_14;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_10, &phi_bb62_13, &phi_bb62_14);
    CodeStubAssembler(state_).SetPropertyLength(TNode<Context>{parameter0}, TNode<Object>{phi_bb62_13}, TNode<Number>{tmp29});
    arguments.PopAndReturn(phi_bb62_13);
  }
}

} // namespace internal
} // namespace v8
