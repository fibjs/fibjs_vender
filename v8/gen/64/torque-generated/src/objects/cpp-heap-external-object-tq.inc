class CppHeapExternalObject;
// Alias for IsCppHeapExternalObject() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsCppHeapExternalObject_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedCppHeapExternalObject : public P {
  static_assert(
      std::is_same_v<CppHeapExternalObject, D>,
      "Use this class as direct base for CppHeapExternalObject.");
  static_assert(
      std::is_same_v<HeapObject, P>,
      "Pass in HeapObject as second template parameter for TorqueGeneratedCppHeapExternalObject.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedCppHeapExternalObject<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
  inline CppHeapPointer_t cpp_heap_wrappable() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
  inline void set_cpp_heap_wrappable(CppHeapPointer_t value);

  DECL_PRINTER(CppHeapExternalObject)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
  V8_EXPORT_PRIVATE void CppHeapExternalObjectVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
  static constexpr int kCppHeapWrappableOffset = P::kHeaderSize;
  static constexpr int kCppHeapWrappableOffsetEnd = kCppHeapWrappableOffset + kCppHeapPointerSlotSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kCppHeapWrappableOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCppHeapWrappableOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kCppHeapWrappableOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kCppHeapWrappableOffsetEnd + 1;
  static constexpr int kHeaderSize = kCppHeapWrappableOffsetEnd + 1;
  static constexpr int kSize = kCppHeapWrappableOffsetEnd + 1;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=5&c=1
  V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
  }

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedCppHeapExternalObject() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedCppHeapExternalObject, DAlias>,
        "class TorqueGeneratedCppHeapExternalObject should be used as direct base for CppHeapExternalObject.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedCppHeapExternalObject(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedCppHeapExternalObject(Address ptr);
};

