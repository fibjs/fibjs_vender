#include "src/objects/js-struct-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=8&c=1
bool IsAlwaysSharedSpaceJSObject_NonInline(HeapObject o) {
  return o.IsAlwaysSharedSpaceJSObject();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAlwaysSharedSpaceJSObject<AlwaysSharedSpaceJSObject, JSObject>::AlwaysSharedSpaceJSObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AlwaysSharedSpaceJSObjectVerify(AlwaysSharedSpaceJSObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=12&c=1
bool IsJSSharedStruct_NonInline(HeapObject o) {
  return o.IsJSSharedStruct();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSharedStruct<JSSharedStruct, AlwaysSharedSpaceJSObject>::JSSharedStructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSharedStructVerify(JSSharedStruct::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
