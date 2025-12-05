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
#include "src/wasm/wasm-module.h"
#include "src/codegen/code-stub-assembler-inl.h"
// Required Builtins:
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayReduceRightPreLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kCallback);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kLength);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Number_0(state_, TNode<Object>{parameter3}, &label5);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp6;
  TNode<Number> tmp7;
  TNode<Hole> tmp8;
  TNode<JSAny> tmp9;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp4}, TNode<Number>{tmp6});
    tmp8 = TheHole_0(state_);
    tmp9 = ca_.CallBuiltin<JSAny>(Builtin::kArrayReduceRightLoopContinuation, parameter0, tmp0, tmp2, tmp8, tmp0, tmp7, tmp4);
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(ArrayReduceRightLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kCallback);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kInitialK);
  USE(parameter3);
  TNode<JSAny> parameter4 = UncheckedParameter<JSAny>(Descriptor::kLength);
  USE(parameter4);
  TNode<JSAny> parameter5 = UncheckedParameter<JSAny>(Descriptor::kAccumulator);
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Number_0(state_, TNode<Object>{parameter3}, &label5);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp6;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Number_0(state_, TNode<Object>{parameter4}, &label7);
    ca_.Goto(&block15);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSAny> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp8 = ca_.CallBuiltin<JSAny>(Builtin::kArrayReduceRightLoopContinuation, parameter0, tmp0, tmp2, parameter5, tmp0, tmp4, tmp6);
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(ArrayReduceRightLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kCallback);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kInitialK);
  USE(parameter3);
  TNode<JSAny> parameter4 = UncheckedParameter<JSAny>(Descriptor::kLength);
  USE(parameter4);
  TNode<JSAny> parameter5 = UncheckedParameter<JSAny>(Descriptor::kResult);
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_Number_0(state_, TNode<Object>{parameter3}, &label5);
    ca_.Goto(&block11);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Number> tmp6;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Number_0(state_, TNode<Object>{parameter4}, &label7);
    ca_.Goto(&block15);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSAny> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp8 = ca_.CallBuiltin<JSAny>(Builtin::kArrayReduceRightLoopContinuation, parameter0, tmp0, tmp2, parameter5, tmp0, tmp4, tmp6);
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(ArrayReduceRightLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> parameter2 = UncheckedParameter<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>>(Descriptor::kCallbackfn);
  USE(parameter2);
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> parameter3 = UncheckedParameter<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>>(Descriptor::kInitialAccumulator);
  USE(parameter3);
  TNode<JSReceiver> parameter4 = UncheckedParameter<JSReceiver>(Descriptor::kO);
  USE(parameter4);
  TNode<Number> parameter5 = UncheckedParameter<Number>(Descriptor::kInitialK);
  USE(parameter5);
  TNode<Number> parameter6 = UncheckedParameter<Number>(Descriptor::kLength);
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block3, parameter3, parameter5);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb3_7;
  TNode<Number> phi_bb3_8;
  TNode<Number> tmp0;
  TNode<BoolT> tmp1;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_7, &phi_bb3_8);
    tmp0 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{phi_bb3_8}, TNode<Number>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{phi_bb3_7, phi_bb3_8}, &block2, std::vector<compiler::Node*>{phi_bb3_7, phi_bb3_8});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb1_7;
  TNode<Number> phi_bb1_8;
  TNode<Boolean> tmp2;
  TNode<True> tmp3;
  TNode<BoolT> tmp4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_7, &phi_bb1_8);
    tmp2 = CodeStubAssembler(state_).HasProperty_Inline(TNode<Context>{parameter0}, TNode<JSReceiver>{parameter4}, TNode<JSAny>{phi_bb1_8});
    tmp3 = True_0(state_);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp2}, TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp3});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{phi_bb1_7, phi_bb1_8}, &block6, std::vector<compiler::Node*>{phi_bb1_7, phi_bb1_8});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb5_7;
  TNode<Number> phi_bb5_8;
  TNode<JSAny> tmp5;
  TNode<Hole> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_7, &phi_bb5_8);
    tmp5 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<JSAny>{parameter4}, TNode<JSAny>{phi_bb5_8});
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_TheHole_0(state_, TNode<Object>{phi_bb5_7}, &label7);
    ca_.Goto(&block9, phi_bb5_7, phi_bb5_8, phi_bb5_7, phi_bb5_7);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block10, phi_bb5_7, phi_bb5_8, phi_bb5_7, phi_bb5_7);
    }
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb10_7;
  TNode<Number> phi_bb10_8;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb10_11;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb10_12;
  TNode<Undefined> tmp8;
  TNode<JSAny> tmp9;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7, &phi_bb10_8, &phi_bb10_11, &phi_bb10_12);
    tmp8 = Undefined_0(state_);
    tmp9 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<JSAny>{parameter2}, TNode<JSAny>{tmp8}, TNode<JSAny>{ca_.UncheckedCast<JSAny>(phi_bb10_11)}, TNode<JSAny>{tmp5}, TNode<JSAny>{phi_bb10_8}, TNode<JSAny>{parameter4});
    ca_.Goto(&block7, tmp9, phi_bb10_8, phi_bb10_11);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb9_7;
  TNode<Number> phi_bb9_8;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb9_11;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb9_12;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_7, &phi_bb9_8, &phi_bb9_11, &phi_bb9_12);
    ca_.Goto(&block7, tmp5, phi_bb9_8, phi_bb9_11);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb7_7;
  TNode<Number> phi_bb7_8;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb7_11;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_7, &phi_bb7_8, &phi_bb7_11);
    ca_.Goto(&block6, phi_bb7_7, phi_bb7_8);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb6_7;
  TNode<Number> phi_bb6_8;
  TNode<Number> tmp10;
  TNode<Number> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_7, &phi_bb6_8);
    tmp10 = FromConstexpr_Number_constexpr_int31_0(state_, 1);
    tmp11 = CodeStubAssembler(state_).NumberSub(TNode<Number>{phi_bb6_8}, TNode<Number>{tmp10});
    ca_.Goto(&block3, phi_bb6_7, tmp11);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb2_7;
  TNode<Number> phi_bb2_8;
  TNode<Hole> tmp12;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_7, &phi_bb2_8);
    compiler::CodeAssemblerLabel label13(&ca_);
    tmp12 = Cast_TheHole_0(state_, TNode<Object>{phi_bb2_7}, &label13);
    ca_.Goto(&block13, phi_bb2_7, phi_bb2_7, phi_bb2_7);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block14, phi_bb2_7, phi_bb2_7, phi_bb2_7);
    }
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb14_7;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb14_8;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb14_9;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_7, &phi_bb14_8, &phi_bb14_9);
    CodeStubAssembler(state_).Return(ca_.UncheckedCast<JSAny>(phi_bb14_8));
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb13_7;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb13_8;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb13_9;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_7, &phi_bb13_8, &phi_bb13_9);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduceRight");
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-reduce-right.tq?l=115&c=1
TNode<JSAny> FastArrayReduceRight_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Number> p_len, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_callbackfn, TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> p_initialAccumulator, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Number>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Smi, Smi, JSAny> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, JSArray, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Smi_0(state_, TNode<Object>{p_len}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  TNode<Number> tmp2;
  TNode<Number> tmp3;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp2 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp3 = CodeStubAssembler(state_).NumberSub(TNode<Number>{p_len}, TNode<Number>{tmp2});
    ca_.Goto(&block1, tmp3, p_initialAccumulator);
  }

  TNode<JSArray> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_FastJSArrayForRead_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{p_o}, &label5);
    ca_.Goto(&block9);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block10);
    }
  }

  TNode<Number> tmp6;
  TNode<Number> tmp7;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp6 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).NumberSub(TNode<Number>{p_len}, TNode<Number>{tmp6});
    ca_.Goto(&block1, tmp7, p_initialAccumulator);
  }

  TNode<JSArray> tmp8;
  TNode<JSArray> tmp9;
  TNode<Map> tmp10;
  TNode<BoolT> tmp11;
  TNode<Smi> tmp12;
  TNode<Smi> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    std::tie(tmp8, tmp9, tmp10, tmp11) = NewFastJSArrayForReadWitness_0(state_, TNode<JSArray>{tmp4}).Flatten();
    tmp12 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp0}, TNode<Smi>{tmp12});
    ca_.Goto(&block13, p_initialAccumulator, tmp9, tmp13);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb13_5;
  TNode<JSArray> phi_bb13_9;
  TNode<Smi> phi_bb13_12;
  TNode<Smi> tmp14;
  TNode<BoolT> tmp15;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_5, &phi_bb13_9, &phi_bb13_12);
    tmp14 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = CodeStubAssembler(state_).SmiGreaterThanOrEqual(TNode<Smi>{phi_bb13_12}, TNode<Smi>{tmp14});
    ca_.Branch(tmp15, &block11, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_9, phi_bb13_12}, &block12, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_9, phi_bb13_12});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb11_5;
  TNode<JSArray> phi_bb11_9;
  TNode<Smi> phi_bb11_12;
  TNode<IntPtrT> tmp16;
  TNode<Map> tmp17;
  TNode<BoolT> tmp18;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_5, &phi_bb11_9, &phi_bb11_12);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp17 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp8, tmp16});
    tmp18 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp17}, TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp10});
    ca_.Branch(tmp18, &block18, std::vector<compiler::Node*>{phi_bb11_5, phi_bb11_9, phi_bb11_12}, &block19, std::vector<compiler::Node*>{phi_bb11_5, phi_bb11_9, phi_bb11_12});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb18_5;
  TNode<JSArray> phi_bb18_9;
  TNode<Smi> phi_bb18_12;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_5, &phi_bb18_9, &phi_bb18_12);
    ca_.Goto(&block16, phi_bb18_5, phi_bb18_9, phi_bb18_12);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb19_5;
  TNode<JSArray> phi_bb19_9;
  TNode<Smi> phi_bb19_12;
  TNode<BoolT> tmp19;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_5, &phi_bb19_9, &phi_bb19_12);
    tmp19 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp19, &block20, std::vector<compiler::Node*>{phi_bb19_5, phi_bb19_9, phi_bb19_12}, &block21, std::vector<compiler::Node*>{phi_bb19_5, phi_bb19_9, phi_bb19_12});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb20_5;
  TNode<JSArray> phi_bb20_9;
  TNode<Smi> phi_bb20_12;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_5, &phi_bb20_9, &phi_bb20_12);
    ca_.Goto(&block16, phi_bb20_5, phi_bb20_9, phi_bb20_12);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb21_5;
  TNode<JSArray> phi_bb21_9;
  TNode<Smi> phi_bb21_12;
  TNode<JSArray> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Number> tmp22;
  TNode<BoolT> tmp23;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_5, &phi_bb21_9, &phi_bb21_12);
    tmp20 = (TNode<JSArray>{tmp8});
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp22 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp20, tmp21});
    tmp23 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{phi_bb21_12}, TNode<Number>{tmp22});
    ca_.Branch(tmp23, &block22, std::vector<compiler::Node*>{phi_bb21_5, phi_bb21_12}, &block23, std::vector<compiler::Node*>{phi_bb21_5, phi_bb21_12});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb16_5;
  TNode<JSArray> phi_bb16_9;
  TNode<Smi> phi_bb16_12;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_5, &phi_bb16_9, &phi_bb16_12);
    ca_.Goto(&block1, phi_bb16_12, phi_bb16_5);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb22_5;
  TNode<Smi> phi_bb22_12;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_5, &phi_bb22_12);
    ca_.Goto(&block1, phi_bb22_12, phi_bb22_5);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb23_5;
  TNode<Smi> phi_bb23_12;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_5, &phi_bb23_12);
    ca_.Branch(tmp11, &block28, std::vector<compiler::Node*>{phi_bb23_5, phi_bb23_12, phi_bb23_12, phi_bb23_12}, &block29, std::vector<compiler::Node*>{phi_bb23_5, phi_bb23_12, phi_bb23_12, phi_bb23_12});
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb28_5;
  TNode<Smi> phi_bb28_12;
  TNode<Smi> phi_bb28_13;
  TNode<Smi> phi_bb28_16;
  TNode<JSAny> tmp24;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5, &phi_bb28_12, &phi_bb28_13, &phi_bb28_16);
    compiler::CodeAssemblerLabel label25(&ca_);
    tmp24 = LoadElementNoHole_FixedDoubleArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp20}, TNode<Smi>{phi_bb28_16}, &label25);
    ca_.Goto(&block31, phi_bb28_5, phi_bb28_12, phi_bb28_13, phi_bb28_16, phi_bb28_16);
    if (label25.is_used()) {
      ca_.Bind(&label25);
      ca_.Goto(&block32, phi_bb28_5, phi_bb28_12, phi_bb28_13, phi_bb28_16, phi_bb28_16);
    }
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb32_5;
  TNode<Smi> phi_bb32_12;
  TNode<Smi> phi_bb32_13;
  TNode<Smi> phi_bb32_16;
  TNode<Smi> phi_bb32_18;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_5, &phi_bb32_12, &phi_bb32_13, &phi_bb32_16, &phi_bb32_18);
    ca_.Goto(&block26, phi_bb32_5, phi_bb32_12);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb31_5;
  TNode<Smi> phi_bb31_12;
  TNode<Smi> phi_bb31_13;
  TNode<Smi> phi_bb31_16;
  TNode<Smi> phi_bb31_18;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_5, &phi_bb31_12, &phi_bb31_13, &phi_bb31_16, &phi_bb31_18);
    ca_.Goto(&block27, phi_bb31_5, phi_bb31_12, phi_bb31_13, phi_bb31_16, tmp24);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb29_5;
  TNode<Smi> phi_bb29_12;
  TNode<Smi> phi_bb29_13;
  TNode<Smi> phi_bb29_16;
  TNode<JSAny> tmp26;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_5, &phi_bb29_12, &phi_bb29_13, &phi_bb29_16);
    compiler::CodeAssemblerLabel label27(&ca_);
    tmp26 = LoadElementNoHole_FixedArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp20}, TNode<Smi>{phi_bb29_16}, &label27);
    ca_.Goto(&block33, phi_bb29_5, phi_bb29_12, phi_bb29_13, phi_bb29_16, phi_bb29_16);
    if (label27.is_used()) {
      ca_.Bind(&label27);
      ca_.Goto(&block34, phi_bb29_5, phi_bb29_12, phi_bb29_13, phi_bb29_16, phi_bb29_16);
    }
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb34_5;
  TNode<Smi> phi_bb34_12;
  TNode<Smi> phi_bb34_13;
  TNode<Smi> phi_bb34_16;
  TNode<Smi> phi_bb34_18;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_5, &phi_bb34_12, &phi_bb34_13, &phi_bb34_16, &phi_bb34_18);
    ca_.Goto(&block26, phi_bb34_5, phi_bb34_12);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb33_5;
  TNode<Smi> phi_bb33_12;
  TNode<Smi> phi_bb33_13;
  TNode<Smi> phi_bb33_16;
  TNode<Smi> phi_bb33_18;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_5, &phi_bb33_12, &phi_bb33_13, &phi_bb33_16, &phi_bb33_18);
    ca_.Goto(&block27, phi_bb33_5, phi_bb33_12, phi_bb33_13, phi_bb33_16, tmp26);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb27_5;
  TNode<Smi> phi_bb27_12;
  TNode<Smi> phi_bb27_13;
  TNode<Smi> phi_bb27_16;
  TNode<JSAny> phi_bb27_17;
  TNode<Hole> tmp28;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5, &phi_bb27_12, &phi_bb27_13, &phi_bb27_16, &phi_bb27_17);
    compiler::CodeAssemblerLabel label29(&ca_);
    tmp28 = Cast_TheHole_0(state_, TNode<Object>{phi_bb27_5}, &label29);
    ca_.Goto(&block37, phi_bb27_5, phi_bb27_12, phi_bb27_5, phi_bb27_5);
    if (label29.is_used()) {
      ca_.Bind(&label29);
      ca_.Goto(&block38, phi_bb27_5, phi_bb27_12, phi_bb27_5, phi_bb27_5);
    }
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb26_5;
  TNode<Smi> phi_bb26_12;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_5, &phi_bb26_12);
    ca_.Goto(&block14, phi_bb26_5, phi_bb26_12);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb38_5;
  TNode<Smi> phi_bb38_12;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb38_14;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb38_15;
  TNode<Undefined> tmp30;
  TNode<JSAny> tmp31;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_5, &phi_bb38_12, &phi_bb38_14, &phi_bb38_15);
    tmp30 = Undefined_0(state_);
    tmp31 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<JSAny>{p_callbackfn}, TNode<JSAny>{tmp30}, TNode<JSAny>{ca_.UncheckedCast<JSAny>(phi_bb38_14)}, TNode<JSAny>{phi_bb27_17}, TNode<JSAny>{phi_bb38_12}, TNode<JSAny>{tmp20});
    ca_.Goto(&block35, tmp31, phi_bb38_12, phi_bb38_14);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb37_5;
  TNode<Smi> phi_bb37_12;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb37_14;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb37_15;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_5, &phi_bb37_12, &phi_bb37_14, &phi_bb37_15);
    ca_.Goto(&block35, phi_bb27_17, phi_bb37_12, phi_bb37_14);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb35_5;
  TNode<Smi> phi_bb35_12;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb35_14;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_5, &phi_bb35_12, &phi_bb35_14);
    ca_.Goto(&block14, phi_bb35_5, phi_bb35_12);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb14_5;
  TNode<Smi> phi_bb14_12;
  TNode<Smi> tmp32;
  TNode<Smi> tmp33;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_5, &phi_bb14_12);
    tmp32 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp33 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{phi_bb14_12}, TNode<Smi>{tmp32});
    ca_.Goto(&block13, phi_bb14_5, tmp20, tmp33);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb12_5;
  TNode<JSArray> phi_bb12_9;
  TNode<Smi> phi_bb12_12;
  TNode<Hole> tmp34;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_5, &phi_bb12_9, &phi_bb12_12);
    compiler::CodeAssemblerLabel label35(&ca_);
    tmp34 = Cast_TheHole_0(state_, TNode<Object>{phi_bb12_5}, &label35);
    ca_.Goto(&block42, phi_bb12_5, phi_bb12_9, phi_bb12_5, phi_bb12_5);
    if (label35.is_used()) {
      ca_.Bind(&label35);
      ca_.Goto(&block43, phi_bb12_5, phi_bb12_9, phi_bb12_5, phi_bb12_5);
    }
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb43_5;
  TNode<JSArray> phi_bb43_9;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb43_12;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb43_13;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_5, &phi_bb43_9, &phi_bb43_12, &phi_bb43_13);
    ca_.Goto(&block44);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb42_5;
  TNode<JSArray> phi_bb42_9;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb42_12;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb42_13;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_5, &phi_bb42_9, &phi_bb42_12, &phi_bb42_13);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kReduceNoInitial, "Array.prototype.reduceRight");
  }

  TNode<Number> phi_bb1_0;
  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_0, &phi_bb1_1);
    *label_Bailout_parameter_1 = phi_bb1_1;
    *label_Bailout_parameter_0 = phi_bb1_0;
    ca_.Goto(label_Bailout);
  }

    ca_.Bind(&block44);
  return TNode<JSAny>{ca_.UncheckedCast<JSAny>(phi_bb43_12)};
}

TF_BUILTIN(ArrayReduceRight, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = arguments.GetReceiver();
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<JSAny> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Number> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RequireObjectCoercible_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{parameter1}, "Array.prototype.reduceRight");
    tmp1 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{parameter0}, TNode<JSAny>{parameter1});
    tmp2 = GetLengthProperty_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp5;
  TNode<JSAny> tmp6;
  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp5});
    compiler::CodeAssemblerLabel label8(&ca_);
    tmp7 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp6}, &label8);
    ca_.Goto(&block5);
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp11;
  TNode<JSAny> tmp12;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp11});
    ca_.Goto(&block9, tmp12);
  }

  TNode<Hole> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp13 = TheHole_0(state_);
    ca_.Goto(&block9, tmp13);
  }

  TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> phi_bb9_9;
  TNode<JSAny> tmp14;
    compiler::TypedCodeAssemblerVariable<Number> tmp16(&ca_);
    compiler::TypedCodeAssemblerVariable<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>> tmp17(&ca_);
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_9);
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = FastArrayReduceRight_0(state_, TNode<Context>{parameter0}, TNode<JSReceiver>{tmp1}, TNode<Number>{tmp2}, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>>{tmp7}, TNode<Union<BigInt, Boolean, HeapNumber, Hole, JSReceiver, Null, Smi, String, Symbol, Undefined>>{phi_bb9_9}, &label15, &tmp16, &tmp17);
    ca_.Goto(&block13);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block14);
    }
  }

  TNode<JSAny> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp18 = ca_.CallBuiltin<JSAny>(Builtin::kArrayReduceRightLoopContinuation, parameter0, tmp1, tmp7, tmp17.value(), tmp1, tmp16.value(), tmp2);
    arguments.PopAndReturn(tmp18);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    arguments.PopAndReturn(tmp14);
  }

  TNode<IntPtrT> tmp19;
  TNode<JSAny> tmp20;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp20 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp19});
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, tmp20);
    CodeStubAssembler(state_).Unreachable();
  }
}

} // namespace internal
} // namespace v8
