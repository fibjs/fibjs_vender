#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_WASM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_WASM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=92&c=1
TNode<NativeContext> LoadContextFromFrame_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=517&c=1
TorqueStructTargetAndInstance_0 GetTargetAndInstance_0(compiler::CodeAssemblerState* state_, TNode<WasmInternalFunction> p_funcref);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=707&c=1
TNode<IntPtrT> TryNumberToIntptr_0(compiler::CodeAssemblerState* state_, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_Failure);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=724&c=1
TNode<WasmTypeInfo> WasmTypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_map);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=737&c=1
TNode<BoolT> IsWord16WasmArrayMap_0(compiler::CodeAssemblerState* state_, TNode<Map> p_map);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1045&c=1
TNode<BoolT> IsWtf8CodepointStart_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_view, TNode<Uint32T> p_pos);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1050&c=1
TNode<Uint32T> AlignWtf8PositionForward_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_view, TNode<Uint32T> p_pos);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1067&c=1
TNode<Uint32T> AlignWtf8PositionBackward_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_view, TNode<Uint32T> p_pos);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1160&c=1
TNode<BoolT> IsLeadSurrogate_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_code);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1163&c=1
TNode<BoolT> IsTrailSurrogate_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_code);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1166&c=1
TNode<Int32T> CombineSurrogatePair_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_lead, TNode<Uint16T> p_trail);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=376&c=7
TNode<IntPtrT> Convert_intptr_constexpr_int32_0(compiler::CodeAssemblerState* state_, int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=586&c=14
TNode<BoolT> Is_WasmInternalFunction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=725&c=10
TNode<WasmTypeInfo> UnsafeCast_WasmTypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=742&c=7
TorqueStructReference_int32_0 NewOffHeapReference_int32_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=752&c=19
TNode<WasmArray> Cast_WasmArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=759&c=26
TorqueStructSlice_char16_ConstReference_char16_0 NewConstSlice_char16_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=762&c=12
TNode<String> AllocateSeqTwoByteString_SliceIterator_char16_ConstReference_char16_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_length, TorqueStructSliceIterator_char16_ConstReference_char16_0 p_content);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=787&c=26
TorqueStructSlice_char16_MutableReference_char16_0 NewMutableSlice_char16_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=796&c=39
TNode<Uint16T> Convert_uint16_char8_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=928&c=12
TNode<SeqOneByteString> AllocateNonEmptySeqOneByteString_TwoByteToOneByteIterator_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_length, TorqueStructTwoByteToOneByteIterator_0 p_content);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_WASM_TQ_CSA_H_
