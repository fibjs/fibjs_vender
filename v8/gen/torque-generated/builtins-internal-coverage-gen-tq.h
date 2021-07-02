#ifndef V8_GEN_TORQUE_GENERATED_INTERNAL_COVERAGE_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_INTERNAL_COVERAGE_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<FixedArray> GetCoverageInfo_271(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_function, compiler::CodeAssemblerLabel* label_IfNoCoverageInfo);
compiler::TNode<Smi> SlotCount_272(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_coverageInfo);
compiler::TNode<Smi> FirstIndexForSlot_273(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_slot);
void IncrementBlockCount_274(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_coverageInfo, compiler::TNode<Smi> p_slot);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_INTERNAL_COVERAGE_NAMESPACE_V8_H_
