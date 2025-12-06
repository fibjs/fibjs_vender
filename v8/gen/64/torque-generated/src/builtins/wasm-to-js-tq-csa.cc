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
#include "torque-generated/src/builtins/wasm-to-js-tq-csa.h"
#include "torque-generated/src/builtins/array-flat-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/cell-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/js-to-js-tq-csa.h"
#include "torque-generated/src/builtins/js-to-wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-to-js-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=28&c=1
void HandleF32Returns_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TorqueStructLocationAllocator_0 p_locationAllocator, TorqueStructReference_intptr_0 p_toRef, TNode<JSAny> p_retVal) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((wasm::kIsFpAlwaysDouble)) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<IntPtrT> tmp0;
  TNode<BoolT> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp0 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp1 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{p_locationAllocator.remainingFPRegs}, TNode<IntPtrT>{tmp0});
    ca_.Branch(tmp1, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Union<HeapObject, TaggedIndex>> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Float64T> tmp4;
  TNode<Float64T> tmp5;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    std::tie(tmp2, tmp3) = RefCast_float64_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{p_toRef.object}, TNode<IntPtrT>{p_toRef.offset}, TorqueStructUnsafe_0{}}).Flatten();
    tmp4 = CodeStubAssembler(state_).ChangeTaggedToFloat64(TNode<Context>{p_context}, TNode<JSAny>{p_retVal});
    tmp5 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).StoreReference<Float64T>(CodeStubAssembler::Reference{tmp2, tmp3}, tmp5);
    ca_.Goto(&block8);
  }

  TNode<Union<HeapObject, TaggedIndex>> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Float32T> tmp8;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    std::tie(tmp6, tmp7) = RefCast_float32_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{p_toRef.object}, TNode<IntPtrT>{p_toRef.offset}, TorqueStructUnsafe_0{}}).Flatten();
    tmp8 = ca_.CallBuiltin<Float32T>(Builtin::kWasmTaggedToFloat32, p_context, p_retVal);
    CodeStubAssembler(state_).StoreReference<Float32T>(CodeStubAssembler::Reference{tmp6, tmp7}, tmp8);
    ca_.Goto(&block8);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block4);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((wasm::kIsBigEndian)) {
      ca_.Goto(&block9);
    } else {
      ca_.Goto(&block10);
    }
  }

  TNode<Float32T> tmp9;
  TNode<Uint32T> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp9 = ca_.CallBuiltin<Float32T>(Builtin::kWasmTaggedToFloat32, p_context, p_retVal);
    tmp10 = Bitcast_WasmCodePointer_float32_0(state_, TNode<Float32T>{tmp9});
    tmp11 = Convert_intptr_WasmCodePointer_0(state_, TNode<Uint32T>{tmp10});
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x20ull));
    tmp13 = CodeStubAssembler(state_).WordShl(TNode<IntPtrT>{tmp11}, TNode<IntPtrT>{tmp12});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{p_toRef.object, p_toRef.offset}, tmp13);
    ca_.Goto(&block11);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    if ((wasm::kIsBigEndianOnSim)) {
      ca_.Goto(&block12);
    } else {
      ca_.Goto(&block13);
    }
  }

  TNode<IntPtrT> tmp14;
  TNode<BoolT> tmp15;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp14 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp15 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{p_locationAllocator.remainingFPRegs}, TNode<IntPtrT>{tmp14});
    ca_.Branch(tmp15, &block15, std::vector<compiler::Node*>{}, &block16, std::vector<compiler::Node*>{});
  }

  TNode<Float32T> tmp16;
  TNode<Uint32T> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp16 = ca_.CallBuiltin<Float32T>(Builtin::kWasmTaggedToFloat32, p_context, p_retVal);
    tmp17 = Bitcast_WasmCodePointer_float32_0(state_, TNode<Float32T>{tmp16});
    tmp18 = Convert_intptr_WasmCodePointer_0(state_, TNode<Uint32T>{tmp17});
    tmp19 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x20ull));
    tmp20 = CodeStubAssembler(state_).WordShl(TNode<IntPtrT>{tmp18}, TNode<IntPtrT>{tmp19});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{p_toRef.object, p_toRef.offset}, tmp20);
    ca_.Goto(&block18);
  }

  TNode<Float32T> tmp21;
  TNode<Uint32T> tmp22;
  TNode<IntPtrT> tmp23;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp21 = ca_.CallBuiltin<Float32T>(Builtin::kWasmTaggedToFloat32, p_context, p_retVal);
    tmp22 = Bitcast_WasmCodePointer_float32_0(state_, TNode<Float32T>{tmp21});
    tmp23 = Convert_intptr_WasmCodePointer_0(state_, TNode<Uint32T>{tmp22});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{p_toRef.object, p_toRef.offset}, tmp23);
    ca_.Goto(&block18);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.Goto(&block14);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    ca_.Goto(&block14);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.Goto(&block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block4);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block19);
  }

    ca_.Bind(&block19);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=50&c=1
TorqueStructWasmToJSResult WasmToJSWrapper_0(compiler::CodeAssemblerState* state_, TNode<WasmImportData> p_data) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Int32T> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Float32T> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block100(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Float32T> block103(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block98(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Float32T> block99(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Float32T> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block123(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block131(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block132(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block137(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block139(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block140(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block142(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block138(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block149(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block152(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Union<HeapObject, TaggedIndex>, IntPtrT> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Union<HeapObject, TaggedIndex>, IntPtrT> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block157(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block161(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block165(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block166(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block167(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block171(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block172(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block174(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block175(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block170(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block168(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block164(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block180(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block181(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block162(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block185(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block184(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block163(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block186(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block189(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block190(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block194(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block192(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block203(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block206(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block207(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block209(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block210(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block212(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block213(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block208(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block205(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block218(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block219(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT> block204(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block193(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT> block187(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT> block222(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT> block223(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, FixedArray> block224(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT> block226(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT> block228(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT> block229(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block233(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block231(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block235(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block236(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block242(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block243(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT, JSAny> block237(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block253(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block257(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block258(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block260(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block261(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block263(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block264(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block259(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block256(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT, JSAny, JSAny> block268(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT, JSAny, JSAny> block267(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT, JSAny> block265(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block254(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block269(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block273(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block274(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block276(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block277(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block279(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block280(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block275(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block272(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block281(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block282(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block283(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block270(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block284(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block288(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block289(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block290(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block294(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block295(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block297(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block298(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block293(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block291(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block287(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block285(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block299(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block302(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block306(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block307(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block309(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block310(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block312(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block313(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block308(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block305(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block303(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block315(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block316(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block318(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block319(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block321(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block322(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block317(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block314(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block324(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block325(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block327(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block328(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block330(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block331(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT, Union<HeapObject, TaggedIndex>, IntPtrT> block326(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT, Union<HeapObject, TaggedIndex>, IntPtrT> block323(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block304(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block300(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block333(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block332(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block334(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block338(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block339(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block341(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block342(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block344(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block345(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block340(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny, Union<HeapObject, TaggedIndex>, IntPtrT> block337(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block335(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, JSAny, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block350(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, JSAny, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block351(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block336(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block301(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block286(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block271(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, JSAny> block255(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block232(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block354(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block357(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block358(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block362(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block360(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block371(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block374(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block375(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block377(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block378(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block380(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block381(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block376(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT> block373(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block386(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT, Union<HeapObject, TaggedIndex>, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block387(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, BoolT> block372(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, BoolT> block361(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, BoolT> block355(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block390(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<RawPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Union<HeapObject, TaggedIndex>> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<RawPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<Int32T> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Cell> tmp14;
  TNode<Object> tmp15;
  TNode<Smi> tmp16;
  TNode<Smi> tmp17;
  TNode<Smi> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<Cell> tmp20;
  TNode<Smi> tmp21;
  TNode<BoolT> tmp22;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SwitchToTheCentralStackIfNeeded();
    tmp1 = CodeStubAssembler(state_).LoadFramePointer();
    tmp2 = FromConstexpr_intptr_constexpr_intptr_0(state_, WasmToJSWrapperConstants::kSignatureOffset);
    tmp3 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp5, tmp6) = GetRefAt_RawPtr_RawPtr_0(state_, TNode<RawPtrT>{tmp3}, TNode<IntPtrT>{tmp4}).Flatten();
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp8 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{p_data, tmp7});
    CodeStubAssembler(state_).StoreReference<RawPtrT>(CodeStubAssembler::Reference{tmp5, tmp6}, tmp8);
    tmp9 = CodeStubAssembler(state_).StackAlignmentInBytes();
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp11 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp10});
    tmp12 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ModifyThreadInWasmFlag_0(state_, TNode<Int32T>{tmp12});
    tmp13 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp14 = CodeStubAssembler(state_).LoadReference<Cell>(CodeStubAssembler::Reference{p_data, tmp13});
    tmp15 = LoadCellValue_0(state_, TNode<Cell>{tmp14});
    tmp16 = TORQUE_CAST(TNode<Object>{tmp15});
    tmp17 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp18 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    tmp19 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp20 = CodeStubAssembler(state_).LoadReference<Cell>(CodeStubAssembler::Reference{p_data, tmp19});
    StoreCellValue_0(state_, TNode<Cell>{tmp20}, TNode<Object>{tmp18});
    tmp21 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp22 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp18}, TNode<Smi>{tmp21});
    ca_.Branch(tmp22, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp23;
  TNode<JSAny> tmp24;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp23 = kNoContext_0(state_);
    tmp24 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kTierUpWasmToJSWrapper, tmp23, p_data)); 
    ca_.Goto(&block26);
  }

  TNode<IntPtrT> tmp25;
  TNode<RawPtrT> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<RawPtrT> tmp28;
  TNode<RawPtrT> tmp29;
  TNode<Union<HeapObject, TaggedIndex>> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<IntPtrT> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<RawPtrT> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<RawPtrT> tmp36;
  TNode<RawPtrT> tmp37;
  TNode<Union<HeapObject, TaggedIndex>> tmp38;
  TNode<IntPtrT> tmp39;
  TNode<IntPtrT> tmp40;
  TNode<IntPtrT> tmp41;
  TNode<RawPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<RawPtrT> tmp44;
  TNode<RawPtrT> tmp45;
  TNode<Union<HeapObject, TaggedIndex>> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<RawPtrT> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Union<HeapObject, TaggedIndex>> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<IntPtrT> tmp53;
  TNode<Union<HeapObject, TaggedIndex>> tmp54;
  TNode<IntPtrT> tmp55;
  TNode<IntPtrT> tmp56;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp25 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp26 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{p_data, tmp25});
    tmp27 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp28 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp26}, TNode<IntPtrT>{tmp27});
    tmp29 = (TNode<RawPtrT>{tmp28});
    std::tie(tmp30, tmp31) = NewOffHeapReference_intptr_0(state_, TNode<RawPtrT>{tmp29}).Flatten();
    tmp32 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp30, tmp31});
    tmp33 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp34 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{p_data, tmp33});
    tmp35 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp36 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp34}, TNode<IntPtrT>{tmp35});
    tmp37 = (TNode<RawPtrT>{tmp36});
    std::tie(tmp38, tmp39) = NewOffHeapReference_intptr_0(state_, TNode<RawPtrT>{tmp37}).Flatten();
    tmp40 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp38, tmp39});
    tmp41 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp42 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{p_data, tmp41});
    tmp43 = FromConstexpr_intptr_constexpr_int31_0(state_, (CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))));
    tmp44 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp42}, TNode<IntPtrT>{tmp43});
    tmp45 = (TNode<RawPtrT>{tmp44});
    std::tie(tmp46, tmp47) = NewOffHeapReference_RawPtr_WasmCodePointer_0(state_, TNode<RawPtrT>{tmp45}).Flatten();
    tmp48 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp46, tmp47});
    tmp49 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp40}, TNode<IntPtrT>{tmp32});
    std::tie(tmp50, tmp51, tmp52) = NewOffHeapConstSlice_WasmCodePointer_0(state_, TNode<RawPtrT>{tmp48}, TNode<IntPtrT>{tmp49}).Flatten();
    tmp53 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    compiler::CodeAssemblerLabel label57(&ca_);
    std::tie(tmp54, tmp55, tmp56) = Subslice_WasmCodePointer_0(state_, TorqueStructSlice_WasmCodePointer_ConstReference_WasmCodePointer_0{TNode<Union<HeapObject, TaggedIndex>>{tmp50}, TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp52}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp53}, TNode<IntPtrT>{tmp32}, &label57).Flatten();
    ca_.Goto(&block29);
    if (label57.is_used()) {
      ca_.Bind(&label57);
      ca_.Goto(&block30);
    }
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Union<HeapObject, TaggedIndex>> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    compiler::CodeAssemblerLabel label61(&ca_);
    std::tie(tmp58, tmp59, tmp60) = Subslice_WasmCodePointer_0(state_, TorqueStructSlice_WasmCodePointer_ConstReference_WasmCodePointer_0{TNode<Union<HeapObject, TaggedIndex>>{tmp50}, TNode<IntPtrT>{tmp51}, TNode<IntPtrT>{tmp52}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp32}, TNode<IntPtrT>{tmp40}, &label61).Flatten();
    ca_.Goto(&block33);
    if (label61.is_used()) {
      ca_.Bind(&label61);
      ca_.Goto(&block34);
    }
  }

  if (block34.is_used()) {
    ca_.Bind(&block34);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp62;
  TNode<IntPtrT> tmp63;
  TNode<FixedArray> tmp64;
  TNode<IntPtrT> tmp65;
  TNode<Union<HeapObject, TaggedIndex>> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<IntPtrT> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<IntPtrT> tmp70;
  TNode<UintPtrT> tmp71;
  TNode<UintPtrT> tmp72;
  TNode<BoolT> tmp73;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp62 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp63 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp40}, TNode<IntPtrT>{tmp62});
    tmp64 = ca_.CallBuiltin<FixedArray>(Builtin::kWasmAllocateZeroedFixedArray, TNode<Object>(), tmp63);
    tmp65 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp66, tmp67, tmp68) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp69 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp70 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp65}, TNode<IntPtrT>{tmp69});
    tmp71 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp65});
    tmp72 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp68});
    tmp73 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp71}, TNode<UintPtrT>{tmp72});
    ca_.Branch(tmp73, &block39, std::vector<compiler::Node*>{}, &block40, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp74;
  TNode<IntPtrT> tmp75;
  TNode<Union<HeapObject, TaggedIndex>> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<Undefined> tmp78;
  TNode<RawPtrT> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  TNode<RawPtrT> tmp84;
  TNode<RawPtrT> tmp85;
  TNode<Union<HeapObject, TaggedIndex>> tmp86;
  TNode<IntPtrT> tmp87;
  TNode<IntPtrT> tmp88;
  TNode<Union<HeapObject, TaggedIndex>> tmp89;
  TNode<IntPtrT> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<IntPtrT> tmp93;
  TNode<IntPtrT> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<IntPtrT> tmp96;
  TNode<IntPtrT> tmp97;
  TNode<BoolT> tmp98;
  TNode<IntPtrT> tmp99;
  TNode<IntPtrT> tmp100;
  TNode<BoolT> tmp101;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp74 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{tmp65});
    tmp75 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp67}, TNode<IntPtrT>{tmp74});
    std::tie(tmp76, tmp77) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp66}, TNode<IntPtrT>{tmp75}).Flatten();
    tmp78 = Undefined_0(state_);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp76, tmp77}, tmp78);
    tmp79 = CodeStubAssembler(state_).LoadFramePointer();
    tmp80 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp81 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp80}, TNode<IntPtrT>{tmp11});
    tmp82 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp83 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp81}, TNode<IntPtrT>{tmp82});
    tmp84 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{tmp79}, TNode<IntPtrT>{tmp83});
    tmp85 = (TNode<RawPtrT>{tmp84});
    std::tie(tmp86, tmp87) = NewOffHeapReference_intptr_0(state_, TNode<RawPtrT>{tmp85}).Flatten();
    tmp88 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98) = LocationAllocatorForParams_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{tmp86}, TNode<IntPtrT>{tmp87}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp88}).Flatten();
    tmp99 = TimesSizeOf_WasmCodePointer_0(state_, TNode<IntPtrT>{tmp60});
    tmp100 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp59}, TNode<IntPtrT>{tmp99});
    tmp101 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block46, tmp70, tmp90, tmp91, tmp92, tmp93, tmp94, tmp97, tmp98, tmp59, tmp101);
  }

  if (block40.is_used()) {
    ca_.Bind(&block40);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb46_20;
  TNode<IntPtrT> phi_bb46_25;
  TNode<IntPtrT> phi_bb46_26;
  TNode<IntPtrT> phi_bb46_27;
  TNode<IntPtrT> phi_bb46_28;
  TNode<IntPtrT> phi_bb46_29;
  TNode<IntPtrT> phi_bb46_32;
  TNode<BoolT> phi_bb46_33;
  TNode<IntPtrT> phi_bb46_35;
  TNode<BoolT> phi_bb46_37;
  TNode<BoolT> tmp102;
  TNode<BoolT> tmp103;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_20, &phi_bb46_25, &phi_bb46_26, &phi_bb46_27, &phi_bb46_28, &phi_bb46_29, &phi_bb46_32, &phi_bb46_33, &phi_bb46_35, &phi_bb46_37);
    tmp102 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb46_35}, TNode<IntPtrT>{tmp100});
    tmp103 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp102});
    ca_.Branch(tmp103, &block44, std::vector<compiler::Node*>{phi_bb46_20, phi_bb46_25, phi_bb46_26, phi_bb46_27, phi_bb46_28, phi_bb46_29, phi_bb46_32, phi_bb46_33, phi_bb46_35, phi_bb46_37}, &block45, std::vector<compiler::Node*>{phi_bb46_20, phi_bb46_25, phi_bb46_26, phi_bb46_27, phi_bb46_28, phi_bb46_29, phi_bb46_32, phi_bb46_33, phi_bb46_35, phi_bb46_37});
  }

  TNode<IntPtrT> phi_bb44_20;
  TNode<IntPtrT> phi_bb44_25;
  TNode<IntPtrT> phi_bb44_26;
  TNode<IntPtrT> phi_bb44_27;
  TNode<IntPtrT> phi_bb44_28;
  TNode<IntPtrT> phi_bb44_29;
  TNode<IntPtrT> phi_bb44_32;
  TNode<BoolT> phi_bb44_33;
  TNode<IntPtrT> phi_bb44_35;
  TNode<BoolT> phi_bb44_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp104;
  TNode<IntPtrT> tmp105;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  TNode<Uint32T> tmp108;
  TNode<Uint32T> tmp109;
  TNode<BoolT> tmp110;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_20, &phi_bb44_25, &phi_bb44_26, &phi_bb44_27, &phi_bb44_28, &phi_bb44_29, &phi_bb44_32, &phi_bb44_33, &phi_bb44_35, &phi_bb44_37);
    std::tie(tmp104, tmp105) = NewReference_WasmCodePointer_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp58}, TNode<IntPtrT>{phi_bb44_35}).Flatten();
    tmp106 = FromConstexpr_intptr_constexpr_int31_0(state_, kInt32Size);
    tmp107 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb44_35}, TNode<IntPtrT>{tmp106});
    tmp108 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp104, tmp105});
    tmp109 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp110 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp108}, TNode<Uint32T>{tmp109});
    ca_.Branch(tmp110, &block55, std::vector<compiler::Node*>{phi_bb44_20, phi_bb44_25, phi_bb44_26, phi_bb44_27, phi_bb44_28, phi_bb44_29, phi_bb44_32, phi_bb44_33, phi_bb44_37}, &block56, std::vector<compiler::Node*>{phi_bb44_20, phi_bb44_25, phi_bb44_26, phi_bb44_27, phi_bb44_28, phi_bb44_29, phi_bb44_32, phi_bb44_33, phi_bb44_37});
  }

  TNode<IntPtrT> phi_bb55_20;
  TNode<IntPtrT> phi_bb55_25;
  TNode<IntPtrT> phi_bb55_26;
  TNode<IntPtrT> phi_bb55_27;
  TNode<IntPtrT> phi_bb55_28;
  TNode<IntPtrT> phi_bb55_29;
  TNode<IntPtrT> phi_bb55_32;
  TNode<BoolT> phi_bb55_33;
  TNode<BoolT> phi_bb55_37;
  TNode<IntPtrT> tmp111;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<BoolT> tmp114;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_20, &phi_bb55_25, &phi_bb55_26, &phi_bb55_27, &phi_bb55_28, &phi_bb55_29, &phi_bb55_32, &phi_bb55_33, &phi_bb55_37);
    tmp111 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp112 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb55_25}, TNode<IntPtrT>{tmp111});
    tmp113 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp114 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb55_25}, TNode<IntPtrT>{tmp113});
    ca_.Branch(tmp114, &block59, std::vector<compiler::Node*>{phi_bb55_20, phi_bb55_26, phi_bb55_27, phi_bb55_28, phi_bb55_29, phi_bb55_32, phi_bb55_33, phi_bb55_37}, &block60, std::vector<compiler::Node*>{phi_bb55_20, phi_bb55_26, phi_bb55_27, phi_bb55_28, phi_bb55_29, phi_bb55_32, phi_bb55_33, phi_bb55_37});
  }

  TNode<IntPtrT> phi_bb59_20;
  TNode<IntPtrT> phi_bb59_26;
  TNode<IntPtrT> phi_bb59_27;
  TNode<IntPtrT> phi_bb59_28;
  TNode<IntPtrT> phi_bb59_29;
  TNode<IntPtrT> phi_bb59_32;
  TNode<BoolT> phi_bb59_33;
  TNode<BoolT> phi_bb59_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp115;
  TNode<IntPtrT> tmp116;
  TNode<IntPtrT> tmp117;
  TNode<IntPtrT> tmp118;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_20, &phi_bb59_26, &phi_bb59_27, &phi_bb59_28, &phi_bb59_29, &phi_bb59_32, &phi_bb59_33, &phi_bb59_37);
    std::tie(tmp115, tmp116) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb59_27}).Flatten();
    tmp117 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp118 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb59_27}, TNode<IntPtrT>{tmp117});
    ca_.Goto(&block58, phi_bb59_20, phi_bb59_26, tmp118, phi_bb59_28, phi_bb59_29, phi_bb59_32, phi_bb59_33, phi_bb59_37, tmp115, tmp116);
  }

  TNode<IntPtrT> phi_bb60_20;
  TNode<IntPtrT> phi_bb60_26;
  TNode<IntPtrT> phi_bb60_27;
  TNode<IntPtrT> phi_bb60_28;
  TNode<IntPtrT> phi_bb60_29;
  TNode<IntPtrT> phi_bb60_32;
  TNode<BoolT> phi_bb60_33;
  TNode<BoolT> phi_bb60_37;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_20, &phi_bb60_26, &phi_bb60_27, &phi_bb60_28, &phi_bb60_29, &phi_bb60_32, &phi_bb60_33, &phi_bb60_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block62, phi_bb60_20, phi_bb60_26, phi_bb60_27, phi_bb60_28, phi_bb60_29, phi_bb60_32, phi_bb60_33, phi_bb60_37);
    } else {
      ca_.Goto(&block63, phi_bb60_20, phi_bb60_26, phi_bb60_27, phi_bb60_28, phi_bb60_29, phi_bb60_32, phi_bb60_33, phi_bb60_37);
    }
  }

  TNode<IntPtrT> phi_bb62_20;
  TNode<IntPtrT> phi_bb62_26;
  TNode<IntPtrT> phi_bb62_27;
  TNode<IntPtrT> phi_bb62_28;
  TNode<IntPtrT> phi_bb62_29;
  TNode<IntPtrT> phi_bb62_32;
  TNode<BoolT> phi_bb62_33;
  TNode<BoolT> phi_bb62_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp119;
  TNode<IntPtrT> tmp120;
  TNode<IntPtrT> tmp121;
  TNode<IntPtrT> tmp122;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_20, &phi_bb62_26, &phi_bb62_27, &phi_bb62_28, &phi_bb62_29, &phi_bb62_32, &phi_bb62_33, &phi_bb62_37);
    std::tie(tmp119, tmp120) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb62_29}).Flatten();
    tmp121 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp122 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb62_29}, TNode<IntPtrT>{tmp121});
    ca_.Goto(&block61, phi_bb62_20, phi_bb62_26, phi_bb62_27, phi_bb62_28, tmp122, phi_bb62_32, phi_bb62_33, phi_bb62_37, tmp119, tmp120);
  }

  TNode<IntPtrT> phi_bb63_20;
  TNode<IntPtrT> phi_bb63_26;
  TNode<IntPtrT> phi_bb63_27;
  TNode<IntPtrT> phi_bb63_28;
  TNode<IntPtrT> phi_bb63_29;
  TNode<IntPtrT> phi_bb63_32;
  TNode<BoolT> phi_bb63_33;
  TNode<BoolT> phi_bb63_37;
  TNode<IntPtrT> tmp123;
  TNode<BoolT> tmp124;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_20, &phi_bb63_26, &phi_bb63_27, &phi_bb63_28, &phi_bb63_29, &phi_bb63_32, &phi_bb63_33, &phi_bb63_37);
    tmp123 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp124 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb63_32}, TNode<IntPtrT>{tmp123});
    ca_.Branch(tmp124, &block65, std::vector<compiler::Node*>{phi_bb63_20, phi_bb63_26, phi_bb63_27, phi_bb63_28, phi_bb63_29, phi_bb63_32, phi_bb63_33, phi_bb63_37}, &block66, std::vector<compiler::Node*>{phi_bb63_20, phi_bb63_26, phi_bb63_27, phi_bb63_28, phi_bb63_29, phi_bb63_32, phi_bb63_33, phi_bb63_37});
  }

  TNode<IntPtrT> phi_bb65_20;
  TNode<IntPtrT> phi_bb65_26;
  TNode<IntPtrT> phi_bb65_27;
  TNode<IntPtrT> phi_bb65_28;
  TNode<IntPtrT> phi_bb65_29;
  TNode<IntPtrT> phi_bb65_32;
  TNode<BoolT> phi_bb65_33;
  TNode<BoolT> phi_bb65_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp125;
  TNode<IntPtrT> tmp126;
  TNode<IntPtrT> tmp127;
  TNode<BoolT> tmp128;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_20, &phi_bb65_26, &phi_bb65_27, &phi_bb65_28, &phi_bb65_29, &phi_bb65_32, &phi_bb65_33, &phi_bb65_37);
    std::tie(tmp125, tmp126) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb65_32}).Flatten();
    tmp127 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp128 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block61, phi_bb65_20, phi_bb65_26, phi_bb65_27, phi_bb65_28, phi_bb65_29, tmp127, tmp128, phi_bb65_37, tmp125, tmp126);
  }

  TNode<IntPtrT> phi_bb66_20;
  TNode<IntPtrT> phi_bb66_26;
  TNode<IntPtrT> phi_bb66_27;
  TNode<IntPtrT> phi_bb66_28;
  TNode<IntPtrT> phi_bb66_29;
  TNode<IntPtrT> phi_bb66_32;
  TNode<BoolT> phi_bb66_33;
  TNode<BoolT> phi_bb66_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp129;
  TNode<IntPtrT> tmp130;
  TNode<IntPtrT> tmp131;
  TNode<IntPtrT> tmp132;
  TNode<IntPtrT> tmp133;
  TNode<IntPtrT> tmp134;
  TNode<BoolT> tmp135;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_20, &phi_bb66_26, &phi_bb66_27, &phi_bb66_28, &phi_bb66_29, &phi_bb66_32, &phi_bb66_33, &phi_bb66_37);
    std::tie(tmp129, tmp130) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb66_29}).Flatten();
    tmp131 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp132 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb66_29}, TNode<IntPtrT>{tmp131});
    tmp133 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp134 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp132}, TNode<IntPtrT>{tmp133});
    tmp135 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block61, phi_bb66_20, phi_bb66_26, phi_bb66_27, phi_bb66_28, tmp134, tmp132, tmp135, phi_bb66_37, tmp129, tmp130);
  }

  TNode<IntPtrT> phi_bb61_20;
  TNode<IntPtrT> phi_bb61_26;
  TNode<IntPtrT> phi_bb61_27;
  TNode<IntPtrT> phi_bb61_28;
  TNode<IntPtrT> phi_bb61_29;
  TNode<IntPtrT> phi_bb61_32;
  TNode<BoolT> phi_bb61_33;
  TNode<BoolT> phi_bb61_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb61_39;
  TNode<IntPtrT> phi_bb61_40;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_20, &phi_bb61_26, &phi_bb61_27, &phi_bb61_28, &phi_bb61_29, &phi_bb61_32, &phi_bb61_33, &phi_bb61_37, &phi_bb61_39, &phi_bb61_40);
    ca_.Goto(&block58, phi_bb61_20, phi_bb61_26, phi_bb61_27, phi_bb61_28, phi_bb61_29, phi_bb61_32, phi_bb61_33, phi_bb61_37, phi_bb61_39, phi_bb61_40);
  }

  TNode<IntPtrT> phi_bb58_20;
  TNode<IntPtrT> phi_bb58_26;
  TNode<IntPtrT> phi_bb58_27;
  TNode<IntPtrT> phi_bb58_28;
  TNode<IntPtrT> phi_bb58_29;
  TNode<IntPtrT> phi_bb58_32;
  TNode<BoolT> phi_bb58_33;
  TNode<BoolT> phi_bb58_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb58_39;
  TNode<IntPtrT> phi_bb58_40;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_20, &phi_bb58_26, &phi_bb58_27, &phi_bb58_28, &phi_bb58_29, &phi_bb58_32, &phi_bb58_33, &phi_bb58_37, &phi_bb58_39, &phi_bb58_40);
    if ((wasm::kIsBigEndian)) {
      ca_.Goto(&block67, phi_bb58_20, phi_bb58_26, phi_bb58_27, phi_bb58_28, phi_bb58_29, phi_bb58_32, phi_bb58_33, phi_bb58_37, phi_bb58_39, phi_bb58_40);
    } else {
      ca_.Goto(&block68, phi_bb58_20, phi_bb58_26, phi_bb58_27, phi_bb58_28, phi_bb58_29, phi_bb58_32, phi_bb58_33, phi_bb58_37, phi_bb58_39, phi_bb58_40);
    }
  }

  TNode<IntPtrT> phi_bb67_20;
  TNode<IntPtrT> phi_bb67_26;
  TNode<IntPtrT> phi_bb67_27;
  TNode<IntPtrT> phi_bb67_28;
  TNode<IntPtrT> phi_bb67_29;
  TNode<IntPtrT> phi_bb67_32;
  TNode<BoolT> phi_bb67_33;
  TNode<BoolT> phi_bb67_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb67_39;
  TNode<IntPtrT> phi_bb67_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp136;
  TNode<IntPtrT> tmp137;
  TNode<Int64T> tmp138;
  TNode<Int32T> tmp139;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_20, &phi_bb67_26, &phi_bb67_27, &phi_bb67_28, &phi_bb67_29, &phi_bb67_32, &phi_bb67_33, &phi_bb67_37, &phi_bb67_39, &phi_bb67_40);
    std::tie(tmp136, tmp137) = RefCast_int64_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb67_39}, TNode<IntPtrT>{phi_bb67_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp138 = CodeStubAssembler(state_).LoadReference<Int64T>(CodeStubAssembler::Reference{tmp136, tmp137});
    tmp139 = CodeStubAssembler(state_).TruncateInt64ToInt32(TNode<Int64T>{tmp138});
    ca_.Goto(&block69, phi_bb67_20, phi_bb67_26, phi_bb67_27, phi_bb67_28, phi_bb67_29, phi_bb67_32, phi_bb67_33, phi_bb67_37, phi_bb67_39, phi_bb67_40, tmp139);
  }

  TNode<IntPtrT> phi_bb68_20;
  TNode<IntPtrT> phi_bb68_26;
  TNode<IntPtrT> phi_bb68_27;
  TNode<IntPtrT> phi_bb68_28;
  TNode<IntPtrT> phi_bb68_29;
  TNode<IntPtrT> phi_bb68_32;
  TNode<BoolT> phi_bb68_33;
  TNode<BoolT> phi_bb68_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb68_39;
  TNode<IntPtrT> phi_bb68_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<Int32T> tmp142;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_20, &phi_bb68_26, &phi_bb68_27, &phi_bb68_28, &phi_bb68_29, &phi_bb68_32, &phi_bb68_33, &phi_bb68_37, &phi_bb68_39, &phi_bb68_40);
    std::tie(tmp140, tmp141) = RefCast_int32_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb68_39}, TNode<IntPtrT>{phi_bb68_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp142 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp140, tmp141});
    ca_.Goto(&block69, phi_bb68_20, phi_bb68_26, phi_bb68_27, phi_bb68_28, phi_bb68_29, phi_bb68_32, phi_bb68_33, phi_bb68_37, phi_bb68_39, phi_bb68_40, tmp142);
  }

  TNode<IntPtrT> phi_bb69_20;
  TNode<IntPtrT> phi_bb69_26;
  TNode<IntPtrT> phi_bb69_27;
  TNode<IntPtrT> phi_bb69_28;
  TNode<IntPtrT> phi_bb69_29;
  TNode<IntPtrT> phi_bb69_32;
  TNode<BoolT> phi_bb69_33;
  TNode<BoolT> phi_bb69_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb69_39;
  TNode<IntPtrT> phi_bb69_40;
  TNode<Int32T> phi_bb69_41;
  TNode<Union<HeapObject, TaggedIndex>> tmp143;
  TNode<IntPtrT> tmp144;
  TNode<IntPtrT> tmp145;
  TNode<IntPtrT> tmp146;
  TNode<IntPtrT> tmp147;
  TNode<UintPtrT> tmp148;
  TNode<UintPtrT> tmp149;
  TNode<BoolT> tmp150;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_20, &phi_bb69_26, &phi_bb69_27, &phi_bb69_28, &phi_bb69_29, &phi_bb69_32, &phi_bb69_33, &phi_bb69_37, &phi_bb69_39, &phi_bb69_40, &phi_bb69_41);
    std::tie(tmp143, tmp144, tmp145) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp146 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp147 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb69_20}, TNode<IntPtrT>{tmp146});
    tmp148 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb69_20});
    tmp149 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp145});
    tmp150 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp148}, TNode<UintPtrT>{tmp149});
    ca_.Branch(tmp150, &block74, std::vector<compiler::Node*>{phi_bb69_26, phi_bb69_27, phi_bb69_28, phi_bb69_29, phi_bb69_32, phi_bb69_33, phi_bb69_37, phi_bb69_39, phi_bb69_40, phi_bb69_20, phi_bb69_20, phi_bb69_20, phi_bb69_20}, &block75, std::vector<compiler::Node*>{phi_bb69_26, phi_bb69_27, phi_bb69_28, phi_bb69_29, phi_bb69_32, phi_bb69_33, phi_bb69_37, phi_bb69_39, phi_bb69_40, phi_bb69_20, phi_bb69_20, phi_bb69_20, phi_bb69_20});
  }

  TNode<IntPtrT> phi_bb74_26;
  TNode<IntPtrT> phi_bb74_27;
  TNode<IntPtrT> phi_bb74_28;
  TNode<IntPtrT> phi_bb74_29;
  TNode<IntPtrT> phi_bb74_32;
  TNode<BoolT> phi_bb74_33;
  TNode<BoolT> phi_bb74_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb74_39;
  TNode<IntPtrT> phi_bb74_40;
  TNode<IntPtrT> phi_bb74_46;
  TNode<IntPtrT> phi_bb74_47;
  TNode<IntPtrT> phi_bb74_51;
  TNode<IntPtrT> phi_bb74_52;
  TNode<IntPtrT> tmp151;
  TNode<IntPtrT> tmp152;
  TNode<Union<HeapObject, TaggedIndex>> tmp153;
  TNode<IntPtrT> tmp154;
  TNode<Number> tmp155;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_26, &phi_bb74_27, &phi_bb74_28, &phi_bb74_29, &phi_bb74_32, &phi_bb74_33, &phi_bb74_37, &phi_bb74_39, &phi_bb74_40, &phi_bb74_46, &phi_bb74_47, &phi_bb74_51, &phi_bb74_52);
    tmp151 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb74_52});
    tmp152 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp144}, TNode<IntPtrT>{tmp151});
    std::tie(tmp153, tmp154) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp143}, TNode<IntPtrT>{tmp152}).Flatten();
    tmp155 = Convert_Number_int32_0(state_, TNode<Int32T>{phi_bb69_41});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp153, tmp154}, tmp155);
    ca_.Goto(&block57, tmp147, tmp112, phi_bb74_26, phi_bb74_27, phi_bb74_28, phi_bb74_29, phi_bb74_32, phi_bb74_33, phi_bb74_37);
  }

  TNode<IntPtrT> phi_bb75_26;
  TNode<IntPtrT> phi_bb75_27;
  TNode<IntPtrT> phi_bb75_28;
  TNode<IntPtrT> phi_bb75_29;
  TNode<IntPtrT> phi_bb75_32;
  TNode<BoolT> phi_bb75_33;
  TNode<BoolT> phi_bb75_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb75_39;
  TNode<IntPtrT> phi_bb75_40;
  TNode<IntPtrT> phi_bb75_46;
  TNode<IntPtrT> phi_bb75_47;
  TNode<IntPtrT> phi_bb75_51;
  TNode<IntPtrT> phi_bb75_52;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_26, &phi_bb75_27, &phi_bb75_28, &phi_bb75_29, &phi_bb75_32, &phi_bb75_33, &phi_bb75_37, &phi_bb75_39, &phi_bb75_40, &phi_bb75_46, &phi_bb75_47, &phi_bb75_51, &phi_bb75_52);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb56_20;
  TNode<IntPtrT> phi_bb56_25;
  TNode<IntPtrT> phi_bb56_26;
  TNode<IntPtrT> phi_bb56_27;
  TNode<IntPtrT> phi_bb56_28;
  TNode<IntPtrT> phi_bb56_29;
  TNode<IntPtrT> phi_bb56_32;
  TNode<BoolT> phi_bb56_33;
  TNode<BoolT> phi_bb56_37;
  TNode<Uint32T> tmp156;
  TNode<BoolT> tmp157;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_20, &phi_bb56_25, &phi_bb56_26, &phi_bb56_27, &phi_bb56_28, &phi_bb56_29, &phi_bb56_32, &phi_bb56_33, &phi_bb56_37);
    tmp156 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp157 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp108}, TNode<Uint32T>{tmp156});
    ca_.Branch(tmp157, &block78, std::vector<compiler::Node*>{phi_bb56_20, phi_bb56_25, phi_bb56_26, phi_bb56_27, phi_bb56_28, phi_bb56_29, phi_bb56_32, phi_bb56_33, phi_bb56_37}, &block79, std::vector<compiler::Node*>{phi_bb56_20, phi_bb56_25, phi_bb56_26, phi_bb56_27, phi_bb56_28, phi_bb56_29, phi_bb56_32, phi_bb56_33, phi_bb56_37});
  }

  TNode<IntPtrT> phi_bb78_20;
  TNode<IntPtrT> phi_bb78_25;
  TNode<IntPtrT> phi_bb78_26;
  TNode<IntPtrT> phi_bb78_27;
  TNode<IntPtrT> phi_bb78_28;
  TNode<IntPtrT> phi_bb78_29;
  TNode<IntPtrT> phi_bb78_32;
  TNode<BoolT> phi_bb78_33;
  TNode<BoolT> phi_bb78_37;
  TNode<IntPtrT> tmp158;
  TNode<IntPtrT> tmp159;
  TNode<IntPtrT> tmp160;
  TNode<BoolT> tmp161;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_20, &phi_bb78_25, &phi_bb78_26, &phi_bb78_27, &phi_bb78_28, &phi_bb78_29, &phi_bb78_32, &phi_bb78_33, &phi_bb78_37);
    tmp158 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp159 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb78_26}, TNode<IntPtrT>{tmp158});
    tmp160 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp161 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb78_26}, TNode<IntPtrT>{tmp160});
    ca_.Branch(tmp161, &block82, std::vector<compiler::Node*>{phi_bb78_20, phi_bb78_25, phi_bb78_27, phi_bb78_28, phi_bb78_29, phi_bb78_32, phi_bb78_33, phi_bb78_37}, &block83, std::vector<compiler::Node*>{phi_bb78_20, phi_bb78_25, phi_bb78_27, phi_bb78_28, phi_bb78_29, phi_bb78_32, phi_bb78_33, phi_bb78_37});
  }

  TNode<IntPtrT> phi_bb82_20;
  TNode<IntPtrT> phi_bb82_25;
  TNode<IntPtrT> phi_bb82_27;
  TNode<IntPtrT> phi_bb82_28;
  TNode<IntPtrT> phi_bb82_29;
  TNode<IntPtrT> phi_bb82_32;
  TNode<BoolT> phi_bb82_33;
  TNode<BoolT> phi_bb82_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp162;
  TNode<IntPtrT> tmp163;
  TNode<IntPtrT> tmp164;
  TNode<IntPtrT> tmp165;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_20, &phi_bb82_25, &phi_bb82_27, &phi_bb82_28, &phi_bb82_29, &phi_bb82_32, &phi_bb82_33, &phi_bb82_37);
    std::tie(tmp162, tmp163) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb82_28}).Flatten();
    tmp164 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp165 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb82_28}, TNode<IntPtrT>{tmp164});
    ca_.Goto(&block81, phi_bb82_20, phi_bb82_25, phi_bb82_27, tmp165, phi_bb82_29, phi_bb82_32, phi_bb82_33, phi_bb82_37, tmp162, tmp163);
  }

  TNode<IntPtrT> phi_bb83_20;
  TNode<IntPtrT> phi_bb83_25;
  TNode<IntPtrT> phi_bb83_27;
  TNode<IntPtrT> phi_bb83_28;
  TNode<IntPtrT> phi_bb83_29;
  TNode<IntPtrT> phi_bb83_32;
  TNode<BoolT> phi_bb83_33;
  TNode<BoolT> phi_bb83_37;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_20, &phi_bb83_25, &phi_bb83_27, &phi_bb83_28, &phi_bb83_29, &phi_bb83_32, &phi_bb83_33, &phi_bb83_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block85, phi_bb83_20, phi_bb83_25, phi_bb83_27, phi_bb83_28, phi_bb83_29, phi_bb83_32, phi_bb83_33, phi_bb83_37);
    } else {
      ca_.Goto(&block86, phi_bb83_20, phi_bb83_25, phi_bb83_27, phi_bb83_28, phi_bb83_29, phi_bb83_32, phi_bb83_33, phi_bb83_37);
    }
  }

  TNode<IntPtrT> phi_bb85_20;
  TNode<IntPtrT> phi_bb85_25;
  TNode<IntPtrT> phi_bb85_27;
  TNode<IntPtrT> phi_bb85_28;
  TNode<IntPtrT> phi_bb85_29;
  TNode<IntPtrT> phi_bb85_32;
  TNode<BoolT> phi_bb85_33;
  TNode<BoolT> phi_bb85_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<IntPtrT> tmp168;
  TNode<IntPtrT> tmp169;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_20, &phi_bb85_25, &phi_bb85_27, &phi_bb85_28, &phi_bb85_29, &phi_bb85_32, &phi_bb85_33, &phi_bb85_37);
    std::tie(tmp166, tmp167) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb85_29}).Flatten();
    tmp168 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp169 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb85_29}, TNode<IntPtrT>{tmp168});
    ca_.Goto(&block84, phi_bb85_20, phi_bb85_25, phi_bb85_27, phi_bb85_28, tmp169, phi_bb85_32, phi_bb85_33, phi_bb85_37, tmp166, tmp167);
  }

  TNode<IntPtrT> phi_bb86_20;
  TNode<IntPtrT> phi_bb86_25;
  TNode<IntPtrT> phi_bb86_27;
  TNode<IntPtrT> phi_bb86_28;
  TNode<IntPtrT> phi_bb86_29;
  TNode<IntPtrT> phi_bb86_32;
  TNode<BoolT> phi_bb86_33;
  TNode<BoolT> phi_bb86_37;
  TNode<IntPtrT> tmp170;
  TNode<BoolT> tmp171;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_20, &phi_bb86_25, &phi_bb86_27, &phi_bb86_28, &phi_bb86_29, &phi_bb86_32, &phi_bb86_33, &phi_bb86_37);
    tmp170 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp171 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb86_32}, TNode<IntPtrT>{tmp170});
    ca_.Branch(tmp171, &block88, std::vector<compiler::Node*>{phi_bb86_20, phi_bb86_25, phi_bb86_27, phi_bb86_28, phi_bb86_29, phi_bb86_32, phi_bb86_33, phi_bb86_37}, &block89, std::vector<compiler::Node*>{phi_bb86_20, phi_bb86_25, phi_bb86_27, phi_bb86_28, phi_bb86_29, phi_bb86_32, phi_bb86_33, phi_bb86_37});
  }

  TNode<IntPtrT> phi_bb88_20;
  TNode<IntPtrT> phi_bb88_25;
  TNode<IntPtrT> phi_bb88_27;
  TNode<IntPtrT> phi_bb88_28;
  TNode<IntPtrT> phi_bb88_29;
  TNode<IntPtrT> phi_bb88_32;
  TNode<BoolT> phi_bb88_33;
  TNode<BoolT> phi_bb88_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp172;
  TNode<IntPtrT> tmp173;
  TNode<IntPtrT> tmp174;
  TNode<BoolT> tmp175;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_20, &phi_bb88_25, &phi_bb88_27, &phi_bb88_28, &phi_bb88_29, &phi_bb88_32, &phi_bb88_33, &phi_bb88_37);
    std::tie(tmp172, tmp173) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb88_32}).Flatten();
    tmp174 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp175 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block84, phi_bb88_20, phi_bb88_25, phi_bb88_27, phi_bb88_28, phi_bb88_29, tmp174, tmp175, phi_bb88_37, tmp172, tmp173);
  }

  TNode<IntPtrT> phi_bb89_20;
  TNode<IntPtrT> phi_bb89_25;
  TNode<IntPtrT> phi_bb89_27;
  TNode<IntPtrT> phi_bb89_28;
  TNode<IntPtrT> phi_bb89_29;
  TNode<IntPtrT> phi_bb89_32;
  TNode<BoolT> phi_bb89_33;
  TNode<BoolT> phi_bb89_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<IntPtrT> tmp179;
  TNode<IntPtrT> tmp180;
  TNode<IntPtrT> tmp181;
  TNode<BoolT> tmp182;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_20, &phi_bb89_25, &phi_bb89_27, &phi_bb89_28, &phi_bb89_29, &phi_bb89_32, &phi_bb89_33, &phi_bb89_37);
    std::tie(tmp176, tmp177) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb89_29}).Flatten();
    tmp178 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp179 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb89_29}, TNode<IntPtrT>{tmp178});
    tmp180 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp181 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp179}, TNode<IntPtrT>{tmp180});
    tmp182 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block84, phi_bb89_20, phi_bb89_25, phi_bb89_27, phi_bb89_28, tmp181, tmp179, tmp182, phi_bb89_37, tmp176, tmp177);
  }

  TNode<IntPtrT> phi_bb84_20;
  TNode<IntPtrT> phi_bb84_25;
  TNode<IntPtrT> phi_bb84_27;
  TNode<IntPtrT> phi_bb84_28;
  TNode<IntPtrT> phi_bb84_29;
  TNode<IntPtrT> phi_bb84_32;
  TNode<BoolT> phi_bb84_33;
  TNode<BoolT> phi_bb84_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb84_39;
  TNode<IntPtrT> phi_bb84_40;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_20, &phi_bb84_25, &phi_bb84_27, &phi_bb84_28, &phi_bb84_29, &phi_bb84_32, &phi_bb84_33, &phi_bb84_37, &phi_bb84_39, &phi_bb84_40);
    ca_.Goto(&block81, phi_bb84_20, phi_bb84_25, phi_bb84_27, phi_bb84_28, phi_bb84_29, phi_bb84_32, phi_bb84_33, phi_bb84_37, phi_bb84_39, phi_bb84_40);
  }

  TNode<IntPtrT> phi_bb81_20;
  TNode<IntPtrT> phi_bb81_25;
  TNode<IntPtrT> phi_bb81_27;
  TNode<IntPtrT> phi_bb81_28;
  TNode<IntPtrT> phi_bb81_29;
  TNode<IntPtrT> phi_bb81_32;
  TNode<BoolT> phi_bb81_33;
  TNode<BoolT> phi_bb81_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb81_39;
  TNode<IntPtrT> phi_bb81_40;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_20, &phi_bb81_25, &phi_bb81_27, &phi_bb81_28, &phi_bb81_29, &phi_bb81_32, &phi_bb81_33, &phi_bb81_37, &phi_bb81_39, &phi_bb81_40);
    if ((wasm::kIsFpAlwaysDouble)) {
      ca_.Goto(&block90, phi_bb81_20, phi_bb81_25, phi_bb81_27, phi_bb81_28, phi_bb81_29, phi_bb81_32, phi_bb81_33, phi_bb81_37, phi_bb81_39, phi_bb81_40);
    } else {
      ca_.Goto(&block91, phi_bb81_20, phi_bb81_25, phi_bb81_27, phi_bb81_28, phi_bb81_29, phi_bb81_32, phi_bb81_33, phi_bb81_37, phi_bb81_39, phi_bb81_40);
    }
  }

  TNode<IntPtrT> phi_bb90_20;
  TNode<IntPtrT> phi_bb90_25;
  TNode<IntPtrT> phi_bb90_27;
  TNode<IntPtrT> phi_bb90_28;
  TNode<IntPtrT> phi_bb90_29;
  TNode<IntPtrT> phi_bb90_32;
  TNode<BoolT> phi_bb90_33;
  TNode<BoolT> phi_bb90_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb90_39;
  TNode<IntPtrT> phi_bb90_40;
  TNode<IntPtrT> tmp183;
  TNode<BoolT> tmp184;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_20, &phi_bb90_25, &phi_bb90_27, &phi_bb90_28, &phi_bb90_29, &phi_bb90_32, &phi_bb90_33, &phi_bb90_37, &phi_bb90_39, &phi_bb90_40);
    tmp183 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp184 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp159}, TNode<IntPtrT>{tmp183});
    ca_.Branch(tmp184, &block93, std::vector<compiler::Node*>{phi_bb90_20, phi_bb90_25, phi_bb90_27, phi_bb90_28, phi_bb90_29, phi_bb90_32, phi_bb90_33, phi_bb90_37, phi_bb90_39, phi_bb90_40}, &block94, std::vector<compiler::Node*>{phi_bb90_20, phi_bb90_25, phi_bb90_27, phi_bb90_28, phi_bb90_29, phi_bb90_32, phi_bb90_33, phi_bb90_37, phi_bb90_39, phi_bb90_40});
  }

  TNode<IntPtrT> phi_bb93_20;
  TNode<IntPtrT> phi_bb93_25;
  TNode<IntPtrT> phi_bb93_27;
  TNode<IntPtrT> phi_bb93_28;
  TNode<IntPtrT> phi_bb93_29;
  TNode<IntPtrT> phi_bb93_32;
  TNode<BoolT> phi_bb93_33;
  TNode<BoolT> phi_bb93_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb93_39;
  TNode<IntPtrT> phi_bb93_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp185;
  TNode<IntPtrT> tmp186;
  TNode<Float64T> tmp187;
  TNode<Float32T> tmp188;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_20, &phi_bb93_25, &phi_bb93_27, &phi_bb93_28, &phi_bb93_29, &phi_bb93_32, &phi_bb93_33, &phi_bb93_37, &phi_bb93_39, &phi_bb93_40);
    std::tie(tmp185, tmp186) = RefCast_float64_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb93_39}, TNode<IntPtrT>{phi_bb93_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp187 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp185, tmp186});
    tmp188 = CodeStubAssembler(state_).TruncateFloat64ToFloat32(TNode<Float64T>{tmp187});
    ca_.Goto(&block96, phi_bb93_20, phi_bb93_25, phi_bb93_27, phi_bb93_28, phi_bb93_29, phi_bb93_32, phi_bb93_33, phi_bb93_37, phi_bb93_39, phi_bb93_40, tmp188);
  }

  TNode<IntPtrT> phi_bb94_20;
  TNode<IntPtrT> phi_bb94_25;
  TNode<IntPtrT> phi_bb94_27;
  TNode<IntPtrT> phi_bb94_28;
  TNode<IntPtrT> phi_bb94_29;
  TNode<IntPtrT> phi_bb94_32;
  TNode<BoolT> phi_bb94_33;
  TNode<BoolT> phi_bb94_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb94_39;
  TNode<IntPtrT> phi_bb94_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp189;
  TNode<IntPtrT> tmp190;
  TNode<Float32T> tmp191;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_20, &phi_bb94_25, &phi_bb94_27, &phi_bb94_28, &phi_bb94_29, &phi_bb94_32, &phi_bb94_33, &phi_bb94_37, &phi_bb94_39, &phi_bb94_40);
    std::tie(tmp189, tmp190) = RefCast_float32_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb94_39}, TNode<IntPtrT>{phi_bb94_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp191 = CodeStubAssembler(state_).LoadReference<Float32T>(CodeStubAssembler::Reference{tmp189, tmp190});
    ca_.Goto(&block96, phi_bb94_20, phi_bb94_25, phi_bb94_27, phi_bb94_28, phi_bb94_29, phi_bb94_32, phi_bb94_33, phi_bb94_37, phi_bb94_39, phi_bb94_40, tmp191);
  }

  TNode<IntPtrT> phi_bb96_20;
  TNode<IntPtrT> phi_bb96_25;
  TNode<IntPtrT> phi_bb96_27;
  TNode<IntPtrT> phi_bb96_28;
  TNode<IntPtrT> phi_bb96_29;
  TNode<IntPtrT> phi_bb96_32;
  TNode<BoolT> phi_bb96_33;
  TNode<BoolT> phi_bb96_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb96_39;
  TNode<IntPtrT> phi_bb96_40;
  TNode<Float32T> phi_bb96_41;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_20, &phi_bb96_25, &phi_bb96_27, &phi_bb96_28, &phi_bb96_29, &phi_bb96_32, &phi_bb96_33, &phi_bb96_37, &phi_bb96_39, &phi_bb96_40, &phi_bb96_41);
    ca_.Goto(&block92, phi_bb96_20, phi_bb96_25, phi_bb96_27, phi_bb96_28, phi_bb96_29, phi_bb96_32, phi_bb96_33, phi_bb96_37, phi_bb96_39, phi_bb96_40, phi_bb96_41);
  }

  TNode<IntPtrT> phi_bb91_20;
  TNode<IntPtrT> phi_bb91_25;
  TNode<IntPtrT> phi_bb91_27;
  TNode<IntPtrT> phi_bb91_28;
  TNode<IntPtrT> phi_bb91_29;
  TNode<IntPtrT> phi_bb91_32;
  TNode<BoolT> phi_bb91_33;
  TNode<BoolT> phi_bb91_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb91_39;
  TNode<IntPtrT> phi_bb91_40;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_20, &phi_bb91_25, &phi_bb91_27, &phi_bb91_28, &phi_bb91_29, &phi_bb91_32, &phi_bb91_33, &phi_bb91_37, &phi_bb91_39, &phi_bb91_40);
    if ((wasm::kIsBigEndianOnSim)) {
      ca_.Goto(&block97, phi_bb91_20, phi_bb91_25, phi_bb91_27, phi_bb91_28, phi_bb91_29, phi_bb91_32, phi_bb91_33, phi_bb91_37, phi_bb91_39, phi_bb91_40);
    } else {
      ca_.Goto(&block98, phi_bb91_20, phi_bb91_25, phi_bb91_27, phi_bb91_28, phi_bb91_29, phi_bb91_32, phi_bb91_33, phi_bb91_37, phi_bb91_39, phi_bb91_40);
    }
  }

  TNode<IntPtrT> phi_bb97_20;
  TNode<IntPtrT> phi_bb97_25;
  TNode<IntPtrT> phi_bb97_27;
  TNode<IntPtrT> phi_bb97_28;
  TNode<IntPtrT> phi_bb97_29;
  TNode<IntPtrT> phi_bb97_32;
  TNode<BoolT> phi_bb97_33;
  TNode<BoolT> phi_bb97_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb97_39;
  TNode<IntPtrT> phi_bb97_40;
  TNode<IntPtrT> tmp192;
  TNode<BoolT> tmp193;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_20, &phi_bb97_25, &phi_bb97_27, &phi_bb97_28, &phi_bb97_29, &phi_bb97_32, &phi_bb97_33, &phi_bb97_37, &phi_bb97_39, &phi_bb97_40);
    tmp192 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp193 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp159}, TNode<IntPtrT>{tmp192});
    ca_.Branch(tmp193, &block100, std::vector<compiler::Node*>{phi_bb97_20, phi_bb97_25, phi_bb97_27, phi_bb97_28, phi_bb97_29, phi_bb97_32, phi_bb97_33, phi_bb97_37, phi_bb97_39, phi_bb97_40}, &block101, std::vector<compiler::Node*>{phi_bb97_20, phi_bb97_25, phi_bb97_27, phi_bb97_28, phi_bb97_29, phi_bb97_32, phi_bb97_33, phi_bb97_37, phi_bb97_39, phi_bb97_40});
  }

  TNode<IntPtrT> phi_bb100_20;
  TNode<IntPtrT> phi_bb100_25;
  TNode<IntPtrT> phi_bb100_27;
  TNode<IntPtrT> phi_bb100_28;
  TNode<IntPtrT> phi_bb100_29;
  TNode<IntPtrT> phi_bb100_32;
  TNode<BoolT> phi_bb100_33;
  TNode<BoolT> phi_bb100_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb100_39;
  TNode<IntPtrT> phi_bb100_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp194;
  TNode<IntPtrT> tmp195;
  TNode<Int64T> tmp196;
  TNode<Int64T> tmp197;
  TNode<Int64T> tmp198;
  TNode<Int32T> tmp199;
  TNode<Float32T> tmp200;
  if (block100.is_used()) {
    ca_.Bind(&block100, &phi_bb100_20, &phi_bb100_25, &phi_bb100_27, &phi_bb100_28, &phi_bb100_29, &phi_bb100_32, &phi_bb100_33, &phi_bb100_37, &phi_bb100_39, &phi_bb100_40);
    std::tie(tmp194, tmp195) = RefCast_int64_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb100_39}, TNode<IntPtrT>{phi_bb100_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp196 = CodeStubAssembler(state_).LoadReference<Int64T>(CodeStubAssembler::Reference{tmp194, tmp195});
    tmp197 = FromConstexpr_int64_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x20ull));
    tmp198 = CodeStubAssembler(state_).Word64Sar(TNode<Int64T>{tmp196}, TNode<Int64T>{tmp197});
    tmp199 = CodeStubAssembler(state_).TruncateInt64ToInt32(TNode<Int64T>{tmp198});
    tmp200 = CodeStubAssembler(state_).BitcastInt32ToFloat32(TNode<Int32T>{tmp199});
    ca_.Goto(&block103, phi_bb100_20, phi_bb100_25, phi_bb100_27, phi_bb100_28, phi_bb100_29, phi_bb100_32, phi_bb100_33, phi_bb100_37, phi_bb100_39, phi_bb100_40, tmp200);
  }

  TNode<IntPtrT> phi_bb101_20;
  TNode<IntPtrT> phi_bb101_25;
  TNode<IntPtrT> phi_bb101_27;
  TNode<IntPtrT> phi_bb101_28;
  TNode<IntPtrT> phi_bb101_29;
  TNode<IntPtrT> phi_bb101_32;
  TNode<BoolT> phi_bb101_33;
  TNode<BoolT> phi_bb101_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb101_39;
  TNode<IntPtrT> phi_bb101_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp201;
  TNode<IntPtrT> tmp202;
  TNode<Float32T> tmp203;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_20, &phi_bb101_25, &phi_bb101_27, &phi_bb101_28, &phi_bb101_29, &phi_bb101_32, &phi_bb101_33, &phi_bb101_37, &phi_bb101_39, &phi_bb101_40);
    std::tie(tmp201, tmp202) = RefCast_float32_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb101_39}, TNode<IntPtrT>{phi_bb101_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp203 = CodeStubAssembler(state_).LoadReference<Float32T>(CodeStubAssembler::Reference{tmp201, tmp202});
    ca_.Goto(&block103, phi_bb101_20, phi_bb101_25, phi_bb101_27, phi_bb101_28, phi_bb101_29, phi_bb101_32, phi_bb101_33, phi_bb101_37, phi_bb101_39, phi_bb101_40, tmp203);
  }

  TNode<IntPtrT> phi_bb103_20;
  TNode<IntPtrT> phi_bb103_25;
  TNode<IntPtrT> phi_bb103_27;
  TNode<IntPtrT> phi_bb103_28;
  TNode<IntPtrT> phi_bb103_29;
  TNode<IntPtrT> phi_bb103_32;
  TNode<BoolT> phi_bb103_33;
  TNode<BoolT> phi_bb103_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb103_39;
  TNode<IntPtrT> phi_bb103_40;
  TNode<Float32T> phi_bb103_41;
  if (block103.is_used()) {
    ca_.Bind(&block103, &phi_bb103_20, &phi_bb103_25, &phi_bb103_27, &phi_bb103_28, &phi_bb103_29, &phi_bb103_32, &phi_bb103_33, &phi_bb103_37, &phi_bb103_39, &phi_bb103_40, &phi_bb103_41);
    ca_.Goto(&block99, phi_bb103_20, phi_bb103_25, phi_bb103_27, phi_bb103_28, phi_bb103_29, phi_bb103_32, phi_bb103_33, phi_bb103_37, phi_bb103_39, phi_bb103_40, phi_bb103_41);
  }

  TNode<IntPtrT> phi_bb98_20;
  TNode<IntPtrT> phi_bb98_25;
  TNode<IntPtrT> phi_bb98_27;
  TNode<IntPtrT> phi_bb98_28;
  TNode<IntPtrT> phi_bb98_29;
  TNode<IntPtrT> phi_bb98_32;
  TNode<BoolT> phi_bb98_33;
  TNode<BoolT> phi_bb98_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb98_39;
  TNode<IntPtrT> phi_bb98_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp204;
  TNode<IntPtrT> tmp205;
  TNode<Float32T> tmp206;
  if (block98.is_used()) {
    ca_.Bind(&block98, &phi_bb98_20, &phi_bb98_25, &phi_bb98_27, &phi_bb98_28, &phi_bb98_29, &phi_bb98_32, &phi_bb98_33, &phi_bb98_37, &phi_bb98_39, &phi_bb98_40);
    std::tie(tmp204, tmp205) = RefCast_float32_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb98_39}, TNode<IntPtrT>{phi_bb98_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp206 = CodeStubAssembler(state_).LoadReference<Float32T>(CodeStubAssembler::Reference{tmp204, tmp205});
    ca_.Goto(&block99, phi_bb98_20, phi_bb98_25, phi_bb98_27, phi_bb98_28, phi_bb98_29, phi_bb98_32, phi_bb98_33, phi_bb98_37, phi_bb98_39, phi_bb98_40, tmp206);
  }

  TNode<IntPtrT> phi_bb99_20;
  TNode<IntPtrT> phi_bb99_25;
  TNode<IntPtrT> phi_bb99_27;
  TNode<IntPtrT> phi_bb99_28;
  TNode<IntPtrT> phi_bb99_29;
  TNode<IntPtrT> phi_bb99_32;
  TNode<BoolT> phi_bb99_33;
  TNode<BoolT> phi_bb99_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb99_39;
  TNode<IntPtrT> phi_bb99_40;
  TNode<Float32T> phi_bb99_41;
  if (block99.is_used()) {
    ca_.Bind(&block99, &phi_bb99_20, &phi_bb99_25, &phi_bb99_27, &phi_bb99_28, &phi_bb99_29, &phi_bb99_32, &phi_bb99_33, &phi_bb99_37, &phi_bb99_39, &phi_bb99_40, &phi_bb99_41);
    ca_.Goto(&block92, phi_bb99_20, phi_bb99_25, phi_bb99_27, phi_bb99_28, phi_bb99_29, phi_bb99_32, phi_bb99_33, phi_bb99_37, phi_bb99_39, phi_bb99_40, phi_bb99_41);
  }

  TNode<IntPtrT> phi_bb92_20;
  TNode<IntPtrT> phi_bb92_25;
  TNode<IntPtrT> phi_bb92_27;
  TNode<IntPtrT> phi_bb92_28;
  TNode<IntPtrT> phi_bb92_29;
  TNode<IntPtrT> phi_bb92_32;
  TNode<BoolT> phi_bb92_33;
  TNode<BoolT> phi_bb92_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb92_39;
  TNode<IntPtrT> phi_bb92_40;
  TNode<Float32T> phi_bb92_41;
  TNode<Union<HeapObject, TaggedIndex>> tmp207;
  TNode<IntPtrT> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<IntPtrT> tmp210;
  TNode<IntPtrT> tmp211;
  TNode<UintPtrT> tmp212;
  TNode<UintPtrT> tmp213;
  TNode<BoolT> tmp214;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_20, &phi_bb92_25, &phi_bb92_27, &phi_bb92_28, &phi_bb92_29, &phi_bb92_32, &phi_bb92_33, &phi_bb92_37, &phi_bb92_39, &phi_bb92_40, &phi_bb92_41);
    std::tie(tmp207, tmp208, tmp209) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp210 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp211 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb92_20}, TNode<IntPtrT>{tmp210});
    tmp212 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb92_20});
    tmp213 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp209});
    tmp214 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp212}, TNode<UintPtrT>{tmp213});
    ca_.Branch(tmp214, &block108, std::vector<compiler::Node*>{phi_bb92_25, phi_bb92_27, phi_bb92_28, phi_bb92_29, phi_bb92_32, phi_bb92_33, phi_bb92_37, phi_bb92_39, phi_bb92_40, phi_bb92_20, phi_bb92_20, phi_bb92_20, phi_bb92_20}, &block109, std::vector<compiler::Node*>{phi_bb92_25, phi_bb92_27, phi_bb92_28, phi_bb92_29, phi_bb92_32, phi_bb92_33, phi_bb92_37, phi_bb92_39, phi_bb92_40, phi_bb92_20, phi_bb92_20, phi_bb92_20, phi_bb92_20});
  }

  TNode<IntPtrT> phi_bb108_25;
  TNode<IntPtrT> phi_bb108_27;
  TNode<IntPtrT> phi_bb108_28;
  TNode<IntPtrT> phi_bb108_29;
  TNode<IntPtrT> phi_bb108_32;
  TNode<BoolT> phi_bb108_33;
  TNode<BoolT> phi_bb108_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb108_39;
  TNode<IntPtrT> phi_bb108_40;
  TNode<IntPtrT> phi_bb108_46;
  TNode<IntPtrT> phi_bb108_47;
  TNode<IntPtrT> phi_bb108_51;
  TNode<IntPtrT> phi_bb108_52;
  TNode<IntPtrT> tmp215;
  TNode<IntPtrT> tmp216;
  TNode<Union<HeapObject, TaggedIndex>> tmp217;
  TNode<IntPtrT> tmp218;
  TNode<Number> tmp219;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_25, &phi_bb108_27, &phi_bb108_28, &phi_bb108_29, &phi_bb108_32, &phi_bb108_33, &phi_bb108_37, &phi_bb108_39, &phi_bb108_40, &phi_bb108_46, &phi_bb108_47, &phi_bb108_51, &phi_bb108_52);
    tmp215 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb108_52});
    tmp216 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp208}, TNode<IntPtrT>{tmp215});
    std::tie(tmp217, tmp218) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp207}, TNode<IntPtrT>{tmp216}).Flatten();
    tmp219 = Convert_Number_float32_0(state_, TNode<Float32T>{phi_bb92_41});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp217, tmp218}, tmp219);
    ca_.Goto(&block80, tmp211, phi_bb108_25, tmp159, phi_bb108_27, phi_bb108_28, phi_bb108_29, phi_bb108_32, phi_bb108_33, phi_bb108_37);
  }

  TNode<IntPtrT> phi_bb109_25;
  TNode<IntPtrT> phi_bb109_27;
  TNode<IntPtrT> phi_bb109_28;
  TNode<IntPtrT> phi_bb109_29;
  TNode<IntPtrT> phi_bb109_32;
  TNode<BoolT> phi_bb109_33;
  TNode<BoolT> phi_bb109_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb109_39;
  TNode<IntPtrT> phi_bb109_40;
  TNode<IntPtrT> phi_bb109_46;
  TNode<IntPtrT> phi_bb109_47;
  TNode<IntPtrT> phi_bb109_51;
  TNode<IntPtrT> phi_bb109_52;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_25, &phi_bb109_27, &phi_bb109_28, &phi_bb109_29, &phi_bb109_32, &phi_bb109_33, &phi_bb109_37, &phi_bb109_39, &phi_bb109_40, &phi_bb109_46, &phi_bb109_47, &phi_bb109_51, &phi_bb109_52);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb79_20;
  TNode<IntPtrT> phi_bb79_25;
  TNode<IntPtrT> phi_bb79_26;
  TNode<IntPtrT> phi_bb79_27;
  TNode<IntPtrT> phi_bb79_28;
  TNode<IntPtrT> phi_bb79_29;
  TNode<IntPtrT> phi_bb79_32;
  TNode<BoolT> phi_bb79_33;
  TNode<BoolT> phi_bb79_37;
  TNode<Uint32T> tmp220;
  TNode<BoolT> tmp221;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_20, &phi_bb79_25, &phi_bb79_26, &phi_bb79_27, &phi_bb79_28, &phi_bb79_29, &phi_bb79_32, &phi_bb79_33, &phi_bb79_37);
    tmp220 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp221 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp108}, TNode<Uint32T>{tmp220});
    ca_.Branch(tmp221, &block112, std::vector<compiler::Node*>{phi_bb79_20, phi_bb79_25, phi_bb79_26, phi_bb79_27, phi_bb79_28, phi_bb79_29, phi_bb79_32, phi_bb79_33, phi_bb79_37}, &block113, std::vector<compiler::Node*>{phi_bb79_20, phi_bb79_25, phi_bb79_26, phi_bb79_27, phi_bb79_28, phi_bb79_29, phi_bb79_32, phi_bb79_33, phi_bb79_37});
  }

  TNode<IntPtrT> phi_bb112_20;
  TNode<IntPtrT> phi_bb112_25;
  TNode<IntPtrT> phi_bb112_26;
  TNode<IntPtrT> phi_bb112_27;
  TNode<IntPtrT> phi_bb112_28;
  TNode<IntPtrT> phi_bb112_29;
  TNode<IntPtrT> phi_bb112_32;
  TNode<BoolT> phi_bb112_33;
  TNode<BoolT> phi_bb112_37;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_20, &phi_bb112_25, &phi_bb112_26, &phi_bb112_27, &phi_bb112_28, &phi_bb112_29, &phi_bb112_32, &phi_bb112_33, &phi_bb112_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block115, phi_bb112_20, phi_bb112_25, phi_bb112_26, phi_bb112_27, phi_bb112_28, phi_bb112_29, phi_bb112_32, phi_bb112_33, phi_bb112_37);
    } else {
      ca_.Goto(&block116, phi_bb112_20, phi_bb112_25, phi_bb112_26, phi_bb112_27, phi_bb112_28, phi_bb112_29, phi_bb112_32, phi_bb112_33, phi_bb112_37);
    }
  }

  TNode<IntPtrT> phi_bb115_20;
  TNode<IntPtrT> phi_bb115_25;
  TNode<IntPtrT> phi_bb115_26;
  TNode<IntPtrT> phi_bb115_27;
  TNode<IntPtrT> phi_bb115_28;
  TNode<IntPtrT> phi_bb115_29;
  TNode<IntPtrT> phi_bb115_32;
  TNode<BoolT> phi_bb115_33;
  TNode<BoolT> phi_bb115_37;
  TNode<IntPtrT> tmp222;
  TNode<IntPtrT> tmp223;
  TNode<IntPtrT> tmp224;
  TNode<BoolT> tmp225;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_20, &phi_bb115_25, &phi_bb115_26, &phi_bb115_27, &phi_bb115_28, &phi_bb115_29, &phi_bb115_32, &phi_bb115_33, &phi_bb115_37);
    tmp222 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp223 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb115_25}, TNode<IntPtrT>{tmp222});
    tmp224 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp225 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb115_25}, TNode<IntPtrT>{tmp224});
    ca_.Branch(tmp225, &block119, std::vector<compiler::Node*>{phi_bb115_20, phi_bb115_26, phi_bb115_27, phi_bb115_28, phi_bb115_29, phi_bb115_32, phi_bb115_33, phi_bb115_37}, &block120, std::vector<compiler::Node*>{phi_bb115_20, phi_bb115_26, phi_bb115_27, phi_bb115_28, phi_bb115_29, phi_bb115_32, phi_bb115_33, phi_bb115_37});
  }

  TNode<IntPtrT> phi_bb119_20;
  TNode<IntPtrT> phi_bb119_26;
  TNode<IntPtrT> phi_bb119_27;
  TNode<IntPtrT> phi_bb119_28;
  TNode<IntPtrT> phi_bb119_29;
  TNode<IntPtrT> phi_bb119_32;
  TNode<BoolT> phi_bb119_33;
  TNode<BoolT> phi_bb119_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp226;
  TNode<IntPtrT> tmp227;
  TNode<IntPtrT> tmp228;
  TNode<IntPtrT> tmp229;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_20, &phi_bb119_26, &phi_bb119_27, &phi_bb119_28, &phi_bb119_29, &phi_bb119_32, &phi_bb119_33, &phi_bb119_37);
    std::tie(tmp226, tmp227) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb119_27}).Flatten();
    tmp228 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp229 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb119_27}, TNode<IntPtrT>{tmp228});
    ca_.Goto(&block118, phi_bb119_20, phi_bb119_26, tmp229, phi_bb119_28, phi_bb119_29, phi_bb119_32, phi_bb119_33, phi_bb119_37, tmp226, tmp227);
  }

  TNode<IntPtrT> phi_bb120_20;
  TNode<IntPtrT> phi_bb120_26;
  TNode<IntPtrT> phi_bb120_27;
  TNode<IntPtrT> phi_bb120_28;
  TNode<IntPtrT> phi_bb120_29;
  TNode<IntPtrT> phi_bb120_32;
  TNode<BoolT> phi_bb120_33;
  TNode<BoolT> phi_bb120_37;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_20, &phi_bb120_26, &phi_bb120_27, &phi_bb120_28, &phi_bb120_29, &phi_bb120_32, &phi_bb120_33, &phi_bb120_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block122, phi_bb120_20, phi_bb120_26, phi_bb120_27, phi_bb120_28, phi_bb120_29, phi_bb120_32, phi_bb120_33, phi_bb120_37);
    } else {
      ca_.Goto(&block123, phi_bb120_20, phi_bb120_26, phi_bb120_27, phi_bb120_28, phi_bb120_29, phi_bb120_32, phi_bb120_33, phi_bb120_37);
    }
  }

  TNode<IntPtrT> phi_bb122_20;
  TNode<IntPtrT> phi_bb122_26;
  TNode<IntPtrT> phi_bb122_27;
  TNode<IntPtrT> phi_bb122_28;
  TNode<IntPtrT> phi_bb122_29;
  TNode<IntPtrT> phi_bb122_32;
  TNode<BoolT> phi_bb122_33;
  TNode<BoolT> phi_bb122_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp230;
  TNode<IntPtrT> tmp231;
  TNode<IntPtrT> tmp232;
  TNode<IntPtrT> tmp233;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_20, &phi_bb122_26, &phi_bb122_27, &phi_bb122_28, &phi_bb122_29, &phi_bb122_32, &phi_bb122_33, &phi_bb122_37);
    std::tie(tmp230, tmp231) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb122_29}).Flatten();
    tmp232 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp233 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb122_29}, TNode<IntPtrT>{tmp232});
    ca_.Goto(&block121, phi_bb122_20, phi_bb122_26, phi_bb122_27, phi_bb122_28, tmp233, phi_bb122_32, phi_bb122_33, phi_bb122_37, tmp230, tmp231);
  }

  TNode<IntPtrT> phi_bb123_20;
  TNode<IntPtrT> phi_bb123_26;
  TNode<IntPtrT> phi_bb123_27;
  TNode<IntPtrT> phi_bb123_28;
  TNode<IntPtrT> phi_bb123_29;
  TNode<IntPtrT> phi_bb123_32;
  TNode<BoolT> phi_bb123_33;
  TNode<BoolT> phi_bb123_37;
  TNode<IntPtrT> tmp234;
  TNode<BoolT> tmp235;
  if (block123.is_used()) {
    ca_.Bind(&block123, &phi_bb123_20, &phi_bb123_26, &phi_bb123_27, &phi_bb123_28, &phi_bb123_29, &phi_bb123_32, &phi_bb123_33, &phi_bb123_37);
    tmp234 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp235 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb123_32}, TNode<IntPtrT>{tmp234});
    ca_.Branch(tmp235, &block125, std::vector<compiler::Node*>{phi_bb123_20, phi_bb123_26, phi_bb123_27, phi_bb123_28, phi_bb123_29, phi_bb123_32, phi_bb123_33, phi_bb123_37}, &block126, std::vector<compiler::Node*>{phi_bb123_20, phi_bb123_26, phi_bb123_27, phi_bb123_28, phi_bb123_29, phi_bb123_32, phi_bb123_33, phi_bb123_37});
  }

  TNode<IntPtrT> phi_bb125_20;
  TNode<IntPtrT> phi_bb125_26;
  TNode<IntPtrT> phi_bb125_27;
  TNode<IntPtrT> phi_bb125_28;
  TNode<IntPtrT> phi_bb125_29;
  TNode<IntPtrT> phi_bb125_32;
  TNode<BoolT> phi_bb125_33;
  TNode<BoolT> phi_bb125_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp236;
  TNode<IntPtrT> tmp237;
  TNode<IntPtrT> tmp238;
  TNode<BoolT> tmp239;
  if (block125.is_used()) {
    ca_.Bind(&block125, &phi_bb125_20, &phi_bb125_26, &phi_bb125_27, &phi_bb125_28, &phi_bb125_29, &phi_bb125_32, &phi_bb125_33, &phi_bb125_37);
    std::tie(tmp236, tmp237) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb125_32}).Flatten();
    tmp238 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp239 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block121, phi_bb125_20, phi_bb125_26, phi_bb125_27, phi_bb125_28, phi_bb125_29, tmp238, tmp239, phi_bb125_37, tmp236, tmp237);
  }

  TNode<IntPtrT> phi_bb126_20;
  TNode<IntPtrT> phi_bb126_26;
  TNode<IntPtrT> phi_bb126_27;
  TNode<IntPtrT> phi_bb126_28;
  TNode<IntPtrT> phi_bb126_29;
  TNode<IntPtrT> phi_bb126_32;
  TNode<BoolT> phi_bb126_33;
  TNode<BoolT> phi_bb126_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp240;
  TNode<IntPtrT> tmp241;
  TNode<IntPtrT> tmp242;
  TNode<IntPtrT> tmp243;
  TNode<IntPtrT> tmp244;
  TNode<IntPtrT> tmp245;
  TNode<BoolT> tmp246;
  if (block126.is_used()) {
    ca_.Bind(&block126, &phi_bb126_20, &phi_bb126_26, &phi_bb126_27, &phi_bb126_28, &phi_bb126_29, &phi_bb126_32, &phi_bb126_33, &phi_bb126_37);
    std::tie(tmp240, tmp241) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb126_29}).Flatten();
    tmp242 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp243 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb126_29}, TNode<IntPtrT>{tmp242});
    tmp244 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp245 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp243}, TNode<IntPtrT>{tmp244});
    tmp246 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block121, phi_bb126_20, phi_bb126_26, phi_bb126_27, phi_bb126_28, tmp245, tmp243, tmp246, phi_bb126_37, tmp240, tmp241);
  }

  TNode<IntPtrT> phi_bb121_20;
  TNode<IntPtrT> phi_bb121_26;
  TNode<IntPtrT> phi_bb121_27;
  TNode<IntPtrT> phi_bb121_28;
  TNode<IntPtrT> phi_bb121_29;
  TNode<IntPtrT> phi_bb121_32;
  TNode<BoolT> phi_bb121_33;
  TNode<BoolT> phi_bb121_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb121_39;
  TNode<IntPtrT> phi_bb121_40;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_20, &phi_bb121_26, &phi_bb121_27, &phi_bb121_28, &phi_bb121_29, &phi_bb121_32, &phi_bb121_33, &phi_bb121_37, &phi_bb121_39, &phi_bb121_40);
    ca_.Goto(&block118, phi_bb121_20, phi_bb121_26, phi_bb121_27, phi_bb121_28, phi_bb121_29, phi_bb121_32, phi_bb121_33, phi_bb121_37, phi_bb121_39, phi_bb121_40);
  }

  TNode<IntPtrT> phi_bb118_20;
  TNode<IntPtrT> phi_bb118_26;
  TNode<IntPtrT> phi_bb118_27;
  TNode<IntPtrT> phi_bb118_28;
  TNode<IntPtrT> phi_bb118_29;
  TNode<IntPtrT> phi_bb118_32;
  TNode<BoolT> phi_bb118_33;
  TNode<BoolT> phi_bb118_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb118_39;
  TNode<IntPtrT> phi_bb118_40;
  TNode<IntPtrT> tmp247;
  TNode<Union<HeapObject, TaggedIndex>> tmp248;
  TNode<IntPtrT> tmp249;
  TNode<IntPtrT> tmp250;
  TNode<IntPtrT> tmp251;
  TNode<IntPtrT> tmp252;
  TNode<UintPtrT> tmp253;
  TNode<UintPtrT> tmp254;
  TNode<BoolT> tmp255;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_20, &phi_bb118_26, &phi_bb118_27, &phi_bb118_28, &phi_bb118_29, &phi_bb118_32, &phi_bb118_33, &phi_bb118_37, &phi_bb118_39, &phi_bb118_40);
    tmp247 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb118_39, phi_bb118_40});
    std::tie(tmp248, tmp249, tmp250) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp251 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp252 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb118_20}, TNode<IntPtrT>{tmp251});
    tmp253 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb118_20});
    tmp254 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp250});
    tmp255 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp253}, TNode<UintPtrT>{tmp254});
    ca_.Branch(tmp255, &block131, std::vector<compiler::Node*>{phi_bb118_26, phi_bb118_27, phi_bb118_28, phi_bb118_29, phi_bb118_32, phi_bb118_33, phi_bb118_37, phi_bb118_39, phi_bb118_40, phi_bb118_20, phi_bb118_20, phi_bb118_20, phi_bb118_20}, &block132, std::vector<compiler::Node*>{phi_bb118_26, phi_bb118_27, phi_bb118_28, phi_bb118_29, phi_bb118_32, phi_bb118_33, phi_bb118_37, phi_bb118_39, phi_bb118_40, phi_bb118_20, phi_bb118_20, phi_bb118_20, phi_bb118_20});
  }

  TNode<IntPtrT> phi_bb131_26;
  TNode<IntPtrT> phi_bb131_27;
  TNode<IntPtrT> phi_bb131_28;
  TNode<IntPtrT> phi_bb131_29;
  TNode<IntPtrT> phi_bb131_32;
  TNode<BoolT> phi_bb131_33;
  TNode<BoolT> phi_bb131_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb131_39;
  TNode<IntPtrT> phi_bb131_40;
  TNode<IntPtrT> phi_bb131_46;
  TNode<IntPtrT> phi_bb131_47;
  TNode<IntPtrT> phi_bb131_51;
  TNode<IntPtrT> phi_bb131_52;
  TNode<IntPtrT> tmp256;
  TNode<IntPtrT> tmp257;
  TNode<Union<HeapObject, TaggedIndex>> tmp258;
  TNode<IntPtrT> tmp259;
  TNode<BigInt> tmp260;
  if (block131.is_used()) {
    ca_.Bind(&block131, &phi_bb131_26, &phi_bb131_27, &phi_bb131_28, &phi_bb131_29, &phi_bb131_32, &phi_bb131_33, &phi_bb131_37, &phi_bb131_39, &phi_bb131_40, &phi_bb131_46, &phi_bb131_47, &phi_bb131_51, &phi_bb131_52);
    tmp256 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb131_52});
    tmp257 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp249}, TNode<IntPtrT>{tmp256});
    std::tie(tmp258, tmp259) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp248}, TNode<IntPtrT>{tmp257}).Flatten();
    tmp260 = ca_.CallBuiltin<BigInt>(Builtin::kI64ToBigInt, TNode<Object>(), tmp247);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp258, tmp259}, tmp260);
    ca_.Goto(&block117, tmp252, tmp223, phi_bb131_26, phi_bb131_27, phi_bb131_28, phi_bb131_29, phi_bb131_32, phi_bb131_33, phi_bb131_37);
  }

  TNode<IntPtrT> phi_bb132_26;
  TNode<IntPtrT> phi_bb132_27;
  TNode<IntPtrT> phi_bb132_28;
  TNode<IntPtrT> phi_bb132_29;
  TNode<IntPtrT> phi_bb132_32;
  TNode<BoolT> phi_bb132_33;
  TNode<BoolT> phi_bb132_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb132_39;
  TNode<IntPtrT> phi_bb132_40;
  TNode<IntPtrT> phi_bb132_46;
  TNode<IntPtrT> phi_bb132_47;
  TNode<IntPtrT> phi_bb132_51;
  TNode<IntPtrT> phi_bb132_52;
  if (block132.is_used()) {
    ca_.Bind(&block132, &phi_bb132_26, &phi_bb132_27, &phi_bb132_28, &phi_bb132_29, &phi_bb132_32, &phi_bb132_33, &phi_bb132_37, &phi_bb132_39, &phi_bb132_40, &phi_bb132_46, &phi_bb132_47, &phi_bb132_51, &phi_bb132_52);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb116_20;
  TNode<IntPtrT> phi_bb116_25;
  TNode<IntPtrT> phi_bb116_26;
  TNode<IntPtrT> phi_bb116_27;
  TNode<IntPtrT> phi_bb116_28;
  TNode<IntPtrT> phi_bb116_29;
  TNode<IntPtrT> phi_bb116_32;
  TNode<BoolT> phi_bb116_33;
  TNode<BoolT> phi_bb116_37;
  TNode<IntPtrT> tmp261;
  TNode<IntPtrT> tmp262;
  TNode<IntPtrT> tmp263;
  TNode<BoolT> tmp264;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_20, &phi_bb116_25, &phi_bb116_26, &phi_bb116_27, &phi_bb116_28, &phi_bb116_29, &phi_bb116_32, &phi_bb116_33, &phi_bb116_37);
    tmp261 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp262 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb116_25}, TNode<IntPtrT>{tmp261});
    tmp263 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp264 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb116_25}, TNode<IntPtrT>{tmp263});
    ca_.Branch(tmp264, &block136, std::vector<compiler::Node*>{phi_bb116_20, phi_bb116_26, phi_bb116_27, phi_bb116_28, phi_bb116_29, phi_bb116_32, phi_bb116_33, phi_bb116_37}, &block137, std::vector<compiler::Node*>{phi_bb116_20, phi_bb116_26, phi_bb116_27, phi_bb116_28, phi_bb116_29, phi_bb116_32, phi_bb116_33, phi_bb116_37});
  }

  TNode<IntPtrT> phi_bb136_20;
  TNode<IntPtrT> phi_bb136_26;
  TNode<IntPtrT> phi_bb136_27;
  TNode<IntPtrT> phi_bb136_28;
  TNode<IntPtrT> phi_bb136_29;
  TNode<IntPtrT> phi_bb136_32;
  TNode<BoolT> phi_bb136_33;
  TNode<BoolT> phi_bb136_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp265;
  TNode<IntPtrT> tmp266;
  TNode<IntPtrT> tmp267;
  TNode<IntPtrT> tmp268;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_20, &phi_bb136_26, &phi_bb136_27, &phi_bb136_28, &phi_bb136_29, &phi_bb136_32, &phi_bb136_33, &phi_bb136_37);
    std::tie(tmp265, tmp266) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb136_27}).Flatten();
    tmp267 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp268 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb136_27}, TNode<IntPtrT>{tmp267});
    ca_.Goto(&block135, phi_bb136_20, phi_bb136_26, tmp268, phi_bb136_28, phi_bb136_29, phi_bb136_32, phi_bb136_33, phi_bb136_37, tmp265, tmp266);
  }

  TNode<IntPtrT> phi_bb137_20;
  TNode<IntPtrT> phi_bb137_26;
  TNode<IntPtrT> phi_bb137_27;
  TNode<IntPtrT> phi_bb137_28;
  TNode<IntPtrT> phi_bb137_29;
  TNode<IntPtrT> phi_bb137_32;
  TNode<BoolT> phi_bb137_33;
  TNode<BoolT> phi_bb137_37;
  if (block137.is_used()) {
    ca_.Bind(&block137, &phi_bb137_20, &phi_bb137_26, &phi_bb137_27, &phi_bb137_28, &phi_bb137_29, &phi_bb137_32, &phi_bb137_33, &phi_bb137_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block139, phi_bb137_20, phi_bb137_26, phi_bb137_27, phi_bb137_28, phi_bb137_29, phi_bb137_32, phi_bb137_33, phi_bb137_37);
    } else {
      ca_.Goto(&block140, phi_bb137_20, phi_bb137_26, phi_bb137_27, phi_bb137_28, phi_bb137_29, phi_bb137_32, phi_bb137_33, phi_bb137_37);
    }
  }

  TNode<IntPtrT> phi_bb139_20;
  TNode<IntPtrT> phi_bb139_26;
  TNode<IntPtrT> phi_bb139_27;
  TNode<IntPtrT> phi_bb139_28;
  TNode<IntPtrT> phi_bb139_29;
  TNode<IntPtrT> phi_bb139_32;
  TNode<BoolT> phi_bb139_33;
  TNode<BoolT> phi_bb139_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp269;
  TNode<IntPtrT> tmp270;
  TNode<IntPtrT> tmp271;
  TNode<IntPtrT> tmp272;
  if (block139.is_used()) {
    ca_.Bind(&block139, &phi_bb139_20, &phi_bb139_26, &phi_bb139_27, &phi_bb139_28, &phi_bb139_29, &phi_bb139_32, &phi_bb139_33, &phi_bb139_37);
    std::tie(tmp269, tmp270) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb139_29}).Flatten();
    tmp271 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp272 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb139_29}, TNode<IntPtrT>{tmp271});
    ca_.Goto(&block138, phi_bb139_20, phi_bb139_26, phi_bb139_27, phi_bb139_28, tmp272, phi_bb139_32, phi_bb139_33, phi_bb139_37, tmp269, tmp270);
  }

  TNode<IntPtrT> phi_bb140_20;
  TNode<IntPtrT> phi_bb140_26;
  TNode<IntPtrT> phi_bb140_27;
  TNode<IntPtrT> phi_bb140_28;
  TNode<IntPtrT> phi_bb140_29;
  TNode<IntPtrT> phi_bb140_32;
  TNode<BoolT> phi_bb140_33;
  TNode<BoolT> phi_bb140_37;
  TNode<IntPtrT> tmp273;
  TNode<BoolT> tmp274;
  if (block140.is_used()) {
    ca_.Bind(&block140, &phi_bb140_20, &phi_bb140_26, &phi_bb140_27, &phi_bb140_28, &phi_bb140_29, &phi_bb140_32, &phi_bb140_33, &phi_bb140_37);
    tmp273 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp274 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb140_32}, TNode<IntPtrT>{tmp273});
    ca_.Branch(tmp274, &block142, std::vector<compiler::Node*>{phi_bb140_20, phi_bb140_26, phi_bb140_27, phi_bb140_28, phi_bb140_29, phi_bb140_32, phi_bb140_33, phi_bb140_37}, &block143, std::vector<compiler::Node*>{phi_bb140_20, phi_bb140_26, phi_bb140_27, phi_bb140_28, phi_bb140_29, phi_bb140_32, phi_bb140_33, phi_bb140_37});
  }

  TNode<IntPtrT> phi_bb142_20;
  TNode<IntPtrT> phi_bb142_26;
  TNode<IntPtrT> phi_bb142_27;
  TNode<IntPtrT> phi_bb142_28;
  TNode<IntPtrT> phi_bb142_29;
  TNode<IntPtrT> phi_bb142_32;
  TNode<BoolT> phi_bb142_33;
  TNode<BoolT> phi_bb142_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp275;
  TNode<IntPtrT> tmp276;
  TNode<IntPtrT> tmp277;
  TNode<BoolT> tmp278;
  if (block142.is_used()) {
    ca_.Bind(&block142, &phi_bb142_20, &phi_bb142_26, &phi_bb142_27, &phi_bb142_28, &phi_bb142_29, &phi_bb142_32, &phi_bb142_33, &phi_bb142_37);
    std::tie(tmp275, tmp276) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb142_32}).Flatten();
    tmp277 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp278 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block138, phi_bb142_20, phi_bb142_26, phi_bb142_27, phi_bb142_28, phi_bb142_29, tmp277, tmp278, phi_bb142_37, tmp275, tmp276);
  }

  TNode<IntPtrT> phi_bb143_20;
  TNode<IntPtrT> phi_bb143_26;
  TNode<IntPtrT> phi_bb143_27;
  TNode<IntPtrT> phi_bb143_28;
  TNode<IntPtrT> phi_bb143_29;
  TNode<IntPtrT> phi_bb143_32;
  TNode<BoolT> phi_bb143_33;
  TNode<BoolT> phi_bb143_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp279;
  TNode<IntPtrT> tmp280;
  TNode<IntPtrT> tmp281;
  TNode<IntPtrT> tmp282;
  TNode<IntPtrT> tmp283;
  TNode<IntPtrT> tmp284;
  TNode<BoolT> tmp285;
  if (block143.is_used()) {
    ca_.Bind(&block143, &phi_bb143_20, &phi_bb143_26, &phi_bb143_27, &phi_bb143_28, &phi_bb143_29, &phi_bb143_32, &phi_bb143_33, &phi_bb143_37);
    std::tie(tmp279, tmp280) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb143_29}).Flatten();
    tmp281 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp282 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb143_29}, TNode<IntPtrT>{tmp281});
    tmp283 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp284 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp282}, TNode<IntPtrT>{tmp283});
    tmp285 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block138, phi_bb143_20, phi_bb143_26, phi_bb143_27, phi_bb143_28, tmp284, tmp282, tmp285, phi_bb143_37, tmp279, tmp280);
  }

  TNode<IntPtrT> phi_bb138_20;
  TNode<IntPtrT> phi_bb138_26;
  TNode<IntPtrT> phi_bb138_27;
  TNode<IntPtrT> phi_bb138_28;
  TNode<IntPtrT> phi_bb138_29;
  TNode<IntPtrT> phi_bb138_32;
  TNode<BoolT> phi_bb138_33;
  TNode<BoolT> phi_bb138_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb138_39;
  TNode<IntPtrT> phi_bb138_40;
  if (block138.is_used()) {
    ca_.Bind(&block138, &phi_bb138_20, &phi_bb138_26, &phi_bb138_27, &phi_bb138_28, &phi_bb138_29, &phi_bb138_32, &phi_bb138_33, &phi_bb138_37, &phi_bb138_39, &phi_bb138_40);
    ca_.Goto(&block135, phi_bb138_20, phi_bb138_26, phi_bb138_27, phi_bb138_28, phi_bb138_29, phi_bb138_32, phi_bb138_33, phi_bb138_37, phi_bb138_39, phi_bb138_40);
  }

  TNode<IntPtrT> phi_bb135_20;
  TNode<IntPtrT> phi_bb135_26;
  TNode<IntPtrT> phi_bb135_27;
  TNode<IntPtrT> phi_bb135_28;
  TNode<IntPtrT> phi_bb135_29;
  TNode<IntPtrT> phi_bb135_32;
  TNode<BoolT> phi_bb135_33;
  TNode<BoolT> phi_bb135_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb135_39;
  TNode<IntPtrT> phi_bb135_40;
  TNode<IntPtrT> tmp286;
  TNode<IntPtrT> tmp287;
  TNode<IntPtrT> tmp288;
  TNode<BoolT> tmp289;
  if (block135.is_used()) {
    ca_.Bind(&block135, &phi_bb135_20, &phi_bb135_26, &phi_bb135_27, &phi_bb135_28, &phi_bb135_29, &phi_bb135_32, &phi_bb135_33, &phi_bb135_37, &phi_bb135_39, &phi_bb135_40);
    tmp286 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp287 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp262}, TNode<IntPtrT>{tmp286});
    tmp288 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp289 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp262}, TNode<IntPtrT>{tmp288});
    ca_.Branch(tmp289, &block145, std::vector<compiler::Node*>{phi_bb135_20, phi_bb135_26, phi_bb135_27, phi_bb135_28, phi_bb135_29, phi_bb135_32, phi_bb135_33, phi_bb135_37, phi_bb135_39, phi_bb135_40}, &block146, std::vector<compiler::Node*>{phi_bb135_20, phi_bb135_26, phi_bb135_27, phi_bb135_28, phi_bb135_29, phi_bb135_32, phi_bb135_33, phi_bb135_37, phi_bb135_39, phi_bb135_40});
  }

  TNode<IntPtrT> phi_bb145_20;
  TNode<IntPtrT> phi_bb145_26;
  TNode<IntPtrT> phi_bb145_27;
  TNode<IntPtrT> phi_bb145_28;
  TNode<IntPtrT> phi_bb145_29;
  TNode<IntPtrT> phi_bb145_32;
  TNode<BoolT> phi_bb145_33;
  TNode<BoolT> phi_bb145_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb145_39;
  TNode<IntPtrT> phi_bb145_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp290;
  TNode<IntPtrT> tmp291;
  TNode<IntPtrT> tmp292;
  TNode<IntPtrT> tmp293;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_20, &phi_bb145_26, &phi_bb145_27, &phi_bb145_28, &phi_bb145_29, &phi_bb145_32, &phi_bb145_33, &phi_bb145_37, &phi_bb145_39, &phi_bb145_40);
    std::tie(tmp290, tmp291) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb145_27}).Flatten();
    tmp292 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp293 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb145_27}, TNode<IntPtrT>{tmp292});
    ca_.Goto(&block144, phi_bb145_20, phi_bb145_26, tmp293, phi_bb145_28, phi_bb145_29, phi_bb145_32, phi_bb145_33, phi_bb145_37, phi_bb145_39, phi_bb145_40, tmp290, tmp291);
  }

  TNode<IntPtrT> phi_bb146_20;
  TNode<IntPtrT> phi_bb146_26;
  TNode<IntPtrT> phi_bb146_27;
  TNode<IntPtrT> phi_bb146_28;
  TNode<IntPtrT> phi_bb146_29;
  TNode<IntPtrT> phi_bb146_32;
  TNode<BoolT> phi_bb146_33;
  TNode<BoolT> phi_bb146_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb146_39;
  TNode<IntPtrT> phi_bb146_40;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_20, &phi_bb146_26, &phi_bb146_27, &phi_bb146_28, &phi_bb146_29, &phi_bb146_32, &phi_bb146_33, &phi_bb146_37, &phi_bb146_39, &phi_bb146_40);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block148, phi_bb146_20, phi_bb146_26, phi_bb146_27, phi_bb146_28, phi_bb146_29, phi_bb146_32, phi_bb146_33, phi_bb146_37, phi_bb146_39, phi_bb146_40);
    } else {
      ca_.Goto(&block149, phi_bb146_20, phi_bb146_26, phi_bb146_27, phi_bb146_28, phi_bb146_29, phi_bb146_32, phi_bb146_33, phi_bb146_37, phi_bb146_39, phi_bb146_40);
    }
  }

  TNode<IntPtrT> phi_bb148_20;
  TNode<IntPtrT> phi_bb148_26;
  TNode<IntPtrT> phi_bb148_27;
  TNode<IntPtrT> phi_bb148_28;
  TNode<IntPtrT> phi_bb148_29;
  TNode<IntPtrT> phi_bb148_32;
  TNode<BoolT> phi_bb148_33;
  TNode<BoolT> phi_bb148_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb148_39;
  TNode<IntPtrT> phi_bb148_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp294;
  TNode<IntPtrT> tmp295;
  TNode<IntPtrT> tmp296;
  TNode<IntPtrT> tmp297;
  if (block148.is_used()) {
    ca_.Bind(&block148, &phi_bb148_20, &phi_bb148_26, &phi_bb148_27, &phi_bb148_28, &phi_bb148_29, &phi_bb148_32, &phi_bb148_33, &phi_bb148_37, &phi_bb148_39, &phi_bb148_40);
    std::tie(tmp294, tmp295) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb148_29}).Flatten();
    tmp296 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp297 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb148_29}, TNode<IntPtrT>{tmp296});
    ca_.Goto(&block147, phi_bb148_20, phi_bb148_26, phi_bb148_27, phi_bb148_28, tmp297, phi_bb148_32, phi_bb148_33, phi_bb148_37, phi_bb148_39, phi_bb148_40, tmp294, tmp295);
  }

  TNode<IntPtrT> phi_bb149_20;
  TNode<IntPtrT> phi_bb149_26;
  TNode<IntPtrT> phi_bb149_27;
  TNode<IntPtrT> phi_bb149_28;
  TNode<IntPtrT> phi_bb149_29;
  TNode<IntPtrT> phi_bb149_32;
  TNode<BoolT> phi_bb149_33;
  TNode<BoolT> phi_bb149_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb149_39;
  TNode<IntPtrT> phi_bb149_40;
  TNode<IntPtrT> tmp298;
  TNode<BoolT> tmp299;
  if (block149.is_used()) {
    ca_.Bind(&block149, &phi_bb149_20, &phi_bb149_26, &phi_bb149_27, &phi_bb149_28, &phi_bb149_29, &phi_bb149_32, &phi_bb149_33, &phi_bb149_37, &phi_bb149_39, &phi_bb149_40);
    tmp298 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp299 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb149_32}, TNode<IntPtrT>{tmp298});
    ca_.Branch(tmp299, &block151, std::vector<compiler::Node*>{phi_bb149_20, phi_bb149_26, phi_bb149_27, phi_bb149_28, phi_bb149_29, phi_bb149_32, phi_bb149_33, phi_bb149_37, phi_bb149_39, phi_bb149_40}, &block152, std::vector<compiler::Node*>{phi_bb149_20, phi_bb149_26, phi_bb149_27, phi_bb149_28, phi_bb149_29, phi_bb149_32, phi_bb149_33, phi_bb149_37, phi_bb149_39, phi_bb149_40});
  }

  TNode<IntPtrT> phi_bb151_20;
  TNode<IntPtrT> phi_bb151_26;
  TNode<IntPtrT> phi_bb151_27;
  TNode<IntPtrT> phi_bb151_28;
  TNode<IntPtrT> phi_bb151_29;
  TNode<IntPtrT> phi_bb151_32;
  TNode<BoolT> phi_bb151_33;
  TNode<BoolT> phi_bb151_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb151_39;
  TNode<IntPtrT> phi_bb151_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp300;
  TNode<IntPtrT> tmp301;
  TNode<IntPtrT> tmp302;
  TNode<BoolT> tmp303;
  if (block151.is_used()) {
    ca_.Bind(&block151, &phi_bb151_20, &phi_bb151_26, &phi_bb151_27, &phi_bb151_28, &phi_bb151_29, &phi_bb151_32, &phi_bb151_33, &phi_bb151_37, &phi_bb151_39, &phi_bb151_40);
    std::tie(tmp300, tmp301) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb151_32}).Flatten();
    tmp302 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp303 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block147, phi_bb151_20, phi_bb151_26, phi_bb151_27, phi_bb151_28, phi_bb151_29, tmp302, tmp303, phi_bb151_37, phi_bb151_39, phi_bb151_40, tmp300, tmp301);
  }

  TNode<IntPtrT> phi_bb152_20;
  TNode<IntPtrT> phi_bb152_26;
  TNode<IntPtrT> phi_bb152_27;
  TNode<IntPtrT> phi_bb152_28;
  TNode<IntPtrT> phi_bb152_29;
  TNode<IntPtrT> phi_bb152_32;
  TNode<BoolT> phi_bb152_33;
  TNode<BoolT> phi_bb152_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb152_39;
  TNode<IntPtrT> phi_bb152_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp304;
  TNode<IntPtrT> tmp305;
  TNode<IntPtrT> tmp306;
  TNode<IntPtrT> tmp307;
  TNode<IntPtrT> tmp308;
  TNode<IntPtrT> tmp309;
  TNode<BoolT> tmp310;
  if (block152.is_used()) {
    ca_.Bind(&block152, &phi_bb152_20, &phi_bb152_26, &phi_bb152_27, &phi_bb152_28, &phi_bb152_29, &phi_bb152_32, &phi_bb152_33, &phi_bb152_37, &phi_bb152_39, &phi_bb152_40);
    std::tie(tmp304, tmp305) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb152_29}).Flatten();
    tmp306 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp307 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb152_29}, TNode<IntPtrT>{tmp306});
    tmp308 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp309 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp307}, TNode<IntPtrT>{tmp308});
    tmp310 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block147, phi_bb152_20, phi_bb152_26, phi_bb152_27, phi_bb152_28, tmp309, tmp307, tmp310, phi_bb152_37, phi_bb152_39, phi_bb152_40, tmp304, tmp305);
  }

  TNode<IntPtrT> phi_bb147_20;
  TNode<IntPtrT> phi_bb147_26;
  TNode<IntPtrT> phi_bb147_27;
  TNode<IntPtrT> phi_bb147_28;
  TNode<IntPtrT> phi_bb147_29;
  TNode<IntPtrT> phi_bb147_32;
  TNode<BoolT> phi_bb147_33;
  TNode<BoolT> phi_bb147_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb147_39;
  TNode<IntPtrT> phi_bb147_40;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb147_41;
  TNode<IntPtrT> phi_bb147_42;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_20, &phi_bb147_26, &phi_bb147_27, &phi_bb147_28, &phi_bb147_29, &phi_bb147_32, &phi_bb147_33, &phi_bb147_37, &phi_bb147_39, &phi_bb147_40, &phi_bb147_41, &phi_bb147_42);
    ca_.Goto(&block144, phi_bb147_20, phi_bb147_26, phi_bb147_27, phi_bb147_28, phi_bb147_29, phi_bb147_32, phi_bb147_33, phi_bb147_37, phi_bb147_39, phi_bb147_40, phi_bb147_41, phi_bb147_42);
  }

  TNode<IntPtrT> phi_bb144_20;
  TNode<IntPtrT> phi_bb144_26;
  TNode<IntPtrT> phi_bb144_27;
  TNode<IntPtrT> phi_bb144_28;
  TNode<IntPtrT> phi_bb144_29;
  TNode<IntPtrT> phi_bb144_32;
  TNode<BoolT> phi_bb144_33;
  TNode<BoolT> phi_bb144_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb144_39;
  TNode<IntPtrT> phi_bb144_40;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb144_41;
  TNode<IntPtrT> phi_bb144_42;
  TNode<IntPtrT> tmp311;
  TNode<IntPtrT> tmp312;
  TNode<Union<HeapObject, TaggedIndex>> tmp313;
  TNode<IntPtrT> tmp314;
  TNode<IntPtrT> tmp315;
  TNode<IntPtrT> tmp316;
  TNode<IntPtrT> tmp317;
  TNode<UintPtrT> tmp318;
  TNode<UintPtrT> tmp319;
  TNode<BoolT> tmp320;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_20, &phi_bb144_26, &phi_bb144_27, &phi_bb144_28, &phi_bb144_29, &phi_bb144_32, &phi_bb144_33, &phi_bb144_37, &phi_bb144_39, &phi_bb144_40, &phi_bb144_41, &phi_bb144_42);
    tmp311 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb144_39, phi_bb144_40});
    tmp312 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb144_41, phi_bb144_42});
    std::tie(tmp313, tmp314, tmp315) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp316 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp317 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb144_20}, TNode<IntPtrT>{tmp316});
    tmp318 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb144_20});
    tmp319 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp315});
    tmp320 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp318}, TNode<UintPtrT>{tmp319});
    ca_.Branch(tmp320, &block157, std::vector<compiler::Node*>{phi_bb144_26, phi_bb144_27, phi_bb144_28, phi_bb144_29, phi_bb144_32, phi_bb144_33, phi_bb144_37, phi_bb144_39, phi_bb144_40, phi_bb144_41, phi_bb144_42, phi_bb144_20, phi_bb144_20, phi_bb144_20, phi_bb144_20}, &block158, std::vector<compiler::Node*>{phi_bb144_26, phi_bb144_27, phi_bb144_28, phi_bb144_29, phi_bb144_32, phi_bb144_33, phi_bb144_37, phi_bb144_39, phi_bb144_40, phi_bb144_41, phi_bb144_42, phi_bb144_20, phi_bb144_20, phi_bb144_20, phi_bb144_20});
  }

  TNode<IntPtrT> phi_bb157_26;
  TNode<IntPtrT> phi_bb157_27;
  TNode<IntPtrT> phi_bb157_28;
  TNode<IntPtrT> phi_bb157_29;
  TNode<IntPtrT> phi_bb157_32;
  TNode<BoolT> phi_bb157_33;
  TNode<BoolT> phi_bb157_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb157_39;
  TNode<IntPtrT> phi_bb157_40;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb157_41;
  TNode<IntPtrT> phi_bb157_42;
  TNode<IntPtrT> phi_bb157_49;
  TNode<IntPtrT> phi_bb157_50;
  TNode<IntPtrT> phi_bb157_54;
  TNode<IntPtrT> phi_bb157_55;
  TNode<IntPtrT> tmp321;
  TNode<IntPtrT> tmp322;
  TNode<Union<HeapObject, TaggedIndex>> tmp323;
  TNode<IntPtrT> tmp324;
  TNode<BigInt> tmp325;
  if (block157.is_used()) {
    ca_.Bind(&block157, &phi_bb157_26, &phi_bb157_27, &phi_bb157_28, &phi_bb157_29, &phi_bb157_32, &phi_bb157_33, &phi_bb157_37, &phi_bb157_39, &phi_bb157_40, &phi_bb157_41, &phi_bb157_42, &phi_bb157_49, &phi_bb157_50, &phi_bb157_54, &phi_bb157_55);
    tmp321 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb157_55});
    tmp322 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp314}, TNode<IntPtrT>{tmp321});
    std::tie(tmp323, tmp324) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp313}, TNode<IntPtrT>{tmp322}).Flatten();
    tmp325 = ca_.CallBuiltin<BigInt>(Builtin::kI32PairToBigInt, TNode<Object>(), tmp311, tmp312);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp323, tmp324}, tmp325);
    ca_.Goto(&block117, tmp317, tmp287, phi_bb157_26, phi_bb157_27, phi_bb157_28, phi_bb157_29, phi_bb157_32, phi_bb157_33, phi_bb157_37);
  }

  TNode<IntPtrT> phi_bb158_26;
  TNode<IntPtrT> phi_bb158_27;
  TNode<IntPtrT> phi_bb158_28;
  TNode<IntPtrT> phi_bb158_29;
  TNode<IntPtrT> phi_bb158_32;
  TNode<BoolT> phi_bb158_33;
  TNode<BoolT> phi_bb158_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb158_39;
  TNode<IntPtrT> phi_bb158_40;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb158_41;
  TNode<IntPtrT> phi_bb158_42;
  TNode<IntPtrT> phi_bb158_49;
  TNode<IntPtrT> phi_bb158_50;
  TNode<IntPtrT> phi_bb158_54;
  TNode<IntPtrT> phi_bb158_55;
  if (block158.is_used()) {
    ca_.Bind(&block158, &phi_bb158_26, &phi_bb158_27, &phi_bb158_28, &phi_bb158_29, &phi_bb158_32, &phi_bb158_33, &phi_bb158_37, &phi_bb158_39, &phi_bb158_40, &phi_bb158_41, &phi_bb158_42, &phi_bb158_49, &phi_bb158_50, &phi_bb158_54, &phi_bb158_55);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb117_20;
  TNode<IntPtrT> phi_bb117_25;
  TNode<IntPtrT> phi_bb117_26;
  TNode<IntPtrT> phi_bb117_27;
  TNode<IntPtrT> phi_bb117_28;
  TNode<IntPtrT> phi_bb117_29;
  TNode<IntPtrT> phi_bb117_32;
  TNode<BoolT> phi_bb117_33;
  TNode<BoolT> phi_bb117_37;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_20, &phi_bb117_25, &phi_bb117_26, &phi_bb117_27, &phi_bb117_28, &phi_bb117_29, &phi_bb117_32, &phi_bb117_33, &phi_bb117_37);
    ca_.Goto(&block114, phi_bb117_20, phi_bb117_25, phi_bb117_26, phi_bb117_27, phi_bb117_28, phi_bb117_29, phi_bb117_32, phi_bb117_33, phi_bb117_37);
  }

  TNode<IntPtrT> phi_bb113_20;
  TNode<IntPtrT> phi_bb113_25;
  TNode<IntPtrT> phi_bb113_26;
  TNode<IntPtrT> phi_bb113_27;
  TNode<IntPtrT> phi_bb113_28;
  TNode<IntPtrT> phi_bb113_29;
  TNode<IntPtrT> phi_bb113_32;
  TNode<BoolT> phi_bb113_33;
  TNode<BoolT> phi_bb113_37;
  TNode<Uint32T> tmp326;
  TNode<BoolT> tmp327;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_20, &phi_bb113_25, &phi_bb113_26, &phi_bb113_27, &phi_bb113_28, &phi_bb113_29, &phi_bb113_32, &phi_bb113_33, &phi_bb113_37);
    tmp326 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp327 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp108}, TNode<Uint32T>{tmp326});
    ca_.Branch(tmp327, &block161, std::vector<compiler::Node*>{phi_bb113_20, phi_bb113_25, phi_bb113_26, phi_bb113_27, phi_bb113_28, phi_bb113_29, phi_bb113_32, phi_bb113_33, phi_bb113_37}, &block162, std::vector<compiler::Node*>{phi_bb113_20, phi_bb113_25, phi_bb113_26, phi_bb113_27, phi_bb113_28, phi_bb113_29, phi_bb113_32, phi_bb113_33, phi_bb113_37});
  }

  TNode<IntPtrT> phi_bb161_20;
  TNode<IntPtrT> phi_bb161_25;
  TNode<IntPtrT> phi_bb161_26;
  TNode<IntPtrT> phi_bb161_27;
  TNode<IntPtrT> phi_bb161_28;
  TNode<IntPtrT> phi_bb161_29;
  TNode<IntPtrT> phi_bb161_32;
  TNode<BoolT> phi_bb161_33;
  TNode<BoolT> phi_bb161_37;
  TNode<IntPtrT> tmp328;
  TNode<IntPtrT> tmp329;
  TNode<IntPtrT> tmp330;
  TNode<BoolT> tmp331;
  if (block161.is_used()) {
    ca_.Bind(&block161, &phi_bb161_20, &phi_bb161_25, &phi_bb161_26, &phi_bb161_27, &phi_bb161_28, &phi_bb161_29, &phi_bb161_32, &phi_bb161_33, &phi_bb161_37);
    tmp328 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp329 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb161_26}, TNode<IntPtrT>{tmp328});
    tmp330 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp331 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb161_26}, TNode<IntPtrT>{tmp330});
    ca_.Branch(tmp331, &block165, std::vector<compiler::Node*>{phi_bb161_20, phi_bb161_25, phi_bb161_27, phi_bb161_28, phi_bb161_29, phi_bb161_32, phi_bb161_33, phi_bb161_37}, &block166, std::vector<compiler::Node*>{phi_bb161_20, phi_bb161_25, phi_bb161_27, phi_bb161_28, phi_bb161_29, phi_bb161_32, phi_bb161_33, phi_bb161_37});
  }

  TNode<IntPtrT> phi_bb165_20;
  TNode<IntPtrT> phi_bb165_25;
  TNode<IntPtrT> phi_bb165_27;
  TNode<IntPtrT> phi_bb165_28;
  TNode<IntPtrT> phi_bb165_29;
  TNode<IntPtrT> phi_bb165_32;
  TNode<BoolT> phi_bb165_33;
  TNode<BoolT> phi_bb165_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp332;
  TNode<IntPtrT> tmp333;
  TNode<IntPtrT> tmp334;
  TNode<IntPtrT> tmp335;
  if (block165.is_used()) {
    ca_.Bind(&block165, &phi_bb165_20, &phi_bb165_25, &phi_bb165_27, &phi_bb165_28, &phi_bb165_29, &phi_bb165_32, &phi_bb165_33, &phi_bb165_37);
    std::tie(tmp332, tmp333) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb165_28}).Flatten();
    tmp334 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp335 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb165_28}, TNode<IntPtrT>{tmp334});
    ca_.Goto(&block164, phi_bb165_20, phi_bb165_25, phi_bb165_27, tmp335, phi_bb165_29, phi_bb165_32, phi_bb165_33, phi_bb165_37, tmp332, tmp333);
  }

  TNode<IntPtrT> phi_bb166_20;
  TNode<IntPtrT> phi_bb166_25;
  TNode<IntPtrT> phi_bb166_27;
  TNode<IntPtrT> phi_bb166_28;
  TNode<IntPtrT> phi_bb166_29;
  TNode<IntPtrT> phi_bb166_32;
  TNode<BoolT> phi_bb166_33;
  TNode<BoolT> phi_bb166_37;
  if (block166.is_used()) {
    ca_.Bind(&block166, &phi_bb166_20, &phi_bb166_25, &phi_bb166_27, &phi_bb166_28, &phi_bb166_29, &phi_bb166_32, &phi_bb166_33, &phi_bb166_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block167, phi_bb166_20, phi_bb166_25, phi_bb166_27, phi_bb166_28, phi_bb166_29, phi_bb166_32, phi_bb166_33, phi_bb166_37);
    } else {
      ca_.Goto(&block168, phi_bb166_20, phi_bb166_25, phi_bb166_27, phi_bb166_28, phi_bb166_29, phi_bb166_32, phi_bb166_33, phi_bb166_37);
    }
  }

  TNode<IntPtrT> phi_bb167_20;
  TNode<IntPtrT> phi_bb167_25;
  TNode<IntPtrT> phi_bb167_27;
  TNode<IntPtrT> phi_bb167_28;
  TNode<IntPtrT> phi_bb167_29;
  TNode<IntPtrT> phi_bb167_32;
  TNode<BoolT> phi_bb167_33;
  TNode<BoolT> phi_bb167_37;
  if (block167.is_used()) {
    ca_.Bind(&block167, &phi_bb167_20, &phi_bb167_25, &phi_bb167_27, &phi_bb167_28, &phi_bb167_29, &phi_bb167_32, &phi_bb167_33, &phi_bb167_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block171, phi_bb167_20, phi_bb167_25, phi_bb167_27, phi_bb167_28, phi_bb167_29, phi_bb167_32, phi_bb167_33, phi_bb167_37);
    } else {
      ca_.Goto(&block172, phi_bb167_20, phi_bb167_25, phi_bb167_27, phi_bb167_28, phi_bb167_29, phi_bb167_32, phi_bb167_33, phi_bb167_37);
    }
  }

  TNode<IntPtrT> phi_bb171_20;
  TNode<IntPtrT> phi_bb171_25;
  TNode<IntPtrT> phi_bb171_27;
  TNode<IntPtrT> phi_bb171_28;
  TNode<IntPtrT> phi_bb171_29;
  TNode<IntPtrT> phi_bb171_32;
  TNode<BoolT> phi_bb171_33;
  TNode<BoolT> phi_bb171_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp336;
  TNode<IntPtrT> tmp337;
  TNode<IntPtrT> tmp338;
  TNode<IntPtrT> tmp339;
  if (block171.is_used()) {
    ca_.Bind(&block171, &phi_bb171_20, &phi_bb171_25, &phi_bb171_27, &phi_bb171_28, &phi_bb171_29, &phi_bb171_32, &phi_bb171_33, &phi_bb171_37);
    std::tie(tmp336, tmp337) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb171_29}).Flatten();
    tmp338 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp339 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb171_29}, TNode<IntPtrT>{tmp338});
    ca_.Goto(&block170, phi_bb171_20, phi_bb171_25, phi_bb171_27, phi_bb171_28, tmp339, phi_bb171_32, phi_bb171_33, phi_bb171_37, tmp336, tmp337);
  }

  TNode<IntPtrT> phi_bb172_20;
  TNode<IntPtrT> phi_bb172_25;
  TNode<IntPtrT> phi_bb172_27;
  TNode<IntPtrT> phi_bb172_28;
  TNode<IntPtrT> phi_bb172_29;
  TNode<IntPtrT> phi_bb172_32;
  TNode<BoolT> phi_bb172_33;
  TNode<BoolT> phi_bb172_37;
  TNode<IntPtrT> tmp340;
  TNode<BoolT> tmp341;
  if (block172.is_used()) {
    ca_.Bind(&block172, &phi_bb172_20, &phi_bb172_25, &phi_bb172_27, &phi_bb172_28, &phi_bb172_29, &phi_bb172_32, &phi_bb172_33, &phi_bb172_37);
    tmp340 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp341 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb172_32}, TNode<IntPtrT>{tmp340});
    ca_.Branch(tmp341, &block174, std::vector<compiler::Node*>{phi_bb172_20, phi_bb172_25, phi_bb172_27, phi_bb172_28, phi_bb172_29, phi_bb172_32, phi_bb172_33, phi_bb172_37}, &block175, std::vector<compiler::Node*>{phi_bb172_20, phi_bb172_25, phi_bb172_27, phi_bb172_28, phi_bb172_29, phi_bb172_32, phi_bb172_33, phi_bb172_37});
  }

  TNode<IntPtrT> phi_bb174_20;
  TNode<IntPtrT> phi_bb174_25;
  TNode<IntPtrT> phi_bb174_27;
  TNode<IntPtrT> phi_bb174_28;
  TNode<IntPtrT> phi_bb174_29;
  TNode<IntPtrT> phi_bb174_32;
  TNode<BoolT> phi_bb174_33;
  TNode<BoolT> phi_bb174_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp342;
  TNode<IntPtrT> tmp343;
  TNode<IntPtrT> tmp344;
  TNode<BoolT> tmp345;
  if (block174.is_used()) {
    ca_.Bind(&block174, &phi_bb174_20, &phi_bb174_25, &phi_bb174_27, &phi_bb174_28, &phi_bb174_29, &phi_bb174_32, &phi_bb174_33, &phi_bb174_37);
    std::tie(tmp342, tmp343) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb174_32}).Flatten();
    tmp344 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp345 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block170, phi_bb174_20, phi_bb174_25, phi_bb174_27, phi_bb174_28, phi_bb174_29, tmp344, tmp345, phi_bb174_37, tmp342, tmp343);
  }

  TNode<IntPtrT> phi_bb175_20;
  TNode<IntPtrT> phi_bb175_25;
  TNode<IntPtrT> phi_bb175_27;
  TNode<IntPtrT> phi_bb175_28;
  TNode<IntPtrT> phi_bb175_29;
  TNode<IntPtrT> phi_bb175_32;
  TNode<BoolT> phi_bb175_33;
  TNode<BoolT> phi_bb175_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp346;
  TNode<IntPtrT> tmp347;
  TNode<IntPtrT> tmp348;
  TNode<IntPtrT> tmp349;
  TNode<IntPtrT> tmp350;
  TNode<IntPtrT> tmp351;
  TNode<BoolT> tmp352;
  if (block175.is_used()) {
    ca_.Bind(&block175, &phi_bb175_20, &phi_bb175_25, &phi_bb175_27, &phi_bb175_28, &phi_bb175_29, &phi_bb175_32, &phi_bb175_33, &phi_bb175_37);
    std::tie(tmp346, tmp347) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb175_29}).Flatten();
    tmp348 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp349 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb175_29}, TNode<IntPtrT>{tmp348});
    tmp350 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp351 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp349}, TNode<IntPtrT>{tmp350});
    tmp352 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block170, phi_bb175_20, phi_bb175_25, phi_bb175_27, phi_bb175_28, tmp351, tmp349, tmp352, phi_bb175_37, tmp346, tmp347);
  }

  TNode<IntPtrT> phi_bb170_20;
  TNode<IntPtrT> phi_bb170_25;
  TNode<IntPtrT> phi_bb170_27;
  TNode<IntPtrT> phi_bb170_28;
  TNode<IntPtrT> phi_bb170_29;
  TNode<IntPtrT> phi_bb170_32;
  TNode<BoolT> phi_bb170_33;
  TNode<BoolT> phi_bb170_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb170_39;
  TNode<IntPtrT> phi_bb170_40;
  if (block170.is_used()) {
    ca_.Bind(&block170, &phi_bb170_20, &phi_bb170_25, &phi_bb170_27, &phi_bb170_28, &phi_bb170_29, &phi_bb170_32, &phi_bb170_33, &phi_bb170_37, &phi_bb170_39, &phi_bb170_40);
    ca_.Goto(&block164, phi_bb170_20, phi_bb170_25, phi_bb170_27, phi_bb170_28, phi_bb170_29, phi_bb170_32, phi_bb170_33, phi_bb170_37, phi_bb170_39, phi_bb170_40);
  }

  TNode<IntPtrT> phi_bb168_20;
  TNode<IntPtrT> phi_bb168_25;
  TNode<IntPtrT> phi_bb168_27;
  TNode<IntPtrT> phi_bb168_28;
  TNode<IntPtrT> phi_bb168_29;
  TNode<IntPtrT> phi_bb168_32;
  TNode<BoolT> phi_bb168_33;
  TNode<BoolT> phi_bb168_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp353;
  TNode<IntPtrT> tmp354;
  TNode<IntPtrT> tmp355;
  TNode<IntPtrT> tmp356;
  TNode<BoolT> tmp357;
  if (block168.is_used()) {
    ca_.Bind(&block168, &phi_bb168_20, &phi_bb168_25, &phi_bb168_27, &phi_bb168_28, &phi_bb168_29, &phi_bb168_32, &phi_bb168_33, &phi_bb168_37);
    std::tie(tmp353, tmp354) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb168_29}).Flatten();
    tmp355 = FromConstexpr_intptr_constexpr_int31_0(state_, (CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))));
    tmp356 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb168_29}, TNode<IntPtrT>{tmp355});
    tmp357 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block164, phi_bb168_20, phi_bb168_25, phi_bb168_27, phi_bb168_28, tmp356, phi_bb168_32, tmp357, phi_bb168_37, tmp353, tmp354);
  }

  TNode<IntPtrT> phi_bb164_20;
  TNode<IntPtrT> phi_bb164_25;
  TNode<IntPtrT> phi_bb164_27;
  TNode<IntPtrT> phi_bb164_28;
  TNode<IntPtrT> phi_bb164_29;
  TNode<IntPtrT> phi_bb164_32;
  TNode<BoolT> phi_bb164_33;
  TNode<BoolT> phi_bb164_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb164_39;
  TNode<IntPtrT> phi_bb164_40;
  TNode<Union<HeapObject, TaggedIndex>> tmp358;
  TNode<IntPtrT> tmp359;
  TNode<Float64T> tmp360;
  TNode<Union<HeapObject, TaggedIndex>> tmp361;
  TNode<IntPtrT> tmp362;
  TNode<IntPtrT> tmp363;
  TNode<IntPtrT> tmp364;
  TNode<IntPtrT> tmp365;
  TNode<UintPtrT> tmp366;
  TNode<UintPtrT> tmp367;
  TNode<BoolT> tmp368;
  if (block164.is_used()) {
    ca_.Bind(&block164, &phi_bb164_20, &phi_bb164_25, &phi_bb164_27, &phi_bb164_28, &phi_bb164_29, &phi_bb164_32, &phi_bb164_33, &phi_bb164_37, &phi_bb164_39, &phi_bb164_40);
    std::tie(tmp358, tmp359) = RefCast_float64_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb164_39}, TNode<IntPtrT>{phi_bb164_40}, TorqueStructUnsafe_0{}}).Flatten();
    tmp360 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp358, tmp359});
    std::tie(tmp361, tmp362, tmp363) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp364 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp365 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb164_20}, TNode<IntPtrT>{tmp364});
    tmp366 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb164_20});
    tmp367 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp363});
    tmp368 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp366}, TNode<UintPtrT>{tmp367});
    ca_.Branch(tmp368, &block180, std::vector<compiler::Node*>{phi_bb164_25, phi_bb164_27, phi_bb164_28, phi_bb164_29, phi_bb164_32, phi_bb164_33, phi_bb164_37, phi_bb164_39, phi_bb164_40, phi_bb164_20, phi_bb164_20, phi_bb164_20, phi_bb164_20}, &block181, std::vector<compiler::Node*>{phi_bb164_25, phi_bb164_27, phi_bb164_28, phi_bb164_29, phi_bb164_32, phi_bb164_33, phi_bb164_37, phi_bb164_39, phi_bb164_40, phi_bb164_20, phi_bb164_20, phi_bb164_20, phi_bb164_20});
  }

  TNode<IntPtrT> phi_bb180_25;
  TNode<IntPtrT> phi_bb180_27;
  TNode<IntPtrT> phi_bb180_28;
  TNode<IntPtrT> phi_bb180_29;
  TNode<IntPtrT> phi_bb180_32;
  TNode<BoolT> phi_bb180_33;
  TNode<BoolT> phi_bb180_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb180_39;
  TNode<IntPtrT> phi_bb180_40;
  TNode<IntPtrT> phi_bb180_46;
  TNode<IntPtrT> phi_bb180_47;
  TNode<IntPtrT> phi_bb180_51;
  TNode<IntPtrT> phi_bb180_52;
  TNode<IntPtrT> tmp369;
  TNode<IntPtrT> tmp370;
  TNode<Union<HeapObject, TaggedIndex>> tmp371;
  TNode<IntPtrT> tmp372;
  TNode<Number> tmp373;
  if (block180.is_used()) {
    ca_.Bind(&block180, &phi_bb180_25, &phi_bb180_27, &phi_bb180_28, &phi_bb180_29, &phi_bb180_32, &phi_bb180_33, &phi_bb180_37, &phi_bb180_39, &phi_bb180_40, &phi_bb180_46, &phi_bb180_47, &phi_bb180_51, &phi_bb180_52);
    tmp369 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb180_52});
    tmp370 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp362}, TNode<IntPtrT>{tmp369});
    std::tie(tmp371, tmp372) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp361}, TNode<IntPtrT>{tmp370}).Flatten();
    tmp373 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp360});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp371, tmp372}, tmp373);
    ca_.Goto(&block163, tmp365, phi_bb180_25, tmp329, phi_bb180_27, phi_bb180_28, phi_bb180_29, phi_bb180_32, phi_bb180_33, phi_bb180_37);
  }

  TNode<IntPtrT> phi_bb181_25;
  TNode<IntPtrT> phi_bb181_27;
  TNode<IntPtrT> phi_bb181_28;
  TNode<IntPtrT> phi_bb181_29;
  TNode<IntPtrT> phi_bb181_32;
  TNode<BoolT> phi_bb181_33;
  TNode<BoolT> phi_bb181_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb181_39;
  TNode<IntPtrT> phi_bb181_40;
  TNode<IntPtrT> phi_bb181_46;
  TNode<IntPtrT> phi_bb181_47;
  TNode<IntPtrT> phi_bb181_51;
  TNode<IntPtrT> phi_bb181_52;
  if (block181.is_used()) {
    ca_.Bind(&block181, &phi_bb181_25, &phi_bb181_27, &phi_bb181_28, &phi_bb181_29, &phi_bb181_32, &phi_bb181_33, &phi_bb181_37, &phi_bb181_39, &phi_bb181_40, &phi_bb181_46, &phi_bb181_47, &phi_bb181_51, &phi_bb181_52);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb162_20;
  TNode<IntPtrT> phi_bb162_25;
  TNode<IntPtrT> phi_bb162_26;
  TNode<IntPtrT> phi_bb162_27;
  TNode<IntPtrT> phi_bb162_28;
  TNode<IntPtrT> phi_bb162_29;
  TNode<IntPtrT> phi_bb162_32;
  TNode<BoolT> phi_bb162_33;
  TNode<BoolT> phi_bb162_37;
  TNode<Uint32T> tmp374;
  TNode<Uint32T> tmp375;
  TNode<Uint32T> tmp376;
  TNode<BoolT> tmp377;
  if (block162.is_used()) {
    ca_.Bind(&block162, &phi_bb162_20, &phi_bb162_25, &phi_bb162_26, &phi_bb162_27, &phi_bb162_28, &phi_bb162_29, &phi_bb162_32, &phi_bb162_33, &phi_bb162_37);
    tmp374 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::ValueType::kIsRefBit);
    tmp375 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp108}, TNode<Uint32T>{tmp374});
    tmp376 = FromConstexpr_WasmCodePointer_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp377 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp375}, TNode<Uint32T>{tmp376});
    ca_.Branch(tmp377, &block184, std::vector<compiler::Node*>{phi_bb162_20, phi_bb162_25, phi_bb162_26, phi_bb162_27, phi_bb162_28, phi_bb162_29, phi_bb162_32, phi_bb162_33, phi_bb162_37}, &block185, std::vector<compiler::Node*>{phi_bb162_20, phi_bb162_25, phi_bb162_26, phi_bb162_27, phi_bb162_28, phi_bb162_29, phi_bb162_32, phi_bb162_33, phi_bb162_37});
  }

  TNode<IntPtrT> phi_bb185_20;
  TNode<IntPtrT> phi_bb185_25;
  TNode<IntPtrT> phi_bb185_26;
  TNode<IntPtrT> phi_bb185_27;
  TNode<IntPtrT> phi_bb185_28;
  TNode<IntPtrT> phi_bb185_29;
  TNode<IntPtrT> phi_bb185_32;
  TNode<BoolT> phi_bb185_33;
  TNode<BoolT> phi_bb185_37;
  if (block185.is_used()) {
    ca_.Bind(&block185, &phi_bb185_20, &phi_bb185_25, &phi_bb185_26, &phi_bb185_27, &phi_bb185_28, &phi_bb185_29, &phi_bb185_32, &phi_bb185_33, &phi_bb185_37);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/wasm-to-js.tq", 159});
      CodeStubAssembler(state_).FailAssert("Torque assert '(paramType & kValueTypeIsRefBit) != 0' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb184_20;
  TNode<IntPtrT> phi_bb184_25;
  TNode<IntPtrT> phi_bb184_26;
  TNode<IntPtrT> phi_bb184_27;
  TNode<IntPtrT> phi_bb184_28;
  TNode<IntPtrT> phi_bb184_29;
  TNode<IntPtrT> phi_bb184_32;
  TNode<BoolT> phi_bb184_33;
  TNode<BoolT> phi_bb184_37;
  TNode<IntPtrT> tmp378;
  TNode<IntPtrT> tmp379;
  TNode<BoolT> tmp380;
  if (block184.is_used()) {
    ca_.Bind(&block184, &phi_bb184_20, &phi_bb184_25, &phi_bb184_26, &phi_bb184_27, &phi_bb184_28, &phi_bb184_29, &phi_bb184_32, &phi_bb184_33, &phi_bb184_37);
    tmp378 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp379 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb184_20}, TNode<IntPtrT>{tmp378});
    tmp380 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block163, tmp379, phi_bb184_25, phi_bb184_26, phi_bb184_27, phi_bb184_28, phi_bb184_29, phi_bb184_32, phi_bb184_33, tmp380);
  }

  TNode<IntPtrT> phi_bb163_20;
  TNode<IntPtrT> phi_bb163_25;
  TNode<IntPtrT> phi_bb163_26;
  TNode<IntPtrT> phi_bb163_27;
  TNode<IntPtrT> phi_bb163_28;
  TNode<IntPtrT> phi_bb163_29;
  TNode<IntPtrT> phi_bb163_32;
  TNode<BoolT> phi_bb163_33;
  TNode<BoolT> phi_bb163_37;
  if (block163.is_used()) {
    ca_.Bind(&block163, &phi_bb163_20, &phi_bb163_25, &phi_bb163_26, &phi_bb163_27, &phi_bb163_28, &phi_bb163_29, &phi_bb163_32, &phi_bb163_33, &phi_bb163_37);
    ca_.Goto(&block114, phi_bb163_20, phi_bb163_25, phi_bb163_26, phi_bb163_27, phi_bb163_28, phi_bb163_29, phi_bb163_32, phi_bb163_33, phi_bb163_37);
  }

  TNode<IntPtrT> phi_bb114_20;
  TNode<IntPtrT> phi_bb114_25;
  TNode<IntPtrT> phi_bb114_26;
  TNode<IntPtrT> phi_bb114_27;
  TNode<IntPtrT> phi_bb114_28;
  TNode<IntPtrT> phi_bb114_29;
  TNode<IntPtrT> phi_bb114_32;
  TNode<BoolT> phi_bb114_33;
  TNode<BoolT> phi_bb114_37;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_20, &phi_bb114_25, &phi_bb114_26, &phi_bb114_27, &phi_bb114_28, &phi_bb114_29, &phi_bb114_32, &phi_bb114_33, &phi_bb114_37);
    ca_.Goto(&block80, phi_bb114_20, phi_bb114_25, phi_bb114_26, phi_bb114_27, phi_bb114_28, phi_bb114_29, phi_bb114_32, phi_bb114_33, phi_bb114_37);
  }

  TNode<IntPtrT> phi_bb80_20;
  TNode<IntPtrT> phi_bb80_25;
  TNode<IntPtrT> phi_bb80_26;
  TNode<IntPtrT> phi_bb80_27;
  TNode<IntPtrT> phi_bb80_28;
  TNode<IntPtrT> phi_bb80_29;
  TNode<IntPtrT> phi_bb80_32;
  TNode<BoolT> phi_bb80_33;
  TNode<BoolT> phi_bb80_37;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_20, &phi_bb80_25, &phi_bb80_26, &phi_bb80_27, &phi_bb80_28, &phi_bb80_29, &phi_bb80_32, &phi_bb80_33, &phi_bb80_37);
    ca_.Goto(&block57, phi_bb80_20, phi_bb80_25, phi_bb80_26, phi_bb80_27, phi_bb80_28, phi_bb80_29, phi_bb80_32, phi_bb80_33, phi_bb80_37);
  }

  TNode<IntPtrT> phi_bb57_20;
  TNode<IntPtrT> phi_bb57_25;
  TNode<IntPtrT> phi_bb57_26;
  TNode<IntPtrT> phi_bb57_27;
  TNode<IntPtrT> phi_bb57_28;
  TNode<IntPtrT> phi_bb57_29;
  TNode<IntPtrT> phi_bb57_32;
  TNode<BoolT> phi_bb57_33;
  TNode<BoolT> phi_bb57_37;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_20, &phi_bb57_25, &phi_bb57_26, &phi_bb57_27, &phi_bb57_28, &phi_bb57_29, &phi_bb57_32, &phi_bb57_33, &phi_bb57_37);
    ca_.Goto(&block46, phi_bb57_20, phi_bb57_25, phi_bb57_26, phi_bb57_27, phi_bb57_28, phi_bb57_29, phi_bb57_32, phi_bb57_33, tmp107, phi_bb57_37);
  }

  TNode<IntPtrT> phi_bb45_20;
  TNode<IntPtrT> phi_bb45_25;
  TNode<IntPtrT> phi_bb45_26;
  TNode<IntPtrT> phi_bb45_27;
  TNode<IntPtrT> phi_bb45_28;
  TNode<IntPtrT> phi_bb45_29;
  TNode<IntPtrT> phi_bb45_32;
  TNode<BoolT> phi_bb45_33;
  TNode<IntPtrT> phi_bb45_35;
  TNode<BoolT> phi_bb45_37;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_20, &phi_bb45_25, &phi_bb45_26, &phi_bb45_27, &phi_bb45_28, &phi_bb45_29, &phi_bb45_32, &phi_bb45_33, &phi_bb45_35, &phi_bb45_37);
    ca_.Branch(phi_bb45_37, &block186, std::vector<compiler::Node*>{phi_bb45_20, phi_bb45_25, phi_bb45_26, phi_bb45_27, phi_bb45_28, phi_bb45_29, phi_bb45_32, phi_bb45_33, phi_bb45_35, phi_bb45_37}, &block187, std::vector<compiler::Node*>{phi_bb45_20, phi_bb45_25, phi_bb45_26, phi_bb45_27, phi_bb45_28, phi_bb45_29, phi_bb45_32, phi_bb45_33, phi_bb45_35, tmp100, phi_bb45_37});
  }

  TNode<IntPtrT> phi_bb186_20;
  TNode<IntPtrT> phi_bb186_25;
  TNode<IntPtrT> phi_bb186_26;
  TNode<IntPtrT> phi_bb186_27;
  TNode<IntPtrT> phi_bb186_28;
  TNode<IntPtrT> phi_bb186_29;
  TNode<IntPtrT> phi_bb186_32;
  TNode<BoolT> phi_bb186_33;
  TNode<IntPtrT> phi_bb186_35;
  TNode<BoolT> phi_bb186_37;
  TNode<BoolT> tmp381;
  if (block186.is_used()) {
    ca_.Bind(&block186, &phi_bb186_20, &phi_bb186_25, &phi_bb186_26, &phi_bb186_27, &phi_bb186_28, &phi_bb186_29, &phi_bb186_32, &phi_bb186_33, &phi_bb186_35, &phi_bb186_37);
    tmp381 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb186_33});
    ca_.Branch(tmp381, &block189, std::vector<compiler::Node*>{phi_bb186_20, phi_bb186_25, phi_bb186_26, phi_bb186_27, phi_bb186_28, phi_bb186_29, phi_bb186_32, phi_bb186_33, phi_bb186_35, phi_bb186_37}, &block190, std::vector<compiler::Node*>{phi_bb186_20, phi_bb186_25, phi_bb186_26, phi_bb186_27, phi_bb186_28, phi_bb186_29, phi_bb186_32, phi_bb186_33, phi_bb186_35, phi_bb186_37});
  }

  TNode<IntPtrT> phi_bb189_20;
  TNode<IntPtrT> phi_bb189_25;
  TNode<IntPtrT> phi_bb189_26;
  TNode<IntPtrT> phi_bb189_27;
  TNode<IntPtrT> phi_bb189_28;
  TNode<IntPtrT> phi_bb189_29;
  TNode<IntPtrT> phi_bb189_32;
  TNode<BoolT> phi_bb189_33;
  TNode<IntPtrT> phi_bb189_35;
  TNode<BoolT> phi_bb189_37;
  TNode<IntPtrT> tmp382;
  if (block189.is_used()) {
    ca_.Bind(&block189, &phi_bb189_20, &phi_bb189_25, &phi_bb189_26, &phi_bb189_27, &phi_bb189_28, &phi_bb189_29, &phi_bb189_32, &phi_bb189_33, &phi_bb189_35, &phi_bb189_37);
    tmp382 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block190, phi_bb189_20, phi_bb189_25, phi_bb189_26, phi_bb189_27, phi_bb189_28, phi_bb189_29, tmp382, phi_bb189_33, phi_bb189_35, phi_bb189_37);
  }

  TNode<IntPtrT> phi_bb190_20;
  TNode<IntPtrT> phi_bb190_25;
  TNode<IntPtrT> phi_bb190_26;
  TNode<IntPtrT> phi_bb190_27;
  TNode<IntPtrT> phi_bb190_28;
  TNode<IntPtrT> phi_bb190_29;
  TNode<IntPtrT> phi_bb190_32;
  TNode<BoolT> phi_bb190_33;
  TNode<IntPtrT> phi_bb190_35;
  TNode<BoolT> phi_bb190_37;
  TNode<IntPtrT> tmp383;
  TNode<IntPtrT> tmp384;
  TNode<IntPtrT> tmp385;
  if (block190.is_used()) {
    ca_.Bind(&block190, &phi_bb190_20, &phi_bb190_25, &phi_bb190_26, &phi_bb190_27, &phi_bb190_28, &phi_bb190_29, &phi_bb190_32, &phi_bb190_33, &phi_bb190_35, &phi_bb190_37);
    tmp383 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp384 = TimesSizeOf_WasmCodePointer_0(state_, TNode<IntPtrT>{tmp60});
    tmp385 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp59}, TNode<IntPtrT>{tmp384});
    ca_.Goto(&block194, tmp383, phi_bb190_25, phi_bb190_26, phi_bb190_27, phi_bb190_28, phi_bb190_29, phi_bb190_32, phi_bb190_33, tmp59, phi_bb190_37);
  }

  TNode<IntPtrT> phi_bb194_20;
  TNode<IntPtrT> phi_bb194_25;
  TNode<IntPtrT> phi_bb194_26;
  TNode<IntPtrT> phi_bb194_27;
  TNode<IntPtrT> phi_bb194_28;
  TNode<IntPtrT> phi_bb194_29;
  TNode<IntPtrT> phi_bb194_32;
  TNode<BoolT> phi_bb194_33;
  TNode<IntPtrT> phi_bb194_35;
  TNode<BoolT> phi_bb194_37;
  TNode<BoolT> tmp386;
  TNode<BoolT> tmp387;
  if (block194.is_used()) {
    ca_.Bind(&block194, &phi_bb194_20, &phi_bb194_25, &phi_bb194_26, &phi_bb194_27, &phi_bb194_28, &phi_bb194_29, &phi_bb194_32, &phi_bb194_33, &phi_bb194_35, &phi_bb194_37);
    tmp386 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb194_35}, TNode<IntPtrT>{tmp385});
    tmp387 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp386});
    ca_.Branch(tmp387, &block192, std::vector<compiler::Node*>{phi_bb194_20, phi_bb194_25, phi_bb194_26, phi_bb194_27, phi_bb194_28, phi_bb194_29, phi_bb194_32, phi_bb194_33, phi_bb194_35, phi_bb194_37}, &block193, std::vector<compiler::Node*>{phi_bb194_20, phi_bb194_25, phi_bb194_26, phi_bb194_27, phi_bb194_28, phi_bb194_29, phi_bb194_32, phi_bb194_33, phi_bb194_35, phi_bb194_37});
  }

  TNode<IntPtrT> phi_bb192_20;
  TNode<IntPtrT> phi_bb192_25;
  TNode<IntPtrT> phi_bb192_26;
  TNode<IntPtrT> phi_bb192_27;
  TNode<IntPtrT> phi_bb192_28;
  TNode<IntPtrT> phi_bb192_29;
  TNode<IntPtrT> phi_bb192_32;
  TNode<BoolT> phi_bb192_33;
  TNode<IntPtrT> phi_bb192_35;
  TNode<BoolT> phi_bb192_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp388;
  TNode<IntPtrT> tmp389;
  TNode<IntPtrT> tmp390;
  TNode<IntPtrT> tmp391;
  TNode<Uint32T> tmp392;
  TNode<Uint32T> tmp393;
  TNode<Uint32T> tmp394;
  TNode<Uint32T> tmp395;
  TNode<BoolT> tmp396;
  if (block192.is_used()) {
    ca_.Bind(&block192, &phi_bb192_20, &phi_bb192_25, &phi_bb192_26, &phi_bb192_27, &phi_bb192_28, &phi_bb192_29, &phi_bb192_32, &phi_bb192_33, &phi_bb192_35, &phi_bb192_37);
    std::tie(tmp388, tmp389) = NewReference_WasmCodePointer_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp58}, TNode<IntPtrT>{phi_bb192_35}).Flatten();
    tmp390 = FromConstexpr_intptr_constexpr_int31_0(state_, kInt32Size);
    tmp391 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb192_35}, TNode<IntPtrT>{tmp390});
    tmp392 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp388, tmp389});
    tmp393 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::ValueType::kIsRefBit);
    tmp394 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp392}, TNode<Uint32T>{tmp393});
    tmp395 = FromConstexpr_WasmCodePointer_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp396 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp394}, TNode<Uint32T>{tmp395});
    ca_.Branch(tmp396, &block203, std::vector<compiler::Node*>{phi_bb192_20, phi_bb192_25, phi_bb192_26, phi_bb192_27, phi_bb192_28, phi_bb192_29, phi_bb192_32, phi_bb192_33, phi_bb192_37}, &block204, std::vector<compiler::Node*>{phi_bb192_20, phi_bb192_25, phi_bb192_26, phi_bb192_27, phi_bb192_28, phi_bb192_29, phi_bb192_32, phi_bb192_33, phi_bb192_37});
  }

  TNode<IntPtrT> phi_bb203_20;
  TNode<IntPtrT> phi_bb203_25;
  TNode<IntPtrT> phi_bb203_26;
  TNode<IntPtrT> phi_bb203_27;
  TNode<IntPtrT> phi_bb203_28;
  TNode<IntPtrT> phi_bb203_29;
  TNode<IntPtrT> phi_bb203_32;
  TNode<BoolT> phi_bb203_33;
  TNode<BoolT> phi_bb203_37;
  TNode<IntPtrT> tmp397;
  TNode<IntPtrT> tmp398;
  TNode<IntPtrT> tmp399;
  TNode<BoolT> tmp400;
  if (block203.is_used()) {
    ca_.Bind(&block203, &phi_bb203_20, &phi_bb203_25, &phi_bb203_26, &phi_bb203_27, &phi_bb203_28, &phi_bb203_29, &phi_bb203_32, &phi_bb203_33, &phi_bb203_37);
    tmp397 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp398 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb203_25}, TNode<IntPtrT>{tmp397});
    tmp399 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp400 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb203_25}, TNode<IntPtrT>{tmp399});
    ca_.Branch(tmp400, &block206, std::vector<compiler::Node*>{phi_bb203_20, phi_bb203_26, phi_bb203_27, phi_bb203_28, phi_bb203_29, phi_bb203_32, phi_bb203_33, phi_bb203_37}, &block207, std::vector<compiler::Node*>{phi_bb203_20, phi_bb203_26, phi_bb203_27, phi_bb203_28, phi_bb203_29, phi_bb203_32, phi_bb203_33, phi_bb203_37});
  }

  TNode<IntPtrT> phi_bb206_20;
  TNode<IntPtrT> phi_bb206_26;
  TNode<IntPtrT> phi_bb206_27;
  TNode<IntPtrT> phi_bb206_28;
  TNode<IntPtrT> phi_bb206_29;
  TNode<IntPtrT> phi_bb206_32;
  TNode<BoolT> phi_bb206_33;
  TNode<BoolT> phi_bb206_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp401;
  TNode<IntPtrT> tmp402;
  TNode<IntPtrT> tmp403;
  TNode<IntPtrT> tmp404;
  if (block206.is_used()) {
    ca_.Bind(&block206, &phi_bb206_20, &phi_bb206_26, &phi_bb206_27, &phi_bb206_28, &phi_bb206_29, &phi_bb206_32, &phi_bb206_33, &phi_bb206_37);
    std::tie(tmp401, tmp402) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb206_27}).Flatten();
    tmp403 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp404 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb206_27}, TNode<IntPtrT>{tmp403});
    ca_.Goto(&block205, phi_bb206_20, phi_bb206_26, tmp404, phi_bb206_28, phi_bb206_29, phi_bb206_32, phi_bb206_33, phi_bb206_37, tmp401, tmp402);
  }

  TNode<IntPtrT> phi_bb207_20;
  TNode<IntPtrT> phi_bb207_26;
  TNode<IntPtrT> phi_bb207_27;
  TNode<IntPtrT> phi_bb207_28;
  TNode<IntPtrT> phi_bb207_29;
  TNode<IntPtrT> phi_bb207_32;
  TNode<BoolT> phi_bb207_33;
  TNode<BoolT> phi_bb207_37;
  if (block207.is_used()) {
    ca_.Bind(&block207, &phi_bb207_20, &phi_bb207_26, &phi_bb207_27, &phi_bb207_28, &phi_bb207_29, &phi_bb207_32, &phi_bb207_33, &phi_bb207_37);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block209, phi_bb207_20, phi_bb207_26, phi_bb207_27, phi_bb207_28, phi_bb207_29, phi_bb207_32, phi_bb207_33, phi_bb207_37);
    } else {
      ca_.Goto(&block210, phi_bb207_20, phi_bb207_26, phi_bb207_27, phi_bb207_28, phi_bb207_29, phi_bb207_32, phi_bb207_33, phi_bb207_37);
    }
  }

  TNode<IntPtrT> phi_bb209_20;
  TNode<IntPtrT> phi_bb209_26;
  TNode<IntPtrT> phi_bb209_27;
  TNode<IntPtrT> phi_bb209_28;
  TNode<IntPtrT> phi_bb209_29;
  TNode<IntPtrT> phi_bb209_32;
  TNode<BoolT> phi_bb209_33;
  TNode<BoolT> phi_bb209_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp405;
  TNode<IntPtrT> tmp406;
  TNode<IntPtrT> tmp407;
  TNode<IntPtrT> tmp408;
  if (block209.is_used()) {
    ca_.Bind(&block209, &phi_bb209_20, &phi_bb209_26, &phi_bb209_27, &phi_bb209_28, &phi_bb209_29, &phi_bb209_32, &phi_bb209_33, &phi_bb209_37);
    std::tie(tmp405, tmp406) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb209_29}).Flatten();
    tmp407 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp408 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb209_29}, TNode<IntPtrT>{tmp407});
    ca_.Goto(&block208, phi_bb209_20, phi_bb209_26, phi_bb209_27, phi_bb209_28, tmp408, phi_bb209_32, phi_bb209_33, phi_bb209_37, tmp405, tmp406);
  }

  TNode<IntPtrT> phi_bb210_20;
  TNode<IntPtrT> phi_bb210_26;
  TNode<IntPtrT> phi_bb210_27;
  TNode<IntPtrT> phi_bb210_28;
  TNode<IntPtrT> phi_bb210_29;
  TNode<IntPtrT> phi_bb210_32;
  TNode<BoolT> phi_bb210_33;
  TNode<BoolT> phi_bb210_37;
  TNode<IntPtrT> tmp409;
  TNode<BoolT> tmp410;
  if (block210.is_used()) {
    ca_.Bind(&block210, &phi_bb210_20, &phi_bb210_26, &phi_bb210_27, &phi_bb210_28, &phi_bb210_29, &phi_bb210_32, &phi_bb210_33, &phi_bb210_37);
    tmp409 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp410 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb210_32}, TNode<IntPtrT>{tmp409});
    ca_.Branch(tmp410, &block212, std::vector<compiler::Node*>{phi_bb210_20, phi_bb210_26, phi_bb210_27, phi_bb210_28, phi_bb210_29, phi_bb210_32, phi_bb210_33, phi_bb210_37}, &block213, std::vector<compiler::Node*>{phi_bb210_20, phi_bb210_26, phi_bb210_27, phi_bb210_28, phi_bb210_29, phi_bb210_32, phi_bb210_33, phi_bb210_37});
  }

  TNode<IntPtrT> phi_bb212_20;
  TNode<IntPtrT> phi_bb212_26;
  TNode<IntPtrT> phi_bb212_27;
  TNode<IntPtrT> phi_bb212_28;
  TNode<IntPtrT> phi_bb212_29;
  TNode<IntPtrT> phi_bb212_32;
  TNode<BoolT> phi_bb212_33;
  TNode<BoolT> phi_bb212_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp411;
  TNode<IntPtrT> tmp412;
  TNode<IntPtrT> tmp413;
  TNode<BoolT> tmp414;
  if (block212.is_used()) {
    ca_.Bind(&block212, &phi_bb212_20, &phi_bb212_26, &phi_bb212_27, &phi_bb212_28, &phi_bb212_29, &phi_bb212_32, &phi_bb212_33, &phi_bb212_37);
    std::tie(tmp411, tmp412) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb212_32}).Flatten();
    tmp413 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp414 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block208, phi_bb212_20, phi_bb212_26, phi_bb212_27, phi_bb212_28, phi_bb212_29, tmp413, tmp414, phi_bb212_37, tmp411, tmp412);
  }

  TNode<IntPtrT> phi_bb213_20;
  TNode<IntPtrT> phi_bb213_26;
  TNode<IntPtrT> phi_bb213_27;
  TNode<IntPtrT> phi_bb213_28;
  TNode<IntPtrT> phi_bb213_29;
  TNode<IntPtrT> phi_bb213_32;
  TNode<BoolT> phi_bb213_33;
  TNode<BoolT> phi_bb213_37;
  TNode<Union<HeapObject, TaggedIndex>> tmp415;
  TNode<IntPtrT> tmp416;
  TNode<IntPtrT> tmp417;
  TNode<IntPtrT> tmp418;
  TNode<IntPtrT> tmp419;
  TNode<IntPtrT> tmp420;
  TNode<BoolT> tmp421;
  if (block213.is_used()) {
    ca_.Bind(&block213, &phi_bb213_20, &phi_bb213_26, &phi_bb213_27, &phi_bb213_28, &phi_bb213_29, &phi_bb213_32, &phi_bb213_33, &phi_bb213_37);
    std::tie(tmp415, tmp416) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb213_29}).Flatten();
    tmp417 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp418 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb213_29}, TNode<IntPtrT>{tmp417});
    tmp419 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp420 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp418}, TNode<IntPtrT>{tmp419});
    tmp421 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block208, phi_bb213_20, phi_bb213_26, phi_bb213_27, phi_bb213_28, tmp420, tmp418, tmp421, phi_bb213_37, tmp415, tmp416);
  }

  TNode<IntPtrT> phi_bb208_20;
  TNode<IntPtrT> phi_bb208_26;
  TNode<IntPtrT> phi_bb208_27;
  TNode<IntPtrT> phi_bb208_28;
  TNode<IntPtrT> phi_bb208_29;
  TNode<IntPtrT> phi_bb208_32;
  TNode<BoolT> phi_bb208_33;
  TNode<BoolT> phi_bb208_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb208_39;
  TNode<IntPtrT> phi_bb208_40;
  if (block208.is_used()) {
    ca_.Bind(&block208, &phi_bb208_20, &phi_bb208_26, &phi_bb208_27, &phi_bb208_28, &phi_bb208_29, &phi_bb208_32, &phi_bb208_33, &phi_bb208_37, &phi_bb208_39, &phi_bb208_40);
    ca_.Goto(&block205, phi_bb208_20, phi_bb208_26, phi_bb208_27, phi_bb208_28, phi_bb208_29, phi_bb208_32, phi_bb208_33, phi_bb208_37, phi_bb208_39, phi_bb208_40);
  }

  TNode<IntPtrT> phi_bb205_20;
  TNode<IntPtrT> phi_bb205_26;
  TNode<IntPtrT> phi_bb205_27;
  TNode<IntPtrT> phi_bb205_28;
  TNode<IntPtrT> phi_bb205_29;
  TNode<IntPtrT> phi_bb205_32;
  TNode<BoolT> phi_bb205_33;
  TNode<BoolT> phi_bb205_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb205_39;
  TNode<IntPtrT> phi_bb205_40;
  TNode<IntPtrT> tmp422;
  TNode<Object> tmp423;
  TNode<Union<HeapObject, TaggedIndex>> tmp424;
  TNode<IntPtrT> tmp425;
  TNode<IntPtrT> tmp426;
  TNode<UintPtrT> tmp427;
  TNode<UintPtrT> tmp428;
  TNode<BoolT> tmp429;
  if (block205.is_used()) {
    ca_.Bind(&block205, &phi_bb205_20, &phi_bb205_26, &phi_bb205_27, &phi_bb205_28, &phi_bb205_29, &phi_bb205_32, &phi_bb205_33, &phi_bb205_37, &phi_bb205_39, &phi_bb205_40);
    tmp422 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb205_39, phi_bb205_40});
    tmp423 = CodeStubAssembler(state_).BitcastWordToTagged(TNode<IntPtrT>{tmp422});
    std::tie(tmp424, tmp425, tmp426) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp64}).Flatten();
    tmp427 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb205_20});
    tmp428 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp426});
    tmp429 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp427}, TNode<UintPtrT>{tmp428});
    ca_.Branch(tmp429, &block218, std::vector<compiler::Node*>{phi_bb205_20, phi_bb205_26, phi_bb205_27, phi_bb205_28, phi_bb205_29, phi_bb205_32, phi_bb205_33, phi_bb205_37, phi_bb205_39, phi_bb205_40, phi_bb205_20, phi_bb205_20, phi_bb205_20, phi_bb205_20}, &block219, std::vector<compiler::Node*>{phi_bb205_20, phi_bb205_26, phi_bb205_27, phi_bb205_28, phi_bb205_29, phi_bb205_32, phi_bb205_33, phi_bb205_37, phi_bb205_39, phi_bb205_40, phi_bb205_20, phi_bb205_20, phi_bb205_20, phi_bb205_20});
  }

  TNode<IntPtrT> phi_bb218_20;
  TNode<IntPtrT> phi_bb218_26;
  TNode<IntPtrT> phi_bb218_27;
  TNode<IntPtrT> phi_bb218_28;
  TNode<IntPtrT> phi_bb218_29;
  TNode<IntPtrT> phi_bb218_32;
  TNode<BoolT> phi_bb218_33;
  TNode<BoolT> phi_bb218_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb218_39;
  TNode<IntPtrT> phi_bb218_40;
  TNode<IntPtrT> phi_bb218_47;
  TNode<IntPtrT> phi_bb218_48;
  TNode<IntPtrT> phi_bb218_52;
  TNode<IntPtrT> phi_bb218_53;
  TNode<IntPtrT> tmp430;
  TNode<IntPtrT> tmp431;
  TNode<Union<HeapObject, TaggedIndex>> tmp432;
  TNode<IntPtrT> tmp433;
  TNode<IntPtrT> tmp434;
  TNode<NativeContext> tmp435;
  TNode<JSAny> tmp436;
  if (block218.is_used()) {
    ca_.Bind(&block218, &phi_bb218_20, &phi_bb218_26, &phi_bb218_27, &phi_bb218_28, &phi_bb218_29, &phi_bb218_32, &phi_bb218_33, &phi_bb218_37, &phi_bb218_39, &phi_bb218_40, &phi_bb218_47, &phi_bb218_48, &phi_bb218_52, &phi_bb218_53);
    tmp430 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb218_53});
    tmp431 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp425}, TNode<IntPtrT>{tmp430});
    std::tie(tmp432, tmp433) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp424}, TNode<IntPtrT>{tmp431}).Flatten();
    tmp434 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp435 = CodeStubAssembler(state_).LoadReference<NativeContext>(CodeStubAssembler::Reference{p_data, tmp434});
    tmp436 = WasmToJSObject_0(state_, TNode<NativeContext>{tmp435}, TNode<Object>{tmp423}, TNode<Uint32T>{tmp392});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp432, tmp433}, tmp436);
    ca_.Goto(&block204, phi_bb218_20, tmp398, phi_bb218_26, phi_bb218_27, phi_bb218_28, phi_bb218_29, phi_bb218_32, phi_bb218_33, phi_bb218_37);
  }

  TNode<IntPtrT> phi_bb219_20;
  TNode<IntPtrT> phi_bb219_26;
  TNode<IntPtrT> phi_bb219_27;
  TNode<IntPtrT> phi_bb219_28;
  TNode<IntPtrT> phi_bb219_29;
  TNode<IntPtrT> phi_bb219_32;
  TNode<BoolT> phi_bb219_33;
  TNode<BoolT> phi_bb219_37;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb219_39;
  TNode<IntPtrT> phi_bb219_40;
  TNode<IntPtrT> phi_bb219_47;
  TNode<IntPtrT> phi_bb219_48;
  TNode<IntPtrT> phi_bb219_52;
  TNode<IntPtrT> phi_bb219_53;
  if (block219.is_used()) {
    ca_.Bind(&block219, &phi_bb219_20, &phi_bb219_26, &phi_bb219_27, &phi_bb219_28, &phi_bb219_29, &phi_bb219_32, &phi_bb219_33, &phi_bb219_37, &phi_bb219_39, &phi_bb219_40, &phi_bb219_47, &phi_bb219_48, &phi_bb219_52, &phi_bb219_53);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb204_20;
  TNode<IntPtrT> phi_bb204_25;
  TNode<IntPtrT> phi_bb204_26;
  TNode<IntPtrT> phi_bb204_27;
  TNode<IntPtrT> phi_bb204_28;
  TNode<IntPtrT> phi_bb204_29;
  TNode<IntPtrT> phi_bb204_32;
  TNode<BoolT> phi_bb204_33;
  TNode<BoolT> phi_bb204_37;
  TNode<IntPtrT> tmp437;
  TNode<IntPtrT> tmp438;
  if (block204.is_used()) {
    ca_.Bind(&block204, &phi_bb204_20, &phi_bb204_25, &phi_bb204_26, &phi_bb204_27, &phi_bb204_28, &phi_bb204_29, &phi_bb204_32, &phi_bb204_33, &phi_bb204_37);
    tmp437 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp438 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb204_20}, TNode<IntPtrT>{tmp437});
    ca_.Goto(&block194, tmp438, phi_bb204_25, phi_bb204_26, phi_bb204_27, phi_bb204_28, phi_bb204_29, phi_bb204_32, phi_bb204_33, tmp391, phi_bb204_37);
  }

  TNode<IntPtrT> phi_bb193_20;
  TNode<IntPtrT> phi_bb193_25;
  TNode<IntPtrT> phi_bb193_26;
  TNode<IntPtrT> phi_bb193_27;
  TNode<IntPtrT> phi_bb193_28;
  TNode<IntPtrT> phi_bb193_29;
  TNode<IntPtrT> phi_bb193_32;
  TNode<BoolT> phi_bb193_33;
  TNode<IntPtrT> phi_bb193_35;
  TNode<BoolT> phi_bb193_37;
  if (block193.is_used()) {
    ca_.Bind(&block193, &phi_bb193_20, &phi_bb193_25, &phi_bb193_26, &phi_bb193_27, &phi_bb193_28, &phi_bb193_29, &phi_bb193_32, &phi_bb193_33, &phi_bb193_35, &phi_bb193_37);
    ca_.Goto(&block187, phi_bb193_20, phi_bb193_25, phi_bb193_26, phi_bb193_27, phi_bb193_28, phi_bb193_29, phi_bb193_32, phi_bb193_33, phi_bb193_35, tmp385, phi_bb193_37);
  }

  TNode<IntPtrT> phi_bb187_20;
  TNode<IntPtrT> phi_bb187_25;
  TNode<IntPtrT> phi_bb187_26;
  TNode<IntPtrT> phi_bb187_27;
  TNode<IntPtrT> phi_bb187_28;
  TNode<IntPtrT> phi_bb187_29;
  TNode<IntPtrT> phi_bb187_32;
  TNode<BoolT> phi_bb187_33;
  TNode<IntPtrT> phi_bb187_35;
  TNode<IntPtrT> phi_bb187_36;
  TNode<BoolT> phi_bb187_37;
  TNode<IntPtrT> tmp439;
  TNode<Union<JSReceiver, Undefined>> tmp440;
  TNode<IntPtrT> tmp441;
  TNode<NativeContext> tmp442;
  TNode<IntPtrT> tmp443;
  TNode<Union<HeapObject, TaggedIndex>> tmp444;
  TNode<IntPtrT> tmp445;
  TNode<IntPtrT> tmp446;
  TNode<Int32T> tmp447;
  TNode<Int32T> tmp448;
  TNode<JSAny> tmp449;
  TNode<IntPtrT> tmp450;
  TNode<Union<HeapObject, TaggedIndex>> tmp451;
  TNode<IntPtrT> tmp452;
  TNode<IntPtrT> tmp453;
  TNode<IntPtrT> tmp454;
  TNode<BoolT> tmp455;
  if (block187.is_used()) {
    ca_.Bind(&block187, &phi_bb187_20, &phi_bb187_25, &phi_bb187_26, &phi_bb187_27, &phi_bb187_28, &phi_bb187_29, &phi_bb187_32, &phi_bb187_33, &phi_bb187_35, &phi_bb187_36, &phi_bb187_37);
    tmp439 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp440 = CodeStubAssembler(state_).LoadReference<Union<JSReceiver, Undefined>>(CodeStubAssembler::Reference{p_data, tmp439});
    tmp441 = FromConstexpr_intptr_constexpr_int31_0(state_, 24);
    tmp442 = CodeStubAssembler(state_).LoadReference<NativeContext>(CodeStubAssembler::Reference{p_data, tmp441});
    tmp443 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp444, tmp445) = GetRefAt_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp3}, TNode<IntPtrT>{tmp443}).Flatten();
    tmp446 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{tmp444, tmp445}, tmp446);
    tmp447 = Convert_int32_intptr_0(state_, TNode<IntPtrT>{tmp63});
    tmp448 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp449 = ca_.CallBuiltin<JSAny>(Builtin::kCallVarargs, tmp442, tmp440, tmp448, tmp447, tmp64);
    tmp450 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp451, tmp452) = GetRefAt_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp3}, TNode<IntPtrT>{tmp450}).Flatten();
    tmp453 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(true, 0x1ull));
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{tmp451, tmp452}, tmp453);
    tmp454 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp455 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp32}, TNode<IntPtrT>{tmp454});
    ca_.Branch(tmp455, &block222, std::vector<compiler::Node*>{phi_bb187_20, phi_bb187_25, phi_bb187_26, phi_bb187_27, phi_bb187_28, phi_bb187_29, phi_bb187_32, phi_bb187_33, phi_bb187_35, phi_bb187_36, phi_bb187_37}, &block223, std::vector<compiler::Node*>{phi_bb187_20, phi_bb187_25, phi_bb187_26, phi_bb187_27, phi_bb187_28, phi_bb187_29, phi_bb187_32, phi_bb187_33, phi_bb187_35, phi_bb187_36, phi_bb187_37});
  }

  TNode<IntPtrT> phi_bb222_20;
  TNode<IntPtrT> phi_bb222_25;
  TNode<IntPtrT> phi_bb222_26;
  TNode<IntPtrT> phi_bb222_27;
  TNode<IntPtrT> phi_bb222_28;
  TNode<IntPtrT> phi_bb222_29;
  TNode<IntPtrT> phi_bb222_32;
  TNode<BoolT> phi_bb222_33;
  TNode<IntPtrT> phi_bb222_35;
  TNode<IntPtrT> phi_bb222_36;
  TNode<BoolT> phi_bb222_37;
  TNode<Smi> tmp456;
  TNode<FixedArray> tmp457;
  if (block222.is_used()) {
    ca_.Bind(&block222, &phi_bb222_20, &phi_bb222_25, &phi_bb222_26, &phi_bb222_27, &phi_bb222_28, &phi_bb222_29, &phi_bb222_32, &phi_bb222_33, &phi_bb222_35, &phi_bb222_36, &phi_bb222_37);
    tmp456 = Convert_Smi_intptr_0(state_, TNode<IntPtrT>{tmp32});
    tmp457 = ca_.CallBuiltin<FixedArray>(Builtin::kIterableToFixedArrayForWasm, tmp442, tmp449, tmp456);
    ca_.Goto(&block224, phi_bb222_20, phi_bb222_25, phi_bb222_26, phi_bb222_27, phi_bb222_28, phi_bb222_29, phi_bb222_32, phi_bb222_33, phi_bb222_35, phi_bb222_36, phi_bb222_37, tmp457);
  }

  TNode<IntPtrT> phi_bb223_20;
  TNode<IntPtrT> phi_bb223_25;
  TNode<IntPtrT> phi_bb223_26;
  TNode<IntPtrT> phi_bb223_27;
  TNode<IntPtrT> phi_bb223_28;
  TNode<IntPtrT> phi_bb223_29;
  TNode<IntPtrT> phi_bb223_32;
  TNode<BoolT> phi_bb223_33;
  TNode<IntPtrT> phi_bb223_35;
  TNode<IntPtrT> phi_bb223_36;
  TNode<BoolT> phi_bb223_37;
  TNode<FixedArray> tmp458;
  if (block223.is_used()) {
    ca_.Bind(&block223, &phi_bb223_20, &phi_bb223_25, &phi_bb223_26, &phi_bb223_27, &phi_bb223_28, &phi_bb223_29, &phi_bb223_32, &phi_bb223_33, &phi_bb223_35, &phi_bb223_36, &phi_bb223_37);
    tmp458 = kEmptyFixedArray_0(state_);
    ca_.Goto(&block224, phi_bb223_20, phi_bb223_25, phi_bb223_26, phi_bb223_27, phi_bb223_28, phi_bb223_29, phi_bb223_32, phi_bb223_33, phi_bb223_35, phi_bb223_36, phi_bb223_37, tmp458);
  }

  TNode<IntPtrT> phi_bb224_20;
  TNode<IntPtrT> phi_bb224_25;
  TNode<IntPtrT> phi_bb224_26;
  TNode<IntPtrT> phi_bb224_27;
  TNode<IntPtrT> phi_bb224_28;
  TNode<IntPtrT> phi_bb224_29;
  TNode<IntPtrT> phi_bb224_32;
  TNode<BoolT> phi_bb224_33;
  TNode<IntPtrT> phi_bb224_35;
  TNode<IntPtrT> phi_bb224_36;
  TNode<BoolT> phi_bb224_37;
  TNode<FixedArray> phi_bb224_41;
  TNode<RawPtrT> tmp459;
  TNode<RawPtrT> tmp460;
  TNode<RawPtrT> tmp461;
  TNode<RawPtrT> tmp462;
  TNode<IntPtrT> tmp463;
  if (block224.is_used()) {
    ca_.Bind(&block224, &phi_bb224_20, &phi_bb224_25, &phi_bb224_26, &phi_bb224_27, &phi_bb224_28, &phi_bb224_29, &phi_bb224_32, &phi_bb224_33, &phi_bb224_35, &phi_bb224_36, &phi_bb224_37, &phi_bb224_41);
    tmp459 = CodeStubAssembler(state_).StackSlotPtr((CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))), (SizeOf_intptr_0(state_)));
    tmp460 = (TNode<RawPtrT>{tmp459});
    tmp461 = CodeStubAssembler(state_).StackSlotPtr((CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_float64_0(state_)))), (SizeOf_float64_0(state_)));
    tmp462 = (TNode<RawPtrT>{tmp461});
    tmp463 = CodeStubAssembler(state_).StackAlignmentInBytes();
    ca_.Branch(phi_bb224_33, &block226, std::vector<compiler::Node*>{phi_bb224_20, phi_bb224_25, phi_bb224_26, phi_bb224_27, phi_bb224_28, phi_bb224_29, phi_bb224_32, phi_bb224_33, phi_bb224_35, phi_bb224_36, phi_bb224_37, phi_bb224_29}, &block227, std::vector<compiler::Node*>{phi_bb224_20, phi_bb224_25, phi_bb224_26, phi_bb224_27, phi_bb224_28, phi_bb224_29, phi_bb224_32, phi_bb224_33, phi_bb224_35, phi_bb224_36, phi_bb224_37, phi_bb224_29});
  }

  TNode<IntPtrT> phi_bb226_20;
  TNode<IntPtrT> phi_bb226_25;
  TNode<IntPtrT> phi_bb226_26;
  TNode<IntPtrT> phi_bb226_27;
  TNode<IntPtrT> phi_bb226_28;
  TNode<IntPtrT> phi_bb226_29;
  TNode<IntPtrT> phi_bb226_32;
  TNode<BoolT> phi_bb226_33;
  TNode<IntPtrT> phi_bb226_35;
  TNode<IntPtrT> phi_bb226_36;
  TNode<BoolT> phi_bb226_37;
  TNode<IntPtrT> phi_bb226_46;
  TNode<IntPtrT> tmp464;
  TNode<IntPtrT> tmp465;
  if (block226.is_used()) {
    ca_.Bind(&block226, &phi_bb226_20, &phi_bb226_25, &phi_bb226_26, &phi_bb226_27, &phi_bb226_28, &phi_bb226_29, &phi_bb226_32, &phi_bb226_33, &phi_bb226_35, &phi_bb226_36, &phi_bb226_37, &phi_bb226_46);
    tmp464 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp465 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb226_46}, TNode<IntPtrT>{tmp464});
    ca_.Goto(&block227, phi_bb226_20, phi_bb226_25, phi_bb226_26, phi_bb226_27, phi_bb226_28, phi_bb226_29, phi_bb226_32, phi_bb226_33, phi_bb226_35, phi_bb226_36, phi_bb226_37, tmp465);
  }

  TNode<IntPtrT> phi_bb227_20;
  TNode<IntPtrT> phi_bb227_25;
  TNode<IntPtrT> phi_bb227_26;
  TNode<IntPtrT> phi_bb227_27;
  TNode<IntPtrT> phi_bb227_28;
  TNode<IntPtrT> phi_bb227_29;
  TNode<IntPtrT> phi_bb227_32;
  TNode<BoolT> phi_bb227_33;
  TNode<IntPtrT> phi_bb227_35;
  TNode<IntPtrT> phi_bb227_36;
  TNode<BoolT> phi_bb227_37;
  TNode<IntPtrT> phi_bb227_46;
  TNode<IntPtrT> tmp466;
  TNode<IntPtrT> tmp467;
  TNode<IntPtrT> tmp468;
  TNode<BoolT> tmp469;
  if (block227.is_used()) {
    ca_.Bind(&block227, &phi_bb227_20, &phi_bb227_25, &phi_bb227_26, &phi_bb227_27, &phi_bb227_28, &phi_bb227_29, &phi_bb227_32, &phi_bb227_33, &phi_bb227_35, &phi_bb227_36, &phi_bb227_37, &phi_bb227_46);
    tmp466 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb227_46}, TNode<IntPtrT>{tmp95});
    tmp467 = CodeStubAssembler(state_).IntPtrMod(TNode<IntPtrT>{tmp466}, TNode<IntPtrT>{tmp463});
    tmp468 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp469 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp467}, TNode<IntPtrT>{tmp468});
    ca_.Branch(tmp469, &block228, std::vector<compiler::Node*>{phi_bb227_20, phi_bb227_25, phi_bb227_26, phi_bb227_27, phi_bb227_28, phi_bb227_29, phi_bb227_32, phi_bb227_33, phi_bb227_35, phi_bb227_36, phi_bb227_37}, &block229, std::vector<compiler::Node*>{phi_bb227_20, phi_bb227_25, phi_bb227_26, phi_bb227_27, phi_bb227_28, phi_bb227_29, phi_bb227_32, phi_bb227_33, phi_bb227_35, phi_bb227_36, phi_bb227_37, phi_bb227_46});
  }

  TNode<IntPtrT> phi_bb228_20;
  TNode<IntPtrT> phi_bb228_25;
  TNode<IntPtrT> phi_bb228_26;
  TNode<IntPtrT> phi_bb228_27;
  TNode<IntPtrT> phi_bb228_28;
  TNode<IntPtrT> phi_bb228_29;
  TNode<IntPtrT> phi_bb228_32;
  TNode<BoolT> phi_bb228_33;
  TNode<IntPtrT> phi_bb228_35;
  TNode<IntPtrT> phi_bb228_36;
  TNode<BoolT> phi_bb228_37;
  TNode<IntPtrT> tmp470;
  TNode<IntPtrT> tmp471;
  TNode<IntPtrT> tmp472;
  if (block228.is_used()) {
    ca_.Bind(&block228, &phi_bb228_20, &phi_bb228_25, &phi_bb228_26, &phi_bb228_27, &phi_bb228_28, &phi_bb228_29, &phi_bb228_32, &phi_bb228_33, &phi_bb228_35, &phi_bb228_36, &phi_bb228_37);
    tmp470 = CodeStubAssembler(state_).IntPtrMod(TNode<IntPtrT>{tmp466}, TNode<IntPtrT>{tmp463});
    tmp471 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp463}, TNode<IntPtrT>{tmp470});
    tmp472 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb227_46}, TNode<IntPtrT>{tmp471});
    ca_.Goto(&block229, phi_bb228_20, phi_bb228_25, phi_bb228_26, phi_bb228_27, phi_bb228_28, phi_bb228_29, phi_bb228_32, phi_bb228_33, phi_bb228_35, phi_bb228_36, phi_bb228_37, tmp472);
  }

  TNode<IntPtrT> phi_bb229_20;
  TNode<IntPtrT> phi_bb229_25;
  TNode<IntPtrT> phi_bb229_26;
  TNode<IntPtrT> phi_bb229_27;
  TNode<IntPtrT> phi_bb229_28;
  TNode<IntPtrT> phi_bb229_29;
  TNode<IntPtrT> phi_bb229_32;
  TNode<BoolT> phi_bb229_33;
  TNode<IntPtrT> phi_bb229_35;
  TNode<IntPtrT> phi_bb229_36;
  TNode<BoolT> phi_bb229_37;
  TNode<IntPtrT> phi_bb229_46;
  TNode<RawPtrT> tmp473;
  TNode<Union<HeapObject, TaggedIndex>> tmp474;
  TNode<IntPtrT> tmp475;
  TNode<IntPtrT> tmp476;
  TNode<IntPtrT> tmp477;
  TNode<IntPtrT> tmp478;
  TNode<IntPtrT> tmp479;
  TNode<IntPtrT> tmp480;
  TNode<IntPtrT> tmp481;
  TNode<IntPtrT> tmp482;
  TNode<BoolT> tmp483;
  TNode<IntPtrT> tmp484;
  TNode<IntPtrT> tmp485;
  TNode<IntPtrT> tmp486;
  TNode<BoolT> tmp487;
  if (block229.is_used()) {
    ca_.Bind(&block229, &phi_bb229_20, &phi_bb229_25, &phi_bb229_26, &phi_bb229_27, &phi_bb229_28, &phi_bb229_29, &phi_bb229_32, &phi_bb229_33, &phi_bb229_35, &phi_bb229_36, &phi_bb229_37, &phi_bb229_46);
    tmp473 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Union<HeapObject, TaggedIndex>>{tmp89}, TNode<IntPtrT>{phi_bb229_46});
    std::tie(tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483) = LocationAllocatorForReturns_0(state_, TNode<RawPtrT>{tmp460}, TNode<RawPtrT>{tmp462}, TNode<RawPtrT>{tmp473}).Flatten();
    tmp484 = TimesSizeOf_WasmCodePointer_0(state_, TNode<IntPtrT>{tmp56});
    tmp485 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp55}, TNode<IntPtrT>{tmp484});
    tmp486 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp487 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block233, tmp486, tmp475, tmp476, tmp477, tmp478, tmp479, tmp482, tmp483, phi_bb229_35, phi_bb229_36, phi_bb229_37, tmp55, tmp487);
  }

  TNode<IntPtrT> phi_bb233_20;
  TNode<IntPtrT> phi_bb233_25;
  TNode<IntPtrT> phi_bb233_26;
  TNode<IntPtrT> phi_bb233_27;
  TNode<IntPtrT> phi_bb233_28;
  TNode<IntPtrT> phi_bb233_29;
  TNode<IntPtrT> phi_bb233_32;
  TNode<BoolT> phi_bb233_33;
  TNode<IntPtrT> phi_bb233_35;
  TNode<IntPtrT> phi_bb233_36;
  TNode<BoolT> phi_bb233_37;
  TNode<IntPtrT> phi_bb233_46;
  TNode<BoolT> phi_bb233_48;
  TNode<BoolT> tmp488;
  TNode<BoolT> tmp489;
  if (block233.is_used()) {
    ca_.Bind(&block233, &phi_bb233_20, &phi_bb233_25, &phi_bb233_26, &phi_bb233_27, &phi_bb233_28, &phi_bb233_29, &phi_bb233_32, &phi_bb233_33, &phi_bb233_35, &phi_bb233_36, &phi_bb233_37, &phi_bb233_46, &phi_bb233_48);
    tmp488 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb233_46}, TNode<IntPtrT>{tmp485});
    tmp489 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp488});
    ca_.Branch(tmp489, &block231, std::vector<compiler::Node*>{phi_bb233_20, phi_bb233_25, phi_bb233_26, phi_bb233_27, phi_bb233_28, phi_bb233_29, phi_bb233_32, phi_bb233_33, phi_bb233_35, phi_bb233_36, phi_bb233_37, phi_bb233_46, phi_bb233_48}, &block232, std::vector<compiler::Node*>{phi_bb233_20, phi_bb233_25, phi_bb233_26, phi_bb233_27, phi_bb233_28, phi_bb233_29, phi_bb233_32, phi_bb233_33, phi_bb233_35, phi_bb233_36, phi_bb233_37, phi_bb233_46, phi_bb233_48});
  }

  TNode<IntPtrT> phi_bb231_20;
  TNode<IntPtrT> phi_bb231_25;
  TNode<IntPtrT> phi_bb231_26;
  TNode<IntPtrT> phi_bb231_27;
  TNode<IntPtrT> phi_bb231_28;
  TNode<IntPtrT> phi_bb231_29;
  TNode<IntPtrT> phi_bb231_32;
  TNode<BoolT> phi_bb231_33;
  TNode<IntPtrT> phi_bb231_35;
  TNode<IntPtrT> phi_bb231_36;
  TNode<BoolT> phi_bb231_37;
  TNode<IntPtrT> phi_bb231_46;
  TNode<BoolT> phi_bb231_48;
  TNode<IntPtrT> tmp490;
  TNode<BoolT> tmp491;
  if (block231.is_used()) {
    ca_.Bind(&block231, &phi_bb231_20, &phi_bb231_25, &phi_bb231_26, &phi_bb231_27, &phi_bb231_28, &phi_bb231_29, &phi_bb231_32, &phi_bb231_33, &phi_bb231_35, &phi_bb231_36, &phi_bb231_37, &phi_bb231_46, &phi_bb231_48);
    tmp490 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp491 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp32}, TNode<IntPtrT>{tmp490});
    ca_.Branch(tmp491, &block235, std::vector<compiler::Node*>{phi_bb231_20, phi_bb231_25, phi_bb231_26, phi_bb231_27, phi_bb231_28, phi_bb231_29, phi_bb231_32, phi_bb231_33, phi_bb231_35, phi_bb231_36, phi_bb231_37, phi_bb231_46, phi_bb231_48}, &block236, std::vector<compiler::Node*>{phi_bb231_20, phi_bb231_25, phi_bb231_26, phi_bb231_27, phi_bb231_28, phi_bb231_29, phi_bb231_32, phi_bb231_33, phi_bb231_35, phi_bb231_36, phi_bb231_37, phi_bb231_46, phi_bb231_48});
  }

  TNode<IntPtrT> phi_bb235_20;
  TNode<IntPtrT> phi_bb235_25;
  TNode<IntPtrT> phi_bb235_26;
  TNode<IntPtrT> phi_bb235_27;
  TNode<IntPtrT> phi_bb235_28;
  TNode<IntPtrT> phi_bb235_29;
  TNode<IntPtrT> phi_bb235_32;
  TNode<BoolT> phi_bb235_33;
  TNode<IntPtrT> phi_bb235_35;
  TNode<IntPtrT> phi_bb235_36;
  TNode<BoolT> phi_bb235_37;
  TNode<IntPtrT> phi_bb235_46;
  TNode<BoolT> phi_bb235_48;
  if (block235.is_used()) {
    ca_.Bind(&block235, &phi_bb235_20, &phi_bb235_25, &phi_bb235_26, &phi_bb235_27, &phi_bb235_28, &phi_bb235_29, &phi_bb235_32, &phi_bb235_33, &phi_bb235_35, &phi_bb235_36, &phi_bb235_37, &phi_bb235_46, &phi_bb235_48);
    ca_.Goto(&block237, phi_bb235_20, phi_bb235_25, phi_bb235_26, phi_bb235_27, phi_bb235_28, phi_bb235_29, phi_bb235_32, phi_bb235_33, phi_bb235_35, phi_bb235_36, phi_bb235_37, phi_bb235_46, phi_bb235_48, tmp449);
  }

  TNode<IntPtrT> phi_bb236_20;
  TNode<IntPtrT> phi_bb236_25;
  TNode<IntPtrT> phi_bb236_26;
  TNode<IntPtrT> phi_bb236_27;
  TNode<IntPtrT> phi_bb236_28;
  TNode<IntPtrT> phi_bb236_29;
  TNode<IntPtrT> phi_bb236_32;
  TNode<BoolT> phi_bb236_33;
  TNode<IntPtrT> phi_bb236_35;
  TNode<IntPtrT> phi_bb236_36;
  TNode<BoolT> phi_bb236_37;
  TNode<IntPtrT> phi_bb236_46;
  TNode<BoolT> phi_bb236_48;
  TNode<Union<HeapObject, TaggedIndex>> tmp492;
  TNode<IntPtrT> tmp493;
  TNode<IntPtrT> tmp494;
  TNode<UintPtrT> tmp495;
  TNode<UintPtrT> tmp496;
  TNode<BoolT> tmp497;
  if (block236.is_used()) {
    ca_.Bind(&block236, &phi_bb236_20, &phi_bb236_25, &phi_bb236_26, &phi_bb236_27, &phi_bb236_28, &phi_bb236_29, &phi_bb236_32, &phi_bb236_33, &phi_bb236_35, &phi_bb236_36, &phi_bb236_37, &phi_bb236_46, &phi_bb236_48);
    std::tie(tmp492, tmp493, tmp494) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb224_41}).Flatten();
    tmp495 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb236_20});
    tmp496 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp494});
    tmp497 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp495}, TNode<UintPtrT>{tmp496});
    ca_.Branch(tmp497, &block242, std::vector<compiler::Node*>{phi_bb236_20, phi_bb236_25, phi_bb236_26, phi_bb236_27, phi_bb236_28, phi_bb236_29, phi_bb236_32, phi_bb236_33, phi_bb236_35, phi_bb236_36, phi_bb236_37, phi_bb236_46, phi_bb236_48, phi_bb236_20, phi_bb236_20, phi_bb236_20, phi_bb236_20}, &block243, std::vector<compiler::Node*>{phi_bb236_20, phi_bb236_25, phi_bb236_26, phi_bb236_27, phi_bb236_28, phi_bb236_29, phi_bb236_32, phi_bb236_33, phi_bb236_35, phi_bb236_36, phi_bb236_37, phi_bb236_46, phi_bb236_48, phi_bb236_20, phi_bb236_20, phi_bb236_20, phi_bb236_20});
  }

  TNode<IntPtrT> phi_bb242_20;
  TNode<IntPtrT> phi_bb242_25;
  TNode<IntPtrT> phi_bb242_26;
  TNode<IntPtrT> phi_bb242_27;
  TNode<IntPtrT> phi_bb242_28;
  TNode<IntPtrT> phi_bb242_29;
  TNode<IntPtrT> phi_bb242_32;
  TNode<BoolT> phi_bb242_33;
  TNode<IntPtrT> phi_bb242_35;
  TNode<IntPtrT> phi_bb242_36;
  TNode<BoolT> phi_bb242_37;
  TNode<IntPtrT> phi_bb242_46;
  TNode<BoolT> phi_bb242_48;
  TNode<IntPtrT> phi_bb242_54;
  TNode<IntPtrT> phi_bb242_55;
  TNode<IntPtrT> phi_bb242_59;
  TNode<IntPtrT> phi_bb242_60;
  TNode<IntPtrT> tmp498;
  TNode<IntPtrT> tmp499;
  TNode<Union<HeapObject, TaggedIndex>> tmp500;
  TNode<IntPtrT> tmp501;
  TNode<Object> tmp502;
  TNode<JSAny> tmp503;
  if (block242.is_used()) {
    ca_.Bind(&block242, &phi_bb242_20, &phi_bb242_25, &phi_bb242_26, &phi_bb242_27, &phi_bb242_28, &phi_bb242_29, &phi_bb242_32, &phi_bb242_33, &phi_bb242_35, &phi_bb242_36, &phi_bb242_37, &phi_bb242_46, &phi_bb242_48, &phi_bb242_54, &phi_bb242_55, &phi_bb242_59, &phi_bb242_60);
    tmp498 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb242_60});
    tmp499 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp493}, TNode<IntPtrT>{tmp498});
    std::tie(tmp500, tmp501) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp492}, TNode<IntPtrT>{tmp499}).Flatten();
    tmp502 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp500, tmp501});
    tmp503 = UnsafeCast_JSAny_0(state_, TNode<Context>{tmp442}, TNode<Object>{tmp502});
    ca_.Goto(&block237, phi_bb242_20, phi_bb242_25, phi_bb242_26, phi_bb242_27, phi_bb242_28, phi_bb242_29, phi_bb242_32, phi_bb242_33, phi_bb242_35, phi_bb242_36, phi_bb242_37, phi_bb242_46, phi_bb242_48, tmp503);
  }

  TNode<IntPtrT> phi_bb243_20;
  TNode<IntPtrT> phi_bb243_25;
  TNode<IntPtrT> phi_bb243_26;
  TNode<IntPtrT> phi_bb243_27;
  TNode<IntPtrT> phi_bb243_28;
  TNode<IntPtrT> phi_bb243_29;
  TNode<IntPtrT> phi_bb243_32;
  TNode<BoolT> phi_bb243_33;
  TNode<IntPtrT> phi_bb243_35;
  TNode<IntPtrT> phi_bb243_36;
  TNode<BoolT> phi_bb243_37;
  TNode<IntPtrT> phi_bb243_46;
  TNode<BoolT> phi_bb243_48;
  TNode<IntPtrT> phi_bb243_54;
  TNode<IntPtrT> phi_bb243_55;
  TNode<IntPtrT> phi_bb243_59;
  TNode<IntPtrT> phi_bb243_60;
  if (block243.is_used()) {
    ca_.Bind(&block243, &phi_bb243_20, &phi_bb243_25, &phi_bb243_26, &phi_bb243_27, &phi_bb243_28, &phi_bb243_29, &phi_bb243_32, &phi_bb243_33, &phi_bb243_35, &phi_bb243_36, &phi_bb243_37, &phi_bb243_46, &phi_bb243_48, &phi_bb243_54, &phi_bb243_55, &phi_bb243_59, &phi_bb243_60);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb237_20;
  TNode<IntPtrT> phi_bb237_25;
  TNode<IntPtrT> phi_bb237_26;
  TNode<IntPtrT> phi_bb237_27;
  TNode<IntPtrT> phi_bb237_28;
  TNode<IntPtrT> phi_bb237_29;
  TNode<IntPtrT> phi_bb237_32;
  TNode<BoolT> phi_bb237_33;
  TNode<IntPtrT> phi_bb237_35;
  TNode<IntPtrT> phi_bb237_36;
  TNode<BoolT> phi_bb237_37;
  TNode<IntPtrT> phi_bb237_46;
  TNode<BoolT> phi_bb237_48;
  TNode<JSAny> phi_bb237_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp504;
  TNode<IntPtrT> tmp505;
  TNode<IntPtrT> tmp506;
  TNode<IntPtrT> tmp507;
  TNode<Uint32T> tmp508;
  TNode<Uint32T> tmp509;
  TNode<BoolT> tmp510;
  if (block237.is_used()) {
    ca_.Bind(&block237, &phi_bb237_20, &phi_bb237_25, &phi_bb237_26, &phi_bb237_27, &phi_bb237_28, &phi_bb237_29, &phi_bb237_32, &phi_bb237_33, &phi_bb237_35, &phi_bb237_36, &phi_bb237_37, &phi_bb237_46, &phi_bb237_48, &phi_bb237_49);
    std::tie(tmp504, tmp505) = NewReference_WasmCodePointer_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp54}, TNode<IntPtrT>{phi_bb237_46}).Flatten();
    tmp506 = FromConstexpr_intptr_constexpr_int31_0(state_, kInt32Size);
    tmp507 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb237_46}, TNode<IntPtrT>{tmp506});
    tmp508 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp504, tmp505});
    tmp509 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp510 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp508}, TNode<Uint32T>{tmp509});
    ca_.Branch(tmp510, &block253, std::vector<compiler::Node*>{phi_bb237_20, phi_bb237_25, phi_bb237_26, phi_bb237_27, phi_bb237_28, phi_bb237_29, phi_bb237_32, phi_bb237_33, phi_bb237_35, phi_bb237_36, phi_bb237_37, phi_bb237_48, phi_bb237_49}, &block254, std::vector<compiler::Node*>{phi_bb237_20, phi_bb237_25, phi_bb237_26, phi_bb237_27, phi_bb237_28, phi_bb237_29, phi_bb237_32, phi_bb237_33, phi_bb237_35, phi_bb237_36, phi_bb237_37, phi_bb237_48, phi_bb237_49});
  }

  TNode<IntPtrT> phi_bb253_20;
  TNode<IntPtrT> phi_bb253_25;
  TNode<IntPtrT> phi_bb253_26;
  TNode<IntPtrT> phi_bb253_27;
  TNode<IntPtrT> phi_bb253_28;
  TNode<IntPtrT> phi_bb253_29;
  TNode<IntPtrT> phi_bb253_32;
  TNode<BoolT> phi_bb253_33;
  TNode<IntPtrT> phi_bb253_35;
  TNode<IntPtrT> phi_bb253_36;
  TNode<BoolT> phi_bb253_37;
  TNode<BoolT> phi_bb253_48;
  TNode<JSAny> phi_bb253_49;
  TNode<IntPtrT> tmp511;
  TNode<IntPtrT> tmp512;
  TNode<IntPtrT> tmp513;
  TNode<BoolT> tmp514;
  if (block253.is_used()) {
    ca_.Bind(&block253, &phi_bb253_20, &phi_bb253_25, &phi_bb253_26, &phi_bb253_27, &phi_bb253_28, &phi_bb253_29, &phi_bb253_32, &phi_bb253_33, &phi_bb253_35, &phi_bb253_36, &phi_bb253_37, &phi_bb253_48, &phi_bb253_49);
    tmp511 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp512 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb253_25}, TNode<IntPtrT>{tmp511});
    tmp513 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp514 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb253_25}, TNode<IntPtrT>{tmp513});
    ca_.Branch(tmp514, &block257, std::vector<compiler::Node*>{phi_bb253_20, phi_bb253_26, phi_bb253_27, phi_bb253_28, phi_bb253_29, phi_bb253_32, phi_bb253_33, phi_bb253_35, phi_bb253_36, phi_bb253_37, phi_bb253_48, phi_bb253_49}, &block258, std::vector<compiler::Node*>{phi_bb253_20, phi_bb253_26, phi_bb253_27, phi_bb253_28, phi_bb253_29, phi_bb253_32, phi_bb253_33, phi_bb253_35, phi_bb253_36, phi_bb253_37, phi_bb253_48, phi_bb253_49});
  }

  TNode<IntPtrT> phi_bb257_20;
  TNode<IntPtrT> phi_bb257_26;
  TNode<IntPtrT> phi_bb257_27;
  TNode<IntPtrT> phi_bb257_28;
  TNode<IntPtrT> phi_bb257_29;
  TNode<IntPtrT> phi_bb257_32;
  TNode<BoolT> phi_bb257_33;
  TNode<IntPtrT> phi_bb257_35;
  TNode<IntPtrT> phi_bb257_36;
  TNode<BoolT> phi_bb257_37;
  TNode<BoolT> phi_bb257_48;
  TNode<JSAny> phi_bb257_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp515;
  TNode<IntPtrT> tmp516;
  TNode<IntPtrT> tmp517;
  TNode<IntPtrT> tmp518;
  if (block257.is_used()) {
    ca_.Bind(&block257, &phi_bb257_20, &phi_bb257_26, &phi_bb257_27, &phi_bb257_28, &phi_bb257_29, &phi_bb257_32, &phi_bb257_33, &phi_bb257_35, &phi_bb257_36, &phi_bb257_37, &phi_bb257_48, &phi_bb257_49);
    std::tie(tmp515, tmp516) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb257_27}).Flatten();
    tmp517 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp518 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb257_27}, TNode<IntPtrT>{tmp517});
    ca_.Goto(&block256, phi_bb257_20, phi_bb257_26, tmp518, phi_bb257_28, phi_bb257_29, phi_bb257_32, phi_bb257_33, phi_bb257_35, phi_bb257_36, phi_bb257_37, phi_bb257_48, phi_bb257_49, tmp515, tmp516);
  }

  TNode<IntPtrT> phi_bb258_20;
  TNode<IntPtrT> phi_bb258_26;
  TNode<IntPtrT> phi_bb258_27;
  TNode<IntPtrT> phi_bb258_28;
  TNode<IntPtrT> phi_bb258_29;
  TNode<IntPtrT> phi_bb258_32;
  TNode<BoolT> phi_bb258_33;
  TNode<IntPtrT> phi_bb258_35;
  TNode<IntPtrT> phi_bb258_36;
  TNode<BoolT> phi_bb258_37;
  TNode<BoolT> phi_bb258_48;
  TNode<JSAny> phi_bb258_49;
  if (block258.is_used()) {
    ca_.Bind(&block258, &phi_bb258_20, &phi_bb258_26, &phi_bb258_27, &phi_bb258_28, &phi_bb258_29, &phi_bb258_32, &phi_bb258_33, &phi_bb258_35, &phi_bb258_36, &phi_bb258_37, &phi_bb258_48, &phi_bb258_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block260, phi_bb258_20, phi_bb258_26, phi_bb258_27, phi_bb258_28, phi_bb258_29, phi_bb258_32, phi_bb258_33, phi_bb258_35, phi_bb258_36, phi_bb258_37, phi_bb258_48, phi_bb258_49);
    } else {
      ca_.Goto(&block261, phi_bb258_20, phi_bb258_26, phi_bb258_27, phi_bb258_28, phi_bb258_29, phi_bb258_32, phi_bb258_33, phi_bb258_35, phi_bb258_36, phi_bb258_37, phi_bb258_48, phi_bb258_49);
    }
  }

  TNode<IntPtrT> phi_bb260_20;
  TNode<IntPtrT> phi_bb260_26;
  TNode<IntPtrT> phi_bb260_27;
  TNode<IntPtrT> phi_bb260_28;
  TNode<IntPtrT> phi_bb260_29;
  TNode<IntPtrT> phi_bb260_32;
  TNode<BoolT> phi_bb260_33;
  TNode<IntPtrT> phi_bb260_35;
  TNode<IntPtrT> phi_bb260_36;
  TNode<BoolT> phi_bb260_37;
  TNode<BoolT> phi_bb260_48;
  TNode<JSAny> phi_bb260_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp519;
  TNode<IntPtrT> tmp520;
  TNode<IntPtrT> tmp521;
  TNode<IntPtrT> tmp522;
  if (block260.is_used()) {
    ca_.Bind(&block260, &phi_bb260_20, &phi_bb260_26, &phi_bb260_27, &phi_bb260_28, &phi_bb260_29, &phi_bb260_32, &phi_bb260_33, &phi_bb260_35, &phi_bb260_36, &phi_bb260_37, &phi_bb260_48, &phi_bb260_49);
    std::tie(tmp519, tmp520) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb260_29}).Flatten();
    tmp521 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp522 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb260_29}, TNode<IntPtrT>{tmp521});
    ca_.Goto(&block259, phi_bb260_20, phi_bb260_26, phi_bb260_27, phi_bb260_28, tmp522, phi_bb260_32, phi_bb260_33, phi_bb260_35, phi_bb260_36, phi_bb260_37, phi_bb260_48, phi_bb260_49, tmp519, tmp520);
  }

  TNode<IntPtrT> phi_bb261_20;
  TNode<IntPtrT> phi_bb261_26;
  TNode<IntPtrT> phi_bb261_27;
  TNode<IntPtrT> phi_bb261_28;
  TNode<IntPtrT> phi_bb261_29;
  TNode<IntPtrT> phi_bb261_32;
  TNode<BoolT> phi_bb261_33;
  TNode<IntPtrT> phi_bb261_35;
  TNode<IntPtrT> phi_bb261_36;
  TNode<BoolT> phi_bb261_37;
  TNode<BoolT> phi_bb261_48;
  TNode<JSAny> phi_bb261_49;
  TNode<IntPtrT> tmp523;
  TNode<BoolT> tmp524;
  if (block261.is_used()) {
    ca_.Bind(&block261, &phi_bb261_20, &phi_bb261_26, &phi_bb261_27, &phi_bb261_28, &phi_bb261_29, &phi_bb261_32, &phi_bb261_33, &phi_bb261_35, &phi_bb261_36, &phi_bb261_37, &phi_bb261_48, &phi_bb261_49);
    tmp523 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp524 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb261_32}, TNode<IntPtrT>{tmp523});
    ca_.Branch(tmp524, &block263, std::vector<compiler::Node*>{phi_bb261_20, phi_bb261_26, phi_bb261_27, phi_bb261_28, phi_bb261_29, phi_bb261_32, phi_bb261_33, phi_bb261_35, phi_bb261_36, phi_bb261_37, phi_bb261_48, phi_bb261_49}, &block264, std::vector<compiler::Node*>{phi_bb261_20, phi_bb261_26, phi_bb261_27, phi_bb261_28, phi_bb261_29, phi_bb261_32, phi_bb261_33, phi_bb261_35, phi_bb261_36, phi_bb261_37, phi_bb261_48, phi_bb261_49});
  }

  TNode<IntPtrT> phi_bb263_20;
  TNode<IntPtrT> phi_bb263_26;
  TNode<IntPtrT> phi_bb263_27;
  TNode<IntPtrT> phi_bb263_28;
  TNode<IntPtrT> phi_bb263_29;
  TNode<IntPtrT> phi_bb263_32;
  TNode<BoolT> phi_bb263_33;
  TNode<IntPtrT> phi_bb263_35;
  TNode<IntPtrT> phi_bb263_36;
  TNode<BoolT> phi_bb263_37;
  TNode<BoolT> phi_bb263_48;
  TNode<JSAny> phi_bb263_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp525;
  TNode<IntPtrT> tmp526;
  TNode<IntPtrT> tmp527;
  TNode<BoolT> tmp528;
  if (block263.is_used()) {
    ca_.Bind(&block263, &phi_bb263_20, &phi_bb263_26, &phi_bb263_27, &phi_bb263_28, &phi_bb263_29, &phi_bb263_32, &phi_bb263_33, &phi_bb263_35, &phi_bb263_36, &phi_bb263_37, &phi_bb263_48, &phi_bb263_49);
    std::tie(tmp525, tmp526) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb263_32}).Flatten();
    tmp527 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp528 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block259, phi_bb263_20, phi_bb263_26, phi_bb263_27, phi_bb263_28, phi_bb263_29, tmp527, tmp528, phi_bb263_35, phi_bb263_36, phi_bb263_37, phi_bb263_48, phi_bb263_49, tmp525, tmp526);
  }

  TNode<IntPtrT> phi_bb264_20;
  TNode<IntPtrT> phi_bb264_26;
  TNode<IntPtrT> phi_bb264_27;
  TNode<IntPtrT> phi_bb264_28;
  TNode<IntPtrT> phi_bb264_29;
  TNode<IntPtrT> phi_bb264_32;
  TNode<BoolT> phi_bb264_33;
  TNode<IntPtrT> phi_bb264_35;
  TNode<IntPtrT> phi_bb264_36;
  TNode<BoolT> phi_bb264_37;
  TNode<BoolT> phi_bb264_48;
  TNode<JSAny> phi_bb264_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp529;
  TNode<IntPtrT> tmp530;
  TNode<IntPtrT> tmp531;
  TNode<IntPtrT> tmp532;
  TNode<IntPtrT> tmp533;
  TNode<IntPtrT> tmp534;
  TNode<BoolT> tmp535;
  if (block264.is_used()) {
    ca_.Bind(&block264, &phi_bb264_20, &phi_bb264_26, &phi_bb264_27, &phi_bb264_28, &phi_bb264_29, &phi_bb264_32, &phi_bb264_33, &phi_bb264_35, &phi_bb264_36, &phi_bb264_37, &phi_bb264_48, &phi_bb264_49);
    std::tie(tmp529, tmp530) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb264_29}).Flatten();
    tmp531 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp532 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb264_29}, TNode<IntPtrT>{tmp531});
    tmp533 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp534 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp532}, TNode<IntPtrT>{tmp533});
    tmp535 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block259, phi_bb264_20, phi_bb264_26, phi_bb264_27, phi_bb264_28, tmp534, tmp532, tmp535, phi_bb264_35, phi_bb264_36, phi_bb264_37, phi_bb264_48, phi_bb264_49, tmp529, tmp530);
  }

  TNode<IntPtrT> phi_bb259_20;
  TNode<IntPtrT> phi_bb259_26;
  TNode<IntPtrT> phi_bb259_27;
  TNode<IntPtrT> phi_bb259_28;
  TNode<IntPtrT> phi_bb259_29;
  TNode<IntPtrT> phi_bb259_32;
  TNode<BoolT> phi_bb259_33;
  TNode<IntPtrT> phi_bb259_35;
  TNode<IntPtrT> phi_bb259_36;
  TNode<BoolT> phi_bb259_37;
  TNode<BoolT> phi_bb259_48;
  TNode<JSAny> phi_bb259_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb259_51;
  TNode<IntPtrT> phi_bb259_52;
  if (block259.is_used()) {
    ca_.Bind(&block259, &phi_bb259_20, &phi_bb259_26, &phi_bb259_27, &phi_bb259_28, &phi_bb259_29, &phi_bb259_32, &phi_bb259_33, &phi_bb259_35, &phi_bb259_36, &phi_bb259_37, &phi_bb259_48, &phi_bb259_49, &phi_bb259_51, &phi_bb259_52);
    ca_.Goto(&block256, phi_bb259_20, phi_bb259_26, phi_bb259_27, phi_bb259_28, phi_bb259_29, phi_bb259_32, phi_bb259_33, phi_bb259_35, phi_bb259_36, phi_bb259_37, phi_bb259_48, phi_bb259_49, phi_bb259_51, phi_bb259_52);
  }

  TNode<IntPtrT> phi_bb256_20;
  TNode<IntPtrT> phi_bb256_26;
  TNode<IntPtrT> phi_bb256_27;
  TNode<IntPtrT> phi_bb256_28;
  TNode<IntPtrT> phi_bb256_29;
  TNode<IntPtrT> phi_bb256_32;
  TNode<BoolT> phi_bb256_33;
  TNode<IntPtrT> phi_bb256_35;
  TNode<IntPtrT> phi_bb256_36;
  TNode<BoolT> phi_bb256_37;
  TNode<BoolT> phi_bb256_48;
  TNode<JSAny> phi_bb256_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb256_51;
  TNode<IntPtrT> phi_bb256_52;
  TNode<Smi> tmp536;
  if (block256.is_used()) {
    ca_.Bind(&block256, &phi_bb256_20, &phi_bb256_26, &phi_bb256_27, &phi_bb256_28, &phi_bb256_29, &phi_bb256_32, &phi_bb256_33, &phi_bb256_35, &phi_bb256_36, &phi_bb256_37, &phi_bb256_48, &phi_bb256_49, &phi_bb256_51, &phi_bb256_52);
    compiler::CodeAssemblerLabel label537(&ca_);
    tmp536 = Cast_Smi_0(state_, TNode<Object>{phi_bb256_49}, &label537);
    ca_.Goto(&block267, phi_bb256_20, phi_bb256_26, phi_bb256_27, phi_bb256_28, phi_bb256_29, phi_bb256_32, phi_bb256_33, phi_bb256_35, phi_bb256_36, phi_bb256_37, phi_bb256_48, phi_bb256_49, phi_bb256_51, phi_bb256_52, phi_bb256_49, phi_bb256_49);
    if (label537.is_used()) {
      ca_.Bind(&label537);
      ca_.Goto(&block268, phi_bb256_20, phi_bb256_26, phi_bb256_27, phi_bb256_28, phi_bb256_29, phi_bb256_32, phi_bb256_33, phi_bb256_35, phi_bb256_36, phi_bb256_37, phi_bb256_48, phi_bb256_49, phi_bb256_51, phi_bb256_52, phi_bb256_49, phi_bb256_49);
    }
  }

  TNode<IntPtrT> phi_bb268_20;
  TNode<IntPtrT> phi_bb268_26;
  TNode<IntPtrT> phi_bb268_27;
  TNode<IntPtrT> phi_bb268_28;
  TNode<IntPtrT> phi_bb268_29;
  TNode<IntPtrT> phi_bb268_32;
  TNode<BoolT> phi_bb268_33;
  TNode<IntPtrT> phi_bb268_35;
  TNode<IntPtrT> phi_bb268_36;
  TNode<BoolT> phi_bb268_37;
  TNode<BoolT> phi_bb268_48;
  TNode<JSAny> phi_bb268_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb268_51;
  TNode<IntPtrT> phi_bb268_52;
  TNode<JSAny> phi_bb268_53;
  TNode<JSAny> phi_bb268_54;
  TNode<Int32T> tmp538;
  TNode<Uint32T> tmp539;
  TNode<IntPtrT> tmp540;
  if (block268.is_used()) {
    ca_.Bind(&block268, &phi_bb268_20, &phi_bb268_26, &phi_bb268_27, &phi_bb268_28, &phi_bb268_29, &phi_bb268_32, &phi_bb268_33, &phi_bb268_35, &phi_bb268_36, &phi_bb268_37, &phi_bb268_48, &phi_bb268_49, &phi_bb268_51, &phi_bb268_52, &phi_bb268_53, &phi_bb268_54);
    tmp538 = ca_.CallBuiltin<Int32T>(Builtin::kWasmTaggedNonSmiToInt32, tmp442, ca_.UncheckedCast<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, String, Symbol, Undefined>>(phi_bb268_53));
    tmp539 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp538});
    tmp540 = Convert_intptr_WasmCodePointer_0(state_, TNode<Uint32T>{tmp539});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb268_51, phi_bb268_52}, tmp540);
    ca_.Goto(&block265, phi_bb268_20, phi_bb268_26, phi_bb268_27, phi_bb268_28, phi_bb268_29, phi_bb268_32, phi_bb268_33, phi_bb268_35, phi_bb268_36, phi_bb268_37, phi_bb268_48, phi_bb268_49, phi_bb268_51, phi_bb268_52, phi_bb268_53);
  }

  TNode<IntPtrT> phi_bb267_20;
  TNode<IntPtrT> phi_bb267_26;
  TNode<IntPtrT> phi_bb267_27;
  TNode<IntPtrT> phi_bb267_28;
  TNode<IntPtrT> phi_bb267_29;
  TNode<IntPtrT> phi_bb267_32;
  TNode<BoolT> phi_bb267_33;
  TNode<IntPtrT> phi_bb267_35;
  TNode<IntPtrT> phi_bb267_36;
  TNode<BoolT> phi_bb267_37;
  TNode<BoolT> phi_bb267_48;
  TNode<JSAny> phi_bb267_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb267_51;
  TNode<IntPtrT> phi_bb267_52;
  TNode<JSAny> phi_bb267_53;
  TNode<JSAny> phi_bb267_54;
  TNode<Int32T> tmp541;
  TNode<Uint32T> tmp542;
  TNode<IntPtrT> tmp543;
  if (block267.is_used()) {
    ca_.Bind(&block267, &phi_bb267_20, &phi_bb267_26, &phi_bb267_27, &phi_bb267_28, &phi_bb267_29, &phi_bb267_32, &phi_bb267_33, &phi_bb267_35, &phi_bb267_36, &phi_bb267_37, &phi_bb267_48, &phi_bb267_49, &phi_bb267_51, &phi_bb267_52, &phi_bb267_53, &phi_bb267_54);
    tmp541 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp536});
    tmp542 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp541});
    tmp543 = Convert_intptr_WasmCodePointer_0(state_, TNode<Uint32T>{tmp542});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb267_51, phi_bb267_52}, tmp543);
    ca_.Goto(&block265, phi_bb267_20, phi_bb267_26, phi_bb267_27, phi_bb267_28, phi_bb267_29, phi_bb267_32, phi_bb267_33, phi_bb267_35, phi_bb267_36, phi_bb267_37, phi_bb267_48, phi_bb267_49, phi_bb267_51, phi_bb267_52, phi_bb267_53);
  }

  TNode<IntPtrT> phi_bb265_20;
  TNode<IntPtrT> phi_bb265_26;
  TNode<IntPtrT> phi_bb265_27;
  TNode<IntPtrT> phi_bb265_28;
  TNode<IntPtrT> phi_bb265_29;
  TNode<IntPtrT> phi_bb265_32;
  TNode<BoolT> phi_bb265_33;
  TNode<IntPtrT> phi_bb265_35;
  TNode<IntPtrT> phi_bb265_36;
  TNode<BoolT> phi_bb265_37;
  TNode<BoolT> phi_bb265_48;
  TNode<JSAny> phi_bb265_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb265_51;
  TNode<IntPtrT> phi_bb265_52;
  TNode<JSAny> phi_bb265_53;
  if (block265.is_used()) {
    ca_.Bind(&block265, &phi_bb265_20, &phi_bb265_26, &phi_bb265_27, &phi_bb265_28, &phi_bb265_29, &phi_bb265_32, &phi_bb265_33, &phi_bb265_35, &phi_bb265_36, &phi_bb265_37, &phi_bb265_48, &phi_bb265_49, &phi_bb265_51, &phi_bb265_52, &phi_bb265_53);
    ca_.Goto(&block255, phi_bb265_20, tmp512, phi_bb265_26, phi_bb265_27, phi_bb265_28, phi_bb265_29, phi_bb265_32, phi_bb265_33, phi_bb265_35, phi_bb265_36, phi_bb265_37, phi_bb265_48, phi_bb265_49);
  }

  TNode<IntPtrT> phi_bb254_20;
  TNode<IntPtrT> phi_bb254_25;
  TNode<IntPtrT> phi_bb254_26;
  TNode<IntPtrT> phi_bb254_27;
  TNode<IntPtrT> phi_bb254_28;
  TNode<IntPtrT> phi_bb254_29;
  TNode<IntPtrT> phi_bb254_32;
  TNode<BoolT> phi_bb254_33;
  TNode<IntPtrT> phi_bb254_35;
  TNode<IntPtrT> phi_bb254_36;
  TNode<BoolT> phi_bb254_37;
  TNode<BoolT> phi_bb254_48;
  TNode<JSAny> phi_bb254_49;
  TNode<Uint32T> tmp544;
  TNode<BoolT> tmp545;
  if (block254.is_used()) {
    ca_.Bind(&block254, &phi_bb254_20, &phi_bb254_25, &phi_bb254_26, &phi_bb254_27, &phi_bb254_28, &phi_bb254_29, &phi_bb254_32, &phi_bb254_33, &phi_bb254_35, &phi_bb254_36, &phi_bb254_37, &phi_bb254_48, &phi_bb254_49);
    tmp544 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp545 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp508}, TNode<Uint32T>{tmp544});
    ca_.Branch(tmp545, &block269, std::vector<compiler::Node*>{phi_bb254_20, phi_bb254_25, phi_bb254_26, phi_bb254_27, phi_bb254_28, phi_bb254_29, phi_bb254_32, phi_bb254_33, phi_bb254_35, phi_bb254_36, phi_bb254_37, phi_bb254_48, phi_bb254_49}, &block270, std::vector<compiler::Node*>{phi_bb254_20, phi_bb254_25, phi_bb254_26, phi_bb254_27, phi_bb254_28, phi_bb254_29, phi_bb254_32, phi_bb254_33, phi_bb254_35, phi_bb254_36, phi_bb254_37, phi_bb254_48, phi_bb254_49});
  }

  TNode<IntPtrT> phi_bb269_20;
  TNode<IntPtrT> phi_bb269_25;
  TNode<IntPtrT> phi_bb269_26;
  TNode<IntPtrT> phi_bb269_27;
  TNode<IntPtrT> phi_bb269_28;
  TNode<IntPtrT> phi_bb269_29;
  TNode<IntPtrT> phi_bb269_32;
  TNode<BoolT> phi_bb269_33;
  TNode<IntPtrT> phi_bb269_35;
  TNode<IntPtrT> phi_bb269_36;
  TNode<BoolT> phi_bb269_37;
  TNode<BoolT> phi_bb269_48;
  TNode<JSAny> phi_bb269_49;
  TNode<IntPtrT> tmp546;
  TNode<IntPtrT> tmp547;
  TNode<IntPtrT> tmp548;
  TNode<BoolT> tmp549;
  if (block269.is_used()) {
    ca_.Bind(&block269, &phi_bb269_20, &phi_bb269_25, &phi_bb269_26, &phi_bb269_27, &phi_bb269_28, &phi_bb269_29, &phi_bb269_32, &phi_bb269_33, &phi_bb269_35, &phi_bb269_36, &phi_bb269_37, &phi_bb269_48, &phi_bb269_49);
    tmp546 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp547 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb269_26}, TNode<IntPtrT>{tmp546});
    tmp548 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp549 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb269_26}, TNode<IntPtrT>{tmp548});
    ca_.Branch(tmp549, &block273, std::vector<compiler::Node*>{phi_bb269_20, phi_bb269_25, phi_bb269_27, phi_bb269_28, phi_bb269_29, phi_bb269_32, phi_bb269_33, phi_bb269_35, phi_bb269_36, phi_bb269_37, phi_bb269_48, phi_bb269_49}, &block274, std::vector<compiler::Node*>{phi_bb269_20, phi_bb269_25, phi_bb269_27, phi_bb269_28, phi_bb269_29, phi_bb269_32, phi_bb269_33, phi_bb269_35, phi_bb269_36, phi_bb269_37, phi_bb269_48, phi_bb269_49});
  }

  TNode<IntPtrT> phi_bb273_20;
  TNode<IntPtrT> phi_bb273_25;
  TNode<IntPtrT> phi_bb273_27;
  TNode<IntPtrT> phi_bb273_28;
  TNode<IntPtrT> phi_bb273_29;
  TNode<IntPtrT> phi_bb273_32;
  TNode<BoolT> phi_bb273_33;
  TNode<IntPtrT> phi_bb273_35;
  TNode<IntPtrT> phi_bb273_36;
  TNode<BoolT> phi_bb273_37;
  TNode<BoolT> phi_bb273_48;
  TNode<JSAny> phi_bb273_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp550;
  TNode<IntPtrT> tmp551;
  TNode<IntPtrT> tmp552;
  TNode<IntPtrT> tmp553;
  if (block273.is_used()) {
    ca_.Bind(&block273, &phi_bb273_20, &phi_bb273_25, &phi_bb273_27, &phi_bb273_28, &phi_bb273_29, &phi_bb273_32, &phi_bb273_33, &phi_bb273_35, &phi_bb273_36, &phi_bb273_37, &phi_bb273_48, &phi_bb273_49);
    std::tie(tmp550, tmp551) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb273_28}).Flatten();
    tmp552 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp553 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb273_28}, TNode<IntPtrT>{tmp552});
    ca_.Goto(&block272, phi_bb273_20, phi_bb273_25, phi_bb273_27, tmp553, phi_bb273_29, phi_bb273_32, phi_bb273_33, phi_bb273_35, phi_bb273_36, phi_bb273_37, phi_bb273_48, phi_bb273_49, tmp550, tmp551);
  }

  TNode<IntPtrT> phi_bb274_20;
  TNode<IntPtrT> phi_bb274_25;
  TNode<IntPtrT> phi_bb274_27;
  TNode<IntPtrT> phi_bb274_28;
  TNode<IntPtrT> phi_bb274_29;
  TNode<IntPtrT> phi_bb274_32;
  TNode<BoolT> phi_bb274_33;
  TNode<IntPtrT> phi_bb274_35;
  TNode<IntPtrT> phi_bb274_36;
  TNode<BoolT> phi_bb274_37;
  TNode<BoolT> phi_bb274_48;
  TNode<JSAny> phi_bb274_49;
  if (block274.is_used()) {
    ca_.Bind(&block274, &phi_bb274_20, &phi_bb274_25, &phi_bb274_27, &phi_bb274_28, &phi_bb274_29, &phi_bb274_32, &phi_bb274_33, &phi_bb274_35, &phi_bb274_36, &phi_bb274_37, &phi_bb274_48, &phi_bb274_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block276, phi_bb274_20, phi_bb274_25, phi_bb274_27, phi_bb274_28, phi_bb274_29, phi_bb274_32, phi_bb274_33, phi_bb274_35, phi_bb274_36, phi_bb274_37, phi_bb274_48, phi_bb274_49);
    } else {
      ca_.Goto(&block277, phi_bb274_20, phi_bb274_25, phi_bb274_27, phi_bb274_28, phi_bb274_29, phi_bb274_32, phi_bb274_33, phi_bb274_35, phi_bb274_36, phi_bb274_37, phi_bb274_48, phi_bb274_49);
    }
  }

  TNode<IntPtrT> phi_bb276_20;
  TNode<IntPtrT> phi_bb276_25;
  TNode<IntPtrT> phi_bb276_27;
  TNode<IntPtrT> phi_bb276_28;
  TNode<IntPtrT> phi_bb276_29;
  TNode<IntPtrT> phi_bb276_32;
  TNode<BoolT> phi_bb276_33;
  TNode<IntPtrT> phi_bb276_35;
  TNode<IntPtrT> phi_bb276_36;
  TNode<BoolT> phi_bb276_37;
  TNode<BoolT> phi_bb276_48;
  TNode<JSAny> phi_bb276_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp554;
  TNode<IntPtrT> tmp555;
  TNode<IntPtrT> tmp556;
  TNode<IntPtrT> tmp557;
  if (block276.is_used()) {
    ca_.Bind(&block276, &phi_bb276_20, &phi_bb276_25, &phi_bb276_27, &phi_bb276_28, &phi_bb276_29, &phi_bb276_32, &phi_bb276_33, &phi_bb276_35, &phi_bb276_36, &phi_bb276_37, &phi_bb276_48, &phi_bb276_49);
    std::tie(tmp554, tmp555) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb276_29}).Flatten();
    tmp556 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp557 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb276_29}, TNode<IntPtrT>{tmp556});
    ca_.Goto(&block275, phi_bb276_20, phi_bb276_25, phi_bb276_27, phi_bb276_28, tmp557, phi_bb276_32, phi_bb276_33, phi_bb276_35, phi_bb276_36, phi_bb276_37, phi_bb276_48, phi_bb276_49, tmp554, tmp555);
  }

  TNode<IntPtrT> phi_bb277_20;
  TNode<IntPtrT> phi_bb277_25;
  TNode<IntPtrT> phi_bb277_27;
  TNode<IntPtrT> phi_bb277_28;
  TNode<IntPtrT> phi_bb277_29;
  TNode<IntPtrT> phi_bb277_32;
  TNode<BoolT> phi_bb277_33;
  TNode<IntPtrT> phi_bb277_35;
  TNode<IntPtrT> phi_bb277_36;
  TNode<BoolT> phi_bb277_37;
  TNode<BoolT> phi_bb277_48;
  TNode<JSAny> phi_bb277_49;
  TNode<IntPtrT> tmp558;
  TNode<BoolT> tmp559;
  if (block277.is_used()) {
    ca_.Bind(&block277, &phi_bb277_20, &phi_bb277_25, &phi_bb277_27, &phi_bb277_28, &phi_bb277_29, &phi_bb277_32, &phi_bb277_33, &phi_bb277_35, &phi_bb277_36, &phi_bb277_37, &phi_bb277_48, &phi_bb277_49);
    tmp558 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp559 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb277_32}, TNode<IntPtrT>{tmp558});
    ca_.Branch(tmp559, &block279, std::vector<compiler::Node*>{phi_bb277_20, phi_bb277_25, phi_bb277_27, phi_bb277_28, phi_bb277_29, phi_bb277_32, phi_bb277_33, phi_bb277_35, phi_bb277_36, phi_bb277_37, phi_bb277_48, phi_bb277_49}, &block280, std::vector<compiler::Node*>{phi_bb277_20, phi_bb277_25, phi_bb277_27, phi_bb277_28, phi_bb277_29, phi_bb277_32, phi_bb277_33, phi_bb277_35, phi_bb277_36, phi_bb277_37, phi_bb277_48, phi_bb277_49});
  }

  TNode<IntPtrT> phi_bb279_20;
  TNode<IntPtrT> phi_bb279_25;
  TNode<IntPtrT> phi_bb279_27;
  TNode<IntPtrT> phi_bb279_28;
  TNode<IntPtrT> phi_bb279_29;
  TNode<IntPtrT> phi_bb279_32;
  TNode<BoolT> phi_bb279_33;
  TNode<IntPtrT> phi_bb279_35;
  TNode<IntPtrT> phi_bb279_36;
  TNode<BoolT> phi_bb279_37;
  TNode<BoolT> phi_bb279_48;
  TNode<JSAny> phi_bb279_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp560;
  TNode<IntPtrT> tmp561;
  TNode<IntPtrT> tmp562;
  TNode<BoolT> tmp563;
  if (block279.is_used()) {
    ca_.Bind(&block279, &phi_bb279_20, &phi_bb279_25, &phi_bb279_27, &phi_bb279_28, &phi_bb279_29, &phi_bb279_32, &phi_bb279_33, &phi_bb279_35, &phi_bb279_36, &phi_bb279_37, &phi_bb279_48, &phi_bb279_49);
    std::tie(tmp560, tmp561) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb279_32}).Flatten();
    tmp562 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp563 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block275, phi_bb279_20, phi_bb279_25, phi_bb279_27, phi_bb279_28, phi_bb279_29, tmp562, tmp563, phi_bb279_35, phi_bb279_36, phi_bb279_37, phi_bb279_48, phi_bb279_49, tmp560, tmp561);
  }

  TNode<IntPtrT> phi_bb280_20;
  TNode<IntPtrT> phi_bb280_25;
  TNode<IntPtrT> phi_bb280_27;
  TNode<IntPtrT> phi_bb280_28;
  TNode<IntPtrT> phi_bb280_29;
  TNode<IntPtrT> phi_bb280_32;
  TNode<BoolT> phi_bb280_33;
  TNode<IntPtrT> phi_bb280_35;
  TNode<IntPtrT> phi_bb280_36;
  TNode<BoolT> phi_bb280_37;
  TNode<BoolT> phi_bb280_48;
  TNode<JSAny> phi_bb280_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp564;
  TNode<IntPtrT> tmp565;
  TNode<IntPtrT> tmp566;
  TNode<IntPtrT> tmp567;
  TNode<IntPtrT> tmp568;
  TNode<IntPtrT> tmp569;
  TNode<BoolT> tmp570;
  if (block280.is_used()) {
    ca_.Bind(&block280, &phi_bb280_20, &phi_bb280_25, &phi_bb280_27, &phi_bb280_28, &phi_bb280_29, &phi_bb280_32, &phi_bb280_33, &phi_bb280_35, &phi_bb280_36, &phi_bb280_37, &phi_bb280_48, &phi_bb280_49);
    std::tie(tmp564, tmp565) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb280_29}).Flatten();
    tmp566 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp567 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb280_29}, TNode<IntPtrT>{tmp566});
    tmp568 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp569 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp567}, TNode<IntPtrT>{tmp568});
    tmp570 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block275, phi_bb280_20, phi_bb280_25, phi_bb280_27, phi_bb280_28, tmp569, tmp567, tmp570, phi_bb280_35, phi_bb280_36, phi_bb280_37, phi_bb280_48, phi_bb280_49, tmp564, tmp565);
  }

  TNode<IntPtrT> phi_bb275_20;
  TNode<IntPtrT> phi_bb275_25;
  TNode<IntPtrT> phi_bb275_27;
  TNode<IntPtrT> phi_bb275_28;
  TNode<IntPtrT> phi_bb275_29;
  TNode<IntPtrT> phi_bb275_32;
  TNode<BoolT> phi_bb275_33;
  TNode<IntPtrT> phi_bb275_35;
  TNode<IntPtrT> phi_bb275_36;
  TNode<BoolT> phi_bb275_37;
  TNode<BoolT> phi_bb275_48;
  TNode<JSAny> phi_bb275_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb275_51;
  TNode<IntPtrT> phi_bb275_52;
  if (block275.is_used()) {
    ca_.Bind(&block275, &phi_bb275_20, &phi_bb275_25, &phi_bb275_27, &phi_bb275_28, &phi_bb275_29, &phi_bb275_32, &phi_bb275_33, &phi_bb275_35, &phi_bb275_36, &phi_bb275_37, &phi_bb275_48, &phi_bb275_49, &phi_bb275_51, &phi_bb275_52);
    ca_.Goto(&block272, phi_bb275_20, phi_bb275_25, phi_bb275_27, phi_bb275_28, phi_bb275_29, phi_bb275_32, phi_bb275_33, phi_bb275_35, phi_bb275_36, phi_bb275_37, phi_bb275_48, phi_bb275_49, phi_bb275_51, phi_bb275_52);
  }

  TNode<IntPtrT> phi_bb272_20;
  TNode<IntPtrT> phi_bb272_25;
  TNode<IntPtrT> phi_bb272_27;
  TNode<IntPtrT> phi_bb272_28;
  TNode<IntPtrT> phi_bb272_29;
  TNode<IntPtrT> phi_bb272_32;
  TNode<BoolT> phi_bb272_33;
  TNode<IntPtrT> phi_bb272_35;
  TNode<IntPtrT> phi_bb272_36;
  TNode<BoolT> phi_bb272_37;
  TNode<BoolT> phi_bb272_48;
  TNode<JSAny> phi_bb272_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb272_51;
  TNode<IntPtrT> phi_bb272_52;
  if (block272.is_used()) {
    ca_.Bind(&block272, &phi_bb272_20, &phi_bb272_25, &phi_bb272_27, &phi_bb272_28, &phi_bb272_29, &phi_bb272_32, &phi_bb272_33, &phi_bb272_35, &phi_bb272_36, &phi_bb272_37, &phi_bb272_48, &phi_bb272_49, &phi_bb272_51, &phi_bb272_52);
    if ((((wasm::kIsFpAlwaysDouble || wasm::kIsBigEndian) || wasm::kIsBigEndianOnSim))) {
      ca_.Goto(&block281, phi_bb272_20, phi_bb272_25, phi_bb272_27, phi_bb272_28, phi_bb272_29, phi_bb272_32, phi_bb272_33, phi_bb272_35, phi_bb272_36, phi_bb272_37, phi_bb272_48, phi_bb272_49, phi_bb272_51, phi_bb272_52);
    } else {
      ca_.Goto(&block282, phi_bb272_20, phi_bb272_25, phi_bb272_27, phi_bb272_28, phi_bb272_29, phi_bb272_32, phi_bb272_33, phi_bb272_35, phi_bb272_36, phi_bb272_37, phi_bb272_48, phi_bb272_49, phi_bb272_51, phi_bb272_52);
    }
  }

  TNode<IntPtrT> phi_bb281_20;
  TNode<IntPtrT> phi_bb281_25;
  TNode<IntPtrT> phi_bb281_27;
  TNode<IntPtrT> phi_bb281_28;
  TNode<IntPtrT> phi_bb281_29;
  TNode<IntPtrT> phi_bb281_32;
  TNode<BoolT> phi_bb281_33;
  TNode<IntPtrT> phi_bb281_35;
  TNode<IntPtrT> phi_bb281_36;
  TNode<BoolT> phi_bb281_37;
  TNode<BoolT> phi_bb281_48;
  TNode<JSAny> phi_bb281_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb281_51;
  TNode<IntPtrT> phi_bb281_52;
  if (block281.is_used()) {
    ca_.Bind(&block281, &phi_bb281_20, &phi_bb281_25, &phi_bb281_27, &phi_bb281_28, &phi_bb281_29, &phi_bb281_32, &phi_bb281_33, &phi_bb281_35, &phi_bb281_36, &phi_bb281_37, &phi_bb281_48, &phi_bb281_49, &phi_bb281_51, &phi_bb281_52);
    HandleF32Returns_0(state_, TNode<NativeContext>{tmp442}, TorqueStructLocationAllocator_0{TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb281_25}, TNode<IntPtrT>{tmp547}, TNode<IntPtrT>{phi_bb281_27}, TNode<IntPtrT>{phi_bb281_28}, TNode<IntPtrT>{phi_bb281_29}, TNode<IntPtrT>{tmp480}, TNode<IntPtrT>{tmp481}, TNode<IntPtrT>{phi_bb281_32}, TNode<BoolT>{phi_bb281_33}}, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb281_51}, TNode<IntPtrT>{phi_bb281_52}, TorqueStructUnsafe_0{}}, TNode<JSAny>{phi_bb281_49});
    ca_.Goto(&block283, phi_bb281_20, phi_bb281_25, phi_bb281_27, phi_bb281_28, phi_bb281_29, phi_bb281_32, phi_bb281_33, phi_bb281_35, phi_bb281_36, phi_bb281_37, phi_bb281_48, phi_bb281_49, phi_bb281_51, phi_bb281_52);
  }

  TNode<IntPtrT> phi_bb282_20;
  TNode<IntPtrT> phi_bb282_25;
  TNode<IntPtrT> phi_bb282_27;
  TNode<IntPtrT> phi_bb282_28;
  TNode<IntPtrT> phi_bb282_29;
  TNode<IntPtrT> phi_bb282_32;
  TNode<BoolT> phi_bb282_33;
  TNode<IntPtrT> phi_bb282_35;
  TNode<IntPtrT> phi_bb282_36;
  TNode<BoolT> phi_bb282_37;
  TNode<BoolT> phi_bb282_48;
  TNode<JSAny> phi_bb282_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb282_51;
  TNode<IntPtrT> phi_bb282_52;
  TNode<Float32T> tmp571;
  TNode<Uint32T> tmp572;
  TNode<IntPtrT> tmp573;
  if (block282.is_used()) {
    ca_.Bind(&block282, &phi_bb282_20, &phi_bb282_25, &phi_bb282_27, &phi_bb282_28, &phi_bb282_29, &phi_bb282_32, &phi_bb282_33, &phi_bb282_35, &phi_bb282_36, &phi_bb282_37, &phi_bb282_48, &phi_bb282_49, &phi_bb282_51, &phi_bb282_52);
    tmp571 = ca_.CallBuiltin<Float32T>(Builtin::kWasmTaggedToFloat32, tmp442, phi_bb282_49);
    tmp572 = Bitcast_WasmCodePointer_float32_0(state_, TNode<Float32T>{tmp571});
    tmp573 = Convert_intptr_WasmCodePointer_0(state_, TNode<Uint32T>{tmp572});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb282_51, phi_bb282_52}, tmp573);
    ca_.Goto(&block283, phi_bb282_20, phi_bb282_25, phi_bb282_27, phi_bb282_28, phi_bb282_29, phi_bb282_32, phi_bb282_33, phi_bb282_35, phi_bb282_36, phi_bb282_37, phi_bb282_48, phi_bb282_49, phi_bb282_51, phi_bb282_52);
  }

  TNode<IntPtrT> phi_bb283_20;
  TNode<IntPtrT> phi_bb283_25;
  TNode<IntPtrT> phi_bb283_27;
  TNode<IntPtrT> phi_bb283_28;
  TNode<IntPtrT> phi_bb283_29;
  TNode<IntPtrT> phi_bb283_32;
  TNode<BoolT> phi_bb283_33;
  TNode<IntPtrT> phi_bb283_35;
  TNode<IntPtrT> phi_bb283_36;
  TNode<BoolT> phi_bb283_37;
  TNode<BoolT> phi_bb283_48;
  TNode<JSAny> phi_bb283_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb283_51;
  TNode<IntPtrT> phi_bb283_52;
  if (block283.is_used()) {
    ca_.Bind(&block283, &phi_bb283_20, &phi_bb283_25, &phi_bb283_27, &phi_bb283_28, &phi_bb283_29, &phi_bb283_32, &phi_bb283_33, &phi_bb283_35, &phi_bb283_36, &phi_bb283_37, &phi_bb283_48, &phi_bb283_49, &phi_bb283_51, &phi_bb283_52);
    ca_.Goto(&block271, phi_bb283_20, phi_bb283_25, tmp547, phi_bb283_27, phi_bb283_28, phi_bb283_29, phi_bb283_32, phi_bb283_33, phi_bb283_35, phi_bb283_36, phi_bb283_37, phi_bb283_48, phi_bb283_49);
  }

  TNode<IntPtrT> phi_bb270_20;
  TNode<IntPtrT> phi_bb270_25;
  TNode<IntPtrT> phi_bb270_26;
  TNode<IntPtrT> phi_bb270_27;
  TNode<IntPtrT> phi_bb270_28;
  TNode<IntPtrT> phi_bb270_29;
  TNode<IntPtrT> phi_bb270_32;
  TNode<BoolT> phi_bb270_33;
  TNode<IntPtrT> phi_bb270_35;
  TNode<IntPtrT> phi_bb270_36;
  TNode<BoolT> phi_bb270_37;
  TNode<BoolT> phi_bb270_48;
  TNode<JSAny> phi_bb270_49;
  TNode<Uint32T> tmp574;
  TNode<BoolT> tmp575;
  if (block270.is_used()) {
    ca_.Bind(&block270, &phi_bb270_20, &phi_bb270_25, &phi_bb270_26, &phi_bb270_27, &phi_bb270_28, &phi_bb270_29, &phi_bb270_32, &phi_bb270_33, &phi_bb270_35, &phi_bb270_36, &phi_bb270_37, &phi_bb270_48, &phi_bb270_49);
    tmp574 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp575 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp508}, TNode<Uint32T>{tmp574});
    ca_.Branch(tmp575, &block284, std::vector<compiler::Node*>{phi_bb270_20, phi_bb270_25, phi_bb270_26, phi_bb270_27, phi_bb270_28, phi_bb270_29, phi_bb270_32, phi_bb270_33, phi_bb270_35, phi_bb270_36, phi_bb270_37, phi_bb270_48, phi_bb270_49}, &block285, std::vector<compiler::Node*>{phi_bb270_20, phi_bb270_25, phi_bb270_26, phi_bb270_27, phi_bb270_28, phi_bb270_29, phi_bb270_32, phi_bb270_33, phi_bb270_35, phi_bb270_36, phi_bb270_37, phi_bb270_48, phi_bb270_49});
  }

  TNode<IntPtrT> phi_bb284_20;
  TNode<IntPtrT> phi_bb284_25;
  TNode<IntPtrT> phi_bb284_26;
  TNode<IntPtrT> phi_bb284_27;
  TNode<IntPtrT> phi_bb284_28;
  TNode<IntPtrT> phi_bb284_29;
  TNode<IntPtrT> phi_bb284_32;
  TNode<BoolT> phi_bb284_33;
  TNode<IntPtrT> phi_bb284_35;
  TNode<IntPtrT> phi_bb284_36;
  TNode<BoolT> phi_bb284_37;
  TNode<BoolT> phi_bb284_48;
  TNode<JSAny> phi_bb284_49;
  TNode<IntPtrT> tmp576;
  TNode<IntPtrT> tmp577;
  TNode<IntPtrT> tmp578;
  TNode<BoolT> tmp579;
  if (block284.is_used()) {
    ca_.Bind(&block284, &phi_bb284_20, &phi_bb284_25, &phi_bb284_26, &phi_bb284_27, &phi_bb284_28, &phi_bb284_29, &phi_bb284_32, &phi_bb284_33, &phi_bb284_35, &phi_bb284_36, &phi_bb284_37, &phi_bb284_48, &phi_bb284_49);
    tmp576 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp577 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb284_26}, TNode<IntPtrT>{tmp576});
    tmp578 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp579 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb284_26}, TNode<IntPtrT>{tmp578});
    ca_.Branch(tmp579, &block288, std::vector<compiler::Node*>{phi_bb284_20, phi_bb284_25, phi_bb284_27, phi_bb284_28, phi_bb284_29, phi_bb284_32, phi_bb284_33, phi_bb284_35, phi_bb284_36, phi_bb284_37, phi_bb284_48, phi_bb284_49}, &block289, std::vector<compiler::Node*>{phi_bb284_20, phi_bb284_25, phi_bb284_27, phi_bb284_28, phi_bb284_29, phi_bb284_32, phi_bb284_33, phi_bb284_35, phi_bb284_36, phi_bb284_37, phi_bb284_48, phi_bb284_49});
  }

  TNode<IntPtrT> phi_bb288_20;
  TNode<IntPtrT> phi_bb288_25;
  TNode<IntPtrT> phi_bb288_27;
  TNode<IntPtrT> phi_bb288_28;
  TNode<IntPtrT> phi_bb288_29;
  TNode<IntPtrT> phi_bb288_32;
  TNode<BoolT> phi_bb288_33;
  TNode<IntPtrT> phi_bb288_35;
  TNode<IntPtrT> phi_bb288_36;
  TNode<BoolT> phi_bb288_37;
  TNode<BoolT> phi_bb288_48;
  TNode<JSAny> phi_bb288_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp580;
  TNode<IntPtrT> tmp581;
  TNode<IntPtrT> tmp582;
  TNode<IntPtrT> tmp583;
  if (block288.is_used()) {
    ca_.Bind(&block288, &phi_bb288_20, &phi_bb288_25, &phi_bb288_27, &phi_bb288_28, &phi_bb288_29, &phi_bb288_32, &phi_bb288_33, &phi_bb288_35, &phi_bb288_36, &phi_bb288_37, &phi_bb288_48, &phi_bb288_49);
    std::tie(tmp580, tmp581) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb288_28}).Flatten();
    tmp582 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp583 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb288_28}, TNode<IntPtrT>{tmp582});
    ca_.Goto(&block287, phi_bb288_20, phi_bb288_25, phi_bb288_27, tmp583, phi_bb288_29, phi_bb288_32, phi_bb288_33, phi_bb288_35, phi_bb288_36, phi_bb288_37, phi_bb288_48, phi_bb288_49, tmp580, tmp581);
  }

  TNode<IntPtrT> phi_bb289_20;
  TNode<IntPtrT> phi_bb289_25;
  TNode<IntPtrT> phi_bb289_27;
  TNode<IntPtrT> phi_bb289_28;
  TNode<IntPtrT> phi_bb289_29;
  TNode<IntPtrT> phi_bb289_32;
  TNode<BoolT> phi_bb289_33;
  TNode<IntPtrT> phi_bb289_35;
  TNode<IntPtrT> phi_bb289_36;
  TNode<BoolT> phi_bb289_37;
  TNode<BoolT> phi_bb289_48;
  TNode<JSAny> phi_bb289_49;
  if (block289.is_used()) {
    ca_.Bind(&block289, &phi_bb289_20, &phi_bb289_25, &phi_bb289_27, &phi_bb289_28, &phi_bb289_29, &phi_bb289_32, &phi_bb289_33, &phi_bb289_35, &phi_bb289_36, &phi_bb289_37, &phi_bb289_48, &phi_bb289_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block290, phi_bb289_20, phi_bb289_25, phi_bb289_27, phi_bb289_28, phi_bb289_29, phi_bb289_32, phi_bb289_33, phi_bb289_35, phi_bb289_36, phi_bb289_37, phi_bb289_48, phi_bb289_49);
    } else {
      ca_.Goto(&block291, phi_bb289_20, phi_bb289_25, phi_bb289_27, phi_bb289_28, phi_bb289_29, phi_bb289_32, phi_bb289_33, phi_bb289_35, phi_bb289_36, phi_bb289_37, phi_bb289_48, phi_bb289_49);
    }
  }

  TNode<IntPtrT> phi_bb290_20;
  TNode<IntPtrT> phi_bb290_25;
  TNode<IntPtrT> phi_bb290_27;
  TNode<IntPtrT> phi_bb290_28;
  TNode<IntPtrT> phi_bb290_29;
  TNode<IntPtrT> phi_bb290_32;
  TNode<BoolT> phi_bb290_33;
  TNode<IntPtrT> phi_bb290_35;
  TNode<IntPtrT> phi_bb290_36;
  TNode<BoolT> phi_bb290_37;
  TNode<BoolT> phi_bb290_48;
  TNode<JSAny> phi_bb290_49;
  if (block290.is_used()) {
    ca_.Bind(&block290, &phi_bb290_20, &phi_bb290_25, &phi_bb290_27, &phi_bb290_28, &phi_bb290_29, &phi_bb290_32, &phi_bb290_33, &phi_bb290_35, &phi_bb290_36, &phi_bb290_37, &phi_bb290_48, &phi_bb290_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block294, phi_bb290_20, phi_bb290_25, phi_bb290_27, phi_bb290_28, phi_bb290_29, phi_bb290_32, phi_bb290_33, phi_bb290_35, phi_bb290_36, phi_bb290_37, phi_bb290_48, phi_bb290_49);
    } else {
      ca_.Goto(&block295, phi_bb290_20, phi_bb290_25, phi_bb290_27, phi_bb290_28, phi_bb290_29, phi_bb290_32, phi_bb290_33, phi_bb290_35, phi_bb290_36, phi_bb290_37, phi_bb290_48, phi_bb290_49);
    }
  }

  TNode<IntPtrT> phi_bb294_20;
  TNode<IntPtrT> phi_bb294_25;
  TNode<IntPtrT> phi_bb294_27;
  TNode<IntPtrT> phi_bb294_28;
  TNode<IntPtrT> phi_bb294_29;
  TNode<IntPtrT> phi_bb294_32;
  TNode<BoolT> phi_bb294_33;
  TNode<IntPtrT> phi_bb294_35;
  TNode<IntPtrT> phi_bb294_36;
  TNode<BoolT> phi_bb294_37;
  TNode<BoolT> phi_bb294_48;
  TNode<JSAny> phi_bb294_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp584;
  TNode<IntPtrT> tmp585;
  TNode<IntPtrT> tmp586;
  TNode<IntPtrT> tmp587;
  if (block294.is_used()) {
    ca_.Bind(&block294, &phi_bb294_20, &phi_bb294_25, &phi_bb294_27, &phi_bb294_28, &phi_bb294_29, &phi_bb294_32, &phi_bb294_33, &phi_bb294_35, &phi_bb294_36, &phi_bb294_37, &phi_bb294_48, &phi_bb294_49);
    std::tie(tmp584, tmp585) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb294_29}).Flatten();
    tmp586 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp587 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb294_29}, TNode<IntPtrT>{tmp586});
    ca_.Goto(&block293, phi_bb294_20, phi_bb294_25, phi_bb294_27, phi_bb294_28, tmp587, phi_bb294_32, phi_bb294_33, phi_bb294_35, phi_bb294_36, phi_bb294_37, phi_bb294_48, phi_bb294_49, tmp584, tmp585);
  }

  TNode<IntPtrT> phi_bb295_20;
  TNode<IntPtrT> phi_bb295_25;
  TNode<IntPtrT> phi_bb295_27;
  TNode<IntPtrT> phi_bb295_28;
  TNode<IntPtrT> phi_bb295_29;
  TNode<IntPtrT> phi_bb295_32;
  TNode<BoolT> phi_bb295_33;
  TNode<IntPtrT> phi_bb295_35;
  TNode<IntPtrT> phi_bb295_36;
  TNode<BoolT> phi_bb295_37;
  TNode<BoolT> phi_bb295_48;
  TNode<JSAny> phi_bb295_49;
  TNode<IntPtrT> tmp588;
  TNode<BoolT> tmp589;
  if (block295.is_used()) {
    ca_.Bind(&block295, &phi_bb295_20, &phi_bb295_25, &phi_bb295_27, &phi_bb295_28, &phi_bb295_29, &phi_bb295_32, &phi_bb295_33, &phi_bb295_35, &phi_bb295_36, &phi_bb295_37, &phi_bb295_48, &phi_bb295_49);
    tmp588 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp589 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb295_32}, TNode<IntPtrT>{tmp588});
    ca_.Branch(tmp589, &block297, std::vector<compiler::Node*>{phi_bb295_20, phi_bb295_25, phi_bb295_27, phi_bb295_28, phi_bb295_29, phi_bb295_32, phi_bb295_33, phi_bb295_35, phi_bb295_36, phi_bb295_37, phi_bb295_48, phi_bb295_49}, &block298, std::vector<compiler::Node*>{phi_bb295_20, phi_bb295_25, phi_bb295_27, phi_bb295_28, phi_bb295_29, phi_bb295_32, phi_bb295_33, phi_bb295_35, phi_bb295_36, phi_bb295_37, phi_bb295_48, phi_bb295_49});
  }

  TNode<IntPtrT> phi_bb297_20;
  TNode<IntPtrT> phi_bb297_25;
  TNode<IntPtrT> phi_bb297_27;
  TNode<IntPtrT> phi_bb297_28;
  TNode<IntPtrT> phi_bb297_29;
  TNode<IntPtrT> phi_bb297_32;
  TNode<BoolT> phi_bb297_33;
  TNode<IntPtrT> phi_bb297_35;
  TNode<IntPtrT> phi_bb297_36;
  TNode<BoolT> phi_bb297_37;
  TNode<BoolT> phi_bb297_48;
  TNode<JSAny> phi_bb297_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp590;
  TNode<IntPtrT> tmp591;
  TNode<IntPtrT> tmp592;
  TNode<BoolT> tmp593;
  if (block297.is_used()) {
    ca_.Bind(&block297, &phi_bb297_20, &phi_bb297_25, &phi_bb297_27, &phi_bb297_28, &phi_bb297_29, &phi_bb297_32, &phi_bb297_33, &phi_bb297_35, &phi_bb297_36, &phi_bb297_37, &phi_bb297_48, &phi_bb297_49);
    std::tie(tmp590, tmp591) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb297_32}).Flatten();
    tmp592 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp593 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block293, phi_bb297_20, phi_bb297_25, phi_bb297_27, phi_bb297_28, phi_bb297_29, tmp592, tmp593, phi_bb297_35, phi_bb297_36, phi_bb297_37, phi_bb297_48, phi_bb297_49, tmp590, tmp591);
  }

  TNode<IntPtrT> phi_bb298_20;
  TNode<IntPtrT> phi_bb298_25;
  TNode<IntPtrT> phi_bb298_27;
  TNode<IntPtrT> phi_bb298_28;
  TNode<IntPtrT> phi_bb298_29;
  TNode<IntPtrT> phi_bb298_32;
  TNode<BoolT> phi_bb298_33;
  TNode<IntPtrT> phi_bb298_35;
  TNode<IntPtrT> phi_bb298_36;
  TNode<BoolT> phi_bb298_37;
  TNode<BoolT> phi_bb298_48;
  TNode<JSAny> phi_bb298_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp594;
  TNode<IntPtrT> tmp595;
  TNode<IntPtrT> tmp596;
  TNode<IntPtrT> tmp597;
  TNode<IntPtrT> tmp598;
  TNode<IntPtrT> tmp599;
  TNode<BoolT> tmp600;
  if (block298.is_used()) {
    ca_.Bind(&block298, &phi_bb298_20, &phi_bb298_25, &phi_bb298_27, &phi_bb298_28, &phi_bb298_29, &phi_bb298_32, &phi_bb298_33, &phi_bb298_35, &phi_bb298_36, &phi_bb298_37, &phi_bb298_48, &phi_bb298_49);
    std::tie(tmp594, tmp595) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb298_29}).Flatten();
    tmp596 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp597 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb298_29}, TNode<IntPtrT>{tmp596});
    tmp598 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp599 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp597}, TNode<IntPtrT>{tmp598});
    tmp600 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block293, phi_bb298_20, phi_bb298_25, phi_bb298_27, phi_bb298_28, tmp599, tmp597, tmp600, phi_bb298_35, phi_bb298_36, phi_bb298_37, phi_bb298_48, phi_bb298_49, tmp594, tmp595);
  }

  TNode<IntPtrT> phi_bb293_20;
  TNode<IntPtrT> phi_bb293_25;
  TNode<IntPtrT> phi_bb293_27;
  TNode<IntPtrT> phi_bb293_28;
  TNode<IntPtrT> phi_bb293_29;
  TNode<IntPtrT> phi_bb293_32;
  TNode<BoolT> phi_bb293_33;
  TNode<IntPtrT> phi_bb293_35;
  TNode<IntPtrT> phi_bb293_36;
  TNode<BoolT> phi_bb293_37;
  TNode<BoolT> phi_bb293_48;
  TNode<JSAny> phi_bb293_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb293_51;
  TNode<IntPtrT> phi_bb293_52;
  if (block293.is_used()) {
    ca_.Bind(&block293, &phi_bb293_20, &phi_bb293_25, &phi_bb293_27, &phi_bb293_28, &phi_bb293_29, &phi_bb293_32, &phi_bb293_33, &phi_bb293_35, &phi_bb293_36, &phi_bb293_37, &phi_bb293_48, &phi_bb293_49, &phi_bb293_51, &phi_bb293_52);
    ca_.Goto(&block287, phi_bb293_20, phi_bb293_25, phi_bb293_27, phi_bb293_28, phi_bb293_29, phi_bb293_32, phi_bb293_33, phi_bb293_35, phi_bb293_36, phi_bb293_37, phi_bb293_48, phi_bb293_49, phi_bb293_51, phi_bb293_52);
  }

  TNode<IntPtrT> phi_bb291_20;
  TNode<IntPtrT> phi_bb291_25;
  TNode<IntPtrT> phi_bb291_27;
  TNode<IntPtrT> phi_bb291_28;
  TNode<IntPtrT> phi_bb291_29;
  TNode<IntPtrT> phi_bb291_32;
  TNode<BoolT> phi_bb291_33;
  TNode<IntPtrT> phi_bb291_35;
  TNode<IntPtrT> phi_bb291_36;
  TNode<BoolT> phi_bb291_37;
  TNode<BoolT> phi_bb291_48;
  TNode<JSAny> phi_bb291_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp601;
  TNode<IntPtrT> tmp602;
  TNode<IntPtrT> tmp603;
  TNode<IntPtrT> tmp604;
  TNode<BoolT> tmp605;
  if (block291.is_used()) {
    ca_.Bind(&block291, &phi_bb291_20, &phi_bb291_25, &phi_bb291_27, &phi_bb291_28, &phi_bb291_29, &phi_bb291_32, &phi_bb291_33, &phi_bb291_35, &phi_bb291_36, &phi_bb291_37, &phi_bb291_48, &phi_bb291_49);
    std::tie(tmp601, tmp602) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb291_29}).Flatten();
    tmp603 = FromConstexpr_intptr_constexpr_int31_0(state_, (CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))));
    tmp604 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb291_29}, TNode<IntPtrT>{tmp603});
    tmp605 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block287, phi_bb291_20, phi_bb291_25, phi_bb291_27, phi_bb291_28, tmp604, phi_bb291_32, tmp605, phi_bb291_35, phi_bb291_36, phi_bb291_37, phi_bb291_48, phi_bb291_49, tmp601, tmp602);
  }

  TNode<IntPtrT> phi_bb287_20;
  TNode<IntPtrT> phi_bb287_25;
  TNode<IntPtrT> phi_bb287_27;
  TNode<IntPtrT> phi_bb287_28;
  TNode<IntPtrT> phi_bb287_29;
  TNode<IntPtrT> phi_bb287_32;
  TNode<BoolT> phi_bb287_33;
  TNode<IntPtrT> phi_bb287_35;
  TNode<IntPtrT> phi_bb287_36;
  TNode<BoolT> phi_bb287_37;
  TNode<BoolT> phi_bb287_48;
  TNode<JSAny> phi_bb287_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb287_51;
  TNode<IntPtrT> phi_bb287_52;
  TNode<Union<HeapObject, TaggedIndex>> tmp606;
  TNode<IntPtrT> tmp607;
  TNode<Float64T> tmp608;
  TNode<Float64T> tmp609;
  if (block287.is_used()) {
    ca_.Bind(&block287, &phi_bb287_20, &phi_bb287_25, &phi_bb287_27, &phi_bb287_28, &phi_bb287_29, &phi_bb287_32, &phi_bb287_33, &phi_bb287_35, &phi_bb287_36, &phi_bb287_37, &phi_bb287_48, &phi_bb287_49, &phi_bb287_51, &phi_bb287_52);
    std::tie(tmp606, tmp607) = RefCast_float64_0(state_, TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{phi_bb287_51}, TNode<IntPtrT>{phi_bb287_52}, TorqueStructUnsafe_0{}}).Flatten();
    tmp608 = CodeStubAssembler(state_).ChangeTaggedToFloat64(TNode<Context>{tmp442}, TNode<JSAny>{phi_bb287_49});
    tmp609 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{tmp608});
    CodeStubAssembler(state_).StoreReference<Float64T>(CodeStubAssembler::Reference{tmp606, tmp607}, tmp609);
    ca_.Goto(&block286, phi_bb287_20, phi_bb287_25, tmp577, phi_bb287_27, phi_bb287_28, phi_bb287_29, phi_bb287_32, phi_bb287_33, phi_bb287_35, phi_bb287_36, phi_bb287_37, phi_bb287_48, phi_bb287_49);
  }

  TNode<IntPtrT> phi_bb285_20;
  TNode<IntPtrT> phi_bb285_25;
  TNode<IntPtrT> phi_bb285_26;
  TNode<IntPtrT> phi_bb285_27;
  TNode<IntPtrT> phi_bb285_28;
  TNode<IntPtrT> phi_bb285_29;
  TNode<IntPtrT> phi_bb285_32;
  TNode<BoolT> phi_bb285_33;
  TNode<IntPtrT> phi_bb285_35;
  TNode<IntPtrT> phi_bb285_36;
  TNode<BoolT> phi_bb285_37;
  TNode<BoolT> phi_bb285_48;
  TNode<JSAny> phi_bb285_49;
  TNode<Uint32T> tmp610;
  TNode<BoolT> tmp611;
  if (block285.is_used()) {
    ca_.Bind(&block285, &phi_bb285_20, &phi_bb285_25, &phi_bb285_26, &phi_bb285_27, &phi_bb285_28, &phi_bb285_29, &phi_bb285_32, &phi_bb285_33, &phi_bb285_35, &phi_bb285_36, &phi_bb285_37, &phi_bb285_48, &phi_bb285_49);
    tmp610 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp611 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp508}, TNode<Uint32T>{tmp610});
    ca_.Branch(tmp611, &block299, std::vector<compiler::Node*>{phi_bb285_20, phi_bb285_25, phi_bb285_26, phi_bb285_27, phi_bb285_28, phi_bb285_29, phi_bb285_32, phi_bb285_33, phi_bb285_35, phi_bb285_36, phi_bb285_37, phi_bb285_48, phi_bb285_49}, &block300, std::vector<compiler::Node*>{phi_bb285_20, phi_bb285_25, phi_bb285_26, phi_bb285_27, phi_bb285_28, phi_bb285_29, phi_bb285_32, phi_bb285_33, phi_bb285_35, phi_bb285_36, phi_bb285_37, phi_bb285_48, phi_bb285_49});
  }

  TNode<IntPtrT> phi_bb299_20;
  TNode<IntPtrT> phi_bb299_25;
  TNode<IntPtrT> phi_bb299_26;
  TNode<IntPtrT> phi_bb299_27;
  TNode<IntPtrT> phi_bb299_28;
  TNode<IntPtrT> phi_bb299_29;
  TNode<IntPtrT> phi_bb299_32;
  TNode<BoolT> phi_bb299_33;
  TNode<IntPtrT> phi_bb299_35;
  TNode<IntPtrT> phi_bb299_36;
  TNode<BoolT> phi_bb299_37;
  TNode<BoolT> phi_bb299_48;
  TNode<JSAny> phi_bb299_49;
  if (block299.is_used()) {
    ca_.Bind(&block299, &phi_bb299_20, &phi_bb299_25, &phi_bb299_26, &phi_bb299_27, &phi_bb299_28, &phi_bb299_29, &phi_bb299_32, &phi_bb299_33, &phi_bb299_35, &phi_bb299_36, &phi_bb299_37, &phi_bb299_48, &phi_bb299_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block302, phi_bb299_20, phi_bb299_25, phi_bb299_26, phi_bb299_27, phi_bb299_28, phi_bb299_29, phi_bb299_32, phi_bb299_33, phi_bb299_35, phi_bb299_36, phi_bb299_37, phi_bb299_48, phi_bb299_49);
    } else {
      ca_.Goto(&block303, phi_bb299_20, phi_bb299_25, phi_bb299_26, phi_bb299_27, phi_bb299_28, phi_bb299_29, phi_bb299_32, phi_bb299_33, phi_bb299_35, phi_bb299_36, phi_bb299_37, phi_bb299_48, phi_bb299_49);
    }
  }

  TNode<IntPtrT> phi_bb302_20;
  TNode<IntPtrT> phi_bb302_25;
  TNode<IntPtrT> phi_bb302_26;
  TNode<IntPtrT> phi_bb302_27;
  TNode<IntPtrT> phi_bb302_28;
  TNode<IntPtrT> phi_bb302_29;
  TNode<IntPtrT> phi_bb302_32;
  TNode<BoolT> phi_bb302_33;
  TNode<IntPtrT> phi_bb302_35;
  TNode<IntPtrT> phi_bb302_36;
  TNode<BoolT> phi_bb302_37;
  TNode<BoolT> phi_bb302_48;
  TNode<JSAny> phi_bb302_49;
  TNode<IntPtrT> tmp612;
  TNode<IntPtrT> tmp613;
  TNode<IntPtrT> tmp614;
  TNode<BoolT> tmp615;
  if (block302.is_used()) {
    ca_.Bind(&block302, &phi_bb302_20, &phi_bb302_25, &phi_bb302_26, &phi_bb302_27, &phi_bb302_28, &phi_bb302_29, &phi_bb302_32, &phi_bb302_33, &phi_bb302_35, &phi_bb302_36, &phi_bb302_37, &phi_bb302_48, &phi_bb302_49);
    tmp612 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp613 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb302_25}, TNode<IntPtrT>{tmp612});
    tmp614 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp615 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb302_25}, TNode<IntPtrT>{tmp614});
    ca_.Branch(tmp615, &block306, std::vector<compiler::Node*>{phi_bb302_20, phi_bb302_26, phi_bb302_27, phi_bb302_28, phi_bb302_29, phi_bb302_32, phi_bb302_33, phi_bb302_35, phi_bb302_36, phi_bb302_37, phi_bb302_48, phi_bb302_49}, &block307, std::vector<compiler::Node*>{phi_bb302_20, phi_bb302_26, phi_bb302_27, phi_bb302_28, phi_bb302_29, phi_bb302_32, phi_bb302_33, phi_bb302_35, phi_bb302_36, phi_bb302_37, phi_bb302_48, phi_bb302_49});
  }

  TNode<IntPtrT> phi_bb306_20;
  TNode<IntPtrT> phi_bb306_26;
  TNode<IntPtrT> phi_bb306_27;
  TNode<IntPtrT> phi_bb306_28;
  TNode<IntPtrT> phi_bb306_29;
  TNode<IntPtrT> phi_bb306_32;
  TNode<BoolT> phi_bb306_33;
  TNode<IntPtrT> phi_bb306_35;
  TNode<IntPtrT> phi_bb306_36;
  TNode<BoolT> phi_bb306_37;
  TNode<BoolT> phi_bb306_48;
  TNode<JSAny> phi_bb306_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp616;
  TNode<IntPtrT> tmp617;
  TNode<IntPtrT> tmp618;
  TNode<IntPtrT> tmp619;
  if (block306.is_used()) {
    ca_.Bind(&block306, &phi_bb306_20, &phi_bb306_26, &phi_bb306_27, &phi_bb306_28, &phi_bb306_29, &phi_bb306_32, &phi_bb306_33, &phi_bb306_35, &phi_bb306_36, &phi_bb306_37, &phi_bb306_48, &phi_bb306_49);
    std::tie(tmp616, tmp617) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb306_27}).Flatten();
    tmp618 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp619 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb306_27}, TNode<IntPtrT>{tmp618});
    ca_.Goto(&block305, phi_bb306_20, phi_bb306_26, tmp619, phi_bb306_28, phi_bb306_29, phi_bb306_32, phi_bb306_33, phi_bb306_35, phi_bb306_36, phi_bb306_37, phi_bb306_48, phi_bb306_49, tmp616, tmp617);
  }

  TNode<IntPtrT> phi_bb307_20;
  TNode<IntPtrT> phi_bb307_26;
  TNode<IntPtrT> phi_bb307_27;
  TNode<IntPtrT> phi_bb307_28;
  TNode<IntPtrT> phi_bb307_29;
  TNode<IntPtrT> phi_bb307_32;
  TNode<BoolT> phi_bb307_33;
  TNode<IntPtrT> phi_bb307_35;
  TNode<IntPtrT> phi_bb307_36;
  TNode<BoolT> phi_bb307_37;
  TNode<BoolT> phi_bb307_48;
  TNode<JSAny> phi_bb307_49;
  if (block307.is_used()) {
    ca_.Bind(&block307, &phi_bb307_20, &phi_bb307_26, &phi_bb307_27, &phi_bb307_28, &phi_bb307_29, &phi_bb307_32, &phi_bb307_33, &phi_bb307_35, &phi_bb307_36, &phi_bb307_37, &phi_bb307_48, &phi_bb307_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block309, phi_bb307_20, phi_bb307_26, phi_bb307_27, phi_bb307_28, phi_bb307_29, phi_bb307_32, phi_bb307_33, phi_bb307_35, phi_bb307_36, phi_bb307_37, phi_bb307_48, phi_bb307_49);
    } else {
      ca_.Goto(&block310, phi_bb307_20, phi_bb307_26, phi_bb307_27, phi_bb307_28, phi_bb307_29, phi_bb307_32, phi_bb307_33, phi_bb307_35, phi_bb307_36, phi_bb307_37, phi_bb307_48, phi_bb307_49);
    }
  }

  TNode<IntPtrT> phi_bb309_20;
  TNode<IntPtrT> phi_bb309_26;
  TNode<IntPtrT> phi_bb309_27;
  TNode<IntPtrT> phi_bb309_28;
  TNode<IntPtrT> phi_bb309_29;
  TNode<IntPtrT> phi_bb309_32;
  TNode<BoolT> phi_bb309_33;
  TNode<IntPtrT> phi_bb309_35;
  TNode<IntPtrT> phi_bb309_36;
  TNode<BoolT> phi_bb309_37;
  TNode<BoolT> phi_bb309_48;
  TNode<JSAny> phi_bb309_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp620;
  TNode<IntPtrT> tmp621;
  TNode<IntPtrT> tmp622;
  TNode<IntPtrT> tmp623;
  if (block309.is_used()) {
    ca_.Bind(&block309, &phi_bb309_20, &phi_bb309_26, &phi_bb309_27, &phi_bb309_28, &phi_bb309_29, &phi_bb309_32, &phi_bb309_33, &phi_bb309_35, &phi_bb309_36, &phi_bb309_37, &phi_bb309_48, &phi_bb309_49);
    std::tie(tmp620, tmp621) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb309_29}).Flatten();
    tmp622 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp623 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb309_29}, TNode<IntPtrT>{tmp622});
    ca_.Goto(&block308, phi_bb309_20, phi_bb309_26, phi_bb309_27, phi_bb309_28, tmp623, phi_bb309_32, phi_bb309_33, phi_bb309_35, phi_bb309_36, phi_bb309_37, phi_bb309_48, phi_bb309_49, tmp620, tmp621);
  }

  TNode<IntPtrT> phi_bb310_20;
  TNode<IntPtrT> phi_bb310_26;
  TNode<IntPtrT> phi_bb310_27;
  TNode<IntPtrT> phi_bb310_28;
  TNode<IntPtrT> phi_bb310_29;
  TNode<IntPtrT> phi_bb310_32;
  TNode<BoolT> phi_bb310_33;
  TNode<IntPtrT> phi_bb310_35;
  TNode<IntPtrT> phi_bb310_36;
  TNode<BoolT> phi_bb310_37;
  TNode<BoolT> phi_bb310_48;
  TNode<JSAny> phi_bb310_49;
  TNode<IntPtrT> tmp624;
  TNode<BoolT> tmp625;
  if (block310.is_used()) {
    ca_.Bind(&block310, &phi_bb310_20, &phi_bb310_26, &phi_bb310_27, &phi_bb310_28, &phi_bb310_29, &phi_bb310_32, &phi_bb310_33, &phi_bb310_35, &phi_bb310_36, &phi_bb310_37, &phi_bb310_48, &phi_bb310_49);
    tmp624 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp625 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb310_32}, TNode<IntPtrT>{tmp624});
    ca_.Branch(tmp625, &block312, std::vector<compiler::Node*>{phi_bb310_20, phi_bb310_26, phi_bb310_27, phi_bb310_28, phi_bb310_29, phi_bb310_32, phi_bb310_33, phi_bb310_35, phi_bb310_36, phi_bb310_37, phi_bb310_48, phi_bb310_49}, &block313, std::vector<compiler::Node*>{phi_bb310_20, phi_bb310_26, phi_bb310_27, phi_bb310_28, phi_bb310_29, phi_bb310_32, phi_bb310_33, phi_bb310_35, phi_bb310_36, phi_bb310_37, phi_bb310_48, phi_bb310_49});
  }

  TNode<IntPtrT> phi_bb312_20;
  TNode<IntPtrT> phi_bb312_26;
  TNode<IntPtrT> phi_bb312_27;
  TNode<IntPtrT> phi_bb312_28;
  TNode<IntPtrT> phi_bb312_29;
  TNode<IntPtrT> phi_bb312_32;
  TNode<BoolT> phi_bb312_33;
  TNode<IntPtrT> phi_bb312_35;
  TNode<IntPtrT> phi_bb312_36;
  TNode<BoolT> phi_bb312_37;
  TNode<BoolT> phi_bb312_48;
  TNode<JSAny> phi_bb312_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp626;
  TNode<IntPtrT> tmp627;
  TNode<IntPtrT> tmp628;
  TNode<BoolT> tmp629;
  if (block312.is_used()) {
    ca_.Bind(&block312, &phi_bb312_20, &phi_bb312_26, &phi_bb312_27, &phi_bb312_28, &phi_bb312_29, &phi_bb312_32, &phi_bb312_33, &phi_bb312_35, &phi_bb312_36, &phi_bb312_37, &phi_bb312_48, &phi_bb312_49);
    std::tie(tmp626, tmp627) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb312_32}).Flatten();
    tmp628 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp629 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block308, phi_bb312_20, phi_bb312_26, phi_bb312_27, phi_bb312_28, phi_bb312_29, tmp628, tmp629, phi_bb312_35, phi_bb312_36, phi_bb312_37, phi_bb312_48, phi_bb312_49, tmp626, tmp627);
  }

  TNode<IntPtrT> phi_bb313_20;
  TNode<IntPtrT> phi_bb313_26;
  TNode<IntPtrT> phi_bb313_27;
  TNode<IntPtrT> phi_bb313_28;
  TNode<IntPtrT> phi_bb313_29;
  TNode<IntPtrT> phi_bb313_32;
  TNode<BoolT> phi_bb313_33;
  TNode<IntPtrT> phi_bb313_35;
  TNode<IntPtrT> phi_bb313_36;
  TNode<BoolT> phi_bb313_37;
  TNode<BoolT> phi_bb313_48;
  TNode<JSAny> phi_bb313_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp630;
  TNode<IntPtrT> tmp631;
  TNode<IntPtrT> tmp632;
  TNode<IntPtrT> tmp633;
  TNode<IntPtrT> tmp634;
  TNode<IntPtrT> tmp635;
  TNode<BoolT> tmp636;
  if (block313.is_used()) {
    ca_.Bind(&block313, &phi_bb313_20, &phi_bb313_26, &phi_bb313_27, &phi_bb313_28, &phi_bb313_29, &phi_bb313_32, &phi_bb313_33, &phi_bb313_35, &phi_bb313_36, &phi_bb313_37, &phi_bb313_48, &phi_bb313_49);
    std::tie(tmp630, tmp631) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb313_29}).Flatten();
    tmp632 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp633 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb313_29}, TNode<IntPtrT>{tmp632});
    tmp634 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp635 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp633}, TNode<IntPtrT>{tmp634});
    tmp636 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block308, phi_bb313_20, phi_bb313_26, phi_bb313_27, phi_bb313_28, tmp635, tmp633, tmp636, phi_bb313_35, phi_bb313_36, phi_bb313_37, phi_bb313_48, phi_bb313_49, tmp630, tmp631);
  }

  TNode<IntPtrT> phi_bb308_20;
  TNode<IntPtrT> phi_bb308_26;
  TNode<IntPtrT> phi_bb308_27;
  TNode<IntPtrT> phi_bb308_28;
  TNode<IntPtrT> phi_bb308_29;
  TNode<IntPtrT> phi_bb308_32;
  TNode<BoolT> phi_bb308_33;
  TNode<IntPtrT> phi_bb308_35;
  TNode<IntPtrT> phi_bb308_36;
  TNode<BoolT> phi_bb308_37;
  TNode<BoolT> phi_bb308_48;
  TNode<JSAny> phi_bb308_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb308_51;
  TNode<IntPtrT> phi_bb308_52;
  if (block308.is_used()) {
    ca_.Bind(&block308, &phi_bb308_20, &phi_bb308_26, &phi_bb308_27, &phi_bb308_28, &phi_bb308_29, &phi_bb308_32, &phi_bb308_33, &phi_bb308_35, &phi_bb308_36, &phi_bb308_37, &phi_bb308_48, &phi_bb308_49, &phi_bb308_51, &phi_bb308_52);
    ca_.Goto(&block305, phi_bb308_20, phi_bb308_26, phi_bb308_27, phi_bb308_28, phi_bb308_29, phi_bb308_32, phi_bb308_33, phi_bb308_35, phi_bb308_36, phi_bb308_37, phi_bb308_48, phi_bb308_49, phi_bb308_51, phi_bb308_52);
  }

  TNode<IntPtrT> phi_bb305_20;
  TNode<IntPtrT> phi_bb305_26;
  TNode<IntPtrT> phi_bb305_27;
  TNode<IntPtrT> phi_bb305_28;
  TNode<IntPtrT> phi_bb305_29;
  TNode<IntPtrT> phi_bb305_32;
  TNode<BoolT> phi_bb305_33;
  TNode<IntPtrT> phi_bb305_35;
  TNode<IntPtrT> phi_bb305_36;
  TNode<BoolT> phi_bb305_37;
  TNode<BoolT> phi_bb305_48;
  TNode<JSAny> phi_bb305_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb305_51;
  TNode<IntPtrT> phi_bb305_52;
  TNode<IntPtrT> tmp637;
  if (block305.is_used()) {
    ca_.Bind(&block305, &phi_bb305_20, &phi_bb305_26, &phi_bb305_27, &phi_bb305_28, &phi_bb305_29, &phi_bb305_32, &phi_bb305_33, &phi_bb305_35, &phi_bb305_36, &phi_bb305_37, &phi_bb305_48, &phi_bb305_49, &phi_bb305_51, &phi_bb305_52);
    tmp637 = TruncateBigIntToI64_0(state_, TNode<Context>{tmp442}, TNode<JSAny>{phi_bb305_49});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb305_51, phi_bb305_52}, tmp637);
    ca_.Goto(&block304, phi_bb305_20, tmp613, phi_bb305_26, phi_bb305_27, phi_bb305_28, phi_bb305_29, phi_bb305_32, phi_bb305_33, phi_bb305_35, phi_bb305_36, phi_bb305_37, phi_bb305_48, phi_bb305_49);
  }

  TNode<IntPtrT> phi_bb303_20;
  TNode<IntPtrT> phi_bb303_25;
  TNode<IntPtrT> phi_bb303_26;
  TNode<IntPtrT> phi_bb303_27;
  TNode<IntPtrT> phi_bb303_28;
  TNode<IntPtrT> phi_bb303_29;
  TNode<IntPtrT> phi_bb303_32;
  TNode<BoolT> phi_bb303_33;
  TNode<IntPtrT> phi_bb303_35;
  TNode<IntPtrT> phi_bb303_36;
  TNode<BoolT> phi_bb303_37;
  TNode<BoolT> phi_bb303_48;
  TNode<JSAny> phi_bb303_49;
  TNode<IntPtrT> tmp638;
  TNode<IntPtrT> tmp639;
  TNode<IntPtrT> tmp640;
  TNode<BoolT> tmp641;
  if (block303.is_used()) {
    ca_.Bind(&block303, &phi_bb303_20, &phi_bb303_25, &phi_bb303_26, &phi_bb303_27, &phi_bb303_28, &phi_bb303_29, &phi_bb303_32, &phi_bb303_33, &phi_bb303_35, &phi_bb303_36, &phi_bb303_37, &phi_bb303_48, &phi_bb303_49);
    tmp638 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp639 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb303_25}, TNode<IntPtrT>{tmp638});
    tmp640 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp641 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb303_25}, TNode<IntPtrT>{tmp640});
    ca_.Branch(tmp641, &block315, std::vector<compiler::Node*>{phi_bb303_20, phi_bb303_26, phi_bb303_27, phi_bb303_28, phi_bb303_29, phi_bb303_32, phi_bb303_33, phi_bb303_35, phi_bb303_36, phi_bb303_37, phi_bb303_48, phi_bb303_49}, &block316, std::vector<compiler::Node*>{phi_bb303_20, phi_bb303_26, phi_bb303_27, phi_bb303_28, phi_bb303_29, phi_bb303_32, phi_bb303_33, phi_bb303_35, phi_bb303_36, phi_bb303_37, phi_bb303_48, phi_bb303_49});
  }

  TNode<IntPtrT> phi_bb315_20;
  TNode<IntPtrT> phi_bb315_26;
  TNode<IntPtrT> phi_bb315_27;
  TNode<IntPtrT> phi_bb315_28;
  TNode<IntPtrT> phi_bb315_29;
  TNode<IntPtrT> phi_bb315_32;
  TNode<BoolT> phi_bb315_33;
  TNode<IntPtrT> phi_bb315_35;
  TNode<IntPtrT> phi_bb315_36;
  TNode<BoolT> phi_bb315_37;
  TNode<BoolT> phi_bb315_48;
  TNode<JSAny> phi_bb315_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp642;
  TNode<IntPtrT> tmp643;
  TNode<IntPtrT> tmp644;
  TNode<IntPtrT> tmp645;
  if (block315.is_used()) {
    ca_.Bind(&block315, &phi_bb315_20, &phi_bb315_26, &phi_bb315_27, &phi_bb315_28, &phi_bb315_29, &phi_bb315_32, &phi_bb315_33, &phi_bb315_35, &phi_bb315_36, &phi_bb315_37, &phi_bb315_48, &phi_bb315_49);
    std::tie(tmp642, tmp643) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb315_27}).Flatten();
    tmp644 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp645 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb315_27}, TNode<IntPtrT>{tmp644});
    ca_.Goto(&block314, phi_bb315_20, phi_bb315_26, tmp645, phi_bb315_28, phi_bb315_29, phi_bb315_32, phi_bb315_33, phi_bb315_35, phi_bb315_36, phi_bb315_37, phi_bb315_48, phi_bb315_49, tmp642, tmp643);
  }

  TNode<IntPtrT> phi_bb316_20;
  TNode<IntPtrT> phi_bb316_26;
  TNode<IntPtrT> phi_bb316_27;
  TNode<IntPtrT> phi_bb316_28;
  TNode<IntPtrT> phi_bb316_29;
  TNode<IntPtrT> phi_bb316_32;
  TNode<BoolT> phi_bb316_33;
  TNode<IntPtrT> phi_bb316_35;
  TNode<IntPtrT> phi_bb316_36;
  TNode<BoolT> phi_bb316_37;
  TNode<BoolT> phi_bb316_48;
  TNode<JSAny> phi_bb316_49;
  if (block316.is_used()) {
    ca_.Bind(&block316, &phi_bb316_20, &phi_bb316_26, &phi_bb316_27, &phi_bb316_28, &phi_bb316_29, &phi_bb316_32, &phi_bb316_33, &phi_bb316_35, &phi_bb316_36, &phi_bb316_37, &phi_bb316_48, &phi_bb316_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block318, phi_bb316_20, phi_bb316_26, phi_bb316_27, phi_bb316_28, phi_bb316_29, phi_bb316_32, phi_bb316_33, phi_bb316_35, phi_bb316_36, phi_bb316_37, phi_bb316_48, phi_bb316_49);
    } else {
      ca_.Goto(&block319, phi_bb316_20, phi_bb316_26, phi_bb316_27, phi_bb316_28, phi_bb316_29, phi_bb316_32, phi_bb316_33, phi_bb316_35, phi_bb316_36, phi_bb316_37, phi_bb316_48, phi_bb316_49);
    }
  }

  TNode<IntPtrT> phi_bb318_20;
  TNode<IntPtrT> phi_bb318_26;
  TNode<IntPtrT> phi_bb318_27;
  TNode<IntPtrT> phi_bb318_28;
  TNode<IntPtrT> phi_bb318_29;
  TNode<IntPtrT> phi_bb318_32;
  TNode<BoolT> phi_bb318_33;
  TNode<IntPtrT> phi_bb318_35;
  TNode<IntPtrT> phi_bb318_36;
  TNode<BoolT> phi_bb318_37;
  TNode<BoolT> phi_bb318_48;
  TNode<JSAny> phi_bb318_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp646;
  TNode<IntPtrT> tmp647;
  TNode<IntPtrT> tmp648;
  TNode<IntPtrT> tmp649;
  if (block318.is_used()) {
    ca_.Bind(&block318, &phi_bb318_20, &phi_bb318_26, &phi_bb318_27, &phi_bb318_28, &phi_bb318_29, &phi_bb318_32, &phi_bb318_33, &phi_bb318_35, &phi_bb318_36, &phi_bb318_37, &phi_bb318_48, &phi_bb318_49);
    std::tie(tmp646, tmp647) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb318_29}).Flatten();
    tmp648 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp649 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb318_29}, TNode<IntPtrT>{tmp648});
    ca_.Goto(&block317, phi_bb318_20, phi_bb318_26, phi_bb318_27, phi_bb318_28, tmp649, phi_bb318_32, phi_bb318_33, phi_bb318_35, phi_bb318_36, phi_bb318_37, phi_bb318_48, phi_bb318_49, tmp646, tmp647);
  }

  TNode<IntPtrT> phi_bb319_20;
  TNode<IntPtrT> phi_bb319_26;
  TNode<IntPtrT> phi_bb319_27;
  TNode<IntPtrT> phi_bb319_28;
  TNode<IntPtrT> phi_bb319_29;
  TNode<IntPtrT> phi_bb319_32;
  TNode<BoolT> phi_bb319_33;
  TNode<IntPtrT> phi_bb319_35;
  TNode<IntPtrT> phi_bb319_36;
  TNode<BoolT> phi_bb319_37;
  TNode<BoolT> phi_bb319_48;
  TNode<JSAny> phi_bb319_49;
  TNode<IntPtrT> tmp650;
  TNode<BoolT> tmp651;
  if (block319.is_used()) {
    ca_.Bind(&block319, &phi_bb319_20, &phi_bb319_26, &phi_bb319_27, &phi_bb319_28, &phi_bb319_29, &phi_bb319_32, &phi_bb319_33, &phi_bb319_35, &phi_bb319_36, &phi_bb319_37, &phi_bb319_48, &phi_bb319_49);
    tmp650 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp651 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb319_32}, TNode<IntPtrT>{tmp650});
    ca_.Branch(tmp651, &block321, std::vector<compiler::Node*>{phi_bb319_20, phi_bb319_26, phi_bb319_27, phi_bb319_28, phi_bb319_29, phi_bb319_32, phi_bb319_33, phi_bb319_35, phi_bb319_36, phi_bb319_37, phi_bb319_48, phi_bb319_49}, &block322, std::vector<compiler::Node*>{phi_bb319_20, phi_bb319_26, phi_bb319_27, phi_bb319_28, phi_bb319_29, phi_bb319_32, phi_bb319_33, phi_bb319_35, phi_bb319_36, phi_bb319_37, phi_bb319_48, phi_bb319_49});
  }

  TNode<IntPtrT> phi_bb321_20;
  TNode<IntPtrT> phi_bb321_26;
  TNode<IntPtrT> phi_bb321_27;
  TNode<IntPtrT> phi_bb321_28;
  TNode<IntPtrT> phi_bb321_29;
  TNode<IntPtrT> phi_bb321_32;
  TNode<BoolT> phi_bb321_33;
  TNode<IntPtrT> phi_bb321_35;
  TNode<IntPtrT> phi_bb321_36;
  TNode<BoolT> phi_bb321_37;
  TNode<BoolT> phi_bb321_48;
  TNode<JSAny> phi_bb321_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp652;
  TNode<IntPtrT> tmp653;
  TNode<IntPtrT> tmp654;
  TNode<BoolT> tmp655;
  if (block321.is_used()) {
    ca_.Bind(&block321, &phi_bb321_20, &phi_bb321_26, &phi_bb321_27, &phi_bb321_28, &phi_bb321_29, &phi_bb321_32, &phi_bb321_33, &phi_bb321_35, &phi_bb321_36, &phi_bb321_37, &phi_bb321_48, &phi_bb321_49);
    std::tie(tmp652, tmp653) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb321_32}).Flatten();
    tmp654 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp655 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block317, phi_bb321_20, phi_bb321_26, phi_bb321_27, phi_bb321_28, phi_bb321_29, tmp654, tmp655, phi_bb321_35, phi_bb321_36, phi_bb321_37, phi_bb321_48, phi_bb321_49, tmp652, tmp653);
  }

  TNode<IntPtrT> phi_bb322_20;
  TNode<IntPtrT> phi_bb322_26;
  TNode<IntPtrT> phi_bb322_27;
  TNode<IntPtrT> phi_bb322_28;
  TNode<IntPtrT> phi_bb322_29;
  TNode<IntPtrT> phi_bb322_32;
  TNode<BoolT> phi_bb322_33;
  TNode<IntPtrT> phi_bb322_35;
  TNode<IntPtrT> phi_bb322_36;
  TNode<BoolT> phi_bb322_37;
  TNode<BoolT> phi_bb322_48;
  TNode<JSAny> phi_bb322_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp656;
  TNode<IntPtrT> tmp657;
  TNode<IntPtrT> tmp658;
  TNode<IntPtrT> tmp659;
  TNode<IntPtrT> tmp660;
  TNode<IntPtrT> tmp661;
  TNode<BoolT> tmp662;
  if (block322.is_used()) {
    ca_.Bind(&block322, &phi_bb322_20, &phi_bb322_26, &phi_bb322_27, &phi_bb322_28, &phi_bb322_29, &phi_bb322_32, &phi_bb322_33, &phi_bb322_35, &phi_bb322_36, &phi_bb322_37, &phi_bb322_48, &phi_bb322_49);
    std::tie(tmp656, tmp657) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb322_29}).Flatten();
    tmp658 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp659 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb322_29}, TNode<IntPtrT>{tmp658});
    tmp660 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp661 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp659}, TNode<IntPtrT>{tmp660});
    tmp662 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block317, phi_bb322_20, phi_bb322_26, phi_bb322_27, phi_bb322_28, tmp661, tmp659, tmp662, phi_bb322_35, phi_bb322_36, phi_bb322_37, phi_bb322_48, phi_bb322_49, tmp656, tmp657);
  }

  TNode<IntPtrT> phi_bb317_20;
  TNode<IntPtrT> phi_bb317_26;
  TNode<IntPtrT> phi_bb317_27;
  TNode<IntPtrT> phi_bb317_28;
  TNode<IntPtrT> phi_bb317_29;
  TNode<IntPtrT> phi_bb317_32;
  TNode<BoolT> phi_bb317_33;
  TNode<IntPtrT> phi_bb317_35;
  TNode<IntPtrT> phi_bb317_36;
  TNode<BoolT> phi_bb317_37;
  TNode<BoolT> phi_bb317_48;
  TNode<JSAny> phi_bb317_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb317_51;
  TNode<IntPtrT> phi_bb317_52;
  if (block317.is_used()) {
    ca_.Bind(&block317, &phi_bb317_20, &phi_bb317_26, &phi_bb317_27, &phi_bb317_28, &phi_bb317_29, &phi_bb317_32, &phi_bb317_33, &phi_bb317_35, &phi_bb317_36, &phi_bb317_37, &phi_bb317_48, &phi_bb317_49, &phi_bb317_51, &phi_bb317_52);
    ca_.Goto(&block314, phi_bb317_20, phi_bb317_26, phi_bb317_27, phi_bb317_28, phi_bb317_29, phi_bb317_32, phi_bb317_33, phi_bb317_35, phi_bb317_36, phi_bb317_37, phi_bb317_48, phi_bb317_49, phi_bb317_51, phi_bb317_52);
  }

  TNode<IntPtrT> phi_bb314_20;
  TNode<IntPtrT> phi_bb314_26;
  TNode<IntPtrT> phi_bb314_27;
  TNode<IntPtrT> phi_bb314_28;
  TNode<IntPtrT> phi_bb314_29;
  TNode<IntPtrT> phi_bb314_32;
  TNode<BoolT> phi_bb314_33;
  TNode<IntPtrT> phi_bb314_35;
  TNode<IntPtrT> phi_bb314_36;
  TNode<BoolT> phi_bb314_37;
  TNode<BoolT> phi_bb314_48;
  TNode<JSAny> phi_bb314_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb314_51;
  TNode<IntPtrT> phi_bb314_52;
  TNode<IntPtrT> tmp663;
  TNode<IntPtrT> tmp664;
  TNode<IntPtrT> tmp665;
  TNode<BoolT> tmp666;
  if (block314.is_used()) {
    ca_.Bind(&block314, &phi_bb314_20, &phi_bb314_26, &phi_bb314_27, &phi_bb314_28, &phi_bb314_29, &phi_bb314_32, &phi_bb314_33, &phi_bb314_35, &phi_bb314_36, &phi_bb314_37, &phi_bb314_48, &phi_bb314_49, &phi_bb314_51, &phi_bb314_52);
    tmp663 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp664 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp639}, TNode<IntPtrT>{tmp663});
    tmp665 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp666 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp639}, TNode<IntPtrT>{tmp665});
    ca_.Branch(tmp666, &block324, std::vector<compiler::Node*>{phi_bb314_20, phi_bb314_26, phi_bb314_27, phi_bb314_28, phi_bb314_29, phi_bb314_32, phi_bb314_33, phi_bb314_35, phi_bb314_36, phi_bb314_37, phi_bb314_48, phi_bb314_49, phi_bb314_51, phi_bb314_52}, &block325, std::vector<compiler::Node*>{phi_bb314_20, phi_bb314_26, phi_bb314_27, phi_bb314_28, phi_bb314_29, phi_bb314_32, phi_bb314_33, phi_bb314_35, phi_bb314_36, phi_bb314_37, phi_bb314_48, phi_bb314_49, phi_bb314_51, phi_bb314_52});
  }

  TNode<IntPtrT> phi_bb324_20;
  TNode<IntPtrT> phi_bb324_26;
  TNode<IntPtrT> phi_bb324_27;
  TNode<IntPtrT> phi_bb324_28;
  TNode<IntPtrT> phi_bb324_29;
  TNode<IntPtrT> phi_bb324_32;
  TNode<BoolT> phi_bb324_33;
  TNode<IntPtrT> phi_bb324_35;
  TNode<IntPtrT> phi_bb324_36;
  TNode<BoolT> phi_bb324_37;
  TNode<BoolT> phi_bb324_48;
  TNode<JSAny> phi_bb324_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb324_51;
  TNode<IntPtrT> phi_bb324_52;
  TNode<Union<HeapObject, TaggedIndex>> tmp667;
  TNode<IntPtrT> tmp668;
  TNode<IntPtrT> tmp669;
  TNode<IntPtrT> tmp670;
  if (block324.is_used()) {
    ca_.Bind(&block324, &phi_bb324_20, &phi_bb324_26, &phi_bb324_27, &phi_bb324_28, &phi_bb324_29, &phi_bb324_32, &phi_bb324_33, &phi_bb324_35, &phi_bb324_36, &phi_bb324_37, &phi_bb324_48, &phi_bb324_49, &phi_bb324_51, &phi_bb324_52);
    std::tie(tmp667, tmp668) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb324_27}).Flatten();
    tmp669 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp670 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb324_27}, TNode<IntPtrT>{tmp669});
    ca_.Goto(&block323, phi_bb324_20, phi_bb324_26, tmp670, phi_bb324_28, phi_bb324_29, phi_bb324_32, phi_bb324_33, phi_bb324_35, phi_bb324_36, phi_bb324_37, phi_bb324_48, phi_bb324_49, phi_bb324_51, phi_bb324_52, tmp667, tmp668);
  }

  TNode<IntPtrT> phi_bb325_20;
  TNode<IntPtrT> phi_bb325_26;
  TNode<IntPtrT> phi_bb325_27;
  TNode<IntPtrT> phi_bb325_28;
  TNode<IntPtrT> phi_bb325_29;
  TNode<IntPtrT> phi_bb325_32;
  TNode<BoolT> phi_bb325_33;
  TNode<IntPtrT> phi_bb325_35;
  TNode<IntPtrT> phi_bb325_36;
  TNode<BoolT> phi_bb325_37;
  TNode<BoolT> phi_bb325_48;
  TNode<JSAny> phi_bb325_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb325_51;
  TNode<IntPtrT> phi_bb325_52;
  if (block325.is_used()) {
    ca_.Bind(&block325, &phi_bb325_20, &phi_bb325_26, &phi_bb325_27, &phi_bb325_28, &phi_bb325_29, &phi_bb325_32, &phi_bb325_33, &phi_bb325_35, &phi_bb325_36, &phi_bb325_37, &phi_bb325_48, &phi_bb325_49, &phi_bb325_51, &phi_bb325_52);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block327, phi_bb325_20, phi_bb325_26, phi_bb325_27, phi_bb325_28, phi_bb325_29, phi_bb325_32, phi_bb325_33, phi_bb325_35, phi_bb325_36, phi_bb325_37, phi_bb325_48, phi_bb325_49, phi_bb325_51, phi_bb325_52);
    } else {
      ca_.Goto(&block328, phi_bb325_20, phi_bb325_26, phi_bb325_27, phi_bb325_28, phi_bb325_29, phi_bb325_32, phi_bb325_33, phi_bb325_35, phi_bb325_36, phi_bb325_37, phi_bb325_48, phi_bb325_49, phi_bb325_51, phi_bb325_52);
    }
  }

  TNode<IntPtrT> phi_bb327_20;
  TNode<IntPtrT> phi_bb327_26;
  TNode<IntPtrT> phi_bb327_27;
  TNode<IntPtrT> phi_bb327_28;
  TNode<IntPtrT> phi_bb327_29;
  TNode<IntPtrT> phi_bb327_32;
  TNode<BoolT> phi_bb327_33;
  TNode<IntPtrT> phi_bb327_35;
  TNode<IntPtrT> phi_bb327_36;
  TNode<BoolT> phi_bb327_37;
  TNode<BoolT> phi_bb327_48;
  TNode<JSAny> phi_bb327_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb327_51;
  TNode<IntPtrT> phi_bb327_52;
  TNode<Union<HeapObject, TaggedIndex>> tmp671;
  TNode<IntPtrT> tmp672;
  TNode<IntPtrT> tmp673;
  TNode<IntPtrT> tmp674;
  if (block327.is_used()) {
    ca_.Bind(&block327, &phi_bb327_20, &phi_bb327_26, &phi_bb327_27, &phi_bb327_28, &phi_bb327_29, &phi_bb327_32, &phi_bb327_33, &phi_bb327_35, &phi_bb327_36, &phi_bb327_37, &phi_bb327_48, &phi_bb327_49, &phi_bb327_51, &phi_bb327_52);
    std::tie(tmp671, tmp672) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb327_29}).Flatten();
    tmp673 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp674 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb327_29}, TNode<IntPtrT>{tmp673});
    ca_.Goto(&block326, phi_bb327_20, phi_bb327_26, phi_bb327_27, phi_bb327_28, tmp674, phi_bb327_32, phi_bb327_33, phi_bb327_35, phi_bb327_36, phi_bb327_37, phi_bb327_48, phi_bb327_49, phi_bb327_51, phi_bb327_52, tmp671, tmp672);
  }

  TNode<IntPtrT> phi_bb328_20;
  TNode<IntPtrT> phi_bb328_26;
  TNode<IntPtrT> phi_bb328_27;
  TNode<IntPtrT> phi_bb328_28;
  TNode<IntPtrT> phi_bb328_29;
  TNode<IntPtrT> phi_bb328_32;
  TNode<BoolT> phi_bb328_33;
  TNode<IntPtrT> phi_bb328_35;
  TNode<IntPtrT> phi_bb328_36;
  TNode<BoolT> phi_bb328_37;
  TNode<BoolT> phi_bb328_48;
  TNode<JSAny> phi_bb328_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb328_51;
  TNode<IntPtrT> phi_bb328_52;
  TNode<IntPtrT> tmp675;
  TNode<BoolT> tmp676;
  if (block328.is_used()) {
    ca_.Bind(&block328, &phi_bb328_20, &phi_bb328_26, &phi_bb328_27, &phi_bb328_28, &phi_bb328_29, &phi_bb328_32, &phi_bb328_33, &phi_bb328_35, &phi_bb328_36, &phi_bb328_37, &phi_bb328_48, &phi_bb328_49, &phi_bb328_51, &phi_bb328_52);
    tmp675 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp676 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb328_32}, TNode<IntPtrT>{tmp675});
    ca_.Branch(tmp676, &block330, std::vector<compiler::Node*>{phi_bb328_20, phi_bb328_26, phi_bb328_27, phi_bb328_28, phi_bb328_29, phi_bb328_32, phi_bb328_33, phi_bb328_35, phi_bb328_36, phi_bb328_37, phi_bb328_48, phi_bb328_49, phi_bb328_51, phi_bb328_52}, &block331, std::vector<compiler::Node*>{phi_bb328_20, phi_bb328_26, phi_bb328_27, phi_bb328_28, phi_bb328_29, phi_bb328_32, phi_bb328_33, phi_bb328_35, phi_bb328_36, phi_bb328_37, phi_bb328_48, phi_bb328_49, phi_bb328_51, phi_bb328_52});
  }

  TNode<IntPtrT> phi_bb330_20;
  TNode<IntPtrT> phi_bb330_26;
  TNode<IntPtrT> phi_bb330_27;
  TNode<IntPtrT> phi_bb330_28;
  TNode<IntPtrT> phi_bb330_29;
  TNode<IntPtrT> phi_bb330_32;
  TNode<BoolT> phi_bb330_33;
  TNode<IntPtrT> phi_bb330_35;
  TNode<IntPtrT> phi_bb330_36;
  TNode<BoolT> phi_bb330_37;
  TNode<BoolT> phi_bb330_48;
  TNode<JSAny> phi_bb330_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb330_51;
  TNode<IntPtrT> phi_bb330_52;
  TNode<Union<HeapObject, TaggedIndex>> tmp677;
  TNode<IntPtrT> tmp678;
  TNode<IntPtrT> tmp679;
  TNode<BoolT> tmp680;
  if (block330.is_used()) {
    ca_.Bind(&block330, &phi_bb330_20, &phi_bb330_26, &phi_bb330_27, &phi_bb330_28, &phi_bb330_29, &phi_bb330_32, &phi_bb330_33, &phi_bb330_35, &phi_bb330_36, &phi_bb330_37, &phi_bb330_48, &phi_bb330_49, &phi_bb330_51, &phi_bb330_52);
    std::tie(tmp677, tmp678) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb330_32}).Flatten();
    tmp679 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp680 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block326, phi_bb330_20, phi_bb330_26, phi_bb330_27, phi_bb330_28, phi_bb330_29, tmp679, tmp680, phi_bb330_35, phi_bb330_36, phi_bb330_37, phi_bb330_48, phi_bb330_49, phi_bb330_51, phi_bb330_52, tmp677, tmp678);
  }

  TNode<IntPtrT> phi_bb331_20;
  TNode<IntPtrT> phi_bb331_26;
  TNode<IntPtrT> phi_bb331_27;
  TNode<IntPtrT> phi_bb331_28;
  TNode<IntPtrT> phi_bb331_29;
  TNode<IntPtrT> phi_bb331_32;
  TNode<BoolT> phi_bb331_33;
  TNode<IntPtrT> phi_bb331_35;
  TNode<IntPtrT> phi_bb331_36;
  TNode<BoolT> phi_bb331_37;
  TNode<BoolT> phi_bb331_48;
  TNode<JSAny> phi_bb331_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb331_51;
  TNode<IntPtrT> phi_bb331_52;
  TNode<Union<HeapObject, TaggedIndex>> tmp681;
  TNode<IntPtrT> tmp682;
  TNode<IntPtrT> tmp683;
  TNode<IntPtrT> tmp684;
  TNode<IntPtrT> tmp685;
  TNode<IntPtrT> tmp686;
  TNode<BoolT> tmp687;
  if (block331.is_used()) {
    ca_.Bind(&block331, &phi_bb331_20, &phi_bb331_26, &phi_bb331_27, &phi_bb331_28, &phi_bb331_29, &phi_bb331_32, &phi_bb331_33, &phi_bb331_35, &phi_bb331_36, &phi_bb331_37, &phi_bb331_48, &phi_bb331_49, &phi_bb331_51, &phi_bb331_52);
    std::tie(tmp681, tmp682) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb331_29}).Flatten();
    tmp683 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp684 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb331_29}, TNode<IntPtrT>{tmp683});
    tmp685 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp686 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp684}, TNode<IntPtrT>{tmp685});
    tmp687 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block326, phi_bb331_20, phi_bb331_26, phi_bb331_27, phi_bb331_28, tmp686, tmp684, tmp687, phi_bb331_35, phi_bb331_36, phi_bb331_37, phi_bb331_48, phi_bb331_49, phi_bb331_51, phi_bb331_52, tmp681, tmp682);
  }

  TNode<IntPtrT> phi_bb326_20;
  TNode<IntPtrT> phi_bb326_26;
  TNode<IntPtrT> phi_bb326_27;
  TNode<IntPtrT> phi_bb326_28;
  TNode<IntPtrT> phi_bb326_29;
  TNode<IntPtrT> phi_bb326_32;
  TNode<BoolT> phi_bb326_33;
  TNode<IntPtrT> phi_bb326_35;
  TNode<IntPtrT> phi_bb326_36;
  TNode<BoolT> phi_bb326_37;
  TNode<BoolT> phi_bb326_48;
  TNode<JSAny> phi_bb326_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb326_51;
  TNode<IntPtrT> phi_bb326_52;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb326_53;
  TNode<IntPtrT> phi_bb326_54;
  if (block326.is_used()) {
    ca_.Bind(&block326, &phi_bb326_20, &phi_bb326_26, &phi_bb326_27, &phi_bb326_28, &phi_bb326_29, &phi_bb326_32, &phi_bb326_33, &phi_bb326_35, &phi_bb326_36, &phi_bb326_37, &phi_bb326_48, &phi_bb326_49, &phi_bb326_51, &phi_bb326_52, &phi_bb326_53, &phi_bb326_54);
    ca_.Goto(&block323, phi_bb326_20, phi_bb326_26, phi_bb326_27, phi_bb326_28, phi_bb326_29, phi_bb326_32, phi_bb326_33, phi_bb326_35, phi_bb326_36, phi_bb326_37, phi_bb326_48, phi_bb326_49, phi_bb326_51, phi_bb326_52, phi_bb326_53, phi_bb326_54);
  }

  TNode<IntPtrT> phi_bb323_20;
  TNode<IntPtrT> phi_bb323_26;
  TNode<IntPtrT> phi_bb323_27;
  TNode<IntPtrT> phi_bb323_28;
  TNode<IntPtrT> phi_bb323_29;
  TNode<IntPtrT> phi_bb323_32;
  TNode<BoolT> phi_bb323_33;
  TNode<IntPtrT> phi_bb323_35;
  TNode<IntPtrT> phi_bb323_36;
  TNode<BoolT> phi_bb323_37;
  TNode<BoolT> phi_bb323_48;
  TNode<JSAny> phi_bb323_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb323_51;
  TNode<IntPtrT> phi_bb323_52;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb323_53;
  TNode<IntPtrT> phi_bb323_54;
  TNode<BigInt> tmp688;
  TNode<UintPtrT> tmp689;
  TNode<UintPtrT> tmp690;
  TNode<IntPtrT> tmp691;
  TNode<IntPtrT> tmp692;
  if (block323.is_used()) {
    ca_.Bind(&block323, &phi_bb323_20, &phi_bb323_26, &phi_bb323_27, &phi_bb323_28, &phi_bb323_29, &phi_bb323_32, &phi_bb323_33, &phi_bb323_35, &phi_bb323_36, &phi_bb323_37, &phi_bb323_48, &phi_bb323_49, &phi_bb323_51, &phi_bb323_52, &phi_bb323_53, &phi_bb323_54);
    tmp688 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{tmp442}, TNode<JSAny>{phi_bb323_49});
    std::tie(tmp689, tmp690) = CodeStubAssembler(state_).BigIntToRawBytes(TNode<BigInt>{tmp688}).Flatten();
    tmp691 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp689});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb323_51, phi_bb323_52}, tmp691);
    tmp692 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp690});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb323_53, phi_bb323_54}, tmp692);
    ca_.Goto(&block304, phi_bb323_20, tmp664, phi_bb323_26, phi_bb323_27, phi_bb323_28, phi_bb323_29, phi_bb323_32, phi_bb323_33, phi_bb323_35, phi_bb323_36, phi_bb323_37, phi_bb323_48, phi_bb323_49);
  }

  TNode<IntPtrT> phi_bb304_20;
  TNode<IntPtrT> phi_bb304_25;
  TNode<IntPtrT> phi_bb304_26;
  TNode<IntPtrT> phi_bb304_27;
  TNode<IntPtrT> phi_bb304_28;
  TNode<IntPtrT> phi_bb304_29;
  TNode<IntPtrT> phi_bb304_32;
  TNode<BoolT> phi_bb304_33;
  TNode<IntPtrT> phi_bb304_35;
  TNode<IntPtrT> phi_bb304_36;
  TNode<BoolT> phi_bb304_37;
  TNode<BoolT> phi_bb304_48;
  TNode<JSAny> phi_bb304_49;
  if (block304.is_used()) {
    ca_.Bind(&block304, &phi_bb304_20, &phi_bb304_25, &phi_bb304_26, &phi_bb304_27, &phi_bb304_28, &phi_bb304_29, &phi_bb304_32, &phi_bb304_33, &phi_bb304_35, &phi_bb304_36, &phi_bb304_37, &phi_bb304_48, &phi_bb304_49);
    ca_.Goto(&block301, phi_bb304_20, phi_bb304_25, phi_bb304_26, phi_bb304_27, phi_bb304_28, phi_bb304_29, phi_bb304_32, phi_bb304_33, phi_bb304_35, phi_bb304_36, phi_bb304_37, phi_bb304_48, phi_bb304_49);
  }

  TNode<IntPtrT> phi_bb300_20;
  TNode<IntPtrT> phi_bb300_25;
  TNode<IntPtrT> phi_bb300_26;
  TNode<IntPtrT> phi_bb300_27;
  TNode<IntPtrT> phi_bb300_28;
  TNode<IntPtrT> phi_bb300_29;
  TNode<IntPtrT> phi_bb300_32;
  TNode<BoolT> phi_bb300_33;
  TNode<IntPtrT> phi_bb300_35;
  TNode<IntPtrT> phi_bb300_36;
  TNode<BoolT> phi_bb300_37;
  TNode<BoolT> phi_bb300_48;
  TNode<JSAny> phi_bb300_49;
  TNode<Uint32T> tmp693;
  TNode<Uint32T> tmp694;
  TNode<Uint32T> tmp695;
  TNode<BoolT> tmp696;
  if (block300.is_used()) {
    ca_.Bind(&block300, &phi_bb300_20, &phi_bb300_25, &phi_bb300_26, &phi_bb300_27, &phi_bb300_28, &phi_bb300_29, &phi_bb300_32, &phi_bb300_33, &phi_bb300_35, &phi_bb300_36, &phi_bb300_37, &phi_bb300_48, &phi_bb300_49);
    tmp693 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::ValueType::kIsRefBit);
    tmp694 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp508}, TNode<Uint32T>{tmp693});
    tmp695 = FromConstexpr_WasmCodePointer_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp696 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp694}, TNode<Uint32T>{tmp695});
    ca_.Branch(tmp696, &block332, std::vector<compiler::Node*>{phi_bb300_20, phi_bb300_25, phi_bb300_26, phi_bb300_27, phi_bb300_28, phi_bb300_29, phi_bb300_32, phi_bb300_33, phi_bb300_35, phi_bb300_36, phi_bb300_37, phi_bb300_48, phi_bb300_49}, &block333, std::vector<compiler::Node*>{phi_bb300_20, phi_bb300_25, phi_bb300_26, phi_bb300_27, phi_bb300_28, phi_bb300_29, phi_bb300_32, phi_bb300_33, phi_bb300_35, phi_bb300_36, phi_bb300_37, phi_bb300_48, phi_bb300_49});
  }

  TNode<IntPtrT> phi_bb333_20;
  TNode<IntPtrT> phi_bb333_25;
  TNode<IntPtrT> phi_bb333_26;
  TNode<IntPtrT> phi_bb333_27;
  TNode<IntPtrT> phi_bb333_28;
  TNode<IntPtrT> phi_bb333_29;
  TNode<IntPtrT> phi_bb333_32;
  TNode<BoolT> phi_bb333_33;
  TNode<IntPtrT> phi_bb333_35;
  TNode<IntPtrT> phi_bb333_36;
  TNode<BoolT> phi_bb333_37;
  TNode<BoolT> phi_bb333_48;
  TNode<JSAny> phi_bb333_49;
  if (block333.is_used()) {
    ca_.Bind(&block333, &phi_bb333_20, &phi_bb333_25, &phi_bb333_26, &phi_bb333_27, &phi_bb333_28, &phi_bb333_29, &phi_bb333_32, &phi_bb333_33, &phi_bb333_35, &phi_bb333_36, &phi_bb333_37, &phi_bb333_48, &phi_bb333_49);
    {
      auto pos_stack = ca_.GetMacroSourcePositionStack();
      pos_stack.push_back({"src/builtins/wasm-to-js.tq", 262});
      CodeStubAssembler(state_).FailAssert("Torque assert '(retType & kValueTypeIsRefBit) != 0' failed", pos_stack);
    }
  }

  TNode<IntPtrT> phi_bb332_20;
  TNode<IntPtrT> phi_bb332_25;
  TNode<IntPtrT> phi_bb332_26;
  TNode<IntPtrT> phi_bb332_27;
  TNode<IntPtrT> phi_bb332_28;
  TNode<IntPtrT> phi_bb332_29;
  TNode<IntPtrT> phi_bb332_32;
  TNode<BoolT> phi_bb332_33;
  TNode<IntPtrT> phi_bb332_35;
  TNode<IntPtrT> phi_bb332_36;
  TNode<BoolT> phi_bb332_37;
  TNode<BoolT> phi_bb332_48;
  TNode<JSAny> phi_bb332_49;
  TNode<Object> tmp697;
  TNode<IntPtrT> tmp698;
  TNode<BoolT> tmp699;
  if (block332.is_used()) {
    ca_.Bind(&block332, &phi_bb332_20, &phi_bb332_25, &phi_bb332_26, &phi_bb332_27, &phi_bb332_28, &phi_bb332_29, &phi_bb332_32, &phi_bb332_33, &phi_bb332_35, &phi_bb332_36, &phi_bb332_37, &phi_bb332_48, &phi_bb332_49);
    tmp697 = JSToWasmObject_0(state_, TNode<NativeContext>{tmp442}, TNode<Uint32T>{tmp508}, TNode<JSAny>{phi_bb332_49});
    tmp698 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp699 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp32}, TNode<IntPtrT>{tmp698});
    ca_.Branch(tmp699, &block334, std::vector<compiler::Node*>{phi_bb332_20, phi_bb332_25, phi_bb332_26, phi_bb332_27, phi_bb332_28, phi_bb332_29, phi_bb332_32, phi_bb332_33, phi_bb332_35, phi_bb332_36, phi_bb332_37, phi_bb332_48, phi_bb332_49}, &block335, std::vector<compiler::Node*>{phi_bb332_20, phi_bb332_25, phi_bb332_26, phi_bb332_27, phi_bb332_28, phi_bb332_29, phi_bb332_32, phi_bb332_33, phi_bb332_35, phi_bb332_36, phi_bb332_37, phi_bb332_48, phi_bb332_49});
  }

  TNode<IntPtrT> phi_bb334_20;
  TNode<IntPtrT> phi_bb334_25;
  TNode<IntPtrT> phi_bb334_26;
  TNode<IntPtrT> phi_bb334_27;
  TNode<IntPtrT> phi_bb334_28;
  TNode<IntPtrT> phi_bb334_29;
  TNode<IntPtrT> phi_bb334_32;
  TNode<BoolT> phi_bb334_33;
  TNode<IntPtrT> phi_bb334_35;
  TNode<IntPtrT> phi_bb334_36;
  TNode<BoolT> phi_bb334_37;
  TNode<BoolT> phi_bb334_48;
  TNode<JSAny> phi_bb334_49;
  TNode<IntPtrT> tmp700;
  TNode<IntPtrT> tmp701;
  TNode<IntPtrT> tmp702;
  TNode<BoolT> tmp703;
  if (block334.is_used()) {
    ca_.Bind(&block334, &phi_bb334_20, &phi_bb334_25, &phi_bb334_26, &phi_bb334_27, &phi_bb334_28, &phi_bb334_29, &phi_bb334_32, &phi_bb334_33, &phi_bb334_35, &phi_bb334_36, &phi_bb334_37, &phi_bb334_48, &phi_bb334_49);
    tmp700 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp701 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb334_25}, TNode<IntPtrT>{tmp700});
    tmp702 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp703 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb334_25}, TNode<IntPtrT>{tmp702});
    ca_.Branch(tmp703, &block338, std::vector<compiler::Node*>{phi_bb334_20, phi_bb334_26, phi_bb334_27, phi_bb334_28, phi_bb334_29, phi_bb334_32, phi_bb334_33, phi_bb334_35, phi_bb334_36, phi_bb334_37, phi_bb334_48, phi_bb334_49}, &block339, std::vector<compiler::Node*>{phi_bb334_20, phi_bb334_26, phi_bb334_27, phi_bb334_28, phi_bb334_29, phi_bb334_32, phi_bb334_33, phi_bb334_35, phi_bb334_36, phi_bb334_37, phi_bb334_48, phi_bb334_49});
  }

  TNode<IntPtrT> phi_bb338_20;
  TNode<IntPtrT> phi_bb338_26;
  TNode<IntPtrT> phi_bb338_27;
  TNode<IntPtrT> phi_bb338_28;
  TNode<IntPtrT> phi_bb338_29;
  TNode<IntPtrT> phi_bb338_32;
  TNode<BoolT> phi_bb338_33;
  TNode<IntPtrT> phi_bb338_35;
  TNode<IntPtrT> phi_bb338_36;
  TNode<BoolT> phi_bb338_37;
  TNode<BoolT> phi_bb338_48;
  TNode<JSAny> phi_bb338_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp704;
  TNode<IntPtrT> tmp705;
  TNode<IntPtrT> tmp706;
  TNode<IntPtrT> tmp707;
  if (block338.is_used()) {
    ca_.Bind(&block338, &phi_bb338_20, &phi_bb338_26, &phi_bb338_27, &phi_bb338_28, &phi_bb338_29, &phi_bb338_32, &phi_bb338_33, &phi_bb338_35, &phi_bb338_36, &phi_bb338_37, &phi_bb338_48, &phi_bb338_49);
    std::tie(tmp704, tmp705) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb338_27}).Flatten();
    tmp706 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp707 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb338_27}, TNode<IntPtrT>{tmp706});
    ca_.Goto(&block337, phi_bb338_20, phi_bb338_26, tmp707, phi_bb338_28, phi_bb338_29, phi_bb338_32, phi_bb338_33, phi_bb338_35, phi_bb338_36, phi_bb338_37, phi_bb338_48, phi_bb338_49, tmp704, tmp705);
  }

  TNode<IntPtrT> phi_bb339_20;
  TNode<IntPtrT> phi_bb339_26;
  TNode<IntPtrT> phi_bb339_27;
  TNode<IntPtrT> phi_bb339_28;
  TNode<IntPtrT> phi_bb339_29;
  TNode<IntPtrT> phi_bb339_32;
  TNode<BoolT> phi_bb339_33;
  TNode<IntPtrT> phi_bb339_35;
  TNode<IntPtrT> phi_bb339_36;
  TNode<BoolT> phi_bb339_37;
  TNode<BoolT> phi_bb339_48;
  TNode<JSAny> phi_bb339_49;
  if (block339.is_used()) {
    ca_.Bind(&block339, &phi_bb339_20, &phi_bb339_26, &phi_bb339_27, &phi_bb339_28, &phi_bb339_29, &phi_bb339_32, &phi_bb339_33, &phi_bb339_35, &phi_bb339_36, &phi_bb339_37, &phi_bb339_48, &phi_bb339_49);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block341, phi_bb339_20, phi_bb339_26, phi_bb339_27, phi_bb339_28, phi_bb339_29, phi_bb339_32, phi_bb339_33, phi_bb339_35, phi_bb339_36, phi_bb339_37, phi_bb339_48, phi_bb339_49);
    } else {
      ca_.Goto(&block342, phi_bb339_20, phi_bb339_26, phi_bb339_27, phi_bb339_28, phi_bb339_29, phi_bb339_32, phi_bb339_33, phi_bb339_35, phi_bb339_36, phi_bb339_37, phi_bb339_48, phi_bb339_49);
    }
  }

  TNode<IntPtrT> phi_bb341_20;
  TNode<IntPtrT> phi_bb341_26;
  TNode<IntPtrT> phi_bb341_27;
  TNode<IntPtrT> phi_bb341_28;
  TNode<IntPtrT> phi_bb341_29;
  TNode<IntPtrT> phi_bb341_32;
  TNode<BoolT> phi_bb341_33;
  TNode<IntPtrT> phi_bb341_35;
  TNode<IntPtrT> phi_bb341_36;
  TNode<BoolT> phi_bb341_37;
  TNode<BoolT> phi_bb341_48;
  TNode<JSAny> phi_bb341_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp708;
  TNode<IntPtrT> tmp709;
  TNode<IntPtrT> tmp710;
  TNode<IntPtrT> tmp711;
  if (block341.is_used()) {
    ca_.Bind(&block341, &phi_bb341_20, &phi_bb341_26, &phi_bb341_27, &phi_bb341_28, &phi_bb341_29, &phi_bb341_32, &phi_bb341_33, &phi_bb341_35, &phi_bb341_36, &phi_bb341_37, &phi_bb341_48, &phi_bb341_49);
    std::tie(tmp708, tmp709) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb341_29}).Flatten();
    tmp710 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp711 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb341_29}, TNode<IntPtrT>{tmp710});
    ca_.Goto(&block340, phi_bb341_20, phi_bb341_26, phi_bb341_27, phi_bb341_28, tmp711, phi_bb341_32, phi_bb341_33, phi_bb341_35, phi_bb341_36, phi_bb341_37, phi_bb341_48, phi_bb341_49, tmp708, tmp709);
  }

  TNode<IntPtrT> phi_bb342_20;
  TNode<IntPtrT> phi_bb342_26;
  TNode<IntPtrT> phi_bb342_27;
  TNode<IntPtrT> phi_bb342_28;
  TNode<IntPtrT> phi_bb342_29;
  TNode<IntPtrT> phi_bb342_32;
  TNode<BoolT> phi_bb342_33;
  TNode<IntPtrT> phi_bb342_35;
  TNode<IntPtrT> phi_bb342_36;
  TNode<BoolT> phi_bb342_37;
  TNode<BoolT> phi_bb342_48;
  TNode<JSAny> phi_bb342_49;
  TNode<IntPtrT> tmp712;
  TNode<BoolT> tmp713;
  if (block342.is_used()) {
    ca_.Bind(&block342, &phi_bb342_20, &phi_bb342_26, &phi_bb342_27, &phi_bb342_28, &phi_bb342_29, &phi_bb342_32, &phi_bb342_33, &phi_bb342_35, &phi_bb342_36, &phi_bb342_37, &phi_bb342_48, &phi_bb342_49);
    tmp712 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp713 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb342_32}, TNode<IntPtrT>{tmp712});
    ca_.Branch(tmp713, &block344, std::vector<compiler::Node*>{phi_bb342_20, phi_bb342_26, phi_bb342_27, phi_bb342_28, phi_bb342_29, phi_bb342_32, phi_bb342_33, phi_bb342_35, phi_bb342_36, phi_bb342_37, phi_bb342_48, phi_bb342_49}, &block345, std::vector<compiler::Node*>{phi_bb342_20, phi_bb342_26, phi_bb342_27, phi_bb342_28, phi_bb342_29, phi_bb342_32, phi_bb342_33, phi_bb342_35, phi_bb342_36, phi_bb342_37, phi_bb342_48, phi_bb342_49});
  }

  TNode<IntPtrT> phi_bb344_20;
  TNode<IntPtrT> phi_bb344_26;
  TNode<IntPtrT> phi_bb344_27;
  TNode<IntPtrT> phi_bb344_28;
  TNode<IntPtrT> phi_bb344_29;
  TNode<IntPtrT> phi_bb344_32;
  TNode<BoolT> phi_bb344_33;
  TNode<IntPtrT> phi_bb344_35;
  TNode<IntPtrT> phi_bb344_36;
  TNode<BoolT> phi_bb344_37;
  TNode<BoolT> phi_bb344_48;
  TNode<JSAny> phi_bb344_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp714;
  TNode<IntPtrT> tmp715;
  TNode<IntPtrT> tmp716;
  TNode<BoolT> tmp717;
  if (block344.is_used()) {
    ca_.Bind(&block344, &phi_bb344_20, &phi_bb344_26, &phi_bb344_27, &phi_bb344_28, &phi_bb344_29, &phi_bb344_32, &phi_bb344_33, &phi_bb344_35, &phi_bb344_36, &phi_bb344_37, &phi_bb344_48, &phi_bb344_49);
    std::tie(tmp714, tmp715) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb344_32}).Flatten();
    tmp716 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp717 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block340, phi_bb344_20, phi_bb344_26, phi_bb344_27, phi_bb344_28, phi_bb344_29, tmp716, tmp717, phi_bb344_35, phi_bb344_36, phi_bb344_37, phi_bb344_48, phi_bb344_49, tmp714, tmp715);
  }

  TNode<IntPtrT> phi_bb345_20;
  TNode<IntPtrT> phi_bb345_26;
  TNode<IntPtrT> phi_bb345_27;
  TNode<IntPtrT> phi_bb345_28;
  TNode<IntPtrT> phi_bb345_29;
  TNode<IntPtrT> phi_bb345_32;
  TNode<BoolT> phi_bb345_33;
  TNode<IntPtrT> phi_bb345_35;
  TNode<IntPtrT> phi_bb345_36;
  TNode<BoolT> phi_bb345_37;
  TNode<BoolT> phi_bb345_48;
  TNode<JSAny> phi_bb345_49;
  TNode<Union<HeapObject, TaggedIndex>> tmp718;
  TNode<IntPtrT> tmp719;
  TNode<IntPtrT> tmp720;
  TNode<IntPtrT> tmp721;
  TNode<IntPtrT> tmp722;
  TNode<IntPtrT> tmp723;
  TNode<BoolT> tmp724;
  if (block345.is_used()) {
    ca_.Bind(&block345, &phi_bb345_20, &phi_bb345_26, &phi_bb345_27, &phi_bb345_28, &phi_bb345_29, &phi_bb345_32, &phi_bb345_33, &phi_bb345_35, &phi_bb345_36, &phi_bb345_37, &phi_bb345_48, &phi_bb345_49);
    std::tie(tmp718, tmp719) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb345_29}).Flatten();
    tmp720 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp721 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb345_29}, TNode<IntPtrT>{tmp720});
    tmp722 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp723 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp721}, TNode<IntPtrT>{tmp722});
    tmp724 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block340, phi_bb345_20, phi_bb345_26, phi_bb345_27, phi_bb345_28, tmp723, tmp721, tmp724, phi_bb345_35, phi_bb345_36, phi_bb345_37, phi_bb345_48, phi_bb345_49, tmp718, tmp719);
  }

  TNode<IntPtrT> phi_bb340_20;
  TNode<IntPtrT> phi_bb340_26;
  TNode<IntPtrT> phi_bb340_27;
  TNode<IntPtrT> phi_bb340_28;
  TNode<IntPtrT> phi_bb340_29;
  TNode<IntPtrT> phi_bb340_32;
  TNode<BoolT> phi_bb340_33;
  TNode<IntPtrT> phi_bb340_35;
  TNode<IntPtrT> phi_bb340_36;
  TNode<BoolT> phi_bb340_37;
  TNode<BoolT> phi_bb340_48;
  TNode<JSAny> phi_bb340_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb340_52;
  TNode<IntPtrT> phi_bb340_53;
  if (block340.is_used()) {
    ca_.Bind(&block340, &phi_bb340_20, &phi_bb340_26, &phi_bb340_27, &phi_bb340_28, &phi_bb340_29, &phi_bb340_32, &phi_bb340_33, &phi_bb340_35, &phi_bb340_36, &phi_bb340_37, &phi_bb340_48, &phi_bb340_49, &phi_bb340_52, &phi_bb340_53);
    ca_.Goto(&block337, phi_bb340_20, phi_bb340_26, phi_bb340_27, phi_bb340_28, phi_bb340_29, phi_bb340_32, phi_bb340_33, phi_bb340_35, phi_bb340_36, phi_bb340_37, phi_bb340_48, phi_bb340_49, phi_bb340_52, phi_bb340_53);
  }

  TNode<IntPtrT> phi_bb337_20;
  TNode<IntPtrT> phi_bb337_26;
  TNode<IntPtrT> phi_bb337_27;
  TNode<IntPtrT> phi_bb337_28;
  TNode<IntPtrT> phi_bb337_29;
  TNode<IntPtrT> phi_bb337_32;
  TNode<BoolT> phi_bb337_33;
  TNode<IntPtrT> phi_bb337_35;
  TNode<IntPtrT> phi_bb337_36;
  TNode<BoolT> phi_bb337_37;
  TNode<BoolT> phi_bb337_48;
  TNode<JSAny> phi_bb337_49;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb337_52;
  TNode<IntPtrT> phi_bb337_53;
  TNode<IntPtrT> tmp725;
  if (block337.is_used()) {
    ca_.Bind(&block337, &phi_bb337_20, &phi_bb337_26, &phi_bb337_27, &phi_bb337_28, &phi_bb337_29, &phi_bb337_32, &phi_bb337_33, &phi_bb337_35, &phi_bb337_36, &phi_bb337_37, &phi_bb337_48, &phi_bb337_49, &phi_bb337_52, &phi_bb337_53);
    tmp725 = CodeStubAssembler(state_).BitcastTaggedToWord(TNode<Object>{tmp697});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb337_52, phi_bb337_53}, tmp725);
    ca_.Goto(&block336, phi_bb337_20, tmp701, phi_bb337_26, phi_bb337_27, phi_bb337_28, phi_bb337_29, phi_bb337_32, phi_bb337_33, phi_bb337_35, phi_bb337_36, phi_bb337_37, phi_bb337_48, phi_bb337_49);
  }

  TNode<IntPtrT> phi_bb335_20;
  TNode<IntPtrT> phi_bb335_25;
  TNode<IntPtrT> phi_bb335_26;
  TNode<IntPtrT> phi_bb335_27;
  TNode<IntPtrT> phi_bb335_28;
  TNode<IntPtrT> phi_bb335_29;
  TNode<IntPtrT> phi_bb335_32;
  TNode<BoolT> phi_bb335_33;
  TNode<IntPtrT> phi_bb335_35;
  TNode<IntPtrT> phi_bb335_36;
  TNode<BoolT> phi_bb335_37;
  TNode<BoolT> phi_bb335_48;
  TNode<JSAny> phi_bb335_49;
  TNode<BoolT> tmp726;
  TNode<Union<HeapObject, TaggedIndex>> tmp727;
  TNode<IntPtrT> tmp728;
  TNode<IntPtrT> tmp729;
  TNode<UintPtrT> tmp730;
  TNode<UintPtrT> tmp731;
  TNode<BoolT> tmp732;
  if (block335.is_used()) {
    ca_.Bind(&block335, &phi_bb335_20, &phi_bb335_25, &phi_bb335_26, &phi_bb335_27, &phi_bb335_28, &phi_bb335_29, &phi_bb335_32, &phi_bb335_33, &phi_bb335_35, &phi_bb335_36, &phi_bb335_37, &phi_bb335_48, &phi_bb335_49);
    tmp726 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    std::tie(tmp727, tmp728, tmp729) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb224_41}).Flatten();
    tmp730 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb335_20});
    tmp731 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp729});
    tmp732 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp730}, TNode<UintPtrT>{tmp731});
    ca_.Branch(tmp732, &block350, std::vector<compiler::Node*>{phi_bb335_20, phi_bb335_25, phi_bb335_26, phi_bb335_27, phi_bb335_28, phi_bb335_29, phi_bb335_32, phi_bb335_33, phi_bb335_35, phi_bb335_36, phi_bb335_37, phi_bb335_49, phi_bb335_20, phi_bb335_20, phi_bb335_20, phi_bb335_20}, &block351, std::vector<compiler::Node*>{phi_bb335_20, phi_bb335_25, phi_bb335_26, phi_bb335_27, phi_bb335_28, phi_bb335_29, phi_bb335_32, phi_bb335_33, phi_bb335_35, phi_bb335_36, phi_bb335_37, phi_bb335_49, phi_bb335_20, phi_bb335_20, phi_bb335_20, phi_bb335_20});
  }

  TNode<IntPtrT> phi_bb350_20;
  TNode<IntPtrT> phi_bb350_25;
  TNode<IntPtrT> phi_bb350_26;
  TNode<IntPtrT> phi_bb350_27;
  TNode<IntPtrT> phi_bb350_28;
  TNode<IntPtrT> phi_bb350_29;
  TNode<IntPtrT> phi_bb350_32;
  TNode<BoolT> phi_bb350_33;
  TNode<IntPtrT> phi_bb350_35;
  TNode<IntPtrT> phi_bb350_36;
  TNode<BoolT> phi_bb350_37;
  TNode<JSAny> phi_bb350_49;
  TNode<IntPtrT> phi_bb350_56;
  TNode<IntPtrT> phi_bb350_57;
  TNode<IntPtrT> phi_bb350_61;
  TNode<IntPtrT> phi_bb350_62;
  TNode<IntPtrT> tmp733;
  TNode<IntPtrT> tmp734;
  TNode<Union<HeapObject, TaggedIndex>> tmp735;
  TNode<IntPtrT> tmp736;
  if (block350.is_used()) {
    ca_.Bind(&block350, &phi_bb350_20, &phi_bb350_25, &phi_bb350_26, &phi_bb350_27, &phi_bb350_28, &phi_bb350_29, &phi_bb350_32, &phi_bb350_33, &phi_bb350_35, &phi_bb350_36, &phi_bb350_37, &phi_bb350_49, &phi_bb350_56, &phi_bb350_57, &phi_bb350_61, &phi_bb350_62);
    tmp733 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb350_62});
    tmp734 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp728}, TNode<IntPtrT>{tmp733});
    std::tie(tmp735, tmp736) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp727}, TNode<IntPtrT>{tmp734}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp735, tmp736}, tmp697);
    ca_.Goto(&block336, phi_bb350_20, phi_bb350_25, phi_bb350_26, phi_bb350_27, phi_bb350_28, phi_bb350_29, phi_bb350_32, phi_bb350_33, phi_bb350_35, phi_bb350_36, phi_bb350_37, tmp726, phi_bb350_49);
  }

  TNode<IntPtrT> phi_bb351_20;
  TNode<IntPtrT> phi_bb351_25;
  TNode<IntPtrT> phi_bb351_26;
  TNode<IntPtrT> phi_bb351_27;
  TNode<IntPtrT> phi_bb351_28;
  TNode<IntPtrT> phi_bb351_29;
  TNode<IntPtrT> phi_bb351_32;
  TNode<BoolT> phi_bb351_33;
  TNode<IntPtrT> phi_bb351_35;
  TNode<IntPtrT> phi_bb351_36;
  TNode<BoolT> phi_bb351_37;
  TNode<JSAny> phi_bb351_49;
  TNode<IntPtrT> phi_bb351_56;
  TNode<IntPtrT> phi_bb351_57;
  TNode<IntPtrT> phi_bb351_61;
  TNode<IntPtrT> phi_bb351_62;
  if (block351.is_used()) {
    ca_.Bind(&block351, &phi_bb351_20, &phi_bb351_25, &phi_bb351_26, &phi_bb351_27, &phi_bb351_28, &phi_bb351_29, &phi_bb351_32, &phi_bb351_33, &phi_bb351_35, &phi_bb351_36, &phi_bb351_37, &phi_bb351_49, &phi_bb351_56, &phi_bb351_57, &phi_bb351_61, &phi_bb351_62);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb336_20;
  TNode<IntPtrT> phi_bb336_25;
  TNode<IntPtrT> phi_bb336_26;
  TNode<IntPtrT> phi_bb336_27;
  TNode<IntPtrT> phi_bb336_28;
  TNode<IntPtrT> phi_bb336_29;
  TNode<IntPtrT> phi_bb336_32;
  TNode<BoolT> phi_bb336_33;
  TNode<IntPtrT> phi_bb336_35;
  TNode<IntPtrT> phi_bb336_36;
  TNode<BoolT> phi_bb336_37;
  TNode<BoolT> phi_bb336_48;
  TNode<JSAny> phi_bb336_49;
  if (block336.is_used()) {
    ca_.Bind(&block336, &phi_bb336_20, &phi_bb336_25, &phi_bb336_26, &phi_bb336_27, &phi_bb336_28, &phi_bb336_29, &phi_bb336_32, &phi_bb336_33, &phi_bb336_35, &phi_bb336_36, &phi_bb336_37, &phi_bb336_48, &phi_bb336_49);
    ca_.Goto(&block301, phi_bb336_20, phi_bb336_25, phi_bb336_26, phi_bb336_27, phi_bb336_28, phi_bb336_29, phi_bb336_32, phi_bb336_33, phi_bb336_35, phi_bb336_36, phi_bb336_37, phi_bb336_48, phi_bb336_49);
  }

  TNode<IntPtrT> phi_bb301_20;
  TNode<IntPtrT> phi_bb301_25;
  TNode<IntPtrT> phi_bb301_26;
  TNode<IntPtrT> phi_bb301_27;
  TNode<IntPtrT> phi_bb301_28;
  TNode<IntPtrT> phi_bb301_29;
  TNode<IntPtrT> phi_bb301_32;
  TNode<BoolT> phi_bb301_33;
  TNode<IntPtrT> phi_bb301_35;
  TNode<IntPtrT> phi_bb301_36;
  TNode<BoolT> phi_bb301_37;
  TNode<BoolT> phi_bb301_48;
  TNode<JSAny> phi_bb301_49;
  if (block301.is_used()) {
    ca_.Bind(&block301, &phi_bb301_20, &phi_bb301_25, &phi_bb301_26, &phi_bb301_27, &phi_bb301_28, &phi_bb301_29, &phi_bb301_32, &phi_bb301_33, &phi_bb301_35, &phi_bb301_36, &phi_bb301_37, &phi_bb301_48, &phi_bb301_49);
    ca_.Goto(&block286, phi_bb301_20, phi_bb301_25, phi_bb301_26, phi_bb301_27, phi_bb301_28, phi_bb301_29, phi_bb301_32, phi_bb301_33, phi_bb301_35, phi_bb301_36, phi_bb301_37, phi_bb301_48, phi_bb301_49);
  }

  TNode<IntPtrT> phi_bb286_20;
  TNode<IntPtrT> phi_bb286_25;
  TNode<IntPtrT> phi_bb286_26;
  TNode<IntPtrT> phi_bb286_27;
  TNode<IntPtrT> phi_bb286_28;
  TNode<IntPtrT> phi_bb286_29;
  TNode<IntPtrT> phi_bb286_32;
  TNode<BoolT> phi_bb286_33;
  TNode<IntPtrT> phi_bb286_35;
  TNode<IntPtrT> phi_bb286_36;
  TNode<BoolT> phi_bb286_37;
  TNode<BoolT> phi_bb286_48;
  TNode<JSAny> phi_bb286_49;
  if (block286.is_used()) {
    ca_.Bind(&block286, &phi_bb286_20, &phi_bb286_25, &phi_bb286_26, &phi_bb286_27, &phi_bb286_28, &phi_bb286_29, &phi_bb286_32, &phi_bb286_33, &phi_bb286_35, &phi_bb286_36, &phi_bb286_37, &phi_bb286_48, &phi_bb286_49);
    ca_.Goto(&block271, phi_bb286_20, phi_bb286_25, phi_bb286_26, phi_bb286_27, phi_bb286_28, phi_bb286_29, phi_bb286_32, phi_bb286_33, phi_bb286_35, phi_bb286_36, phi_bb286_37, phi_bb286_48, phi_bb286_49);
  }

  TNode<IntPtrT> phi_bb271_20;
  TNode<IntPtrT> phi_bb271_25;
  TNode<IntPtrT> phi_bb271_26;
  TNode<IntPtrT> phi_bb271_27;
  TNode<IntPtrT> phi_bb271_28;
  TNode<IntPtrT> phi_bb271_29;
  TNode<IntPtrT> phi_bb271_32;
  TNode<BoolT> phi_bb271_33;
  TNode<IntPtrT> phi_bb271_35;
  TNode<IntPtrT> phi_bb271_36;
  TNode<BoolT> phi_bb271_37;
  TNode<BoolT> phi_bb271_48;
  TNode<JSAny> phi_bb271_49;
  if (block271.is_used()) {
    ca_.Bind(&block271, &phi_bb271_20, &phi_bb271_25, &phi_bb271_26, &phi_bb271_27, &phi_bb271_28, &phi_bb271_29, &phi_bb271_32, &phi_bb271_33, &phi_bb271_35, &phi_bb271_36, &phi_bb271_37, &phi_bb271_48, &phi_bb271_49);
    ca_.Goto(&block255, phi_bb271_20, phi_bb271_25, phi_bb271_26, phi_bb271_27, phi_bb271_28, phi_bb271_29, phi_bb271_32, phi_bb271_33, phi_bb271_35, phi_bb271_36, phi_bb271_37, phi_bb271_48, phi_bb271_49);
  }

  TNode<IntPtrT> phi_bb255_20;
  TNode<IntPtrT> phi_bb255_25;
  TNode<IntPtrT> phi_bb255_26;
  TNode<IntPtrT> phi_bb255_27;
  TNode<IntPtrT> phi_bb255_28;
  TNode<IntPtrT> phi_bb255_29;
  TNode<IntPtrT> phi_bb255_32;
  TNode<BoolT> phi_bb255_33;
  TNode<IntPtrT> phi_bb255_35;
  TNode<IntPtrT> phi_bb255_36;
  TNode<BoolT> phi_bb255_37;
  TNode<BoolT> phi_bb255_48;
  TNode<JSAny> phi_bb255_49;
  TNode<IntPtrT> tmp737;
  TNode<IntPtrT> tmp738;
  if (block255.is_used()) {
    ca_.Bind(&block255, &phi_bb255_20, &phi_bb255_25, &phi_bb255_26, &phi_bb255_27, &phi_bb255_28, &phi_bb255_29, &phi_bb255_32, &phi_bb255_33, &phi_bb255_35, &phi_bb255_36, &phi_bb255_37, &phi_bb255_48, &phi_bb255_49);
    tmp737 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp738 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb255_20}, TNode<IntPtrT>{tmp737});
    ca_.Goto(&block233, tmp738, phi_bb255_25, phi_bb255_26, phi_bb255_27, phi_bb255_28, phi_bb255_29, phi_bb255_32, phi_bb255_33, phi_bb255_35, phi_bb255_36, phi_bb255_37, tmp507, phi_bb255_48);
  }

  TNode<IntPtrT> phi_bb232_20;
  TNode<IntPtrT> phi_bb232_25;
  TNode<IntPtrT> phi_bb232_26;
  TNode<IntPtrT> phi_bb232_27;
  TNode<IntPtrT> phi_bb232_28;
  TNode<IntPtrT> phi_bb232_29;
  TNode<IntPtrT> phi_bb232_32;
  TNode<BoolT> phi_bb232_33;
  TNode<IntPtrT> phi_bb232_35;
  TNode<IntPtrT> phi_bb232_36;
  TNode<BoolT> phi_bb232_37;
  TNode<IntPtrT> phi_bb232_46;
  TNode<BoolT> phi_bb232_48;
  if (block232.is_used()) {
    ca_.Bind(&block232, &phi_bb232_20, &phi_bb232_25, &phi_bb232_26, &phi_bb232_27, &phi_bb232_28, &phi_bb232_29, &phi_bb232_32, &phi_bb232_33, &phi_bb232_35, &phi_bb232_36, &phi_bb232_37, &phi_bb232_46, &phi_bb232_48);
    ca_.Branch(phi_bb232_48, &block354, std::vector<compiler::Node*>{phi_bb232_20, phi_bb232_25, phi_bb232_26, phi_bb232_27, phi_bb232_28, phi_bb232_29, phi_bb232_32, phi_bb232_33, phi_bb232_35, phi_bb232_36, phi_bb232_37, phi_bb232_46, phi_bb232_48}, &block355, std::vector<compiler::Node*>{phi_bb232_20, phi_bb232_25, phi_bb232_26, phi_bb232_27, phi_bb232_28, phi_bb232_29, phi_bb232_32, phi_bb232_33, phi_bb232_35, phi_bb232_36, phi_bb232_37, phi_bb232_46, tmp485, phi_bb232_48});
  }

  TNode<IntPtrT> phi_bb354_20;
  TNode<IntPtrT> phi_bb354_25;
  TNode<IntPtrT> phi_bb354_26;
  TNode<IntPtrT> phi_bb354_27;
  TNode<IntPtrT> phi_bb354_28;
  TNode<IntPtrT> phi_bb354_29;
  TNode<IntPtrT> phi_bb354_32;
  TNode<BoolT> phi_bb354_33;
  TNode<IntPtrT> phi_bb354_35;
  TNode<IntPtrT> phi_bb354_36;
  TNode<BoolT> phi_bb354_37;
  TNode<IntPtrT> phi_bb354_46;
  TNode<BoolT> phi_bb354_48;
  TNode<BoolT> tmp739;
  if (block354.is_used()) {
    ca_.Bind(&block354, &phi_bb354_20, &phi_bb354_25, &phi_bb354_26, &phi_bb354_27, &phi_bb354_28, &phi_bb354_29, &phi_bb354_32, &phi_bb354_33, &phi_bb354_35, &phi_bb354_36, &phi_bb354_37, &phi_bb354_46, &phi_bb354_48);
    tmp739 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb354_33});
    ca_.Branch(tmp739, &block357, std::vector<compiler::Node*>{phi_bb354_20, phi_bb354_25, phi_bb354_26, phi_bb354_27, phi_bb354_28, phi_bb354_29, phi_bb354_32, phi_bb354_33, phi_bb354_35, phi_bb354_36, phi_bb354_37, phi_bb354_46, phi_bb354_48}, &block358, std::vector<compiler::Node*>{phi_bb354_20, phi_bb354_25, phi_bb354_26, phi_bb354_27, phi_bb354_28, phi_bb354_29, phi_bb354_32, phi_bb354_33, phi_bb354_35, phi_bb354_36, phi_bb354_37, phi_bb354_46, phi_bb354_48});
  }

  TNode<IntPtrT> phi_bb357_20;
  TNode<IntPtrT> phi_bb357_25;
  TNode<IntPtrT> phi_bb357_26;
  TNode<IntPtrT> phi_bb357_27;
  TNode<IntPtrT> phi_bb357_28;
  TNode<IntPtrT> phi_bb357_29;
  TNode<IntPtrT> phi_bb357_32;
  TNode<BoolT> phi_bb357_33;
  TNode<IntPtrT> phi_bb357_35;
  TNode<IntPtrT> phi_bb357_36;
  TNode<BoolT> phi_bb357_37;
  TNode<IntPtrT> phi_bb357_46;
  TNode<BoolT> phi_bb357_48;
  TNode<IntPtrT> tmp740;
  if (block357.is_used()) {
    ca_.Bind(&block357, &phi_bb357_20, &phi_bb357_25, &phi_bb357_26, &phi_bb357_27, &phi_bb357_28, &phi_bb357_29, &phi_bb357_32, &phi_bb357_33, &phi_bb357_35, &phi_bb357_36, &phi_bb357_37, &phi_bb357_46, &phi_bb357_48);
    tmp740 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block358, phi_bb357_20, phi_bb357_25, phi_bb357_26, phi_bb357_27, phi_bb357_28, phi_bb357_29, tmp740, phi_bb357_33, phi_bb357_35, phi_bb357_36, phi_bb357_37, phi_bb357_46, phi_bb357_48);
  }

  TNode<IntPtrT> phi_bb358_20;
  TNode<IntPtrT> phi_bb358_25;
  TNode<IntPtrT> phi_bb358_26;
  TNode<IntPtrT> phi_bb358_27;
  TNode<IntPtrT> phi_bb358_28;
  TNode<IntPtrT> phi_bb358_29;
  TNode<IntPtrT> phi_bb358_32;
  TNode<BoolT> phi_bb358_33;
  TNode<IntPtrT> phi_bb358_35;
  TNode<IntPtrT> phi_bb358_36;
  TNode<BoolT> phi_bb358_37;
  TNode<IntPtrT> phi_bb358_46;
  TNode<BoolT> phi_bb358_48;
  TNode<IntPtrT> tmp741;
  TNode<IntPtrT> tmp742;
  TNode<IntPtrT> tmp743;
  if (block358.is_used()) {
    ca_.Bind(&block358, &phi_bb358_20, &phi_bb358_25, &phi_bb358_26, &phi_bb358_27, &phi_bb358_28, &phi_bb358_29, &phi_bb358_32, &phi_bb358_33, &phi_bb358_35, &phi_bb358_36, &phi_bb358_37, &phi_bb358_46, &phi_bb358_48);
    tmp741 = TimesSizeOf_WasmCodePointer_0(state_, TNode<IntPtrT>{tmp56});
    tmp742 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp55}, TNode<IntPtrT>{tmp741});
    tmp743 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block362, tmp743, phi_bb358_25, phi_bb358_26, phi_bb358_27, phi_bb358_28, phi_bb358_29, phi_bb358_32, phi_bb358_33, phi_bb358_35, phi_bb358_36, phi_bb358_37, tmp55, phi_bb358_48);
  }

  TNode<IntPtrT> phi_bb362_20;
  TNode<IntPtrT> phi_bb362_25;
  TNode<IntPtrT> phi_bb362_26;
  TNode<IntPtrT> phi_bb362_27;
  TNode<IntPtrT> phi_bb362_28;
  TNode<IntPtrT> phi_bb362_29;
  TNode<IntPtrT> phi_bb362_32;
  TNode<BoolT> phi_bb362_33;
  TNode<IntPtrT> phi_bb362_35;
  TNode<IntPtrT> phi_bb362_36;
  TNode<BoolT> phi_bb362_37;
  TNode<IntPtrT> phi_bb362_46;
  TNode<BoolT> phi_bb362_48;
  TNode<BoolT> tmp744;
  TNode<BoolT> tmp745;
  if (block362.is_used()) {
    ca_.Bind(&block362, &phi_bb362_20, &phi_bb362_25, &phi_bb362_26, &phi_bb362_27, &phi_bb362_28, &phi_bb362_29, &phi_bb362_32, &phi_bb362_33, &phi_bb362_35, &phi_bb362_36, &phi_bb362_37, &phi_bb362_46, &phi_bb362_48);
    tmp744 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb362_46}, TNode<IntPtrT>{tmp742});
    tmp745 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp744});
    ca_.Branch(tmp745, &block360, std::vector<compiler::Node*>{phi_bb362_20, phi_bb362_25, phi_bb362_26, phi_bb362_27, phi_bb362_28, phi_bb362_29, phi_bb362_32, phi_bb362_33, phi_bb362_35, phi_bb362_36, phi_bb362_37, phi_bb362_46, phi_bb362_48}, &block361, std::vector<compiler::Node*>{phi_bb362_20, phi_bb362_25, phi_bb362_26, phi_bb362_27, phi_bb362_28, phi_bb362_29, phi_bb362_32, phi_bb362_33, phi_bb362_35, phi_bb362_36, phi_bb362_37, phi_bb362_46, phi_bb362_48});
  }

  TNode<IntPtrT> phi_bb360_20;
  TNode<IntPtrT> phi_bb360_25;
  TNode<IntPtrT> phi_bb360_26;
  TNode<IntPtrT> phi_bb360_27;
  TNode<IntPtrT> phi_bb360_28;
  TNode<IntPtrT> phi_bb360_29;
  TNode<IntPtrT> phi_bb360_32;
  TNode<BoolT> phi_bb360_33;
  TNode<IntPtrT> phi_bb360_35;
  TNode<IntPtrT> phi_bb360_36;
  TNode<BoolT> phi_bb360_37;
  TNode<IntPtrT> phi_bb360_46;
  TNode<BoolT> phi_bb360_48;
  TNode<Union<HeapObject, TaggedIndex>> tmp746;
  TNode<IntPtrT> tmp747;
  TNode<IntPtrT> tmp748;
  TNode<IntPtrT> tmp749;
  TNode<Uint32T> tmp750;
  TNode<Uint32T> tmp751;
  TNode<Uint32T> tmp752;
  TNode<Uint32T> tmp753;
  TNode<BoolT> tmp754;
  if (block360.is_used()) {
    ca_.Bind(&block360, &phi_bb360_20, &phi_bb360_25, &phi_bb360_26, &phi_bb360_27, &phi_bb360_28, &phi_bb360_29, &phi_bb360_32, &phi_bb360_33, &phi_bb360_35, &phi_bb360_36, &phi_bb360_37, &phi_bb360_46, &phi_bb360_48);
    std::tie(tmp746, tmp747) = NewReference_WasmCodePointer_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp54}, TNode<IntPtrT>{phi_bb360_46}).Flatten();
    tmp748 = FromConstexpr_intptr_constexpr_int31_0(state_, kInt32Size);
    tmp749 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb360_46}, TNode<IntPtrT>{tmp748});
    tmp750 = CodeStubAssembler(state_).LoadReference<Uint32T>(CodeStubAssembler::Reference{tmp746, tmp747});
    tmp751 = FromConstexpr_WasmCodePointer_constexpr_WasmCodePointer_0(state_, wasm::ValueType::kIsRefBit);
    tmp752 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp750}, TNode<Uint32T>{tmp751});
    tmp753 = FromConstexpr_WasmCodePointer_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp754 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp752}, TNode<Uint32T>{tmp753});
    ca_.Branch(tmp754, &block371, std::vector<compiler::Node*>{phi_bb360_20, phi_bb360_25, phi_bb360_26, phi_bb360_27, phi_bb360_28, phi_bb360_29, phi_bb360_32, phi_bb360_33, phi_bb360_35, phi_bb360_36, phi_bb360_37, phi_bb360_48}, &block372, std::vector<compiler::Node*>{phi_bb360_20, phi_bb360_25, phi_bb360_26, phi_bb360_27, phi_bb360_28, phi_bb360_29, phi_bb360_32, phi_bb360_33, phi_bb360_35, phi_bb360_36, phi_bb360_37, phi_bb360_48});
  }

  TNode<IntPtrT> phi_bb371_20;
  TNode<IntPtrT> phi_bb371_25;
  TNode<IntPtrT> phi_bb371_26;
  TNode<IntPtrT> phi_bb371_27;
  TNode<IntPtrT> phi_bb371_28;
  TNode<IntPtrT> phi_bb371_29;
  TNode<IntPtrT> phi_bb371_32;
  TNode<BoolT> phi_bb371_33;
  TNode<IntPtrT> phi_bb371_35;
  TNode<IntPtrT> phi_bb371_36;
  TNode<BoolT> phi_bb371_37;
  TNode<BoolT> phi_bb371_48;
  TNode<IntPtrT> tmp755;
  TNode<IntPtrT> tmp756;
  TNode<IntPtrT> tmp757;
  TNode<BoolT> tmp758;
  if (block371.is_used()) {
    ca_.Bind(&block371, &phi_bb371_20, &phi_bb371_25, &phi_bb371_26, &phi_bb371_27, &phi_bb371_28, &phi_bb371_29, &phi_bb371_32, &phi_bb371_33, &phi_bb371_35, &phi_bb371_36, &phi_bb371_37, &phi_bb371_48);
    tmp755 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp756 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb371_25}, TNode<IntPtrT>{tmp755});
    tmp757 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp758 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb371_25}, TNode<IntPtrT>{tmp757});
    ca_.Branch(tmp758, &block374, std::vector<compiler::Node*>{phi_bb371_20, phi_bb371_26, phi_bb371_27, phi_bb371_28, phi_bb371_29, phi_bb371_32, phi_bb371_33, phi_bb371_35, phi_bb371_36, phi_bb371_37, phi_bb371_48}, &block375, std::vector<compiler::Node*>{phi_bb371_20, phi_bb371_26, phi_bb371_27, phi_bb371_28, phi_bb371_29, phi_bb371_32, phi_bb371_33, phi_bb371_35, phi_bb371_36, phi_bb371_37, phi_bb371_48});
  }

  TNode<IntPtrT> phi_bb374_20;
  TNode<IntPtrT> phi_bb374_26;
  TNode<IntPtrT> phi_bb374_27;
  TNode<IntPtrT> phi_bb374_28;
  TNode<IntPtrT> phi_bb374_29;
  TNode<IntPtrT> phi_bb374_32;
  TNode<BoolT> phi_bb374_33;
  TNode<IntPtrT> phi_bb374_35;
  TNode<IntPtrT> phi_bb374_36;
  TNode<BoolT> phi_bb374_37;
  TNode<BoolT> phi_bb374_48;
  TNode<Union<HeapObject, TaggedIndex>> tmp759;
  TNode<IntPtrT> tmp760;
  TNode<IntPtrT> tmp761;
  TNode<IntPtrT> tmp762;
  if (block374.is_used()) {
    ca_.Bind(&block374, &phi_bb374_20, &phi_bb374_26, &phi_bb374_27, &phi_bb374_28, &phi_bb374_29, &phi_bb374_32, &phi_bb374_33, &phi_bb374_35, &phi_bb374_36, &phi_bb374_37, &phi_bb374_48);
    std::tie(tmp759, tmp760) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb374_27}).Flatten();
    tmp761 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp762 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb374_27}, TNode<IntPtrT>{tmp761});
    ca_.Goto(&block373, phi_bb374_20, phi_bb374_26, tmp762, phi_bb374_28, phi_bb374_29, phi_bb374_32, phi_bb374_33, phi_bb374_35, phi_bb374_36, phi_bb374_37, phi_bb374_48, tmp759, tmp760);
  }

  TNode<IntPtrT> phi_bb375_20;
  TNode<IntPtrT> phi_bb375_26;
  TNode<IntPtrT> phi_bb375_27;
  TNode<IntPtrT> phi_bb375_28;
  TNode<IntPtrT> phi_bb375_29;
  TNode<IntPtrT> phi_bb375_32;
  TNode<BoolT> phi_bb375_33;
  TNode<IntPtrT> phi_bb375_35;
  TNode<IntPtrT> phi_bb375_36;
  TNode<BoolT> phi_bb375_37;
  TNode<BoolT> phi_bb375_48;
  if (block375.is_used()) {
    ca_.Bind(&block375, &phi_bb375_20, &phi_bb375_26, &phi_bb375_27, &phi_bb375_28, &phi_bb375_29, &phi_bb375_32, &phi_bb375_33, &phi_bb375_35, &phi_bb375_36, &phi_bb375_37, &phi_bb375_48);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block377, phi_bb375_20, phi_bb375_26, phi_bb375_27, phi_bb375_28, phi_bb375_29, phi_bb375_32, phi_bb375_33, phi_bb375_35, phi_bb375_36, phi_bb375_37, phi_bb375_48);
    } else {
      ca_.Goto(&block378, phi_bb375_20, phi_bb375_26, phi_bb375_27, phi_bb375_28, phi_bb375_29, phi_bb375_32, phi_bb375_33, phi_bb375_35, phi_bb375_36, phi_bb375_37, phi_bb375_48);
    }
  }

  TNode<IntPtrT> phi_bb377_20;
  TNode<IntPtrT> phi_bb377_26;
  TNode<IntPtrT> phi_bb377_27;
  TNode<IntPtrT> phi_bb377_28;
  TNode<IntPtrT> phi_bb377_29;
  TNode<IntPtrT> phi_bb377_32;
  TNode<BoolT> phi_bb377_33;
  TNode<IntPtrT> phi_bb377_35;
  TNode<IntPtrT> phi_bb377_36;
  TNode<BoolT> phi_bb377_37;
  TNode<BoolT> phi_bb377_48;
  TNode<Union<HeapObject, TaggedIndex>> tmp763;
  TNode<IntPtrT> tmp764;
  TNode<IntPtrT> tmp765;
  TNode<IntPtrT> tmp766;
  if (block377.is_used()) {
    ca_.Bind(&block377, &phi_bb377_20, &phi_bb377_26, &phi_bb377_27, &phi_bb377_28, &phi_bb377_29, &phi_bb377_32, &phi_bb377_33, &phi_bb377_35, &phi_bb377_36, &phi_bb377_37, &phi_bb377_48);
    std::tie(tmp763, tmp764) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb377_29}).Flatten();
    tmp765 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp766 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb377_29}, TNode<IntPtrT>{tmp765});
    ca_.Goto(&block376, phi_bb377_20, phi_bb377_26, phi_bb377_27, phi_bb377_28, tmp766, phi_bb377_32, phi_bb377_33, phi_bb377_35, phi_bb377_36, phi_bb377_37, phi_bb377_48, tmp763, tmp764);
  }

  TNode<IntPtrT> phi_bb378_20;
  TNode<IntPtrT> phi_bb378_26;
  TNode<IntPtrT> phi_bb378_27;
  TNode<IntPtrT> phi_bb378_28;
  TNode<IntPtrT> phi_bb378_29;
  TNode<IntPtrT> phi_bb378_32;
  TNode<BoolT> phi_bb378_33;
  TNode<IntPtrT> phi_bb378_35;
  TNode<IntPtrT> phi_bb378_36;
  TNode<BoolT> phi_bb378_37;
  TNode<BoolT> phi_bb378_48;
  TNode<IntPtrT> tmp767;
  TNode<BoolT> tmp768;
  if (block378.is_used()) {
    ca_.Bind(&block378, &phi_bb378_20, &phi_bb378_26, &phi_bb378_27, &phi_bb378_28, &phi_bb378_29, &phi_bb378_32, &phi_bb378_33, &phi_bb378_35, &phi_bb378_36, &phi_bb378_37, &phi_bb378_48);
    tmp767 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp768 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb378_32}, TNode<IntPtrT>{tmp767});
    ca_.Branch(tmp768, &block380, std::vector<compiler::Node*>{phi_bb378_20, phi_bb378_26, phi_bb378_27, phi_bb378_28, phi_bb378_29, phi_bb378_32, phi_bb378_33, phi_bb378_35, phi_bb378_36, phi_bb378_37, phi_bb378_48}, &block381, std::vector<compiler::Node*>{phi_bb378_20, phi_bb378_26, phi_bb378_27, phi_bb378_28, phi_bb378_29, phi_bb378_32, phi_bb378_33, phi_bb378_35, phi_bb378_36, phi_bb378_37, phi_bb378_48});
  }

  TNode<IntPtrT> phi_bb380_20;
  TNode<IntPtrT> phi_bb380_26;
  TNode<IntPtrT> phi_bb380_27;
  TNode<IntPtrT> phi_bb380_28;
  TNode<IntPtrT> phi_bb380_29;
  TNode<IntPtrT> phi_bb380_32;
  TNode<BoolT> phi_bb380_33;
  TNode<IntPtrT> phi_bb380_35;
  TNode<IntPtrT> phi_bb380_36;
  TNode<BoolT> phi_bb380_37;
  TNode<BoolT> phi_bb380_48;
  TNode<Union<HeapObject, TaggedIndex>> tmp769;
  TNode<IntPtrT> tmp770;
  TNode<IntPtrT> tmp771;
  TNode<BoolT> tmp772;
  if (block380.is_used()) {
    ca_.Bind(&block380, &phi_bb380_20, &phi_bb380_26, &phi_bb380_27, &phi_bb380_28, &phi_bb380_29, &phi_bb380_32, &phi_bb380_33, &phi_bb380_35, &phi_bb380_36, &phi_bb380_37, &phi_bb380_48);
    std::tie(tmp769, tmp770) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb380_32}).Flatten();
    tmp771 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp772 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block376, phi_bb380_20, phi_bb380_26, phi_bb380_27, phi_bb380_28, phi_bb380_29, tmp771, tmp772, phi_bb380_35, phi_bb380_36, phi_bb380_37, phi_bb380_48, tmp769, tmp770);
  }

  TNode<IntPtrT> phi_bb381_20;
  TNode<IntPtrT> phi_bb381_26;
  TNode<IntPtrT> phi_bb381_27;
  TNode<IntPtrT> phi_bb381_28;
  TNode<IntPtrT> phi_bb381_29;
  TNode<IntPtrT> phi_bb381_32;
  TNode<BoolT> phi_bb381_33;
  TNode<IntPtrT> phi_bb381_35;
  TNode<IntPtrT> phi_bb381_36;
  TNode<BoolT> phi_bb381_37;
  TNode<BoolT> phi_bb381_48;
  TNode<Union<HeapObject, TaggedIndex>> tmp773;
  TNode<IntPtrT> tmp774;
  TNode<IntPtrT> tmp775;
  TNode<IntPtrT> tmp776;
  TNode<IntPtrT> tmp777;
  TNode<IntPtrT> tmp778;
  TNode<BoolT> tmp779;
  if (block381.is_used()) {
    ca_.Bind(&block381, &phi_bb381_20, &phi_bb381_26, &phi_bb381_27, &phi_bb381_28, &phi_bb381_29, &phi_bb381_32, &phi_bb381_33, &phi_bb381_35, &phi_bb381_36, &phi_bb381_37, &phi_bb381_48);
    std::tie(tmp773, tmp774) = NewReference_intptr_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp474}, TNode<IntPtrT>{phi_bb381_29}).Flatten();
    tmp775 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp776 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb381_29}, TNode<IntPtrT>{tmp775});
    tmp777 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp778 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp776}, TNode<IntPtrT>{tmp777});
    tmp779 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block376, phi_bb381_20, phi_bb381_26, phi_bb381_27, phi_bb381_28, tmp778, tmp776, tmp779, phi_bb381_35, phi_bb381_36, phi_bb381_37, phi_bb381_48, tmp773, tmp774);
  }

  TNode<IntPtrT> phi_bb376_20;
  TNode<IntPtrT> phi_bb376_26;
  TNode<IntPtrT> phi_bb376_27;
  TNode<IntPtrT> phi_bb376_28;
  TNode<IntPtrT> phi_bb376_29;
  TNode<IntPtrT> phi_bb376_32;
  TNode<BoolT> phi_bb376_33;
  TNode<IntPtrT> phi_bb376_35;
  TNode<IntPtrT> phi_bb376_36;
  TNode<BoolT> phi_bb376_37;
  TNode<BoolT> phi_bb376_48;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb376_50;
  TNode<IntPtrT> phi_bb376_51;
  if (block376.is_used()) {
    ca_.Bind(&block376, &phi_bb376_20, &phi_bb376_26, &phi_bb376_27, &phi_bb376_28, &phi_bb376_29, &phi_bb376_32, &phi_bb376_33, &phi_bb376_35, &phi_bb376_36, &phi_bb376_37, &phi_bb376_48, &phi_bb376_50, &phi_bb376_51);
    ca_.Goto(&block373, phi_bb376_20, phi_bb376_26, phi_bb376_27, phi_bb376_28, phi_bb376_29, phi_bb376_32, phi_bb376_33, phi_bb376_35, phi_bb376_36, phi_bb376_37, phi_bb376_48, phi_bb376_50, phi_bb376_51);
  }

  TNode<IntPtrT> phi_bb373_20;
  TNode<IntPtrT> phi_bb373_26;
  TNode<IntPtrT> phi_bb373_27;
  TNode<IntPtrT> phi_bb373_28;
  TNode<IntPtrT> phi_bb373_29;
  TNode<IntPtrT> phi_bb373_32;
  TNode<BoolT> phi_bb373_33;
  TNode<IntPtrT> phi_bb373_35;
  TNode<IntPtrT> phi_bb373_36;
  TNode<BoolT> phi_bb373_37;
  TNode<BoolT> phi_bb373_48;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb373_50;
  TNode<IntPtrT> phi_bb373_51;
  TNode<Union<HeapObject, TaggedIndex>> tmp780;
  TNode<IntPtrT> tmp781;
  TNode<IntPtrT> tmp782;
  TNode<UintPtrT> tmp783;
  TNode<UintPtrT> tmp784;
  TNode<BoolT> tmp785;
  if (block373.is_used()) {
    ca_.Bind(&block373, &phi_bb373_20, &phi_bb373_26, &phi_bb373_27, &phi_bb373_28, &phi_bb373_29, &phi_bb373_32, &phi_bb373_33, &phi_bb373_35, &phi_bb373_36, &phi_bb373_37, &phi_bb373_48, &phi_bb373_50, &phi_bb373_51);
    std::tie(tmp780, tmp781, tmp782) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{phi_bb224_41}).Flatten();
    tmp783 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb373_20});
    tmp784 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp782});
    tmp785 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp783}, TNode<UintPtrT>{tmp784});
    ca_.Branch(tmp785, &block386, std::vector<compiler::Node*>{phi_bb373_20, phi_bb373_26, phi_bb373_27, phi_bb373_28, phi_bb373_29, phi_bb373_32, phi_bb373_33, phi_bb373_35, phi_bb373_36, phi_bb373_37, phi_bb373_48, phi_bb373_50, phi_bb373_51, phi_bb373_20, phi_bb373_20, phi_bb373_20, phi_bb373_20}, &block387, std::vector<compiler::Node*>{phi_bb373_20, phi_bb373_26, phi_bb373_27, phi_bb373_28, phi_bb373_29, phi_bb373_32, phi_bb373_33, phi_bb373_35, phi_bb373_36, phi_bb373_37, phi_bb373_48, phi_bb373_50, phi_bb373_51, phi_bb373_20, phi_bb373_20, phi_bb373_20, phi_bb373_20});
  }

  TNode<IntPtrT> phi_bb386_20;
  TNode<IntPtrT> phi_bb386_26;
  TNode<IntPtrT> phi_bb386_27;
  TNode<IntPtrT> phi_bb386_28;
  TNode<IntPtrT> phi_bb386_29;
  TNode<IntPtrT> phi_bb386_32;
  TNode<BoolT> phi_bb386_33;
  TNode<IntPtrT> phi_bb386_35;
  TNode<IntPtrT> phi_bb386_36;
  TNode<BoolT> phi_bb386_37;
  TNode<BoolT> phi_bb386_48;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb386_50;
  TNode<IntPtrT> phi_bb386_51;
  TNode<IntPtrT> phi_bb386_56;
  TNode<IntPtrT> phi_bb386_57;
  TNode<IntPtrT> phi_bb386_61;
  TNode<IntPtrT> phi_bb386_62;
  TNode<IntPtrT> tmp786;
  TNode<IntPtrT> tmp787;
  TNode<Union<HeapObject, TaggedIndex>> tmp788;
  TNode<IntPtrT> tmp789;
  TNode<Object> tmp790;
  TNode<IntPtrT> tmp791;
  if (block386.is_used()) {
    ca_.Bind(&block386, &phi_bb386_20, &phi_bb386_26, &phi_bb386_27, &phi_bb386_28, &phi_bb386_29, &phi_bb386_32, &phi_bb386_33, &phi_bb386_35, &phi_bb386_36, &phi_bb386_37, &phi_bb386_48, &phi_bb386_50, &phi_bb386_51, &phi_bb386_56, &phi_bb386_57, &phi_bb386_61, &phi_bb386_62);
    tmp786 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb386_62});
    tmp787 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp781}, TNode<IntPtrT>{tmp786});
    std::tie(tmp788, tmp789) = NewReference_Object_0(state_, TNode<Union<HeapObject, TaggedIndex>>{tmp780}, TNode<IntPtrT>{tmp787}).Flatten();
    tmp790 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp788, tmp789});
    tmp791 = CodeStubAssembler(state_).BitcastTaggedToWord(TNode<Object>{tmp790});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb386_50, phi_bb386_51}, tmp791);
    ca_.Goto(&block372, phi_bb386_20, tmp756, phi_bb386_26, phi_bb386_27, phi_bb386_28, phi_bb386_29, phi_bb386_32, phi_bb386_33, phi_bb386_35, phi_bb386_36, phi_bb386_37, phi_bb386_48);
  }

  TNode<IntPtrT> phi_bb387_20;
  TNode<IntPtrT> phi_bb387_26;
  TNode<IntPtrT> phi_bb387_27;
  TNode<IntPtrT> phi_bb387_28;
  TNode<IntPtrT> phi_bb387_29;
  TNode<IntPtrT> phi_bb387_32;
  TNode<BoolT> phi_bb387_33;
  TNode<IntPtrT> phi_bb387_35;
  TNode<IntPtrT> phi_bb387_36;
  TNode<BoolT> phi_bb387_37;
  TNode<BoolT> phi_bb387_48;
  TNode<Union<HeapObject, TaggedIndex>> phi_bb387_50;
  TNode<IntPtrT> phi_bb387_51;
  TNode<IntPtrT> phi_bb387_56;
  TNode<IntPtrT> phi_bb387_57;
  TNode<IntPtrT> phi_bb387_61;
  TNode<IntPtrT> phi_bb387_62;
  if (block387.is_used()) {
    ca_.Bind(&block387, &phi_bb387_20, &phi_bb387_26, &phi_bb387_27, &phi_bb387_28, &phi_bb387_29, &phi_bb387_32, &phi_bb387_33, &phi_bb387_35, &phi_bb387_36, &phi_bb387_37, &phi_bb387_48, &phi_bb387_50, &phi_bb387_51, &phi_bb387_56, &phi_bb387_57, &phi_bb387_61, &phi_bb387_62);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb372_20;
  TNode<IntPtrT> phi_bb372_25;
  TNode<IntPtrT> phi_bb372_26;
  TNode<IntPtrT> phi_bb372_27;
  TNode<IntPtrT> phi_bb372_28;
  TNode<IntPtrT> phi_bb372_29;
  TNode<IntPtrT> phi_bb372_32;
  TNode<BoolT> phi_bb372_33;
  TNode<IntPtrT> phi_bb372_35;
  TNode<IntPtrT> phi_bb372_36;
  TNode<BoolT> phi_bb372_37;
  TNode<BoolT> phi_bb372_48;
  TNode<IntPtrT> tmp792;
  TNode<IntPtrT> tmp793;
  if (block372.is_used()) {
    ca_.Bind(&block372, &phi_bb372_20, &phi_bb372_25, &phi_bb372_26, &phi_bb372_27, &phi_bb372_28, &phi_bb372_29, &phi_bb372_32, &phi_bb372_33, &phi_bb372_35, &phi_bb372_36, &phi_bb372_37, &phi_bb372_48);
    tmp792 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp793 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb372_20}, TNode<IntPtrT>{tmp792});
    ca_.Goto(&block362, tmp793, phi_bb372_25, phi_bb372_26, phi_bb372_27, phi_bb372_28, phi_bb372_29, phi_bb372_32, phi_bb372_33, phi_bb372_35, phi_bb372_36, phi_bb372_37, tmp749, phi_bb372_48);
  }

  TNode<IntPtrT> phi_bb361_20;
  TNode<IntPtrT> phi_bb361_25;
  TNode<IntPtrT> phi_bb361_26;
  TNode<IntPtrT> phi_bb361_27;
  TNode<IntPtrT> phi_bb361_28;
  TNode<IntPtrT> phi_bb361_29;
  TNode<IntPtrT> phi_bb361_32;
  TNode<BoolT> phi_bb361_33;
  TNode<IntPtrT> phi_bb361_35;
  TNode<IntPtrT> phi_bb361_36;
  TNode<BoolT> phi_bb361_37;
  TNode<IntPtrT> phi_bb361_46;
  TNode<BoolT> phi_bb361_48;
  if (block361.is_used()) {
    ca_.Bind(&block361, &phi_bb361_20, &phi_bb361_25, &phi_bb361_26, &phi_bb361_27, &phi_bb361_28, &phi_bb361_29, &phi_bb361_32, &phi_bb361_33, &phi_bb361_35, &phi_bb361_36, &phi_bb361_37, &phi_bb361_46, &phi_bb361_48);
    ca_.Goto(&block355, phi_bb361_20, phi_bb361_25, phi_bb361_26, phi_bb361_27, phi_bb361_28, phi_bb361_29, phi_bb361_32, phi_bb361_33, phi_bb361_35, phi_bb361_36, phi_bb361_37, phi_bb361_46, tmp742, phi_bb361_48);
  }

  TNode<IntPtrT> phi_bb355_20;
  TNode<IntPtrT> phi_bb355_25;
  TNode<IntPtrT> phi_bb355_26;
  TNode<IntPtrT> phi_bb355_27;
  TNode<IntPtrT> phi_bb355_28;
  TNode<IntPtrT> phi_bb355_29;
  TNode<IntPtrT> phi_bb355_32;
  TNode<BoolT> phi_bb355_33;
  TNode<IntPtrT> phi_bb355_35;
  TNode<IntPtrT> phi_bb355_36;
  TNode<BoolT> phi_bb355_37;
  TNode<IntPtrT> phi_bb355_46;
  TNode<IntPtrT> phi_bb355_47;
  TNode<BoolT> phi_bb355_48;
  TNode<IntPtrT> tmp794;
  TNode<IntPtrT> tmp795;
  TNode<IntPtrT> tmp796;
  TNode<IntPtrT> tmp797;
  TNode<IntPtrT> tmp798;
  TNode<IntPtrT> tmp799;
  TNode<Int32T> tmp800;
  TNode<IntPtrT> tmp801;
  TNode<Union<HeapObject, TaggedIndex>> tmp802;
  TNode<IntPtrT> tmp803;
  TNode<IntPtrT> tmp804;
  TNode<IntPtrT> tmp805;
  TNode<Union<HeapObject, TaggedIndex>> tmp806;
  TNode<IntPtrT> tmp807;
  TNode<IntPtrT> tmp808;
  TNode<IntPtrT> tmp809;
  TNode<Union<HeapObject, TaggedIndex>> tmp810;
  TNode<IntPtrT> tmp811;
  TNode<Float64T> tmp812;
  TNode<IntPtrT> tmp813;
  TNode<Union<HeapObject, TaggedIndex>> tmp814;
  TNode<IntPtrT> tmp815;
  TNode<Float64T> tmp816;
  if (block355.is_used()) {
    ca_.Bind(&block355, &phi_bb355_20, &phi_bb355_25, &phi_bb355_26, &phi_bb355_27, &phi_bb355_28, &phi_bb355_29, &phi_bb355_32, &phi_bb355_33, &phi_bb355_35, &phi_bb355_36, &phi_bb355_37, &phi_bb355_46, &phi_bb355_47, &phi_bb355_48);
    tmp794 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp473});
    tmp795 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp84});
    tmp796 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp794}, TNode<IntPtrT>{tmp795});
    tmp797 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp798 = CodeStubAssembler(state_).IntPtrDiv(TNode<IntPtrT>{tmp796}, TNode<IntPtrT>{tmp797});
    tmp799 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp798}, TNode<IntPtrT>{tmp11});
    tmp800 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    ModifyThreadInWasmFlag_0(state_, TNode<Int32T>{tmp800});
    tmp801 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp802, tmp803) = GetRefAt_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp460}, TNode<IntPtrT>{tmp801}).Flatten();
    tmp804 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp802, tmp803});
    tmp805 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    std::tie(tmp806, tmp807) = GetRefAt_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp460}, TNode<IntPtrT>{tmp805}).Flatten();
    tmp808 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp806, tmp807});
    tmp809 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp810, tmp811) = GetRefAt_float64_RawPtr_float64_0(state_, TNode<RawPtrT>{tmp462}, TNode<IntPtrT>{tmp809}).Flatten();
    tmp812 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp810, tmp811});
    tmp813 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    std::tie(tmp814, tmp815) = GetRefAt_float64_RawPtr_float64_0(state_, TNode<RawPtrT>{tmp462}, TNode<IntPtrT>{tmp813}).Flatten();
    tmp816 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp814, tmp815});
    CodeStubAssembler(state_).SwitchFromTheCentralStack(TNode<RawPtrT>{tmp0});
    ca_.Goto(&block390);
  }

    ca_.Bind(&block390);
  return TorqueStructWasmToJSResult{TNode<IntPtrT>{tmp799}, TNode<IntPtrT>{tmp804}, TNode<IntPtrT>{tmp808}, TNode<Float64T>{tmp812}, TNode<Float64T>{tmp816}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=53&c=10
TNode<BoolT> Is_WasmImportData_WasmImportData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<WasmImportData> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmImportData> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_WasmImportData_0(state_, TNode<HeapObject>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=58&c=4
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Union<HeapObject, TaggedIndex>> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_RawPtr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_RawPtr_0{TNode<Union<HeapObject, TaggedIndex>>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=187&c=4
TorqueStructReference_intptr_0 GetRefAt_intptr_RawPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Union<HeapObject, TaggedIndex>> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_intptr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_intptr_0{TNode<Union<HeapObject, TaggedIndex>>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=307&c=15
TorqueStructReference_float64_0 GetRefAt_float64_RawPtr_float64_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Union<HeapObject, TaggedIndex>> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_float64_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_float64_0{TNode<Union<HeapObject, TaggedIndex>>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
