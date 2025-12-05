class JSTemporalDuration;
class JSTemporalInstant;
class JSTemporalPlainDateTime;
class JSTemporalPlainDate;
class JSTemporalPlainMonthDay;
class JSTemporalPlainTime;
class JSTemporalPlainYearMonth;
class JSTemporalZonedDateTime;
// Alias for IsJSTemporalDuration() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=7&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalDuration_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=7&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalDuration : public P {
  static_assert(
      std::is_same_v<JSTemporalDuration, D>,
      "Use this class as direct base for JSTemporalDuration.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalDuration.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalDuration<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
  inline Tagged<Foreign> duration() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
  inline Tagged<Foreign> duration(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
  inline void set_duration(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalDuration)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=7&c=1
  V8_EXPORT_PRIVATE void JSTemporalDurationVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
  static constexpr int kDurationOffset = P::kHeaderSize;
  static constexpr int kDurationOffsetEnd = kDurationOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kDurationOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kDurationOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kDurationOffsetEnd + 1;
  static constexpr int kHeaderSize = kDurationOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalDuration() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalDuration, DAlias>,
        "class TorqueGeneratedJSTemporalDuration should be used as direct base for JSTemporalDuration.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalDuration(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalDuration(Address ptr);
};

// Alias for IsJSTemporalInstant() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=11&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalInstant_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=11&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalInstant : public P {
  static_assert(
      std::is_same_v<JSTemporalInstant, D>,
      "Use this class as direct base for JSTemporalInstant.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalInstant.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalInstant<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
  inline Tagged<Foreign> instant() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
  inline Tagged<Foreign> instant(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
  inline void set_instant(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalInstant)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=11&c=1
  V8_EXPORT_PRIVATE void JSTemporalInstantVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
  static constexpr int kInstantOffset = P::kHeaderSize;
  static constexpr int kInstantOffsetEnd = kInstantOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInstantOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInstantOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInstantOffsetEnd + 1;
  static constexpr int kHeaderSize = kInstantOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalInstant() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalInstant, DAlias>,
        "class TorqueGeneratedJSTemporalInstant should be used as direct base for JSTemporalInstant.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalInstant(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalInstant(Address ptr);
};

// Alias for IsJSTemporalPlainDateTime() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=15&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainDateTime_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=15&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainDateTime : public P {
  static_assert(
      std::is_same_v<JSTemporalPlainDateTime, D>,
      "Use this class as direct base for JSTemporalPlainDateTime.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainDateTime.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainDateTime<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
  inline Tagged<Foreign> date_time() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
  inline Tagged<Foreign> date_time(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
  inline void set_date_time(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalPlainDateTime)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=15&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainDateTimeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
  static constexpr int kDateTimeOffset = P::kHeaderSize;
  static constexpr int kDateTimeOffsetEnd = kDateTimeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kDateTimeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kDateTimeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kDateTimeOffsetEnd + 1;
  static constexpr int kHeaderSize = kDateTimeOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainDateTime() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalPlainDateTime, DAlias>,
        "class TorqueGeneratedJSTemporalPlainDateTime should be used as direct base for JSTemporalPlainDateTime.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalPlainDateTime(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalPlainDateTime(Address ptr);
};

// Alias for IsJSTemporalPlainDate() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=19&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainDate_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=19&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainDate : public P {
  static_assert(
      std::is_same_v<JSTemporalPlainDate, D>,
      "Use this class as direct base for JSTemporalPlainDate.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainDate.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainDate<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
  inline Tagged<Foreign> date() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
  inline Tagged<Foreign> date(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
  inline void set_date(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalPlainDate)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=19&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainDateVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
  static constexpr int kDateOffset = P::kHeaderSize;
  static constexpr int kDateOffsetEnd = kDateOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kDateOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kDateOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kDateOffsetEnd + 1;
  static constexpr int kHeaderSize = kDateOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainDate() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalPlainDate, DAlias>,
        "class TorqueGeneratedJSTemporalPlainDate should be used as direct base for JSTemporalPlainDate.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalPlainDate(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalPlainDate(Address ptr);
};

// Alias for IsJSTemporalPlainMonthDay() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=23&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainMonthDay_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=23&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainMonthDay : public P {
  static_assert(
      std::is_same_v<JSTemporalPlainMonthDay, D>,
      "Use this class as direct base for JSTemporalPlainMonthDay.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainMonthDay.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainMonthDay<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
  inline Tagged<Foreign> month_day() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
  inline Tagged<Foreign> month_day(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
  inline void set_month_day(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalPlainMonthDay)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=23&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainMonthDayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
  static constexpr int kMonthDayOffset = P::kHeaderSize;
  static constexpr int kMonthDayOffsetEnd = kMonthDayOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kMonthDayOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kMonthDayOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kMonthDayOffsetEnd + 1;
  static constexpr int kHeaderSize = kMonthDayOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainMonthDay() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalPlainMonthDay, DAlias>,
        "class TorqueGeneratedJSTemporalPlainMonthDay should be used as direct base for JSTemporalPlainMonthDay.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalPlainMonthDay(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalPlainMonthDay(Address ptr);
};

// Alias for IsJSTemporalPlainTime() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=27&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainTime_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=27&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainTime : public P {
  static_assert(
      std::is_same_v<JSTemporalPlainTime, D>,
      "Use this class as direct base for JSTemporalPlainTime.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainTime.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainTime<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
  inline Tagged<Foreign> time() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
  inline Tagged<Foreign> time(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
  inline void set_time(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalPlainTime)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=27&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainTimeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
  static constexpr int kTimeOffset = P::kHeaderSize;
  static constexpr int kTimeOffsetEnd = kTimeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kTimeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kTimeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kTimeOffsetEnd + 1;
  static constexpr int kHeaderSize = kTimeOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainTime() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalPlainTime, DAlias>,
        "class TorqueGeneratedJSTemporalPlainTime should be used as direct base for JSTemporalPlainTime.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalPlainTime(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalPlainTime(Address ptr);
};

// Alias for IsJSTemporalPlainYearMonth() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=31&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalPlainYearMonth_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=31&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalPlainYearMonth : public P {
  static_assert(
      std::is_same_v<JSTemporalPlainYearMonth, D>,
      "Use this class as direct base for JSTemporalPlainYearMonth.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalPlainYearMonth.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalPlainYearMonth<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
  inline Tagged<Foreign> year_month() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
  inline Tagged<Foreign> year_month(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
  inline void set_year_month(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalPlainYearMonth)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=31&c=1
  V8_EXPORT_PRIVATE void JSTemporalPlainYearMonthVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
  static constexpr int kYearMonthOffset = P::kHeaderSize;
  static constexpr int kYearMonthOffsetEnd = kYearMonthOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kYearMonthOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kYearMonthOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kYearMonthOffsetEnd + 1;
  static constexpr int kHeaderSize = kYearMonthOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalPlainYearMonth() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalPlainYearMonth, DAlias>,
        "class TorqueGeneratedJSTemporalPlainYearMonth should be used as direct base for JSTemporalPlainYearMonth.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalPlainYearMonth(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalPlainYearMonth(Address ptr);
};

// Alias for IsJSTemporalZonedDateTime() that avoids inlining.
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=35&c=1
V8_EXPORT_PRIVATE bool IsJSTemporalZonedDateTime_NonInline(Tagged<HeapObject> o);

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=35&c=1
template <class D, class P>
class TorqueGeneratedJSTemporalZonedDateTime : public P {
  static_assert(
      std::is_same_v<JSTemporalZonedDateTime, D>,
      "Use this class as direct base for JSTemporalZonedDateTime.");
  static_assert(
      std::is_same_v<JSObject, P>,
      "Pass in JSObject as second template parameter for TorqueGeneratedJSTemporalZonedDateTime.");

 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedJSTemporalZonedDateTime<D,P>;

  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
  inline Tagged<Foreign> zoned_date_time() const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
  inline Tagged<Foreign> zoned_date_time(PtrComprCageBase cage_base) const;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
  inline void set_zoned_date_time(Tagged<Foreign> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  DECL_PRINTER(JSTemporalZonedDateTime)

#ifdef VERIFY_HEAP
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=35&c=1
  V8_EXPORT_PRIVATE void JSTemporalZonedDateTimeVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
  static constexpr int kZonedDateTimeOffset = P::kHeaderSize;
  static constexpr int kZonedDateTimeOffsetEnd = kZonedDateTimeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kZonedDateTimeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kZonedDateTimeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kZonedDateTimeOffsetEnd + 1;
  static constexpr int kHeaderSize = kZonedDateTimeOffsetEnd + 1;

  friend class Factory;

  template <class DAlias = D>
  constexpr TorqueGeneratedJSTemporalZonedDateTime() : P() {
    static_assert(
        std::is_base_of_v<TorqueGeneratedJSTemporalZonedDateTime, DAlias>,
        "class TorqueGeneratedJSTemporalZonedDateTime should be used as direct base for JSTemporalZonedDateTime.");
  }

 protected:
  inline explicit constexpr TorqueGeneratedJSTemporalZonedDateTime(Address ptr, typename P::SkipTypeCheckTag
)    : P(ptr, typename P::SkipTypeCheckTag{}) {}
  inline explicit TorqueGeneratedJSTemporalZonedDateTime(Address ptr);
};

