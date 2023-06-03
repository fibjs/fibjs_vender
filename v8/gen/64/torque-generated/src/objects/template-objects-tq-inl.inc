// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTemplateObjectDescription::raw_strings(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kRawStringsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_raw_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRawStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRawStringsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTemplateObjectDescription::cooked_strings(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
template<class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings(PtrComprCageBase cage_base) const {
  FixedArray value;
  value = TaggedField<FixedArray>::load(cage_base, *this, kCookedStringsOffset);
  DCHECK(value.IsFixedArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_cooked_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kCookedStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCookedStringsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=5&c=1
template<class D, class P>
D TorqueGeneratedTemplateObjectDescription<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTemplateObjectDescription<D, P>::TorqueGeneratedTemplateObjectDescription(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTemplateObjectDescription_NonInline(*this));
}
