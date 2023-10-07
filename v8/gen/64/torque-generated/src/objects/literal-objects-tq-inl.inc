// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
template<class D, class P>
int TorqueGeneratedArrayBoilerplateDescription<D, P>::flags() const {
  int value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
template<class D, class P>
Tagged<FixedArrayBase> TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedArrayBoilerplateDescription::constant_elements(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
template<class D, class P>
Tagged<FixedArrayBase> TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements(PtrComprCageBase cage_base) const {
  Tagged<FixedArrayBase> value = TaggedField<Tagged<FixedArrayBase>>::load(cage_base, *this, kConstantElementsOffset);
  DCHECK(IsFixedArrayBase(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_constant_elements(Tagged<FixedArrayBase> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArrayBase(value));
  WRITE_FIELD(*this, kConstantElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantElementsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=5&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedArrayBoilerplateDescription<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedArrayBoilerplateDescription<D, P>::TorqueGeneratedArrayBoilerplateDescription(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsArrayBoilerplateDescription_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedRegExpBoilerplateDescription<D, P>::data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedRegExpBoilerplateDescription::data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedRegExpBoilerplateDescription<D, P>::data(PtrComprCageBase cage_base) const {
  Tagged<FixedArray> value = TaggedField<Tagged<FixedArray>>::load(cage_base, *this, kDataOffset);
  DCHECK(IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedRegExpBoilerplateDescription<D, P>::set_data(Tagged<FixedArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArray(value));
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedRegExpBoilerplateDescription<D, P>::source() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedRegExpBoilerplateDescription::source(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedRegExpBoilerplateDescription<D, P>::source(PtrComprCageBase cage_base) const {
  Tagged<String> value = TaggedField<Tagged<String>>::load(cage_base, *this, kSourceOffset);
  DCHECK(IsString(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedRegExpBoilerplateDescription<D, P>::set_source(Tagged<String> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value));
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
template<class D, class P>
int TorqueGeneratedRegExpBoilerplateDescription<D, P>::flags() const {
  int value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedRegExpBoilerplateDescription<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedRegExpBoilerplateDescription<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedRegExpBoilerplateDescription<D, P>::TorqueGeneratedRegExpBoilerplateDescription(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsRegExpBoilerplateDescription_NonInline(*this));
}
