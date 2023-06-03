#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SCRIPT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SCRIPT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=18&c=1
TNode<Script> Cast_Script_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=20&c=3
TNode<PrimitiveHeapObject> LoadScriptSource_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=20&c=3
void StoreScriptSource_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=23&c=3
TNode<Object> LoadScriptName_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=23&c=3
void StoreScriptName_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=26&c=3
TNode<Smi> LoadScriptLineOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=26&c=3
void StoreScriptLineOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=30&c=3
TNode<Smi> LoadScriptColumnOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=30&c=3
void StoreScriptColumnOffset_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=33&c=3
TNode<Object> LoadScriptContextData_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=33&c=3
void StoreScriptContextData_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=35&c=3
TNode<Smi> LoadScriptScriptType_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=35&c=3
void StoreScriptScriptType_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=38&c=3
TNode<Object> LoadScriptLineEnds_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=38&c=3
void StoreScriptLineEnds_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=41&c=3
TNode<Smi> LoadScriptId_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=41&c=3
void StoreScriptId_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=46&c=3
TNode<HeapObject> LoadScriptEvalFromSharedOrWrappedArguments_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=46&c=3
void StoreScriptEvalFromSharedOrWrappedArguments_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=48&c=3
TNode<Object> LoadScriptEvalFromPosition_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=48&c=3
void StoreScriptEvalFromPosition_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
TNode<HeapObject> LoadScriptSharedFunctionInfos_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
void StoreScriptSharedFunctionInfos_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=53&c=3
TNode<HeapObject> LoadScriptCompiledLazyFunctionPositions_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=53&c=3
void StoreScriptCompiledLazyFunctionPositions_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=56&c=3
TNode<Smi> LoadScriptFlags_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=56&c=3
void StoreScriptFlags_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=59&c=3
TNode<PrimitiveHeapObject> LoadScriptSourceUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=59&c=3
void StoreScriptSourceUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=62&c=3
TNode<Object> LoadScriptSourceMappingUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=62&c=3
void StoreScriptSourceMappingUrl_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=65&c=3
TNode<FixedArray> LoadScriptHostDefinedOptions_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=65&c=3
void StoreScriptHostDefinedOptions_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<FixedArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=74&c=3
TNode<PrimitiveHeapObject> LoadScriptSourceHash_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=74&c=3
void StoreScriptSourceHash_0(compiler::CodeAssemblerState* state_, TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=18&c=1
TNode<Script> DownCastForTorqueClass_Script_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_SCRIPT_TQ_CSA_H_
