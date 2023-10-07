// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shared-array.tq?l=5&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSSharedArray<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSSharedArray<D, P>::TorqueGeneratedJSSharedArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSharedArray_NonInline(*this));
}
