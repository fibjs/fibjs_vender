#ifndef V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_CREATETYPEDARRAY_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_CREATETYPEDARRAY_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<UintPtrT> TypedArrayInitialize_290(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, bool p_initialize, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<Smi> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor);
void ConstructByLength_291(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo);
void ConstructByArrayLike_292(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<HeapObject> p_arrayLike, compiler::TNode<Object> p_initialLength, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::TNode<JSReceiver> p_bufferConstructor);
void ConstructByIterable_293(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<JSReceiver> p_iterable, compiler::TNode<JSReceiver> p_iteratorFn, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
void ConstructByTypedArray_294(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<JSTypedArray> p_srcTypedArray, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
void ConstructByArrayBuffer_295(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_typedArray, compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<Object> p_byteOffset, compiler::TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo);
void ConstructByJSReceiver_296(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_obj, TorqueStructTypedArrayElementsInfo p_elementsInfo, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<HeapObject>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Object>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2);
compiler::TNode<JSTypedArray> TypedArraySpeciesCreate_297(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, int31_t p_numArgs, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Object> p_arg0, compiler::TNode<Object> p_arg1, compiler::TNode<Object> p_arg2);
compiler::TNode<JSTypedArray> TypedArraySpeciesCreateByLength_298(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, const char* p_methodName, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Smi> p_length);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_CREATETYPEDARRAY_NAMESPACE_V8_H_
