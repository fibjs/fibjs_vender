#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_TRIM_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_TRIM_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=9&c=1
TNode<Uint32T> FromConstexpr_TrimMode_constexpr_kTrim_0(compiler::CodeAssemblerState* state_, String::TrimMode p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=9&c=1
TNode<Uint32T> FromConstexpr_TrimMode_constexpr_kTrimStart_0(compiler::CodeAssemblerState* state_, String::TrimMode p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=9&c=1
TNode<Uint32T> FromConstexpr_TrimMode_constexpr_kTrimEnd_0(compiler::CodeAssemblerState* state_, String::TrimMode p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=15&c=1
TNode<BoolT> IsWhiteSpaceOrLineTerminator_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_charCode);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=137&c=1
TNode<String> StringTrim_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TorqueStructArguments p__arguments, const char* p_methodName, String::TrimMode p_variant);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=145&c=12
TNode<String> StringTrimBody_char8_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<String> p_string, TorqueStructSlice_char8_ConstReference_char8_0 p_slice, String::TrimMode p_variant);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=147&c=12
TNode<String> StringTrimBody_char16_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<String> p_string, TorqueStructSlice_char16_ConstReference_char16_0 p_slice, String::TrimMode p_variant);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=121&c=18
TNode<IntPtrT> StringTrimLoop_char8_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructSlice_char8_ConstReference_char8_0 p_stringSlice, TNode<IntPtrT> p_startIndex, TNode<IntPtrT> p_endIndex, TNode<IntPtrT> p_increment);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=121&c=18
TNode<IntPtrT> StringTrimLoop_char16_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructSlice_char16_ConstReference_char16_0 p_stringSlice, TNode<IntPtrT> p_startIndex, TNode<IntPtrT> p_endIndex, TNode<IntPtrT> p_increment);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_STRING_TRIM_TQ_CSA_H_
