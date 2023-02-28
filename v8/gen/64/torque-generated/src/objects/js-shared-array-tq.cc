#include "src/objects/js-shared-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
bool IsJSSharedArray_NonInline(HeapObject o) {
  return o.IsJSSharedArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSharedArray<JSSharedArray, JSObject>::JSSharedArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSharedArrayVerify(JSSharedArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
