// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=8&c=31
template<class D, class P>
uint32_t TorqueGeneratedJSSynchronizationPrimitive<D, P>::state() const {
  uint32_t value;
  value = this->template ReadField<uint32_t>(kStateOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=8&c=31
template<class D, class P>
void TorqueGeneratedJSSynchronizationPrimitive<D, P>::set_state(uint32_t value) {
  this->template WriteField<uint32_t>(kStateOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSSynchronizationPrimitive<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSynchronizationPrimitive<D, P>::TorqueGeneratedJSSynchronizationPrimitive(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSynchronizationPrimitive_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSynchronizationPrimitive<D, P>::TorqueGeneratedJSSynchronizationPrimitive(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSynchronizationPrimitive_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
template<class D, class P>
int32_t TorqueGeneratedJSAtomicsMutex<D, P>::owner_thread_id() const {
  int32_t value;
  value = this->template ReadField<int32_t>(kOwnerThreadIdOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedJSAtomicsMutex<D, P>::set_owner_thread_id(int32_t value) {
  this->template WriteField<int32_t>(kOwnerThreadIdOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=11&c=1
template<class D, class P>
D TorqueGeneratedJSAtomicsMutex<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSAtomicsMutex<D, P>::TorqueGeneratedJSAtomicsMutex(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSAtomicsMutex_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAtomicsMutex<D, P>::TorqueGeneratedJSAtomicsMutex(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAtomicsMutex_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=18&c=1
template<class D, class P>
D TorqueGeneratedJSAtomicsCondition<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSAtomicsCondition<D, P>::TorqueGeneratedJSAtomicsCondition(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSAtomicsCondition_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAtomicsCondition<D, P>::TorqueGeneratedJSAtomicsCondition(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAtomicsCondition_NonInline(*this));
}
