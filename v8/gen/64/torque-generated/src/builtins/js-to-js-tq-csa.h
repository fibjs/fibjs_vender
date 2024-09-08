#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_JS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_JS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=18&c=1
TNode<Object> ConvertToAndFromWasm_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Int32T> p_wasmType, TNode<Object> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=77&c=7
TNode<WasmImportData> UnsafeCast_WasmImportData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=82&c=29
int31_t SizeOf_int32_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=80&c=25
TorqueStructSlice_int32_ConstReference_int32_0 NewConstSlice_int32_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=84&c=24
TorqueStructReference_int32_0 NewReference_int32_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-js.tq?l=87&c=23
TorqueStructSlice_int32_ConstReference_int32_0 Subslice_int32_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_int32_ConstReference_int32_0 p_slice, TNode<IntPtrT> p_start, TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_OutOfBounds);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_JS_TO_JS_TQ_CSA_H_
