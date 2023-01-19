class JSDurationFormat;
// Alias for HeapObject::IsJSDurationFormat() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
V8_EXPORT_PRIVATE bool IsJSDurationFormat_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
template <class D, class P>
class TorqueGeneratedJSDurationFormat : public P {
  static_assert(
      std::is_same<JSDurationFormat, D>::value,
      "Use this class as direct base for JSDurationFormat.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSDurationFormat.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSDurationFormat<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=40&c=3
  inline int style_flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=40&c=3
  inline void set_style_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=41&c=3
  inline int display_flags() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=41&c=3
  inline void set_display_flags(int value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
  inline Foreign icu_locale() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
  inline Foreign icu_locale(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
  inline void set_icu_locale(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
  inline Foreign icu_number_formatter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
  inline Foreign icu_number_formatter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
  inline void set_icu_number_formatter(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSDurationFormat)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
  V8_EXPORT_PRIVATE void JSDurationFormatVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=40&c=3
  static constexpr int kStyleFlagsOffset = P::kHeaderSize;
  static constexpr int kStyleFlagsOffsetEnd = kStyleFlagsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=41&c=3
  static constexpr int kDisplayFlagsOffset = kStyleFlagsOffsetEnd + 1;
  static constexpr int kDisplayFlagsOffsetEnd = kDisplayFlagsOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
  static constexpr int kIcuLocaleOffset = kDisplayFlagsOffsetEnd + 1;
  static constexpr int kIcuLocaleOffsetEnd = kIcuLocaleOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
  static constexpr int kIcuNumberFormatterOffset = kIcuLocaleOffsetEnd + 1;
  static constexpr int kIcuNumberFormatterOffsetEnd = kIcuNumberFormatterOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIcuNumberFormatterOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIcuNumberFormatterOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIcuNumberFormatterOffsetEnd + 1;
  static constexpr int kHeaderSize = kIcuNumberFormatterOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSDurationFormat() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSDurationFormat, DAlias>::value,
        "class TorqueGeneratedJSDurationFormat should be used as direct base for JSDurationFormat.");
  }

 protected:
  inline explicit TorqueGeneratedJSDurationFormat(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSDurationFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

