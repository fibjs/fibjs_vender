// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
template<class D, class P>
int TorqueGeneratedFreeSpace<D, P>::size() const {
  int value = TaggedField<Smi>::load(*this, kSizeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedFreeSpace<D, P>::set_size(int value) {
  WRITE_FIELD(*this, kSizeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
template<class D, class P>
MaybeObject TorqueGeneratedFreeSpace<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedFreeSpace::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
template<class D, class P>
MaybeObject TorqueGeneratedFreeSpace<D, P>::next(PtrComprCageBase cage_base) const {
  MaybeObject value = TaggedField<MaybeObject>::load(cage_base, *this, kNextOffset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && IsSmi(value.GetHeapObjectOrSmi())) || (!value.IsWeak() && IsUninitialized(value.GetHeapObjectOrSmi())) || (!value.IsWeak() && IsFreeSpace(value.GetHeapObjectOrSmi())));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedFreeSpace<D, P>::set_next(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && IsSmi(value.GetHeapObjectOrSmi())) || (!value.IsWeak() && IsUninitialized(value.GetHeapObjectOrSmi())) || (!value.IsWeak() && IsFreeSpace(value.GetHeapObjectOrSmi())));
  RELAXED_WRITE_WEAK_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=5&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedFreeSpace<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedFreeSpace<D, P>::TorqueGeneratedFreeSpace(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsFreeSpace_NonInline(*this));
}
