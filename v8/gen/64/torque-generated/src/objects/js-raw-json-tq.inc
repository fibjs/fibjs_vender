class JSRawJson;
// Alias for HeapObject::IsJSRawJson() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-raw-json.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsJSRawJson_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-raw-json.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedJSRawJson : public P {
  static_assert(
      std::is_same<JSRawJson, D>::value,
      "Use this class as direct base for JSRawJson.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSRawJson.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSRawJson<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-raw-json.tq?l=7&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-raw-json.tq?l=7&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSRawJson)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-raw-json.tq?l=7&c=1
  V8_EXPORT_PRIVATE void JSRawJsonVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSRawJson() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSRawJson, DAlias>::value,
        "class TorqueGeneratedJSRawJson should be used as direct base for JSRawJson.");
  }

 protected:
  inline explicit TorqueGeneratedJSRawJson(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSRawJson(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

