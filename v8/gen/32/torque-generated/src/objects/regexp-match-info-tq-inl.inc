// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedRegExpMatchInfo<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedRegExpMatchInfo<D, P>::TorqueGeneratedRegExpMatchInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsRegExpMatchInfo_NonInline(*this));
}
