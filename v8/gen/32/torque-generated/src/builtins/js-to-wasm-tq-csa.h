#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_WASM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_WASM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_ValueKind_constexpr_kRef_0(compiler::CodeAssemblerState* state_, wasm::ValueKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_ValueKind_constexpr_kRefNull_0(compiler::CodeAssemblerState* state_, wasm::ValueKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=73&c=1
TNode<Int32T> FromConstexpr_Promise_constexpr_kPromise_0(compiler::CodeAssemblerState* state_, wasm::Promise p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=73&c=1
TNode<Int32T> FromConstexpr_Promise_constexpr_kNoPromise_0(compiler::CodeAssemblerState* state_, wasm::Promise p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kExtern_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNoExtern_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kString_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kEq_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kI31_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kStruct_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kArray_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kAny_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNone_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kFunc_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNoFunc_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kExn_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=78&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNoExn_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=144&c=1
TNode<Uint32T> Bitcast_uint32_float32_0(compiler::CodeAssemblerState* state_, TNode<Float32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=153&c=1
TNode<IntPtrT> TruncateBigIntToI64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_input);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=263&c=1
TorqueStructReturnSlotAllocator_0 NewReturnSlotAllocator_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=389&c=1
TorqueStructLocationAllocator_0 LocationAllocatorForParams_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_paramBuffer);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=410&c=1
TorqueStructLocationAllocator_0 LocationAllocatorForReturns_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_gpRegs, TNode<RawPtrT> p_fpRegs, TNode<RawPtrT> p_stack);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=425&c=1
TNode<Object> JSToWasmObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<HeapObject> p_trustedInstanceDataOrUndefined, TNode<Int32T> p_targetType, TNode<Object> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=459&c=1
void HandleF32Params_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TorqueStructLocationAllocator_0 p_locationAllocator, TorqueStructReference_intptr_0 p_toRef, TNode<Object> p_param);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=481&c=1
void JSToWasmWrapperHelper_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p__receiver, TNode<JSFunction> p_target, TorqueStructArguments p_arguments, wasm::Promise p_promise);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=763&c=1
TNode<Object> WasmToJSObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p_value, TNode<Int32T> p_retType);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=395&c=47
int31_t SizeOf_intptr_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=403&c=32
int31_t SizeOf_float64_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=464&c=8
TorqueStructReference_float64_0 RefCast_float64_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=467&c=8
TorqueStructReference_float32_0 RefCast_float32_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=504&c=30
TorqueStructReference_intptr_0 GetRefAt_intptr_RawFunctionSigPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=509&c=17
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawFunctionSigPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=511&c=20
TorqueStructSlice_int32_ConstReference_int32_0 NewOffHeapConstSlice_int32_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_startPointer, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=591&c=19
TorqueStructReference_intptr_0 NewOffHeapReference_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=608&c=19
TorqueStructReference_intptr_0 NewReference_intptr_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=709&c=4
TorqueStructReference_int32_0 GetRefAt_int32_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=710&c=4
TorqueStructReference_bool_0 GetRefAt_bool_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=711&c=4
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=712&c=4
TorqueStructReference_intptr_0 GetRefAt_intptr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=715&c=4
TorqueStructReference_RawPtr_intptr_0 GetRefAt_RawPtr_intptr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=741&c=23
TNode<Int32T> Convert_int32_int16_0(compiler::CodeAssemblerState* state_, TNode<Int16T> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=814&c=22
TorqueStructReference_int32_0 GetRefAt_int32_RawPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=818&c=37
TorqueStructReference_int64_0 GetRefAt_int64_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=827&c=58
TorqueStructReference_float64_0 GetRefAt_float64_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=837&c=13
TorqueStructReference_float32_0 GetRefAt_float32_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=859&c=23
TorqueStructReference_uintptr_0 GetRefAt_uintptr_RawPtr_uintptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=930&c=37
TorqueStructReference_int64_0 RefCast_int64_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=932&c=16
TorqueStructReference_int32_0 RefCast_int32_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=150&c=10
TorqueStructReference_float32_0 NewReference_float32_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=150&c=10
TorqueStructReference_int64_0 NewReference_int64_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_WASM_TQ_CSA_H_
