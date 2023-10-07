#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
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
#include "src/objects/js-segment-iterator.h"
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
#include "src/wasm/wasm-linkage.h"
// Required Builtins:
#include "torque-generated/src/builtins/js-to-wasm-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/builtins-bigint-tq-csa.h"
#include "torque-generated/src/builtins/builtins-string-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"
#include "torque-generated/src/objects/fixed-array-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/src/builtins/js-to-wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-tq-csa.h"
#include "torque-generated/src/builtins/wasm-to-js-tq-csa.h"
#include "torque-generated/src/wasm/wasm-objects-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=61&c=1
TNode<Int32T> FromConstexpr_ValueKind_constexpr_kRef_0(compiler::CodeAssemblerState* state_, wasm::ValueKind p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=61&c=1
TNode<Int32T> FromConstexpr_ValueKind_constexpr_kRefNull_0(compiler::CodeAssemblerState* state_, wasm::ValueKind p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kExtern_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNoExtern_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kString_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kEq_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kI31_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kStruct_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kArray_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kAny_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNone_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=67&c=1
TNode<Int32T> FromConstexpr_HeapType_constexpr_kNoFunc_0(compiler::CodeAssemblerState* state_, wasm::HeapType::Representation p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Int32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Int32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Int32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=129&c=1
TNode<Uint32T> Bitcast_uint32_float32_0(compiler::CodeAssemblerState* state_, TNode<Float32T> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).BitcastFloat32ToInt32(TNode<Float32T>{p_v});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=138&c=1
TNode<IntPtrT> TruncateBigIntToI64_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_input) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BigInt> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{p_context}, TNode<Object>{p_input});
    tmp1 = BigIntBuiltinsAssembler(state_).ReadBigIntLength(TNode<BigInt>{tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2});
    ca_.Branch(tmp3, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp4;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block1, tmp4);
  }

  TNode<IntPtrT> tmp5;
  TNode<UintPtrT> tmp6;
  TNode<Uint32T> tmp7;
  TNode<Uint32T> tmp8;
  TNode<BoolT> tmp9;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp5 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp6 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{tmp0}, TNode<IntPtrT>{tmp5});
    tmp7 = BigIntBuiltinsAssembler(state_).ReadBigIntSign(TNode<BigInt>{tmp0});
    tmp8 = kPositiveSign_0(state_);
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp10 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp6});
    ca_.Goto(&block1, tmp10);
  }

  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp11 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp6});
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp13 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp12}, TNode<IntPtrT>{tmp11});
    ca_.Goto(&block1, tmp13);
  }

  TNode<IntPtrT> phi_bb1_2;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_2);
    ca_.Goto(&block10, phi_bb1_2);
  }

  TNode<IntPtrT> phi_bb10_2;
    ca_.Bind(&block10, &phi_bb10_2);
  return TNode<IntPtrT>{phi_bb10_2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=240&c=1
TorqueStructReturnSlotAllocator_0 NewReturnSlotAllocator_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<BoolT> tmp3;
  TNode<BoolT> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, arraysize(wasm::kGpReturnRegisters));
    tmp1 = FromConstexpr_intptr_constexpr_intptr_0(state_, arraysize(wasm::kFpReturnRegisters));
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp4 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReturnSlotAllocator_0{TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<BoolT>{tmp3}, TNode<BoolT>{tmp4}, TNode<IntPtrT>{tmp2}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=362&c=1
TorqueStructLocationAllocator_0 LocationAllocatorForParams_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_paramBuffer) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).UniqueIntPtrConstant(arraysize(wasm::kGpParamRegisters) - 1);
    tmp1 = CodeStubAssembler(state_).UniqueIntPtrConstant(arraysize(wasm::kFpParamRegisters));
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp3 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp2});
    if (((CodeStubAssembler(state_).ConstexprBoolNot((CodeStubAssembler(state_).Is64()))))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp5 = CodeStubAssembler(state_).WordAnd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp5});
    ca_.Goto(&block4, tmp6);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block4, tmp3);
  }

  TNode<IntPtrT> phi_bb4_6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<BoolT> tmp12;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_6);
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb4_6}, TNode<IntPtrT>{p_paramBuffer.offset});
    tmp8 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp9 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp8});
    tmp10 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp9});
    tmp11 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp12 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block9);
  }

    ca_.Bind(&block9);
  return TorqueStructLocationAllocator_0{TNode<Object>{p_paramBuffer.object}, TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{p_paramBuffer.offset}, TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11}, TNode<BoolT>{tmp12}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=383&c=1
TorqueStructLocationAllocator_0 LocationAllocatorForReturns_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_gpRegs, TNode<RawPtrT> p_fpRegs, TNode<RawPtrT> p_stack) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<TaggedIndex> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<IntPtrT> tmp12;
  TNode<BoolT> tmp13;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kZeroBitPattern_0(state_);
    tmp1 = FromConstexpr_intptr_constexpr_intptr_0(state_, arraysize(wasm::kGpReturnRegisters));
    tmp2 = FromConstexpr_intptr_constexpr_intptr_0(state_, arraysize(wasm::kFpReturnRegisters));
    tmp3 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{p_gpRegs});
    tmp4 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp5 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    tmp6 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{p_fpRegs});
    tmp7 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp7});
    tmp9 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{p_stack});
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp11 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp10});
    tmp12 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructLocationAllocator_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp11}, TNode<IntPtrT>{tmp11}, TNode<IntPtrT>{tmp12}, TNode<BoolT>{tmp13}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=398&c=1
TNode<Object> JSToWasmObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<HeapObject> p_instanceOrUndefined, TNode<Int32T> p_targetType, TNode<Object> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Int32T> tmp3;
  TNode<Int32T> tmp4;
  TNode<Int32T> tmp5;
  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueType::kKindBits);
    tmp1 = CodeStubAssembler(state_).Word32Sar(TNode<Int32T>{p_targetType}, TNode<Int32T>{tmp0});
    tmp2 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmHeapTypeBitsMask);
    tmp3 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2});
    tmp4 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmValueKindBitsMask);
    tmp5 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{p_targetType}, TNode<Int32T>{tmp4});
    tmp6 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kExtern);
    tmp7 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp8;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp8 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block6, tmp8);
  }

  TNode<Int32T> tmp9;
  TNode<BoolT> tmp10;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kNoExtern);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp9});
    ca_.Goto(&block6, tmp10);
  }

  TNode<BoolT> phi_bb6_7;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_7);
    ca_.Branch(phi_bb6_7, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp11;
  TNode<BoolT> tmp12;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp11 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueKind::kRef);
    tmp12 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp11});
    ca_.Branch(tmp12, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<Null> tmp13;
  TNode<BoolT> tmp14;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp13 = Null_0(state_);
    tmp14 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_value}, TNode<HeapObject>{tmp13});
    ca_.Goto(&block11, tmp14);
  }

  TNode<BoolT> tmp15;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp15 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block11, tmp15);
  }

  TNode<BoolT> phi_bb11_7;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_7);
    ca_.Branch(phi_bb11_7, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kWasmTrapJSTypeError);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.Goto(&block1, p_value);
  }

  TNode<Int32T> tmp16;
  TNode<BoolT> tmp17;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp16 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kString);
    tmp17 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp16});
    ca_.Branch(tmp17, &block12, std::vector<compiler::Node*>{}, &block13, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp18;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp18 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{p_value});
    ca_.Branch(tmp18, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kWasmTrapJSTypeError);
  }

  TNode<HeapObject> tmp19;
  TNode<BoolT> tmp20;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp19 = UnsafeCast_HeapObject_0(state_, TNode<Context>{p_context}, TNode<Object>{p_value});
    tmp20 = CodeStubAssembler(state_).IsString(TNode<HeapObject>{tmp19});
    ca_.Branch(tmp20, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.Goto(&block1, p_value);
  }

  TNode<Null> tmp21;
  TNode<BoolT> tmp22;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp21 = Null_0(state_);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_value}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp23;
  TNode<BoolT> tmp24;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp23 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueKind::kRef);
    tmp24 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp23});
    ca_.Branch(tmp24, &block20, std::vector<compiler::Node*>{}, &block21, std::vector<compiler::Node*>{});
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kWasmTrapJSTypeError);
  }

  TNode<WasmNull> tmp25;
  if (block21.is_used()) {
    ca_.Bind(&block21);
    tmp25 = kWasmNull_0(state_);
    ca_.Goto(&block1, tmp25);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kWasmTrapJSTypeError);
  }

  TNode<Smi> tmp26;
  TNode<Object> tmp27;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp26 = Convert_Smi_int32_0(state_, TNode<Int32T>{p_targetType});
    tmp27 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmGenericJSToWasmObject, p_context, p_instanceOrUndefined, p_value, tmp26); 
    ca_.Goto(&block1, tmp27);
  }

  TNode<Object> phi_bb1_4;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_4);
    ca_.Goto(&block23, phi_bb1_4);
  }

  TNode<Object> phi_bb23_4;
    ca_.Bind(&block23, &phi_bb23_4);
  return TNode<Object>{phi_bb23_4};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=430&c=1
void JSToWasmWrapperHelper_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p__receiver, TNode<JSFunction> p_target, TorqueStructArguments p_arguments, bool p_switchStack) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, IntPtrT, IntPtrT> block95(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block103(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block104(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, Object, IntPtrT> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, BoolT, Int32T> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block114(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block118(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block119(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block124(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block129(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block128(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block115(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block130(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block134(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block137(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block138(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block140(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block141(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block133(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block131(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block142(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block152(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block153(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block155(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block156(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block149(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block143(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block157(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block160(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block164(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block165(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block167(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block168(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block170(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block171(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block166(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block163(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block161(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block173(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block174(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block176(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block177(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block179(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block180(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block175(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block172(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block182(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block183(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block185(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block186(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block188(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block189(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT, Object, IntPtrT> block184(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT, Object, IntPtrT> block181(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block162(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block158(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block159(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block132(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block110(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block190(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block193(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block194(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block195(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block199(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block200(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block202(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block203(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block205(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block206(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block201(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object, IntPtrT> block198(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block196(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block197(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block209(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block207(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block213(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block214(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T, BoolT> block215(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block211(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block212(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block217(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block218(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block220(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block221(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block223(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T> block224(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Object, IntPtrT> block219(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Object, IntPtrT> block216(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Int32T, Int32T> block208(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block191(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, IntPtrT> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, IntPtrT> block228(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block229(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block230(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, Object> block231(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T> block232(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, BoolT, Int32T, IntPtrT> block233(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<SharedFunctionInfo> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<WasmExportedFunctionData> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp1 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{p_target, tmp0});
    tmp2 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp3 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = UnsafeCast_WasmExportedFunctionData_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp3});
    if (((CodeStubAssembler(state_).ConstexprBoolNot(p_switchStack)))) {
      ca_.Goto(&block1);
    } else {
      ca_.Goto(&block2);
    }
  }

  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Smi> tmp7;
  TNode<Smi> tmp8;
  TNode<Smi> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<Smi> tmp11;
  TNode<Smi> tmp12;
  TNode<BoolT> tmp13;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp5 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp6 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp6});
    tmp8 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp9 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp7}, TNode<Smi>{tmp8});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp5}, tmp9);
    tmp10 = FromConstexpr_intptr_constexpr_int31_0(state_, 48);
    tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp10});
    tmp12 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp13 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp11}, TNode<Smi>{tmp12});
    ca_.Branch(tmp13, &block4, std::vector<compiler::Node*>{}, &block5, std::vector<compiler::Node*>{});
  }

  TNode<Smi> tmp14;
  TNode<Object> tmp15;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp14 = kNoContext_0(state_);
    tmp15 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmCompileWrapper, tmp14, tmp4); 
    ca_.Goto(&block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block3);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(&block3);
  }

  TNode<RawPtrT> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<Object> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<Int32T> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
  TNode<Int32T> tmp24;
  TNode<IntPtrT> tmp25;
  TNode<Object> tmp26;
  TNode<IntPtrT> tmp27;
  TNode<RawPtrT> tmp28;
  TNode<RawPtrT> tmp29;
  TNode<Int32T> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
  TNode<IntPtrT> tmp34;
  TNode<Undefined> tmp35;
  TNode<IntPtrT> tmp36;
  TNode<BoolT> tmp37;
  TNode<Int32T> tmp38;
  TNode<BoolT> tmp39;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp16 = CodeStubAssembler(state_).LoadWasmExportedFunctionDataSigPtr(TNode<WasmExportedFunctionData>{tmp4});
    tmp17 = FromConstexpr_intptr_constexpr_intptr_0(state_, wasm::FunctionSig::kParameterCountOffset);
    std::tie(tmp18, tmp19) = GetRefAt_int32_RawPtr_0(state_, TNode<RawPtrT>{tmp16}, TNode<IntPtrT>{tmp17}).Flatten();
    tmp20 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp18, tmp19});
    tmp21 = FromConstexpr_intptr_constexpr_intptr_0(state_, wasm::FunctionSig::kReturnCountOffset);
    std::tie(tmp22, tmp23) = GetRefAt_int32_RawPtr_0(state_, TNode<RawPtrT>{tmp16}, TNode<IntPtrT>{tmp21}).Flatten();
    tmp24 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp22, tmp23});
    tmp25 = FromConstexpr_intptr_constexpr_intptr_0(state_, wasm::FunctionSig::kRepsOffset);
    std::tie(tmp26, tmp27) = GetRefAt_RawPtr_RawPtr_0(state_, TNode<RawPtrT>{tmp16}, TNode<IntPtrT>{tmp25}).Flatten();
    tmp28 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp26, tmp27});
    tmp29 = (TNode<RawPtrT>{tmp28});
    tmp30 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp20}, TNode<Int32T>{tmp24});
    tmp31 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp30});
    std::tie(tmp32, tmp33, tmp34) = NewOffHeapConstSlice_int32_0(state_, TNode<RawPtrT>{tmp29}, TNode<IntPtrT>{tmp31}).Flatten();
    tmp35 = Undefined_0(state_);
    tmp36 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp37 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp38 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp39 = CodeStubAssembler(state_).Int32GreaterThan(TNode<Int32T>{tmp24}, TNode<Int32T>{tmp38});
    ca_.Branch(tmp39, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{tmp35, tmp36, tmp37});
  }

  TNode<Smi> tmp40;
  TNode<JSArray> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
  TNode<IntPtrT> tmp46;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp40 = Convert_Smi_int32_0(state_, TNode<Int32T>{tmp24});
    tmp41 = ca_.CallStub<JSArray>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmAllocateJSArray), p_context, tmp40);
    tmp42 = Convert_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp43 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp24});
    compiler::CodeAssemblerLabel label47(&ca_);
    std::tie(tmp44, tmp45, tmp46) = Subslice_int32_0(state_, TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp32}, TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp34}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp42}, TNode<IntPtrT>{tmp43}, &label47).Flatten();
    ca_.Goto(&block10);
    if (label47.is_used()) {
      ca_.Bind(&label47);
      ca_.Goto(&block11);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<IntPtrT> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<BoolT> tmp52;
  TNode<BoolT> tmp53;
  TNode<IntPtrT> tmp54;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp48 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{tmp46});
    tmp49 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{tmp48});
    std::tie(tmp50, tmp51, tmp52, tmp53, tmp54) = NewReturnSlotAllocator_0(state_).Flatten();
    ca_.Goto(&block15, tmp37, tmp45, tmp50, tmp51, tmp52, tmp53, tmp54);
  }

  TNode<BoolT> phi_bb15_17;
  TNode<IntPtrT> phi_bb15_22;
  TNode<IntPtrT> phi_bb15_24;
  TNode<IntPtrT> phi_bb15_25;
  TNode<BoolT> phi_bb15_26;
  TNode<BoolT> phi_bb15_27;
  TNode<IntPtrT> phi_bb15_28;
  TNode<BoolT> tmp55;
  TNode<BoolT> tmp56;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_17, &phi_bb15_22, &phi_bb15_24, &phi_bb15_25, &phi_bb15_26, &phi_bb15_27, &phi_bb15_28);
    tmp55 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{phi_bb15_22}, TNode<IntPtrT>{tmp49});
    tmp56 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp55});
    ca_.Branch(tmp56, &block13, std::vector<compiler::Node*>{phi_bb15_17, phi_bb15_22, phi_bb15_24, phi_bb15_25, phi_bb15_26, phi_bb15_27, phi_bb15_28}, &block14, std::vector<compiler::Node*>{phi_bb15_17, phi_bb15_22, phi_bb15_24, phi_bb15_25, phi_bb15_26, phi_bb15_27, phi_bb15_28});
  }

  TNode<BoolT> phi_bb13_17;
  TNode<IntPtrT> phi_bb13_22;
  TNode<IntPtrT> phi_bb13_24;
  TNode<IntPtrT> phi_bb13_25;
  TNode<BoolT> phi_bb13_26;
  TNode<BoolT> phi_bb13_27;
  TNode<IntPtrT> phi_bb13_28;
  TNode<Object> tmp57;
  TNode<IntPtrT> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<IntPtrT> tmp60;
  TNode<Int32T> tmp61;
  TNode<Int32T> tmp62;
  TNode<BoolT> tmp63;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_17, &phi_bb13_22, &phi_bb13_24, &phi_bb13_25, &phi_bb13_26, &phi_bb13_27, &phi_bb13_28);
    std::tie(tmp57, tmp58) = NewReference_int32_0(state_, TNode<Object>{tmp44}, TNode<IntPtrT>{phi_bb13_22}).Flatten();
    tmp59 = FromConstexpr_intptr_constexpr_int31_0(state_, kInt32Size);
    tmp60 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb13_22}, TNode<IntPtrT>{tmp59});
    tmp61 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp57, tmp58});
    tmp62 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp63 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp61}, TNode<Int32T>{tmp62});
    ca_.Branch(tmp63, &block24, std::vector<compiler::Node*>{phi_bb13_17, phi_bb13_24, phi_bb13_25, phi_bb13_26, phi_bb13_27, phi_bb13_28}, &block25, std::vector<compiler::Node*>{phi_bb13_17, phi_bb13_24, phi_bb13_25, phi_bb13_26, phi_bb13_27, phi_bb13_28});
  }

  TNode<BoolT> phi_bb24_17;
  TNode<IntPtrT> phi_bb24_24;
  TNode<IntPtrT> phi_bb24_25;
  TNode<BoolT> phi_bb24_26;
  TNode<BoolT> phi_bb24_27;
  TNode<IntPtrT> phi_bb24_28;
  TNode<IntPtrT> tmp64;
  TNode<BoolT> tmp65;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_17, &phi_bb24_24, &phi_bb24_25, &phi_bb24_26, &phi_bb24_27, &phi_bb24_28);
    tmp64 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp65 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb24_24}, TNode<IntPtrT>{tmp64});
    ca_.Branch(tmp65, &block28, std::vector<compiler::Node*>{phi_bb24_17, phi_bb24_24, phi_bb24_25, phi_bb24_26, phi_bb24_27, phi_bb24_28}, &block29, std::vector<compiler::Node*>{phi_bb24_17, phi_bb24_24, phi_bb24_25, phi_bb24_26, phi_bb24_27, phi_bb24_28});
  }

  TNode<BoolT> phi_bb28_17;
  TNode<IntPtrT> phi_bb28_24;
  TNode<IntPtrT> phi_bb28_25;
  TNode<BoolT> phi_bb28_26;
  TNode<BoolT> phi_bb28_27;
  TNode<IntPtrT> phi_bb28_28;
  TNode<IntPtrT> tmp66;
  TNode<IntPtrT> tmp67;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_17, &phi_bb28_24, &phi_bb28_25, &phi_bb28_26, &phi_bb28_27, &phi_bb28_28);
    tmp66 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp67 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb28_24}, TNode<IntPtrT>{tmp66});
    ca_.Goto(&block27, phi_bb28_17, tmp67, phi_bb28_25, phi_bb28_26, phi_bb28_27, phi_bb28_28);
  }

  TNode<BoolT> phi_bb29_17;
  TNode<IntPtrT> phi_bb29_24;
  TNode<IntPtrT> phi_bb29_25;
  TNode<BoolT> phi_bb29_26;
  TNode<BoolT> phi_bb29_27;
  TNode<IntPtrT> phi_bb29_28;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_17, &phi_bb29_24, &phi_bb29_25, &phi_bb29_26, &phi_bb29_27, &phi_bb29_28);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block31, phi_bb29_17, phi_bb29_24, phi_bb29_25, phi_bb29_26, phi_bb29_27, phi_bb29_28);
    } else {
      ca_.Goto(&block32, phi_bb29_17, phi_bb29_24, phi_bb29_25, phi_bb29_26, phi_bb29_27, phi_bb29_28);
    }
  }

  TNode<BoolT> phi_bb31_17;
  TNode<IntPtrT> phi_bb31_24;
  TNode<IntPtrT> phi_bb31_25;
  TNode<BoolT> phi_bb31_26;
  TNode<BoolT> phi_bb31_27;
  TNode<IntPtrT> phi_bb31_28;
  TNode<IntPtrT> tmp68;
  TNode<IntPtrT> tmp69;
  if (block31.is_used()) {
    ca_.Bind(&block31, &phi_bb31_17, &phi_bb31_24, &phi_bb31_25, &phi_bb31_26, &phi_bb31_27, &phi_bb31_28);
    tmp68 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp69 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb31_28}, TNode<IntPtrT>{tmp68});
    ca_.Goto(&block33, phi_bb31_17, phi_bb31_24, phi_bb31_25, phi_bb31_26, phi_bb31_27, tmp69);
  }

  TNode<BoolT> phi_bb32_17;
  TNode<IntPtrT> phi_bb32_24;
  TNode<IntPtrT> phi_bb32_25;
  TNode<BoolT> phi_bb32_26;
  TNode<BoolT> phi_bb32_27;
  TNode<IntPtrT> phi_bb32_28;
  if (block32.is_used()) {
    ca_.Bind(&block32, &phi_bb32_17, &phi_bb32_24, &phi_bb32_25, &phi_bb32_26, &phi_bb32_27, &phi_bb32_28);
    ca_.Branch(phi_bb32_26, &block34, std::vector<compiler::Node*>{phi_bb32_17, phi_bb32_24, phi_bb32_25, phi_bb32_26, phi_bb32_27, phi_bb32_28}, &block35, std::vector<compiler::Node*>{phi_bb32_17, phi_bb32_24, phi_bb32_25, phi_bb32_26, phi_bb32_27, phi_bb32_28});
  }

  TNode<BoolT> phi_bb34_17;
  TNode<IntPtrT> phi_bb34_24;
  TNode<IntPtrT> phi_bb34_25;
  TNode<BoolT> phi_bb34_26;
  TNode<BoolT> phi_bb34_27;
  TNode<IntPtrT> phi_bb34_28;
  TNode<BoolT> tmp70;
  TNode<BoolT> tmp71;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_17, &phi_bb34_24, &phi_bb34_25, &phi_bb34_26, &phi_bb34_27, &phi_bb34_28);
    tmp70 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp71 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block36, phi_bb34_17, phi_bb34_24, phi_bb34_25, tmp70, tmp71, phi_bb34_28);
  }

  TNode<BoolT> phi_bb35_17;
  TNode<IntPtrT> phi_bb35_24;
  TNode<IntPtrT> phi_bb35_25;
  TNode<BoolT> phi_bb35_26;
  TNode<BoolT> phi_bb35_27;
  TNode<IntPtrT> phi_bb35_28;
  TNode<IntPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<BoolT> tmp74;
  TNode<BoolT> tmp75;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_17, &phi_bb35_24, &phi_bb35_25, &phi_bb35_26, &phi_bb35_27, &phi_bb35_28);
    tmp72 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp73 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb35_28}, TNode<IntPtrT>{tmp72});
    tmp74 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp75 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block36, phi_bb35_17, phi_bb35_24, phi_bb35_25, tmp74, tmp75, tmp73);
  }

  TNode<BoolT> phi_bb36_17;
  TNode<IntPtrT> phi_bb36_24;
  TNode<IntPtrT> phi_bb36_25;
  TNode<BoolT> phi_bb36_26;
  TNode<BoolT> phi_bb36_27;
  TNode<IntPtrT> phi_bb36_28;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_17, &phi_bb36_24, &phi_bb36_25, &phi_bb36_26, &phi_bb36_27, &phi_bb36_28);
    ca_.Goto(&block33, phi_bb36_17, phi_bb36_24, phi_bb36_25, phi_bb36_26, phi_bb36_27, phi_bb36_28);
  }

  TNode<BoolT> phi_bb33_17;
  TNode<IntPtrT> phi_bb33_24;
  TNode<IntPtrT> phi_bb33_25;
  TNode<BoolT> phi_bb33_26;
  TNode<BoolT> phi_bb33_27;
  TNode<IntPtrT> phi_bb33_28;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_17, &phi_bb33_24, &phi_bb33_25, &phi_bb33_26, &phi_bb33_27, &phi_bb33_28);
    ca_.Goto(&block27, phi_bb33_17, phi_bb33_24, phi_bb33_25, phi_bb33_26, phi_bb33_27, phi_bb33_28);
  }

  TNode<BoolT> phi_bb27_17;
  TNode<IntPtrT> phi_bb27_24;
  TNode<IntPtrT> phi_bb27_25;
  TNode<BoolT> phi_bb27_26;
  TNode<BoolT> phi_bb27_27;
  TNode<IntPtrT> phi_bb27_28;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_17, &phi_bb27_24, &phi_bb27_25, &phi_bb27_26, &phi_bb27_27, &phi_bb27_28);
    ca_.Goto(&block26, phi_bb27_17, phi_bb27_24, phi_bb27_25, phi_bb27_26, phi_bb27_27, phi_bb27_28);
  }

  TNode<BoolT> phi_bb25_17;
  TNode<IntPtrT> phi_bb25_24;
  TNode<IntPtrT> phi_bb25_25;
  TNode<BoolT> phi_bb25_26;
  TNode<BoolT> phi_bb25_27;
  TNode<IntPtrT> phi_bb25_28;
  TNode<Int32T> tmp76;
  TNode<BoolT> tmp77;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_17, &phi_bb25_24, &phi_bb25_25, &phi_bb25_26, &phi_bb25_27, &phi_bb25_28);
    tmp76 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp77 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp61}, TNode<Int32T>{tmp76});
    ca_.Branch(tmp77, &block37, std::vector<compiler::Node*>{phi_bb25_17, phi_bb25_24, phi_bb25_25, phi_bb25_26, phi_bb25_27, phi_bb25_28}, &block38, std::vector<compiler::Node*>{phi_bb25_17, phi_bb25_24, phi_bb25_25, phi_bb25_26, phi_bb25_27, phi_bb25_28});
  }

  TNode<BoolT> phi_bb37_17;
  TNode<IntPtrT> phi_bb37_24;
  TNode<IntPtrT> phi_bb37_25;
  TNode<BoolT> phi_bb37_26;
  TNode<BoolT> phi_bb37_27;
  TNode<IntPtrT> phi_bb37_28;
  TNode<IntPtrT> tmp78;
  TNode<BoolT> tmp79;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_17, &phi_bb37_24, &phi_bb37_25, &phi_bb37_26, &phi_bb37_27, &phi_bb37_28);
    tmp78 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp79 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb37_24}, TNode<IntPtrT>{tmp78});
    ca_.Branch(tmp79, &block41, std::vector<compiler::Node*>{phi_bb37_17, phi_bb37_24, phi_bb37_25, phi_bb37_26, phi_bb37_27, phi_bb37_28}, &block42, std::vector<compiler::Node*>{phi_bb37_17, phi_bb37_24, phi_bb37_25, phi_bb37_26, phi_bb37_27, phi_bb37_28});
  }

  TNode<BoolT> phi_bb41_17;
  TNode<IntPtrT> phi_bb41_24;
  TNode<IntPtrT> phi_bb41_25;
  TNode<BoolT> phi_bb41_26;
  TNode<BoolT> phi_bb41_27;
  TNode<IntPtrT> phi_bb41_28;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_17, &phi_bb41_24, &phi_bb41_25, &phi_bb41_26, &phi_bb41_27, &phi_bb41_28);
    tmp80 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp81 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb41_24}, TNode<IntPtrT>{tmp80});
    ca_.Goto(&block40, phi_bb41_17, tmp81, phi_bb41_25, phi_bb41_26, phi_bb41_27, phi_bb41_28);
  }

  TNode<BoolT> phi_bb42_17;
  TNode<IntPtrT> phi_bb42_24;
  TNode<IntPtrT> phi_bb42_25;
  TNode<BoolT> phi_bb42_26;
  TNode<BoolT> phi_bb42_27;
  TNode<IntPtrT> phi_bb42_28;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_17, &phi_bb42_24, &phi_bb42_25, &phi_bb42_26, &phi_bb42_27, &phi_bb42_28);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block44, phi_bb42_17, phi_bb42_24, phi_bb42_25, phi_bb42_26, phi_bb42_27, phi_bb42_28);
    } else {
      ca_.Goto(&block45, phi_bb42_17, phi_bb42_24, phi_bb42_25, phi_bb42_26, phi_bb42_27, phi_bb42_28);
    }
  }

  TNode<BoolT> phi_bb44_17;
  TNode<IntPtrT> phi_bb44_24;
  TNode<IntPtrT> phi_bb44_25;
  TNode<BoolT> phi_bb44_26;
  TNode<BoolT> phi_bb44_27;
  TNode<IntPtrT> phi_bb44_28;
  TNode<IntPtrT> tmp82;
  TNode<IntPtrT> tmp83;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_17, &phi_bb44_24, &phi_bb44_25, &phi_bb44_26, &phi_bb44_27, &phi_bb44_28);
    tmp82 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp83 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb44_28}, TNode<IntPtrT>{tmp82});
    ca_.Goto(&block46, phi_bb44_17, phi_bb44_24, phi_bb44_25, phi_bb44_26, phi_bb44_27, tmp83);
  }

  TNode<BoolT> phi_bb45_17;
  TNode<IntPtrT> phi_bb45_24;
  TNode<IntPtrT> phi_bb45_25;
  TNode<BoolT> phi_bb45_26;
  TNode<BoolT> phi_bb45_27;
  TNode<IntPtrT> phi_bb45_28;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_17, &phi_bb45_24, &phi_bb45_25, &phi_bb45_26, &phi_bb45_27, &phi_bb45_28);
    ca_.Branch(phi_bb45_26, &block47, std::vector<compiler::Node*>{phi_bb45_17, phi_bb45_24, phi_bb45_25, phi_bb45_26, phi_bb45_27, phi_bb45_28}, &block48, std::vector<compiler::Node*>{phi_bb45_17, phi_bb45_24, phi_bb45_25, phi_bb45_26, phi_bb45_27, phi_bb45_28});
  }

  TNode<BoolT> phi_bb47_17;
  TNode<IntPtrT> phi_bb47_24;
  TNode<IntPtrT> phi_bb47_25;
  TNode<BoolT> phi_bb47_26;
  TNode<BoolT> phi_bb47_27;
  TNode<IntPtrT> phi_bb47_28;
  TNode<BoolT> tmp84;
  TNode<BoolT> tmp85;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_17, &phi_bb47_24, &phi_bb47_25, &phi_bb47_26, &phi_bb47_27, &phi_bb47_28);
    tmp84 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp85 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block49, phi_bb47_17, phi_bb47_24, phi_bb47_25, tmp84, tmp85, phi_bb47_28);
  }

  TNode<BoolT> phi_bb48_17;
  TNode<IntPtrT> phi_bb48_24;
  TNode<IntPtrT> phi_bb48_25;
  TNode<BoolT> phi_bb48_26;
  TNode<BoolT> phi_bb48_27;
  TNode<IntPtrT> phi_bb48_28;
  TNode<IntPtrT> tmp86;
  TNode<IntPtrT> tmp87;
  TNode<BoolT> tmp88;
  TNode<BoolT> tmp89;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_17, &phi_bb48_24, &phi_bb48_25, &phi_bb48_26, &phi_bb48_27, &phi_bb48_28);
    tmp86 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp87 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb48_28}, TNode<IntPtrT>{tmp86});
    tmp88 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp89 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block49, phi_bb48_17, phi_bb48_24, phi_bb48_25, tmp88, tmp89, tmp87);
  }

  TNode<BoolT> phi_bb49_17;
  TNode<IntPtrT> phi_bb49_24;
  TNode<IntPtrT> phi_bb49_25;
  TNode<BoolT> phi_bb49_26;
  TNode<BoolT> phi_bb49_27;
  TNode<IntPtrT> phi_bb49_28;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_17, &phi_bb49_24, &phi_bb49_25, &phi_bb49_26, &phi_bb49_27, &phi_bb49_28);
    ca_.Goto(&block46, phi_bb49_17, phi_bb49_24, phi_bb49_25, phi_bb49_26, phi_bb49_27, phi_bb49_28);
  }

  TNode<BoolT> phi_bb46_17;
  TNode<IntPtrT> phi_bb46_24;
  TNode<IntPtrT> phi_bb46_25;
  TNode<BoolT> phi_bb46_26;
  TNode<BoolT> phi_bb46_27;
  TNode<IntPtrT> phi_bb46_28;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_17, &phi_bb46_24, &phi_bb46_25, &phi_bb46_26, &phi_bb46_27, &phi_bb46_28);
    ca_.Goto(&block40, phi_bb46_17, phi_bb46_24, phi_bb46_25, phi_bb46_26, phi_bb46_27, phi_bb46_28);
  }

  TNode<BoolT> phi_bb40_17;
  TNode<IntPtrT> phi_bb40_24;
  TNode<IntPtrT> phi_bb40_25;
  TNode<BoolT> phi_bb40_26;
  TNode<BoolT> phi_bb40_27;
  TNode<IntPtrT> phi_bb40_28;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_17, &phi_bb40_24, &phi_bb40_25, &phi_bb40_26, &phi_bb40_27, &phi_bb40_28);
    if (((CodeStubAssembler(state_).ConstexprBoolNot((CodeStubAssembler(state_).Is64()))))) {
      ca_.Goto(&block50, phi_bb40_17, phi_bb40_24, phi_bb40_25, phi_bb40_26, phi_bb40_27, phi_bb40_28);
    } else {
      ca_.Goto(&block51, phi_bb40_17, phi_bb40_24, phi_bb40_25, phi_bb40_26, phi_bb40_27, phi_bb40_28);
    }
  }

  TNode<BoolT> phi_bb50_17;
  TNode<IntPtrT> phi_bb50_24;
  TNode<IntPtrT> phi_bb50_25;
  TNode<BoolT> phi_bb50_26;
  TNode<BoolT> phi_bb50_27;
  TNode<IntPtrT> phi_bb50_28;
  TNode<IntPtrT> tmp90;
  TNode<BoolT> tmp91;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_17, &phi_bb50_24, &phi_bb50_25, &phi_bb50_26, &phi_bb50_27, &phi_bb50_28);
    tmp90 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp91 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb50_24}, TNode<IntPtrT>{tmp90});
    ca_.Branch(tmp91, &block54, std::vector<compiler::Node*>{phi_bb50_17, phi_bb50_24, phi_bb50_25, phi_bb50_26, phi_bb50_27, phi_bb50_28}, &block55, std::vector<compiler::Node*>{phi_bb50_17, phi_bb50_24, phi_bb50_25, phi_bb50_26, phi_bb50_27, phi_bb50_28});
  }

  TNode<BoolT> phi_bb54_17;
  TNode<IntPtrT> phi_bb54_24;
  TNode<IntPtrT> phi_bb54_25;
  TNode<BoolT> phi_bb54_26;
  TNode<BoolT> phi_bb54_27;
  TNode<IntPtrT> phi_bb54_28;
  TNode<IntPtrT> tmp92;
  TNode<IntPtrT> tmp93;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_17, &phi_bb54_24, &phi_bb54_25, &phi_bb54_26, &phi_bb54_27, &phi_bb54_28);
    tmp92 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp93 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb54_24}, TNode<IntPtrT>{tmp92});
    ca_.Goto(&block53, phi_bb54_17, tmp93, phi_bb54_25, phi_bb54_26, phi_bb54_27, phi_bb54_28);
  }

  TNode<BoolT> phi_bb55_17;
  TNode<IntPtrT> phi_bb55_24;
  TNode<IntPtrT> phi_bb55_25;
  TNode<BoolT> phi_bb55_26;
  TNode<BoolT> phi_bb55_27;
  TNode<IntPtrT> phi_bb55_28;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_17, &phi_bb55_24, &phi_bb55_25, &phi_bb55_26, &phi_bb55_27, &phi_bb55_28);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block57, phi_bb55_17, phi_bb55_24, phi_bb55_25, phi_bb55_26, phi_bb55_27, phi_bb55_28);
    } else {
      ca_.Goto(&block58, phi_bb55_17, phi_bb55_24, phi_bb55_25, phi_bb55_26, phi_bb55_27, phi_bb55_28);
    }
  }

  TNode<BoolT> phi_bb57_17;
  TNode<IntPtrT> phi_bb57_24;
  TNode<IntPtrT> phi_bb57_25;
  TNode<BoolT> phi_bb57_26;
  TNode<BoolT> phi_bb57_27;
  TNode<IntPtrT> phi_bb57_28;
  TNode<IntPtrT> tmp94;
  TNode<IntPtrT> tmp95;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_17, &phi_bb57_24, &phi_bb57_25, &phi_bb57_26, &phi_bb57_27, &phi_bb57_28);
    tmp94 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp95 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb57_28}, TNode<IntPtrT>{tmp94});
    ca_.Goto(&block59, phi_bb57_17, phi_bb57_24, phi_bb57_25, phi_bb57_26, phi_bb57_27, tmp95);
  }

  TNode<BoolT> phi_bb58_17;
  TNode<IntPtrT> phi_bb58_24;
  TNode<IntPtrT> phi_bb58_25;
  TNode<BoolT> phi_bb58_26;
  TNode<BoolT> phi_bb58_27;
  TNode<IntPtrT> phi_bb58_28;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_17, &phi_bb58_24, &phi_bb58_25, &phi_bb58_26, &phi_bb58_27, &phi_bb58_28);
    ca_.Branch(phi_bb58_26, &block60, std::vector<compiler::Node*>{phi_bb58_17, phi_bb58_24, phi_bb58_25, phi_bb58_26, phi_bb58_27, phi_bb58_28}, &block61, std::vector<compiler::Node*>{phi_bb58_17, phi_bb58_24, phi_bb58_25, phi_bb58_26, phi_bb58_27, phi_bb58_28});
  }

  TNode<BoolT> phi_bb60_17;
  TNode<IntPtrT> phi_bb60_24;
  TNode<IntPtrT> phi_bb60_25;
  TNode<BoolT> phi_bb60_26;
  TNode<BoolT> phi_bb60_27;
  TNode<IntPtrT> phi_bb60_28;
  TNode<BoolT> tmp96;
  TNode<BoolT> tmp97;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_17, &phi_bb60_24, &phi_bb60_25, &phi_bb60_26, &phi_bb60_27, &phi_bb60_28);
    tmp96 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp97 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block62, phi_bb60_17, phi_bb60_24, phi_bb60_25, tmp96, tmp97, phi_bb60_28);
  }

  TNode<BoolT> phi_bb61_17;
  TNode<IntPtrT> phi_bb61_24;
  TNode<IntPtrT> phi_bb61_25;
  TNode<BoolT> phi_bb61_26;
  TNode<BoolT> phi_bb61_27;
  TNode<IntPtrT> phi_bb61_28;
  TNode<IntPtrT> tmp98;
  TNode<IntPtrT> tmp99;
  TNode<BoolT> tmp100;
  TNode<BoolT> tmp101;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_17, &phi_bb61_24, &phi_bb61_25, &phi_bb61_26, &phi_bb61_27, &phi_bb61_28);
    tmp98 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp99 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb61_28}, TNode<IntPtrT>{tmp98});
    tmp100 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp101 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block62, phi_bb61_17, phi_bb61_24, phi_bb61_25, tmp100, tmp101, tmp99);
  }

  TNode<BoolT> phi_bb62_17;
  TNode<IntPtrT> phi_bb62_24;
  TNode<IntPtrT> phi_bb62_25;
  TNode<BoolT> phi_bb62_26;
  TNode<BoolT> phi_bb62_27;
  TNode<IntPtrT> phi_bb62_28;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_17, &phi_bb62_24, &phi_bb62_25, &phi_bb62_26, &phi_bb62_27, &phi_bb62_28);
    ca_.Goto(&block59, phi_bb62_17, phi_bb62_24, phi_bb62_25, phi_bb62_26, phi_bb62_27, phi_bb62_28);
  }

  TNode<BoolT> phi_bb59_17;
  TNode<IntPtrT> phi_bb59_24;
  TNode<IntPtrT> phi_bb59_25;
  TNode<BoolT> phi_bb59_26;
  TNode<BoolT> phi_bb59_27;
  TNode<IntPtrT> phi_bb59_28;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_17, &phi_bb59_24, &phi_bb59_25, &phi_bb59_26, &phi_bb59_27, &phi_bb59_28);
    ca_.Goto(&block53, phi_bb59_17, phi_bb59_24, phi_bb59_25, phi_bb59_26, phi_bb59_27, phi_bb59_28);
  }

  TNode<BoolT> phi_bb53_17;
  TNode<IntPtrT> phi_bb53_24;
  TNode<IntPtrT> phi_bb53_25;
  TNode<BoolT> phi_bb53_26;
  TNode<BoolT> phi_bb53_27;
  TNode<IntPtrT> phi_bb53_28;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_17, &phi_bb53_24, &phi_bb53_25, &phi_bb53_26, &phi_bb53_27, &phi_bb53_28);
    ca_.Goto(&block52, phi_bb53_17, phi_bb53_24, phi_bb53_25, phi_bb53_26, phi_bb53_27, phi_bb53_28);
  }

  TNode<BoolT> phi_bb51_17;
  TNode<IntPtrT> phi_bb51_24;
  TNode<IntPtrT> phi_bb51_25;
  TNode<BoolT> phi_bb51_26;
  TNode<BoolT> phi_bb51_27;
  TNode<IntPtrT> phi_bb51_28;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_17, &phi_bb51_24, &phi_bb51_25, &phi_bb51_26, &phi_bb51_27, &phi_bb51_28);
    ca_.Goto(&block52, phi_bb51_17, phi_bb51_24, phi_bb51_25, phi_bb51_26, phi_bb51_27, phi_bb51_28);
  }

  TNode<BoolT> phi_bb52_17;
  TNode<IntPtrT> phi_bb52_24;
  TNode<IntPtrT> phi_bb52_25;
  TNode<BoolT> phi_bb52_26;
  TNode<BoolT> phi_bb52_27;
  TNode<IntPtrT> phi_bb52_28;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_17, &phi_bb52_24, &phi_bb52_25, &phi_bb52_26, &phi_bb52_27, &phi_bb52_28);
    ca_.Goto(&block39, phi_bb52_17, phi_bb52_24, phi_bb52_25, phi_bb52_26, phi_bb52_27, phi_bb52_28);
  }

  TNode<BoolT> phi_bb38_17;
  TNode<IntPtrT> phi_bb38_24;
  TNode<IntPtrT> phi_bb38_25;
  TNode<BoolT> phi_bb38_26;
  TNode<BoolT> phi_bb38_27;
  TNode<IntPtrT> phi_bb38_28;
  TNode<Int32T> tmp102;
  TNode<BoolT> tmp103;
  if (block38.is_used()) {
    ca_.Bind(&block38, &phi_bb38_17, &phi_bb38_24, &phi_bb38_25, &phi_bb38_26, &phi_bb38_27, &phi_bb38_28);
    tmp102 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp103 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp61}, TNode<Int32T>{tmp102});
    ca_.Branch(tmp103, &block63, std::vector<compiler::Node*>{phi_bb38_17, phi_bb38_24, phi_bb38_25, phi_bb38_26, phi_bb38_27, phi_bb38_28}, &block64, std::vector<compiler::Node*>{phi_bb38_17, phi_bb38_24, phi_bb38_25, phi_bb38_26, phi_bb38_27, phi_bb38_28});
  }

  TNode<BoolT> phi_bb63_17;
  TNode<IntPtrT> phi_bb63_24;
  TNode<IntPtrT> phi_bb63_25;
  TNode<BoolT> phi_bb63_26;
  TNode<BoolT> phi_bb63_27;
  TNode<IntPtrT> phi_bb63_28;
  TNode<IntPtrT> tmp104;
  TNode<BoolT> tmp105;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_17, &phi_bb63_24, &phi_bb63_25, &phi_bb63_26, &phi_bb63_27, &phi_bb63_28);
    tmp104 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp105 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb63_25}, TNode<IntPtrT>{tmp104});
    ca_.Branch(tmp105, &block67, std::vector<compiler::Node*>{phi_bb63_17, phi_bb63_24, phi_bb63_25, phi_bb63_26, phi_bb63_27, phi_bb63_28}, &block68, std::vector<compiler::Node*>{phi_bb63_17, phi_bb63_24, phi_bb63_25, phi_bb63_26, phi_bb63_27, phi_bb63_28});
  }

  TNode<BoolT> phi_bb67_17;
  TNode<IntPtrT> phi_bb67_24;
  TNode<IntPtrT> phi_bb67_25;
  TNode<BoolT> phi_bb67_26;
  TNode<BoolT> phi_bb67_27;
  TNode<IntPtrT> phi_bb67_28;
  TNode<IntPtrT> tmp106;
  TNode<IntPtrT> tmp107;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_17, &phi_bb67_24, &phi_bb67_25, &phi_bb67_26, &phi_bb67_27, &phi_bb67_28);
    tmp106 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp107 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb67_25}, TNode<IntPtrT>{tmp106});
    ca_.Goto(&block66, phi_bb67_17, phi_bb67_24, tmp107, phi_bb67_26, phi_bb67_27, phi_bb67_28);
  }

  TNode<BoolT> phi_bb68_17;
  TNode<IntPtrT> phi_bb68_24;
  TNode<IntPtrT> phi_bb68_25;
  TNode<BoolT> phi_bb68_26;
  TNode<BoolT> phi_bb68_27;
  TNode<IntPtrT> phi_bb68_28;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_17, &phi_bb68_24, &phi_bb68_25, &phi_bb68_26, &phi_bb68_27, &phi_bb68_28);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block70, phi_bb68_17, phi_bb68_24, phi_bb68_25, phi_bb68_26, phi_bb68_27, phi_bb68_28);
    } else {
      ca_.Goto(&block71, phi_bb68_17, phi_bb68_24, phi_bb68_25, phi_bb68_26, phi_bb68_27, phi_bb68_28);
    }
  }

  TNode<BoolT> phi_bb70_17;
  TNode<IntPtrT> phi_bb70_24;
  TNode<IntPtrT> phi_bb70_25;
  TNode<BoolT> phi_bb70_26;
  TNode<BoolT> phi_bb70_27;
  TNode<IntPtrT> phi_bb70_28;
  TNode<IntPtrT> tmp108;
  TNode<IntPtrT> tmp109;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_17, &phi_bb70_24, &phi_bb70_25, &phi_bb70_26, &phi_bb70_27, &phi_bb70_28);
    tmp108 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp109 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb70_28}, TNode<IntPtrT>{tmp108});
    ca_.Goto(&block72, phi_bb70_17, phi_bb70_24, phi_bb70_25, phi_bb70_26, phi_bb70_27, tmp109);
  }

  TNode<BoolT> phi_bb71_17;
  TNode<IntPtrT> phi_bb71_24;
  TNode<IntPtrT> phi_bb71_25;
  TNode<BoolT> phi_bb71_26;
  TNode<BoolT> phi_bb71_27;
  TNode<IntPtrT> phi_bb71_28;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_17, &phi_bb71_24, &phi_bb71_25, &phi_bb71_26, &phi_bb71_27, &phi_bb71_28);
    ca_.Branch(phi_bb71_26, &block73, std::vector<compiler::Node*>{phi_bb71_17, phi_bb71_24, phi_bb71_25, phi_bb71_26, phi_bb71_27, phi_bb71_28}, &block74, std::vector<compiler::Node*>{phi_bb71_17, phi_bb71_24, phi_bb71_25, phi_bb71_26, phi_bb71_27, phi_bb71_28});
  }

  TNode<BoolT> phi_bb73_17;
  TNode<IntPtrT> phi_bb73_24;
  TNode<IntPtrT> phi_bb73_25;
  TNode<BoolT> phi_bb73_26;
  TNode<BoolT> phi_bb73_27;
  TNode<IntPtrT> phi_bb73_28;
  TNode<BoolT> tmp110;
  TNode<BoolT> tmp111;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_17, &phi_bb73_24, &phi_bb73_25, &phi_bb73_26, &phi_bb73_27, &phi_bb73_28);
    tmp110 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp111 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block75, phi_bb73_17, phi_bb73_24, phi_bb73_25, tmp110, tmp111, phi_bb73_28);
  }

  TNode<BoolT> phi_bb74_17;
  TNode<IntPtrT> phi_bb74_24;
  TNode<IntPtrT> phi_bb74_25;
  TNode<BoolT> phi_bb74_26;
  TNode<BoolT> phi_bb74_27;
  TNode<IntPtrT> phi_bb74_28;
  TNode<IntPtrT> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<BoolT> tmp114;
  TNode<BoolT> tmp115;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_17, &phi_bb74_24, &phi_bb74_25, &phi_bb74_26, &phi_bb74_27, &phi_bb74_28);
    tmp112 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp113 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb74_28}, TNode<IntPtrT>{tmp112});
    tmp114 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp115 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block75, phi_bb74_17, phi_bb74_24, phi_bb74_25, tmp114, tmp115, tmp113);
  }

  TNode<BoolT> phi_bb75_17;
  TNode<IntPtrT> phi_bb75_24;
  TNode<IntPtrT> phi_bb75_25;
  TNode<BoolT> phi_bb75_26;
  TNode<BoolT> phi_bb75_27;
  TNode<IntPtrT> phi_bb75_28;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_17, &phi_bb75_24, &phi_bb75_25, &phi_bb75_26, &phi_bb75_27, &phi_bb75_28);
    ca_.Goto(&block72, phi_bb75_17, phi_bb75_24, phi_bb75_25, phi_bb75_26, phi_bb75_27, phi_bb75_28);
  }

  TNode<BoolT> phi_bb72_17;
  TNode<IntPtrT> phi_bb72_24;
  TNode<IntPtrT> phi_bb72_25;
  TNode<BoolT> phi_bb72_26;
  TNode<BoolT> phi_bb72_27;
  TNode<IntPtrT> phi_bb72_28;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_17, &phi_bb72_24, &phi_bb72_25, &phi_bb72_26, &phi_bb72_27, &phi_bb72_28);
    ca_.Goto(&block66, phi_bb72_17, phi_bb72_24, phi_bb72_25, phi_bb72_26, phi_bb72_27, phi_bb72_28);
  }

  TNode<BoolT> phi_bb66_17;
  TNode<IntPtrT> phi_bb66_24;
  TNode<IntPtrT> phi_bb66_25;
  TNode<BoolT> phi_bb66_26;
  TNode<BoolT> phi_bb66_27;
  TNode<IntPtrT> phi_bb66_28;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_17, &phi_bb66_24, &phi_bb66_25, &phi_bb66_26, &phi_bb66_27, &phi_bb66_28);
    ca_.Goto(&block65, phi_bb66_17, phi_bb66_24, phi_bb66_25, phi_bb66_26, phi_bb66_27, phi_bb66_28);
  }

  TNode<BoolT> phi_bb64_17;
  TNode<IntPtrT> phi_bb64_24;
  TNode<IntPtrT> phi_bb64_25;
  TNode<BoolT> phi_bb64_26;
  TNode<BoolT> phi_bb64_27;
  TNode<IntPtrT> phi_bb64_28;
  TNode<Int32T> tmp116;
  TNode<BoolT> tmp117;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_17, &phi_bb64_24, &phi_bb64_25, &phi_bb64_26, &phi_bb64_27, &phi_bb64_28);
    tmp116 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp117 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp61}, TNode<Int32T>{tmp116});
    ca_.Branch(tmp117, &block76, std::vector<compiler::Node*>{phi_bb64_17, phi_bb64_24, phi_bb64_25, phi_bb64_26, phi_bb64_27, phi_bb64_28}, &block77, std::vector<compiler::Node*>{phi_bb64_17, phi_bb64_24, phi_bb64_25, phi_bb64_26, phi_bb64_27, phi_bb64_28});
  }

  TNode<BoolT> phi_bb76_17;
  TNode<IntPtrT> phi_bb76_24;
  TNode<IntPtrT> phi_bb76_25;
  TNode<BoolT> phi_bb76_26;
  TNode<BoolT> phi_bb76_27;
  TNode<IntPtrT> phi_bb76_28;
  TNode<IntPtrT> tmp118;
  TNode<BoolT> tmp119;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_17, &phi_bb76_24, &phi_bb76_25, &phi_bb76_26, &phi_bb76_27, &phi_bb76_28);
    tmp118 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp119 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb76_25}, TNode<IntPtrT>{tmp118});
    ca_.Branch(tmp119, &block80, std::vector<compiler::Node*>{phi_bb76_17, phi_bb76_24, phi_bb76_25, phi_bb76_26, phi_bb76_27, phi_bb76_28}, &block81, std::vector<compiler::Node*>{phi_bb76_17, phi_bb76_24, phi_bb76_25, phi_bb76_26, phi_bb76_27, phi_bb76_28});
  }

  TNode<BoolT> phi_bb80_17;
  TNode<IntPtrT> phi_bb80_24;
  TNode<IntPtrT> phi_bb80_25;
  TNode<BoolT> phi_bb80_26;
  TNode<BoolT> phi_bb80_27;
  TNode<IntPtrT> phi_bb80_28;
  TNode<IntPtrT> tmp120;
  TNode<IntPtrT> tmp121;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_17, &phi_bb80_24, &phi_bb80_25, &phi_bb80_26, &phi_bb80_27, &phi_bb80_28);
    tmp120 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp121 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb80_25}, TNode<IntPtrT>{tmp120});
    ca_.Goto(&block79, phi_bb80_17, phi_bb80_24, tmp121, phi_bb80_26, phi_bb80_27, phi_bb80_28);
  }

  TNode<BoolT> phi_bb81_17;
  TNode<IntPtrT> phi_bb81_24;
  TNode<IntPtrT> phi_bb81_25;
  TNode<BoolT> phi_bb81_26;
  TNode<BoolT> phi_bb81_27;
  TNode<IntPtrT> phi_bb81_28;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_17, &phi_bb81_24, &phi_bb81_25, &phi_bb81_26, &phi_bb81_27, &phi_bb81_28);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block82, phi_bb81_17, phi_bb81_24, phi_bb81_25, phi_bb81_26, phi_bb81_27, phi_bb81_28);
    } else {
      ca_.Goto(&block83, phi_bb81_17, phi_bb81_24, phi_bb81_25, phi_bb81_26, phi_bb81_27, phi_bb81_28);
    }
  }

  TNode<BoolT> phi_bb82_17;
  TNode<IntPtrT> phi_bb82_24;
  TNode<IntPtrT> phi_bb82_25;
  TNode<BoolT> phi_bb82_26;
  TNode<BoolT> phi_bb82_27;
  TNode<IntPtrT> phi_bb82_28;
  TNode<IntPtrT> tmp122;
  TNode<IntPtrT> tmp123;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_17, &phi_bb82_24, &phi_bb82_25, &phi_bb82_26, &phi_bb82_27, &phi_bb82_28);
    tmp122 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp123 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb82_28}, TNode<IntPtrT>{tmp122});
    ca_.Goto(&block84, phi_bb82_17, phi_bb82_24, phi_bb82_25, phi_bb82_26, phi_bb82_27, tmp123);
  }

  TNode<BoolT> phi_bb83_17;
  TNode<IntPtrT> phi_bb83_24;
  TNode<IntPtrT> phi_bb83_25;
  TNode<BoolT> phi_bb83_26;
  TNode<BoolT> phi_bb83_27;
  TNode<IntPtrT> phi_bb83_28;
  TNode<IntPtrT> tmp124;
  TNode<IntPtrT> tmp125;
  TNode<BoolT> tmp126;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_17, &phi_bb83_24, &phi_bb83_25, &phi_bb83_26, &phi_bb83_27, &phi_bb83_28);
    tmp124 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp125 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb83_28}, TNode<IntPtrT>{tmp124});
    tmp126 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block84, phi_bb83_17, phi_bb83_24, phi_bb83_25, phi_bb83_26, tmp126, tmp125);
  }

  TNode<BoolT> phi_bb84_17;
  TNode<IntPtrT> phi_bb84_24;
  TNode<IntPtrT> phi_bb84_25;
  TNode<BoolT> phi_bb84_26;
  TNode<BoolT> phi_bb84_27;
  TNode<IntPtrT> phi_bb84_28;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_17, &phi_bb84_24, &phi_bb84_25, &phi_bb84_26, &phi_bb84_27, &phi_bb84_28);
    ca_.Goto(&block79, phi_bb84_17, phi_bb84_24, phi_bb84_25, phi_bb84_26, phi_bb84_27, phi_bb84_28);
  }

  TNode<BoolT> phi_bb79_17;
  TNode<IntPtrT> phi_bb79_24;
  TNode<IntPtrT> phi_bb79_25;
  TNode<BoolT> phi_bb79_26;
  TNode<BoolT> phi_bb79_27;
  TNode<IntPtrT> phi_bb79_28;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_17, &phi_bb79_24, &phi_bb79_25, &phi_bb79_26, &phi_bb79_27, &phi_bb79_28);
    ca_.Goto(&block78, phi_bb79_17, phi_bb79_24, phi_bb79_25, phi_bb79_26, phi_bb79_27, phi_bb79_28);
  }

  TNode<BoolT> phi_bb77_17;
  TNode<IntPtrT> phi_bb77_24;
  TNode<IntPtrT> phi_bb77_25;
  TNode<BoolT> phi_bb77_26;
  TNode<BoolT> phi_bb77_27;
  TNode<IntPtrT> phi_bb77_28;
  TNode<BoolT> tmp127;
  TNode<IntPtrT> tmp128;
  TNode<BoolT> tmp129;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_17, &phi_bb77_24, &phi_bb77_25, &phi_bb77_26, &phi_bb77_27, &phi_bb77_28);
    tmp127 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp128 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp129 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb77_24}, TNode<IntPtrT>{tmp128});
    ca_.Branch(tmp129, &block86, std::vector<compiler::Node*>{phi_bb77_24, phi_bb77_25, phi_bb77_26, phi_bb77_27, phi_bb77_28}, &block87, std::vector<compiler::Node*>{phi_bb77_24, phi_bb77_25, phi_bb77_26, phi_bb77_27, phi_bb77_28});
  }

  TNode<IntPtrT> phi_bb86_24;
  TNode<IntPtrT> phi_bb86_25;
  TNode<BoolT> phi_bb86_26;
  TNode<BoolT> phi_bb86_27;
  TNode<IntPtrT> phi_bb86_28;
  TNode<IntPtrT> tmp130;
  TNode<IntPtrT> tmp131;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_24, &phi_bb86_25, &phi_bb86_26, &phi_bb86_27, &phi_bb86_28);
    tmp130 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp131 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb86_24}, TNode<IntPtrT>{tmp130});
    ca_.Goto(&block85, tmp131, phi_bb86_25, phi_bb86_26, phi_bb86_27, phi_bb86_28);
  }

  TNode<IntPtrT> phi_bb87_24;
  TNode<IntPtrT> phi_bb87_25;
  TNode<BoolT> phi_bb87_26;
  TNode<BoolT> phi_bb87_27;
  TNode<IntPtrT> phi_bb87_28;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_24, &phi_bb87_25, &phi_bb87_26, &phi_bb87_27, &phi_bb87_28);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block89, phi_bb87_24, phi_bb87_25, phi_bb87_26, phi_bb87_27, phi_bb87_28);
    } else {
      ca_.Goto(&block90, phi_bb87_24, phi_bb87_25, phi_bb87_26, phi_bb87_27, phi_bb87_28);
    }
  }

  TNode<IntPtrT> phi_bb89_24;
  TNode<IntPtrT> phi_bb89_25;
  TNode<BoolT> phi_bb89_26;
  TNode<BoolT> phi_bb89_27;
  TNode<IntPtrT> phi_bb89_28;
  TNode<IntPtrT> tmp132;
  TNode<IntPtrT> tmp133;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_24, &phi_bb89_25, &phi_bb89_26, &phi_bb89_27, &phi_bb89_28);
    tmp132 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp133 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb89_28}, TNode<IntPtrT>{tmp132});
    ca_.Goto(&block91, phi_bb89_24, phi_bb89_25, phi_bb89_26, phi_bb89_27, tmp133);
  }

  TNode<IntPtrT> phi_bb90_24;
  TNode<IntPtrT> phi_bb90_25;
  TNode<BoolT> phi_bb90_26;
  TNode<BoolT> phi_bb90_27;
  TNode<IntPtrT> phi_bb90_28;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_24, &phi_bb90_25, &phi_bb90_26, &phi_bb90_27, &phi_bb90_28);
    ca_.Branch(phi_bb90_26, &block92, std::vector<compiler::Node*>{phi_bb90_24, phi_bb90_25, phi_bb90_26, phi_bb90_27, phi_bb90_28}, &block93, std::vector<compiler::Node*>{phi_bb90_24, phi_bb90_25, phi_bb90_26, phi_bb90_27, phi_bb90_28});
  }

  TNode<IntPtrT> phi_bb92_24;
  TNode<IntPtrT> phi_bb92_25;
  TNode<BoolT> phi_bb92_26;
  TNode<BoolT> phi_bb92_27;
  TNode<IntPtrT> phi_bb92_28;
  TNode<BoolT> tmp134;
  TNode<BoolT> tmp135;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_24, &phi_bb92_25, &phi_bb92_26, &phi_bb92_27, &phi_bb92_28);
    tmp134 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp135 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block94, phi_bb92_24, phi_bb92_25, tmp134, tmp135, phi_bb92_28);
  }

  TNode<IntPtrT> phi_bb93_24;
  TNode<IntPtrT> phi_bb93_25;
  TNode<BoolT> phi_bb93_26;
  TNode<BoolT> phi_bb93_27;
  TNode<IntPtrT> phi_bb93_28;
  TNode<IntPtrT> tmp136;
  TNode<IntPtrT> tmp137;
  TNode<BoolT> tmp138;
  TNode<BoolT> tmp139;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_24, &phi_bb93_25, &phi_bb93_26, &phi_bb93_27, &phi_bb93_28);
    tmp136 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp137 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb93_28}, TNode<IntPtrT>{tmp136});
    tmp138 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp139 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block94, phi_bb93_24, phi_bb93_25, tmp138, tmp139, tmp137);
  }

  TNode<IntPtrT> phi_bb94_24;
  TNode<IntPtrT> phi_bb94_25;
  TNode<BoolT> phi_bb94_26;
  TNode<BoolT> phi_bb94_27;
  TNode<IntPtrT> phi_bb94_28;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_24, &phi_bb94_25, &phi_bb94_26, &phi_bb94_27, &phi_bb94_28);
    ca_.Goto(&block91, phi_bb94_24, phi_bb94_25, phi_bb94_26, phi_bb94_27, phi_bb94_28);
  }

  TNode<IntPtrT> phi_bb91_24;
  TNode<IntPtrT> phi_bb91_25;
  TNode<BoolT> phi_bb91_26;
  TNode<BoolT> phi_bb91_27;
  TNode<IntPtrT> phi_bb91_28;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_24, &phi_bb91_25, &phi_bb91_26, &phi_bb91_27, &phi_bb91_28);
    ca_.Goto(&block85, phi_bb91_24, phi_bb91_25, phi_bb91_26, phi_bb91_27, phi_bb91_28);
  }

  TNode<IntPtrT> phi_bb85_24;
  TNode<IntPtrT> phi_bb85_25;
  TNode<BoolT> phi_bb85_26;
  TNode<BoolT> phi_bb85_27;
  TNode<IntPtrT> phi_bb85_28;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_24, &phi_bb85_25, &phi_bb85_26, &phi_bb85_27, &phi_bb85_28);
    ca_.Goto(&block78, tmp127, phi_bb85_24, phi_bb85_25, phi_bb85_26, phi_bb85_27, phi_bb85_28);
  }

  TNode<BoolT> phi_bb78_17;
  TNode<IntPtrT> phi_bb78_24;
  TNode<IntPtrT> phi_bb78_25;
  TNode<BoolT> phi_bb78_26;
  TNode<BoolT> phi_bb78_27;
  TNode<IntPtrT> phi_bb78_28;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_17, &phi_bb78_24, &phi_bb78_25, &phi_bb78_26, &phi_bb78_27, &phi_bb78_28);
    ca_.Goto(&block65, phi_bb78_17, phi_bb78_24, phi_bb78_25, phi_bb78_26, phi_bb78_27, phi_bb78_28);
  }

  TNode<BoolT> phi_bb65_17;
  TNode<IntPtrT> phi_bb65_24;
  TNode<IntPtrT> phi_bb65_25;
  TNode<BoolT> phi_bb65_26;
  TNode<BoolT> phi_bb65_27;
  TNode<IntPtrT> phi_bb65_28;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_17, &phi_bb65_24, &phi_bb65_25, &phi_bb65_26, &phi_bb65_27, &phi_bb65_28);
    ca_.Goto(&block39, phi_bb65_17, phi_bb65_24, phi_bb65_25, phi_bb65_26, phi_bb65_27, phi_bb65_28);
  }

  TNode<BoolT> phi_bb39_17;
  TNode<IntPtrT> phi_bb39_24;
  TNode<IntPtrT> phi_bb39_25;
  TNode<BoolT> phi_bb39_26;
  TNode<BoolT> phi_bb39_27;
  TNode<IntPtrT> phi_bb39_28;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_17, &phi_bb39_24, &phi_bb39_25, &phi_bb39_26, &phi_bb39_27, &phi_bb39_28);
    ca_.Goto(&block26, phi_bb39_17, phi_bb39_24, phi_bb39_25, phi_bb39_26, phi_bb39_27, phi_bb39_28);
  }

  TNode<BoolT> phi_bb26_17;
  TNode<IntPtrT> phi_bb26_24;
  TNode<IntPtrT> phi_bb26_25;
  TNode<BoolT> phi_bb26_26;
  TNode<BoolT> phi_bb26_27;
  TNode<IntPtrT> phi_bb26_28;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_17, &phi_bb26_24, &phi_bb26_25, &phi_bb26_26, &phi_bb26_27, &phi_bb26_28);
    ca_.Goto(&block15, phi_bb26_17, tmp60, phi_bb26_24, phi_bb26_25, phi_bb26_26, phi_bb26_27, phi_bb26_28);
  }

  TNode<BoolT> phi_bb14_17;
  TNode<IntPtrT> phi_bb14_22;
  TNode<IntPtrT> phi_bb14_24;
  TNode<IntPtrT> phi_bb14_25;
  TNode<BoolT> phi_bb14_26;
  TNode<BoolT> phi_bb14_27;
  TNode<IntPtrT> phi_bb14_28;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_17, &phi_bb14_22, &phi_bb14_24, &phi_bb14_25, &phi_bb14_26, &phi_bb14_27, &phi_bb14_28);
    ca_.Branch(phi_bb14_27, &block96, std::vector<compiler::Node*>{phi_bb14_17, phi_bb14_22, phi_bb14_24, phi_bb14_25, phi_bb14_26, phi_bb14_27, phi_bb14_28}, &block97, std::vector<compiler::Node*>{phi_bb14_17, phi_bb14_22, phi_bb14_24, phi_bb14_25, phi_bb14_26, phi_bb14_27, phi_bb14_28});
  }

  TNode<BoolT> phi_bb96_17;
  TNode<IntPtrT> phi_bb96_22;
  TNode<IntPtrT> phi_bb96_24;
  TNode<IntPtrT> phi_bb96_25;
  TNode<BoolT> phi_bb96_26;
  TNode<BoolT> phi_bb96_27;
  TNode<IntPtrT> phi_bb96_28;
  TNode<IntPtrT> tmp140;
  TNode<IntPtrT> tmp141;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_17, &phi_bb96_22, &phi_bb96_24, &phi_bb96_25, &phi_bb96_26, &phi_bb96_27, &phi_bb96_28);
    tmp140 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp141 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb96_28}, TNode<IntPtrT>{tmp140});
    ca_.Goto(&block95, phi_bb96_17, phi_bb96_22, phi_bb96_24, phi_bb96_25, phi_bb96_26, phi_bb96_27, phi_bb96_28, tmp141);
  }

  TNode<BoolT> phi_bb97_17;
  TNode<IntPtrT> phi_bb97_22;
  TNode<IntPtrT> phi_bb97_24;
  TNode<IntPtrT> phi_bb97_25;
  TNode<BoolT> phi_bb97_26;
  TNode<BoolT> phi_bb97_27;
  TNode<IntPtrT> phi_bb97_28;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_17, &phi_bb97_22, &phi_bb97_24, &phi_bb97_25, &phi_bb97_26, &phi_bb97_27, &phi_bb97_28);
    ca_.Goto(&block95, phi_bb97_17, phi_bb97_22, phi_bb97_24, phi_bb97_25, phi_bb97_26, phi_bb97_27, phi_bb97_28, phi_bb97_28);
  }

  TNode<BoolT> phi_bb95_17;
  TNode<IntPtrT> phi_bb95_22;
  TNode<IntPtrT> phi_bb95_24;
  TNode<IntPtrT> phi_bb95_25;
  TNode<BoolT> phi_bb95_26;
  TNode<BoolT> phi_bb95_27;
  TNode<IntPtrT> phi_bb95_28;
  TNode<IntPtrT> phi_bb95_29;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_17, &phi_bb95_22, &phi_bb95_24, &phi_bb95_25, &phi_bb95_26, &phi_bb95_27, &phi_bb95_28, &phi_bb95_29);
    ca_.Goto(&block7, tmp41, phi_bb95_29, phi_bb95_17);
  }

  TNode<Object> phi_bb7_15;
  TNode<IntPtrT> phi_bb7_16;
  TNode<BoolT> phi_bb7_17;
  TNode<IntPtrT> tmp142;
  TNode<IntPtrT> tmp143;
  TNode<Object> tmp144;
  TNode<IntPtrT> tmp145;
  TNode<IntPtrT> tmp146;
  if (block7.is_used()) {
    ca_.Bind(&block7, &phi_bb7_15, &phi_bb7_16, &phi_bb7_17);
    tmp142 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp24});
    tmp143 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp20});
    compiler::CodeAssemblerLabel label147(&ca_);
    std::tie(tmp144, tmp145, tmp146) = Subslice_int32_0(state_, TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp32}, TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp34}, TorqueStructUnsafe_0{}}, TNode<IntPtrT>{tmp142}, TNode<IntPtrT>{tmp143}, &label147).Flatten();
    ca_.Goto(&block101, phi_bb7_15, phi_bb7_16, phi_bb7_17);
    if (label147.is_used()) {
      ca_.Bind(&label147);
      ca_.Goto(&block102, phi_bb7_15, phi_bb7_16, phi_bb7_17);
    }
  }

  TNode<Object> phi_bb102_15;
  TNode<IntPtrT> phi_bb102_16;
  TNode<BoolT> phi_bb102_17;
  if (block102.is_used()) {
    ca_.Bind(&block102, &phi_bb102_15, &phi_bb102_16, &phi_bb102_17);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<Object> phi_bb101_15;
  TNode<IntPtrT> phi_bb101_16;
  TNode<BoolT> phi_bb101_17;
  TNode<Int32T> tmp148;
  TNode<BoolT> tmp149;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_15, &phi_bb101_16, &phi_bb101_17);
    tmp148 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0xaull));
    tmp149 = CodeStubAssembler(state_).Int32LessThanOrEqual(TNode<Int32T>{tmp20}, TNode<Int32T>{tmp148});
    ca_.Branch(tmp149, &block103, std::vector<compiler::Node*>{phi_bb101_15, phi_bb101_16, phi_bb101_17}, &block104, std::vector<compiler::Node*>{phi_bb101_15, phi_bb101_16, phi_bb101_17});
  }

  TNode<Object> phi_bb103_15;
  TNode<IntPtrT> phi_bb103_16;
  TNode<BoolT> phi_bb103_17;
  TNode<RawPtrT> tmp150;
  TNode<RawPtrT> tmp151;
  TNode<Object> tmp152;
  TNode<IntPtrT> tmp153;
  if (block103.is_used()) {
    ca_.Bind(&block103, &phi_bb103_15, &phi_bb103_16, &phi_bb103_17);
    tmp150 = CodeStubAssembler(state_).StackSlotPtr((FromConstexpr_constexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x90ull))), (SizeOf_float64_0(state_)));
    tmp151 = (TNode<RawPtrT>{tmp150});
    std::tie(tmp152, tmp153) = NewOffHeapReference_intptr_0(state_, TNode<RawPtrT>{tmp151}).Flatten();
    ca_.Goto(&block105, phi_bb103_15, phi_bb103_16, phi_bb103_17, tmp152, tmp153);
  }

  TNode<Object> phi_bb104_15;
  TNode<IntPtrT> phi_bb104_16;
  TNode<BoolT> phi_bb104_17;
  TNode<IntPtrT> tmp154;
  TNode<IntPtrT> tmp155;
  TNode<IntPtrT> tmp156;
  TNode<IntPtrT> tmp157;
  TNode<IntPtrT> tmp158;
  TNode<IntPtrT> tmp159;
  TNode<IntPtrT> tmp160;
  TNode<IntPtrT> tmp161;
  TNode<IntPtrT> tmp162;
  TNode<IntPtrT> tmp163;
  TNode<UintPtrT> tmp164;
  TNode<ByteArray> tmp165;
  TNode<Object> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<IntPtrT> tmp168;
  TNode<Object> tmp169;
  TNode<IntPtrT> tmp170;
  if (block104.is_used()) {
    ca_.Bind(&block104, &phi_bb104_15, &phi_bb104_16, &phi_bb104_17);
    tmp154 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp155 = CodeStubAssembler(state_).UniqueIntPtrConstant(arraysize(wasm::kGpParamRegisters) - 1);
    tmp156 = Convert_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp157 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp155}, TNode<IntPtrT>{tmp156});
    tmp158 = CodeStubAssembler(state_).UniqueIntPtrConstant(arraysize(wasm::kFpParamRegisters));
    tmp159 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp158}, TNode<IntPtrT>{tmp154});
    tmp160 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp157}, TNode<IntPtrT>{tmp159});
    tmp161 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp20});
    tmp162 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp161}, TNode<IntPtrT>{tmp154});
    tmp163 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp160}, TNode<IntPtrT>{tmp162});
    tmp164 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp163});
    tmp165 = CodeStubAssembler(state_).AllocateByteArray(TNode<UintPtrT>{tmp164});
    std::tie(tmp166, tmp167, tmp168) = FieldSliceByteArrayBytes_0(state_, TNode<ByteArray>{tmp165}).Flatten();
    std::tie(tmp169, tmp170) = NewReference_intptr_0(state_, TNode<Object>{tmp166}, TNode<IntPtrT>{tmp167}).Flatten();
    ca_.Goto(&block105, phi_bb104_15, phi_bb104_16, phi_bb104_17, tmp169, tmp170);
  }

  TNode<Object> phi_bb105_15;
  TNode<IntPtrT> phi_bb105_16;
  TNode<BoolT> phi_bb105_17;
  TNode<Object> phi_bb105_21;
  TNode<IntPtrT> phi_bb105_22;
  TNode<Object> tmp171;
  TNode<IntPtrT> tmp172;
  TNode<IntPtrT> tmp173;
  TNode<IntPtrT> tmp174;
  TNode<IntPtrT> tmp175;
  TNode<IntPtrT> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<BoolT> tmp179;
  TNode<BoolT> tmp180;
  TNode<Int32T> tmp181;
  if (block105.is_used()) {
    ca_.Bind(&block105, &phi_bb105_15, &phi_bb105_16, &phi_bb105_17, &phi_bb105_21, &phi_bb105_22);
    std::tie(tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179) = LocationAllocatorForParams_0(state_, TorqueStructReference_intptr_0{TNode<Object>{phi_bb105_21}, TNode<IntPtrT>{phi_bb105_22}, TorqueStructUnsafe_0{}}).Flatten();
    tmp180 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    tmp181 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    if ((p_switchStack)) {
      ca_.Goto(&block106, phi_bb105_15, phi_bb105_16, phi_bb105_17);
    } else {
      ca_.Goto(&block107, phi_bb105_15, phi_bb105_16, phi_bb105_17);
    }
  }

  TNode<Object> phi_bb106_15;
  TNode<IntPtrT> phi_bb106_16;
  TNode<BoolT> phi_bb106_17;
  TNode<Int32T> tmp182;
  TNode<Int32T> tmp183;
  TNode<BoolT> tmp184;
  if (block106.is_used()) {
    ca_.Bind(&block106, &phi_bb106_15, &phi_bb106_16, &phi_bb106_17);
    tmp182 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp183 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp181}, TNode<Int32T>{tmp182});
    tmp184 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block108, phi_bb106_15, phi_bb106_16, phi_bb106_17, tmp184, tmp183);
  }

  TNode<Object> phi_bb107_15;
  TNode<IntPtrT> phi_bb107_16;
  TNode<BoolT> phi_bb107_17;
  if (block107.is_used()) {
    ca_.Bind(&block107, &phi_bb107_15, &phi_bb107_16, &phi_bb107_17);
    ca_.Goto(&block108, phi_bb107_15, phi_bb107_16, phi_bb107_17, tmp180, tmp181);
  }

  TNode<Object> phi_bb108_15;
  TNode<IntPtrT> phi_bb108_16;
  TNode<BoolT> phi_bb108_17;
  TNode<BoolT> phi_bb108_32;
  TNode<Int32T> phi_bb108_33;
  TNode<Int32T> tmp185;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_15, &phi_bb108_16, &phi_bb108_17, &phi_bb108_32, &phi_bb108_33);
    tmp185 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block111, phi_bb108_15, phi_bb108_16, phi_bb108_17, tmp172, tmp173, tmp174, tmp175, tmp176, tmp178, tmp179, phi_bb108_32, phi_bb108_33, tmp185);
  }

  TNode<Object> phi_bb111_15;
  TNode<IntPtrT> phi_bb111_16;
  TNode<BoolT> phi_bb111_17;
  TNode<IntPtrT> phi_bb111_24;
  TNode<IntPtrT> phi_bb111_25;
  TNode<IntPtrT> phi_bb111_26;
  TNode<IntPtrT> phi_bb111_27;
  TNode<IntPtrT> phi_bb111_28;
  TNode<IntPtrT> phi_bb111_30;
  TNode<BoolT> phi_bb111_31;
  TNode<BoolT> phi_bb111_32;
  TNode<Int32T> phi_bb111_33;
  TNode<Int32T> phi_bb111_34;
  TNode<BoolT> tmp186;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_15, &phi_bb111_16, &phi_bb111_17, &phi_bb111_24, &phi_bb111_25, &phi_bb111_26, &phi_bb111_27, &phi_bb111_28, &phi_bb111_30, &phi_bb111_31, &phi_bb111_32, &phi_bb111_33, &phi_bb111_34);
    tmp186 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{phi_bb111_33}, TNode<Int32T>{tmp20});
    ca_.Branch(tmp186, &block109, std::vector<compiler::Node*>{phi_bb111_15, phi_bb111_16, phi_bb111_17, phi_bb111_24, phi_bb111_25, phi_bb111_26, phi_bb111_27, phi_bb111_28, phi_bb111_30, phi_bb111_31, phi_bb111_32, phi_bb111_33, phi_bb111_34}, &block110, std::vector<compiler::Node*>{phi_bb111_15, phi_bb111_16, phi_bb111_17, phi_bb111_24, phi_bb111_25, phi_bb111_26, phi_bb111_27, phi_bb111_28, phi_bb111_30, phi_bb111_31, phi_bb111_32, phi_bb111_33, phi_bb111_34});
  }

  TNode<Object> phi_bb109_15;
  TNode<IntPtrT> phi_bb109_16;
  TNode<BoolT> phi_bb109_17;
  TNode<IntPtrT> phi_bb109_24;
  TNode<IntPtrT> phi_bb109_25;
  TNode<IntPtrT> phi_bb109_26;
  TNode<IntPtrT> phi_bb109_27;
  TNode<IntPtrT> phi_bb109_28;
  TNode<IntPtrT> phi_bb109_30;
  TNode<BoolT> phi_bb109_31;
  TNode<BoolT> phi_bb109_32;
  TNode<Int32T> phi_bb109_33;
  TNode<Int32T> phi_bb109_34;
  TNode<IntPtrT> tmp187;
  TNode<Object> tmp188;
  TNode<Int32T> tmp189;
  TNode<Int32T> tmp190;
  TNode<IntPtrT> tmp191;
  TNode<IntPtrT> tmp192;
  TNode<IntPtrT> tmp193;
  TNode<Object> tmp194;
  TNode<IntPtrT> tmp195;
  TNode<Int32T> tmp196;
  TNode<Int32T> tmp197;
  TNode<BoolT> tmp198;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_15, &phi_bb109_16, &phi_bb109_17, &phi_bb109_24, &phi_bb109_25, &phi_bb109_26, &phi_bb109_27, &phi_bb109_28, &phi_bb109_30, &phi_bb109_31, &phi_bb109_32, &phi_bb109_33, &phi_bb109_34);
    tmp187 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb109_34});
    tmp188 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{p_arguments.frame}, TNode<RawPtrT>{p_arguments.base}, TNode<IntPtrT>{p_arguments.length}, TNode<IntPtrT>{p_arguments.actual_count}}, TNode<IntPtrT>{tmp187});
    tmp189 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp190 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{phi_bb109_33}, TNode<Int32T>{tmp189});
    tmp191 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb109_33});
    tmp192 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{tmp191});
    tmp193 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp145}, TNode<IntPtrT>{tmp192});
    std::tie(tmp194, tmp195) = NewReference_int32_0(state_, TNode<Object>{tmp144}, TNode<IntPtrT>{tmp193}).Flatten();
    tmp196 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp194, tmp195});
    tmp197 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp198 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp196}, TNode<Int32T>{tmp197});
    ca_.Branch(tmp198, &block114, std::vector<compiler::Node*>{phi_bb109_15, phi_bb109_16, phi_bb109_17, phi_bb109_24, phi_bb109_25, phi_bb109_26, phi_bb109_27, phi_bb109_28, phi_bb109_30, phi_bb109_31, phi_bb109_32, phi_bb109_34}, &block115, std::vector<compiler::Node*>{phi_bb109_15, phi_bb109_16, phi_bb109_17, phi_bb109_24, phi_bb109_25, phi_bb109_26, phi_bb109_27, phi_bb109_28, phi_bb109_30, phi_bb109_31, phi_bb109_32, phi_bb109_34});
  }

  TNode<Object> phi_bb114_15;
  TNode<IntPtrT> phi_bb114_16;
  TNode<BoolT> phi_bb114_17;
  TNode<IntPtrT> phi_bb114_24;
  TNode<IntPtrT> phi_bb114_25;
  TNode<IntPtrT> phi_bb114_26;
  TNode<IntPtrT> phi_bb114_27;
  TNode<IntPtrT> phi_bb114_28;
  TNode<IntPtrT> phi_bb114_30;
  TNode<BoolT> phi_bb114_31;
  TNode<BoolT> phi_bb114_32;
  TNode<Int32T> phi_bb114_34;
  TNode<IntPtrT> tmp199;
  TNode<IntPtrT> tmp200;
  TNode<IntPtrT> tmp201;
  TNode<BoolT> tmp202;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_15, &phi_bb114_16, &phi_bb114_17, &phi_bb114_24, &phi_bb114_25, &phi_bb114_26, &phi_bb114_27, &phi_bb114_28, &phi_bb114_30, &phi_bb114_31, &phi_bb114_32, &phi_bb114_34);
    tmp199 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp200 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb114_24}, TNode<IntPtrT>{tmp199});
    tmp201 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp202 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb114_24}, TNode<IntPtrT>{tmp201});
    ca_.Branch(tmp202, &block118, std::vector<compiler::Node*>{phi_bb114_15, phi_bb114_16, phi_bb114_17, phi_bb114_25, phi_bb114_26, phi_bb114_27, phi_bb114_28, phi_bb114_30, phi_bb114_31, phi_bb114_32, phi_bb114_34}, &block119, std::vector<compiler::Node*>{phi_bb114_15, phi_bb114_16, phi_bb114_17, phi_bb114_25, phi_bb114_26, phi_bb114_27, phi_bb114_28, phi_bb114_30, phi_bb114_31, phi_bb114_32, phi_bb114_34});
  }

  TNode<Object> phi_bb118_15;
  TNode<IntPtrT> phi_bb118_16;
  TNode<BoolT> phi_bb118_17;
  TNode<IntPtrT> phi_bb118_25;
  TNode<IntPtrT> phi_bb118_26;
  TNode<IntPtrT> phi_bb118_27;
  TNode<IntPtrT> phi_bb118_28;
  TNode<IntPtrT> phi_bb118_30;
  TNode<BoolT> phi_bb118_31;
  TNode<BoolT> phi_bb118_32;
  TNode<Int32T> phi_bb118_34;
  TNode<Object> tmp203;
  TNode<IntPtrT> tmp204;
  TNode<IntPtrT> tmp205;
  TNode<IntPtrT> tmp206;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_15, &phi_bb118_16, &phi_bb118_17, &phi_bb118_25, &phi_bb118_26, &phi_bb118_27, &phi_bb118_28, &phi_bb118_30, &phi_bb118_31, &phi_bb118_32, &phi_bb118_34);
    std::tie(tmp203, tmp204) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb118_26}).Flatten();
    tmp205 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp206 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb118_26}, TNode<IntPtrT>{tmp205});
    ca_.Goto(&block117, phi_bb118_15, phi_bb118_16, phi_bb118_17, phi_bb118_25, tmp206, phi_bb118_27, phi_bb118_28, phi_bb118_30, phi_bb118_31, phi_bb118_32, phi_bb118_34, tmp203, tmp204);
  }

  TNode<Object> phi_bb119_15;
  TNode<IntPtrT> phi_bb119_16;
  TNode<BoolT> phi_bb119_17;
  TNode<IntPtrT> phi_bb119_25;
  TNode<IntPtrT> phi_bb119_26;
  TNode<IntPtrT> phi_bb119_27;
  TNode<IntPtrT> phi_bb119_28;
  TNode<IntPtrT> phi_bb119_30;
  TNode<BoolT> phi_bb119_31;
  TNode<BoolT> phi_bb119_32;
  TNode<Int32T> phi_bb119_34;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_15, &phi_bb119_16, &phi_bb119_17, &phi_bb119_25, &phi_bb119_26, &phi_bb119_27, &phi_bb119_28, &phi_bb119_30, &phi_bb119_31, &phi_bb119_32, &phi_bb119_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block121, phi_bb119_15, phi_bb119_16, phi_bb119_17, phi_bb119_25, phi_bb119_26, phi_bb119_27, phi_bb119_28, phi_bb119_30, phi_bb119_31, phi_bb119_32, phi_bb119_34);
    } else {
      ca_.Goto(&block122, phi_bb119_15, phi_bb119_16, phi_bb119_17, phi_bb119_25, phi_bb119_26, phi_bb119_27, phi_bb119_28, phi_bb119_30, phi_bb119_31, phi_bb119_32, phi_bb119_34);
    }
  }

  TNode<Object> phi_bb121_15;
  TNode<IntPtrT> phi_bb121_16;
  TNode<BoolT> phi_bb121_17;
  TNode<IntPtrT> phi_bb121_25;
  TNode<IntPtrT> phi_bb121_26;
  TNode<IntPtrT> phi_bb121_27;
  TNode<IntPtrT> phi_bb121_28;
  TNode<IntPtrT> phi_bb121_30;
  TNode<BoolT> phi_bb121_31;
  TNode<BoolT> phi_bb121_32;
  TNode<Int32T> phi_bb121_34;
  TNode<Object> tmp207;
  TNode<IntPtrT> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<IntPtrT> tmp210;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_15, &phi_bb121_16, &phi_bb121_17, &phi_bb121_25, &phi_bb121_26, &phi_bb121_27, &phi_bb121_28, &phi_bb121_30, &phi_bb121_31, &phi_bb121_32, &phi_bb121_34);
    std::tie(tmp207, tmp208) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb121_28}).Flatten();
    tmp209 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp210 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb121_28}, TNode<IntPtrT>{tmp209});
    ca_.Goto(&block120, phi_bb121_15, phi_bb121_16, phi_bb121_17, phi_bb121_25, phi_bb121_26, phi_bb121_27, tmp210, phi_bb121_30, phi_bb121_31, phi_bb121_32, phi_bb121_34, tmp207, tmp208);
  }

  TNode<Object> phi_bb122_15;
  TNode<IntPtrT> phi_bb122_16;
  TNode<BoolT> phi_bb122_17;
  TNode<IntPtrT> phi_bb122_25;
  TNode<IntPtrT> phi_bb122_26;
  TNode<IntPtrT> phi_bb122_27;
  TNode<IntPtrT> phi_bb122_28;
  TNode<IntPtrT> phi_bb122_30;
  TNode<BoolT> phi_bb122_31;
  TNode<BoolT> phi_bb122_32;
  TNode<Int32T> phi_bb122_34;
  TNode<IntPtrT> tmp211;
  TNode<BoolT> tmp212;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_15, &phi_bb122_16, &phi_bb122_17, &phi_bb122_25, &phi_bb122_26, &phi_bb122_27, &phi_bb122_28, &phi_bb122_30, &phi_bb122_31, &phi_bb122_32, &phi_bb122_34);
    tmp211 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp212 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb122_30}, TNode<IntPtrT>{tmp211});
    ca_.Branch(tmp212, &block124, std::vector<compiler::Node*>{phi_bb122_15, phi_bb122_16, phi_bb122_17, phi_bb122_25, phi_bb122_26, phi_bb122_27, phi_bb122_28, phi_bb122_30, phi_bb122_31, phi_bb122_32, phi_bb122_34}, &block125, std::vector<compiler::Node*>{phi_bb122_15, phi_bb122_16, phi_bb122_17, phi_bb122_25, phi_bb122_26, phi_bb122_27, phi_bb122_28, phi_bb122_30, phi_bb122_31, phi_bb122_32, phi_bb122_34});
  }

  TNode<Object> phi_bb124_15;
  TNode<IntPtrT> phi_bb124_16;
  TNode<BoolT> phi_bb124_17;
  TNode<IntPtrT> phi_bb124_25;
  TNode<IntPtrT> phi_bb124_26;
  TNode<IntPtrT> phi_bb124_27;
  TNode<IntPtrT> phi_bb124_28;
  TNode<IntPtrT> phi_bb124_30;
  TNode<BoolT> phi_bb124_31;
  TNode<BoolT> phi_bb124_32;
  TNode<Int32T> phi_bb124_34;
  TNode<Object> tmp213;
  TNode<IntPtrT> tmp214;
  TNode<IntPtrT> tmp215;
  TNode<BoolT> tmp216;
  if (block124.is_used()) {
    ca_.Bind(&block124, &phi_bb124_15, &phi_bb124_16, &phi_bb124_17, &phi_bb124_25, &phi_bb124_26, &phi_bb124_27, &phi_bb124_28, &phi_bb124_30, &phi_bb124_31, &phi_bb124_32, &phi_bb124_34);
    std::tie(tmp213, tmp214) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb124_30}).Flatten();
    tmp215 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp216 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block120, phi_bb124_15, phi_bb124_16, phi_bb124_17, phi_bb124_25, phi_bb124_26, phi_bb124_27, phi_bb124_28, tmp215, tmp216, phi_bb124_32, phi_bb124_34, tmp213, tmp214);
  }

  TNode<Object> phi_bb125_15;
  TNode<IntPtrT> phi_bb125_16;
  TNode<BoolT> phi_bb125_17;
  TNode<IntPtrT> phi_bb125_25;
  TNode<IntPtrT> phi_bb125_26;
  TNode<IntPtrT> phi_bb125_27;
  TNode<IntPtrT> phi_bb125_28;
  TNode<IntPtrT> phi_bb125_30;
  TNode<BoolT> phi_bb125_31;
  TNode<BoolT> phi_bb125_32;
  TNode<Int32T> phi_bb125_34;
  TNode<Object> tmp217;
  TNode<IntPtrT> tmp218;
  TNode<IntPtrT> tmp219;
  TNode<IntPtrT> tmp220;
  TNode<IntPtrT> tmp221;
  TNode<IntPtrT> tmp222;
  TNode<BoolT> tmp223;
  if (block125.is_used()) {
    ca_.Bind(&block125, &phi_bb125_15, &phi_bb125_16, &phi_bb125_17, &phi_bb125_25, &phi_bb125_26, &phi_bb125_27, &phi_bb125_28, &phi_bb125_30, &phi_bb125_31, &phi_bb125_32, &phi_bb125_34);
    std::tie(tmp217, tmp218) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb125_28}).Flatten();
    tmp219 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp220 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb125_28}, TNode<IntPtrT>{tmp219});
    tmp221 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp222 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp220}, TNode<IntPtrT>{tmp221});
    tmp223 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block120, phi_bb125_15, phi_bb125_16, phi_bb125_17, phi_bb125_25, phi_bb125_26, phi_bb125_27, tmp222, tmp220, tmp223, phi_bb125_32, phi_bb125_34, tmp217, tmp218);
  }

  TNode<Object> phi_bb120_15;
  TNode<IntPtrT> phi_bb120_16;
  TNode<BoolT> phi_bb120_17;
  TNode<IntPtrT> phi_bb120_25;
  TNode<IntPtrT> phi_bb120_26;
  TNode<IntPtrT> phi_bb120_27;
  TNode<IntPtrT> phi_bb120_28;
  TNode<IntPtrT> phi_bb120_30;
  TNode<BoolT> phi_bb120_31;
  TNode<BoolT> phi_bb120_32;
  TNode<Int32T> phi_bb120_34;
  TNode<Object> phi_bb120_37;
  TNode<IntPtrT> phi_bb120_38;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_15, &phi_bb120_16, &phi_bb120_17, &phi_bb120_25, &phi_bb120_26, &phi_bb120_27, &phi_bb120_28, &phi_bb120_30, &phi_bb120_31, &phi_bb120_32, &phi_bb120_34, &phi_bb120_37, &phi_bb120_38);
    ca_.Goto(&block117, phi_bb120_15, phi_bb120_16, phi_bb120_17, phi_bb120_25, phi_bb120_26, phi_bb120_27, phi_bb120_28, phi_bb120_30, phi_bb120_31, phi_bb120_32, phi_bb120_34, phi_bb120_37, phi_bb120_38);
  }

  TNode<Object> phi_bb117_15;
  TNode<IntPtrT> phi_bb117_16;
  TNode<BoolT> phi_bb117_17;
  TNode<IntPtrT> phi_bb117_25;
  TNode<IntPtrT> phi_bb117_26;
  TNode<IntPtrT> phi_bb117_27;
  TNode<IntPtrT> phi_bb117_28;
  TNode<IntPtrT> phi_bb117_30;
  TNode<BoolT> phi_bb117_31;
  TNode<BoolT> phi_bb117_32;
  TNode<Int32T> phi_bb117_34;
  TNode<Object> phi_bb117_37;
  TNode<IntPtrT> phi_bb117_38;
  TNode<Smi> tmp224;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_15, &phi_bb117_16, &phi_bb117_17, &phi_bb117_25, &phi_bb117_26, &phi_bb117_27, &phi_bb117_28, &phi_bb117_30, &phi_bb117_31, &phi_bb117_32, &phi_bb117_34, &phi_bb117_37, &phi_bb117_38);
    compiler::CodeAssemblerLabel label225(&ca_);
    tmp224 = Cast_Smi_0(state_, TNode<Object>{tmp188}, &label225);
    ca_.Goto(&block128, phi_bb117_15, phi_bb117_16, phi_bb117_17, phi_bb117_25, phi_bb117_26, phi_bb117_27, phi_bb117_28, phi_bb117_30, phi_bb117_31, phi_bb117_32, phi_bb117_34, phi_bb117_37, phi_bb117_38);
    if (label225.is_used()) {
      ca_.Bind(&label225);
      ca_.Goto(&block129, phi_bb117_15, phi_bb117_16, phi_bb117_17, phi_bb117_25, phi_bb117_26, phi_bb117_27, phi_bb117_28, phi_bb117_30, phi_bb117_31, phi_bb117_32, phi_bb117_34, phi_bb117_37, phi_bb117_38);
    }
  }

  TNode<Object> phi_bb129_15;
  TNode<IntPtrT> phi_bb129_16;
  TNode<BoolT> phi_bb129_17;
  TNode<IntPtrT> phi_bb129_25;
  TNode<IntPtrT> phi_bb129_26;
  TNode<IntPtrT> phi_bb129_27;
  TNode<IntPtrT> phi_bb129_28;
  TNode<IntPtrT> phi_bb129_30;
  TNode<BoolT> phi_bb129_31;
  TNode<BoolT> phi_bb129_32;
  TNode<Int32T> phi_bb129_34;
  TNode<Object> phi_bb129_37;
  TNode<IntPtrT> phi_bb129_38;
  TNode<Int32T> tmp226;
  TNode<Uint32T> tmp227;
  TNode<IntPtrT> tmp228;
  if (block129.is_used()) {
    ca_.Bind(&block129, &phi_bb129_15, &phi_bb129_16, &phi_bb129_17, &phi_bb129_25, &phi_bb129_26, &phi_bb129_27, &phi_bb129_28, &phi_bb129_30, &phi_bb129_31, &phi_bb129_32, &phi_bb129_34, &phi_bb129_37, &phi_bb129_38);
    tmp226 = ca_.CallStub<Int32T>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmTaggedNonSmiToInt32), p_context, ca_.UncheckedCast<HeapObject>(tmp188));
    tmp227 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp226});
    tmp228 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{tmp227});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb129_37, phi_bb129_38}, tmp228);
    ca_.Goto(&block126, phi_bb129_15, phi_bb129_16, phi_bb129_17, phi_bb129_25, phi_bb129_26, phi_bb129_27, phi_bb129_28, phi_bb129_30, phi_bb129_31, phi_bb129_32, phi_bb129_34, phi_bb129_37, phi_bb129_38);
  }

  TNode<Object> phi_bb128_15;
  TNode<IntPtrT> phi_bb128_16;
  TNode<BoolT> phi_bb128_17;
  TNode<IntPtrT> phi_bb128_25;
  TNode<IntPtrT> phi_bb128_26;
  TNode<IntPtrT> phi_bb128_27;
  TNode<IntPtrT> phi_bb128_28;
  TNode<IntPtrT> phi_bb128_30;
  TNode<BoolT> phi_bb128_31;
  TNode<BoolT> phi_bb128_32;
  TNode<Int32T> phi_bb128_34;
  TNode<Object> phi_bb128_37;
  TNode<IntPtrT> phi_bb128_38;
  TNode<Int32T> tmp229;
  TNode<Uint32T> tmp230;
  TNode<IntPtrT> tmp231;
  if (block128.is_used()) {
    ca_.Bind(&block128, &phi_bb128_15, &phi_bb128_16, &phi_bb128_17, &phi_bb128_25, &phi_bb128_26, &phi_bb128_27, &phi_bb128_28, &phi_bb128_30, &phi_bb128_31, &phi_bb128_32, &phi_bb128_34, &phi_bb128_37, &phi_bb128_38);
    tmp229 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp224});
    tmp230 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp229});
    tmp231 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{tmp230});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb128_37, phi_bb128_38}, tmp231);
    ca_.Goto(&block126, phi_bb128_15, phi_bb128_16, phi_bb128_17, phi_bb128_25, phi_bb128_26, phi_bb128_27, phi_bb128_28, phi_bb128_30, phi_bb128_31, phi_bb128_32, phi_bb128_34, phi_bb128_37, phi_bb128_38);
  }

  TNode<Object> phi_bb126_15;
  TNode<IntPtrT> phi_bb126_16;
  TNode<BoolT> phi_bb126_17;
  TNode<IntPtrT> phi_bb126_25;
  TNode<IntPtrT> phi_bb126_26;
  TNode<IntPtrT> phi_bb126_27;
  TNode<IntPtrT> phi_bb126_28;
  TNode<IntPtrT> phi_bb126_30;
  TNode<BoolT> phi_bb126_31;
  TNode<BoolT> phi_bb126_32;
  TNode<Int32T> phi_bb126_34;
  TNode<Object> phi_bb126_37;
  TNode<IntPtrT> phi_bb126_38;
  if (block126.is_used()) {
    ca_.Bind(&block126, &phi_bb126_15, &phi_bb126_16, &phi_bb126_17, &phi_bb126_25, &phi_bb126_26, &phi_bb126_27, &phi_bb126_28, &phi_bb126_30, &phi_bb126_31, &phi_bb126_32, &phi_bb126_34, &phi_bb126_37, &phi_bb126_38);
    ca_.Goto(&block116, phi_bb126_15, phi_bb126_16, phi_bb126_17, tmp200, phi_bb126_25, phi_bb126_26, phi_bb126_27, phi_bb126_28, phi_bb126_30, phi_bb126_31, phi_bb126_32, phi_bb126_34);
  }

  TNode<Object> phi_bb115_15;
  TNode<IntPtrT> phi_bb115_16;
  TNode<BoolT> phi_bb115_17;
  TNode<IntPtrT> phi_bb115_24;
  TNode<IntPtrT> phi_bb115_25;
  TNode<IntPtrT> phi_bb115_26;
  TNode<IntPtrT> phi_bb115_27;
  TNode<IntPtrT> phi_bb115_28;
  TNode<IntPtrT> phi_bb115_30;
  TNode<BoolT> phi_bb115_31;
  TNode<BoolT> phi_bb115_32;
  TNode<Int32T> phi_bb115_34;
  TNode<Int32T> tmp232;
  TNode<BoolT> tmp233;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_15, &phi_bb115_16, &phi_bb115_17, &phi_bb115_24, &phi_bb115_25, &phi_bb115_26, &phi_bb115_27, &phi_bb115_28, &phi_bb115_30, &phi_bb115_31, &phi_bb115_32, &phi_bb115_34);
    tmp232 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp233 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp196}, TNode<Int32T>{tmp232});
    ca_.Branch(tmp233, &block130, std::vector<compiler::Node*>{phi_bb115_15, phi_bb115_16, phi_bb115_17, phi_bb115_24, phi_bb115_25, phi_bb115_26, phi_bb115_27, phi_bb115_28, phi_bb115_30, phi_bb115_31, phi_bb115_32, phi_bb115_34}, &block131, std::vector<compiler::Node*>{phi_bb115_15, phi_bb115_16, phi_bb115_17, phi_bb115_24, phi_bb115_25, phi_bb115_26, phi_bb115_27, phi_bb115_28, phi_bb115_30, phi_bb115_31, phi_bb115_32, phi_bb115_34});
  }

  TNode<Object> phi_bb130_15;
  TNode<IntPtrT> phi_bb130_16;
  TNode<BoolT> phi_bb130_17;
  TNode<IntPtrT> phi_bb130_24;
  TNode<IntPtrT> phi_bb130_25;
  TNode<IntPtrT> phi_bb130_26;
  TNode<IntPtrT> phi_bb130_27;
  TNode<IntPtrT> phi_bb130_28;
  TNode<IntPtrT> phi_bb130_30;
  TNode<BoolT> phi_bb130_31;
  TNode<BoolT> phi_bb130_32;
  TNode<Int32T> phi_bb130_34;
  TNode<IntPtrT> tmp234;
  TNode<IntPtrT> tmp235;
  TNode<IntPtrT> tmp236;
  TNode<BoolT> tmp237;
  if (block130.is_used()) {
    ca_.Bind(&block130, &phi_bb130_15, &phi_bb130_16, &phi_bb130_17, &phi_bb130_24, &phi_bb130_25, &phi_bb130_26, &phi_bb130_27, &phi_bb130_28, &phi_bb130_30, &phi_bb130_31, &phi_bb130_32, &phi_bb130_34);
    tmp234 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp235 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb130_25}, TNode<IntPtrT>{tmp234});
    tmp236 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp237 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb130_25}, TNode<IntPtrT>{tmp236});
    ca_.Branch(tmp237, &block134, std::vector<compiler::Node*>{phi_bb130_15, phi_bb130_16, phi_bb130_17, phi_bb130_24, phi_bb130_26, phi_bb130_27, phi_bb130_28, phi_bb130_30, phi_bb130_31, phi_bb130_32, phi_bb130_34}, &block135, std::vector<compiler::Node*>{phi_bb130_15, phi_bb130_16, phi_bb130_17, phi_bb130_24, phi_bb130_26, phi_bb130_27, phi_bb130_28, phi_bb130_30, phi_bb130_31, phi_bb130_32, phi_bb130_34});
  }

  TNode<Object> phi_bb134_15;
  TNode<IntPtrT> phi_bb134_16;
  TNode<BoolT> phi_bb134_17;
  TNode<IntPtrT> phi_bb134_24;
  TNode<IntPtrT> phi_bb134_26;
  TNode<IntPtrT> phi_bb134_27;
  TNode<IntPtrT> phi_bb134_28;
  TNode<IntPtrT> phi_bb134_30;
  TNode<BoolT> phi_bb134_31;
  TNode<BoolT> phi_bb134_32;
  TNode<Int32T> phi_bb134_34;
  TNode<Object> tmp238;
  TNode<IntPtrT> tmp239;
  TNode<IntPtrT> tmp240;
  TNode<IntPtrT> tmp241;
  if (block134.is_used()) {
    ca_.Bind(&block134, &phi_bb134_15, &phi_bb134_16, &phi_bb134_17, &phi_bb134_24, &phi_bb134_26, &phi_bb134_27, &phi_bb134_28, &phi_bb134_30, &phi_bb134_31, &phi_bb134_32, &phi_bb134_34);
    std::tie(tmp238, tmp239) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb134_27}).Flatten();
    tmp240 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp241 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb134_27}, TNode<IntPtrT>{tmp240});
    ca_.Goto(&block133, phi_bb134_15, phi_bb134_16, phi_bb134_17, phi_bb134_24, phi_bb134_26, tmp241, phi_bb134_28, phi_bb134_30, phi_bb134_31, phi_bb134_32, phi_bb134_34, tmp238, tmp239);
  }

  TNode<Object> phi_bb135_15;
  TNode<IntPtrT> phi_bb135_16;
  TNode<BoolT> phi_bb135_17;
  TNode<IntPtrT> phi_bb135_24;
  TNode<IntPtrT> phi_bb135_26;
  TNode<IntPtrT> phi_bb135_27;
  TNode<IntPtrT> phi_bb135_28;
  TNode<IntPtrT> phi_bb135_30;
  TNode<BoolT> phi_bb135_31;
  TNode<BoolT> phi_bb135_32;
  TNode<Int32T> phi_bb135_34;
  if (block135.is_used()) {
    ca_.Bind(&block135, &phi_bb135_15, &phi_bb135_16, &phi_bb135_17, &phi_bb135_24, &phi_bb135_26, &phi_bb135_27, &phi_bb135_28, &phi_bb135_30, &phi_bb135_31, &phi_bb135_32, &phi_bb135_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block137, phi_bb135_15, phi_bb135_16, phi_bb135_17, phi_bb135_24, phi_bb135_26, phi_bb135_27, phi_bb135_28, phi_bb135_30, phi_bb135_31, phi_bb135_32, phi_bb135_34);
    } else {
      ca_.Goto(&block138, phi_bb135_15, phi_bb135_16, phi_bb135_17, phi_bb135_24, phi_bb135_26, phi_bb135_27, phi_bb135_28, phi_bb135_30, phi_bb135_31, phi_bb135_32, phi_bb135_34);
    }
  }

  TNode<Object> phi_bb137_15;
  TNode<IntPtrT> phi_bb137_16;
  TNode<BoolT> phi_bb137_17;
  TNode<IntPtrT> phi_bb137_24;
  TNode<IntPtrT> phi_bb137_26;
  TNode<IntPtrT> phi_bb137_27;
  TNode<IntPtrT> phi_bb137_28;
  TNode<IntPtrT> phi_bb137_30;
  TNode<BoolT> phi_bb137_31;
  TNode<BoolT> phi_bb137_32;
  TNode<Int32T> phi_bb137_34;
  TNode<Object> tmp242;
  TNode<IntPtrT> tmp243;
  TNode<IntPtrT> tmp244;
  TNode<IntPtrT> tmp245;
  if (block137.is_used()) {
    ca_.Bind(&block137, &phi_bb137_15, &phi_bb137_16, &phi_bb137_17, &phi_bb137_24, &phi_bb137_26, &phi_bb137_27, &phi_bb137_28, &phi_bb137_30, &phi_bb137_31, &phi_bb137_32, &phi_bb137_34);
    std::tie(tmp242, tmp243) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb137_28}).Flatten();
    tmp244 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp245 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb137_28}, TNode<IntPtrT>{tmp244});
    ca_.Goto(&block136, phi_bb137_15, phi_bb137_16, phi_bb137_17, phi_bb137_24, phi_bb137_26, phi_bb137_27, tmp245, phi_bb137_30, phi_bb137_31, phi_bb137_32, phi_bb137_34, tmp242, tmp243);
  }

  TNode<Object> phi_bb138_15;
  TNode<IntPtrT> phi_bb138_16;
  TNode<BoolT> phi_bb138_17;
  TNode<IntPtrT> phi_bb138_24;
  TNode<IntPtrT> phi_bb138_26;
  TNode<IntPtrT> phi_bb138_27;
  TNode<IntPtrT> phi_bb138_28;
  TNode<IntPtrT> phi_bb138_30;
  TNode<BoolT> phi_bb138_31;
  TNode<BoolT> phi_bb138_32;
  TNode<Int32T> phi_bb138_34;
  TNode<IntPtrT> tmp246;
  TNode<BoolT> tmp247;
  if (block138.is_used()) {
    ca_.Bind(&block138, &phi_bb138_15, &phi_bb138_16, &phi_bb138_17, &phi_bb138_24, &phi_bb138_26, &phi_bb138_27, &phi_bb138_28, &phi_bb138_30, &phi_bb138_31, &phi_bb138_32, &phi_bb138_34);
    tmp246 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp247 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb138_30}, TNode<IntPtrT>{tmp246});
    ca_.Branch(tmp247, &block140, std::vector<compiler::Node*>{phi_bb138_15, phi_bb138_16, phi_bb138_17, phi_bb138_24, phi_bb138_26, phi_bb138_27, phi_bb138_28, phi_bb138_30, phi_bb138_31, phi_bb138_32, phi_bb138_34}, &block141, std::vector<compiler::Node*>{phi_bb138_15, phi_bb138_16, phi_bb138_17, phi_bb138_24, phi_bb138_26, phi_bb138_27, phi_bb138_28, phi_bb138_30, phi_bb138_31, phi_bb138_32, phi_bb138_34});
  }

  TNode<Object> phi_bb140_15;
  TNode<IntPtrT> phi_bb140_16;
  TNode<BoolT> phi_bb140_17;
  TNode<IntPtrT> phi_bb140_24;
  TNode<IntPtrT> phi_bb140_26;
  TNode<IntPtrT> phi_bb140_27;
  TNode<IntPtrT> phi_bb140_28;
  TNode<IntPtrT> phi_bb140_30;
  TNode<BoolT> phi_bb140_31;
  TNode<BoolT> phi_bb140_32;
  TNode<Int32T> phi_bb140_34;
  TNode<Object> tmp248;
  TNode<IntPtrT> tmp249;
  TNode<IntPtrT> tmp250;
  TNode<BoolT> tmp251;
  if (block140.is_used()) {
    ca_.Bind(&block140, &phi_bb140_15, &phi_bb140_16, &phi_bb140_17, &phi_bb140_24, &phi_bb140_26, &phi_bb140_27, &phi_bb140_28, &phi_bb140_30, &phi_bb140_31, &phi_bb140_32, &phi_bb140_34);
    std::tie(tmp248, tmp249) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb140_30}).Flatten();
    tmp250 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp251 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block136, phi_bb140_15, phi_bb140_16, phi_bb140_17, phi_bb140_24, phi_bb140_26, phi_bb140_27, phi_bb140_28, tmp250, tmp251, phi_bb140_32, phi_bb140_34, tmp248, tmp249);
  }

  TNode<Object> phi_bb141_15;
  TNode<IntPtrT> phi_bb141_16;
  TNode<BoolT> phi_bb141_17;
  TNode<IntPtrT> phi_bb141_24;
  TNode<IntPtrT> phi_bb141_26;
  TNode<IntPtrT> phi_bb141_27;
  TNode<IntPtrT> phi_bb141_28;
  TNode<IntPtrT> phi_bb141_30;
  TNode<BoolT> phi_bb141_31;
  TNode<BoolT> phi_bb141_32;
  TNode<Int32T> phi_bb141_34;
  TNode<Object> tmp252;
  TNode<IntPtrT> tmp253;
  TNode<IntPtrT> tmp254;
  TNode<IntPtrT> tmp255;
  TNode<IntPtrT> tmp256;
  TNode<IntPtrT> tmp257;
  TNode<BoolT> tmp258;
  if (block141.is_used()) {
    ca_.Bind(&block141, &phi_bb141_15, &phi_bb141_16, &phi_bb141_17, &phi_bb141_24, &phi_bb141_26, &phi_bb141_27, &phi_bb141_28, &phi_bb141_30, &phi_bb141_31, &phi_bb141_32, &phi_bb141_34);
    std::tie(tmp252, tmp253) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb141_28}).Flatten();
    tmp254 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp255 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb141_28}, TNode<IntPtrT>{tmp254});
    tmp256 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp257 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp255}, TNode<IntPtrT>{tmp256});
    tmp258 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block136, phi_bb141_15, phi_bb141_16, phi_bb141_17, phi_bb141_24, phi_bb141_26, phi_bb141_27, tmp257, tmp255, tmp258, phi_bb141_32, phi_bb141_34, tmp252, tmp253);
  }

  TNode<Object> phi_bb136_15;
  TNode<IntPtrT> phi_bb136_16;
  TNode<BoolT> phi_bb136_17;
  TNode<IntPtrT> phi_bb136_24;
  TNode<IntPtrT> phi_bb136_26;
  TNode<IntPtrT> phi_bb136_27;
  TNode<IntPtrT> phi_bb136_28;
  TNode<IntPtrT> phi_bb136_30;
  TNode<BoolT> phi_bb136_31;
  TNode<BoolT> phi_bb136_32;
  TNode<Int32T> phi_bb136_34;
  TNode<Object> phi_bb136_37;
  TNode<IntPtrT> phi_bb136_38;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_15, &phi_bb136_16, &phi_bb136_17, &phi_bb136_24, &phi_bb136_26, &phi_bb136_27, &phi_bb136_28, &phi_bb136_30, &phi_bb136_31, &phi_bb136_32, &phi_bb136_34, &phi_bb136_37, &phi_bb136_38);
    ca_.Goto(&block133, phi_bb136_15, phi_bb136_16, phi_bb136_17, phi_bb136_24, phi_bb136_26, phi_bb136_27, phi_bb136_28, phi_bb136_30, phi_bb136_31, phi_bb136_32, phi_bb136_34, phi_bb136_37, phi_bb136_38);
  }

  TNode<Object> phi_bb133_15;
  TNode<IntPtrT> phi_bb133_16;
  TNode<BoolT> phi_bb133_17;
  TNode<IntPtrT> phi_bb133_24;
  TNode<IntPtrT> phi_bb133_26;
  TNode<IntPtrT> phi_bb133_27;
  TNode<IntPtrT> phi_bb133_28;
  TNode<IntPtrT> phi_bb133_30;
  TNode<BoolT> phi_bb133_31;
  TNode<BoolT> phi_bb133_32;
  TNode<Int32T> phi_bb133_34;
  TNode<Object> phi_bb133_37;
  TNode<IntPtrT> phi_bb133_38;
  TNode<Float32T> tmp259;
  TNode<Uint32T> tmp260;
  TNode<IntPtrT> tmp261;
  if (block133.is_used()) {
    ca_.Bind(&block133, &phi_bb133_15, &phi_bb133_16, &phi_bb133_17, &phi_bb133_24, &phi_bb133_26, &phi_bb133_27, &phi_bb133_28, &phi_bb133_30, &phi_bb133_31, &phi_bb133_32, &phi_bb133_34, &phi_bb133_37, &phi_bb133_38);
    tmp259 = ca_.CallStub<Float32T>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmTaggedToFloat32), p_context, tmp188);
    tmp260 = Bitcast_uint32_float32_0(state_, TNode<Float32T>{tmp259});
    tmp261 = Convert_intptr_uint32_0(state_, TNode<Uint32T>{tmp260});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb133_37, phi_bb133_38}, tmp261);
    ca_.Goto(&block132, phi_bb133_15, phi_bb133_16, phi_bb133_17, phi_bb133_24, tmp235, phi_bb133_26, phi_bb133_27, phi_bb133_28, phi_bb133_30, phi_bb133_31, phi_bb133_32, phi_bb133_34);
  }

  TNode<Object> phi_bb131_15;
  TNode<IntPtrT> phi_bb131_16;
  TNode<BoolT> phi_bb131_17;
  TNode<IntPtrT> phi_bb131_24;
  TNode<IntPtrT> phi_bb131_25;
  TNode<IntPtrT> phi_bb131_26;
  TNode<IntPtrT> phi_bb131_27;
  TNode<IntPtrT> phi_bb131_28;
  TNode<IntPtrT> phi_bb131_30;
  TNode<BoolT> phi_bb131_31;
  TNode<BoolT> phi_bb131_32;
  TNode<Int32T> phi_bb131_34;
  TNode<Int32T> tmp262;
  TNode<BoolT> tmp263;
  if (block131.is_used()) {
    ca_.Bind(&block131, &phi_bb131_15, &phi_bb131_16, &phi_bb131_17, &phi_bb131_24, &phi_bb131_25, &phi_bb131_26, &phi_bb131_27, &phi_bb131_28, &phi_bb131_30, &phi_bb131_31, &phi_bb131_32, &phi_bb131_34);
    tmp262 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp263 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp196}, TNode<Int32T>{tmp262});
    ca_.Branch(tmp263, &block142, std::vector<compiler::Node*>{phi_bb131_15, phi_bb131_16, phi_bb131_17, phi_bb131_24, phi_bb131_25, phi_bb131_26, phi_bb131_27, phi_bb131_28, phi_bb131_30, phi_bb131_31, phi_bb131_32, phi_bb131_34}, &block143, std::vector<compiler::Node*>{phi_bb131_15, phi_bb131_16, phi_bb131_17, phi_bb131_24, phi_bb131_25, phi_bb131_26, phi_bb131_27, phi_bb131_28, phi_bb131_30, phi_bb131_31, phi_bb131_32, phi_bb131_34});
  }

  TNode<Object> phi_bb142_15;
  TNode<IntPtrT> phi_bb142_16;
  TNode<BoolT> phi_bb142_17;
  TNode<IntPtrT> phi_bb142_24;
  TNode<IntPtrT> phi_bb142_25;
  TNode<IntPtrT> phi_bb142_26;
  TNode<IntPtrT> phi_bb142_27;
  TNode<IntPtrT> phi_bb142_28;
  TNode<IntPtrT> phi_bb142_30;
  TNode<BoolT> phi_bb142_31;
  TNode<BoolT> phi_bb142_32;
  TNode<Int32T> phi_bb142_34;
  TNode<IntPtrT> tmp264;
  TNode<IntPtrT> tmp265;
  TNode<IntPtrT> tmp266;
  TNode<BoolT> tmp267;
  if (block142.is_used()) {
    ca_.Bind(&block142, &phi_bb142_15, &phi_bb142_16, &phi_bb142_17, &phi_bb142_24, &phi_bb142_25, &phi_bb142_26, &phi_bb142_27, &phi_bb142_28, &phi_bb142_30, &phi_bb142_31, &phi_bb142_32, &phi_bb142_34);
    tmp264 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp265 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb142_25}, TNode<IntPtrT>{tmp264});
    tmp266 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp267 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb142_25}, TNode<IntPtrT>{tmp266});
    ca_.Branch(tmp267, &block146, std::vector<compiler::Node*>{phi_bb142_15, phi_bb142_16, phi_bb142_17, phi_bb142_24, phi_bb142_26, phi_bb142_27, phi_bb142_28, phi_bb142_30, phi_bb142_31, phi_bb142_32, phi_bb142_34}, &block147, std::vector<compiler::Node*>{phi_bb142_15, phi_bb142_16, phi_bb142_17, phi_bb142_24, phi_bb142_26, phi_bb142_27, phi_bb142_28, phi_bb142_30, phi_bb142_31, phi_bb142_32, phi_bb142_34});
  }

  TNode<Object> phi_bb146_15;
  TNode<IntPtrT> phi_bb146_16;
  TNode<BoolT> phi_bb146_17;
  TNode<IntPtrT> phi_bb146_24;
  TNode<IntPtrT> phi_bb146_26;
  TNode<IntPtrT> phi_bb146_27;
  TNode<IntPtrT> phi_bb146_28;
  TNode<IntPtrT> phi_bb146_30;
  TNode<BoolT> phi_bb146_31;
  TNode<BoolT> phi_bb146_32;
  TNode<Int32T> phi_bb146_34;
  TNode<Object> tmp268;
  TNode<IntPtrT> tmp269;
  TNode<IntPtrT> tmp270;
  TNode<IntPtrT> tmp271;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_15, &phi_bb146_16, &phi_bb146_17, &phi_bb146_24, &phi_bb146_26, &phi_bb146_27, &phi_bb146_28, &phi_bb146_30, &phi_bb146_31, &phi_bb146_32, &phi_bb146_34);
    std::tie(tmp268, tmp269) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb146_27}).Flatten();
    tmp270 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp271 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb146_27}, TNode<IntPtrT>{tmp270});
    ca_.Goto(&block145, phi_bb146_15, phi_bb146_16, phi_bb146_17, phi_bb146_24, phi_bb146_26, tmp271, phi_bb146_28, phi_bb146_30, phi_bb146_31, phi_bb146_32, phi_bb146_34, tmp268, tmp269);
  }

  TNode<Object> phi_bb147_15;
  TNode<IntPtrT> phi_bb147_16;
  TNode<BoolT> phi_bb147_17;
  TNode<IntPtrT> phi_bb147_24;
  TNode<IntPtrT> phi_bb147_26;
  TNode<IntPtrT> phi_bb147_27;
  TNode<IntPtrT> phi_bb147_28;
  TNode<IntPtrT> phi_bb147_30;
  TNode<BoolT> phi_bb147_31;
  TNode<BoolT> phi_bb147_32;
  TNode<Int32T> phi_bb147_34;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_15, &phi_bb147_16, &phi_bb147_17, &phi_bb147_24, &phi_bb147_26, &phi_bb147_27, &phi_bb147_28, &phi_bb147_30, &phi_bb147_31, &phi_bb147_32, &phi_bb147_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block148, phi_bb147_15, phi_bb147_16, phi_bb147_17, phi_bb147_24, phi_bb147_26, phi_bb147_27, phi_bb147_28, phi_bb147_30, phi_bb147_31, phi_bb147_32, phi_bb147_34);
    } else {
      ca_.Goto(&block149, phi_bb147_15, phi_bb147_16, phi_bb147_17, phi_bb147_24, phi_bb147_26, phi_bb147_27, phi_bb147_28, phi_bb147_30, phi_bb147_31, phi_bb147_32, phi_bb147_34);
    }
  }

  TNode<Object> phi_bb148_15;
  TNode<IntPtrT> phi_bb148_16;
  TNode<BoolT> phi_bb148_17;
  TNode<IntPtrT> phi_bb148_24;
  TNode<IntPtrT> phi_bb148_26;
  TNode<IntPtrT> phi_bb148_27;
  TNode<IntPtrT> phi_bb148_28;
  TNode<IntPtrT> phi_bb148_30;
  TNode<BoolT> phi_bb148_31;
  TNode<BoolT> phi_bb148_32;
  TNode<Int32T> phi_bb148_34;
  if (block148.is_used()) {
    ca_.Bind(&block148, &phi_bb148_15, &phi_bb148_16, &phi_bb148_17, &phi_bb148_24, &phi_bb148_26, &phi_bb148_27, &phi_bb148_28, &phi_bb148_30, &phi_bb148_31, &phi_bb148_32, &phi_bb148_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block152, phi_bb148_15, phi_bb148_16, phi_bb148_17, phi_bb148_24, phi_bb148_26, phi_bb148_27, phi_bb148_28, phi_bb148_30, phi_bb148_31, phi_bb148_32, phi_bb148_34);
    } else {
      ca_.Goto(&block153, phi_bb148_15, phi_bb148_16, phi_bb148_17, phi_bb148_24, phi_bb148_26, phi_bb148_27, phi_bb148_28, phi_bb148_30, phi_bb148_31, phi_bb148_32, phi_bb148_34);
    }
  }

  TNode<Object> phi_bb152_15;
  TNode<IntPtrT> phi_bb152_16;
  TNode<BoolT> phi_bb152_17;
  TNode<IntPtrT> phi_bb152_24;
  TNode<IntPtrT> phi_bb152_26;
  TNode<IntPtrT> phi_bb152_27;
  TNode<IntPtrT> phi_bb152_28;
  TNode<IntPtrT> phi_bb152_30;
  TNode<BoolT> phi_bb152_31;
  TNode<BoolT> phi_bb152_32;
  TNode<Int32T> phi_bb152_34;
  TNode<Object> tmp272;
  TNode<IntPtrT> tmp273;
  TNode<IntPtrT> tmp274;
  TNode<IntPtrT> tmp275;
  if (block152.is_used()) {
    ca_.Bind(&block152, &phi_bb152_15, &phi_bb152_16, &phi_bb152_17, &phi_bb152_24, &phi_bb152_26, &phi_bb152_27, &phi_bb152_28, &phi_bb152_30, &phi_bb152_31, &phi_bb152_32, &phi_bb152_34);
    std::tie(tmp272, tmp273) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb152_28}).Flatten();
    tmp274 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp275 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb152_28}, TNode<IntPtrT>{tmp274});
    ca_.Goto(&block151, phi_bb152_15, phi_bb152_16, phi_bb152_17, phi_bb152_24, phi_bb152_26, phi_bb152_27, tmp275, phi_bb152_30, phi_bb152_31, phi_bb152_32, phi_bb152_34, tmp272, tmp273);
  }

  TNode<Object> phi_bb153_15;
  TNode<IntPtrT> phi_bb153_16;
  TNode<BoolT> phi_bb153_17;
  TNode<IntPtrT> phi_bb153_24;
  TNode<IntPtrT> phi_bb153_26;
  TNode<IntPtrT> phi_bb153_27;
  TNode<IntPtrT> phi_bb153_28;
  TNode<IntPtrT> phi_bb153_30;
  TNode<BoolT> phi_bb153_31;
  TNode<BoolT> phi_bb153_32;
  TNode<Int32T> phi_bb153_34;
  TNode<IntPtrT> tmp276;
  TNode<BoolT> tmp277;
  if (block153.is_used()) {
    ca_.Bind(&block153, &phi_bb153_15, &phi_bb153_16, &phi_bb153_17, &phi_bb153_24, &phi_bb153_26, &phi_bb153_27, &phi_bb153_28, &phi_bb153_30, &phi_bb153_31, &phi_bb153_32, &phi_bb153_34);
    tmp276 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp277 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb153_30}, TNode<IntPtrT>{tmp276});
    ca_.Branch(tmp277, &block155, std::vector<compiler::Node*>{phi_bb153_15, phi_bb153_16, phi_bb153_17, phi_bb153_24, phi_bb153_26, phi_bb153_27, phi_bb153_28, phi_bb153_30, phi_bb153_31, phi_bb153_32, phi_bb153_34}, &block156, std::vector<compiler::Node*>{phi_bb153_15, phi_bb153_16, phi_bb153_17, phi_bb153_24, phi_bb153_26, phi_bb153_27, phi_bb153_28, phi_bb153_30, phi_bb153_31, phi_bb153_32, phi_bb153_34});
  }

  TNode<Object> phi_bb155_15;
  TNode<IntPtrT> phi_bb155_16;
  TNode<BoolT> phi_bb155_17;
  TNode<IntPtrT> phi_bb155_24;
  TNode<IntPtrT> phi_bb155_26;
  TNode<IntPtrT> phi_bb155_27;
  TNode<IntPtrT> phi_bb155_28;
  TNode<IntPtrT> phi_bb155_30;
  TNode<BoolT> phi_bb155_31;
  TNode<BoolT> phi_bb155_32;
  TNode<Int32T> phi_bb155_34;
  TNode<Object> tmp278;
  TNode<IntPtrT> tmp279;
  TNode<IntPtrT> tmp280;
  TNode<BoolT> tmp281;
  if (block155.is_used()) {
    ca_.Bind(&block155, &phi_bb155_15, &phi_bb155_16, &phi_bb155_17, &phi_bb155_24, &phi_bb155_26, &phi_bb155_27, &phi_bb155_28, &phi_bb155_30, &phi_bb155_31, &phi_bb155_32, &phi_bb155_34);
    std::tie(tmp278, tmp279) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb155_30}).Flatten();
    tmp280 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp281 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block151, phi_bb155_15, phi_bb155_16, phi_bb155_17, phi_bb155_24, phi_bb155_26, phi_bb155_27, phi_bb155_28, tmp280, tmp281, phi_bb155_32, phi_bb155_34, tmp278, tmp279);
  }

  TNode<Object> phi_bb156_15;
  TNode<IntPtrT> phi_bb156_16;
  TNode<BoolT> phi_bb156_17;
  TNode<IntPtrT> phi_bb156_24;
  TNode<IntPtrT> phi_bb156_26;
  TNode<IntPtrT> phi_bb156_27;
  TNode<IntPtrT> phi_bb156_28;
  TNode<IntPtrT> phi_bb156_30;
  TNode<BoolT> phi_bb156_31;
  TNode<BoolT> phi_bb156_32;
  TNode<Int32T> phi_bb156_34;
  TNode<Object> tmp282;
  TNode<IntPtrT> tmp283;
  TNode<IntPtrT> tmp284;
  TNode<IntPtrT> tmp285;
  TNode<IntPtrT> tmp286;
  TNode<IntPtrT> tmp287;
  TNode<BoolT> tmp288;
  if (block156.is_used()) {
    ca_.Bind(&block156, &phi_bb156_15, &phi_bb156_16, &phi_bb156_17, &phi_bb156_24, &phi_bb156_26, &phi_bb156_27, &phi_bb156_28, &phi_bb156_30, &phi_bb156_31, &phi_bb156_32, &phi_bb156_34);
    std::tie(tmp282, tmp283) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb156_28}).Flatten();
    tmp284 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp285 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb156_28}, TNode<IntPtrT>{tmp284});
    tmp286 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp287 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp285}, TNode<IntPtrT>{tmp286});
    tmp288 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block151, phi_bb156_15, phi_bb156_16, phi_bb156_17, phi_bb156_24, phi_bb156_26, phi_bb156_27, tmp287, tmp285, tmp288, phi_bb156_32, phi_bb156_34, tmp282, tmp283);
  }

  TNode<Object> phi_bb151_15;
  TNode<IntPtrT> phi_bb151_16;
  TNode<BoolT> phi_bb151_17;
  TNode<IntPtrT> phi_bb151_24;
  TNode<IntPtrT> phi_bb151_26;
  TNode<IntPtrT> phi_bb151_27;
  TNode<IntPtrT> phi_bb151_28;
  TNode<IntPtrT> phi_bb151_30;
  TNode<BoolT> phi_bb151_31;
  TNode<BoolT> phi_bb151_32;
  TNode<Int32T> phi_bb151_34;
  TNode<Object> phi_bb151_37;
  TNode<IntPtrT> phi_bb151_38;
  if (block151.is_used()) {
    ca_.Bind(&block151, &phi_bb151_15, &phi_bb151_16, &phi_bb151_17, &phi_bb151_24, &phi_bb151_26, &phi_bb151_27, &phi_bb151_28, &phi_bb151_30, &phi_bb151_31, &phi_bb151_32, &phi_bb151_34, &phi_bb151_37, &phi_bb151_38);
    ca_.Goto(&block145, phi_bb151_15, phi_bb151_16, phi_bb151_17, phi_bb151_24, phi_bb151_26, phi_bb151_27, phi_bb151_28, phi_bb151_30, phi_bb151_31, phi_bb151_32, phi_bb151_34, phi_bb151_37, phi_bb151_38);
  }

  TNode<Object> phi_bb149_15;
  TNode<IntPtrT> phi_bb149_16;
  TNode<BoolT> phi_bb149_17;
  TNode<IntPtrT> phi_bb149_24;
  TNode<IntPtrT> phi_bb149_26;
  TNode<IntPtrT> phi_bb149_27;
  TNode<IntPtrT> phi_bb149_28;
  TNode<IntPtrT> phi_bb149_30;
  TNode<BoolT> phi_bb149_31;
  TNode<BoolT> phi_bb149_32;
  TNode<Int32T> phi_bb149_34;
  TNode<Object> tmp289;
  TNode<IntPtrT> tmp290;
  TNode<IntPtrT> tmp291;
  TNode<IntPtrT> tmp292;
  TNode<BoolT> tmp293;
  if (block149.is_used()) {
    ca_.Bind(&block149, &phi_bb149_15, &phi_bb149_16, &phi_bb149_17, &phi_bb149_24, &phi_bb149_26, &phi_bb149_27, &phi_bb149_28, &phi_bb149_30, &phi_bb149_31, &phi_bb149_32, &phi_bb149_34);
    std::tie(tmp289, tmp290) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb149_28}).Flatten();
    tmp291 = FromConstexpr_intptr_constexpr_int31_0(state_, (CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))));
    tmp292 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb149_28}, TNode<IntPtrT>{tmp291});
    tmp293 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block145, phi_bb149_15, phi_bb149_16, phi_bb149_17, phi_bb149_24, phi_bb149_26, phi_bb149_27, tmp292, phi_bb149_30, tmp293, phi_bb149_32, phi_bb149_34, tmp289, tmp290);
  }

  TNode<Object> phi_bb145_15;
  TNode<IntPtrT> phi_bb145_16;
  TNode<BoolT> phi_bb145_17;
  TNode<IntPtrT> phi_bb145_24;
  TNode<IntPtrT> phi_bb145_26;
  TNode<IntPtrT> phi_bb145_27;
  TNode<IntPtrT> phi_bb145_28;
  TNode<IntPtrT> phi_bb145_30;
  TNode<BoolT> phi_bb145_31;
  TNode<BoolT> phi_bb145_32;
  TNode<Int32T> phi_bb145_34;
  TNode<Object> phi_bb145_37;
  TNode<IntPtrT> phi_bb145_38;
  TNode<Object> tmp294;
  TNode<IntPtrT> tmp295;
  TNode<Float64T> tmp296;
  TNode<Float64T> tmp297;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_15, &phi_bb145_16, &phi_bb145_17, &phi_bb145_24, &phi_bb145_26, &phi_bb145_27, &phi_bb145_28, &phi_bb145_30, &phi_bb145_31, &phi_bb145_32, &phi_bb145_34, &phi_bb145_37, &phi_bb145_38);
    std::tie(tmp294, tmp295) = RefCast_float64_0(state_, TorqueStructReference_intptr_0{TNode<Object>{phi_bb145_37}, TNode<IntPtrT>{phi_bb145_38}, TorqueStructUnsafe_0{}}).Flatten();
    tmp296 = CodeStubAssembler(state_).ChangeTaggedToFloat64(TNode<Context>{p_context}, TNode<Object>{tmp188});
    tmp297 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{tmp296});
    CodeStubAssembler(state_).StoreReference<Float64T>(CodeStubAssembler::Reference{tmp294, tmp295}, tmp297);
    ca_.Goto(&block144, phi_bb145_15, phi_bb145_16, phi_bb145_17, phi_bb145_24, tmp265, phi_bb145_26, phi_bb145_27, phi_bb145_28, phi_bb145_30, phi_bb145_31, phi_bb145_32, phi_bb145_34);
  }

  TNode<Object> phi_bb143_15;
  TNode<IntPtrT> phi_bb143_16;
  TNode<BoolT> phi_bb143_17;
  TNode<IntPtrT> phi_bb143_24;
  TNode<IntPtrT> phi_bb143_25;
  TNode<IntPtrT> phi_bb143_26;
  TNode<IntPtrT> phi_bb143_27;
  TNode<IntPtrT> phi_bb143_28;
  TNode<IntPtrT> phi_bb143_30;
  TNode<BoolT> phi_bb143_31;
  TNode<BoolT> phi_bb143_32;
  TNode<Int32T> phi_bb143_34;
  TNode<Int32T> tmp298;
  TNode<BoolT> tmp299;
  if (block143.is_used()) {
    ca_.Bind(&block143, &phi_bb143_15, &phi_bb143_16, &phi_bb143_17, &phi_bb143_24, &phi_bb143_25, &phi_bb143_26, &phi_bb143_27, &phi_bb143_28, &phi_bb143_30, &phi_bb143_31, &phi_bb143_32, &phi_bb143_34);
    tmp298 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp299 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp196}, TNode<Int32T>{tmp298});
    ca_.Branch(tmp299, &block157, std::vector<compiler::Node*>{phi_bb143_15, phi_bb143_16, phi_bb143_17, phi_bb143_24, phi_bb143_25, phi_bb143_26, phi_bb143_27, phi_bb143_28, phi_bb143_30, phi_bb143_31, phi_bb143_32, phi_bb143_34}, &block158, std::vector<compiler::Node*>{phi_bb143_15, phi_bb143_16, phi_bb143_17, phi_bb143_24, phi_bb143_25, phi_bb143_26, phi_bb143_27, phi_bb143_28, phi_bb143_30, phi_bb143_31, phi_bb143_32, phi_bb143_34});
  }

  TNode<Object> phi_bb157_15;
  TNode<IntPtrT> phi_bb157_16;
  TNode<BoolT> phi_bb157_17;
  TNode<IntPtrT> phi_bb157_24;
  TNode<IntPtrT> phi_bb157_25;
  TNode<IntPtrT> phi_bb157_26;
  TNode<IntPtrT> phi_bb157_27;
  TNode<IntPtrT> phi_bb157_28;
  TNode<IntPtrT> phi_bb157_30;
  TNode<BoolT> phi_bb157_31;
  TNode<BoolT> phi_bb157_32;
  TNode<Int32T> phi_bb157_34;
  if (block157.is_used()) {
    ca_.Bind(&block157, &phi_bb157_15, &phi_bb157_16, &phi_bb157_17, &phi_bb157_24, &phi_bb157_25, &phi_bb157_26, &phi_bb157_27, &phi_bb157_28, &phi_bb157_30, &phi_bb157_31, &phi_bb157_32, &phi_bb157_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block160, phi_bb157_15, phi_bb157_16, phi_bb157_17, phi_bb157_24, phi_bb157_25, phi_bb157_26, phi_bb157_27, phi_bb157_28, phi_bb157_30, phi_bb157_31, phi_bb157_32, phi_bb157_34);
    } else {
      ca_.Goto(&block161, phi_bb157_15, phi_bb157_16, phi_bb157_17, phi_bb157_24, phi_bb157_25, phi_bb157_26, phi_bb157_27, phi_bb157_28, phi_bb157_30, phi_bb157_31, phi_bb157_32, phi_bb157_34);
    }
  }

  TNode<Object> phi_bb160_15;
  TNode<IntPtrT> phi_bb160_16;
  TNode<BoolT> phi_bb160_17;
  TNode<IntPtrT> phi_bb160_24;
  TNode<IntPtrT> phi_bb160_25;
  TNode<IntPtrT> phi_bb160_26;
  TNode<IntPtrT> phi_bb160_27;
  TNode<IntPtrT> phi_bb160_28;
  TNode<IntPtrT> phi_bb160_30;
  TNode<BoolT> phi_bb160_31;
  TNode<BoolT> phi_bb160_32;
  TNode<Int32T> phi_bb160_34;
  TNode<IntPtrT> tmp300;
  TNode<IntPtrT> tmp301;
  TNode<IntPtrT> tmp302;
  TNode<BoolT> tmp303;
  if (block160.is_used()) {
    ca_.Bind(&block160, &phi_bb160_15, &phi_bb160_16, &phi_bb160_17, &phi_bb160_24, &phi_bb160_25, &phi_bb160_26, &phi_bb160_27, &phi_bb160_28, &phi_bb160_30, &phi_bb160_31, &phi_bb160_32, &phi_bb160_34);
    tmp300 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp301 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb160_24}, TNode<IntPtrT>{tmp300});
    tmp302 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp303 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb160_24}, TNode<IntPtrT>{tmp302});
    ca_.Branch(tmp303, &block164, std::vector<compiler::Node*>{phi_bb160_15, phi_bb160_16, phi_bb160_17, phi_bb160_25, phi_bb160_26, phi_bb160_27, phi_bb160_28, phi_bb160_30, phi_bb160_31, phi_bb160_32, phi_bb160_34}, &block165, std::vector<compiler::Node*>{phi_bb160_15, phi_bb160_16, phi_bb160_17, phi_bb160_25, phi_bb160_26, phi_bb160_27, phi_bb160_28, phi_bb160_30, phi_bb160_31, phi_bb160_32, phi_bb160_34});
  }

  TNode<Object> phi_bb164_15;
  TNode<IntPtrT> phi_bb164_16;
  TNode<BoolT> phi_bb164_17;
  TNode<IntPtrT> phi_bb164_25;
  TNode<IntPtrT> phi_bb164_26;
  TNode<IntPtrT> phi_bb164_27;
  TNode<IntPtrT> phi_bb164_28;
  TNode<IntPtrT> phi_bb164_30;
  TNode<BoolT> phi_bb164_31;
  TNode<BoolT> phi_bb164_32;
  TNode<Int32T> phi_bb164_34;
  TNode<Object> tmp304;
  TNode<IntPtrT> tmp305;
  TNode<IntPtrT> tmp306;
  TNode<IntPtrT> tmp307;
  if (block164.is_used()) {
    ca_.Bind(&block164, &phi_bb164_15, &phi_bb164_16, &phi_bb164_17, &phi_bb164_25, &phi_bb164_26, &phi_bb164_27, &phi_bb164_28, &phi_bb164_30, &phi_bb164_31, &phi_bb164_32, &phi_bb164_34);
    std::tie(tmp304, tmp305) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb164_26}).Flatten();
    tmp306 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp307 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb164_26}, TNode<IntPtrT>{tmp306});
    ca_.Goto(&block163, phi_bb164_15, phi_bb164_16, phi_bb164_17, phi_bb164_25, tmp307, phi_bb164_27, phi_bb164_28, phi_bb164_30, phi_bb164_31, phi_bb164_32, phi_bb164_34, tmp304, tmp305);
  }

  TNode<Object> phi_bb165_15;
  TNode<IntPtrT> phi_bb165_16;
  TNode<BoolT> phi_bb165_17;
  TNode<IntPtrT> phi_bb165_25;
  TNode<IntPtrT> phi_bb165_26;
  TNode<IntPtrT> phi_bb165_27;
  TNode<IntPtrT> phi_bb165_28;
  TNode<IntPtrT> phi_bb165_30;
  TNode<BoolT> phi_bb165_31;
  TNode<BoolT> phi_bb165_32;
  TNode<Int32T> phi_bb165_34;
  if (block165.is_used()) {
    ca_.Bind(&block165, &phi_bb165_15, &phi_bb165_16, &phi_bb165_17, &phi_bb165_25, &phi_bb165_26, &phi_bb165_27, &phi_bb165_28, &phi_bb165_30, &phi_bb165_31, &phi_bb165_32, &phi_bb165_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block167, phi_bb165_15, phi_bb165_16, phi_bb165_17, phi_bb165_25, phi_bb165_26, phi_bb165_27, phi_bb165_28, phi_bb165_30, phi_bb165_31, phi_bb165_32, phi_bb165_34);
    } else {
      ca_.Goto(&block168, phi_bb165_15, phi_bb165_16, phi_bb165_17, phi_bb165_25, phi_bb165_26, phi_bb165_27, phi_bb165_28, phi_bb165_30, phi_bb165_31, phi_bb165_32, phi_bb165_34);
    }
  }

  TNode<Object> phi_bb167_15;
  TNode<IntPtrT> phi_bb167_16;
  TNode<BoolT> phi_bb167_17;
  TNode<IntPtrT> phi_bb167_25;
  TNode<IntPtrT> phi_bb167_26;
  TNode<IntPtrT> phi_bb167_27;
  TNode<IntPtrT> phi_bb167_28;
  TNode<IntPtrT> phi_bb167_30;
  TNode<BoolT> phi_bb167_31;
  TNode<BoolT> phi_bb167_32;
  TNode<Int32T> phi_bb167_34;
  TNode<Object> tmp308;
  TNode<IntPtrT> tmp309;
  TNode<IntPtrT> tmp310;
  TNode<IntPtrT> tmp311;
  if (block167.is_used()) {
    ca_.Bind(&block167, &phi_bb167_15, &phi_bb167_16, &phi_bb167_17, &phi_bb167_25, &phi_bb167_26, &phi_bb167_27, &phi_bb167_28, &phi_bb167_30, &phi_bb167_31, &phi_bb167_32, &phi_bb167_34);
    std::tie(tmp308, tmp309) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb167_28}).Flatten();
    tmp310 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp311 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb167_28}, TNode<IntPtrT>{tmp310});
    ca_.Goto(&block166, phi_bb167_15, phi_bb167_16, phi_bb167_17, phi_bb167_25, phi_bb167_26, phi_bb167_27, tmp311, phi_bb167_30, phi_bb167_31, phi_bb167_32, phi_bb167_34, tmp308, tmp309);
  }

  TNode<Object> phi_bb168_15;
  TNode<IntPtrT> phi_bb168_16;
  TNode<BoolT> phi_bb168_17;
  TNode<IntPtrT> phi_bb168_25;
  TNode<IntPtrT> phi_bb168_26;
  TNode<IntPtrT> phi_bb168_27;
  TNode<IntPtrT> phi_bb168_28;
  TNode<IntPtrT> phi_bb168_30;
  TNode<BoolT> phi_bb168_31;
  TNode<BoolT> phi_bb168_32;
  TNode<Int32T> phi_bb168_34;
  TNode<IntPtrT> tmp312;
  TNode<BoolT> tmp313;
  if (block168.is_used()) {
    ca_.Bind(&block168, &phi_bb168_15, &phi_bb168_16, &phi_bb168_17, &phi_bb168_25, &phi_bb168_26, &phi_bb168_27, &phi_bb168_28, &phi_bb168_30, &phi_bb168_31, &phi_bb168_32, &phi_bb168_34);
    tmp312 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp313 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb168_30}, TNode<IntPtrT>{tmp312});
    ca_.Branch(tmp313, &block170, std::vector<compiler::Node*>{phi_bb168_15, phi_bb168_16, phi_bb168_17, phi_bb168_25, phi_bb168_26, phi_bb168_27, phi_bb168_28, phi_bb168_30, phi_bb168_31, phi_bb168_32, phi_bb168_34}, &block171, std::vector<compiler::Node*>{phi_bb168_15, phi_bb168_16, phi_bb168_17, phi_bb168_25, phi_bb168_26, phi_bb168_27, phi_bb168_28, phi_bb168_30, phi_bb168_31, phi_bb168_32, phi_bb168_34});
  }

  TNode<Object> phi_bb170_15;
  TNode<IntPtrT> phi_bb170_16;
  TNode<BoolT> phi_bb170_17;
  TNode<IntPtrT> phi_bb170_25;
  TNode<IntPtrT> phi_bb170_26;
  TNode<IntPtrT> phi_bb170_27;
  TNode<IntPtrT> phi_bb170_28;
  TNode<IntPtrT> phi_bb170_30;
  TNode<BoolT> phi_bb170_31;
  TNode<BoolT> phi_bb170_32;
  TNode<Int32T> phi_bb170_34;
  TNode<Object> tmp314;
  TNode<IntPtrT> tmp315;
  TNode<IntPtrT> tmp316;
  TNode<BoolT> tmp317;
  if (block170.is_used()) {
    ca_.Bind(&block170, &phi_bb170_15, &phi_bb170_16, &phi_bb170_17, &phi_bb170_25, &phi_bb170_26, &phi_bb170_27, &phi_bb170_28, &phi_bb170_30, &phi_bb170_31, &phi_bb170_32, &phi_bb170_34);
    std::tie(tmp314, tmp315) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb170_30}).Flatten();
    tmp316 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp317 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block166, phi_bb170_15, phi_bb170_16, phi_bb170_17, phi_bb170_25, phi_bb170_26, phi_bb170_27, phi_bb170_28, tmp316, tmp317, phi_bb170_32, phi_bb170_34, tmp314, tmp315);
  }

  TNode<Object> phi_bb171_15;
  TNode<IntPtrT> phi_bb171_16;
  TNode<BoolT> phi_bb171_17;
  TNode<IntPtrT> phi_bb171_25;
  TNode<IntPtrT> phi_bb171_26;
  TNode<IntPtrT> phi_bb171_27;
  TNode<IntPtrT> phi_bb171_28;
  TNode<IntPtrT> phi_bb171_30;
  TNode<BoolT> phi_bb171_31;
  TNode<BoolT> phi_bb171_32;
  TNode<Int32T> phi_bb171_34;
  TNode<Object> tmp318;
  TNode<IntPtrT> tmp319;
  TNode<IntPtrT> tmp320;
  TNode<IntPtrT> tmp321;
  TNode<IntPtrT> tmp322;
  TNode<IntPtrT> tmp323;
  TNode<BoolT> tmp324;
  if (block171.is_used()) {
    ca_.Bind(&block171, &phi_bb171_15, &phi_bb171_16, &phi_bb171_17, &phi_bb171_25, &phi_bb171_26, &phi_bb171_27, &phi_bb171_28, &phi_bb171_30, &phi_bb171_31, &phi_bb171_32, &phi_bb171_34);
    std::tie(tmp318, tmp319) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb171_28}).Flatten();
    tmp320 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp321 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb171_28}, TNode<IntPtrT>{tmp320});
    tmp322 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp323 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp321}, TNode<IntPtrT>{tmp322});
    tmp324 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block166, phi_bb171_15, phi_bb171_16, phi_bb171_17, phi_bb171_25, phi_bb171_26, phi_bb171_27, tmp323, tmp321, tmp324, phi_bb171_32, phi_bb171_34, tmp318, tmp319);
  }

  TNode<Object> phi_bb166_15;
  TNode<IntPtrT> phi_bb166_16;
  TNode<BoolT> phi_bb166_17;
  TNode<IntPtrT> phi_bb166_25;
  TNode<IntPtrT> phi_bb166_26;
  TNode<IntPtrT> phi_bb166_27;
  TNode<IntPtrT> phi_bb166_28;
  TNode<IntPtrT> phi_bb166_30;
  TNode<BoolT> phi_bb166_31;
  TNode<BoolT> phi_bb166_32;
  TNode<Int32T> phi_bb166_34;
  TNode<Object> phi_bb166_37;
  TNode<IntPtrT> phi_bb166_38;
  if (block166.is_used()) {
    ca_.Bind(&block166, &phi_bb166_15, &phi_bb166_16, &phi_bb166_17, &phi_bb166_25, &phi_bb166_26, &phi_bb166_27, &phi_bb166_28, &phi_bb166_30, &phi_bb166_31, &phi_bb166_32, &phi_bb166_34, &phi_bb166_37, &phi_bb166_38);
    ca_.Goto(&block163, phi_bb166_15, phi_bb166_16, phi_bb166_17, phi_bb166_25, phi_bb166_26, phi_bb166_27, phi_bb166_28, phi_bb166_30, phi_bb166_31, phi_bb166_32, phi_bb166_34, phi_bb166_37, phi_bb166_38);
  }

  TNode<Object> phi_bb163_15;
  TNode<IntPtrT> phi_bb163_16;
  TNode<BoolT> phi_bb163_17;
  TNode<IntPtrT> phi_bb163_25;
  TNode<IntPtrT> phi_bb163_26;
  TNode<IntPtrT> phi_bb163_27;
  TNode<IntPtrT> phi_bb163_28;
  TNode<IntPtrT> phi_bb163_30;
  TNode<BoolT> phi_bb163_31;
  TNode<BoolT> phi_bb163_32;
  TNode<Int32T> phi_bb163_34;
  TNode<Object> phi_bb163_37;
  TNode<IntPtrT> phi_bb163_38;
  TNode<IntPtrT> tmp325;
  if (block163.is_used()) {
    ca_.Bind(&block163, &phi_bb163_15, &phi_bb163_16, &phi_bb163_17, &phi_bb163_25, &phi_bb163_26, &phi_bb163_27, &phi_bb163_28, &phi_bb163_30, &phi_bb163_31, &phi_bb163_32, &phi_bb163_34, &phi_bb163_37, &phi_bb163_38);
    tmp325 = TruncateBigIntToI64_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp188});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb163_37, phi_bb163_38}, tmp325);
    ca_.Goto(&block162, phi_bb163_15, phi_bb163_16, phi_bb163_17, tmp301, phi_bb163_25, phi_bb163_26, phi_bb163_27, phi_bb163_28, phi_bb163_30, phi_bb163_31, phi_bb163_32, phi_bb163_34);
  }

  TNode<Object> phi_bb161_15;
  TNode<IntPtrT> phi_bb161_16;
  TNode<BoolT> phi_bb161_17;
  TNode<IntPtrT> phi_bb161_24;
  TNode<IntPtrT> phi_bb161_25;
  TNode<IntPtrT> phi_bb161_26;
  TNode<IntPtrT> phi_bb161_27;
  TNode<IntPtrT> phi_bb161_28;
  TNode<IntPtrT> phi_bb161_30;
  TNode<BoolT> phi_bb161_31;
  TNode<BoolT> phi_bb161_32;
  TNode<Int32T> phi_bb161_34;
  TNode<IntPtrT> tmp326;
  TNode<IntPtrT> tmp327;
  TNode<IntPtrT> tmp328;
  TNode<BoolT> tmp329;
  if (block161.is_used()) {
    ca_.Bind(&block161, &phi_bb161_15, &phi_bb161_16, &phi_bb161_17, &phi_bb161_24, &phi_bb161_25, &phi_bb161_26, &phi_bb161_27, &phi_bb161_28, &phi_bb161_30, &phi_bb161_31, &phi_bb161_32, &phi_bb161_34);
    tmp326 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp327 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb161_24}, TNode<IntPtrT>{tmp326});
    tmp328 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp329 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb161_24}, TNode<IntPtrT>{tmp328});
    ca_.Branch(tmp329, &block173, std::vector<compiler::Node*>{phi_bb161_15, phi_bb161_16, phi_bb161_17, phi_bb161_25, phi_bb161_26, phi_bb161_27, phi_bb161_28, phi_bb161_30, phi_bb161_31, phi_bb161_32, phi_bb161_34}, &block174, std::vector<compiler::Node*>{phi_bb161_15, phi_bb161_16, phi_bb161_17, phi_bb161_25, phi_bb161_26, phi_bb161_27, phi_bb161_28, phi_bb161_30, phi_bb161_31, phi_bb161_32, phi_bb161_34});
  }

  TNode<Object> phi_bb173_15;
  TNode<IntPtrT> phi_bb173_16;
  TNode<BoolT> phi_bb173_17;
  TNode<IntPtrT> phi_bb173_25;
  TNode<IntPtrT> phi_bb173_26;
  TNode<IntPtrT> phi_bb173_27;
  TNode<IntPtrT> phi_bb173_28;
  TNode<IntPtrT> phi_bb173_30;
  TNode<BoolT> phi_bb173_31;
  TNode<BoolT> phi_bb173_32;
  TNode<Int32T> phi_bb173_34;
  TNode<Object> tmp330;
  TNode<IntPtrT> tmp331;
  TNode<IntPtrT> tmp332;
  TNode<IntPtrT> tmp333;
  if (block173.is_used()) {
    ca_.Bind(&block173, &phi_bb173_15, &phi_bb173_16, &phi_bb173_17, &phi_bb173_25, &phi_bb173_26, &phi_bb173_27, &phi_bb173_28, &phi_bb173_30, &phi_bb173_31, &phi_bb173_32, &phi_bb173_34);
    std::tie(tmp330, tmp331) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb173_26}).Flatten();
    tmp332 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp333 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb173_26}, TNode<IntPtrT>{tmp332});
    ca_.Goto(&block172, phi_bb173_15, phi_bb173_16, phi_bb173_17, phi_bb173_25, tmp333, phi_bb173_27, phi_bb173_28, phi_bb173_30, phi_bb173_31, phi_bb173_32, phi_bb173_34, tmp330, tmp331);
  }

  TNode<Object> phi_bb174_15;
  TNode<IntPtrT> phi_bb174_16;
  TNode<BoolT> phi_bb174_17;
  TNode<IntPtrT> phi_bb174_25;
  TNode<IntPtrT> phi_bb174_26;
  TNode<IntPtrT> phi_bb174_27;
  TNode<IntPtrT> phi_bb174_28;
  TNode<IntPtrT> phi_bb174_30;
  TNode<BoolT> phi_bb174_31;
  TNode<BoolT> phi_bb174_32;
  TNode<Int32T> phi_bb174_34;
  if (block174.is_used()) {
    ca_.Bind(&block174, &phi_bb174_15, &phi_bb174_16, &phi_bb174_17, &phi_bb174_25, &phi_bb174_26, &phi_bb174_27, &phi_bb174_28, &phi_bb174_30, &phi_bb174_31, &phi_bb174_32, &phi_bb174_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block176, phi_bb174_15, phi_bb174_16, phi_bb174_17, phi_bb174_25, phi_bb174_26, phi_bb174_27, phi_bb174_28, phi_bb174_30, phi_bb174_31, phi_bb174_32, phi_bb174_34);
    } else {
      ca_.Goto(&block177, phi_bb174_15, phi_bb174_16, phi_bb174_17, phi_bb174_25, phi_bb174_26, phi_bb174_27, phi_bb174_28, phi_bb174_30, phi_bb174_31, phi_bb174_32, phi_bb174_34);
    }
  }

  TNode<Object> phi_bb176_15;
  TNode<IntPtrT> phi_bb176_16;
  TNode<BoolT> phi_bb176_17;
  TNode<IntPtrT> phi_bb176_25;
  TNode<IntPtrT> phi_bb176_26;
  TNode<IntPtrT> phi_bb176_27;
  TNode<IntPtrT> phi_bb176_28;
  TNode<IntPtrT> phi_bb176_30;
  TNode<BoolT> phi_bb176_31;
  TNode<BoolT> phi_bb176_32;
  TNode<Int32T> phi_bb176_34;
  TNode<Object> tmp334;
  TNode<IntPtrT> tmp335;
  TNode<IntPtrT> tmp336;
  TNode<IntPtrT> tmp337;
  if (block176.is_used()) {
    ca_.Bind(&block176, &phi_bb176_15, &phi_bb176_16, &phi_bb176_17, &phi_bb176_25, &phi_bb176_26, &phi_bb176_27, &phi_bb176_28, &phi_bb176_30, &phi_bb176_31, &phi_bb176_32, &phi_bb176_34);
    std::tie(tmp334, tmp335) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb176_28}).Flatten();
    tmp336 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp337 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb176_28}, TNode<IntPtrT>{tmp336});
    ca_.Goto(&block175, phi_bb176_15, phi_bb176_16, phi_bb176_17, phi_bb176_25, phi_bb176_26, phi_bb176_27, tmp337, phi_bb176_30, phi_bb176_31, phi_bb176_32, phi_bb176_34, tmp334, tmp335);
  }

  TNode<Object> phi_bb177_15;
  TNode<IntPtrT> phi_bb177_16;
  TNode<BoolT> phi_bb177_17;
  TNode<IntPtrT> phi_bb177_25;
  TNode<IntPtrT> phi_bb177_26;
  TNode<IntPtrT> phi_bb177_27;
  TNode<IntPtrT> phi_bb177_28;
  TNode<IntPtrT> phi_bb177_30;
  TNode<BoolT> phi_bb177_31;
  TNode<BoolT> phi_bb177_32;
  TNode<Int32T> phi_bb177_34;
  TNode<IntPtrT> tmp338;
  TNode<BoolT> tmp339;
  if (block177.is_used()) {
    ca_.Bind(&block177, &phi_bb177_15, &phi_bb177_16, &phi_bb177_17, &phi_bb177_25, &phi_bb177_26, &phi_bb177_27, &phi_bb177_28, &phi_bb177_30, &phi_bb177_31, &phi_bb177_32, &phi_bb177_34);
    tmp338 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp339 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb177_30}, TNode<IntPtrT>{tmp338});
    ca_.Branch(tmp339, &block179, std::vector<compiler::Node*>{phi_bb177_15, phi_bb177_16, phi_bb177_17, phi_bb177_25, phi_bb177_26, phi_bb177_27, phi_bb177_28, phi_bb177_30, phi_bb177_31, phi_bb177_32, phi_bb177_34}, &block180, std::vector<compiler::Node*>{phi_bb177_15, phi_bb177_16, phi_bb177_17, phi_bb177_25, phi_bb177_26, phi_bb177_27, phi_bb177_28, phi_bb177_30, phi_bb177_31, phi_bb177_32, phi_bb177_34});
  }

  TNode<Object> phi_bb179_15;
  TNode<IntPtrT> phi_bb179_16;
  TNode<BoolT> phi_bb179_17;
  TNode<IntPtrT> phi_bb179_25;
  TNode<IntPtrT> phi_bb179_26;
  TNode<IntPtrT> phi_bb179_27;
  TNode<IntPtrT> phi_bb179_28;
  TNode<IntPtrT> phi_bb179_30;
  TNode<BoolT> phi_bb179_31;
  TNode<BoolT> phi_bb179_32;
  TNode<Int32T> phi_bb179_34;
  TNode<Object> tmp340;
  TNode<IntPtrT> tmp341;
  TNode<IntPtrT> tmp342;
  TNode<BoolT> tmp343;
  if (block179.is_used()) {
    ca_.Bind(&block179, &phi_bb179_15, &phi_bb179_16, &phi_bb179_17, &phi_bb179_25, &phi_bb179_26, &phi_bb179_27, &phi_bb179_28, &phi_bb179_30, &phi_bb179_31, &phi_bb179_32, &phi_bb179_34);
    std::tie(tmp340, tmp341) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb179_30}).Flatten();
    tmp342 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp343 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block175, phi_bb179_15, phi_bb179_16, phi_bb179_17, phi_bb179_25, phi_bb179_26, phi_bb179_27, phi_bb179_28, tmp342, tmp343, phi_bb179_32, phi_bb179_34, tmp340, tmp341);
  }

  TNode<Object> phi_bb180_15;
  TNode<IntPtrT> phi_bb180_16;
  TNode<BoolT> phi_bb180_17;
  TNode<IntPtrT> phi_bb180_25;
  TNode<IntPtrT> phi_bb180_26;
  TNode<IntPtrT> phi_bb180_27;
  TNode<IntPtrT> phi_bb180_28;
  TNode<IntPtrT> phi_bb180_30;
  TNode<BoolT> phi_bb180_31;
  TNode<BoolT> phi_bb180_32;
  TNode<Int32T> phi_bb180_34;
  TNode<Object> tmp344;
  TNode<IntPtrT> tmp345;
  TNode<IntPtrT> tmp346;
  TNode<IntPtrT> tmp347;
  TNode<IntPtrT> tmp348;
  TNode<IntPtrT> tmp349;
  TNode<BoolT> tmp350;
  if (block180.is_used()) {
    ca_.Bind(&block180, &phi_bb180_15, &phi_bb180_16, &phi_bb180_17, &phi_bb180_25, &phi_bb180_26, &phi_bb180_27, &phi_bb180_28, &phi_bb180_30, &phi_bb180_31, &phi_bb180_32, &phi_bb180_34);
    std::tie(tmp344, tmp345) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb180_28}).Flatten();
    tmp346 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp347 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb180_28}, TNode<IntPtrT>{tmp346});
    tmp348 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp349 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp347}, TNode<IntPtrT>{tmp348});
    tmp350 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block175, phi_bb180_15, phi_bb180_16, phi_bb180_17, phi_bb180_25, phi_bb180_26, phi_bb180_27, tmp349, tmp347, tmp350, phi_bb180_32, phi_bb180_34, tmp344, tmp345);
  }

  TNode<Object> phi_bb175_15;
  TNode<IntPtrT> phi_bb175_16;
  TNode<BoolT> phi_bb175_17;
  TNode<IntPtrT> phi_bb175_25;
  TNode<IntPtrT> phi_bb175_26;
  TNode<IntPtrT> phi_bb175_27;
  TNode<IntPtrT> phi_bb175_28;
  TNode<IntPtrT> phi_bb175_30;
  TNode<BoolT> phi_bb175_31;
  TNode<BoolT> phi_bb175_32;
  TNode<Int32T> phi_bb175_34;
  TNode<Object> phi_bb175_37;
  TNode<IntPtrT> phi_bb175_38;
  if (block175.is_used()) {
    ca_.Bind(&block175, &phi_bb175_15, &phi_bb175_16, &phi_bb175_17, &phi_bb175_25, &phi_bb175_26, &phi_bb175_27, &phi_bb175_28, &phi_bb175_30, &phi_bb175_31, &phi_bb175_32, &phi_bb175_34, &phi_bb175_37, &phi_bb175_38);
    ca_.Goto(&block172, phi_bb175_15, phi_bb175_16, phi_bb175_17, phi_bb175_25, phi_bb175_26, phi_bb175_27, phi_bb175_28, phi_bb175_30, phi_bb175_31, phi_bb175_32, phi_bb175_34, phi_bb175_37, phi_bb175_38);
  }

  TNode<Object> phi_bb172_15;
  TNode<IntPtrT> phi_bb172_16;
  TNode<BoolT> phi_bb172_17;
  TNode<IntPtrT> phi_bb172_25;
  TNode<IntPtrT> phi_bb172_26;
  TNode<IntPtrT> phi_bb172_27;
  TNode<IntPtrT> phi_bb172_28;
  TNode<IntPtrT> phi_bb172_30;
  TNode<BoolT> phi_bb172_31;
  TNode<BoolT> phi_bb172_32;
  TNode<Int32T> phi_bb172_34;
  TNode<Object> phi_bb172_37;
  TNode<IntPtrT> phi_bb172_38;
  TNode<IntPtrT> tmp351;
  TNode<IntPtrT> tmp352;
  TNode<IntPtrT> tmp353;
  TNode<BoolT> tmp354;
  if (block172.is_used()) {
    ca_.Bind(&block172, &phi_bb172_15, &phi_bb172_16, &phi_bb172_17, &phi_bb172_25, &phi_bb172_26, &phi_bb172_27, &phi_bb172_28, &phi_bb172_30, &phi_bb172_31, &phi_bb172_32, &phi_bb172_34, &phi_bb172_37, &phi_bb172_38);
    tmp351 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp352 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp327}, TNode<IntPtrT>{tmp351});
    tmp353 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp354 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp327}, TNode<IntPtrT>{tmp353});
    ca_.Branch(tmp354, &block182, std::vector<compiler::Node*>{phi_bb172_15, phi_bb172_16, phi_bb172_17, phi_bb172_25, phi_bb172_26, phi_bb172_27, phi_bb172_28, phi_bb172_30, phi_bb172_31, phi_bb172_32, phi_bb172_34, phi_bb172_37, phi_bb172_38}, &block183, std::vector<compiler::Node*>{phi_bb172_15, phi_bb172_16, phi_bb172_17, phi_bb172_25, phi_bb172_26, phi_bb172_27, phi_bb172_28, phi_bb172_30, phi_bb172_31, phi_bb172_32, phi_bb172_34, phi_bb172_37, phi_bb172_38});
  }

  TNode<Object> phi_bb182_15;
  TNode<IntPtrT> phi_bb182_16;
  TNode<BoolT> phi_bb182_17;
  TNode<IntPtrT> phi_bb182_25;
  TNode<IntPtrT> phi_bb182_26;
  TNode<IntPtrT> phi_bb182_27;
  TNode<IntPtrT> phi_bb182_28;
  TNode<IntPtrT> phi_bb182_30;
  TNode<BoolT> phi_bb182_31;
  TNode<BoolT> phi_bb182_32;
  TNode<Int32T> phi_bb182_34;
  TNode<Object> phi_bb182_37;
  TNode<IntPtrT> phi_bb182_38;
  TNode<Object> tmp355;
  TNode<IntPtrT> tmp356;
  TNode<IntPtrT> tmp357;
  TNode<IntPtrT> tmp358;
  if (block182.is_used()) {
    ca_.Bind(&block182, &phi_bb182_15, &phi_bb182_16, &phi_bb182_17, &phi_bb182_25, &phi_bb182_26, &phi_bb182_27, &phi_bb182_28, &phi_bb182_30, &phi_bb182_31, &phi_bb182_32, &phi_bb182_34, &phi_bb182_37, &phi_bb182_38);
    std::tie(tmp355, tmp356) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb182_26}).Flatten();
    tmp357 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp358 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb182_26}, TNode<IntPtrT>{tmp357});
    ca_.Goto(&block181, phi_bb182_15, phi_bb182_16, phi_bb182_17, phi_bb182_25, tmp358, phi_bb182_27, phi_bb182_28, phi_bb182_30, phi_bb182_31, phi_bb182_32, phi_bb182_34, phi_bb182_37, phi_bb182_38, tmp355, tmp356);
  }

  TNode<Object> phi_bb183_15;
  TNode<IntPtrT> phi_bb183_16;
  TNode<BoolT> phi_bb183_17;
  TNode<IntPtrT> phi_bb183_25;
  TNode<IntPtrT> phi_bb183_26;
  TNode<IntPtrT> phi_bb183_27;
  TNode<IntPtrT> phi_bb183_28;
  TNode<IntPtrT> phi_bb183_30;
  TNode<BoolT> phi_bb183_31;
  TNode<BoolT> phi_bb183_32;
  TNode<Int32T> phi_bb183_34;
  TNode<Object> phi_bb183_37;
  TNode<IntPtrT> phi_bb183_38;
  if (block183.is_used()) {
    ca_.Bind(&block183, &phi_bb183_15, &phi_bb183_16, &phi_bb183_17, &phi_bb183_25, &phi_bb183_26, &phi_bb183_27, &phi_bb183_28, &phi_bb183_30, &phi_bb183_31, &phi_bb183_32, &phi_bb183_34, &phi_bb183_37, &phi_bb183_38);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block185, phi_bb183_15, phi_bb183_16, phi_bb183_17, phi_bb183_25, phi_bb183_26, phi_bb183_27, phi_bb183_28, phi_bb183_30, phi_bb183_31, phi_bb183_32, phi_bb183_34, phi_bb183_37, phi_bb183_38);
    } else {
      ca_.Goto(&block186, phi_bb183_15, phi_bb183_16, phi_bb183_17, phi_bb183_25, phi_bb183_26, phi_bb183_27, phi_bb183_28, phi_bb183_30, phi_bb183_31, phi_bb183_32, phi_bb183_34, phi_bb183_37, phi_bb183_38);
    }
  }

  TNode<Object> phi_bb185_15;
  TNode<IntPtrT> phi_bb185_16;
  TNode<BoolT> phi_bb185_17;
  TNode<IntPtrT> phi_bb185_25;
  TNode<IntPtrT> phi_bb185_26;
  TNode<IntPtrT> phi_bb185_27;
  TNode<IntPtrT> phi_bb185_28;
  TNode<IntPtrT> phi_bb185_30;
  TNode<BoolT> phi_bb185_31;
  TNode<BoolT> phi_bb185_32;
  TNode<Int32T> phi_bb185_34;
  TNode<Object> phi_bb185_37;
  TNode<IntPtrT> phi_bb185_38;
  TNode<Object> tmp359;
  TNode<IntPtrT> tmp360;
  TNode<IntPtrT> tmp361;
  TNode<IntPtrT> tmp362;
  if (block185.is_used()) {
    ca_.Bind(&block185, &phi_bb185_15, &phi_bb185_16, &phi_bb185_17, &phi_bb185_25, &phi_bb185_26, &phi_bb185_27, &phi_bb185_28, &phi_bb185_30, &phi_bb185_31, &phi_bb185_32, &phi_bb185_34, &phi_bb185_37, &phi_bb185_38);
    std::tie(tmp359, tmp360) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb185_28}).Flatten();
    tmp361 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp362 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb185_28}, TNode<IntPtrT>{tmp361});
    ca_.Goto(&block184, phi_bb185_15, phi_bb185_16, phi_bb185_17, phi_bb185_25, phi_bb185_26, phi_bb185_27, tmp362, phi_bb185_30, phi_bb185_31, phi_bb185_32, phi_bb185_34, phi_bb185_37, phi_bb185_38, tmp359, tmp360);
  }

  TNode<Object> phi_bb186_15;
  TNode<IntPtrT> phi_bb186_16;
  TNode<BoolT> phi_bb186_17;
  TNode<IntPtrT> phi_bb186_25;
  TNode<IntPtrT> phi_bb186_26;
  TNode<IntPtrT> phi_bb186_27;
  TNode<IntPtrT> phi_bb186_28;
  TNode<IntPtrT> phi_bb186_30;
  TNode<BoolT> phi_bb186_31;
  TNode<BoolT> phi_bb186_32;
  TNode<Int32T> phi_bb186_34;
  TNode<Object> phi_bb186_37;
  TNode<IntPtrT> phi_bb186_38;
  TNode<IntPtrT> tmp363;
  TNode<BoolT> tmp364;
  if (block186.is_used()) {
    ca_.Bind(&block186, &phi_bb186_15, &phi_bb186_16, &phi_bb186_17, &phi_bb186_25, &phi_bb186_26, &phi_bb186_27, &phi_bb186_28, &phi_bb186_30, &phi_bb186_31, &phi_bb186_32, &phi_bb186_34, &phi_bb186_37, &phi_bb186_38);
    tmp363 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp364 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb186_30}, TNode<IntPtrT>{tmp363});
    ca_.Branch(tmp364, &block188, std::vector<compiler::Node*>{phi_bb186_15, phi_bb186_16, phi_bb186_17, phi_bb186_25, phi_bb186_26, phi_bb186_27, phi_bb186_28, phi_bb186_30, phi_bb186_31, phi_bb186_32, phi_bb186_34, phi_bb186_37, phi_bb186_38}, &block189, std::vector<compiler::Node*>{phi_bb186_15, phi_bb186_16, phi_bb186_17, phi_bb186_25, phi_bb186_26, phi_bb186_27, phi_bb186_28, phi_bb186_30, phi_bb186_31, phi_bb186_32, phi_bb186_34, phi_bb186_37, phi_bb186_38});
  }

  TNode<Object> phi_bb188_15;
  TNode<IntPtrT> phi_bb188_16;
  TNode<BoolT> phi_bb188_17;
  TNode<IntPtrT> phi_bb188_25;
  TNode<IntPtrT> phi_bb188_26;
  TNode<IntPtrT> phi_bb188_27;
  TNode<IntPtrT> phi_bb188_28;
  TNode<IntPtrT> phi_bb188_30;
  TNode<BoolT> phi_bb188_31;
  TNode<BoolT> phi_bb188_32;
  TNode<Int32T> phi_bb188_34;
  TNode<Object> phi_bb188_37;
  TNode<IntPtrT> phi_bb188_38;
  TNode<Object> tmp365;
  TNode<IntPtrT> tmp366;
  TNode<IntPtrT> tmp367;
  TNode<BoolT> tmp368;
  if (block188.is_used()) {
    ca_.Bind(&block188, &phi_bb188_15, &phi_bb188_16, &phi_bb188_17, &phi_bb188_25, &phi_bb188_26, &phi_bb188_27, &phi_bb188_28, &phi_bb188_30, &phi_bb188_31, &phi_bb188_32, &phi_bb188_34, &phi_bb188_37, &phi_bb188_38);
    std::tie(tmp365, tmp366) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb188_30}).Flatten();
    tmp367 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp368 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block184, phi_bb188_15, phi_bb188_16, phi_bb188_17, phi_bb188_25, phi_bb188_26, phi_bb188_27, phi_bb188_28, tmp367, tmp368, phi_bb188_32, phi_bb188_34, phi_bb188_37, phi_bb188_38, tmp365, tmp366);
  }

  TNode<Object> phi_bb189_15;
  TNode<IntPtrT> phi_bb189_16;
  TNode<BoolT> phi_bb189_17;
  TNode<IntPtrT> phi_bb189_25;
  TNode<IntPtrT> phi_bb189_26;
  TNode<IntPtrT> phi_bb189_27;
  TNode<IntPtrT> phi_bb189_28;
  TNode<IntPtrT> phi_bb189_30;
  TNode<BoolT> phi_bb189_31;
  TNode<BoolT> phi_bb189_32;
  TNode<Int32T> phi_bb189_34;
  TNode<Object> phi_bb189_37;
  TNode<IntPtrT> phi_bb189_38;
  TNode<Object> tmp369;
  TNode<IntPtrT> tmp370;
  TNode<IntPtrT> tmp371;
  TNode<IntPtrT> tmp372;
  TNode<IntPtrT> tmp373;
  TNode<IntPtrT> tmp374;
  TNode<BoolT> tmp375;
  if (block189.is_used()) {
    ca_.Bind(&block189, &phi_bb189_15, &phi_bb189_16, &phi_bb189_17, &phi_bb189_25, &phi_bb189_26, &phi_bb189_27, &phi_bb189_28, &phi_bb189_30, &phi_bb189_31, &phi_bb189_32, &phi_bb189_34, &phi_bb189_37, &phi_bb189_38);
    std::tie(tmp369, tmp370) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb189_28}).Flatten();
    tmp371 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp372 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb189_28}, TNode<IntPtrT>{tmp371});
    tmp373 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp374 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp372}, TNode<IntPtrT>{tmp373});
    tmp375 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block184, phi_bb189_15, phi_bb189_16, phi_bb189_17, phi_bb189_25, phi_bb189_26, phi_bb189_27, tmp374, tmp372, tmp375, phi_bb189_32, phi_bb189_34, phi_bb189_37, phi_bb189_38, tmp369, tmp370);
  }

  TNode<Object> phi_bb184_15;
  TNode<IntPtrT> phi_bb184_16;
  TNode<BoolT> phi_bb184_17;
  TNode<IntPtrT> phi_bb184_25;
  TNode<IntPtrT> phi_bb184_26;
  TNode<IntPtrT> phi_bb184_27;
  TNode<IntPtrT> phi_bb184_28;
  TNode<IntPtrT> phi_bb184_30;
  TNode<BoolT> phi_bb184_31;
  TNode<BoolT> phi_bb184_32;
  TNode<Int32T> phi_bb184_34;
  TNode<Object> phi_bb184_37;
  TNode<IntPtrT> phi_bb184_38;
  TNode<Object> phi_bb184_39;
  TNode<IntPtrT> phi_bb184_40;
  if (block184.is_used()) {
    ca_.Bind(&block184, &phi_bb184_15, &phi_bb184_16, &phi_bb184_17, &phi_bb184_25, &phi_bb184_26, &phi_bb184_27, &phi_bb184_28, &phi_bb184_30, &phi_bb184_31, &phi_bb184_32, &phi_bb184_34, &phi_bb184_37, &phi_bb184_38, &phi_bb184_39, &phi_bb184_40);
    ca_.Goto(&block181, phi_bb184_15, phi_bb184_16, phi_bb184_17, phi_bb184_25, phi_bb184_26, phi_bb184_27, phi_bb184_28, phi_bb184_30, phi_bb184_31, phi_bb184_32, phi_bb184_34, phi_bb184_37, phi_bb184_38, phi_bb184_39, phi_bb184_40);
  }

  TNode<Object> phi_bb181_15;
  TNode<IntPtrT> phi_bb181_16;
  TNode<BoolT> phi_bb181_17;
  TNode<IntPtrT> phi_bb181_25;
  TNode<IntPtrT> phi_bb181_26;
  TNode<IntPtrT> phi_bb181_27;
  TNode<IntPtrT> phi_bb181_28;
  TNode<IntPtrT> phi_bb181_30;
  TNode<BoolT> phi_bb181_31;
  TNode<BoolT> phi_bb181_32;
  TNode<Int32T> phi_bb181_34;
  TNode<Object> phi_bb181_37;
  TNode<IntPtrT> phi_bb181_38;
  TNode<Object> phi_bb181_39;
  TNode<IntPtrT> phi_bb181_40;
  TNode<BigInt> tmp376;
  TNode<UintPtrT> tmp377;
  TNode<UintPtrT> tmp378;
  TNode<IntPtrT> tmp379;
  TNode<IntPtrT> tmp380;
  if (block181.is_used()) {
    ca_.Bind(&block181, &phi_bb181_15, &phi_bb181_16, &phi_bb181_17, &phi_bb181_25, &phi_bb181_26, &phi_bb181_27, &phi_bb181_28, &phi_bb181_30, &phi_bb181_31, &phi_bb181_32, &phi_bb181_34, &phi_bb181_37, &phi_bb181_38, &phi_bb181_39, &phi_bb181_40);
    tmp376 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{p_context}, TNode<Object>{tmp188});
    std::tie(tmp377, tmp378) = CodeStubAssembler(state_).BigIntToRawBytes(TNode<BigInt>{tmp376}).Flatten();
    tmp379 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp377});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb181_37, phi_bb181_38}, tmp379);
    tmp380 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp378});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb181_39, phi_bb181_40}, tmp380);
    ca_.Goto(&block162, phi_bb181_15, phi_bb181_16, phi_bb181_17, tmp352, phi_bb181_25, phi_bb181_26, phi_bb181_27, phi_bb181_28, phi_bb181_30, phi_bb181_31, phi_bb181_32, phi_bb181_34);
  }

  TNode<Object> phi_bb162_15;
  TNode<IntPtrT> phi_bb162_16;
  TNode<BoolT> phi_bb162_17;
  TNode<IntPtrT> phi_bb162_24;
  TNode<IntPtrT> phi_bb162_25;
  TNode<IntPtrT> phi_bb162_26;
  TNode<IntPtrT> phi_bb162_27;
  TNode<IntPtrT> phi_bb162_28;
  TNode<IntPtrT> phi_bb162_30;
  TNode<BoolT> phi_bb162_31;
  TNode<BoolT> phi_bb162_32;
  TNode<Int32T> phi_bb162_34;
  if (block162.is_used()) {
    ca_.Bind(&block162, &phi_bb162_15, &phi_bb162_16, &phi_bb162_17, &phi_bb162_24, &phi_bb162_25, &phi_bb162_26, &phi_bb162_27, &phi_bb162_28, &phi_bb162_30, &phi_bb162_31, &phi_bb162_32, &phi_bb162_34);
    ca_.Goto(&block159, phi_bb162_15, phi_bb162_16, phi_bb162_17, phi_bb162_24, phi_bb162_25, phi_bb162_26, phi_bb162_27, phi_bb162_28, phi_bb162_30, phi_bb162_31, phi_bb162_32, phi_bb162_34);
  }

  TNode<Object> phi_bb158_15;
  TNode<IntPtrT> phi_bb158_16;
  TNode<BoolT> phi_bb158_17;
  TNode<IntPtrT> phi_bb158_24;
  TNode<IntPtrT> phi_bb158_25;
  TNode<IntPtrT> phi_bb158_26;
  TNode<IntPtrT> phi_bb158_27;
  TNode<IntPtrT> phi_bb158_28;
  TNode<IntPtrT> phi_bb158_30;
  TNode<BoolT> phi_bb158_31;
  TNode<BoolT> phi_bb158_32;
  TNode<Int32T> phi_bb158_34;
  TNode<BoolT> tmp381;
  TNode<IntPtrT> tmp382;
  TNode<IntPtrT> tmp383;
  TNode<WasmInstanceObject> tmp384;
  TNode<Object> tmp385;
  if (block158.is_used()) {
    ca_.Bind(&block158, &phi_bb158_15, &phi_bb158_16, &phi_bb158_17, &phi_bb158_24, &phi_bb158_25, &phi_bb158_26, &phi_bb158_27, &phi_bb158_28, &phi_bb158_30, &phi_bb158_31, &phi_bb158_32, &phi_bb158_34);
    tmp381 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    tmp382 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb158_34});
    tmp383 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp384 = CodeStubAssembler(state_).LoadReference<WasmInstanceObject>(CodeStubAssembler::Reference{tmp4, tmp383});
    tmp385 = JSToWasmObject_0(state_, TNode<NativeContext>{p_context}, TNode<HeapObject>{tmp384}, TNode<Int32T>{tmp196}, TNode<Object>{tmp188});
    CodeStubAssembler(state_).SetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{p_arguments.frame}, TNode<RawPtrT>{p_arguments.base}, TNode<IntPtrT>{p_arguments.length}, TNode<IntPtrT>{p_arguments.actual_count}}, TNode<IntPtrT>{tmp382}, TNode<Object>{tmp385});
    ca_.Goto(&block159, phi_bb158_15, phi_bb158_16, phi_bb158_17, phi_bb158_24, phi_bb158_25, phi_bb158_26, phi_bb158_27, phi_bb158_28, phi_bb158_30, phi_bb158_31, tmp381, phi_bb158_34);
  }

  TNode<Object> phi_bb159_15;
  TNode<IntPtrT> phi_bb159_16;
  TNode<BoolT> phi_bb159_17;
  TNode<IntPtrT> phi_bb159_24;
  TNode<IntPtrT> phi_bb159_25;
  TNode<IntPtrT> phi_bb159_26;
  TNode<IntPtrT> phi_bb159_27;
  TNode<IntPtrT> phi_bb159_28;
  TNode<IntPtrT> phi_bb159_30;
  TNode<BoolT> phi_bb159_31;
  TNode<BoolT> phi_bb159_32;
  TNode<Int32T> phi_bb159_34;
  if (block159.is_used()) {
    ca_.Bind(&block159, &phi_bb159_15, &phi_bb159_16, &phi_bb159_17, &phi_bb159_24, &phi_bb159_25, &phi_bb159_26, &phi_bb159_27, &phi_bb159_28, &phi_bb159_30, &phi_bb159_31, &phi_bb159_32, &phi_bb159_34);
    ca_.Goto(&block144, phi_bb159_15, phi_bb159_16, phi_bb159_17, phi_bb159_24, phi_bb159_25, phi_bb159_26, phi_bb159_27, phi_bb159_28, phi_bb159_30, phi_bb159_31, phi_bb159_32, phi_bb159_34);
  }

  TNode<Object> phi_bb144_15;
  TNode<IntPtrT> phi_bb144_16;
  TNode<BoolT> phi_bb144_17;
  TNode<IntPtrT> phi_bb144_24;
  TNode<IntPtrT> phi_bb144_25;
  TNode<IntPtrT> phi_bb144_26;
  TNode<IntPtrT> phi_bb144_27;
  TNode<IntPtrT> phi_bb144_28;
  TNode<IntPtrT> phi_bb144_30;
  TNode<BoolT> phi_bb144_31;
  TNode<BoolT> phi_bb144_32;
  TNode<Int32T> phi_bb144_34;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_15, &phi_bb144_16, &phi_bb144_17, &phi_bb144_24, &phi_bb144_25, &phi_bb144_26, &phi_bb144_27, &phi_bb144_28, &phi_bb144_30, &phi_bb144_31, &phi_bb144_32, &phi_bb144_34);
    ca_.Goto(&block132, phi_bb144_15, phi_bb144_16, phi_bb144_17, phi_bb144_24, phi_bb144_25, phi_bb144_26, phi_bb144_27, phi_bb144_28, phi_bb144_30, phi_bb144_31, phi_bb144_32, phi_bb144_34);
  }

  TNode<Object> phi_bb132_15;
  TNode<IntPtrT> phi_bb132_16;
  TNode<BoolT> phi_bb132_17;
  TNode<IntPtrT> phi_bb132_24;
  TNode<IntPtrT> phi_bb132_25;
  TNode<IntPtrT> phi_bb132_26;
  TNode<IntPtrT> phi_bb132_27;
  TNode<IntPtrT> phi_bb132_28;
  TNode<IntPtrT> phi_bb132_30;
  TNode<BoolT> phi_bb132_31;
  TNode<BoolT> phi_bb132_32;
  TNode<Int32T> phi_bb132_34;
  if (block132.is_used()) {
    ca_.Bind(&block132, &phi_bb132_15, &phi_bb132_16, &phi_bb132_17, &phi_bb132_24, &phi_bb132_25, &phi_bb132_26, &phi_bb132_27, &phi_bb132_28, &phi_bb132_30, &phi_bb132_31, &phi_bb132_32, &phi_bb132_34);
    ca_.Goto(&block116, phi_bb132_15, phi_bb132_16, phi_bb132_17, phi_bb132_24, phi_bb132_25, phi_bb132_26, phi_bb132_27, phi_bb132_28, phi_bb132_30, phi_bb132_31, phi_bb132_32, phi_bb132_34);
  }

  TNode<Object> phi_bb116_15;
  TNode<IntPtrT> phi_bb116_16;
  TNode<BoolT> phi_bb116_17;
  TNode<IntPtrT> phi_bb116_24;
  TNode<IntPtrT> phi_bb116_25;
  TNode<IntPtrT> phi_bb116_26;
  TNode<IntPtrT> phi_bb116_27;
  TNode<IntPtrT> phi_bb116_28;
  TNode<IntPtrT> phi_bb116_30;
  TNode<BoolT> phi_bb116_31;
  TNode<BoolT> phi_bb116_32;
  TNode<Int32T> phi_bb116_34;
  TNode<Int32T> tmp386;
  TNode<Int32T> tmp387;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_15, &phi_bb116_16, &phi_bb116_17, &phi_bb116_24, &phi_bb116_25, &phi_bb116_26, &phi_bb116_27, &phi_bb116_28, &phi_bb116_30, &phi_bb116_31, &phi_bb116_32, &phi_bb116_34);
    tmp386 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp387 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{phi_bb116_34}, TNode<Int32T>{tmp386});
    ca_.Goto(&block111, phi_bb116_15, phi_bb116_16, phi_bb116_17, phi_bb116_24, phi_bb116_25, phi_bb116_26, phi_bb116_27, phi_bb116_28, phi_bb116_30, phi_bb116_31, phi_bb116_32, tmp190, tmp387);
  }

  TNode<Object> phi_bb110_15;
  TNode<IntPtrT> phi_bb110_16;
  TNode<BoolT> phi_bb110_17;
  TNode<IntPtrT> phi_bb110_24;
  TNode<IntPtrT> phi_bb110_25;
  TNode<IntPtrT> phi_bb110_26;
  TNode<IntPtrT> phi_bb110_27;
  TNode<IntPtrT> phi_bb110_28;
  TNode<IntPtrT> phi_bb110_30;
  TNode<BoolT> phi_bb110_31;
  TNode<BoolT> phi_bb110_32;
  TNode<Int32T> phi_bb110_33;
  TNode<Int32T> phi_bb110_34;
  if (block110.is_used()) {
    ca_.Bind(&block110, &phi_bb110_15, &phi_bb110_16, &phi_bb110_17, &phi_bb110_24, &phi_bb110_25, &phi_bb110_26, &phi_bb110_27, &phi_bb110_28, &phi_bb110_30, &phi_bb110_31, &phi_bb110_32, &phi_bb110_33, &phi_bb110_34);
    ca_.Branch(phi_bb110_32, &block190, std::vector<compiler::Node*>{phi_bb110_15, phi_bb110_16, phi_bb110_17, phi_bb110_24, phi_bb110_25, phi_bb110_26, phi_bb110_27, phi_bb110_28, phi_bb110_30, phi_bb110_31, phi_bb110_32, phi_bb110_33}, &block191, std::vector<compiler::Node*>{phi_bb110_15, phi_bb110_16, phi_bb110_17, phi_bb110_24, phi_bb110_25, phi_bb110_26, phi_bb110_27, phi_bb110_28, phi_bb110_30, phi_bb110_31, phi_bb110_32, phi_bb110_33});
  }

  TNode<Object> phi_bb190_15;
  TNode<IntPtrT> phi_bb190_16;
  TNode<BoolT> phi_bb190_17;
  TNode<IntPtrT> phi_bb190_24;
  TNode<IntPtrT> phi_bb190_25;
  TNode<IntPtrT> phi_bb190_26;
  TNode<IntPtrT> phi_bb190_27;
  TNode<IntPtrT> phi_bb190_28;
  TNode<IntPtrT> phi_bb190_30;
  TNode<BoolT> phi_bb190_31;
  TNode<BoolT> phi_bb190_32;
  TNode<Int32T> phi_bb190_33;
  TNode<Int32T> tmp388;
  TNode<Int32T> tmp389;
  TNode<BoolT> tmp390;
  if (block190.is_used()) {
    ca_.Bind(&block190, &phi_bb190_15, &phi_bb190_16, &phi_bb190_17, &phi_bb190_24, &phi_bb190_25, &phi_bb190_26, &phi_bb190_27, &phi_bb190_28, &phi_bb190_30, &phi_bb190_31, &phi_bb190_32, &phi_bb190_33);
    tmp388 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp389 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp390 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{phi_bb190_31});
    ca_.Branch(tmp390, &block193, std::vector<compiler::Node*>{phi_bb190_15, phi_bb190_16, phi_bb190_17, phi_bb190_24, phi_bb190_25, phi_bb190_26, phi_bb190_27, phi_bb190_28, phi_bb190_30, phi_bb190_31, phi_bb190_32, phi_bb190_33}, &block194, std::vector<compiler::Node*>{phi_bb190_15, phi_bb190_16, phi_bb190_17, phi_bb190_24, phi_bb190_25, phi_bb190_26, phi_bb190_27, phi_bb190_28, phi_bb190_30, phi_bb190_31, phi_bb190_32, phi_bb190_33});
  }

  TNode<Object> phi_bb193_15;
  TNode<IntPtrT> phi_bb193_16;
  TNode<BoolT> phi_bb193_17;
  TNode<IntPtrT> phi_bb193_24;
  TNode<IntPtrT> phi_bb193_25;
  TNode<IntPtrT> phi_bb193_26;
  TNode<IntPtrT> phi_bb193_27;
  TNode<IntPtrT> phi_bb193_28;
  TNode<IntPtrT> phi_bb193_30;
  TNode<BoolT> phi_bb193_31;
  TNode<BoolT> phi_bb193_32;
  TNode<Int32T> phi_bb193_33;
  TNode<IntPtrT> tmp391;
  if (block193.is_used()) {
    ca_.Bind(&block193, &phi_bb193_15, &phi_bb193_16, &phi_bb193_17, &phi_bb193_24, &phi_bb193_25, &phi_bb193_26, &phi_bb193_27, &phi_bb193_28, &phi_bb193_30, &phi_bb193_31, &phi_bb193_32, &phi_bb193_33);
    tmp391 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block194, phi_bb193_15, phi_bb193_16, phi_bb193_17, phi_bb193_24, phi_bb193_25, phi_bb193_26, phi_bb193_27, phi_bb193_28, tmp391, phi_bb193_31, phi_bb193_32, phi_bb193_33);
  }

  TNode<Object> phi_bb194_15;
  TNode<IntPtrT> phi_bb194_16;
  TNode<BoolT> phi_bb194_17;
  TNode<IntPtrT> phi_bb194_24;
  TNode<IntPtrT> phi_bb194_25;
  TNode<IntPtrT> phi_bb194_26;
  TNode<IntPtrT> phi_bb194_27;
  TNode<IntPtrT> phi_bb194_28;
  TNode<IntPtrT> phi_bb194_30;
  TNode<BoolT> phi_bb194_31;
  TNode<BoolT> phi_bb194_32;
  TNode<Int32T> phi_bb194_33;
  if (block194.is_used()) {
    ca_.Bind(&block194, &phi_bb194_15, &phi_bb194_16, &phi_bb194_17, &phi_bb194_24, &phi_bb194_25, &phi_bb194_26, &phi_bb194_27, &phi_bb194_28, &phi_bb194_30, &phi_bb194_31, &phi_bb194_32, &phi_bb194_33);
    if ((p_switchStack)) {
      ca_.Goto(&block195, phi_bb194_15, phi_bb194_16, phi_bb194_17, phi_bb194_24, phi_bb194_25, phi_bb194_26, phi_bb194_27, phi_bb194_28, phi_bb194_31, phi_bb194_32, phi_bb194_33);
    } else {
      ca_.Goto(&block196, phi_bb194_15, phi_bb194_16, phi_bb194_17, phi_bb194_24, phi_bb194_25, phi_bb194_26, phi_bb194_27, phi_bb194_28, phi_bb194_31, phi_bb194_32, phi_bb194_33);
    }
  }

  TNode<Object> phi_bb195_15;
  TNode<IntPtrT> phi_bb195_16;
  TNode<BoolT> phi_bb195_17;
  TNode<IntPtrT> phi_bb195_24;
  TNode<IntPtrT> phi_bb195_25;
  TNode<IntPtrT> phi_bb195_26;
  TNode<IntPtrT> phi_bb195_27;
  TNode<IntPtrT> phi_bb195_28;
  TNode<BoolT> phi_bb195_31;
  TNode<BoolT> phi_bb195_32;
  TNode<Int32T> phi_bb195_33;
  TNode<Object> tmp392;
  TNode<IntPtrT> tmp393;
  TNode<IntPtrT> tmp394;
  TNode<IntPtrT> tmp395;
  TNode<BoolT> tmp396;
  if (block195.is_used()) {
    ca_.Bind(&block195, &phi_bb195_15, &phi_bb195_16, &phi_bb195_17, &phi_bb195_24, &phi_bb195_25, &phi_bb195_26, &phi_bb195_27, &phi_bb195_28, &phi_bb195_31, &phi_bb195_32, &phi_bb195_33);
    tmp392 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmAllocateSuspender, p_context); 
    tmp393 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp394 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb195_24}, TNode<IntPtrT>{tmp393});
    tmp395 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp396 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb195_24}, TNode<IntPtrT>{tmp395});
    ca_.Branch(tmp396, &block199, std::vector<compiler::Node*>{phi_bb195_15, phi_bb195_16, phi_bb195_17, phi_bb195_25, phi_bb195_26, phi_bb195_27, phi_bb195_28, phi_bb195_31, phi_bb195_32, phi_bb195_33}, &block200, std::vector<compiler::Node*>{phi_bb195_15, phi_bb195_16, phi_bb195_17, phi_bb195_25, phi_bb195_26, phi_bb195_27, phi_bb195_28, phi_bb195_31, phi_bb195_32, phi_bb195_33});
  }

  TNode<Object> phi_bb199_15;
  TNode<IntPtrT> phi_bb199_16;
  TNode<BoolT> phi_bb199_17;
  TNode<IntPtrT> phi_bb199_25;
  TNode<IntPtrT> phi_bb199_26;
  TNode<IntPtrT> phi_bb199_27;
  TNode<IntPtrT> phi_bb199_28;
  TNode<BoolT> phi_bb199_31;
  TNode<BoolT> phi_bb199_32;
  TNode<Int32T> phi_bb199_33;
  TNode<Object> tmp397;
  TNode<IntPtrT> tmp398;
  TNode<IntPtrT> tmp399;
  TNode<IntPtrT> tmp400;
  if (block199.is_used()) {
    ca_.Bind(&block199, &phi_bb199_15, &phi_bb199_16, &phi_bb199_17, &phi_bb199_25, &phi_bb199_26, &phi_bb199_27, &phi_bb199_28, &phi_bb199_31, &phi_bb199_32, &phi_bb199_33);
    std::tie(tmp397, tmp398) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb199_26}).Flatten();
    tmp399 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp400 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb199_26}, TNode<IntPtrT>{tmp399});
    ca_.Goto(&block198, phi_bb199_15, phi_bb199_16, phi_bb199_17, phi_bb199_25, tmp400, phi_bb199_27, phi_bb199_28, phi_bb194_30, phi_bb199_31, phi_bb199_32, phi_bb199_33, tmp397, tmp398);
  }

  TNode<Object> phi_bb200_15;
  TNode<IntPtrT> phi_bb200_16;
  TNode<BoolT> phi_bb200_17;
  TNode<IntPtrT> phi_bb200_25;
  TNode<IntPtrT> phi_bb200_26;
  TNode<IntPtrT> phi_bb200_27;
  TNode<IntPtrT> phi_bb200_28;
  TNode<BoolT> phi_bb200_31;
  TNode<BoolT> phi_bb200_32;
  TNode<Int32T> phi_bb200_33;
  if (block200.is_used()) {
    ca_.Bind(&block200, &phi_bb200_15, &phi_bb200_16, &phi_bb200_17, &phi_bb200_25, &phi_bb200_26, &phi_bb200_27, &phi_bb200_28, &phi_bb200_31, &phi_bb200_32, &phi_bb200_33);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block202, phi_bb200_15, phi_bb200_16, phi_bb200_17, phi_bb200_25, phi_bb200_26, phi_bb200_27, phi_bb200_28, phi_bb200_31, phi_bb200_32, phi_bb200_33);
    } else {
      ca_.Goto(&block203, phi_bb200_15, phi_bb200_16, phi_bb200_17, phi_bb200_25, phi_bb200_26, phi_bb200_27, phi_bb200_28, phi_bb200_31, phi_bb200_32, phi_bb200_33);
    }
  }

  TNode<Object> phi_bb202_15;
  TNode<IntPtrT> phi_bb202_16;
  TNode<BoolT> phi_bb202_17;
  TNode<IntPtrT> phi_bb202_25;
  TNode<IntPtrT> phi_bb202_26;
  TNode<IntPtrT> phi_bb202_27;
  TNode<IntPtrT> phi_bb202_28;
  TNode<BoolT> phi_bb202_31;
  TNode<BoolT> phi_bb202_32;
  TNode<Int32T> phi_bb202_33;
  TNode<Object> tmp401;
  TNode<IntPtrT> tmp402;
  TNode<IntPtrT> tmp403;
  TNode<IntPtrT> tmp404;
  if (block202.is_used()) {
    ca_.Bind(&block202, &phi_bb202_15, &phi_bb202_16, &phi_bb202_17, &phi_bb202_25, &phi_bb202_26, &phi_bb202_27, &phi_bb202_28, &phi_bb202_31, &phi_bb202_32, &phi_bb202_33);
    std::tie(tmp401, tmp402) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb202_28}).Flatten();
    tmp403 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp404 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb202_28}, TNode<IntPtrT>{tmp403});
    ca_.Goto(&block201, phi_bb202_15, phi_bb202_16, phi_bb202_17, phi_bb202_25, phi_bb202_26, phi_bb202_27, tmp404, phi_bb194_30, phi_bb202_31, phi_bb202_32, phi_bb202_33, tmp401, tmp402);
  }

  TNode<Object> phi_bb203_15;
  TNode<IntPtrT> phi_bb203_16;
  TNode<BoolT> phi_bb203_17;
  TNode<IntPtrT> phi_bb203_25;
  TNode<IntPtrT> phi_bb203_26;
  TNode<IntPtrT> phi_bb203_27;
  TNode<IntPtrT> phi_bb203_28;
  TNode<BoolT> phi_bb203_31;
  TNode<BoolT> phi_bb203_32;
  TNode<Int32T> phi_bb203_33;
  TNode<IntPtrT> tmp405;
  TNode<BoolT> tmp406;
  if (block203.is_used()) {
    ca_.Bind(&block203, &phi_bb203_15, &phi_bb203_16, &phi_bb203_17, &phi_bb203_25, &phi_bb203_26, &phi_bb203_27, &phi_bb203_28, &phi_bb203_31, &phi_bb203_32, &phi_bb203_33);
    tmp405 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp406 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb194_30}, TNode<IntPtrT>{tmp405});
    ca_.Branch(tmp406, &block205, std::vector<compiler::Node*>{phi_bb203_15, phi_bb203_16, phi_bb203_17, phi_bb203_25, phi_bb203_26, phi_bb203_27, phi_bb203_28, phi_bb203_31, phi_bb203_32, phi_bb203_33}, &block206, std::vector<compiler::Node*>{phi_bb203_15, phi_bb203_16, phi_bb203_17, phi_bb203_25, phi_bb203_26, phi_bb203_27, phi_bb203_28, phi_bb203_31, phi_bb203_32, phi_bb203_33});
  }

  TNode<Object> phi_bb205_15;
  TNode<IntPtrT> phi_bb205_16;
  TNode<BoolT> phi_bb205_17;
  TNode<IntPtrT> phi_bb205_25;
  TNode<IntPtrT> phi_bb205_26;
  TNode<IntPtrT> phi_bb205_27;
  TNode<IntPtrT> phi_bb205_28;
  TNode<BoolT> phi_bb205_31;
  TNode<BoolT> phi_bb205_32;
  TNode<Int32T> phi_bb205_33;
  TNode<Object> tmp407;
  TNode<IntPtrT> tmp408;
  TNode<IntPtrT> tmp409;
  TNode<BoolT> tmp410;
  if (block205.is_used()) {
    ca_.Bind(&block205, &phi_bb205_15, &phi_bb205_16, &phi_bb205_17, &phi_bb205_25, &phi_bb205_26, &phi_bb205_27, &phi_bb205_28, &phi_bb205_31, &phi_bb205_32, &phi_bb205_33);
    std::tie(tmp407, tmp408) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb194_30}).Flatten();
    tmp409 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp410 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block201, phi_bb205_15, phi_bb205_16, phi_bb205_17, phi_bb205_25, phi_bb205_26, phi_bb205_27, phi_bb205_28, tmp409, tmp410, phi_bb205_32, phi_bb205_33, tmp407, tmp408);
  }

  TNode<Object> phi_bb206_15;
  TNode<IntPtrT> phi_bb206_16;
  TNode<BoolT> phi_bb206_17;
  TNode<IntPtrT> phi_bb206_25;
  TNode<IntPtrT> phi_bb206_26;
  TNode<IntPtrT> phi_bb206_27;
  TNode<IntPtrT> phi_bb206_28;
  TNode<BoolT> phi_bb206_31;
  TNode<BoolT> phi_bb206_32;
  TNode<Int32T> phi_bb206_33;
  TNode<Object> tmp411;
  TNode<IntPtrT> tmp412;
  TNode<IntPtrT> tmp413;
  TNode<IntPtrT> tmp414;
  TNode<IntPtrT> tmp415;
  TNode<IntPtrT> tmp416;
  TNode<BoolT> tmp417;
  if (block206.is_used()) {
    ca_.Bind(&block206, &phi_bb206_15, &phi_bb206_16, &phi_bb206_17, &phi_bb206_25, &phi_bb206_26, &phi_bb206_27, &phi_bb206_28, &phi_bb206_31, &phi_bb206_32, &phi_bb206_33);
    std::tie(tmp411, tmp412) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb206_28}).Flatten();
    tmp413 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp414 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb206_28}, TNode<IntPtrT>{tmp413});
    tmp415 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp416 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp414}, TNode<IntPtrT>{tmp415});
    tmp417 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block201, phi_bb206_15, phi_bb206_16, phi_bb206_17, phi_bb206_25, phi_bb206_26, phi_bb206_27, tmp416, tmp414, tmp417, phi_bb206_32, phi_bb206_33, tmp411, tmp412);
  }

  TNode<Object> phi_bb201_15;
  TNode<IntPtrT> phi_bb201_16;
  TNode<BoolT> phi_bb201_17;
  TNode<IntPtrT> phi_bb201_25;
  TNode<IntPtrT> phi_bb201_26;
  TNode<IntPtrT> phi_bb201_27;
  TNode<IntPtrT> phi_bb201_28;
  TNode<IntPtrT> phi_bb201_30;
  TNode<BoolT> phi_bb201_31;
  TNode<BoolT> phi_bb201_32;
  TNode<Int32T> phi_bb201_33;
  TNode<Object> phi_bb201_37;
  TNode<IntPtrT> phi_bb201_38;
  if (block201.is_used()) {
    ca_.Bind(&block201, &phi_bb201_15, &phi_bb201_16, &phi_bb201_17, &phi_bb201_25, &phi_bb201_26, &phi_bb201_27, &phi_bb201_28, &phi_bb201_30, &phi_bb201_31, &phi_bb201_32, &phi_bb201_33, &phi_bb201_37, &phi_bb201_38);
    ca_.Goto(&block198, phi_bb201_15, phi_bb201_16, phi_bb201_17, phi_bb201_25, phi_bb201_26, phi_bb201_27, phi_bb201_28, phi_bb201_30, phi_bb201_31, phi_bb201_32, phi_bb201_33, phi_bb201_37, phi_bb201_38);
  }

  TNode<Object> phi_bb198_15;
  TNode<IntPtrT> phi_bb198_16;
  TNode<BoolT> phi_bb198_17;
  TNode<IntPtrT> phi_bb198_25;
  TNode<IntPtrT> phi_bb198_26;
  TNode<IntPtrT> phi_bb198_27;
  TNode<IntPtrT> phi_bb198_28;
  TNode<IntPtrT> phi_bb198_30;
  TNode<BoolT> phi_bb198_31;
  TNode<BoolT> phi_bb198_32;
  TNode<Int32T> phi_bb198_33;
  TNode<Object> phi_bb198_37;
  TNode<IntPtrT> phi_bb198_38;
  TNode<IntPtrT> tmp418;
  TNode<Int32T> tmp419;
  TNode<Int32T> tmp420;
  if (block198.is_used()) {
    ca_.Bind(&block198, &phi_bb198_15, &phi_bb198_16, &phi_bb198_17, &phi_bb198_25, &phi_bb198_26, &phi_bb198_27, &phi_bb198_28, &phi_bb198_30, &phi_bb198_31, &phi_bb198_32, &phi_bb198_33, &phi_bb198_37, &phi_bb198_38);
    tmp418 = CodeStubAssembler(state_).BitcastTaggedToWord(TNode<Object>{tmp392});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb198_37, phi_bb198_38}, tmp418);
    tmp419 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp420 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp388}, TNode<Int32T>{tmp419});
    ca_.Goto(&block197, phi_bb198_15, phi_bb198_16, phi_bb198_17, tmp394, phi_bb198_25, phi_bb198_26, phi_bb198_27, phi_bb198_28, phi_bb198_30, phi_bb198_31, phi_bb198_32, phi_bb198_33, tmp420);
  }

  TNode<Object> phi_bb196_15;
  TNode<IntPtrT> phi_bb196_16;
  TNode<BoolT> phi_bb196_17;
  TNode<IntPtrT> phi_bb196_24;
  TNode<IntPtrT> phi_bb196_25;
  TNode<IntPtrT> phi_bb196_26;
  TNode<IntPtrT> phi_bb196_27;
  TNode<IntPtrT> phi_bb196_28;
  TNode<BoolT> phi_bb196_31;
  TNode<BoolT> phi_bb196_32;
  TNode<Int32T> phi_bb196_33;
  if (block196.is_used()) {
    ca_.Bind(&block196, &phi_bb196_15, &phi_bb196_16, &phi_bb196_17, &phi_bb196_24, &phi_bb196_25, &phi_bb196_26, &phi_bb196_27, &phi_bb196_28, &phi_bb196_31, &phi_bb196_32, &phi_bb196_33);
    ca_.Goto(&block197, phi_bb196_15, phi_bb196_16, phi_bb196_17, phi_bb196_24, phi_bb196_25, phi_bb196_26, phi_bb196_27, phi_bb196_28, phi_bb194_30, phi_bb196_31, phi_bb196_32, phi_bb196_33, tmp388);
  }

  TNode<Object> phi_bb197_15;
  TNode<IntPtrT> phi_bb197_16;
  TNode<BoolT> phi_bb197_17;
  TNode<IntPtrT> phi_bb197_24;
  TNode<IntPtrT> phi_bb197_25;
  TNode<IntPtrT> phi_bb197_26;
  TNode<IntPtrT> phi_bb197_27;
  TNode<IntPtrT> phi_bb197_28;
  TNode<IntPtrT> phi_bb197_30;
  TNode<BoolT> phi_bb197_31;
  TNode<BoolT> phi_bb197_32;
  TNode<Int32T> phi_bb197_33;
  TNode<Int32T> phi_bb197_34;
  if (block197.is_used()) {
    ca_.Bind(&block197, &phi_bb197_15, &phi_bb197_16, &phi_bb197_17, &phi_bb197_24, &phi_bb197_25, &phi_bb197_26, &phi_bb197_27, &phi_bb197_28, &phi_bb197_30, &phi_bb197_31, &phi_bb197_32, &phi_bb197_33, &phi_bb197_34);
    ca_.Goto(&block209, phi_bb197_15, phi_bb197_16, phi_bb197_17, phi_bb197_24, phi_bb197_25, phi_bb197_26, phi_bb197_27, phi_bb197_28, phi_bb197_30, phi_bb197_31, phi_bb197_32, phi_bb197_33, phi_bb197_34, tmp389);
  }

  TNode<Object> phi_bb209_15;
  TNode<IntPtrT> phi_bb209_16;
  TNode<BoolT> phi_bb209_17;
  TNode<IntPtrT> phi_bb209_24;
  TNode<IntPtrT> phi_bb209_25;
  TNode<IntPtrT> phi_bb209_26;
  TNode<IntPtrT> phi_bb209_27;
  TNode<IntPtrT> phi_bb209_28;
  TNode<IntPtrT> phi_bb209_30;
  TNode<BoolT> phi_bb209_31;
  TNode<BoolT> phi_bb209_32;
  TNode<Int32T> phi_bb209_33;
  TNode<Int32T> phi_bb209_34;
  TNode<Int32T> phi_bb209_35;
  TNode<BoolT> tmp421;
  if (block209.is_used()) {
    ca_.Bind(&block209, &phi_bb209_15, &phi_bb209_16, &phi_bb209_17, &phi_bb209_24, &phi_bb209_25, &phi_bb209_26, &phi_bb209_27, &phi_bb209_28, &phi_bb209_30, &phi_bb209_31, &phi_bb209_32, &phi_bb209_33, &phi_bb209_34, &phi_bb209_35);
    tmp421 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{phi_bb209_34}, TNode<Int32T>{tmp20});
    ca_.Branch(tmp421, &block207, std::vector<compiler::Node*>{phi_bb209_15, phi_bb209_16, phi_bb209_17, phi_bb209_24, phi_bb209_25, phi_bb209_26, phi_bb209_27, phi_bb209_28, phi_bb209_30, phi_bb209_31, phi_bb209_32, phi_bb209_33, phi_bb209_34, phi_bb209_35}, &block208, std::vector<compiler::Node*>{phi_bb209_15, phi_bb209_16, phi_bb209_17, phi_bb209_24, phi_bb209_25, phi_bb209_26, phi_bb209_27, phi_bb209_28, phi_bb209_30, phi_bb209_31, phi_bb209_32, phi_bb209_33, phi_bb209_34, phi_bb209_35});
  }

  TNode<Object> phi_bb207_15;
  TNode<IntPtrT> phi_bb207_16;
  TNode<BoolT> phi_bb207_17;
  TNode<IntPtrT> phi_bb207_24;
  TNode<IntPtrT> phi_bb207_25;
  TNode<IntPtrT> phi_bb207_26;
  TNode<IntPtrT> phi_bb207_27;
  TNode<IntPtrT> phi_bb207_28;
  TNode<IntPtrT> phi_bb207_30;
  TNode<BoolT> phi_bb207_31;
  TNode<BoolT> phi_bb207_32;
  TNode<Int32T> phi_bb207_33;
  TNode<Int32T> phi_bb207_34;
  TNode<Int32T> phi_bb207_35;
  TNode<IntPtrT> tmp422;
  TNode<IntPtrT> tmp423;
  TNode<IntPtrT> tmp424;
  TNode<Object> tmp425;
  TNode<IntPtrT> tmp426;
  TNode<Int32T> tmp427;
  TNode<Int32T> tmp428;
  TNode<Int32T> tmp429;
  TNode<Int32T> tmp430;
  TNode<BoolT> tmp431;
  if (block207.is_used()) {
    ca_.Bind(&block207, &phi_bb207_15, &phi_bb207_16, &phi_bb207_17, &phi_bb207_24, &phi_bb207_25, &phi_bb207_26, &phi_bb207_27, &phi_bb207_28, &phi_bb207_30, &phi_bb207_31, &phi_bb207_32, &phi_bb207_33, &phi_bb207_34, &phi_bb207_35);
    tmp422 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb207_34});
    tmp423 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{tmp422});
    tmp424 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp145}, TNode<IntPtrT>{tmp423});
    std::tie(tmp425, tmp426) = NewReference_int32_0(state_, TNode<Object>{tmp144}, TNode<IntPtrT>{tmp424}).Flatten();
    tmp427 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp425, tmp426});
    tmp428 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmValueKindBitsMask);
    tmp429 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp427}, TNode<Int32T>{tmp428});
    tmp430 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueKind::kRef);
    tmp431 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp429}, TNode<Int32T>{tmp430});
    ca_.Branch(tmp431, &block213, std::vector<compiler::Node*>{phi_bb207_15, phi_bb207_16, phi_bb207_17, phi_bb207_24, phi_bb207_25, phi_bb207_26, phi_bb207_27, phi_bb207_28, phi_bb207_30, phi_bb207_31, phi_bb207_32, phi_bb207_33, phi_bb207_34, phi_bb207_35}, &block214, std::vector<compiler::Node*>{phi_bb207_15, phi_bb207_16, phi_bb207_17, phi_bb207_24, phi_bb207_25, phi_bb207_26, phi_bb207_27, phi_bb207_28, phi_bb207_30, phi_bb207_31, phi_bb207_32, phi_bb207_33, phi_bb207_34, phi_bb207_35});
  }

  TNode<Object> phi_bb213_15;
  TNode<IntPtrT> phi_bb213_16;
  TNode<BoolT> phi_bb213_17;
  TNode<IntPtrT> phi_bb213_24;
  TNode<IntPtrT> phi_bb213_25;
  TNode<IntPtrT> phi_bb213_26;
  TNode<IntPtrT> phi_bb213_27;
  TNode<IntPtrT> phi_bb213_28;
  TNode<IntPtrT> phi_bb213_30;
  TNode<BoolT> phi_bb213_31;
  TNode<BoolT> phi_bb213_32;
  TNode<Int32T> phi_bb213_33;
  TNode<Int32T> phi_bb213_34;
  TNode<Int32T> phi_bb213_35;
  TNode<Int32T> tmp432;
  TNode<BoolT> tmp433;
  if (block213.is_used()) {
    ca_.Bind(&block213, &phi_bb213_15, &phi_bb213_16, &phi_bb213_17, &phi_bb213_24, &phi_bb213_25, &phi_bb213_26, &phi_bb213_27, &phi_bb213_28, &phi_bb213_30, &phi_bb213_31, &phi_bb213_32, &phi_bb213_33, &phi_bb213_34, &phi_bb213_35);
    tmp432 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueKind::kRefNull);
    tmp433 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp429}, TNode<Int32T>{tmp432});
    ca_.Goto(&block215, phi_bb213_15, phi_bb213_16, phi_bb213_17, phi_bb213_24, phi_bb213_25, phi_bb213_26, phi_bb213_27, phi_bb213_28, phi_bb213_30, phi_bb213_31, phi_bb213_32, phi_bb213_33, phi_bb213_34, phi_bb213_35, tmp433);
  }

  TNode<Object> phi_bb214_15;
  TNode<IntPtrT> phi_bb214_16;
  TNode<BoolT> phi_bb214_17;
  TNode<IntPtrT> phi_bb214_24;
  TNode<IntPtrT> phi_bb214_25;
  TNode<IntPtrT> phi_bb214_26;
  TNode<IntPtrT> phi_bb214_27;
  TNode<IntPtrT> phi_bb214_28;
  TNode<IntPtrT> phi_bb214_30;
  TNode<BoolT> phi_bb214_31;
  TNode<BoolT> phi_bb214_32;
  TNode<Int32T> phi_bb214_33;
  TNode<Int32T> phi_bb214_34;
  TNode<Int32T> phi_bb214_35;
  TNode<BoolT> tmp434;
  if (block214.is_used()) {
    ca_.Bind(&block214, &phi_bb214_15, &phi_bb214_16, &phi_bb214_17, &phi_bb214_24, &phi_bb214_25, &phi_bb214_26, &phi_bb214_27, &phi_bb214_28, &phi_bb214_30, &phi_bb214_31, &phi_bb214_32, &phi_bb214_33, &phi_bb214_34, &phi_bb214_35);
    tmp434 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block215, phi_bb214_15, phi_bb214_16, phi_bb214_17, phi_bb214_24, phi_bb214_25, phi_bb214_26, phi_bb214_27, phi_bb214_28, phi_bb214_30, phi_bb214_31, phi_bb214_32, phi_bb214_33, phi_bb214_34, phi_bb214_35, tmp434);
  }

  TNode<Object> phi_bb215_15;
  TNode<IntPtrT> phi_bb215_16;
  TNode<BoolT> phi_bb215_17;
  TNode<IntPtrT> phi_bb215_24;
  TNode<IntPtrT> phi_bb215_25;
  TNode<IntPtrT> phi_bb215_26;
  TNode<IntPtrT> phi_bb215_27;
  TNode<IntPtrT> phi_bb215_28;
  TNode<IntPtrT> phi_bb215_30;
  TNode<BoolT> phi_bb215_31;
  TNode<BoolT> phi_bb215_32;
  TNode<Int32T> phi_bb215_33;
  TNode<Int32T> phi_bb215_34;
  TNode<Int32T> phi_bb215_35;
  TNode<BoolT> phi_bb215_39;
  if (block215.is_used()) {
    ca_.Bind(&block215, &phi_bb215_15, &phi_bb215_16, &phi_bb215_17, &phi_bb215_24, &phi_bb215_25, &phi_bb215_26, &phi_bb215_27, &phi_bb215_28, &phi_bb215_30, &phi_bb215_31, &phi_bb215_32, &phi_bb215_33, &phi_bb215_34, &phi_bb215_35, &phi_bb215_39);
    ca_.Branch(phi_bb215_39, &block211, std::vector<compiler::Node*>{phi_bb215_15, phi_bb215_16, phi_bb215_17, phi_bb215_24, phi_bb215_25, phi_bb215_26, phi_bb215_27, phi_bb215_28, phi_bb215_30, phi_bb215_31, phi_bb215_32, phi_bb215_33, phi_bb215_34, phi_bb215_35}, &block212, std::vector<compiler::Node*>{phi_bb215_15, phi_bb215_16, phi_bb215_17, phi_bb215_24, phi_bb215_25, phi_bb215_26, phi_bb215_27, phi_bb215_28, phi_bb215_30, phi_bb215_31, phi_bb215_32, phi_bb215_33, phi_bb215_34, phi_bb215_35});
  }

  TNode<Object> phi_bb211_15;
  TNode<IntPtrT> phi_bb211_16;
  TNode<BoolT> phi_bb211_17;
  TNode<IntPtrT> phi_bb211_24;
  TNode<IntPtrT> phi_bb211_25;
  TNode<IntPtrT> phi_bb211_26;
  TNode<IntPtrT> phi_bb211_27;
  TNode<IntPtrT> phi_bb211_28;
  TNode<IntPtrT> phi_bb211_30;
  TNode<BoolT> phi_bb211_31;
  TNode<BoolT> phi_bb211_32;
  TNode<Int32T> phi_bb211_33;
  TNode<Int32T> phi_bb211_34;
  TNode<Int32T> phi_bb211_35;
  TNode<Int32T> tmp435;
  TNode<Int32T> tmp436;
  TNode<Int32T> tmp437;
  TNode<Int32T> tmp438;
  if (block211.is_used()) {
    ca_.Bind(&block211, &phi_bb211_15, &phi_bb211_16, &phi_bb211_17, &phi_bb211_24, &phi_bb211_25, &phi_bb211_26, &phi_bb211_27, &phi_bb211_28, &phi_bb211_30, &phi_bb211_31, &phi_bb211_32, &phi_bb211_33, &phi_bb211_34, &phi_bb211_35);
    tmp435 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp436 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{phi_bb211_34}, TNode<Int32T>{tmp435});
    tmp437 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp438 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{phi_bb211_35}, TNode<Int32T>{tmp437});
    ca_.Goto(&block209, phi_bb211_15, phi_bb211_16, phi_bb211_17, phi_bb211_24, phi_bb211_25, phi_bb211_26, phi_bb211_27, phi_bb211_28, phi_bb211_30, phi_bb211_31, phi_bb211_32, phi_bb211_33, tmp436, tmp438);
  }

  TNode<Object> phi_bb212_15;
  TNode<IntPtrT> phi_bb212_16;
  TNode<BoolT> phi_bb212_17;
  TNode<IntPtrT> phi_bb212_24;
  TNode<IntPtrT> phi_bb212_25;
  TNode<IntPtrT> phi_bb212_26;
  TNode<IntPtrT> phi_bb212_27;
  TNode<IntPtrT> phi_bb212_28;
  TNode<IntPtrT> phi_bb212_30;
  TNode<BoolT> phi_bb212_31;
  TNode<BoolT> phi_bb212_32;
  TNode<Int32T> phi_bb212_33;
  TNode<Int32T> phi_bb212_34;
  TNode<Int32T> phi_bb212_35;
  TNode<Int32T> tmp439;
  TNode<Int32T> tmp440;
  TNode<IntPtrT> tmp441;
  TNode<Object> tmp442;
  TNode<IntPtrT> tmp443;
  TNode<IntPtrT> tmp444;
  TNode<IntPtrT> tmp445;
  TNode<BoolT> tmp446;
  if (block212.is_used()) {
    ca_.Bind(&block212, &phi_bb212_15, &phi_bb212_16, &phi_bb212_17, &phi_bb212_24, &phi_bb212_25, &phi_bb212_26, &phi_bb212_27, &phi_bb212_28, &phi_bb212_30, &phi_bb212_31, &phi_bb212_32, &phi_bb212_33, &phi_bb212_34, &phi_bb212_35);
    tmp439 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp440 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{phi_bb212_35}, TNode<Int32T>{tmp439});
    tmp441 = Convert_intptr_int32_0(state_, TNode<Int32T>{phi_bb212_35});
    tmp442 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{p_arguments.frame}, TNode<RawPtrT>{p_arguments.base}, TNode<IntPtrT>{p_arguments.length}, TNode<IntPtrT>{p_arguments.actual_count}}, TNode<IntPtrT>{tmp441});
    tmp443 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp444 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb212_24}, TNode<IntPtrT>{tmp443});
    tmp445 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp446 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb212_24}, TNode<IntPtrT>{tmp445});
    ca_.Branch(tmp446, &block217, std::vector<compiler::Node*>{phi_bb212_15, phi_bb212_16, phi_bb212_17, phi_bb212_25, phi_bb212_26, phi_bb212_27, phi_bb212_28, phi_bb212_30, phi_bb212_31, phi_bb212_32, phi_bb212_33, phi_bb212_34}, &block218, std::vector<compiler::Node*>{phi_bb212_15, phi_bb212_16, phi_bb212_17, phi_bb212_25, phi_bb212_26, phi_bb212_27, phi_bb212_28, phi_bb212_30, phi_bb212_31, phi_bb212_32, phi_bb212_33, phi_bb212_34});
  }

  TNode<Object> phi_bb217_15;
  TNode<IntPtrT> phi_bb217_16;
  TNode<BoolT> phi_bb217_17;
  TNode<IntPtrT> phi_bb217_25;
  TNode<IntPtrT> phi_bb217_26;
  TNode<IntPtrT> phi_bb217_27;
  TNode<IntPtrT> phi_bb217_28;
  TNode<IntPtrT> phi_bb217_30;
  TNode<BoolT> phi_bb217_31;
  TNode<BoolT> phi_bb217_32;
  TNode<Int32T> phi_bb217_33;
  TNode<Int32T> phi_bb217_34;
  TNode<Object> tmp447;
  TNode<IntPtrT> tmp448;
  TNode<IntPtrT> tmp449;
  TNode<IntPtrT> tmp450;
  if (block217.is_used()) {
    ca_.Bind(&block217, &phi_bb217_15, &phi_bb217_16, &phi_bb217_17, &phi_bb217_25, &phi_bb217_26, &phi_bb217_27, &phi_bb217_28, &phi_bb217_30, &phi_bb217_31, &phi_bb217_32, &phi_bb217_33, &phi_bb217_34);
    std::tie(tmp447, tmp448) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb217_26}).Flatten();
    tmp449 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp450 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb217_26}, TNode<IntPtrT>{tmp449});
    ca_.Goto(&block216, phi_bb217_15, phi_bb217_16, phi_bb217_17, phi_bb217_25, tmp450, phi_bb217_27, phi_bb217_28, phi_bb217_30, phi_bb217_31, phi_bb217_32, phi_bb217_33, phi_bb217_34, tmp447, tmp448);
  }

  TNode<Object> phi_bb218_15;
  TNode<IntPtrT> phi_bb218_16;
  TNode<BoolT> phi_bb218_17;
  TNode<IntPtrT> phi_bb218_25;
  TNode<IntPtrT> phi_bb218_26;
  TNode<IntPtrT> phi_bb218_27;
  TNode<IntPtrT> phi_bb218_28;
  TNode<IntPtrT> phi_bb218_30;
  TNode<BoolT> phi_bb218_31;
  TNode<BoolT> phi_bb218_32;
  TNode<Int32T> phi_bb218_33;
  TNode<Int32T> phi_bb218_34;
  if (block218.is_used()) {
    ca_.Bind(&block218, &phi_bb218_15, &phi_bb218_16, &phi_bb218_17, &phi_bb218_25, &phi_bb218_26, &phi_bb218_27, &phi_bb218_28, &phi_bb218_30, &phi_bb218_31, &phi_bb218_32, &phi_bb218_33, &phi_bb218_34);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block220, phi_bb218_15, phi_bb218_16, phi_bb218_17, phi_bb218_25, phi_bb218_26, phi_bb218_27, phi_bb218_28, phi_bb218_30, phi_bb218_31, phi_bb218_32, phi_bb218_33, phi_bb218_34);
    } else {
      ca_.Goto(&block221, phi_bb218_15, phi_bb218_16, phi_bb218_17, phi_bb218_25, phi_bb218_26, phi_bb218_27, phi_bb218_28, phi_bb218_30, phi_bb218_31, phi_bb218_32, phi_bb218_33, phi_bb218_34);
    }
  }

  TNode<Object> phi_bb220_15;
  TNode<IntPtrT> phi_bb220_16;
  TNode<BoolT> phi_bb220_17;
  TNode<IntPtrT> phi_bb220_25;
  TNode<IntPtrT> phi_bb220_26;
  TNode<IntPtrT> phi_bb220_27;
  TNode<IntPtrT> phi_bb220_28;
  TNode<IntPtrT> phi_bb220_30;
  TNode<BoolT> phi_bb220_31;
  TNode<BoolT> phi_bb220_32;
  TNode<Int32T> phi_bb220_33;
  TNode<Int32T> phi_bb220_34;
  TNode<Object> tmp451;
  TNode<IntPtrT> tmp452;
  TNode<IntPtrT> tmp453;
  TNode<IntPtrT> tmp454;
  if (block220.is_used()) {
    ca_.Bind(&block220, &phi_bb220_15, &phi_bb220_16, &phi_bb220_17, &phi_bb220_25, &phi_bb220_26, &phi_bb220_27, &phi_bb220_28, &phi_bb220_30, &phi_bb220_31, &phi_bb220_32, &phi_bb220_33, &phi_bb220_34);
    std::tie(tmp451, tmp452) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb220_28}).Flatten();
    tmp453 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp454 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb220_28}, TNode<IntPtrT>{tmp453});
    ca_.Goto(&block219, phi_bb220_15, phi_bb220_16, phi_bb220_17, phi_bb220_25, phi_bb220_26, phi_bb220_27, tmp454, phi_bb220_30, phi_bb220_31, phi_bb220_32, phi_bb220_33, phi_bb220_34, tmp451, tmp452);
  }

  TNode<Object> phi_bb221_15;
  TNode<IntPtrT> phi_bb221_16;
  TNode<BoolT> phi_bb221_17;
  TNode<IntPtrT> phi_bb221_25;
  TNode<IntPtrT> phi_bb221_26;
  TNode<IntPtrT> phi_bb221_27;
  TNode<IntPtrT> phi_bb221_28;
  TNode<IntPtrT> phi_bb221_30;
  TNode<BoolT> phi_bb221_31;
  TNode<BoolT> phi_bb221_32;
  TNode<Int32T> phi_bb221_33;
  TNode<Int32T> phi_bb221_34;
  TNode<IntPtrT> tmp455;
  TNode<BoolT> tmp456;
  if (block221.is_used()) {
    ca_.Bind(&block221, &phi_bb221_15, &phi_bb221_16, &phi_bb221_17, &phi_bb221_25, &phi_bb221_26, &phi_bb221_27, &phi_bb221_28, &phi_bb221_30, &phi_bb221_31, &phi_bb221_32, &phi_bb221_33, &phi_bb221_34);
    tmp455 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp456 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb221_30}, TNode<IntPtrT>{tmp455});
    ca_.Branch(tmp456, &block223, std::vector<compiler::Node*>{phi_bb221_15, phi_bb221_16, phi_bb221_17, phi_bb221_25, phi_bb221_26, phi_bb221_27, phi_bb221_28, phi_bb221_30, phi_bb221_31, phi_bb221_32, phi_bb221_33, phi_bb221_34}, &block224, std::vector<compiler::Node*>{phi_bb221_15, phi_bb221_16, phi_bb221_17, phi_bb221_25, phi_bb221_26, phi_bb221_27, phi_bb221_28, phi_bb221_30, phi_bb221_31, phi_bb221_32, phi_bb221_33, phi_bb221_34});
  }

  TNode<Object> phi_bb223_15;
  TNode<IntPtrT> phi_bb223_16;
  TNode<BoolT> phi_bb223_17;
  TNode<IntPtrT> phi_bb223_25;
  TNode<IntPtrT> phi_bb223_26;
  TNode<IntPtrT> phi_bb223_27;
  TNode<IntPtrT> phi_bb223_28;
  TNode<IntPtrT> phi_bb223_30;
  TNode<BoolT> phi_bb223_31;
  TNode<BoolT> phi_bb223_32;
  TNode<Int32T> phi_bb223_33;
  TNode<Int32T> phi_bb223_34;
  TNode<Object> tmp457;
  TNode<IntPtrT> tmp458;
  TNode<IntPtrT> tmp459;
  TNode<BoolT> tmp460;
  if (block223.is_used()) {
    ca_.Bind(&block223, &phi_bb223_15, &phi_bb223_16, &phi_bb223_17, &phi_bb223_25, &phi_bb223_26, &phi_bb223_27, &phi_bb223_28, &phi_bb223_30, &phi_bb223_31, &phi_bb223_32, &phi_bb223_33, &phi_bb223_34);
    std::tie(tmp457, tmp458) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb223_30}).Flatten();
    tmp459 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp460 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block219, phi_bb223_15, phi_bb223_16, phi_bb223_17, phi_bb223_25, phi_bb223_26, phi_bb223_27, phi_bb223_28, tmp459, tmp460, phi_bb223_32, phi_bb223_33, phi_bb223_34, tmp457, tmp458);
  }

  TNode<Object> phi_bb224_15;
  TNode<IntPtrT> phi_bb224_16;
  TNode<BoolT> phi_bb224_17;
  TNode<IntPtrT> phi_bb224_25;
  TNode<IntPtrT> phi_bb224_26;
  TNode<IntPtrT> phi_bb224_27;
  TNode<IntPtrT> phi_bb224_28;
  TNode<IntPtrT> phi_bb224_30;
  TNode<BoolT> phi_bb224_31;
  TNode<BoolT> phi_bb224_32;
  TNode<Int32T> phi_bb224_33;
  TNode<Int32T> phi_bb224_34;
  TNode<Object> tmp461;
  TNode<IntPtrT> tmp462;
  TNode<IntPtrT> tmp463;
  TNode<IntPtrT> tmp464;
  TNode<IntPtrT> tmp465;
  TNode<IntPtrT> tmp466;
  TNode<BoolT> tmp467;
  if (block224.is_used()) {
    ca_.Bind(&block224, &phi_bb224_15, &phi_bb224_16, &phi_bb224_17, &phi_bb224_25, &phi_bb224_26, &phi_bb224_27, &phi_bb224_28, &phi_bb224_30, &phi_bb224_31, &phi_bb224_32, &phi_bb224_33, &phi_bb224_34);
    std::tie(tmp461, tmp462) = NewReference_intptr_0(state_, TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb224_28}).Flatten();
    tmp463 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp464 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb224_28}, TNode<IntPtrT>{tmp463});
    tmp465 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp466 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp464}, TNode<IntPtrT>{tmp465});
    tmp467 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block219, phi_bb224_15, phi_bb224_16, phi_bb224_17, phi_bb224_25, phi_bb224_26, phi_bb224_27, tmp466, tmp464, tmp467, phi_bb224_32, phi_bb224_33, phi_bb224_34, tmp461, tmp462);
  }

  TNode<Object> phi_bb219_15;
  TNode<IntPtrT> phi_bb219_16;
  TNode<BoolT> phi_bb219_17;
  TNode<IntPtrT> phi_bb219_25;
  TNode<IntPtrT> phi_bb219_26;
  TNode<IntPtrT> phi_bb219_27;
  TNode<IntPtrT> phi_bb219_28;
  TNode<IntPtrT> phi_bb219_30;
  TNode<BoolT> phi_bb219_31;
  TNode<BoolT> phi_bb219_32;
  TNode<Int32T> phi_bb219_33;
  TNode<Int32T> phi_bb219_34;
  TNode<Object> phi_bb219_39;
  TNode<IntPtrT> phi_bb219_40;
  if (block219.is_used()) {
    ca_.Bind(&block219, &phi_bb219_15, &phi_bb219_16, &phi_bb219_17, &phi_bb219_25, &phi_bb219_26, &phi_bb219_27, &phi_bb219_28, &phi_bb219_30, &phi_bb219_31, &phi_bb219_32, &phi_bb219_33, &phi_bb219_34, &phi_bb219_39, &phi_bb219_40);
    ca_.Goto(&block216, phi_bb219_15, phi_bb219_16, phi_bb219_17, phi_bb219_25, phi_bb219_26, phi_bb219_27, phi_bb219_28, phi_bb219_30, phi_bb219_31, phi_bb219_32, phi_bb219_33, phi_bb219_34, phi_bb219_39, phi_bb219_40);
  }

  TNode<Object> phi_bb216_15;
  TNode<IntPtrT> phi_bb216_16;
  TNode<BoolT> phi_bb216_17;
  TNode<IntPtrT> phi_bb216_25;
  TNode<IntPtrT> phi_bb216_26;
  TNode<IntPtrT> phi_bb216_27;
  TNode<IntPtrT> phi_bb216_28;
  TNode<IntPtrT> phi_bb216_30;
  TNode<BoolT> phi_bb216_31;
  TNode<BoolT> phi_bb216_32;
  TNode<Int32T> phi_bb216_33;
  TNode<Int32T> phi_bb216_34;
  TNode<Object> phi_bb216_39;
  TNode<IntPtrT> phi_bb216_40;
  TNode<IntPtrT> tmp468;
  TNode<Int32T> tmp469;
  TNode<Int32T> tmp470;
  if (block216.is_used()) {
    ca_.Bind(&block216, &phi_bb216_15, &phi_bb216_16, &phi_bb216_17, &phi_bb216_25, &phi_bb216_26, &phi_bb216_27, &phi_bb216_28, &phi_bb216_30, &phi_bb216_31, &phi_bb216_32, &phi_bb216_33, &phi_bb216_34, &phi_bb216_39, &phi_bb216_40);
    tmp468 = CodeStubAssembler(state_).BitcastTaggedToWord(TNode<Object>{tmp442});
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb216_39, phi_bb216_40}, tmp468);
    tmp469 = FromConstexpr_int32_constexpr_int31_0(state_, 1);
    tmp470 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{phi_bb216_34}, TNode<Int32T>{tmp469});
    ca_.Goto(&block209, phi_bb216_15, phi_bb216_16, phi_bb216_17, tmp444, phi_bb216_25, phi_bb216_26, phi_bb216_27, phi_bb216_28, phi_bb216_30, phi_bb216_31, phi_bb216_32, phi_bb216_33, tmp470, tmp440);
  }

  TNode<Object> phi_bb208_15;
  TNode<IntPtrT> phi_bb208_16;
  TNode<BoolT> phi_bb208_17;
  TNode<IntPtrT> phi_bb208_24;
  TNode<IntPtrT> phi_bb208_25;
  TNode<IntPtrT> phi_bb208_26;
  TNode<IntPtrT> phi_bb208_27;
  TNode<IntPtrT> phi_bb208_28;
  TNode<IntPtrT> phi_bb208_30;
  TNode<BoolT> phi_bb208_31;
  TNode<BoolT> phi_bb208_32;
  TNode<Int32T> phi_bb208_33;
  TNode<Int32T> phi_bb208_34;
  TNode<Int32T> phi_bb208_35;
  if (block208.is_used()) {
    ca_.Bind(&block208, &phi_bb208_15, &phi_bb208_16, &phi_bb208_17, &phi_bb208_24, &phi_bb208_25, &phi_bb208_26, &phi_bb208_27, &phi_bb208_28, &phi_bb208_30, &phi_bb208_31, &phi_bb208_32, &phi_bb208_33, &phi_bb208_34, &phi_bb208_35);
    ca_.Goto(&block191, phi_bb208_15, phi_bb208_16, phi_bb208_17, phi_bb208_24, phi_bb208_25, phi_bb208_26, phi_bb208_27, phi_bb208_28, phi_bb208_30, phi_bb208_31, phi_bb208_32, phi_bb208_33);
  }

  TNode<Object> phi_bb191_15;
  TNode<IntPtrT> phi_bb191_16;
  TNode<BoolT> phi_bb191_17;
  TNode<IntPtrT> phi_bb191_24;
  TNode<IntPtrT> phi_bb191_25;
  TNode<IntPtrT> phi_bb191_26;
  TNode<IntPtrT> phi_bb191_27;
  TNode<IntPtrT> phi_bb191_28;
  TNode<IntPtrT> phi_bb191_30;
  TNode<BoolT> phi_bb191_31;
  TNode<BoolT> phi_bb191_32;
  TNode<Int32T> phi_bb191_33;
  TNode<RawPtrT> tmp471;
  TNode<RawPtrT> tmp472;
  if (block191.is_used()) {
    ca_.Bind(&block191, &phi_bb191_15, &phi_bb191_16, &phi_bb191_17, &phi_bb191_24, &phi_bb191_25, &phi_bb191_26, &phi_bb191_27, &phi_bb191_28, &phi_bb191_30, &phi_bb191_31, &phi_bb191_32, &phi_bb191_33);
    tmp471 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{phi_bb105_21}, TNode<IntPtrT>{phi_bb105_22});
    tmp472 = (TNode<RawPtrT>{tmp471});
    ca_.Branch(phi_bb191_31, &block227, std::vector<compiler::Node*>{phi_bb191_15, phi_bb191_16, phi_bb191_17, phi_bb191_24, phi_bb191_25, phi_bb191_26, phi_bb191_27, phi_bb191_28, phi_bb191_30, phi_bb191_31, phi_bb191_32, phi_bb191_33, phi_bb191_28}, &block228, std::vector<compiler::Node*>{phi_bb191_15, phi_bb191_16, phi_bb191_17, phi_bb191_24, phi_bb191_25, phi_bb191_26, phi_bb191_27, phi_bb191_28, phi_bb191_30, phi_bb191_31, phi_bb191_32, phi_bb191_33, phi_bb191_28});
  }

  TNode<Object> phi_bb227_15;
  TNode<IntPtrT> phi_bb227_16;
  TNode<BoolT> phi_bb227_17;
  TNode<IntPtrT> phi_bb227_24;
  TNode<IntPtrT> phi_bb227_25;
  TNode<IntPtrT> phi_bb227_26;
  TNode<IntPtrT> phi_bb227_27;
  TNode<IntPtrT> phi_bb227_28;
  TNode<IntPtrT> phi_bb227_30;
  TNode<BoolT> phi_bb227_31;
  TNode<BoolT> phi_bb227_32;
  TNode<Int32T> phi_bb227_33;
  TNode<IntPtrT> phi_bb227_35;
  TNode<IntPtrT> tmp473;
  TNode<IntPtrT> tmp474;
  if (block227.is_used()) {
    ca_.Bind(&block227, &phi_bb227_15, &phi_bb227_16, &phi_bb227_17, &phi_bb227_24, &phi_bb227_25, &phi_bb227_26, &phi_bb227_27, &phi_bb227_28, &phi_bb227_30, &phi_bb227_31, &phi_bb227_32, &phi_bb227_33, &phi_bb227_35);
    tmp473 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp474 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb227_35}, TNode<IntPtrT>{tmp473});
    ca_.Goto(&block228, phi_bb227_15, phi_bb227_16, phi_bb227_17, phi_bb227_24, phi_bb227_25, phi_bb227_26, phi_bb227_27, phi_bb227_28, phi_bb227_30, phi_bb227_31, phi_bb227_32, phi_bb227_33, tmp474);
  }

  TNode<Object> phi_bb228_15;
  TNode<IntPtrT> phi_bb228_16;
  TNode<BoolT> phi_bb228_17;
  TNode<IntPtrT> phi_bb228_24;
  TNode<IntPtrT> phi_bb228_25;
  TNode<IntPtrT> phi_bb228_26;
  TNode<IntPtrT> phi_bb228_27;
  TNode<IntPtrT> phi_bb228_28;
  TNode<IntPtrT> phi_bb228_30;
  TNode<BoolT> phi_bb228_31;
  TNode<BoolT> phi_bb228_32;
  TNode<Int32T> phi_bb228_33;
  TNode<IntPtrT> phi_bb228_35;
  TNode<RawPtrT> tmp475;
  TNode<IntPtrT> tmp476;
  TNode<WasmInternalFunction> tmp477;
  TNode<RawPtrT> tmp478;
  TNode<IntPtrT> tmp479;
  TNode<WasmInstanceObject> tmp480;
  TNode<RawPtrT> tmp481;
  TNode<RawPtrT> tmp482;
  TNode<IntPtrT> tmp483;
  TNode<Object> tmp484;
  TNode<IntPtrT> tmp485;
  TNode<IntPtrT> tmp486;
  TNode<Object> tmp487;
  TNode<IntPtrT> tmp488;
  TNode<IntPtrT> tmp489;
  TNode<Object> tmp490;
  TNode<IntPtrT> tmp491;
  TNode<IntPtrT> tmp492;
  TNode<Object> tmp493;
  TNode<IntPtrT> tmp494;
  TNode<IntPtrT> tmp495;
  TNode<Object> tmp496;
  TNode<IntPtrT> tmp497;
  TNode<IntPtrT> tmp498;
  TNode<Object> tmp499;
  TNode<IntPtrT> tmp500;
  TNode<IntPtrT> tmp501;
  TNode<Object> tmp502;
  TNode<IntPtrT> tmp503;
  if (block228.is_used()) {
    ca_.Bind(&block228, &phi_bb228_15, &phi_bb228_16, &phi_bb228_17, &phi_bb228_24, &phi_bb228_25, &phi_bb228_26, &phi_bb228_27, &phi_bb228_28, &phi_bb228_30, &phi_bb228_31, &phi_bb228_32, &phi_bb228_33, &phi_bb228_35);
    tmp475 = CodeStubAssembler(state_).GCUnsafeReferenceToRawPtr(TNode<Object>{tmp171}, TNode<IntPtrT>{phi_bb228_35});
    tmp476 = FromConstexpr_intptr_constexpr_int31_0(state_, 8);
    tmp477 = CodeStubAssembler(state_).LoadReference<WasmInternalFunction>(CodeStubAssembler::Reference{tmp4, tmp476});
    tmp478 = CodeStubAssembler(state_).LoadWasmInternalFunctionCallTargetPtr(TNode<WasmInternalFunction>{tmp477});
    tmp479 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp480 = CodeStubAssembler(state_).LoadReference<WasmInstanceObject>(CodeStubAssembler::Reference{tmp4, tmp479});
    tmp481 = CodeStubAssembler(state_).StackSlotPtr(JSToWasmWrapperFrameConstants::kWrapperBufferSize, (SizeOf_intptr_0(state_)));
    tmp482 = (TNode<RawPtrT>{tmp481});
    tmp483 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferReturnCount);
    std::tie(tmp484, tmp485) = GetRefAt_int32_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp483}).Flatten();
    CodeStubAssembler(state_).StoreReference<Int32T>(CodeStubAssembler::Reference{tmp484, tmp485}, tmp24);
    tmp486 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferRefReturnCount);
    std::tie(tmp487, tmp488) = GetRefAt_bool_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp486}).Flatten();
    CodeStubAssembler(state_).StoreReference<BoolT>(CodeStubAssembler::Reference{tmp487, tmp488}, phi_bb228_17);
    tmp489 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferSigRepresentationArray);
    std::tie(tmp490, tmp491) = GetRefAt_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp489}).Flatten();
    CodeStubAssembler(state_).StoreReference<RawPtrT>(CodeStubAssembler::Reference{tmp490, tmp491}, tmp28);
    tmp492 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferStackReturnBufferSize);
    std::tie(tmp493, tmp494) = GetRefAt_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp492}).Flatten();
    CodeStubAssembler(state_).StoreReference<IntPtrT>(CodeStubAssembler::Reference{tmp493, tmp494}, phi_bb228_16);
    tmp495 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferCallTarget);
    std::tie(tmp496, tmp497) = GetRefAt_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp495}).Flatten();
    CodeStubAssembler(state_).StoreReference<RawPtrT>(CodeStubAssembler::Reference{tmp496, tmp497}, tmp478);
    tmp498 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferParamStart);
    std::tie(tmp499, tmp500) = GetRefAt_RawPtr_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp498}).Flatten();
    CodeStubAssembler(state_).StoreReference<RawPtrT>(CodeStubAssembler::Reference{tmp499, tmp500}, tmp472);
    tmp501 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferParamEnd);
    std::tie(tmp502, tmp503) = GetRefAt_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp482}, TNode<IntPtrT>{tmp501}).Flatten();
    CodeStubAssembler(state_).StoreReference<RawPtrT>(CodeStubAssembler::Reference{tmp502, tmp503}, tmp475);
    if ((p_switchStack)) {
      ca_.Goto(&block229, phi_bb228_15, phi_bb228_16, phi_bb228_17, phi_bb228_24, phi_bb228_25, phi_bb228_26, phi_bb228_27, phi_bb228_28, phi_bb228_30, phi_bb228_31, phi_bb228_32, phi_bb228_33);
    } else {
      ca_.Goto(&block230, phi_bb228_15, phi_bb228_16, phi_bb228_17, phi_bb228_24, phi_bb228_25, phi_bb228_26, phi_bb228_27, phi_bb228_28, phi_bb228_30, phi_bb228_31, phi_bb228_32, phi_bb228_33);
    }
  }

  TNode<Object> phi_bb229_15;
  TNode<IntPtrT> phi_bb229_16;
  TNode<BoolT> phi_bb229_17;
  TNode<IntPtrT> phi_bb229_24;
  TNode<IntPtrT> phi_bb229_25;
  TNode<IntPtrT> phi_bb229_26;
  TNode<IntPtrT> phi_bb229_27;
  TNode<IntPtrT> phi_bb229_28;
  TNode<IntPtrT> phi_bb229_30;
  TNode<BoolT> phi_bb229_31;
  TNode<BoolT> phi_bb229_32;
  TNode<Int32T> phi_bb229_33;
  TNode<Object> tmp504;
  if (block229.is_used()) {
    ca_.Bind(&block229, &phi_bb229_15, &phi_bb229_16, &phi_bb229_17, &phi_bb229_24, &phi_bb229_25, &phi_bb229_26, &phi_bb229_27, &phi_bb229_28, &phi_bb229_30, &phi_bb229_31, &phi_bb229_32, &phi_bb229_33);
    tmp504 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kWasmReturnPromiseOnSuspendAsm), TNode<Object>(), tmp482, tmp480, phi_bb229_15);
    ca_.Goto(&block231, phi_bb229_15, phi_bb229_16, phi_bb229_17, phi_bb229_24, phi_bb229_25, phi_bb229_26, phi_bb229_27, phi_bb229_28, phi_bb229_30, phi_bb229_31, phi_bb229_32, phi_bb229_33, tmp504);
  }

  TNode<Object> phi_bb230_15;
  TNode<IntPtrT> phi_bb230_16;
  TNode<BoolT> phi_bb230_17;
  TNode<IntPtrT> phi_bb230_24;
  TNode<IntPtrT> phi_bb230_25;
  TNode<IntPtrT> phi_bb230_26;
  TNode<IntPtrT> phi_bb230_27;
  TNode<IntPtrT> phi_bb230_28;
  TNode<IntPtrT> phi_bb230_30;
  TNode<BoolT> phi_bb230_31;
  TNode<BoolT> phi_bb230_32;
  TNode<Int32T> phi_bb230_33;
  TNode<Object> tmp505;
  if (block230.is_used()) {
    ca_.Bind(&block230, &phi_bb230_15, &phi_bb230_16, &phi_bb230_17, &phi_bb230_24, &phi_bb230_25, &phi_bb230_26, &phi_bb230_27, &phi_bb230_28, &phi_bb230_30, &phi_bb230_31, &phi_bb230_32, &phi_bb230_33);
    tmp505 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kJSToWasmWrapperAsm), TNode<Object>(), tmp482, tmp480, phi_bb230_15);
    ca_.Goto(&block231, phi_bb230_15, phi_bb230_16, phi_bb230_17, phi_bb230_24, phi_bb230_25, phi_bb230_26, phi_bb230_27, phi_bb230_28, phi_bb230_30, phi_bb230_31, phi_bb230_32, phi_bb230_33, tmp505);
  }

  TNode<Object> phi_bb231_15;
  TNode<IntPtrT> phi_bb231_16;
  TNode<BoolT> phi_bb231_17;
  TNode<IntPtrT> phi_bb231_24;
  TNode<IntPtrT> phi_bb231_25;
  TNode<IntPtrT> phi_bb231_26;
  TNode<IntPtrT> phi_bb231_27;
  TNode<IntPtrT> phi_bb231_28;
  TNode<IntPtrT> phi_bb231_30;
  TNode<BoolT> phi_bb231_31;
  TNode<BoolT> phi_bb231_32;
  TNode<Int32T> phi_bb231_33;
  TNode<Object> phi_bb231_40;
  TNode<IntPtrT> tmp506;
  TNode<SharedFunctionInfo> tmp507;
  TNode<IntPtrT> tmp508;
  TNode<Int16T> tmp509;
  TNode<Int32T> tmp510;
  TNode<IntPtrT> tmp511;
  TNode<BoolT> tmp512;
  if (block231.is_used()) {
    ca_.Bind(&block231, &phi_bb231_15, &phi_bb231_16, &phi_bb231_17, &phi_bb231_24, &phi_bb231_25, &phi_bb231_26, &phi_bb231_27, &phi_bb231_28, &phi_bb231_30, &phi_bb231_31, &phi_bb231_32, &phi_bb231_33, &phi_bb231_40);
    tmp506 = FromConstexpr_intptr_constexpr_int31_0(state_, 32);
    tmp507 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{p_target, tmp506});
    tmp508 = FromConstexpr_intptr_constexpr_int31_0(state_, 40);
    tmp509 = CodeStubAssembler(state_).LoadReference<Int16T>(CodeStubAssembler::Reference{tmp507, tmp508});
    tmp510 = Convert_int32_int16_0(state_, TNode<Int16T>{tmp509});
    tmp511 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp510});
    tmp512 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp511}, TNode<IntPtrT>{p_arguments.length});
    ca_.Branch(tmp512, &block232, std::vector<compiler::Node*>{phi_bb231_15, phi_bb231_16, phi_bb231_17, phi_bb231_24, phi_bb231_25, phi_bb231_26, phi_bb231_27, phi_bb231_28, phi_bb231_30, phi_bb231_31, phi_bb231_32, phi_bb231_33}, &block233, std::vector<compiler::Node*>{phi_bb231_15, phi_bb231_16, phi_bb231_17, phi_bb231_24, phi_bb231_25, phi_bb231_26, phi_bb231_27, phi_bb231_28, phi_bb231_30, phi_bb231_31, phi_bb231_32, phi_bb231_33, p_arguments.length});
  }

  TNode<Object> phi_bb232_15;
  TNode<IntPtrT> phi_bb232_16;
  TNode<BoolT> phi_bb232_17;
  TNode<IntPtrT> phi_bb232_24;
  TNode<IntPtrT> phi_bb232_25;
  TNode<IntPtrT> phi_bb232_26;
  TNode<IntPtrT> phi_bb232_27;
  TNode<IntPtrT> phi_bb232_28;
  TNode<IntPtrT> phi_bb232_30;
  TNode<BoolT> phi_bb232_31;
  TNode<BoolT> phi_bb232_32;
  TNode<Int32T> phi_bb232_33;
  if (block232.is_used()) {
    ca_.Bind(&block232, &phi_bb232_15, &phi_bb232_16, &phi_bb232_17, &phi_bb232_24, &phi_bb232_25, &phi_bb232_26, &phi_bb232_27, &phi_bb232_28, &phi_bb232_30, &phi_bb232_31, &phi_bb232_32, &phi_bb232_33);
    ca_.Goto(&block233, phi_bb232_15, phi_bb232_16, phi_bb232_17, phi_bb232_24, phi_bb232_25, phi_bb232_26, phi_bb232_27, phi_bb232_28, phi_bb232_30, phi_bb232_31, phi_bb232_32, phi_bb232_33, tmp511);
  }

  TNode<Object> phi_bb233_15;
  TNode<IntPtrT> phi_bb233_16;
  TNode<BoolT> phi_bb233_17;
  TNode<IntPtrT> phi_bb233_24;
  TNode<IntPtrT> phi_bb233_25;
  TNode<IntPtrT> phi_bb233_26;
  TNode<IntPtrT> phi_bb233_27;
  TNode<IntPtrT> phi_bb233_28;
  TNode<IntPtrT> phi_bb233_30;
  TNode<BoolT> phi_bb233_31;
  TNode<BoolT> phi_bb233_32;
  TNode<Int32T> phi_bb233_33;
  TNode<IntPtrT> phi_bb233_41;
  TNode<IntPtrT> tmp513;
  TNode<IntPtrT> tmp514;
  if (block233.is_used()) {
    ca_.Bind(&block233, &phi_bb233_15, &phi_bb233_16, &phi_bb233_17, &phi_bb233_24, &phi_bb233_25, &phi_bb233_26, &phi_bb233_27, &phi_bb233_28, &phi_bb233_30, &phi_bb233_31, &phi_bb233_32, &phi_bb233_33, &phi_bb233_41);
    tmp513 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp514 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb233_41}, TNode<IntPtrT>{tmp513});
    CodeStubAssembler(state_).PopAndReturn(TNode<IntPtrT>{tmp514}, TNode<Object>{phi_bb231_40});
  }
}

TF_BUILTIN(JSToWasmWrapper, CodeStubAssembler) {
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
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    JSToWasmWrapperHelper_0(state_, TNode<NativeContext>{parameter0}, TNode<Object>{parameter1}, TNode<JSFunction>{parameter2}, TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, false);
  }
}

TF_BUILTIN(WasmReturnPromiseOnSuspend, CodeStubAssembler) {
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
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    JSToWasmWrapperHelper_0(state_, TNode<NativeContext>{parameter0}, TNode<Object>{parameter1}, TNode<JSFunction>{parameter2}, TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, true);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=696&c=1
TNode<Object> WasmToJSObject_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<Object> p_value, TNode<Int32T> p_retType) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Int32T> tmp0;
  TNode<Int32T> tmp1;
  TNode<Int32T> tmp2;
  TNode<Int32T> tmp3;
  TNode<Int32T> tmp4;
  TNode<Int32T> tmp5;
  TNode<Int32T> tmp6;
  TNode<BoolT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmValueKindBitsMask);
    tmp1 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{p_retType}, TNode<Int32T>{tmp0});
    tmp2 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueType::kKindBits);
    tmp3 = CodeStubAssembler(state_).Word32Sar(TNode<Int32T>{p_retType}, TNode<Int32T>{tmp2});
    tmp4 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmHeapTypeBitsMask);
    tmp5 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp4});
    tmp6 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::ValueKind::kRef);
    tmp7 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp6});
    ca_.Branch(tmp7, &block2, std::vector<compiler::Node*>{}, &block3, std::vector<compiler::Node*>{});
  }

  TNode<Int32T> tmp8;
  TNode<BoolT> tmp9;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp8 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kEq);
    tmp9 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp8});
    ca_.Branch(tmp9, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp10;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp10 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block9, tmp10);
  }

  TNode<Int32T> tmp11;
  TNode<BoolT> tmp12;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp11 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kI31);
    tmp12 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp11});
    ca_.Goto(&block9, tmp12);
  }

  TNode<BoolT> phi_bb9_6;
  if (block9.is_used()) {
    ca_.Bind(&block9, &phi_bb9_6);
    ca_.Branch(phi_bb9_6, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp13;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp13 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block12, tmp13);
  }

  TNode<Int32T> tmp14;
  TNode<BoolT> tmp15;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp14 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kStruct);
    tmp15 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp14});
    ca_.Goto(&block12, tmp15);
  }

  TNode<BoolT> phi_bb12_6;
  if (block12.is_used()) {
    ca_.Bind(&block12, &phi_bb12_6);
    ca_.Branch(phi_bb12_6, &block13, std::vector<compiler::Node*>{}, &block14, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp16;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp16 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block15, tmp16);
  }

  TNode<Int32T> tmp17;
  TNode<BoolT> tmp18;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp17 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kArray);
    tmp18 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp17});
    ca_.Goto(&block15, tmp18);
  }

  TNode<BoolT> phi_bb15_6;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_6);
    ca_.Branch(phi_bb15_6, &block16, std::vector<compiler::Node*>{}, &block17, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp19;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp19 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block18, tmp19);
  }

  TNode<Int32T> tmp20;
  TNode<BoolT> tmp21;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp20 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kAny);
    tmp21 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp20});
    ca_.Goto(&block18, tmp21);
  }

  TNode<BoolT> phi_bb18_6;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_6);
    ca_.Branch(phi_bb18_6, &block19, std::vector<compiler::Node*>{}, &block20, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp22;
  if (block19.is_used()) {
    ca_.Bind(&block19);
    tmp22 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block21, tmp22);
  }

  TNode<Int32T> tmp23;
  TNode<BoolT> tmp24;
  if (block20.is_used()) {
    ca_.Bind(&block20);
    tmp23 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kExtern);
    tmp24 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp23});
    ca_.Goto(&block21, tmp24);
  }

  TNode<BoolT> phi_bb21_6;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_6);
    ca_.Branch(phi_bb21_6, &block22, std::vector<compiler::Node*>{}, &block23, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp25;
  if (block22.is_used()) {
    ca_.Bind(&block22);
    tmp25 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block24, tmp25);
  }

  TNode<Int32T> tmp26;
  TNode<BoolT> tmp27;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp26 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kString);
    tmp27 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp26});
    ca_.Goto(&block24, tmp27);
  }

  TNode<BoolT> phi_bb24_6;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_6);
    ca_.Branch(phi_bb24_6, &block25, std::vector<compiler::Node*>{}, &block26, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp28;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    tmp28 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block27, tmp28);
  }

  TNode<Int32T> tmp29;
  TNode<BoolT> tmp30;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    tmp29 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kNone);
    tmp30 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp29});
    ca_.Goto(&block27, tmp30);
  }

  TNode<BoolT> phi_bb27_6;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_6);
    ca_.Branch(phi_bb27_6, &block28, std::vector<compiler::Node*>{}, &block29, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp31;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp31 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block30, tmp31);
  }

  TNode<Int32T> tmp32;
  TNode<BoolT> tmp33;
  if (block29.is_used()) {
    ca_.Bind(&block29);
    tmp32 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kNoFunc);
    tmp33 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp32});
    ca_.Goto(&block30, tmp33);
  }

  TNode<BoolT> phi_bb30_6;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_6);
    ca_.Branch(phi_bb30_6, &block31, std::vector<compiler::Node*>{}, &block32, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp34;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    tmp34 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block33, tmp34);
  }

  TNode<Int32T> tmp35;
  TNode<BoolT> tmp36;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp35 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kNoExtern);
    tmp36 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp35});
    ca_.Goto(&block33, tmp36);
  }

  TNode<BoolT> phi_bb33_6;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_6);
    ca_.Branch(phi_bb33_6, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp37;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp37 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{p_value});
    ca_.Goto(&block1, tmp37);
  }

  TNode<Object> tmp38;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp38 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmGenericWasmToJSObject, p_context, p_value); 
    ca_.Goto(&block1, tmp38);
  }

  TNode<Int32T> tmp39;
  TNode<BoolT> tmp40;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp39 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kExtern);
    tmp40 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp39});
    ca_.Branch(tmp40, &block40, std::vector<compiler::Node*>{}, &block41, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp41;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp41 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block42, tmp41);
  }

  TNode<Int32T> tmp42;
  TNode<BoolT> tmp43;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp42 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kNoExtern);
    tmp43 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp42});
    ca_.Goto(&block42, tmp43);
  }

  TNode<BoolT> phi_bb42_6;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_6);
    ca_.Branch(phi_bb42_6, &block38, std::vector<compiler::Node*>{}, &block39, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp44;
  if (block38.is_used()) {
    ca_.Bind(&block38);
    tmp44 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{p_value});
    ca_.Goto(&block1, tmp44);
  }

  TNode<WasmNull> tmp45;
  TNode<BoolT> tmp46;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp45 = kWasmNull_0(state_);
    tmp46 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{p_value}, TNode<HeapObject>{tmp45});
    ca_.Branch(tmp46, &block43, std::vector<compiler::Node*>{}, &block44, std::vector<compiler::Node*>{});
  }

  TNode<Null> tmp47;
  if (block43.is_used()) {
    ca_.Bind(&block43);
    tmp47 = Null_0(state_);
    ca_.Goto(&block1, tmp47);
  }

  TNode<Int32T> tmp48;
  TNode<BoolT> tmp49;
  if (block44.is_used()) {
    ca_.Bind(&block44);
    tmp48 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kEq);
    tmp49 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp48});
    ca_.Branch(tmp49, &block47, std::vector<compiler::Node*>{}, &block48, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp50;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp50 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block49, tmp50);
  }

  TNode<Int32T> tmp51;
  TNode<BoolT> tmp52;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp51 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kStruct);
    tmp52 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp51});
    ca_.Goto(&block49, tmp52);
  }

  TNode<BoolT> phi_bb49_6;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_6);
    ca_.Branch(phi_bb49_6, &block50, std::vector<compiler::Node*>{}, &block51, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp53;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    tmp53 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block52, tmp53);
  }

  TNode<Int32T> tmp54;
  TNode<BoolT> tmp55;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp54 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kArray);
    tmp55 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp54});
    ca_.Goto(&block52, tmp55);
  }

  TNode<BoolT> phi_bb52_6;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_6);
    ca_.Branch(phi_bb52_6, &block53, std::vector<compiler::Node*>{}, &block54, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp56;
  if (block53.is_used()) {
    ca_.Bind(&block53);
    tmp56 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block55, tmp56);
  }

  TNode<Int32T> tmp57;
  TNode<BoolT> tmp58;
  if (block54.is_used()) {
    ca_.Bind(&block54);
    tmp57 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kString);
    tmp58 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp57});
    ca_.Goto(&block55, tmp58);
  }

  TNode<BoolT> phi_bb55_6;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_6);
    ca_.Branch(phi_bb55_6, &block56, std::vector<compiler::Node*>{}, &block57, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp59;
  if (block56.is_used()) {
    ca_.Bind(&block56);
    tmp59 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block58, tmp59);
  }

  TNode<Int32T> tmp60;
  TNode<BoolT> tmp61;
  if (block57.is_used()) {
    ca_.Bind(&block57);
    tmp60 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kI31);
    tmp61 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp60});
    ca_.Goto(&block58, tmp61);
  }

  TNode<BoolT> phi_bb58_6;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_6);
    ca_.Branch(phi_bb58_6, &block59, std::vector<compiler::Node*>{}, &block60, std::vector<compiler::Node*>{});
  }

  TNode<BoolT> tmp62;
  if (block59.is_used()) {
    ca_.Bind(&block59);
    tmp62 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block61, tmp62);
  }

  TNode<Int32T> tmp63;
  TNode<BoolT> tmp64;
  if (block60.is_used()) {
    ca_.Bind(&block60);
    tmp63 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::HeapType::Representation::kAny);
    tmp64 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp63});
    ca_.Goto(&block61, tmp64);
  }

  TNode<BoolT> phi_bb61_6;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_6);
    ca_.Branch(phi_bb61_6, &block45, std::vector<compiler::Node*>{}, &block46, std::vector<compiler::Node*>{});
  }

  TNode<Object> tmp65;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    tmp65 = UnsafeCast_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{p_value});
    ca_.Goto(&block1, tmp65);
  }

  TNode<Object> tmp66;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    tmp66 = CodeStubAssembler(state_).CallRuntime(Runtime::kWasmGenericWasmToJSObject, p_context, p_value); 
    ca_.Goto(&block1, tmp66);
  }

  TNode<Object> phi_bb1_3;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_3);
    ca_.Goto(&block62, phi_bb1_3);
  }

  TNode<Object> phi_bb62_3;
    ca_.Bind(&block62, &phi_bb62_3);
  return TNode<Object>{phi_bb62_3};
}

TF_BUILTIN(JSToWasmHandleReturns, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<WasmInstanceObject> parameter0 = UncheckedParameter<WasmInstanceObject>(Descriptor::kInstance);
  USE(parameter0);
  TNode<JSArray> parameter1 = UncheckedParameter<JSArray>(Descriptor::kResultArray);
  USE(parameter1);
  TNode<RawPtrT> parameter2 = UncheckedParameter<RawPtrT>(Descriptor::kWrapperBuffer);
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block94(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block98(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block99(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block101(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block95(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block104(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block105(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block110(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block111(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block106(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block103(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block116(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block117(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block90(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block120(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block129(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block130(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block132(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block133(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block131(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block128(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block141(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block142(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block126(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block149(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block150(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block152(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block153(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block155(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block156(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block151(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block161(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block162(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block146(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block165(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block168(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block172(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block173(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block175(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block176(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block178(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block179(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block174(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block171(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block184(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block185(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block169(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block189(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block190(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block192(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block193(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block195(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block196(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block191(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block188(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block198(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block199(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block201(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block202(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block204(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block205(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, Object, IntPtrT> block200(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, Object, IntPtrT> block197(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block210(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block211(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block170(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block166(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block214(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block218(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block219(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block220(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block224(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block225(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block227(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block228(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block223(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block221(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block217(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block233(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block234(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block215(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block238(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block239(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block241(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block242(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block244(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block245(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block240(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, Object, IntPtrT> block237(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block250(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block251(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block258(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block259(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block216(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block167(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block127(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, BoolT, IntPtrT> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<Int32T> tmp3;
  TNode<Int32T> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferReturnCount);
    std::tie(tmp1, tmp2) = GetRefAt_int32_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp5 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp4});
    ca_.Branch(tmp5, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  TNode<Undefined> tmp6;
  if (block1.is_used()) {
    ca_.Bind(&block1);
    tmp6 = Undefined_0(state_);
    CodeStubAssembler(state_).Return(tmp6);
  }

  TNode<Int32T> tmp7;
  TNode<BoolT> tmp8;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp7 = FromConstexpr_int32_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp8 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp7});
    ca_.Branch(tmp8, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<RawPtrT> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Int32T> tmp16;
  TNode<Int32T> tmp17;
  TNode<BoolT> tmp18;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    tmp9 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferSigRepresentationArray);
    std::tie(tmp10, tmp11) = GetRefAt_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp9}).Flatten();
    tmp12 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp13 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp14, tmp15) = GetRefAt_int32_RawPtr_0(state_, TNode<RawPtrT>{tmp12}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp18 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp17});
    ca_.Branch(tmp18, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp19;
  TNode<Object> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Int32T> tmp22;
  TNode<Number> tmp23;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp19 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister1);
    std::tie(tmp20, tmp21) = GetRefAt_int32_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp19}).Flatten();
    tmp22 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp20, tmp21});
    tmp23 = Convert_Number_int32_0(state_, TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  TNode<Int32T> tmp24;
  TNode<BoolT> tmp25;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp24 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp25 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp24});
    ca_.Branch(tmp25, &block8, std::vector<compiler::Node*>{}, &block9, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp26;
  TNode<Object> tmp27;
  TNode<IntPtrT> tmp28;
  TNode<Float32T> tmp29;
  TNode<Number> tmp30;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp26 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferFPReturnRegister1);
    std::tie(tmp27, tmp28) = GetRefAt_float32_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp26}).Flatten();
    tmp29 = CodeStubAssembler(state_).LoadReference<Float32T>(CodeStubAssembler::Reference{tmp27, tmp28});
    tmp30 = Convert_Number_float32_0(state_, TNode<Float32T>{tmp29});
    CodeStubAssembler(state_).Return(tmp30);
  }

  TNode<Int32T> tmp31;
  TNode<BoolT> tmp32;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp31 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp32 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp31});
    ca_.Branch(tmp32, &block11, std::vector<compiler::Node*>{}, &block12, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp33;
  TNode<Object> tmp34;
  TNode<IntPtrT> tmp35;
  TNode<Float64T> tmp36;
  TNode<Number> tmp37;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp33 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferFPReturnRegister1);
    std::tie(tmp34, tmp35) = GetRefAt_float64_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp33}).Flatten();
    tmp36 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp34, tmp35});
    tmp37 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp36});
    CodeStubAssembler(state_).Return(tmp37);
  }

  TNode<Int32T> tmp38;
  TNode<BoolT> tmp39;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp38 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp39 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp38});
    ca_.Branch(tmp39, &block14, std::vector<compiler::Node*>{}, &block15, std::vector<compiler::Node*>{});
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  TNode<IntPtrT> tmp40;
  TNode<Object> tmp41;
  TNode<IntPtrT> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<BigInt> tmp44;
  if (block17.is_used()) {
    ca_.Bind(&block17);
    tmp40 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister1);
    std::tie(tmp41, tmp42) = GetRefAt_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp40}).Flatten();
    tmp43 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp41, tmp42});
    tmp44 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI64ToBigInt), TNode<Object>(), tmp43);
    CodeStubAssembler(state_).Return(tmp44);
  }

  TNode<IntPtrT> tmp45;
  TNode<Object> tmp46;
  TNode<IntPtrT> tmp47;
  TNode<IntPtrT> tmp48;
  TNode<IntPtrT> tmp49;
  TNode<Object> tmp50;
  TNode<IntPtrT> tmp51;
  TNode<IntPtrT> tmp52;
  TNode<BigInt> tmp53;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp45 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister1);
    std::tie(tmp46, tmp47) = GetRefAt_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp45}).Flatten();
    tmp48 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp46, tmp47});
    tmp49 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister2);
    std::tie(tmp50, tmp51) = GetRefAt_intptr_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp49}).Flatten();
    tmp52 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{tmp50, tmp51});
    tmp53 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI32PairToBigInt), TNode<Object>(), tmp48, tmp52);
    CodeStubAssembler(state_).Return(tmp53);
  }

  TNode<IntPtrT> tmp54;
  TNode<RawPtrT> tmp55;
  TNode<RawPtrT> tmp56;
  TNode<IntPtrT> tmp57;
  TNode<Object> tmp58;
  TNode<IntPtrT> tmp59;
  TNode<UintPtrT> tmp60;
  TNode<Object> tmp61;
  TNode<NativeContext> tmp62;
  TNode<Object> tmp63;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp54 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister1);
    tmp55 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp54});
    tmp56 = (TNode<RawPtrT>{tmp55});
    tmp57 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    std::tie(tmp58, tmp59) = GetRefAt_uintptr_RawPtr_uintptr_0(state_, TNode<RawPtrT>{tmp56}, TNode<IntPtrT>{tmp57}).Flatten();
    tmp60 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp58, tmp59});
    tmp61 = CodeStubAssembler(state_).BitcastWordToTagged(TNode<UintPtrT>{tmp60});
    tmp62 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{parameter0});
    tmp63 = WasmToJSObject_0(state_, TNode<NativeContext>{tmp62}, TNode<Object>{tmp61}, TNode<Int32T>{tmp16});
    CodeStubAssembler(state_).Return(tmp63);
  }

  TNode<IntPtrT> tmp64;
  TNode<FixedArrayBase> tmp65;
  TNode<FixedArray> tmp66;
  TNode<IntPtrT> tmp67;
  TNode<Object> tmp68;
  TNode<IntPtrT> tmp69;
  TNode<RawPtrT> tmp70;
  TNode<IntPtrT> tmp71;
  TNode<RawPtrT> tmp72;
  TNode<IntPtrT> tmp73;
  TNode<RawPtrT> tmp74;
  TNode<Object> tmp75;
  TNode<IntPtrT> tmp76;
  TNode<IntPtrT> tmp77;
  TNode<IntPtrT> tmp78;
  TNode<IntPtrT> tmp79;
  TNode<IntPtrT> tmp80;
  TNode<IntPtrT> tmp81;
  TNode<IntPtrT> tmp82;
  TNode<BoolT> tmp83;
  TNode<IntPtrT> tmp84;
  TNode<Object> tmp85;
  TNode<IntPtrT> tmp86;
  TNode<RawPtrT> tmp87;
  TNode<RawPtrT> tmp88;
  TNode<IntPtrT> tmp89;
  TNode<Object> tmp90;
  TNode<IntPtrT> tmp91;
  TNode<IntPtrT> tmp92;
  TNode<IntPtrT> tmp93;
  TNode<Object> tmp94;
  TNode<IntPtrT> tmp95;
  TNode<BoolT> tmp96;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp64 = FromConstexpr_intptr_constexpr_int31_0(state_, 16);
    tmp65 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{parameter1, tmp64});
    tmp66 = TORQUE_CAST(TNode<Object>{tmp65});
    tmp67 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferStackReturnBufferStart);
    std::tie(tmp68, tmp69) = GetRefAt_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp67}).Flatten();
    tmp70 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp68, tmp69});
    tmp71 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister1);
    tmp72 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp71});
    tmp73 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferFPReturnRegister1);
    tmp74 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp73});
    std::tie(tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83) = LocationAllocatorForReturns_0(state_, TNode<RawPtrT>{tmp72}, TNode<RawPtrT>{tmp74}, TNode<RawPtrT>{tmp70}).Flatten();
    tmp84 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferSigRepresentationArray);
    std::tie(tmp85, tmp86) = GetRefAt_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp84}).Flatten();
    tmp87 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp85, tmp86});
    tmp88 = (TNode<RawPtrT>{tmp87});
    tmp89 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp3});
    std::tie(tmp90, tmp91, tmp92) = NewOffHeapConstSlice_int32_0(state_, TNode<RawPtrT>{tmp88}, TNode<IntPtrT>{tmp89}).Flatten();
    tmp93 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferRefReturnCount);
    std::tie(tmp94, tmp95) = GetRefAt_bool_RawPtr_intptr_0(state_, TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp93}).Flatten();
    tmp96 = CodeStubAssembler(state_).LoadReference<BoolT>(CodeStubAssembler::Reference{tmp94, tmp95});
    ca_.Branch(tmp96, &block33, std::vector<compiler::Node*>{}, &block34, std::vector<compiler::Node*>{tmp76, tmp77, tmp78, tmp79, tmp80, tmp82, tmp83});
  }

  TNode<IntPtrT> tmp97;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp97 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block37, tmp76, tmp77, tmp78, tmp79, tmp80, tmp82, tmp83, tmp97);
  }

  TNode<IntPtrT> phi_bb37_7;
  TNode<IntPtrT> phi_bb37_8;
  TNode<IntPtrT> phi_bb37_9;
  TNode<IntPtrT> phi_bb37_10;
  TNode<IntPtrT> phi_bb37_11;
  TNode<IntPtrT> phi_bb37_13;
  TNode<BoolT> phi_bb37_14;
  TNode<IntPtrT> phi_bb37_20;
  TNode<IntPtrT> tmp98;
  TNode<BoolT> tmp99;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_7, &phi_bb37_8, &phi_bb37_9, &phi_bb37_10, &phi_bb37_11, &phi_bb37_13, &phi_bb37_14, &phi_bb37_20);
    tmp98 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp3});
    tmp99 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb37_20}, TNode<IntPtrT>{tmp98});
    ca_.Branch(tmp99, &block35, std::vector<compiler::Node*>{phi_bb37_7, phi_bb37_8, phi_bb37_9, phi_bb37_10, phi_bb37_11, phi_bb37_13, phi_bb37_14, phi_bb37_20}, &block36, std::vector<compiler::Node*>{phi_bb37_7, phi_bb37_8, phi_bb37_9, phi_bb37_10, phi_bb37_11, phi_bb37_13, phi_bb37_14, phi_bb37_20});
  }

  TNode<IntPtrT> phi_bb35_7;
  TNode<IntPtrT> phi_bb35_8;
  TNode<IntPtrT> phi_bb35_9;
  TNode<IntPtrT> phi_bb35_10;
  TNode<IntPtrT> phi_bb35_11;
  TNode<IntPtrT> phi_bb35_13;
  TNode<BoolT> phi_bb35_14;
  TNode<IntPtrT> phi_bb35_20;
  TNode<IntPtrT> tmp100;
  TNode<IntPtrT> tmp101;
  TNode<IntPtrT> tmp102;
  TNode<Object> tmp103;
  TNode<IntPtrT> tmp104;
  TNode<Int32T> tmp105;
  TNode<Int32T> tmp106;
  TNode<BoolT> tmp107;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_7, &phi_bb35_8, &phi_bb35_9, &phi_bb35_10, &phi_bb35_11, &phi_bb35_13, &phi_bb35_14, &phi_bb35_20);
    tmp100 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb35_20});
    tmp101 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{tmp100});
    tmp102 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp91}, TNode<IntPtrT>{tmp101});
    std::tie(tmp103, tmp104) = NewReference_int32_0(state_, TNode<Object>{tmp90}, TNode<IntPtrT>{tmp102}).Flatten();
    tmp105 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp103, tmp104});
    tmp106 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp107 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp105}, TNode<Int32T>{tmp106});
    ca_.Branch(tmp107, &block40, std::vector<compiler::Node*>{phi_bb35_7, phi_bb35_8, phi_bb35_9, phi_bb35_10, phi_bb35_11, phi_bb35_13, phi_bb35_14, phi_bb35_20}, &block41, std::vector<compiler::Node*>{phi_bb35_7, phi_bb35_8, phi_bb35_9, phi_bb35_10, phi_bb35_11, phi_bb35_13, phi_bb35_14, phi_bb35_20});
  }

  TNode<IntPtrT> phi_bb40_7;
  TNode<IntPtrT> phi_bb40_8;
  TNode<IntPtrT> phi_bb40_9;
  TNode<IntPtrT> phi_bb40_10;
  TNode<IntPtrT> phi_bb40_11;
  TNode<IntPtrT> phi_bb40_13;
  TNode<BoolT> phi_bb40_14;
  TNode<IntPtrT> phi_bb40_20;
  TNode<IntPtrT> tmp108;
  TNode<IntPtrT> tmp109;
  TNode<IntPtrT> tmp110;
  TNode<BoolT> tmp111;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_7, &phi_bb40_8, &phi_bb40_9, &phi_bb40_10, &phi_bb40_11, &phi_bb40_13, &phi_bb40_14, &phi_bb40_20);
    tmp108 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp109 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb40_7}, TNode<IntPtrT>{tmp108});
    tmp110 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp111 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb40_7}, TNode<IntPtrT>{tmp110});
    ca_.Branch(tmp111, &block44, std::vector<compiler::Node*>{phi_bb40_8, phi_bb40_9, phi_bb40_10, phi_bb40_11, phi_bb40_13, phi_bb40_14, phi_bb40_20}, &block45, std::vector<compiler::Node*>{phi_bb40_8, phi_bb40_9, phi_bb40_10, phi_bb40_11, phi_bb40_13, phi_bb40_14, phi_bb40_20});
  }

  TNode<IntPtrT> phi_bb44_8;
  TNode<IntPtrT> phi_bb44_9;
  TNode<IntPtrT> phi_bb44_10;
  TNode<IntPtrT> phi_bb44_11;
  TNode<IntPtrT> phi_bb44_13;
  TNode<BoolT> phi_bb44_14;
  TNode<IntPtrT> phi_bb44_20;
  TNode<Object> tmp112;
  TNode<IntPtrT> tmp113;
  TNode<IntPtrT> tmp114;
  TNode<IntPtrT> tmp115;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_8, &phi_bb44_9, &phi_bb44_10, &phi_bb44_11, &phi_bb44_13, &phi_bb44_14, &phi_bb44_20);
    std::tie(tmp112, tmp113) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb44_9}).Flatten();
    tmp114 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp115 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb44_9}, TNode<IntPtrT>{tmp114});
    ca_.Goto(&block43, phi_bb44_8, tmp115, phi_bb44_10, phi_bb44_11, phi_bb44_13, phi_bb44_14, phi_bb44_20, tmp112, tmp113);
  }

  TNode<IntPtrT> phi_bb45_8;
  TNode<IntPtrT> phi_bb45_9;
  TNode<IntPtrT> phi_bb45_10;
  TNode<IntPtrT> phi_bb45_11;
  TNode<IntPtrT> phi_bb45_13;
  TNode<BoolT> phi_bb45_14;
  TNode<IntPtrT> phi_bb45_20;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_8, &phi_bb45_9, &phi_bb45_10, &phi_bb45_11, &phi_bb45_13, &phi_bb45_14, &phi_bb45_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block47, phi_bb45_8, phi_bb45_9, phi_bb45_10, phi_bb45_11, phi_bb45_13, phi_bb45_14, phi_bb45_20);
    } else {
      ca_.Goto(&block48, phi_bb45_8, phi_bb45_9, phi_bb45_10, phi_bb45_11, phi_bb45_13, phi_bb45_14, phi_bb45_20);
    }
  }

  TNode<IntPtrT> phi_bb47_8;
  TNode<IntPtrT> phi_bb47_9;
  TNode<IntPtrT> phi_bb47_10;
  TNode<IntPtrT> phi_bb47_11;
  TNode<IntPtrT> phi_bb47_13;
  TNode<BoolT> phi_bb47_14;
  TNode<IntPtrT> phi_bb47_20;
  TNode<Object> tmp116;
  TNode<IntPtrT> tmp117;
  TNode<IntPtrT> tmp118;
  TNode<IntPtrT> tmp119;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_8, &phi_bb47_9, &phi_bb47_10, &phi_bb47_11, &phi_bb47_13, &phi_bb47_14, &phi_bb47_20);
    std::tie(tmp116, tmp117) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb47_11}).Flatten();
    tmp118 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp119 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb47_11}, TNode<IntPtrT>{tmp118});
    ca_.Goto(&block46, phi_bb47_8, phi_bb47_9, phi_bb47_10, tmp119, phi_bb47_13, phi_bb47_14, phi_bb47_20, tmp116, tmp117);
  }

  TNode<IntPtrT> phi_bb48_8;
  TNode<IntPtrT> phi_bb48_9;
  TNode<IntPtrT> phi_bb48_10;
  TNode<IntPtrT> phi_bb48_11;
  TNode<IntPtrT> phi_bb48_13;
  TNode<BoolT> phi_bb48_14;
  TNode<IntPtrT> phi_bb48_20;
  TNode<IntPtrT> tmp120;
  TNode<BoolT> tmp121;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_8, &phi_bb48_9, &phi_bb48_10, &phi_bb48_11, &phi_bb48_13, &phi_bb48_14, &phi_bb48_20);
    tmp120 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp121 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb48_13}, TNode<IntPtrT>{tmp120});
    ca_.Branch(tmp121, &block50, std::vector<compiler::Node*>{phi_bb48_8, phi_bb48_9, phi_bb48_10, phi_bb48_11, phi_bb48_13, phi_bb48_14, phi_bb48_20}, &block51, std::vector<compiler::Node*>{phi_bb48_8, phi_bb48_9, phi_bb48_10, phi_bb48_11, phi_bb48_13, phi_bb48_14, phi_bb48_20});
  }

  TNode<IntPtrT> phi_bb50_8;
  TNode<IntPtrT> phi_bb50_9;
  TNode<IntPtrT> phi_bb50_10;
  TNode<IntPtrT> phi_bb50_11;
  TNode<IntPtrT> phi_bb50_13;
  TNode<BoolT> phi_bb50_14;
  TNode<IntPtrT> phi_bb50_20;
  TNode<Object> tmp122;
  TNode<IntPtrT> tmp123;
  TNode<IntPtrT> tmp124;
  TNode<BoolT> tmp125;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_8, &phi_bb50_9, &phi_bb50_10, &phi_bb50_11, &phi_bb50_13, &phi_bb50_14, &phi_bb50_20);
    std::tie(tmp122, tmp123) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb50_13}).Flatten();
    tmp124 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp125 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block46, phi_bb50_8, phi_bb50_9, phi_bb50_10, phi_bb50_11, tmp124, tmp125, phi_bb50_20, tmp122, tmp123);
  }

  TNode<IntPtrT> phi_bb51_8;
  TNode<IntPtrT> phi_bb51_9;
  TNode<IntPtrT> phi_bb51_10;
  TNode<IntPtrT> phi_bb51_11;
  TNode<IntPtrT> phi_bb51_13;
  TNode<BoolT> phi_bb51_14;
  TNode<IntPtrT> phi_bb51_20;
  TNode<Object> tmp126;
  TNode<IntPtrT> tmp127;
  TNode<IntPtrT> tmp128;
  TNode<IntPtrT> tmp129;
  TNode<IntPtrT> tmp130;
  TNode<IntPtrT> tmp131;
  TNode<BoolT> tmp132;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_8, &phi_bb51_9, &phi_bb51_10, &phi_bb51_11, &phi_bb51_13, &phi_bb51_14, &phi_bb51_20);
    std::tie(tmp126, tmp127) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb51_11}).Flatten();
    tmp128 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp129 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb51_11}, TNode<IntPtrT>{tmp128});
    tmp130 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp131 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp129}, TNode<IntPtrT>{tmp130});
    tmp132 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block46, phi_bb51_8, phi_bb51_9, phi_bb51_10, tmp131, tmp129, tmp132, phi_bb51_20, tmp126, tmp127);
  }

  TNode<IntPtrT> phi_bb46_8;
  TNode<IntPtrT> phi_bb46_9;
  TNode<IntPtrT> phi_bb46_10;
  TNode<IntPtrT> phi_bb46_11;
  TNode<IntPtrT> phi_bb46_13;
  TNode<BoolT> phi_bb46_14;
  TNode<IntPtrT> phi_bb46_20;
  TNode<Object> phi_bb46_22;
  TNode<IntPtrT> phi_bb46_23;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_8, &phi_bb46_9, &phi_bb46_10, &phi_bb46_11, &phi_bb46_13, &phi_bb46_14, &phi_bb46_20, &phi_bb46_22, &phi_bb46_23);
    ca_.Goto(&block43, phi_bb46_8, phi_bb46_9, phi_bb46_10, phi_bb46_11, phi_bb46_13, phi_bb46_14, phi_bb46_20, phi_bb46_22, phi_bb46_23);
  }

  TNode<IntPtrT> phi_bb43_8;
  TNode<IntPtrT> phi_bb43_9;
  TNode<IntPtrT> phi_bb43_10;
  TNode<IntPtrT> phi_bb43_11;
  TNode<IntPtrT> phi_bb43_13;
  TNode<BoolT> phi_bb43_14;
  TNode<IntPtrT> phi_bb43_20;
  TNode<Object> phi_bb43_22;
  TNode<IntPtrT> phi_bb43_23;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_8, &phi_bb43_9, &phi_bb43_10, &phi_bb43_11, &phi_bb43_13, &phi_bb43_14, &phi_bb43_20, &phi_bb43_22, &phi_bb43_23);
    ca_.Goto(&block42, tmp109, phi_bb43_8, phi_bb43_9, phi_bb43_10, phi_bb43_11, phi_bb43_13, phi_bb43_14, phi_bb43_20);
  }

  TNode<IntPtrT> phi_bb41_7;
  TNode<IntPtrT> phi_bb41_8;
  TNode<IntPtrT> phi_bb41_9;
  TNode<IntPtrT> phi_bb41_10;
  TNode<IntPtrT> phi_bb41_11;
  TNode<IntPtrT> phi_bb41_13;
  TNode<BoolT> phi_bb41_14;
  TNode<IntPtrT> phi_bb41_20;
  TNode<Int32T> tmp133;
  TNode<BoolT> tmp134;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_7, &phi_bb41_8, &phi_bb41_9, &phi_bb41_10, &phi_bb41_11, &phi_bb41_13, &phi_bb41_14, &phi_bb41_20);
    tmp133 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp134 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp105}, TNode<Int32T>{tmp133});
    ca_.Branch(tmp134, &block52, std::vector<compiler::Node*>{phi_bb41_7, phi_bb41_8, phi_bb41_9, phi_bb41_10, phi_bb41_11, phi_bb41_13, phi_bb41_14, phi_bb41_20}, &block53, std::vector<compiler::Node*>{phi_bb41_7, phi_bb41_8, phi_bb41_9, phi_bb41_10, phi_bb41_11, phi_bb41_13, phi_bb41_14, phi_bb41_20});
  }

  TNode<IntPtrT> phi_bb52_7;
  TNode<IntPtrT> phi_bb52_8;
  TNode<IntPtrT> phi_bb52_9;
  TNode<IntPtrT> phi_bb52_10;
  TNode<IntPtrT> phi_bb52_11;
  TNode<IntPtrT> phi_bb52_13;
  TNode<BoolT> phi_bb52_14;
  TNode<IntPtrT> phi_bb52_20;
  TNode<IntPtrT> tmp135;
  TNode<IntPtrT> tmp136;
  TNode<IntPtrT> tmp137;
  TNode<BoolT> tmp138;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_7, &phi_bb52_8, &phi_bb52_9, &phi_bb52_10, &phi_bb52_11, &phi_bb52_13, &phi_bb52_14, &phi_bb52_20);
    tmp135 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp136 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb52_8}, TNode<IntPtrT>{tmp135});
    tmp137 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp138 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb52_8}, TNode<IntPtrT>{tmp137});
    ca_.Branch(tmp138, &block56, std::vector<compiler::Node*>{phi_bb52_7, phi_bb52_9, phi_bb52_10, phi_bb52_11, phi_bb52_13, phi_bb52_14, phi_bb52_20}, &block57, std::vector<compiler::Node*>{phi_bb52_7, phi_bb52_9, phi_bb52_10, phi_bb52_11, phi_bb52_13, phi_bb52_14, phi_bb52_20});
  }

  TNode<IntPtrT> phi_bb56_7;
  TNode<IntPtrT> phi_bb56_9;
  TNode<IntPtrT> phi_bb56_10;
  TNode<IntPtrT> phi_bb56_11;
  TNode<IntPtrT> phi_bb56_13;
  TNode<BoolT> phi_bb56_14;
  TNode<IntPtrT> phi_bb56_20;
  TNode<Object> tmp139;
  TNode<IntPtrT> tmp140;
  TNode<IntPtrT> tmp141;
  TNode<IntPtrT> tmp142;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_7, &phi_bb56_9, &phi_bb56_10, &phi_bb56_11, &phi_bb56_13, &phi_bb56_14, &phi_bb56_20);
    std::tie(tmp139, tmp140) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb56_10}).Flatten();
    tmp141 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp142 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb56_10}, TNode<IntPtrT>{tmp141});
    ca_.Goto(&block55, phi_bb56_7, phi_bb56_9, tmp142, phi_bb56_11, phi_bb56_13, phi_bb56_14, phi_bb56_20, tmp139, tmp140);
  }

  TNode<IntPtrT> phi_bb57_7;
  TNode<IntPtrT> phi_bb57_9;
  TNode<IntPtrT> phi_bb57_10;
  TNode<IntPtrT> phi_bb57_11;
  TNode<IntPtrT> phi_bb57_13;
  TNode<BoolT> phi_bb57_14;
  TNode<IntPtrT> phi_bb57_20;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_7, &phi_bb57_9, &phi_bb57_10, &phi_bb57_11, &phi_bb57_13, &phi_bb57_14, &phi_bb57_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block59, phi_bb57_7, phi_bb57_9, phi_bb57_10, phi_bb57_11, phi_bb57_13, phi_bb57_14, phi_bb57_20);
    } else {
      ca_.Goto(&block60, phi_bb57_7, phi_bb57_9, phi_bb57_10, phi_bb57_11, phi_bb57_13, phi_bb57_14, phi_bb57_20);
    }
  }

  TNode<IntPtrT> phi_bb59_7;
  TNode<IntPtrT> phi_bb59_9;
  TNode<IntPtrT> phi_bb59_10;
  TNode<IntPtrT> phi_bb59_11;
  TNode<IntPtrT> phi_bb59_13;
  TNode<BoolT> phi_bb59_14;
  TNode<IntPtrT> phi_bb59_20;
  TNode<Object> tmp143;
  TNode<IntPtrT> tmp144;
  TNode<IntPtrT> tmp145;
  TNode<IntPtrT> tmp146;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_7, &phi_bb59_9, &phi_bb59_10, &phi_bb59_11, &phi_bb59_13, &phi_bb59_14, &phi_bb59_20);
    std::tie(tmp143, tmp144) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb59_11}).Flatten();
    tmp145 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp146 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb59_11}, TNode<IntPtrT>{tmp145});
    ca_.Goto(&block58, phi_bb59_7, phi_bb59_9, phi_bb59_10, tmp146, phi_bb59_13, phi_bb59_14, phi_bb59_20, tmp143, tmp144);
  }

  TNode<IntPtrT> phi_bb60_7;
  TNode<IntPtrT> phi_bb60_9;
  TNode<IntPtrT> phi_bb60_10;
  TNode<IntPtrT> phi_bb60_11;
  TNode<IntPtrT> phi_bb60_13;
  TNode<BoolT> phi_bb60_14;
  TNode<IntPtrT> phi_bb60_20;
  TNode<IntPtrT> tmp147;
  TNode<BoolT> tmp148;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_7, &phi_bb60_9, &phi_bb60_10, &phi_bb60_11, &phi_bb60_13, &phi_bb60_14, &phi_bb60_20);
    tmp147 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp148 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb60_13}, TNode<IntPtrT>{tmp147});
    ca_.Branch(tmp148, &block62, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_9, phi_bb60_10, phi_bb60_11, phi_bb60_13, phi_bb60_14, phi_bb60_20}, &block63, std::vector<compiler::Node*>{phi_bb60_7, phi_bb60_9, phi_bb60_10, phi_bb60_11, phi_bb60_13, phi_bb60_14, phi_bb60_20});
  }

  TNode<IntPtrT> phi_bb62_7;
  TNode<IntPtrT> phi_bb62_9;
  TNode<IntPtrT> phi_bb62_10;
  TNode<IntPtrT> phi_bb62_11;
  TNode<IntPtrT> phi_bb62_13;
  TNode<BoolT> phi_bb62_14;
  TNode<IntPtrT> phi_bb62_20;
  TNode<Object> tmp149;
  TNode<IntPtrT> tmp150;
  TNode<IntPtrT> tmp151;
  TNode<BoolT> tmp152;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_7, &phi_bb62_9, &phi_bb62_10, &phi_bb62_11, &phi_bb62_13, &phi_bb62_14, &phi_bb62_20);
    std::tie(tmp149, tmp150) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb62_13}).Flatten();
    tmp151 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp152 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block58, phi_bb62_7, phi_bb62_9, phi_bb62_10, phi_bb62_11, tmp151, tmp152, phi_bb62_20, tmp149, tmp150);
  }

  TNode<IntPtrT> phi_bb63_7;
  TNode<IntPtrT> phi_bb63_9;
  TNode<IntPtrT> phi_bb63_10;
  TNode<IntPtrT> phi_bb63_11;
  TNode<IntPtrT> phi_bb63_13;
  TNode<BoolT> phi_bb63_14;
  TNode<IntPtrT> phi_bb63_20;
  TNode<Object> tmp153;
  TNode<IntPtrT> tmp154;
  TNode<IntPtrT> tmp155;
  TNode<IntPtrT> tmp156;
  TNode<IntPtrT> tmp157;
  TNode<IntPtrT> tmp158;
  TNode<BoolT> tmp159;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_7, &phi_bb63_9, &phi_bb63_10, &phi_bb63_11, &phi_bb63_13, &phi_bb63_14, &phi_bb63_20);
    std::tie(tmp153, tmp154) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb63_11}).Flatten();
    tmp155 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp156 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb63_11}, TNode<IntPtrT>{tmp155});
    tmp157 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp158 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp156}, TNode<IntPtrT>{tmp157});
    tmp159 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block58, phi_bb63_7, phi_bb63_9, phi_bb63_10, tmp158, tmp156, tmp159, phi_bb63_20, tmp153, tmp154);
  }

  TNode<IntPtrT> phi_bb58_7;
  TNode<IntPtrT> phi_bb58_9;
  TNode<IntPtrT> phi_bb58_10;
  TNode<IntPtrT> phi_bb58_11;
  TNode<IntPtrT> phi_bb58_13;
  TNode<BoolT> phi_bb58_14;
  TNode<IntPtrT> phi_bb58_20;
  TNode<Object> phi_bb58_22;
  TNode<IntPtrT> phi_bb58_23;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_7, &phi_bb58_9, &phi_bb58_10, &phi_bb58_11, &phi_bb58_13, &phi_bb58_14, &phi_bb58_20, &phi_bb58_22, &phi_bb58_23);
    ca_.Goto(&block55, phi_bb58_7, phi_bb58_9, phi_bb58_10, phi_bb58_11, phi_bb58_13, phi_bb58_14, phi_bb58_20, phi_bb58_22, phi_bb58_23);
  }

  TNode<IntPtrT> phi_bb55_7;
  TNode<IntPtrT> phi_bb55_9;
  TNode<IntPtrT> phi_bb55_10;
  TNode<IntPtrT> phi_bb55_11;
  TNode<IntPtrT> phi_bb55_13;
  TNode<BoolT> phi_bb55_14;
  TNode<IntPtrT> phi_bb55_20;
  TNode<Object> phi_bb55_22;
  TNode<IntPtrT> phi_bb55_23;
  if (block55.is_used()) {
    ca_.Bind(&block55, &phi_bb55_7, &phi_bb55_9, &phi_bb55_10, &phi_bb55_11, &phi_bb55_13, &phi_bb55_14, &phi_bb55_20, &phi_bb55_22, &phi_bb55_23);
    ca_.Goto(&block54, phi_bb55_7, tmp136, phi_bb55_9, phi_bb55_10, phi_bb55_11, phi_bb55_13, phi_bb55_14, phi_bb55_20);
  }

  TNode<IntPtrT> phi_bb53_7;
  TNode<IntPtrT> phi_bb53_8;
  TNode<IntPtrT> phi_bb53_9;
  TNode<IntPtrT> phi_bb53_10;
  TNode<IntPtrT> phi_bb53_11;
  TNode<IntPtrT> phi_bb53_13;
  TNode<BoolT> phi_bb53_14;
  TNode<IntPtrT> phi_bb53_20;
  TNode<Int32T> tmp160;
  TNode<BoolT> tmp161;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_7, &phi_bb53_8, &phi_bb53_9, &phi_bb53_10, &phi_bb53_11, &phi_bb53_13, &phi_bb53_14, &phi_bb53_20);
    tmp160 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp161 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp105}, TNode<Int32T>{tmp160});
    ca_.Branch(tmp161, &block64, std::vector<compiler::Node*>{phi_bb53_7, phi_bb53_8, phi_bb53_9, phi_bb53_10, phi_bb53_11, phi_bb53_13, phi_bb53_14, phi_bb53_20}, &block65, std::vector<compiler::Node*>{phi_bb53_7, phi_bb53_8, phi_bb53_9, phi_bb53_10, phi_bb53_11, phi_bb53_13, phi_bb53_14, phi_bb53_20});
  }

  TNode<IntPtrT> phi_bb64_7;
  TNode<IntPtrT> phi_bb64_8;
  TNode<IntPtrT> phi_bb64_9;
  TNode<IntPtrT> phi_bb64_10;
  TNode<IntPtrT> phi_bb64_11;
  TNode<IntPtrT> phi_bb64_13;
  TNode<BoolT> phi_bb64_14;
  TNode<IntPtrT> phi_bb64_20;
  TNode<IntPtrT> tmp162;
  TNode<IntPtrT> tmp163;
  TNode<IntPtrT> tmp164;
  TNode<BoolT> tmp165;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_7, &phi_bb64_8, &phi_bb64_9, &phi_bb64_10, &phi_bb64_11, &phi_bb64_13, &phi_bb64_14, &phi_bb64_20);
    tmp162 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp163 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb64_7}, TNode<IntPtrT>{tmp162});
    tmp164 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp165 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb64_7}, TNode<IntPtrT>{tmp164});
    ca_.Branch(tmp165, &block68, std::vector<compiler::Node*>{phi_bb64_8, phi_bb64_9, phi_bb64_10, phi_bb64_11, phi_bb64_13, phi_bb64_14, phi_bb64_20}, &block69, std::vector<compiler::Node*>{phi_bb64_8, phi_bb64_9, phi_bb64_10, phi_bb64_11, phi_bb64_13, phi_bb64_14, phi_bb64_20});
  }

  TNode<IntPtrT> phi_bb68_8;
  TNode<IntPtrT> phi_bb68_9;
  TNode<IntPtrT> phi_bb68_10;
  TNode<IntPtrT> phi_bb68_11;
  TNode<IntPtrT> phi_bb68_13;
  TNode<BoolT> phi_bb68_14;
  TNode<IntPtrT> phi_bb68_20;
  TNode<Object> tmp166;
  TNode<IntPtrT> tmp167;
  TNode<IntPtrT> tmp168;
  TNode<IntPtrT> tmp169;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_8, &phi_bb68_9, &phi_bb68_10, &phi_bb68_11, &phi_bb68_13, &phi_bb68_14, &phi_bb68_20);
    std::tie(tmp166, tmp167) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb68_9}).Flatten();
    tmp168 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp169 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb68_9}, TNode<IntPtrT>{tmp168});
    ca_.Goto(&block67, phi_bb68_8, tmp169, phi_bb68_10, phi_bb68_11, phi_bb68_13, phi_bb68_14, phi_bb68_20, tmp166, tmp167);
  }

  TNode<IntPtrT> phi_bb69_8;
  TNode<IntPtrT> phi_bb69_9;
  TNode<IntPtrT> phi_bb69_10;
  TNode<IntPtrT> phi_bb69_11;
  TNode<IntPtrT> phi_bb69_13;
  TNode<BoolT> phi_bb69_14;
  TNode<IntPtrT> phi_bb69_20;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_8, &phi_bb69_9, &phi_bb69_10, &phi_bb69_11, &phi_bb69_13, &phi_bb69_14, &phi_bb69_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block71, phi_bb69_8, phi_bb69_9, phi_bb69_10, phi_bb69_11, phi_bb69_13, phi_bb69_14, phi_bb69_20);
    } else {
      ca_.Goto(&block72, phi_bb69_8, phi_bb69_9, phi_bb69_10, phi_bb69_11, phi_bb69_13, phi_bb69_14, phi_bb69_20);
    }
  }

  TNode<IntPtrT> phi_bb71_8;
  TNode<IntPtrT> phi_bb71_9;
  TNode<IntPtrT> phi_bb71_10;
  TNode<IntPtrT> phi_bb71_11;
  TNode<IntPtrT> phi_bb71_13;
  TNode<BoolT> phi_bb71_14;
  TNode<IntPtrT> phi_bb71_20;
  TNode<Object> tmp170;
  TNode<IntPtrT> tmp171;
  TNode<IntPtrT> tmp172;
  TNode<IntPtrT> tmp173;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_8, &phi_bb71_9, &phi_bb71_10, &phi_bb71_11, &phi_bb71_13, &phi_bb71_14, &phi_bb71_20);
    std::tie(tmp170, tmp171) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb71_11}).Flatten();
    tmp172 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp173 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb71_11}, TNode<IntPtrT>{tmp172});
    ca_.Goto(&block70, phi_bb71_8, phi_bb71_9, phi_bb71_10, tmp173, phi_bb71_13, phi_bb71_14, phi_bb71_20, tmp170, tmp171);
  }

  TNode<IntPtrT> phi_bb72_8;
  TNode<IntPtrT> phi_bb72_9;
  TNode<IntPtrT> phi_bb72_10;
  TNode<IntPtrT> phi_bb72_11;
  TNode<IntPtrT> phi_bb72_13;
  TNode<BoolT> phi_bb72_14;
  TNode<IntPtrT> phi_bb72_20;
  TNode<IntPtrT> tmp174;
  TNode<BoolT> tmp175;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_8, &phi_bb72_9, &phi_bb72_10, &phi_bb72_11, &phi_bb72_13, &phi_bb72_14, &phi_bb72_20);
    tmp174 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp175 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb72_13}, TNode<IntPtrT>{tmp174});
    ca_.Branch(tmp175, &block74, std::vector<compiler::Node*>{phi_bb72_8, phi_bb72_9, phi_bb72_10, phi_bb72_11, phi_bb72_13, phi_bb72_14, phi_bb72_20}, &block75, std::vector<compiler::Node*>{phi_bb72_8, phi_bb72_9, phi_bb72_10, phi_bb72_11, phi_bb72_13, phi_bb72_14, phi_bb72_20});
  }

  TNode<IntPtrT> phi_bb74_8;
  TNode<IntPtrT> phi_bb74_9;
  TNode<IntPtrT> phi_bb74_10;
  TNode<IntPtrT> phi_bb74_11;
  TNode<IntPtrT> phi_bb74_13;
  TNode<BoolT> phi_bb74_14;
  TNode<IntPtrT> phi_bb74_20;
  TNode<Object> tmp176;
  TNode<IntPtrT> tmp177;
  TNode<IntPtrT> tmp178;
  TNode<BoolT> tmp179;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_8, &phi_bb74_9, &phi_bb74_10, &phi_bb74_11, &phi_bb74_13, &phi_bb74_14, &phi_bb74_20);
    std::tie(tmp176, tmp177) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb74_13}).Flatten();
    tmp178 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp179 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block70, phi_bb74_8, phi_bb74_9, phi_bb74_10, phi_bb74_11, tmp178, tmp179, phi_bb74_20, tmp176, tmp177);
  }

  TNode<IntPtrT> phi_bb75_8;
  TNode<IntPtrT> phi_bb75_9;
  TNode<IntPtrT> phi_bb75_10;
  TNode<IntPtrT> phi_bb75_11;
  TNode<IntPtrT> phi_bb75_13;
  TNode<BoolT> phi_bb75_14;
  TNode<IntPtrT> phi_bb75_20;
  TNode<Object> tmp180;
  TNode<IntPtrT> tmp181;
  TNode<IntPtrT> tmp182;
  TNode<IntPtrT> tmp183;
  TNode<IntPtrT> tmp184;
  TNode<IntPtrT> tmp185;
  TNode<BoolT> tmp186;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_8, &phi_bb75_9, &phi_bb75_10, &phi_bb75_11, &phi_bb75_13, &phi_bb75_14, &phi_bb75_20);
    std::tie(tmp180, tmp181) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb75_11}).Flatten();
    tmp182 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp183 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb75_11}, TNode<IntPtrT>{tmp182});
    tmp184 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp185 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp183}, TNode<IntPtrT>{tmp184});
    tmp186 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block70, phi_bb75_8, phi_bb75_9, phi_bb75_10, tmp185, tmp183, tmp186, phi_bb75_20, tmp180, tmp181);
  }

  TNode<IntPtrT> phi_bb70_8;
  TNode<IntPtrT> phi_bb70_9;
  TNode<IntPtrT> phi_bb70_10;
  TNode<IntPtrT> phi_bb70_11;
  TNode<IntPtrT> phi_bb70_13;
  TNode<BoolT> phi_bb70_14;
  TNode<IntPtrT> phi_bb70_20;
  TNode<Object> phi_bb70_22;
  TNode<IntPtrT> phi_bb70_23;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_8, &phi_bb70_9, &phi_bb70_10, &phi_bb70_11, &phi_bb70_13, &phi_bb70_14, &phi_bb70_20, &phi_bb70_22, &phi_bb70_23);
    ca_.Goto(&block67, phi_bb70_8, phi_bb70_9, phi_bb70_10, phi_bb70_11, phi_bb70_13, phi_bb70_14, phi_bb70_20, phi_bb70_22, phi_bb70_23);
  }

  TNode<IntPtrT> phi_bb67_8;
  TNode<IntPtrT> phi_bb67_9;
  TNode<IntPtrT> phi_bb67_10;
  TNode<IntPtrT> phi_bb67_11;
  TNode<IntPtrT> phi_bb67_13;
  TNode<BoolT> phi_bb67_14;
  TNode<IntPtrT> phi_bb67_20;
  TNode<Object> phi_bb67_22;
  TNode<IntPtrT> phi_bb67_23;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_8, &phi_bb67_9, &phi_bb67_10, &phi_bb67_11, &phi_bb67_13, &phi_bb67_14, &phi_bb67_20, &phi_bb67_22, &phi_bb67_23);
    if (((CodeStubAssembler(state_).ConstexprBoolNot((CodeStubAssembler(state_).Is64()))))) {
      ca_.Goto(&block76, phi_bb67_8, phi_bb67_9, phi_bb67_10, phi_bb67_11, phi_bb67_13, phi_bb67_14, phi_bb67_20);
    } else {
      ca_.Goto(&block77, phi_bb67_8, phi_bb67_9, phi_bb67_10, phi_bb67_11, phi_bb67_13, phi_bb67_14, phi_bb67_20);
    }
  }

  TNode<IntPtrT> phi_bb76_8;
  TNode<IntPtrT> phi_bb76_9;
  TNode<IntPtrT> phi_bb76_10;
  TNode<IntPtrT> phi_bb76_11;
  TNode<IntPtrT> phi_bb76_13;
  TNode<BoolT> phi_bb76_14;
  TNode<IntPtrT> phi_bb76_20;
  TNode<IntPtrT> tmp187;
  TNode<IntPtrT> tmp188;
  TNode<IntPtrT> tmp189;
  TNode<BoolT> tmp190;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_8, &phi_bb76_9, &phi_bb76_10, &phi_bb76_11, &phi_bb76_13, &phi_bb76_14, &phi_bb76_20);
    tmp187 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp188 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp163}, TNode<IntPtrT>{tmp187});
    tmp189 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp190 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp163}, TNode<IntPtrT>{tmp189});
    ca_.Branch(tmp190, &block80, std::vector<compiler::Node*>{phi_bb76_8, phi_bb76_9, phi_bb76_10, phi_bb76_11, phi_bb76_13, phi_bb76_14, phi_bb76_20}, &block81, std::vector<compiler::Node*>{phi_bb76_8, phi_bb76_9, phi_bb76_10, phi_bb76_11, phi_bb76_13, phi_bb76_14, phi_bb76_20});
  }

  TNode<IntPtrT> phi_bb80_8;
  TNode<IntPtrT> phi_bb80_9;
  TNode<IntPtrT> phi_bb80_10;
  TNode<IntPtrT> phi_bb80_11;
  TNode<IntPtrT> phi_bb80_13;
  TNode<BoolT> phi_bb80_14;
  TNode<IntPtrT> phi_bb80_20;
  TNode<Object> tmp191;
  TNode<IntPtrT> tmp192;
  TNode<IntPtrT> tmp193;
  TNode<IntPtrT> tmp194;
  if (block80.is_used()) {
    ca_.Bind(&block80, &phi_bb80_8, &phi_bb80_9, &phi_bb80_10, &phi_bb80_11, &phi_bb80_13, &phi_bb80_14, &phi_bb80_20);
    std::tie(tmp191, tmp192) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb80_9}).Flatten();
    tmp193 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp194 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb80_9}, TNode<IntPtrT>{tmp193});
    ca_.Goto(&block79, phi_bb80_8, tmp194, phi_bb80_10, phi_bb80_11, phi_bb80_13, phi_bb80_14, phi_bb80_20, tmp191, tmp192);
  }

  TNode<IntPtrT> phi_bb81_8;
  TNode<IntPtrT> phi_bb81_9;
  TNode<IntPtrT> phi_bb81_10;
  TNode<IntPtrT> phi_bb81_11;
  TNode<IntPtrT> phi_bb81_13;
  TNode<BoolT> phi_bb81_14;
  TNode<IntPtrT> phi_bb81_20;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_8, &phi_bb81_9, &phi_bb81_10, &phi_bb81_11, &phi_bb81_13, &phi_bb81_14, &phi_bb81_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block83, phi_bb81_8, phi_bb81_9, phi_bb81_10, phi_bb81_11, phi_bb81_13, phi_bb81_14, phi_bb81_20);
    } else {
      ca_.Goto(&block84, phi_bb81_8, phi_bb81_9, phi_bb81_10, phi_bb81_11, phi_bb81_13, phi_bb81_14, phi_bb81_20);
    }
  }

  TNode<IntPtrT> phi_bb83_8;
  TNode<IntPtrT> phi_bb83_9;
  TNode<IntPtrT> phi_bb83_10;
  TNode<IntPtrT> phi_bb83_11;
  TNode<IntPtrT> phi_bb83_13;
  TNode<BoolT> phi_bb83_14;
  TNode<IntPtrT> phi_bb83_20;
  TNode<Object> tmp195;
  TNode<IntPtrT> tmp196;
  TNode<IntPtrT> tmp197;
  TNode<IntPtrT> tmp198;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_8, &phi_bb83_9, &phi_bb83_10, &phi_bb83_11, &phi_bb83_13, &phi_bb83_14, &phi_bb83_20);
    std::tie(tmp195, tmp196) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb83_11}).Flatten();
    tmp197 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp198 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb83_11}, TNode<IntPtrT>{tmp197});
    ca_.Goto(&block82, phi_bb83_8, phi_bb83_9, phi_bb83_10, tmp198, phi_bb83_13, phi_bb83_14, phi_bb83_20, tmp195, tmp196);
  }

  TNode<IntPtrT> phi_bb84_8;
  TNode<IntPtrT> phi_bb84_9;
  TNode<IntPtrT> phi_bb84_10;
  TNode<IntPtrT> phi_bb84_11;
  TNode<IntPtrT> phi_bb84_13;
  TNode<BoolT> phi_bb84_14;
  TNode<IntPtrT> phi_bb84_20;
  TNode<IntPtrT> tmp199;
  TNode<BoolT> tmp200;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_8, &phi_bb84_9, &phi_bb84_10, &phi_bb84_11, &phi_bb84_13, &phi_bb84_14, &phi_bb84_20);
    tmp199 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp200 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb84_13}, TNode<IntPtrT>{tmp199});
    ca_.Branch(tmp200, &block86, std::vector<compiler::Node*>{phi_bb84_8, phi_bb84_9, phi_bb84_10, phi_bb84_11, phi_bb84_13, phi_bb84_14, phi_bb84_20}, &block87, std::vector<compiler::Node*>{phi_bb84_8, phi_bb84_9, phi_bb84_10, phi_bb84_11, phi_bb84_13, phi_bb84_14, phi_bb84_20});
  }

  TNode<IntPtrT> phi_bb86_8;
  TNode<IntPtrT> phi_bb86_9;
  TNode<IntPtrT> phi_bb86_10;
  TNode<IntPtrT> phi_bb86_11;
  TNode<IntPtrT> phi_bb86_13;
  TNode<BoolT> phi_bb86_14;
  TNode<IntPtrT> phi_bb86_20;
  TNode<Object> tmp201;
  TNode<IntPtrT> tmp202;
  TNode<IntPtrT> tmp203;
  TNode<BoolT> tmp204;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_8, &phi_bb86_9, &phi_bb86_10, &phi_bb86_11, &phi_bb86_13, &phi_bb86_14, &phi_bb86_20);
    std::tie(tmp201, tmp202) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb86_13}).Flatten();
    tmp203 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp204 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block82, phi_bb86_8, phi_bb86_9, phi_bb86_10, phi_bb86_11, tmp203, tmp204, phi_bb86_20, tmp201, tmp202);
  }

  TNode<IntPtrT> phi_bb87_8;
  TNode<IntPtrT> phi_bb87_9;
  TNode<IntPtrT> phi_bb87_10;
  TNode<IntPtrT> phi_bb87_11;
  TNode<IntPtrT> phi_bb87_13;
  TNode<BoolT> phi_bb87_14;
  TNode<IntPtrT> phi_bb87_20;
  TNode<Object> tmp205;
  TNode<IntPtrT> tmp206;
  TNode<IntPtrT> tmp207;
  TNode<IntPtrT> tmp208;
  TNode<IntPtrT> tmp209;
  TNode<IntPtrT> tmp210;
  TNode<BoolT> tmp211;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_8, &phi_bb87_9, &phi_bb87_10, &phi_bb87_11, &phi_bb87_13, &phi_bb87_14, &phi_bb87_20);
    std::tie(tmp205, tmp206) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb87_11}).Flatten();
    tmp207 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp208 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb87_11}, TNode<IntPtrT>{tmp207});
    tmp209 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp210 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp208}, TNode<IntPtrT>{tmp209});
    tmp211 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block82, phi_bb87_8, phi_bb87_9, phi_bb87_10, tmp210, tmp208, tmp211, phi_bb87_20, tmp205, tmp206);
  }

  TNode<IntPtrT> phi_bb82_8;
  TNode<IntPtrT> phi_bb82_9;
  TNode<IntPtrT> phi_bb82_10;
  TNode<IntPtrT> phi_bb82_11;
  TNode<IntPtrT> phi_bb82_13;
  TNode<BoolT> phi_bb82_14;
  TNode<IntPtrT> phi_bb82_20;
  TNode<Object> phi_bb82_22;
  TNode<IntPtrT> phi_bb82_23;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_8, &phi_bb82_9, &phi_bb82_10, &phi_bb82_11, &phi_bb82_13, &phi_bb82_14, &phi_bb82_20, &phi_bb82_22, &phi_bb82_23);
    ca_.Goto(&block79, phi_bb82_8, phi_bb82_9, phi_bb82_10, phi_bb82_11, phi_bb82_13, phi_bb82_14, phi_bb82_20, phi_bb82_22, phi_bb82_23);
  }

  TNode<IntPtrT> phi_bb79_8;
  TNode<IntPtrT> phi_bb79_9;
  TNode<IntPtrT> phi_bb79_10;
  TNode<IntPtrT> phi_bb79_11;
  TNode<IntPtrT> phi_bb79_13;
  TNode<BoolT> phi_bb79_14;
  TNode<IntPtrT> phi_bb79_20;
  TNode<Object> phi_bb79_22;
  TNode<IntPtrT> phi_bb79_23;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_8, &phi_bb79_9, &phi_bb79_10, &phi_bb79_11, &phi_bb79_13, &phi_bb79_14, &phi_bb79_20, &phi_bb79_22, &phi_bb79_23);
    ca_.Goto(&block78, tmp188, phi_bb79_8, phi_bb79_9, phi_bb79_10, phi_bb79_11, phi_bb79_13, phi_bb79_14, phi_bb79_20);
  }

  TNode<IntPtrT> phi_bb77_8;
  TNode<IntPtrT> phi_bb77_9;
  TNode<IntPtrT> phi_bb77_10;
  TNode<IntPtrT> phi_bb77_11;
  TNode<IntPtrT> phi_bb77_13;
  TNode<BoolT> phi_bb77_14;
  TNode<IntPtrT> phi_bb77_20;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_8, &phi_bb77_9, &phi_bb77_10, &phi_bb77_11, &phi_bb77_13, &phi_bb77_14, &phi_bb77_20);
    ca_.Goto(&block78, tmp163, phi_bb77_8, phi_bb77_9, phi_bb77_10, phi_bb77_11, phi_bb77_13, phi_bb77_14, phi_bb77_20);
  }

  TNode<IntPtrT> phi_bb78_7;
  TNode<IntPtrT> phi_bb78_8;
  TNode<IntPtrT> phi_bb78_9;
  TNode<IntPtrT> phi_bb78_10;
  TNode<IntPtrT> phi_bb78_11;
  TNode<IntPtrT> phi_bb78_13;
  TNode<BoolT> phi_bb78_14;
  TNode<IntPtrT> phi_bb78_20;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_7, &phi_bb78_8, &phi_bb78_9, &phi_bb78_10, &phi_bb78_11, &phi_bb78_13, &phi_bb78_14, &phi_bb78_20);
    ca_.Goto(&block66, phi_bb78_7, phi_bb78_8, phi_bb78_9, phi_bb78_10, phi_bb78_11, phi_bb78_13, phi_bb78_14, phi_bb78_20);
  }

  TNode<IntPtrT> phi_bb65_7;
  TNode<IntPtrT> phi_bb65_8;
  TNode<IntPtrT> phi_bb65_9;
  TNode<IntPtrT> phi_bb65_10;
  TNode<IntPtrT> phi_bb65_11;
  TNode<IntPtrT> phi_bb65_13;
  TNode<BoolT> phi_bb65_14;
  TNode<IntPtrT> phi_bb65_20;
  TNode<Int32T> tmp212;
  TNode<BoolT> tmp213;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_7, &phi_bb65_8, &phi_bb65_9, &phi_bb65_10, &phi_bb65_11, &phi_bb65_13, &phi_bb65_14, &phi_bb65_20);
    tmp212 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp213 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp105}, TNode<Int32T>{tmp212});
    ca_.Branch(tmp213, &block88, std::vector<compiler::Node*>{phi_bb65_7, phi_bb65_8, phi_bb65_9, phi_bb65_10, phi_bb65_11, phi_bb65_13, phi_bb65_14, phi_bb65_20}, &block89, std::vector<compiler::Node*>{phi_bb65_7, phi_bb65_8, phi_bb65_9, phi_bb65_10, phi_bb65_11, phi_bb65_13, phi_bb65_14, phi_bb65_20});
  }

  TNode<IntPtrT> phi_bb88_7;
  TNode<IntPtrT> phi_bb88_8;
  TNode<IntPtrT> phi_bb88_9;
  TNode<IntPtrT> phi_bb88_10;
  TNode<IntPtrT> phi_bb88_11;
  TNode<IntPtrT> phi_bb88_13;
  TNode<BoolT> phi_bb88_14;
  TNode<IntPtrT> phi_bb88_20;
  TNode<IntPtrT> tmp214;
  TNode<IntPtrT> tmp215;
  TNode<IntPtrT> tmp216;
  TNode<BoolT> tmp217;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_7, &phi_bb88_8, &phi_bb88_9, &phi_bb88_10, &phi_bb88_11, &phi_bb88_13, &phi_bb88_14, &phi_bb88_20);
    tmp214 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp215 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb88_8}, TNode<IntPtrT>{tmp214});
    tmp216 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp217 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb88_8}, TNode<IntPtrT>{tmp216});
    ca_.Branch(tmp217, &block92, std::vector<compiler::Node*>{phi_bb88_7, phi_bb88_9, phi_bb88_10, phi_bb88_11, phi_bb88_13, phi_bb88_14, phi_bb88_20}, &block93, std::vector<compiler::Node*>{phi_bb88_7, phi_bb88_9, phi_bb88_10, phi_bb88_11, phi_bb88_13, phi_bb88_14, phi_bb88_20});
  }

  TNode<IntPtrT> phi_bb92_7;
  TNode<IntPtrT> phi_bb92_9;
  TNode<IntPtrT> phi_bb92_10;
  TNode<IntPtrT> phi_bb92_11;
  TNode<IntPtrT> phi_bb92_13;
  TNode<BoolT> phi_bb92_14;
  TNode<IntPtrT> phi_bb92_20;
  TNode<Object> tmp218;
  TNode<IntPtrT> tmp219;
  TNode<IntPtrT> tmp220;
  TNode<IntPtrT> tmp221;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_7, &phi_bb92_9, &phi_bb92_10, &phi_bb92_11, &phi_bb92_13, &phi_bb92_14, &phi_bb92_20);
    std::tie(tmp218, tmp219) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb92_10}).Flatten();
    tmp220 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp221 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb92_10}, TNode<IntPtrT>{tmp220});
    ca_.Goto(&block91, phi_bb92_7, phi_bb92_9, tmp221, phi_bb92_11, phi_bb92_13, phi_bb92_14, phi_bb92_20, tmp218, tmp219);
  }

  TNode<IntPtrT> phi_bb93_7;
  TNode<IntPtrT> phi_bb93_9;
  TNode<IntPtrT> phi_bb93_10;
  TNode<IntPtrT> phi_bb93_11;
  TNode<IntPtrT> phi_bb93_13;
  TNode<BoolT> phi_bb93_14;
  TNode<IntPtrT> phi_bb93_20;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_7, &phi_bb93_9, &phi_bb93_10, &phi_bb93_11, &phi_bb93_13, &phi_bb93_14, &phi_bb93_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block94, phi_bb93_7, phi_bb93_9, phi_bb93_10, phi_bb93_11, phi_bb93_13, phi_bb93_14, phi_bb93_20);
    } else {
      ca_.Goto(&block95, phi_bb93_7, phi_bb93_9, phi_bb93_10, phi_bb93_11, phi_bb93_13, phi_bb93_14, phi_bb93_20);
    }
  }

  TNode<IntPtrT> phi_bb94_7;
  TNode<IntPtrT> phi_bb94_9;
  TNode<IntPtrT> phi_bb94_10;
  TNode<IntPtrT> phi_bb94_11;
  TNode<IntPtrT> phi_bb94_13;
  TNode<BoolT> phi_bb94_14;
  TNode<IntPtrT> phi_bb94_20;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_7, &phi_bb94_9, &phi_bb94_10, &phi_bb94_11, &phi_bb94_13, &phi_bb94_14, &phi_bb94_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block98, phi_bb94_7, phi_bb94_9, phi_bb94_10, phi_bb94_11, phi_bb94_13, phi_bb94_14, phi_bb94_20);
    } else {
      ca_.Goto(&block99, phi_bb94_7, phi_bb94_9, phi_bb94_10, phi_bb94_11, phi_bb94_13, phi_bb94_14, phi_bb94_20);
    }
  }

  TNode<IntPtrT> phi_bb98_7;
  TNode<IntPtrT> phi_bb98_9;
  TNode<IntPtrT> phi_bb98_10;
  TNode<IntPtrT> phi_bb98_11;
  TNode<IntPtrT> phi_bb98_13;
  TNode<BoolT> phi_bb98_14;
  TNode<IntPtrT> phi_bb98_20;
  TNode<Object> tmp222;
  TNode<IntPtrT> tmp223;
  TNode<IntPtrT> tmp224;
  TNode<IntPtrT> tmp225;
  if (block98.is_used()) {
    ca_.Bind(&block98, &phi_bb98_7, &phi_bb98_9, &phi_bb98_10, &phi_bb98_11, &phi_bb98_13, &phi_bb98_14, &phi_bb98_20);
    std::tie(tmp222, tmp223) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb98_11}).Flatten();
    tmp224 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp225 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb98_11}, TNode<IntPtrT>{tmp224});
    ca_.Goto(&block97, phi_bb98_7, phi_bb98_9, phi_bb98_10, tmp225, phi_bb98_13, phi_bb98_14, phi_bb98_20, tmp222, tmp223);
  }

  TNode<IntPtrT> phi_bb99_7;
  TNode<IntPtrT> phi_bb99_9;
  TNode<IntPtrT> phi_bb99_10;
  TNode<IntPtrT> phi_bb99_11;
  TNode<IntPtrT> phi_bb99_13;
  TNode<BoolT> phi_bb99_14;
  TNode<IntPtrT> phi_bb99_20;
  TNode<IntPtrT> tmp226;
  TNode<BoolT> tmp227;
  if (block99.is_used()) {
    ca_.Bind(&block99, &phi_bb99_7, &phi_bb99_9, &phi_bb99_10, &phi_bb99_11, &phi_bb99_13, &phi_bb99_14, &phi_bb99_20);
    tmp226 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp227 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb99_13}, TNode<IntPtrT>{tmp226});
    ca_.Branch(tmp227, &block101, std::vector<compiler::Node*>{phi_bb99_7, phi_bb99_9, phi_bb99_10, phi_bb99_11, phi_bb99_13, phi_bb99_14, phi_bb99_20}, &block102, std::vector<compiler::Node*>{phi_bb99_7, phi_bb99_9, phi_bb99_10, phi_bb99_11, phi_bb99_13, phi_bb99_14, phi_bb99_20});
  }

  TNode<IntPtrT> phi_bb101_7;
  TNode<IntPtrT> phi_bb101_9;
  TNode<IntPtrT> phi_bb101_10;
  TNode<IntPtrT> phi_bb101_11;
  TNode<IntPtrT> phi_bb101_13;
  TNode<BoolT> phi_bb101_14;
  TNode<IntPtrT> phi_bb101_20;
  TNode<Object> tmp228;
  TNode<IntPtrT> tmp229;
  TNode<IntPtrT> tmp230;
  TNode<BoolT> tmp231;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_7, &phi_bb101_9, &phi_bb101_10, &phi_bb101_11, &phi_bb101_13, &phi_bb101_14, &phi_bb101_20);
    std::tie(tmp228, tmp229) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb101_13}).Flatten();
    tmp230 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp231 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block97, phi_bb101_7, phi_bb101_9, phi_bb101_10, phi_bb101_11, tmp230, tmp231, phi_bb101_20, tmp228, tmp229);
  }

  TNode<IntPtrT> phi_bb102_7;
  TNode<IntPtrT> phi_bb102_9;
  TNode<IntPtrT> phi_bb102_10;
  TNode<IntPtrT> phi_bb102_11;
  TNode<IntPtrT> phi_bb102_13;
  TNode<BoolT> phi_bb102_14;
  TNode<IntPtrT> phi_bb102_20;
  TNode<Object> tmp232;
  TNode<IntPtrT> tmp233;
  TNode<IntPtrT> tmp234;
  TNode<IntPtrT> tmp235;
  TNode<IntPtrT> tmp236;
  TNode<IntPtrT> tmp237;
  TNode<BoolT> tmp238;
  if (block102.is_used()) {
    ca_.Bind(&block102, &phi_bb102_7, &phi_bb102_9, &phi_bb102_10, &phi_bb102_11, &phi_bb102_13, &phi_bb102_14, &phi_bb102_20);
    std::tie(tmp232, tmp233) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb102_11}).Flatten();
    tmp234 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp235 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb102_11}, TNode<IntPtrT>{tmp234});
    tmp236 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp237 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp235}, TNode<IntPtrT>{tmp236});
    tmp238 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block97, phi_bb102_7, phi_bb102_9, phi_bb102_10, tmp237, tmp235, tmp238, phi_bb102_20, tmp232, tmp233);
  }

  TNode<IntPtrT> phi_bb97_7;
  TNode<IntPtrT> phi_bb97_9;
  TNode<IntPtrT> phi_bb97_10;
  TNode<IntPtrT> phi_bb97_11;
  TNode<IntPtrT> phi_bb97_13;
  TNode<BoolT> phi_bb97_14;
  TNode<IntPtrT> phi_bb97_20;
  TNode<Object> phi_bb97_22;
  TNode<IntPtrT> phi_bb97_23;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_7, &phi_bb97_9, &phi_bb97_10, &phi_bb97_11, &phi_bb97_13, &phi_bb97_14, &phi_bb97_20, &phi_bb97_22, &phi_bb97_23);
    ca_.Goto(&block91, phi_bb97_7, phi_bb97_9, phi_bb97_10, phi_bb97_11, phi_bb97_13, phi_bb97_14, phi_bb97_20, phi_bb97_22, phi_bb97_23);
  }

  TNode<IntPtrT> phi_bb95_7;
  TNode<IntPtrT> phi_bb95_9;
  TNode<IntPtrT> phi_bb95_10;
  TNode<IntPtrT> phi_bb95_11;
  TNode<IntPtrT> phi_bb95_13;
  TNode<BoolT> phi_bb95_14;
  TNode<IntPtrT> phi_bb95_20;
  TNode<Object> tmp239;
  TNode<IntPtrT> tmp240;
  TNode<IntPtrT> tmp241;
  TNode<IntPtrT> tmp242;
  TNode<BoolT> tmp243;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_7, &phi_bb95_9, &phi_bb95_10, &phi_bb95_11, &phi_bb95_13, &phi_bb95_14, &phi_bb95_20);
    std::tie(tmp239, tmp240) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb95_11}).Flatten();
    tmp241 = FromConstexpr_intptr_constexpr_int31_0(state_, (CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))));
    tmp242 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb95_11}, TNode<IntPtrT>{tmp241});
    tmp243 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block91, phi_bb95_7, phi_bb95_9, phi_bb95_10, tmp242, phi_bb95_13, tmp243, phi_bb95_20, tmp239, tmp240);
  }

  TNode<IntPtrT> phi_bb91_7;
  TNode<IntPtrT> phi_bb91_9;
  TNode<IntPtrT> phi_bb91_10;
  TNode<IntPtrT> phi_bb91_11;
  TNode<IntPtrT> phi_bb91_13;
  TNode<BoolT> phi_bb91_14;
  TNode<IntPtrT> phi_bb91_20;
  TNode<Object> phi_bb91_22;
  TNode<IntPtrT> phi_bb91_23;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_7, &phi_bb91_9, &phi_bb91_10, &phi_bb91_11, &phi_bb91_13, &phi_bb91_14, &phi_bb91_20, &phi_bb91_22, &phi_bb91_23);
    ca_.Goto(&block90, phi_bb91_7, tmp215, phi_bb91_9, phi_bb91_10, phi_bb91_11, phi_bb91_13, phi_bb91_14, phi_bb91_20);
  }

  TNode<IntPtrT> phi_bb89_7;
  TNode<IntPtrT> phi_bb89_8;
  TNode<IntPtrT> phi_bb89_9;
  TNode<IntPtrT> phi_bb89_10;
  TNode<IntPtrT> phi_bb89_11;
  TNode<IntPtrT> phi_bb89_13;
  TNode<BoolT> phi_bb89_14;
  TNode<IntPtrT> phi_bb89_20;
  TNode<IntPtrT> tmp244;
  TNode<IntPtrT> tmp245;
  TNode<IntPtrT> tmp246;
  TNode<BoolT> tmp247;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_7, &phi_bb89_8, &phi_bb89_9, &phi_bb89_10, &phi_bb89_11, &phi_bb89_13, &phi_bb89_14, &phi_bb89_20);
    tmp244 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp245 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb89_7}, TNode<IntPtrT>{tmp244});
    tmp246 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp247 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb89_7}, TNode<IntPtrT>{tmp246});
    ca_.Branch(tmp247, &block104, std::vector<compiler::Node*>{phi_bb89_8, phi_bb89_9, phi_bb89_10, phi_bb89_11, phi_bb89_13, phi_bb89_14, phi_bb89_20}, &block105, std::vector<compiler::Node*>{phi_bb89_8, phi_bb89_9, phi_bb89_10, phi_bb89_11, phi_bb89_13, phi_bb89_14, phi_bb89_20});
  }

  TNode<IntPtrT> phi_bb104_8;
  TNode<IntPtrT> phi_bb104_9;
  TNode<IntPtrT> phi_bb104_10;
  TNode<IntPtrT> phi_bb104_11;
  TNode<IntPtrT> phi_bb104_13;
  TNode<BoolT> phi_bb104_14;
  TNode<IntPtrT> phi_bb104_20;
  TNode<Object> tmp248;
  TNode<IntPtrT> tmp249;
  TNode<IntPtrT> tmp250;
  TNode<IntPtrT> tmp251;
  if (block104.is_used()) {
    ca_.Bind(&block104, &phi_bb104_8, &phi_bb104_9, &phi_bb104_10, &phi_bb104_11, &phi_bb104_13, &phi_bb104_14, &phi_bb104_20);
    std::tie(tmp248, tmp249) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb104_9}).Flatten();
    tmp250 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp251 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb104_9}, TNode<IntPtrT>{tmp250});
    ca_.Goto(&block103, phi_bb104_8, tmp251, phi_bb104_10, phi_bb104_11, phi_bb104_13, phi_bb104_14, phi_bb104_20, tmp248, tmp249);
  }

  TNode<IntPtrT> phi_bb105_8;
  TNode<IntPtrT> phi_bb105_9;
  TNode<IntPtrT> phi_bb105_10;
  TNode<IntPtrT> phi_bb105_11;
  TNode<IntPtrT> phi_bb105_13;
  TNode<BoolT> phi_bb105_14;
  TNode<IntPtrT> phi_bb105_20;
  if (block105.is_used()) {
    ca_.Bind(&block105, &phi_bb105_8, &phi_bb105_9, &phi_bb105_10, &phi_bb105_11, &phi_bb105_13, &phi_bb105_14, &phi_bb105_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block107, phi_bb105_8, phi_bb105_9, phi_bb105_10, phi_bb105_11, phi_bb105_13, phi_bb105_14, phi_bb105_20);
    } else {
      ca_.Goto(&block108, phi_bb105_8, phi_bb105_9, phi_bb105_10, phi_bb105_11, phi_bb105_13, phi_bb105_14, phi_bb105_20);
    }
  }

  TNode<IntPtrT> phi_bb107_8;
  TNode<IntPtrT> phi_bb107_9;
  TNode<IntPtrT> phi_bb107_10;
  TNode<IntPtrT> phi_bb107_11;
  TNode<IntPtrT> phi_bb107_13;
  TNode<BoolT> phi_bb107_14;
  TNode<IntPtrT> phi_bb107_20;
  TNode<Object> tmp252;
  TNode<IntPtrT> tmp253;
  TNode<IntPtrT> tmp254;
  TNode<IntPtrT> tmp255;
  if (block107.is_used()) {
    ca_.Bind(&block107, &phi_bb107_8, &phi_bb107_9, &phi_bb107_10, &phi_bb107_11, &phi_bb107_13, &phi_bb107_14, &phi_bb107_20);
    std::tie(tmp252, tmp253) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb107_11}).Flatten();
    tmp254 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp255 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb107_11}, TNode<IntPtrT>{tmp254});
    ca_.Goto(&block106, phi_bb107_8, phi_bb107_9, phi_bb107_10, tmp255, phi_bb107_13, phi_bb107_14, phi_bb107_20, tmp252, tmp253);
  }

  TNode<IntPtrT> phi_bb108_8;
  TNode<IntPtrT> phi_bb108_9;
  TNode<IntPtrT> phi_bb108_10;
  TNode<IntPtrT> phi_bb108_11;
  TNode<IntPtrT> phi_bb108_13;
  TNode<BoolT> phi_bb108_14;
  TNode<IntPtrT> phi_bb108_20;
  TNode<IntPtrT> tmp256;
  TNode<BoolT> tmp257;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_8, &phi_bb108_9, &phi_bb108_10, &phi_bb108_11, &phi_bb108_13, &phi_bb108_14, &phi_bb108_20);
    tmp256 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp257 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb108_13}, TNode<IntPtrT>{tmp256});
    ca_.Branch(tmp257, &block110, std::vector<compiler::Node*>{phi_bb108_8, phi_bb108_9, phi_bb108_10, phi_bb108_11, phi_bb108_13, phi_bb108_14, phi_bb108_20}, &block111, std::vector<compiler::Node*>{phi_bb108_8, phi_bb108_9, phi_bb108_10, phi_bb108_11, phi_bb108_13, phi_bb108_14, phi_bb108_20});
  }

  TNode<IntPtrT> phi_bb110_8;
  TNode<IntPtrT> phi_bb110_9;
  TNode<IntPtrT> phi_bb110_10;
  TNode<IntPtrT> phi_bb110_11;
  TNode<IntPtrT> phi_bb110_13;
  TNode<BoolT> phi_bb110_14;
  TNode<IntPtrT> phi_bb110_20;
  TNode<Object> tmp258;
  TNode<IntPtrT> tmp259;
  TNode<IntPtrT> tmp260;
  TNode<BoolT> tmp261;
  if (block110.is_used()) {
    ca_.Bind(&block110, &phi_bb110_8, &phi_bb110_9, &phi_bb110_10, &phi_bb110_11, &phi_bb110_13, &phi_bb110_14, &phi_bb110_20);
    std::tie(tmp258, tmp259) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb110_13}).Flatten();
    tmp260 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp261 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block106, phi_bb110_8, phi_bb110_9, phi_bb110_10, phi_bb110_11, tmp260, tmp261, phi_bb110_20, tmp258, tmp259);
  }

  TNode<IntPtrT> phi_bb111_8;
  TNode<IntPtrT> phi_bb111_9;
  TNode<IntPtrT> phi_bb111_10;
  TNode<IntPtrT> phi_bb111_11;
  TNode<IntPtrT> phi_bb111_13;
  TNode<BoolT> phi_bb111_14;
  TNode<IntPtrT> phi_bb111_20;
  TNode<Object> tmp262;
  TNode<IntPtrT> tmp263;
  TNode<IntPtrT> tmp264;
  TNode<IntPtrT> tmp265;
  TNode<IntPtrT> tmp266;
  TNode<IntPtrT> tmp267;
  TNode<BoolT> tmp268;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_8, &phi_bb111_9, &phi_bb111_10, &phi_bb111_11, &phi_bb111_13, &phi_bb111_14, &phi_bb111_20);
    std::tie(tmp262, tmp263) = NewReference_intptr_0(state_, TNode<Object>{tmp75}, TNode<IntPtrT>{phi_bb111_11}).Flatten();
    tmp264 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp265 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb111_11}, TNode<IntPtrT>{tmp264});
    tmp266 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp267 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp265}, TNode<IntPtrT>{tmp266});
    tmp268 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block106, phi_bb111_8, phi_bb111_9, phi_bb111_10, tmp267, tmp265, tmp268, phi_bb111_20, tmp262, tmp263);
  }

  TNode<IntPtrT> phi_bb106_8;
  TNode<IntPtrT> phi_bb106_9;
  TNode<IntPtrT> phi_bb106_10;
  TNode<IntPtrT> phi_bb106_11;
  TNode<IntPtrT> phi_bb106_13;
  TNode<BoolT> phi_bb106_14;
  TNode<IntPtrT> phi_bb106_20;
  TNode<Object> phi_bb106_23;
  TNode<IntPtrT> phi_bb106_24;
  if (block106.is_used()) {
    ca_.Bind(&block106, &phi_bb106_8, &phi_bb106_9, &phi_bb106_10, &phi_bb106_11, &phi_bb106_13, &phi_bb106_14, &phi_bb106_20, &phi_bb106_23, &phi_bb106_24);
    ca_.Goto(&block103, phi_bb106_8, phi_bb106_9, phi_bb106_10, phi_bb106_11, phi_bb106_13, phi_bb106_14, phi_bb106_20, phi_bb106_23, phi_bb106_24);
  }

  TNode<IntPtrT> phi_bb103_8;
  TNode<IntPtrT> phi_bb103_9;
  TNode<IntPtrT> phi_bb103_10;
  TNode<IntPtrT> phi_bb103_11;
  TNode<IntPtrT> phi_bb103_13;
  TNode<BoolT> phi_bb103_14;
  TNode<IntPtrT> phi_bb103_20;
  TNode<Object> phi_bb103_23;
  TNode<IntPtrT> phi_bb103_24;
  TNode<IntPtrT> tmp269;
  TNode<Object> tmp270;
  TNode<Object> tmp271;
  TNode<IntPtrT> tmp272;
  TNode<IntPtrT> tmp273;
  TNode<UintPtrT> tmp274;
  TNode<UintPtrT> tmp275;
  TNode<BoolT> tmp276;
  if (block103.is_used()) {
    ca_.Bind(&block103, &phi_bb103_8, &phi_bb103_9, &phi_bb103_10, &phi_bb103_11, &phi_bb103_13, &phi_bb103_14, &phi_bb103_20, &phi_bb103_23, &phi_bb103_24);
    tmp269 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb103_23, phi_bb103_24});
    tmp270 = CodeStubAssembler(state_).BitcastWordToTagged(TNode<IntPtrT>{tmp269});
    std::tie(tmp271, tmp272, tmp273) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp274 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb103_20});
    tmp275 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp273});
    tmp276 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp274}, TNode<UintPtrT>{tmp275});
    ca_.Branch(tmp276, &block116, std::vector<compiler::Node*>{phi_bb103_8, phi_bb103_9, phi_bb103_10, phi_bb103_11, phi_bb103_13, phi_bb103_14, phi_bb103_20, phi_bb103_23, phi_bb103_24, phi_bb103_20, phi_bb103_20, phi_bb103_20, phi_bb103_20}, &block117, std::vector<compiler::Node*>{phi_bb103_8, phi_bb103_9, phi_bb103_10, phi_bb103_11, phi_bb103_13, phi_bb103_14, phi_bb103_20, phi_bb103_23, phi_bb103_24, phi_bb103_20, phi_bb103_20, phi_bb103_20, phi_bb103_20});
  }

  TNode<IntPtrT> phi_bb116_8;
  TNode<IntPtrT> phi_bb116_9;
  TNode<IntPtrT> phi_bb116_10;
  TNode<IntPtrT> phi_bb116_11;
  TNode<IntPtrT> phi_bb116_13;
  TNode<BoolT> phi_bb116_14;
  TNode<IntPtrT> phi_bb116_20;
  TNode<Object> phi_bb116_23;
  TNode<IntPtrT> phi_bb116_24;
  TNode<IntPtrT> phi_bb116_30;
  TNode<IntPtrT> phi_bb116_31;
  TNode<IntPtrT> phi_bb116_35;
  TNode<IntPtrT> phi_bb116_36;
  TNode<IntPtrT> tmp277;
  TNode<IntPtrT> tmp278;
  TNode<Object> tmp279;
  TNode<IntPtrT> tmp280;
  if (block116.is_used()) {
    ca_.Bind(&block116, &phi_bb116_8, &phi_bb116_9, &phi_bb116_10, &phi_bb116_11, &phi_bb116_13, &phi_bb116_14, &phi_bb116_20, &phi_bb116_23, &phi_bb116_24, &phi_bb116_30, &phi_bb116_31, &phi_bb116_35, &phi_bb116_36);
    tmp277 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb116_36});
    tmp278 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp272}, TNode<IntPtrT>{tmp277});
    std::tie(tmp279, tmp280) = NewReference_Object_0(state_, TNode<Object>{tmp271}, TNode<IntPtrT>{tmp278}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp279, tmp280}, tmp270);
    ca_.Goto(&block90, tmp245, phi_bb116_8, phi_bb116_9, phi_bb116_10, phi_bb116_11, phi_bb116_13, phi_bb116_14, phi_bb116_20);
  }

  TNode<IntPtrT> phi_bb117_8;
  TNode<IntPtrT> phi_bb117_9;
  TNode<IntPtrT> phi_bb117_10;
  TNode<IntPtrT> phi_bb117_11;
  TNode<IntPtrT> phi_bb117_13;
  TNode<BoolT> phi_bb117_14;
  TNode<IntPtrT> phi_bb117_20;
  TNode<Object> phi_bb117_23;
  TNode<IntPtrT> phi_bb117_24;
  TNode<IntPtrT> phi_bb117_30;
  TNode<IntPtrT> phi_bb117_31;
  TNode<IntPtrT> phi_bb117_35;
  TNode<IntPtrT> phi_bb117_36;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_8, &phi_bb117_9, &phi_bb117_10, &phi_bb117_11, &phi_bb117_13, &phi_bb117_14, &phi_bb117_20, &phi_bb117_23, &phi_bb117_24, &phi_bb117_30, &phi_bb117_31, &phi_bb117_35, &phi_bb117_36);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb90_7;
  TNode<IntPtrT> phi_bb90_8;
  TNode<IntPtrT> phi_bb90_9;
  TNode<IntPtrT> phi_bb90_10;
  TNode<IntPtrT> phi_bb90_11;
  TNode<IntPtrT> phi_bb90_13;
  TNode<BoolT> phi_bb90_14;
  TNode<IntPtrT> phi_bb90_20;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_7, &phi_bb90_8, &phi_bb90_9, &phi_bb90_10, &phi_bb90_11, &phi_bb90_13, &phi_bb90_14, &phi_bb90_20);
    ca_.Goto(&block66, phi_bb90_7, phi_bb90_8, phi_bb90_9, phi_bb90_10, phi_bb90_11, phi_bb90_13, phi_bb90_14, phi_bb90_20);
  }

  TNode<IntPtrT> phi_bb66_7;
  TNode<IntPtrT> phi_bb66_8;
  TNode<IntPtrT> phi_bb66_9;
  TNode<IntPtrT> phi_bb66_10;
  TNode<IntPtrT> phi_bb66_11;
  TNode<IntPtrT> phi_bb66_13;
  TNode<BoolT> phi_bb66_14;
  TNode<IntPtrT> phi_bb66_20;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_7, &phi_bb66_8, &phi_bb66_9, &phi_bb66_10, &phi_bb66_11, &phi_bb66_13, &phi_bb66_14, &phi_bb66_20);
    ca_.Goto(&block54, phi_bb66_7, phi_bb66_8, phi_bb66_9, phi_bb66_10, phi_bb66_11, phi_bb66_13, phi_bb66_14, phi_bb66_20);
  }

  TNode<IntPtrT> phi_bb54_7;
  TNode<IntPtrT> phi_bb54_8;
  TNode<IntPtrT> phi_bb54_9;
  TNode<IntPtrT> phi_bb54_10;
  TNode<IntPtrT> phi_bb54_11;
  TNode<IntPtrT> phi_bb54_13;
  TNode<BoolT> phi_bb54_14;
  TNode<IntPtrT> phi_bb54_20;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_7, &phi_bb54_8, &phi_bb54_9, &phi_bb54_10, &phi_bb54_11, &phi_bb54_13, &phi_bb54_14, &phi_bb54_20);
    ca_.Goto(&block42, phi_bb54_7, phi_bb54_8, phi_bb54_9, phi_bb54_10, phi_bb54_11, phi_bb54_13, phi_bb54_14, phi_bb54_20);
  }

  TNode<IntPtrT> phi_bb42_7;
  TNode<IntPtrT> phi_bb42_8;
  TNode<IntPtrT> phi_bb42_9;
  TNode<IntPtrT> phi_bb42_10;
  TNode<IntPtrT> phi_bb42_11;
  TNode<IntPtrT> phi_bb42_13;
  TNode<BoolT> phi_bb42_14;
  TNode<IntPtrT> phi_bb42_20;
  TNode<IntPtrT> tmp281;
  TNode<IntPtrT> tmp282;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_7, &phi_bb42_8, &phi_bb42_9, &phi_bb42_10, &phi_bb42_11, &phi_bb42_13, &phi_bb42_14, &phi_bb42_20);
    tmp281 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp282 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb42_20}, TNode<IntPtrT>{tmp281});
    ca_.Goto(&block37, phi_bb42_7, phi_bb42_8, phi_bb42_9, phi_bb42_10, phi_bb42_11, phi_bb42_13, phi_bb42_14, tmp282);
  }

  TNode<IntPtrT> phi_bb36_7;
  TNode<IntPtrT> phi_bb36_8;
  TNode<IntPtrT> phi_bb36_9;
  TNode<IntPtrT> phi_bb36_10;
  TNode<IntPtrT> phi_bb36_11;
  TNode<IntPtrT> phi_bb36_13;
  TNode<BoolT> phi_bb36_14;
  TNode<IntPtrT> phi_bb36_20;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_7, &phi_bb36_8, &phi_bb36_9, &phi_bb36_10, &phi_bb36_11, &phi_bb36_13, &phi_bb36_14, &phi_bb36_20);
    ca_.Goto(&block34, phi_bb36_7, phi_bb36_8, phi_bb36_9, phi_bb36_10, phi_bb36_11, phi_bb36_13, phi_bb36_14);
  }

  TNode<IntPtrT> phi_bb34_7;
  TNode<IntPtrT> phi_bb34_8;
  TNode<IntPtrT> phi_bb34_9;
  TNode<IntPtrT> phi_bb34_10;
  TNode<IntPtrT> phi_bb34_11;
  TNode<IntPtrT> phi_bb34_13;
  TNode<BoolT> phi_bb34_14;
  TNode<IntPtrT> tmp283;
  TNode<RawPtrT> tmp284;
  TNode<IntPtrT> tmp285;
  TNode<RawPtrT> tmp286;
  TNode<Object> tmp287;
  TNode<IntPtrT> tmp288;
  TNode<IntPtrT> tmp289;
  TNode<IntPtrT> tmp290;
  TNode<IntPtrT> tmp291;
  TNode<IntPtrT> tmp292;
  TNode<IntPtrT> tmp293;
  TNode<IntPtrT> tmp294;
  TNode<BoolT> tmp295;
  TNode<IntPtrT> tmp296;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_7, &phi_bb34_8, &phi_bb34_9, &phi_bb34_10, &phi_bb34_11, &phi_bb34_13, &phi_bb34_14);
    tmp283 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferGPReturnRegister1);
    tmp284 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp283});
    tmp285 = FromConstexpr_intptr_constexpr_intptr_0(state_, JSToWasmWrapperFrameConstants::kWrapperBufferFPReturnRegister1);
    tmp286 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{parameter2}, TNode<IntPtrT>{tmp285});
    std::tie(tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295) = LocationAllocatorForReturns_0(state_, TNode<RawPtrT>{tmp284}, TNode<RawPtrT>{tmp286}, TNode<RawPtrT>{tmp70}).Flatten();
    tmp296 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    ca_.Goto(&block122, tmp288, tmp289, tmp290, tmp291, tmp292, tmp294, tmp295, tmp296);
  }

  TNode<IntPtrT> phi_bb122_7;
  TNode<IntPtrT> phi_bb122_8;
  TNode<IntPtrT> phi_bb122_9;
  TNode<IntPtrT> phi_bb122_10;
  TNode<IntPtrT> phi_bb122_11;
  TNode<IntPtrT> phi_bb122_13;
  TNode<BoolT> phi_bb122_14;
  TNode<IntPtrT> phi_bb122_20;
  TNode<IntPtrT> tmp297;
  TNode<BoolT> tmp298;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_7, &phi_bb122_8, &phi_bb122_9, &phi_bb122_10, &phi_bb122_11, &phi_bb122_13, &phi_bb122_14, &phi_bb122_20);
    tmp297 = Convert_intptr_int32_0(state_, TNode<Int32T>{tmp3});
    tmp298 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{phi_bb122_20}, TNode<IntPtrT>{tmp297});
    ca_.Branch(tmp298, &block120, std::vector<compiler::Node*>{phi_bb122_7, phi_bb122_8, phi_bb122_9, phi_bb122_10, phi_bb122_11, phi_bb122_13, phi_bb122_14, phi_bb122_20}, &block121, std::vector<compiler::Node*>{phi_bb122_7, phi_bb122_8, phi_bb122_9, phi_bb122_10, phi_bb122_11, phi_bb122_13, phi_bb122_14, phi_bb122_20});
  }

  TNode<IntPtrT> phi_bb120_7;
  TNode<IntPtrT> phi_bb120_8;
  TNode<IntPtrT> phi_bb120_9;
  TNode<IntPtrT> phi_bb120_10;
  TNode<IntPtrT> phi_bb120_11;
  TNode<IntPtrT> phi_bb120_13;
  TNode<BoolT> phi_bb120_14;
  TNode<IntPtrT> phi_bb120_20;
  TNode<IntPtrT> tmp299;
  TNode<IntPtrT> tmp300;
  TNode<IntPtrT> tmp301;
  TNode<Object> tmp302;
  TNode<IntPtrT> tmp303;
  TNode<Int32T> tmp304;
  TNode<Int32T> tmp305;
  TNode<BoolT> tmp306;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_7, &phi_bb120_8, &phi_bb120_9, &phi_bb120_10, &phi_bb120_11, &phi_bb120_13, &phi_bb120_14, &phi_bb120_20);
    tmp299 = Convert_intptr_intptr_0(state_, TNode<IntPtrT>{phi_bb120_20});
    tmp300 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{tmp299});
    tmp301 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp91}, TNode<IntPtrT>{tmp300});
    std::tie(tmp302, tmp303) = NewReference_int32_0(state_, TNode<Object>{tmp90}, TNode<IntPtrT>{tmp301}).Flatten();
    tmp304 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp302, tmp303});
    tmp305 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI32.raw_bit_field());
    tmp306 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp304}, TNode<Int32T>{tmp305});
    ca_.Branch(tmp306, &block125, std::vector<compiler::Node*>{phi_bb120_7, phi_bb120_8, phi_bb120_9, phi_bb120_10, phi_bb120_11, phi_bb120_13, phi_bb120_14, phi_bb120_20}, &block126, std::vector<compiler::Node*>{phi_bb120_7, phi_bb120_8, phi_bb120_9, phi_bb120_10, phi_bb120_11, phi_bb120_13, phi_bb120_14, phi_bb120_20});
  }

  TNode<IntPtrT> phi_bb125_7;
  TNode<IntPtrT> phi_bb125_8;
  TNode<IntPtrT> phi_bb125_9;
  TNode<IntPtrT> phi_bb125_10;
  TNode<IntPtrT> phi_bb125_11;
  TNode<IntPtrT> phi_bb125_13;
  TNode<BoolT> phi_bb125_14;
  TNode<IntPtrT> phi_bb125_20;
  TNode<IntPtrT> tmp307;
  TNode<IntPtrT> tmp308;
  TNode<IntPtrT> tmp309;
  TNode<BoolT> tmp310;
  if (block125.is_used()) {
    ca_.Bind(&block125, &phi_bb125_7, &phi_bb125_8, &phi_bb125_9, &phi_bb125_10, &phi_bb125_11, &phi_bb125_13, &phi_bb125_14, &phi_bb125_20);
    tmp307 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp308 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb125_7}, TNode<IntPtrT>{tmp307});
    tmp309 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp310 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb125_7}, TNode<IntPtrT>{tmp309});
    ca_.Branch(tmp310, &block129, std::vector<compiler::Node*>{phi_bb125_8, phi_bb125_9, phi_bb125_10, phi_bb125_11, phi_bb125_13, phi_bb125_14, phi_bb125_20}, &block130, std::vector<compiler::Node*>{phi_bb125_8, phi_bb125_9, phi_bb125_10, phi_bb125_11, phi_bb125_13, phi_bb125_14, phi_bb125_20});
  }

  TNode<IntPtrT> phi_bb129_8;
  TNode<IntPtrT> phi_bb129_9;
  TNode<IntPtrT> phi_bb129_10;
  TNode<IntPtrT> phi_bb129_11;
  TNode<IntPtrT> phi_bb129_13;
  TNode<BoolT> phi_bb129_14;
  TNode<IntPtrT> phi_bb129_20;
  TNode<Object> tmp311;
  TNode<IntPtrT> tmp312;
  TNode<IntPtrT> tmp313;
  TNode<IntPtrT> tmp314;
  if (block129.is_used()) {
    ca_.Bind(&block129, &phi_bb129_8, &phi_bb129_9, &phi_bb129_10, &phi_bb129_11, &phi_bb129_13, &phi_bb129_14, &phi_bb129_20);
    std::tie(tmp311, tmp312) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb129_9}).Flatten();
    tmp313 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp314 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb129_9}, TNode<IntPtrT>{tmp313});
    ca_.Goto(&block128, phi_bb129_8, tmp314, phi_bb129_10, phi_bb129_11, phi_bb129_13, phi_bb129_14, phi_bb129_20, tmp311, tmp312);
  }

  TNode<IntPtrT> phi_bb130_8;
  TNode<IntPtrT> phi_bb130_9;
  TNode<IntPtrT> phi_bb130_10;
  TNode<IntPtrT> phi_bb130_11;
  TNode<IntPtrT> phi_bb130_13;
  TNode<BoolT> phi_bb130_14;
  TNode<IntPtrT> phi_bb130_20;
  if (block130.is_used()) {
    ca_.Bind(&block130, &phi_bb130_8, &phi_bb130_9, &phi_bb130_10, &phi_bb130_11, &phi_bb130_13, &phi_bb130_14, &phi_bb130_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block132, phi_bb130_8, phi_bb130_9, phi_bb130_10, phi_bb130_11, phi_bb130_13, phi_bb130_14, phi_bb130_20);
    } else {
      ca_.Goto(&block133, phi_bb130_8, phi_bb130_9, phi_bb130_10, phi_bb130_11, phi_bb130_13, phi_bb130_14, phi_bb130_20);
    }
  }

  TNode<IntPtrT> phi_bb132_8;
  TNode<IntPtrT> phi_bb132_9;
  TNode<IntPtrT> phi_bb132_10;
  TNode<IntPtrT> phi_bb132_11;
  TNode<IntPtrT> phi_bb132_13;
  TNode<BoolT> phi_bb132_14;
  TNode<IntPtrT> phi_bb132_20;
  TNode<Object> tmp315;
  TNode<IntPtrT> tmp316;
  TNode<IntPtrT> tmp317;
  TNode<IntPtrT> tmp318;
  if (block132.is_used()) {
    ca_.Bind(&block132, &phi_bb132_8, &phi_bb132_9, &phi_bb132_10, &phi_bb132_11, &phi_bb132_13, &phi_bb132_14, &phi_bb132_20);
    std::tie(tmp315, tmp316) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb132_11}).Flatten();
    tmp317 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp318 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb132_11}, TNode<IntPtrT>{tmp317});
    ca_.Goto(&block131, phi_bb132_8, phi_bb132_9, phi_bb132_10, tmp318, phi_bb132_13, phi_bb132_14, phi_bb132_20, tmp315, tmp316);
  }

  TNode<IntPtrT> phi_bb133_8;
  TNode<IntPtrT> phi_bb133_9;
  TNode<IntPtrT> phi_bb133_10;
  TNode<IntPtrT> phi_bb133_11;
  TNode<IntPtrT> phi_bb133_13;
  TNode<BoolT> phi_bb133_14;
  TNode<IntPtrT> phi_bb133_20;
  TNode<IntPtrT> tmp319;
  TNode<BoolT> tmp320;
  if (block133.is_used()) {
    ca_.Bind(&block133, &phi_bb133_8, &phi_bb133_9, &phi_bb133_10, &phi_bb133_11, &phi_bb133_13, &phi_bb133_14, &phi_bb133_20);
    tmp319 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp320 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb133_13}, TNode<IntPtrT>{tmp319});
    ca_.Branch(tmp320, &block135, std::vector<compiler::Node*>{phi_bb133_8, phi_bb133_9, phi_bb133_10, phi_bb133_11, phi_bb133_13, phi_bb133_14, phi_bb133_20}, &block136, std::vector<compiler::Node*>{phi_bb133_8, phi_bb133_9, phi_bb133_10, phi_bb133_11, phi_bb133_13, phi_bb133_14, phi_bb133_20});
  }

  TNode<IntPtrT> phi_bb135_8;
  TNode<IntPtrT> phi_bb135_9;
  TNode<IntPtrT> phi_bb135_10;
  TNode<IntPtrT> phi_bb135_11;
  TNode<IntPtrT> phi_bb135_13;
  TNode<BoolT> phi_bb135_14;
  TNode<IntPtrT> phi_bb135_20;
  TNode<Object> tmp321;
  TNode<IntPtrT> tmp322;
  TNode<IntPtrT> tmp323;
  TNode<BoolT> tmp324;
  if (block135.is_used()) {
    ca_.Bind(&block135, &phi_bb135_8, &phi_bb135_9, &phi_bb135_10, &phi_bb135_11, &phi_bb135_13, &phi_bb135_14, &phi_bb135_20);
    std::tie(tmp321, tmp322) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb135_13}).Flatten();
    tmp323 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp324 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block131, phi_bb135_8, phi_bb135_9, phi_bb135_10, phi_bb135_11, tmp323, tmp324, phi_bb135_20, tmp321, tmp322);
  }

  TNode<IntPtrT> phi_bb136_8;
  TNode<IntPtrT> phi_bb136_9;
  TNode<IntPtrT> phi_bb136_10;
  TNode<IntPtrT> phi_bb136_11;
  TNode<IntPtrT> phi_bb136_13;
  TNode<BoolT> phi_bb136_14;
  TNode<IntPtrT> phi_bb136_20;
  TNode<Object> tmp325;
  TNode<IntPtrT> tmp326;
  TNode<IntPtrT> tmp327;
  TNode<IntPtrT> tmp328;
  TNode<IntPtrT> tmp329;
  TNode<IntPtrT> tmp330;
  TNode<BoolT> tmp331;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_8, &phi_bb136_9, &phi_bb136_10, &phi_bb136_11, &phi_bb136_13, &phi_bb136_14, &phi_bb136_20);
    std::tie(tmp325, tmp326) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb136_11}).Flatten();
    tmp327 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp328 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb136_11}, TNode<IntPtrT>{tmp327});
    tmp329 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp330 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp328}, TNode<IntPtrT>{tmp329});
    tmp331 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block131, phi_bb136_8, phi_bb136_9, phi_bb136_10, tmp330, tmp328, tmp331, phi_bb136_20, tmp325, tmp326);
  }

  TNode<IntPtrT> phi_bb131_8;
  TNode<IntPtrT> phi_bb131_9;
  TNode<IntPtrT> phi_bb131_10;
  TNode<IntPtrT> phi_bb131_11;
  TNode<IntPtrT> phi_bb131_13;
  TNode<BoolT> phi_bb131_14;
  TNode<IntPtrT> phi_bb131_20;
  TNode<Object> phi_bb131_22;
  TNode<IntPtrT> phi_bb131_23;
  if (block131.is_used()) {
    ca_.Bind(&block131, &phi_bb131_8, &phi_bb131_9, &phi_bb131_10, &phi_bb131_11, &phi_bb131_13, &phi_bb131_14, &phi_bb131_20, &phi_bb131_22, &phi_bb131_23);
    ca_.Goto(&block128, phi_bb131_8, phi_bb131_9, phi_bb131_10, phi_bb131_11, phi_bb131_13, phi_bb131_14, phi_bb131_20, phi_bb131_22, phi_bb131_23);
  }

  TNode<IntPtrT> phi_bb128_8;
  TNode<IntPtrT> phi_bb128_9;
  TNode<IntPtrT> phi_bb128_10;
  TNode<IntPtrT> phi_bb128_11;
  TNode<IntPtrT> phi_bb128_13;
  TNode<BoolT> phi_bb128_14;
  TNode<IntPtrT> phi_bb128_20;
  TNode<Object> phi_bb128_22;
  TNode<IntPtrT> phi_bb128_23;
  TNode<Object> tmp332;
  TNode<IntPtrT> tmp333;
  TNode<Int32T> tmp334;
  TNode<Object> tmp335;
  TNode<IntPtrT> tmp336;
  TNode<IntPtrT> tmp337;
  TNode<UintPtrT> tmp338;
  TNode<UintPtrT> tmp339;
  TNode<BoolT> tmp340;
  if (block128.is_used()) {
    ca_.Bind(&block128, &phi_bb128_8, &phi_bb128_9, &phi_bb128_10, &phi_bb128_11, &phi_bb128_13, &phi_bb128_14, &phi_bb128_20, &phi_bb128_22, &phi_bb128_23);
    std::tie(tmp332, tmp333) = RefCast_int32_0(state_, TorqueStructReference_intptr_0{TNode<Object>{phi_bb128_22}, TNode<IntPtrT>{phi_bb128_23}, TorqueStructUnsafe_0{}}).Flatten();
    tmp334 = CodeStubAssembler(state_).LoadReference<Int32T>(CodeStubAssembler::Reference{tmp332, tmp333});
    std::tie(tmp335, tmp336, tmp337) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp338 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb128_20});
    tmp339 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp337});
    tmp340 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp338}, TNode<UintPtrT>{tmp339});
    ca_.Branch(tmp340, &block141, std::vector<compiler::Node*>{phi_bb128_8, phi_bb128_9, phi_bb128_10, phi_bb128_11, phi_bb128_13, phi_bb128_14, phi_bb128_20, phi_bb128_22, phi_bb128_23, phi_bb128_20, phi_bb128_20, phi_bb128_20, phi_bb128_20}, &block142, std::vector<compiler::Node*>{phi_bb128_8, phi_bb128_9, phi_bb128_10, phi_bb128_11, phi_bb128_13, phi_bb128_14, phi_bb128_20, phi_bb128_22, phi_bb128_23, phi_bb128_20, phi_bb128_20, phi_bb128_20, phi_bb128_20});
  }

  TNode<IntPtrT> phi_bb141_8;
  TNode<IntPtrT> phi_bb141_9;
  TNode<IntPtrT> phi_bb141_10;
  TNode<IntPtrT> phi_bb141_11;
  TNode<IntPtrT> phi_bb141_13;
  TNode<BoolT> phi_bb141_14;
  TNode<IntPtrT> phi_bb141_20;
  TNode<Object> phi_bb141_22;
  TNode<IntPtrT> phi_bb141_23;
  TNode<IntPtrT> phi_bb141_29;
  TNode<IntPtrT> phi_bb141_30;
  TNode<IntPtrT> phi_bb141_34;
  TNode<IntPtrT> phi_bb141_35;
  TNode<IntPtrT> tmp341;
  TNode<IntPtrT> tmp342;
  TNode<Object> tmp343;
  TNode<IntPtrT> tmp344;
  TNode<Number> tmp345;
  if (block141.is_used()) {
    ca_.Bind(&block141, &phi_bb141_8, &phi_bb141_9, &phi_bb141_10, &phi_bb141_11, &phi_bb141_13, &phi_bb141_14, &phi_bb141_20, &phi_bb141_22, &phi_bb141_23, &phi_bb141_29, &phi_bb141_30, &phi_bb141_34, &phi_bb141_35);
    tmp341 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb141_35});
    tmp342 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp336}, TNode<IntPtrT>{tmp341});
    std::tie(tmp343, tmp344) = NewReference_Object_0(state_, TNode<Object>{tmp335}, TNode<IntPtrT>{tmp342}).Flatten();
    tmp345 = Convert_Number_int32_0(state_, TNode<Int32T>{tmp334});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp343, tmp344}, tmp345);
    ca_.Goto(&block127, tmp308, phi_bb141_8, phi_bb141_9, phi_bb141_10, phi_bb141_11, phi_bb141_13, phi_bb141_14, phi_bb141_20);
  }

  TNode<IntPtrT> phi_bb142_8;
  TNode<IntPtrT> phi_bb142_9;
  TNode<IntPtrT> phi_bb142_10;
  TNode<IntPtrT> phi_bb142_11;
  TNode<IntPtrT> phi_bb142_13;
  TNode<BoolT> phi_bb142_14;
  TNode<IntPtrT> phi_bb142_20;
  TNode<Object> phi_bb142_22;
  TNode<IntPtrT> phi_bb142_23;
  TNode<IntPtrT> phi_bb142_29;
  TNode<IntPtrT> phi_bb142_30;
  TNode<IntPtrT> phi_bb142_34;
  TNode<IntPtrT> phi_bb142_35;
  if (block142.is_used()) {
    ca_.Bind(&block142, &phi_bb142_8, &phi_bb142_9, &phi_bb142_10, &phi_bb142_11, &phi_bb142_13, &phi_bb142_14, &phi_bb142_20, &phi_bb142_22, &phi_bb142_23, &phi_bb142_29, &phi_bb142_30, &phi_bb142_34, &phi_bb142_35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb126_7;
  TNode<IntPtrT> phi_bb126_8;
  TNode<IntPtrT> phi_bb126_9;
  TNode<IntPtrT> phi_bb126_10;
  TNode<IntPtrT> phi_bb126_11;
  TNode<IntPtrT> phi_bb126_13;
  TNode<BoolT> phi_bb126_14;
  TNode<IntPtrT> phi_bb126_20;
  TNode<Int32T> tmp346;
  TNode<BoolT> tmp347;
  if (block126.is_used()) {
    ca_.Bind(&block126, &phi_bb126_7, &phi_bb126_8, &phi_bb126_9, &phi_bb126_10, &phi_bb126_11, &phi_bb126_13, &phi_bb126_14, &phi_bb126_20);
    tmp346 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF32.raw_bit_field());
    tmp347 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp304}, TNode<Int32T>{tmp346});
    ca_.Branch(tmp347, &block145, std::vector<compiler::Node*>{phi_bb126_7, phi_bb126_8, phi_bb126_9, phi_bb126_10, phi_bb126_11, phi_bb126_13, phi_bb126_14, phi_bb126_20}, &block146, std::vector<compiler::Node*>{phi_bb126_7, phi_bb126_8, phi_bb126_9, phi_bb126_10, phi_bb126_11, phi_bb126_13, phi_bb126_14, phi_bb126_20});
  }

  TNode<IntPtrT> phi_bb145_7;
  TNode<IntPtrT> phi_bb145_8;
  TNode<IntPtrT> phi_bb145_9;
  TNode<IntPtrT> phi_bb145_10;
  TNode<IntPtrT> phi_bb145_11;
  TNode<IntPtrT> phi_bb145_13;
  TNode<BoolT> phi_bb145_14;
  TNode<IntPtrT> phi_bb145_20;
  TNode<IntPtrT> tmp348;
  TNode<IntPtrT> tmp349;
  TNode<IntPtrT> tmp350;
  TNode<BoolT> tmp351;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_7, &phi_bb145_8, &phi_bb145_9, &phi_bb145_10, &phi_bb145_11, &phi_bb145_13, &phi_bb145_14, &phi_bb145_20);
    tmp348 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp349 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb145_8}, TNode<IntPtrT>{tmp348});
    tmp350 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp351 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb145_8}, TNode<IntPtrT>{tmp350});
    ca_.Branch(tmp351, &block149, std::vector<compiler::Node*>{phi_bb145_7, phi_bb145_9, phi_bb145_10, phi_bb145_11, phi_bb145_13, phi_bb145_14, phi_bb145_20}, &block150, std::vector<compiler::Node*>{phi_bb145_7, phi_bb145_9, phi_bb145_10, phi_bb145_11, phi_bb145_13, phi_bb145_14, phi_bb145_20});
  }

  TNode<IntPtrT> phi_bb149_7;
  TNode<IntPtrT> phi_bb149_9;
  TNode<IntPtrT> phi_bb149_10;
  TNode<IntPtrT> phi_bb149_11;
  TNode<IntPtrT> phi_bb149_13;
  TNode<BoolT> phi_bb149_14;
  TNode<IntPtrT> phi_bb149_20;
  TNode<Object> tmp352;
  TNode<IntPtrT> tmp353;
  TNode<IntPtrT> tmp354;
  TNode<IntPtrT> tmp355;
  if (block149.is_used()) {
    ca_.Bind(&block149, &phi_bb149_7, &phi_bb149_9, &phi_bb149_10, &phi_bb149_11, &phi_bb149_13, &phi_bb149_14, &phi_bb149_20);
    std::tie(tmp352, tmp353) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb149_10}).Flatten();
    tmp354 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp355 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb149_10}, TNode<IntPtrT>{tmp354});
    ca_.Goto(&block148, phi_bb149_7, phi_bb149_9, tmp355, phi_bb149_11, phi_bb149_13, phi_bb149_14, phi_bb149_20, tmp352, tmp353);
  }

  TNode<IntPtrT> phi_bb150_7;
  TNode<IntPtrT> phi_bb150_9;
  TNode<IntPtrT> phi_bb150_10;
  TNode<IntPtrT> phi_bb150_11;
  TNode<IntPtrT> phi_bb150_13;
  TNode<BoolT> phi_bb150_14;
  TNode<IntPtrT> phi_bb150_20;
  if (block150.is_used()) {
    ca_.Bind(&block150, &phi_bb150_7, &phi_bb150_9, &phi_bb150_10, &phi_bb150_11, &phi_bb150_13, &phi_bb150_14, &phi_bb150_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block152, phi_bb150_7, phi_bb150_9, phi_bb150_10, phi_bb150_11, phi_bb150_13, phi_bb150_14, phi_bb150_20);
    } else {
      ca_.Goto(&block153, phi_bb150_7, phi_bb150_9, phi_bb150_10, phi_bb150_11, phi_bb150_13, phi_bb150_14, phi_bb150_20);
    }
  }

  TNode<IntPtrT> phi_bb152_7;
  TNode<IntPtrT> phi_bb152_9;
  TNode<IntPtrT> phi_bb152_10;
  TNode<IntPtrT> phi_bb152_11;
  TNode<IntPtrT> phi_bb152_13;
  TNode<BoolT> phi_bb152_14;
  TNode<IntPtrT> phi_bb152_20;
  TNode<Object> tmp356;
  TNode<IntPtrT> tmp357;
  TNode<IntPtrT> tmp358;
  TNode<IntPtrT> tmp359;
  if (block152.is_used()) {
    ca_.Bind(&block152, &phi_bb152_7, &phi_bb152_9, &phi_bb152_10, &phi_bb152_11, &phi_bb152_13, &phi_bb152_14, &phi_bb152_20);
    std::tie(tmp356, tmp357) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb152_11}).Flatten();
    tmp358 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp359 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb152_11}, TNode<IntPtrT>{tmp358});
    ca_.Goto(&block151, phi_bb152_7, phi_bb152_9, phi_bb152_10, tmp359, phi_bb152_13, phi_bb152_14, phi_bb152_20, tmp356, tmp357);
  }

  TNode<IntPtrT> phi_bb153_7;
  TNode<IntPtrT> phi_bb153_9;
  TNode<IntPtrT> phi_bb153_10;
  TNode<IntPtrT> phi_bb153_11;
  TNode<IntPtrT> phi_bb153_13;
  TNode<BoolT> phi_bb153_14;
  TNode<IntPtrT> phi_bb153_20;
  TNode<IntPtrT> tmp360;
  TNode<BoolT> tmp361;
  if (block153.is_used()) {
    ca_.Bind(&block153, &phi_bb153_7, &phi_bb153_9, &phi_bb153_10, &phi_bb153_11, &phi_bb153_13, &phi_bb153_14, &phi_bb153_20);
    tmp360 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp361 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb153_13}, TNode<IntPtrT>{tmp360});
    ca_.Branch(tmp361, &block155, std::vector<compiler::Node*>{phi_bb153_7, phi_bb153_9, phi_bb153_10, phi_bb153_11, phi_bb153_13, phi_bb153_14, phi_bb153_20}, &block156, std::vector<compiler::Node*>{phi_bb153_7, phi_bb153_9, phi_bb153_10, phi_bb153_11, phi_bb153_13, phi_bb153_14, phi_bb153_20});
  }

  TNode<IntPtrT> phi_bb155_7;
  TNode<IntPtrT> phi_bb155_9;
  TNode<IntPtrT> phi_bb155_10;
  TNode<IntPtrT> phi_bb155_11;
  TNode<IntPtrT> phi_bb155_13;
  TNode<BoolT> phi_bb155_14;
  TNode<IntPtrT> phi_bb155_20;
  TNode<Object> tmp362;
  TNode<IntPtrT> tmp363;
  TNode<IntPtrT> tmp364;
  TNode<BoolT> tmp365;
  if (block155.is_used()) {
    ca_.Bind(&block155, &phi_bb155_7, &phi_bb155_9, &phi_bb155_10, &phi_bb155_11, &phi_bb155_13, &phi_bb155_14, &phi_bb155_20);
    std::tie(tmp362, tmp363) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb155_13}).Flatten();
    tmp364 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp365 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block151, phi_bb155_7, phi_bb155_9, phi_bb155_10, phi_bb155_11, tmp364, tmp365, phi_bb155_20, tmp362, tmp363);
  }

  TNode<IntPtrT> phi_bb156_7;
  TNode<IntPtrT> phi_bb156_9;
  TNode<IntPtrT> phi_bb156_10;
  TNode<IntPtrT> phi_bb156_11;
  TNode<IntPtrT> phi_bb156_13;
  TNode<BoolT> phi_bb156_14;
  TNode<IntPtrT> phi_bb156_20;
  TNode<Object> tmp366;
  TNode<IntPtrT> tmp367;
  TNode<IntPtrT> tmp368;
  TNode<IntPtrT> tmp369;
  TNode<IntPtrT> tmp370;
  TNode<IntPtrT> tmp371;
  TNode<BoolT> tmp372;
  if (block156.is_used()) {
    ca_.Bind(&block156, &phi_bb156_7, &phi_bb156_9, &phi_bb156_10, &phi_bb156_11, &phi_bb156_13, &phi_bb156_14, &phi_bb156_20);
    std::tie(tmp366, tmp367) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb156_11}).Flatten();
    tmp368 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp369 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb156_11}, TNode<IntPtrT>{tmp368});
    tmp370 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp371 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp369}, TNode<IntPtrT>{tmp370});
    tmp372 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block151, phi_bb156_7, phi_bb156_9, phi_bb156_10, tmp371, tmp369, tmp372, phi_bb156_20, tmp366, tmp367);
  }

  TNode<IntPtrT> phi_bb151_7;
  TNode<IntPtrT> phi_bb151_9;
  TNode<IntPtrT> phi_bb151_10;
  TNode<IntPtrT> phi_bb151_11;
  TNode<IntPtrT> phi_bb151_13;
  TNode<BoolT> phi_bb151_14;
  TNode<IntPtrT> phi_bb151_20;
  TNode<Object> phi_bb151_22;
  TNode<IntPtrT> phi_bb151_23;
  if (block151.is_used()) {
    ca_.Bind(&block151, &phi_bb151_7, &phi_bb151_9, &phi_bb151_10, &phi_bb151_11, &phi_bb151_13, &phi_bb151_14, &phi_bb151_20, &phi_bb151_22, &phi_bb151_23);
    ca_.Goto(&block148, phi_bb151_7, phi_bb151_9, phi_bb151_10, phi_bb151_11, phi_bb151_13, phi_bb151_14, phi_bb151_20, phi_bb151_22, phi_bb151_23);
  }

  TNode<IntPtrT> phi_bb148_7;
  TNode<IntPtrT> phi_bb148_9;
  TNode<IntPtrT> phi_bb148_10;
  TNode<IntPtrT> phi_bb148_11;
  TNode<IntPtrT> phi_bb148_13;
  TNode<BoolT> phi_bb148_14;
  TNode<IntPtrT> phi_bb148_20;
  TNode<Object> phi_bb148_22;
  TNode<IntPtrT> phi_bb148_23;
  TNode<Object> tmp373;
  TNode<IntPtrT> tmp374;
  TNode<Float32T> tmp375;
  TNode<Object> tmp376;
  TNode<IntPtrT> tmp377;
  TNode<IntPtrT> tmp378;
  TNode<UintPtrT> tmp379;
  TNode<UintPtrT> tmp380;
  TNode<BoolT> tmp381;
  if (block148.is_used()) {
    ca_.Bind(&block148, &phi_bb148_7, &phi_bb148_9, &phi_bb148_10, &phi_bb148_11, &phi_bb148_13, &phi_bb148_14, &phi_bb148_20, &phi_bb148_22, &phi_bb148_23);
    std::tie(tmp373, tmp374) = RefCast_float32_0(state_, TorqueStructReference_intptr_0{TNode<Object>{phi_bb148_22}, TNode<IntPtrT>{phi_bb148_23}, TorqueStructUnsafe_0{}}).Flatten();
    tmp375 = CodeStubAssembler(state_).LoadReference<Float32T>(CodeStubAssembler::Reference{tmp373, tmp374});
    std::tie(tmp376, tmp377, tmp378) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp379 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb148_20});
    tmp380 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp378});
    tmp381 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp379}, TNode<UintPtrT>{tmp380});
    ca_.Branch(tmp381, &block161, std::vector<compiler::Node*>{phi_bb148_7, phi_bb148_9, phi_bb148_10, phi_bb148_11, phi_bb148_13, phi_bb148_14, phi_bb148_20, phi_bb148_22, phi_bb148_23, phi_bb148_20, phi_bb148_20, phi_bb148_20, phi_bb148_20}, &block162, std::vector<compiler::Node*>{phi_bb148_7, phi_bb148_9, phi_bb148_10, phi_bb148_11, phi_bb148_13, phi_bb148_14, phi_bb148_20, phi_bb148_22, phi_bb148_23, phi_bb148_20, phi_bb148_20, phi_bb148_20, phi_bb148_20});
  }

  TNode<IntPtrT> phi_bb161_7;
  TNode<IntPtrT> phi_bb161_9;
  TNode<IntPtrT> phi_bb161_10;
  TNode<IntPtrT> phi_bb161_11;
  TNode<IntPtrT> phi_bb161_13;
  TNode<BoolT> phi_bb161_14;
  TNode<IntPtrT> phi_bb161_20;
  TNode<Object> phi_bb161_22;
  TNode<IntPtrT> phi_bb161_23;
  TNode<IntPtrT> phi_bb161_29;
  TNode<IntPtrT> phi_bb161_30;
  TNode<IntPtrT> phi_bb161_34;
  TNode<IntPtrT> phi_bb161_35;
  TNode<IntPtrT> tmp382;
  TNode<IntPtrT> tmp383;
  TNode<Object> tmp384;
  TNode<IntPtrT> tmp385;
  TNode<Number> tmp386;
  if (block161.is_used()) {
    ca_.Bind(&block161, &phi_bb161_7, &phi_bb161_9, &phi_bb161_10, &phi_bb161_11, &phi_bb161_13, &phi_bb161_14, &phi_bb161_20, &phi_bb161_22, &phi_bb161_23, &phi_bb161_29, &phi_bb161_30, &phi_bb161_34, &phi_bb161_35);
    tmp382 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb161_35});
    tmp383 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp377}, TNode<IntPtrT>{tmp382});
    std::tie(tmp384, tmp385) = NewReference_Object_0(state_, TNode<Object>{tmp376}, TNode<IntPtrT>{tmp383}).Flatten();
    tmp386 = Convert_Number_float32_0(state_, TNode<Float32T>{tmp375});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp384, tmp385}, tmp386);
    ca_.Goto(&block147, phi_bb161_7, tmp349, phi_bb161_9, phi_bb161_10, phi_bb161_11, phi_bb161_13, phi_bb161_14, phi_bb161_20);
  }

  TNode<IntPtrT> phi_bb162_7;
  TNode<IntPtrT> phi_bb162_9;
  TNode<IntPtrT> phi_bb162_10;
  TNode<IntPtrT> phi_bb162_11;
  TNode<IntPtrT> phi_bb162_13;
  TNode<BoolT> phi_bb162_14;
  TNode<IntPtrT> phi_bb162_20;
  TNode<Object> phi_bb162_22;
  TNode<IntPtrT> phi_bb162_23;
  TNode<IntPtrT> phi_bb162_29;
  TNode<IntPtrT> phi_bb162_30;
  TNode<IntPtrT> phi_bb162_34;
  TNode<IntPtrT> phi_bb162_35;
  if (block162.is_used()) {
    ca_.Bind(&block162, &phi_bb162_7, &phi_bb162_9, &phi_bb162_10, &phi_bb162_11, &phi_bb162_13, &phi_bb162_14, &phi_bb162_20, &phi_bb162_22, &phi_bb162_23, &phi_bb162_29, &phi_bb162_30, &phi_bb162_34, &phi_bb162_35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb146_7;
  TNode<IntPtrT> phi_bb146_8;
  TNode<IntPtrT> phi_bb146_9;
  TNode<IntPtrT> phi_bb146_10;
  TNode<IntPtrT> phi_bb146_11;
  TNode<IntPtrT> phi_bb146_13;
  TNode<BoolT> phi_bb146_14;
  TNode<IntPtrT> phi_bb146_20;
  TNode<Int32T> tmp387;
  TNode<BoolT> tmp388;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_7, &phi_bb146_8, &phi_bb146_9, &phi_bb146_10, &phi_bb146_11, &phi_bb146_13, &phi_bb146_14, &phi_bb146_20);
    tmp387 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmI64.raw_bit_field());
    tmp388 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp304}, TNode<Int32T>{tmp387});
    ca_.Branch(tmp388, &block165, std::vector<compiler::Node*>{phi_bb146_7, phi_bb146_8, phi_bb146_9, phi_bb146_10, phi_bb146_11, phi_bb146_13, phi_bb146_14, phi_bb146_20}, &block166, std::vector<compiler::Node*>{phi_bb146_7, phi_bb146_8, phi_bb146_9, phi_bb146_10, phi_bb146_11, phi_bb146_13, phi_bb146_14, phi_bb146_20});
  }

  TNode<IntPtrT> phi_bb165_7;
  TNode<IntPtrT> phi_bb165_8;
  TNode<IntPtrT> phi_bb165_9;
  TNode<IntPtrT> phi_bb165_10;
  TNode<IntPtrT> phi_bb165_11;
  TNode<IntPtrT> phi_bb165_13;
  TNode<BoolT> phi_bb165_14;
  TNode<IntPtrT> phi_bb165_20;
  if (block165.is_used()) {
    ca_.Bind(&block165, &phi_bb165_7, &phi_bb165_8, &phi_bb165_9, &phi_bb165_10, &phi_bb165_11, &phi_bb165_13, &phi_bb165_14, &phi_bb165_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block168, phi_bb165_7, phi_bb165_8, phi_bb165_9, phi_bb165_10, phi_bb165_11, phi_bb165_13, phi_bb165_14, phi_bb165_20);
    } else {
      ca_.Goto(&block169, phi_bb165_7, phi_bb165_8, phi_bb165_9, phi_bb165_10, phi_bb165_11, phi_bb165_13, phi_bb165_14, phi_bb165_20);
    }
  }

  TNode<IntPtrT> phi_bb168_7;
  TNode<IntPtrT> phi_bb168_8;
  TNode<IntPtrT> phi_bb168_9;
  TNode<IntPtrT> phi_bb168_10;
  TNode<IntPtrT> phi_bb168_11;
  TNode<IntPtrT> phi_bb168_13;
  TNode<BoolT> phi_bb168_14;
  TNode<IntPtrT> phi_bb168_20;
  TNode<IntPtrT> tmp389;
  TNode<IntPtrT> tmp390;
  TNode<IntPtrT> tmp391;
  TNode<BoolT> tmp392;
  if (block168.is_used()) {
    ca_.Bind(&block168, &phi_bb168_7, &phi_bb168_8, &phi_bb168_9, &phi_bb168_10, &phi_bb168_11, &phi_bb168_13, &phi_bb168_14, &phi_bb168_20);
    tmp389 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp390 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb168_7}, TNode<IntPtrT>{tmp389});
    tmp391 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp392 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb168_7}, TNode<IntPtrT>{tmp391});
    ca_.Branch(tmp392, &block172, std::vector<compiler::Node*>{phi_bb168_8, phi_bb168_9, phi_bb168_10, phi_bb168_11, phi_bb168_13, phi_bb168_14, phi_bb168_20}, &block173, std::vector<compiler::Node*>{phi_bb168_8, phi_bb168_9, phi_bb168_10, phi_bb168_11, phi_bb168_13, phi_bb168_14, phi_bb168_20});
  }

  TNode<IntPtrT> phi_bb172_8;
  TNode<IntPtrT> phi_bb172_9;
  TNode<IntPtrT> phi_bb172_10;
  TNode<IntPtrT> phi_bb172_11;
  TNode<IntPtrT> phi_bb172_13;
  TNode<BoolT> phi_bb172_14;
  TNode<IntPtrT> phi_bb172_20;
  TNode<Object> tmp393;
  TNode<IntPtrT> tmp394;
  TNode<IntPtrT> tmp395;
  TNode<IntPtrT> tmp396;
  if (block172.is_used()) {
    ca_.Bind(&block172, &phi_bb172_8, &phi_bb172_9, &phi_bb172_10, &phi_bb172_11, &phi_bb172_13, &phi_bb172_14, &phi_bb172_20);
    std::tie(tmp393, tmp394) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb172_9}).Flatten();
    tmp395 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp396 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb172_9}, TNode<IntPtrT>{tmp395});
    ca_.Goto(&block171, phi_bb172_8, tmp396, phi_bb172_10, phi_bb172_11, phi_bb172_13, phi_bb172_14, phi_bb172_20, tmp393, tmp394);
  }

  TNode<IntPtrT> phi_bb173_8;
  TNode<IntPtrT> phi_bb173_9;
  TNode<IntPtrT> phi_bb173_10;
  TNode<IntPtrT> phi_bb173_11;
  TNode<IntPtrT> phi_bb173_13;
  TNode<BoolT> phi_bb173_14;
  TNode<IntPtrT> phi_bb173_20;
  if (block173.is_used()) {
    ca_.Bind(&block173, &phi_bb173_8, &phi_bb173_9, &phi_bb173_10, &phi_bb173_11, &phi_bb173_13, &phi_bb173_14, &phi_bb173_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block175, phi_bb173_8, phi_bb173_9, phi_bb173_10, phi_bb173_11, phi_bb173_13, phi_bb173_14, phi_bb173_20);
    } else {
      ca_.Goto(&block176, phi_bb173_8, phi_bb173_9, phi_bb173_10, phi_bb173_11, phi_bb173_13, phi_bb173_14, phi_bb173_20);
    }
  }

  TNode<IntPtrT> phi_bb175_8;
  TNode<IntPtrT> phi_bb175_9;
  TNode<IntPtrT> phi_bb175_10;
  TNode<IntPtrT> phi_bb175_11;
  TNode<IntPtrT> phi_bb175_13;
  TNode<BoolT> phi_bb175_14;
  TNode<IntPtrT> phi_bb175_20;
  TNode<Object> tmp397;
  TNode<IntPtrT> tmp398;
  TNode<IntPtrT> tmp399;
  TNode<IntPtrT> tmp400;
  if (block175.is_used()) {
    ca_.Bind(&block175, &phi_bb175_8, &phi_bb175_9, &phi_bb175_10, &phi_bb175_11, &phi_bb175_13, &phi_bb175_14, &phi_bb175_20);
    std::tie(tmp397, tmp398) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb175_11}).Flatten();
    tmp399 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp400 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb175_11}, TNode<IntPtrT>{tmp399});
    ca_.Goto(&block174, phi_bb175_8, phi_bb175_9, phi_bb175_10, tmp400, phi_bb175_13, phi_bb175_14, phi_bb175_20, tmp397, tmp398);
  }

  TNode<IntPtrT> phi_bb176_8;
  TNode<IntPtrT> phi_bb176_9;
  TNode<IntPtrT> phi_bb176_10;
  TNode<IntPtrT> phi_bb176_11;
  TNode<IntPtrT> phi_bb176_13;
  TNode<BoolT> phi_bb176_14;
  TNode<IntPtrT> phi_bb176_20;
  TNode<IntPtrT> tmp401;
  TNode<BoolT> tmp402;
  if (block176.is_used()) {
    ca_.Bind(&block176, &phi_bb176_8, &phi_bb176_9, &phi_bb176_10, &phi_bb176_11, &phi_bb176_13, &phi_bb176_14, &phi_bb176_20);
    tmp401 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp402 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb176_13}, TNode<IntPtrT>{tmp401});
    ca_.Branch(tmp402, &block178, std::vector<compiler::Node*>{phi_bb176_8, phi_bb176_9, phi_bb176_10, phi_bb176_11, phi_bb176_13, phi_bb176_14, phi_bb176_20}, &block179, std::vector<compiler::Node*>{phi_bb176_8, phi_bb176_9, phi_bb176_10, phi_bb176_11, phi_bb176_13, phi_bb176_14, phi_bb176_20});
  }

  TNode<IntPtrT> phi_bb178_8;
  TNode<IntPtrT> phi_bb178_9;
  TNode<IntPtrT> phi_bb178_10;
  TNode<IntPtrT> phi_bb178_11;
  TNode<IntPtrT> phi_bb178_13;
  TNode<BoolT> phi_bb178_14;
  TNode<IntPtrT> phi_bb178_20;
  TNode<Object> tmp403;
  TNode<IntPtrT> tmp404;
  TNode<IntPtrT> tmp405;
  TNode<BoolT> tmp406;
  if (block178.is_used()) {
    ca_.Bind(&block178, &phi_bb178_8, &phi_bb178_9, &phi_bb178_10, &phi_bb178_11, &phi_bb178_13, &phi_bb178_14, &phi_bb178_20);
    std::tie(tmp403, tmp404) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb178_13}).Flatten();
    tmp405 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp406 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block174, phi_bb178_8, phi_bb178_9, phi_bb178_10, phi_bb178_11, tmp405, tmp406, phi_bb178_20, tmp403, tmp404);
  }

  TNode<IntPtrT> phi_bb179_8;
  TNode<IntPtrT> phi_bb179_9;
  TNode<IntPtrT> phi_bb179_10;
  TNode<IntPtrT> phi_bb179_11;
  TNode<IntPtrT> phi_bb179_13;
  TNode<BoolT> phi_bb179_14;
  TNode<IntPtrT> phi_bb179_20;
  TNode<Object> tmp407;
  TNode<IntPtrT> tmp408;
  TNode<IntPtrT> tmp409;
  TNode<IntPtrT> tmp410;
  TNode<IntPtrT> tmp411;
  TNode<IntPtrT> tmp412;
  TNode<BoolT> tmp413;
  if (block179.is_used()) {
    ca_.Bind(&block179, &phi_bb179_8, &phi_bb179_9, &phi_bb179_10, &phi_bb179_11, &phi_bb179_13, &phi_bb179_14, &phi_bb179_20);
    std::tie(tmp407, tmp408) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb179_11}).Flatten();
    tmp409 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp410 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb179_11}, TNode<IntPtrT>{tmp409});
    tmp411 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp412 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp410}, TNode<IntPtrT>{tmp411});
    tmp413 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block174, phi_bb179_8, phi_bb179_9, phi_bb179_10, tmp412, tmp410, tmp413, phi_bb179_20, tmp407, tmp408);
  }

  TNode<IntPtrT> phi_bb174_8;
  TNode<IntPtrT> phi_bb174_9;
  TNode<IntPtrT> phi_bb174_10;
  TNode<IntPtrT> phi_bb174_11;
  TNode<IntPtrT> phi_bb174_13;
  TNode<BoolT> phi_bb174_14;
  TNode<IntPtrT> phi_bb174_20;
  TNode<Object> phi_bb174_22;
  TNode<IntPtrT> phi_bb174_23;
  if (block174.is_used()) {
    ca_.Bind(&block174, &phi_bb174_8, &phi_bb174_9, &phi_bb174_10, &phi_bb174_11, &phi_bb174_13, &phi_bb174_14, &phi_bb174_20, &phi_bb174_22, &phi_bb174_23);
    ca_.Goto(&block171, phi_bb174_8, phi_bb174_9, phi_bb174_10, phi_bb174_11, phi_bb174_13, phi_bb174_14, phi_bb174_20, phi_bb174_22, phi_bb174_23);
  }

  TNode<IntPtrT> phi_bb171_8;
  TNode<IntPtrT> phi_bb171_9;
  TNode<IntPtrT> phi_bb171_10;
  TNode<IntPtrT> phi_bb171_11;
  TNode<IntPtrT> phi_bb171_13;
  TNode<BoolT> phi_bb171_14;
  TNode<IntPtrT> phi_bb171_20;
  TNode<Object> phi_bb171_22;
  TNode<IntPtrT> phi_bb171_23;
  TNode<IntPtrT> tmp414;
  TNode<Object> tmp415;
  TNode<IntPtrT> tmp416;
  TNode<IntPtrT> tmp417;
  TNode<UintPtrT> tmp418;
  TNode<UintPtrT> tmp419;
  TNode<BoolT> tmp420;
  if (block171.is_used()) {
    ca_.Bind(&block171, &phi_bb171_8, &phi_bb171_9, &phi_bb171_10, &phi_bb171_11, &phi_bb171_13, &phi_bb171_14, &phi_bb171_20, &phi_bb171_22, &phi_bb171_23);
    tmp414 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb171_22, phi_bb171_23});
    std::tie(tmp415, tmp416, tmp417) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp418 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb171_20});
    tmp419 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp417});
    tmp420 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp418}, TNode<UintPtrT>{tmp419});
    ca_.Branch(tmp420, &block184, std::vector<compiler::Node*>{phi_bb171_8, phi_bb171_9, phi_bb171_10, phi_bb171_11, phi_bb171_13, phi_bb171_14, phi_bb171_20, phi_bb171_22, phi_bb171_23, phi_bb171_20, phi_bb171_20, phi_bb171_20, phi_bb171_20}, &block185, std::vector<compiler::Node*>{phi_bb171_8, phi_bb171_9, phi_bb171_10, phi_bb171_11, phi_bb171_13, phi_bb171_14, phi_bb171_20, phi_bb171_22, phi_bb171_23, phi_bb171_20, phi_bb171_20, phi_bb171_20, phi_bb171_20});
  }

  TNode<IntPtrT> phi_bb184_8;
  TNode<IntPtrT> phi_bb184_9;
  TNode<IntPtrT> phi_bb184_10;
  TNode<IntPtrT> phi_bb184_11;
  TNode<IntPtrT> phi_bb184_13;
  TNode<BoolT> phi_bb184_14;
  TNode<IntPtrT> phi_bb184_20;
  TNode<Object> phi_bb184_22;
  TNode<IntPtrT> phi_bb184_23;
  TNode<IntPtrT> phi_bb184_29;
  TNode<IntPtrT> phi_bb184_30;
  TNode<IntPtrT> phi_bb184_34;
  TNode<IntPtrT> phi_bb184_35;
  TNode<IntPtrT> tmp421;
  TNode<IntPtrT> tmp422;
  TNode<Object> tmp423;
  TNode<IntPtrT> tmp424;
  TNode<BigInt> tmp425;
  if (block184.is_used()) {
    ca_.Bind(&block184, &phi_bb184_8, &phi_bb184_9, &phi_bb184_10, &phi_bb184_11, &phi_bb184_13, &phi_bb184_14, &phi_bb184_20, &phi_bb184_22, &phi_bb184_23, &phi_bb184_29, &phi_bb184_30, &phi_bb184_34, &phi_bb184_35);
    tmp421 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb184_35});
    tmp422 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp416}, TNode<IntPtrT>{tmp421});
    std::tie(tmp423, tmp424) = NewReference_Object_0(state_, TNode<Object>{tmp415}, TNode<IntPtrT>{tmp422}).Flatten();
    tmp425 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI64ToBigInt), TNode<Object>(), tmp414);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp423, tmp424}, tmp425);
    ca_.Goto(&block170, tmp390, phi_bb184_8, phi_bb184_9, phi_bb184_10, phi_bb184_11, phi_bb184_13, phi_bb184_14, phi_bb184_20);
  }

  TNode<IntPtrT> phi_bb185_8;
  TNode<IntPtrT> phi_bb185_9;
  TNode<IntPtrT> phi_bb185_10;
  TNode<IntPtrT> phi_bb185_11;
  TNode<IntPtrT> phi_bb185_13;
  TNode<BoolT> phi_bb185_14;
  TNode<IntPtrT> phi_bb185_20;
  TNode<Object> phi_bb185_22;
  TNode<IntPtrT> phi_bb185_23;
  TNode<IntPtrT> phi_bb185_29;
  TNode<IntPtrT> phi_bb185_30;
  TNode<IntPtrT> phi_bb185_34;
  TNode<IntPtrT> phi_bb185_35;
  if (block185.is_used()) {
    ca_.Bind(&block185, &phi_bb185_8, &phi_bb185_9, &phi_bb185_10, &phi_bb185_11, &phi_bb185_13, &phi_bb185_14, &phi_bb185_20, &phi_bb185_22, &phi_bb185_23, &phi_bb185_29, &phi_bb185_30, &phi_bb185_34, &phi_bb185_35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb169_7;
  TNode<IntPtrT> phi_bb169_8;
  TNode<IntPtrT> phi_bb169_9;
  TNode<IntPtrT> phi_bb169_10;
  TNode<IntPtrT> phi_bb169_11;
  TNode<IntPtrT> phi_bb169_13;
  TNode<BoolT> phi_bb169_14;
  TNode<IntPtrT> phi_bb169_20;
  TNode<IntPtrT> tmp426;
  TNode<IntPtrT> tmp427;
  TNode<IntPtrT> tmp428;
  TNode<BoolT> tmp429;
  if (block169.is_used()) {
    ca_.Bind(&block169, &phi_bb169_7, &phi_bb169_8, &phi_bb169_9, &phi_bb169_10, &phi_bb169_11, &phi_bb169_13, &phi_bb169_14, &phi_bb169_20);
    tmp426 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp427 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb169_7}, TNode<IntPtrT>{tmp426});
    tmp428 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp429 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb169_7}, TNode<IntPtrT>{tmp428});
    ca_.Branch(tmp429, &block189, std::vector<compiler::Node*>{phi_bb169_8, phi_bb169_9, phi_bb169_10, phi_bb169_11, phi_bb169_13, phi_bb169_14, phi_bb169_20}, &block190, std::vector<compiler::Node*>{phi_bb169_8, phi_bb169_9, phi_bb169_10, phi_bb169_11, phi_bb169_13, phi_bb169_14, phi_bb169_20});
  }

  TNode<IntPtrT> phi_bb189_8;
  TNode<IntPtrT> phi_bb189_9;
  TNode<IntPtrT> phi_bb189_10;
  TNode<IntPtrT> phi_bb189_11;
  TNode<IntPtrT> phi_bb189_13;
  TNode<BoolT> phi_bb189_14;
  TNode<IntPtrT> phi_bb189_20;
  TNode<Object> tmp430;
  TNode<IntPtrT> tmp431;
  TNode<IntPtrT> tmp432;
  TNode<IntPtrT> tmp433;
  if (block189.is_used()) {
    ca_.Bind(&block189, &phi_bb189_8, &phi_bb189_9, &phi_bb189_10, &phi_bb189_11, &phi_bb189_13, &phi_bb189_14, &phi_bb189_20);
    std::tie(tmp430, tmp431) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb189_9}).Flatten();
    tmp432 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp433 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb189_9}, TNode<IntPtrT>{tmp432});
    ca_.Goto(&block188, phi_bb189_8, tmp433, phi_bb189_10, phi_bb189_11, phi_bb189_13, phi_bb189_14, phi_bb189_20, tmp430, tmp431);
  }

  TNode<IntPtrT> phi_bb190_8;
  TNode<IntPtrT> phi_bb190_9;
  TNode<IntPtrT> phi_bb190_10;
  TNode<IntPtrT> phi_bb190_11;
  TNode<IntPtrT> phi_bb190_13;
  TNode<BoolT> phi_bb190_14;
  TNode<IntPtrT> phi_bb190_20;
  if (block190.is_used()) {
    ca_.Bind(&block190, &phi_bb190_8, &phi_bb190_9, &phi_bb190_10, &phi_bb190_11, &phi_bb190_13, &phi_bb190_14, &phi_bb190_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block192, phi_bb190_8, phi_bb190_9, phi_bb190_10, phi_bb190_11, phi_bb190_13, phi_bb190_14, phi_bb190_20);
    } else {
      ca_.Goto(&block193, phi_bb190_8, phi_bb190_9, phi_bb190_10, phi_bb190_11, phi_bb190_13, phi_bb190_14, phi_bb190_20);
    }
  }

  TNode<IntPtrT> phi_bb192_8;
  TNode<IntPtrT> phi_bb192_9;
  TNode<IntPtrT> phi_bb192_10;
  TNode<IntPtrT> phi_bb192_11;
  TNode<IntPtrT> phi_bb192_13;
  TNode<BoolT> phi_bb192_14;
  TNode<IntPtrT> phi_bb192_20;
  TNode<Object> tmp434;
  TNode<IntPtrT> tmp435;
  TNode<IntPtrT> tmp436;
  TNode<IntPtrT> tmp437;
  if (block192.is_used()) {
    ca_.Bind(&block192, &phi_bb192_8, &phi_bb192_9, &phi_bb192_10, &phi_bb192_11, &phi_bb192_13, &phi_bb192_14, &phi_bb192_20);
    std::tie(tmp434, tmp435) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb192_11}).Flatten();
    tmp436 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp437 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb192_11}, TNode<IntPtrT>{tmp436});
    ca_.Goto(&block191, phi_bb192_8, phi_bb192_9, phi_bb192_10, tmp437, phi_bb192_13, phi_bb192_14, phi_bb192_20, tmp434, tmp435);
  }

  TNode<IntPtrT> phi_bb193_8;
  TNode<IntPtrT> phi_bb193_9;
  TNode<IntPtrT> phi_bb193_10;
  TNode<IntPtrT> phi_bb193_11;
  TNode<IntPtrT> phi_bb193_13;
  TNode<BoolT> phi_bb193_14;
  TNode<IntPtrT> phi_bb193_20;
  TNode<IntPtrT> tmp438;
  TNode<BoolT> tmp439;
  if (block193.is_used()) {
    ca_.Bind(&block193, &phi_bb193_8, &phi_bb193_9, &phi_bb193_10, &phi_bb193_11, &phi_bb193_13, &phi_bb193_14, &phi_bb193_20);
    tmp438 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp439 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb193_13}, TNode<IntPtrT>{tmp438});
    ca_.Branch(tmp439, &block195, std::vector<compiler::Node*>{phi_bb193_8, phi_bb193_9, phi_bb193_10, phi_bb193_11, phi_bb193_13, phi_bb193_14, phi_bb193_20}, &block196, std::vector<compiler::Node*>{phi_bb193_8, phi_bb193_9, phi_bb193_10, phi_bb193_11, phi_bb193_13, phi_bb193_14, phi_bb193_20});
  }

  TNode<IntPtrT> phi_bb195_8;
  TNode<IntPtrT> phi_bb195_9;
  TNode<IntPtrT> phi_bb195_10;
  TNode<IntPtrT> phi_bb195_11;
  TNode<IntPtrT> phi_bb195_13;
  TNode<BoolT> phi_bb195_14;
  TNode<IntPtrT> phi_bb195_20;
  TNode<Object> tmp440;
  TNode<IntPtrT> tmp441;
  TNode<IntPtrT> tmp442;
  TNode<BoolT> tmp443;
  if (block195.is_used()) {
    ca_.Bind(&block195, &phi_bb195_8, &phi_bb195_9, &phi_bb195_10, &phi_bb195_11, &phi_bb195_13, &phi_bb195_14, &phi_bb195_20);
    std::tie(tmp440, tmp441) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb195_13}).Flatten();
    tmp442 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp443 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block191, phi_bb195_8, phi_bb195_9, phi_bb195_10, phi_bb195_11, tmp442, tmp443, phi_bb195_20, tmp440, tmp441);
  }

  TNode<IntPtrT> phi_bb196_8;
  TNode<IntPtrT> phi_bb196_9;
  TNode<IntPtrT> phi_bb196_10;
  TNode<IntPtrT> phi_bb196_11;
  TNode<IntPtrT> phi_bb196_13;
  TNode<BoolT> phi_bb196_14;
  TNode<IntPtrT> phi_bb196_20;
  TNode<Object> tmp444;
  TNode<IntPtrT> tmp445;
  TNode<IntPtrT> tmp446;
  TNode<IntPtrT> tmp447;
  TNode<IntPtrT> tmp448;
  TNode<IntPtrT> tmp449;
  TNode<BoolT> tmp450;
  if (block196.is_used()) {
    ca_.Bind(&block196, &phi_bb196_8, &phi_bb196_9, &phi_bb196_10, &phi_bb196_11, &phi_bb196_13, &phi_bb196_14, &phi_bb196_20);
    std::tie(tmp444, tmp445) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb196_11}).Flatten();
    tmp446 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp447 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb196_11}, TNode<IntPtrT>{tmp446});
    tmp448 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp449 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp447}, TNode<IntPtrT>{tmp448});
    tmp450 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block191, phi_bb196_8, phi_bb196_9, phi_bb196_10, tmp449, tmp447, tmp450, phi_bb196_20, tmp444, tmp445);
  }

  TNode<IntPtrT> phi_bb191_8;
  TNode<IntPtrT> phi_bb191_9;
  TNode<IntPtrT> phi_bb191_10;
  TNode<IntPtrT> phi_bb191_11;
  TNode<IntPtrT> phi_bb191_13;
  TNode<BoolT> phi_bb191_14;
  TNode<IntPtrT> phi_bb191_20;
  TNode<Object> phi_bb191_22;
  TNode<IntPtrT> phi_bb191_23;
  if (block191.is_used()) {
    ca_.Bind(&block191, &phi_bb191_8, &phi_bb191_9, &phi_bb191_10, &phi_bb191_11, &phi_bb191_13, &phi_bb191_14, &phi_bb191_20, &phi_bb191_22, &phi_bb191_23);
    ca_.Goto(&block188, phi_bb191_8, phi_bb191_9, phi_bb191_10, phi_bb191_11, phi_bb191_13, phi_bb191_14, phi_bb191_20, phi_bb191_22, phi_bb191_23);
  }

  TNode<IntPtrT> phi_bb188_8;
  TNode<IntPtrT> phi_bb188_9;
  TNode<IntPtrT> phi_bb188_10;
  TNode<IntPtrT> phi_bb188_11;
  TNode<IntPtrT> phi_bb188_13;
  TNode<BoolT> phi_bb188_14;
  TNode<IntPtrT> phi_bb188_20;
  TNode<Object> phi_bb188_22;
  TNode<IntPtrT> phi_bb188_23;
  TNode<IntPtrT> tmp451;
  TNode<IntPtrT> tmp452;
  TNode<IntPtrT> tmp453;
  TNode<BoolT> tmp454;
  if (block188.is_used()) {
    ca_.Bind(&block188, &phi_bb188_8, &phi_bb188_9, &phi_bb188_10, &phi_bb188_11, &phi_bb188_13, &phi_bb188_14, &phi_bb188_20, &phi_bb188_22, &phi_bb188_23);
    tmp451 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp452 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp427}, TNode<IntPtrT>{tmp451});
    tmp453 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp454 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp427}, TNode<IntPtrT>{tmp453});
    ca_.Branch(tmp454, &block198, std::vector<compiler::Node*>{phi_bb188_8, phi_bb188_9, phi_bb188_10, phi_bb188_11, phi_bb188_13, phi_bb188_14, phi_bb188_20, phi_bb188_22, phi_bb188_23}, &block199, std::vector<compiler::Node*>{phi_bb188_8, phi_bb188_9, phi_bb188_10, phi_bb188_11, phi_bb188_13, phi_bb188_14, phi_bb188_20, phi_bb188_22, phi_bb188_23});
  }

  TNode<IntPtrT> phi_bb198_8;
  TNode<IntPtrT> phi_bb198_9;
  TNode<IntPtrT> phi_bb198_10;
  TNode<IntPtrT> phi_bb198_11;
  TNode<IntPtrT> phi_bb198_13;
  TNode<BoolT> phi_bb198_14;
  TNode<IntPtrT> phi_bb198_20;
  TNode<Object> phi_bb198_22;
  TNode<IntPtrT> phi_bb198_23;
  TNode<Object> tmp455;
  TNode<IntPtrT> tmp456;
  TNode<IntPtrT> tmp457;
  TNode<IntPtrT> tmp458;
  if (block198.is_used()) {
    ca_.Bind(&block198, &phi_bb198_8, &phi_bb198_9, &phi_bb198_10, &phi_bb198_11, &phi_bb198_13, &phi_bb198_14, &phi_bb198_20, &phi_bb198_22, &phi_bb198_23);
    std::tie(tmp455, tmp456) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb198_9}).Flatten();
    tmp457 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp458 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb198_9}, TNode<IntPtrT>{tmp457});
    ca_.Goto(&block197, phi_bb198_8, tmp458, phi_bb198_10, phi_bb198_11, phi_bb198_13, phi_bb198_14, phi_bb198_20, phi_bb198_22, phi_bb198_23, tmp455, tmp456);
  }

  TNode<IntPtrT> phi_bb199_8;
  TNode<IntPtrT> phi_bb199_9;
  TNode<IntPtrT> phi_bb199_10;
  TNode<IntPtrT> phi_bb199_11;
  TNode<IntPtrT> phi_bb199_13;
  TNode<BoolT> phi_bb199_14;
  TNode<IntPtrT> phi_bb199_20;
  TNode<Object> phi_bb199_22;
  TNode<IntPtrT> phi_bb199_23;
  if (block199.is_used()) {
    ca_.Bind(&block199, &phi_bb199_8, &phi_bb199_9, &phi_bb199_10, &phi_bb199_11, &phi_bb199_13, &phi_bb199_14, &phi_bb199_20, &phi_bb199_22, &phi_bb199_23);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block201, phi_bb199_8, phi_bb199_9, phi_bb199_10, phi_bb199_11, phi_bb199_13, phi_bb199_14, phi_bb199_20, phi_bb199_22, phi_bb199_23);
    } else {
      ca_.Goto(&block202, phi_bb199_8, phi_bb199_9, phi_bb199_10, phi_bb199_11, phi_bb199_13, phi_bb199_14, phi_bb199_20, phi_bb199_22, phi_bb199_23);
    }
  }

  TNode<IntPtrT> phi_bb201_8;
  TNode<IntPtrT> phi_bb201_9;
  TNode<IntPtrT> phi_bb201_10;
  TNode<IntPtrT> phi_bb201_11;
  TNode<IntPtrT> phi_bb201_13;
  TNode<BoolT> phi_bb201_14;
  TNode<IntPtrT> phi_bb201_20;
  TNode<Object> phi_bb201_22;
  TNode<IntPtrT> phi_bb201_23;
  TNode<Object> tmp459;
  TNode<IntPtrT> tmp460;
  TNode<IntPtrT> tmp461;
  TNode<IntPtrT> tmp462;
  if (block201.is_used()) {
    ca_.Bind(&block201, &phi_bb201_8, &phi_bb201_9, &phi_bb201_10, &phi_bb201_11, &phi_bb201_13, &phi_bb201_14, &phi_bb201_20, &phi_bb201_22, &phi_bb201_23);
    std::tie(tmp459, tmp460) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb201_11}).Flatten();
    tmp461 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp462 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb201_11}, TNode<IntPtrT>{tmp461});
    ca_.Goto(&block200, phi_bb201_8, phi_bb201_9, phi_bb201_10, tmp462, phi_bb201_13, phi_bb201_14, phi_bb201_20, phi_bb201_22, phi_bb201_23, tmp459, tmp460);
  }

  TNode<IntPtrT> phi_bb202_8;
  TNode<IntPtrT> phi_bb202_9;
  TNode<IntPtrT> phi_bb202_10;
  TNode<IntPtrT> phi_bb202_11;
  TNode<IntPtrT> phi_bb202_13;
  TNode<BoolT> phi_bb202_14;
  TNode<IntPtrT> phi_bb202_20;
  TNode<Object> phi_bb202_22;
  TNode<IntPtrT> phi_bb202_23;
  TNode<IntPtrT> tmp463;
  TNode<BoolT> tmp464;
  if (block202.is_used()) {
    ca_.Bind(&block202, &phi_bb202_8, &phi_bb202_9, &phi_bb202_10, &phi_bb202_11, &phi_bb202_13, &phi_bb202_14, &phi_bb202_20, &phi_bb202_22, &phi_bb202_23);
    tmp463 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp464 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb202_13}, TNode<IntPtrT>{tmp463});
    ca_.Branch(tmp464, &block204, std::vector<compiler::Node*>{phi_bb202_8, phi_bb202_9, phi_bb202_10, phi_bb202_11, phi_bb202_13, phi_bb202_14, phi_bb202_20, phi_bb202_22, phi_bb202_23}, &block205, std::vector<compiler::Node*>{phi_bb202_8, phi_bb202_9, phi_bb202_10, phi_bb202_11, phi_bb202_13, phi_bb202_14, phi_bb202_20, phi_bb202_22, phi_bb202_23});
  }

  TNode<IntPtrT> phi_bb204_8;
  TNode<IntPtrT> phi_bb204_9;
  TNode<IntPtrT> phi_bb204_10;
  TNode<IntPtrT> phi_bb204_11;
  TNode<IntPtrT> phi_bb204_13;
  TNode<BoolT> phi_bb204_14;
  TNode<IntPtrT> phi_bb204_20;
  TNode<Object> phi_bb204_22;
  TNode<IntPtrT> phi_bb204_23;
  TNode<Object> tmp465;
  TNode<IntPtrT> tmp466;
  TNode<IntPtrT> tmp467;
  TNode<BoolT> tmp468;
  if (block204.is_used()) {
    ca_.Bind(&block204, &phi_bb204_8, &phi_bb204_9, &phi_bb204_10, &phi_bb204_11, &phi_bb204_13, &phi_bb204_14, &phi_bb204_20, &phi_bb204_22, &phi_bb204_23);
    std::tie(tmp465, tmp466) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb204_13}).Flatten();
    tmp467 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp468 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block200, phi_bb204_8, phi_bb204_9, phi_bb204_10, phi_bb204_11, tmp467, tmp468, phi_bb204_20, phi_bb204_22, phi_bb204_23, tmp465, tmp466);
  }

  TNode<IntPtrT> phi_bb205_8;
  TNode<IntPtrT> phi_bb205_9;
  TNode<IntPtrT> phi_bb205_10;
  TNode<IntPtrT> phi_bb205_11;
  TNode<IntPtrT> phi_bb205_13;
  TNode<BoolT> phi_bb205_14;
  TNode<IntPtrT> phi_bb205_20;
  TNode<Object> phi_bb205_22;
  TNode<IntPtrT> phi_bb205_23;
  TNode<Object> tmp469;
  TNode<IntPtrT> tmp470;
  TNode<IntPtrT> tmp471;
  TNode<IntPtrT> tmp472;
  TNode<IntPtrT> tmp473;
  TNode<IntPtrT> tmp474;
  TNode<BoolT> tmp475;
  if (block205.is_used()) {
    ca_.Bind(&block205, &phi_bb205_8, &phi_bb205_9, &phi_bb205_10, &phi_bb205_11, &phi_bb205_13, &phi_bb205_14, &phi_bb205_20, &phi_bb205_22, &phi_bb205_23);
    std::tie(tmp469, tmp470) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb205_11}).Flatten();
    tmp471 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp472 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb205_11}, TNode<IntPtrT>{tmp471});
    tmp473 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp474 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp472}, TNode<IntPtrT>{tmp473});
    tmp475 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block200, phi_bb205_8, phi_bb205_9, phi_bb205_10, tmp474, tmp472, tmp475, phi_bb205_20, phi_bb205_22, phi_bb205_23, tmp469, tmp470);
  }

  TNode<IntPtrT> phi_bb200_8;
  TNode<IntPtrT> phi_bb200_9;
  TNode<IntPtrT> phi_bb200_10;
  TNode<IntPtrT> phi_bb200_11;
  TNode<IntPtrT> phi_bb200_13;
  TNode<BoolT> phi_bb200_14;
  TNode<IntPtrT> phi_bb200_20;
  TNode<Object> phi_bb200_22;
  TNode<IntPtrT> phi_bb200_23;
  TNode<Object> phi_bb200_24;
  TNode<IntPtrT> phi_bb200_25;
  if (block200.is_used()) {
    ca_.Bind(&block200, &phi_bb200_8, &phi_bb200_9, &phi_bb200_10, &phi_bb200_11, &phi_bb200_13, &phi_bb200_14, &phi_bb200_20, &phi_bb200_22, &phi_bb200_23, &phi_bb200_24, &phi_bb200_25);
    ca_.Goto(&block197, phi_bb200_8, phi_bb200_9, phi_bb200_10, phi_bb200_11, phi_bb200_13, phi_bb200_14, phi_bb200_20, phi_bb200_22, phi_bb200_23, phi_bb200_24, phi_bb200_25);
  }

  TNode<IntPtrT> phi_bb197_8;
  TNode<IntPtrT> phi_bb197_9;
  TNode<IntPtrT> phi_bb197_10;
  TNode<IntPtrT> phi_bb197_11;
  TNode<IntPtrT> phi_bb197_13;
  TNode<BoolT> phi_bb197_14;
  TNode<IntPtrT> phi_bb197_20;
  TNode<Object> phi_bb197_22;
  TNode<IntPtrT> phi_bb197_23;
  TNode<Object> phi_bb197_24;
  TNode<IntPtrT> phi_bb197_25;
  TNode<IntPtrT> tmp476;
  TNode<IntPtrT> tmp477;
  TNode<Object> tmp478;
  TNode<IntPtrT> tmp479;
  TNode<IntPtrT> tmp480;
  TNode<UintPtrT> tmp481;
  TNode<UintPtrT> tmp482;
  TNode<BoolT> tmp483;
  if (block197.is_used()) {
    ca_.Bind(&block197, &phi_bb197_8, &phi_bb197_9, &phi_bb197_10, &phi_bb197_11, &phi_bb197_13, &phi_bb197_14, &phi_bb197_20, &phi_bb197_22, &phi_bb197_23, &phi_bb197_24, &phi_bb197_25);
    tmp476 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb197_22, phi_bb197_23});
    tmp477 = CodeStubAssembler(state_).LoadReference<IntPtrT>(CodeStubAssembler::Reference{phi_bb197_24, phi_bb197_25});
    std::tie(tmp478, tmp479, tmp480) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp481 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb197_20});
    tmp482 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp480});
    tmp483 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp481}, TNode<UintPtrT>{tmp482});
    ca_.Branch(tmp483, &block210, std::vector<compiler::Node*>{phi_bb197_8, phi_bb197_9, phi_bb197_10, phi_bb197_11, phi_bb197_13, phi_bb197_14, phi_bb197_20, phi_bb197_22, phi_bb197_23, phi_bb197_24, phi_bb197_25, phi_bb197_20, phi_bb197_20, phi_bb197_20, phi_bb197_20}, &block211, std::vector<compiler::Node*>{phi_bb197_8, phi_bb197_9, phi_bb197_10, phi_bb197_11, phi_bb197_13, phi_bb197_14, phi_bb197_20, phi_bb197_22, phi_bb197_23, phi_bb197_24, phi_bb197_25, phi_bb197_20, phi_bb197_20, phi_bb197_20, phi_bb197_20});
  }

  TNode<IntPtrT> phi_bb210_8;
  TNode<IntPtrT> phi_bb210_9;
  TNode<IntPtrT> phi_bb210_10;
  TNode<IntPtrT> phi_bb210_11;
  TNode<IntPtrT> phi_bb210_13;
  TNode<BoolT> phi_bb210_14;
  TNode<IntPtrT> phi_bb210_20;
  TNode<Object> phi_bb210_22;
  TNode<IntPtrT> phi_bb210_23;
  TNode<Object> phi_bb210_24;
  TNode<IntPtrT> phi_bb210_25;
  TNode<IntPtrT> phi_bb210_32;
  TNode<IntPtrT> phi_bb210_33;
  TNode<IntPtrT> phi_bb210_37;
  TNode<IntPtrT> phi_bb210_38;
  TNode<IntPtrT> tmp484;
  TNode<IntPtrT> tmp485;
  TNode<Object> tmp486;
  TNode<IntPtrT> tmp487;
  TNode<BigInt> tmp488;
  if (block210.is_used()) {
    ca_.Bind(&block210, &phi_bb210_8, &phi_bb210_9, &phi_bb210_10, &phi_bb210_11, &phi_bb210_13, &phi_bb210_14, &phi_bb210_20, &phi_bb210_22, &phi_bb210_23, &phi_bb210_24, &phi_bb210_25, &phi_bb210_32, &phi_bb210_33, &phi_bb210_37, &phi_bb210_38);
    tmp484 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb210_38});
    tmp485 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp479}, TNode<IntPtrT>{tmp484});
    std::tie(tmp486, tmp487) = NewReference_Object_0(state_, TNode<Object>{tmp478}, TNode<IntPtrT>{tmp485}).Flatten();
    tmp488 = ca_.CallStub<BigInt>(Builtins::CallableFor(ca_.isolate(), Builtin::kI32PairToBigInt), TNode<Object>(), tmp476, tmp477);
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp486, tmp487}, tmp488);
    ca_.Goto(&block170, tmp452, phi_bb210_8, phi_bb210_9, phi_bb210_10, phi_bb210_11, phi_bb210_13, phi_bb210_14, phi_bb210_20);
  }

  TNode<IntPtrT> phi_bb211_8;
  TNode<IntPtrT> phi_bb211_9;
  TNode<IntPtrT> phi_bb211_10;
  TNode<IntPtrT> phi_bb211_11;
  TNode<IntPtrT> phi_bb211_13;
  TNode<BoolT> phi_bb211_14;
  TNode<IntPtrT> phi_bb211_20;
  TNode<Object> phi_bb211_22;
  TNode<IntPtrT> phi_bb211_23;
  TNode<Object> phi_bb211_24;
  TNode<IntPtrT> phi_bb211_25;
  TNode<IntPtrT> phi_bb211_32;
  TNode<IntPtrT> phi_bb211_33;
  TNode<IntPtrT> phi_bb211_37;
  TNode<IntPtrT> phi_bb211_38;
  if (block211.is_used()) {
    ca_.Bind(&block211, &phi_bb211_8, &phi_bb211_9, &phi_bb211_10, &phi_bb211_11, &phi_bb211_13, &phi_bb211_14, &phi_bb211_20, &phi_bb211_22, &phi_bb211_23, &phi_bb211_24, &phi_bb211_25, &phi_bb211_32, &phi_bb211_33, &phi_bb211_37, &phi_bb211_38);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb170_7;
  TNode<IntPtrT> phi_bb170_8;
  TNode<IntPtrT> phi_bb170_9;
  TNode<IntPtrT> phi_bb170_10;
  TNode<IntPtrT> phi_bb170_11;
  TNode<IntPtrT> phi_bb170_13;
  TNode<BoolT> phi_bb170_14;
  TNode<IntPtrT> phi_bb170_20;
  if (block170.is_used()) {
    ca_.Bind(&block170, &phi_bb170_7, &phi_bb170_8, &phi_bb170_9, &phi_bb170_10, &phi_bb170_11, &phi_bb170_13, &phi_bb170_14, &phi_bb170_20);
    ca_.Goto(&block167, phi_bb170_7, phi_bb170_8, phi_bb170_9, phi_bb170_10, phi_bb170_11, phi_bb170_13, phi_bb170_14, phi_bb170_20);
  }

  TNode<IntPtrT> phi_bb166_7;
  TNode<IntPtrT> phi_bb166_8;
  TNode<IntPtrT> phi_bb166_9;
  TNode<IntPtrT> phi_bb166_10;
  TNode<IntPtrT> phi_bb166_11;
  TNode<IntPtrT> phi_bb166_13;
  TNode<BoolT> phi_bb166_14;
  TNode<IntPtrT> phi_bb166_20;
  TNode<Int32T> tmp489;
  TNode<BoolT> tmp490;
  if (block166.is_used()) {
    ca_.Bind(&block166, &phi_bb166_7, &phi_bb166_8, &phi_bb166_9, &phi_bb166_10, &phi_bb166_11, &phi_bb166_13, &phi_bb166_14, &phi_bb166_20);
    tmp489 = FromConstexpr_int32_constexpr_int32_0(state_, wasm::kWasmF64.raw_bit_field());
    tmp490 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp304}, TNode<Int32T>{tmp489});
    ca_.Branch(tmp490, &block214, std::vector<compiler::Node*>{phi_bb166_7, phi_bb166_8, phi_bb166_9, phi_bb166_10, phi_bb166_11, phi_bb166_13, phi_bb166_14, phi_bb166_20}, &block215, std::vector<compiler::Node*>{phi_bb166_7, phi_bb166_8, phi_bb166_9, phi_bb166_10, phi_bb166_11, phi_bb166_13, phi_bb166_14, phi_bb166_20});
  }

  TNode<IntPtrT> phi_bb214_7;
  TNode<IntPtrT> phi_bb214_8;
  TNode<IntPtrT> phi_bb214_9;
  TNode<IntPtrT> phi_bb214_10;
  TNode<IntPtrT> phi_bb214_11;
  TNode<IntPtrT> phi_bb214_13;
  TNode<BoolT> phi_bb214_14;
  TNode<IntPtrT> phi_bb214_20;
  TNode<IntPtrT> tmp491;
  TNode<IntPtrT> tmp492;
  TNode<IntPtrT> tmp493;
  TNode<BoolT> tmp494;
  if (block214.is_used()) {
    ca_.Bind(&block214, &phi_bb214_7, &phi_bb214_8, &phi_bb214_9, &phi_bb214_10, &phi_bb214_11, &phi_bb214_13, &phi_bb214_14, &phi_bb214_20);
    tmp491 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp492 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb214_8}, TNode<IntPtrT>{tmp491});
    tmp493 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp494 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb214_8}, TNode<IntPtrT>{tmp493});
    ca_.Branch(tmp494, &block218, std::vector<compiler::Node*>{phi_bb214_7, phi_bb214_9, phi_bb214_10, phi_bb214_11, phi_bb214_13, phi_bb214_14, phi_bb214_20}, &block219, std::vector<compiler::Node*>{phi_bb214_7, phi_bb214_9, phi_bb214_10, phi_bb214_11, phi_bb214_13, phi_bb214_14, phi_bb214_20});
  }

  TNode<IntPtrT> phi_bb218_7;
  TNode<IntPtrT> phi_bb218_9;
  TNode<IntPtrT> phi_bb218_10;
  TNode<IntPtrT> phi_bb218_11;
  TNode<IntPtrT> phi_bb218_13;
  TNode<BoolT> phi_bb218_14;
  TNode<IntPtrT> phi_bb218_20;
  TNode<Object> tmp495;
  TNode<IntPtrT> tmp496;
  TNode<IntPtrT> tmp497;
  TNode<IntPtrT> tmp498;
  if (block218.is_used()) {
    ca_.Bind(&block218, &phi_bb218_7, &phi_bb218_9, &phi_bb218_10, &phi_bb218_11, &phi_bb218_13, &phi_bb218_14, &phi_bb218_20);
    std::tie(tmp495, tmp496) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb218_10}).Flatten();
    tmp497 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_float64_0(state_)));
    tmp498 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb218_10}, TNode<IntPtrT>{tmp497});
    ca_.Goto(&block217, phi_bb218_7, phi_bb218_9, tmp498, phi_bb218_11, phi_bb218_13, phi_bb218_14, phi_bb218_20, tmp495, tmp496);
  }

  TNode<IntPtrT> phi_bb219_7;
  TNode<IntPtrT> phi_bb219_9;
  TNode<IntPtrT> phi_bb219_10;
  TNode<IntPtrT> phi_bb219_11;
  TNode<IntPtrT> phi_bb219_13;
  TNode<BoolT> phi_bb219_14;
  TNode<IntPtrT> phi_bb219_20;
  if (block219.is_used()) {
    ca_.Bind(&block219, &phi_bb219_7, &phi_bb219_9, &phi_bb219_10, &phi_bb219_11, &phi_bb219_13, &phi_bb219_14, &phi_bb219_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block220, phi_bb219_7, phi_bb219_9, phi_bb219_10, phi_bb219_11, phi_bb219_13, phi_bb219_14, phi_bb219_20);
    } else {
      ca_.Goto(&block221, phi_bb219_7, phi_bb219_9, phi_bb219_10, phi_bb219_11, phi_bb219_13, phi_bb219_14, phi_bb219_20);
    }
  }

  TNode<IntPtrT> phi_bb220_7;
  TNode<IntPtrT> phi_bb220_9;
  TNode<IntPtrT> phi_bb220_10;
  TNode<IntPtrT> phi_bb220_11;
  TNode<IntPtrT> phi_bb220_13;
  TNode<BoolT> phi_bb220_14;
  TNode<IntPtrT> phi_bb220_20;
  if (block220.is_used()) {
    ca_.Bind(&block220, &phi_bb220_7, &phi_bb220_9, &phi_bb220_10, &phi_bb220_11, &phi_bb220_13, &phi_bb220_14, &phi_bb220_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block224, phi_bb220_7, phi_bb220_9, phi_bb220_10, phi_bb220_11, phi_bb220_13, phi_bb220_14, phi_bb220_20);
    } else {
      ca_.Goto(&block225, phi_bb220_7, phi_bb220_9, phi_bb220_10, phi_bb220_11, phi_bb220_13, phi_bb220_14, phi_bb220_20);
    }
  }

  TNode<IntPtrT> phi_bb224_7;
  TNode<IntPtrT> phi_bb224_9;
  TNode<IntPtrT> phi_bb224_10;
  TNode<IntPtrT> phi_bb224_11;
  TNode<IntPtrT> phi_bb224_13;
  TNode<BoolT> phi_bb224_14;
  TNode<IntPtrT> phi_bb224_20;
  TNode<Object> tmp499;
  TNode<IntPtrT> tmp500;
  TNode<IntPtrT> tmp501;
  TNode<IntPtrT> tmp502;
  if (block224.is_used()) {
    ca_.Bind(&block224, &phi_bb224_7, &phi_bb224_9, &phi_bb224_10, &phi_bb224_11, &phi_bb224_13, &phi_bb224_14, &phi_bb224_20);
    std::tie(tmp499, tmp500) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb224_11}).Flatten();
    tmp501 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp502 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb224_11}, TNode<IntPtrT>{tmp501});
    ca_.Goto(&block223, phi_bb224_7, phi_bb224_9, phi_bb224_10, tmp502, phi_bb224_13, phi_bb224_14, phi_bb224_20, tmp499, tmp500);
  }

  TNode<IntPtrT> phi_bb225_7;
  TNode<IntPtrT> phi_bb225_9;
  TNode<IntPtrT> phi_bb225_10;
  TNode<IntPtrT> phi_bb225_11;
  TNode<IntPtrT> phi_bb225_13;
  TNode<BoolT> phi_bb225_14;
  TNode<IntPtrT> phi_bb225_20;
  TNode<IntPtrT> tmp503;
  TNode<BoolT> tmp504;
  if (block225.is_used()) {
    ca_.Bind(&block225, &phi_bb225_7, &phi_bb225_9, &phi_bb225_10, &phi_bb225_11, &phi_bb225_13, &phi_bb225_14, &phi_bb225_20);
    tmp503 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp504 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb225_13}, TNode<IntPtrT>{tmp503});
    ca_.Branch(tmp504, &block227, std::vector<compiler::Node*>{phi_bb225_7, phi_bb225_9, phi_bb225_10, phi_bb225_11, phi_bb225_13, phi_bb225_14, phi_bb225_20}, &block228, std::vector<compiler::Node*>{phi_bb225_7, phi_bb225_9, phi_bb225_10, phi_bb225_11, phi_bb225_13, phi_bb225_14, phi_bb225_20});
  }

  TNode<IntPtrT> phi_bb227_7;
  TNode<IntPtrT> phi_bb227_9;
  TNode<IntPtrT> phi_bb227_10;
  TNode<IntPtrT> phi_bb227_11;
  TNode<IntPtrT> phi_bb227_13;
  TNode<BoolT> phi_bb227_14;
  TNode<IntPtrT> phi_bb227_20;
  TNode<Object> tmp505;
  TNode<IntPtrT> tmp506;
  TNode<IntPtrT> tmp507;
  TNode<BoolT> tmp508;
  if (block227.is_used()) {
    ca_.Bind(&block227, &phi_bb227_7, &phi_bb227_9, &phi_bb227_10, &phi_bb227_11, &phi_bb227_13, &phi_bb227_14, &phi_bb227_20);
    std::tie(tmp505, tmp506) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb227_13}).Flatten();
    tmp507 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp508 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block223, phi_bb227_7, phi_bb227_9, phi_bb227_10, phi_bb227_11, tmp507, tmp508, phi_bb227_20, tmp505, tmp506);
  }

  TNode<IntPtrT> phi_bb228_7;
  TNode<IntPtrT> phi_bb228_9;
  TNode<IntPtrT> phi_bb228_10;
  TNode<IntPtrT> phi_bb228_11;
  TNode<IntPtrT> phi_bb228_13;
  TNode<BoolT> phi_bb228_14;
  TNode<IntPtrT> phi_bb228_20;
  TNode<Object> tmp509;
  TNode<IntPtrT> tmp510;
  TNode<IntPtrT> tmp511;
  TNode<IntPtrT> tmp512;
  TNode<IntPtrT> tmp513;
  TNode<IntPtrT> tmp514;
  TNode<BoolT> tmp515;
  if (block228.is_used()) {
    ca_.Bind(&block228, &phi_bb228_7, &phi_bb228_9, &phi_bb228_10, &phi_bb228_11, &phi_bb228_13, &phi_bb228_14, &phi_bb228_20);
    std::tie(tmp509, tmp510) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb228_11}).Flatten();
    tmp511 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp512 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb228_11}, TNode<IntPtrT>{tmp511});
    tmp513 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp514 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp512}, TNode<IntPtrT>{tmp513});
    tmp515 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block223, phi_bb228_7, phi_bb228_9, phi_bb228_10, tmp514, tmp512, tmp515, phi_bb228_20, tmp509, tmp510);
  }

  TNode<IntPtrT> phi_bb223_7;
  TNode<IntPtrT> phi_bb223_9;
  TNode<IntPtrT> phi_bb223_10;
  TNode<IntPtrT> phi_bb223_11;
  TNode<IntPtrT> phi_bb223_13;
  TNode<BoolT> phi_bb223_14;
  TNode<IntPtrT> phi_bb223_20;
  TNode<Object> phi_bb223_22;
  TNode<IntPtrT> phi_bb223_23;
  if (block223.is_used()) {
    ca_.Bind(&block223, &phi_bb223_7, &phi_bb223_9, &phi_bb223_10, &phi_bb223_11, &phi_bb223_13, &phi_bb223_14, &phi_bb223_20, &phi_bb223_22, &phi_bb223_23);
    ca_.Goto(&block217, phi_bb223_7, phi_bb223_9, phi_bb223_10, phi_bb223_11, phi_bb223_13, phi_bb223_14, phi_bb223_20, phi_bb223_22, phi_bb223_23);
  }

  TNode<IntPtrT> phi_bb221_7;
  TNode<IntPtrT> phi_bb221_9;
  TNode<IntPtrT> phi_bb221_10;
  TNode<IntPtrT> phi_bb221_11;
  TNode<IntPtrT> phi_bb221_13;
  TNode<BoolT> phi_bb221_14;
  TNode<IntPtrT> phi_bb221_20;
  TNode<Object> tmp516;
  TNode<IntPtrT> tmp517;
  TNode<IntPtrT> tmp518;
  TNode<IntPtrT> tmp519;
  TNode<BoolT> tmp520;
  if (block221.is_used()) {
    ca_.Bind(&block221, &phi_bb221_7, &phi_bb221_9, &phi_bb221_10, &phi_bb221_11, &phi_bb221_13, &phi_bb221_14, &phi_bb221_20);
    std::tie(tmp516, tmp517) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb221_11}).Flatten();
    tmp518 = FromConstexpr_intptr_constexpr_int31_0(state_, (CodeStubAssembler(state_).ConstexprInt31Mul((FromConstexpr_constexpr_int31_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull))), (SizeOf_intptr_0(state_)))));
    tmp519 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb221_11}, TNode<IntPtrT>{tmp518});
    tmp520 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block217, phi_bb221_7, phi_bb221_9, phi_bb221_10, tmp519, phi_bb221_13, tmp520, phi_bb221_20, tmp516, tmp517);
  }

  TNode<IntPtrT> phi_bb217_7;
  TNode<IntPtrT> phi_bb217_9;
  TNode<IntPtrT> phi_bb217_10;
  TNode<IntPtrT> phi_bb217_11;
  TNode<IntPtrT> phi_bb217_13;
  TNode<BoolT> phi_bb217_14;
  TNode<IntPtrT> phi_bb217_20;
  TNode<Object> phi_bb217_22;
  TNode<IntPtrT> phi_bb217_23;
  TNode<Object> tmp521;
  TNode<IntPtrT> tmp522;
  TNode<Float64T> tmp523;
  TNode<Object> tmp524;
  TNode<IntPtrT> tmp525;
  TNode<IntPtrT> tmp526;
  TNode<UintPtrT> tmp527;
  TNode<UintPtrT> tmp528;
  TNode<BoolT> tmp529;
  if (block217.is_used()) {
    ca_.Bind(&block217, &phi_bb217_7, &phi_bb217_9, &phi_bb217_10, &phi_bb217_11, &phi_bb217_13, &phi_bb217_14, &phi_bb217_20, &phi_bb217_22, &phi_bb217_23);
    std::tie(tmp521, tmp522) = RefCast_float64_0(state_, TorqueStructReference_intptr_0{TNode<Object>{phi_bb217_22}, TNode<IntPtrT>{phi_bb217_23}, TorqueStructUnsafe_0{}}).Flatten();
    tmp523 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp521, tmp522});
    std::tie(tmp524, tmp525, tmp526) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp527 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb217_20});
    tmp528 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp526});
    tmp529 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp527}, TNode<UintPtrT>{tmp528});
    ca_.Branch(tmp529, &block233, std::vector<compiler::Node*>{phi_bb217_7, phi_bb217_9, phi_bb217_10, phi_bb217_11, phi_bb217_13, phi_bb217_14, phi_bb217_20, phi_bb217_22, phi_bb217_23, phi_bb217_20, phi_bb217_20, phi_bb217_20, phi_bb217_20}, &block234, std::vector<compiler::Node*>{phi_bb217_7, phi_bb217_9, phi_bb217_10, phi_bb217_11, phi_bb217_13, phi_bb217_14, phi_bb217_20, phi_bb217_22, phi_bb217_23, phi_bb217_20, phi_bb217_20, phi_bb217_20, phi_bb217_20});
  }

  TNode<IntPtrT> phi_bb233_7;
  TNode<IntPtrT> phi_bb233_9;
  TNode<IntPtrT> phi_bb233_10;
  TNode<IntPtrT> phi_bb233_11;
  TNode<IntPtrT> phi_bb233_13;
  TNode<BoolT> phi_bb233_14;
  TNode<IntPtrT> phi_bb233_20;
  TNode<Object> phi_bb233_22;
  TNode<IntPtrT> phi_bb233_23;
  TNode<IntPtrT> phi_bb233_29;
  TNode<IntPtrT> phi_bb233_30;
  TNode<IntPtrT> phi_bb233_34;
  TNode<IntPtrT> phi_bb233_35;
  TNode<IntPtrT> tmp530;
  TNode<IntPtrT> tmp531;
  TNode<Object> tmp532;
  TNode<IntPtrT> tmp533;
  TNode<Number> tmp534;
  if (block233.is_used()) {
    ca_.Bind(&block233, &phi_bb233_7, &phi_bb233_9, &phi_bb233_10, &phi_bb233_11, &phi_bb233_13, &phi_bb233_14, &phi_bb233_20, &phi_bb233_22, &phi_bb233_23, &phi_bb233_29, &phi_bb233_30, &phi_bb233_34, &phi_bb233_35);
    tmp530 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb233_35});
    tmp531 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp525}, TNode<IntPtrT>{tmp530});
    std::tie(tmp532, tmp533) = NewReference_Object_0(state_, TNode<Object>{tmp524}, TNode<IntPtrT>{tmp531}).Flatten();
    tmp534 = Convert_Number_float64_0(state_, TNode<Float64T>{tmp523});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp532, tmp533}, tmp534);
    ca_.Goto(&block216, phi_bb233_7, tmp492, phi_bb233_9, phi_bb233_10, phi_bb233_11, phi_bb233_13, phi_bb233_14, phi_bb233_20);
  }

  TNode<IntPtrT> phi_bb234_7;
  TNode<IntPtrT> phi_bb234_9;
  TNode<IntPtrT> phi_bb234_10;
  TNode<IntPtrT> phi_bb234_11;
  TNode<IntPtrT> phi_bb234_13;
  TNode<BoolT> phi_bb234_14;
  TNode<IntPtrT> phi_bb234_20;
  TNode<Object> phi_bb234_22;
  TNode<IntPtrT> phi_bb234_23;
  TNode<IntPtrT> phi_bb234_29;
  TNode<IntPtrT> phi_bb234_30;
  TNode<IntPtrT> phi_bb234_34;
  TNode<IntPtrT> phi_bb234_35;
  if (block234.is_used()) {
    ca_.Bind(&block234, &phi_bb234_7, &phi_bb234_9, &phi_bb234_10, &phi_bb234_11, &phi_bb234_13, &phi_bb234_14, &phi_bb234_20, &phi_bb234_22, &phi_bb234_23, &phi_bb234_29, &phi_bb234_30, &phi_bb234_34, &phi_bb234_35);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb215_7;
  TNode<IntPtrT> phi_bb215_8;
  TNode<IntPtrT> phi_bb215_9;
  TNode<IntPtrT> phi_bb215_10;
  TNode<IntPtrT> phi_bb215_11;
  TNode<IntPtrT> phi_bb215_13;
  TNode<BoolT> phi_bb215_14;
  TNode<IntPtrT> phi_bb215_20;
  TNode<IntPtrT> tmp535;
  TNode<IntPtrT> tmp536;
  TNode<IntPtrT> tmp537;
  TNode<BoolT> tmp538;
  if (block215.is_used()) {
    ca_.Bind(&block215, &phi_bb215_7, &phi_bb215_8, &phi_bb215_9, &phi_bb215_10, &phi_bb215_11, &phi_bb215_13, &phi_bb215_14, &phi_bb215_20);
    tmp535 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp536 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{phi_bb215_7}, TNode<IntPtrT>{tmp535});
    tmp537 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp538 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{phi_bb215_7}, TNode<IntPtrT>{tmp537});
    ca_.Branch(tmp538, &block238, std::vector<compiler::Node*>{phi_bb215_8, phi_bb215_9, phi_bb215_10, phi_bb215_11, phi_bb215_13, phi_bb215_14, phi_bb215_20}, &block239, std::vector<compiler::Node*>{phi_bb215_8, phi_bb215_9, phi_bb215_10, phi_bb215_11, phi_bb215_13, phi_bb215_14, phi_bb215_20});
  }

  TNode<IntPtrT> phi_bb238_8;
  TNode<IntPtrT> phi_bb238_9;
  TNode<IntPtrT> phi_bb238_10;
  TNode<IntPtrT> phi_bb238_11;
  TNode<IntPtrT> phi_bb238_13;
  TNode<BoolT> phi_bb238_14;
  TNode<IntPtrT> phi_bb238_20;
  TNode<Object> tmp539;
  TNode<IntPtrT> tmp540;
  TNode<IntPtrT> tmp541;
  TNode<IntPtrT> tmp542;
  if (block238.is_used()) {
    ca_.Bind(&block238, &phi_bb238_8, &phi_bb238_9, &phi_bb238_10, &phi_bb238_11, &phi_bb238_13, &phi_bb238_14, &phi_bb238_20);
    std::tie(tmp539, tmp540) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb238_9}).Flatten();
    tmp541 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp542 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb238_9}, TNode<IntPtrT>{tmp541});
    ca_.Goto(&block237, phi_bb238_8, tmp542, phi_bb238_10, phi_bb238_11, phi_bb238_13, phi_bb238_14, phi_bb238_20, tmp539, tmp540);
  }

  TNode<IntPtrT> phi_bb239_8;
  TNode<IntPtrT> phi_bb239_9;
  TNode<IntPtrT> phi_bb239_10;
  TNode<IntPtrT> phi_bb239_11;
  TNode<IntPtrT> phi_bb239_13;
  TNode<BoolT> phi_bb239_14;
  TNode<IntPtrT> phi_bb239_20;
  if (block239.is_used()) {
    ca_.Bind(&block239, &phi_bb239_8, &phi_bb239_9, &phi_bb239_10, &phi_bb239_11, &phi_bb239_13, &phi_bb239_14, &phi_bb239_20);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block241, phi_bb239_8, phi_bb239_9, phi_bb239_10, phi_bb239_11, phi_bb239_13, phi_bb239_14, phi_bb239_20);
    } else {
      ca_.Goto(&block242, phi_bb239_8, phi_bb239_9, phi_bb239_10, phi_bb239_11, phi_bb239_13, phi_bb239_14, phi_bb239_20);
    }
  }

  TNode<IntPtrT> phi_bb241_8;
  TNode<IntPtrT> phi_bb241_9;
  TNode<IntPtrT> phi_bb241_10;
  TNode<IntPtrT> phi_bb241_11;
  TNode<IntPtrT> phi_bb241_13;
  TNode<BoolT> phi_bb241_14;
  TNode<IntPtrT> phi_bb241_20;
  TNode<Object> tmp543;
  TNode<IntPtrT> tmp544;
  TNode<IntPtrT> tmp545;
  TNode<IntPtrT> tmp546;
  if (block241.is_used()) {
    ca_.Bind(&block241, &phi_bb241_8, &phi_bb241_9, &phi_bb241_10, &phi_bb241_11, &phi_bb241_13, &phi_bb241_14, &phi_bb241_20);
    std::tie(tmp543, tmp544) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb241_11}).Flatten();
    tmp545 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp546 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb241_11}, TNode<IntPtrT>{tmp545});
    ca_.Goto(&block240, phi_bb241_8, phi_bb241_9, phi_bb241_10, tmp546, phi_bb241_13, phi_bb241_14, phi_bb241_20, tmp543, tmp544);
  }

  TNode<IntPtrT> phi_bb242_8;
  TNode<IntPtrT> phi_bb242_9;
  TNode<IntPtrT> phi_bb242_10;
  TNode<IntPtrT> phi_bb242_11;
  TNode<IntPtrT> phi_bb242_13;
  TNode<BoolT> phi_bb242_14;
  TNode<IntPtrT> phi_bb242_20;
  TNode<IntPtrT> tmp547;
  TNode<BoolT> tmp548;
  if (block242.is_used()) {
    ca_.Bind(&block242, &phi_bb242_8, &phi_bb242_9, &phi_bb242_10, &phi_bb242_11, &phi_bb242_13, &phi_bb242_14, &phi_bb242_20);
    tmp547 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp548 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{phi_bb242_13}, TNode<IntPtrT>{tmp547});
    ca_.Branch(tmp548, &block244, std::vector<compiler::Node*>{phi_bb242_8, phi_bb242_9, phi_bb242_10, phi_bb242_11, phi_bb242_13, phi_bb242_14, phi_bb242_20}, &block245, std::vector<compiler::Node*>{phi_bb242_8, phi_bb242_9, phi_bb242_10, phi_bb242_11, phi_bb242_13, phi_bb242_14, phi_bb242_20});
  }

  TNode<IntPtrT> phi_bb244_8;
  TNode<IntPtrT> phi_bb244_9;
  TNode<IntPtrT> phi_bb244_10;
  TNode<IntPtrT> phi_bb244_11;
  TNode<IntPtrT> phi_bb244_13;
  TNode<BoolT> phi_bb244_14;
  TNode<IntPtrT> phi_bb244_20;
  TNode<Object> tmp549;
  TNode<IntPtrT> tmp550;
  TNode<IntPtrT> tmp551;
  TNode<BoolT> tmp552;
  if (block244.is_used()) {
    ca_.Bind(&block244, &phi_bb244_8, &phi_bb244_9, &phi_bb244_10, &phi_bb244_11, &phi_bb244_13, &phi_bb244_14, &phi_bb244_20);
    std::tie(tmp549, tmp550) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb244_13}).Flatten();
    tmp551 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp552 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    ca_.Goto(&block240, phi_bb244_8, phi_bb244_9, phi_bb244_10, phi_bb244_11, tmp551, tmp552, phi_bb244_20, tmp549, tmp550);
  }

  TNode<IntPtrT> phi_bb245_8;
  TNode<IntPtrT> phi_bb245_9;
  TNode<IntPtrT> phi_bb245_10;
  TNode<IntPtrT> phi_bb245_11;
  TNode<IntPtrT> phi_bb245_13;
  TNode<BoolT> phi_bb245_14;
  TNode<IntPtrT> phi_bb245_20;
  TNode<Object> tmp553;
  TNode<IntPtrT> tmp554;
  TNode<IntPtrT> tmp555;
  TNode<IntPtrT> tmp556;
  TNode<IntPtrT> tmp557;
  TNode<IntPtrT> tmp558;
  TNode<BoolT> tmp559;
  if (block245.is_used()) {
    ca_.Bind(&block245, &phi_bb245_8, &phi_bb245_9, &phi_bb245_10, &phi_bb245_11, &phi_bb245_13, &phi_bb245_14, &phi_bb245_20);
    std::tie(tmp553, tmp554) = NewReference_intptr_0(state_, TNode<Object>{tmp287}, TNode<IntPtrT>{phi_bb245_11}).Flatten();
    tmp555 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp556 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb245_11}, TNode<IntPtrT>{tmp555});
    tmp557 = FromConstexpr_intptr_constexpr_int31_0(state_, (SizeOf_intptr_0(state_)));
    tmp558 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp556}, TNode<IntPtrT>{tmp557});
    tmp559 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    ca_.Goto(&block240, phi_bb245_8, phi_bb245_9, phi_bb245_10, tmp558, tmp556, tmp559, phi_bb245_20, tmp553, tmp554);
  }

  TNode<IntPtrT> phi_bb240_8;
  TNode<IntPtrT> phi_bb240_9;
  TNode<IntPtrT> phi_bb240_10;
  TNode<IntPtrT> phi_bb240_11;
  TNode<IntPtrT> phi_bb240_13;
  TNode<BoolT> phi_bb240_14;
  TNode<IntPtrT> phi_bb240_20;
  TNode<Object> phi_bb240_22;
  TNode<IntPtrT> phi_bb240_23;
  if (block240.is_used()) {
    ca_.Bind(&block240, &phi_bb240_8, &phi_bb240_9, &phi_bb240_10, &phi_bb240_11, &phi_bb240_13, &phi_bb240_14, &phi_bb240_20, &phi_bb240_22, &phi_bb240_23);
    ca_.Goto(&block237, phi_bb240_8, phi_bb240_9, phi_bb240_10, phi_bb240_11, phi_bb240_13, phi_bb240_14, phi_bb240_20, phi_bb240_22, phi_bb240_23);
  }

  TNode<IntPtrT> phi_bb237_8;
  TNode<IntPtrT> phi_bb237_9;
  TNode<IntPtrT> phi_bb237_10;
  TNode<IntPtrT> phi_bb237_11;
  TNode<IntPtrT> phi_bb237_13;
  TNode<BoolT> phi_bb237_14;
  TNode<IntPtrT> phi_bb237_20;
  TNode<Object> phi_bb237_22;
  TNode<IntPtrT> phi_bb237_23;
  TNode<Object> tmp560;
  TNode<IntPtrT> tmp561;
  TNode<IntPtrT> tmp562;
  TNode<UintPtrT> tmp563;
  TNode<UintPtrT> tmp564;
  TNode<BoolT> tmp565;
  if (block237.is_used()) {
    ca_.Bind(&block237, &phi_bb237_8, &phi_bb237_9, &phi_bb237_10, &phi_bb237_11, &phi_bb237_13, &phi_bb237_14, &phi_bb237_20, &phi_bb237_22, &phi_bb237_23);
    std::tie(tmp560, tmp561, tmp562) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp563 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb237_20});
    tmp564 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp562});
    tmp565 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp563}, TNode<UintPtrT>{tmp564});
    ca_.Branch(tmp565, &block250, std::vector<compiler::Node*>{phi_bb237_8, phi_bb237_9, phi_bb237_10, phi_bb237_11, phi_bb237_13, phi_bb237_14, phi_bb237_20, phi_bb237_20, phi_bb237_20, phi_bb237_20, phi_bb237_20}, &block251, std::vector<compiler::Node*>{phi_bb237_8, phi_bb237_9, phi_bb237_10, phi_bb237_11, phi_bb237_13, phi_bb237_14, phi_bb237_20, phi_bb237_20, phi_bb237_20, phi_bb237_20, phi_bb237_20});
  }

  TNode<IntPtrT> phi_bb250_8;
  TNode<IntPtrT> phi_bb250_9;
  TNode<IntPtrT> phi_bb250_10;
  TNode<IntPtrT> phi_bb250_11;
  TNode<IntPtrT> phi_bb250_13;
  TNode<BoolT> phi_bb250_14;
  TNode<IntPtrT> phi_bb250_20;
  TNode<IntPtrT> phi_bb250_26;
  TNode<IntPtrT> phi_bb250_27;
  TNode<IntPtrT> phi_bb250_31;
  TNode<IntPtrT> phi_bb250_32;
  TNode<IntPtrT> tmp566;
  TNode<IntPtrT> tmp567;
  TNode<Object> tmp568;
  TNode<IntPtrT> tmp569;
  TNode<Object> tmp570;
  TNode<Object> tmp571;
  TNode<IntPtrT> tmp572;
  TNode<IntPtrT> tmp573;
  TNode<UintPtrT> tmp574;
  TNode<UintPtrT> tmp575;
  TNode<BoolT> tmp576;
  if (block250.is_used()) {
    ca_.Bind(&block250, &phi_bb250_8, &phi_bb250_9, &phi_bb250_10, &phi_bb250_11, &phi_bb250_13, &phi_bb250_14, &phi_bb250_20, &phi_bb250_26, &phi_bb250_27, &phi_bb250_31, &phi_bb250_32);
    tmp566 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb250_32});
    tmp567 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp561}, TNode<IntPtrT>{tmp566});
    std::tie(tmp568, tmp569) = NewReference_Object_0(state_, TNode<Object>{tmp560}, TNode<IntPtrT>{tmp567}).Flatten();
    tmp570 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp568, tmp569});
    std::tie(tmp571, tmp572, tmp573) = FieldSliceFixedArrayObjects_0(state_, TNode<FixedArray>{tmp66}).Flatten();
    tmp574 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{phi_bb250_20});
    tmp575 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp573});
    tmp576 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp574}, TNode<UintPtrT>{tmp575});
    ca_.Branch(tmp576, &block258, std::vector<compiler::Node*>{phi_bb250_8, phi_bb250_9, phi_bb250_10, phi_bb250_11, phi_bb250_13, phi_bb250_14, phi_bb250_20, phi_bb250_20, phi_bb250_20, phi_bb250_20, phi_bb250_20}, &block259, std::vector<compiler::Node*>{phi_bb250_8, phi_bb250_9, phi_bb250_10, phi_bb250_11, phi_bb250_13, phi_bb250_14, phi_bb250_20, phi_bb250_20, phi_bb250_20, phi_bb250_20, phi_bb250_20});
  }

  TNode<IntPtrT> phi_bb251_8;
  TNode<IntPtrT> phi_bb251_9;
  TNode<IntPtrT> phi_bb251_10;
  TNode<IntPtrT> phi_bb251_11;
  TNode<IntPtrT> phi_bb251_13;
  TNode<BoolT> phi_bb251_14;
  TNode<IntPtrT> phi_bb251_20;
  TNode<IntPtrT> phi_bb251_26;
  TNode<IntPtrT> phi_bb251_27;
  TNode<IntPtrT> phi_bb251_31;
  TNode<IntPtrT> phi_bb251_32;
  if (block251.is_used()) {
    ca_.Bind(&block251, &phi_bb251_8, &phi_bb251_9, &phi_bb251_10, &phi_bb251_11, &phi_bb251_13, &phi_bb251_14, &phi_bb251_20, &phi_bb251_26, &phi_bb251_27, &phi_bb251_31, &phi_bb251_32);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb258_8;
  TNode<IntPtrT> phi_bb258_9;
  TNode<IntPtrT> phi_bb258_10;
  TNode<IntPtrT> phi_bb258_11;
  TNode<IntPtrT> phi_bb258_13;
  TNode<BoolT> phi_bb258_14;
  TNode<IntPtrT> phi_bb258_20;
  TNode<IntPtrT> phi_bb258_27;
  TNode<IntPtrT> phi_bb258_28;
  TNode<IntPtrT> phi_bb258_32;
  TNode<IntPtrT> phi_bb258_33;
  TNode<IntPtrT> tmp577;
  TNode<IntPtrT> tmp578;
  TNode<Object> tmp579;
  TNode<IntPtrT> tmp580;
  TNode<NativeContext> tmp581;
  TNode<Object> tmp582;
  if (block258.is_used()) {
    ca_.Bind(&block258, &phi_bb258_8, &phi_bb258_9, &phi_bb258_10, &phi_bb258_11, &phi_bb258_13, &phi_bb258_14, &phi_bb258_20, &phi_bb258_27, &phi_bb258_28, &phi_bb258_32, &phi_bb258_33);
    tmp577 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{phi_bb258_33});
    tmp578 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp572}, TNode<IntPtrT>{tmp577});
    std::tie(tmp579, tmp580) = NewReference_Object_0(state_, TNode<Object>{tmp571}, TNode<IntPtrT>{tmp578}).Flatten();
    tmp581 = WasmBuiltinsAssembler(state_).LoadContextFromInstance(TNode<WasmInstanceObject>{parameter0});
    tmp582 = WasmToJSObject_0(state_, TNode<NativeContext>{tmp581}, TNode<Object>{tmp570}, TNode<Int32T>{tmp304});
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp579, tmp580}, tmp582);
    ca_.Goto(&block216, tmp536, phi_bb258_8, phi_bb258_9, phi_bb258_10, phi_bb258_11, phi_bb258_13, phi_bb258_14, phi_bb258_20);
  }

  TNode<IntPtrT> phi_bb259_8;
  TNode<IntPtrT> phi_bb259_9;
  TNode<IntPtrT> phi_bb259_10;
  TNode<IntPtrT> phi_bb259_11;
  TNode<IntPtrT> phi_bb259_13;
  TNode<BoolT> phi_bb259_14;
  TNode<IntPtrT> phi_bb259_20;
  TNode<IntPtrT> phi_bb259_27;
  TNode<IntPtrT> phi_bb259_28;
  TNode<IntPtrT> phi_bb259_32;
  TNode<IntPtrT> phi_bb259_33;
  if (block259.is_used()) {
    ca_.Bind(&block259, &phi_bb259_8, &phi_bb259_9, &phi_bb259_10, &phi_bb259_11, &phi_bb259_13, &phi_bb259_14, &phi_bb259_20, &phi_bb259_27, &phi_bb259_28, &phi_bb259_32, &phi_bb259_33);
    CodeStubAssembler(state_).Unreachable();
  }

  TNode<IntPtrT> phi_bb216_7;
  TNode<IntPtrT> phi_bb216_8;
  TNode<IntPtrT> phi_bb216_9;
  TNode<IntPtrT> phi_bb216_10;
  TNode<IntPtrT> phi_bb216_11;
  TNode<IntPtrT> phi_bb216_13;
  TNode<BoolT> phi_bb216_14;
  TNode<IntPtrT> phi_bb216_20;
  if (block216.is_used()) {
    ca_.Bind(&block216, &phi_bb216_7, &phi_bb216_8, &phi_bb216_9, &phi_bb216_10, &phi_bb216_11, &phi_bb216_13, &phi_bb216_14, &phi_bb216_20);
    ca_.Goto(&block167, phi_bb216_7, phi_bb216_8, phi_bb216_9, phi_bb216_10, phi_bb216_11, phi_bb216_13, phi_bb216_14, phi_bb216_20);
  }

  TNode<IntPtrT> phi_bb167_7;
  TNode<IntPtrT> phi_bb167_8;
  TNode<IntPtrT> phi_bb167_9;
  TNode<IntPtrT> phi_bb167_10;
  TNode<IntPtrT> phi_bb167_11;
  TNode<IntPtrT> phi_bb167_13;
  TNode<BoolT> phi_bb167_14;
  TNode<IntPtrT> phi_bb167_20;
  if (block167.is_used()) {
    ca_.Bind(&block167, &phi_bb167_7, &phi_bb167_8, &phi_bb167_9, &phi_bb167_10, &phi_bb167_11, &phi_bb167_13, &phi_bb167_14, &phi_bb167_20);
    ca_.Goto(&block147, phi_bb167_7, phi_bb167_8, phi_bb167_9, phi_bb167_10, phi_bb167_11, phi_bb167_13, phi_bb167_14, phi_bb167_20);
  }

  TNode<IntPtrT> phi_bb147_7;
  TNode<IntPtrT> phi_bb147_8;
  TNode<IntPtrT> phi_bb147_9;
  TNode<IntPtrT> phi_bb147_10;
  TNode<IntPtrT> phi_bb147_11;
  TNode<IntPtrT> phi_bb147_13;
  TNode<BoolT> phi_bb147_14;
  TNode<IntPtrT> phi_bb147_20;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_7, &phi_bb147_8, &phi_bb147_9, &phi_bb147_10, &phi_bb147_11, &phi_bb147_13, &phi_bb147_14, &phi_bb147_20);
    ca_.Goto(&block127, phi_bb147_7, phi_bb147_8, phi_bb147_9, phi_bb147_10, phi_bb147_11, phi_bb147_13, phi_bb147_14, phi_bb147_20);
  }

  TNode<IntPtrT> phi_bb127_7;
  TNode<IntPtrT> phi_bb127_8;
  TNode<IntPtrT> phi_bb127_9;
  TNode<IntPtrT> phi_bb127_10;
  TNode<IntPtrT> phi_bb127_11;
  TNode<IntPtrT> phi_bb127_13;
  TNode<BoolT> phi_bb127_14;
  TNode<IntPtrT> phi_bb127_20;
  TNode<IntPtrT> tmp583;
  TNode<IntPtrT> tmp584;
  if (block127.is_used()) {
    ca_.Bind(&block127, &phi_bb127_7, &phi_bb127_8, &phi_bb127_9, &phi_bb127_10, &phi_bb127_11, &phi_bb127_13, &phi_bb127_14, &phi_bb127_20);
    tmp583 = FromConstexpr_intptr_constexpr_int31_0(state_, 1);
    tmp584 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{phi_bb127_20}, TNode<IntPtrT>{tmp583});
    ca_.Goto(&block122, phi_bb127_7, phi_bb127_8, phi_bb127_9, phi_bb127_10, phi_bb127_11, phi_bb127_13, phi_bb127_14, tmp584);
  }

  TNode<IntPtrT> phi_bb121_7;
  TNode<IntPtrT> phi_bb121_8;
  TNode<IntPtrT> phi_bb121_9;
  TNode<IntPtrT> phi_bb121_10;
  TNode<IntPtrT> phi_bb121_11;
  TNode<IntPtrT> phi_bb121_13;
  TNode<BoolT> phi_bb121_14;
  TNode<IntPtrT> phi_bb121_20;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_7, &phi_bb121_8, &phi_bb121_9, &phi_bb121_10, &phi_bb121_11, &phi_bb121_13, &phi_bb121_14, &phi_bb121_20);
    CodeStubAssembler(state_).Return(parameter1);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=368&c=47
int31_t SizeOf_intptr_0(compiler::CodeAssemblerState* state_) {
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
  return kIntptrSize;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=376&c=32
int31_t SizeOf_float64_0(compiler::CodeAssemblerState* state_) {
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
  return kDoubleSize;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=433&c=24
TNode<WasmExportedFunctionData> UnsafeCast_WasmExportedFunctionData_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<WasmExportedFunctionData> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<WasmExportedFunctionData>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=446&c=23
TorqueStructReference_int32_0 GetRefAt_int32_RawPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_int32_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_int32_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=450&c=17
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawPtr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_RawPtr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_RawPtr_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=452&c=20
TorqueStructSlice_int32_ConstReference_int32_0 NewOffHeapConstSlice_int32_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_startPointer, TNode<IntPtrT> p_length) {
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
  TNode<IntPtrT> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kZeroBitPattern_0(state_);
    tmp1 = Convert_RawPtr_RawPtr_int32_0(state_, TNode<RawPtrT>{p_startPointer});
    tmp2 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    std::tie(tmp5, tmp6, tmp7) = (TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{p_length}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp5}, TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp7}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=470&c=9
TorqueStructSlice_int32_ConstReference_int32_0 Subslice_int32_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_int32_ConstReference_int32_0 p_slice, TNode<IntPtrT> p_start, TNode<IntPtrT> p_length, compiler::CodeAssemblerLabel* label_OutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<UintPtrT> tmp0;
  TNode<UintPtrT> tmp1;
  TNode<BoolT> tmp2;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_length});
    tmp1 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_slice.length});
    tmp2 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp0}, TNode<UintPtrT>{tmp1});
    ca_.Branch(tmp2, &block3, std::vector<compiler::Node*>{}, &block4, std::vector<compiler::Node*>{});
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block1);
  }

  TNode<UintPtrT> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<UintPtrT> tmp5;
  TNode<BoolT> tmp6;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp3 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{p_start});
    tmp4 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{p_slice.length}, TNode<IntPtrT>{p_length});
    tmp5 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp4});
    tmp6 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp5});
    ca_.Branch(tmp6, &block5, std::vector<compiler::Node*>{}, &block6, std::vector<compiler::Node*>{});
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.Goto(&block1);
  }

  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp7 = TimesSizeOf_int32_0(state_, TNode<IntPtrT>{p_start});
    tmp8 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{p_slice.offset}, TNode<IntPtrT>{tmp7});
    std::tie(tmp9, tmp10, tmp11) = NewConstSlice_int32_0(state_, TNode<Object>{p_slice.object}, TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{p_length}).Flatten();
    ca_.Goto(&block7);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_OutOfBounds);
  }

    ca_.Bind(&block7);
  return TorqueStructSlice_int32_ConstReference_int32_0{TNode<Object>{tmp9}, TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=520&c=19
TorqueStructReference_intptr_0 NewOffHeapReference_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr) {
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
    tmp1 = Convert_RawPtr_RawPtr_intptr_0(state_, TNode<RawPtrT>{p_ptr});
    tmp2 = Convert_intptr_RawPtr_0(state_, TNode<RawPtrT>{tmp1});
    tmp3 = FromConstexpr_intptr_constexpr_int31_0(state_, kHeapObjectTag);
    tmp4 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    std::tie(tmp5, tmp6) = (TorqueStructReference_intptr_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp4}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_intptr_0{TNode<Object>{tmp5}, TNode<IntPtrT>{tmp6}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=537&c=19
TorqueStructReference_intptr_0 NewReference_intptr_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = (TorqueStructReference_intptr_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_intptr_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=571&c=8
TorqueStructReference_float64_0 RefCast_float64_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = NewReference_float64_0(state_, TNode<Object>{p_i.object}, TNode<IntPtrT>{p_i.offset}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_float64_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=645&c=4
TorqueStructReference_int32_0 GetRefAt_int32_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_int32_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_int32_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=646&c=4
TorqueStructReference_bool_0 GetRefAt_bool_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_bool_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_bool_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=647&c=4
TorqueStructReference_RawPtr_0 GetRefAt_RawPtr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_RawPtr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_RawPtr_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=648&c=4
TorqueStructReference_intptr_0 GetRefAt_intptr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_intptr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_intptr_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=651&c=4
TorqueStructReference_RawPtr_intptr_0 GetRefAt_RawPtr_intptr_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_RawPtr_intptr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_RawPtr_intptr_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=676&c=23
TNode<Int32T> Convert_int32_int16_0(compiler::CodeAssemblerState* state_, TNode<Int16T> p_i) {
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
  return TNode<Int32T>{p_i};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=753&c=11
TorqueStructReference_float32_0 GetRefAt_float32_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_float32_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_float32_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=757&c=11
TorqueStructReference_float64_0 GetRefAt_float64_RawPtr_intptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_float64_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_float64_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=774&c=23
TorqueStructReference_uintptr_0 GetRefAt_uintptr_RawPtr_uintptr_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_base, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<RawPtrT> tmp0;
  TNode<RawPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).RawPtrAdd(TNode<RawPtrT>{p_base}, TNode<IntPtrT>{p_offset});
    tmp1 = (TNode<RawPtrT>{tmp0});
    std::tie(tmp2, tmp3) = NewOffHeapReference_uintptr_0(state_, TNode<RawPtrT>{tmp1}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_uintptr_0{TNode<Object>{tmp2}, TNode<IntPtrT>{tmp3}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=836&c=20
TorqueStructReference_int32_0 RefCast_int32_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = NewReference_int32_0(state_, TNode<Object>{p_i.object}, TNode<IntPtrT>{p_i.offset}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_int32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=840&c=20
TorqueStructReference_float32_0 RefCast_float32_0(compiler::CodeAssemblerState* state_, TorqueStructReference_intptr_0 p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = NewReference_float32_0(state_, TNode<Object>{p_i.object}, TNode<IntPtrT>{p_i.offset}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_float32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/js-to-wasm.tq?l=135&c=10
TorqueStructReference_float32_0 NewReference_float32_0(compiler::CodeAssemblerState* state_, TNode<Object> p_object, TNode<IntPtrT> p_offset) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = (TorqueStructReference_float32_0{TNode<Object>{p_object}, TNode<IntPtrT>{p_offset}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_float32_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
