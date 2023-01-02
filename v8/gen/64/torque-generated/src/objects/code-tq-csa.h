#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CODE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CODE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
TNode<BytecodeArray> Cast_BytecodeArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=1
TNode<CodeDataContainer> Cast_CodeDataContainer_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=9&c=3
TNode<FixedArray> LoadBytecodeArrayConstantPool_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=9&c=3
void StoreBytecodeArrayConstantPool_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=11&c=3
TNode<ByteArray> LoadBytecodeArrayHandlerTable_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=11&c=3
void StoreBytecodeArrayHandlerTable_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<ByteArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=21&c=3
TNode<HeapObject> LoadBytecodeArraySourcePositionTable_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=21&c=3
void StoreBytecodeArraySourcePositionTable_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=22&c=3
TNode<Int32T> LoadBytecodeArrayFrameSize_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=22&c=3
void StoreBytecodeArrayFrameSize_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=23&c=3
TNode<Int32T> LoadBytecodeArrayParameterSize_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=23&c=3
void StoreBytecodeArrayParameterSize_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=24&c=3
TNode<Int32T> LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=24&c=3
void StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=26&c=3
TNode<Uint16T> LoadBytecodeArrayBytecodeAge_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=26&c=3
void StoreBytecodeArrayBytecodeAge_0(compiler::CodeAssemblerState* state_, TNode<BytecodeArray> p_o, TNode<Uint16T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
TNode<BytecodeArray> DownCastForTorqueClass_BytecodeArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=29&c=1
TNode<CodeDataContainer> DownCastForTorqueClass_CodeDataContainer_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CODE_TQ_CSA_H_
