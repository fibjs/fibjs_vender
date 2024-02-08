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
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-from-async-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/cast-tq-csa.h"
#include "torque-generated/src/builtins/convert-tq-csa.h"
#include "torque-generated/src/builtins/frame-arguments-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/promise-abstract-operations-tq-csa.h"
#include "torque-generated/src/builtins/promise-all-tq-csa.h"
#include "torque-generated/src/builtins/promise-misc-tq-csa.h"
#include "torque-generated/src/builtins/promise-resolve-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/objects/contexts-tq-csa.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetIteratorStep_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kCheckIteratorValueAndMapping_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kIteratorMapping_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetIteratorValueWithMapping_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kAddIteratorValueToTheArray_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetArrayLikeValue_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kCheckArrayLikeValueAndMapping_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetArrayLikeValueWithMapping_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kAddArrayLikeValueToTheArray_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kDoneAndResolvePromise_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kCloseAsyncIterator_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=7&c=1
TNode<Uint32T> FromConstexpr_ArrayFromAsyncLabels_constexpr_kRejectPromise_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncLabels p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Uint32T> tmp0;
  TNode<Uint32T> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.Uint32Constant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<Uint32T>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateStepSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateAwaitedValueSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateLenSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateIndexSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolvePromiseSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolvePromiseFunctionSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveOnFulfilledFunctionSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveOnRejectedFunctionSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResultArraySlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveIteratorSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveNextMethodSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveErrorSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveMapfnSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveThisArgSlot_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveLength_0(compiler::CodeAssemblerState* state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = ca_.IntPtrConstant(CastToUnderlyingTypeIfEnum(p_o));
    tmp1 = (TNode<IntPtrT>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<IntPtrT>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveResumeStateStepSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateStepSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveResumeStateStepSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveResumeStateAwaitedValueSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateAwaitedValueSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveResumeStateAwaitedValueSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveResumeStateLenSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateLenSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveResumeStateLenSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveResumeStateIndexSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResumeStateIndexSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveResumeStateIndexSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolvePromiseSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolvePromiseSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolvePromiseSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolvePromiseFunctionSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolvePromiseFunctionSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolvePromiseFunctionSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveOnFulfilledFunctionSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveOnFulfilledFunctionSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveOnFulfilledFunctionSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveOnRejectedFunctionSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveOnRejectedFunctionSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveOnRejectedFunctionSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveResultArraySlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveResultArraySlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveResultArraySlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveIteratorSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveIteratorSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveIteratorSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveNextMethodSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveNextMethodSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveNextMethodSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveErrorSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveErrorSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveErrorSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveMapfnSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveMapfnSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveMapfnSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=31&c=1
TNode<IntPtrT> kArrayFromAsyncResolveThisArgSlot_0(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
  TNode<IntPtrT> tmp0;
    tmp0 = FromConstexpr_ArrayFromAsyncResolveContextSlots_constexpr_kArrayFromAsyncResolveThisArgSlot_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveThisArgSlot);
  TNode<IntPtrT> tmp1;
    tmp1 = (TNode<IntPtrT>{tmp0});
  return TNode<IntPtrT>{tmp1};}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=61&c=1
TNode<Context> CreateArrayFromAsyncResolveContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructArrayFromAsyncResumeState_0 p_resumeState, TNode<JSPromise> p_promise, TNode<JSReceiver> p_promiseFun, TNode<Map> p_map, TNode<JSReceiver> p_iterator, TNode<Object> p_next, TNode<JSReceiver> p_arr, TNode<Object> p_error, TNode<Object> p_mapfn, TNode<Object> p_thisArg, TNode<NativeContext> p_nativeContext) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Context> tmp1;
  TNode<Context> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<IntPtrT> tmp10;
  TNode<SharedFunctionInfo> tmp11;
  TNode<JSFunction> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<SharedFunctionInfo> tmp14;
  TNode<JSFunction> tmp15;
  TNode<IntPtrT> tmp16;
  TNode<IntPtrT> tmp17;
  TNode<IntPtrT> tmp18;
  TNode<IntPtrT> tmp19;
  TNode<IntPtrT> tmp20;
  TNode<IntPtrT> tmp21;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = FromConstexpr_intptr_constexpr_intptr_0(state_, ArrayBuiltins::ArrayFromAsyncResolveContextSlots::kArrayFromAsyncResolveLength);
    tmp1 = AllocateSyntheticFunctionContext_1(state_, TNode<NativeContext>{p_nativeContext}, TNode<IntPtrT>{tmp0});
    tmp2 = (TNode<Context>{tmp1});
    tmp3 = kArrayFromAsyncResolveResumeStateStepSlot_0(state_);
    tmp4 = SmiTag_ArrayFromAsyncLabels_0(state_, TNode<Uint32T>{p_resumeState.step});
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_SmiTagged_ArrayFromAsyncLabels_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp3}, TNode<Smi>{tmp4});
    tmp5 = kArrayFromAsyncResolveResumeStateAwaitedValueSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_JSAny_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp5}, TNode<Object>{p_resumeState.awaitedValue});
    tmp6 = kArrayFromAsyncResolveResumeStateLenSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_Smi_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp6}, TNode<Smi>{p_resumeState.len});
    tmp7 = kArrayFromAsyncResolveResumeStateIndexSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_Smi_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp7}, TNode<Smi>{p_resumeState.index});
    tmp8 = kArrayFromAsyncResolvePromiseSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSPromise_JSPromise_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp8}, TNode<JSPromise>{p_promise});
    tmp9 = kArrayFromAsyncResolvePromiseFunctionSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_JSReceiver_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp9}, TNode<JSReceiver>{p_promiseFun});
    tmp10 = kArrayFromAsyncResolveOnFulfilledFunctionSlot_0(state_);
    tmp11 = CodeStubAssembler(state_).ArrayFromAsyncOnFulfilledSharedFunConstant();
    tmp12 = CodeStubAssembler(state_).AllocateFunctionWithMapAndContext(TNode<Map>{p_map}, TNode<SharedFunctionInfo>{tmp11}, TNode<Context>{tmp2});
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Undefined_OR_JSFunction_JSFunction_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp10}, TNode<JSFunction>{tmp12});
    tmp13 = kArrayFromAsyncResolveOnRejectedFunctionSlot_0(state_);
    tmp14 = CodeStubAssembler(state_).ArrayFromAsyncOnRejectedSharedFunConstant();
    tmp15 = CodeStubAssembler(state_).AllocateFunctionWithMapAndContext(TNode<Map>{p_map}, TNode<SharedFunctionInfo>{tmp14}, TNode<Context>{tmp2});
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Undefined_OR_JSFunction_JSFunction_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp13}, TNode<JSFunction>{tmp15});
    tmp16 = kArrayFromAsyncResolveResultArraySlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_JSReceiver_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp16}, TNode<JSReceiver>{p_arr});
    tmp17 = kArrayFromAsyncResolveIteratorSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_JSReceiver_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp17}, TNode<JSReceiver>{p_iterator});
    tmp18 = kArrayFromAsyncResolveNextMethodSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_JSAny_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp18}, TNode<Object>{p_next});
    tmp19 = kArrayFromAsyncResolveErrorSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_JSAny_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp19}, TNode<Object>{p_error});
    tmp20 = kArrayFromAsyncResolveMapfnSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_JSAny_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp20}, TNode<Object>{p_mapfn});
    tmp21 = kArrayFromAsyncResolveThisArgSlot_0(state_);
    InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_JSAny_0(state_, TNode<Context>{tmp2}, TNode<IntPtrT>{tmp21}, TNode<Object>{p_thisArg});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Context>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=138&c=1
TorqueStructIteratorRecord GetIteratorRecordFromArrayFromAsyncResolveContext_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<IntPtrT> tmp0;
  TNode<Object> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<JSReceiver> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = kArrayFromAsyncResolveIteratorSlot_0(state_);
    std::tie(tmp1, tmp2) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp0}).Flatten();
    tmp3 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp1, tmp2});
    tmp4 = kArrayFromAsyncResolveNextMethodSlot_0(state_);
    std::tie(tmp5, tmp6) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp4}).Flatten();
    tmp7 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp5, tmp6});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructIteratorRecord{TNode<JSReceiver>{tmp3}, TNode<Object>{tmp7}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=151&c=1
TNode<Object> CreateArrayFromIterableAsynchronously_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block35(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block42(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block43(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block53(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block54(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Object, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block58(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block59(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block62(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block63(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block65(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block68(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block69(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block66(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Smi, Object> block71(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Object, Object> block74(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Object, Object> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block78(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block79(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block81(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block82(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block83(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, Smi, Smi> block84(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, Smi> block85(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block86(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block89(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block90(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Smi> block94(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block92(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block95(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block93(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block98(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block96(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block100(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block97(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block103(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block104(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block101(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block105(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block102(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block106(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, BoolT> block99(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, BoolT> block107(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, BoolT> block110(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, BoolT> block108(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object, BoolT> block111(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, BoolT> block109(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block114(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block115(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block112(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block117(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Smi> block118(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block119(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block120(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block113(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block123(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block124(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block121(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Smi> block126(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object> block127(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block122(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block130(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block131(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block128(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block133(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block134(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block129(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block137(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block138(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block135(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block140(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block141(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block146(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block145(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object, Object> block144(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block136(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T, Uint32T> block149(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object, Uint32T> block150(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block147(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block151(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block148(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block139(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block125(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block91(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block155(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block154(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block156(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Map> tmp0;
      TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
      TNode<Object> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
      TNode<Object> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<Object> tmp16;
  TNode<IntPtrT> tmp17;
      TNode<Object> tmp19;
  TNode<JSReceiver> tmp20;
  TNode<IntPtrT> tmp21;
  TNode<Object> tmp22;
  TNode<IntPtrT> tmp23;
      TNode<Object> tmp25;
  TNode<Smi> tmp26;
  TNode<Smi> tmp27;
  TNode<Uint32T> tmp28;
      TNode<Object> tmp30;
  TNode<IntPtrT> tmp31;
  TNode<Object> tmp32;
  TNode<IntPtrT> tmp33;
      TNode<Object> tmp35;
  TNode<Object> tmp36;
  TNode<IntPtrT> tmp37;
  TNode<Object> tmp38;
  TNode<IntPtrT> tmp39;
      TNode<Object> tmp41;
  TNode<Smi> tmp42;
  TNode<IntPtrT> tmp43;
  TNode<Object> tmp44;
  TNode<IntPtrT> tmp45;
      TNode<Object> tmp47;
  TNode<Smi> tmp48;
  TNode<Undefined> tmp49;
  TNode<Undefined> tmp50;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerExceptionHandlerLabel catch1__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch1__label);
    tmp0 = GetIteratorResultMap_0(state_, TNode<Context>{p_context});
    }
    if (catch1__label.is_used()) {
      compiler::CodeAssemblerLabel catch1_skip(&ca_);
      ca_.Goto(&catch1_skip);
      ca_.Bind(&catch1__label, &tmp2);
      ca_.Goto(&block4);
      ca_.Bind(&catch1_skip);
    }
    tmp3 = kArrayFromAsyncResolveMapfnSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch6__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch6__label);
    std::tie(tmp4, tmp5) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp3}).Flatten();
    }
    if (catch6__label.is_used()) {
      compiler::CodeAssemblerLabel catch6_skip(&ca_);
      ca_.Goto(&catch6_skip);
      ca_.Bind(&catch6__label, &tmp7);
      ca_.Goto(&block5);
      ca_.Bind(&catch6_skip);
    }
    tmp8 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp4, tmp5});
    tmp9 = kArrayFromAsyncResolveThisArgSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch12__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch12__label);
    std::tie(tmp10, tmp11) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp9}).Flatten();
    }
    if (catch12__label.is_used()) {
      compiler::CodeAssemblerLabel catch12_skip(&ca_);
      ca_.Goto(&catch12_skip);
      ca_.Bind(&catch12__label, &tmp13);
      ca_.Goto(&block6);
      ca_.Bind(&catch12_skip);
    }
    tmp14 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp15 = kArrayFromAsyncResolveResultArraySlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch18__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch18__label);
    std::tie(tmp16, tmp17) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp15}).Flatten();
    }
    if (catch18__label.is_used()) {
      compiler::CodeAssemblerLabel catch18_skip(&ca_);
      ca_.Goto(&catch18_skip);
      ca_.Bind(&catch18__label, &tmp19);
      ca_.Goto(&block7);
      ca_.Bind(&catch18_skip);
    }
    tmp20 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp16, tmp17});
    tmp21 = kArrayFromAsyncResolveResumeStateStepSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch24__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch24__label);
    std::tie(tmp22, tmp23) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp21}).Flatten();
    }
    if (catch24__label.is_used()) {
      compiler::CodeAssemblerLabel catch24_skip(&ca_);
      ca_.Goto(&catch24_skip);
      ca_.Bind(&catch24__label, &tmp25);
      ca_.Goto(&block8);
      ca_.Bind(&catch24_skip);
    }
    tmp26 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp22, tmp23});
    tmp27 = (TNode<Smi>{tmp26});
    compiler::CodeAssemblerExceptionHandlerLabel catch29__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch29__label);
    tmp28 = SmiUntag_ArrayFromAsyncLabels_0(state_, TNode<Smi>{tmp27});
    }
    if (catch29__label.is_used()) {
      compiler::CodeAssemblerLabel catch29_skip(&ca_);
      ca_.Goto(&catch29_skip);
      ca_.Bind(&catch29__label, &tmp30);
      ca_.Goto(&block9);
      ca_.Bind(&catch29_skip);
    }
    tmp31 = kArrayFromAsyncResolveResumeStateAwaitedValueSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch34__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch34__label);
    std::tie(tmp32, tmp33) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp31}).Flatten();
    }
    if (catch34__label.is_used()) {
      compiler::CodeAssemblerLabel catch34_skip(&ca_);
      ca_.Goto(&catch34_skip);
      ca_.Bind(&catch34__label, &tmp35);
      ca_.Goto(&block10);
      ca_.Bind(&catch34_skip);
    }
    tmp36 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp32, tmp33});
    tmp37 = kArrayFromAsyncResolveResumeStateLenSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch40__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch40__label);
    std::tie(tmp38, tmp39) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp37}).Flatten();
    }
    if (catch40__label.is_used()) {
      compiler::CodeAssemblerLabel catch40_skip(&ca_);
      ca_.Goto(&catch40_skip);
      ca_.Bind(&catch40__label, &tmp41);
      ca_.Goto(&block11);
      ca_.Bind(&catch40_skip);
    }
    tmp42 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp38, tmp39});
    tmp43 = kArrayFromAsyncResolveResumeStateIndexSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch46__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch46__label);
    std::tie(tmp44, tmp45) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp43}).Flatten();
    }
    if (catch46__label.is_used()) {
      compiler::CodeAssemblerLabel catch46_skip(&ca_);
      ca_.Goto(&catch46_skip);
      ca_.Bind(&catch46__label, &tmp47);
      ca_.Goto(&block12);
      ca_.Bind(&catch46_skip);
    }
    tmp48 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp44, tmp45});
    tmp49 = Undefined_0(state_);
    tmp50 = Undefined_0(state_);
    ca_.Goto(&block15, tmp28, tmp48, tmp49, tmp50);
  }

  TNode<HeapObject> tmp51;
  if (block4.is_used()) {
    ca_.Bind(&block4);
    tmp51 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp2, tmp51);
  }

  TNode<HeapObject> tmp52;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp52 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp7, tmp52);
  }

  TNode<HeapObject> tmp53;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp53 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp13, tmp53);
  }

  TNode<HeapObject> tmp54;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    tmp54 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp19, tmp54);
  }

  TNode<HeapObject> tmp55;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp55 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp25, tmp55);
  }

  TNode<HeapObject> tmp56;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp56 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp30, tmp56);
  }

  TNode<HeapObject> tmp57;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp57 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp35, tmp57);
  }

  TNode<HeapObject> tmp58;
  if (block11.is_used()) {
    ca_.Bind(&block11);
    tmp58 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp41, tmp58);
  }

  TNode<HeapObject> tmp59;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp59 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp47, tmp59);
  }

  TNode<Uint32T> phi_bb15_5;
  TNode<Smi> phi_bb15_8;
  TNode<Object> phi_bb15_9;
  TNode<Object> phi_bb15_10;
  TNode<BoolT> tmp60;
      TNode<Object> tmp62;
  if (block15.is_used()) {
    ca_.Bind(&block15, &phi_bb15_5, &phi_bb15_8, &phi_bb15_9, &phi_bb15_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch61__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch61__label);
    tmp60 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch61__label.is_used()) {
      compiler::CodeAssemblerLabel catch61_skip(&ca_);
      ca_.Goto(&catch61_skip);
      ca_.Bind(&catch61__label, &tmp62);
      ca_.Goto(&block16, phi_bb15_5, phi_bb15_8, phi_bb15_9, phi_bb15_10);
      ca_.Bind(&catch61_skip);
    }
    ca_.Branch(tmp60, &block13, std::vector<compiler::Node*>{phi_bb15_5, phi_bb15_8, phi_bb15_9, phi_bb15_10}, &block14, std::vector<compiler::Node*>{phi_bb15_5, phi_bb15_8, phi_bb15_9, phi_bb15_10});
  }

  TNode<Uint32T> phi_bb16_5;
  TNode<Smi> phi_bb16_8;
  TNode<Object> phi_bb16_9;
  TNode<Object> phi_bb16_10;
  TNode<HeapObject> tmp63;
  if (block16.is_used()) {
    ca_.Bind(&block16, &phi_bb16_5, &phi_bb16_8, &phi_bb16_9, &phi_bb16_10);
    tmp63 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp62, tmp63);
  }

  TNode<Uint32T> phi_bb13_5;
  TNode<Smi> phi_bb13_8;
  TNode<Object> phi_bb13_9;
  TNode<Object> phi_bb13_10;
  TNode<Uint32T> tmp64;
      TNode<Object> tmp66;
  TNode<BoolT> tmp67;
      TNode<Object> tmp69;
  if (block13.is_used()) {
    ca_.Bind(&block13, &phi_bb13_5, &phi_bb13_8, &phi_bb13_9, &phi_bb13_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch65__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch65__label);
    tmp64 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetIteratorStep);
    }
    if (catch65__label.is_used()) {
      compiler::CodeAssemblerLabel catch65_skip(&ca_);
      ca_.Goto(&catch65_skip);
      ca_.Bind(&catch65__label, &tmp66);
      ca_.Goto(&block19, phi_bb13_5, phi_bb13_8, phi_bb13_9, phi_bb13_10, phi_bb13_5, phi_bb13_5);
      ca_.Bind(&catch65_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch68__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch68__label);
    tmp67 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb13_5}, TNode<Uint32T>{tmp64});
    }
    if (catch68__label.is_used()) {
      compiler::CodeAssemblerLabel catch68_skip(&ca_);
      ca_.Goto(&catch68_skip);
      ca_.Bind(&catch68__label, &tmp69);
      ca_.Goto(&block20, phi_bb13_5, phi_bb13_8, phi_bb13_9, phi_bb13_10, phi_bb13_5);
      ca_.Bind(&catch68_skip);
    }
    ca_.Branch(tmp67, &block17, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_8, phi_bb13_9, phi_bb13_10}, &block18, std::vector<compiler::Node*>{phi_bb13_5, phi_bb13_8, phi_bb13_9, phi_bb13_10});
  }

  TNode<Uint32T> phi_bb19_5;
  TNode<Smi> phi_bb19_8;
  TNode<Object> phi_bb19_9;
  TNode<Object> phi_bb19_10;
  TNode<Uint32T> phi_bb19_11;
  TNode<Uint32T> phi_bb19_12;
  TNode<HeapObject> tmp70;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_5, &phi_bb19_8, &phi_bb19_9, &phi_bb19_10, &phi_bb19_11, &phi_bb19_12);
    tmp70 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp66, tmp70);
  }

  TNode<Uint32T> phi_bb20_5;
  TNode<Smi> phi_bb20_8;
  TNode<Object> phi_bb20_9;
  TNode<Object> phi_bb20_10;
  TNode<Uint32T> phi_bb20_11;
  TNode<HeapObject> tmp71;
  if (block20.is_used()) {
    ca_.Bind(&block20, &phi_bb20_5, &phi_bb20_8, &phi_bb20_9, &phi_bb20_10, &phi_bb20_11);
    tmp71 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp69, tmp71);
  }

  TNode<Uint32T> phi_bb17_5;
  TNode<Smi> phi_bb17_8;
  TNode<Object> phi_bb17_9;
  TNode<Object> phi_bb17_10;
  TNode<JSReceiver> tmp72;
  TNode<Object> tmp73;
      TNode<Object> tmp75;
  TNode<Object> tmp76;
      TNode<Object> tmp78;
  TNode<Uint32T> tmp79;
      TNode<Object> tmp81;
  TNode<Object> tmp82;
      TNode<Object> tmp84;
  if (block17.is_used()) {
    ca_.Bind(&block17, &phi_bb17_5, &phi_bb17_8, &phi_bb17_9, &phi_bb17_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch74__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch74__label);
    std::tie(tmp72, tmp73) = GetIteratorRecordFromArrayFromAsyncResolveContext_0(state_, TNode<Context>{p_context}).Flatten();
    }
    if (catch74__label.is_used()) {
      compiler::CodeAssemblerLabel catch74_skip(&ca_);
      ca_.Goto(&catch74_skip);
      ca_.Bind(&catch74__label, &tmp75);
      ca_.Goto(&block22, phi_bb17_5, phi_bb17_8, phi_bb17_9, phi_bb17_10);
      ca_.Bind(&catch74_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch77__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch77__label);
    tmp76 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp73}, TNode<Object>{tmp72});
    }
    if (catch77__label.is_used()) {
      compiler::CodeAssemblerLabel catch77_skip(&ca_);
      ca_.Goto(&catch77_skip);
      ca_.Bind(&catch77__label, &tmp78);
      ca_.Goto(&block23, phi_bb17_5, phi_bb17_8, phi_bb17_9, phi_bb17_10);
      ca_.Bind(&catch77_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch80__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch80__label);
    tmp79 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kCheckIteratorValueAndMapping_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kCheckIteratorValueAndMapping);
    }
    if (catch80__label.is_used()) {
      compiler::CodeAssemblerLabel catch80_skip(&ca_);
      ca_.Goto(&catch80_skip);
      ca_.Bind(&catch80__label, &tmp81);
      ca_.Goto(&block24, phi_bb17_5, phi_bb17_8, phi_bb17_9, phi_bb17_10);
      ca_.Bind(&catch80_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch83__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch83__label);
    tmp82 = ArrayFromAsyncAwaitPoint_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp79}, TNode<Object>{tmp76});
    }
    if (catch83__label.is_used()) {
      compiler::CodeAssemblerLabel catch83_skip(&ca_);
      ca_.Goto(&catch83_skip);
      ca_.Bind(&catch83__label, &tmp84);
      ca_.Goto(&block25, phi_bb17_5, phi_bb17_8, phi_bb17_9, phi_bb17_10);
      ca_.Bind(&catch83_skip);
    }
    ca_.Goto(&block1, tmp82);
  }

  TNode<Uint32T> phi_bb22_5;
  TNode<Smi> phi_bb22_8;
  TNode<Object> phi_bb22_9;
  TNode<Object> phi_bb22_10;
  TNode<HeapObject> tmp85;
  if (block22.is_used()) {
    ca_.Bind(&block22, &phi_bb22_5, &phi_bb22_8, &phi_bb22_9, &phi_bb22_10);
    tmp85 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp75, tmp85);
  }

  TNode<Uint32T> phi_bb23_5;
  TNode<Smi> phi_bb23_8;
  TNode<Object> phi_bb23_9;
  TNode<Object> phi_bb23_10;
  TNode<HeapObject> tmp86;
  if (block23.is_used()) {
    ca_.Bind(&block23, &phi_bb23_5, &phi_bb23_8, &phi_bb23_9, &phi_bb23_10);
    tmp86 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp78, tmp86);
  }

  TNode<Uint32T> phi_bb24_5;
  TNode<Smi> phi_bb24_8;
  TNode<Object> phi_bb24_9;
  TNode<Object> phi_bb24_10;
  TNode<HeapObject> tmp87;
  if (block24.is_used()) {
    ca_.Bind(&block24, &phi_bb24_5, &phi_bb24_8, &phi_bb24_9, &phi_bb24_10);
    tmp87 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp81, tmp87);
  }

  TNode<Uint32T> phi_bb25_5;
  TNode<Smi> phi_bb25_8;
  TNode<Object> phi_bb25_9;
  TNode<Object> phi_bb25_10;
  TNode<HeapObject> tmp88;
  if (block25.is_used()) {
    ca_.Bind(&block25, &phi_bb25_5, &phi_bb25_8, &phi_bb25_9, &phi_bb25_10);
    tmp88 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp84, tmp88);
  }

  TNode<Uint32T> phi_bb18_5;
  TNode<Smi> phi_bb18_8;
  TNode<Object> phi_bb18_9;
  TNode<Object> phi_bb18_10;
  TNode<Uint32T> tmp89;
      TNode<Object> tmp91;
  TNode<BoolT> tmp92;
      TNode<Object> tmp94;
  if (block18.is_used()) {
    ca_.Bind(&block18, &phi_bb18_5, &phi_bb18_8, &phi_bb18_9, &phi_bb18_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch90__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch90__label);
    tmp89 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kCheckIteratorValueAndMapping);
    }
    if (catch90__label.is_used()) {
      compiler::CodeAssemblerLabel catch90_skip(&ca_);
      ca_.Goto(&catch90_skip);
      ca_.Bind(&catch90__label, &tmp91);
      ca_.Goto(&block28, phi_bb18_5, phi_bb18_8, phi_bb18_9, phi_bb18_10, phi_bb18_5, phi_bb18_5);
      ca_.Bind(&catch90_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch93__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch93__label);
    tmp92 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb18_5}, TNode<Uint32T>{tmp89});
    }
    if (catch93__label.is_used()) {
      compiler::CodeAssemblerLabel catch93_skip(&ca_);
      ca_.Goto(&catch93_skip);
      ca_.Bind(&catch93__label, &tmp94);
      ca_.Goto(&block29, phi_bb18_5, phi_bb18_8, phi_bb18_9, phi_bb18_10, phi_bb18_5);
      ca_.Bind(&catch93_skip);
    }
    ca_.Branch(tmp92, &block26, std::vector<compiler::Node*>{phi_bb18_5, phi_bb18_8, phi_bb18_9, phi_bb18_10}, &block27, std::vector<compiler::Node*>{phi_bb18_5, phi_bb18_8, phi_bb18_9, phi_bb18_10});
  }

  TNode<Uint32T> phi_bb28_5;
  TNode<Smi> phi_bb28_8;
  TNode<Object> phi_bb28_9;
  TNode<Object> phi_bb28_10;
  TNode<Uint32T> phi_bb28_11;
  TNode<Uint32T> phi_bb28_12;
  TNode<HeapObject> tmp95;
  if (block28.is_used()) {
    ca_.Bind(&block28, &phi_bb28_5, &phi_bb28_8, &phi_bb28_9, &phi_bb28_10, &phi_bb28_11, &phi_bb28_12);
    tmp95 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp91, tmp95);
  }

  TNode<Uint32T> phi_bb29_5;
  TNode<Smi> phi_bb29_8;
  TNode<Object> phi_bb29_9;
  TNode<Object> phi_bb29_10;
  TNode<Uint32T> phi_bb29_11;
  TNode<HeapObject> tmp96;
  if (block29.is_used()) {
    ca_.Bind(&block29, &phi_bb29_5, &phi_bb29_8, &phi_bb29_9, &phi_bb29_10, &phi_bb29_11);
    tmp96 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp94, tmp96);
  }

  TNode<Uint32T> phi_bb26_5;
  TNode<Smi> phi_bb26_8;
  TNode<Object> phi_bb26_9;
  TNode<Object> phi_bb26_10;
  TNode<JSReceiver> tmp97;
      TNode<Object> tmp100;
  if (block26.is_used()) {
    ca_.Bind(&block26, &phi_bb26_5, &phi_bb26_8, &phi_bb26_9, &phi_bb26_10);
    compiler::CodeAssemblerLabel label98(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch99__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch99__label);
    tmp97 = Cast_JSReceiver_1(state_, TNode<Context>{p_context}, TNode<Object>{tmp36}, &label98);
    }
    if (catch99__label.is_used()) {
      compiler::CodeAssemblerLabel catch99_skip(&ca_);
      ca_.Goto(&catch99_skip);
      ca_.Bind(&catch99__label, &tmp100);
      ca_.Goto(&block35, phi_bb26_5, phi_bb26_8, phi_bb26_9, phi_bb26_10);
      ca_.Bind(&catch99_skip);
    }
    ca_.Goto(&block33, phi_bb26_5, phi_bb26_8, phi_bb26_9, phi_bb26_10);
    if (label98.is_used()) {
      ca_.Bind(&label98);
      ca_.Goto(&block34, phi_bb26_5, phi_bb26_8, phi_bb26_9, phi_bb26_10);
    }
  }

  TNode<Uint32T> phi_bb35_5;
  TNode<Smi> phi_bb35_8;
  TNode<Object> phi_bb35_9;
  TNode<Object> phi_bb35_10;
  TNode<HeapObject> tmp101;
  if (block35.is_used()) {
    ca_.Bind(&block35, &phi_bb35_5, &phi_bb35_8, &phi_bb35_9, &phi_bb35_10);
    tmp101 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp100, tmp101);
  }

  TNode<Uint32T> phi_bb34_5;
  TNode<Smi> phi_bb34_8;
  TNode<Object> phi_bb34_9;
  TNode<Object> phi_bb34_10;
      TNode<Object> tmp103;
  if (block34.is_used()) {
    ca_.Bind(&block34, &phi_bb34_5, &phi_bb34_8, &phi_bb34_9, &phi_bb34_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch102__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch102__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kIteratorResultNotAnObject, "Array.fromAsync");
    }
    if (catch102__label.is_used()) {
      compiler::CodeAssemblerLabel catch102_skip(&ca_);
      ca_.Bind(&catch102__label, &tmp103);
      ca_.Goto(&block36, phi_bb34_5, phi_bb34_8, phi_bb34_9, phi_bb34_10);
    }
  }

  TNode<Uint32T> phi_bb33_5;
  TNode<Smi> phi_bb33_8;
  TNode<Object> phi_bb33_9;
  TNode<Object> phi_bb33_10;
      TNode<Object> tmp106;
  if (block33.is_used()) {
    ca_.Bind(&block33, &phi_bb33_5, &phi_bb33_8, &phi_bb33_9, &phi_bb33_10);
    compiler::CodeAssemblerLabel label104(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch105__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch105__label);
    IteratorBuiltinsAssembler(state_).IteratorComplete(TNode<Context>{p_context}, TNode<JSReceiver>{tmp97}, TNode<Map>{tmp0}, &label104);
    }
    if (catch105__label.is_used()) {
      compiler::CodeAssemblerLabel catch105_skip(&ca_);
      ca_.Goto(&catch105_skip);
      ca_.Bind(&catch105__label, &tmp106);
      ca_.Goto(&block41, phi_bb33_5, phi_bb33_8, phi_bb33_9, phi_bb33_10);
      ca_.Bind(&catch105_skip);
    }
    ca_.Goto(&block39, phi_bb33_5, phi_bb33_8, phi_bb33_9, phi_bb33_10);
    if (label104.is_used()) {
      ca_.Bind(&label104);
      ca_.Goto(&block40, phi_bb33_5, phi_bb33_8, phi_bb33_9, phi_bb33_10);
    }
  }

  TNode<Uint32T> phi_bb36_5;
  TNode<Smi> phi_bb36_8;
  TNode<Object> phi_bb36_9;
  TNode<Object> phi_bb36_10;
  TNode<HeapObject> tmp107;
  if (block36.is_used()) {
    ca_.Bind(&block36, &phi_bb36_5, &phi_bb36_8, &phi_bb36_9, &phi_bb36_10);
    tmp107 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp103, tmp107);
  }

  TNode<Uint32T> phi_bb41_5;
  TNode<Smi> phi_bb41_8;
  TNode<Object> phi_bb41_9;
  TNode<Object> phi_bb41_10;
  TNode<HeapObject> tmp108;
  if (block41.is_used()) {
    ca_.Bind(&block41, &phi_bb41_5, &phi_bb41_8, &phi_bb41_9, &phi_bb41_10);
    tmp108 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp106, tmp108);
  }

  TNode<Uint32T> phi_bb40_5;
  TNode<Smi> phi_bb40_8;
  TNode<Object> phi_bb40_9;
  TNode<Object> phi_bb40_10;
      TNode<Object> tmp110;
  TNode<Uint32T> tmp111;
      TNode<Object> tmp113;
  if (block40.is_used()) {
    ca_.Bind(&block40, &phi_bb40_5, &phi_bb40_8, &phi_bb40_9, &phi_bb40_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch109__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch109__label);
    CodeStubAssembler(state_).SetPropertyLength(TNode<Context>{p_context}, TNode<Object>{tmp20}, TNode<Number>{phi_bb40_8});
    }
    if (catch109__label.is_used()) {
      compiler::CodeAssemblerLabel catch109_skip(&ca_);
      ca_.Goto(&catch109_skip);
      ca_.Bind(&catch109__label, &tmp110);
      ca_.Goto(&block49, phi_bb40_5, phi_bb40_8, phi_bb40_9, phi_bb40_10, phi_bb40_8);
      ca_.Bind(&catch109_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch112__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch112__label);
    tmp111 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kDoneAndResolvePromise_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kDoneAndResolvePromise);
    }
    if (catch112__label.is_used()) {
      compiler::CodeAssemblerLabel catch112_skip(&ca_);
      ca_.Goto(&catch112_skip);
      ca_.Bind(&catch112__label, &tmp113);
      ca_.Goto(&block50, phi_bb40_5, phi_bb40_8, phi_bb40_9, phi_bb40_10);
      ca_.Bind(&catch112_skip);
    }
    ca_.Goto(&block37, tmp111, phi_bb40_8, phi_bb40_9, phi_bb40_10);
  }

  TNode<Uint32T> phi_bb39_5;
  TNode<Smi> phi_bb39_8;
  TNode<Object> phi_bb39_9;
  TNode<Object> phi_bb39_10;
  TNode<Object> tmp114;
      TNode<Object> tmp116;
  TNode<Undefined> tmp117;
  TNode<BoolT> tmp118;
      TNode<Object> tmp120;
  if (block39.is_used()) {
    ca_.Bind(&block39, &phi_bb39_5, &phi_bb39_8, &phi_bb39_9, &phi_bb39_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch115__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch115__label);
    tmp114 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{p_context}, TNode<JSReceiver>{tmp97}, TNode<Map>{tmp0});
    }
    if (catch115__label.is_used()) {
      compiler::CodeAssemblerLabel catch115_skip(&ca_);
      ca_.Goto(&catch115_skip);
      ca_.Bind(&catch115__label, &tmp116);
      ca_.Goto(&block42, phi_bb39_5, phi_bb39_8, phi_bb39_9, phi_bb39_10);
      ca_.Bind(&catch115_skip);
    }
    tmp117 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch119__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch119__label);
    tmp118 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp8}, TNode<HeapObject>{tmp117});
    }
    if (catch119__label.is_used()) {
      compiler::CodeAssemblerLabel catch119_skip(&ca_);
      ca_.Goto(&catch119_skip);
      ca_.Bind(&catch119__label, &tmp120);
      ca_.Goto(&block43, phi_bb39_5, phi_bb39_8, phi_bb39_9);
      ca_.Bind(&catch119_skip);
    }
    ca_.Branch(tmp118, &block44, std::vector<compiler::Node*>{phi_bb39_5, phi_bb39_8, phi_bb39_9}, &block45, std::vector<compiler::Node*>{phi_bb39_5, phi_bb39_8, phi_bb39_9});
  }

  TNode<Uint32T> phi_bb42_5;
  TNode<Smi> phi_bb42_8;
  TNode<Object> phi_bb42_9;
  TNode<Object> phi_bb42_10;
  TNode<HeapObject> tmp121;
  if (block42.is_used()) {
    ca_.Bind(&block42, &phi_bb42_5, &phi_bb42_8, &phi_bb42_9, &phi_bb42_10);
    tmp121 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp116, tmp121);
  }

  TNode<Uint32T> phi_bb43_5;
  TNode<Smi> phi_bb43_8;
  TNode<Object> phi_bb43_9;
  TNode<HeapObject> tmp122;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_5, &phi_bb43_8, &phi_bb43_9);
    tmp122 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp120, tmp122);
  }

  TNode<Uint32T> phi_bb44_5;
  TNode<Smi> phi_bb44_8;
  TNode<Object> phi_bb44_9;
  TNode<Uint32T> tmp123;
      TNode<Object> tmp125;
  if (block44.is_used()) {
    ca_.Bind(&block44, &phi_bb44_5, &phi_bb44_8, &phi_bb44_9);
    compiler::CodeAssemblerExceptionHandlerLabel catch124__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch124__label);
    tmp123 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kIteratorMapping_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kIteratorMapping);
    }
    if (catch124__label.is_used()) {
      compiler::CodeAssemblerLabel catch124_skip(&ca_);
      ca_.Goto(&catch124_skip);
      ca_.Bind(&catch124__label, &tmp125);
      ca_.Goto(&block47, phi_bb44_5, phi_bb44_8, phi_bb44_9);
      ca_.Bind(&catch124_skip);
    }
    ca_.Goto(&block46, tmp123, phi_bb44_8, phi_bb44_9);
  }

  TNode<Uint32T> phi_bb47_5;
  TNode<Smi> phi_bb47_8;
  TNode<Object> phi_bb47_9;
  TNode<HeapObject> tmp126;
  if (block47.is_used()) {
    ca_.Bind(&block47, &phi_bb47_5, &phi_bb47_8, &phi_bb47_9);
    tmp126 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp125, tmp126);
  }

  TNode<Uint32T> phi_bb45_5;
  TNode<Smi> phi_bb45_8;
  TNode<Object> phi_bb45_9;
  TNode<Uint32T> tmp127;
      TNode<Object> tmp129;
  if (block45.is_used()) {
    ca_.Bind(&block45, &phi_bb45_5, &phi_bb45_8, &phi_bb45_9);
    compiler::CodeAssemblerExceptionHandlerLabel catch128__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch128__label);
    tmp127 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kAddIteratorValueToTheArray_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kAddIteratorValueToTheArray);
    }
    if (catch128__label.is_used()) {
      compiler::CodeAssemblerLabel catch128_skip(&ca_);
      ca_.Goto(&catch128_skip);
      ca_.Bind(&catch128__label, &tmp129);
      ca_.Goto(&block48, phi_bb45_5, phi_bb45_8);
      ca_.Bind(&catch128_skip);
    }
    ca_.Goto(&block46, tmp127, phi_bb45_8, tmp114);
  }

  TNode<Uint32T> phi_bb48_5;
  TNode<Smi> phi_bb48_8;
  TNode<HeapObject> tmp130;
  if (block48.is_used()) {
    ca_.Bind(&block48, &phi_bb48_5, &phi_bb48_8);
    tmp130 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp129, tmp130);
  }

  TNode<Uint32T> phi_bb46_5;
  TNode<Smi> phi_bb46_8;
  TNode<Object> phi_bb46_9;
  if (block46.is_used()) {
    ca_.Bind(&block46, &phi_bb46_5, &phi_bb46_8, &phi_bb46_9);
    ca_.Goto(&block37, phi_bb46_5, phi_bb46_8, phi_bb46_9, tmp114);
  }

  TNode<Uint32T> phi_bb49_5;
  TNode<Smi> phi_bb49_8;
  TNode<Object> phi_bb49_9;
  TNode<Object> phi_bb49_10;
  TNode<Smi> phi_bb49_13;
  TNode<HeapObject> tmp131;
  if (block49.is_used()) {
    ca_.Bind(&block49, &phi_bb49_5, &phi_bb49_8, &phi_bb49_9, &phi_bb49_10, &phi_bb49_13);
    tmp131 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp110, tmp131);
  }

  TNode<Uint32T> phi_bb50_5;
  TNode<Smi> phi_bb50_8;
  TNode<Object> phi_bb50_9;
  TNode<Object> phi_bb50_10;
  TNode<HeapObject> tmp132;
  if (block50.is_used()) {
    ca_.Bind(&block50, &phi_bb50_5, &phi_bb50_8, &phi_bb50_9, &phi_bb50_10);
    tmp132 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp113, tmp132);
  }

  TNode<Uint32T> phi_bb37_5;
  TNode<Smi> phi_bb37_8;
  TNode<Object> phi_bb37_9;
  TNode<Object> phi_bb37_10;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_5, &phi_bb37_8, &phi_bb37_9, &phi_bb37_10);
    ca_.Goto(&block30, phi_bb37_5, phi_bb37_8, phi_bb37_9, phi_bb37_10);
  }

  TNode<Uint32T> phi_bb27_5;
  TNode<Smi> phi_bb27_8;
  TNode<Object> phi_bb27_9;
  TNode<Object> phi_bb27_10;
  TNode<Uint32T> tmp133;
      TNode<Object> tmp135;
  TNode<BoolT> tmp136;
      TNode<Object> tmp138;
  if (block27.is_used()) {
    ca_.Bind(&block27, &phi_bb27_5, &phi_bb27_8, &phi_bb27_9, &phi_bb27_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch134__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch134__label);
    tmp133 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kIteratorMapping);
    }
    if (catch134__label.is_used()) {
      compiler::CodeAssemblerLabel catch134_skip(&ca_);
      ca_.Goto(&catch134_skip);
      ca_.Bind(&catch134__label, &tmp135);
      ca_.Goto(&block53, phi_bb27_5, phi_bb27_8, phi_bb27_9, phi_bb27_10, phi_bb27_5, phi_bb27_5);
      ca_.Bind(&catch134_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch137__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch137__label);
    tmp136 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb27_5}, TNode<Uint32T>{tmp133});
    }
    if (catch137__label.is_used()) {
      compiler::CodeAssemblerLabel catch137_skip(&ca_);
      ca_.Goto(&catch137_skip);
      ca_.Bind(&catch137__label, &tmp138);
      ca_.Goto(&block54, phi_bb27_5, phi_bb27_8, phi_bb27_9, phi_bb27_10, phi_bb27_5);
      ca_.Bind(&catch137_skip);
    }
    ca_.Branch(tmp136, &block51, std::vector<compiler::Node*>{phi_bb27_5, phi_bb27_8, phi_bb27_9, phi_bb27_10}, &block52, std::vector<compiler::Node*>{phi_bb27_5, phi_bb27_8, phi_bb27_9, phi_bb27_10});
  }

  TNode<Uint32T> phi_bb53_5;
  TNode<Smi> phi_bb53_8;
  TNode<Object> phi_bb53_9;
  TNode<Object> phi_bb53_10;
  TNode<Uint32T> phi_bb53_11;
  TNode<Uint32T> phi_bb53_12;
  TNode<HeapObject> tmp139;
  if (block53.is_used()) {
    ca_.Bind(&block53, &phi_bb53_5, &phi_bb53_8, &phi_bb53_9, &phi_bb53_10, &phi_bb53_11, &phi_bb53_12);
    tmp139 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp135, tmp139);
  }

  TNode<Uint32T> phi_bb54_5;
  TNode<Smi> phi_bb54_8;
  TNode<Object> phi_bb54_9;
  TNode<Object> phi_bb54_10;
  TNode<Uint32T> phi_bb54_11;
  TNode<HeapObject> tmp140;
  if (block54.is_used()) {
    ca_.Bind(&block54, &phi_bb54_5, &phi_bb54_8, &phi_bb54_9, &phi_bb54_10, &phi_bb54_11);
    tmp140 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp138, tmp140);
  }

  TNode<Uint32T> phi_bb51_5;
  TNode<Smi> phi_bb51_8;
  TNode<Object> phi_bb51_9;
  TNode<Object> phi_bb51_10;
  TNode<JSReceiver> tmp141;
      TNode<Object> tmp143;
  TNode<Object> tmp144;
      TNode<Object> tmp146;
  TNode<Uint32T> tmp147;
      TNode<Object> tmp149;
  TNode<Object> tmp150;
      TNode<Object> tmp152;
  if (block51.is_used()) {
    ca_.Bind(&block51, &phi_bb51_5, &phi_bb51_8, &phi_bb51_9, &phi_bb51_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch142__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch142__label);
    tmp141 = UnsafeCast_Callable_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp8});
    }
    if (catch142__label.is_used()) {
      compiler::CodeAssemblerLabel catch142_skip(&ca_);
      ca_.Goto(&catch142_skip);
      ca_.Bind(&catch142__label, &tmp143);
      ca_.Goto(&block56, phi_bb51_5, phi_bb51_8, phi_bb51_9, phi_bb51_10);
      ca_.Bind(&catch142_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch145__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch145__label);
    tmp144 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp141}, TNode<Object>{tmp14}, TNode<Object>{phi_bb51_10}, TNode<Object>{phi_bb51_8});
    }
    if (catch145__label.is_used()) {
      compiler::CodeAssemblerLabel catch145_skip(&ca_);
      ca_.Goto(&catch145_skip);
      ca_.Bind(&catch145__label, &tmp146);
      ca_.Goto(&block57, phi_bb51_5, phi_bb51_8, phi_bb51_9, phi_bb51_10, phi_bb51_10, phi_bb51_8);
      ca_.Bind(&catch145_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch148__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch148__label);
    tmp147 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetIteratorValueWithMapping_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetIteratorValueWithMapping);
    }
    if (catch148__label.is_used()) {
      compiler::CodeAssemblerLabel catch148_skip(&ca_);
      ca_.Goto(&catch148_skip);
      ca_.Bind(&catch148__label, &tmp149);
      ca_.Goto(&block58, phi_bb51_5, phi_bb51_8, phi_bb51_9, phi_bb51_10);
      ca_.Bind(&catch148_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch151__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch151__label);
    tmp150 = ArrayFromAsyncAwaitPoint_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp147}, TNode<Object>{tmp144});
    }
    if (catch151__label.is_used()) {
      compiler::CodeAssemblerLabel catch151_skip(&ca_);
      ca_.Goto(&catch151_skip);
      ca_.Bind(&catch151__label, &tmp152);
      ca_.Goto(&block59, phi_bb51_5, phi_bb51_8, phi_bb51_9, phi_bb51_10);
      ca_.Bind(&catch151_skip);
    }
    ca_.Goto(&block1, tmp150);
  }

  TNode<Uint32T> phi_bb56_5;
  TNode<Smi> phi_bb56_8;
  TNode<Object> phi_bb56_9;
  TNode<Object> phi_bb56_10;
  TNode<HeapObject> tmp153;
  if (block56.is_used()) {
    ca_.Bind(&block56, &phi_bb56_5, &phi_bb56_8, &phi_bb56_9, &phi_bb56_10);
    tmp153 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp143, tmp153);
  }

  TNode<Uint32T> phi_bb57_5;
  TNode<Smi> phi_bb57_8;
  TNode<Object> phi_bb57_9;
  TNode<Object> phi_bb57_10;
  TNode<Object> phi_bb57_14;
  TNode<Smi> phi_bb57_15;
  TNode<HeapObject> tmp154;
  if (block57.is_used()) {
    ca_.Bind(&block57, &phi_bb57_5, &phi_bb57_8, &phi_bb57_9, &phi_bb57_10, &phi_bb57_14, &phi_bb57_15);
    tmp154 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp146, tmp154);
  }

  TNode<Uint32T> phi_bb58_5;
  TNode<Smi> phi_bb58_8;
  TNode<Object> phi_bb58_9;
  TNode<Object> phi_bb58_10;
  TNode<HeapObject> tmp155;
  if (block58.is_used()) {
    ca_.Bind(&block58, &phi_bb58_5, &phi_bb58_8, &phi_bb58_9, &phi_bb58_10);
    tmp155 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp149, tmp155);
  }

  TNode<Uint32T> phi_bb59_5;
  TNode<Smi> phi_bb59_8;
  TNode<Object> phi_bb59_9;
  TNode<Object> phi_bb59_10;
  TNode<HeapObject> tmp156;
  if (block59.is_used()) {
    ca_.Bind(&block59, &phi_bb59_5, &phi_bb59_8, &phi_bb59_9, &phi_bb59_10);
    tmp156 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp152, tmp156);
  }

  TNode<Uint32T> phi_bb52_5;
  TNode<Smi> phi_bb52_8;
  TNode<Object> phi_bb52_9;
  TNode<Object> phi_bb52_10;
  TNode<Uint32T> tmp157;
      TNode<Object> tmp159;
  TNode<BoolT> tmp160;
      TNode<Object> tmp162;
  if (block52.is_used()) {
    ca_.Bind(&block52, &phi_bb52_5, &phi_bb52_8, &phi_bb52_9, &phi_bb52_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch158__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch158__label);
    tmp157 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetIteratorValueWithMapping);
    }
    if (catch158__label.is_used()) {
      compiler::CodeAssemblerLabel catch158_skip(&ca_);
      ca_.Goto(&catch158_skip);
      ca_.Bind(&catch158__label, &tmp159);
      ca_.Goto(&block62, phi_bb52_5, phi_bb52_8, phi_bb52_9, phi_bb52_10, phi_bb52_5, phi_bb52_5);
      ca_.Bind(&catch158_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch161__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch161__label);
    tmp160 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb52_5}, TNode<Uint32T>{tmp157});
    }
    if (catch161__label.is_used()) {
      compiler::CodeAssemblerLabel catch161_skip(&ca_);
      ca_.Goto(&catch161_skip);
      ca_.Bind(&catch161__label, &tmp162);
      ca_.Goto(&block63, phi_bb52_5, phi_bb52_8, phi_bb52_9, phi_bb52_10, phi_bb52_5);
      ca_.Bind(&catch161_skip);
    }
    ca_.Branch(tmp160, &block60, std::vector<compiler::Node*>{phi_bb52_5, phi_bb52_8, phi_bb52_9, phi_bb52_10}, &block61, std::vector<compiler::Node*>{phi_bb52_5, phi_bb52_8, phi_bb52_9, phi_bb52_10});
  }

  TNode<Uint32T> phi_bb62_5;
  TNode<Smi> phi_bb62_8;
  TNode<Object> phi_bb62_9;
  TNode<Object> phi_bb62_10;
  TNode<Uint32T> phi_bb62_11;
  TNode<Uint32T> phi_bb62_12;
  TNode<HeapObject> tmp163;
  if (block62.is_used()) {
    ca_.Bind(&block62, &phi_bb62_5, &phi_bb62_8, &phi_bb62_9, &phi_bb62_10, &phi_bb62_11, &phi_bb62_12);
    tmp163 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp159, tmp163);
  }

  TNode<Uint32T> phi_bb63_5;
  TNode<Smi> phi_bb63_8;
  TNode<Object> phi_bb63_9;
  TNode<Object> phi_bb63_10;
  TNode<Uint32T> phi_bb63_11;
  TNode<HeapObject> tmp164;
  if (block63.is_used()) {
    ca_.Bind(&block63, &phi_bb63_5, &phi_bb63_8, &phi_bb63_9, &phi_bb63_10, &phi_bb63_11);
    tmp164 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp162, tmp164);
  }

  TNode<Uint32T> phi_bb60_5;
  TNode<Smi> phi_bb60_8;
  TNode<Object> phi_bb60_9;
  TNode<Object> phi_bb60_10;
  TNode<Uint32T> tmp165;
      TNode<Object> tmp167;
  if (block60.is_used()) {
    ca_.Bind(&block60, &phi_bb60_5, &phi_bb60_8, &phi_bb60_9, &phi_bb60_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch166__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch166__label);
    tmp165 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kAddIteratorValueToTheArray_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kAddIteratorValueToTheArray);
    }
    if (catch166__label.is_used()) {
      compiler::CodeAssemblerLabel catch166_skip(&ca_);
      ca_.Goto(&catch166_skip);
      ca_.Bind(&catch166__label, &tmp167);
      ca_.Goto(&block65, phi_bb60_5, phi_bb60_8, phi_bb60_10);
      ca_.Bind(&catch166_skip);
    }
    ca_.Goto(&block64, tmp165, phi_bb60_8, tmp36, phi_bb60_10);
  }

  TNode<Uint32T> phi_bb65_5;
  TNode<Smi> phi_bb65_8;
  TNode<Object> phi_bb65_10;
  TNode<HeapObject> tmp168;
  if (block65.is_used()) {
    ca_.Bind(&block65, &phi_bb65_5, &phi_bb65_8, &phi_bb65_10);
    tmp168 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp167, tmp168);
  }

  TNode<Uint32T> phi_bb61_5;
  TNode<Smi> phi_bb61_8;
  TNode<Object> phi_bb61_9;
  TNode<Object> phi_bb61_10;
  TNode<Uint32T> tmp169;
      TNode<Object> tmp171;
  TNode<BoolT> tmp172;
      TNode<Object> tmp174;
  if (block61.is_used()) {
    ca_.Bind(&block61, &phi_bb61_5, &phi_bb61_8, &phi_bb61_9, &phi_bb61_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch170__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch170__label);
    tmp169 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kAddIteratorValueToTheArray);
    }
    if (catch170__label.is_used()) {
      compiler::CodeAssemblerLabel catch170_skip(&ca_);
      ca_.Goto(&catch170_skip);
      ca_.Bind(&catch170__label, &tmp171);
      ca_.Goto(&block68, phi_bb61_5, phi_bb61_8, phi_bb61_9, phi_bb61_10, phi_bb61_5, phi_bb61_5);
      ca_.Bind(&catch170_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch173__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch173__label);
    tmp172 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb61_5}, TNode<Uint32T>{tmp169});
    }
    if (catch173__label.is_used()) {
      compiler::CodeAssemblerLabel catch173_skip(&ca_);
      ca_.Goto(&catch173_skip);
      ca_.Bind(&catch173__label, &tmp174);
      ca_.Goto(&block69, phi_bb61_5, phi_bb61_8, phi_bb61_9, phi_bb61_10, phi_bb61_5);
      ca_.Bind(&catch173_skip);
    }
    ca_.Branch(tmp172, &block66, std::vector<compiler::Node*>{phi_bb61_5, phi_bb61_8, phi_bb61_9, phi_bb61_10}, &block67, std::vector<compiler::Node*>{phi_bb61_5, phi_bb61_8, phi_bb61_9, phi_bb61_10});
  }

  TNode<Uint32T> phi_bb68_5;
  TNode<Smi> phi_bb68_8;
  TNode<Object> phi_bb68_9;
  TNode<Object> phi_bb68_10;
  TNode<Uint32T> phi_bb68_11;
  TNode<Uint32T> phi_bb68_12;
  TNode<HeapObject> tmp175;
  if (block68.is_used()) {
    ca_.Bind(&block68, &phi_bb68_5, &phi_bb68_8, &phi_bb68_9, &phi_bb68_10, &phi_bb68_11, &phi_bb68_12);
    tmp175 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp171, tmp175);
  }

  TNode<Uint32T> phi_bb69_5;
  TNode<Smi> phi_bb69_8;
  TNode<Object> phi_bb69_9;
  TNode<Object> phi_bb69_10;
  TNode<Uint32T> phi_bb69_11;
  TNode<HeapObject> tmp176;
  if (block69.is_used()) {
    ca_.Bind(&block69, &phi_bb69_5, &phi_bb69_8, &phi_bb69_9, &phi_bb69_10, &phi_bb69_11);
    tmp176 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp174, tmp176);
  }

  TNode<Uint32T> phi_bb66_5;
  TNode<Smi> phi_bb66_8;
  TNode<Object> phi_bb66_9;
  TNode<Object> phi_bb66_10;
  TNode<Object> tmp177;
      TNode<Object> tmp179;
  TNode<Smi> tmp180;
      TNode<Object> tmp182;
  TNode<Smi> tmp183;
      TNode<Object> tmp185;
  TNode<IntPtrT> tmp186;
  TNode<Object> tmp187;
  TNode<IntPtrT> tmp188;
      TNode<Object> tmp190;
  TNode<Uint32T> tmp191;
      TNode<Object> tmp193;
  if (block66.is_used()) {
    ca_.Bind(&block66, &phi_bb66_5, &phi_bb66_8, &phi_bb66_9, &phi_bb66_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch178__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch178__label);
    tmp177 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), p_context, tmp20, phi_bb66_8, phi_bb66_9);
    }
    if (catch178__label.is_used()) {
      compiler::CodeAssemblerLabel catch178_skip(&ca_);
      ca_.Goto(&catch178_skip);
      ca_.Bind(&catch178__label, &tmp179);
      ca_.Goto(&block71, phi_bb66_5, phi_bb66_8, phi_bb66_9, phi_bb66_10, phi_bb66_8, phi_bb66_9);
      ca_.Bind(&catch178_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch181__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch181__label);
    tmp180 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    }
    if (catch181__label.is_used()) {
      compiler::CodeAssemblerLabel catch181_skip(&ca_);
      ca_.Goto(&catch181_skip);
      ca_.Bind(&catch181__label, &tmp182);
      ca_.Goto(&block72, phi_bb66_5, phi_bb66_8, phi_bb66_9, phi_bb66_10, phi_bb66_8, phi_bb66_8);
      ca_.Bind(&catch181_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch184__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch184__label);
    tmp183 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb66_8}, TNode<Smi>{tmp180});
    }
    if (catch184__label.is_used()) {
      compiler::CodeAssemblerLabel catch184_skip(&ca_);
      ca_.Goto(&catch184_skip);
      ca_.Bind(&catch184__label, &tmp185);
      ca_.Goto(&block73, phi_bb66_5, phi_bb66_8, phi_bb66_9, phi_bb66_10, phi_bb66_8);
      ca_.Bind(&catch184_skip);
    }
    tmp186 = kArrayFromAsyncResolveResumeStateIndexSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch189__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch189__label);
    std::tie(tmp187, tmp188) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp186}).Flatten();
    }
    if (catch189__label.is_used()) {
      compiler::CodeAssemblerLabel catch189_skip(&ca_);
      ca_.Goto(&catch189_skip);
      ca_.Bind(&catch189__label, &tmp190);
      ca_.Goto(&block74, phi_bb66_5, phi_bb66_9, phi_bb66_10);
      ca_.Bind(&catch189_skip);
    }
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp187, tmp188}, tmp183);
    compiler::CodeAssemblerExceptionHandlerLabel catch192__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch192__label);
    tmp191 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetIteratorStep_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetIteratorStep);
    }
    if (catch192__label.is_used()) {
      compiler::CodeAssemblerLabel catch192_skip(&ca_);
      ca_.Goto(&catch192_skip);
      ca_.Bind(&catch192__label, &tmp193);
      ca_.Goto(&block75, phi_bb66_5, phi_bb66_9, phi_bb66_10);
      ca_.Bind(&catch192_skip);
    }
    ca_.Goto(&block70, tmp191, tmp183, phi_bb66_9, phi_bb66_10);
  }

  TNode<Uint32T> phi_bb71_5;
  TNode<Smi> phi_bb71_8;
  TNode<Object> phi_bb71_9;
  TNode<Object> phi_bb71_10;
  TNode<Smi> phi_bb71_12;
  TNode<Object> phi_bb71_13;
  TNode<HeapObject> tmp194;
  if (block71.is_used()) {
    ca_.Bind(&block71, &phi_bb71_5, &phi_bb71_8, &phi_bb71_9, &phi_bb71_10, &phi_bb71_12, &phi_bb71_13);
    tmp194 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp179, tmp194);
  }

  TNode<Uint32T> phi_bb72_5;
  TNode<Smi> phi_bb72_8;
  TNode<Object> phi_bb72_9;
  TNode<Object> phi_bb72_10;
  TNode<Smi> phi_bb72_11;
  TNode<Smi> phi_bb72_12;
  TNode<HeapObject> tmp195;
  if (block72.is_used()) {
    ca_.Bind(&block72, &phi_bb72_5, &phi_bb72_8, &phi_bb72_9, &phi_bb72_10, &phi_bb72_11, &phi_bb72_12);
    tmp195 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp182, tmp195);
  }

  TNode<Uint32T> phi_bb73_5;
  TNode<Smi> phi_bb73_8;
  TNode<Object> phi_bb73_9;
  TNode<Object> phi_bb73_10;
  TNode<Smi> phi_bb73_11;
  TNode<HeapObject> tmp196;
  if (block73.is_used()) {
    ca_.Bind(&block73, &phi_bb73_5, &phi_bb73_8, &phi_bb73_9, &phi_bb73_10, &phi_bb73_11);
    tmp196 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp185, tmp196);
  }

  TNode<Uint32T> phi_bb74_5;
  TNode<Object> phi_bb74_9;
  TNode<Object> phi_bb74_10;
  TNode<HeapObject> tmp197;
  if (block74.is_used()) {
    ca_.Bind(&block74, &phi_bb74_5, &phi_bb74_9, &phi_bb74_10);
    tmp197 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp190, tmp197);
  }

  TNode<Uint32T> phi_bb75_5;
  TNode<Object> phi_bb75_9;
  TNode<Object> phi_bb75_10;
  TNode<HeapObject> tmp198;
  if (block75.is_used()) {
    ca_.Bind(&block75, &phi_bb75_5, &phi_bb75_9, &phi_bb75_10);
    tmp198 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp193, tmp198);
  }

  TNode<Uint32T> phi_bb67_5;
  TNode<Smi> phi_bb67_8;
  TNode<Object> phi_bb67_9;
  TNode<Object> phi_bb67_10;
  TNode<Uint32T> tmp199;
      TNode<Object> tmp201;
  TNode<BoolT> tmp202;
      TNode<Object> tmp204;
  if (block67.is_used()) {
    ca_.Bind(&block67, &phi_bb67_5, &phi_bb67_8, &phi_bb67_9, &phi_bb67_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch200__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch200__label);
    tmp199 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetArrayLikeValue);
    }
    if (catch200__label.is_used()) {
      compiler::CodeAssemblerLabel catch200_skip(&ca_);
      ca_.Goto(&catch200_skip);
      ca_.Bind(&catch200__label, &tmp201);
      ca_.Goto(&block78, phi_bb67_5, phi_bb67_8, phi_bb67_9, phi_bb67_10, phi_bb67_5, phi_bb67_5);
      ca_.Bind(&catch200_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch203__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch203__label);
    tmp202 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb67_5}, TNode<Uint32T>{tmp199});
    }
    if (catch203__label.is_used()) {
      compiler::CodeAssemblerLabel catch203_skip(&ca_);
      ca_.Goto(&catch203_skip);
      ca_.Bind(&catch203__label, &tmp204);
      ca_.Goto(&block79, phi_bb67_5, phi_bb67_8, phi_bb67_9, phi_bb67_10, phi_bb67_5);
      ca_.Bind(&catch203_skip);
    }
    ca_.Branch(tmp202, &block76, std::vector<compiler::Node*>{phi_bb67_5, phi_bb67_8, phi_bb67_9, phi_bb67_10}, &block77, std::vector<compiler::Node*>{phi_bb67_5, phi_bb67_8, phi_bb67_9, phi_bb67_10});
  }

  TNode<Uint32T> phi_bb78_5;
  TNode<Smi> phi_bb78_8;
  TNode<Object> phi_bb78_9;
  TNode<Object> phi_bb78_10;
  TNode<Uint32T> phi_bb78_11;
  TNode<Uint32T> phi_bb78_12;
  TNode<HeapObject> tmp205;
  if (block78.is_used()) {
    ca_.Bind(&block78, &phi_bb78_5, &phi_bb78_8, &phi_bb78_9, &phi_bb78_10, &phi_bb78_11, &phi_bb78_12);
    tmp205 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp201, tmp205);
  }

  TNode<Uint32T> phi_bb79_5;
  TNode<Smi> phi_bb79_8;
  TNode<Object> phi_bb79_9;
  TNode<Object> phi_bb79_10;
  TNode<Uint32T> phi_bb79_11;
  TNode<HeapObject> tmp206;
  if (block79.is_used()) {
    ca_.Bind(&block79, &phi_bb79_5, &phi_bb79_8, &phi_bb79_9, &phi_bb79_10, &phi_bb79_11);
    tmp206 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp204, tmp206);
  }

  TNode<Uint32T> phi_bb76_5;
  TNode<Smi> phi_bb76_8;
  TNode<Object> phi_bb76_9;
  TNode<Object> phi_bb76_10;
  TNode<Uint32T> tmp207;
      TNode<Object> tmp209;
  TNode<IntPtrT> tmp210;
  TNode<Object> tmp211;
  TNode<IntPtrT> tmp212;
      TNode<Object> tmp214;
  TNode<Smi> tmp215;
      TNode<Object> tmp217;
  TNode<Smi> tmp218;
      TNode<Object> tmp220;
  TNode<Smi> tmp221;
      TNode<Object> tmp223;
  TNode<IntPtrT> tmp224;
  TNode<Object> tmp225;
  TNode<IntPtrT> tmp226;
      TNode<Object> tmp228;
  TNode<Undefined> tmp229;
  if (block76.is_used()) {
    ca_.Bind(&block76, &phi_bb76_5, &phi_bb76_8, &phi_bb76_9, &phi_bb76_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch208__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch208__label);
    tmp207 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kCheckArrayLikeValueAndMapping_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kCheckArrayLikeValueAndMapping);
    }
    if (catch208__label.is_used()) {
      compiler::CodeAssemblerLabel catch208_skip(&ca_);
      ca_.Goto(&catch208_skip);
      ca_.Bind(&catch208__label, &tmp209);
      ca_.Goto(&block81, phi_bb76_5, phi_bb76_8, phi_bb76_9, phi_bb76_10);
      ca_.Bind(&catch208_skip);
    }
    tmp210 = kArrayFromAsyncResolveResumeStateStepSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch213__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch213__label);
    std::tie(tmp211, tmp212) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp210}).Flatten();
    }
    if (catch213__label.is_used()) {
      compiler::CodeAssemblerLabel catch213_skip(&ca_);
      ca_.Goto(&catch213_skip);
      ca_.Bind(&catch213__label, &tmp214);
      ca_.Goto(&block82, phi_bb76_8, phi_bb76_9, phi_bb76_10);
      ca_.Bind(&catch213_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch216__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch216__label);
    tmp215 = SmiTag_ArrayFromAsyncLabels_0(state_, TNode<Uint32T>{tmp207});
    }
    if (catch216__label.is_used()) {
      compiler::CodeAssemblerLabel catch216_skip(&ca_);
      ca_.Goto(&catch216_skip);
      ca_.Bind(&catch216__label, &tmp217);
      ca_.Goto(&block83, phi_bb76_8, phi_bb76_9, phi_bb76_10);
      ca_.Bind(&catch216_skip);
    }
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp211, tmp212}, tmp215);
    compiler::CodeAssemblerExceptionHandlerLabel catch219__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch219__label);
    tmp218 = FromConstexpr_Smi_constexpr_int31_0(state_, 1);
    }
    if (catch219__label.is_used()) {
      compiler::CodeAssemblerLabel catch219_skip(&ca_);
      ca_.Goto(&catch219_skip);
      ca_.Bind(&catch219__label, &tmp220);
      ca_.Goto(&block84, phi_bb76_8, phi_bb76_9, phi_bb76_10, phi_bb76_8, phi_bb76_8);
      ca_.Bind(&catch219_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch222__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch222__label);
    tmp221 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{phi_bb76_8}, TNode<Smi>{tmp218});
    }
    if (catch222__label.is_used()) {
      compiler::CodeAssemblerLabel catch222_skip(&ca_);
      ca_.Goto(&catch222_skip);
      ca_.Bind(&catch222__label, &tmp223);
      ca_.Goto(&block85, phi_bb76_8, phi_bb76_9, phi_bb76_10, phi_bb76_8);
      ca_.Bind(&catch222_skip);
    }
    tmp224 = kArrayFromAsyncResolveResumeStateIndexSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch227__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch227__label);
    std::tie(tmp225, tmp226) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp224}).Flatten();
    }
    if (catch227__label.is_used()) {
      compiler::CodeAssemblerLabel catch227_skip(&ca_);
      ca_.Goto(&catch227_skip);
      ca_.Bind(&catch227__label, &tmp228);
      ca_.Goto(&block86, phi_bb76_9, phi_bb76_10);
      ca_.Bind(&catch227_skip);
    }
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp225, tmp226}, tmp221);
    tmp229 = Undefined_0(state_);
    ca_.Goto(&block1, tmp229);
  }

  TNode<Uint32T> phi_bb81_5;
  TNode<Smi> phi_bb81_8;
  TNode<Object> phi_bb81_9;
  TNode<Object> phi_bb81_10;
  TNode<HeapObject> tmp230;
  if (block81.is_used()) {
    ca_.Bind(&block81, &phi_bb81_5, &phi_bb81_8, &phi_bb81_9, &phi_bb81_10);
    tmp230 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp209, tmp230);
  }

  TNode<Smi> phi_bb82_8;
  TNode<Object> phi_bb82_9;
  TNode<Object> phi_bb82_10;
  TNode<HeapObject> tmp231;
  if (block82.is_used()) {
    ca_.Bind(&block82, &phi_bb82_8, &phi_bb82_9, &phi_bb82_10);
    tmp231 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp214, tmp231);
  }

  TNode<Smi> phi_bb83_8;
  TNode<Object> phi_bb83_9;
  TNode<Object> phi_bb83_10;
  TNode<HeapObject> tmp232;
  if (block83.is_used()) {
    ca_.Bind(&block83, &phi_bb83_8, &phi_bb83_9, &phi_bb83_10);
    tmp232 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp217, tmp232);
  }

  TNode<Smi> phi_bb84_8;
  TNode<Object> phi_bb84_9;
  TNode<Object> phi_bb84_10;
  TNode<Smi> phi_bb84_11;
  TNode<Smi> phi_bb84_12;
  TNode<HeapObject> tmp233;
  if (block84.is_used()) {
    ca_.Bind(&block84, &phi_bb84_8, &phi_bb84_9, &phi_bb84_10, &phi_bb84_11, &phi_bb84_12);
    tmp233 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp220, tmp233);
  }

  TNode<Smi> phi_bb85_8;
  TNode<Object> phi_bb85_9;
  TNode<Object> phi_bb85_10;
  TNode<Smi> phi_bb85_11;
  TNode<HeapObject> tmp234;
  if (block85.is_used()) {
    ca_.Bind(&block85, &phi_bb85_8, &phi_bb85_9, &phi_bb85_10, &phi_bb85_11);
    tmp234 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp223, tmp234);
  }

  TNode<Object> phi_bb86_9;
  TNode<Object> phi_bb86_10;
  TNode<HeapObject> tmp235;
  if (block86.is_used()) {
    ca_.Bind(&block86, &phi_bb86_9, &phi_bb86_10);
    tmp235 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp228, tmp235);
  }

  TNode<Uint32T> phi_bb77_5;
  TNode<Smi> phi_bb77_8;
  TNode<Object> phi_bb77_9;
  TNode<Object> phi_bb77_10;
  TNode<Uint32T> tmp236;
      TNode<Object> tmp238;
  TNode<BoolT> tmp239;
      TNode<Object> tmp241;
  if (block77.is_used()) {
    ca_.Bind(&block77, &phi_bb77_5, &phi_bb77_8, &phi_bb77_9, &phi_bb77_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch237__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch237__label);
    tmp236 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kCheckArrayLikeValueAndMapping);
    }
    if (catch237__label.is_used()) {
      compiler::CodeAssemblerLabel catch237_skip(&ca_);
      ca_.Goto(&catch237_skip);
      ca_.Bind(&catch237__label, &tmp238);
      ca_.Goto(&block89, phi_bb77_5, phi_bb77_8, phi_bb77_9, phi_bb77_10, phi_bb77_5, phi_bb77_5);
      ca_.Bind(&catch237_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch240__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch240__label);
    tmp239 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb77_5}, TNode<Uint32T>{tmp236});
    }
    if (catch240__label.is_used()) {
      compiler::CodeAssemblerLabel catch240_skip(&ca_);
      ca_.Goto(&catch240_skip);
      ca_.Bind(&catch240__label, &tmp241);
      ca_.Goto(&block90, phi_bb77_5, phi_bb77_8, phi_bb77_9, phi_bb77_10, phi_bb77_5);
      ca_.Bind(&catch240_skip);
    }
    ca_.Branch(tmp239, &block87, std::vector<compiler::Node*>{phi_bb77_5, phi_bb77_8, phi_bb77_9, phi_bb77_10}, &block88, std::vector<compiler::Node*>{phi_bb77_5, phi_bb77_8, phi_bb77_9, phi_bb77_10});
  }

  TNode<Uint32T> phi_bb89_5;
  TNode<Smi> phi_bb89_8;
  TNode<Object> phi_bb89_9;
  TNode<Object> phi_bb89_10;
  TNode<Uint32T> phi_bb89_11;
  TNode<Uint32T> phi_bb89_12;
  TNode<HeapObject> tmp242;
  if (block89.is_used()) {
    ca_.Bind(&block89, &phi_bb89_5, &phi_bb89_8, &phi_bb89_9, &phi_bb89_10, &phi_bb89_11, &phi_bb89_12);
    tmp242 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp238, tmp242);
  }

  TNode<Uint32T> phi_bb90_5;
  TNode<Smi> phi_bb90_8;
  TNode<Object> phi_bb90_9;
  TNode<Object> phi_bb90_10;
  TNode<Uint32T> phi_bb90_11;
  TNode<HeapObject> tmp243;
  if (block90.is_used()) {
    ca_.Bind(&block90, &phi_bb90_5, &phi_bb90_8, &phi_bb90_9, &phi_bb90_10, &phi_bb90_11);
    tmp243 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp241, tmp243);
  }

  TNode<Uint32T> phi_bb87_5;
  TNode<Smi> phi_bb87_8;
  TNode<Object> phi_bb87_9;
  TNode<Object> phi_bb87_10;
  TNode<BoolT> tmp244;
      TNode<Object> tmp246;
  if (block87.is_used()) {
    ca_.Bind(&block87, &phi_bb87_5, &phi_bb87_8, &phi_bb87_9, &phi_bb87_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch245__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch245__label);
    tmp244 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{phi_bb87_8}, TNode<Smi>{tmp42});
    }
    if (catch245__label.is_used()) {
      compiler::CodeAssemblerLabel catch245_skip(&ca_);
      ca_.Goto(&catch245_skip);
      ca_.Bind(&catch245__label, &tmp246);
      ca_.Goto(&block94, phi_bb87_5, phi_bb87_8, phi_bb87_9, phi_bb87_10, phi_bb87_8);
      ca_.Bind(&catch245_skip);
    }
    ca_.Branch(tmp244, &block92, std::vector<compiler::Node*>{phi_bb87_5, phi_bb87_8, phi_bb87_9, phi_bb87_10}, &block93, std::vector<compiler::Node*>{phi_bb87_5, phi_bb87_8, phi_bb87_9, phi_bb87_10});
  }

  TNode<Uint32T> phi_bb94_5;
  TNode<Smi> phi_bb94_8;
  TNode<Object> phi_bb94_9;
  TNode<Object> phi_bb94_10;
  TNode<Smi> phi_bb94_11;
  TNode<HeapObject> tmp247;
  if (block94.is_used()) {
    ca_.Bind(&block94, &phi_bb94_5, &phi_bb94_8, &phi_bb94_9, &phi_bb94_10, &phi_bb94_11);
    tmp247 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp246, tmp247);
  }

  TNode<Uint32T> phi_bb92_5;
  TNode<Smi> phi_bb92_8;
  TNode<Object> phi_bb92_9;
  TNode<Object> phi_bb92_10;
  TNode<Uint32T> tmp248;
      TNode<Object> tmp250;
  if (block92.is_used()) {
    ca_.Bind(&block92, &phi_bb92_5, &phi_bb92_8, &phi_bb92_9, &phi_bb92_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch249__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch249__label);
    tmp248 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kDoneAndResolvePromise_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kDoneAndResolvePromise);
    }
    if (catch249__label.is_used()) {
      compiler::CodeAssemblerLabel catch249_skip(&ca_);
      ca_.Goto(&catch249_skip);
      ca_.Bind(&catch249__label, &tmp250);
      ca_.Goto(&block95, phi_bb92_5, phi_bb92_8, phi_bb92_9, phi_bb92_10);
      ca_.Bind(&catch249_skip);
    }
    ca_.Goto(&block93, tmp248, phi_bb92_8, phi_bb92_9, phi_bb92_10);
  }

  TNode<Uint32T> phi_bb95_5;
  TNode<Smi> phi_bb95_8;
  TNode<Object> phi_bb95_9;
  TNode<Object> phi_bb95_10;
  TNode<HeapObject> tmp251;
  if (block95.is_used()) {
    ca_.Bind(&block95, &phi_bb95_5, &phi_bb95_8, &phi_bb95_9, &phi_bb95_10);
    tmp251 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp250, tmp251);
  }

  TNode<Uint32T> phi_bb93_5;
  TNode<Smi> phi_bb93_8;
  TNode<Object> phi_bb93_9;
  TNode<Object> phi_bb93_10;
  TNode<Undefined> tmp252;
  TNode<BoolT> tmp253;
      TNode<Object> tmp255;
  if (block93.is_used()) {
    ca_.Bind(&block93, &phi_bb93_5, &phi_bb93_8, &phi_bb93_9, &phi_bb93_10);
    tmp252 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch254__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch254__label);
    tmp253 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp8}, TNode<HeapObject>{tmp252});
    }
    if (catch254__label.is_used()) {
      compiler::CodeAssemblerLabel catch254_skip(&ca_);
      ca_.Goto(&catch254_skip);
      ca_.Bind(&catch254__label, &tmp255);
      ca_.Goto(&block98, phi_bb93_8, phi_bb93_9, phi_bb93_10);
      ca_.Bind(&catch254_skip);
    }
    ca_.Branch(tmp253, &block96, std::vector<compiler::Node*>{phi_bb93_8, phi_bb93_9, phi_bb93_10}, &block97, std::vector<compiler::Node*>{phi_bb93_8, phi_bb93_9, phi_bb93_10});
  }

  TNode<Smi> phi_bb98_8;
  TNode<Object> phi_bb98_9;
  TNode<Object> phi_bb98_10;
  TNode<HeapObject> tmp256;
  if (block98.is_used()) {
    ca_.Bind(&block98, &phi_bb98_8, &phi_bb98_9, &phi_bb98_10);
    tmp256 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp255, tmp256);
  }

  TNode<Smi> phi_bb96_8;
  TNode<Object> phi_bb96_9;
  TNode<Object> phi_bb96_10;
  TNode<BoolT> tmp257;
      TNode<Object> tmp259;
  if (block96.is_used()) {
    ca_.Bind(&block96, &phi_bb96_8, &phi_bb96_9, &phi_bb96_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch258__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch258__label);
    tmp257 = FromConstexpr_bool_constexpr_bool_0(state_, false);
    }
    if (catch258__label.is_used()) {
      compiler::CodeAssemblerLabel catch258_skip(&ca_);
      ca_.Goto(&catch258_skip);
      ca_.Bind(&catch258__label, &tmp259);
      ca_.Goto(&block100, phi_bb96_8, phi_bb96_9, phi_bb96_10);
      ca_.Bind(&catch258_skip);
    }
    ca_.Goto(&block99, phi_bb96_8, phi_bb96_9, phi_bb96_10, tmp257);
  }

  TNode<Smi> phi_bb100_8;
  TNode<Object> phi_bb100_9;
  TNode<Object> phi_bb100_10;
  TNode<HeapObject> tmp260;
  if (block100.is_used()) {
    ca_.Bind(&block100, &phi_bb100_8, &phi_bb100_9, &phi_bb100_10);
    tmp260 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp259, tmp260);
  }

  TNode<Smi> phi_bb97_8;
  TNode<Object> phi_bb97_9;
  TNode<Object> phi_bb97_10;
  TNode<BoolT> tmp261;
      TNode<Object> tmp263;
  TNode<BoolT> tmp264;
      TNode<Object> tmp266;
  if (block97.is_used()) {
    ca_.Bind(&block97, &phi_bb97_8, &phi_bb97_9, &phi_bb97_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch262__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch262__label);
    tmp261 = Is_Callable_JSAny_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp8});
    }
    if (catch262__label.is_used()) {
      compiler::CodeAssemblerLabel catch262_skip(&ca_);
      ca_.Goto(&catch262_skip);
      ca_.Bind(&catch262__label, &tmp263);
      ca_.Goto(&block103, phi_bb97_8, phi_bb97_9, phi_bb97_10);
      ca_.Bind(&catch262_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch265__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch265__label);
    tmp264 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp261});
    }
    if (catch265__label.is_used()) {
      compiler::CodeAssemblerLabel catch265_skip(&ca_);
      ca_.Goto(&catch265_skip);
      ca_.Bind(&catch265__label, &tmp266);
      ca_.Goto(&block104, phi_bb97_8, phi_bb97_9, phi_bb97_10);
      ca_.Bind(&catch265_skip);
    }
    ca_.Branch(tmp264, &block101, std::vector<compiler::Node*>{phi_bb97_8, phi_bb97_9, phi_bb97_10}, &block102, std::vector<compiler::Node*>{phi_bb97_8, phi_bb97_9, phi_bb97_10});
  }

  TNode<Smi> phi_bb103_8;
  TNode<Object> phi_bb103_9;
  TNode<Object> phi_bb103_10;
  TNode<HeapObject> tmp267;
  if (block103.is_used()) {
    ca_.Bind(&block103, &phi_bb103_8, &phi_bb103_9, &phi_bb103_10);
    tmp267 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp263, tmp267);
  }

  TNode<Smi> phi_bb104_8;
  TNode<Object> phi_bb104_9;
  TNode<Object> phi_bb104_10;
  TNode<HeapObject> tmp268;
  if (block104.is_used()) {
    ca_.Bind(&block104, &phi_bb104_8, &phi_bb104_9, &phi_bb104_10);
    tmp268 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp266, tmp268);
  }

  TNode<Smi> phi_bb101_8;
  TNode<Object> phi_bb101_9;
  TNode<Object> phi_bb101_10;
      TNode<Object> tmp270;
  if (block101.is_used()) {
    ca_.Bind(&block101, &phi_bb101_8, &phi_bb101_9, &phi_bb101_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch269__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch269__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{p_context}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp8});
    }
    if (catch269__label.is_used()) {
      compiler::CodeAssemblerLabel catch269_skip(&ca_);
      ca_.Bind(&catch269__label, &tmp270);
      ca_.Goto(&block105, phi_bb101_8, phi_bb101_9, phi_bb101_10);
    }
  }

  TNode<Smi> phi_bb105_8;
  TNode<Object> phi_bb105_9;
  TNode<Object> phi_bb105_10;
  TNode<HeapObject> tmp271;
  if (block105.is_used()) {
    ca_.Bind(&block105, &phi_bb105_8, &phi_bb105_9, &phi_bb105_10);
    tmp271 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp270, tmp271);
  }

  TNode<Smi> phi_bb102_8;
  TNode<Object> phi_bb102_9;
  TNode<Object> phi_bb102_10;
  TNode<BoolT> tmp272;
      TNode<Object> tmp274;
  if (block102.is_used()) {
    ca_.Bind(&block102, &phi_bb102_8, &phi_bb102_9, &phi_bb102_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch273__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch273__label);
    tmp272 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch273__label.is_used()) {
      compiler::CodeAssemblerLabel catch273_skip(&ca_);
      ca_.Goto(&catch273_skip);
      ca_.Bind(&catch273__label, &tmp274);
      ca_.Goto(&block106, phi_bb102_8, phi_bb102_9, phi_bb102_10);
      ca_.Bind(&catch273_skip);
    }
    ca_.Goto(&block99, phi_bb102_8, phi_bb102_9, phi_bb102_10, tmp272);
  }

  TNode<Smi> phi_bb106_8;
  TNode<Object> phi_bb106_9;
  TNode<Object> phi_bb106_10;
  TNode<HeapObject> tmp275;
  if (block106.is_used()) {
    ca_.Bind(&block106, &phi_bb106_8, &phi_bb106_9, &phi_bb106_10);
    tmp275 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp274, tmp275);
  }

  TNode<Smi> phi_bb99_8;
  TNode<Object> phi_bb99_9;
  TNode<Object> phi_bb99_10;
  TNode<BoolT> phi_bb99_11;
  if (block99.is_used()) {
    ca_.Bind(&block99, &phi_bb99_8, &phi_bb99_9, &phi_bb99_10, &phi_bb99_11);
    ca_.Branch(phi_bb99_11, &block107, std::vector<compiler::Node*>{phi_bb99_8, phi_bb99_9, phi_bb99_10, phi_bb99_11}, &block108, std::vector<compiler::Node*>{phi_bb99_8, phi_bb99_9, phi_bb99_10, phi_bb99_11});
  }

  TNode<Smi> phi_bb107_8;
  TNode<Object> phi_bb107_9;
  TNode<Object> phi_bb107_10;
  TNode<BoolT> phi_bb107_11;
  TNode<Uint32T> tmp276;
      TNode<Object> tmp278;
  if (block107.is_used()) {
    ca_.Bind(&block107, &phi_bb107_8, &phi_bb107_9, &phi_bb107_10, &phi_bb107_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch277__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch277__label);
    tmp276 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetArrayLikeValueWithMapping_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetArrayLikeValueWithMapping);
    }
    if (catch277__label.is_used()) {
      compiler::CodeAssemblerLabel catch277_skip(&ca_);
      ca_.Goto(&catch277_skip);
      ca_.Bind(&catch277__label, &tmp278);
      ca_.Goto(&block110, phi_bb107_8, phi_bb107_9, phi_bb107_10, phi_bb107_11);
      ca_.Bind(&catch277_skip);
    }
    ca_.Goto(&block109, tmp276, phi_bb107_8, phi_bb107_9, phi_bb107_10, phi_bb107_11);
  }

  TNode<Smi> phi_bb110_8;
  TNode<Object> phi_bb110_9;
  TNode<Object> phi_bb110_10;
  TNode<BoolT> phi_bb110_11;
  TNode<HeapObject> tmp279;
  if (block110.is_used()) {
    ca_.Bind(&block110, &phi_bb110_8, &phi_bb110_9, &phi_bb110_10, &phi_bb110_11);
    tmp279 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp278, tmp279);
  }

  TNode<Smi> phi_bb108_8;
  TNode<Object> phi_bb108_9;
  TNode<Object> phi_bb108_10;
  TNode<BoolT> phi_bb108_11;
  TNode<Uint32T> tmp280;
      TNode<Object> tmp282;
  if (block108.is_used()) {
    ca_.Bind(&block108, &phi_bb108_8, &phi_bb108_9, &phi_bb108_10, &phi_bb108_11);
    compiler::CodeAssemblerExceptionHandlerLabel catch281__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch281__label);
    tmp280 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kAddArrayLikeValueToTheArray_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kAddArrayLikeValueToTheArray);
    }
    if (catch281__label.is_used()) {
      compiler::CodeAssemblerLabel catch281_skip(&ca_);
      ca_.Goto(&catch281_skip);
      ca_.Bind(&catch281__label, &tmp282);
      ca_.Goto(&block111, phi_bb108_8, phi_bb108_9, phi_bb108_10, phi_bb108_11);
      ca_.Bind(&catch281_skip);
    }
    ca_.Goto(&block109, tmp280, phi_bb108_8, phi_bb108_9, phi_bb108_10, phi_bb108_11);
  }

  TNode<Smi> phi_bb111_8;
  TNode<Object> phi_bb111_9;
  TNode<Object> phi_bb111_10;
  TNode<BoolT> phi_bb111_11;
  TNode<HeapObject> tmp283;
  if (block111.is_used()) {
    ca_.Bind(&block111, &phi_bb111_8, &phi_bb111_9, &phi_bb111_10, &phi_bb111_11);
    tmp283 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp282, tmp283);
  }

  TNode<Uint32T> phi_bb109_5;
  TNode<Smi> phi_bb109_8;
  TNode<Object> phi_bb109_9;
  TNode<Object> phi_bb109_10;
  TNode<BoolT> phi_bb109_11;
  if (block109.is_used()) {
    ca_.Bind(&block109, &phi_bb109_5, &phi_bb109_8, &phi_bb109_9, &phi_bb109_10, &phi_bb109_11);
    ca_.Goto(&block91, phi_bb109_5, phi_bb109_8, phi_bb109_9, phi_bb109_10);
  }

  TNode<Uint32T> phi_bb88_5;
  TNode<Smi> phi_bb88_8;
  TNode<Object> phi_bb88_9;
  TNode<Object> phi_bb88_10;
  TNode<Uint32T> tmp284;
      TNode<Object> tmp286;
  TNode<BoolT> tmp287;
      TNode<Object> tmp289;
  if (block88.is_used()) {
    ca_.Bind(&block88, &phi_bb88_5, &phi_bb88_8, &phi_bb88_9, &phi_bb88_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch285__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch285__label);
    tmp284 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetArrayLikeValueWithMapping);
    }
    if (catch285__label.is_used()) {
      compiler::CodeAssemblerLabel catch285_skip(&ca_);
      ca_.Goto(&catch285_skip);
      ca_.Bind(&catch285__label, &tmp286);
      ca_.Goto(&block114, phi_bb88_5, phi_bb88_8, phi_bb88_9, phi_bb88_10, phi_bb88_5, phi_bb88_5);
      ca_.Bind(&catch285_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch288__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch288__label);
    tmp287 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb88_5}, TNode<Uint32T>{tmp284});
    }
    if (catch288__label.is_used()) {
      compiler::CodeAssemblerLabel catch288_skip(&ca_);
      ca_.Goto(&catch288_skip);
      ca_.Bind(&catch288__label, &tmp289);
      ca_.Goto(&block115, phi_bb88_5, phi_bb88_8, phi_bb88_9, phi_bb88_10, phi_bb88_5);
      ca_.Bind(&catch288_skip);
    }
    ca_.Branch(tmp287, &block112, std::vector<compiler::Node*>{phi_bb88_5, phi_bb88_8, phi_bb88_9, phi_bb88_10}, &block113, std::vector<compiler::Node*>{phi_bb88_5, phi_bb88_8, phi_bb88_9, phi_bb88_10});
  }

  TNode<Uint32T> phi_bb114_5;
  TNode<Smi> phi_bb114_8;
  TNode<Object> phi_bb114_9;
  TNode<Object> phi_bb114_10;
  TNode<Uint32T> phi_bb114_11;
  TNode<Uint32T> phi_bb114_12;
  TNode<HeapObject> tmp290;
  if (block114.is_used()) {
    ca_.Bind(&block114, &phi_bb114_5, &phi_bb114_8, &phi_bb114_9, &phi_bb114_10, &phi_bb114_11, &phi_bb114_12);
    tmp290 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp286, tmp290);
  }

  TNode<Uint32T> phi_bb115_5;
  TNode<Smi> phi_bb115_8;
  TNode<Object> phi_bb115_9;
  TNode<Object> phi_bb115_10;
  TNode<Uint32T> phi_bb115_11;
  TNode<HeapObject> tmp291;
  if (block115.is_used()) {
    ca_.Bind(&block115, &phi_bb115_5, &phi_bb115_8, &phi_bb115_9, &phi_bb115_10, &phi_bb115_11);
    tmp291 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp289, tmp291);
  }

  TNode<Uint32T> phi_bb112_5;
  TNode<Smi> phi_bb112_8;
  TNode<Object> phi_bb112_9;
  TNode<Object> phi_bb112_10;
  TNode<JSReceiver> tmp292;
      TNode<Object> tmp294;
  TNode<Object> tmp295;
      TNode<Object> tmp297;
  TNode<Uint32T> tmp298;
      TNode<Object> tmp300;
  TNode<Object> tmp301;
      TNode<Object> tmp303;
  if (block112.is_used()) {
    ca_.Bind(&block112, &phi_bb112_5, &phi_bb112_8, &phi_bb112_9, &phi_bb112_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch293__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch293__label);
    tmp292 = UnsafeCast_Callable_0(state_, TNode<Context>{p_context}, TNode<Object>{tmp8});
    }
    if (catch293__label.is_used()) {
      compiler::CodeAssemblerLabel catch293_skip(&ca_);
      ca_.Goto(&catch293_skip);
      ca_.Bind(&catch293__label, &tmp294);
      ca_.Goto(&block117, phi_bb112_5, phi_bb112_8, phi_bb112_9, phi_bb112_10);
      ca_.Bind(&catch293_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch296__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch296__label);
    tmp295 = CodeStubAssembler(state_).Call(TNode<Context>{p_context}, TNode<Object>{tmp292}, TNode<Object>{tmp14}, TNode<Object>{tmp36}, TNode<Object>{phi_bb112_8});
    }
    if (catch296__label.is_used()) {
      compiler::CodeAssemblerLabel catch296_skip(&ca_);
      ca_.Goto(&catch296_skip);
      ca_.Bind(&catch296__label, &tmp297);
      ca_.Goto(&block118, phi_bb112_5, phi_bb112_8, phi_bb112_9, phi_bb112_10, phi_bb112_8);
      ca_.Bind(&catch296_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch299__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch299__label);
    tmp298 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kAddArrayLikeValueToTheArray_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kAddArrayLikeValueToTheArray);
    }
    if (catch299__label.is_used()) {
      compiler::CodeAssemblerLabel catch299_skip(&ca_);
      ca_.Goto(&catch299_skip);
      ca_.Bind(&catch299__label, &tmp300);
      ca_.Goto(&block119, phi_bb112_5, phi_bb112_8, phi_bb112_9, phi_bb112_10);
      ca_.Bind(&catch299_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch302__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch302__label);
    tmp301 = ArrayFromAsyncAwaitPoint_0(state_, TNode<Context>{p_context}, TNode<Uint32T>{tmp298}, TNode<Object>{tmp295});
    }
    if (catch302__label.is_used()) {
      compiler::CodeAssemblerLabel catch302_skip(&ca_);
      ca_.Goto(&catch302_skip);
      ca_.Bind(&catch302__label, &tmp303);
      ca_.Goto(&block120, phi_bb112_5, phi_bb112_8, phi_bb112_9, phi_bb112_10);
      ca_.Bind(&catch302_skip);
    }
    ca_.Goto(&block1, tmp301);
  }

  TNode<Uint32T> phi_bb117_5;
  TNode<Smi> phi_bb117_8;
  TNode<Object> phi_bb117_9;
  TNode<Object> phi_bb117_10;
  TNode<HeapObject> tmp304;
  if (block117.is_used()) {
    ca_.Bind(&block117, &phi_bb117_5, &phi_bb117_8, &phi_bb117_9, &phi_bb117_10);
    tmp304 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp294, tmp304);
  }

  TNode<Uint32T> phi_bb118_5;
  TNode<Smi> phi_bb118_8;
  TNode<Object> phi_bb118_9;
  TNode<Object> phi_bb118_10;
  TNode<Smi> phi_bb118_15;
  TNode<HeapObject> tmp305;
  if (block118.is_used()) {
    ca_.Bind(&block118, &phi_bb118_5, &phi_bb118_8, &phi_bb118_9, &phi_bb118_10, &phi_bb118_15);
    tmp305 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp297, tmp305);
  }

  TNode<Uint32T> phi_bb119_5;
  TNode<Smi> phi_bb119_8;
  TNode<Object> phi_bb119_9;
  TNode<Object> phi_bb119_10;
  TNode<HeapObject> tmp306;
  if (block119.is_used()) {
    ca_.Bind(&block119, &phi_bb119_5, &phi_bb119_8, &phi_bb119_9, &phi_bb119_10);
    tmp306 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp300, tmp306);
  }

  TNode<Uint32T> phi_bb120_5;
  TNode<Smi> phi_bb120_8;
  TNode<Object> phi_bb120_9;
  TNode<Object> phi_bb120_10;
  TNode<HeapObject> tmp307;
  if (block120.is_used()) {
    ca_.Bind(&block120, &phi_bb120_5, &phi_bb120_8, &phi_bb120_9, &phi_bb120_10);
    tmp307 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp303, tmp307);
  }

  TNode<Uint32T> phi_bb113_5;
  TNode<Smi> phi_bb113_8;
  TNode<Object> phi_bb113_9;
  TNode<Object> phi_bb113_10;
  TNode<Uint32T> tmp308;
      TNode<Object> tmp310;
  TNode<BoolT> tmp311;
      TNode<Object> tmp313;
  if (block113.is_used()) {
    ca_.Bind(&block113, &phi_bb113_5, &phi_bb113_8, &phi_bb113_9, &phi_bb113_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch309__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch309__label);
    tmp308 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kAddArrayLikeValueToTheArray);
    }
    if (catch309__label.is_used()) {
      compiler::CodeAssemblerLabel catch309_skip(&ca_);
      ca_.Goto(&catch309_skip);
      ca_.Bind(&catch309__label, &tmp310);
      ca_.Goto(&block123, phi_bb113_5, phi_bb113_8, phi_bb113_9, phi_bb113_10, phi_bb113_5, phi_bb113_5);
      ca_.Bind(&catch309_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch312__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch312__label);
    tmp311 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb113_5}, TNode<Uint32T>{tmp308});
    }
    if (catch312__label.is_used()) {
      compiler::CodeAssemblerLabel catch312_skip(&ca_);
      ca_.Goto(&catch312_skip);
      ca_.Bind(&catch312__label, &tmp313);
      ca_.Goto(&block124, phi_bb113_5, phi_bb113_8, phi_bb113_9, phi_bb113_10, phi_bb113_5);
      ca_.Bind(&catch312_skip);
    }
    ca_.Branch(tmp311, &block121, std::vector<compiler::Node*>{phi_bb113_5, phi_bb113_8, phi_bb113_9, phi_bb113_10}, &block122, std::vector<compiler::Node*>{phi_bb113_5, phi_bb113_8, phi_bb113_9, phi_bb113_10});
  }

  TNode<Uint32T> phi_bb123_5;
  TNode<Smi> phi_bb123_8;
  TNode<Object> phi_bb123_9;
  TNode<Object> phi_bb123_10;
  TNode<Uint32T> phi_bb123_11;
  TNode<Uint32T> phi_bb123_12;
  TNode<HeapObject> tmp314;
  if (block123.is_used()) {
    ca_.Bind(&block123, &phi_bb123_5, &phi_bb123_8, &phi_bb123_9, &phi_bb123_10, &phi_bb123_11, &phi_bb123_12);
    tmp314 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp310, tmp314);
  }

  TNode<Uint32T> phi_bb124_5;
  TNode<Smi> phi_bb124_8;
  TNode<Object> phi_bb124_9;
  TNode<Object> phi_bb124_10;
  TNode<Uint32T> phi_bb124_11;
  TNode<HeapObject> tmp315;
  if (block124.is_used()) {
    ca_.Bind(&block124, &phi_bb124_5, &phi_bb124_8, &phi_bb124_9, &phi_bb124_10, &phi_bb124_11);
    tmp315 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp313, tmp315);
  }

  TNode<Uint32T> phi_bb121_5;
  TNode<Smi> phi_bb121_8;
  TNode<Object> phi_bb121_9;
  TNode<Object> phi_bb121_10;
  TNode<Object> tmp316;
      TNode<Object> tmp318;
  TNode<Uint32T> tmp319;
      TNode<Object> tmp321;
  if (block121.is_used()) {
    ca_.Bind(&block121, &phi_bb121_5, &phi_bb121_8, &phi_bb121_9, &phi_bb121_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch317__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch317__label);
    tmp316 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kFastCreateDataProperty), p_context, tmp20, phi_bb121_8, tmp36);
    }
    if (catch317__label.is_used()) {
      compiler::CodeAssemblerLabel catch317_skip(&ca_);
      ca_.Goto(&catch317_skip);
      ca_.Bind(&catch317__label, &tmp318);
      ca_.Goto(&block126, phi_bb121_5, phi_bb121_8, phi_bb121_10, phi_bb121_8);
      ca_.Bind(&catch317_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch320__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch320__label);
    tmp319 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetArrayLikeValue_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetArrayLikeValue);
    }
    if (catch320__label.is_used()) {
      compiler::CodeAssemblerLabel catch320_skip(&ca_);
      ca_.Goto(&catch320_skip);
      ca_.Bind(&catch320__label, &tmp321);
      ca_.Goto(&block127, phi_bb121_5, phi_bb121_8, phi_bb121_10);
      ca_.Bind(&catch320_skip);
    }
    ca_.Goto(&block125, tmp319, phi_bb121_8, tmp36, phi_bb121_10);
  }

  TNode<Uint32T> phi_bb126_5;
  TNode<Smi> phi_bb126_8;
  TNode<Object> phi_bb126_10;
  TNode<Smi> phi_bb126_12;
  TNode<HeapObject> tmp322;
  if (block126.is_used()) {
    ca_.Bind(&block126, &phi_bb126_5, &phi_bb126_8, &phi_bb126_10, &phi_bb126_12);
    tmp322 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp318, tmp322);
  }

  TNode<Uint32T> phi_bb127_5;
  TNode<Smi> phi_bb127_8;
  TNode<Object> phi_bb127_10;
  TNode<HeapObject> tmp323;
  if (block127.is_used()) {
    ca_.Bind(&block127, &phi_bb127_5, &phi_bb127_8, &phi_bb127_10);
    tmp323 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp321, tmp323);
  }

  TNode<Uint32T> phi_bb122_5;
  TNode<Smi> phi_bb122_8;
  TNode<Object> phi_bb122_9;
  TNode<Object> phi_bb122_10;
  TNode<Uint32T> tmp324;
      TNode<Object> tmp326;
  TNode<BoolT> tmp327;
      TNode<Object> tmp329;
  if (block122.is_used()) {
    ca_.Bind(&block122, &phi_bb122_5, &phi_bb122_8, &phi_bb122_9, &phi_bb122_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch325__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch325__label);
    tmp324 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kDoneAndResolvePromise);
    }
    if (catch325__label.is_used()) {
      compiler::CodeAssemblerLabel catch325_skip(&ca_);
      ca_.Goto(&catch325_skip);
      ca_.Bind(&catch325__label, &tmp326);
      ca_.Goto(&block130, phi_bb122_5, phi_bb122_8, phi_bb122_9, phi_bb122_10, phi_bb122_5, phi_bb122_5);
      ca_.Bind(&catch325_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch328__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch328__label);
    tmp327 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb122_5}, TNode<Uint32T>{tmp324});
    }
    if (catch328__label.is_used()) {
      compiler::CodeAssemblerLabel catch328_skip(&ca_);
      ca_.Goto(&catch328_skip);
      ca_.Bind(&catch328__label, &tmp329);
      ca_.Goto(&block131, phi_bb122_5, phi_bb122_8, phi_bb122_9, phi_bb122_10, phi_bb122_5);
      ca_.Bind(&catch328_skip);
    }
    ca_.Branch(tmp327, &block128, std::vector<compiler::Node*>{phi_bb122_5, phi_bb122_8, phi_bb122_9, phi_bb122_10}, &block129, std::vector<compiler::Node*>{phi_bb122_5, phi_bb122_8, phi_bb122_9, phi_bb122_10});
  }

  TNode<Uint32T> phi_bb130_5;
  TNode<Smi> phi_bb130_8;
  TNode<Object> phi_bb130_9;
  TNode<Object> phi_bb130_10;
  TNode<Uint32T> phi_bb130_11;
  TNode<Uint32T> phi_bb130_12;
  TNode<HeapObject> tmp330;
  if (block130.is_used()) {
    ca_.Bind(&block130, &phi_bb130_5, &phi_bb130_8, &phi_bb130_9, &phi_bb130_10, &phi_bb130_11, &phi_bb130_12);
    tmp330 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp326, tmp330);
  }

  TNode<Uint32T> phi_bb131_5;
  TNode<Smi> phi_bb131_8;
  TNode<Object> phi_bb131_9;
  TNode<Object> phi_bb131_10;
  TNode<Uint32T> phi_bb131_11;
  TNode<HeapObject> tmp331;
  if (block131.is_used()) {
    ca_.Bind(&block131, &phi_bb131_5, &phi_bb131_8, &phi_bb131_9, &phi_bb131_10, &phi_bb131_11);
    tmp331 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp329, tmp331);
  }

  TNode<Uint32T> phi_bb128_5;
  TNode<Smi> phi_bb128_8;
  TNode<Object> phi_bb128_9;
  TNode<Object> phi_bb128_10;
  TNode<IntPtrT> tmp332;
  TNode<Object> tmp333;
  TNode<IntPtrT> tmp334;
      TNode<Object> tmp336;
  TNode<JSPromise> tmp337;
  TNode<Object> tmp338;
      TNode<Object> tmp340;
  TNode<Undefined> tmp341;
  if (block128.is_used()) {
    ca_.Bind(&block128, &phi_bb128_5, &phi_bb128_8, &phi_bb128_9, &phi_bb128_10);
    tmp332 = kArrayFromAsyncResolvePromiseSlot_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch335__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch335__label);
    std::tie(tmp333, tmp334) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSPromise_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp332}).Flatten();
    }
    if (catch335__label.is_used()) {
      compiler::CodeAssemblerLabel catch335_skip(&ca_);
      ca_.Goto(&catch335_skip);
      ca_.Bind(&catch335__label, &tmp336);
      ca_.Goto(&block133, phi_bb128_5, phi_bb128_8, phi_bb128_9, phi_bb128_10);
      ca_.Bind(&catch335_skip);
    }
    tmp337 = CodeStubAssembler(state_).LoadReference<JSPromise>(CodeStubAssembler::Reference{tmp333, tmp334});
    compiler::CodeAssemblerExceptionHandlerLabel catch339__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch339__label);
    tmp338 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kResolvePromise), p_context, tmp337, tmp20);
    }
    if (catch339__label.is_used()) {
      compiler::CodeAssemblerLabel catch339_skip(&ca_);
      ca_.Goto(&catch339_skip);
      ca_.Bind(&catch339__label, &tmp340);
      ca_.Goto(&block134, phi_bb128_5, phi_bb128_8, phi_bb128_9, phi_bb128_10);
      ca_.Bind(&catch339_skip);
    }
    tmp341 = Undefined_0(state_);
    ca_.Goto(&block1, tmp341);
  }

  TNode<Uint32T> phi_bb133_5;
  TNode<Smi> phi_bb133_8;
  TNode<Object> phi_bb133_9;
  TNode<Object> phi_bb133_10;
  TNode<HeapObject> tmp342;
  if (block133.is_used()) {
    ca_.Bind(&block133, &phi_bb133_5, &phi_bb133_8, &phi_bb133_9, &phi_bb133_10);
    tmp342 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp336, tmp342);
  }

  TNode<Uint32T> phi_bb134_5;
  TNode<Smi> phi_bb134_8;
  TNode<Object> phi_bb134_9;
  TNode<Object> phi_bb134_10;
  TNode<HeapObject> tmp343;
  if (block134.is_used()) {
    ca_.Bind(&block134, &phi_bb134_5, &phi_bb134_8, &phi_bb134_9, &phi_bb134_10);
    tmp343 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp340, tmp343);
  }

  TNode<Uint32T> phi_bb129_5;
  TNode<Smi> phi_bb129_8;
  TNode<Object> phi_bb129_9;
  TNode<Object> phi_bb129_10;
  TNode<Uint32T> tmp344;
      TNode<Object> tmp346;
  TNode<BoolT> tmp347;
      TNode<Object> tmp349;
  if (block129.is_used()) {
    ca_.Bind(&block129, &phi_bb129_5, &phi_bb129_8, &phi_bb129_9, &phi_bb129_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch345__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch345__label);
    tmp344 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kCloseAsyncIterator);
    }
    if (catch345__label.is_used()) {
      compiler::CodeAssemblerLabel catch345_skip(&ca_);
      ca_.Goto(&catch345_skip);
      ca_.Bind(&catch345__label, &tmp346);
      ca_.Goto(&block137, phi_bb129_5, phi_bb129_8, phi_bb129_9, phi_bb129_10, phi_bb129_5, phi_bb129_5);
      ca_.Bind(&catch345_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch348__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch348__label);
    tmp347 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb129_5}, TNode<Uint32T>{tmp344});
    }
    if (catch348__label.is_used()) {
      compiler::CodeAssemblerLabel catch348_skip(&ca_);
      ca_.Goto(&catch348_skip);
      ca_.Bind(&catch348__label, &tmp349);
      ca_.Goto(&block138, phi_bb129_5, phi_bb129_8, phi_bb129_9, phi_bb129_10, phi_bb129_5);
      ca_.Bind(&catch348_skip);
    }
    ca_.Branch(tmp347, &block135, std::vector<compiler::Node*>{phi_bb129_5, phi_bb129_8, phi_bb129_9, phi_bb129_10}, &block136, std::vector<compiler::Node*>{phi_bb129_5, phi_bb129_8, phi_bb129_9, phi_bb129_10});
  }

  TNode<Uint32T> phi_bb137_5;
  TNode<Smi> phi_bb137_8;
  TNode<Object> phi_bb137_9;
  TNode<Object> phi_bb137_10;
  TNode<Uint32T> phi_bb137_11;
  TNode<Uint32T> phi_bb137_12;
  TNode<HeapObject> tmp350;
  if (block137.is_used()) {
    ca_.Bind(&block137, &phi_bb137_5, &phi_bb137_8, &phi_bb137_9, &phi_bb137_10, &phi_bb137_11, &phi_bb137_12);
    tmp350 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp346, tmp350);
  }

  TNode<Uint32T> phi_bb138_5;
  TNode<Smi> phi_bb138_8;
  TNode<Object> phi_bb138_9;
  TNode<Object> phi_bb138_10;
  TNode<Uint32T> phi_bb138_11;
  TNode<HeapObject> tmp351;
  if (block138.is_used()) {
    ca_.Bind(&block138, &phi_bb138_5, &phi_bb138_8, &phi_bb138_9, &phi_bb138_10, &phi_bb138_11);
    tmp351 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp349, tmp351);
  }

  TNode<Uint32T> phi_bb135_5;
  TNode<Smi> phi_bb135_8;
  TNode<Object> phi_bb135_9;
  TNode<Object> phi_bb135_10;
  TNode<Uint32T> tmp352;
      TNode<Object> tmp354;
  TNode<JSReceiver> tmp355;
  TNode<Object> tmp356;
      TNode<Object> tmp358;
      TNode<Object> tmp361;
  if (block135.is_used()) {
    ca_.Bind(&block135, &phi_bb135_5, &phi_bb135_8, &phi_bb135_9, &phi_bb135_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch353__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch353__label);
    tmp352 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kRejectPromise_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kRejectPromise);
    }
    if (catch353__label.is_used()) {
      compiler::CodeAssemblerLabel catch353_skip(&ca_);
      ca_.Goto(&catch353_skip);
      ca_.Bind(&catch353__label, &tmp354);
      ca_.Goto(&block140, phi_bb135_5, phi_bb135_8, phi_bb135_9, phi_bb135_10);
      ca_.Bind(&catch353_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch357__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch357__label);
    std::tie(tmp355, tmp356) = GetIteratorRecordFromArrayFromAsyncResolveContext_0(state_, TNode<Context>{p_context}).Flatten();
    }
    if (catch357__label.is_used()) {
      compiler::CodeAssemblerLabel catch357_skip(&ca_);
      ca_.Goto(&catch357_skip);
      ca_.Bind(&catch357__label, &tmp358);
      ca_.Goto(&block141, phi_bb135_8, phi_bb135_9, phi_bb135_10);
      ca_.Bind(&catch357_skip);
    }
    compiler::CodeAssemblerLabel label359(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch360__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch360__label);
    ArrayFromAsyncAsyncIteratorCloseOnException_0(state_, TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp355}, TNode<Object>{tmp356}}, &label359);
    }
    if (catch360__label.is_used()) {
      compiler::CodeAssemblerLabel catch360_skip(&ca_);
      ca_.Goto(&catch360_skip);
      ca_.Bind(&catch360__label, &tmp361);
      ca_.Goto(&block146, phi_bb135_8, phi_bb135_9, phi_bb135_10);
      ca_.Bind(&catch360_skip);
    }
    ca_.Goto(&block144, phi_bb135_8, phi_bb135_9, phi_bb135_10);
    if (label359.is_used()) {
      ca_.Bind(&label359);
      ca_.Goto(&block145, phi_bb135_8, phi_bb135_9, phi_bb135_10);
    }
  }

  TNode<Uint32T> phi_bb140_5;
  TNode<Smi> phi_bb140_8;
  TNode<Object> phi_bb140_9;
  TNode<Object> phi_bb140_10;
  TNode<HeapObject> tmp362;
  if (block140.is_used()) {
    ca_.Bind(&block140, &phi_bb140_5, &phi_bb140_8, &phi_bb140_9, &phi_bb140_10);
    tmp362 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp354, tmp362);
  }

  TNode<Smi> phi_bb141_8;
  TNode<Object> phi_bb141_9;
  TNode<Object> phi_bb141_10;
  TNode<HeapObject> tmp363;
  if (block141.is_used()) {
    ca_.Bind(&block141, &phi_bb141_8, &phi_bb141_9, &phi_bb141_10);
    tmp363 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp358, tmp363);
  }

  TNode<Smi> phi_bb146_8;
  TNode<Object> phi_bb146_9;
  TNode<Object> phi_bb146_10;
  TNode<HeapObject> tmp364;
  if (block146.is_used()) {
    ca_.Bind(&block146, &phi_bb146_8, &phi_bb146_9, &phi_bb146_10);
    tmp364 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp361, tmp364);
  }

  TNode<Smi> phi_bb145_8;
  TNode<Object> phi_bb145_9;
  TNode<Object> phi_bb145_10;
  if (block145.is_used()) {
    ca_.Bind(&block145, &phi_bb145_8, &phi_bb145_9, &phi_bb145_10);
    ca_.Goto(&block139, tmp352, phi_bb145_8, phi_bb145_9, phi_bb145_10);
  }

  TNode<Smi> phi_bb144_8;
  TNode<Object> phi_bb144_9;
  TNode<Object> phi_bb144_10;
  TNode<Undefined> tmp365;
  if (block144.is_used()) {
    ca_.Bind(&block144, &phi_bb144_8, &phi_bb144_9, &phi_bb144_10);
    tmp365 = Undefined_0(state_);
    ca_.Goto(&block1, tmp365);
  }

  TNode<Uint32T> phi_bb136_5;
  TNode<Smi> phi_bb136_8;
  TNode<Object> phi_bb136_9;
  TNode<Object> phi_bb136_10;
  TNode<Uint32T> tmp366;
      TNode<Object> tmp368;
  TNode<BoolT> tmp369;
      TNode<Object> tmp371;
  if (block136.is_used()) {
    ca_.Bind(&block136, &phi_bb136_5, &phi_bb136_8, &phi_bb136_9, &phi_bb136_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch367__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch367__label);
    tmp366 = FromConstexpr_uint32_constexpr_uint32_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kRejectPromise);
    }
    if (catch367__label.is_used()) {
      compiler::CodeAssemblerLabel catch367_skip(&ca_);
      ca_.Goto(&catch367_skip);
      ca_.Bind(&catch367__label, &tmp368);
      ca_.Goto(&block149, phi_bb136_5, phi_bb136_8, phi_bb136_9, phi_bb136_10, phi_bb136_5, phi_bb136_5);
      ca_.Bind(&catch367_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch370__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch370__label);
    tmp369 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{phi_bb136_5}, TNode<Uint32T>{tmp366});
    }
    if (catch370__label.is_used()) {
      compiler::CodeAssemblerLabel catch370_skip(&ca_);
      ca_.Goto(&catch370_skip);
      ca_.Bind(&catch370__label, &tmp371);
      ca_.Goto(&block150, phi_bb136_5, phi_bb136_8, phi_bb136_9, phi_bb136_10, phi_bb136_5);
      ca_.Bind(&catch370_skip);
    }
    ca_.Branch(tmp369, &block147, std::vector<compiler::Node*>{phi_bb136_5, phi_bb136_8, phi_bb136_9, phi_bb136_10}, &block148, std::vector<compiler::Node*>{phi_bb136_5, phi_bb136_8, phi_bb136_9, phi_bb136_10});
  }

  TNode<Uint32T> phi_bb149_5;
  TNode<Smi> phi_bb149_8;
  TNode<Object> phi_bb149_9;
  TNode<Object> phi_bb149_10;
  TNode<Uint32T> phi_bb149_11;
  TNode<Uint32T> phi_bb149_12;
  TNode<HeapObject> tmp372;
  if (block149.is_used()) {
    ca_.Bind(&block149, &phi_bb149_5, &phi_bb149_8, &phi_bb149_9, &phi_bb149_10, &phi_bb149_11, &phi_bb149_12);
    tmp372 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp368, tmp372);
  }

  TNode<Uint32T> phi_bb150_5;
  TNode<Smi> phi_bb150_8;
  TNode<Object> phi_bb150_9;
  TNode<Object> phi_bb150_10;
  TNode<Uint32T> phi_bb150_11;
  TNode<HeapObject> tmp373;
  if (block150.is_used()) {
    ca_.Bind(&block150, &phi_bb150_5, &phi_bb150_8, &phi_bb150_9, &phi_bb150_10, &phi_bb150_11);
    tmp373 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp371, tmp373);
  }

  TNode<Uint32T> phi_bb147_5;
  TNode<Smi> phi_bb147_8;
  TNode<Object> phi_bb147_9;
  TNode<Object> phi_bb147_10;
  TNode<Object> tmp374;
      TNode<Object> tmp376;
  if (block147.is_used()) {
    ca_.Bind(&block147, &phi_bb147_5, &phi_bb147_8, &phi_bb147_9, &phi_bb147_10);
    compiler::CodeAssemblerExceptionHandlerLabel catch375__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch375__label);
    tmp374 = RejectArrayFromAsyncPromise_0(state_, TNode<Context>{p_context});
    }
    if (catch375__label.is_used()) {
      compiler::CodeAssemblerLabel catch375_skip(&ca_);
      ca_.Goto(&catch375_skip);
      ca_.Bind(&catch375__label, &tmp376);
      ca_.Goto(&block151, phi_bb147_5, phi_bb147_8, phi_bb147_9, phi_bb147_10);
      ca_.Bind(&catch375_skip);
    }
    ca_.Goto(&block1, tmp374);
  }

  TNode<Uint32T> phi_bb151_5;
  TNode<Smi> phi_bb151_8;
  TNode<Object> phi_bb151_9;
  TNode<Object> phi_bb151_10;
  TNode<HeapObject> tmp377;
  if (block151.is_used()) {
    ca_.Bind(&block151, &phi_bb151_5, &phi_bb151_8, &phi_bb151_9, &phi_bb151_10);
    tmp377 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block3, tmp376, tmp377);
  }

  TNode<Uint32T> phi_bb148_5;
  TNode<Smi> phi_bb148_8;
  TNode<Object> phi_bb148_9;
  TNode<Object> phi_bb148_10;
  if (block148.is_used()) {
    ca_.Bind(&block148, &phi_bb148_5, &phi_bb148_8, &phi_bb148_9, &phi_bb148_10);
    ca_.Goto(&block139, phi_bb148_5, phi_bb148_8, phi_bb148_9, phi_bb148_10);
  }

  TNode<Uint32T> phi_bb139_5;
  TNode<Smi> phi_bb139_8;
  TNode<Object> phi_bb139_9;
  TNode<Object> phi_bb139_10;
  if (block139.is_used()) {
    ca_.Bind(&block139, &phi_bb139_5, &phi_bb139_8, &phi_bb139_9, &phi_bb139_10);
    ca_.Goto(&block125, phi_bb139_5, phi_bb139_8, phi_bb139_9, phi_bb139_10);
  }

  TNode<Uint32T> phi_bb125_5;
  TNode<Smi> phi_bb125_8;
  TNode<Object> phi_bb125_9;
  TNode<Object> phi_bb125_10;
  if (block125.is_used()) {
    ca_.Bind(&block125, &phi_bb125_5, &phi_bb125_8, &phi_bb125_9, &phi_bb125_10);
    ca_.Goto(&block91, phi_bb125_5, phi_bb125_8, phi_bb125_9, phi_bb125_10);
  }

  TNode<Uint32T> phi_bb91_5;
  TNode<Smi> phi_bb91_8;
  TNode<Object> phi_bb91_9;
  TNode<Object> phi_bb91_10;
  if (block91.is_used()) {
    ca_.Bind(&block91, &phi_bb91_5, &phi_bb91_8, &phi_bb91_9, &phi_bb91_10);
    ca_.Goto(&block70, phi_bb91_5, phi_bb91_8, phi_bb91_9, phi_bb91_10);
  }

  TNode<Uint32T> phi_bb70_5;
  TNode<Smi> phi_bb70_8;
  TNode<Object> phi_bb70_9;
  TNode<Object> phi_bb70_10;
  if (block70.is_used()) {
    ca_.Bind(&block70, &phi_bb70_5, &phi_bb70_8, &phi_bb70_9, &phi_bb70_10);
    ca_.Goto(&block64, phi_bb70_5, phi_bb70_8, phi_bb70_9, phi_bb70_10);
  }

  TNode<Uint32T> phi_bb64_5;
  TNode<Smi> phi_bb64_8;
  TNode<Object> phi_bb64_9;
  TNode<Object> phi_bb64_10;
  if (block64.is_used()) {
    ca_.Bind(&block64, &phi_bb64_5, &phi_bb64_8, &phi_bb64_9, &phi_bb64_10);
    ca_.Goto(&block30, phi_bb64_5, phi_bb64_8, phi_bb64_9, phi_bb64_10);
  }

  TNode<Uint32T> phi_bb30_5;
  TNode<Smi> phi_bb30_8;
  TNode<Object> phi_bb30_9;
  TNode<Object> phi_bb30_10;
  if (block30.is_used()) {
    ca_.Bind(&block30, &phi_bb30_5, &phi_bb30_8, &phi_bb30_9, &phi_bb30_10);
    ca_.Goto(&block15, phi_bb30_5, phi_bb30_8, phi_bb30_9, phi_bb30_10);
  }

  TNode<Uint32T> phi_bb14_5;
  TNode<Smi> phi_bb14_8;
  TNode<Object> phi_bb14_9;
  TNode<Object> phi_bb14_10;
  if (block14.is_used()) {
    ca_.Bind(&block14, &phi_bb14_5, &phi_bb14_8, &phi_bb14_9, &phi_bb14_10);
    ca_.Goto(&block2);
  }

  TNode<Object> phi_bb3_1;
  TNode<HeapObject> phi_bb3_2;
  TNode<IntPtrT> tmp378;
  TNode<Object> tmp379;
  TNode<IntPtrT> tmp380;
  TNode<JSReceiver> tmp381;
  TNode<Object> tmp382;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_1, &phi_bb3_2);
    tmp378 = kArrayFromAsyncResolveErrorSlot_0(state_);
    std::tie(tmp379, tmp380) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{p_context}, TNode<IntPtrT>{tmp378}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp379, tmp380}, phi_bb3_1);
    std::tie(tmp381, tmp382) = GetIteratorRecordFromArrayFromAsyncResolveContext_0(state_, TNode<Context>{p_context}).Flatten();
    compiler::CodeAssemblerLabel label383(&ca_);
    ArrayFromAsyncAsyncIteratorCloseOnException_0(state_, TNode<Context>{p_context}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp381}, TNode<Object>{tmp382}}, &label383);
    ca_.Goto(&block154);
    if (label383.is_used()) {
      ca_.Bind(&label383);
      ca_.Goto(&block155);
    }
  }

  TNode<Object> tmp384;
  if (block155.is_used()) {
    ca_.Bind(&block155);
    tmp384 = RejectArrayFromAsyncPromise_0(state_, TNode<Context>{p_context});
    ca_.Goto(&block1, tmp384);
  }

  if (block154.is_used()) {
    ca_.Bind(&block154);
    ca_.Goto(&block2);
  }

  TNode<Undefined> tmp385;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp385 = Undefined_0(state_);
    ca_.Goto(&block1, tmp385);
  }

  TNode<Object> phi_bb1_1;
  if (block1.is_used()) {
    ca_.Bind(&block1, &phi_bb1_1);
    ca_.Goto(&block156);
  }

    ca_.Bind(&block156);
  return TNode<Object>{phi_bb1_1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=392&c=1
TNode<Object> ArrayFromAsyncAwaitPoint_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_step, TNode<Object> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Smi> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<JSReceiver> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  TNode<HeapObject> tmp12;
  TNode<IntPtrT> tmp13;
  TNode<Object> tmp14;
  TNode<IntPtrT> tmp15;
  TNode<HeapObject> tmp16;
  TNode<Object> tmp17;
  TNode<JSPromise> tmp18;
  TNode<Undefined> tmp19;
  TNode<Undefined> tmp20;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{p_context});
    tmp1 = kArrayFromAsyncResolveResumeStateStepSlot_0(state_);
    std::tie(tmp2, tmp3) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp1}).Flatten();
    tmp4 = SmiTag_ArrayFromAsyncLabels_0(state_, TNode<Uint32T>{p_step});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3}, tmp4);
    tmp5 = kArrayFromAsyncResolvePromiseFunctionSlot_0(state_);
    std::tie(tmp6, tmp7) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp5}).Flatten();
    tmp8 = CodeStubAssembler(state_).LoadReference<JSReceiver>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = kArrayFromAsyncResolveOnFulfilledFunctionSlot_0(state_);
    std::tie(tmp10, tmp11) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Undefined_OR_JSFunction_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp9}).Flatten();
    tmp12 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp10, tmp11});
    tmp13 = kArrayFromAsyncResolveOnRejectedFunctionSlot_0(state_);
    std::tie(tmp14, tmp15) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Undefined_OR_JSFunction_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp13}).Flatten();
    tmp16 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp14, tmp15});
    tmp17 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kPromiseResolve), tmp0, tmp8, p_value);
    tmp18 = UnsafeCast_JSPromise_0(state_, TNode<Context>{tmp0}, TNode<Object>{tmp17});
    tmp19 = Undefined_0(state_);
    PerformPromiseThenImpl_0(state_, TNode<Context>{tmp0}, TNode<JSPromise>{tmp18}, TNode<HeapObject>{tmp12}, TNode<HeapObject>{tmp16}, TNode<HeapObject>{tmp19});
    tmp20 = Undefined_0(state_);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp20};
}

TF_BUILTIN(ArrayFromAsyncOnFulfilled, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kResult);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Object> tmp4;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{parameter0});
    tmp1 = kArrayFromAsyncResolveResumeStateAwaitedValueSlot_0(state_);
    std::tie(tmp2, tmp3) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp1}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp2, tmp3}, parameter3);
    tmp4 = CreateArrayFromIterableAsynchronously_0(state_, TNode<Context>{tmp0});
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(ArrayFromAsyncOnRejected, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<NativeContext> parameter0 = UncheckedParameter<NativeContext>(Descriptor::kContext);
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedParameter<Object>(Descriptor::kReceiver);
  USE(parameter1);
  TNode<JSFunction> parameter2 = UncheckedParameter<JSFunction>(Descriptor::kJSTarget);
USE(parameter2);
  TNode<Object> parameter3 = UncheckedParameter<Object>(Descriptor::kResult);
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Uint32T> tmp4;
  TNode<Smi> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<IntPtrT> tmp8;
  TNode<Object> tmp9;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{parameter0});
    tmp1 = kArrayFromAsyncResolveResumeStateStepSlot_0(state_);
    std::tie(tmp2, tmp3) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp1}).Flatten();
    tmp4 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kCloseAsyncIterator_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kCloseAsyncIterator);
    tmp5 = SmiTag_ArrayFromAsyncLabels_0(state_, TNode<Uint32T>{tmp4});
    CodeStubAssembler(state_).StoreReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3}, tmp5);
    tmp6 = kArrayFromAsyncResolveErrorSlot_0(state_);
    std::tie(tmp7, tmp8) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp6}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp7, tmp8}, parameter3);
    tmp9 = CreateArrayFromIterableAsynchronously_0(state_, TNode<Context>{tmp0});
    CodeStubAssembler(state_).Return(tmp9);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=461&c=1
TNode<Object> RejectArrayFromAsyncPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<Object> tmp2;
  TNode<IntPtrT> tmp3;
  TNode<Object> tmp4;
  TNode<IntPtrT> tmp5;
  TNode<Object> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<JSPromise> tmp8;
  TNode<False> tmp9;
  TNode<Object> tmp10;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{p_context});
    tmp1 = kArrayFromAsyncResolveErrorSlot_0(state_);
    std::tie(tmp2, tmp3) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp1}).Flatten();
    tmp4 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp2, tmp3});
    tmp5 = kArrayFromAsyncResolvePromiseSlot_0(state_);
    std::tie(tmp6, tmp7) = ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSPromise_0(state_, TNode<Context>{tmp0}, TNode<IntPtrT>{tmp5}).Flatten();
    tmp8 = CodeStubAssembler(state_).LoadReference<JSPromise>(CodeStubAssembler::Reference{tmp6, tmp7});
    tmp9 = False_0(state_);
    tmp10 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kRejectPromise), tmp0, tmp8, tmp4, tmp9);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Object>{tmp10};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=477&c=1
void ArrayFromAsyncAsyncIteratorCloseOnException_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TorqueStructIteratorRecord p_iterator, compiler::CodeAssemblerLabel* label_RejectPromise) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Context> tmp0;
  TNode<String> tmp1;
  TNode<Object> tmp2;
      TNode<Object> tmp4;
  TNode<Undefined> tmp5;
  TNode<BoolT> tmp6;
      TNode<Object> tmp8;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = (TNode<Context>{p_context});
    tmp1 = kReturnString_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch3__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch3__label);
    tmp2 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp0}, TNode<Object>{p_iterator.object}, TNode<Object>{tmp1});
    }
    if (catch3__label.is_used()) {
      compiler::CodeAssemblerLabel catch3_skip(&ca_);
      ca_.Goto(&catch3_skip);
      ca_.Bind(&catch3__label, &tmp4);
      ca_.Goto(&block5);
      ca_.Bind(&catch3_skip);
    }
    tmp5 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch7__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch7__label);
    tmp6 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp5});
    }
    if (catch7__label.is_used()) {
      compiler::CodeAssemblerLabel catch7_skip(&ca_);
      ca_.Goto(&catch7_skip);
      ca_.Bind(&catch7__label, &tmp8);
      ca_.Goto(&block8);
      ca_.Bind(&catch7_skip);
    }
    ca_.Branch(tmp6, &block9, std::vector<compiler::Node*>{}, &block10, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp9;
  if (block5.is_used()) {
    ca_.Bind(&block5);
    tmp9 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp4, tmp9);
  }

  TNode<HeapObject> tmp10;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    tmp10 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp8, tmp10);
  }

  TNode<BoolT> tmp11;
      TNode<Object> tmp13;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    compiler::CodeAssemblerExceptionHandlerLabel catch12__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch12__label);
    tmp11 = FromConstexpr_bool_constexpr_bool_0(state_, true);
    }
    if (catch12__label.is_used()) {
      compiler::CodeAssemblerLabel catch12_skip(&ca_);
      ca_.Goto(&catch12_skip);
      ca_.Bind(&catch12__label, &tmp13);
      ca_.Goto(&block12);
      ca_.Bind(&catch12_skip);
    }
    ca_.Goto(&block11, tmp11);
  }

  TNode<HeapObject> tmp14;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp14 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp13, tmp14);
  }

  TNode<Null> tmp15;
  TNode<BoolT> tmp16;
      TNode<Object> tmp18;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    tmp15 = Null_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch17__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch17__label);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp15});
    }
    if (catch17__label.is_used()) {
      compiler::CodeAssemblerLabel catch17_skip(&ca_);
      ca_.Goto(&catch17_skip);
      ca_.Bind(&catch17__label, &tmp18);
      ca_.Goto(&block13);
      ca_.Bind(&catch17_skip);
    }
    ca_.Goto(&block11, tmp16);
  }

  TNode<HeapObject> tmp19;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp19 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp18, tmp19);
  }

  TNode<BoolT> phi_bb11_6;
  if (block11.is_used()) {
    ca_.Bind(&block11, &phi_bb11_6);
    ca_.Branch(phi_bb11_6, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(label_RejectPromise);
  }

  TNode<Object> tmp20;
      TNode<Object> tmp22;
  TNode<Uint32T> tmp23;
      TNode<Object> tmp25;
  TNode<Object> tmp26;
      TNode<Object> tmp28;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerExceptionHandlerLabel catch21__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch21__label);
    tmp20 = CodeStubAssembler(state_).Call(TNode<Context>{tmp0}, TNode<Object>{tmp2}, TNode<Object>{p_iterator.object});
    }
    if (catch21__label.is_used()) {
      compiler::CodeAssemblerLabel catch21_skip(&ca_);
      ca_.Goto(&catch21_skip);
      ca_.Bind(&catch21__label, &tmp22);
      ca_.Goto(&block14);
      ca_.Bind(&catch21_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch24__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch24__label);
    tmp23 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kRejectPromise_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kRejectPromise);
    }
    if (catch24__label.is_used()) {
      compiler::CodeAssemblerLabel catch24_skip(&ca_);
      ca_.Goto(&catch24_skip);
      ca_.Bind(&catch24__label, &tmp25);
      ca_.Goto(&block15);
      ca_.Bind(&catch24_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch27__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch27__label);
    tmp26 = ArrayFromAsyncAwaitPoint_0(state_, TNode<Context>{tmp0}, TNode<Uint32T>{tmp23}, TNode<Object>{tmp20});
    }
    if (catch27__label.is_used()) {
      compiler::CodeAssemblerLabel catch27_skip(&ca_);
      ca_.Goto(&catch27_skip);
      ca_.Bind(&catch27__label, &tmp28);
      ca_.Goto(&block16);
      ca_.Bind(&catch27_skip);
    }
    ca_.Goto(&block3);
  }

  TNode<HeapObject> tmp29;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp29 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp22, tmp29);
  }

  TNode<HeapObject> tmp30;
  if (block15.is_used()) {
    ca_.Bind(&block15);
    tmp30 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp25, tmp30);
  }

  TNode<HeapObject> tmp31;
  if (block16.is_used()) {
    ca_.Bind(&block16);
    tmp31 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block4, tmp28, tmp31);
  }

  TNode<Object> phi_bb4_3;
  TNode<HeapObject> phi_bb4_4;
  if (block4.is_used()) {
    ca_.Bind(&block4, &phi_bb4_3, &phi_bb4_4);
    ca_.Goto(&block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.Goto(&block17);
  }

    ca_.Bind(&block17);
}

TF_BUILTIN(ArrayFromAsync, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block39(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block40(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block42(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Object> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block48(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block51(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, JSReceiver, Object, JSReceiver, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<BoolT> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).HasBuiltinSubclassingFlag();
    ca_.Branch(tmp0, &block1, std::vector<compiler::Node*>{}, &block2, std::vector<compiler::Node*>{});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block3, parameter1);
  }

  TNode<JSFunction> tmp1;
  if (block2.is_used()) {
    ca_.Bind(&block2);
    tmp1 = GetArrayFunction_0(state_, TNode<Context>{parameter0});
    ca_.Goto(&block3, tmp1);
  }

  TNode<Object> phi_bb3_6;
  TNode<IntPtrT> tmp2;
  TNode<Object> tmp3;
  TNode<IntPtrT> tmp4;
  TNode<Object> tmp5;
  TNode<IntPtrT> tmp6;
  TNode<Object> tmp7;
  TNode<JSPromise> tmp8;
  TNode<Undefined> tmp9;
  TNode<Undefined> tmp10;
  TNode<Undefined> tmp11;
  TNode<BoolT> tmp12;
      TNode<Object> tmp14;
  if (block3.is_used()) {
    ca_.Bind(&block3, &phi_bb3_6);
    tmp2 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp3 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp2});
    tmp4 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x1ull));
    tmp5 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp4});
    tmp6 = FromConstexpr_intptr_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x2ull));
    tmp7 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{torque_arguments.frame}, TNode<RawPtrT>{torque_arguments.base}, TNode<IntPtrT>{torque_arguments.length}, TNode<IntPtrT>{torque_arguments.actual_count}}, TNode<IntPtrT>{tmp6});
    tmp8 = NewJSPromise_1(state_, TNode<Context>{parameter0});
    tmp9 = Undefined_0(state_);
    tmp10 = Undefined_0(state_);
    tmp11 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch13__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch13__label);
    tmp12 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp5}, TNode<HeapObject>{tmp11});
    }
    if (catch13__label.is_used()) {
      compiler::CodeAssemblerLabel catch13_skip(&ca_);
      ca_.Goto(&catch13_skip);
      ca_.Bind(&catch13__label, &tmp14);
      ca_.Goto(&block9);
      ca_.Bind(&catch13_skip);
    }
    ca_.Branch(tmp12, &block7, std::vector<compiler::Node*>{}, &block8, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp15;
  if (block9.is_used()) {
    ca_.Bind(&block9);
    tmp15 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp14, tmp15);
  }

  TNode<BoolT> tmp16;
      TNode<Object> tmp18;
  TNode<BoolT> tmp19;
      TNode<Object> tmp21;
  if (block7.is_used()) {
    ca_.Bind(&block7);
    compiler::CodeAssemblerExceptionHandlerLabel catch17__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch17__label);
    tmp16 = Is_Callable_JSAny_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp5});
    }
    if (catch17__label.is_used()) {
      compiler::CodeAssemblerLabel catch17_skip(&ca_);
      ca_.Goto(&catch17_skip);
      ca_.Bind(&catch17__label, &tmp18);
      ca_.Goto(&block12);
      ca_.Bind(&catch17_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch20__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch20__label);
    tmp19 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp16});
    }
    if (catch20__label.is_used()) {
      compiler::CodeAssemblerLabel catch20_skip(&ca_);
      ca_.Goto(&catch20_skip);
      ca_.Bind(&catch20__label, &tmp21);
      ca_.Goto(&block13);
      ca_.Bind(&catch20_skip);
    }
    ca_.Branch(tmp19, &block10, std::vector<compiler::Node*>{}, &block11, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp22;
  if (block12.is_used()) {
    ca_.Bind(&block12);
    tmp22 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp18, tmp22);
  }

  TNode<HeapObject> tmp23;
  if (block13.is_used()) {
    ca_.Bind(&block13);
    tmp23 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp21, tmp23);
  }

      TNode<Object> tmp25;
  if (block10.is_used()) {
    ca_.Bind(&block10);
    compiler::CodeAssemblerExceptionHandlerLabel catch24__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch24__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp5});
    }
    if (catch24__label.is_used()) {
      compiler::CodeAssemblerLabel catch24_skip(&ca_);
      ca_.Bind(&catch24__label, &tmp25);
      ca_.Goto(&block14);
    }
  }

  TNode<HeapObject> tmp26;
  if (block14.is_used()) {
    ca_.Bind(&block14);
    tmp26 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp25, tmp26);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.Goto(&block8);
  }

  TNode<Symbol> tmp27;
      TNode<Object> tmp29;
  TNode<JSReceiver> tmp30;
    compiler::TypedCodeAssemblerVariable<Object> tmp33(&ca_);
      TNode<Object> tmp35;
  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::CodeAssemblerExceptionHandlerLabel catch28__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch28__label);
    tmp27 = CodeStubAssembler(state_).AsyncIteratorSymbolConstant();
    }
    if (catch28__label.is_used()) {
      compiler::CodeAssemblerLabel catch28_skip(&ca_);
      ca_.Goto(&catch28_skip);
      ca_.Bind(&catch28__label, &tmp29);
      ca_.Goto(&block23);
      ca_.Bind(&catch28_skip);
    }
    compiler::CodeAssemblerLabel label31(&ca_);
    compiler::CodeAssemblerLabel label32(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch34__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch34__label);
    tmp30 = GetMethod_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<Name>{tmp27}, &label31, &label32, &tmp33);
    }
    if (catch34__label.is_used()) {
      compiler::CodeAssemblerLabel catch34_skip(&ca_);
      ca_.Goto(&catch34_skip);
      ca_.Bind(&catch34__label, &tmp35);
      ca_.Goto(&block27);
      ca_.Bind(&catch34_skip);
    }
    ca_.Goto(&block24);
    if (label31.is_used()) {
      ca_.Bind(&label31);
      ca_.Goto(&block25);
    }
    if (label32.is_used()) {
      ca_.Bind(&label32);
      ca_.Goto(&block26);
    }
  }

  TNode<HeapObject> tmp36;
  if (block23.is_used()) {
    ca_.Bind(&block23);
    tmp36 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp29, tmp36);
  }

  TNode<HeapObject> tmp37;
  if (block27.is_used()) {
    ca_.Bind(&block27);
    tmp37 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp35, tmp37);
  }

  TNode<Symbol> tmp38;
      TNode<Object> tmp40;
  TNode<JSReceiver> tmp41;
    compiler::TypedCodeAssemblerVariable<Object> tmp44(&ca_);
      TNode<Object> tmp46;
  if (block25.is_used()) {
    ca_.Bind(&block25);
    compiler::CodeAssemblerExceptionHandlerLabel catch39__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch39__label);
    tmp38 = CodeStubAssembler(state_).IteratorSymbolConstant();
    }
    if (catch39__label.is_used()) {
      compiler::CodeAssemblerLabel catch39_skip(&ca_);
      ca_.Goto(&catch39_skip);
      ca_.Bind(&catch39__label, &tmp40);
      ca_.Goto(&block28);
      ca_.Bind(&catch39_skip);
    }
    compiler::CodeAssemblerLabel label42(&ca_);
    compiler::CodeAssemblerLabel label43(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch45__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch45__label);
    tmp41 = GetMethod_0(state_, TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<Name>{tmp38}, &label42, &label43, &tmp44);
    }
    if (catch45__label.is_used()) {
      compiler::CodeAssemblerLabel catch45_skip(&ca_);
      ca_.Goto(&catch45_skip);
      ca_.Bind(&catch45__label, &tmp46);
      ca_.Goto(&block32);
      ca_.Bind(&catch45_skip);
    }
    ca_.Goto(&block29);
    if (label42.is_used()) {
      ca_.Bind(&label42);
      ca_.Goto(&block30);
    }
    if (label43.is_used()) {
      ca_.Bind(&label43);
      ca_.Goto(&block31);
    }
  }

      TNode<Object> tmp48;
  if (block26.is_used()) {
    ca_.Bind(&block26);
    compiler::CodeAssemblerExceptionHandlerLabel catch47__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch47__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kFirstArgumentAsyncIteratorSymbolNonCallable, "Array.fromAsync");
    }
    if (catch47__label.is_used()) {
      compiler::CodeAssemblerLabel catch47_skip(&ca_);
      ca_.Bind(&catch47__label, &tmp48);
      ca_.Goto(&block34);
    }
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.Goto(&block21, tmp30, tmp10);
  }

  TNode<HeapObject> tmp49;
  if (block28.is_used()) {
    ca_.Bind(&block28);
    tmp49 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp40, tmp49);
  }

  TNode<HeapObject> tmp50;
  if (block32.is_used()) {
    ca_.Bind(&block32);
    tmp50 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp46, tmp50);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.Goto(&block19, tmp9, tmp10);
  }

      TNode<Object> tmp52;
  if (block31.is_used()) {
    ca_.Bind(&block31);
    compiler::CodeAssemblerExceptionHandlerLabel catch51__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch51__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{parameter0}, MessageTemplate::kFirstArgumentIteratorSymbolNonCallable, "Array.fromAsync");
    }
    if (catch51__label.is_used()) {
      compiler::CodeAssemblerLabel catch51_skip(&ca_);
      ca_.Bind(&catch51__label, &tmp52);
      ca_.Goto(&block33);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.Goto(&block21, tmp9, tmp41);
  }

  TNode<Object> phi_bb21_11;
  TNode<Object> phi_bb21_12;
  if (block21.is_used()) {
    ca_.Bind(&block21, &phi_bb21_11, &phi_bb21_12);
    ca_.Goto(&block19, phi_bb21_11, phi_bb21_12);
  }

  TNode<Object> phi_bb19_11;
  TNode<Object> phi_bb19_12;
  TNode<Undefined> tmp53;
  TNode<BoolT> tmp54;
      TNode<Object> tmp56;
  if (block19.is_used()) {
    ca_.Bind(&block19, &phi_bb19_11, &phi_bb19_12);
    tmp53 = Undefined_0(state_);
    compiler::CodeAssemblerExceptionHandlerLabel catch55__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch55__label);
    tmp54 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{phi_bb19_11}, TNode<HeapObject>{tmp53});
    }
    if (catch55__label.is_used()) {
      compiler::CodeAssemblerLabel catch55_skip(&ca_);
      ca_.Goto(&catch55_skip);
      ca_.Bind(&catch55__label, &tmp56);
      ca_.Goto(&block39);
      ca_.Bind(&catch55_skip);
    }
    ca_.Branch(tmp54, &block35, std::vector<compiler::Node*>{}, &block36, std::vector<compiler::Node*>{});
  }

  TNode<HeapObject> tmp57;
  if (block33.is_used()) {
    ca_.Bind(&block33);
    tmp57 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp52, tmp57);
  }

  TNode<HeapObject> tmp58;
  if (block34.is_used()) {
    ca_.Bind(&block34);
    tmp58 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, tmp9, tmp10, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp48, tmp58);
  }

  TNode<HeapObject> tmp59;
  if (block39.is_used()) {
    ca_.Bind(&block39);
    tmp59 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp56, tmp59);
  }

  TNode<JSReceiver> tmp60;
  TNode<Object> tmp61;
      TNode<Object> tmp63;
  if (block35.is_used()) {
    ca_.Bind(&block35);
    compiler::CodeAssemblerExceptionHandlerLabel catch62__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch62__label);
    std::tie(tmp60, tmp61) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<Object>{phi_bb19_11}).Flatten();
    }
    if (catch62__label.is_used()) {
      compiler::CodeAssemblerLabel catch62_skip(&ca_);
      ca_.Goto(&catch62_skip);
      ca_.Bind(&catch62__label, &tmp63);
      ca_.Goto(&block40);
      ca_.Bind(&catch62_skip);
    }
    ca_.Goto(&block37, tmp60, tmp61);
  }

  TNode<HeapObject> tmp64;
  if (block40.is_used()) {
    ca_.Bind(&block40);
    tmp64 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp63, tmp64);
  }

  TNode<JSReceiver> tmp65;
  TNode<Object> tmp66;
      TNode<Object> tmp68;
  TNode<JSReceiver> tmp69;
  TNode<Object> tmp70;
      TNode<Object> tmp72;
  if (block36.is_used()) {
    ca_.Bind(&block36);
    compiler::CodeAssemblerExceptionHandlerLabel catch67__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch67__label);
    std::tie(tmp65, tmp66) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{parameter0}, TNode<Object>{tmp3}, TNode<Object>{phi_bb19_12}).Flatten();
    }
    if (catch67__label.is_used()) {
      compiler::CodeAssemblerLabel catch67_skip(&ca_);
      ca_.Goto(&catch67_skip);
      ca_.Bind(&catch67__label, &tmp68);
      ca_.Goto(&block41);
      ca_.Bind(&catch67_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch71__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch71__label);
    std::tie(tmp69, tmp70) = GetIteratorRecordAfterCreateAsyncFromSyncIterator_0(state_, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp65}, TNode<Object>{tmp66}}).Flatten();
    }
    if (catch71__label.is_used()) {
      compiler::CodeAssemblerLabel catch71_skip(&ca_);
      ca_.Goto(&catch71_skip);
      ca_.Bind(&catch71__label, &tmp72);
      ca_.Goto(&block42);
      ca_.Bind(&catch71_skip);
    }
    ca_.Goto(&block37, tmp69, tmp70);
  }

  TNode<HeapObject> tmp73;
  if (block41.is_used()) {
    ca_.Bind(&block41);
    tmp73 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp68, tmp73);
  }

  TNode<HeapObject> tmp74;
  if (block42.is_used()) {
    ca_.Bind(&block42);
    tmp74 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, ca_.Uninitialized<JSReceiver>(), ca_.Uninitialized<Object>(), ca_.Uninitialized<JSReceiver>(), tmp72, tmp74);
  }

  TNode<JSReceiver> phi_bb37_17;
  TNode<Object> phi_bb37_18;
  TNode<JSReceiver> tmp75;
      TNode<Object> tmp78;
  if (block37.is_used()) {
    ca_.Bind(&block37, &phi_bb37_17, &phi_bb37_18);
    compiler::CodeAssemblerLabel label76(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch77__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch77__label);
    tmp75 = Cast_Constructor_1(state_, TNode<Context>{parameter0}, TNode<Object>{phi_bb3_6}, &label76);
    }
    if (catch77__label.is_used()) {
      compiler::CodeAssemblerLabel catch77_skip(&ca_);
      ca_.Goto(&catch77_skip);
      ca_.Bind(&catch77__label, &tmp78);
      ca_.Goto(&block47);
      ca_.Bind(&catch77_skip);
    }
    ca_.Goto(&block45);
    if (label76.is_used()) {
      ca_.Bind(&label76);
      ca_.Goto(&block46);
    }
  }

  TNode<HeapObject> tmp79;
  if (block47.is_used()) {
    ca_.Bind(&block47);
    tmp79 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, phi_bb37_17, phi_bb37_18, ca_.Uninitialized<JSReceiver>(), tmp78, tmp79);
  }

  TNode<Number> tmp80;
      TNode<Object> tmp82;
  TNode<JSArray> tmp83;
      TNode<Object> tmp85;
  if (block46.is_used()) {
    ca_.Bind(&block46);
    compiler::CodeAssemblerExceptionHandlerLabel catch81__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch81__label);
    tmp80 = FromConstexpr_Number_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    }
    if (catch81__label.is_used()) {
      compiler::CodeAssemblerLabel catch81_skip(&ca_);
      ca_.Goto(&catch81_skip);
      ca_.Bind(&catch81__label, &tmp82);
      ca_.Goto(&block49);
      ca_.Bind(&catch81_skip);
    }
    compiler::CodeAssemblerExceptionHandlerLabel catch84__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch84__label);
    tmp83 = CodeStubAssembler(state_).ArrayCreate(TNode<Context>{parameter0}, TNode<Number>{tmp80});
    }
    if (catch84__label.is_used()) {
      compiler::CodeAssemblerLabel catch84_skip(&ca_);
      ca_.Goto(&catch84_skip);
      ca_.Bind(&catch84__label, &tmp85);
      ca_.Goto(&block50);
      ca_.Bind(&catch84_skip);
    }
    ca_.Goto(&block43, tmp83);
  }

  TNode<JSReceiver> tmp86;
      TNode<Object> tmp88;
  if (block45.is_used()) {
    ca_.Bind(&block45);
    compiler::CodeAssemblerExceptionHandlerLabel catch87__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch87__label);
    tmp86 = CodeStubAssembler(state_).Construct(TNode<Context>{parameter0}, TNode<JSReceiver>{tmp75});
    }
    if (catch87__label.is_used()) {
      compiler::CodeAssemblerLabel catch87_skip(&ca_);
      ca_.Goto(&catch87_skip);
      ca_.Bind(&catch87__label, &tmp88);
      ca_.Goto(&block48);
      ca_.Bind(&catch87_skip);
    }
    ca_.Goto(&block43, tmp86);
  }

  TNode<HeapObject> tmp89;
  if (block48.is_used()) {
    ca_.Bind(&block48);
    tmp89 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, phi_bb37_17, phi_bb37_18, ca_.Uninitialized<JSReceiver>(), tmp88, tmp89);
  }

  TNode<HeapObject> tmp90;
  if (block49.is_used()) {
    ca_.Bind(&block49);
    tmp90 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, phi_bb37_17, phi_bb37_18, ca_.Uninitialized<JSReceiver>(), tmp82, tmp90);
  }

  TNode<HeapObject> tmp91;
  if (block50.is_used()) {
    ca_.Bind(&block50);
    tmp91 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, phi_bb37_17, phi_bb37_18, ca_.Uninitialized<JSReceiver>(), tmp85, tmp91);
  }

  TNode<JSReceiver> phi_bb43_15;
  TNode<Uint32T> tmp92;
      TNode<Object> tmp94;
  TNode<Undefined> tmp95;
  TNode<Smi> tmp96;
  TNode<Smi> tmp97;
  TNode<IntPtrT> tmp98;
  TNode<Object> tmp99;
  TNode<IntPtrT> tmp100;
  TNode<JSFunction> tmp101;
  TNode<IntPtrT> tmp102;
  TNode<Object> tmp103;
  TNode<IntPtrT> tmp104;
  TNode<Map> tmp105;
  TNode<Undefined> tmp106;
  TNode<Context> tmp107;
  TNode<Object> tmp108;
  if (block43.is_used()) {
    ca_.Bind(&block43, &phi_bb43_15);
    compiler::CodeAssemblerExceptionHandlerLabel catch93__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::ScopedExceptionHandler s(&ca_, &catch93__label);
    tmp92 = FromConstexpr_ArrayFromAsyncLabels_constexpr_kGetIteratorStep_0(state_, ArrayBuiltins::ArrayFromAsyncLabels::kGetIteratorStep);
    }
    if (catch93__label.is_used()) {
      compiler::CodeAssemblerLabel catch93_skip(&ca_);
      ca_.Goto(&catch93_skip);
      ca_.Bind(&catch93__label, &tmp94);
      ca_.Goto(&block51);
      ca_.Bind(&catch93_skip);
    }
    tmp95 = Undefined_0(state_);
    tmp96 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp97 = FromConstexpr_Smi_constexpr_IntegerLiteral_0(state_, IntegerLiteral(false, 0x0ull));
    tmp98 = PROMISE_FUNCTION_INDEX_0(state_);
    std::tie(tmp99, tmp100) = NativeContextSlot_JSFunction_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp98}).Flatten();
    tmp101 = CodeStubAssembler(state_).LoadReference<JSFunction>(CodeStubAssembler::Reference{tmp99, tmp100});
    tmp102 = STRICT_FUNCTION_WITHOUT_PROTOTYPE_MAP_INDEX_0(state_);
    std::tie(tmp103, tmp104) = NativeContextSlot_Map_0(state_, TNode<NativeContext>{parameter0}, TNode<IntPtrT>{tmp102}).Flatten();
    tmp105 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp103, tmp104});
    tmp106 = Undefined_0(state_);
    tmp107 = CreateArrayFromAsyncResolveContext_0(state_, TNode<Context>{parameter0}, TorqueStructArrayFromAsyncResumeState_0{TNode<Uint32T>{tmp92}, TNode<Object>{tmp95}, TNode<Smi>{tmp96}, TNode<Smi>{tmp97}}, TNode<JSPromise>{tmp8}, TNode<JSReceiver>{tmp101}, TNode<Map>{tmp105}, TNode<JSReceiver>{phi_bb37_17}, TNode<Object>{phi_bb37_18}, TNode<JSReceiver>{phi_bb43_15}, TNode<Object>{tmp106}, TNode<Object>{tmp5}, TNode<Object>{tmp7}, TNode<NativeContext>{parameter0});
    tmp108 = CreateArrayFromIterableAsynchronously_0(state_, TNode<Context>{tmp107});
    arguments.PopAndReturn(tmp8);
  }

  TNode<HeapObject> tmp109;
  if (block51.is_used()) {
    ca_.Bind(&block51);
    tmp109 = GetAndResetPendingMessage_0(state_);
    ca_.Goto(&block6, phi_bb19_11, phi_bb19_12, phi_bb37_17, phi_bb37_18, phi_bb43_15, tmp94, tmp109);
  }

  TNode<Object> phi_bb6_11;
  TNode<Object> phi_bb6_12;
  TNode<JSReceiver> phi_bb6_13;
  TNode<Object> phi_bb6_14;
  TNode<JSReceiver> phi_bb6_15;
  TNode<Object> phi_bb6_17;
  TNode<HeapObject> phi_bb6_18;
  TNode<False> tmp110;
  TNode<Object> tmp111;
  if (block6.is_used()) {
    ca_.Bind(&block6, &phi_bb6_11, &phi_bb6_12, &phi_bb6_13, &phi_bb6_14, &phi_bb6_15, &phi_bb6_17, &phi_bb6_18);
    tmp110 = False_0(state_);
    tmp111 = ca_.CallStub<Object>(Builtins::CallableFor(ca_.isolate(), Builtin::kRejectPromise), parameter0, tmp8, phi_bb6_17, tmp110);
    arguments.PopAndReturn(tmp8);
  }
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=74&c=7
TNode<Smi> SmiTag_ArrayFromAsyncLabels_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Smi> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = CodeStubAssembler(state_).SmiFromUint32(TNode<Uint32T>{p_value});
    tmp1 = (TNode<Smi>{tmp0});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Smi>{tmp1};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=70&c=3
void InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_SmiTagged_ArrayFromAsyncLabels_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Smi> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=75&c=3
void InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Object> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=80&c=3
void InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<Smi> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=90&c=3
void InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSPromise_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSPromise> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=94&c=3
void InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSReceiver> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=99&c=3
void InitContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Undefined_OR_JSFunction_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index, TNode<JSFunction> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  TNode<IntPtrT> tmp2;
  TNode<UintPtrT> tmp3;
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block18, std::vector<compiler::Node*>{}, &block19, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  if (block18.is_used()) {
    ca_.Bind(&block18);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    CodeStubAssembler(state_).StoreReference<Object>(CodeStubAssembler::Reference{tmp8, tmp9}, p_value);
    ca_.Goto(&block22);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block22);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=140&c=21
TorqueStructReference_JSReceiver_0 ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSReceiver_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_JSReceiver_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_JSReceiver_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=144&c=23
TorqueStructReference_JSAny_0 ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_JSAny_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_JSAny_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=171&c=58
TorqueStructReference_Smi_0 ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_Smi_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_Smi_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=170&c=13
TNode<Uint32T> SmiUntag_ArrayFromAsyncLabels_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Smi> tmp0;
  TNode<Int32T> tmp1;
  TNode<Uint32T> tmp2;
  TNode<Uint32T> tmp3;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = Convert_Smi_SmiTagged_ArrayFromAsyncLabels_0(state_, TNode<Smi>{p_value});
    tmp1 = CodeStubAssembler(state_).SmiToInt32(TNode<Smi>{tmp0});
    tmp2 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp1});
    tmp3 = (TNode<Uint32T>{tmp2});
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TNode<Uint32T>{tmp3};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=252&c=22
TNode<JSReceiver> UnsafeCast_Callable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSReceiver>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=317&c=16
TNode<BoolT> Is_Callable_JSAny_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSReceiver> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp0 = Cast_Callable_1(state_, TNode<Context>{p_context}, TNode<Object>{p_o}, &label1);
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

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=351&c=26
TorqueStructReference_JSPromise_0 ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_JSPromise_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_JSPromise_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=406&c=20
TorqueStructReference_Undefined_OR_JSFunction_0 ContextSlot_ArrayFromAsyncResolveContext_ArrayFromAsyncResolveContext_Undefined_OR_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<IntPtrT> p_index) {
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
  TNode<UintPtrT> tmp4;
  TNode<BoolT> tmp5;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1, tmp2) = FieldSliceContextElements_0(state_, TNode<Context>{p_context}).Flatten();
    tmp3 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{p_index});
    tmp4 = Convert_uintptr_intptr_0(state_, TNode<IntPtrT>{tmp2});
    tmp5 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp3}, TNode<UintPtrT>{tmp4});
    ca_.Branch(tmp5, &block6, std::vector<compiler::Node*>{}, &block7, std::vector<compiler::Node*>{});
  }

  TNode<IntPtrT> tmp6;
  TNode<IntPtrT> tmp7;
  TNode<Object> tmp8;
  TNode<IntPtrT> tmp9;
  TNode<Object> tmp10;
  TNode<IntPtrT> tmp11;
  if (block6.is_used()) {
    ca_.Bind(&block6);
    tmp6 = TimesSizeOf_Object_0(state_, TNode<IntPtrT>{p_index});
    tmp7 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp1}, TNode<IntPtrT>{tmp6});
    std::tie(tmp8, tmp9) = NewReference_Object_0(state_, TNode<Object>{tmp0}, TNode<IntPtrT>{tmp7}).Flatten();
    std::tie(tmp10, tmp11) = ReferenceCast_Undefined_OR_JSFunction_Object_0(state_, TorqueStructReference_Object_0{TNode<Object>{tmp8}, TNode<IntPtrT>{tmp9}, TorqueStructUnsafe_0{}}).Flatten();
    ca_.Goto(&block10);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).Unreachable();
  }

    ca_.Bind(&block10);
  return TorqueStructReference_Undefined_OR_JSFunction_0{TNode<Object>{tmp10}, TNode<IntPtrT>{tmp11}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=420&c=7
TNode<JSPromise> UnsafeCast_JSPromise_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<JSPromise> tmp0;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    tmp0 = TORQUE_CAST(TNode<Object>{p_o});
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
  return TNode<JSPromise>{tmp0};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=606&c=7
TNode<JSReceiver> Cast_Constructor_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
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

  TNode<JSReceiver> tmp2;
  if (block3.is_used()) {
    ca_.Bind(&block3);
    compiler::CodeAssemblerLabel label3(&ca_);
    tmp2 = Cast_Constructor_0(state_, TNode<HeapObject>{tmp0}, &label3);
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
  return TNode<JSReceiver>{tmp2};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=631&c=23
TorqueStructReference_JSFunction_0 NativeContextSlot_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = ContextSlot_NativeContext_NativeContext_JSFunction_0(state_, TNode<NativeContext>{p_context}, TNode<IntPtrT>{p_index}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_JSFunction_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array-from-async.tq?l=633&c=16
TorqueStructReference_Map_0 NativeContextSlot_Map_0(compiler::CodeAssemblerState* state_, TNode<NativeContext> p_context, TNode<IntPtrT> p_index) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssembler::SourcePositionScope pos_scope(&ca_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  TNode<Object> tmp0;
  TNode<IntPtrT> tmp1;
  if (block0.is_used()) {
    ca_.Bind(&block0);
    std::tie(tmp0, tmp1) = ContextSlot_NativeContext_NativeContext_Map_0(state_, TNode<NativeContext>{p_context}, TNode<IntPtrT>{p_index}).Flatten();
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return TorqueStructReference_Map_0{TNode<Object>{tmp0}, TNode<IntPtrT>{tmp1}, TorqueStructUnsafe_0{}};
}

} // namespace internal
} // namespace v8
