class Cell;
// Alias for IsCell() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsCell_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedCell : public P {
  static_assert(
      std::is_same_v<Cell, D>,
      "Use this class as direct base for Cell.");
  static_assert(
      std::is_same_v<HeapObject, P>,
      "Pass in HeapObject as second template parameter for TorqueGeneratedCell.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedCell<D,P>;

  // Torque type: MaybeObject
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
  inline Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> maybe_value() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
  inline Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> maybe_value(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
  inline void set_maybe_value(Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(Cell)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_EXPORT_PRIVATE void CellVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
  static constexpr int kMaybeValueOffset = P::kHeaderSize;
  static constexpr int kMaybeValueOffsetEnd = kMaybeValueOffset + kTaggedSize - 1;
  static constexpr int kEndOfWeakFieldsOffset = kMaybeValueOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kMaybeValueOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kMaybeValueOffsetEnd + 1;
  static constexpr int kHeaderSize = kMaybeValueOffsetEnd + 1;
  static constexpr int kSize = kMaybeValueOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedCell() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedCell, DAlias>,
        "class TorqueGeneratedCell should be used as direct base for Cell.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedCell(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedCell(Address ptr);
};

