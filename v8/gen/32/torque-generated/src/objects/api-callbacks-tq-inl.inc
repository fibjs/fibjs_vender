// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedInterceptorInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedInterceptorInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedInterceptorInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kDataOffset);
  DCHECK(IsSmi(value) || IsHeapObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_data(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsSmi(value) || IsHeapObject(value)));
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=15&c=3
template<class D, class P>
uint32_t TorqueGeneratedInterceptorInfo<D, P>::flags() const {
  uint32_t value = this->template ReadField<uint32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedInterceptorInfo<D, P>::TorqueGeneratedInterceptorInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInterceptorInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
template<class D, class P>
Tagged<Union<Foreign, Smi, Undefined>> TorqueGeneratedAccessCheckInfo<D, P>::callback() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::callback(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
template<class D, class P>
Tagged<Union<Foreign, Smi, Undefined>> TorqueGeneratedAccessCheckInfo<D, P>::callback(PtrComprCageBase cage_base) const {
  Tagged<Union<Foreign, Smi, Undefined>> value = TaggedField<Tagged<Union<Foreign, Smi, Undefined>>>::load(cage_base, *this, kCallbackOffset);
  DCHECK(IsUndefined(value) || IsZero(value) || IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_callback(Tagged<Union<Foreign, Smi, Undefined>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsUndefined(value) || IsZero(value) || IsForeign(value)));
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
template<class D, class P>
Tagged<Union<InterceptorInfo, Smi, Undefined>> TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::named_interceptor(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
template<class D, class P>
Tagged<Union<InterceptorInfo, Smi, Undefined>> TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor(PtrComprCageBase cage_base) const {
  Tagged<Union<InterceptorInfo, Smi, Undefined>> value = TaggedField<Tagged<Union<InterceptorInfo, Smi, Undefined>>>::load(cage_base, *this, kNamedInterceptorOffset);
  DCHECK(IsUndefined(value) || IsZero(value) || IsInterceptorInfo(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_named_interceptor(Tagged<Union<InterceptorInfo, Smi, Undefined>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsUndefined(value) || IsZero(value) || IsInterceptorInfo(value)));
  WRITE_FIELD(*this, kNamedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamedInterceptorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
template<class D, class P>
Tagged<Union<InterceptorInfo, Smi, Undefined>> TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::indexed_interceptor(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
template<class D, class P>
Tagged<Union<InterceptorInfo, Smi, Undefined>> TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor(PtrComprCageBase cage_base) const {
  Tagged<Union<InterceptorInfo, Smi, Undefined>> value = TaggedField<Tagged<Union<InterceptorInfo, Smi, Undefined>>>::load(cage_base, *this, kIndexedInterceptorOffset);
  DCHECK(IsUndefined(value) || IsZero(value) || IsInterceptorInfo(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_indexed_interceptor(Tagged<Union<InterceptorInfo, Smi, Undefined>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsUndefined(value) || IsZero(value) || IsInterceptorInfo(value)));
  WRITE_FIELD(*this, kIndexedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexedInterceptorOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedAccessCheckInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessCheckInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedAccessCheckInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kDataOffset);
  DCHECK(IsSmi(value) || IsHeapObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=31&c=3
template<class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_data(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsSmi(value) || IsHeapObject(value)));
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAccessCheckInfo<D, P>::TorqueGeneratedAccessCheckInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAccessCheckInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=45&c=3
template<class D, class P>
Tagged<Name> TorqueGeneratedAccessorInfo<D, P>::name() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessorInfo::name(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=45&c=3
template<class D, class P>
Tagged<Name> TorqueGeneratedAccessorInfo<D, P>::name(PtrComprCageBase cage_base) const {
  Tagged<Name> value = TaggedField<Tagged<Name>>::load(cage_base, *this, kNameOffset);
  DCHECK(IsName(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=45&c=3
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_name(Tagged<Name> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsName(value)));
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=46&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedAccessorInfo<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAccessorInfo::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=46&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedAccessorInfo<D, P>::data(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kDataOffset);
  DCHECK(IsSmi(value) || IsHeapObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=46&c=3
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_data(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsSmi(value) || IsHeapObject(value)));
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=52&c=3
template<class D, class P>
uint32_t TorqueGeneratedAccessorInfo<D, P>::flags() const {
  uint32_t value = this->template ReadField<uint32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=52&c=3
template<class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedAccessorInfo<D, P>::TorqueGeneratedAccessorInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAccessorInfo_NonInline(*this));
}
