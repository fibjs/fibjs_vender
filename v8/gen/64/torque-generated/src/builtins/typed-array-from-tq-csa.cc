#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
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
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/wasm-linkage.h"
// Required Builtins:
#include "torque-generated/src/builtins/typed-array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-isarray-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-from-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/js-function-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-from.tq?l=8&c=1
const char* kBuiltinNameFrom_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  return "%TypedArray%.from";}

TF_BUILTIN(TypedArrayFrom, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT, Object> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT, UintPtrT, UintPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT, UintPtrT, UintPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, Object, UintPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<JSReceiver> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Constructor_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label7);
    ca_.Goto(&block5);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotConstructor, TNode<Object>{parameter1});
  }

  TNode<Undefined> tmp8;
  TNode<BoolT> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp8 = Undefined_0(state_);
    tmp9 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp3}, TNode<HeapObject>{tmp8});
    ca_.Branch(tmp9, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = Is_Callable_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3});
    tmp11 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp10});
    ca_.Goto(&block11, tmp11);
  }

  TNode<BoolT> tmp12;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block11, tmp12);
  }

  TNode<BoolT> phi_bb11_12;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_12);
    ca_.Branch(phi_bb11_12, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, tmp3);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Symbol> tmp13;
  TNode<JSReceiver> tmp14;
    compiler::TypedCodeAssemblerVariable<Object> tmp17(&ca_);
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = CodeStubAssembler(state_).IteratorSymbolConstant();
    compiler::CodeAssemblerLabel label15(&ca_);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp14 = GetMethod_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1}, TNode<Name>{tmp13}, &label15, &label16, &tmp17);
    ca_.Goto(&block16);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block17);
    }
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block18);
    }
  }

  TNode<JSReceiver> tmp18;
  TNode<Number> tmp19;
  TNode<UintPtrT> tmp20;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp18 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<Object>{tmp1});
    tmp19 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp18});
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = ChangeSafeIntegerNumberToUintPtr_0(state_, TNode<Number>{tmp19}, &label21);
    ca_.Goto(&block43);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block44);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kFirstArgumentIteratorSymbolNonCallable, kBuiltinNameFrom_0(state_));
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Branch(tmp9, &block21, std::vector<compiler::Node*>{}, &block22, std::vector<compiler::Node*>{});
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.Goto(&block20, ca_.Uninitialized<UintPtrT>());
  }

  TNode<JSFunction> tmp22;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    compiler::CodeAssemblerLabel label23(&ca_);
    tmp22 = Cast_JSFunction_0(state_, TNode<HeapObject>{tmp14}, &label23);
    ca_.Goto(&block23);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block24);
    }
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.Goto(&block20, ca_.Uninitialized<UintPtrT>());
  }

  TNode<BoolT> tmp24;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp24 = CodeStubAssembler(state_).IsArrayIteratorProtectorCellInvalid();
    ca_.Branch(tmp24, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    ca_.Goto(&block20, ca_.Uninitialized<UintPtrT>());
  }

  TNode<JSArray> tmp25;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = Cast_JSArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1}, &label26);
    ca_.Goto(&block29);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block30);
    }
  }

  TNode<JSTypedArray> tmp27;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    compiler::CodeAssemblerLabel label28(&ca_);
    tmp27 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(tmp1)}, &label28);
    ca_.Goto(&block35);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block36);
    }
  }

  TNode<IntPtrT> tmp29;
  TNode<SharedFunctionInfo> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<Smi> tmp33;
  TNode<BoolT> tmp34;
  TNode<BoolT> tmp35;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp29 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp30 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp22, tmp29});
    tmp31 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp32 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp30, tmp31});
    tmp33 = CodeStubAssembler(state_).SmiConstant(Builtin::kArrayPrototypeValues);
    tmp34 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp32}, TNode<MaybeObject>{tmp33});
    tmp35 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp34});
    ca_.Branch(tmp35, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    ca_.Goto(&block20, ca_.Uninitialized<UintPtrT>());
  }

  TNode<IntPtrT> tmp36;
  TNode<Number> tmp37;
  TNode<UintPtrT> tmp38;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp36 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp37 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp25, tmp36});
    tmp38 = Convert_uintptr_Number_0(state_, TNode<Number>{tmp37});
    ca_.Goto(&block27, tmp38);
  }

  if (block36.is_used()) {
    ca_.Bind(&block36);
    ca_.Goto(&block20, ca_.Uninitialized<UintPtrT>());
  }

  TNode<UintPtrT> tmp39;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    compiler::CodeAssemblerLabel label40(&ca_);
    tmp39 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{tmp27}, &label40);
    ca_.Goto(&block37);
    if (label40.is_used()) {
      ca_.Bind(&label40);
      ca_.Goto(&block38);
    }
  }

  if (block38.is_used()) {
    ca_.Bind(&block38);
    ca_.Goto(&block20, ca_.Uninitialized<UintPtrT>());
  }

  TNode<IntPtrT> tmp41;
  TNode<SharedFunctionInfo> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<Smi> tmp45;
  TNode<BoolT> tmp46;
  TNode<BoolT> tmp47;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp41 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp42 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp22, tmp41});
    tmp43 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp44 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp42, tmp43});
    tmp45 = CodeStubAssembler(state_).SmiConstant(Builtin::kTypedArrayPrototypeValues);
    tmp46 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp44}, TNode<MaybeObject>{tmp45});
    tmp47 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp46});
    ca_.Branch(tmp47, &block39, std::vector<compiler::Node*>{}, &block40, std::vector<compiler::Node*>{});
  }

  if (block39.is_used()) {
    ca_.Bind(&block39);
    ca_.Goto(&block20, tmp39);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    ca_.Goto(&block27, tmp39);
  }

  TNode<UintPtrT> phi_bb27_11;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_11);
    ca_.Goto(&block19, phi_bb27_11, tmp1);
  }

  TNode<UintPtrT> phi_bb20_11;
  TNode<JSArray> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Number> tmp50;
  TNode<UintPtrT> tmp51;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_11);
    tmp48 = ca_.CallStub<JSArray>(Builtins::CallableFor(ca_.isolate(), Builtin::kIterableToList), parameter0, tmp1, tmp14);
    tmp49 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp50 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp48, tmp49});
    tmp51 = Convert_uintptr_Number_0(state_, TNode<Number>{tmp50});
    ca_.Goto(&block19, tmp51, tmp48);
  }

  TNode<UintPtrT> phi_bb19_11;
  TNode<Object> phi_bb19_12;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_11, &phi_bb19_12);
    ca_.Goto(&block14, phi_bb19_11, phi_bb19_12);
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidTypedArrayLength, TNode<Object>{tmp19});
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    ca_.Goto(&block14, tmp20, tmp18);
  }

  TNode<UintPtrT> phi_bb14_11;
  TNode<Object> phi_bb14_12;
  TNode<Number> tmp52;
  TNode<JSTypedArray> tmp53;
  TNode<BoolT> tmp54;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_11, &phi_bb14_12);
    tmp52 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{phi_bb14_11});
    tmp53 = TypedArrayCreateByLength_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp6}, TNode<Number>{tmp52}, kBuiltinNameFrom_0(state_));
    tmp54 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp9});
    ca_.Branch(tmp54, &block45, std::vector<compiler::Node*>{phi_bb14_11, phi_bb14_12}, &block46, std::vector<compiler::Node*>{phi_bb14_11, phi_bb14_12});
  }

  TNode<UintPtrT> phi_bb45_11;
  TNode<Object> phi_bb45_12;
  TNode<UintPtrT> tmp55;
  TNode<BoolT> tmp56;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_11, &phi_bb45_12);
    tmp55 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp56 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{phi_bb45_11}, TNode<UintPtrT>{tmp55});
    ca_.Branch(tmp56, &block47, std::vector<compiler::Node*>{phi_bb45_11, phi_bb45_12}, &block48, std::vector<compiler::Node*>{phi_bb45_11, phi_bb45_12});
  }

  TNode<UintPtrT> phi_bb47_11;
  TNode<Object> phi_bb47_12;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_11, &phi_bb47_12);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, parameter0, tmp53, phi_bb47_12, tmp52);
    ca_.Goto(&block48, phi_bb47_11, phi_bb47_12);
  }

  TNode<UintPtrT> phi_bb48_11;
  TNode<Object> phi_bb48_12;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_11, &phi_bb48_12);
    arguments.PopAndReturn(tmp53);
  }

  TNode<UintPtrT> phi_bb46_11;
  TNode<Object> phi_bb46_12;
  TNode<JSReceiver> tmp57;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_11, &phi_bb46_12);
    compiler::CodeAssemblerLabel label58(&ca_);
    tmp57 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, &label58);
    ca_.Goto(&block51, phi_bb46_11, phi_bb46_12);
    if (label58.is_used()) {
      ca_.Bind(&label58);
      ca_.Goto(&block52, phi_bb46_11, phi_bb46_12);
    }
  }

  TNode<UintPtrT> phi_bb52_11;
  TNode<Object> phi_bb52_12;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_11, &phi_bb52_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> phi_bb51_11;
  TNode<Object> phi_bb51_12;
  TNode<Int32T> tmp59;
  TNode<BuiltinPtr> tmp60;
  TNode<BuiltinPtr> tmp61;
  TNode<BuiltinPtr> tmp62;
  TNode<UintPtrT> tmp63;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_11, &phi_bb51_12);
    tmp59 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp53});
    std::tie(tmp60, tmp61, tmp62) = GetTypedArrayAccessor_0(state_, TNode<Int32T>{tmp59}).Flatten();
    tmp63 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block55, phi_bb51_11, phi_bb51_12, tmp63);
  }

  TNode<UintPtrT> phi_bb55_11;
  TNode<Object> phi_bb55_12;
  TNode<UintPtrT> phi_bb55_19;
  TNode<BoolT> tmp64;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_11, &phi_bb55_12, &phi_bb55_19);
    tmp64 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb55_19}, TNode<UintPtrT>{phi_bb55_11});
    ca_.Branch(tmp64, &block53, std::vector<compiler::Node*>{phi_bb55_11, phi_bb55_12, phi_bb55_19}, &block54, std::vector<compiler::Node*>{phi_bb55_11, phi_bb55_12, phi_bb55_19});
  }

  TNode<UintPtrT> phi_bb53_11;
  TNode<Object> phi_bb53_12;
  TNode<UintPtrT> phi_bb53_19;
  TNode<Number> tmp65;
  TNode<Object> tmp66;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_11, &phi_bb53_12, &phi_bb53_19);
    tmp65 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{phi_bb53_19});
    tmp66 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<Object>{phi_bb53_12}, TNode<Object>{tmp65});
    ca_.Branch(tmp9, &block57, std::vector<compiler::Node*>{phi_bb53_11, phi_bb53_12, phi_bb53_19}, &block58, std::vector<compiler::Node*>{phi_bb53_11, phi_bb53_12, phi_bb53_19});
  }

  TNode<UintPtrT> phi_bb57_11;
  TNode<Object> phi_bb57_12;
  TNode<UintPtrT> phi_bb57_19;
  TNode<Object> tmp67;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_11, &phi_bb57_12, &phi_bb57_19);
    tmp67 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<Object>{tmp57}, TNode<Object>{tmp5}, TNode<Object>{tmp66}, TNode<Object>{tmp65});
    ca_.Goto(&block59, phi_bb57_11, phi_bb57_12, phi_bb57_19, tmp67);
  }

  TNode<UintPtrT> phi_bb58_11;
  TNode<Object> phi_bb58_12;
  TNode<UintPtrT> phi_bb58_19;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_11, &phi_bb58_12, &phi_bb58_19);
    ca_.Goto(&block59, phi_bb58_11, phi_bb58_12, phi_bb58_19, tmp66);
  }

  TNode<UintPtrT> phi_bb59_11;
  TNode<Object> phi_bb59_12;
  TNode<UintPtrT> phi_bb59_19;
  TNode<Object> phi_bb59_22;
  TNode<Smi> tmp68;
  TNode<Smi> tmp69;
  TNode<BoolT> tmp70;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_11, &phi_bb59_12, &phi_bb59_19, &phi_bb59_22);
tmp68 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp62, parameter0, tmp53, phi_bb59_19, phi_bb59_22));
    tmp69 = kStoreFailureArrayDetachedOrOutOfBounds_0(state_);
    tmp70 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp68}, TNode<Smi>{tmp69});
    ca_.Branch(tmp70, &block61, std::vector<compiler::Node*>{phi_bb59_11, phi_bb59_12, phi_bb59_19, phi_bb59_19, phi_bb59_19}, &block62, std::vector<compiler::Node*>{phi_bb59_11, phi_bb59_12, phi_bb59_19, phi_bb59_19, phi_bb59_19});
  }

  TNode<UintPtrT> phi_bb61_11;
  TNode<Object> phi_bb61_12;
  TNode<UintPtrT> phi_bb61_19;
  TNode<UintPtrT> phi_bb61_28;
  TNode<UintPtrT> phi_bb61_32;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_11, &phi_bb61_12, &phi_bb61_19, &phi_bb61_28, &phi_bb61_32);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kDetachedOperation, kBuiltinNameFrom_0(state_));
  }

  TNode<UintPtrT> phi_bb62_11;
  TNode<Object> phi_bb62_12;
  TNode<UintPtrT> phi_bb62_19;
  TNode<UintPtrT> phi_bb62_28;
  TNode<UintPtrT> phi_bb62_32;
  TNode<UintPtrT> tmp71;
  TNode<UintPtrT> tmp72;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_11, &phi_bb62_12, &phi_bb62_19, &phi_bb62_28, &phi_bb62_32);
    tmp71 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp72 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb62_19}, TNode<UintPtrT>{tmp71});
    ca_.Goto(&block55, phi_bb62_11, phi_bb62_12, tmp72);
  }

  TNode<UintPtrT> phi_bb54_11;
  TNode<Object> phi_bb54_12;
  TNode<UintPtrT> phi_bb54_19;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_11, &phi_bb54_12, &phi_bb54_19);
    arguments.PopAndReturn(tmp53);
  }
}

} // namespace internal
} // namespace v8
