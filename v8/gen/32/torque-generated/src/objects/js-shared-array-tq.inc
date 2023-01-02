class JSSharedArray;
// Alias for HeapObject::IsJSSharedArray() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSSharedArray_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSSharedArray : public P {
  static_assert(
      std::is_same<JSSharedArray, D>::value,
      "Use this class as direct base for JSSharedArray.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSSharedArray.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSSharedArray<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSSharedArray)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSSharedArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSSharedArray() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSSharedArray, DAlias>::value,
        "class TorqueGeneratedJSSharedArray should be used as direct base for JSSharedArray.");
  }

 protected:
  inline explicit TorqueGeneratedJSSharedArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSSharedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

