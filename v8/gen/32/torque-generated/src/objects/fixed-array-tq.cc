#include "src/objects/fixed-array-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

#include "src/objects/fixed-array.h"

namespace v8 {
namespace internal {

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=5&c=1
class TorqueGeneratedFixedArrayBaseAsserts {
  static constexpr int kStartOfStrongFieldsOffset = HeapObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
  static constexpr int kLengthOffset = HeapObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;

  static_assert(kLengthOffset == FixedArrayBase::kLengthOffset,
                "Values of FixedArrayBase::kLengthOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=11&c=1
class TorqueGeneratedFixedArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = FixedArrayBase::kHeaderSize;
  static constexpr int kHeaderSize = FixedArrayBase::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
  static constexpr int kObjectsOffset = FixedArrayBase::kHeaderSize;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kObjectsOffset == FixedArray::kObjectsOffset,
                "Values of FixedArray::kObjectsOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=36&c=1
class TorqueGeneratedWeakFixedArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = HeapObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=38&c=9
  static constexpr int kLengthOffset = HeapObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kLengthOffset == WeakFixedArray::kLengthOffset,
                "Values of WeakFixedArray::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == WeakFixedArray::kObjectsOffset,
                "Values of WeakFixedArray::kObjectsOffset defined in Torque and C++ do not match");
};

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=73&c=1
bool IsWeakArrayList_NonInline(Tagged<HeapObject> o) {
  return IsWeakArrayList(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWeakArrayList<WeakArrayList, HeapObject>::WeakArrayListVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WeakArrayListVerify(Cast<WeakArrayList>(*this), isolate);
}


#endif  // VERIFY_HEAP
// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=31&c=1
class TorqueGeneratedFixedDoubleArrayAsserts {
  static constexpr int kHeaderSize = FixedArrayBase::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=33&c=3
  static constexpr int kFloatsOffset = FixedArrayBase::kHeaderSize;
  static constexpr int kFloatsOffsetEnd = kFloatsOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kFloatsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFloatsOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kFloatsOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kFloatsOffsetEnd + 1;

  static_assert(kFloatsOffset == FixedDoubleArray::kFloatsOffset,
                "Values of FixedDoubleArray::kFloatsOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=19&c=1
class TorqueGeneratedTrustedFixedArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = TrustedObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=21&c=9
  static constexpr int kLengthOffset = TrustedObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kLengthOffset == TrustedFixedArray::kLengthOffset,
                "Values of TrustedFixedArray::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == TrustedFixedArray::kObjectsOffset,
                "Values of TrustedFixedArray::kObjectsOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=25&c=1
class TorqueGeneratedProtectedFixedArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = TrustedObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=27&c=9
  static constexpr int kLengthOffset = TrustedObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kLengthOffset == ProtectedFixedArray::kLengthOffset,
                "Values of ProtectedFixedArray::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == ProtectedFixedArray::kObjectsOffset,
                "Values of ProtectedFixedArray::kObjectsOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=42&c=1
class TorqueGeneratedTrustedWeakFixedArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = TrustedObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=9
  static constexpr int kLengthOffset = TrustedObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kLengthOffset == TrustedWeakFixedArray::kLengthOffset,
                "Values of TrustedWeakFixedArray::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == TrustedWeakFixedArray::kObjectsOffset,
                "Values of TrustedWeakFixedArray::kObjectsOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=48&c=1
class TorqueGeneratedByteArrayAsserts {
  static constexpr int kHeaderSize = FixedArrayBase::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=50&c=3
  static constexpr int kBytesOffset = FixedArrayBase::kHeaderSize;
  static constexpr int kBytesOffsetEnd = kBytesOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kBytesOffsetEnd + 1;

  static_assert(kBytesOffset == ByteArray::kBytesOffset,
                "Values of ByteArray::kBytesOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=53&c=1
class TorqueGeneratedTrustedByteArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = TrustedObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=55&c=9
  static constexpr int kLengthOffset = TrustedObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd + 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=56&c=3
  static constexpr int kBytesOffset = kLengthOffsetEnd + 1;
  static constexpr int kBytesOffsetEnd = kBytesOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kBytesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBytesOffsetEnd + 1;

  static_assert(kLengthOffset == TrustedByteArray::kLengthOffset,
                "Values of TrustedByteArray::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kBytesOffset == TrustedByteArray::kBytesOffset,
                "Values of TrustedByteArray::kBytesOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=59&c=1
class TorqueGeneratedExternalPointerArrayAsserts {
  static constexpr int kHeaderSize = FixedArrayBase::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=61&c=3
  static constexpr int kPointersOffset = FixedArrayBase::kHeaderSize;
  static constexpr int kPointersOffsetEnd = kPointersOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kPointersOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kPointersOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kPointersOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kPointersOffsetEnd + 1;

  static_assert(kPointersOffset == ExternalPointerArray::kPointersOffset,
                "Values of ExternalPointerArray::kPointersOffset defined in Torque and C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=66&c=1
class TorqueGeneratedArrayListAsserts {
  static constexpr int kStartOfStrongFieldsOffset = HeapObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=68&c=9
  static constexpr int kCapacityOffset = HeapObject::kHeaderSize;
  static constexpr int kCapacityOffsetEnd = kCapacityOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=69&c=3
  static constexpr int kLengthOffset = kCapacityOffsetEnd + 1;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kLengthOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=70&c=3
  static constexpr int kObjectsOffset = kLengthOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kCapacityOffset == ArrayList::kCapacityOffset,
                "Values of ArrayList::kCapacityOffset defined in Torque and C++ do not match");
  static_assert(kLengthOffset == ArrayList::kLengthOffset,
                "Values of ArrayList::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == ArrayList::kObjectsOffset,
                "Values of ArrayList::kObjectsOffset defined in Torque and C++ do not match");
};

} // namespace internal
} // namespace v8
