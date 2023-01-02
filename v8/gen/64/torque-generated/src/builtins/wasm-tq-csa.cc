#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
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
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
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
#include "src/torque/runtime-support.h"
// Required Builtins:
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/ic-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/objects/heap-number-tq-csa.h"
#include "torque-generated/src/objects/js-array-tq-csa.h"
#include "torque-generated/src/objects/js-objects-tq-csa.h"
#include "torque-generated/src/objects/string-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=90&c=1
TNode<NativeContext> LoadContextFromFrame_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<NativeContext>{tmp1};
}

TF_BUILTIN(WasmInt32ToHeapNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Int32T> parameter0 = UncheckedParameter<Int32T>(Descriptor::kVal);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Float64T> tmp0;
  TNode<HeapNumber> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_float64_int32_0(state_, TNode<Int32T>{parameter0});
    tmp1 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp0});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(WasmFuncRefToJS, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<HeapObject> parameter0 = UncheckedParameter<HeapObject>(Descriptor::kVal);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Null_0(state_, TNode<HeapObject>{parameter0}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<IntPtrT> tmp2;
  TNode<HeapObject> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{ca_.UncheckedCast<WasmInternalFunction>(parameter0), tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<Oddball> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = Null_0(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(WasmTaggedNonSmiToInt32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<HeapObject> parameter1 = UncheckedParameter<HeapObject>(Descriptor::kVal);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeTaggedNonSmiToInt32(TNode<Context>{parameter0}, TNode<HeapObject>{parameter1});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmTaggedToFloat64, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kVal);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Float64T> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeTaggedToFloat64(TNode<Context>{parameter0}, TNode<Object>{parameter1});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmMemoryGrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Int32T> parameter0 = UncheckedParameter<Int32T>(Descriptor::kNumPages);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter0});
    tmp1 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp0});
    tmp2 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp3 = Int32Constant_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<WasmInstanceObject> tmp4;
  TNode<NativeContext> tmp5;
  TNode<Smi> tmp6;
  TNode<Smi> tmp7;
  TNode<Int32T> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp5 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp4});
    tmp6 = CodeStubAssembler(state_).SmiFromInt32(TNode<Int32T>{parameter0});
    tmp7 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmMemoryGrow, tmp5, tmp4, tmp6)); 
    tmp8 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp7});
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(WasmTableInit, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstRaw);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcRaw);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kSizeRaw);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kTableIndex);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kSegmentIndex);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter0}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label6);
    ca_.Goto(&block7);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableInit, tmp7, tmp0, parameter3, parameter4, tmp1, tmp3, tmp5);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableCopy, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstRaw);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcRaw);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kSizeRaw);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kDstTable);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kSrcTable);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter0}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label6(&ca_);
    tmp5 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label6);
    ca_.Goto(&block7);
    if (label6.is_used()) {
      ca_.Bind(&label6);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp7;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp7 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableCopy, tmp7, tmp0, parameter3, parameter4, tmp1, tmp3, tmp5);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableFill, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kTable);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kStartRaw);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kCountRaw);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label4);
    ca_.Goto(&block5);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp5 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableFill, tmp5, tmp0, parameter0, tmp1, parameter3, tmp3);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableGrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kTable);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kDeltaRaw);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label2);
    ca_.Goto(&block3);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block4);
    }
  }

  TNode<Smi> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<NativeContext> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTableGrow, tmp4, tmp0, parameter0, parameter2, tmp1);
  }
}

TF_BUILTIN(WasmTableGet, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kTableIndex);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter1});
    tmp2 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  TNode<FixedArray> tmp4;
  TNode<Object> tmp5;
  TNode<WasmTableObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp4 = WasmBuiltinsAssembler(state_).LoadTablesFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp5 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp4}, TNode<IntPtrT>{parameter0});
    tmp6 = TORQUE_CAST(TNode<Object>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<Object> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp12 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp6, tmp11});
    tmp13 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp12}, TNode<IntPtrT>{tmp1});
    CodeStubAssembler(state_).Return(tmp13);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableSet, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kTableIndex);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kIndex);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter1});
    tmp2 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  TNode<FixedArray> tmp4;
  TNode<Object> tmp5;
  TNode<WasmTableObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp4 = WasmBuiltinsAssembler(state_).LoadTablesFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp5 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp4}, TNode<IntPtrT>{parameter0});
    tmp6 = TORQUE_CAST(TNode<Object>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<Oddball> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp12 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp6, tmp11});
    CodeStubAssembler(state_).StoreFixedArrayElement(TNode<FixedArray>{tmp12}, TNode<IntPtrT>{tmp1}, TNode<Object>{parameter2});
    tmp13 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp13);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableGetFuncRef, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kTableIndex);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kIndex);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter1});
    tmp2 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<FixedArray> tmp4;
  TNode<Object> tmp5;
  TNode<WasmTableObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp4 = WasmBuiltinsAssembler(state_).LoadTablesFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp5 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp4}, TNode<IntPtrT>{parameter0});
    tmp6 = TORQUE_CAST(TNode<Object>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<Object> tmp13;
  TNode<HeapObject> tmp14;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp12 = CodeStubAssembler(state_).LoadReference<FixedArray>(CodeStubAssembler::Reference{tmp6, tmp11});
    tmp13 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp12}, TNode<IntPtrT>{tmp1});
    compiler::CodeAssemblerLabel label15(&ca_);
    tmp14 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp13}, &label15);
    ca_.Goto(&block15);
    if (label15.is_used()) {
      ca_.Bind(&label15);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block14);
  }

  TNode<IntPtrT> tmp16;
  TNode<Map> tmp17;
  TNode<BoolT> tmp18;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp17 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp14, tmp16});
    tmp18 = CodeStubAssembler(state_).IsTuple2Map(TNode<Map>{tmp17});
    ca_.Branch(tmp18, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  TNode<NativeContext> tmp19;
  TNode<Smi> tmp20;
  TNode<Smi> tmp21;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp19 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp20 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{parameter0});
    tmp21 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{tmp1});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmFunctionTableGet, tmp19, tmp0, tmp20, tmp21);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block14);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).Return(tmp13);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmTableSetFuncRef, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kTableIndex);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kIndex);
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedParameter<Object>(Descriptor::kValue);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<BoolT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = CodeStubAssembler(state_).ChangeInt32ToIntPtr(TNode<Int32T>{parameter1});
    tmp2 = CodeStubAssembler(state_).IsValidPositiveSmi(TNode<IntPtrT>{tmp1});
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block2);
  }

  TNode<FixedArray> tmp4;
  TNode<Object> tmp5;
  TNode<WasmTableObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Smi> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<BoolT> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp4 = WasmBuiltinsAssembler(state_).LoadTablesFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp5 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp4}, TNode<IntPtrT>{parameter0});
    tmp6 = TORQUE_CAST(TNode<Object>{tmp5});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp10, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.Goto(&block2);
  }

  TNode<NativeContext> tmp11;
  TNode<Smi> tmp12;
  TNode<Smi> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp11 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp12 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{parameter0});
    tmp13 = CodeStubAssembler(state_).SmiFromIntPtr(TNode<IntPtrT>{tmp1});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmFunctionTableSet, tmp11, tmp0, tmp12, tmp13, parameter2);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapTableOutOfBounds, TNode<Object>());
  }
}

TF_BUILTIN(WasmRefFunc, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kIndex);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<FixedArray> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadInternalFunctionsFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = Undefined_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<UintPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<Oddball> tmp7;
  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = CodeStubAssembler(state_).ChangeUint32ToWord(TNode<Uint32T>{parameter0});
    tmp5 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{tmp1}, TNode<IntPtrT>{tmp5});
    tmp7 = Undefined_0(state_);
    tmp8 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp6}, TNode<HeapObject>{tmp7});
    ca_.Branch(tmp8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<NativeContext> tmp9;
  TNode<Smi> tmp10;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp10 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmRefFunc, tmp9, tmp0, tmp10);
  }
}

TF_BUILTIN(WasmAllocateFixedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<IntPtrT> parameter0 = UncheckedParameter<IntPtrT>(Descriptor::kSize);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{parameter0}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }

  TNode<FixedArrayBase> tmp3;
  TNode<FixedArray> tmp4;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = CodeStubAssembler(state_).AllocateFixedArray(ElementsKind::PACKED_ELEMENTS, TNode<IntPtrT>{parameter0}, CodeStubAssembler::AllocationFlag::kNone);
    tmp4 = TORQUE_CAST(TNode<Object>{tmp3});
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(WasmThrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kTag);
  USE(parameter0);
  TNode<FixedArray> parameter1 = UncheckedParameter<FixedArray>(Descriptor::kValues);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmThrow, tmp0, parameter0, parameter1);
  }
}

TF_BUILTIN(WasmRethrow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kException);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter0}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapRethrowNull, TNode<Object>());
  }

  TNode<NativeContext> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmReThrow, tmp2, parameter0);
  }
}

TF_BUILTIN(WasmRethrowExplicitContext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Object> parameter0 = UncheckedParameter<Object>(Descriptor::kException);
  USE(parameter0);
  TNode<Context> parameter1 = UncheckedParameter<Context>(Descriptor::kExplicitContext);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter0}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapRethrowNull, TNode<Object>());
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmReThrow, parameter1, parameter0);
  }
}

TF_BUILTIN(WasmTriggerTierUp, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTriggerTierUp, tmp1, tmp0);
  }
}

TF_BUILTIN(WasmStackGuard, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStackGuard, tmp0);
  }
}

TF_BUILTIN(WasmStackOverflow, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kThrowWasmStackOverflow, tmp0);
  }
}

TF_BUILTIN(WasmTraceMemory, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kInfo);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTraceMemory, tmp0, parameter0);
  }
}

TF_BUILTIN(WasmTraceEnter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTraceEnter, tmp0);
  }
}

TF_BUILTIN(WasmTraceExit, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kInfo);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmTraceExit, tmp0, parameter0);
  }
}

TF_BUILTIN(WasmAllocateJSArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedParameter<Smi>(Descriptor::kSize);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<JSArray> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = GetFastPackedElementsJSArrayMap_0(state_, TNode<Context>{parameter0});
    tmp1 = CodeStubAssembler(state_).AllocateJSArray(ElementsKind::PACKED_ELEMENTS, TNode<Map>{tmp0}, TNode<Smi>{parameter1}, TNode<Smi>{parameter1});
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(WasmAllocateStructWithRtt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Map> parameter0 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kInstanceSize);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<WasmStruct> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<FixedArray> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_intptr_int32_0(state_, TNode<Int32T>{parameter1});
    tmp1 = CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp0}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    std::tie(tmp3, tmp4) = UnsafeConstCast_Map_0(state_, TorqueStructReference_Map_0{TNode<Object>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}}).Flatten();
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp3, tmp4}, parameter0);
    tmp5 = TORQUE_CAST(TNode<HeapObject>{tmp1});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp7 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp7);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(WasmAllocateArray_Uninitialized, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Map> parameter0 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kElementSize);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<HeapObject> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<WasmArray> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<FixedArray> tmp12;
  TNode<WasmArray> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<WasmArray> tmp15;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{parameter1});
    tmp1 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{parameter2});
    tmp2 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    tmp3 = AlignTagged_0(state_, TNode<IntPtrT>{tmp2});
    tmp4 = Convert_intptr_constexpr_int32_0(state_, WasmArray::kHeaderSize);
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp5}, CodeStubAssembler::AllocationFlag::kAllowLargeObjectAllocation);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    std::tie(tmp8, tmp9) = UnsafeConstCast_Map_0(state_, TorqueStructReference_Map_0{TNode<Object>{tmp6}, TNode<IntPtrT>{tmp7}, TorqueStructUnsafe_0{}}).Flatten();
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp8, tmp9}, parameter0);
    tmp10 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    tmp11 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp12 = kEmptyFixedArray_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11}, tmp12);
    tmp13 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{tmp13, tmp14}, parameter1);
    tmp15 = TORQUE_CAST(TNode<HeapObject>{tmp6});
    CodeStubAssembler(state_).Return(tmp15);
  }
}

TF_BUILTIN(WasmArrayNewSegment, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDataSegment);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<Map> parameter3 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    compiler::CodeAssemblerLabel label2(&ca_);
    tmp1 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter1}, &label2);
    ca_.Goto(&block5);
    if (label2.is_used()) {
      ca_.Bind(&label2);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapElementSegmentOutOfBounds, TNode<Object>());
  }

  TNode<Smi> tmp3;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::CodeAssemblerLabel label4(&ca_);
    tmp3 = Convert_PositiveSmi_uint32_0(state_, TNode<Uint32T>{parameter2}, &label4);
    ca_.Goto(&block7);
    if (label4.is_used()) {
      ca_.Bind(&label4);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapArrayTooLarge, TNode<Object>());
  }

  TNode<NativeContext> tmp5;
  TNode<Smi> tmp6;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp6 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmArrayNewSegment, tmp5, tmp0, tmp6, tmp1, tmp3, parameter3);
  }
}

TF_BUILTIN(WasmArrayCopyWithChecks, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstIndex);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcIndex);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kDstObject);
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedParameter<Object>(Descriptor::kSrcObject);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Oddball> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Null_0(state_);
    tmp1 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter3}, TNode<HeapObject>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapNullDereference, TNode<Object>());
  }

  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = Null_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{parameter4}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapNullDereference, TNode<Object>());
  }

  TNode<WasmArray> tmp4;
  TNode<WasmArray> tmp5;
  TNode<Uint32T> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = TORQUE_CAST(TNode<Object>{parameter3});
    tmp5 = TORQUE_CAST(TNode<Object>{parameter4});
    tmp6 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter0}, TNode<Uint32T>{parameter2});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp8 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp4, tmp7});
    tmp9 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block9, tmp10);
  }

  TNode<Uint32T> tmp11;
  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp11 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter0}, TNode<Uint32T>{parameter2});
    tmp12 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp11}, TNode<Uint32T>{parameter0});
    ca_.Goto(&block9, tmp12);
  }

  TNode<BoolT> phi_bb9_8;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_8);
    ca_.Branch(phi_bb9_8, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block12, tmp13);
  }

  TNode<Uint32T> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp14 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2});
    tmp15 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp16 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp5, tmp15});
    tmp17 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp16});
    ca_.Goto(&block12, tmp17);
  }

  TNode<BoolT> phi_bb12_8;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_8);
    ca_.Branch(phi_bb12_8, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp18;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block15, tmp18);
  }

  TNode<Uint32T> tmp19;
  TNode<BoolT> tmp20;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp19 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter2});
    tmp20 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp19}, TNode<Uint32T>{parameter1});
    ca_.Goto(&block15, tmp20);
  }

  TNode<BoolT> phi_bb15_8;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_8);
    ca_.Branch(phi_bb15_8, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kThrowWasmTrapArrayOutOfBounds, TNode<Object>());
  }

  TNode<Uint32T> tmp21;
  TNode<BoolT> tmp22;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp21 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp22 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp21});
    ca_.Branch(tmp22, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp23;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp23 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp23);
  }

  TNode<NativeContext> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp24 = LoadContextFromFrame_0(state_);
    tmp25 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp26 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    tmp27 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter2});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmArrayCopy, tmp24, tmp4, tmp25, tmp5, tmp26, tmp27);
  }
}

TF_BUILTIN(WasmArrayCopy, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kDstIndex);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSrcIndex);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<WasmArray> parameter3 = UncheckedParameter<WasmArray>(Descriptor::kDstArray);
  USE(parameter3);
  TNode<WasmArray> parameter4 = UncheckedParameter<WasmArray>(Descriptor::kSrcArray);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Oddball> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }

  TNode<NativeContext> tmp3;
  TNode<Smi> tmp4;
  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = LoadContextFromFrame_0(state_);
    tmp4 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp5 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    tmp6 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter2});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmArrayCopy, tmp3, parameter3, tmp4, parameter4, tmp5, tmp6);
  }
}

TF_BUILTIN(WasmAllocateObjectWrapper, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kObj);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSObject> tmp0;
  TNode<Symbol> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = NewJSObject_0(state_, TNode<Context>{parameter0});
    tmp1 = CodeStubAssembler(state_).WasmWrappedObjectSymbolConstant();
    CodeStubAssembler(state_).CallRuntime(Runtime::kCreateDataProperty, parameter0, tmp0, tmp1, parameter1);
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmSubtypeCheck, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<FixedArray> parameter0 = UncheckedParameter<FixedArray>(Descriptor::kObjectSupertypes);
  USE(parameter0);
  TNode<Map> parameter1 = UncheckedParameter<Map>(Descriptor::kRtt);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<WasmTypeInfo> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Smi> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp6 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{parameter0, tmp5});
    tmp7 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp6}, TNode<Smi>{tmp4});
    ca_.Branch(tmp7, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp8;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp8 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp8);
  }

  TNode<Object> tmp9;
  TNode<Map> tmp10;
  TNode<BoolT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = CodeStubAssembler(state_).LoadFixedArrayElement(TNode<FixedArray>{parameter0}, TNode<Smi>{tmp4});
    tmp10 = TORQUE_CAST(TNode<Object>{tmp9});
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp10}, TNode<HeapObject>{parameter1});
    ca_.Branch(tmp11, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp12 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp12);
  }

  TNode<Int32T> tmp13;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp13 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp13);
  }
}

TF_BUILTIN(WasmInt32ToNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Int32T> parameter0 = UncheckedParameter<Int32T>(Descriptor::kValue);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Number> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeInt32ToTagged(TNode<Int32T>{parameter0});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(WasmUint32ToNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kValue);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Number> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ChangeUint32ToTagged(TNode<Uint32T>{parameter0});
    CodeStubAssembler(state_).Return(tmp0);
  }
}

TF_BUILTIN(UintPtr53ToNumber, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kValue);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uintptr_constexpr_uintptr_0(state_, kSmiMaxValue);
    tmp1 = CodeStubAssembler(state_).UintPtrLessThanOrEqual(TNode<UintPtrT>{parameter0}, TNode<UintPtrT>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp2;
  TNode<Smi> tmp3;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{parameter0});
    tmp3 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }

  TNode<Float64T> tmp4;
  TNode<HeapNumber> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = CodeStubAssembler(state_).ChangeUintPtrToFloat64(TNode<UintPtrT>{parameter0});
    tmp5 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(WasmAtomicNotify, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kOffset);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kCount);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  TNode<Smi> tmp4;
  TNode<Int32T> tmp5;
  TNode<Uint32T> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kUintPtr53ToNumber), TNode<Object>(), parameter0);
    tmp3 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter1);
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmAtomicNotify, tmp1, tmp0, tmp2, tmp3)); 
    tmp5 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(WasmI32AtomicWait, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kOffset);
  USE(parameter0);
  TNode<Int32T> parameter1 = UncheckedParameter<Int32T>(Descriptor::kExpectedValue);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kTimeout);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  TNode<Smi> tmp4;
  TNode<Int32T> tmp5;
  TNode<Uint32T> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kUintPtr53ToNumber), TNode<Object>(), parameter0);
    tmp3 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmInt32ToNumber), TNode<Object>(), parameter1);
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmI32AtomicWait, tmp1, tmp0, tmp2, tmp3, parameter2)); 
    tmp5 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp5});
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(WasmI64AtomicWait, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<UintPtrT> parameter0 = UncheckedParameter<UintPtrT>(Descriptor::kOffset);
  USE(parameter0);
  TNode<BigInt> parameter1 = UncheckedParameter<BigInt>(Descriptor::kExpectedValue);
  USE(parameter1);
  TNode<BigInt> parameter2 = UncheckedParameter<BigInt>(Descriptor::kTimeout);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Smi> tmp3;
  TNode<Int32T> tmp4;
  TNode<Uint32T> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kUintPtr53ToNumber), TNode<Object>(), parameter0);
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmI64AtomicWait, tmp1, tmp0, tmp2, parameter1, parameter2)); 
    tmp4 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp3});
    tmp5 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=515&c=1
TorqueStructTargetAndInstance_0 GetTargetAndInstance_0(compiler::CodeAssemblerState* state_, TNode<WasmInternalFunction> p_funcref) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<HeapObject> tmp1;
  TNode<RawPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{p_funcref, tmp0});
    tmp2 = CodeStubAssembler(state_).LoadWasmInternalFunctionCallTargetPtr(TNode<WasmInternalFunction>{p_funcref});
    tmp3 = CodeStubAssembler(state_).Signed(TNode<RawPtrT>{tmp2});
    tmp4 = IntPtrConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{tmp2});
  }

  TNode<IntPtrT> tmp6;
  TNode<Code> tmp7;
  TNode<RawPtrT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp7 = CodeStubAssembler(state_).LoadReference<Code>(CodeStubAssembler::Reference{p_funcref, tmp6});
    tmp8 = CodeStubAssembler(state_).GetCodeEntry(TNode<Code>{tmp7});
    ca_.Goto(&block3, tmp8);
  }

  TNode<RawPtrT> phi_bb3_2;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_2);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TorqueStructTargetAndInstance_0{TNode<RawPtrT>{phi_bb3_2}, TNode<HeapObject>{tmp1}};
}

TF_BUILTIN(CallRefIC, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<FixedArray> parameter0 = UncheckedParameter<FixedArray>(Descriptor::kVector);
  USE(parameter0);
  TNode<IntPtrT> parameter1 = UncheckedParameter<IntPtrT>(Descriptor::kIndex);
  USE(parameter1);
  TNode<WasmInternalFunction> parameter2 = UncheckedParameter<WasmInternalFunction>(Descriptor::kFuncref);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block100(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block128(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block127(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block150(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block159(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block177(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block175(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block183(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block184(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block191(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block192(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block176(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block199(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block200(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block207(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block208(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block215(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block216(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block226(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block225(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block228(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block223(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block221(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block219(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block247(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block248(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block256(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block257(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block264(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block265(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block273(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block274(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block282(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block283(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block290(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block291(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block298(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block299(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block220(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block129(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<BoolT> tmp11;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    tmp10 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9});
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp10}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp11, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<UintPtrT> tmp17;
  TNode<UintPtrT> tmp18;
  TNode<BoolT> tmp19;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    std::tie(tmp12, tmp13, tmp14) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp15 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp16 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp15});
    tmp17 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp16});
    tmp18 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp14});
    tmp19 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp17}, TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp19, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Object> tmp24;
  TNode<Smi> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  TNode<Object> tmp28;
  TNode<IntPtrT> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<UintPtrT> tmp33;
  TNode<UintPtrT> tmp34;
  TNode<BoolT> tmp35;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp20 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp16});
    tmp21 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp20});
    std::tie(tmp22, tmp23) = NewReference_Object_0(state_, TNode<Object>{tmp12}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp22, tmp23});
    tmp25 = TORQUE_CAST(TNode<Object>{tmp24});
    tmp26 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    tmp27 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp25}, TNode<Smi>{tmp26});
    std::tie(tmp28, tmp29, tmp30) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp31 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp31});
    tmp33 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp34 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp30});
    tmp35 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp33}, TNode<UintPtrT>{tmp34});
    ca_.Branch(tmp35, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<RawPtrT> tmp40;
  TNode<HeapObject> tmp41;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp36 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp32});
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewReference_Object_0(state_, TNode<Object>{tmp28}, TNode<IntPtrT>{tmp37}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp38, tmp39}, tmp27);
    std::tie(tmp40, tmp41) = GetTargetAndInstance_0(state_, TNode<WasmInternalFunction>{parameter2}).Flatten();
    CodeStubAssembler(state_).Return(tmp40, tmp41);
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<HeapObject> tmp42;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerLabel label43(&ca_);
    tmp42 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp10}, &label43);
    ca_.Goto(&block43);
    if (label43.is_used()) {
      ca_.Bind(&label43);
      ca_.Goto(&block44);
    }
  }

  if (block44.is_used()) {
    ca_.Bind(&block44);
    ca_.Goto(&block41);
  }

  TNode<FixedArray> tmp44;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    compiler::CodeAssemblerLabel label45(&ca_);
    tmp44 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp42}, &label45);
    ca_.Goto(&block45);
    if (label45.is_used()) {
      ca_.Bind(&label45);
      ca_.Goto(&block46);
    }
  }

  if (block46.is_used()) {
    ca_.Bind(&block46);
    ca_.Goto(&block41);
  }

  TNode<BoolT> tmp46;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp46 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block39, tmp46);
  }

  TNode<BoolT> tmp47;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp47 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block39, tmp47);
  }

  TNode<BoolT> phi_bb39_6;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_6);
    ca_.Branch(phi_bb39_6, &block37, std::vector<compiler::Node*>{}, &block38, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp48;
  TNode<IntPtrT> tmp49;
  if (block37.is_used()) {
    ca_.Bind(&block37);
    tmp48 = TORQUE_CAST(TNode<Object>{tmp10});
    tmp49 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block62, tmp49);
  }

  TNode<IntPtrT> phi_bb62_5;
  TNode<IntPtrT> tmp50;
  TNode<BoolT> tmp51;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_5);
    tmp50 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp48});
    tmp51 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb62_5}, TNode<IntPtrT>{tmp50});
    ca_.Branch(tmp51, &block60, std::vector<compiler::Node*>{phi_bb62_5}, &block61, std::vector<compiler::Node*>{phi_bb62_5});
  }

  TNode<IntPtrT> phi_bb60_5;
  TNode<Object> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<IntPtrT> tmp54;
  TNode<UintPtrT> tmp55;
  TNode<UintPtrT> tmp56;
  TNode<BoolT> tmp57;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_5);
    std::tie(tmp52, tmp53, tmp54) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp48}).Flatten();
    tmp55 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb60_5});
    tmp56 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp54});
    tmp57 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp55}, TNode<UintPtrT>{tmp56});
    ca_.Branch(tmp57, &block70, std::vector<compiler::Node*>{phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5}, &block71, std::vector<compiler::Node*>{phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5, phi_bb60_5});
  }

  TNode<IntPtrT> phi_bb70_5;
  TNode<IntPtrT> phi_bb70_10;
  TNode<IntPtrT> phi_bb70_11;
  TNode<IntPtrT> phi_bb70_15;
  TNode<IntPtrT> phi_bb70_16;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<Object> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<Object> tmp62;
  TNode<BoolT> tmp63;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_5, &phi_bb70_10, &phi_bb70_11, &phi_bb70_15, &phi_bb70_16);
    tmp58 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb70_16});
    tmp59 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp53}, TNode<IntPtrT>{tmp58});
    std::tie(tmp60, tmp61) = NewReference_Object_0(state_, TNode<Object>{tmp52}, TNode<IntPtrT>{tmp59}).Flatten();
    tmp62 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp60, tmp61});
    tmp63 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp62}, TNode<HeapObject>{parameter2});
    ca_.Branch(tmp63, &block64, std::vector<compiler::Node*>{phi_bb70_5}, &block65, std::vector<compiler::Node*>{phi_bb70_5});
  }

  TNode<IntPtrT> phi_bb71_5;
  TNode<IntPtrT> phi_bb71_10;
  TNode<IntPtrT> phi_bb71_11;
  TNode<IntPtrT> phi_bb71_15;
  TNode<IntPtrT> phi_bb71_16;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_5, &phi_bb71_10, &phi_bb71_11, &phi_bb71_15, &phi_bb71_16);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb64_5;
  TNode<Object> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<IntPtrT> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<UintPtrT> tmp69;
  TNode<UintPtrT> tmp70;
  TNode<BoolT> tmp71;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_5);
    std::tie(tmp64, tmp65, tmp66) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp48}).Flatten();
    tmp67 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp68 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb64_5}, TNode<IntPtrT>{tmp67});
    tmp69 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp68});
    tmp70 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp66});
    tmp71 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp69}, TNode<UintPtrT>{tmp70});
    ca_.Branch(tmp71, &block78, std::vector<compiler::Node*>{phi_bb64_5}, &block79, std::vector<compiler::Node*>{phi_bb64_5});
  }

  TNode<IntPtrT> phi_bb78_5;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<Object> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<Object> tmp76;
  TNode<Smi> tmp77;
  TNode<Smi> tmp78;
  TNode<Smi> tmp79;
  TNode<Object> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<UintPtrT> tmp85;
  TNode<UintPtrT> tmp86;
  TNode<BoolT> tmp87;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_5);
    tmp72 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp68});
    tmp73 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp65}, TNode<IntPtrT>{tmp72});
    std::tie(tmp74, tmp75) = NewReference_Object_0(state_, TNode<Object>{tmp64}, TNode<IntPtrT>{tmp73}).Flatten();
    tmp76 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp74, tmp75});
    tmp77 = TORQUE_CAST(TNode<Object>{tmp76});
    tmp78 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    tmp79 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp77}, TNode<Smi>{tmp78});
    std::tie(tmp80, tmp81, tmp82) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp48}).Flatten();
    tmp83 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp84 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb78_5}, TNode<IntPtrT>{tmp83});
    tmp85 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp84});
    tmp86 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp82});
    tmp87 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp85}, TNode<UintPtrT>{tmp86});
    ca_.Branch(tmp87, &block96, std::vector<compiler::Node*>{phi_bb78_5}, &block97, std::vector<compiler::Node*>{phi_bb78_5});
  }

  TNode<IntPtrT> phi_bb79_5;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb96_5;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<Object> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<RawPtrT> tmp92;
  TNode<HeapObject> tmp93;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_5);
    tmp88 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp84});
    tmp89 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp81}, TNode<IntPtrT>{tmp88});
    std::tie(tmp90, tmp91) = NewReference_Object_0(state_, TNode<Object>{tmp80}, TNode<IntPtrT>{tmp89}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp90, tmp91}, tmp79);
    std::tie(tmp92, tmp93) = GetTargetAndInstance_0(state_, TNode<WasmInternalFunction>{parameter2}).Flatten();
    CodeStubAssembler(state_).Return(tmp92, tmp93);
  }

  TNode<IntPtrT> phi_bb97_5;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_5);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb65_5;
  TNode<IntPtrT> tmp94;
  TNode<IntPtrT> tmp95;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_5);
    tmp94 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp95 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb65_5}, TNode<IntPtrT>{tmp94});
    ca_.Goto(&block62, tmp95);
  }

  TNode<IntPtrT> phi_bb61_5;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_5);
    ca_.Goto(&block38);
  }

  TNode<RawPtrT> tmp96;
  TNode<HeapObject> tmp97;
  TNode<Smi> tmp98;
  TNode<BoolT> tmp99;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    std::tie(tmp96, tmp97) = GetTargetAndInstance_0(state_, TNode<WasmInternalFunction>{parameter2}).Flatten();
    tmp98 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp99 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{tmp10}, TNode<MaybeObject>{tmp98});
    ca_.Branch(tmp99, &block100, std::vector<compiler::Node*>{}, &block101, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<IntPtrT> tmp102;
  TNode<UintPtrT> tmp103;
  TNode<UintPtrT> tmp104;
  TNode<BoolT> tmp105;
  if (block100.is_used()) {
    ca_.Bind(&block100);
    std::tie(tmp100, tmp101, tmp102) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp103 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp104 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp102});
    tmp105 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp103}, TNode<UintPtrT>{tmp104});
    ca_.Branch(tmp105, &block107, std::vector<compiler::Node*>{}, &block108, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<Object> tmp108;
  TNode<IntPtrT> tmp109;
  TNode<Object> tmp110;
  TNode<IntPtrT> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<UintPtrT> tmp115;
  TNode<UintPtrT> tmp116;
  TNode<BoolT> tmp117;
  if (block107.is_used()) {
    ca_.Bind(&block107);
    tmp106 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp107 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp101}, TNode<IntPtrT>{tmp106});
    std::tie(tmp108, tmp109) = NewReference_Object_0(state_, TNode<Object>{tmp100}, TNode<IntPtrT>{tmp107}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp108, tmp109}, parameter2);
    std::tie(tmp110, tmp111, tmp112) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp113 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp113});
    tmp115 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp114});
    tmp116 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp112});
    tmp117 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp115}, TNode<UintPtrT>{tmp116});
    ca_.Branch(tmp117, &block115, std::vector<compiler::Node*>{}, &block116, std::vector<compiler::Node*>{});
  }

  if (block108.is_used()) {
    ca_.Bind(&block108);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp118;
  TNode<IntPtrT> tmp119;
  TNode<Object> tmp120;
  TNode<IntPtrT> tmp121;
  TNode<Smi> tmp122;
  if (block115.is_used()) {
    ca_.Bind(&block115);
    tmp118 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp114});
    tmp119 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp111}, TNode<IntPtrT>{tmp118});
    std::tie(tmp120, tmp121) = NewReference_Object_0(state_, TNode<Object>{tmp110}, TNode<IntPtrT>{tmp119}).Flatten();
    tmp122 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp120, tmp121}, tmp122);
    ca_.Goto(&block102);
  }

  if (block116.is_used()) {
    ca_.Bind(&block116);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<HeapObject> tmp123;
  if (block101.is_used()) {
    ca_.Bind(&block101);
    compiler::CodeAssemblerLabel label124(&ca_);
    tmp123 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp10}, &label124);
    ca_.Goto(&block125);
    if (label124.is_used()) {
      ca_.Bind(&label124);
      ca_.Goto(&block126);
    }
  }

  if (block126.is_used()) {
    ca_.Bind(&block126);
    ca_.Goto(&block123);
  }

  TNode<FixedArray> tmp125;
  if (block125.is_used()) {
    ca_.Bind(&block125);
    compiler::CodeAssemblerLabel label126(&ca_);
    tmp125 = Cast_FixedArray_0(state_, TNode<HeapObject>{tmp123}, &label126);
    ca_.Goto(&block127);
    if (label126.is_used()) {
      ca_.Bind(&label126);
      ca_.Goto(&block128);
    }
  }

  if (block128.is_used()) {
    ca_.Bind(&block128);
    ca_.Goto(&block123);
  }

  TNode<BoolT> tmp127;
  if (block127.is_used()) {
    ca_.Bind(&block127);
    tmp127 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block121, tmp127);
  }

  TNode<BoolT> tmp128;
  if (block123.is_used()) {
    ca_.Bind(&block123);
    tmp128 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block121, tmp128);
  }

  TNode<BoolT> phi_bb121_8;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_8);
    ca_.Branch(phi_bb121_8, &block119, std::vector<compiler::Node*>{}, &block120, std::vector<compiler::Node*>{});
  }

  TNode<FixedArray> tmp129;
  TNode<IntPtrT> tmp130;
  TNode<Smi> tmp131;
  TNode<Smi> tmp132;
  TNode<BoolT> tmp133;
  if (block119.is_used()) {
    ca_.Bind(&block119);
    tmp129 = TORQUE_CAST(TNode<Object>{tmp10});
    tmp130 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp131 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp129, tmp130});
    tmp132 = CodeStubAssembler(state_).SmiConstant((CodeStubAssembler(state_).ConstexprInt31Mul(wasm::kMaxPolymorphism, (FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))))));
    tmp133 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp131}, TNode<Smi>{tmp132});
    ca_.Branch(tmp133, &block143, std::vector<compiler::Node*>{}, &block144, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp134;
  TNode<IntPtrT> tmp135;
  TNode<IntPtrT> tmp136;
  TNode<UintPtrT> tmp137;
  TNode<UintPtrT> tmp138;
  TNode<BoolT> tmp139;
  if (block143.is_used()) {
    ca_.Bind(&block143);
    std::tie(tmp134, tmp135, tmp136) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp137 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp138 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp136});
    tmp139 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp137}, TNode<UintPtrT>{tmp138});
    ca_.Branch(tmp139, &block150, std::vector<compiler::Node*>{}, &block151, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<Object> tmp142;
  TNode<IntPtrT> tmp143;
  TNode<Symbol> tmp144;
  TNode<Object> tmp145;
  TNode<IntPtrT> tmp146;
  TNode<IntPtrT> tmp147;
  TNode<IntPtrT> tmp148;
  TNode<IntPtrT> tmp149;
  TNode<UintPtrT> tmp150;
  TNode<UintPtrT> tmp151;
  TNode<BoolT> tmp152;
  if (block150.is_used()) {
    ca_.Bind(&block150);
    tmp140 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp141 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp135}, TNode<IntPtrT>{tmp140});
    std::tie(tmp142, tmp143) = NewReference_Object_0(state_, TNode<Object>{tmp134}, TNode<IntPtrT>{tmp141}).Flatten();
    tmp144 = kMegamorphicSymbol_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp142, tmp143}, tmp144);
    std::tie(tmp145, tmp146, tmp147) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp148 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp149 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp148});
    tmp150 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp149});
    tmp151 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp147});
    tmp152 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp150}, TNode<UintPtrT>{tmp151});
    ca_.Branch(tmp152, &block158, std::vector<compiler::Node*>{}, &block159, std::vector<compiler::Node*>{});
  }

  if (block151.is_used()) {
    ca_.Bind(&block151);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp153;
  TNode<IntPtrT> tmp154;
  TNode<Object> tmp155;
  TNode<IntPtrT> tmp156;
  TNode<Symbol> tmp157;
  if (block158.is_used()) {
    ca_.Bind(&block158);
    tmp153 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp149});
    tmp154 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp146}, TNode<IntPtrT>{tmp153});
    std::tie(tmp155, tmp156) = NewReference_Object_0(state_, TNode<Object>{tmp145}, TNode<IntPtrT>{tmp154}).Flatten();
    tmp157 = kMegamorphicSymbol_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp155, tmp156}, tmp157);
    ca_.Goto(&block145);
  }

  if (block159.is_used()) {
    ca_.Bind(&block159);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp158;
  TNode<IntPtrT> tmp159;
  TNode<IntPtrT> tmp160;
  TNode<FixedArrayBase> tmp161;
  TNode<FixedArray> tmp162;
  TNode<IntPtrT> tmp163;
  if (block144.is_used()) {
    ca_.Bind(&block144);
    tmp158 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp129});
    tmp159 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp160 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp158}, TNode<IntPtrT>{tmp159});
    tmp161 = CodeStubAssembler(state_).AllocateFixedArray(ElementsKind::PACKED_ELEMENTS, TNode<IntPtrT>{tmp160}, CodeStubAssembler::AllocationFlag::kNone);
    tmp162 = TORQUE_CAST(TNode<Object>{tmp161});
    tmp163 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block177, tmp163);
  }

  TNode<IntPtrT> phi_bb177_8;
  TNode<IntPtrT> tmp164;
  TNode<BoolT> tmp165;
  if (block177.is_used()) {
    ca_.Bind(&block177, &phi_bb177_8);
    tmp164 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp129});
    tmp165 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb177_8}, TNode<IntPtrT>{tmp164});
    ca_.Branch(tmp165, &block175, std::vector<compiler::Node*>{phi_bb177_8}, &block176, std::vector<compiler::Node*>{phi_bb177_8});
  }

  TNode<IntPtrT> phi_bb175_8;
  TNode<Object> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<IntPtrT> tmp168;
  TNode<UintPtrT> tmp169;
  TNode<UintPtrT> tmp170;
  TNode<BoolT> tmp171;
  if (block175.is_used()) {
    ca_.Bind(&block175, &phi_bb175_8);
    std::tie(tmp166, tmp167, tmp168) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp162}).Flatten();
    tmp169 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb175_8});
    tmp170 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp168});
    tmp171 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp169}, TNode<UintPtrT>{tmp170});
    ca_.Branch(tmp171, &block183, std::vector<compiler::Node*>{phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8}, &block184, std::vector<compiler::Node*>{phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8, phi_bb175_8});
  }

  TNode<IntPtrT> phi_bb183_8;
  TNode<IntPtrT> phi_bb183_13;
  TNode<IntPtrT> phi_bb183_14;
  TNode<IntPtrT> phi_bb183_18;
  TNode<IntPtrT> phi_bb183_19;
  TNode<IntPtrT> tmp172;
  TNode<IntPtrT> tmp173;
  TNode<Object> tmp174;
  TNode<IntPtrT> tmp175;
  TNode<Object> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<UintPtrT> tmp179;
  TNode<UintPtrT> tmp180;
  TNode<BoolT> tmp181;
  if (block183.is_used()) {
    ca_.Bind(&block183, &phi_bb183_8, &phi_bb183_13, &phi_bb183_14, &phi_bb183_18, &phi_bb183_19);
    tmp172 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb183_19});
    tmp173 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp167}, TNode<IntPtrT>{tmp172});
    std::tie(tmp174, tmp175) = NewReference_Object_0(state_, TNode<Object>{tmp166}, TNode<IntPtrT>{tmp173}).Flatten();
    std::tie(tmp176, tmp177, tmp178) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp129}).Flatten();
    tmp179 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb183_8});
    tmp180 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp178});
    tmp181 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp179}, TNode<UintPtrT>{tmp180});
    ca_.Branch(tmp181, &block191, std::vector<compiler::Node*>{phi_bb183_8, phi_bb183_13, phi_bb183_14, phi_bb183_8, phi_bb183_8, phi_bb183_8, phi_bb183_8}, &block192, std::vector<compiler::Node*>{phi_bb183_8, phi_bb183_13, phi_bb183_14, phi_bb183_8, phi_bb183_8, phi_bb183_8, phi_bb183_8});
  }

  TNode<IntPtrT> phi_bb184_8;
  TNode<IntPtrT> phi_bb184_13;
  TNode<IntPtrT> phi_bb184_14;
  TNode<IntPtrT> phi_bb184_18;
  TNode<IntPtrT> phi_bb184_19;
  if (block184.is_used()) {
    ca_.Bind(&block184, &phi_bb184_8, &phi_bb184_13, &phi_bb184_14, &phi_bb184_18, &phi_bb184_19);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb191_8;
  TNode<IntPtrT> phi_bb191_13;
  TNode<IntPtrT> phi_bb191_14;
  TNode<IntPtrT> phi_bb191_21;
  TNode<IntPtrT> phi_bb191_22;
  TNode<IntPtrT> phi_bb191_26;
  TNode<IntPtrT> phi_bb191_27;
  TNode<IntPtrT> tmp182;
  TNode<IntPtrT> tmp183;
  TNode<Object> tmp184;
  TNode<IntPtrT> tmp185;
  TNode<Object> tmp186;
  TNode<IntPtrT> tmp187;
  TNode<IntPtrT> tmp188;
  if (block191.is_used()) {
    ca_.Bind(&block191, &phi_bb191_8, &phi_bb191_13, &phi_bb191_14, &phi_bb191_21, &phi_bb191_22, &phi_bb191_26, &phi_bb191_27);
    tmp182 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb191_27});
    tmp183 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp177}, TNode<IntPtrT>{tmp182});
    std::tie(tmp184, tmp185) = NewReference_Object_0(state_, TNode<Object>{tmp176}, TNode<IntPtrT>{tmp183}).Flatten();
    tmp186 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp184, tmp185});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp174, tmp175}, tmp186);
    tmp187 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp188 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb191_8}, TNode<IntPtrT>{tmp187});
    ca_.Goto(&block177, tmp188);
  }

  TNode<IntPtrT> phi_bb192_8;
  TNode<IntPtrT> phi_bb192_13;
  TNode<IntPtrT> phi_bb192_14;
  TNode<IntPtrT> phi_bb192_21;
  TNode<IntPtrT> phi_bb192_22;
  TNode<IntPtrT> phi_bb192_26;
  TNode<IntPtrT> phi_bb192_27;
  if (block192.is_used()) {
    ca_.Bind(&block192, &phi_bb192_8, &phi_bb192_13, &phi_bb192_14, &phi_bb192_21, &phi_bb192_22, &phi_bb192_26, &phi_bb192_27);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb176_8;
  TNode<IntPtrT> tmp189;
  TNode<Object> tmp190;
  TNode<IntPtrT> tmp191;
  TNode<IntPtrT> tmp192;
  TNode<UintPtrT> tmp193;
  TNode<UintPtrT> tmp194;
  TNode<BoolT> tmp195;
  if (block176.is_used()) {
    ca_.Bind(&block176, &phi_bb176_8);
    tmp189 = CodeStubAssembler(state_).LoadAndUntagFixedArrayBaseLength(TNode<FixedArrayBase>{tmp129});
    std::tie(tmp190, tmp191, tmp192) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp162}).Flatten();
    tmp193 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp189});
    tmp194 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp192});
    tmp195 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp193}, TNode<UintPtrT>{tmp194});
    ca_.Branch(tmp195, &block199, std::vector<compiler::Node*>{}, &block200, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp196;
  TNode<IntPtrT> tmp197;
  TNode<Object> tmp198;
  TNode<IntPtrT> tmp199;
  TNode<Object> tmp200;
  TNode<IntPtrT> tmp201;
  TNode<IntPtrT> tmp202;
  TNode<IntPtrT> tmp203;
  TNode<IntPtrT> tmp204;
  TNode<UintPtrT> tmp205;
  TNode<UintPtrT> tmp206;
  TNode<BoolT> tmp207;
  if (block199.is_used()) {
    ca_.Bind(&block199);
    tmp196 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp189});
    tmp197 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp191}, TNode<IntPtrT>{tmp196});
    std::tie(tmp198, tmp199) = NewReference_Object_0(state_, TNode<Object>{tmp190}, TNode<IntPtrT>{tmp197}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp198, tmp199}, parameter2);
    std::tie(tmp200, tmp201, tmp202) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp162}).Flatten();
    tmp203 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp204 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp189}, TNode<IntPtrT>{tmp203});
    tmp205 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp204});
    tmp206 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp202});
    tmp207 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp205}, TNode<UintPtrT>{tmp206});
    ca_.Branch(tmp207, &block207, std::vector<compiler::Node*>{}, &block208, std::vector<compiler::Node*>{});
  }

  if (block200.is_used()) {
    ca_.Bind(&block200);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<Object> tmp210;
  TNode<IntPtrT> tmp211;
  TNode<Smi> tmp212;
  TNode<Object> tmp213;
  TNode<IntPtrT> tmp214;
  TNode<IntPtrT> tmp215;
  TNode<UintPtrT> tmp216;
  TNode<UintPtrT> tmp217;
  TNode<BoolT> tmp218;
  if (block207.is_used()) {
    ca_.Bind(&block207);
    tmp208 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp204});
    tmp209 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp201}, TNode<IntPtrT>{tmp208});
    std::tie(tmp210, tmp211) = NewReference_Object_0(state_, TNode<Object>{tmp200}, TNode<IntPtrT>{tmp209}).Flatten();
    tmp212 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp210, tmp211}, tmp212);
    std::tie(tmp213, tmp214, tmp215) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp216 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp217 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp215});
    tmp218 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp216}, TNode<UintPtrT>{tmp217});
    ca_.Branch(tmp218, &block215, std::vector<compiler::Node*>{}, &block216, std::vector<compiler::Node*>{});
  }

  if (block208.is_used()) {
    ca_.Bind(&block208);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp219;
  TNode<IntPtrT> tmp220;
  TNode<Object> tmp221;
  TNode<IntPtrT> tmp222;
  if (block215.is_used()) {
    ca_.Bind(&block215);
    tmp219 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp220 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp214}, TNode<IntPtrT>{tmp219});
    std::tie(tmp221, tmp222) = NewReference_Object_0(state_, TNode<Object>{tmp213}, TNode<IntPtrT>{tmp220}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp221, tmp222}, tmp162);
    ca_.Goto(&block145);
  }

  if (block216.is_used()) {
    ca_.Bind(&block216);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block145.is_used()) {
    ca_.Bind(&block145);
    ca_.Goto(&block129);
  }

  TNode<HeapObject> tmp223;
  if (block120.is_used()) {
    ca_.Bind(&block120);
    compiler::CodeAssemblerLabel label224(&ca_);
    tmp223 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp10}, &label224);
    ca_.Goto(&block225);
    if (label224.is_used()) {
      ca_.Bind(&label224);
      ca_.Goto(&block226);
    }
  }

  if (block226.is_used()) {
    ca_.Bind(&block226);
    ca_.Goto(&block223);
  }

  TNode<WasmInternalFunction> tmp225;
  if (block225.is_used()) {
    ca_.Bind(&block225);
    compiler::CodeAssemblerLabel label226(&ca_);
    tmp225 = Cast_WasmInternalFunction_0(state_, TNode<HeapObject>{tmp223}, &label226);
    ca_.Goto(&block227);
    if (label226.is_used()) {
      ca_.Bind(&label226);
      ca_.Goto(&block228);
    }
  }

  if (block228.is_used()) {
    ca_.Bind(&block228);
    ca_.Goto(&block223);
  }

  TNode<BoolT> tmp227;
  if (block227.is_used()) {
    ca_.Bind(&block227);
    tmp227 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block221, tmp227);
  }

  TNode<BoolT> tmp228;
  if (block223.is_used()) {
    ca_.Bind(&block223);
    tmp228 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block221, tmp228);
  }

  TNode<BoolT> phi_bb221_8;
  if (block221.is_used()) {
    ca_.Bind(&block221, &phi_bb221_8);
    ca_.Branch(phi_bb221_8, &block219, std::vector<compiler::Node*>{}, &block220, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp229;
  TNode<FixedArrayBase> tmp230;
  TNode<FixedArray> tmp231;
  TNode<Object> tmp232;
  TNode<IntPtrT> tmp233;
  TNode<IntPtrT> tmp234;
  TNode<UintPtrT> tmp235;
  TNode<IntPtrT> tmp236;
  TNode<UintPtrT> tmp237;
  TNode<UintPtrT> tmp238;
  TNode<BoolT> tmp239;
  if (block219.is_used()) {
    ca_.Bind(&block219);
    tmp229 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x4ull));
    tmp230 = CodeStubAssembler(state_).AllocateFixedArray(ElementsKind::PACKED_ELEMENTS, TNode<IntPtrT>{tmp229}, CodeStubAssembler::AllocationFlag::kNone);
    tmp231 = TORQUE_CAST(TNode<Object>{tmp230});
    std::tie(tmp232, tmp233, tmp234) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp235 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp236 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp235});
    tmp237 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp236});
    tmp238 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp234});
    tmp239 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp237}, TNode<UintPtrT>{tmp238});
    ca_.Branch(tmp239, &block247, std::vector<compiler::Node*>{}, &block248, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp240;
  TNode<IntPtrT> tmp241;
  TNode<Object> tmp242;
  TNode<IntPtrT> tmp243;
  TNode<Object> tmp244;
  TNode<IntPtrT> tmp245;
  TNode<IntPtrT> tmp246;
  TNode<UintPtrT> tmp247;
  TNode<IntPtrT> tmp248;
  TNode<UintPtrT> tmp249;
  TNode<UintPtrT> tmp250;
  TNode<BoolT> tmp251;
  if (block247.is_used()) {
    ca_.Bind(&block247);
    tmp240 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp236});
    tmp241 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp233}, TNode<IntPtrT>{tmp240});
    std::tie(tmp242, tmp243) = NewReference_Object_0(state_, TNode<Object>{tmp232}, TNode<IntPtrT>{tmp241}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp242, tmp243}, tmp10);
    std::tie(tmp244, tmp245, tmp246) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp247 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp248 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp247});
    tmp249 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp248});
    tmp250 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp246});
    tmp251 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp249}, TNode<UintPtrT>{tmp250});
    ca_.Branch(tmp251, &block256, std::vector<compiler::Node*>{}, &block257, std::vector<compiler::Node*>{});
  }

  if (block248.is_used()) {
    ca_.Bind(&block248);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp252;
  TNode<IntPtrT> tmp253;
  TNode<Object> tmp254;
  TNode<IntPtrT> tmp255;
  TNode<Object> tmp256;
  TNode<IntPtrT> tmp257;
  TNode<IntPtrT> tmp258;
  TNode<IntPtrT> tmp259;
  TNode<IntPtrT> tmp260;
  TNode<UintPtrT> tmp261;
  TNode<UintPtrT> tmp262;
  TNode<BoolT> tmp263;
  if (block256.is_used()) {
    ca_.Bind(&block256);
    tmp252 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp248});
    tmp253 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp245}, TNode<IntPtrT>{tmp252});
    std::tie(tmp254, tmp255) = NewReference_Object_0(state_, TNode<Object>{tmp244}, TNode<IntPtrT>{tmp253}).Flatten();
    std::tie(tmp256, tmp257, tmp258) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp259 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp260 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp259});
    tmp261 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp260});
    tmp262 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp258});
    tmp263 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp261}, TNode<UintPtrT>{tmp262});
    ca_.Branch(tmp263, &block264, std::vector<compiler::Node*>{}, &block265, std::vector<compiler::Node*>{});
  }

  if (block257.is_used()) {
    ca_.Bind(&block257);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp264;
  TNode<IntPtrT> tmp265;
  TNode<Object> tmp266;
  TNode<IntPtrT> tmp267;
  TNode<Object> tmp268;
  TNode<Object> tmp269;
  TNode<IntPtrT> tmp270;
  TNode<IntPtrT> tmp271;
  TNode<UintPtrT> tmp272;
  TNode<IntPtrT> tmp273;
  TNode<UintPtrT> tmp274;
  TNode<UintPtrT> tmp275;
  TNode<BoolT> tmp276;
  if (block264.is_used()) {
    ca_.Bind(&block264);
    tmp264 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp260});
    tmp265 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp257}, TNode<IntPtrT>{tmp264});
    std::tie(tmp266, tmp267) = NewReference_Object_0(state_, TNode<Object>{tmp256}, TNode<IntPtrT>{tmp265}).Flatten();
    tmp268 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp266, tmp267});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp254, tmp255}, tmp268);
    std::tie(tmp269, tmp270, tmp271) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp272 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp273 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp272});
    tmp274 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp273});
    tmp275 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp271});
    tmp276 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp274}, TNode<UintPtrT>{tmp275});
    ca_.Branch(tmp276, &block273, std::vector<compiler::Node*>{}, &block274, std::vector<compiler::Node*>{});
  }

  if (block265.is_used()) {
    ca_.Bind(&block265);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp277;
  TNode<IntPtrT> tmp278;
  TNode<Object> tmp279;
  TNode<IntPtrT> tmp280;
  TNode<Object> tmp281;
  TNode<IntPtrT> tmp282;
  TNode<IntPtrT> tmp283;
  TNode<UintPtrT> tmp284;
  TNode<IntPtrT> tmp285;
  TNode<UintPtrT> tmp286;
  TNode<UintPtrT> tmp287;
  TNode<BoolT> tmp288;
  if (block273.is_used()) {
    ca_.Bind(&block273);
    tmp277 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp273});
    tmp278 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp270}, TNode<IntPtrT>{tmp277});
    std::tie(tmp279, tmp280) = NewReference_Object_0(state_, TNode<Object>{tmp269}, TNode<IntPtrT>{tmp278}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp279, tmp280}, parameter2);
    std::tie(tmp281, tmp282, tmp283) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp231}).Flatten();
    tmp284 = FromConstexpr_uintptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp285 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp284});
    tmp286 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp285});
    tmp287 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp283});
    tmp288 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp286}, TNode<UintPtrT>{tmp287});
    ca_.Branch(tmp288, &block282, std::vector<compiler::Node*>{}, &block283, std::vector<compiler::Node*>{});
  }

  if (block274.is_used()) {
    ca_.Bind(&block274);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp289;
  TNode<IntPtrT> tmp290;
  TNode<Object> tmp291;
  TNode<IntPtrT> tmp292;
  TNode<Smi> tmp293;
  TNode<Object> tmp294;
  TNode<IntPtrT> tmp295;
  TNode<IntPtrT> tmp296;
  TNode<UintPtrT> tmp297;
  TNode<UintPtrT> tmp298;
  TNode<BoolT> tmp299;
  if (block282.is_used()) {
    ca_.Bind(&block282);
    tmp289 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp285});
    tmp290 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp282}, TNode<IntPtrT>{tmp289});
    std::tie(tmp291, tmp292) = NewReference_Object_0(state_, TNode<Object>{tmp281}, TNode<IntPtrT>{tmp290}).Flatten();
    tmp293 = SmiConstant_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp291, tmp292}, tmp293);
    std::tie(tmp294, tmp295, tmp296) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp297 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{parameter1});
    tmp298 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp296});
    tmp299 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp297}, TNode<UintPtrT>{tmp298});
    ca_.Branch(tmp299, &block290, std::vector<compiler::Node*>{}, &block291, std::vector<compiler::Node*>{});
  }

  if (block283.is_used()) {
    ca_.Bind(&block283);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp300;
  TNode<IntPtrT> tmp301;
  TNode<Object> tmp302;
  TNode<IntPtrT> tmp303;
  TNode<Object> tmp304;
  TNode<IntPtrT> tmp305;
  TNode<IntPtrT> tmp306;
  TNode<IntPtrT> tmp307;
  TNode<IntPtrT> tmp308;
  TNode<UintPtrT> tmp309;
  TNode<UintPtrT> tmp310;
  TNode<BoolT> tmp311;
  if (block290.is_used()) {
    ca_.Bind(&block290);
    tmp300 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{parameter1});
    tmp301 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp295}, TNode<IntPtrT>{tmp300});
    std::tie(tmp302, tmp303) = NewReference_Object_0(state_, TNode<Object>{tmp294}, TNode<IntPtrT>{tmp301}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp302, tmp303}, tmp231);
    std::tie(tmp304, tmp305, tmp306) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{parameter0}).Flatten();
    tmp307 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp308 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{parameter1}, TNode<IntPtrT>{tmp307});
    tmp309 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp308});
    tmp310 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp306});
    tmp311 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp309}, TNode<UintPtrT>{tmp310});
    ca_.Branch(tmp311, &block298, std::vector<compiler::Node*>{}, &block299, std::vector<compiler::Node*>{});
  }

  if (block291.is_used()) {
    ca_.Bind(&block291);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp312;
  TNode<IntPtrT> tmp313;
  TNode<Object> tmp314;
  TNode<IntPtrT> tmp315;
  TNode<Oddball> tmp316;
  if (block298.is_used()) {
    ca_.Bind(&block298);
    tmp312 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp308});
    tmp313 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp305}, TNode<IntPtrT>{tmp312});
    std::tie(tmp314, tmp315) = NewReference_Object_0(state_, TNode<Object>{tmp304}, TNode<IntPtrT>{tmp313}).Flatten();
    tmp316 = Undefined_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp314, tmp315}, tmp316);
    ca_.Goto(&block220);
  }

  if (block299.is_used()) {
    ca_.Bind(&block299);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block220.is_used()) {
    ca_.Bind(&block220);
    ca_.Goto(&block129);
  }

  if (block129.is_used()) {
    ca_.Bind(&block129);
    ca_.Goto(&block102);
  }

  if (block102.is_used()) {
    ca_.Bind(&block102);
    CodeStubAssembler(state_).Return(tmp96, tmp97);
  }
}

TF_BUILTIN(WasmGetOwnProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kObject);
  USE(parameter1);
  TNode<Name> parameter2 = UncheckedParameter<Name>(Descriptor::kUniqueName);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<HeapObject> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block2);
  }

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_JSReceiver_0(state_, TNode<HeapObject>{tmp0}, &label3);
    ca_.Goto(&block5);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block6);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp4;
  TNode<Map> tmp5;
  TNode<Uint16T> tmp6;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp5 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp2, tmp4});
    tmp6 = CodeStubAssembler(state_).LoadInstanceType(TNode<HeapObject>{tmp2});
    compiler::CodeAssemblerLabel label7(&ca_);
    compiler::CodeAssemblerLabel label8(&ca_);
    compiler::CodeAssemblerLabel label9(&ca_);
    CodeStubAssembler(state_).TryHasOwnProperty(TNode<HeapObject>{tmp2}, TNode<Map>{tmp5}, TNode<Uint16T>{tmp6}, TNode<Name>{parameter2}, &label7, &label8, &label9);
    if (label7.is_used()) {
      ca_.Bind(&label7);
      ca_.Goto(&block9);
    }
    if (label8.is_used()) {
      ca_.Bind(&label8);
      ca_.Goto(&block10);
    }
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block11);
    }
  }

  TNode<Smi> tmp10;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp10 = CodeStubAssembler(state_).SmiConstant(OnNonExistent::kReturnUndefined);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kGetPropertyWithReceiver, parameter0, tmp2, parameter2, tmp2, tmp10);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block2);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block2);
  }

  TNode<Oddball> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp11);
  }
}

TF_BUILTIN(WasmTrap, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Smi> parameter0 = UncheckedParameter<Smi>(Descriptor::kError);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kThrowWasmError, tmp0, parameter0);
  }
}

TF_BUILTIN(ThrowWasmTrapUnreachable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapUnreachable);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapMemOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapMemOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapUnalignedAccess, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapUnalignedAccess);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapDivByZero, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapDivByZero);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapDivUnrepresentable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapDivUnrepresentable);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapRemByZero, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapRemByZero);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapFloatUnrepresentable, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapFloatUnrepresentable);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapFuncSigMismatch, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapFuncSigMismatch);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapDataSegmentOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapDataSegmentOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapElementSegmentOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapElementSegmentOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapTableOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapTableOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapRethrowNull, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapRethrowNull);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapNullDereference, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapNullDereference);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapIllegalCast, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapIllegalCast);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapArrayOutOfBounds, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayOutOfBounds);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

TF_BUILTIN(ThrowWasmTrapArrayTooLarge, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayTooLarge);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kWasmTrap, TNode<Object>(), tmp0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=701&c=1
TNode<IntPtrT> TryNumberToIntptr_0(compiler::CodeAssemblerState* state_, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_Failure) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Smi_0(state_, TNode<Object>{p_value}, &label1);
    ca_.Goto(&block5);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6);
    }
  }

  TNode<HeapNumber> tmp2;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_HeapNumber_0(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(p_value)}, &label3);
    ca_.Goto(&block9);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block10);
    }
  }

  TNode<IntPtrT> tmp4;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp4 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp0});
    ca_.Goto(&block2, tmp4);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block1);
  }

  TNode<Float64T> tmp5;
  TNode<BoolT> tmp6;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp5 = Convert_float64_HeapNumber_0(state_, TNode<HeapNumber>{tmp2});
    tmp6 = Float64IsNaN_0(state_, TNode<Float64T>{tmp5});
    ca_.Branch(tmp6, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block1);
  }

  TNode<Float64T> tmp7;
  TNode<IntPtrT> tmp8;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp7 = CodeStubAssembler(state_).Float64Trunc(TNode<Float64T>{tmp5});
    tmp8 = CodeStubAssembler(state_).ChangeFloat64ToIntPtr(TNode<Float64T>{tmp7});
    ca_.Goto(&block2, tmp8);
  }

  TNode<IntPtrT> phi_bb2_1;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_1);
    ca_.Goto(&block13, phi_bb2_1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Failure);
  }

  TNode<IntPtrT> phi_bb13_1;
    ca_.Bind(&block13, &phi_bb13_1);
  return TNode<IntPtrT>{phi_bb13_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=718&c=1
TNode<WasmTypeInfo> WasmTypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<WasmTypeInfo> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp1 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{p_map, tmp0});
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block15);
  }

    ca_.Bind(&block15);
  return TNode<WasmTypeInfo>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=731&c=1
TNode<BoolT> IsWord16WasmArrayMap_0(compiler::CodeAssemblerState* state_, TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmTypeInfo> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<RawPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<RawPtrT> tmp5;
  TNode<RawPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Int32T> tmp9;
  TNode<Int32T> tmp10;
  TNode<BoolT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmTypeInfo_0(state_, TNode<Map>{p_map});
    tmp1 = CodeStubAssembler(state_).LoadWasmTypeInfoNativeTypePtr(TNode<WasmTypeInfo>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_intptr_0(state_, wasm::ArrayType::kRepOffset);
    tmp3 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_intptr_0(state_, wasm::ValueType::kBitFieldOffset);
    tmp5 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    tmp6 = (TNode<RawPtrT>{tmp5});
    std::tie(tmp7, tmp8) = NewOffHeapReference_int32_0(state_, TNode<RawPtrT>{tmp6}).Flatten();
    tmp9 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp7, tmp8});
    tmp10 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueType::Primitive(wasm::kI16).raw_bit_field());
    tmp11 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp10});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BoolT>{tmp11};
}

TF_BUILTIN(ExperimentalWasmConvertArrayToString, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp1 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<WasmArray> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_WasmArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, &label5);
    ca_.Goto(&block7);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = TryNumberToIntptr_0(state_, TNode<Object>{tmp7}, &label9);
    ca_.Goto(&block11);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp10;
  TNode<Object> tmp11;
  TNode<IntPtrT> tmp12;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp10 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp11 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp10});
    compiler::CodeAssemblerLabel label13(&ca_);
    tmp12 = TryNumberToIntptr_0(state_, TNode<Object>{tmp11}, &label13);
    ca_.Goto(&block15);
    if (label13.is_used()) {
      ca_.Bind(&label13);
      ca_.Goto(&block16);
    }
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp14;
  TNode<Map> tmp15;
  TNode<BoolT> tmp16;
  TNode<BoolT> tmp17;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp15 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp4, tmp14});
    tmp16 = IsWord16WasmArrayMap_0(state_, TNode<Map>{tmp15});
    tmp17 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp16});
    ca_.Branch(tmp17, &block17, std::vector<compiler::Node*>{}, &block18, std::vector<compiler::Node*>{});
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp18;
  TNode<Uint32T> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<Uint32T> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<IntPtrT> tmp29;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp18 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp19 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp4, tmp18});
    tmp20 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{tmp19});
    tmp21 = FromConstexpr_intptr_constexpr_int32_0(state_, WasmArray::kHeaderSize);
    std::tie(tmp22, tmp23, tmp24) = NewConstSlice_char16_0(state_, TNode<Object>{tmp4}, TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp20}).Flatten();
    tmp25 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp12});
    tmp26 = Convert_uint32_uintptr_0(state_, TNode<UintPtrT>{tmp25});
    compiler::CodeAssemblerLabel label30(&ca_);
    std::tie(tmp27, tmp28, tmp29) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp22}, TNode<IntPtrT>{tmp23}, TNode<IntPtrT>{tmp24}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp12}, &label30).Flatten();
    ca_.Goto(&block21);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block22);
    }
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<String> tmp33;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp31 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp29});
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp31});
    tmp33 = AllocateSeqTwoByteString_SliceIterator_char16_ConstReference_char16_0(state_, TNode<Uint32T>{tmp26}, TorqueStructSliceIterator_char16_ConstReference_char16_0{TNode<Object>{tmp27}, TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32}, TorqueStructUnsafe_0{}});
    arguments.PopAndReturn(tmp33);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidArgument);
  }
}

TF_BUILTIN(ExperimentalWasmConvertStringToArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Word32T> argc = UncheckedParameter<Word32T>(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(UncheckedCast<Int32T>(argc)));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length, FrameArgumentsArgcType::kCountIncludesReceiver));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, String> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, String> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp1 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<String> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    compiler::CodeAssemblerLabel label5(&ca_);
    tmp4 = Cast_String_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, &label5);
    ca_.Goto(&block7);
    if (label5.is_used()) {
      ca_.Bind(&label5);
      ca_.Goto(&block8);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<WasmArray> tmp8;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    compiler::CodeAssemblerLabel label9(&ca_);
    tmp8 = Cast_WasmArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{tmp7}, &label9);
    ca_.Goto(&block11);
    if (label9.is_used()) {
      ca_.Bind(&label9);
      ca_.Goto(&block12);
    }
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp10;
  TNode<Map> tmp11;
  TNode<BoolT> tmp12;
  TNode<BoolT> tmp13;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    tmp11 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp8, tmp10});
    tmp12 = IsWord16WasmArrayMap_0(state_, TNode<Map>{tmp11});
    tmp13 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp12});
    ca_.Branch(tmp13, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp14;
  TNode<Int32T> tmp15;
  TNode<Uint32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<WasmArray> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<Object> tmp21;
  TNode<IntPtrT> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<IntPtrT> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<Int32T> tmp26;
  TNode<IntPtrT> tmp27;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp15 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp4, tmp14});
    tmp16 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp15});
    tmp17 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp18 = ca_.CallStub<WasmArray>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmAllocateArray_Uninitialized), TNode<Object>(), tmp11, tmp16, tmp17);
    tmp19 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp15});
    tmp20 = FromConstexpr_intptr_constexpr_int32_0(state_, WasmArray::kHeaderSize);
    std::tie(tmp21, tmp22, tmp23) = NewMutableSlice_char16_0(state_, TNode<Object>{tmp18}, TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp19}).Flatten();
    tmp24 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp25 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp26 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp4, tmp25});
    tmp27 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp26});
    ca_.Goto(&block21, tmp4, tmp24);
  }

  TNode<String> phi_bb21_15;
  TNode<IntPtrT> phi_bb21_16;
  TNode<BoolT> tmp28;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_15, &phi_bb21_16);
    tmp28 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp28, &block19, std::vector<compiler::Node*>{phi_bb21_15, phi_bb21_16}, &block20, std::vector<compiler::Node*>{phi_bb21_15, phi_bb21_16});
  }

  TNode<String> phi_bb19_15;
  TNode<IntPtrT> phi_bb19_16;
  TNode<SeqOneByteString> tmp29;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_15, &phi_bb19_16);
    compiler::CodeAssemblerLabel label30(&ca_);
    tmp29 = Cast_SeqOneByteString_1(state_, TNode<String>{phi_bb19_15}, &label30);
    ca_.Goto(&block24, phi_bb19_15, phi_bb19_16, phi_bb19_15, phi_bb19_15);
    if (label30.is_used()) {
      ca_.Bind(&label30);
      ca_.Goto(&block25, phi_bb19_15, phi_bb19_16, phi_bb19_15, phi_bb19_15);
    }
  }

  TNode<String> phi_bb25_15;
  TNode<IntPtrT> phi_bb25_16;
  TNode<String> phi_bb25_18;
  TNode<String> phi_bb25_19;
  TNode<SeqTwoByteString> tmp31;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_15, &phi_bb25_16, &phi_bb25_18, &phi_bb25_19);
    compiler::CodeAssemblerLabel label32(&ca_);
    tmp31 = Cast_SeqTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb25_18)}, &label32);
    ca_.Goto(&block32, phi_bb25_15, phi_bb25_16, phi_bb25_18);
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block33, phi_bb25_15, phi_bb25_16, phi_bb25_18);
    }
  }

  TNode<String> phi_bb24_15;
  TNode<IntPtrT> phi_bb24_16;
  TNode<String> phi_bb24_18;
  TNode<String> phi_bb24_19;
  TNode<Object> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<Object> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<IntPtrT> tmp38;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_15, &phi_bb24_16, &phi_bb24_18, &phi_bb24_19);
    std::tie(tmp33, tmp34, tmp35) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp29}).Flatten();
    compiler::CodeAssemblerLabel label39(&ca_);
    std::tie(tmp36, tmp37, tmp38) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp33}, TNode<IntPtrT>{tmp34}, TNode<IntPtrT>{tmp35}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb24_16}, TNode<IntPtrT>{tmp27}, &label39).Flatten();
    ca_.Goto(&block28, phi_bb24_15, phi_bb24_16, phi_bb24_18, phi_bb24_16);
    if (label39.is_used()) {
      ca_.Bind(&label39);
      ca_.Goto(&block29, phi_bb24_15, phi_bb24_16, phi_bb24_18, phi_bb24_16);
    }
  }

  TNode<String> phi_bb29_15;
  TNode<IntPtrT> phi_bb29_16;
  TNode<String> phi_bb29_18;
  TNode<IntPtrT> phi_bb29_23;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_15, &phi_bb29_16, &phi_bb29_18, &phi_bb29_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb28_15;
  TNode<IntPtrT> phi_bb28_16;
  TNode<String> phi_bb28_18;
  TNode<IntPtrT> phi_bb28_23;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_15, &phi_bb28_16, &phi_bb28_18, &phi_bb28_23);
    ca_.Goto(&block18, tmp36, tmp37, tmp38);
  }

  TNode<String> phi_bb33_15;
  TNode<IntPtrT> phi_bb33_16;
  TNode<String> phi_bb33_18;
  TNode<ThinString> tmp40;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_15, &phi_bb33_16, &phi_bb33_18);
    compiler::CodeAssemblerLabel label41(&ca_);
    tmp40 = Cast_ThinString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb33_18)}, &label41);
    ca_.Goto(&block40, phi_bb33_15, phi_bb33_16, phi_bb33_18);
    if (label41.is_used()) {
      ca_.Bind(&label41);
      ca_.Goto(&block41, phi_bb33_15, phi_bb33_16, phi_bb33_18);
    }
  }

  TNode<String> phi_bb32_15;
  TNode<IntPtrT> phi_bb32_16;
  TNode<String> phi_bb32_18;
  TNode<Object> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<IntPtrT> tmp44;
  TNode<Object> tmp45;
  TNode<IntPtrT> tmp46;
  TNode<IntPtrT> tmp47;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_15, &phi_bb32_16, &phi_bb32_18);
    std::tie(tmp42, tmp43, tmp44) = FieldSliceSeqTwoByteStringChars_0(state_, TNode<SeqTwoByteString>{tmp31}).Flatten();
    compiler::CodeAssemblerLabel label48(&ca_);
    std::tie(tmp45, tmp46, tmp47) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp42}, TNode<IntPtrT>{tmp43}, TNode<IntPtrT>{tmp44}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb32_16}, TNode<IntPtrT>{tmp27}, &label48).Flatten();
    ca_.Goto(&block36, phi_bb32_15, phi_bb32_16, phi_bb32_18, phi_bb32_16);
    if (label48.is_used()) {
      ca_.Bind(&label48);
      ca_.Goto(&block37, phi_bb32_15, phi_bb32_16, phi_bb32_18, phi_bb32_16);
    }
  }

  TNode<String> phi_bb37_15;
  TNode<IntPtrT> phi_bb37_16;
  TNode<String> phi_bb37_18;
  TNode<IntPtrT> phi_bb37_23;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_15, &phi_bb37_16, &phi_bb37_18, &phi_bb37_23);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb36_15;
  TNode<IntPtrT> phi_bb36_16;
  TNode<String> phi_bb36_18;
  TNode<IntPtrT> phi_bb36_23;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_15, &phi_bb36_16, &phi_bb36_18, &phi_bb36_23);
    ca_.Goto(&block16, tmp45, tmp46, tmp47);
  }

  TNode<String> phi_bb41_15;
  TNode<IntPtrT> phi_bb41_16;
  TNode<String> phi_bb41_18;
  TNode<ConsString> tmp49;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_15, &phi_bb41_16, &phi_bb41_18);
    compiler::CodeAssemblerLabel label50(&ca_);
    tmp49 = Cast_ConsString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb41_18)}, &label50);
    ca_.Goto(&block44, phi_bb41_15, phi_bb41_16, phi_bb41_18);
    if (label50.is_used()) {
      ca_.Bind(&label50);
      ca_.Goto(&block45, phi_bb41_15, phi_bb41_16, phi_bb41_18);
    }
  }

  TNode<String> phi_bb40_15;
  TNode<IntPtrT> phi_bb40_16;
  TNode<String> phi_bb40_18;
  TNode<IntPtrT> tmp51;
  TNode<String> tmp52;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_15, &phi_bb40_16, &phi_bb40_18);
    tmp51 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp52 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp40, tmp51});
    ca_.Goto(&block38, tmp52, phi_bb40_16, phi_bb40_18);
  }

  TNode<String> phi_bb45_15;
  TNode<IntPtrT> phi_bb45_16;
  TNode<String> phi_bb45_18;
  TNode<SlicedString> tmp53;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_15, &phi_bb45_16, &phi_bb45_18);
    compiler::CodeAssemblerLabel label54(&ca_);
    tmp53 = Cast_SlicedString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb45_18)}, &label54);
    ca_.Goto(&block48, phi_bb45_15, phi_bb45_16, phi_bb45_18);
    if (label54.is_used()) {
      ca_.Bind(&label54);
      ca_.Goto(&block49, phi_bb45_15, phi_bb45_16, phi_bb45_18);
    }
  }

  TNode<String> phi_bb44_15;
  TNode<IntPtrT> phi_bb44_16;
  TNode<String> phi_bb44_18;
  TNode<String> tmp55;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_15, &phi_bb44_16, &phi_bb44_18);
    tmp55 = Flatten_1(state_, TNode<ConsString>{tmp49});
    ca_.Goto(&block42, tmp55, phi_bb44_16, phi_bb44_18);
  }

  TNode<String> phi_bb49_15;
  TNode<IntPtrT> phi_bb49_16;
  TNode<String> phi_bb49_18;
  TNode<ExternalOneByteString> tmp56;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_15, &phi_bb49_16, &phi_bb49_18);
    compiler::CodeAssemblerLabel label57(&ca_);
    tmp56 = Cast_ExternalOneByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb49_18)}, &label57);
    ca_.Goto(&block52, phi_bb49_15, phi_bb49_16, phi_bb49_18);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block53, phi_bb49_15, phi_bb49_16, phi_bb49_18);
    }
  }

  TNode<String> phi_bb48_15;
  TNode<IntPtrT> phi_bb48_16;
  TNode<String> phi_bb48_18;
  TNode<IntPtrT> tmp58;
  TNode<Smi> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<IntPtrT> tmp61;
  TNode<IntPtrT> tmp62;
  TNode<String> tmp63;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_15, &phi_bb48_16, &phi_bb48_18);
    tmp58 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp59 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp53, tmp58});
    tmp60 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp59});
    tmp61 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb48_16}, TNode<IntPtrT>{tmp60});
    tmp62 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp63 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp53, tmp62});
    ca_.Goto(&block42, tmp63, tmp61, phi_bb48_18);
  }

  TNode<String> phi_bb53_15;
  TNode<IntPtrT> phi_bb53_16;
  TNode<String> phi_bb53_18;
  TNode<ExternalTwoByteString> tmp64;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_15, &phi_bb53_16, &phi_bb53_18);
    compiler::CodeAssemblerLabel label65(&ca_);
    tmp64 = Cast_ExternalTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb53_18)}, &label65);
    ca_.Goto(&block60, phi_bb53_15, phi_bb53_16, phi_bb53_18);
    if (label65.is_used()) {
      ca_.Bind(&label65);
      ca_.Goto(&block61, phi_bb53_15, phi_bb53_16, phi_bb53_18);
    }
  }

  TNode<String> phi_bb52_15;
  TNode<IntPtrT> phi_bb52_16;
  TNode<String> phi_bb52_18;
  TNode<RawPtrT> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<Int32T> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<Object> tmp70;
  TNode<IntPtrT> tmp71;
  TNode<IntPtrT> tmp72;
  TNode<Object> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<IntPtrT> tmp75;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_15, &phi_bb52_16, &phi_bb52_18);
    tmp66 = Method_ExternalOneByteString_GetChars_0(state_, TNode<ExternalOneByteString>{tmp56});
    tmp67 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp68 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp56, tmp67});
    tmp69 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp68});
    std::tie(tmp70, tmp71, tmp72) = NewOffHeapConstSlice_char8_0(state_, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp69}).Flatten();
    compiler::CodeAssemblerLabel label76(&ca_);
    std::tie(tmp73, tmp74, tmp75) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp70}, TNode<IntPtrT>{tmp71}, TNode<IntPtrT>{tmp72}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb52_16}, TNode<IntPtrT>{tmp27}, &label76).Flatten();
    ca_.Goto(&block56, phi_bb52_15, phi_bb52_16, phi_bb52_18, phi_bb52_16);
    if (label76.is_used()) {
      ca_.Bind(&label76);
      ca_.Goto(&block57, phi_bb52_15, phi_bb52_16, phi_bb52_18, phi_bb52_16);
    }
  }

  TNode<String> phi_bb57_15;
  TNode<IntPtrT> phi_bb57_16;
  TNode<String> phi_bb57_18;
  TNode<IntPtrT> phi_bb57_26;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_15, &phi_bb57_16, &phi_bb57_18, &phi_bb57_26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb56_15;
  TNode<IntPtrT> phi_bb56_16;
  TNode<String> phi_bb56_18;
  TNode<IntPtrT> phi_bb56_26;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_15, &phi_bb56_16, &phi_bb56_18, &phi_bb56_26);
    ca_.Goto(&block18, tmp73, tmp74, tmp75);
  }

  TNode<String> phi_bb61_15;
  TNode<IntPtrT> phi_bb61_16;
  TNode<String> phi_bb61_18;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_15, &phi_bb61_16, &phi_bb61_18);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb60_15;
  TNode<IntPtrT> phi_bb60_16;
  TNode<String> phi_bb60_18;
  TNode<RawPtrT> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<Int32T> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<Object> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<Object> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<IntPtrT> tmp86;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_15, &phi_bb60_16, &phi_bb60_18);
    tmp77 = Method_ExternalTwoByteString_GetChars_0(state_, TNode<ExternalTwoByteString>{tmp64});
    tmp78 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp79 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp64, tmp78});
    tmp80 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp79});
    std::tie(tmp81, tmp82, tmp83) = NewOffHeapConstSlice_char16_0(state_, TNode<RawPtrT>{tmp77}, TNode<IntPtrT>{tmp80}).Flatten();
    compiler::CodeAssemblerLabel label87(&ca_);
    std::tie(tmp84, tmp85, tmp86) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp81}, TNode<IntPtrT>{tmp82}, TNode<IntPtrT>{tmp83}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb60_16}, TNode<IntPtrT>{tmp27}, &label87).Flatten();
    ca_.Goto(&block64, phi_bb60_15, phi_bb60_16, phi_bb60_18, phi_bb60_16);
    if (label87.is_used()) {
      ca_.Bind(&label87);
      ca_.Goto(&block65, phi_bb60_15, phi_bb60_16, phi_bb60_18, phi_bb60_16);
    }
  }

  TNode<String> phi_bb65_15;
  TNode<IntPtrT> phi_bb65_16;
  TNode<String> phi_bb65_18;
  TNode<IntPtrT> phi_bb65_26;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_15, &phi_bb65_16, &phi_bb65_18, &phi_bb65_26);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb64_15;
  TNode<IntPtrT> phi_bb64_16;
  TNode<String> phi_bb64_18;
  TNode<IntPtrT> phi_bb64_26;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_15, &phi_bb64_16, &phi_bb64_18, &phi_bb64_26);
    ca_.Goto(&block16, tmp84, tmp85, tmp86);
  }

  TNode<String> phi_bb42_15;
  TNode<IntPtrT> phi_bb42_16;
  TNode<String> phi_bb42_18;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_15, &phi_bb42_16, &phi_bb42_18);
    ca_.Goto(&block38, phi_bb42_15, phi_bb42_16, phi_bb42_18);
  }

  TNode<String> phi_bb38_15;
  TNode<IntPtrT> phi_bb38_16;
  TNode<String> phi_bb38_18;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_15, &phi_bb38_16, &phi_bb38_18);
    ca_.Goto(&block21, phi_bb38_15, phi_bb38_16);
  }

  TNode<String> phi_bb20_15;
  TNode<IntPtrT> phi_bb20_16;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_15, &phi_bb20_16);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb18_13;
  TNode<IntPtrT> phi_bb18_14;
  TNode<IntPtrT> phi_bb18_15;
  TNode<IntPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<IntPtrT> tmp91;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_13, &phi_bb18_14, &phi_bb18_15);
    tmp88 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{phi_bb18_15});
    tmp89 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb18_14}, TNode<IntPtrT>{tmp88});
    tmp90 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp23});
    tmp91 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp90});
    ca_.Goto(&block70, phi_bb18_13, phi_bb18_14, phi_bb18_15, phi_bb18_13, phi_bb18_14, tmp22);
  }

  TNode<Object> phi_bb70_13;
  TNode<IntPtrT> phi_bb70_14;
  TNode<IntPtrT> phi_bb70_15;
  TNode<Object> phi_bb70_16;
  TNode<IntPtrT> phi_bb70_17;
  TNode<IntPtrT> phi_bb70_20;
  TNode<BoolT> tmp92;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_13, &phi_bb70_14, &phi_bb70_15, &phi_bb70_16, &phi_bb70_17, &phi_bb70_20);
    tmp92 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp92, &block68, std::vector<compiler::Node*>{phi_bb70_13, phi_bb70_14, phi_bb70_15, phi_bb70_16, phi_bb70_17, phi_bb70_20}, &block69, std::vector<compiler::Node*>{phi_bb70_13, phi_bb70_14, phi_bb70_15, phi_bb70_16, phi_bb70_17, phi_bb70_20});
  }

  TNode<Object> phi_bb68_13;
  TNode<IntPtrT> phi_bb68_14;
  TNode<IntPtrT> phi_bb68_15;
  TNode<Object> phi_bb68_16;
  TNode<IntPtrT> phi_bb68_17;
  TNode<IntPtrT> phi_bb68_20;
  TNode<BoolT> tmp93;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_13, &phi_bb68_14, &phi_bb68_15, &phi_bb68_16, &phi_bb68_17, &phi_bb68_20);
    tmp93 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb68_20}, TNode<IntPtrT>{tmp91});
    ca_.Branch(tmp93, &block74, std::vector<compiler::Node*>{phi_bb68_13, phi_bb68_14, phi_bb68_15, phi_bb68_16, phi_bb68_17, phi_bb68_20}, &block75, std::vector<compiler::Node*>{phi_bb68_13, phi_bb68_14, phi_bb68_15, phi_bb68_16, phi_bb68_17, phi_bb68_20});
  }

  TNode<Object> phi_bb74_13;
  TNode<IntPtrT> phi_bb74_14;
  TNode<IntPtrT> phi_bb74_15;
  TNode<Object> phi_bb74_16;
  TNode<IntPtrT> phi_bb74_17;
  TNode<IntPtrT> phi_bb74_20;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_13, &phi_bb74_14, &phi_bb74_15, &phi_bb74_16, &phi_bb74_17, &phi_bb74_20);
    ca_.Goto(&block69, phi_bb74_13, phi_bb74_14, phi_bb74_15, phi_bb74_16, phi_bb74_17, phi_bb74_20);
  }

  TNode<Object> phi_bb75_13;
  TNode<IntPtrT> phi_bb75_14;
  TNode<IntPtrT> phi_bb75_15;
  TNode<Object> phi_bb75_16;
  TNode<IntPtrT> phi_bb75_17;
  TNode<IntPtrT> phi_bb75_20;
  TNode<Object> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<IntPtrT> tmp96;
  TNode<IntPtrT> tmp97;
  TNode<Object> tmp98;
  TNode<IntPtrT> tmp99;
  TNode<IntPtrT> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<Uint8T> tmp102;
  TNode<Uint16T> tmp103;
  TNode<Uint16T> tmp104;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_13, &phi_bb75_14, &phi_bb75_15, &phi_bb75_16, &phi_bb75_17, &phi_bb75_20);
    std::tie(tmp94, tmp95) = NewReference_char16_0(state_, TNode<Object>{tmp21}, TNode<IntPtrT>{phi_bb75_20}).Flatten();
    tmp96 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp97 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb75_20}, TNode<IntPtrT>{tmp96});
    std::tie(tmp98, tmp99) = NewReference_char8_0(state_, TNode<Object>{phi_bb75_16}, TNode<IntPtrT>{phi_bb75_17}).Flatten();
    tmp100 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp101 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb75_17}, TNode<IntPtrT>{tmp100});
    tmp102 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp98, tmp99});
    tmp103 = Convert_uint16_char8_0(state_, TNode<Uint8T>{tmp102});
    tmp104 = (TNode<Uint16T>{tmp103});
    CodeStubAssembler(state_).StoreReference<Uint16T>(CodeStubAssembler::Reference{tmp94, tmp95}, tmp104);
    ca_.Goto(&block70, phi_bb75_13, phi_bb75_14, phi_bb75_15, phi_bb75_16, tmp101, tmp97);
  }

  TNode<Object> phi_bb69_13;
  TNode<IntPtrT> phi_bb69_14;
  TNode<IntPtrT> phi_bb69_15;
  TNode<Object> phi_bb69_16;
  TNode<IntPtrT> phi_bb69_17;
  TNode<IntPtrT> phi_bb69_20;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_13, &phi_bb69_14, &phi_bb69_15, &phi_bb69_16, &phi_bb69_17, &phi_bb69_20);
    ca_.Goto(&block15);
  }

  TNode<Object> phi_bb16_13;
  TNode<IntPtrT> phi_bb16_14;
  TNode<IntPtrT> phi_bb16_15;
  TNode<IntPtrT> tmp105;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<IntPtrT> tmp108;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_13, &phi_bb16_14, &phi_bb16_15);
    tmp105 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{phi_bb16_15});
    tmp106 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb16_14}, TNode<IntPtrT>{tmp105});
    tmp107 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp23});
    tmp108 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp22}, TNode<IntPtrT>{tmp107});
    ca_.Goto(&block89, phi_bb16_13, phi_bb16_14, phi_bb16_15, phi_bb16_13, phi_bb16_14, tmp22);
  }

  TNode<Object> phi_bb89_13;
  TNode<IntPtrT> phi_bb89_14;
  TNode<IntPtrT> phi_bb89_15;
  TNode<Object> phi_bb89_16;
  TNode<IntPtrT> phi_bb89_17;
  TNode<IntPtrT> phi_bb89_20;
  TNode<BoolT> tmp109;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_13, &phi_bb89_14, &phi_bb89_15, &phi_bb89_16, &phi_bb89_17, &phi_bb89_20);
    tmp109 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp109, &block87, std::vector<compiler::Node*>{phi_bb89_13, phi_bb89_14, phi_bb89_15, phi_bb89_16, phi_bb89_17, phi_bb89_20}, &block88, std::vector<compiler::Node*>{phi_bb89_13, phi_bb89_14, phi_bb89_15, phi_bb89_16, phi_bb89_17, phi_bb89_20});
  }

  TNode<Object> phi_bb87_13;
  TNode<IntPtrT> phi_bb87_14;
  TNode<IntPtrT> phi_bb87_15;
  TNode<Object> phi_bb87_16;
  TNode<IntPtrT> phi_bb87_17;
  TNode<IntPtrT> phi_bb87_20;
  TNode<BoolT> tmp110;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_13, &phi_bb87_14, &phi_bb87_15, &phi_bb87_16, &phi_bb87_17, &phi_bb87_20);
    tmp110 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb87_20}, TNode<IntPtrT>{tmp108});
    ca_.Branch(tmp110, &block93, std::vector<compiler::Node*>{phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_17, phi_bb87_20}, &block94, std::vector<compiler::Node*>{phi_bb87_13, phi_bb87_14, phi_bb87_15, phi_bb87_16, phi_bb87_17, phi_bb87_20});
  }

  TNode<Object> phi_bb93_13;
  TNode<IntPtrT> phi_bb93_14;
  TNode<IntPtrT> phi_bb93_15;
  TNode<Object> phi_bb93_16;
  TNode<IntPtrT> phi_bb93_17;
  TNode<IntPtrT> phi_bb93_20;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_13, &phi_bb93_14, &phi_bb93_15, &phi_bb93_16, &phi_bb93_17, &phi_bb93_20);
    ca_.Goto(&block88, phi_bb93_13, phi_bb93_14, phi_bb93_15, phi_bb93_16, phi_bb93_17, phi_bb93_20);
  }

  TNode<Object> phi_bb94_13;
  TNode<IntPtrT> phi_bb94_14;
  TNode<IntPtrT> phi_bb94_15;
  TNode<Object> phi_bb94_16;
  TNode<IntPtrT> phi_bb94_17;
  TNode<IntPtrT> phi_bb94_20;
  TNode<Object> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<Object> tmp115;
  TNode<IntPtrT> tmp116;
  TNode<IntPtrT> tmp117;
  TNode<IntPtrT> tmp118;
  TNode<Uint16T> tmp119;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_13, &phi_bb94_14, &phi_bb94_15, &phi_bb94_16, &phi_bb94_17, &phi_bb94_20);
    std::tie(tmp111, tmp112) = NewReference_char16_0(state_, TNode<Object>{tmp21}, TNode<IntPtrT>{phi_bb94_20}).Flatten();
    tmp113 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb94_20}, TNode<IntPtrT>{tmp113});
    std::tie(tmp115, tmp116) = NewReference_char16_0(state_, TNode<Object>{phi_bb94_16}, TNode<IntPtrT>{phi_bb94_17}).Flatten();
    tmp117 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp118 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb94_17}, TNode<IntPtrT>{tmp117});
    tmp119 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp115, tmp116});
    CodeStubAssembler(state_).StoreReference<Uint16T>(CodeStubAssembler::Reference{tmp111, tmp112}, tmp119);
    ca_.Goto(&block89, phi_bb94_13, phi_bb94_14, phi_bb94_15, phi_bb94_16, tmp118, tmp114);
  }

  TNode<Object> phi_bb88_13;
  TNode<IntPtrT> phi_bb88_14;
  TNode<IntPtrT> phi_bb88_15;
  TNode<Object> phi_bb88_16;
  TNode<IntPtrT> phi_bb88_17;
  TNode<IntPtrT> phi_bb88_20;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_13, &phi_bb88_14, &phi_bb88_15, &phi_bb88_16, &phi_bb88_17, &phi_bb88_20);
    ca_.Goto(&block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    arguments.PopAndReturn(tmp18);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kInvalidArgument);
  }
}

TF_BUILTIN(WasmStringNewWtf8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kSize);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kMemory);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kUtf8Variant);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter0);
    tmp3 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter1);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringNewWtf8, tmp1, tmp0, parameter2, parameter3, tmp2, tmp3);
  }
}

TF_BUILTIN(WasmStringNewWtf8Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kEnd);
  USE(parameter1);
  TNode<WasmArray> parameter2 = UncheckedParameter<WasmArray>(Descriptor::kArray);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kUtf8Variant);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp2 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter2, tmp1});
    tmp3 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp2}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{parameter1}, TNode<Uint32T>{parameter0});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp6 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringNewWtf8Array, tmp0, parameter3, parameter2, tmp5, tmp6);
  }

  TNode<Smi> tmp7;
  TNode<Object> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayOutOfBounds);
    tmp8 = CodeStubAssembler(state_).CallRuntime(Runtime::kThrowWasmError, tmp0, tmp7); 
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(WasmStringNewWtf16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kMemory);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kSize);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Smi> tmp2;
  TNode<Number> tmp3;
  TNode<Number> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    tmp3 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter1);
    tmp4 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter2);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringNewWtf16, tmp1, tmp0, tmp2, tmp3, tmp4);
  }
}

TF_BUILTIN(WasmStringNewWtf16Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<WasmArray> parameter0 = UncheckedParameter<WasmArray>(Descriptor::kArray);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kEnd);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp2 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp1});
    tmp3 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp2}, TNode<Uint32T>{parameter2});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<BoolT> tmp4;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{parameter2}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp4, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2);
  }

  TNode<Smi> tmp5;
  TNode<Smi> tmp6;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp5 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter1});
    tmp6 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter2});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringNewWtf16Array, tmp0, parameter0, tmp5, tmp6);
  }

  TNode<Smi> tmp7;
  TNode<Object> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayOutOfBounds);
    tmp8 = CodeStubAssembler(state_).CallRuntime(Runtime::kThrowWasmError, tmp0, tmp7); 
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(WasmStringConst, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kIndex);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Smi> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{parameter0});
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringConst, tmp1, tmp0, tmp2);
  }
}

TF_BUILTIN(WasmStringMeasureUtf8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<Number> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Int32T> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    tmp1 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringMeasureUtf8, tmp0, parameter0)); 
    tmp2 = CodeStubAssembler(state_).ChangeNumberToUint32(TNode<Number>{tmp1});
    tmp3 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(WasmStringMeasureWtf8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  TNode<Number> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Int32T> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    tmp1 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringMeasureWtf8, tmp0, parameter0)); 
    tmp2 = CodeStubAssembler(state_).ChangeNumberToUint32(TNode<Number>{tmp1});
    tmp3 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(WasmStringEncodeWtf8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kMemory);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kUtf8Variant);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  TNode<Uint32T> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter1);
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringEncodeWtf8, tmp1, tmp0, parameter2, parameter3, parameter0, tmp2)); 
    tmp4 = CodeStubAssembler(state_).ChangeNumberToUint32(TNode<Number>{tmp3});
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(WasmStringEncodeWtf8Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  TNode<WasmArray> parameter1 = UncheckedParameter<WasmArray>(Descriptor::kArray);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedParameter<Smi>(Descriptor::kUtf8Variant);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Number> tmp3;
  TNode<Uint32T> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter2);
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringEncodeWtf8Array, tmp1, parameter3, parameter0, parameter1, tmp2)); 
    tmp4 = CodeStubAssembler(state_).ChangeNumberToUint32(TNode<Number>{tmp3});
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(WasmStringEncodeWtf16, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedParameter<Smi>(Descriptor::kMemory);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<NativeContext> tmp1;
  TNode<Number> tmp2;
  TNode<Smi> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Int32T> tmp5;
  TNode<Smi> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Int32T> tmp9;
  TNode<Uint32T> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp2 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter1);
    tmp3 = SmiConstant_0(state_, IntegerLiteral(false, 0x0ull));
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp5 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp4});
    tmp6 = CodeStubAssembler(state_).SmiFromInt32(TNode<Int32T>{tmp5});
    tmp7 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringEncodeWtf16, tmp1, tmp0, parameter2, parameter0, tmp2, tmp3, tmp6); 
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp9 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp8});
    tmp10 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp9});
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(WasmStringEncodeWtf16Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  TNode<WasmArray> parameter1 = UncheckedParameter<WasmArray>(Descriptor::kArray);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, String> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, String> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, IntPtrT, Object, IntPtrT, IntPtrT> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Uint32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp1 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter1, tmp0});
    tmp2 = CodeStubAssembler(state_).Uint32GreaterThan(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Int32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp4 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter1, tmp3});
    tmp5 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{tmp4}, TNode<Uint32T>{parameter2});
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp6});
    tmp8 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp7});
    tmp9 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block2);
  }

  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Int32T> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Object> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Int32T> tmp22;
  TNode<IntPtrT> tmp23;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp10 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{parameter2});
    tmp11 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp10});
    tmp12 = FromConstexpr_intptr_constexpr_int32_0(state_, WasmArray::kHeaderSize);
    tmp13 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp11});
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp15 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp14});
    tmp16 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp15});
    std::tie(tmp17, tmp18, tmp19) = NewMutableSlice_char16_0(state_, TNode<Object>{parameter1}, TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp16}).Flatten();
    tmp20 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp21 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp22 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp21});
    tmp23 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp22});
    ca_.Goto(&block13, parameter0, tmp20);
  }

  TNode<String> phi_bb13_9;
  TNode<IntPtrT> phi_bb13_10;
  TNode<BoolT> tmp24;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_9, &phi_bb13_10);
    tmp24 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp24, &block11, std::vector<compiler::Node*>{phi_bb13_9, phi_bb13_10}, &block12, std::vector<compiler::Node*>{phi_bb13_9, phi_bb13_10});
  }

  TNode<String> phi_bb11_9;
  TNode<IntPtrT> phi_bb11_10;
  TNode<SeqOneByteString> tmp25;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_9, &phi_bb11_10);
    compiler::CodeAssemblerLabel label26(&ca_);
    tmp25 = Cast_SeqOneByteString_1(state_, TNode<String>{phi_bb11_9}, &label26);
    ca_.Goto(&block16, phi_bb11_9, phi_bb11_10, phi_bb11_9, phi_bb11_9);
    if (label26.is_used()) {
      ca_.Bind(&label26);
      ca_.Goto(&block17, phi_bb11_9, phi_bb11_10, phi_bb11_9, phi_bb11_9);
    }
  }

  TNode<String> phi_bb17_9;
  TNode<IntPtrT> phi_bb17_10;
  TNode<String> phi_bb17_12;
  TNode<String> phi_bb17_13;
  TNode<SeqTwoByteString> tmp27;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_9, &phi_bb17_10, &phi_bb17_12, &phi_bb17_13);
    compiler::CodeAssemblerLabel label28(&ca_);
    tmp27 = Cast_SeqTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb17_12)}, &label28);
    ca_.Goto(&block24, phi_bb17_9, phi_bb17_10, phi_bb17_12);
    if (label28.is_used()) {
      ca_.Bind(&label28);
      ca_.Goto(&block25, phi_bb17_9, phi_bb17_10, phi_bb17_12);
    }
  }

  TNode<String> phi_bb16_9;
  TNode<IntPtrT> phi_bb16_10;
  TNode<String> phi_bb16_12;
  TNode<String> phi_bb16_13;
  TNode<Object> tmp29;
  TNode<IntPtrT> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_9, &phi_bb16_10, &phi_bb16_12, &phi_bb16_13);
    std::tie(tmp29, tmp30, tmp31) = FieldSliceSeqOneByteStringChars_0(state_, TNode<SeqOneByteString>{tmp25}).Flatten();
    compiler::CodeAssemblerLabel label35(&ca_);
    std::tie(tmp32, tmp33, tmp34) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp29}, TNode<IntPtrT>{tmp30}, TNode<IntPtrT>{tmp31}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb16_10}, TNode<IntPtrT>{tmp23}, &label35).Flatten();
    ca_.Goto(&block20, phi_bb16_9, phi_bb16_10, phi_bb16_12, phi_bb16_10);
    if (label35.is_used()) {
      ca_.Bind(&label35);
      ca_.Goto(&block21, phi_bb16_9, phi_bb16_10, phi_bb16_12, phi_bb16_10);
    }
  }

  TNode<String> phi_bb21_9;
  TNode<IntPtrT> phi_bb21_10;
  TNode<String> phi_bb21_12;
  TNode<IntPtrT> phi_bb21_17;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_9, &phi_bb21_10, &phi_bb21_12, &phi_bb21_17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb20_9;
  TNode<IntPtrT> phi_bb20_10;
  TNode<String> phi_bb20_12;
  TNode<IntPtrT> phi_bb20_17;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_9, &phi_bb20_10, &phi_bb20_12, &phi_bb20_17);
    ca_.Goto(&block10, tmp32, tmp33, tmp34);
  }

  TNode<String> phi_bb25_9;
  TNode<IntPtrT> phi_bb25_10;
  TNode<String> phi_bb25_12;
  TNode<ThinString> tmp36;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_9, &phi_bb25_10, &phi_bb25_12);
    compiler::CodeAssemblerLabel label37(&ca_);
    tmp36 = Cast_ThinString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb25_12)}, &label37);
    ca_.Goto(&block32, phi_bb25_9, phi_bb25_10, phi_bb25_12);
    if (label37.is_used()) {
      ca_.Bind(&label37);
      ca_.Goto(&block33, phi_bb25_9, phi_bb25_10, phi_bb25_12);
    }
  }

  TNode<String> phi_bb24_9;
  TNode<IntPtrT> phi_bb24_10;
  TNode<String> phi_bb24_12;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<Object> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_9, &phi_bb24_10, &phi_bb24_12);
    std::tie(tmp38, tmp39, tmp40) = FieldSliceSeqTwoByteStringChars_0(state_, TNode<SeqTwoByteString>{tmp27}).Flatten();
    compiler::CodeAssemblerLabel label44(&ca_);
    std::tie(tmp41, tmp42, tmp43) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp38}, TNode<IntPtrT>{tmp39}, TNode<IntPtrT>{tmp40}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb24_10}, TNode<IntPtrT>{tmp23}, &label44).Flatten();
    ca_.Goto(&block28, phi_bb24_9, phi_bb24_10, phi_bb24_12, phi_bb24_10);
    if (label44.is_used()) {
      ca_.Bind(&label44);
      ca_.Goto(&block29, phi_bb24_9, phi_bb24_10, phi_bb24_12, phi_bb24_10);
    }
  }

  TNode<String> phi_bb29_9;
  TNode<IntPtrT> phi_bb29_10;
  TNode<String> phi_bb29_12;
  TNode<IntPtrT> phi_bb29_17;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_9, &phi_bb29_10, &phi_bb29_12, &phi_bb29_17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb28_9;
  TNode<IntPtrT> phi_bb28_10;
  TNode<String> phi_bb28_12;
  TNode<IntPtrT> phi_bb28_17;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_9, &phi_bb28_10, &phi_bb28_12, &phi_bb28_17);
    ca_.Goto(&block8, tmp41, tmp42, tmp43);
  }

  TNode<String> phi_bb33_9;
  TNode<IntPtrT> phi_bb33_10;
  TNode<String> phi_bb33_12;
  TNode<ConsString> tmp45;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_9, &phi_bb33_10, &phi_bb33_12);
    compiler::CodeAssemblerLabel label46(&ca_);
    tmp45 = Cast_ConsString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb33_12)}, &label46);
    ca_.Goto(&block36, phi_bb33_9, phi_bb33_10, phi_bb33_12);
    if (label46.is_used()) {
      ca_.Bind(&label46);
      ca_.Goto(&block37, phi_bb33_9, phi_bb33_10, phi_bb33_12);
    }
  }

  TNode<String> phi_bb32_9;
  TNode<IntPtrT> phi_bb32_10;
  TNode<String> phi_bb32_12;
  TNode<IntPtrT> tmp47;
  TNode<String> tmp48;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_9, &phi_bb32_10, &phi_bb32_12);
    tmp47 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp48 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp36, tmp47});
    ca_.Goto(&block30, tmp48, phi_bb32_10, phi_bb32_12);
  }

  TNode<String> phi_bb37_9;
  TNode<IntPtrT> phi_bb37_10;
  TNode<String> phi_bb37_12;
  TNode<SlicedString> tmp49;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_9, &phi_bb37_10, &phi_bb37_12);
    compiler::CodeAssemblerLabel label50(&ca_);
    tmp49 = Cast_SlicedString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb37_12)}, &label50);
    ca_.Goto(&block40, phi_bb37_9, phi_bb37_10, phi_bb37_12);
    if (label50.is_used()) {
      ca_.Bind(&label50);
      ca_.Goto(&block41, phi_bb37_9, phi_bb37_10, phi_bb37_12);
    }
  }

  TNode<String> phi_bb36_9;
  TNode<IntPtrT> phi_bb36_10;
  TNode<String> phi_bb36_12;
  TNode<String> tmp51;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_9, &phi_bb36_10, &phi_bb36_12);
    tmp51 = Flatten_1(state_, TNode<ConsString>{tmp45});
    ca_.Goto(&block34, tmp51, phi_bb36_10, phi_bb36_12);
  }

  TNode<String> phi_bb41_9;
  TNode<IntPtrT> phi_bb41_10;
  TNode<String> phi_bb41_12;
  TNode<ExternalOneByteString> tmp52;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_9, &phi_bb41_10, &phi_bb41_12);
    compiler::CodeAssemblerLabel label53(&ca_);
    tmp52 = Cast_ExternalOneByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb41_12)}, &label53);
    ca_.Goto(&block44, phi_bb41_9, phi_bb41_10, phi_bb41_12);
    if (label53.is_used()) {
      ca_.Bind(&label53);
      ca_.Goto(&block45, phi_bb41_9, phi_bb41_10, phi_bb41_12);
    }
  }

  TNode<String> phi_bb40_9;
  TNode<IntPtrT> phi_bb40_10;
  TNode<String> phi_bb40_12;
  TNode<IntPtrT> tmp54;
  TNode<Smi> tmp55;
  TNode<IntPtrT> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<String> tmp59;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_9, &phi_bb40_10, &phi_bb40_12);
    tmp54 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp55 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp49, tmp54});
    tmp56 = Convert_intptr_Smi_0(state_, TNode<Smi>{tmp55});
    tmp57 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb40_10}, TNode<IntPtrT>{tmp56});
    tmp58 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp59 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp49, tmp58});
    ca_.Goto(&block34, tmp59, tmp57, phi_bb40_12);
  }

  TNode<String> phi_bb45_9;
  TNode<IntPtrT> phi_bb45_10;
  TNode<String> phi_bb45_12;
  TNode<ExternalTwoByteString> tmp60;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_9, &phi_bb45_10, &phi_bb45_12);
    compiler::CodeAssemblerLabel label61(&ca_);
    tmp60 = Cast_ExternalTwoByteString_1(state_, TNode<String>{ca_.UncheckedCast<String>(phi_bb45_12)}, &label61);
    ca_.Goto(&block52, phi_bb45_9, phi_bb45_10, phi_bb45_12);
    if (label61.is_used()) {
      ca_.Bind(&label61);
      ca_.Goto(&block53, phi_bb45_9, phi_bb45_10, phi_bb45_12);
    }
  }

  TNode<String> phi_bb44_9;
  TNode<IntPtrT> phi_bb44_10;
  TNode<String> phi_bb44_12;
  TNode<RawPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<Int32T> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<Object> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<Object> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<IntPtrT> tmp71;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_9, &phi_bb44_10, &phi_bb44_12);
    tmp62 = Method_ExternalOneByteString_GetChars_0(state_, TNode<ExternalOneByteString>{tmp52});
    tmp63 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp64 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp52, tmp63});
    tmp65 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp64});
    std::tie(tmp66, tmp67, tmp68) = NewOffHeapConstSlice_char8_0(state_, TNode<RawPtrT>{tmp62}, TNode<IntPtrT>{tmp65}).Flatten();
    compiler::CodeAssemblerLabel label72(&ca_);
    std::tie(tmp69, tmp70, tmp71) = Subslice_char8_0(state_, TorqueStructSlice_char8_ConstReference_char8_0{TNode<Object>{tmp66}, TNode<IntPtrT>{tmp67}, TNode<IntPtrT>{tmp68}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb44_10}, TNode<IntPtrT>{tmp23}, &label72).Flatten();
    ca_.Goto(&block48, phi_bb44_9, phi_bb44_10, phi_bb44_12, phi_bb44_10);
    if (label72.is_used()) {
      ca_.Bind(&label72);
      ca_.Goto(&block49, phi_bb44_9, phi_bb44_10, phi_bb44_12, phi_bb44_10);
    }
  }

  TNode<String> phi_bb49_9;
  TNode<IntPtrT> phi_bb49_10;
  TNode<String> phi_bb49_12;
  TNode<IntPtrT> phi_bb49_20;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_9, &phi_bb49_10, &phi_bb49_12, &phi_bb49_20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb48_9;
  TNode<IntPtrT> phi_bb48_10;
  TNode<String> phi_bb48_12;
  TNode<IntPtrT> phi_bb48_20;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_9, &phi_bb48_10, &phi_bb48_12, &phi_bb48_20);
    ca_.Goto(&block10, tmp69, tmp70, tmp71);
  }

  TNode<String> phi_bb53_9;
  TNode<IntPtrT> phi_bb53_10;
  TNode<String> phi_bb53_12;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_9, &phi_bb53_10, &phi_bb53_12);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb52_9;
  TNode<IntPtrT> phi_bb52_10;
  TNode<String> phi_bb52_12;
  TNode<RawPtrT> tmp73;
  TNode<IntPtrT> tmp74;
  TNode<Int32T> tmp75;
  TNode<IntPtrT> tmp76;
  TNode<Object> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<Object> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_9, &phi_bb52_10, &phi_bb52_12);
    tmp73 = Method_ExternalTwoByteString_GetChars_0(state_, TNode<ExternalTwoByteString>{tmp60});
    tmp74 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp75 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp60, tmp74});
    tmp76 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp75});
    std::tie(tmp77, tmp78, tmp79) = NewOffHeapConstSlice_char16_0(state_, TNode<RawPtrT>{tmp73}, TNode<IntPtrT>{tmp76}).Flatten();
    compiler::CodeAssemblerLabel label83(&ca_);
    std::tie(tmp80, tmp81, tmp82) = Subslice_char16_0(state_, TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp77}, TNode<IntPtrT>{tmp78}, TNode<IntPtrT>{tmp79}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{phi_bb52_10}, TNode<IntPtrT>{tmp23}, &label83).Flatten();
    ca_.Goto(&block56, phi_bb52_9, phi_bb52_10, phi_bb52_12, phi_bb52_10);
    if (label83.is_used()) {
      ca_.Bind(&label83);
      ca_.Goto(&block57, phi_bb52_9, phi_bb52_10, phi_bb52_12, phi_bb52_10);
    }
  }

  TNode<String> phi_bb57_9;
  TNode<IntPtrT> phi_bb57_10;
  TNode<String> phi_bb57_12;
  TNode<IntPtrT> phi_bb57_20;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_9, &phi_bb57_10, &phi_bb57_12, &phi_bb57_20);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<String> phi_bb56_9;
  TNode<IntPtrT> phi_bb56_10;
  TNode<String> phi_bb56_12;
  TNode<IntPtrT> phi_bb56_20;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_9, &phi_bb56_10, &phi_bb56_12, &phi_bb56_20);
    ca_.Goto(&block8, tmp80, tmp81, tmp82);
  }

  TNode<String> phi_bb34_9;
  TNode<IntPtrT> phi_bb34_10;
  TNode<String> phi_bb34_12;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_9, &phi_bb34_10, &phi_bb34_12);
    ca_.Goto(&block30, phi_bb34_9, phi_bb34_10, phi_bb34_12);
  }

  TNode<String> phi_bb30_9;
  TNode<IntPtrT> phi_bb30_10;
  TNode<String> phi_bb30_12;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_9, &phi_bb30_10, &phi_bb30_12);
    ca_.Goto(&block13, phi_bb30_9, phi_bb30_10);
  }

  TNode<String> phi_bb12_9;
  TNode<IntPtrT> phi_bb12_10;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_9, &phi_bb12_10);
    VerifiedUnreachable_0(state_);
  }

  TNode<Object> phi_bb10_7;
  TNode<IntPtrT> phi_bb10_8;
  TNode<IntPtrT> phi_bb10_9;
  TNode<IntPtrT> tmp84;
  TNode<IntPtrT> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<IntPtrT> tmp87;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_7, &phi_bb10_8, &phi_bb10_9);
    tmp84 = TimesSizeOf_char8_0(state_, TNode<IntPtrT>{phi_bb10_9});
    tmp85 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb10_8}, TNode<IntPtrT>{tmp84});
    tmp86 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp19});
    tmp87 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp86});
    ca_.Goto(&block62, phi_bb10_7, phi_bb10_8, phi_bb10_9, phi_bb10_7, phi_bb10_8, tmp18);
  }

  TNode<Object> phi_bb62_7;
  TNode<IntPtrT> phi_bb62_8;
  TNode<IntPtrT> phi_bb62_9;
  TNode<Object> phi_bb62_10;
  TNode<IntPtrT> phi_bb62_11;
  TNode<IntPtrT> phi_bb62_14;
  TNode<BoolT> tmp88;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_7, &phi_bb62_8, &phi_bb62_9, &phi_bb62_10, &phi_bb62_11, &phi_bb62_14);
    tmp88 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp88, &block60, std::vector<compiler::Node*>{phi_bb62_7, phi_bb62_8, phi_bb62_9, phi_bb62_10, phi_bb62_11, phi_bb62_14}, &block61, std::vector<compiler::Node*>{phi_bb62_7, phi_bb62_8, phi_bb62_9, phi_bb62_10, phi_bb62_11, phi_bb62_14});
  }

  TNode<Object> phi_bb60_7;
  TNode<IntPtrT> phi_bb60_8;
  TNode<IntPtrT> phi_bb60_9;
  TNode<Object> phi_bb60_10;
  TNode<IntPtrT> phi_bb60_11;
  TNode<IntPtrT> phi_bb60_14;
  TNode<BoolT> tmp89;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7, &phi_bb60_8, &phi_bb60_9, &phi_bb60_10, &phi_bb60_11, &phi_bb60_14);
    tmp89 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb60_14}, TNode<IntPtrT>{tmp87});
    ca_.Branch(tmp89, &block66, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_8, phi_bb60_9, phi_bb60_10, phi_bb60_11, phi_bb60_14}, &block67, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_8, phi_bb60_9, phi_bb60_10, phi_bb60_11, phi_bb60_14});
  }

  TNode<Object> phi_bb66_7;
  TNode<IntPtrT> phi_bb66_8;
  TNode<IntPtrT> phi_bb66_9;
  TNode<Object> phi_bb66_10;
  TNode<IntPtrT> phi_bb66_11;
  TNode<IntPtrT> phi_bb66_14;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_7, &phi_bb66_8, &phi_bb66_9, &phi_bb66_10, &phi_bb66_11, &phi_bb66_14);
    ca_.Goto(&block61, phi_bb66_7, phi_bb66_8, phi_bb66_9, phi_bb66_10, phi_bb66_11, phi_bb66_14);
  }

  TNode<Object> phi_bb67_7;
  TNode<IntPtrT> phi_bb67_8;
  TNode<IntPtrT> phi_bb67_9;
  TNode<Object> phi_bb67_10;
  TNode<IntPtrT> phi_bb67_11;
  TNode<IntPtrT> phi_bb67_14;
  TNode<Object> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<IntPtrT> tmp93;
  TNode<Object> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<IntPtrT> tmp96;
  TNode<IntPtrT> tmp97;
  TNode<Uint8T> tmp98;
  TNode<Uint16T> tmp99;
  TNode<Uint16T> tmp100;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_7, &phi_bb67_8, &phi_bb67_9, &phi_bb67_10, &phi_bb67_11, &phi_bb67_14);
    std::tie(tmp90, tmp91) = NewReference_char16_0(state_, TNode<Object>{tmp17}, TNode<IntPtrT>{phi_bb67_14}).Flatten();
    tmp92 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp93 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb67_14}, TNode<IntPtrT>{tmp92});
    std::tie(tmp94, tmp95) = NewReference_char8_0(state_, TNode<Object>{phi_bb67_10}, TNode<IntPtrT>{phi_bb67_11}).Flatten();
    tmp96 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt8Size);
    tmp97 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb67_11}, TNode<IntPtrT>{tmp96});
    tmp98 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp94, tmp95});
    tmp99 = Convert_uint16_char8_0(state_, TNode<Uint8T>{tmp98});
    tmp100 = (TNode<Uint16T>{tmp99});
    CodeStubAssembler(state_).StoreReference<Uint16T>(CodeStubAssembler::Reference{tmp90, tmp91}, tmp100);
    ca_.Goto(&block62, phi_bb67_7, phi_bb67_8, phi_bb67_9, phi_bb67_10, tmp97, tmp93);
  }

  TNode<Object> phi_bb61_7;
  TNode<IntPtrT> phi_bb61_8;
  TNode<IntPtrT> phi_bb61_9;
  TNode<Object> phi_bb61_10;
  TNode<IntPtrT> phi_bb61_11;
  TNode<IntPtrT> phi_bb61_14;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_7, &phi_bb61_8, &phi_bb61_9, &phi_bb61_10, &phi_bb61_11, &phi_bb61_14);
    ca_.Goto(&block7);
  }

  TNode<Object> phi_bb8_7;
  TNode<IntPtrT> phi_bb8_8;
  TNode<IntPtrT> phi_bb8_9;
  TNode<IntPtrT> tmp101;
  TNode<IntPtrT> tmp102;
  TNode<IntPtrT> tmp103;
  TNode<IntPtrT> tmp104;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_7, &phi_bb8_8, &phi_bb8_9);
    tmp101 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{phi_bb8_9});
    tmp102 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb8_8}, TNode<IntPtrT>{tmp101});
    tmp103 = TimesSizeOf_char16_0(state_, TNode<IntPtrT>{tmp19});
    tmp104 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp103});
    ca_.Goto(&block81, phi_bb8_7, phi_bb8_8, phi_bb8_9, phi_bb8_7, phi_bb8_8, tmp18);
  }

  TNode<Object> phi_bb81_7;
  TNode<IntPtrT> phi_bb81_8;
  TNode<IntPtrT> phi_bb81_9;
  TNode<Object> phi_bb81_10;
  TNode<IntPtrT> phi_bb81_11;
  TNode<IntPtrT> phi_bb81_14;
  TNode<BoolT> tmp105;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_7, &phi_bb81_8, &phi_bb81_9, &phi_bb81_10, &phi_bb81_11, &phi_bb81_14);
    tmp105 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Branch(tmp105, &block79, std::vector<compiler::Node*>{phi_bb81_7, phi_bb81_8, phi_bb81_9, phi_bb81_10, phi_bb81_11, phi_bb81_14}, &block80, std::vector<compiler::Node*>{phi_bb81_7, phi_bb81_8, phi_bb81_9, phi_bb81_10, phi_bb81_11, phi_bb81_14});
  }

  TNode<Object> phi_bb79_7;
  TNode<IntPtrT> phi_bb79_8;
  TNode<IntPtrT> phi_bb79_9;
  TNode<Object> phi_bb79_10;
  TNode<IntPtrT> phi_bb79_11;
  TNode<IntPtrT> phi_bb79_14;
  TNode<BoolT> tmp106;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_7, &phi_bb79_8, &phi_bb79_9, &phi_bb79_10, &phi_bb79_11, &phi_bb79_14);
    tmp106 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb79_14}, TNode<IntPtrT>{tmp104});
    ca_.Branch(tmp106, &block85, std::vector<compiler::Node*>{phi_bb79_7, phi_bb79_8, phi_bb79_9, phi_bb79_10, phi_bb79_11, phi_bb79_14}, &block86, std::vector<compiler::Node*>{phi_bb79_7, phi_bb79_8, phi_bb79_9, phi_bb79_10, phi_bb79_11, phi_bb79_14});
  }

  TNode<Object> phi_bb85_7;
  TNode<IntPtrT> phi_bb85_8;
  TNode<IntPtrT> phi_bb85_9;
  TNode<Object> phi_bb85_10;
  TNode<IntPtrT> phi_bb85_11;
  TNode<IntPtrT> phi_bb85_14;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_7, &phi_bb85_8, &phi_bb85_9, &phi_bb85_10, &phi_bb85_11, &phi_bb85_14);
    ca_.Goto(&block80, phi_bb85_7, phi_bb85_8, phi_bb85_9, phi_bb85_10, phi_bb85_11, phi_bb85_14);
  }

  TNode<Object> phi_bb86_7;
  TNode<IntPtrT> phi_bb86_8;
  TNode<IntPtrT> phi_bb86_9;
  TNode<Object> phi_bb86_10;
  TNode<IntPtrT> phi_bb86_11;
  TNode<IntPtrT> phi_bb86_14;
  TNode<Object> tmp107;
  TNode<IntPtrT> tmp108;
  TNode<IntPtrT> tmp109;
  TNode<IntPtrT> tmp110;
  TNode<Object> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<Uint16T> tmp115;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_7, &phi_bb86_8, &phi_bb86_9, &phi_bb86_10, &phi_bb86_11, &phi_bb86_14);
    std::tie(tmp107, tmp108) = NewReference_char16_0(state_, TNode<Object>{tmp17}, TNode<IntPtrT>{phi_bb86_14}).Flatten();
    tmp109 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp110 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb86_14}, TNode<IntPtrT>{tmp109});
    std::tie(tmp111, tmp112) = NewReference_char16_0(state_, TNode<Object>{phi_bb86_10}, TNode<IntPtrT>{phi_bb86_11}).Flatten();
    tmp113 = FromConstexpr_intptr_constexpr_int31_0(state_, kUInt16Size);
    tmp114 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb86_11}, TNode<IntPtrT>{tmp113});
    tmp115 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp111, tmp112});
    CodeStubAssembler(state_).StoreReference<Uint16T>(CodeStubAssembler::Reference{tmp107, tmp108}, tmp115);
    ca_.Goto(&block81, phi_bb86_7, phi_bb86_8, phi_bb86_9, phi_bb86_10, tmp114, tmp110);
  }

  TNode<Object> phi_bb80_7;
  TNode<IntPtrT> phi_bb80_8;
  TNode<IntPtrT> phi_bb80_9;
  TNode<Object> phi_bb80_10;
  TNode<IntPtrT> phi_bb80_11;
  TNode<IntPtrT> phi_bb80_14;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_7, &phi_bb80_8, &phi_bb80_9, &phi_bb80_10, &phi_bb80_11, &phi_bb80_14);
    ca_.Goto(&block7);
  }

  TNode<IntPtrT> tmp116;
  TNode<Int32T> tmp117;
  TNode<Uint32T> tmp118;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp116 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp117 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp116});
    tmp118 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp117});
    CodeStubAssembler(state_).Return(tmp118);
  }

  TNode<NativeContext> tmp119;
  TNode<Smi> tmp120;
  TNode<Object> tmp121;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp119 = LoadContextFromFrame_0(state_);
    tmp120 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapArrayOutOfBounds);
    tmp121 = CodeStubAssembler(state_).CallRuntime(Runtime::kThrowWasmError, tmp119, tmp120); 
    CodeStubAssembler(state_).Unreachable();
  }
}

TF_BUILTIN(WasmStringConcat, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kA);
  USE(parameter0);
  TNode<String> parameter1 = UncheckedParameter<String>(Descriptor::kB);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
   CodeStubAssembler(state_).TailCallBuiltin(Builtin::kStringAdd_CheckNone, tmp0, parameter0, parameter1);
  }
}

TF_BUILTIN(WasmStringEqual, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kA);
  USE(parameter0);
  TNode<String> parameter1 = UncheckedParameter<String>(Descriptor::kB);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).TaggedEqual(TNode<MaybeObject>{parameter0}, TNode<MaybeObject>{parameter1});
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp1;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp1 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp1);
  }

  TNode<IntPtrT> tmp2;
  TNode<Int32T> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Int32T> tmp5;
  TNode<BoolT> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp3 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp5 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter1, tmp4});
    tmp6 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp5});
    ca_.Branch(tmp6, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp7 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp7);
  }

  TNode<NativeContext> tmp8;
  TNode<Oddball> tmp9;
  TNode<Oddball> tmp10;
  TNode<BoolT> tmp11;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = LoadContextFromFrame_0(state_);
    tmp9 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringEqual, tmp8, parameter0, parameter1)); 
    tmp10 = True_0(state_);
    tmp11 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp9}, TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp12;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp12 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp12);
  }

  TNode<Int32T> tmp13;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp13 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp13);
  }
}

TF_BUILTIN(WasmStringIsUSVSequence, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kStr);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint16T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).LoadInstanceType(TNode<HeapObject>{parameter0});
    tmp1 = CodeStubAssembler(state_).IsOneByteStringInstanceType(TNode<Uint16T>{tmp0});
    ca_.Branch(tmp1, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp2;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp2 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp2);
  }

  TNode<NativeContext> tmp3;
  TNode<Number> tmp4;
  TNode<Uint32T> tmp5;
  TNode<Int32T> tmp6;
  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = LoadContextFromFrame_0(state_);
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringMeasureUtf8, tmp3, parameter0)); 
    tmp5 = CodeStubAssembler(state_).ChangeNumberToUint32(TNode<Number>{tmp4});
    tmp6 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp5});
    tmp7 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp8 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{tmp6}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp9;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp9 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp9);
  }

  TNode<Int32T> tmp10;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp10 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(WasmStringAsWtf8, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kStr);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<NativeContext> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = LoadContextFromFrame_0(state_);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringAsWtf8, tmp0, parameter0);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=939&c=1
TNode<BoolT> IsWtf8CodepointStart_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_view, TNode<Uint32T> p_pos) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceByteArrayBytes_0(state_, TNode<ByteArray>{p_view}).Flatten();
    tmp3 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{p_pos});
    tmp4 = Convert_intptr_uintptr_0(state_, TNode<UintPtrT>{tmp3});
    tmp5 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp4});
    tmp6 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp7 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp5}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp7, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Uint8T> tmp12;
  TNode<Uint32T> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<BoolT> tmp16;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp8 = TimesSizeOf_uint8_0(state_, TNode<IntPtrT>{tmp4});
    tmp9 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp8});
    std::tie(tmp10, tmp11) = NewReference_uint8_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp9}).Flatten();
    tmp12 = CodeStubAssembler(state_).LoadReference<Uint8T>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp13 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xc0ull));
    tmp14 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp12}, TNode<Uint32T>{tmp13});
    tmp15 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x80ull));
    tmp16 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp15});
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TNode<BoolT>{tmp16};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=944&c=1
TNode<Uint32T> AlignWtf8PositionForward_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_view, TNode<Uint32T> p_pos) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Smi> tmp1;
  TNode<Int32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{p_view, tmp0});
    tmp2 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp1});
    tmp3 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp2});
    tmp4 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp3});
    ca_.Branch(tmp4, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block1, tmp3);
  }

  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp5 = IsWtf8CodepointStart_0(state_, TNode<ByteArray>{p_view}, TNode<Uint32T>{p_pos});
    ca_.Branch(tmp5, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block1, p_pos);
  }

  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<BoolT> tmp8;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp6 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp7 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp6});
    tmp8 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp3});
    ca_.Branch(tmp8, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block1, tmp3);
  }

  TNode<Uint32T> tmp9;
  TNode<Uint32T> tmp10;
  TNode<BoolT> tmp11;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp9 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp10 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp9});
    tmp11 = IsWtf8CodepointStart_0(state_, TNode<ByteArray>{p_view}, TNode<Uint32T>{tmp10});
    ca_.Branch(tmp11, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp12;
  TNode<Uint32T> tmp13;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp12 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp12});
    ca_.Goto(&block1, tmp13);
  }

  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<BoolT> tmp16;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp14 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp15 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp14});
    tmp16 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp15}, TNode<Uint32T>{tmp3});
    ca_.Branch(tmp16, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.Goto(&block1, tmp3);
  }

  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp17 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp18 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp17});
    tmp19 = IsWtf8CodepointStart_0(state_, TNode<ByteArray>{p_view}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp20;
  TNode<Uint32T> tmp21;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp20 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp21 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp20});
    ca_.Goto(&block1, tmp21);
  }

  TNode<Uint32T> tmp22;
  TNode<Uint32T> tmp23;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp22 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp23 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp22});
    ca_.Goto(&block1, tmp23);
  }

  TNode<Uint32T> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block14, phi_bb1_2);
  }

  TNode<Uint32T> phi_bb14_2;
    ca_.Bind(&block14, &phi_bb14_2);
  return TNode<Uint32T>{phi_bb14_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=961&c=1
TNode<Uint32T> AlignWtf8PositionBackward_0(compiler::CodeAssemblerState* state_, TNode<ByteArray> p_view, TNode<Uint32T> p_pos) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = IsWtf8CodepointStart_0(state_, TNode<ByteArray>{p_view}, TNode<Uint32T>{p_pos});
    ca_.Branch(tmp0, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block1, p_pos);
  }

  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp1 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp2 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp1});
    tmp3 = IsWtf8CodepointStart_0(state_, TNode<ByteArray>{p_view}, TNode<Uint32T>{tmp2});
    ca_.Branch(tmp3, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp4 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp4});
    ca_.Goto(&block1, tmp5);
  }

  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<BoolT> tmp8;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp6 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp7 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp6});
    tmp8 = IsWtf8CodepointStart_0(state_, TNode<ByteArray>{p_view}, TNode<Uint32T>{tmp7});
    ca_.Branch(tmp8, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp9;
  TNode<Uint32T> tmp10;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp9 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp10 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp9});
    ca_.Goto(&block1, tmp10);
  }

  TNode<Uint32T> tmp11;
  TNode<Uint32T> tmp12;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp11 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x3ull));
    tmp12 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{p_pos}, TNode<Uint32T>{tmp11});
    ca_.Goto(&block1, tmp12);
  }

  TNode<Uint32T> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block8, phi_bb1_2);
  }

  TNode<Uint32T> phi_bb8_2;
    ca_.Bind(&block8, &phi_bb8_2);
  return TNode<Uint32T>{phi_bb8_2};
}

TF_BUILTIN(WasmStringViewWtf8Advance, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<ByteArray> parameter0 = UncheckedParameter<ByteArray>(Descriptor::kView);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kPos);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kBytes);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = AlignWtf8PositionForward_0(state_, TNode<ByteArray>{parameter0}, TNode<Uint32T>{parameter1});
    tmp1 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp2 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp2, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    CodeStubAssembler(state_).Return(tmp0);
  }

  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<Int32T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<Uint32T> tmp7;
  TNode<BoolT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{parameter0, tmp3});
    tmp5 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp4});
    tmp6 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp5});
    tmp7 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{tmp6}, TNode<Uint32T>{tmp0});
    tmp8 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp7});
    ca_.Branch(tmp8, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<Uint32T> tmp9;
  TNode<Uint32T> tmp10;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp9 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp0}, TNode<Uint32T>{parameter2});
    tmp10 = AlignWtf8PositionBackward_0(state_, TNode<ByteArray>{parameter0}, TNode<Uint32T>{tmp9});
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(WasmStringViewWtf8Encode, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kAddr);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kPos);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kBytes);
  USE(parameter2);
  TNode<ByteArray> parameter3 = UncheckedParameter<ByteArray>(Descriptor::kView);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kMemory);
  USE(parameter4);
  TNode<Smi> parameter5 = UncheckedParameter<Smi>(Descriptor::kUtf8Variant);
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<WasmInstanceObject> tmp3;
  TNode<NativeContext> tmp4;
  TNode<Number> tmp5;
  TNode<Number> tmp6;
  TNode<Number> tmp7;
  TNode<Object> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<Uint32T> tmp10;
  TNode<UintPtrT> tmp11;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = ca_.CallStub<Uint32T>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmStringViewWtf8Advance), TNode<Object>(), parameter3, parameter1, tmp0);
    tmp2 = ca_.CallStub<Uint32T>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmStringViewWtf8Advance), TNode<Object>(), parameter3, tmp1, parameter2);
    tmp3 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp4 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp3});
    tmp5 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter0);
    tmp6 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), tmp1);
    tmp7 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), tmp2);
    tmp8 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringViewWtf8Encode, tmp4, tmp3, parameter5, parameter3, tmp5, tmp6, tmp7); 
    tmp9 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp2});
    tmp10 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp1});
    tmp11 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp10});
    CodeStubAssembler(state_).Return(tmp9, tmp11);
  }
}

TF_BUILTIN(WasmStringViewWtf8Slice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<ByteArray> parameter0 = UncheckedParameter<ByteArray>(Descriptor::kView);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kEnd);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = ca_.CallStub<Uint32T>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmStringViewWtf8Advance), TNode<Object>(), parameter0, parameter1, tmp0);
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = ca_.CallStub<Uint32T>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmStringViewWtf8Advance), TNode<Object>(), parameter0, parameter2, tmp2);
    tmp4 = CodeStubAssembler(state_).Uint32LessThanOrEqual(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp1});
    ca_.Branch(tmp4, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp5;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp5 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp5);
  }

  TNode<NativeContext> tmp6;
  TNode<Number> tmp7;
  TNode<Number> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp6 = LoadContextFromFrame_0(state_);
    tmp7 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), tmp1);
    tmp8 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), tmp3);
    CodeStubAssembler(state_).TailCallRuntime(Runtime::kWasmStringViewWtf8Slice, tmp6, parameter0, tmp7, tmp8);
  }
}

TF_BUILTIN(WasmStringViewWtf16GetCodeUnit, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp1});
    tmp3 = CodeStubAssembler(state_).Uint32LessThanOrEqual(TNode<Uint32T>{tmp2}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp3, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<NativeContext> tmp4;
  TNode<Smi> tmp5;
  TNode<Object> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = LoadContextFromFrame_0(state_);
    tmp5 = CodeStubAssembler(state_).SmiConstant(MessageTemplate::kWasmTrapStringOffsetOutOfBounds);
    tmp6 = CodeStubAssembler(state_).CallRuntime(Runtime::kThrowWasmError, tmp4, tmp5); 
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<UintPtrT> tmp7;
  TNode<Uint16T> tmp8;
  TNode<Uint32T> tmp9;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{parameter1});
    tmp8 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{parameter0}, TNode<UintPtrT>{tmp7});
    tmp9 = Convert_uint32_char16_0(state_, TNode<Uint16T>{tmp8});
    CodeStubAssembler(state_).Return(tmp9);
  }
}

TF_BUILTIN(WasmStringViewWtf16Encode, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Uint32T> parameter0 = UncheckedParameter<Uint32T>(Descriptor::kOffset);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kLength);
  USE(parameter2);
  TNode<String> parameter3 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter3);
  TNode<Smi> parameter4 = UncheckedParameter<Smi>(Descriptor::kMemory);
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInstanceObject> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Int32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = WasmBuiltinsAssembler(state_).LoadInstanceFromFrame();
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp2 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter3, tmp1});
    tmp3 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp2});
    tmp4 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{parameter1}, TNode<Uint32T>{tmp3});
    ca_.Branch(tmp4, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block3, parameter1);
  }

  TNode<IntPtrT> tmp5;
  TNode<Int32T> tmp6;
  TNode<Uint32T> tmp7;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp6 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter3, tmp5});
    tmp7 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp6});
    ca_.Goto(&block3, tmp7);
  }

  TNode<Uint32T> phi_bb3_6;
  TNode<IntPtrT> tmp8;
  TNode<Int32T> tmp9;
  TNode<Uint32T> tmp10;
  TNode<Uint32T> tmp11;
  TNode<BoolT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_6);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp9 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter3, tmp8});
    tmp10 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp9});
    tmp11 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{tmp10}, TNode<Uint32T>{phi_bb3_6});
    tmp12 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp11});
    ca_.Branch(tmp12, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7, parameter2);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block7, tmp11);
  }

  TNode<Uint32T> phi_bb7_8;
  TNode<NativeContext> tmp13;
  TNode<Number> tmp14;
  TNode<Smi> tmp15;
  TNode<Smi> tmp16;
  TNode<Object> tmp17;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_8);
    tmp13 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{tmp0});
    tmp14 = ca_.CallStub<Number>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmUint32ToNumber), TNode<Object>(), parameter0);
    tmp15 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{phi_bb3_6});
    tmp16 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{phi_bb7_8});
    tmp17 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmStringEncodeWtf16, tmp13, tmp0, parameter4, parameter3, tmp14, tmp15, tmp16); 
    CodeStubAssembler(state_).Return(phi_bb7_8);
  }
}

TF_BUILTIN(WasmStringViewWtf16Slice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kStart);
  USE(parameter1);
  TNode<Uint32T> parameter2 = UncheckedParameter<Uint32T>(Descriptor::kEnd);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Int32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp1 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp1});
    tmp3 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{parameter1}, TNode<Uint32T>{tmp2});
    ca_.Branch(tmp3, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp4;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp4 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp4);
  }

  TNode<BoolT> tmp5;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp5 = CodeStubAssembler(state_).Uint32LessThanOrEqual(TNode<Uint32T>{parameter2}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp5, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp6;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp6 = kEmptyString_0(state_);
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<BoolT> tmp7;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp7 = CodeStubAssembler(state_).Uint32LessThanOrEqual(TNode<Uint32T>{parameter2}, TNode<Uint32T>{tmp2});
    ca_.Branch(tmp7, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block7, parameter2);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block7, tmp2);
  }

  TNode<Uint32T> phi_bb7_4;
  TNode<UintPtrT> tmp8;
  TNode<UintPtrT> tmp9;
  TNode<String> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_4);
    tmp8 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{phi_bb7_4});
    tmp9 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{parameter1});
    tmp10 = StringBuiltinsAssembler(state_).SubString(TNode<String>{parameter0}, TNode<UintPtrT>{tmp9}, TNode<UintPtrT>{tmp8});
    CodeStubAssembler(state_).Return(tmp10);
  }
}

TF_BUILTIN(WasmStringAsIter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<String> parameter0 = UncheckedParameter<String>(Descriptor::kString);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  TNode<HeapObject> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Uint32T> tmp8;
  TNode<WasmStringViewIter> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).GetInstanceTypeMap(WASM_STRING_VIEW_ITER_TYPE);
    tmp1 = FromConstexpr_intptr_constexpr_int31_0(state_, 20);
    tmp2 = AlignTagged_0(state_, TNode<IntPtrT>{tmp1});
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp4 = AllocateFromNew_0(state_, TNode<IntPtrT>{tmp2}, TNode<Map>{tmp0}, TNode<BoolT>{tmp3});
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 0);
    CodeStubAssembler(state_).StoreReference<Map>(CodeStubAssembler::Reference{tmp4, tmp5}, tmp0);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    CodeStubAssembler(state_).StoreReference<String>(CodeStubAssembler::Reference{tmp4, tmp6}, parameter0);
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp8 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{tmp4, tmp7}, tmp8);
    tmp9 = TORQUE_CAST(TNode<HeapObject>{tmp4});
    CodeStubAssembler(state_).Return(tmp9);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1054&c=1
TNode<BoolT> IsLeadSurrogate_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_code) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xfc00ull));
    tmp1 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_code}, TNode<Uint32T>{tmp0});
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xd800ull));
    tmp3 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BoolT>{tmp3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1057&c=1
TNode<BoolT> IsTrailSurrogate_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_code) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xfc00ull));
    tmp1 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{p_code}, TNode<Uint32T>{tmp0});
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xdc00ull));
    tmp3 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp2});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<BoolT>{tmp3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1060&c=1
TNode<Int32T> CombineSurrogatePair_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_lead, TNode<Uint16T> p_trail) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Uint32T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<Int32T> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_uint32_char16_0(state_, TNode<Uint16T>{p_lead});
    tmp1 = Convert_uint32_char16_0(state_, TNode<Uint16T>{p_trail});
    tmp2 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xfca02400ull));
    tmp3 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp4 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp0}, TNode<Uint32T>{tmp3});
    tmp5 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp1});
    tmp6 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp5}, TNode<Uint32T>{tmp2});
    tmp7 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp6});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp7};
}

TF_BUILTIN(WasmStringViewIterNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<WasmStringViewIter> parameter0 = UncheckedParameter<WasmStringViewIter>(Descriptor::kView);
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<String> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Uint32T> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Int32T> tmp5;
  TNode<Uint32T> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp5 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp4});
    tmp6 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp5});
    tmp7 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp6});
    ca_.Branch(tmp7, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp8;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp8 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).Return(tmp8);
  }

  TNode<UintPtrT> tmp9;
  TNode<Uint16T> tmp10;
  TNode<BoolT> tmp11;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp9 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp3});
    tmp10 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp9});
    tmp11 = IsLeadSurrogate_0(state_, TNode<Uint16T>{tmp10});
    ca_.Branch(tmp11, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp12;
  TNode<Uint32T> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Int32T> tmp15;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp12 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp12});
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp15 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp14});
    tmp16 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp16});
    ca_.Goto(&block9, tmp17);
  }

  TNode<BoolT> tmp18;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp18 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block9, tmp18);
  }

  TNode<BoolT> phi_bb9_5;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_5);
    ca_.Branch(phi_bb9_5, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp19;
  TNode<Uint32T> tmp20;
  TNode<UintPtrT> tmp21;
  TNode<Uint16T> tmp22;
  TNode<BoolT> tmp23;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp19 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp20 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp19});
    tmp21 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp20});
    tmp22 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp21});
    tmp23 = IsTrailSurrogate_0(state_, TNode<Uint16T>{tmp22});
    ca_.Branch(tmp23, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block3);
  }

  TNode<IntPtrT> tmp24;
  TNode<Uint32T> tmp25;
  TNode<Uint32T> tmp26;
  TNode<Int32T> tmp27;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp24 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp25 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp26 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp25});
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp24}, tmp26);
    tmp27 = CombineSurrogatePair_0(state_, TNode<Uint16T>{tmp10}, TNode<Uint16T>{tmp22});
    CodeStubAssembler(state_).Return(tmp27);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block3);
  }

  TNode<IntPtrT> tmp28;
  TNode<Uint32T> tmp29;
  TNode<Uint32T> tmp30;
  TNode<Uint32T> tmp31;
  TNode<Int32T> tmp32;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp28 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp29 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp30 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp29});
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp28}, tmp30);
    tmp31 = Convert_uint32_char16_0(state_, TNode<Uint16T>{tmp10});
    tmp32 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp31});
    CodeStubAssembler(state_).Return(tmp32);
  }
}

TF_BUILTIN(WasmStringViewIterAdvance, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<WasmStringViewIter> parameter0 = UncheckedParameter<WasmStringViewIter>(Descriptor::kView);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kCodepoints);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<String> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp2});
    tmp4 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp3, tmp4);
  }

  TNode<Uint32T> phi_bb3_3;
  TNode<Uint32T> phi_bb3_4;
  TNode<BoolT> tmp5;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3, &phi_bb3_4);
    tmp5 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{phi_bb3_4}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp5, &block1, std::vector<compiler::Node*>{phi_bb3_3, phi_bb3_4}, &block2, std::vector<compiler::Node*>{phi_bb3_3, phi_bb3_4});
  }

  TNode<Uint32T> phi_bb1_3;
  TNode<Uint32T> phi_bb1_4;
  TNode<IntPtrT> tmp6;
  TNode<Int32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3, &phi_bb1_4);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp7 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp6});
    tmp8 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp7});
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb1_3}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block4, std::vector<compiler::Node*>{phi_bb1_3, phi_bb1_4}, &block5, std::vector<compiler::Node*>{phi_bb1_3, phi_bb1_4});
  }

  TNode<Uint32T> phi_bb4_3;
  TNode<Uint32T> phi_bb4_4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3, &phi_bb4_4);
    ca_.Goto(&block2, phi_bb4_3, phi_bb4_4);
  }

  TNode<Uint32T> phi_bb5_3;
  TNode<Uint32T> phi_bb5_4;
  TNode<Uint32T> tmp10;
  TNode<Uint32T> tmp11;
  TNode<Uint32T> tmp12;
  TNode<Uint32T> tmp13;
  TNode<IntPtrT> tmp14;
  TNode<Int32T> tmp15;
  TNode<Uint32T> tmp16;
  TNode<BoolT> tmp17;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_3, &phi_bb5_4);
    tmp10 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp11 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb5_4}, TNode<Uint32T>{tmp10});
    tmp12 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb5_3}, TNode<Uint32T>{tmp12});
    tmp14 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp15 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp14});
    tmp16 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp15});
    tmp17 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp16});
    ca_.Branch(tmp17, &block8, std::vector<compiler::Node*>{phi_bb5_3}, &block9, std::vector<compiler::Node*>{phi_bb5_3});
  }

  TNode<Uint32T> phi_bb8_3;
  TNode<UintPtrT> tmp18;
  TNode<Uint16T> tmp19;
  TNode<BoolT> tmp20;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_3);
    tmp18 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{phi_bb8_3});
    tmp19 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp18});
    tmp20 = IsLeadSurrogate_0(state_, TNode<Uint16T>{tmp19});
    ca_.Goto(&block10, phi_bb8_3, tmp20);
  }

  TNode<Uint32T> phi_bb9_3;
  TNode<BoolT> tmp21;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_3);
    tmp21 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block10, phi_bb9_3, tmp21);
  }

  TNode<Uint32T> phi_bb10_3;
  TNode<BoolT> phi_bb10_6;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_3, &phi_bb10_6);
    ca_.Branch(phi_bb10_6, &block11, std::vector<compiler::Node*>{phi_bb10_3}, &block12, std::vector<compiler::Node*>{phi_bb10_3});
  }

  TNode<Uint32T> phi_bb11_3;
  TNode<Uint32T> tmp22;
  TNode<Uint32T> tmp23;
  TNode<UintPtrT> tmp24;
  TNode<Uint16T> tmp25;
  TNode<BoolT> tmp26;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_3);
    tmp22 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp23 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb11_3}, TNode<Uint32T>{tmp22});
    tmp24 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp23});
    tmp25 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp24});
    tmp26 = IsTrailSurrogate_0(state_, TNode<Uint16T>{tmp25});
    ca_.Goto(&block13, phi_bb11_3, tmp26);
  }

  TNode<Uint32T> phi_bb12_3;
  TNode<BoolT> tmp27;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_3);
    tmp27 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block13, phi_bb12_3, tmp27);
  }

  TNode<Uint32T> phi_bb13_3;
  TNode<BoolT> phi_bb13_6;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_3, &phi_bb13_6);
    ca_.Branch(phi_bb13_6, &block6, std::vector<compiler::Node*>{phi_bb13_3}, &block7, std::vector<compiler::Node*>{phi_bb13_3});
  }

  TNode<Uint32T> phi_bb6_3;
  TNode<Uint32T> tmp28;
  TNode<Uint32T> tmp29;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_3);
    tmp28 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp29 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb6_3}, TNode<Uint32T>{tmp28});
    ca_.Goto(&block14, tmp29);
  }

  TNode<Uint32T> phi_bb7_3;
  TNode<Uint32T> tmp30;
  TNode<Uint32T> tmp31;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_3);
    tmp30 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp31 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb7_3}, TNode<Uint32T>{tmp30});
    ca_.Goto(&block14, tmp31);
  }

  TNode<Uint32T> phi_bb14_3;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_3);
    ca_.Goto(&block3, phi_bb14_3, tmp11);
  }

  TNode<Uint32T> phi_bb2_3;
  TNode<Uint32T> phi_bb2_4;
  TNode<IntPtrT> tmp32;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_3, &phi_bb2_4);
    tmp32 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp32}, phi_bb2_3);
    CodeStubAssembler(state_).Return(phi_bb2_4);
  }
}

TF_BUILTIN(WasmStringViewIterRewind, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<WasmStringViewIter> parameter0 = UncheckedParameter<WasmStringViewIter>(Descriptor::kView);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kCodepoints);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<String> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Uint32T> tmp3;
  TNode<Uint32T> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Int32T> tmp6;
  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp2});
    tmp4 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp6 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp5});
    tmp7 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp8 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp6}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Uint32T> tmp9;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp9 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).Return(tmp9);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block5, tmp3, tmp4);
  }

  TNode<Uint32T> phi_bb5_3;
  TNode<Uint32T> phi_bb5_4;
  TNode<BoolT> tmp10;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_3, &phi_bb5_4);
    tmp10 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{phi_bb5_4}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp10, &block3, std::vector<compiler::Node*>{phi_bb5_3, phi_bb5_4}, &block4, std::vector<compiler::Node*>{phi_bb5_3, phi_bb5_4});
  }

  TNode<Uint32T> phi_bb3_3;
  TNode<Uint32T> phi_bb3_4;
  TNode<Uint32T> tmp11;
  TNode<BoolT> tmp12;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_3, &phi_bb3_4);
    tmp11 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb3_3}, TNode<Uint32T>{tmp11});
    ca_.Branch(tmp12, &block6, std::vector<compiler::Node*>{phi_bb3_3, phi_bb3_4}, &block7, std::vector<compiler::Node*>{phi_bb3_3, phi_bb3_4});
  }

  TNode<Uint32T> phi_bb6_3;
  TNode<Uint32T> phi_bb6_4;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_3, &phi_bb6_4);
    ca_.Goto(&block4, phi_bb6_3, phi_bb6_4);
  }

  TNode<Uint32T> phi_bb7_3;
  TNode<Uint32T> phi_bb7_4;
  TNode<Uint32T> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<BoolT> tmp16;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_3, &phi_bb7_4);
    tmp13 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp14 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb7_4}, TNode<Uint32T>{tmp13});
    tmp15 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp16 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{phi_bb7_3}, TNode<Uint32T>{tmp15});
    ca_.Branch(tmp16, &block10, std::vector<compiler::Node*>{phi_bb7_3}, &block11, std::vector<compiler::Node*>{phi_bb7_3});
  }

  TNode<Uint32T> phi_bb10_3;
  TNode<Uint32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<UintPtrT> tmp19;
  TNode<Uint16T> tmp20;
  TNode<BoolT> tmp21;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_3);
    tmp17 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp18 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{phi_bb10_3}, TNode<Uint32T>{tmp17});
    tmp19 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp18});
    tmp20 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp19});
    tmp21 = IsTrailSurrogate_0(state_, TNode<Uint16T>{tmp20});
    ca_.Goto(&block12, phi_bb10_3, tmp21);
  }

  TNode<Uint32T> phi_bb11_3;
  TNode<BoolT> tmp22;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_3);
    tmp22 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block12, phi_bb11_3, tmp22);
  }

  TNode<Uint32T> phi_bb12_3;
  TNode<BoolT> phi_bb12_6;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_3, &phi_bb12_6);
    ca_.Branch(phi_bb12_6, &block13, std::vector<compiler::Node*>{phi_bb12_3}, &block14, std::vector<compiler::Node*>{phi_bb12_3});
  }

  TNode<Uint32T> phi_bb13_3;
  TNode<Uint32T> tmp23;
  TNode<Uint32T> tmp24;
  TNode<UintPtrT> tmp25;
  TNode<Uint16T> tmp26;
  TNode<BoolT> tmp27;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_3);
    tmp23 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp24 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{phi_bb13_3}, TNode<Uint32T>{tmp23});
    tmp25 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp24});
    tmp26 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp25});
    tmp27 = IsLeadSurrogate_0(state_, TNode<Uint16T>{tmp26});
    ca_.Goto(&block15, phi_bb13_3, tmp27);
  }

  TNode<Uint32T> phi_bb14_3;
  TNode<BoolT> tmp28;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_3);
    tmp28 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block15, phi_bb14_3, tmp28);
  }

  TNode<Uint32T> phi_bb15_3;
  TNode<BoolT> phi_bb15_6;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_3, &phi_bb15_6);
    ca_.Branch(phi_bb15_6, &block8, std::vector<compiler::Node*>{phi_bb15_3}, &block9, std::vector<compiler::Node*>{phi_bb15_3});
  }

  TNode<Uint32T> phi_bb8_3;
  TNode<Uint32T> tmp29;
  TNode<Uint32T> tmp30;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_3);
    tmp29 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp30 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{phi_bb8_3}, TNode<Uint32T>{tmp29});
    ca_.Goto(&block16, tmp30);
  }

  TNode<Uint32T> phi_bb9_3;
  TNode<Uint32T> tmp31;
  TNode<Uint32T> tmp32;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_3);
    tmp31 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp32 = CodeStubAssembler(state_).Uint32Sub(TNode<Uint32T>{phi_bb9_3}, TNode<Uint32T>{tmp31});
    ca_.Goto(&block16, tmp32);
  }

  TNode<Uint32T> phi_bb16_3;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_3);
    ca_.Goto(&block5, phi_bb16_3, tmp14);
  }

  TNode<Uint32T> phi_bb4_3;
  TNode<Uint32T> phi_bb4_4;
  TNode<IntPtrT> tmp33;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3, &phi_bb4_4);
    tmp33 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    CodeStubAssembler(state_).StoreReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp33}, phi_bb4_3);
    CodeStubAssembler(state_).Return(phi_bb4_4);
  }
}

TF_BUILTIN(WasmStringViewIterSlice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<WasmStringViewIter> parameter0 = UncheckedParameter<WasmStringViewIter>(Descriptor::kView);
  USE(parameter0);
  TNode<Uint32T> parameter1 = UncheckedParameter<Uint32T>(Descriptor::kCodepoints);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<String> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Uint32T> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Uint32T> tmp5;
  TNode<Uint32T> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp1 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{parameter0, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp3 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp5 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{parameter0, tmp4});
    tmp6 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block3, tmp5, tmp6);
  }

  TNode<Uint32T> phi_bb3_4;
  TNode<Uint32T> phi_bb3_5;
  TNode<BoolT> tmp7;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_4, &phi_bb3_5);
    tmp7 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{phi_bb3_5}, TNode<Uint32T>{parameter1});
    ca_.Branch(tmp7, &block1, std::vector<compiler::Node*>{phi_bb3_4, phi_bb3_5}, &block2, std::vector<compiler::Node*>{phi_bb3_4, phi_bb3_5});
  }

  TNode<Uint32T> phi_bb1_4;
  TNode<Uint32T> phi_bb1_5;
  TNode<IntPtrT> tmp8;
  TNode<Int32T> tmp9;
  TNode<Uint32T> tmp10;
  TNode<BoolT> tmp11;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4, &phi_bb1_5);
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp9 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp8});
    tmp10 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp9});
    tmp11 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb1_4}, TNode<Uint32T>{tmp10});
    ca_.Branch(tmp11, &block4, std::vector<compiler::Node*>{phi_bb1_4, phi_bb1_5}, &block5, std::vector<compiler::Node*>{phi_bb1_4, phi_bb1_5});
  }

  TNode<Uint32T> phi_bb4_4;
  TNode<Uint32T> phi_bb4_5;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_4, &phi_bb4_5);
    ca_.Goto(&block2, phi_bb4_4, phi_bb4_5);
  }

  TNode<Uint32T> phi_bb5_4;
  TNode<Uint32T> phi_bb5_5;
  TNode<Uint32T> tmp12;
  TNode<Uint32T> tmp13;
  TNode<Uint32T> tmp14;
  TNode<Uint32T> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<Int32T> tmp17;
  TNode<Uint32T> tmp18;
  TNode<BoolT> tmp19;
  if (block5.is_used()) {
    ca_.Bind(&block5, &phi_bb5_4, &phi_bb5_5);
    tmp12 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp13 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb5_5}, TNode<Uint32T>{tmp12});
    tmp14 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp15 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb5_4}, TNode<Uint32T>{tmp14});
    tmp16 = FromConstexpr_intptr_constexpr_int31_0(state_, 12);
    tmp17 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp16});
    tmp18 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp17});
    tmp19 = CodeStubAssembler(state_).Uint32LessThan(TNode<Uint32T>{tmp15}, TNode<Uint32T>{tmp18});
    ca_.Branch(tmp19, &block8, std::vector<compiler::Node*>{phi_bb5_4}, &block9, std::vector<compiler::Node*>{phi_bb5_4});
  }

  TNode<Uint32T> phi_bb8_4;
  TNode<UintPtrT> tmp20;
  TNode<Uint16T> tmp21;
  TNode<BoolT> tmp22;
  if (block8.is_used()) {
    ca_.Bind(&block8, &phi_bb8_4);
    tmp20 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{phi_bb8_4});
    tmp21 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp20});
    tmp22 = IsLeadSurrogate_0(state_, TNode<Uint16T>{tmp21});
    ca_.Goto(&block10, phi_bb8_4, tmp22);
  }

  TNode<Uint32T> phi_bb9_4;
  TNode<BoolT> tmp23;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_4);
    tmp23 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block10, phi_bb9_4, tmp23);
  }

  TNode<Uint32T> phi_bb10_4;
  TNode<BoolT> phi_bb10_7;
  if (block10.is_used()) {
    ca_.Bind(&block10, &phi_bb10_4, &phi_bb10_7);
    ca_.Branch(phi_bb10_7, &block11, std::vector<compiler::Node*>{phi_bb10_4}, &block12, std::vector<compiler::Node*>{phi_bb10_4});
  }

  TNode<Uint32T> phi_bb11_4;
  TNode<Uint32T> tmp24;
  TNode<Uint32T> tmp25;
  TNode<UintPtrT> tmp26;
  TNode<Uint16T> tmp27;
  TNode<BoolT> tmp28;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_4);
    tmp24 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp25 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb11_4}, TNode<Uint32T>{tmp24});
    tmp26 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp25});
    tmp27 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp1}, TNode<UintPtrT>{tmp26});
    tmp28 = IsTrailSurrogate_0(state_, TNode<Uint16T>{tmp27});
    ca_.Goto(&block13, phi_bb11_4, tmp28);
  }

  TNode<Uint32T> phi_bb12_4;
  TNode<BoolT> tmp29;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_4);
    tmp29 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block13, phi_bb12_4, tmp29);
  }

  TNode<Uint32T> phi_bb13_4;
  TNode<BoolT> phi_bb13_7;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_4, &phi_bb13_7);
    ca_.Branch(phi_bb13_7, &block6, std::vector<compiler::Node*>{phi_bb13_4}, &block7, std::vector<compiler::Node*>{phi_bb13_4});
  }

  TNode<Uint32T> phi_bb6_4;
  TNode<Uint32T> tmp30;
  TNode<Uint32T> tmp31;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_4);
    tmp30 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp31 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb6_4}, TNode<Uint32T>{tmp30});
    ca_.Goto(&block14, tmp31);
  }

  TNode<Uint32T> phi_bb7_4;
  TNode<Uint32T> tmp32;
  TNode<Uint32T> tmp33;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_4);
    tmp32 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp33 = CodeStubAssembler(state_).Uint32Add(TNode<Uint32T>{phi_bb7_4}, TNode<Uint32T>{tmp32});
    ca_.Goto(&block14, tmp33);
  }

  TNode<Uint32T> phi_bb14_4;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_4);
    ca_.Goto(&block3, phi_bb14_4, tmp13);
  }

  TNode<Uint32T> phi_bb2_4;
  TNode<Uint32T> phi_bb2_5;
  TNode<BoolT> tmp34;
  if (block2.is_used()) {
    ca_.Bind(&block2, &phi_bb2_4, &phi_bb2_5);
    tmp34 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp3}, TNode<Uint32T>{phi_bb2_4});
    ca_.Branch(tmp34, &block15, std::vector<compiler::Node*>{phi_bb2_4, phi_bb2_5}, &block16, std::vector<compiler::Node*>{phi_bb2_4, phi_bb2_5});
  }

  TNode<Uint32T> phi_bb15_4;
  TNode<Uint32T> phi_bb15_5;
  TNode<String> tmp35;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_4, &phi_bb15_5);
    tmp35 = kEmptyString_0(state_);
    ca_.Goto(&block17, phi_bb15_4, phi_bb15_5, tmp35);
  }

  TNode<Uint32T> phi_bb16_4;
  TNode<Uint32T> phi_bb16_5;
  TNode<UintPtrT> tmp36;
  TNode<UintPtrT> tmp37;
  TNode<String> tmp38;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_4, &phi_bb16_5);
    tmp36 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{tmp3});
    tmp37 = Convert_uintptr_uint32_0(state_, TNode<Uint32T>{phi_bb16_4});
    tmp38 = StringBuiltinsAssembler(state_).SubString(TNode<String>{tmp1}, TNode<UintPtrT>{tmp36}, TNode<UintPtrT>{tmp37});
    ca_.Goto(&block17, phi_bb16_4, phi_bb16_5, tmp38);
  }

  TNode<Uint32T> phi_bb17_4;
  TNode<Uint32T> phi_bb17_5;
  TNode<String> phi_bb17_6;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_4, &phi_bb17_5, &phi_bb17_6);
    CodeStubAssembler(state_).Return(phi_bb17_6);
  }
}

TF_BUILTIN(WasmExternInternalize, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kExternObject);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Symbol> tmp0;
  TNode<Object> tmp1;
  TNode<Oddball> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).WasmWrappedObjectSymbolConstant();
    tmp1 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmGetOwnProperty), parameter0, parameter1, tmp0);
    tmp2 = Undefined_0(state_);
    tmp3 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp1}, TNode<HeapObject>{tmp2});
    ca_.Branch(tmp3, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    CodeStubAssembler(state_).Return(parameter1);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

TF_BUILTIN(WasmExternExternalize, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedParameter<Context>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kAnyObject);
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmArray> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_WasmArray_1(state_, TNode<Context>{parameter0}, TNode<Object>{parameter1}, &label1);
    ca_.Goto(&block3);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4);
    }
  }

  TNode<WasmStruct> tmp2;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_WasmStruct_1(state_, TNode<Context>{parameter0}, TNode<Object>{ca_.UncheckedCast<Object>(parameter1)}, &label3);
    ca_.Goto(&block7);
    if (label3.is_used()) {
      ca_.Bind(&label3);
      ca_.Goto(&block8);
    }
  }

  TNode<JSObject> tmp4;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp4 = ca_.CallStub<JSObject>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmAllocateObjectWrapper), parameter0, tmp0);
    CodeStubAssembler(state_).Return(tmp4);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    CodeStubAssembler(state_).Return(parameter1);
  }

  TNode<JSObject> tmp5;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = ca_.CallStub<JSObject>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmAllocateObjectWrapper), parameter0, tmp2);
    CodeStubAssembler(state_).Return(tmp5);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=373&c=7
TNode<IntPtrT> Convert_intptr_constexpr_int32_0(compiler::CodeAssemblerState* state_, int32_t p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int32_0(state_, p_i);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=584&c=14
TNode<BoolT> Is_WasmInternalFunction_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmInternalFunction> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_WasmInternalFunction_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
    ca_.Goto(&block4);
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5);
    }
  }

  TNode<BoolT> tmp2;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp2 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block1, tmp2);
  }

  TNode<BoolT> tmp3;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block1, tmp3);
  }

  TNode<BoolT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<BoolT>{phi_bb1_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=719&c=10
TNode<WasmTypeInfo> UnsafeCast_WasmTypeInfo_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmTypeInfo> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<WasmTypeInfo>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=736&c=7
TorqueStructReference_int32_0 NewOffHeapReference_int32_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TaggedIndex> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kZeroBitPattern_0(state_);
    tmp1 = Convert_RawPtr_RawPtr_int32_0(state_, TNode<RawPtrT>{p_ptr});
    tmp2 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    std::tie(tmp5, tmp6) = (TorqueStructReference_int32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp4}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_int32_0{TNode<Object>{tmp5}, TNode<IntPtrT>{tmp6}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=746&c=19
TNode<WasmArray> Cast_WasmArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<WasmArray> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_WasmArray_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<WasmArray>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=753&c=26
TorqueStructSlice_char16_ConstReference_char16_0 NewConstSlice_char16_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_char16_ConstReference_char16_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=756&c=12
TNode<String> AllocateSeqTwoByteString_SliceIterator_char16_ConstReference_char16_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_length, TorqueStructSliceIterator_char16_ConstReference_char16_0 p_content) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<BoolT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_uint32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{p_length}, TNode<Uint32T>{tmp0});
    ca_.Branch(tmp1, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<String> tmp2;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp2 = kEmptyString_0(state_);
    ca_.Goto(&block1, tmp2);
  }

  TNode<SeqTwoByteString> tmp3;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp3 = AllocateNonEmptySeqTwoByteString_SliceIterator_char16_ConstReference_char16_0(state_, TNode<Uint32T>{p_length}, TorqueStructSliceIterator_char16_ConstReference_char16_0{TNode<Object>{p_content.object}, TNode<IntPtrT>{p_content.start}, TNode<IntPtrT>{p_content.end}, TorqueStructUnsafe_0{}});
    ca_.Goto(&block1, tmp3);
  }

  TNode<String> phi_bb1_4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
  return TNode<String>{phi_bb1_4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=781&c=26
TorqueStructSlice_char16_MutableReference_char16_0 NewMutableSlice_char16_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = (TorqueStructSlice_char16_MutableReference_char16_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_char16_MutableReference_char16_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=790&c=39
TNode<Uint16T> Convert_uint16_char8_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint16T>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1022&c=12
TNode<Uint32T> Convert_uint32_char16_0(compiler::CodeAssemblerState* state_, TNode<Uint16T> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=1170&c=5
TNode<WasmStruct> Cast_WasmStruct_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<WasmStruct> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_WasmStruct_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<WasmStruct>{tmp2};
}

} // namespace internal
} // namespace v8
