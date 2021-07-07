#ifndef V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<Smi> FromConstexpr11ATFrameType21ATconstexpr_FrameType_291(compiler::CodeAssemblerState* state_, StackFrame::Type p_t);
compiler::TNode<Smi> Cast11ATFrameType_292(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<Object> LoadObjectFromFrame_293(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f, int32_t p_o);
compiler::TNode<RawPtrT> LoadPointerFromFrame_294(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f, int32_t p_o);
compiler::TNode<Smi> LoadSmiFromFrame_295(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f, int32_t p_o);
compiler::TNode<JSFunction> LoadFunctionFromFrame_296(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f);
compiler::TNode<RawPtrT> LoadCallerFromFrame_297(compiler::CodeAssemblerState* state_, compiler::TNode<RawPtrT> p_f);
compiler::TNode<Object> Cast23UT11ATFrameType7Context_298(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<Object> LoadContextOrFrameTypeFromFrame_299(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f);
compiler::TNode<Smi> LoadLengthFromAdapterFrame_300(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f);
compiler::TNode<BoolT> FrameTypeEquals_301(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_f1, compiler::TNode<Smi> p_f2);
compiler::TNode<RawPtrT> Cast15ATStandardFrame_302(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<RawPtrT> Cast23ATArgumentsAdaptorFrame_303(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<JSFunction> LoadTargetFromFrame_304(compiler::CodeAssemblerState* state_);
compiler::TNode<Context> Cast7Context_1394(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);
compiler::TNode<Object> UnsafeCast23UT11ATFrameType7Context_1395(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_BUILTINS_FRAMES_TQ_H_
