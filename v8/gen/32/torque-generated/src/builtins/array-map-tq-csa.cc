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
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/heap-number-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"

namespace v8 {
namespace internal {

TF_BUILTIN(ArrayMapPreLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kCallback);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kThisArg);
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

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter5}, &label3);
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
    tmp4 = Cast_Number_0(state_, TNode<Object>{parameter4}, &label5);
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

  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> tmp6;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::CodeAssemblerLabel label7(&ca_);
    tmp6 = Cast_Callable_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter2}, &label7);
    ca_.Goto(&block15);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, parameter2);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> tmp8;
  TNode<JSAny> tmp9;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp8 = kZero_0(state_);
    tmp9 = ca_.CallBuiltin<JSAny>(Builtin::kArrayMapLoopContinuation, parameter0, tmp0, tmp6, parameter3, tmp2, tmp0, tmp8, tmp4);
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(ArrayMapLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kCallback);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<JSAny> parameter4 = UncheckedParameter<JSAny>(Descriptor::kArray);
  USE(parameter4);
  TNode<JSAny> parameter5 = UncheckedParameter<JSAny>(Descriptor::kInitialK);
  USE(parameter5);
  TNode<JSAny> parameter6 = UncheckedParameter<JSAny>(Descriptor::kLength);
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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

  TNode<JSReceiver> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter4}, &label5);
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
    tmp6 = Cast_Number_0(state_, TNode<Object>{parameter5}, &label7);
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

  TNode<Number> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Number_0(state_, TNode<Object>{parameter6}, &label9);
    ca_.Goto(&block19);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<JSAny> tmp10;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp10 = ca_.CallBuiltin<JSAny>(Builtin::kArrayMapLoopContinuation, parameter0, tmp0, tmp2, parameter3, tmp4, tmp0, tmp6, tmp8);
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(ArrayMapLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSAny> parameter1 = UncheckedParameter<JSAny>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSAny> parameter2 = UncheckedParameter<JSAny>(Descriptor::kCallback);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<JSAny> parameter4 = UncheckedParameter<JSAny>(Descriptor::kArray);
  USE(parameter4);
  TNode<JSAny> parameter5 = UncheckedParameter<JSAny>(Descriptor::kInitialK);
  USE(parameter5);
  TNode<JSAny> parameter6 = UncheckedParameter<JSAny>(Descriptor::kLength);
  USE(parameter6);
  TNode<JSAny> parameter7 = UncheckedParameter<JSAny>(Descriptor::kResult);
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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

  TNode<JSReceiver> tmp4;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_JSReceiver_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter4}, &label5);
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
    tmp6 = Cast_Number_0(state_, TNode<Object>{parameter5}, &label7);
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

  TNode<Number> tmp8;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_Number_0(state_, TNode<Object>{parameter6}, &label9);
    ca_.Goto(&block19);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block20);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp10;
  TNode<Number> tmp11;
  TNode<Number> tmp12;
  TNode<JSAny> tmp13;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp10 = ca_.CallBuiltin<Object>(Builtin::kFastCreateDataProperty, parameter0, tmp4, tmp6, parameter7);
    tmp11 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp12 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp6}, TNode<Number>{tmp11});
    tmp13 = ca_.CallBuiltin<JSAny>(Builtin::kArrayMapLoopContinuation, parameter0, tmp0, tmp2, parameter3, tmp4, tmp0, tmp12, tmp8);
    CodeStubAssembler(state_).Return(tmp13);
  }
}

TF_BUILTIN(ArrayMapLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<JSReceiver> parameter1 = UncheckedParameter<JSReceiver>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> parameter2 = UncheckedParameter<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>>(Descriptor::kCallbackfn);
  USE(parameter2);
  TNode<JSAny> parameter3 = UncheckedParameter<JSAny>(Descriptor::kThisArg);
  USE(parameter3);
  TNode<JSReceiver> parameter4 = UncheckedParameter<JSReceiver>(Descriptor::kArray);
  USE(parameter4);
  TNode<JSReceiver> parameter5 = UncheckedParameter<JSReceiver>(Descriptor::kO);
  USE(parameter5);
  TNode<Number> parameter6 = UncheckedParameter<Number>(Descriptor::kInitialK);
  USE(parameter6);
  TNode<Number> parameter7 = UncheckedParameter<Number>(Descriptor::kLength);
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block3, parameter6);
  }

  TNode<Number> phi_bb3_8;
  TNode<BoolT> tmp0;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_8);
    tmp0 = NumberIsLessThan_0(state_, TNode<Number>{phi_bb3_8}, TNode<Number>{parameter7});
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{phi_bb3_8}, &block2, std::vector<compiler::Node*>{phi_bb3_8});
  }

  TNode<Number> phi_bb1_8;
  TNode<Boolean> tmp1;
  TNode<True> tmp2;
  TNode<BoolT> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_8);
    tmp1 = CodeStubAssembler(state_).HasProperty_Inline(TNode<Context>{parameter0}, TNode<JSReceiver>{parameter5}, TNode<JSAny>{phi_bb1_8});
    tmp2 = True_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp1}, TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp2});
    ca_.Branch(tmp3, &block5, std::vector<compiler::Node*>{phi_bb1_8}, &block6, std::vector<compiler::Node*>{phi_bb1_8});
  }

  TNode<Number> phi_bb5_8;
  TNode<JSAny> tmp4;
  TNode<JSAny> tmp5;
  TNode<Object> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_8);
    tmp4 = CodeStubAssembler(state_).GetProperty(TNode<Context>{parameter0}, TNode<JSAny>{parameter5}, TNode<JSAny>{phi_bb5_8});
    tmp5 = CodeStubAssembler(state_).Call(TNode<Context>{parameter0}, TNode<JSAny>{parameter2}, TNode<JSAny>{parameter3}, TNode<JSAny>{tmp4}, TNode<JSAny>{phi_bb5_8}, TNode<JSAny>{parameter5});
    tmp6 = ca_.CallBuiltin<Object>(Builtin::kFastCreateDataProperty, parameter0, parameter4, phi_bb5_8, tmp5);
    ca_.Goto(&block6, phi_bb5_8);
  }

  TNode<Number> phi_bb6_8;
  TNode<Number> tmp7;
  TNode<Number> tmp8;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_8);
    tmp7 = FromConstexpr_Number_constexpr_int31_0(state_, 1);
    tmp8 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{phi_bb6_8}, TNode<Number>{tmp7});
    ca_.Goto(&block3, tmp8);
  }

  TNode<Number> phi_bb2_8;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_8);
    CodeStubAssembler(state_).Return(parameter4);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=208&c=1
TorqueStructVector_0 NewVector_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{p_length}, TNode<Smi>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp2;
  TNode<FixedArray> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{p_length});
    tmp3 = CodeStubAssembler(state_).AllocateFixedArrayWithHoles(TNode<IntPtrT>{tmp2});
    ca_.Goto(&block4, tmp3);
  }

  TNode<FixedArray> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = kEmptyFixedArray_0(state_);
    ca_.Goto(&block4, tmp4);
  }

  TNode<FixedArray> phi_bb4_2;
  TNode<BoolT> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_2);
    tmp5 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp6 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp7 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TorqueStructVector_0{TNode<FixedArray>{phi_bb4_2}, TNode<BoolT>{tmp5}, TNode<BoolT>{tmp6}, TNode<BoolT>{tmp7}, TNode<BoolT>{tmp8}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=221&c=1
TNode<JSArray> FastArrayMap_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArray> p_fastO, TNode<Smi> p_len, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>> p_callbackfn, TNode<JSAny> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<JSArray>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, JSAny> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi, Smi, Smi, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi, Smi, Smi, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi, Smi, Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi, Smi, Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT, Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT, BoolT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T, BoolT> block95(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T, BoolT> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T, BoolT, BoolT> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Int32T> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block98(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block103(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block110(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi, Smi, Smi> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, Smi> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block99(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi, JSArray> block100(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block130(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block132(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block133(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T> block137(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T> block134(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T> block131(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T, BoolT> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T, BoolT> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T, BoolT, BoolT> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T> block142(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Int32T> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block152(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block150(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block159(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block165(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block164(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block170(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi, Smi, Smi> block171(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block162(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, Smi> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, JSArray, BoolT, BoolT, BoolT, BoolT, JSArray> block149(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block174(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<JSArray> tmp1;
  TNode<JSArray> tmp2;
  TNode<Map> tmp3;
  TNode<BoolT> tmp4;
  TNode<FixedArray> tmp5;
  TNode<BoolT> tmp6;
  TNode<BoolT> tmp7;
  TNode<BoolT> tmp8;
  TNode<BoolT> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp1, tmp2, tmp3, tmp4) = NewFastJSArrayForReadWitness_0(state_, TNode<JSArray>{p_fastO}).Flatten();
    std::tie(tmp5, tmp6, tmp7, tmp8, tmp9) = NewVector_0(state_, TNode<Context>{p_context}, TNode<Smi>{p_len}).Flatten();
    ca_.Goto(&block7, tmp0, tmp2, tmp6, tmp7, tmp8, tmp9);
  }

  TNode<Smi> phi_bb7_5;
  TNode<JSArray> phi_bb7_7;
  TNode<BoolT> phi_bb7_11;
  TNode<BoolT> phi_bb7_12;
  TNode<BoolT> phi_bb7_13;
  TNode<BoolT> phi_bb7_14;
  TNode<BoolT> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_5, &phi_bb7_7, &phi_bb7_11, &phi_bb7_12, &phi_bb7_13, &phi_bb7_14);
    tmp10 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb7_5}, TNode<Smi>{p_len});
    ca_.Branch(tmp10, &block5, std::vector<compiler::Node*>{phi_bb7_5, phi_bb7_7, phi_bb7_11, phi_bb7_12, phi_bb7_13, phi_bb7_14}, &block6, std::vector<compiler::Node*>{phi_bb7_5, phi_bb7_7, phi_bb7_11, phi_bb7_12, phi_bb7_13, phi_bb7_14});
  }

  TNode<Smi> phi_bb5_5;
  TNode<JSArray> phi_bb5_7;
  TNode<BoolT> phi_bb5_11;
  TNode<BoolT> phi_bb5_12;
  TNode<BoolT> phi_bb5_13;
  TNode<BoolT> phi_bb5_14;
  TNode<IntPtrT> tmp11;
  TNode<Map> tmp12;
  TNode<BoolT> tmp13;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_5, &phi_bb5_7, &phi_bb5_11, &phi_bb5_12, &phi_bb5_13, &phi_bb5_14);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp12 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp11});
    tmp13 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp12}, TNode<Union<Context, FixedArrayBase, FunctionTemplateInfo, Hole, JSReceiver, Map, Oddball, String, Symbol, WasmFuncRef, WasmNull, WeakCell>>{tmp3});
    ca_.Branch(tmp13, &block12, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7, phi_bb5_11, phi_bb5_12, phi_bb5_13, phi_bb5_14}, &block13, std::vector<compiler::Node*>{phi_bb5_5, phi_bb5_7, phi_bb5_11, phi_bb5_12, phi_bb5_13, phi_bb5_14});
  }

  TNode<Smi> phi_bb12_5;
  TNode<JSArray> phi_bb12_7;
  TNode<BoolT> phi_bb12_11;
  TNode<BoolT> phi_bb12_12;
  TNode<BoolT> phi_bb12_13;
  TNode<BoolT> phi_bb12_14;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_5, &phi_bb12_7, &phi_bb12_11, &phi_bb12_12, &phi_bb12_13, &phi_bb12_14);
    ca_.Goto(&block10, phi_bb12_5, phi_bb12_7, phi_bb12_11, phi_bb12_12, phi_bb12_13, phi_bb12_14);
  }

  TNode<Smi> phi_bb13_5;
  TNode<JSArray> phi_bb13_7;
  TNode<BoolT> phi_bb13_11;
  TNode<BoolT> phi_bb13_12;
  TNode<BoolT> phi_bb13_13;
  TNode<BoolT> phi_bb13_14;
  TNode<BoolT> tmp14;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_5, &phi_bb13_7, &phi_bb13_11, &phi_bb13_12, &phi_bb13_13, &phi_bb13_14);
    tmp14 = CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid();
    ca_.Branch(tmp14, &block14, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_7, phi_bb13_11, phi_bb13_12, phi_bb13_13, phi_bb13_14}, &block15, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_7, phi_bb13_11, phi_bb13_12, phi_bb13_13, phi_bb13_14});
  }

  TNode<Smi> phi_bb14_5;
  TNode<JSArray> phi_bb14_7;
  TNode<BoolT> phi_bb14_11;
  TNode<BoolT> phi_bb14_12;
  TNode<BoolT> phi_bb14_13;
  TNode<BoolT> phi_bb14_14;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_5, &phi_bb14_7, &phi_bb14_11, &phi_bb14_12, &phi_bb14_13, &phi_bb14_14);
    ca_.Goto(&block10, phi_bb14_5, phi_bb14_7, phi_bb14_11, phi_bb14_12, phi_bb14_13, phi_bb14_14);
  }

  TNode<Smi> phi_bb15_5;
  TNode<JSArray> phi_bb15_7;
  TNode<BoolT> phi_bb15_11;
  TNode<BoolT> phi_bb15_12;
  TNode<BoolT> phi_bb15_13;
  TNode<BoolT> phi_bb15_14;
  TNode<JSArray> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Number> tmp17;
  TNode<BoolT> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_5, &phi_bb15_7, &phi_bb15_11, &phi_bb15_12, &phi_bb15_13, &phi_bb15_14);
    tmp15 = (TNode<JSArray>{tmp1});
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp17 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp15, tmp16});
    tmp18 = NumberIsGreaterThanOrEqual_0(state_, TNode<Number>{phi_bb15_5}, TNode<Number>{tmp17});
    ca_.Branch(tmp18, &block16, std::vector<compiler::Node*>{phi_bb15_5, phi_bb15_11, phi_bb15_12, phi_bb15_13, phi_bb15_14}, &block17, std::vector<compiler::Node*>{phi_bb15_5, phi_bb15_11, phi_bb15_12, phi_bb15_13, phi_bb15_14});
  }

  TNode<Smi> phi_bb10_5;
  TNode<JSArray> phi_bb10_7;
  TNode<BoolT> phi_bb10_11;
  TNode<BoolT> phi_bb10_12;
  TNode<BoolT> phi_bb10_13;
  TNode<BoolT> phi_bb10_14;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_5, &phi_bb10_7, &phi_bb10_11, &phi_bb10_12, &phi_bb10_13, &phi_bb10_14);
    ca_.Goto(&block4, phi_bb10_5, phi_bb10_7, phi_bb10_11, phi_bb10_12, phi_bb10_13, phi_bb10_14, phi_bb10_5);
  }

  TNode<Smi> phi_bb16_5;
  TNode<BoolT> phi_bb16_11;
  TNode<BoolT> phi_bb16_12;
  TNode<BoolT> phi_bb16_13;
  TNode<BoolT> phi_bb16_14;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_5, &phi_bb16_11, &phi_bb16_12, &phi_bb16_13, &phi_bb16_14);
    ca_.Goto(&block4, phi_bb16_5, tmp15, phi_bb16_11, phi_bb16_12, phi_bb16_13, phi_bb16_14, phi_bb16_5);
  }

  TNode<Smi> phi_bb17_5;
  TNode<BoolT> phi_bb17_11;
  TNode<BoolT> phi_bb17_12;
  TNode<BoolT> phi_bb17_13;
  TNode<BoolT> phi_bb17_14;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_5, &phi_bb17_11, &phi_bb17_12, &phi_bb17_13, &phi_bb17_14);
    ca_.Branch(tmp4, &block22, std::vector<compiler::Node*>{phi_bb17_5, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_14, phi_bb17_5, phi_bb17_5}, &block23, std::vector<compiler::Node*>{phi_bb17_5, phi_bb17_11, phi_bb17_12, phi_bb17_13, phi_bb17_14, phi_bb17_5, phi_bb17_5});
  }

  TNode<Smi> phi_bb22_5;
  TNode<BoolT> phi_bb22_11;
  TNode<BoolT> phi_bb22_12;
  TNode<BoolT> phi_bb22_13;
  TNode<BoolT> phi_bb22_14;
  TNode<Smi> phi_bb22_15;
  TNode<Smi> phi_bb22_18;
  TNode<JSAny> tmp19;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_5, &phi_bb22_11, &phi_bb22_12, &phi_bb22_13, &phi_bb22_14, &phi_bb22_15, &phi_bb22_18);
    compiler::CodeAssemblerLabel label20(&ca_);
    tmp19 = LoadElementNoHole_FixedDoubleArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp15}, TNode<Smi>{phi_bb22_18}, &label20);
    ca_.Goto(&block25, phi_bb22_5, phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_14, phi_bb22_15, phi_bb22_18, phi_bb22_18);
    if (label20.is_used()) {
      ca_.Bind(&label20);
      ca_.Goto(&block26, phi_bb22_5, phi_bb22_11, phi_bb22_12, phi_bb22_13, phi_bb22_14, phi_bb22_15, phi_bb22_18, phi_bb22_18);
    }
  }

  TNode<Smi> phi_bb26_5;
  TNode<BoolT> phi_bb26_11;
  TNode<BoolT> phi_bb26_12;
  TNode<BoolT> phi_bb26_13;
  TNode<BoolT> phi_bb26_14;
  TNode<Smi> phi_bb26_15;
  TNode<Smi> phi_bb26_18;
  TNode<Smi> phi_bb26_20;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_5, &phi_bb26_11, &phi_bb26_12, &phi_bb26_13, &phi_bb26_14, &phi_bb26_15, &phi_bb26_18, &phi_bb26_20);
    ca_.Goto(&block20, phi_bb26_5, phi_bb26_11, phi_bb26_12, phi_bb26_13, phi_bb26_14);
  }

  TNode<Smi> phi_bb25_5;
  TNode<BoolT> phi_bb25_11;
  TNode<BoolT> phi_bb25_12;
  TNode<BoolT> phi_bb25_13;
  TNode<BoolT> phi_bb25_14;
  TNode<Smi> phi_bb25_15;
  TNode<Smi> phi_bb25_18;
  TNode<Smi> phi_bb25_20;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_5, &phi_bb25_11, &phi_bb25_12, &phi_bb25_13, &phi_bb25_14, &phi_bb25_15, &phi_bb25_18, &phi_bb25_20);
    ca_.Goto(&block21, phi_bb25_5, phi_bb25_11, phi_bb25_12, phi_bb25_13, phi_bb25_14, phi_bb25_15, phi_bb25_18, tmp19);
  }

  TNode<Smi> phi_bb23_5;
  TNode<BoolT> phi_bb23_11;
  TNode<BoolT> phi_bb23_12;
  TNode<BoolT> phi_bb23_13;
  TNode<BoolT> phi_bb23_14;
  TNode<Smi> phi_bb23_15;
  TNode<Smi> phi_bb23_18;
  TNode<JSAny> tmp21;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_5, &phi_bb23_11, &phi_bb23_12, &phi_bb23_13, &phi_bb23_14, &phi_bb23_15, &phi_bb23_18);
    compiler::CodeAssemblerLabel label22(&ca_);
    tmp21 = LoadElementNoHole_FixedArray_0(state_, TNode<Context>{p_context}, TNode<JSArray>{tmp15}, TNode<Smi>{phi_bb23_18}, &label22);
    ca_.Goto(&block27, phi_bb23_5, phi_bb23_11, phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_15, phi_bb23_18, phi_bb23_18);
    if (label22.is_used()) {
      ca_.Bind(&label22);
      ca_.Goto(&block28, phi_bb23_5, phi_bb23_11, phi_bb23_12, phi_bb23_13, phi_bb23_14, phi_bb23_15, phi_bb23_18, phi_bb23_18);
    }
  }

  TNode<Smi> phi_bb28_5;
  TNode<BoolT> phi_bb28_11;
  TNode<BoolT> phi_bb28_12;
  TNode<BoolT> phi_bb28_13;
  TNode<BoolT> phi_bb28_14;
  TNode<Smi> phi_bb28_15;
  TNode<Smi> phi_bb28_18;
  TNode<Smi> phi_bb28_20;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5, &phi_bb28_11, &phi_bb28_12, &phi_bb28_13, &phi_bb28_14, &phi_bb28_15, &phi_bb28_18, &phi_bb28_20);
    ca_.Goto(&block20, phi_bb28_5, phi_bb28_11, phi_bb28_12, phi_bb28_13, phi_bb28_14);
  }

  TNode<Smi> phi_bb27_5;
  TNode<BoolT> phi_bb27_11;
  TNode<BoolT> phi_bb27_12;
  TNode<BoolT> phi_bb27_13;
  TNode<BoolT> phi_bb27_14;
  TNode<Smi> phi_bb27_15;
  TNode<Smi> phi_bb27_18;
  TNode<Smi> phi_bb27_20;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5, &phi_bb27_11, &phi_bb27_12, &phi_bb27_13, &phi_bb27_14, &phi_bb27_15, &phi_bb27_18, &phi_bb27_20);
    ca_.Goto(&block21, phi_bb27_5, phi_bb27_11, phi_bb27_12, phi_bb27_13, phi_bb27_14, phi_bb27_15, phi_bb27_18, tmp21);
  }

  TNode<Smi> phi_bb21_5;
  TNode<BoolT> phi_bb21_11;
  TNode<BoolT> phi_bb21_12;
  TNode<BoolT> phi_bb21_13;
  TNode<BoolT> phi_bb21_14;
  TNode<Smi> phi_bb21_15;
  TNode<Smi> phi_bb21_18;
  TNode<JSAny> phi_bb21_19;
  TNode<JSAny> tmp23;
  TNode<Smi> tmp24;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_5, &phi_bb21_11, &phi_bb21_12, &phi_bb21_13, &phi_bb21_14, &phi_bb21_15, &phi_bb21_18, &phi_bb21_19);
    tmp23 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<JSAny>{p_callbackfn}, TNode<JSAny>{p_thisArg}, TNode<JSAny>{phi_bb21_19}, TNode<JSAny>{phi_bb21_5}, TNode<JSAny>{tmp15});
    compiler::CodeAssemblerLabel label25(&ca_);
    tmp24 = Cast_Smi_0(state_, TNode<Object>{tmp23}, &label25);
    ca_.Goto(&block33, phi_bb21_5, phi_bb21_11, phi_bb21_12, phi_bb21_13, phi_bb21_14, phi_bb21_5, phi_bb21_5);
    if (label25.is_used()) {
      ca_.Bind(&label25);
      ca_.Goto(&block34, phi_bb21_5, phi_bb21_11, phi_bb21_12, phi_bb21_13, phi_bb21_14, phi_bb21_5, phi_bb21_5);
    }
  }

  TNode<Smi> phi_bb34_5;
  TNode<BoolT> phi_bb34_11;
  TNode<BoolT> phi_bb34_12;
  TNode<BoolT> phi_bb34_13;
  TNode<BoolT> phi_bb34_14;
  TNode<Smi> phi_bb34_17;
  TNode<Smi> phi_bb34_21;
  TNode<HeapNumber> tmp26;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_5, &phi_bb34_11, &phi_bb34_12, &phi_bb34_13, &phi_bb34_14, &phi_bb34_17, &phi_bb34_21);
    compiler::CodeAssemblerLabel label27(&ca_);
    tmp26 = Cast_HeapNumber_0(state_, TNode<HeapObject>{ca_.UncheckedCast<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, String, Symbol, Undefined>>(tmp23)}, &label27);
    ca_.Goto(&block45, phi_bb34_5, phi_bb34_11, phi_bb34_12, phi_bb34_13, phi_bb34_14, phi_bb34_17, phi_bb34_21);
    if (label27.is_used()) {
      ca_.Bind(&label27);
      ca_.Goto(&block46, phi_bb34_5, phi_bb34_11, phi_bb34_12, phi_bb34_13, phi_bb34_14, phi_bb34_17, phi_bb34_21);
    }
  }

  TNode<Smi> phi_bb33_5;
  TNode<BoolT> phi_bb33_11;
  TNode<BoolT> phi_bb33_12;
  TNode<BoolT> phi_bb33_13;
  TNode<BoolT> phi_bb33_14;
  TNode<Smi> phi_bb33_17;
  TNode<Smi> phi_bb33_21;
  TNode<Union<HeapObject, TaggedIndex>> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<UintPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<BoolT> tmp34;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_5, &phi_bb33_11, &phi_bb33_12, &phi_bb33_13, &phi_bb33_14, &phi_bb33_17, &phi_bb33_21);
    std::tie(tmp28, tmp29, tmp30) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp31 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb33_21});
    tmp32 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp31});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp30});
    tmp34 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp33});
    ca_.Branch(tmp34, &block39, std::vector<compiler::Node*>{phi_bb33_5, phi_bb33_11, phi_bb33_12, phi_bb33_13, phi_bb33_14, phi_bb33_17, phi_bb33_21, phi_bb33_21, phi_bb33_21}, &block40, std::vector<compiler::Node*>{phi_bb33_5, phi_bb33_11, phi_bb33_12, phi_bb33_13, phi_bb33_14, phi_bb33_17, phi_bb33_21, phi_bb33_21, phi_bb33_21});
  }

  TNode<Smi> phi_bb39_5;
  TNode<BoolT> phi_bb39_11;
  TNode<BoolT> phi_bb39_12;
  TNode<BoolT> phi_bb39_13;
  TNode<BoolT> phi_bb39_14;
  TNode<Smi> phi_bb39_17;
  TNode<Smi> phi_bb39_21;
  TNode<Smi> phi_bb39_29;
  TNode<Smi> phi_bb39_30;
  TNode<IntPtrT> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<Union<HeapObject, TaggedIndex>> tmp37;
  TNode<IntPtrT> tmp38;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_5, &phi_bb39_11, &phi_bb39_12, &phi_bb39_13, &phi_bb39_14, &phi_bb39_17, &phi_bb39_21, &phi_bb39_29, &phi_bb39_30);
    tmp35 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp31});
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp35});
    std::tie(tmp37, tmp38) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp28}, TNode<IntPtrT>{tmp36}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp37, tmp38}, tmp24);
    ca_.Goto(&block31, phi_bb39_5, phi_bb39_11, phi_bb39_12, phi_bb39_13, phi_bb39_14, phi_bb39_17, phi_bb39_21);
  }

  TNode<Smi> phi_bb40_5;
  TNode<BoolT> phi_bb40_11;
  TNode<BoolT> phi_bb40_12;
  TNode<BoolT> phi_bb40_13;
  TNode<BoolT> phi_bb40_14;
  TNode<Smi> phi_bb40_17;
  TNode<Smi> phi_bb40_21;
  TNode<Smi> phi_bb40_29;
  TNode<Smi> phi_bb40_30;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_5, &phi_bb40_11, &phi_bb40_12, &phi_bb40_13, &phi_bb40_14, &phi_bb40_17, &phi_bb40_21, &phi_bb40_29, &phi_bb40_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb46_5;
  TNode<BoolT> phi_bb46_11;
  TNode<BoolT> phi_bb46_12;
  TNode<BoolT> phi_bb46_13;
  TNode<BoolT> phi_bb46_14;
  TNode<Smi> phi_bb46_17;
  TNode<Smi> phi_bb46_21;
  TNode<Undefined> tmp39;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_5, &phi_bb46_11, &phi_bb46_12, &phi_bb46_13, &phi_bb46_14, &phi_bb46_17, &phi_bb46_21);
    compiler::CodeAssemblerLabel label40(&ca_);
    tmp39 = Cast_Undefined_2(state_, TNode<HeapObject>{ca_.UncheckedCast<Union<BigInt, Boolean, JSReceiver, Null, String, Symbol, Undefined>>(tmp23)}, &label40);
    ca_.Goto(&block57, phi_bb46_5, phi_bb46_11, phi_bb46_12, phi_bb46_13, phi_bb46_14, phi_bb46_17, phi_bb46_21);
    if (label40.is_used()) {
      ca_.Bind(&label40);
      ca_.Goto(&block58, phi_bb46_5, phi_bb46_11, phi_bb46_12, phi_bb46_13, phi_bb46_14, phi_bb46_17, phi_bb46_21);
    }
  }

  TNode<Smi> phi_bb45_5;
  TNode<BoolT> phi_bb45_11;
  TNode<BoolT> phi_bb45_12;
  TNode<BoolT> phi_bb45_13;
  TNode<BoolT> phi_bb45_14;
  TNode<Smi> phi_bb45_17;
  TNode<Smi> phi_bb45_21;
  TNode<BoolT> tmp41;
  TNode<Union<HeapObject, TaggedIndex>> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<UintPtrT> tmp46;
  TNode<UintPtrT> tmp47;
  TNode<BoolT> tmp48;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_5, &phi_bb45_11, &phi_bb45_12, &phi_bb45_13, &phi_bb45_14, &phi_bb45_17, &phi_bb45_21);
    tmp41 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    std::tie(tmp42, tmp43, tmp44) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp45 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb45_21});
    tmp46 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp45});
    tmp47 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp44});
    tmp48 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp46}, TNode<UintPtrT>{tmp47});
    ca_.Branch(tmp48, &block51, std::vector<compiler::Node*>{phi_bb45_5, phi_bb45_12, phi_bb45_13, phi_bb45_14, phi_bb45_17, phi_bb45_21, phi_bb45_21, phi_bb45_21}, &block52, std::vector<compiler::Node*>{phi_bb45_5, phi_bb45_12, phi_bb45_13, phi_bb45_14, phi_bb45_17, phi_bb45_21, phi_bb45_21, phi_bb45_21});
  }

  TNode<Smi> phi_bb51_5;
  TNode<BoolT> phi_bb51_12;
  TNode<BoolT> phi_bb51_13;
  TNode<BoolT> phi_bb51_14;
  TNode<Smi> phi_bb51_17;
  TNode<Smi> phi_bb51_21;
  TNode<Smi> phi_bb51_29;
  TNode<Smi> phi_bb51_30;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<Union<HeapObject, TaggedIndex>> tmp51;
  TNode<IntPtrT> tmp52;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_5, &phi_bb51_12, &phi_bb51_13, &phi_bb51_14, &phi_bb51_17, &phi_bb51_21, &phi_bb51_29, &phi_bb51_30);
    tmp49 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp45});
    tmp50 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp43}, TNode<IntPtrT>{tmp49});
    std::tie(tmp51, tmp52) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp42}, TNode<IntPtrT>{tmp50}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp51, tmp52}, tmp26);
    ca_.Goto(&block43, phi_bb51_5, tmp41, phi_bb51_12, phi_bb51_13, phi_bb51_14, phi_bb51_17, phi_bb51_21);
  }

  TNode<Smi> phi_bb52_5;
  TNode<BoolT> phi_bb52_12;
  TNode<BoolT> phi_bb52_13;
  TNode<BoolT> phi_bb52_14;
  TNode<Smi> phi_bb52_17;
  TNode<Smi> phi_bb52_21;
  TNode<Smi> phi_bb52_29;
  TNode<Smi> phi_bb52_30;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_5, &phi_bb52_12, &phi_bb52_13, &phi_bb52_14, &phi_bb52_17, &phi_bb52_21, &phi_bb52_29, &phi_bb52_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb58_5;
  TNode<BoolT> phi_bb58_11;
  TNode<BoolT> phi_bb58_12;
  TNode<BoolT> phi_bb58_13;
  TNode<BoolT> phi_bb58_14;
  TNode<Smi> phi_bb58_17;
  TNode<Smi> phi_bb58_21;
  TNode<BoolT> tmp53;
  TNode<BoolT> tmp54;
  TNode<BoolT> tmp55;
  TNode<Union<HeapObject, TaggedIndex>> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<UintPtrT> tmp60;
  TNode<UintPtrT> tmp61;
  TNode<BoolT> tmp62;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_5, &phi_bb58_11, &phi_bb58_12, &phi_bb58_13, &phi_bb58_14, &phi_bb58_17, &phi_bb58_21);
    tmp53 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp54 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp55 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    std::tie(tmp56, tmp57, tmp58) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp59 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb58_21});
    tmp60 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp59});
    tmp61 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp58});
    tmp62 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp61});
    ca_.Branch(tmp62, &block71, std::vector<compiler::Node*>{phi_bb58_5, phi_bb58_14, phi_bb58_17, phi_bb58_21, phi_bb58_21, phi_bb58_21}, &block72, std::vector<compiler::Node*>{phi_bb58_5, phi_bb58_14, phi_bb58_17, phi_bb58_21, phi_bb58_21, phi_bb58_21});
  }

  TNode<Smi> phi_bb57_5;
  TNode<BoolT> phi_bb57_11;
  TNode<BoolT> phi_bb57_12;
  TNode<BoolT> phi_bb57_13;
  TNode<BoolT> phi_bb57_14;
  TNode<Smi> phi_bb57_17;
  TNode<Smi> phi_bb57_21;
  TNode<BoolT> tmp63;
  TNode<BoolT> tmp64;
  TNode<BoolT> tmp65;
  TNode<Union<HeapObject, TaggedIndex>> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<UintPtrT> tmp70;
  TNode<UintPtrT> tmp71;
  TNode<BoolT> tmp72;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_5, &phi_bb57_11, &phi_bb57_12, &phi_bb57_13, &phi_bb57_14, &phi_bb57_17, &phi_bb57_21);
    tmp63 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp64 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp65 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    std::tie(tmp66, tmp67, tmp68) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp69 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb57_21});
    tmp70 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp69});
    tmp71 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp68});
    tmp72 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp70}, TNode<UintPtrT>{tmp71});
    ca_.Branch(tmp72, &block63, std::vector<compiler::Node*>{phi_bb57_5, phi_bb57_14, phi_bb57_17, phi_bb57_21, phi_bb57_21, phi_bb57_21}, &block64, std::vector<compiler::Node*>{phi_bb57_5, phi_bb57_14, phi_bb57_17, phi_bb57_21, phi_bb57_21, phi_bb57_21});
  }

  TNode<Smi> phi_bb63_5;
  TNode<BoolT> phi_bb63_14;
  TNode<Smi> phi_bb63_17;
  TNode<Smi> phi_bb63_21;
  TNode<Smi> phi_bb63_29;
  TNode<Smi> phi_bb63_30;
  TNode<IntPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<Union<HeapObject, TaggedIndex>> tmp75;
  TNode<IntPtrT> tmp76;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_5, &phi_bb63_14, &phi_bb63_17, &phi_bb63_21, &phi_bb63_29, &phi_bb63_30);
    tmp73 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp69});
    tmp74 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp67}, TNode<IntPtrT>{tmp73});
    std::tie(tmp75, tmp76) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp66}, TNode<IntPtrT>{tmp74}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp75, tmp76}, tmp39);
    ca_.Goto(&block55, phi_bb63_5, tmp63, tmp64, tmp65, phi_bb63_14, phi_bb63_17, phi_bb63_21);
  }

  TNode<Smi> phi_bb64_5;
  TNode<BoolT> phi_bb64_14;
  TNode<Smi> phi_bb64_17;
  TNode<Smi> phi_bb64_21;
  TNode<Smi> phi_bb64_29;
  TNode<Smi> phi_bb64_30;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_5, &phi_bb64_14, &phi_bb64_17, &phi_bb64_21, &phi_bb64_29, &phi_bb64_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb71_5;
  TNode<BoolT> phi_bb71_14;
  TNode<Smi> phi_bb71_17;
  TNode<Smi> phi_bb71_21;
  TNode<Smi> phi_bb71_29;
  TNode<Smi> phi_bb71_30;
  TNode<IntPtrT> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<Union<HeapObject, TaggedIndex>> tmp79;
  TNode<IntPtrT> tmp80;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_5, &phi_bb71_14, &phi_bb71_17, &phi_bb71_21, &phi_bb71_29, &phi_bb71_30);
    tmp77 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp59});
    tmp78 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp57}, TNode<IntPtrT>{tmp77});
    std::tie(tmp79, tmp80) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp56}, TNode<IntPtrT>{tmp78}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp79, tmp80}, ca_.UncheckedCast<Union<BigInt, Boolean, JSReceiver, Null, String, Symbol>>(tmp23));
    ca_.Goto(&block55, phi_bb71_5, tmp53, tmp54, tmp55, phi_bb71_14, phi_bb71_17, phi_bb71_21);
  }

  TNode<Smi> phi_bb72_5;
  TNode<BoolT> phi_bb72_14;
  TNode<Smi> phi_bb72_17;
  TNode<Smi> phi_bb72_21;
  TNode<Smi> phi_bb72_29;
  TNode<Smi> phi_bb72_30;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_5, &phi_bb72_14, &phi_bb72_17, &phi_bb72_21, &phi_bb72_29, &phi_bb72_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb55_5;
  TNode<BoolT> phi_bb55_11;
  TNode<BoolT> phi_bb55_12;
  TNode<BoolT> phi_bb55_13;
  TNode<BoolT> phi_bb55_14;
  TNode<Smi> phi_bb55_17;
  TNode<Smi> phi_bb55_21;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_5, &phi_bb55_11, &phi_bb55_12, &phi_bb55_13, &phi_bb55_14, &phi_bb55_17, &phi_bb55_21);
    ca_.Goto(&block43, phi_bb55_5, phi_bb55_11, phi_bb55_12, phi_bb55_13, phi_bb55_14, phi_bb55_17, phi_bb55_21);
  }

  TNode<Smi> phi_bb43_5;
  TNode<BoolT> phi_bb43_11;
  TNode<BoolT> phi_bb43_12;
  TNode<BoolT> phi_bb43_13;
  TNode<BoolT> phi_bb43_14;
  TNode<Smi> phi_bb43_17;
  TNode<Smi> phi_bb43_21;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_5, &phi_bb43_11, &phi_bb43_12, &phi_bb43_13, &phi_bb43_14, &phi_bb43_17, &phi_bb43_21);
    ca_.Goto(&block31, phi_bb43_5, phi_bb43_11, phi_bb43_12, phi_bb43_13, phi_bb43_14, phi_bb43_17, phi_bb43_21);
  }

  TNode<Smi> phi_bb31_5;
  TNode<BoolT> phi_bb31_11;
  TNode<BoolT> phi_bb31_12;
  TNode<BoolT> phi_bb31_13;
  TNode<BoolT> phi_bb31_14;
  TNode<Smi> phi_bb31_17;
  TNode<Smi> phi_bb31_21;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_5, &phi_bb31_11, &phi_bb31_12, &phi_bb31_13, &phi_bb31_14, &phi_bb31_17, &phi_bb31_21);
    ca_.Goto(&block19, phi_bb31_5, phi_bb31_11, phi_bb31_12, phi_bb31_13, phi_bb31_14);
  }

  TNode<Smi> phi_bb20_5;
  TNode<BoolT> phi_bb20_11;
  TNode<BoolT> phi_bb20_12;
  TNode<BoolT> phi_bb20_13;
  TNode<BoolT> phi_bb20_14;
  TNode<BoolT> tmp81;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_5, &phi_bb20_11, &phi_bb20_12, &phi_bb20_13, &phi_bb20_14);
    tmp81 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block19, phi_bb20_5, phi_bb20_11, phi_bb20_12, phi_bb20_13, tmp81);
  }

  TNode<Smi> phi_bb19_5;
  TNode<BoolT> phi_bb19_11;
  TNode<BoolT> phi_bb19_12;
  TNode<BoolT> phi_bb19_13;
  TNode<BoolT> phi_bb19_14;
  TNode<Smi> tmp82;
  TNode<Smi> tmp83;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_5, &phi_bb19_11, &phi_bb19_12, &phi_bb19_13, &phi_bb19_14);
    tmp82 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp83 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb19_5}, TNode<Smi>{tmp82});
    ca_.Goto(&block7, tmp83, tmp15, phi_bb19_11, phi_bb19_12, phi_bb19_13, phi_bb19_14);
  }

  TNode<Smi> phi_bb6_5;
  TNode<JSArray> phi_bb6_7;
  TNode<BoolT> phi_bb6_11;
  TNode<BoolT> phi_bb6_12;
  TNode<BoolT> phi_bb6_13;
  TNode<BoolT> phi_bb6_14;
  TNode<IntPtrT> tmp84;
  TNode<Smi> tmp85;
  TNode<Int32T> tmp86;
  TNode<BoolT> tmp87;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_5, &phi_bb6_7, &phi_bb6_11, &phi_bb6_12, &phi_bb6_13, &phi_bb6_14);
    tmp84 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp85 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp84});
    tmp86 = FromConstexpr_ElementsKind_constexpr_PACKED_SMI_ELEMENTS_0(state_, ElementsKind::PACKED_SMI_ELEMENTS);
    tmp87 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb6_11});
    ca_.Branch(tmp87, &block130, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_7, phi_bb6_11, phi_bb6_12, phi_bb6_13, phi_bb6_14}, &block131, std::vector<compiler::Node*>{phi_bb6_5, phi_bb6_7, phi_bb6_11, phi_bb6_12, phi_bb6_13, phi_bb6_14, tmp86});
  }

  TNode<Smi> phi_bb4_5;
  TNode<JSArray> phi_bb4_7;
  TNode<BoolT> phi_bb4_11;
  TNode<BoolT> phi_bb4_12;
  TNode<BoolT> phi_bb4_13;
  TNode<BoolT> phi_bb4_14;
  TNode<Smi> phi_bb4_15;
  TNode<IntPtrT> tmp88;
  TNode<Smi> tmp89;
  TNode<Int32T> tmp90;
  TNode<BoolT> tmp91;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_5, &phi_bb4_7, &phi_bb4_11, &phi_bb4_12, &phi_bb4_13, &phi_bb4_14, &phi_bb4_15);
    tmp88 = FromConstexpr_intptr_constexpr_int31_0(state_, 4);
    tmp89 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp5, tmp88});
    tmp90 = FromConstexpr_ElementsKind_constexpr_PACKED_SMI_ELEMENTS_0(state_, ElementsKind::PACKED_SMI_ELEMENTS);
    tmp91 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb4_11});
    ca_.Branch(tmp91, &block81, std::vector<compiler::Node*>{phi_bb4_5, phi_bb4_7, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_15, phi_bb4_15, phi_bb4_15}, &block82, std::vector<compiler::Node*>{phi_bb4_5, phi_bb4_7, phi_bb4_11, phi_bb4_12, phi_bb4_13, phi_bb4_14, phi_bb4_15, phi_bb4_15, phi_bb4_15, tmp90});
  }

  TNode<Smi> phi_bb81_5;
  TNode<JSArray> phi_bb81_7;
  TNode<BoolT> phi_bb81_11;
  TNode<BoolT> phi_bb81_12;
  TNode<BoolT> phi_bb81_13;
  TNode<BoolT> phi_bb81_14;
  TNode<Smi> phi_bb81_15;
  TNode<Smi> phi_bb81_16;
  TNode<Smi> phi_bb81_19;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_5, &phi_bb81_7, &phi_bb81_11, &phi_bb81_12, &phi_bb81_13, &phi_bb81_14, &phi_bb81_15, &phi_bb81_16, &phi_bb81_19);
    ca_.Branch(phi_bb81_12, &block83, std::vector<compiler::Node*>{phi_bb81_5, phi_bb81_7, phi_bb81_11, phi_bb81_12, phi_bb81_13, phi_bb81_14, phi_bb81_15, phi_bb81_16, phi_bb81_19}, &block84, std::vector<compiler::Node*>{phi_bb81_5, phi_bb81_7, phi_bb81_11, phi_bb81_12, phi_bb81_13, phi_bb81_14, phi_bb81_15, phi_bb81_16, phi_bb81_19});
  }

  TNode<Smi> phi_bb83_5;
  TNode<JSArray> phi_bb83_7;
  TNode<BoolT> phi_bb83_11;
  TNode<BoolT> phi_bb83_12;
  TNode<BoolT> phi_bb83_13;
  TNode<BoolT> phi_bb83_14;
  TNode<Smi> phi_bb83_15;
  TNode<Smi> phi_bb83_16;
  TNode<Smi> phi_bb83_19;
  TNode<Int32T> tmp92;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_5, &phi_bb83_7, &phi_bb83_11, &phi_bb83_12, &phi_bb83_13, &phi_bb83_14, &phi_bb83_15, &phi_bb83_16, &phi_bb83_19);
    tmp92 = FromConstexpr_ElementsKind_constexpr_PACKED_DOUBLE_ELEMENTS_0(state_, ElementsKind::PACKED_DOUBLE_ELEMENTS);
    ca_.Goto(&block85, phi_bb83_5, phi_bb83_7, phi_bb83_11, phi_bb83_12, phi_bb83_13, phi_bb83_14, phi_bb83_15, phi_bb83_16, phi_bb83_19, tmp92);
  }

  TNode<Smi> phi_bb84_5;
  TNode<JSArray> phi_bb84_7;
  TNode<BoolT> phi_bb84_11;
  TNode<BoolT> phi_bb84_12;
  TNode<BoolT> phi_bb84_13;
  TNode<BoolT> phi_bb84_14;
  TNode<Smi> phi_bb84_15;
  TNode<Smi> phi_bb84_16;
  TNode<Smi> phi_bb84_19;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_5, &phi_bb84_7, &phi_bb84_11, &phi_bb84_12, &phi_bb84_13, &phi_bb84_14, &phi_bb84_15, &phi_bb84_16, &phi_bb84_19);
    ca_.Branch(phi_bb84_13, &block86, std::vector<compiler::Node*>{phi_bb84_5, phi_bb84_7, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_16, phi_bb84_19}, &block87, std::vector<compiler::Node*>{phi_bb84_5, phi_bb84_7, phi_bb84_11, phi_bb84_12, phi_bb84_13, phi_bb84_14, phi_bb84_15, phi_bb84_16, phi_bb84_19});
  }

  TNode<Smi> phi_bb86_5;
  TNode<JSArray> phi_bb86_7;
  TNode<BoolT> phi_bb86_11;
  TNode<BoolT> phi_bb86_12;
  TNode<BoolT> phi_bb86_13;
  TNode<BoolT> phi_bb86_14;
  TNode<Smi> phi_bb86_15;
  TNode<Smi> phi_bb86_16;
  TNode<Smi> phi_bb86_19;
  TNode<Int32T> tmp93;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_5, &phi_bb86_7, &phi_bb86_11, &phi_bb86_12, &phi_bb86_13, &phi_bb86_14, &phi_bb86_15, &phi_bb86_16, &phi_bb86_19);
    tmp93 = FromConstexpr_ElementsKind_constexpr_HOLEY_DOUBLE_ELEMENTS_0(state_, ElementsKind::HOLEY_DOUBLE_ELEMENTS);
    ca_.Goto(&block88, phi_bb86_5, phi_bb86_7, phi_bb86_11, phi_bb86_12, phi_bb86_13, phi_bb86_14, phi_bb86_15, phi_bb86_16, phi_bb86_19, tmp93);
  }

  TNode<Smi> phi_bb87_5;
  TNode<JSArray> phi_bb87_7;
  TNode<BoolT> phi_bb87_11;
  TNode<BoolT> phi_bb87_12;
  TNode<BoolT> phi_bb87_13;
  TNode<BoolT> phi_bb87_14;
  TNode<Smi> phi_bb87_15;
  TNode<Smi> phi_bb87_16;
  TNode<Smi> phi_bb87_19;
  TNode<Int32T> tmp94;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_5, &phi_bb87_7, &phi_bb87_11, &phi_bb87_12, &phi_bb87_13, &phi_bb87_14, &phi_bb87_15, &phi_bb87_16, &phi_bb87_19);
    tmp94 = FromConstexpr_ElementsKind_constexpr_PACKED_ELEMENTS_0(state_, ElementsKind::PACKED_ELEMENTS);
    ca_.Goto(&block88, phi_bb87_5, phi_bb87_7, phi_bb87_11, phi_bb87_12, phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_19, tmp94);
  }

  TNode<Smi> phi_bb88_5;
  TNode<JSArray> phi_bb88_7;
  TNode<BoolT> phi_bb88_11;
  TNode<BoolT> phi_bb88_12;
  TNode<BoolT> phi_bb88_13;
  TNode<BoolT> phi_bb88_14;
  TNode<Smi> phi_bb88_15;
  TNode<Smi> phi_bb88_16;
  TNode<Smi> phi_bb88_19;
  TNode<Int32T> phi_bb88_21;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_5, &phi_bb88_7, &phi_bb88_11, &phi_bb88_12, &phi_bb88_13, &phi_bb88_14, &phi_bb88_15, &phi_bb88_16, &phi_bb88_19, &phi_bb88_21);
    ca_.Goto(&block85, phi_bb88_5, phi_bb88_7, phi_bb88_11, phi_bb88_12, phi_bb88_13, phi_bb88_14, phi_bb88_15, phi_bb88_16, phi_bb88_19, phi_bb88_21);
  }

  TNode<Smi> phi_bb85_5;
  TNode<JSArray> phi_bb85_7;
  TNode<BoolT> phi_bb85_11;
  TNode<BoolT> phi_bb85_12;
  TNode<BoolT> phi_bb85_13;
  TNode<BoolT> phi_bb85_14;
  TNode<Smi> phi_bb85_15;
  TNode<Smi> phi_bb85_16;
  TNode<Smi> phi_bb85_19;
  TNode<Int32T> phi_bb85_21;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_5, &phi_bb85_7, &phi_bb85_11, &phi_bb85_12, &phi_bb85_13, &phi_bb85_14, &phi_bb85_15, &phi_bb85_16, &phi_bb85_19, &phi_bb85_21);
    ca_.Goto(&block82, phi_bb85_5, phi_bb85_7, phi_bb85_11, phi_bb85_12, phi_bb85_13, phi_bb85_14, phi_bb85_15, phi_bb85_16, phi_bb85_19, phi_bb85_21);
  }

  TNode<Smi> phi_bb82_5;
  TNode<JSArray> phi_bb82_7;
  TNode<BoolT> phi_bb82_11;
  TNode<BoolT> phi_bb82_12;
  TNode<BoolT> phi_bb82_13;
  TNode<BoolT> phi_bb82_14;
  TNode<Smi> phi_bb82_15;
  TNode<Smi> phi_bb82_16;
  TNode<Smi> phi_bb82_19;
  TNode<Int32T> phi_bb82_21;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_5, &phi_bb82_7, &phi_bb82_11, &phi_bb82_12, &phi_bb82_13, &phi_bb82_14, &phi_bb82_15, &phi_bb82_16, &phi_bb82_19, &phi_bb82_21);
    ca_.Branch(phi_bb82_14, &block95, std::vector<compiler::Node*>{phi_bb82_5, phi_bb82_7, phi_bb82_11, phi_bb82_12, phi_bb82_13, phi_bb82_14, phi_bb82_15, phi_bb82_16, phi_bb82_19, phi_bb82_21, phi_bb82_14}, &block96, std::vector<compiler::Node*>{phi_bb82_5, phi_bb82_7, phi_bb82_11, phi_bb82_12, phi_bb82_13, phi_bb82_14, phi_bb82_15, phi_bb82_16, phi_bb82_19, phi_bb82_21, phi_bb82_14});
  }

  TNode<Smi> phi_bb95_5;
  TNode<JSArray> phi_bb95_7;
  TNode<BoolT> phi_bb95_11;
  TNode<BoolT> phi_bb95_12;
  TNode<BoolT> phi_bb95_13;
  TNode<BoolT> phi_bb95_14;
  TNode<Smi> phi_bb95_15;
  TNode<Smi> phi_bb95_16;
  TNode<Smi> phi_bb95_19;
  TNode<Int32T> phi_bb95_21;
  TNode<BoolT> phi_bb95_22;
  TNode<BoolT> tmp95;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_5, &phi_bb95_7, &phi_bb95_11, &phi_bb95_12, &phi_bb95_13, &phi_bb95_14, &phi_bb95_15, &phi_bb95_16, &phi_bb95_19, &phi_bb95_21, &phi_bb95_22);
    tmp95 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block97, phi_bb95_5, phi_bb95_7, phi_bb95_11, phi_bb95_12, phi_bb95_13, phi_bb95_14, phi_bb95_15, phi_bb95_16, phi_bb95_19, phi_bb95_21, phi_bb95_22, tmp95);
  }

  TNode<Smi> phi_bb96_5;
  TNode<JSArray> phi_bb96_7;
  TNode<BoolT> phi_bb96_11;
  TNode<BoolT> phi_bb96_12;
  TNode<BoolT> phi_bb96_13;
  TNode<BoolT> phi_bb96_14;
  TNode<Smi> phi_bb96_15;
  TNode<Smi> phi_bb96_16;
  TNode<Smi> phi_bb96_19;
  TNode<Int32T> phi_bb96_21;
  TNode<BoolT> phi_bb96_22;
  TNode<BoolT> tmp96;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_5, &phi_bb96_7, &phi_bb96_11, &phi_bb96_12, &phi_bb96_13, &phi_bb96_14, &phi_bb96_15, &phi_bb96_16, &phi_bb96_19, &phi_bb96_21, &phi_bb96_22);
    tmp96 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb96_19}, TNode<Smi>{tmp89});
    ca_.Goto(&block97, phi_bb96_5, phi_bb96_7, phi_bb96_11, phi_bb96_12, phi_bb96_13, phi_bb96_14, phi_bb96_15, phi_bb96_16, phi_bb96_19, phi_bb96_21, phi_bb96_22, tmp96);
  }

  TNode<Smi> phi_bb97_5;
  TNode<JSArray> phi_bb97_7;
  TNode<BoolT> phi_bb97_11;
  TNode<BoolT> phi_bb97_12;
  TNode<BoolT> phi_bb97_13;
  TNode<BoolT> phi_bb97_14;
  TNode<Smi> phi_bb97_15;
  TNode<Smi> phi_bb97_16;
  TNode<Smi> phi_bb97_19;
  TNode<Int32T> phi_bb97_21;
  TNode<BoolT> phi_bb97_22;
  TNode<BoolT> phi_bb97_23;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_5, &phi_bb97_7, &phi_bb97_11, &phi_bb97_12, &phi_bb97_13, &phi_bb97_14, &phi_bb97_15, &phi_bb97_16, &phi_bb97_19, &phi_bb97_21, &phi_bb97_22, &phi_bb97_23);
    ca_.Branch(phi_bb97_23, &block93, std::vector<compiler::Node*>{phi_bb97_5, phi_bb97_7, phi_bb97_11, phi_bb97_12, phi_bb97_13, phi_bb97_14, phi_bb97_15, phi_bb97_16, phi_bb97_19, phi_bb97_21}, &block94, std::vector<compiler::Node*>{phi_bb97_5, phi_bb97_7, phi_bb97_11, phi_bb97_12, phi_bb97_13, phi_bb97_14, phi_bb97_15, phi_bb97_16, phi_bb97_19, phi_bb97_21});
  }

  TNode<Smi> phi_bb93_5;
  TNode<JSArray> phi_bb93_7;
  TNode<BoolT> phi_bb93_11;
  TNode<BoolT> phi_bb93_12;
  TNode<BoolT> phi_bb93_13;
  TNode<BoolT> phi_bb93_14;
  TNode<Smi> phi_bb93_15;
  TNode<Smi> phi_bb93_16;
  TNode<Smi> phi_bb93_19;
  TNode<Int32T> phi_bb93_21;
  TNode<Int32T> tmp97;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_5, &phi_bb93_7, &phi_bb93_11, &phi_bb93_12, &phi_bb93_13, &phi_bb93_14, &phi_bb93_15, &phi_bb93_16, &phi_bb93_19, &phi_bb93_21);
    tmp97 = FastHoleyElementsKind_0(state_, TNode<Int32T>{phi_bb93_21});
    ca_.Goto(&block94, phi_bb93_5, phi_bb93_7, phi_bb93_11, phi_bb93_12, phi_bb93_13, phi_bb93_14, phi_bb93_15, phi_bb93_16, phi_bb93_19, tmp97);
  }

  TNode<Smi> phi_bb94_5;
  TNode<JSArray> phi_bb94_7;
  TNode<BoolT> phi_bb94_11;
  TNode<BoolT> phi_bb94_12;
  TNode<BoolT> phi_bb94_13;
  TNode<BoolT> phi_bb94_14;
  TNode<Smi> phi_bb94_15;
  TNode<Smi> phi_bb94_16;
  TNode<Smi> phi_bb94_19;
  TNode<Int32T> phi_bb94_21;
  TNode<NativeContext> tmp98;
  TNode<Map> tmp99;
  TNode<BoolT> tmp100;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_5, &phi_bb94_7, &phi_bb94_11, &phi_bb94_12, &phi_bb94_13, &phi_bb94_14, &phi_bb94_15, &phi_bb94_16, &phi_bb94_19, &phi_bb94_21);
    tmp98 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp99 = CodeStubAssembler(state_).LoadJSArrayElementsMap(TNode<Int32T>{phi_bb94_21}, TNode<NativeContext>{tmp98});
    tmp100 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{phi_bb94_21});
    ca_.Branch(tmp100, &block98, std::vector<compiler::Node*>{phi_bb94_5, phi_bb94_7, phi_bb94_11, phi_bb94_12, phi_bb94_13, phi_bb94_14, phi_bb94_15, phi_bb94_16, phi_bb94_19}, &block99, std::vector<compiler::Node*>{phi_bb94_5, phi_bb94_7, phi_bb94_11, phi_bb94_12, phi_bb94_13, phi_bb94_14, phi_bb94_15, phi_bb94_16, phi_bb94_19});
  }

  TNode<Smi> phi_bb98_5;
  TNode<JSArray> phi_bb98_7;
  TNode<BoolT> phi_bb98_11;
  TNode<BoolT> phi_bb98_12;
  TNode<BoolT> phi_bb98_13;
  TNode<BoolT> phi_bb98_14;
  TNode<Smi> phi_bb98_15;
  TNode<Smi> phi_bb98_16;
  TNode<Smi> phi_bb98_19;
  TNode<IntPtrT> tmp101;
  TNode<FixedDoubleArray> tmp102;
  TNode<JSArray> tmp103;
  TNode<Smi> tmp104;
  if (block98.is_used()) {
    ca_.Bind(&block98, &phi_bb98_5, &phi_bb98_7, &phi_bb98_11, &phi_bb98_12, &phi_bb98_13, &phi_bb98_14, &phi_bb98_15, &phi_bb98_16, &phi_bb98_19);
    tmp101 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp89});
    tmp102 = CodeStubAssembler(state_).AllocateFixedDoubleArrayWithHoles(TNode<IntPtrT>{tmp101});
    tmp103 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp99}, TNode<FixedArrayBase>{tmp5});
    tmp104 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block103, phi_bb98_5, phi_bb98_7, phi_bb98_11, phi_bb98_12, phi_bb98_13, phi_bb98_14, phi_bb98_15, phi_bb98_16, phi_bb98_19, tmp104);
  }

  TNode<Smi> phi_bb103_5;
  TNode<JSArray> phi_bb103_7;
  TNode<BoolT> phi_bb103_11;
  TNode<BoolT> phi_bb103_12;
  TNode<BoolT> phi_bb103_13;
  TNode<BoolT> phi_bb103_14;
  TNode<Smi> phi_bb103_15;
  TNode<Smi> phi_bb103_16;
  TNode<Smi> phi_bb103_19;
  TNode<Smi> phi_bb103_25;
  TNode<BoolT> tmp105;
  if (block103.is_used()) {
    ca_.Bind(&block103, &phi_bb103_5, &phi_bb103_7, &phi_bb103_11, &phi_bb103_12, &phi_bb103_13, &phi_bb103_14, &phi_bb103_15, &phi_bb103_16, &phi_bb103_19, &phi_bb103_25);
    tmp105 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb103_25}, TNode<Smi>{phi_bb103_19});
    ca_.Branch(tmp105, &block101, std::vector<compiler::Node*>{phi_bb103_5, phi_bb103_7, phi_bb103_11, phi_bb103_12, phi_bb103_13, phi_bb103_14, phi_bb103_15, phi_bb103_16, phi_bb103_19, phi_bb103_25}, &block102, std::vector<compiler::Node*>{phi_bb103_5, phi_bb103_7, phi_bb103_11, phi_bb103_12, phi_bb103_13, phi_bb103_14, phi_bb103_15, phi_bb103_16, phi_bb103_19, phi_bb103_25});
  }

  TNode<Smi> phi_bb101_5;
  TNode<JSArray> phi_bb101_7;
  TNode<BoolT> phi_bb101_11;
  TNode<BoolT> phi_bb101_12;
  TNode<BoolT> phi_bb101_13;
  TNode<BoolT> phi_bb101_14;
  TNode<Smi> phi_bb101_15;
  TNode<Smi> phi_bb101_16;
  TNode<Smi> phi_bb101_19;
  TNode<Smi> phi_bb101_25;
  TNode<Union<HeapObject, TaggedIndex>> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<IntPtrT> tmp108;
  TNode<IntPtrT> tmp109;
  TNode<UintPtrT> tmp110;
  TNode<UintPtrT> tmp111;
  TNode<BoolT> tmp112;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_5, &phi_bb101_7, &phi_bb101_11, &phi_bb101_12, &phi_bb101_13, &phi_bb101_14, &phi_bb101_15, &phi_bb101_16, &phi_bb101_19, &phi_bb101_25);
    std::tie(tmp106, tmp107, tmp108) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp109 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb101_25});
    tmp110 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp109});
    tmp111 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp108});
    tmp112 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp110}, TNode<UintPtrT>{tmp111});
    ca_.Branch(tmp112, &block109, std::vector<compiler::Node*>{phi_bb101_5, phi_bb101_7, phi_bb101_11, phi_bb101_12, phi_bb101_13, phi_bb101_14, phi_bb101_15, phi_bb101_16, phi_bb101_19, phi_bb101_25, phi_bb101_25, phi_bb101_25}, &block110, std::vector<compiler::Node*>{phi_bb101_5, phi_bb101_7, phi_bb101_11, phi_bb101_12, phi_bb101_13, phi_bb101_14, phi_bb101_15, phi_bb101_16, phi_bb101_19, phi_bb101_25, phi_bb101_25, phi_bb101_25});
  }

  TNode<Smi> phi_bb109_5;
  TNode<JSArray> phi_bb109_7;
  TNode<BoolT> phi_bb109_11;
  TNode<BoolT> phi_bb109_12;
  TNode<BoolT> phi_bb109_13;
  TNode<BoolT> phi_bb109_14;
  TNode<Smi> phi_bb109_15;
  TNode<Smi> phi_bb109_16;
  TNode<Smi> phi_bb109_19;
  TNode<Smi> phi_bb109_25;
  TNode<Smi> phi_bb109_30;
  TNode<Smi> phi_bb109_31;
  TNode<IntPtrT> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<Union<HeapObject, TaggedIndex>> tmp115;
  TNode<IntPtrT> tmp116;
  TNode<Object> tmp117;
  TNode<Union<HeapNumber, Hole, Smi>> tmp118;
  TNode<Number> tmp119;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_5, &phi_bb109_7, &phi_bb109_11, &phi_bb109_12, &phi_bb109_13, &phi_bb109_14, &phi_bb109_15, &phi_bb109_16, &phi_bb109_19, &phi_bb109_25, &phi_bb109_30, &phi_bb109_31);
    tmp113 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp109});
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp107}, TNode<IntPtrT>{tmp113});
    std::tie(tmp115, tmp116) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp106}, TNode<IntPtrT>{tmp114}).Flatten();
    tmp117 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp115, tmp116});
    tmp118 = UnsafeCast_Smi_OR_HeapNumber_OR_TheHole_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp117});
    compiler::CodeAssemblerLabel label120(&ca_);
    tmp119 = Cast_Number_0(state_, TNode<Object>{tmp118}, &label120);
    ca_.Goto(&block115, phi_bb109_5, phi_bb109_7, phi_bb109_11, phi_bb109_12, phi_bb109_13, phi_bb109_14, phi_bb109_15, phi_bb109_16, phi_bb109_19, phi_bb109_25);
    if (label120.is_used()) {
      ca_.Bind(&label120);
      ca_.Goto(&block116, phi_bb109_5, phi_bb109_7, phi_bb109_11, phi_bb109_12, phi_bb109_13, phi_bb109_14, phi_bb109_15, phi_bb109_16, phi_bb109_19, phi_bb109_25);
    }
  }

  TNode<Smi> phi_bb110_5;
  TNode<JSArray> phi_bb110_7;
  TNode<BoolT> phi_bb110_11;
  TNode<BoolT> phi_bb110_12;
  TNode<BoolT> phi_bb110_13;
  TNode<BoolT> phi_bb110_14;
  TNode<Smi> phi_bb110_15;
  TNode<Smi> phi_bb110_16;
  TNode<Smi> phi_bb110_19;
  TNode<Smi> phi_bb110_25;
  TNode<Smi> phi_bb110_30;
  TNode<Smi> phi_bb110_31;
  if (block110.is_used()) {
    ca_.Bind(&block110, &phi_bb110_5, &phi_bb110_7, &phi_bb110_11, &phi_bb110_12, &phi_bb110_13, &phi_bb110_14, &phi_bb110_15, &phi_bb110_16, &phi_bb110_19, &phi_bb110_25, &phi_bb110_30, &phi_bb110_31);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb116_5;
  TNode<JSArray> phi_bb116_7;
  TNode<BoolT> phi_bb116_11;
  TNode<BoolT> phi_bb116_12;
  TNode<BoolT> phi_bb116_13;
  TNode<BoolT> phi_bb116_14;
  TNode<Smi> phi_bb116_15;
  TNode<Smi> phi_bb116_16;
  TNode<Smi> phi_bb116_19;
  TNode<Smi> phi_bb116_25;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_5, &phi_bb116_7, &phi_bb116_11, &phi_bb116_12, &phi_bb116_13, &phi_bb116_14, &phi_bb116_15, &phi_bb116_16, &phi_bb116_19, &phi_bb116_25);
    ca_.Goto(&block113, phi_bb116_5, phi_bb116_7, phi_bb116_11, phi_bb116_12, phi_bb116_13, phi_bb116_14, phi_bb116_15, phi_bb116_16, phi_bb116_19, phi_bb116_25);
  }

  TNode<Smi> phi_bb115_5;
  TNode<JSArray> phi_bb115_7;
  TNode<BoolT> phi_bb115_11;
  TNode<BoolT> phi_bb115_12;
  TNode<BoolT> phi_bb115_13;
  TNode<BoolT> phi_bb115_14;
  TNode<Smi> phi_bb115_15;
  TNode<Smi> phi_bb115_16;
  TNode<Smi> phi_bb115_19;
  TNode<Smi> phi_bb115_25;
  TNode<Union<HeapObject, TaggedIndex>> tmp121;
  TNode<IntPtrT> tmp122;
  TNode<IntPtrT> tmp123;
  TNode<IntPtrT> tmp124;
  TNode<UintPtrT> tmp125;
  TNode<UintPtrT> tmp126;
  TNode<BoolT> tmp127;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_5, &phi_bb115_7, &phi_bb115_11, &phi_bb115_12, &phi_bb115_13, &phi_bb115_14, &phi_bb115_15, &phi_bb115_16, &phi_bb115_19, &phi_bb115_25);
    std::tie(tmp121, tmp122, tmp123) = FieldSliceFixedDoubleArrayValues_0(state_, TNode<FixedDoubleArray>{tmp102}).Flatten();
    tmp124 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb115_25});
    tmp125 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp124});
    tmp126 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp123});
    tmp127 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp125}, TNode<UintPtrT>{tmp126});
    ca_.Branch(tmp127, &block121, std::vector<compiler::Node*>{phi_bb115_5, phi_bb115_7, phi_bb115_11, phi_bb115_12, phi_bb115_13, phi_bb115_14, phi_bb115_15, phi_bb115_16, phi_bb115_19, phi_bb115_25, phi_bb115_25, phi_bb115_25}, &block122, std::vector<compiler::Node*>{phi_bb115_5, phi_bb115_7, phi_bb115_11, phi_bb115_12, phi_bb115_13, phi_bb115_14, phi_bb115_15, phi_bb115_16, phi_bb115_19, phi_bb115_25, phi_bb115_25, phi_bb115_25});
  }

  TNode<Smi> phi_bb121_5;
  TNode<JSArray> phi_bb121_7;
  TNode<BoolT> phi_bb121_11;
  TNode<BoolT> phi_bb121_12;
  TNode<BoolT> phi_bb121_13;
  TNode<BoolT> phi_bb121_14;
  TNode<Smi> phi_bb121_15;
  TNode<Smi> phi_bb121_16;
  TNode<Smi> phi_bb121_19;
  TNode<Smi> phi_bb121_25;
  TNode<Smi> phi_bb121_32;
  TNode<Smi> phi_bb121_33;
  TNode<IntPtrT> tmp128;
  TNode<IntPtrT> tmp129;
  TNode<Union<HeapObject, TaggedIndex>> tmp130;
  TNode<IntPtrT> tmp131;
  TNode<BoolT> tmp132;
  TNode<Float64T> tmp133;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_5, &phi_bb121_7, &phi_bb121_11, &phi_bb121_12, &phi_bb121_13, &phi_bb121_14, &phi_bb121_15, &phi_bb121_16, &phi_bb121_19, &phi_bb121_25, &phi_bb121_32, &phi_bb121_33);
    tmp128 = TimesSizeOf_float64_or_undefined_or_hole_0(state_, TNode<IntPtrT>{tmp124});
    tmp129 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp122}, TNode<IntPtrT>{tmp128});
    std::tie(tmp130, tmp131) = NewReference_float64_or_undefined_or_hole_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp121}, TNode<IntPtrT>{tmp129}).Flatten();
    std::tie(tmp132, tmp133) = Convert_float64_or_undefined_or_hole_Number_0(state_, TNode<Number>{tmp119}).Flatten();
    StoreFloat64OrHole_0(state_, TorqueStructReference_float64_or_undefined_or_hole_0{TNode<Union<HeapObject, TaggedIndex>>{tmp130}, TNode<IntPtrT>{tmp131}, TorqueStructUnsafe_0{}}, TorqueStructfloat64_or_undefined_or_hole_0{TNode<BoolT>{tmp132}, TNode<Float64T>{tmp133}});
    ca_.Goto(&block113, phi_bb121_5, phi_bb121_7, phi_bb121_11, phi_bb121_12, phi_bb121_13, phi_bb121_14, phi_bb121_15, phi_bb121_16, phi_bb121_19, phi_bb121_25);
  }

  TNode<Smi> phi_bb122_5;
  TNode<JSArray> phi_bb122_7;
  TNode<BoolT> phi_bb122_11;
  TNode<BoolT> phi_bb122_12;
  TNode<BoolT> phi_bb122_13;
  TNode<BoolT> phi_bb122_14;
  TNode<Smi> phi_bb122_15;
  TNode<Smi> phi_bb122_16;
  TNode<Smi> phi_bb122_19;
  TNode<Smi> phi_bb122_25;
  TNode<Smi> phi_bb122_32;
  TNode<Smi> phi_bb122_33;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_5, &phi_bb122_7, &phi_bb122_11, &phi_bb122_12, &phi_bb122_13, &phi_bb122_14, &phi_bb122_15, &phi_bb122_16, &phi_bb122_19, &phi_bb122_25, &phi_bb122_32, &phi_bb122_33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb113_5;
  TNode<JSArray> phi_bb113_7;
  TNode<BoolT> phi_bb113_11;
  TNode<BoolT> phi_bb113_12;
  TNode<BoolT> phi_bb113_13;
  TNode<BoolT> phi_bb113_14;
  TNode<Smi> phi_bb113_15;
  TNode<Smi> phi_bb113_16;
  TNode<Smi> phi_bb113_19;
  TNode<Smi> phi_bb113_25;
  TNode<Smi> tmp134;
  TNode<Smi> tmp135;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_5, &phi_bb113_7, &phi_bb113_11, &phi_bb113_12, &phi_bb113_13, &phi_bb113_14, &phi_bb113_15, &phi_bb113_16, &phi_bb113_19, &phi_bb113_25);
    tmp134 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp135 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb113_25}, TNode<Smi>{tmp134});
    ca_.Goto(&block103, phi_bb113_5, phi_bb113_7, phi_bb113_11, phi_bb113_12, phi_bb113_13, phi_bb113_14, phi_bb113_15, phi_bb113_16, phi_bb113_19, tmp135);
  }

  TNode<Smi> phi_bb102_5;
  TNode<JSArray> phi_bb102_7;
  TNode<BoolT> phi_bb102_11;
  TNode<BoolT> phi_bb102_12;
  TNode<BoolT> phi_bb102_13;
  TNode<BoolT> phi_bb102_14;
  TNode<Smi> phi_bb102_15;
  TNode<Smi> phi_bb102_16;
  TNode<Smi> phi_bb102_19;
  TNode<Smi> phi_bb102_25;
  TNode<IntPtrT> tmp136;
  if (block102.is_used()) {
    ca_.Bind(&block102, &phi_bb102_5, &phi_bb102_7, &phi_bb102_11, &phi_bb102_12, &phi_bb102_13, &phi_bb102_14, &phi_bb102_15, &phi_bb102_16, &phi_bb102_19, &phi_bb102_25);
    tmp136 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp103, tmp136}, tmp102);
    ca_.Goto(&block100, phi_bb102_5, phi_bb102_7, phi_bb102_11, phi_bb102_12, phi_bb102_13, phi_bb102_14, phi_bb102_15, phi_bb102_16, phi_bb102_19, tmp103);
  }

  TNode<Smi> phi_bb99_5;
  TNode<JSArray> phi_bb99_7;
  TNode<BoolT> phi_bb99_11;
  TNode<BoolT> phi_bb99_12;
  TNode<BoolT> phi_bb99_13;
  TNode<BoolT> phi_bb99_14;
  TNode<Smi> phi_bb99_15;
  TNode<Smi> phi_bb99_16;
  TNode<Smi> phi_bb99_19;
  TNode<JSArray> tmp137;
  if (block99.is_used()) {
    ca_.Bind(&block99, &phi_bb99_5, &phi_bb99_7, &phi_bb99_11, &phi_bb99_12, &phi_bb99_13, &phi_bb99_14, &phi_bb99_15, &phi_bb99_16, &phi_bb99_19);
    tmp137 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp99}, TNode<FixedArrayBase>{tmp5});
    ca_.Goto(&block100, phi_bb99_5, phi_bb99_7, phi_bb99_11, phi_bb99_12, phi_bb99_13, phi_bb99_14, phi_bb99_15, phi_bb99_16, phi_bb99_19, tmp137);
  }

  TNode<Smi> phi_bb100_5;
  TNode<JSArray> phi_bb100_7;
  TNode<BoolT> phi_bb100_11;
  TNode<BoolT> phi_bb100_12;
  TNode<BoolT> phi_bb100_13;
  TNode<BoolT> phi_bb100_14;
  TNode<Smi> phi_bb100_15;
  TNode<Smi> phi_bb100_16;
  TNode<Smi> phi_bb100_19;
  TNode<JSArray> phi_bb100_23;
  TNode<FixedArray> tmp138;
  if (block100.is_used()) {
    ca_.Bind(&block100, &phi_bb100_5, &phi_bb100_7, &phi_bb100_11, &phi_bb100_12, &phi_bb100_13, &phi_bb100_14, &phi_bb100_15, &phi_bb100_16, &phi_bb100_19, &phi_bb100_23);
    tmp138 = kEmptyFixedArray_0(state_);
    *label_Bailout_parameter_1 = phi_bb100_15;
    *label_Bailout_parameter_0 = phi_bb100_23;
    ca_.Goto(label_Bailout);
  }

  TNode<Smi> phi_bb130_5;
  TNode<JSArray> phi_bb130_7;
  TNode<BoolT> phi_bb130_11;
  TNode<BoolT> phi_bb130_12;
  TNode<BoolT> phi_bb130_13;
  TNode<BoolT> phi_bb130_14;
  if (block130.is_used()) {
    ca_.Bind(&block130, &phi_bb130_5, &phi_bb130_7, &phi_bb130_11, &phi_bb130_12, &phi_bb130_13, &phi_bb130_14);
    ca_.Branch(phi_bb130_12, &block132, std::vector<compiler::Node*>{phi_bb130_5, phi_bb130_7, phi_bb130_11, phi_bb130_12, phi_bb130_13, phi_bb130_14}, &block133, std::vector<compiler::Node*>{phi_bb130_5, phi_bb130_7, phi_bb130_11, phi_bb130_12, phi_bb130_13, phi_bb130_14});
  }

  TNode<Smi> phi_bb132_5;
  TNode<JSArray> phi_bb132_7;
  TNode<BoolT> phi_bb132_11;
  TNode<BoolT> phi_bb132_12;
  TNode<BoolT> phi_bb132_13;
  TNode<BoolT> phi_bb132_14;
  TNode<Int32T> tmp139;
  if (block132.is_used()) {
    ca_.Bind(&block132, &phi_bb132_5, &phi_bb132_7, &phi_bb132_11, &phi_bb132_12, &phi_bb132_13, &phi_bb132_14);
    tmp139 = FromConstexpr_ElementsKind_constexpr_PACKED_DOUBLE_ELEMENTS_0(state_, ElementsKind::PACKED_DOUBLE_ELEMENTS);
    ca_.Goto(&block134, phi_bb132_5, phi_bb132_7, phi_bb132_11, phi_bb132_12, phi_bb132_13, phi_bb132_14, tmp139);
  }

  TNode<Smi> phi_bb133_5;
  TNode<JSArray> phi_bb133_7;
  TNode<BoolT> phi_bb133_11;
  TNode<BoolT> phi_bb133_12;
  TNode<BoolT> phi_bb133_13;
  TNode<BoolT> phi_bb133_14;
  if (block133.is_used()) {
    ca_.Bind(&block133, &phi_bb133_5, &phi_bb133_7, &phi_bb133_11, &phi_bb133_12, &phi_bb133_13, &phi_bb133_14);
    ca_.Branch(phi_bb133_13, &block135, std::vector<compiler::Node*>{phi_bb133_5, phi_bb133_7, phi_bb133_11, phi_bb133_12, phi_bb133_13, phi_bb133_14}, &block136, std::vector<compiler::Node*>{phi_bb133_5, phi_bb133_7, phi_bb133_11, phi_bb133_12, phi_bb133_13, phi_bb133_14});
  }

  TNode<Smi> phi_bb135_5;
  TNode<JSArray> phi_bb135_7;
  TNode<BoolT> phi_bb135_11;
  TNode<BoolT> phi_bb135_12;
  TNode<BoolT> phi_bb135_13;
  TNode<BoolT> phi_bb135_14;
  TNode<Int32T> tmp140;
  if (block135.is_used()) {
    ca_.Bind(&block135, &phi_bb135_5, &phi_bb135_7, &phi_bb135_11, &phi_bb135_12, &phi_bb135_13, &phi_bb135_14);
    tmp140 = FromConstexpr_ElementsKind_constexpr_HOLEY_DOUBLE_ELEMENTS_0(state_, ElementsKind::HOLEY_DOUBLE_ELEMENTS);
    ca_.Goto(&block137, phi_bb135_5, phi_bb135_7, phi_bb135_11, phi_bb135_12, phi_bb135_13, phi_bb135_14, tmp140);
  }

  TNode<Smi> phi_bb136_5;
  TNode<JSArray> phi_bb136_7;
  TNode<BoolT> phi_bb136_11;
  TNode<BoolT> phi_bb136_12;
  TNode<BoolT> phi_bb136_13;
  TNode<BoolT> phi_bb136_14;
  TNode<Int32T> tmp141;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_5, &phi_bb136_7, &phi_bb136_11, &phi_bb136_12, &phi_bb136_13, &phi_bb136_14);
    tmp141 = FromConstexpr_ElementsKind_constexpr_PACKED_ELEMENTS_0(state_, ElementsKind::PACKED_ELEMENTS);
    ca_.Goto(&block137, phi_bb136_5, phi_bb136_7, phi_bb136_11, phi_bb136_12, phi_bb136_13, phi_bb136_14, tmp141);
  }

  TNode<Smi> phi_bb137_5;
  TNode<JSArray> phi_bb137_7;
  TNode<BoolT> phi_bb137_11;
  TNode<BoolT> phi_bb137_12;
  TNode<BoolT> phi_bb137_13;
  TNode<BoolT> phi_bb137_14;
  TNode<Int32T> phi_bb137_20;
  if (block137.is_used()) {
    ca_.Bind(&block137, &phi_bb137_5, &phi_bb137_7, &phi_bb137_11, &phi_bb137_12, &phi_bb137_13, &phi_bb137_14, &phi_bb137_20);
    ca_.Goto(&block134, phi_bb137_5, phi_bb137_7, phi_bb137_11, phi_bb137_12, phi_bb137_13, phi_bb137_14, phi_bb137_20);
  }

  TNode<Smi> phi_bb134_5;
  TNode<JSArray> phi_bb134_7;
  TNode<BoolT> phi_bb134_11;
  TNode<BoolT> phi_bb134_12;
  TNode<BoolT> phi_bb134_13;
  TNode<BoolT> phi_bb134_14;
  TNode<Int32T> phi_bb134_20;
  if (block134.is_used()) {
    ca_.Bind(&block134, &phi_bb134_5, &phi_bb134_7, &phi_bb134_11, &phi_bb134_12, &phi_bb134_13, &phi_bb134_14, &phi_bb134_20);
    ca_.Goto(&block131, phi_bb134_5, phi_bb134_7, phi_bb134_11, phi_bb134_12, phi_bb134_13, phi_bb134_14, phi_bb134_20);
  }

  TNode<Smi> phi_bb131_5;
  TNode<JSArray> phi_bb131_7;
  TNode<BoolT> phi_bb131_11;
  TNode<BoolT> phi_bb131_12;
  TNode<BoolT> phi_bb131_13;
  TNode<BoolT> phi_bb131_14;
  TNode<Int32T> phi_bb131_20;
  if (block131.is_used()) {
    ca_.Bind(&block131, &phi_bb131_5, &phi_bb131_7, &phi_bb131_11, &phi_bb131_12, &phi_bb131_13, &phi_bb131_14, &phi_bb131_20);
    ca_.Branch(phi_bb131_14, &block144, std::vector<compiler::Node*>{phi_bb131_5, phi_bb131_7, phi_bb131_11, phi_bb131_12, phi_bb131_13, phi_bb131_14, phi_bb131_20, phi_bb131_14}, &block145, std::vector<compiler::Node*>{phi_bb131_5, phi_bb131_7, phi_bb131_11, phi_bb131_12, phi_bb131_13, phi_bb131_14, phi_bb131_20, phi_bb131_14});
  }

  TNode<Smi> phi_bb144_5;
  TNode<JSArray> phi_bb144_7;
  TNode<BoolT> phi_bb144_11;
  TNode<BoolT> phi_bb144_12;
  TNode<BoolT> phi_bb144_13;
  TNode<BoolT> phi_bb144_14;
  TNode<Int32T> phi_bb144_20;
  TNode<BoolT> phi_bb144_21;
  TNode<BoolT> tmp142;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_5, &phi_bb144_7, &phi_bb144_11, &phi_bb144_12, &phi_bb144_13, &phi_bb144_14, &phi_bb144_20, &phi_bb144_21);
    tmp142 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block146, phi_bb144_5, phi_bb144_7, phi_bb144_11, phi_bb144_12, phi_bb144_13, phi_bb144_14, phi_bb144_20, phi_bb144_21, tmp142);
  }

  TNode<Smi> phi_bb145_5;
  TNode<JSArray> phi_bb145_7;
  TNode<BoolT> phi_bb145_11;
  TNode<BoolT> phi_bb145_12;
  TNode<BoolT> phi_bb145_13;
  TNode<BoolT> phi_bb145_14;
  TNode<Int32T> phi_bb145_20;
  TNode<BoolT> phi_bb145_21;
  TNode<BoolT> tmp143;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_5, &phi_bb145_7, &phi_bb145_11, &phi_bb145_12, &phi_bb145_13, &phi_bb145_14, &phi_bb145_20, &phi_bb145_21);
    tmp143 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{p_len}, TNode<Smi>{tmp85});
    ca_.Goto(&block146, phi_bb145_5, phi_bb145_7, phi_bb145_11, phi_bb145_12, phi_bb145_13, phi_bb145_14, phi_bb145_20, phi_bb145_21, tmp143);
  }

  TNode<Smi> phi_bb146_5;
  TNode<JSArray> phi_bb146_7;
  TNode<BoolT> phi_bb146_11;
  TNode<BoolT> phi_bb146_12;
  TNode<BoolT> phi_bb146_13;
  TNode<BoolT> phi_bb146_14;
  TNode<Int32T> phi_bb146_20;
  TNode<BoolT> phi_bb146_21;
  TNode<BoolT> phi_bb146_22;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_5, &phi_bb146_7, &phi_bb146_11, &phi_bb146_12, &phi_bb146_13, &phi_bb146_14, &phi_bb146_20, &phi_bb146_21, &phi_bb146_22);
    ca_.Branch(phi_bb146_22, &block142, std::vector<compiler::Node*>{phi_bb146_5, phi_bb146_7, phi_bb146_11, phi_bb146_12, phi_bb146_13, phi_bb146_14, phi_bb146_20}, &block143, std::vector<compiler::Node*>{phi_bb146_5, phi_bb146_7, phi_bb146_11, phi_bb146_12, phi_bb146_13, phi_bb146_14, phi_bb146_20});
  }

  TNode<Smi> phi_bb142_5;
  TNode<JSArray> phi_bb142_7;
  TNode<BoolT> phi_bb142_11;
  TNode<BoolT> phi_bb142_12;
  TNode<BoolT> phi_bb142_13;
  TNode<BoolT> phi_bb142_14;
  TNode<Int32T> phi_bb142_20;
  TNode<Int32T> tmp144;
  if (block142.is_used()) {
    ca_.Bind(&block142, &phi_bb142_5, &phi_bb142_7, &phi_bb142_11, &phi_bb142_12, &phi_bb142_13, &phi_bb142_14, &phi_bb142_20);
    tmp144 = FastHoleyElementsKind_0(state_, TNode<Int32T>{phi_bb142_20});
    ca_.Goto(&block143, phi_bb142_5, phi_bb142_7, phi_bb142_11, phi_bb142_12, phi_bb142_13, phi_bb142_14, tmp144);
  }

  TNode<Smi> phi_bb143_5;
  TNode<JSArray> phi_bb143_7;
  TNode<BoolT> phi_bb143_11;
  TNode<BoolT> phi_bb143_12;
  TNode<BoolT> phi_bb143_13;
  TNode<BoolT> phi_bb143_14;
  TNode<Int32T> phi_bb143_20;
  TNode<NativeContext> tmp145;
  TNode<Map> tmp146;
  TNode<BoolT> tmp147;
  if (block143.is_used()) {
    ca_.Bind(&block143, &phi_bb143_5, &phi_bb143_7, &phi_bb143_11, &phi_bb143_12, &phi_bb143_13, &phi_bb143_14, &phi_bb143_20);
    tmp145 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{p_context});
    tmp146 = CodeStubAssembler(state_).LoadJSArrayElementsMap(TNode<Int32T>{phi_bb143_20}, TNode<NativeContext>{tmp145});
    tmp147 = CodeStubAssembler(state_).IsDoubleElementsKind(TNode<Int32T>{phi_bb143_20});
    ca_.Branch(tmp147, &block147, std::vector<compiler::Node*>{phi_bb143_5, phi_bb143_7, phi_bb143_11, phi_bb143_12, phi_bb143_13, phi_bb143_14}, &block148, std::vector<compiler::Node*>{phi_bb143_5, phi_bb143_7, phi_bb143_11, phi_bb143_12, phi_bb143_13, phi_bb143_14});
  }

  TNode<Smi> phi_bb147_5;
  TNode<JSArray> phi_bb147_7;
  TNode<BoolT> phi_bb147_11;
  TNode<BoolT> phi_bb147_12;
  TNode<BoolT> phi_bb147_13;
  TNode<BoolT> phi_bb147_14;
  TNode<IntPtrT> tmp148;
  TNode<FixedDoubleArray> tmp149;
  TNode<JSArray> tmp150;
  TNode<Smi> tmp151;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_5, &phi_bb147_7, &phi_bb147_11, &phi_bb147_12, &phi_bb147_13, &phi_bb147_14);
    tmp148 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp85});
    tmp149 = CodeStubAssembler(state_).AllocateFixedDoubleArrayWithHoles(TNode<IntPtrT>{tmp148});
    tmp150 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp146}, TNode<FixedArrayBase>{tmp5});
    tmp151 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block152, phi_bb147_5, phi_bb147_7, phi_bb147_11, phi_bb147_12, phi_bb147_13, phi_bb147_14, tmp151);
  }

  TNode<Smi> phi_bb152_5;
  TNode<JSArray> phi_bb152_7;
  TNode<BoolT> phi_bb152_11;
  TNode<BoolT> phi_bb152_12;
  TNode<BoolT> phi_bb152_13;
  TNode<BoolT> phi_bb152_14;
  TNode<Smi> phi_bb152_24;
  TNode<BoolT> tmp152;
  if (block152.is_used()) {
    ca_.Bind(&block152, &phi_bb152_5, &phi_bb152_7, &phi_bb152_11, &phi_bb152_12, &phi_bb152_13, &phi_bb152_14, &phi_bb152_24);
    tmp152 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{phi_bb152_24}, TNode<Smi>{p_len});
    ca_.Branch(tmp152, &block150, std::vector<compiler::Node*>{phi_bb152_5, phi_bb152_7, phi_bb152_11, phi_bb152_12, phi_bb152_13, phi_bb152_14, phi_bb152_24}, &block151, std::vector<compiler::Node*>{phi_bb152_5, phi_bb152_7, phi_bb152_11, phi_bb152_12, phi_bb152_13, phi_bb152_14, phi_bb152_24});
  }

  TNode<Smi> phi_bb150_5;
  TNode<JSArray> phi_bb150_7;
  TNode<BoolT> phi_bb150_11;
  TNode<BoolT> phi_bb150_12;
  TNode<BoolT> phi_bb150_13;
  TNode<BoolT> phi_bb150_14;
  TNode<Smi> phi_bb150_24;
  TNode<Union<HeapObject, TaggedIndex>> tmp153;
  TNode<IntPtrT> tmp154;
  TNode<IntPtrT> tmp155;
  TNode<IntPtrT> tmp156;
  TNode<UintPtrT> tmp157;
  TNode<UintPtrT> tmp158;
  TNode<BoolT> tmp159;
  if (block150.is_used()) {
    ca_.Bind(&block150, &phi_bb150_5, &phi_bb150_7, &phi_bb150_11, &phi_bb150_12, &phi_bb150_13, &phi_bb150_14, &phi_bb150_24);
    std::tie(tmp153, tmp154, tmp155) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp5}).Flatten();
    tmp156 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb150_24});
    tmp157 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp156});
    tmp158 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp155});
    tmp159 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp157}, TNode<UintPtrT>{tmp158});
    ca_.Branch(tmp159, &block158, std::vector<compiler::Node*>{phi_bb150_5, phi_bb150_7, phi_bb150_11, phi_bb150_12, phi_bb150_13, phi_bb150_14, phi_bb150_24, phi_bb150_24, phi_bb150_24}, &block159, std::vector<compiler::Node*>{phi_bb150_5, phi_bb150_7, phi_bb150_11, phi_bb150_12, phi_bb150_13, phi_bb150_14, phi_bb150_24, phi_bb150_24, phi_bb150_24});
  }

  TNode<Smi> phi_bb158_5;
  TNode<JSArray> phi_bb158_7;
  TNode<BoolT> phi_bb158_11;
  TNode<BoolT> phi_bb158_12;
  TNode<BoolT> phi_bb158_13;
  TNode<BoolT> phi_bb158_14;
  TNode<Smi> phi_bb158_24;
  TNode<Smi> phi_bb158_29;
  TNode<Smi> phi_bb158_30;
  TNode<IntPtrT> tmp160;
  TNode<IntPtrT> tmp161;
  TNode<Union<HeapObject, TaggedIndex>> tmp162;
  TNode<IntPtrT> tmp163;
  TNode<Object> tmp164;
  TNode<Union<HeapNumber, Hole, Smi>> tmp165;
  TNode<Number> tmp166;
  if (block158.is_used()) {
    ca_.Bind(&block158, &phi_bb158_5, &phi_bb158_7, &phi_bb158_11, &phi_bb158_12, &phi_bb158_13, &phi_bb158_14, &phi_bb158_24, &phi_bb158_29, &phi_bb158_30);
    tmp160 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp156});
    tmp161 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp154}, TNode<IntPtrT>{tmp160});
    std::tie(tmp162, tmp163) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp153}, TNode<IntPtrT>{tmp161}).Flatten();
    tmp164 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp162, tmp163});
    tmp165 = UnsafeCast_Smi_OR_HeapNumber_OR_TheHole_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp164});
    compiler::CodeAssemblerLabel label167(&ca_);
    tmp166 = Cast_Number_0(state_, TNode<Object>{tmp165}, &label167);
    ca_.Goto(&block164, phi_bb158_5, phi_bb158_7, phi_bb158_11, phi_bb158_12, phi_bb158_13, phi_bb158_14, phi_bb158_24);
    if (label167.is_used()) {
      ca_.Bind(&label167);
      ca_.Goto(&block165, phi_bb158_5, phi_bb158_7, phi_bb158_11, phi_bb158_12, phi_bb158_13, phi_bb158_14, phi_bb158_24);
    }
  }

  TNode<Smi> phi_bb159_5;
  TNode<JSArray> phi_bb159_7;
  TNode<BoolT> phi_bb159_11;
  TNode<BoolT> phi_bb159_12;
  TNode<BoolT> phi_bb159_13;
  TNode<BoolT> phi_bb159_14;
  TNode<Smi> phi_bb159_24;
  TNode<Smi> phi_bb159_29;
  TNode<Smi> phi_bb159_30;
  if (block159.is_used()) {
    ca_.Bind(&block159, &phi_bb159_5, &phi_bb159_7, &phi_bb159_11, &phi_bb159_12, &phi_bb159_13, &phi_bb159_14, &phi_bb159_24, &phi_bb159_29, &phi_bb159_30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb165_5;
  TNode<JSArray> phi_bb165_7;
  TNode<BoolT> phi_bb165_11;
  TNode<BoolT> phi_bb165_12;
  TNode<BoolT> phi_bb165_13;
  TNode<BoolT> phi_bb165_14;
  TNode<Smi> phi_bb165_24;
  if (block165.is_used()) {
    ca_.Bind(&block165, &phi_bb165_5, &phi_bb165_7, &phi_bb165_11, &phi_bb165_12, &phi_bb165_13, &phi_bb165_14, &phi_bb165_24);
    ca_.Goto(&block162, phi_bb165_5, phi_bb165_7, phi_bb165_11, phi_bb165_12, phi_bb165_13, phi_bb165_14, phi_bb165_24);
  }

  TNode<Smi> phi_bb164_5;
  TNode<JSArray> phi_bb164_7;
  TNode<BoolT> phi_bb164_11;
  TNode<BoolT> phi_bb164_12;
  TNode<BoolT> phi_bb164_13;
  TNode<BoolT> phi_bb164_14;
  TNode<Smi> phi_bb164_24;
  TNode<Union<HeapObject, TaggedIndex>> tmp168;
  TNode<IntPtrT> tmp169;
  TNode<IntPtrT> tmp170;
  TNode<IntPtrT> tmp171;
  TNode<UintPtrT> tmp172;
  TNode<UintPtrT> tmp173;
  TNode<BoolT> tmp174;
  if (block164.is_used()) {
    ca_.Bind(&block164, &phi_bb164_5, &phi_bb164_7, &phi_bb164_11, &phi_bb164_12, &phi_bb164_13, &phi_bb164_14, &phi_bb164_24);
    std::tie(tmp168, tmp169, tmp170) = FieldSliceFixedDoubleArrayValues_0(state_, TNode<FixedDoubleArray>{tmp149}).Flatten();
    tmp171 = Convert_intptr_Smi_0(state_, TNode<Smi>{phi_bb164_24});
    tmp172 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp171});
    tmp173 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp170});
    tmp174 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp172}, TNode<UintPtrT>{tmp173});
    ca_.Branch(tmp174, &block170, std::vector<compiler::Node*>{phi_bb164_5, phi_bb164_7, phi_bb164_11, phi_bb164_12, phi_bb164_13, phi_bb164_14, phi_bb164_24, phi_bb164_24, phi_bb164_24}, &block171, std::vector<compiler::Node*>{phi_bb164_5, phi_bb164_7, phi_bb164_11, phi_bb164_12, phi_bb164_13, phi_bb164_14, phi_bb164_24, phi_bb164_24, phi_bb164_24});
  }

  TNode<Smi> phi_bb170_5;
  TNode<JSArray> phi_bb170_7;
  TNode<BoolT> phi_bb170_11;
  TNode<BoolT> phi_bb170_12;
  TNode<BoolT> phi_bb170_13;
  TNode<BoolT> phi_bb170_14;
  TNode<Smi> phi_bb170_24;
  TNode<Smi> phi_bb170_31;
  TNode<Smi> phi_bb170_32;
  TNode<IntPtrT> tmp175;
  TNode<IntPtrT> tmp176;
  TNode<Union<HeapObject, TaggedIndex>> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<BoolT> tmp179;
  TNode<Float64T> tmp180;
  if (block170.is_used()) {
    ca_.Bind(&block170, &phi_bb170_5, &phi_bb170_7, &phi_bb170_11, &phi_bb170_12, &phi_bb170_13, &phi_bb170_14, &phi_bb170_24, &phi_bb170_31, &phi_bb170_32);
    tmp175 = TimesSizeOf_float64_or_undefined_or_hole_0(state_, TNode<IntPtrT>{tmp171});
    tmp176 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp169}, TNode<IntPtrT>{tmp175});
    std::tie(tmp177, tmp178) = NewReference_float64_or_undefined_or_hole_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp168}, TNode<IntPtrT>{tmp176}).Flatten();
    std::tie(tmp179, tmp180) = Convert_float64_or_undefined_or_hole_Number_0(state_, TNode<Number>{tmp166}).Flatten();
    StoreFloat64OrHole_0(state_, TorqueStructReference_float64_or_undefined_or_hole_0{TNode<Union<HeapObject, TaggedIndex>>{tmp177}, TNode<IntPtrT>{tmp178}, TorqueStructUnsafe_0{}}, TorqueStructfloat64_or_undefined_or_hole_0{TNode<BoolT>{tmp179}, TNode<Float64T>{tmp180}});
    ca_.Goto(&block162, phi_bb170_5, phi_bb170_7, phi_bb170_11, phi_bb170_12, phi_bb170_13, phi_bb170_14, phi_bb170_24);
  }

  TNode<Smi> phi_bb171_5;
  TNode<JSArray> phi_bb171_7;
  TNode<BoolT> phi_bb171_11;
  TNode<BoolT> phi_bb171_12;
  TNode<BoolT> phi_bb171_13;
  TNode<BoolT> phi_bb171_14;
  TNode<Smi> phi_bb171_24;
  TNode<Smi> phi_bb171_31;
  TNode<Smi> phi_bb171_32;
  if (block171.is_used()) {
    ca_.Bind(&block171, &phi_bb171_5, &phi_bb171_7, &phi_bb171_11, &phi_bb171_12, &phi_bb171_13, &phi_bb171_14, &phi_bb171_24, &phi_bb171_31, &phi_bb171_32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Smi> phi_bb162_5;
  TNode<JSArray> phi_bb162_7;
  TNode<BoolT> phi_bb162_11;
  TNode<BoolT> phi_bb162_12;
  TNode<BoolT> phi_bb162_13;
  TNode<BoolT> phi_bb162_14;
  TNode<Smi> phi_bb162_24;
  TNode<Smi> tmp181;
  TNode<Smi> tmp182;
  if (block162.is_used()) {
    ca_.Bind(&block162, &phi_bb162_5, &phi_bb162_7, &phi_bb162_11, &phi_bb162_12, &phi_bb162_13, &phi_bb162_14, &phi_bb162_24);
    tmp181 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    tmp182 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb162_24}, TNode<Smi>{tmp181});
    ca_.Goto(&block152, phi_bb162_5, phi_bb162_7, phi_bb162_11, phi_bb162_12, phi_bb162_13, phi_bb162_14, tmp182);
  }

  TNode<Smi> phi_bb151_5;
  TNode<JSArray> phi_bb151_7;
  TNode<BoolT> phi_bb151_11;
  TNode<BoolT> phi_bb151_12;
  TNode<BoolT> phi_bb151_13;
  TNode<BoolT> phi_bb151_14;
  TNode<Smi> phi_bb151_24;
  TNode<IntPtrT> tmp183;
  if (block151.is_used()) {
    ca_.Bind(&block151, &phi_bb151_5, &phi_bb151_7, &phi_bb151_11, &phi_bb151_12, &phi_bb151_13, &phi_bb151_14, &phi_bb151_24);
    tmp183 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp150, tmp183}, tmp149);
    ca_.Goto(&block149, phi_bb151_5, phi_bb151_7, phi_bb151_11, phi_bb151_12, phi_bb151_13, phi_bb151_14, tmp150);
  }

  TNode<Smi> phi_bb148_5;
  TNode<JSArray> phi_bb148_7;
  TNode<BoolT> phi_bb148_11;
  TNode<BoolT> phi_bb148_12;
  TNode<BoolT> phi_bb148_13;
  TNode<BoolT> phi_bb148_14;
  TNode<JSArray> tmp184;
  if (block148.is_used()) {
    ca_.Bind(&block148, &phi_bb148_5, &phi_bb148_7, &phi_bb148_11, &phi_bb148_12, &phi_bb148_13, &phi_bb148_14);
    tmp184 = NewJSArray_0(state_, TNode<Context>{p_context}, TNode<Map>{tmp146}, TNode<FixedArrayBase>{tmp5});
    ca_.Goto(&block149, phi_bb148_5, phi_bb148_7, phi_bb148_11, phi_bb148_12, phi_bb148_13, phi_bb148_14, tmp184);
  }

  TNode<Smi> phi_bb149_5;
  TNode<JSArray> phi_bb149_7;
  TNode<BoolT> phi_bb149_11;
  TNode<BoolT> phi_bb149_12;
  TNode<BoolT> phi_bb149_13;
  TNode<BoolT> phi_bb149_14;
  TNode<JSArray> phi_bb149_22;
  TNode<FixedArray> tmp185;
  if (block149.is_used()) {
    ca_.Bind(&block149, &phi_bb149_5, &phi_bb149_7, &phi_bb149_11, &phi_bb149_12, &phi_bb149_13, &phi_bb149_14, &phi_bb149_22);
    tmp185 = kEmptyFixedArray_0(state_);
    ca_.Goto(&block174, phi_bb149_22);
  }

  TNode<JSArray> phi_bb174_5;
    ca_.Bind(&block174, &phi_bb174_5);
  return TNode<JSArray>{phi_bb174_5};
}

TF_BUILTIN(ArrayMap, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<JSAny> tmp0;
  TNode<JSReceiver> tmp1;
  TNode<Number> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = RequireObjectCoercible_0(state_, TNode<Context>{parameter0}, TNode<JSAny>{parameter1}, "Array.prototype.map");
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
  TNode<JSAny> tmp10;
  TNode<Number> tmp11;
  TNode<BoolT> tmp12;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp9});
    tmp11 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid();
    ca_.Branch(tmp12, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block10);
  }

  TNode<JSArray> tmp13;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    compiler::CodeAssemblerLabel label14(&ca_);
    tmp13 = Cast_FastJSArrayForRead_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label14);
    ca_.Goto(&block13);
    if (label14.is_used()) {
      ca_.Bind(&label14);
      ca_.Goto(&block14);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block10);
  }

  TNode<Smi> tmp15;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    compiler::CodeAssemblerLabel label16(&ca_);
    tmp15 = Cast_Smi_0(state_, TNode<Object>{tmp2}, &label16);
    ca_.Goto(&block15);
    if (label16.is_used()) {
      ca_.Bind(&label16);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block10);
  }

  TNode<JSArray> tmp17;
    compiler::TypedCodeAssemblerVariable<JSArray> tmp19(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> tmp20(&ca_);
  if (block15.is_used()) {
    ca_.Bind(&block15);
    compiler::CodeAssemblerLabel label18(&ca_);
    tmp17 = FastArrayMap_0(state_, TNode<Context>{parameter0}, TNode<JSArray>{tmp13}, TNode<Smi>{tmp15}, TNode<Union<JSBoundFunction, JSFunction, JSObject, JSProxy, JSWrappedFunction>>{tmp7}, TNode<JSAny>{tmp10}, &label18, &tmp19, &tmp20);
    ca_.Goto(&block17);
    if (label18.is_used()) {
      ca_.Bind(&label18);
      ca_.Goto(&block18);
    }
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block7, tmp19.value(), tmp20.value());
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    arguments.PopAndReturn(tmp17);
  }

  TNode<JSReceiver> tmp21;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp21 = CodeStubAssembler(state_).ArraySpeciesCreate(TNode<Context>{parameter0}, TNode<JSAny>{parameter1}, TNode<Number>{tmp2});
    ca_.Goto(&block7, tmp21, tmp11);
  }

  TNode<JSReceiver> phi_bb7_10;
  TNode<Number> phi_bb7_11;
  TNode<JSAny> tmp22;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_10, &phi_bb7_11);
    tmp22 = ca_.CallBuiltin<JSAny>(Builtin::kArrayMapLoopContinuation, parameter0, tmp1, tmp7, tmp10, phi_bb7_10, tmp1, phi_bb7_11, tmp2);
    arguments.PopAndReturn(tmp22);
  }

  TNode<IntPtrT> tmp23;
  TNode<JSAny> tmp24;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp23 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp24 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp23});
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, parameter0, tmp24);
    CodeStubAssembler(state_).Unreachable();
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=152&c=15
TNode<Union<HeapNumber, Hole, Smi>> UnsafeCast_Smi_OR_HeapNumber_OR_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Union<HeapNumber, Hole, Smi>> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<Union<HeapNumber, Hole, Smi>>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-map.tq?l=283&c=37
TNode<JSArray> Cast_FastJSArrayForRead_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{p_o}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1);
  }

  TNode<JSArray> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_FastJSArrayForRead_0(state_, TNode<Context>{p_context}, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    ca_.Bind(&block7);
  return TNode<JSArray>{tmp2};
}

} // namespace internal
} // namespace v8
