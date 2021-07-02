#ifndef V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_FIND_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_FIND_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

  const char* kBuiltinName_302(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> FindAllElements_303(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TYPED_ARRAY_FIND_NAMESPACE_V8_H_
