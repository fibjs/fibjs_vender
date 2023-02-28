#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_ARRAY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_ARRAY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=5&c=1
TNode<Uint32T> FromConstexpr_IterationKind_constexpr_kKeys_0(compiler::CodeAssemblerState* state_, IterationKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=5&c=1
TNode<Uint32T> FromConstexpr_IterationKind_constexpr_kValues_0(compiler::CodeAssemblerState* state_, IterationKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=5&c=1
TNode<Uint32T> FromConstexpr_IterationKind_constexpr_kEntries_0(compiler::CodeAssemblerState* state_, IterationKind p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
TNode<JSArrayIterator> Cast_JSArrayIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=39&c=1
TNode<JSArrayIterator> CreateArrayIterator_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSReceiver> p_array, IterationKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
TNode<JSArray> Cast_JSArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=71&c=1
TNode<JSArray> NewJSArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<FixedArrayBase> p_elements);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=81&c=1
TNode<JSArray> NewJSArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=125&c=1
TNode<Object> LoadElementNoHole_FixedArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=141&c=1
TNode<Object> LoadElementNoHole_FixedDoubleArray_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=154&c=1
void TorqueMoveElementsSmi_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<IntPtrT> p_dstIndex, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=160&c=1
void TorqueMoveElements_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_elements, TNode<IntPtrT> p_dstIndex, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=166&c=1
void TorqueMoveElements_1(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_elements, TNode<IntPtrT> p_dstIndex, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=176&c=1
void TorqueCopyElements_0(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_dstElements, TNode<IntPtrT> p_dstIndex, TNode<FixedArray> p_srcElements, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=183&c=1
void TorqueCopyElements_1(compiler::CodeAssemblerState* state_, TNode<FixedDoubleArray> p_dstElements, TNode<IntPtrT> p_dstIndex, TNode<FixedDoubleArray> p_srcElements, TNode<IntPtrT> p_srcIndex, TNode<IntPtrT> p_count);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=296&c=1
TorqueStructFastJSArrayWitness_0 NewFastJSArrayWitness_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=343&c=1
TorqueStructFastJSArrayForReadWitness_0 NewFastJSArrayForReadWitness_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_array);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
TNode<JSReceiver> LoadJSArrayIteratorIteratedObject_0(compiler::CodeAssemblerState* state_, TNode<JSArrayIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
void StoreJSArrayIteratorIteratedObject_0(compiler::CodeAssemblerState* state_, TNode<JSArrayIterator> p_o, TNode<JSReceiver> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
TNode<Number> LoadJSArrayIteratorNextIndex_0(compiler::CodeAssemblerState* state_, TNode<JSArrayIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
void StoreJSArrayIteratorNextIndex_0(compiler::CodeAssemblerState* state_, TNode<JSArrayIterator> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
TNode<Smi> LoadJSArrayIteratorKind_0(compiler::CodeAssemblerState* state_, TNode<JSArrayIterator> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
void StoreJSArrayIteratorKind_0(compiler::CodeAssemblerState* state_, TNode<JSArrayIterator> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
TNode<Number> LoadJSArrayLength_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
void StoreJSArrayLength_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=53&c=3
TNode<BoolT> Method_JSArray_IsEmpty_0(compiler::CodeAssemblerState* state_, TNode<JSArray> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=62&c=3
TNode<JSArray> LoadTemplateLiteralObjectRaw_0(compiler::CodeAssemblerState* state_, TNode<TemplateLiteralObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=62&c=3
void StoreTemplateLiteralObjectRaw_0(compiler::CodeAssemblerState* state_, TNode<TemplateLiteralObject> p_o, TNode<JSArray> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=63&c=3
TNode<Smi> LoadTemplateLiteralObjectFunctionLiteralId_0(compiler::CodeAssemblerState* state_, TNode<TemplateLiteralObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=63&c=3
void StoreTemplateLiteralObjectFunctionLiteralId_0(compiler::CodeAssemblerState* state_, TNode<TemplateLiteralObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=64&c=3
TNode<Smi> LoadTemplateLiteralObjectSlotId_0(compiler::CodeAssemblerState* state_, TNode<TemplateLiteralObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=64&c=3
void StoreTemplateLiteralObjectSlotId_0(compiler::CodeAssemblerState* state_, TNode<TemplateLiteralObject> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
TNode<JSArrayIterator> DownCastForTorqueClass_JSArrayIterator_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=48&c=11
TNode<Smi> SmiTag_IterationKind_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
TNode<JSArray> DownCastForTorqueClass_JSArray_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_ARRAY_TQ_CSA_H_
