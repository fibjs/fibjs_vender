#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_MATCH_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_MATCH_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=20&c=1
TNode<Object> RegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string, bool p_isFastPath);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=123&c=1
TNode<Object> FastRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver, TNode<String> p_string);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=128&c=1
TNode<Object> SlowRegExpPrototypeMatchBody_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=24&c=12
TNode<BoolT> Is_FastJSRegExp_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=51&c=9
TNode<RegExpData> UnsafeCast_RegExpData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match.tq?l=55&c=22
TNode<AtomRegExpData> UnsafeCast_AtomRegExpData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_MATCH_TQ_CSA_H_
