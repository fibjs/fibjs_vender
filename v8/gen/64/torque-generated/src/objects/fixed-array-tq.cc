#include "src/objects/fixed-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
bool IsFixedArrayBase_NonInline(Tagged<HeapObject> o) {
  return IsFixedArrayBase(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFixedArrayBase<FixedArrayBase, HeapObject>::FixedArrayBaseVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FixedArrayBaseVerify(FixedArrayBase::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
bool IsFixedArray_NonInline(Tagged<HeapObject> o) {
  return IsFixedArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFixedArray<FixedArray, FixedArrayBase>::FixedArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FixedArrayVerify(FixedArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=1
bool IsWeakFixedArray_NonInline(Tagged<HeapObject> o) {
  return IsWeakFixedArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWeakFixedArray<WeakFixedArray, HeapObject>::WeakFixedArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WeakFixedArrayVerify(WeakFixedArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=18&c=1
bool IsFixedDoubleArray_NonInline(Tagged<HeapObject> o) {
  return IsFixedDoubleArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFixedDoubleArray<FixedDoubleArray, FixedArrayBase>::FixedDoubleArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FixedDoubleArrayVerify(FixedDoubleArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=1
bool IsByteArray_NonInline(Tagged<HeapObject> o) {
  return IsByteArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedByteArray<ByteArray, FixedArrayBase>::ByteArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ByteArrayVerify(ByteArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=32&c=1
bool IsExternalPointerArray_NonInline(Tagged<HeapObject> o) {
  return IsExternalPointerArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalPointerArray<ExternalPointerArray, FixedArrayBase>::ExternalPointerArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalPointerArrayVerify(ExternalPointerArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=38&c=1
bool IsArrayList_NonInline(Tagged<HeapObject> o) {
  return IsArrayList(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedArrayList<ArrayList, FixedArray>::ArrayListVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ArrayListVerify(ArrayList::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=1
bool IsTemplateList_NonInline(Tagged<HeapObject> o) {
  return IsTemplateList(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTemplateList<TemplateList, FixedArray>::TemplateListVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TemplateListVerify(TemplateList::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=46&c=1
bool IsWeakArrayList_NonInline(Tagged<HeapObject> o) {
  return IsWeakArrayList(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWeakArrayList<WeakArrayList, HeapObject>::WeakArrayListVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WeakArrayListVerify(WeakArrayList::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
