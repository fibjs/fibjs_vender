// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedHoleAsserts {
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=7&c=3
  static constexpr int kRawNumericValueOffset = P::kHeaderSize;
  static constexpr int kRawNumericValueOffsetEnd = kRawNumericValueOffset + kDoubleSize - 1;
  static constexpr int kStartOfStrongFieldsOffset = kRawNumericValueOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=8&c=3
  static constexpr int kKindOffset = kRawNumericValueOffsetEnd + 1;
  static constexpr int kKindOffsetEnd = kKindOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kKindOffsetEnd + 1;
  static constexpr int kHeaderSize = kKindOffsetEnd + 1;
  static constexpr int kSize = kKindOffsetEnd + 1;

  static_assert(kRawNumericValueOffset == D::kRawNumericValueOffset,
                "Values of Hole::kRawNumericValueOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("float64", D::kRawNumericValueTqFieldType),
                "Types of Hole::kRawNumericValueOffset specified in Torque and C++ do not match");
  static_assert(kKindOffset == D::kKindOffset,
                "Values of Hole::kKindOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("Smi", D::kKindTqFieldType),
                "Types of Hole::kKindOffset specified in Torque and C++ do not match");
  static_assert(kSize == D::kSize);
};

