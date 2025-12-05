#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_WASM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_WASM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=70&c=1
TNode<Int32T> FromConstexpr_Promise_constexpr_kPromise_0(compiler::CodeAssemblerState* state_, wasm::Promise p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=70&c=1
TNode<Int32T> FromConstexpr_Promise_constexpr_kNoPromise_0(compiler::CodeAssemblerState* state_, wasm::Promise p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=70&c=1
TNode<Int32T> FromConstexpr_Promise_constexpr_kStressSwitch_0(compiler::CodeAssemblerState* state_, wasm::Promise p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=86&c=1
TNode<Uint32T> FromConstexpr_RefTypeKind_constexpr_kStruct_0(compiler::CodeAssemblerState* state_, wasm::RefTypeKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=86&c=1
TNode<Uint32T> FromConstexpr_RefTypeKind_constexpr_kArray_0(compiler::CodeAssemblerState* state_, wasm::RefTypeKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=86&c=1
TNode<Uint32T> FromConstexpr_RefTypeKind_constexpr_kFunction_0(compiler::CodeAssemblerState* state_, wasm::RefTypeKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=159&c=1
TNode<Uint32T> Bitcast_WasmCodePointer_float32_0(compiler::CodeAssemblerState* state_, TNode<Float32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=168&c=1
TNode<IntPtrT> TruncateBigIntToI64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSAny> p_input);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=282&c=1
TorqueStructReturnSlotAllocator_0 NewReturnSlotAllocator_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=415&c=1
TorqueStructLocationAllocator_0 LocationAllocatorForParams_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_paramBuffer, TNode<IntPtrT> p_paramBufferSize);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=442&c=1
TorqueStructLocationAllocator_0 LocationAllocatorForReturns_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_gpRegs, TNode<RawPtrT> p_fpRegs, TNode<RawPtrT> p_stack);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=460&c=1
TNode<Object> JSToWasmObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Uint32T> p_targetType, TNode<JSAny> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=489&c=1
void HandleF32Params_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TorqueStructLocationAllocator_0 p_locationAllocator, TorqueStructReference_intptr_0 p_toRef, TNode<JSAny> p_param);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=511&c=1
TNode<JSAny> JSToWasmWrapperHelper_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSAny> p_receiver, TNode<JSFunction> p_target, TorqueStructArguments p_arguments, wasm::Promise p_promise);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=846&c=1
TNode<JSAny> WasmToJSObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p_value, TNode<Uint32T> p_retType);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=430&c=32
int31_t SizeOf_float64_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=494&c=8
TorqueStructReference_float64_0 RefCast_float64_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=497&c=8
TorqueStructReference_float32_0 RefCast_float32_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=533&c=23
TorqueStructReference_intptr_0 GetRefAt_intptr_RawFunctionSigPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=537&c=17
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawFunctionSigPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=318&c=22
TorqueStructReference_intptr_0 NewReference_intptr_0(compiler::CodeAssemblerState* state_, TNode<Union<HeapObject, TaggedIndex>> p_object, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=782&c=4
TorqueStructReference_int32_0 GetRefAt_int32_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=784&c=4
TorqueStructReference_bool_0 GetRefAt_bool_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=785&c=4
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=786&c=4
TorqueStructReference_intptr_0 GetRefAt_intptr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=788&c=4
TorqueStructReference_WasmCodePointer_0 GetRefAt_WasmCodePointer_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=790&c=4
TorqueStructReference_RawPtr_intptr_0 GetRefAt_RawPtr_intptr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=859&c=22
TNode<WasmFuncRef> Cast_WasmFuncRef_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=861&c=9
TNode<BoolT> Is_JSFunction_Undefined_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Union<JSFunction, Undefined>> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=861&c=45
TNode<JSFunction> UnsafeCast_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=894&c=22
TorqueStructReference_WasmCodePointer_0 GetRefAt_WasmCodePointer_RawPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=898&c=37
TorqueStructReference_int64_0 GetRefAt_int64_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=907&c=58
TorqueStructReference_float64_0 GetRefAt_float64_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=917&c=13
TorqueStructReference_float32_0 GetRefAt_float32_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=940&c=23
TorqueStructReference_uintptr_0 GetRefAt_uintptr_RawPtr_uintptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=1011&c=37
TorqueStructReference_int64_0 RefCast_int64_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=1013&c=16
TorqueStructReference_int32_0 RefCast_int32_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=165&c=10
TorqueStructReference_float32_0 NewReference_float32_0(compiler::CodeAssemblerState* state_, TNode<Union<HeapObject, TaggedIndex>> p_object, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=165&c=10
TorqueStructReference_int64_0 NewReference_int64_0(compiler::CodeAssemblerState* state_, TNode<Union<HeapObject, TaggedIndex>> p_object, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=165&c=10
TorqueStructReference_int32_0 NewReference_int32_0(compiler::CodeAssemblerState* state_, TNode<Union<HeapObject, TaggedIndex>> p_object, TNode<IntPtrT> p_offset);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_WASM_TQ_CSA_H_
