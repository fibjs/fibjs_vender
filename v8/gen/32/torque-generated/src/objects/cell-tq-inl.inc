// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
template<class D, class P>
Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedCell<D, P>::maybe_value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedCell::maybe_value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
template<class D, class P>
Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> TorqueGeneratedCell<D, P>::maybe_value(PtrComprCageBase cage_base) const {
  Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> value = TaggedField<Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>>>::load(cage_base, *this, kMaybeValueOffset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && IsSmi(value.GetHeapObjectOrSmi())) || (!value.IsWeak() && IsHeapObject(value.GetHeapObjectOrSmi())) || value.IsWeak());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedCell<D, P>::set_maybe_value(Tagged<Union<HeapObject, MaybeWeak<HeapObject>, Smi>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (value.IsCleared() || (!value.IsWeak() && IsSmi(value.GetHeapObjectOrSmi())) || (!value.IsWeak() && IsHeapObject(value.GetHeapObjectOrSmi())) || value.IsWeak()));
  RELAXED_WRITE_WEAK_FIELD(*this, kMaybeValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMaybeValueOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCell<D, P>::TorqueGeneratedCell(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsCell_NonInline(*this));
}
