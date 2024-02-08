#include "src/objects/fixed-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=24&c=1
bool IsWeakFixedArray_NonInline(Tagged<HeapObject> o) {
  return IsWeakFixedArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWeakFixedArray<WeakFixedArray, HeapObject>::WeakFixedArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WeakFixedArrayVerify(WeakFixedArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=47&c=1
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
