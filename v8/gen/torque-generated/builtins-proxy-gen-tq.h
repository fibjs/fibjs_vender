#ifndef V8_GEN_TORQUE_GENERATED_PROXY_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_PROXY_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<JSFunction> AllocateProxyRevokeFunction_276(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSProxy> p_proxy);
void CallThrowTypeErrorIfStrict_277(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, MessageTemplate p_message);
compiler::TNode<JSProxy> AllocateProxy_278(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_target, compiler::TNode<JSReceiver> p_handler);
compiler::TNode<BoolT> IsRevokedProxy_279(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_PROXY_NAMESPACE_V8_H_
