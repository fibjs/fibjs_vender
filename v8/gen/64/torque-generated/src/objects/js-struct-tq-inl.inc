// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=8&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedAlwaysSharedSpaceJSObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedAlwaysSharedSpaceJSObject<D, P>::TorqueGeneratedAlwaysSharedSpaceJSObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAlwaysSharedSpaceJSObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-struct.tq?l=11&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedJSSharedStruct<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedJSSharedStruct<D, P>::TorqueGeneratedJSSharedStruct(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSharedStruct_NonInline(*this));
}
