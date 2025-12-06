// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalDuration<D, P>::duration() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalDuration::duration(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalDuration<D, P>::duration(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kDurationOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalDuration<D, P>::set_duration(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kDurationOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDurationOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalDuration<D, P>::TorqueGeneratedJSTemporalDuration(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalDuration_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalInstant<D, P>::instant() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalInstant::instant(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalInstant<D, P>::instant(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kInstantOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalInstant<D, P>::set_instant(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kInstantOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstantOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalInstant<D, P>::TorqueGeneratedJSTemporalInstant(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalInstant_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainDateTime<D, P>::date_time() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainDateTime::date_time(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainDateTime<D, P>::date_time(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kDateTimeOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDateTime<D, P>::set_date_time(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kDateTimeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDateTimeOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainDateTime<D, P>::TorqueGeneratedJSTemporalPlainDateTime(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainDateTime_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainDate<D, P>::date() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainDate::date(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainDate<D, P>::date(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kDateOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainDate<D, P>::set_date(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kDateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDateOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainDate<D, P>::TorqueGeneratedJSTemporalPlainDate(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainDate_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainMonthDay<D, P>::month_day() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainMonthDay::month_day(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainMonthDay<D, P>::month_day(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kMonthDayOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainMonthDay<D, P>::set_month_day(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kMonthDayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMonthDayOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainMonthDay<D, P>::TorqueGeneratedJSTemporalPlainMonthDay(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainMonthDay_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainTime<D, P>::time() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainTime::time(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainTime<D, P>::time(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kTimeOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainTime<D, P>::set_time(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kTimeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTimeOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainTime<D, P>::TorqueGeneratedJSTemporalPlainTime(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainTime_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainYearMonth<D, P>::year_month() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalPlainYearMonth::year_month(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalPlainYearMonth<D, P>::year_month(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kYearMonthOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=32&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalPlainYearMonth<D, P>::set_year_month(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kYearMonthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kYearMonthOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalPlainYearMonth<D, P>::TorqueGeneratedJSTemporalPlainYearMonth(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalPlainYearMonth_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalZonedDateTime<D, P>::zoned_date_time() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSTemporalZonedDateTime::zoned_date_time(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedJSTemporalZonedDateTime<D, P>::zoned_date_time(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kZonedDateTimeOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=36&c=3
template<class D, class P>
void TorqueGeneratedJSTemporalZonedDateTime<D, P>::set_zoned_date_time(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsForeign(value)));
  WRITE_FIELD(*this, kZonedDateTimeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kZonedDateTimeOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSTemporalZonedDateTime<D, P>::TorqueGeneratedJSTemporalZonedDateTime(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSTemporalZonedDateTime_NonInline(*this));
}
