#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_FROMENTRIES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_FROMENTRIES_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<JSObject> ObjectFromEntriesFastCase_310(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow);
compiler::TNode<JSArray> Cast34ATFastJSArrayWithNoCustomIteration_1397(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<BoolT> Is10JSReceiver90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1398(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_OBJECT_FROMENTRIES_TQ_H_
