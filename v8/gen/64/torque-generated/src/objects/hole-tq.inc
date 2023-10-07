// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedHoleAsserts {
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=7&c=3
  static constexpr int kRawNumericValueOffset = P::kHeaderSize;
  static constexpr int kRawNumericValueOffsetEnd = kRawNumericValueOffset + kDoubleSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kRawNumericValueOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRawNumericValueOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kRawNumericValueOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kRawNumericValueOffsetEnd + 1;
  static constexpr int kHeaderSize = kRawNumericValueOffsetEnd + 1;
  static constexpr int kSize = kRawNumericValueOffsetEnd + 1;

  static_assert(kRawNumericValueOffset == D::kRawNumericValueOffset,
                "Values of Hole::kRawNumericValueOffset defined in Torque and C++ do not match");
  static_assert(StaticStringsEqual("float64", D::kRawNumericValueTqFieldType),
                "Types of Hole::kRawNumericValueOffset specified in Torque and C++ do not match");
  static_assert(kSize == D::kSize);
};

