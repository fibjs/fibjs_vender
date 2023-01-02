class BytecodeArray;
// Alias for HeapObject::IsBytecodeArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsBytecodeArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedBytecodeArray : public P {
  static_assert(
      std::is_same<BytecodeArray, D>::value,
      "Use this class as direct base for BytecodeArray.");
  static_assert(
      std::is_same<FixedArrayBase, P>::value,
      "Pass in FixedArrayBase as second template parameter for TorqueGeneratedBytecodeArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedBytecodeArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=9&c=3
  inline FixedArray constant_pool() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=9&c=3
  inline FixedArray constant_pool(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=9&c=3
  inline void set_constant_pool(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=11&c=3
  inline ByteArray handler_table() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=11&c=3
  inline ByteArray handler_table(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=11&c=3
  inline void set_handler_table(ByteArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Undefined | Exception | class ByteArray)
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=21&c=3
  inline HeapObject source_position_table(AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=21&c=3
  inline HeapObject source_position_table(PtrComprCageBase cage_base, AcquireLoadTag) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=21&c=3
  inline void set_source_position_table(HeapObject value, ReleaseStoreTag, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=22&c=3
  inline int32_t frame_size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=22&c=3
  inline void set_frame_size(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=23&c=3
  inline int32_t parameter_size() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=23&c=3
  inline void set_parameter_size(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=24&c=3
  inline int32_t incoming_new_target_or_generator_register() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=24&c=3
  inline void set_incoming_new_target_or_generator_register(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=26&c=3
  inline uint16_t bytecode_age() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=26&c=3
  inline void set_bytecode_age(uint16_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(BytecodeArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
  V8_EXPORT_PRIVATE void BytecodeArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=9&c=3
  static constexpr int kConstantPoolOffset = P::kHeaderSize;
  static constexpr int kConstantPoolOffsetEnd = kConstantPoolOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=11&c=3
  static constexpr int kHandlerTableOffset = kConstantPoolOffsetEnd + 1;
  static constexpr int kHandlerTableOffsetEnd = kHandlerTableOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=21&c=3
  static constexpr int kSourcePositionTableOffset = kHandlerTableOffsetEnd + 1;
  static constexpr int kSourcePositionTableOffsetEnd = kSourcePositionTableOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSourcePositionTableOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=22&c=3
  static constexpr int kFrameSizeOffset = kSourcePositionTableOffsetEnd + 1;
  static constexpr int kFrameSizeOffsetEnd = kFrameSizeOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=23&c=3
  static constexpr int kParameterSizeOffset = kFrameSizeOffsetEnd + 1;
  static constexpr int kParameterSizeOffsetEnd = kParameterSizeOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=24&c=3
  static constexpr int kIncomingNewTargetOrGeneratorRegisterOffset = kParameterSizeOffsetEnd + 1;
  static constexpr int kIncomingNewTargetOrGeneratorRegisterOffsetEnd = kIncomingNewTargetOrGeneratorRegisterOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=26&c=3
  static constexpr int kBytecodeAgeOffset = kIncomingNewTargetOrGeneratorRegisterOffsetEnd + 1;
  static constexpr int kBytecodeAgeOffsetEnd = kBytecodeAgeOffset + kUInt16Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kBytecodeAgeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kBytecodeAgeOffsetEnd + 1;
  static constexpr int kHeaderSize = kBytecodeAgeOffsetEnd + 1;
  static constexpr int kSize = kBytecodeAgeOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 54);
    int32_t size = kHeaderSize;
    size = OBJECT_POINTER_ALIGN(size);
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/code.tq?l=7&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedBytecodeArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedBytecodeArray, DAlias>::value,
        "class TorqueGeneratedBytecodeArray should be used as direct base for BytecodeArray.");
  }

 protected:
  inline explicit TorqueGeneratedBytecodeArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedBytecodeArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

