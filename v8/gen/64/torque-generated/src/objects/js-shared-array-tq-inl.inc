// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedJSSharedArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSSharedArray<D, P>::TorqueGeneratedJSSharedArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSharedArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSharedArray<D, P>::TorqueGeneratedJSSharedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSharedArray_NonInline(*this));
}
