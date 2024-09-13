#include "src/objects/regexp-match-info.h"

namespace v8 {
namespace internal {

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
class TorqueGeneratedRegExpMatchInfoAsserts {
  static constexpr int kStartOfStrongFieldsOffset = HeapObject::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=14&c=9
  static constexpr int kLengthOffset = HeapObject::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=15&c=3
  static constexpr int kNumberOfCaptureRegistersOffset = kLengthOffsetEnd + 1;
  static constexpr int kNumberOfCaptureRegistersOffsetEnd = kNumberOfCaptureRegistersOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=16&c=3
  static constexpr int kLastSubjectOffset = kNumberOfCaptureRegistersOffsetEnd + 1;
  static constexpr int kLastSubjectOffsetEnd = kLastSubjectOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=17&c=3
  static constexpr int kLastInputOffset = kLastSubjectOffsetEnd + 1;
  static constexpr int kLastInputOffsetEnd = kLastInputOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kLastInputOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
  static constexpr int kObjectsOffset = kLastInputOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kLengthOffset == RegExpMatchInfo::kLengthOffset,
                "Values of RegExpMatchInfo::kLengthOffset defined in Torque and C++ do not match");
  static_assert(kNumberOfCaptureRegistersOffset == RegExpMatchInfo::kNumberOfCaptureRegistersOffset,
                "Values of RegExpMatchInfo::kNumberOfCaptureRegistersOffset defined in Torque and C++ do not match");
  static_assert(kLastSubjectOffset == RegExpMatchInfo::kLastSubjectOffset,
                "Values of RegExpMatchInfo::kLastSubjectOffset defined in Torque and C++ do not match");
  static_assert(kLastInputOffset == RegExpMatchInfo::kLastInputOffset,
                "Values of RegExpMatchInfo::kLastInputOffset defined in Torque and C++ do not match");
  static_assert(kObjectsOffset == RegExpMatchInfo::kObjectsOffset,
                "Values of RegExpMatchInfo::kObjectsOffset defined in Torque and C++ do not match");
};

} // namespace internal
} // namespace v8
