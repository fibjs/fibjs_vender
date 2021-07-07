#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

void RegExpReplaceCallableNoExplicitCaptures_322(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn);
void RegExpReplaceCallableWithExplicitCaptures_323(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_matchesElements, compiler::TNode<IntPtrT> p_matchesLength, compiler::TNode<JSReceiver> p_replaceFn);
compiler::TNode<String> RegExpReplaceFastGlobalCallable_324(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<JSReceiver> p_replaceFn);
compiler::TNode<String> RegExpReplaceFastString_325(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSRegExp> p_regexp, compiler::TNode<String> p_string, compiler::TNode<String> p_replaceString);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_REPLACE_TQ_H_
