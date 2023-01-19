#include "src/objects/js-duration-format-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
bool IsJSDurationFormat_NonInline(HeapObject o) {
  return o.IsJSDurationFormat();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDurationFormat<JSDurationFormat, JSObject>::JSDurationFormatVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDurationFormatVerify(JSDurationFormat::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
