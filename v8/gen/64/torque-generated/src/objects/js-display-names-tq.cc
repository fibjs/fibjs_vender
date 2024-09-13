#include "src/objects/js-display-names-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=18&c=1
bool IsJSDisplayNames_NonInline(Tagged<HeapObject> o) {
  return IsJSDisplayNames(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDisplayNames<JSDisplayNames, JSObject>::JSDisplayNamesVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDisplayNamesVerify(Cast<JSDisplayNames>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
