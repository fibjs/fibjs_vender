#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-disposable-stack.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator-inl.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{torque_arguments.length});
    tmp1 = CodeStubAssembler(state_).HasBuiltinSubclassingFlag();
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block3, parameter1);
  }

  TNode<JSFunction> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = GetArrayFunction_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block3, tmp2);
  }

  TNode<Object> phi_bb3_11;
  TNode<JSFunction> tmp3;
  TNode<BoolT> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_11);
    tmp3 = GetArrayFunction_0(state_, TNode<Context>{parameter0});
    tmp4 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{phi_bb3_11}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block6);
  }

  TNode<IntPtrT> tmp5;
  TNode<JSArray> tmp6;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp5 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp0});
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = NewJSArrayFilledWithZero_0(state_, TNode<Context>{parameter0}, TNode<IntPtrT>{tmp5}, &label7);
    ca_.Goto(&block9);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block10);
    }
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block6);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block5, tmp6);
  }

  TNode<JSReceiver> tmp8;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Constructor_1(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb3_11}, &label9);
    ca_.Goto(&block13);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block14);
    }
  }

  TNode<JSArray> tmp10;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp10 = CodeStubAssembler(state_).ArrayCreate(TNode<Context>{parameter0}, TNode<Number>{tmp0});
    ca_.Goto(&block11, tmp10);
  }

  TNode<JSReceiver> tmp11;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp11 = CodeStubAssembler(state_).Construct(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp8}, TNode<Object>{tmp0});
    ca_.Goto(&block11, tmp11);
  }

  TNode<JSReceiver> phi_bb11_12;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_12);
    ca_.Goto(&block5, phi_bb11_12);
  }

  TNode<JSReceiver> phi_bb5_12;
  TNode<Smi> tmp12;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_12);
    tmp12 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block17, phi_bb5_12, tmp12);
  }

  TNode<JSReceiver> phi_bb17_12;
  TNode<Smi> phi_bb17_13;
  TNode<BoolT> tmp13;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_12, &phi_bb17_13);
    tmp13 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb17_13}, TNode<Smi>{tmp0});
    ca_.Branch(tmp13, &block15, std::vector<compiler::Node*>{phi_bb17_12, phi_bb17_13}, &block16, std::vector<compiler::Node*>{phi_bb17_12, phi_bb17_13});
  }

  TNode<JSReceiver> phi_bb15_12;
  TNode<Smi> phi_bb15_13;
  TNode<IntPtrT> tmp14;
  TNode<Object> tmp15;
  TNode<Object> tmp16;
  TNode<Smi> tmp17;
  TNode<Smi> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_12, &phi_bb15_13);
    tmp14 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb15_13});
    tmp15 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp14});
    tmp16 = ca_.CallBuiltin<Object>(Builtin::kFastCreateDataProperty, parameter0, phi_bb15_12, phi_bb15_13, tmp15);
    tmp17 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp18 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb15_13}, TNode<Smi>{tmp17});
    ca_.Goto(&block17, phi_bb15_12, tmp18);
  }

  TNode<JSReceiver> phi_bb16_12;
  TNode<Smi> phi_bb16_13;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_12, &phi_bb16_13);
    CodeStubAssembler(state_).SetPropertyLength(TNode<Context>{parameter0}, TNode<Object>{phi_bb16_12}, TNode<Number>{tmp0});
    arguments.PopAndReturn(phi_bb16_12);
  }
}

} // namespace internal
} // namespace v8
