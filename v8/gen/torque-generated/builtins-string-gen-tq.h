#ifndef V8_GEN_TORQUE_GENERATED_STRING_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_STRING_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void GenerateStringAt_284(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_position, const char* p_methodName, compiler::CodeAssemblerLabel* label_IfInBounds, compiler::TypedCodeAssemblerVariable<String>* label_IfInBounds_parameter_0, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_1, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_2, compiler::CodeAssemblerLabel* label_IfOutOfBounds);
compiler::TNode<Oddball> TryFastStringCompareSequence_285(compiler::CodeAssemblerState* state_, compiler::TNode<String> p_string, compiler::TNode<String> p_searchStr, compiler::TNode<Number> p_start, compiler::TNode<Smi> p_searchLength, compiler::CodeAssemblerLabel* label_Slow);
compiler::TNode<Object> RequireObjectCoercible_288(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_argument);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_STRING_NAMESPACE_V8_H_
