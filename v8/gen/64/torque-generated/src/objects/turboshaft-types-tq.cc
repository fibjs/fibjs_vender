#include "src/objects/turboshaft-types-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=13&c=1
bool IsTurboshaftType_NonInline(HeapObject o) {
  return o.IsTurboshaftType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftType<TurboshaftType, HeapObject>::TurboshaftTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftTypeVerify(TurboshaftType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=17&c=1
bool IsTurboshaftWord32Type_NonInline(HeapObject o) {
  return o.IsTurboshaftWord32Type();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftWord32Type<TurboshaftWord32Type, TurboshaftType>::TurboshaftWord32TypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftWord32TypeVerify(TurboshaftWord32Type::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=23&c=1
bool IsTurboshaftWord32RangeType_NonInline(HeapObject o) {
  return o.IsTurboshaftWord32RangeType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftWord32RangeType<TurboshaftWord32RangeType, TurboshaftWord32Type>::TurboshaftWord32RangeTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftWord32RangeTypeVerify(TurboshaftWord32RangeType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=31&c=1
bool IsTurboshaftWord32SetType_NonInline(HeapObject o) {
  return o.IsTurboshaftWord32SetType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftWord32SetType<TurboshaftWord32SetType, TurboshaftWord32Type>::TurboshaftWord32SetTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftWord32SetTypeVerify(TurboshaftWord32SetType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=39&c=1
bool IsTurboshaftWord64Type_NonInline(HeapObject o) {
  return o.IsTurboshaftWord64Type();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftWord64Type<TurboshaftWord64Type, TurboshaftType>::TurboshaftWord64TypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftWord64TypeVerify(TurboshaftWord64Type::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=45&c=1
bool IsTurboshaftWord64RangeType_NonInline(HeapObject o) {
  return o.IsTurboshaftWord64RangeType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftWord64RangeType<TurboshaftWord64RangeType, TurboshaftWord64Type>::TurboshaftWord64RangeTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftWord64RangeTypeVerify(TurboshaftWord64RangeType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=55&c=1
bool IsTurboshaftWord64SetType_NonInline(HeapObject o) {
  return o.IsTurboshaftWord64SetType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftWord64SetType<TurboshaftWord64SetType, TurboshaftWord64Type>::TurboshaftWord64SetTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftWord64SetTypeVerify(TurboshaftWord64SetType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=64&c=1
bool IsTurboshaftFloat64Type_NonInline(HeapObject o) {
  return o.IsTurboshaftFloat64Type();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftFloat64Type<TurboshaftFloat64Type, TurboshaftType>::TurboshaftFloat64TypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftFloat64TypeVerify(TurboshaftFloat64Type::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=71&c=1
bool IsTurboshaftFloat64RangeType_NonInline(HeapObject o) {
  return o.IsTurboshaftFloat64RangeType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftFloat64RangeType<TurboshaftFloat64RangeType, TurboshaftFloat64Type>::TurboshaftFloat64RangeTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftFloat64RangeTypeVerify(TurboshaftFloat64RangeType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=80&c=1
bool IsTurboshaftFloat64SetType_NonInline(HeapObject o) {
  return o.IsTurboshaftFloat64SetType();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTurboshaftFloat64SetType<TurboshaftFloat64SetType, TurboshaftFloat64Type>::TurboshaftFloat64SetTypeVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TurboshaftFloat64SetTypeVerify(TurboshaftFloat64SetType::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
