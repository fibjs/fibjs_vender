#include "torque-generated/class-definitions-tq.h"

#include "torque-generated/class-verifiers-tq.h"

#include "src/objects/struct-inl.h"

namespace v8 {
namespace internal {
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedOddball<Oddball, HeapObject>::OddballVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::OddballVerify(Oddball::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTuple2<Tuple2, Struct>::Tuple2Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::Tuple2Verify(Tuple2::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTuple3<Tuple3, Tuple2>::Tuple3Verify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::Tuple3Verify(Tuple3::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
}  // namespace internal
}  // namespace v8
