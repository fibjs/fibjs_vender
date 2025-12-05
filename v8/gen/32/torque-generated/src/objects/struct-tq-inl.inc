template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsStruct_NonInline(*this));
}
