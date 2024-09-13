#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_HEAP_NUMBER_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_HEAP_NUMBER_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1
TNode<HeapNumber> Cast_HeapNumber_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=9&c=3
TNode<Float64T> LoadHeapNumberValue_0(compiler::CodeAssemblerState* state_, TNode<HeapNumber> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=9&c=3
void StoreHeapNumberValue_0(compiler::CodeAssemblerState* state_, TNode<HeapNumber> p_o, TNode<Float64T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=5&c=1
TNode<HeapNumber> DownCastForTorqueClass_HeapNumber_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_HEAP_NUMBER_TQ_CSA_H_
