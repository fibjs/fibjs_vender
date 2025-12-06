#include "src/objects/cpp-heap-external-object-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/objects-inl.h"

#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
bool IsCppHeapExternalObject_NonInline(Tagged<HeapObject> o) {
  return IsCppHeapExternalObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCppHeapExternalObject<CppHeapExternalObject, HeapObject>::CppHeapExternalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CppHeapExternalObjectVerify(Cast<CppHeapExternalObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
