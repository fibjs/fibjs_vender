class JSIteratorHelper;
class JSIteratorMapHelper;
class JSIteratorFilterHelper;
class JSIteratorTakeHelper;
class JSIteratorDropHelper;
class JSIteratorFlatMapHelper;
// Alias for HeapObject::IsJSIteratorHelper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
V8_EXPORT_PRIVATE bool IsJSIteratorHelper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
template <class D, class P>
class TorqueGeneratedJSIteratorHelper : public P {
  static_assert(
      std::is_same<JSIteratorHelper, D>::value,
      "Use this class as direct base for JSIteratorHelper.");
  static_assert(
      std::is_same<JSObject, P>::value,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSIteratorHelper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSIteratorHelper<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  inline JSReceiver underlying_object() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  inline JSReceiver underlying_object(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  inline void set_underlying_object(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: JSAny
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  inline Object underlying_next() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  inline Object underlying_next(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  inline void set_underlying_next(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
  V8_EXPORT_PRIVATE void JSIteratorHelperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
  static constexpr int kUnderlyingOffset = P::kHeaderSize;
  static constexpr int kUnderlyingOffsetEnd = kUnderlyingOffset + 16 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kUnderlyingOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kUnderlyingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kUnderlyingOffsetEnd + 1;
  static constexpr int kHeaderSize = kUnderlyingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSIteratorHelper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSIteratorHelper, DAlias>::value,
        "class TorqueGeneratedJSIteratorHelper should be used as direct base for JSIteratorHelper.");
  }

 protected:
  inline explicit TorqueGeneratedJSIteratorHelper(Address ptr);
};

// Alias for HeapObject::IsJSIteratorMapHelper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
V8_EXPORT_PRIVATE bool IsJSIteratorMapHelper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
template <class D, class P>
class TorqueGeneratedJSIteratorMapHelper : public P {
  static_assert(
      std::is_same<JSIteratorMapHelper, D>::value,
      "Use this class as direct base for JSIteratorMapHelper.");
  static_assert(
      std::is_same<JSIteratorHelper, P>::value,
      "Pass in JSIteratorHelper as second template parameter for TorqueGeneratedJSIteratorMapHelper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSIteratorMapHelper<D,P>;

  // Torque type: Callable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
  inline JSReceiver mapper() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
  inline JSReceiver mapper(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
  inline void set_mapper(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
  inline Object counter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
  inline Object counter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
  inline void set_counter(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSIteratorMapHelper)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
  V8_EXPORT_PRIVATE void JSIteratorMapHelperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
  static constexpr int kMapperOffset = P::kHeaderSize;
  static constexpr int kMapperOffsetEnd = kMapperOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
  static constexpr int kCounterOffset = kMapperOffsetEnd + 1;
  static constexpr int kCounterOffsetEnd = kCounterOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCounterOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCounterOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCounterOffsetEnd + 1;
  static constexpr int kHeaderSize = kCounterOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSIteratorMapHelper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSIteratorMapHelper, DAlias>::value,
        "class TorqueGeneratedJSIteratorMapHelper should be used as direct base for JSIteratorMapHelper.");
  }

 protected:
  inline explicit TorqueGeneratedJSIteratorMapHelper(Address ptr);
};

// Alias for HeapObject::IsJSIteratorFilterHelper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
V8_EXPORT_PRIVATE bool IsJSIteratorFilterHelper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
template <class D, class P>
class TorqueGeneratedJSIteratorFilterHelper : public P {
  static_assert(
      std::is_same<JSIteratorFilterHelper, D>::value,
      "Use this class as direct base for JSIteratorFilterHelper.");
  static_assert(
      std::is_same<JSIteratorHelper, P>::value,
      "Pass in JSIteratorHelper as second template parameter for TorqueGeneratedJSIteratorFilterHelper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSIteratorFilterHelper<D,P>;

  // Torque type: Callable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
  inline JSReceiver predicate() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
  inline JSReceiver predicate(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
  inline void set_predicate(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
  inline Object counter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
  inline Object counter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
  inline void set_counter(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSIteratorFilterHelper)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
  V8_EXPORT_PRIVATE void JSIteratorFilterHelperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
  static constexpr int kPredicateOffset = P::kHeaderSize;
  static constexpr int kPredicateOffsetEnd = kPredicateOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
  static constexpr int kCounterOffset = kPredicateOffsetEnd + 1;
  static constexpr int kCounterOffsetEnd = kCounterOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kCounterOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kCounterOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kCounterOffsetEnd + 1;
  static constexpr int kHeaderSize = kCounterOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSIteratorFilterHelper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSIteratorFilterHelper, DAlias>::value,
        "class TorqueGeneratedJSIteratorFilterHelper should be used as direct base for JSIteratorFilterHelper.");
  }

 protected:
  inline explicit TorqueGeneratedJSIteratorFilterHelper(Address ptr);
};

// Alias for HeapObject::IsJSIteratorTakeHelper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
V8_EXPORT_PRIVATE bool IsJSIteratorTakeHelper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
template <class D, class P>
class TorqueGeneratedJSIteratorTakeHelper : public P {
  static_assert(
      std::is_same<JSIteratorTakeHelper, D>::value,
      "Use this class as direct base for JSIteratorTakeHelper.");
  static_assert(
      std::is_same<JSIteratorHelper, P>::value,
      "Pass in JSIteratorHelper as second template parameter for TorqueGeneratedJSIteratorTakeHelper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSIteratorTakeHelper<D,P>;

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
  inline Object remaining() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
  inline Object remaining(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
  inline void set_remaining(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSIteratorTakeHelper)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
  V8_EXPORT_PRIVATE void JSIteratorTakeHelperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
  static constexpr int kRemainingOffset = P::kHeaderSize;
  static constexpr int kRemainingOffsetEnd = kRemainingOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRemainingOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kRemainingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRemainingOffsetEnd + 1;
  static constexpr int kHeaderSize = kRemainingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSIteratorTakeHelper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSIteratorTakeHelper, DAlias>::value,
        "class TorqueGeneratedJSIteratorTakeHelper should be used as direct base for JSIteratorTakeHelper.");
  }

 protected:
  inline explicit TorqueGeneratedJSIteratorTakeHelper(Address ptr);
};

// Alias for HeapObject::IsJSIteratorDropHelper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
V8_EXPORT_PRIVATE bool IsJSIteratorDropHelper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
template <class D, class P>
class TorqueGeneratedJSIteratorDropHelper : public P {
  static_assert(
      std::is_same<JSIteratorDropHelper, D>::value,
      "Use this class as direct base for JSIteratorDropHelper.");
  static_assert(
      std::is_same<JSIteratorHelper, P>::value,
      "Pass in JSIteratorHelper as second template parameter for TorqueGeneratedJSIteratorDropHelper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSIteratorDropHelper<D,P>;

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
  inline Object remaining() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
  inline Object remaining(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
  inline void set_remaining(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSIteratorDropHelper)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
  V8_EXPORT_PRIVATE void JSIteratorDropHelperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
  static constexpr int kRemainingOffset = P::kHeaderSize;
  static constexpr int kRemainingOffsetEnd = kRemainingOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kRemainingOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kRemainingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kRemainingOffsetEnd + 1;
  static constexpr int kHeaderSize = kRemainingOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSIteratorDropHelper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSIteratorDropHelper, DAlias>::value,
        "class TorqueGeneratedJSIteratorDropHelper should be used as direct base for JSIteratorDropHelper.");
  }

 protected:
  inline explicit TorqueGeneratedJSIteratorDropHelper(Address ptr);
};

// Alias for HeapObject::IsJSIteratorFlatMapHelper() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
V8_EXPORT_PRIVATE bool IsJSIteratorFlatMapHelper_NonInline(HeapObject o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
template <class D, class P>
class TorqueGeneratedJSIteratorFlatMapHelper : public P {
  static_assert(
      std::is_same<JSIteratorFlatMapHelper, D>::value,
      "Use this class as direct base for JSIteratorFlatMapHelper.");
  static_assert(
      std::is_same<JSIteratorHelper, P>::value,
      "Pass in JSIteratorHelper as second template parameter for TorqueGeneratedJSIteratorFlatMapHelper.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSIteratorFlatMapHelper<D,P>;

  // Torque type: Callable
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
  inline JSReceiver mapper() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
  inline JSReceiver mapper(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
  inline void set_mapper(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
  inline Object counter() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
  inline Object counter(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
  inline void set_counter(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  inline JSReceiver innerIterator_object() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  inline JSReceiver innerIterator_object(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  inline void set_innerIterator_object(JSReceiver value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: JSAny
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  inline Object innerIterator_next() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  inline Object innerIterator_next(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  inline void set_innerIterator_next(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Boolean
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
  inline Oddball innerAlive() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
  inline Oddball innerAlive(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
  inline void set_innerAlive(Oddball value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
  V8_INLINE static D cast(Object object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
  V8_INLINE static D unchecked_cast(Object object) {
    return base::bit_cast<D>(object);
  }

  DECL_PRINTER(JSIteratorFlatMapHelper)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
  V8_EXPORT_PRIVATE void JSIteratorFlatMapHelperVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
  static constexpr int kMapperOffset = P::kHeaderSize;
  static constexpr int kMapperOffsetEnd = kMapperOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
  static constexpr int kCounterOffset = kMapperOffsetEnd + 1;
  static constexpr int kCounterOffsetEnd = kCounterOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
  static constexpr int kInnerIteratorOffset = kCounterOffsetEnd + 1;
  static constexpr int kInnerIteratorOffsetEnd = kInnerIteratorOffset + 16 - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
  static constexpr int kInnerAliveOffset = kInnerIteratorOffsetEnd + 1;
  static constexpr int kInnerAliveOffsetEnd = kInnerAliveOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInnerAliveOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInnerAliveOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInnerAliveOffsetEnd + 1;
  static constexpr int kHeaderSize = kInnerAliveOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSIteratorFlatMapHelper() : P() {
    static_assert(
        std::is_base_of<TorqueGeneratedJSIteratorFlatMapHelper, DAlias>::value,
        "class TorqueGeneratedJSIteratorFlatMapHelper should be used as direct base for JSIteratorFlatMapHelper.");
  }

 protected:
  inline explicit TorqueGeneratedJSIteratorFlatMapHelper(Address ptr);
};

