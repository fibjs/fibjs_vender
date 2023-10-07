// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedJSRegExp<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExp::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedJSRegExp<D, P>::data(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kDataOffset);
  DCHECK(IsUndefined(value) || IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=18&c=3
template<class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_data(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsFixedArray(value));
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
template<class D, class P>
Tagged<PrimitiveHeapObject> TorqueGeneratedJSRegExp<D, P>::source() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExp::source(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
template<class D, class P>
Tagged<PrimitiveHeapObject> TorqueGeneratedJSRegExp<D, P>::source(PtrComprCageBase cage_base) const {
  Tagged<PrimitiveHeapObject> value = TaggedField<Tagged<PrimitiveHeapObject>>::load(cage_base, *this, kSourceOffset);
  DCHECK(IsString(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
template<class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_source(Tagged<PrimitiveHeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value) || IsUndefined(value));
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExp<D, P>::flags() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExp::flags(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExp<D, P>::flags(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kFlagsOffset);
  DCHECK(IsUndefined(value) || IsSmi(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
template<class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_flags(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsSmi(value));
  WRITE_FIELD(*this, kFlagsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFlagsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=17&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSRegExp<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSRegExp<D, P>::TorqueGeneratedJSRegExp(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSRegExp_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResult<D, P>::index() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::index(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResult<D, P>::index(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kIndexOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_index(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=48&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResult<D, P>::input() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::input(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=48&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResult<D, P>::input(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kInputOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=48&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_input(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kInputOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInputOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResult<D, P>::groups() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::groups(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResult<D, P>::groups(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kGroupsOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=49&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_groups(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kGroupsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGroupsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedJSRegExpResult<D, P>::names() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::names(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedJSRegExpResult<D, P>::names(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kNamesOffset);
  DCHECK(IsUndefined(value) || IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_names(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsFixedArray(value));
  WRITE_FIELD(*this, kNamesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedJSRegExpResult<D, P>::regexp_input() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResult::regexp_input(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedJSRegExpResult<D, P>::regexp_input(PtrComprCageBase cage_base) const {
  Tagged<String> value = TaggedField<Tagged<String>>::load(cage_base, *this, kRegexpInputOffset);
  DCHECK(IsString(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_regexp_input(Tagged<String> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value));
  WRITE_FIELD(*this, kRegexpInputOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRegexpInputOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=54&c=3
template<class D, class P>
int TorqueGeneratedJSRegExpResult<D, P>::regexp_last_index() const {
  int value = TaggedField<Smi>::load(*this, kRegexpLastIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=54&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResult<D, P>::set_regexp_last_index(int value) {
  WRITE_FIELD(*this, kRegexpLastIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=44&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSRegExpResult<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSRegExpResult<D, P>::TorqueGeneratedJSRegExpResult(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=58&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResultWithIndices<D, P>::indices() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResultWithIndices::indices(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=58&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResultWithIndices<D, P>::indices(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kIndicesOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=58&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResultWithIndices<D, P>::set_indices(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kIndicesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndicesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=57&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSRegExpResultWithIndices<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSRegExpResultWithIndices<D, P>::TorqueGeneratedJSRegExpResultWithIndices(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=64&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResultIndices<D, P>::groups() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSRegExpResultIndices::groups(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=64&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedJSRegExpResultIndices<D, P>::groups(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kGroupsOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=64&c=3
template<class D, class P>
void TorqueGeneratedJSRegExpResultIndices<D, P>::set_groups(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kGroupsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGroupsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=61&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSRegExpResultIndices<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSRegExpResultIndices<D, P>::TorqueGeneratedJSRegExpResultIndices(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
