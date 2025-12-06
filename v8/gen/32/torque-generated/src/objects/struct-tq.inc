class Struct;
// Alias for IsStruct() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsStruct_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedStruct : public P {
  static_assert(
      std::is_same_v<Struct, D>,
      "Use this class as direct base for Struct.");
  static_assert(
      std::is_same_v<HeapObject, P>,
      "Pass in HeapObject as second template parameter for TorqueGeneratedStruct.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedStruct<D,P>;

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=5&c=1
  V8_EXPORT_PRIVATE void StructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedStruct() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedStruct, DAlias>,
        "class TorqueGeneratedStruct should be used as direct base for Struct.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedStruct(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedStruct(Address ptr);
};

