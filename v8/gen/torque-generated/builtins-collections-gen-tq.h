#ifndef V8_GEN_TORQUE_GENERATED_COLLECTIONS_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_COLLECTIONS_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TorqueStructKeyValuePair LoadKeyValuePairNoSideEffects_229(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects);
TorqueStructKeyValuePair LoadKeyValuePair_230(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_COLLECTIONS_NAMESPACE_V8_H_
