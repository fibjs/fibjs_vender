// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedBytecodeArrayAsserts {
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=9&c=3
  static constexpr int kConstantPoolOffset = P::kHeaderSize;
  static constexpr int kConstantPoolOffsetEnd = kConstantPoolOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=10&c=3
  static constexpr int kHandlerTableOffset = kConstantPoolOffsetEnd + 1;
  static constexpr int kHandlerTableOffsetEnd = kHandlerTableOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
  static constexpr int kSourcePositionTableOffset = kHandlerTableOffsetEnd + 1;
  static constexpr int kSourcePositionTableOffsetEnd = kSourcePositionTableOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSourcePositionTableOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=12&c=3
  static constexpr int kFrameSizeOffset = kSourcePositionTableOffsetEnd + 1;
  static constexpr int kFrameSizeOffsetEnd = kFrameSizeOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=13&c=3
  static constexpr int kParameterSizeOffset = kFrameSizeOffsetEnd + 1;
  static constexpr int kParameterSizeOffsetEnd = kParameterSizeOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=14&c=3
  static constexpr int kIncomingNewTargetOrGeneratorRegisterOffset = kParameterSizeOffsetEnd + 1;
  static constexpr int kIncomingNewTargetOrGeneratorRegisterOffsetEnd = kIncomingNewTargetOrGeneratorRegisterOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kIncomingNewTargetOrGeneratorRegisterOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIncomingNewTargetOrGeneratorRegisterOffsetEnd + 1;
  static constexpr int kHeaderSize = kIncomingNewTargetOrGeneratorRegisterOffsetEnd + 1;
  static constexpr int kSize = kIncomingNewTargetOrGeneratorRegisterOffsetEnd + 1;

  static_assert(kConstantPoolOffset == D::kConstantPoolOffset,
                "Values of BytecodeArray::kConstantPoolOffset defined in Torque and C++ do not match");
  static_assert(kHandlerTableOffset == D::kHandlerTableOffset,
                "Values of BytecodeArray::kHandlerTableOffset defined in Torque and C++ do not match");
  static_assert(kSourcePositionTableOffset == D::kSourcePositionTableOffset,
                "Values of BytecodeArray::kSourcePositionTableOffset defined in Torque and C++ do not match");
  static_assert(kFrameSizeOffset == D::kFrameSizeOffset,
                "Values of BytecodeArray::kFrameSizeOffset defined in Torque and C++ do not match");
  static_assert(kParameterSizeOffset == D::kParameterSizeOffset,
                "Values of BytecodeArray::kParameterSizeOffset defined in Torque and C++ do not match");
  static_assert(kIncomingNewTargetOrGeneratorRegisterOffset == D::kIncomingNewTargetOrGeneratorRegisterOffset,
                "Values of BytecodeArray::kIncomingNewTargetOrGeneratorRegisterOffset defined in Torque and C++ do not match");
  static_assert(kSize == D::kSize);
};

