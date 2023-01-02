// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=6&c=3
template<class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCallHandlerInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=6&c=3
template<class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDataOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedCallHandlerInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedCallHandlerInfo<D, P>::TorqueGeneratedCallHandlerInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsCallHandlerInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCallHandlerInfo<D, P>::TorqueGeneratedCallHandlerInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCallHandlerInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::getter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::getter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::getter(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kGetterOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::setter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::setter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::setter(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kSetterOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_setter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kSetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::query() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::query(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::query(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kQueryOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_query(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kQueryOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kQueryOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=25&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::descriptor() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::descriptor(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=25&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::descriptor(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDescriptorOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=25&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_descriptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kDescriptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDescriptorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::deleter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::deleter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::deleter(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDeleterOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_deleter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kDeleterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDeleterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::enumerator() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::enumerator(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::enumerator(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kEnumeratorOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_enumerator(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kEnumeratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEnumeratorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::definer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::definer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::definer(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDefinerOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_definer(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kDefinerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDefinerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
template<class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDataOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
template<class D, class P>
int TorqueGeneratedInterceptorInfo<D, P>::flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=1
template<class D, class P>
D TorqueGeneratedInterceptorInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedInterceptorInfo<D, P>::TorqueGeneratedInterceptorInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInterceptorInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInterceptorInfo<D, P>::TorqueGeneratedInterceptorInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInterceptorInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=34&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::callback() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::callback(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=34&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::callback(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kCallbackOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=34&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=35&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::named_interceptor(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=35&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNamedInterceptorOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_named_interceptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kNamedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamedInterceptorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=36&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::indexed_interceptor(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=36&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kIndexedInterceptorOffset);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=36&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_indexed_interceptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kIndexedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexedInterceptorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=37&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=37&c=3
template<class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDataOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=37&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=33&c=1
template<class D, class P>
D TorqueGeneratedAccessCheckInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAccessCheckInfo<D, P>::TorqueGeneratedAccessCheckInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAccessCheckInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAccessCheckInfo<D, P>::TorqueGeneratedAccessCheckInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAccessCheckInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=54&c=3
template<class D, class P>
Name TorqueGeneratedAccessorInfo<D, P>::name() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessorInfo::name(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=54&c=3
template<class D, class P>
Name TorqueGeneratedAccessorInfo<D, P>::name(PtrComprCageBase cage_base) const {
  Name value;
  value = TaggedField<Name>::load(cage_base, *this, kNameOffset);
  DCHECK(value.IsName());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=54&c=3
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_name(Name value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsName());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=55&c=3
template<class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessorInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=55&c=3
template<class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kDataOffset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=55&c=3
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=61&c=3
template<class D, class P>
uint32_t TorqueGeneratedAccessorInfo<D, P>::flags() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=61&c=3
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=62&c=28
template<class D, class P>
uint32_t TorqueGeneratedAccessorInfo<D, P>::optional_padding() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kOptionalPaddingOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=62&c=28
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_optional_padding(uint32_t value) {
  this->template WriteField<uint32_t>(kOptionalPaddingOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=53&c=1
template<class D, class P>
D TorqueGeneratedAccessorInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedAccessorInfo<D, P>::TorqueGeneratedAccessorInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAccessorInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAccessorInfo<D, P>::TorqueGeneratedAccessorInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAccessorInfo_NonInline(*this));
}
