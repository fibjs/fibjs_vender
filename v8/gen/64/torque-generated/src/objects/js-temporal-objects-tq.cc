#include "src/objects/js-temporal-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/objects-inl.h"

#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=7&c=1
bool IsJSTemporalDuration_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalDuration(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalDuration<JSTemporalDuration, JSObject>::JSTemporalDurationVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalDurationVerify(Cast<JSTemporalDuration>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=11&c=1
bool IsJSTemporalInstant_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalInstant(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalInstant<JSTemporalInstant, JSObject>::JSTemporalInstantVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalInstantVerify(Cast<JSTemporalInstant>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=15&c=1
bool IsJSTemporalPlainDateTime_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalPlainDateTime(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainDateTime<JSTemporalPlainDateTime, JSObject>::JSTemporalPlainDateTimeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainDateTimeVerify(Cast<JSTemporalPlainDateTime>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=19&c=1
bool IsJSTemporalPlainDate_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalPlainDate(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainDate<JSTemporalPlainDate, JSObject>::JSTemporalPlainDateVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainDateVerify(Cast<JSTemporalPlainDate>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=23&c=1
bool IsJSTemporalPlainMonthDay_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalPlainMonthDay(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainMonthDay<JSTemporalPlainMonthDay, JSObject>::JSTemporalPlainMonthDayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainMonthDayVerify(Cast<JSTemporalPlainMonthDay>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=27&c=1
bool IsJSTemporalPlainTime_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalPlainTime(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainTime<JSTemporalPlainTime, JSObject>::JSTemporalPlainTimeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainTimeVerify(Cast<JSTemporalPlainTime>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=31&c=1
bool IsJSTemporalPlainYearMonth_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalPlainYearMonth(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalPlainYearMonth<JSTemporalPlainYearMonth, JSObject>::JSTemporalPlainYearMonthVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalPlainYearMonthVerify(Cast<JSTemporalPlainYearMonth>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=35&c=1
bool IsJSTemporalZonedDateTime_NonInline(Tagged<HeapObject> o) {
  return IsJSTemporalZonedDateTime(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTemporalZonedDateTime<JSTemporalZonedDateTime, JSObject>::JSTemporalZonedDateTimeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTemporalZonedDateTimeVerify(Cast<JSTemporalZonedDateTime>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
