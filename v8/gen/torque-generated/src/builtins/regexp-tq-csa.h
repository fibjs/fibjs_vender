#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> IsFastRegExpStrict_326(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o);
compiler::TNode<BoolT> IsFastRegExpPermissive_327(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o);
compiler::TNode<Object> FlagGetter_328(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, JSRegExp::Flag p_flag, int31_t p_counter, const char* p_methodName);
compiler::TNode<String> FastFlagsGetter_329(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_receiver);
compiler::TNode<String> SlowFlagsGetter_330(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver);
compiler::TNode<JSRegExp> Cast14ATFastJSRegExp_1403(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_TQ_H_
