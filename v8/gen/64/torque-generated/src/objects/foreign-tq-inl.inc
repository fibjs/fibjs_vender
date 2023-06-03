// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedForeign<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedForeign<D, P>::TorqueGeneratedForeign(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsForeign_NonInline(*this));
}
