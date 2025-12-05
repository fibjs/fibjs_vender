#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_TEMPORAL_OBJECTS_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_TEMPORAL_OBJECTS_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=7&c=1
TNode<JSTemporalDuration> Cast_JSTemporalDuration_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=11&c=1
TNode<JSTemporalInstant> Cast_JSTemporalInstant_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=15&c=1
TNode<JSTemporalPlainDateTime> Cast_JSTemporalPlainDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=19&c=1
TNode<JSTemporalPlainDate> Cast_JSTemporalPlainDate_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=23&c=1
TNode<JSTemporalPlainMonthDay> Cast_JSTemporalPlainMonthDay_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=27&c=1
TNode<JSTemporalPlainTime> Cast_JSTemporalPlainTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=31&c=1
TNode<JSTemporalPlainYearMonth> Cast_JSTemporalPlainYearMonth_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=35&c=1
TNode<JSTemporalZonedDateTime> Cast_JSTemporalZonedDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
TNode<Foreign> LoadJSTemporalDurationDuration_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
void StoreJSTemporalDurationDuration_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalDuration> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
TNode<Foreign> LoadJSTemporalInstantInstant_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalInstant> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
void StoreJSTemporalInstantInstant_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalInstant> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
TNode<Foreign> LoadJSTemporalPlainDateTimeDateTime_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
void StoreJSTemporalPlainDateTimeDateTime_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDateTime> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
TNode<Foreign> LoadJSTemporalPlainDateDate_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDate> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
void StoreJSTemporalPlainDateDate_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainDate> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
TNode<Foreign> LoadJSTemporalPlainMonthDayMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainMonthDay> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
void StoreJSTemporalPlainMonthDayMonthDay_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainMonthDay> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
TNode<Foreign> LoadJSTemporalPlainTimeTime_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
void StoreJSTemporalPlainTimeTime_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainTime> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
TNode<Foreign> LoadJSTemporalPlainYearMonthYearMonth_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainYearMonth> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
void StoreJSTemporalPlainYearMonthYearMonth_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalPlainYearMonth> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
TNode<Foreign> LoadJSTemporalZonedDateTimeZonedDateTime_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
void StoreJSTemporalZonedDateTimeZonedDateTime_0(compiler::CodeAssemblerState* state_, TNode<JSTemporalZonedDateTime> p_o, TNode<Foreign> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=7&c=1
TNode<JSTemporalDuration> DownCastForTorqueClass_JSTemporalDuration_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=11&c=1
TNode<JSTemporalInstant> DownCastForTorqueClass_JSTemporalInstant_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=15&c=1
TNode<JSTemporalPlainDateTime> DownCastForTorqueClass_JSTemporalPlainDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=19&c=1
TNode<JSTemporalPlainDate> DownCastForTorqueClass_JSTemporalPlainDate_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=23&c=1
TNode<JSTemporalPlainMonthDay> DownCastForTorqueClass_JSTemporalPlainMonthDay_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=27&c=1
TNode<JSTemporalPlainTime> DownCastForTorqueClass_JSTemporalPlainTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=31&c=1
TNode<JSTemporalPlainYearMonth> DownCastForTorqueClass_JSTemporalPlainYearMonth_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=35&c=1
TNode<JSTemporalZonedDateTime> DownCastForTorqueClass_JSTemporalZonedDateTime_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_JS_TEMPORAL_OBJECTS_TQ_CSA_H_
