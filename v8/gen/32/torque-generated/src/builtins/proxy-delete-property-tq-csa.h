#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROXY_DELETE_PROPERTY_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROXY_DELETE_PROPERTY_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/proxy-delete-property.tq?l=19&c=10
TNode<BoolT> Is_Name_PropertyKey_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Name> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/proxy-delete-property.tq?l=26&c=37
TNode<BoolT> Is_JSReceiver_Null_OR_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_PROXY_DELETE_PROPERTY_TQ_CSA_H_
