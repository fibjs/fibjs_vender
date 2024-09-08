#include "src/objects/feedback-vector-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

#include "src/objects/feedback-vector.h"

namespace v8 {
namespace internal {

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=35&c=1
class TorqueGeneratedClosureFeedbackCellArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = HeapObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=37&c=9
  static constexpr int kCapacityOffset = HeapObject::kHeaderSize;
  static constexpr int kCapacityOffsetEnd = kCapacityOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kCapacityOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=38&c=3
  static constexpr int kObjectsOffset = kCapacityOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kCapacityOffset == ClosureFeedbackCellArray::kCapacityOffset,
                "Values of ClosureFeedbackCellArray::kCapacityOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == ClosureFeedbackCellArray::kObjectsOffset,
                "Values of ClosureFeedbackCellArray::kObjectsOffset defined in Torque and C++ do not match");
};

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=41&c=1
bool IsFeedbackVector_NonInline(Tagged<HeapObject> o) {
  return IsFeedbackVector(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFeedbackVector<FeedbackVector, HeapObject>::FeedbackVectorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FeedbackVectorVerify(Cast<FeedbackVector>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
