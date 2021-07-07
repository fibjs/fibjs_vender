#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Object> ObjectIsExtensible_311(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_object);
compiler::TNode<Object> ObjectPreventExtensionsThrow_312(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_object);
compiler::TNode<Object> ObjectPreventExtensionsDontThrow_313(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_object);
compiler::TNode<Object> ObjectGetPrototypeOf_314(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_object);
compiler::TNode<Object> JSReceiverGetPrototypeOf_315(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_object);
compiler::TNode<Object> ObjectSetPrototypeOfThrow_316(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_object, compiler::TNode<HeapObject> p_proto);
compiler::TNode<Object> ObjectSetPrototypeOfDontThrow_317(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_object, compiler::TNode<HeapObject> p_proto);
compiler::TNode<HeapObject> Cast21UT6ATNull10JSReceiver_1399(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_TQ_H_
