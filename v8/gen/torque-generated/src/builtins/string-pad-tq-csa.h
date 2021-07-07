#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_PAD_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_PAD_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

  int31_t kStringPadStart_334(compiler::CodeAssemblerState* state_);
  int31_t kStringPadEnd_335(compiler::CodeAssemblerState* state_);
compiler::TNode<String> StringPad_336(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, TorqueStructArguments p_arguments, const char* p_methodName, int31_t p_variant);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_PAD_TQ_H_
