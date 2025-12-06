#include "src/objects/struct-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/objects-inl.h"

#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
bool IsStruct_NonInline(Tagged<HeapObject> o) {
  return IsStruct(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStruct<Struct, HeapObject>::StructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StructVerify(Cast<Struct>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
