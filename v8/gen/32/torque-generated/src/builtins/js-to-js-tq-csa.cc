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
#include "torque-generated/src/builtins/js-to-js-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/js-to-js-tq-csa.h"
#include "torque-generated/src/builtins/js-to-wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-to-js-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=18&c=1
TNode<Object> ConvertToAndFromWasm_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Int32T> p_wasmType, TNode<Object> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{p_wasmType}, TNode<Int32T>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Smi_0(state_, TNode<Object>{p_value}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  TNode<Int32T> tmp4;
  TNode<Number> tmp5;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp4 = ca_.CallBuiltin<Int32T>(Builtin::kWasmTaggedNonSmiToInt32, p_context, ca_.UncheckedCast<HeapObject>(p_value));
    tmp5 = Convert_Number_int32_0(state_, TNode<Int32T>{tmp4});
    ca_.Goto(&block1, tmp5);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block1, tmp2);
  }

  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp6 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp7 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{p_wasmType}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block12);
    } else {
      ca_.Goto(&block13);
    }
  }

  TNode<IntPtrT> tmp8;
  TNode<BigInt> tmp9;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp8 = TruncateBigIntToI64_0(state_, TNode<Context>{p_context}, TNode<Object>{p_value});
    tmp9 = ca_.CallBuiltin<BigInt>(Builtin::kI64ToBigInt, TNode<Object>(), tmp8);
    ca_.Goto(&block1, tmp9);
  }

  TNode<BigInt> tmp10;
  TNode<UintPtrT> tmp11;
  TNode<UintPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<BigInt> tmp15;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp10 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{p_context}, TNode<Object>{p_value});
    std::tie(tmp11, tmp12) = CodeStubAssembler(state_).BigIntToRawBytes(TNode<BigInt>{tmp10}).Flatten();
    tmp13 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp11});
    tmp14 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp12});
    tmp15 = ca_.CallBuiltin<BigInt>(Builtin::kI32PairToBigInt, TNode<Object>(), tmp13, tmp14);
    ca_.Goto(&block1, tmp15);
  }

  TNode<Int32T> tmp16;
  TNode<BoolT> tmp17;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp16 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{p_wasmType}, TNode<Int32T>{tmp16});
    ca_.Branch(tmp17, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<Float32T> tmp18;
  TNode<Number> tmp19;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp18 = ca_.CallBuiltin<Float32T>(Builtin::kWasmTaggedToFloat32, p_context, p_value);
    tmp19 = Convert_Number_float32_0(state_, TNode<Float32T>{tmp18});
    ca_.Goto(&block1, tmp19);
  }

  TNode<Int32T> tmp20;
  TNode<BoolT> tmp21;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp20 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp21 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{p_wasmType}, TNode<Int32T>{tmp20});
    ca_.Branch(tmp21, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<Float64T> tmp22;
  TNode<Number> tmp23;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp22 = ca_.CallBuiltin<Float64T>(Builtin::kWasmTaggedToFloat64, p_context, p_value);
    tmp23 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp22});
    ca_.Goto(&block1, tmp23);
  }

  TNode<Int32T> tmp24;
  TNode<Int32T> tmp25;
  TNode<Null> tmp26;
  TNode<BoolT> tmp27;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp24 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmValueKindBitsMask);
    tmp25 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{p_wasmType}, TNode<Int32T>{tmp24});
    tmp26 = Null_0(state_);
    tmp27 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_value}, TNode<HeapObject>{tmp26});
    ca_.Branch(tmp27, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.Goto(&block1, p_value);
  }

  TNode<Int32T> tmp28;
  TNode<Int32T> tmp29;
  TNode<Int32T> tmp30;
  TNode<Int32T> tmp31;
  TNode<Int32T> tmp32;
  TNode<BoolT> tmp33;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp28 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueType::kKindBits);
    tmp29 = CodeStubAssembler(state_).Word32Sar(TNode<Int32T>{p_wasmType}, TNode<Int32T>{tmp28});
    tmp30 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmHeapTypeBitsMask);
    tmp31 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp29}, TNode<Int32T>{tmp30});
    tmp32 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kFunc);
    tmp33 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp31}, TNode<Int32T>{tmp32});
    ca_.Branch(tmp33, &block30, std::vector<compiler::Node*>{}, &block31, std::vector<compiler::Node*>{});
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.Goto(&block1, p_value);
  }

  TNode<Smi> tmp34;
  TNode<Boolean> tmp35;
  TNode<True> tmp36;
  TNode<BoolT> tmp37;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp34 = kNoContext_0(state_);
    tmp35 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kIsWasmExternalFunction, tmp34, p_value)); 
    tmp36 = True_0(state_);
    tmp37 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp35}, TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block32, std::vector<compiler::Node*>{}, &block33, std::vector<compiler::Node*>{});
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kWasmTrapJSTypeError);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    ca_.Goto(&block1, p_value);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block34);
  }

    ca_.Bind(&block34);
  return TNode<Object>{phi_bb1_3};
}

TF_BUILTIN(JSToJSWrapperInvalidSig, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    CodeStubAssembler(state_).CallRuntime(Runtime::kWasmThrowJSTypeError, parameter0);
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(JSToJSWrapper, CodeStubAssembler) {
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
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Object> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Object> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Object, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<SharedFunctionInfo> tmp1;
  TNode<WasmJSFunctionData> tmp2;
  TNode<WasmInternalFunction> tmp3;
  TNode<TrustedObject> tmp4;
  TNode<WasmImportData> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<ByteArray> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<Object> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Int32T> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<IntPtrT> tmp26;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{parameter2, tmp0});
    tmp2 = CodeStubAssembler(state_).LoadSharedFunctionInfoWasmJSFunctionData(TNode<SharedFunctionInfo>{tmp1});
    tmp3 = CodeStubAssembler(state_).LoadWasmInternalFunctionFromFunctionData(TNode<WasmFunctionData>{tmp2});
    tmp4 = CodeStubAssembler(state_).LoadImplicitArgFromWasmInternalFunction(TNode<WasmInternalFunction>{tmp3});
    tmp5 = UnsafeCast_WasmImportData_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 28);
    tmp7 = CodeStubAssembler(state_).LoadReference<ByteArray>(CodeStubAssembler::Reference{tmp5, tmp6});
    std::tie(tmp8, tmp9, tmp10) = FieldSliceByteArrayBytes_0(state_, TNode<ByteArray>{tmp7}).Flatten();
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_int32_0(state_)));
    tmp12 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11});
    std::tie(tmp13, tmp14, tmp15) = NewConstSlice_int32_0(state_, TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp12}).Flatten();
    std::tie(tmp16, tmp17) = NewReference_int32_0(state_, TNode<Object>{tmp13}, TNode<IntPtrT>{tmp14}).Flatten();
    tmp18 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp19 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp18});
    tmp20 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp15}, TNode<IntPtrT>{tmp19});
    tmp21 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp22 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    tmp23 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    compiler::CodeAssemblerLabel label27(&ca_);
    std::tie(tmp24, tmp25, tmp26) = Subslice_int32_0(state_, TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp13}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp15}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp19}, &label27).Flatten();
    ca_.Goto(&block3);
    if (label27.is_used()) {
      ca_.Bind(&label27);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp28 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp29 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp28});
    compiler::CodeAssemblerLabel label33(&ca_);
    std::tie(tmp30, tmp31, tmp32) = Subslice_int32_0(state_, TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp13}, TNode<IntPtrT>{tmp14}, TNode<IntPtrT>{tmp15}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp22}, &label33).Flatten();
    ca_.Goto(&block7);
    if (label33.is_used()) {
      ca_.Bind(&label33);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<FixedArray> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<UintPtrT> tmp43;
  TNode<UintPtrT> tmp44;
  TNode<BoolT> tmp45;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp34 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp35 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp34});
    tmp36 = ca_.CallBuiltin<FixedArray>(Builtin::kWasmAllocateZeroedFixedArray, TNode<Object>(), tmp35);
    tmp37 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp38, tmp39, tmp40) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp36}).Flatten();
    tmp41 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp42 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{tmp41});
    tmp43 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp37});
    tmp44 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp40});
    tmp45 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp43}, TNode<UintPtrT>{tmp44});
    ca_.Branch(tmp45, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<Object> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Undefined> tmp50;
  TNode<IntPtrT> tmp51;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp46 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp37});
    tmp47 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp39}, TNode<IntPtrT>{tmp46});
    std::tie(tmp48, tmp49) = NewReference_Object_0(state_, TNode<Object>{tmp38}, TNode<IntPtrT>{tmp47}).Flatten();
    tmp50 = Undefined_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp48, tmp49}, tmp50);
    tmp51 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block19, tmp42, tmp51);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb19_25;
  TNode<IntPtrT> phi_bb19_26;
  TNode<BoolT> tmp52;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_25, &phi_bb19_26);
    tmp52 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb19_26}, TNode<IntPtrT>{tmp22});
    ca_.Branch(tmp52, &block17, std::vector<compiler::Node*>{phi_bb19_25, phi_bb19_26}, &block18, std::vector<compiler::Node*>{phi_bb19_25, phi_bb19_26});
  }

  TNode<IntPtrT> phi_bb17_25;
  TNode<IntPtrT> phi_bb17_26;
  TNode<Object> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<Object> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<Int32T> tmp58;
  TNode<Object> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<UintPtrT> tmp64;
  TNode<UintPtrT> tmp65;
  TNode<BoolT> tmp66;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_25, &phi_bb17_26);
    tmp53 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{phi_bb17_26});
    tmp54 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{phi_bb17_26});
    tmp55 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp31}, TNode<IntPtrT>{tmp54});
    std::tie(tmp56, tmp57) = NewReference_int32_0(state_, TNode<Object>{tmp30}, TNode<IntPtrT>{tmp55}).Flatten();
    tmp58 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp56, tmp57});
    std::tie(tmp59, tmp60, tmp61) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp36}).Flatten();
    tmp62 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp63 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb17_25}, TNode<IntPtrT>{tmp62});
    tmp64 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb17_25});
    tmp65 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp61});
    tmp66 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp64}, TNode<UintPtrT>{tmp65});
    ca_.Branch(tmp66, &block26, std::vector<compiler::Node*>{phi_bb17_26, phi_bb17_25, phi_bb17_25, phi_bb17_25, phi_bb17_25}, &block27, std::vector<compiler::Node*>{phi_bb17_26, phi_bb17_25, phi_bb17_25, phi_bb17_25, phi_bb17_25});
  }

  TNode<IntPtrT> phi_bb26_26;
  TNode<IntPtrT> phi_bb26_33;
  TNode<IntPtrT> phi_bb26_34;
  TNode<IntPtrT> phi_bb26_38;
  TNode<IntPtrT> phi_bb26_39;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<Object> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<Object> tmp71;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_26, &phi_bb26_33, &phi_bb26_34, &phi_bb26_38, &phi_bb26_39);
    tmp67 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb26_39});
    tmp68 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp60}, TNode<IntPtrT>{tmp67});
    std::tie(tmp69, tmp70) = NewReference_Object_0(state_, TNode<Object>{tmp59}, TNode<IntPtrT>{tmp68}).Flatten();
    tmp71 = ConvertToAndFromWasm_0(state_, TNode<Context>{parameter0}, TNode<Int32T>{tmp58}, TNode<Object>{tmp53});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp69, tmp70}, tmp71);
    tmp72 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp73 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb26_26}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block19, tmp63, tmp73);
  }

  TNode<IntPtrT> phi_bb27_26;
  TNode<IntPtrT> phi_bb27_33;
  TNode<IntPtrT> phi_bb27_34;
  TNode<IntPtrT> phi_bb27_38;
  TNode<IntPtrT> phi_bb27_39;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_26, &phi_bb27_33, &phi_bb27_34, &phi_bb27_38, &phi_bb27_39);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb18_25;
  TNode<IntPtrT> phi_bb18_26;
  TNode<IntPtrT> tmp74;
  TNode<HeapObject> tmp75;
  TNode<Int32T> tmp76;
  TNode<Int32T> tmp77;
  TNode<Object> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<BoolT> tmp80;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_25, &phi_bb18_26);
    tmp74 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp75 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp5, tmp74});
    tmp76 = Convert_int32_intptr_0(state_, TNode<IntPtrT>{tmp35});
    tmp77 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp78 = ca_.CallBuiltin<Object>(Builtin::kCallVarargs, parameter0, tmp75, tmp77, tmp76, tmp36);
    tmp79 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp80 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp79});
    ca_.Branch(tmp80, &block34, std::vector<compiler::Node*>{phi_bb18_25}, &block35, std::vector<compiler::Node*>{phi_bb18_25});
  }

  TNode<IntPtrT> phi_bb34_25;
  TNode<Undefined> tmp81;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_25);
    tmp81 = Undefined_0(state_);
    ca_.Goto(&block36, phi_bb34_25, tmp81);
  }

  TNode<IntPtrT> phi_bb35_25;
  TNode<IntPtrT> tmp82;
  TNode<BoolT> tmp83;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_25);
    tmp82 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp83 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp82});
    ca_.Branch(tmp83, &block37, std::vector<compiler::Node*>{phi_bb35_25}, &block38, std::vector<compiler::Node*>{phi_bb35_25});
  }

  TNode<IntPtrT> phi_bb37_25;
  TNode<IntPtrT> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<Object> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<Int32T> tmp89;
  TNode<Object> tmp90;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_25);
    tmp84 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp85 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{tmp84});
    tmp86 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp25}, TNode<IntPtrT>{tmp85});
    std::tie(tmp87, tmp88) = NewReference_int32_0(state_, TNode<Object>{tmp24}, TNode<IntPtrT>{tmp86}).Flatten();
    tmp89 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp87, tmp88});
    tmp90 = ConvertToAndFromWasm_0(state_, TNode<Context>{parameter0}, TNode<Int32T>{tmp89}, TNode<Object>{tmp78});
    ca_.Goto(&block39, phi_bb37_25, tmp90);
  }

  TNode<IntPtrT> phi_bb38_25;
  TNode<Smi> tmp91;
  TNode<FixedArray> tmp92;
  TNode<Smi> tmp93;
  TNode<JSArray> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<FixedArrayBase> tmp96;
  TNode<FixedArray> tmp97;
  TNode<IntPtrT> tmp98;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_25);
    tmp91 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{tmp19});
    tmp92 = ca_.CallBuiltin<FixedArray>(Builtin::kIterableToFixedArrayForWasm, parameter0, tmp78, tmp91);
    tmp93 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{tmp19});
    tmp94 = ca_.CallBuiltin<JSArray>(Builtin::kWasmAllocateJSArray, parameter0, tmp93);
    tmp95 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp96 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp94, tmp95});
    tmp97 = UnsafeCast_FixedArray_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp96});
    tmp98 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block43, phi_bb38_25, tmp98);
  }

  TNode<IntPtrT> phi_bb43_25;
  TNode<IntPtrT> phi_bb43_31;
  TNode<BoolT> tmp99;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_25, &phi_bb43_31);
    tmp99 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb43_31}, TNode<IntPtrT>{tmp19});
    ca_.Branch(tmp99, &block41, std::vector<compiler::Node*>{phi_bb43_25, phi_bb43_31}, &block42, std::vector<compiler::Node*>{phi_bb43_25, phi_bb43_31});
  }

  TNode<IntPtrT> phi_bb41_25;
  TNode<IntPtrT> phi_bb41_31;
  TNode<Object> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<IntPtrT> tmp102;
  TNode<UintPtrT> tmp103;
  TNode<UintPtrT> tmp104;
  TNode<BoolT> tmp105;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_25, &phi_bb41_31);
    std::tie(tmp100, tmp101, tmp102) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp92}).Flatten();
    tmp103 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb41_31});
    tmp104 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp102});
    tmp105 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp103}, TNode<UintPtrT>{tmp104});
    ca_.Branch(tmp105, &block49, std::vector<compiler::Node*>{phi_bb41_25, phi_bb41_31, phi_bb41_31, phi_bb41_31, phi_bb41_31, phi_bb41_31}, &block50, std::vector<compiler::Node*>{phi_bb41_25, phi_bb41_31, phi_bb41_31, phi_bb41_31, phi_bb41_31, phi_bb41_31});
  }

  TNode<IntPtrT> phi_bb49_25;
  TNode<IntPtrT> phi_bb49_31;
  TNode<IntPtrT> phi_bb49_36;
  TNode<IntPtrT> phi_bb49_37;
  TNode<IntPtrT> phi_bb49_41;
  TNode<IntPtrT> phi_bb49_42;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<Object> tmp108;
  TNode<IntPtrT> tmp109;
  TNode<Object> tmp110;
  TNode<Object> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<Object> tmp114;
  TNode<IntPtrT> tmp115;
  TNode<Int32T> tmp116;
  TNode<Object> tmp117;
  TNode<IntPtrT> tmp118;
  TNode<IntPtrT> tmp119;
  TNode<UintPtrT> tmp120;
  TNode<UintPtrT> tmp121;
  TNode<BoolT> tmp122;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_25, &phi_bb49_31, &phi_bb49_36, &phi_bb49_37, &phi_bb49_41, &phi_bb49_42);
    tmp106 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb49_42});
    tmp107 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp101}, TNode<IntPtrT>{tmp106});
    std::tie(tmp108, tmp109) = NewReference_Object_0(state_, TNode<Object>{tmp100}, TNode<IntPtrT>{tmp107}).Flatten();
    tmp110 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp108, tmp109});
    tmp111 = UnsafeCast_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp110});
    tmp112 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{phi_bb49_31});
    tmp113 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp25}, TNode<IntPtrT>{tmp112});
    std::tie(tmp114, tmp115) = NewReference_int32_0(state_, TNode<Object>{tmp24}, TNode<IntPtrT>{tmp113}).Flatten();
    tmp116 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp114, tmp115});
    std::tie(tmp117, tmp118, tmp119) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp97}).Flatten();
    tmp120 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb49_31});
    tmp121 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp119});
    tmp122 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp120}, TNode<UintPtrT>{tmp121});
    ca_.Branch(tmp122, &block58, std::vector<compiler::Node*>{phi_bb49_25, phi_bb49_31, phi_bb49_31, phi_bb49_31, phi_bb49_31, phi_bb49_31}, &block59, std::vector<compiler::Node*>{phi_bb49_25, phi_bb49_31, phi_bb49_31, phi_bb49_31, phi_bb49_31, phi_bb49_31});
  }

  TNode<IntPtrT> phi_bb50_25;
  TNode<IntPtrT> phi_bb50_31;
  TNode<IntPtrT> phi_bb50_36;
  TNode<IntPtrT> phi_bb50_37;
  TNode<IntPtrT> phi_bb50_41;
  TNode<IntPtrT> phi_bb50_42;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_25, &phi_bb50_31, &phi_bb50_36, &phi_bb50_37, &phi_bb50_41, &phi_bb50_42);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb58_25;
  TNode<IntPtrT> phi_bb58_31;
  TNode<IntPtrT> phi_bb58_38;
  TNode<IntPtrT> phi_bb58_39;
  TNode<IntPtrT> phi_bb58_43;
  TNode<IntPtrT> phi_bb58_44;
  TNode<IntPtrT> tmp123;
  TNode<IntPtrT> tmp124;
  TNode<Object> tmp125;
  TNode<IntPtrT> tmp126;
  TNode<Object> tmp127;
  TNode<IntPtrT> tmp128;
  TNode<IntPtrT> tmp129;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_25, &phi_bb58_31, &phi_bb58_38, &phi_bb58_39, &phi_bb58_43, &phi_bb58_44);
    tmp123 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb58_44});
    tmp124 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp118}, TNode<IntPtrT>{tmp123});
    std::tie(tmp125, tmp126) = NewReference_Object_0(state_, TNode<Object>{tmp117}, TNode<IntPtrT>{tmp124}).Flatten();
    tmp127 = ConvertToAndFromWasm_0(state_, TNode<Context>{parameter0}, TNode<Int32T>{tmp116}, TNode<Object>{tmp111});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp125, tmp126}, tmp127);
    tmp128 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp129 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb58_31}, TNode<IntPtrT>{tmp128});
    ca_.Goto(&block43, phi_bb58_25, tmp129);
  }

  TNode<IntPtrT> phi_bb59_25;
  TNode<IntPtrT> phi_bb59_31;
  TNode<IntPtrT> phi_bb59_38;
  TNode<IntPtrT> phi_bb59_39;
  TNode<IntPtrT> phi_bb59_43;
  TNode<IntPtrT> phi_bb59_44;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_25, &phi_bb59_31, &phi_bb59_38, &phi_bb59_39, &phi_bb59_43, &phi_bb59_44);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb42_25;
  TNode<IntPtrT> phi_bb42_31;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_25, &phi_bb42_31);
    ca_.Goto(&block39, phi_bb42_25, tmp94);
  }

  TNode<IntPtrT> phi_bb39_25;
  TNode<Object> phi_bb39_27;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_25, &phi_bb39_27);
    ca_.Goto(&block36, phi_bb39_25, phi_bb39_27);
  }

  TNode<IntPtrT> phi_bb36_25;
  TNode<Object> phi_bb36_27;
  TNode<BoolT> tmp130;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_25, &phi_bb36_27);
    tmp130 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{torque_arguments.length});
    ca_.Branch(tmp130, &block62, std::vector<compiler::Node*>{phi_bb36_25, phi_bb36_27}, &block63, std::vector<compiler::Node*>{phi_bb36_25, phi_bb36_27, torque_arguments.length});
  }

  TNode<IntPtrT> phi_bb62_25;
  TNode<Object> phi_bb62_27;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_25, &phi_bb62_27);
    ca_.Goto(&block63, phi_bb62_25, phi_bb62_27, tmp22);
  }

  TNode<IntPtrT> phi_bb63_25;
  TNode<Object> phi_bb63_27;
  TNode<IntPtrT> phi_bb63_28;
  TNode<IntPtrT> tmp131;
  TNode<IntPtrT> tmp132;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_25, &phi_bb63_27, &phi_bb63_28);
    tmp131 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp132 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb63_28}, TNode<IntPtrT>{tmp131});
    CodeStubAssembler(state_).PopAndReturn(TNode<IntPtrT>{tmp132}, TNode<Object>{phi_bb63_27});
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=77&c=7
TNode<WasmImportData> UnsafeCast_WasmImportData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmImportData> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<WasmImportData>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=82&c=29
int31_t SizeOf_int32_0(compiler::CodeAssemblerState* state_) {
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
  return kInt32Size;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=80&c=25
TorqueStructSlice_int32_ConstReference_int32_0 NewConstSlice_int32_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=84&c=24
TorqueStructReference_int32_0 NewReference_int32_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = (TorqueStructReference_int32_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_int32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=87&c=23
TorqueStructSlice_int32_ConstReference_int32_0 Subslice_int32_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_int32_ConstReference_int32_0 p_slice, TNode<IntPtrT> p_start, TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_OutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<UintPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_length});
    tmp1 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_slice.length});
    tmp2 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp0}, TNode<UintPtrT>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_start});
    tmp4 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_slice.length}, TNode<IntPtrT>{p_length});
    tmp5 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{p_start});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_slice.offset}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10, tmp11) = NewConstSlice_int32_0(state_, TNode<Object>{p_slice.object}, TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{p_length}).Flatten();
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_OutOfBounds);
  }

    ca_.Bind(&block7);
  return TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp9}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
