#include "src/objects/bytecode-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=7&c=1
bool IsBytecodeArray_NonInline(HeapObject o) {
  return o.IsBytecodeArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedBytecodeArray<BytecodeArray, FixedArrayBase>::BytecodeArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::BytecodeArrayVerify(BytecodeArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
