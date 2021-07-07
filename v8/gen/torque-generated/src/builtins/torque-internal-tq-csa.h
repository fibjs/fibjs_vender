#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TORQUE_INTERNAL_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TORQUE_INTERNAL_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

int31_t SizeOf20UT5ATSmi10HeapObject_339(compiler::CodeAssemblerState* state_);
int31_t SizeOf9ATfloat64_340(compiler::CodeAssemblerState* state_);
TorqueStructReference20UT5ATSmi10HeapObject UnsafeNewReference20UT5ATSmi10HeapObject_1345(compiler::CodeAssemblerState* state_, compiler::TNode<HeapObject> p_object, compiler::TNode<IntPtrT> p_offset);
compiler::TNode<IntPtrT> Convert8ATintptr17ATconstexpr_int31_1349(compiler::CodeAssemblerState* state_, int31_t p_i);
TorqueStructReference9ATfloat64 UnsafeNewReference9ATfloat64_1360(compiler::CodeAssemblerState* state_, compiler::TNode<HeapObject> p_object, compiler::TNode<IntPtrT> p_offset);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_TORQUE_INTERNAL_TQ_H_
