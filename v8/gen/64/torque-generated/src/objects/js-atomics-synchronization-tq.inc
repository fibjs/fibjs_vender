class JSSynchronizationPrimitive;
class JSAtomicsMutex;
class JSAtomicsCondition;
// Alias for HeapObject::IsJSSynchronizationPrimitive() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSSynchronizationPrimitive_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSSynchronizationPrimitive : public P {
  static_assert(
      std::is_same<JSSynchronizationPrimitive, D>::value,
      "Use this class as direct base for JSSynchronizationPrimitive.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSSynchronizationPrimitive.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSSynchronizationPrimitive<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=28
  inline uintptr_t state() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=28
  inline void set_state(uintptr_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSSynchronizationPrimitiveVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=28
  static constexpr int kStateOffset = P::kHeaderSize;
  static constexpr int kStateOffsetEnd = kStateOffset + kIntptrSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kStateOffsetEnd + 1;
  static constexpr int kHeaderSize = kStateOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSSynchronizationPrimitive() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSSynchronizationPrimitive, DAlias>::value,
        "class TorqueGeneratedJSSynchronizationPrimitive should be used as direct base for JSSynchronizationPrimitive.");
  }

 protected:
  inline explicit TorqueGeneratedJSSynchronizationPrimitive(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSSynchronizationPrimitive(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSAtomicsMutex() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=11&c=1
V8_EXPORT_PRIVATE bool IsJSAtomicsMutex_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=11&c=1
template <class D, class P>
class TorqueGeneratedJSAtomicsMutex : public P {
  static_assert(
      std::is_same<JSAtomicsMutex, D>::value,
      "Use this class as direct base for JSAtomicsMutex.");
  static_assert(
      std::is_same<JSSynchronizationPrimitive, P>::value,
      "Pass in JSSynchronizationPrimitive as second template parameter for TorqueGeneratedJSAtomicsMutex.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSAtomicsMutex<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
  inline int32_t owner_thread_id() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
  inline void set_owner_thread_id(int32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=14&c=28
  inline uint32_t optional_padding() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=14&c=28
  inline void set_optional_padding(uint32_t value);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=11&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=11&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSAtomicsMutex)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=11&c=1
  V8_EXPORT_PRIVATE void JSAtomicsMutexVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
  static constexpr int kOwnerThreadIdOffset = P::kHeaderSize;
  static constexpr int kOwnerThreadIdOffsetEnd = kOwnerThreadIdOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=14&c=28
  static constexpr int kOptionalPaddingOffset = kOwnerThreadIdOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSAtomicsMutex() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSAtomicsMutex, DAlias>::value,
        "class TorqueGeneratedJSAtomicsMutex should be used as direct base for JSAtomicsMutex.");
  }

 protected:
  inline explicit TorqueGeneratedJSAtomicsMutex(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSAtomicsMutex(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsJSAtomicsCondition() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=18&c=1
V8_EXPORT_PRIVATE bool IsJSAtomicsCondition_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=18&c=1
template <class D, class P>
class TorqueGeneratedJSAtomicsCondition : public P {
  static_assert(
      std::is_same<JSAtomicsCondition, D>::value,
      "Use this class as direct base for JSAtomicsCondition.");
  static_assert(
      std::is_same<JSSynchronizationPrimitive, P>::value,
      "Pass in JSSynchronizationPrimitive as second template parameter for TorqueGeneratedJSAtomicsCondition.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSAtomicsCondition<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=18&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=18&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSAtomicsCondition)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=18&c=1
  V8_EXPORT_PRIVATE void JSAtomicsConditionVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSAtomicsCondition() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSAtomicsCondition, DAlias>::value,
        "class TorqueGeneratedJSAtomicsCondition should be used as direct base for JSAtomicsCondition.");
  }

 protected:
  inline explicit TorqueGeneratedJSAtomicsCondition(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedJSAtomicsCondition(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

