// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=40&c=3
template<class D, class P>
int TorqueGeneratedJSDurationFormat<D, P>::style_flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kStyleFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=40&c=3
template<class D, class P>
void TorqueGeneratedJSDurationFormat<D, P>::set_style_flags(int value) {
  WRITE_FIELD(*this, kStyleFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=41&c=3
template<class D, class P>
int TorqueGeneratedJSDurationFormat<D, P>::display_flags() const {
  int value;
  value = TaggedField<Smi>::load(*this, kDisplayFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=41&c=3
template<class D, class P>
void TorqueGeneratedJSDurationFormat<D, P>::set_display_flags(int value) {
  WRITE_FIELD(*this, kDisplayFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDurationFormat<D, P>::icu_locale() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDurationFormat::icu_locale(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDurationFormat<D, P>::icu_locale(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuLocaleOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=42&c=3
template<class D, class P>
void TorqueGeneratedJSDurationFormat<D, P>::set_icu_locale(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuLocaleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDurationFormat<D, P>::icu_number_formatter() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDurationFormat::icu_number_formatter(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
template<class D, class P>
Foreign TorqueGeneratedJSDurationFormat<D, P>::icu_number_formatter(PtrComprCageBase cage_base) const {
  Foreign value;
  value = TaggedField<Foreign>::load(cage_base, *this, kIcuNumberFormatterOffset);
  DCHECK(value.IsForeign());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=43&c=3
template<class D, class P>
void TorqueGeneratedJSDurationFormat<D, P>::set_icu_number_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberFormatterOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=39&c=1
template<class D, class P>
D TorqueGeneratedJSDurationFormat<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSDurationFormat<D, P>::TorqueGeneratedJSDurationFormat(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSDurationFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDurationFormat<D, P>::TorqueGeneratedJSDurationFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDurationFormat_NonInline(*this));
}
