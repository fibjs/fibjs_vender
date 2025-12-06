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
#include "torque-generated/src/builtins/typed-array-from-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-flat-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/set-difference-tq-csa.h"
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-from.tq?l=20&c=1
TNode<BoolT> CanCopyElementsFastNumber_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_source) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Map> tmp1;
  TNode<Int32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp1 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{p_source, tmp0});
    tmp2 = CodeStubAssembler(state_).LoadMapElementsKind(TNode<Map>{tmp1});
    tmp3 = CodeStubAssembler(state_).IsFastSmiElementsKind(TNode<Int32T>{tmp2});
    ca_.Branch(tmp3, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block4, tmp4);
  }

  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{tmp2});
    ca_.Goto(&block4, tmp5);
  }

  TNode<BoolT> phi_bb4_4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4);
    ca_.Goto(&block5);
  }

    ca_.Bind(&block5);
  return TNode<BoolT>{phi_bb4_4};
}

TF_BUILTIN(TypedArrayFrom, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSAny> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny, UintPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny, UintPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny, UintPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny, UintPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny, UintPtrT, JSAny> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT, JSAny, UintPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<JSAny> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<JSAny> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<JSAny> tmp5;
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
    ca_.Goto(&block3);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kNotConstructor, TNode<Object>{parameter1});
  }

  TNode<Undefined> tmp8;
  TNode<BoolT> tmp9;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp8 = Undefined_0(state_);
    tmp9 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp3}, TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp8});
    ca_.Branch(tmp9, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  TNode<BoolT> tmp11;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp10 = Is_Callable_JSAny_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{tmp3});
    tmp11 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp10});
    ca_.Goto(&block9, tmp11);
  }

  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block9, tmp12);
  }

  TNode<BoolT> phi_bb9_12;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_12);
    ca_.Branch(phi_bb9_12, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, tmp3);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Symbol> tmp13;
  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp14;
    compiler::TypedCodeAssemblerVariable<JSAny> tmp17(&ca_);
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp13 = CodeStubAssembler(state_).IteratorSymbolConstant();
    compiler::CodeAssemblerLabel label15(&ca_);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp14 = GetMethod_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{tmp1}, TNode<Union<String, Symbol>>{tmp13}, &label15, &label16, &tmp17);
    ca_.Goto(&block14);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block15);
    }
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block16);
    }
  }

  TNode<JSReceiver> tmp18;
  TNode<Number> tmp19;
  TNode<UintPtrT> tmp20;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp18 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<JSAny>{tmp1});
    tmp19 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{tmp18});
    compiler::CodeAssemblerLabel label21(&ca_);
    tmp20 = ChangeSafeIntegerNumberToUintPtr_0(state_, TNode<Number>{tmp19}, &label21);
    ca_.Goto(&block54);
    if (label21.is_used()) {
      ca_.Bind(&label21);
      ca_.Goto(&block55);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kFirstArgumentIteratorSymbolNonCallable, kBuiltinNameFrom_0(state_));
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Branch(tmp9, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<JSFunction> tmp22;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::CodeAssemblerLabel label23(&ca_);
    tmp22 = Cast_JSFunction_0(state_, TNode<HeapObject>{tmp14}, &label23);
    ca_.Goto(&block21);
    if (label23.is_used()) {
      ca_.Bind(&label23);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<BoolT> tmp24;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp24 = CodeStubAssembler(state_).IsArrayIteratorProtectorCellInvalid();
    ca_.Branch(tmp24, &block23, std::vector<compiler::Node*>{}, &block24, std::vector<compiler::Node*>{});
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<JSArray> tmp25;
  if (block24.is_used()) {
    ca_.Bind(&block24);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = Cast_JSArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp1}, &label26);
    ca_.Goto(&block27);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block28);
    }
  }

  TNode<JSTypedArray> tmp27;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    compiler::CodeAssemblerLabel label28(&ca_);
    tmp27 = Cast_JSTypedArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<JSAny>(tmp1)}, &label28);
    ca_.Goto(&block38);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block39);
    }
  }

  TNode<IntPtrT> tmp29;
  TNode<SharedFunctionInfo> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<Smi> tmp33;
  TNode<BoolT> tmp34;
  TNode<BoolT> tmp35;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp29 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp30 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp22, tmp29});
    tmp31 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp32 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp30, tmp31});
    tmp33 = CodeStubAssembler(state_).SmiConstant(Builtin::kArrayPrototypeValues);
    tmp34 = CodeStubAssembler(state_).TaggedEqual(TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>{tmp32}, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>{tmp33});
    tmp35 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp34});
    ca_.Branch(tmp35, &block29, std::vector<compiler::Node*>{}, &block30, std::vector<compiler::Node*>{});
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<IntPtrT> tmp36;
  TNode<Number> tmp37;
  TNode<UintPtrT> tmp38;
  TNode<BoolT> tmp39;
  if (block30.is_used()) {
    ca_.Bind(&block30);
    tmp36 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp37 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp25, tmp36});
    tmp38 = Convert_uintptr_Number_0(state_, TNode<Number>{tmp37});
    tmp39 = CanCopyElementsFastNumber_0(state_, TNode<JSArray>{tmp25});
    ca_.Branch(tmp39, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    ca_.Goto(&block33, tmp25);
  }

  TNode<JSArray> tmp40;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = IteratorBuiltinsAssembler(state_).FastIterableToList(TNode<Context>{parameter0}, TNode<JSAny>{tmp25}, &label41);
    ca_.Goto(&block34);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block35);
    }
  }

  if (block35.is_used()) {
    ca_.Bind(&block35);
    ca_.Goto(&block18, tmp38);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    ca_.Goto(&block33, tmp40);
  }

  TNode<JSAny> phi_bb33_12;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_12);
    ca_.Goto(&block25, tmp38, phi_bb33_12);
  }

  TNode<JSSet> tmp42;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    compiler::CodeAssemblerLabel label43(&ca_);
    tmp42 = Cast_JSSet_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<JSAny>(tmp1)}, &label43);
    ca_.Goto(&block46);
    if (label43.is_used()) {
      ca_.Bind(&label43);
      ca_.Goto(&block47);
    }
  }

  TNode<UintPtrT> tmp44;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    compiler::CodeAssemblerLabel label45(&ca_);
    tmp44 = CodeStubAssembler(state_).LoadJSTypedArrayLengthAndCheckDetached(TNode<JSTypedArray>{tmp27}, &label45);
    ca_.Goto(&block40);
    if (label45.is_used()) {
      ca_.Bind(&label45);
      ca_.Goto(&block41);
    }
  }

  if (block41.is_used()) {
    ca_.Bind(&block41);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<IntPtrT> tmp46;
  TNode<SharedFunctionInfo> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<Object> tmp49;
  TNode<Smi> tmp50;
  TNode<BoolT> tmp51;
  TNode<BoolT> tmp52;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp46 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp47 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp22, tmp46});
    tmp48 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp49 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp47, tmp48});
    tmp50 = CodeStubAssembler(state_).SmiConstant(Builtin::kTypedArrayPrototypeValues);
    tmp51 = CodeStubAssembler(state_).TaggedEqual(TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>{tmp49}, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>{tmp50});
    tmp52 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp51});
    ca_.Branch(tmp52, &block42, std::vector<compiler::Node*>{}, &block43, std::vector<compiler::Node*>{});
  }

  if (block42.is_used()) {
    ca_.Bind(&block42);
    ca_.Goto(&block18, tmp44);
  }

  if (block43.is_used()) {
    ca_.Bind(&block43);
    ca_.Goto(&block36, tmp44, tmp1);
  }

  if (block47.is_used()) {
    ca_.Bind(&block47);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<IntPtrT> tmp53;
  TNode<SharedFunctionInfo> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<Object> tmp56;
  TNode<Smi> tmp57;
  TNode<BoolT> tmp58;
  TNode<BoolT> tmp59;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    tmp53 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp54 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp22, tmp53});
    tmp55 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp56 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp54, tmp55});
    tmp57 = CodeStubAssembler(state_).SmiConstant(Builtin::kSetPrototypeValues);
    tmp58 = CodeStubAssembler(state_).TaggedEqual(TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>{tmp56}, TNode<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>{tmp57});
    tmp59 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp58});
    ca_.Branch(tmp59, &block48, std::vector<compiler::Node*>{}, &block49, std::vector<compiler::Node*>{});
  }

  if (block48.is_used()) {
    ca_.Bind(&block48);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<JSArray> tmp60;
  if (block49.is_used()) {
    ca_.Bind(&block49);
    compiler::CodeAssemblerLabel label61(&ca_);
    tmp60 = IteratorBuiltinsAssembler(state_).FastIterableToList(TNode<Context>{parameter0}, TNode<JSAny>{tmp42}, &label61);
    ca_.Goto(&block50);
    if (label61.is_used()) {
      ca_.Bind(&label61);
      ca_.Goto(&block51);
    }
  }

  if (block51.is_used()) {
    ca_.Bind(&block51);
    ca_.Goto(&block18, ca_.Uninitialized<UintPtrT>());
  }

  TNode<IntPtrT> tmp62;
  TNode<Number> tmp63;
  TNode<UintPtrT> tmp64;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    tmp62 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp63 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp60, tmp62});
    tmp64 = Convert_uintptr_Number_0(state_, TNode<Number>{tmp63});
    ca_.Goto(&block36, tmp64, tmp60);
  }

  TNode<UintPtrT> phi_bb36_11;
  TNode<JSAny> phi_bb36_12;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_11, &phi_bb36_12);
    ca_.Goto(&block25, phi_bb36_11, phi_bb36_12);
  }

  TNode<UintPtrT> phi_bb25_11;
  TNode<JSAny> phi_bb25_12;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_11, &phi_bb25_12);
    ca_.Goto(&block17, phi_bb25_11, phi_bb25_12);
  }

  TNode<UintPtrT> phi_bb18_11;
  TNode<JSArray> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<Number> tmp67;
  TNode<UintPtrT> tmp68;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_11);
    tmp65 = ca_.CallBuiltin<JSArray>(Builtin::kIterableToList, parameter0, tmp1, tmp14);
    tmp66 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp67 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp65, tmp66});
    tmp68 = Convert_uintptr_Number_0(state_, TNode<Number>{tmp67});
    ca_.Goto(&block17, tmp68, tmp65);
  }

  TNode<UintPtrT> phi_bb17_11;
  TNode<JSAny> phi_bb17_12;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_11, &phi_bb17_12);
    ca_.Goto(&block12, phi_bb17_11, phi_bb17_12);
  }

  if (block55.is_used()) {
    ca_.Bind(&block55);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidTypedArrayLength, TNode<Object>{tmp19});
  }

  if (block54.is_used()) {
    ca_.Bind(&block54);
    ca_.Goto(&block12, tmp20, tmp18);
  }

  TNode<UintPtrT> phi_bb12_11;
  TNode<JSAny> phi_bb12_12;
  TNode<Number> tmp69;
  TNode<JSTypedArray> tmp70;
  TNode<BoolT> tmp71;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_11, &phi_bb12_12);
    tmp69 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{phi_bb12_11});
    tmp70 = TypedArrayCreateByLength_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp6}, TNode<Number>{tmp69}, kBuiltinNameFrom_0(state_));
    tmp71 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp9});
    ca_.Branch(tmp71, &block56, std::vector<compiler::Node*>{phi_bb12_11, phi_bb12_12}, &block57, std::vector<compiler::Node*>{phi_bb12_11, phi_bb12_12});
  }

  TNode<UintPtrT> phi_bb56_11;
  TNode<JSAny> phi_bb56_12;
  TNode<UintPtrT> tmp72;
  TNode<BoolT> tmp73;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_11, &phi_bb56_12);
    tmp72 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp73 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{phi_bb56_11}, TNode<UintPtrT>{tmp72});
    ca_.Branch(tmp73, &block58, std::vector<compiler::Node*>{phi_bb56_11, phi_bb56_12}, &block59, std::vector<compiler::Node*>{phi_bb56_11, phi_bb56_12});
  }

  TNode<UintPtrT> phi_bb58_11;
  TNode<JSAny> phi_bb58_12;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_11, &phi_bb58_12);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, parameter0, tmp70, phi_bb58_12, tmp69);
    ca_.Goto(&block59, phi_bb58_11, phi_bb58_12);
  }

  TNode<UintPtrT> phi_bb59_11;
  TNode<JSAny> phi_bb59_12;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_11, &phi_bb59_12);
    arguments.PopAndReturn(tmp70);
  }

  TNode<UintPtrT> phi_bb57_11;
  TNode<JSAny> phi_bb57_12;
  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp74;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_11, &phi_bb57_12);
    compiler::CodeAssemblerLabel label75(&ca_);
    tmp74 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, &label75);
    ca_.Goto(&block62, phi_bb57_11, phi_bb57_12);
    if (label75.is_used()) {
      ca_.Bind(&label75);
      ca_.Goto(&block63, phi_bb57_11, phi_bb57_12);
    }
  }

  TNode<UintPtrT> phi_bb63_11;
  TNode<JSAny> phi_bb63_12;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_11, &phi_bb63_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> phi_bb62_11;
  TNode<JSAny> phi_bb62_12;
  TNode<Int32T> tmp76;
  TNode<BuiltinPtr> tmp77;
  TNode<BuiltinPtr> tmp78;
  TNode<BuiltinPtr> tmp79;
  TNode<UintPtrT> tmp80;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_11, &phi_bb62_12);
    tmp76 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp70});
    std::tie(tmp77, tmp78, tmp79) = GetTypedArrayAccessor_0(state_, TNode<Int32T>{tmp76}).Flatten();
    tmp80 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block66, phi_bb62_11, phi_bb62_12, tmp80);
  }

  TNode<UintPtrT> phi_bb66_11;
  TNode<JSAny> phi_bb66_12;
  TNode<UintPtrT> phi_bb66_19;
  TNode<BoolT> tmp81;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_11, &phi_bb66_12, &phi_bb66_19);
    tmp81 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{phi_bb66_19}, TNode<UintPtrT>{phi_bb66_11});
    ca_.Branch(tmp81, &block64, std::vector<compiler::Node*>{phi_bb66_11, phi_bb66_12, phi_bb66_19}, &block65, std::vector<compiler::Node*>{phi_bb66_11, phi_bb66_12, phi_bb66_19});
  }

  TNode<UintPtrT> phi_bb64_11;
  TNode<JSAny> phi_bb64_12;
  TNode<UintPtrT> phi_bb64_19;
  TNode<Number> tmp82;
  TNode<JSAny> tmp83;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_11, &phi_bb64_12, &phi_bb64_19);
    tmp82 = Convert_Number_uintptr_0(state_, TNode<UintPtrT>{phi_bb64_19});
    tmp83 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<JSAny>{phi_bb64_12}, TNode<JSAny>{tmp82});
    ca_.Branch(tmp9, &block68, std::vector<compiler::Node*>{phi_bb64_11, phi_bb64_12, phi_bb64_19}, &block69, std::vector<compiler::Node*>{phi_bb64_11, phi_bb64_12, phi_bb64_19});
  }

  TNode<UintPtrT> phi_bb68_11;
  TNode<JSAny> phi_bb68_12;
  TNode<UintPtrT> phi_bb68_19;
  TNode<JSAny> tmp84;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_11, &phi_bb68_12, &phi_bb68_19);
    tmp84 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<JSAny>{tmp74}, TNode<JSAny>{tmp5}, TNode<JSAny>{tmp83}, TNode<JSAny>{tmp82});
    ca_.Goto(&block70, phi_bb68_11, phi_bb68_12, phi_bb68_19, tmp84);
  }

  TNode<UintPtrT> phi_bb69_11;
  TNode<JSAny> phi_bb69_12;
  TNode<UintPtrT> phi_bb69_19;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_11, &phi_bb69_12, &phi_bb69_19);
    ca_.Goto(&block70, phi_bb69_11, phi_bb69_12, phi_bb69_19, tmp83);
  }

  TNode<UintPtrT> phi_bb70_11;
  TNode<JSAny> phi_bb70_12;
  TNode<UintPtrT> phi_bb70_19;
  TNode<JSAny> phi_bb70_22;
  TNode<Smi> tmp85;
  TNode<UintPtrT> tmp86;
  TNode<UintPtrT> tmp87;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_11, &phi_bb70_12, &phi_bb70_19, &phi_bb70_22);
tmp85 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallInterfaceDescriptorFor(ExampleBuiltinForTorqueFunctionPointerType(3)), tmp79, parameter0, tmp70, phi_bb70_19, phi_bb70_22));
    tmp86 = FromConstexpr_uintptr_constexpr_int31_0(state_, 1);
    tmp87 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{phi_bb70_19}, TNode<UintPtrT>{tmp86});
    ca_.Goto(&block66, phi_bb70_11, phi_bb70_12, tmp87);
  }

  TNode<UintPtrT> phi_bb65_11;
  TNode<JSAny> phi_bb65_12;
  TNode<UintPtrT> phi_bb65_19;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_11, &phi_bb65_12, &phi_bb65_19);
    arguments.PopAndReturn(tmp70);
  }
}

} // namespace internal
} // namespace v8
