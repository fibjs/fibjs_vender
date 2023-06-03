#include "src/objects/js-iterator-helpers-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
bool IsJSIteratorHelper_NonInline(HeapObject o) {
  return o.IsJSIteratorHelper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSIteratorHelper<JSIteratorHelper, JSObject>::JSIteratorHelperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSIteratorHelperVerify(JSIteratorHelper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
bool IsJSIteratorMapHelper_NonInline(HeapObject o) {
  return o.IsJSIteratorMapHelper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSIteratorMapHelper<JSIteratorMapHelper, JSIteratorHelper>::JSIteratorMapHelperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSIteratorMapHelperVerify(JSIteratorMapHelper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
bool IsJSIteratorFilterHelper_NonInline(HeapObject o) {
  return o.IsJSIteratorFilterHelper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSIteratorFilterHelper<JSIteratorFilterHelper, JSIteratorHelper>::JSIteratorFilterHelperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSIteratorFilterHelperVerify(JSIteratorFilterHelper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
bool IsJSIteratorTakeHelper_NonInline(HeapObject o) {
  return o.IsJSIteratorTakeHelper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSIteratorTakeHelper<JSIteratorTakeHelper, JSIteratorHelper>::JSIteratorTakeHelperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSIteratorTakeHelperVerify(JSIteratorTakeHelper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
bool IsJSIteratorDropHelper_NonInline(HeapObject o) {
  return o.IsJSIteratorDropHelper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSIteratorDropHelper<JSIteratorDropHelper, JSIteratorHelper>::JSIteratorDropHelperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSIteratorDropHelperVerify(JSIteratorDropHelper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
bool IsJSIteratorFlatMapHelper_NonInline(HeapObject o) {
  return o.IsJSIteratorFlatMapHelper();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSIteratorFlatMapHelper<JSIteratorFlatMapHelper, JSIteratorHelper>::JSIteratorFlatMapHelperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSIteratorFlatMapHelperVerify(JSIteratorFlatMapHelper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
