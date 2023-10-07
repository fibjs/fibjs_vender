// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorHelper<D, P>::underlying_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorHelper::underlying_object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorHelper<D, P>::underlying_object(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kUnderlyingOffset + 0);
  DCHECK(IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorHelper<D, P>::set_underlying_object(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value));
  WRITE_FIELD(*this, kUnderlyingOffset + 0, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnderlyingOffset + 0, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorHelper<D, P>::underlying_next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorHelper::underlying_next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorHelper<D, P>::underlying_next(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kUnderlyingOffset + 4);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorHelper<D, P>::set_underlying_next(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kUnderlyingOffset + 4, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnderlyingOffset + 4, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=5&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSIteratorHelper<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSIteratorHelper<D, P>::TorqueGeneratedJSIteratorHelper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSIteratorHelper_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorMapHelper<D, P>::mapper() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorMapHelper::mapper(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorMapHelper<D, P>::mapper(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kMapperOffset);
  DCHECK(IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorMapHelper<D, P>::set_mapper(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  WRITE_FIELD(*this, kMapperOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMapperOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorMapHelper<D, P>::counter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorMapHelper::counter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorMapHelper<D, P>::counter(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kCounterOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorMapHelper<D, P>::set_counter(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsHeapNumber(value));
  WRITE_FIELD(*this, kCounterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCounterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSIteratorMapHelper<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSIteratorMapHelper<D, P>::TorqueGeneratedJSIteratorMapHelper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSIteratorMapHelper_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorFilterHelper<D, P>::predicate() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFilterHelper::predicate(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorFilterHelper<D, P>::predicate(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kPredicateOffset);
  DCHECK(IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=16&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFilterHelper<D, P>::set_predicate(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  WRITE_FIELD(*this, kPredicateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPredicateOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorFilterHelper<D, P>::counter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFilterHelper::counter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorFilterHelper<D, P>::counter(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kCounterOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=17&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFilterHelper<D, P>::set_counter(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsHeapNumber(value));
  WRITE_FIELD(*this, kCounterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCounterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSIteratorFilterHelper<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSIteratorFilterHelper<D, P>::TorqueGeneratedJSIteratorFilterHelper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSIteratorFilterHelper_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorTakeHelper<D, P>::remaining() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorTakeHelper::remaining(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorTakeHelper<D, P>::remaining(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kRemainingOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorTakeHelper<D, P>::set_remaining(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsHeapNumber(value));
  WRITE_FIELD(*this, kRemainingOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRemainingOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSIteratorTakeHelper<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSIteratorTakeHelper<D, P>::TorqueGeneratedJSIteratorTakeHelper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSIteratorTakeHelper_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorDropHelper<D, P>::remaining() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorDropHelper::remaining(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorDropHelper<D, P>::remaining(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kRemainingOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=25&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorDropHelper<D, P>::set_remaining(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsHeapNumber(value));
  WRITE_FIELD(*this, kRemainingOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRemainingOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSIteratorDropHelper<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSIteratorDropHelper<D, P>::TorqueGeneratedJSIteratorDropHelper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSIteratorDropHelper_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::mapper() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFlatMapHelper::mapper(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::mapper(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kMapperOffset);
  DCHECK(IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFlatMapHelper<D, P>::set_mapper(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  WRITE_FIELD(*this, kMapperOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMapperOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::counter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFlatMapHelper::counter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::counter(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kCounterOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFlatMapHelper<D, P>::set_counter(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsHeapNumber(value));
  WRITE_FIELD(*this, kCounterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCounterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::innerIterator_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFlatMapHelper::innerIterator_object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::innerIterator_object(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kInnerIteratorOffset + 0);
  DCHECK(IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFlatMapHelper<D, P>::set_innerIterator_object(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value));
  WRITE_FIELD(*this, kInnerIteratorOffset + 0, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInnerIteratorOffset + 0, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::innerIterator_next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFlatMapHelper::innerIterator_next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::innerIterator_next(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kInnerIteratorOffset + 4);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=31&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFlatMapHelper<D, P>::set_innerIterator_next(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kInnerIteratorOffset + 4, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInnerIteratorOffset + 4, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
template<class D, class P>
Tagged<Boolean> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::innerAlive() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSIteratorFlatMapHelper::innerAlive(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
template<class D, class P>
Tagged<Boolean> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::innerAlive(PtrComprCageBase cage_base) const {
  Tagged<Boolean> value = TaggedField<Tagged<Boolean>>::load(cage_base, *this, kInnerAliveOffset);
  DCHECK(IsBoolean(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
template<class D, class P>
void TorqueGeneratedJSIteratorFlatMapHelper<D, P>::set_innerAlive(Tagged<Boolean> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsBoolean(value));
  WRITE_FIELD(*this, kInnerAliveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInnerAliveOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSIteratorFlatMapHelper<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSIteratorFlatMapHelper<D, P>::TorqueGeneratedJSIteratorFlatMapHelper(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSIteratorFlatMapHelper_NonInline(*this));
}
