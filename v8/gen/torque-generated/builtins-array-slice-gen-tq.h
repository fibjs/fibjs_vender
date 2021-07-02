#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_SLICE_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_SLICE_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<JSArray> HandleSimpleArgumentsSlice_39(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout);
compiler::TNode<JSArray> HandleFastAliasedSloppyArgumentsSlice_40(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout);
compiler::TNode<JSArray> HandleFastSlice_41(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Number> p_startNumber, compiler::TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_SLICE_NAMESPACE_V8_H_
