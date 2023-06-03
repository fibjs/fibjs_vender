#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=34&c=1
TNode<Object> ObjectIsExtensibleImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=42&c=1
TNode<Object> ObjectPreventExtensionsThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=51&c=1
TNode<Object> ObjectPreventExtensionsDontThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=61&c=1
TNode<Object> ObjectGetPrototypeOfImpl_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=67&c=1
TNode<Object> JSReceiverGetPrototypeOf_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=74&c=1
TNode<Object> ObjectSetPrototypeOfThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=85&c=1
TNode<Object> ObjectSetPrototypeOfDontThrow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=228&c=1
TNode<PropertyDescriptorObject> ToPropertyDescriptor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=326&c=1
TNode<HeapObject> ToPropertyDescriptor_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=345&c=1
TNode<Object> FromPropertyDescriptor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=101&c=7
TNode<Oddball> Cast_Null_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=124&c=21
TNode<Map> WeakToStrong_Map_0(compiler::CodeAssemblerState* state_, TNode<MaybeObject> p_x, compiler::CodeAssemblerLabel* label_ClearedWeakPointer);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=171&c=5
TNode<HeapObject> Cast_JSReceiver_OR_Null_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=232&c=22
TorqueStructReference_Map_0 NativeContextSlot_Map_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=304&c=12
TNode<BoolT> Is_Undefined_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=304&c=38
TNode<BoolT> Is_FunctionTemplateInfo_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_CSA_H_
