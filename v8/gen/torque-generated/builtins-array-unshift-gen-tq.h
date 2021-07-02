#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_UNSHIFT_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_UNSHIFT_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void TryFastArrayUnshift_50(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, TorqueStructArguments p_arguments, compiler::CodeAssemblerLabel* label_Slow);
compiler::TNode<Number> GenericArrayUnshift_51(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, TorqueStructArguments p_arguments);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_UNSHIFT_NAMESPACE_V8_H_
