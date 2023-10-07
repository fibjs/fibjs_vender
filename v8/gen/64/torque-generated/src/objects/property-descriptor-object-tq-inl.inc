// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=47&c=3
template<class D, class P>
int TorqueGeneratedPropertyDescriptorObject<D, P>::flags() const {
  int value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=47&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPropertyDescriptorObject<D, P>::value() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPropertyDescriptorObject::value(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPropertyDescriptorObject<D, P>::value(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kValueOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsTheHole(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_value(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsTheHole(value));
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPropertyDescriptorObject<D, P>::get() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPropertyDescriptorObject::get(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPropertyDescriptorObject<D, P>::get(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kGetOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsTheHole(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_get(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsTheHole(value));
  WRITE_FIELD(*this, kGetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPropertyDescriptorObject<D, P>::set() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPropertyDescriptorObject::set(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPropertyDescriptorObject<D, P>::set(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kSetOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsTheHole(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
template<class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_set(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsTheHole(value));
  WRITE_FIELD(*this, kSetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=19&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPropertyDescriptorObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPropertyDescriptorObject<D, P>::TorqueGeneratedPropertyDescriptorObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPropertyDescriptorObject_NonInline(*this));
}
