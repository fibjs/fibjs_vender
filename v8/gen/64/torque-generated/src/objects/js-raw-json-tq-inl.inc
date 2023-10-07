// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-raw-json.tq?l=7&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSRawJson<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSRawJson<D, P>::TorqueGeneratedJSRawJson(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSRawJson_NonInline(*this));
}
