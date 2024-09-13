#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_SEARCH_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_SEARCH_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-search.tq?l=9&c=1
TNode<Object> RegExpPrototypeSearchBodyFast_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-search.tq?l=43&c=1
TNode<BoolT> IsRegExpResult_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_execResult);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-search.tq?l=48&c=1
TNode<Object> RegExpPrototypeSearchBodySlow_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_regexp, TNode<String> p_string);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-search.tq?l=74&c=26
TNode<JSArray> Cast_JSRegExpResult_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_REGEXP_SEARCH_TQ_CSA_H_
