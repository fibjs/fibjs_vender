#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_MATCH_SEARCH_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_MATCH_SEARCH_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-match-search.tq?l=77&c=10
TNode<JSAny> StringMatchSearch_StringMatchFunctor_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSAny> p_receiver, TNode<JSAny> p_regexp, TorqueStructStringMatchFunctor_0 p_functor, const char* p_methodName);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-match-search.tq?l=85&c=10
TNode<JSAny> StringMatchSearch_StringSearchFunctor_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<JSAny> p_receiver, TNode<JSAny> p_regexp, TorqueStructStringSearchFunctor_0 p_functor, const char* p_methodName);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_MATCH_SEARCH_TQ_CSA_H_
