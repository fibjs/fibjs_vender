#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CPP_HEAP_EXTERNAL_OBJECT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CPP_HEAP_EXTERNAL_OBJECT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
TNode<CppHeapExternalObject> Cast_CppHeapExternalObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
TNode<CppHeapPointerT> LoadCppHeapExternalObjectCppHeapWrappable_0(compiler::CodeAssemblerState* state_, TNode<CppHeapExternalObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
void StoreCppHeapExternalObjectCppHeapWrappable_0(compiler::CodeAssemblerState* state_, TNode<CppHeapExternalObject> p_o, TNode<CppHeapPointerT> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
TNode<CppHeapExternalObject> DownCastForTorqueClass_CppHeapExternalObject_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_CPP_HEAP_EXTERNAL_OBJECT_TQ_CSA_H_
