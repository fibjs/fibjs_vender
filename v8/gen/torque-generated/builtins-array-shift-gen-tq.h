#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_SHIFT_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_SHIFT_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Object> TryFastArrayShift_37(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, TorqueStructArguments p_arguments, compiler::CodeAssemblerLabel* label_Slow);
compiler::TNode<Object> GenericArrayShift_38(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_SHIFT_NAMESPACE_V8_H_
