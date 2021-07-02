#ifndef V8_GEN_TORQUE_GENERATED_ARRAY_MAP_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_ARRAY_MAP_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TorqueStructVector NewVector_24(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_length);
compiler::TNode<JSArray> FastArrayMap_25(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_fastO, compiler::TNode<Smi> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<JSArray>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_1);
compiler::TNode<JSArray> FastMapSpeciesCreate_26(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_length, compiler::CodeAssemblerLabel* label_Bailout);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_ARRAY_MAP_NAMESPACE_V8_H_
