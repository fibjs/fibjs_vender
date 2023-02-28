// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSArrayIterator<D, P>::iterated_object() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayIterator::iterated_object(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
template<class D, class P>
JSReceiver TorqueGeneratedJSArrayIterator<D, P>::iterated_object(PtrComprCageBase cage_base) const {
  JSReceiver value;
  value = TaggedField<JSReceiver>::load(cage_base, *this, kIteratedObjectOffset);
  DCHECK(value.IsJSReceiver());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_iterated_object(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kIteratedObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratedObjectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
template<class D, class P>
Object TorqueGeneratedJSArrayIterator<D, P>::next_index() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArrayIterator::next_index(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
template<class D, class P>
Object TorqueGeneratedJSArrayIterator<D, P>::next_index(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kNextIndexOffset);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_next_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kNextIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextIndexOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
template<class D, class P>
int TorqueGeneratedJSArrayIterator<D, P>::kind() const {
  int value;
  value = TaggedField<Smi>::load(*this, kKindOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedJSArrayIterator<D, P>::set_kind(int value) {
  WRITE_FIELD(*this, kKindOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=7&c=1
template<class D, class P>
D TorqueGeneratedJSArrayIterator<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArrayIterator<D, P>::TorqueGeneratedJSArrayIterator(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArrayIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArrayIterator<D, P>::TorqueGeneratedJSArrayIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArrayIterator_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
template<class D, class P>
Object TorqueGeneratedJSArray<D, P>::length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSArray::length(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
template<class D, class P>
Object TorqueGeneratedJSArray<D, P>::length(PtrComprCageBase cage_base) const {
  Object value;
  value = TaggedField<Object>::load(cage_base, *this, kLengthOffset);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=56&c=3
template<class D, class P>
void TorqueGeneratedJSArray<D, P>::set_length(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=52&c=1
template<class D, class P>
D TorqueGeneratedJSArray<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedJSArray<D, P>::TorqueGeneratedJSArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArray<D, P>::TorqueGeneratedJSArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArray_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=62&c=3
template<class D, class P>
JSArray TorqueGeneratedTemplateLiteralObject<D, P>::raw() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedTemplateLiteralObject::raw(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=62&c=3
template<class D, class P>
JSArray TorqueGeneratedTemplateLiteralObject<D, P>::raw(PtrComprCageBase cage_base) const {
  JSArray value;
  value = TaggedField<JSArray>::load(cage_base, *this, kRawOffset);
  DCHECK(value.IsJSArray());
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=62&c=3
template<class D, class P>
void TorqueGeneratedTemplateLiteralObject<D, P>::set_raw(JSArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSArray());
  WRITE_FIELD(*this, kRawOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRawOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=63&c=3
template<class D, class P>
int TorqueGeneratedTemplateLiteralObject<D, P>::function_literal_id() const {
  int value;
  value = TaggedField<Smi>::load(*this, kFunctionLiteralIdOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=63&c=3
template<class D, class P>
void TorqueGeneratedTemplateLiteralObject<D, P>::set_function_literal_id(int value) {
  WRITE_FIELD(*this, kFunctionLiteralIdOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=64&c=3
template<class D, class P>
int TorqueGeneratedTemplateLiteralObject<D, P>::slot_id() const {
  int value;
  value = TaggedField<Smi>::load(*this, kSlotIdOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=64&c=3
template<class D, class P>
void TorqueGeneratedTemplateLiteralObject<D, P>::set_slot_id(int value) {
  WRITE_FIELD(*this, kSlotIdOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=59&c=1
template<class D, class P>
D TorqueGeneratedTemplateLiteralObject<D, P>::cast(Object object) {
    return D(object.ptr());
}

template<class D, class P>
inline TorqueGeneratedTemplateLiteralObject<D, P>::TorqueGeneratedTemplateLiteralObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsTemplateLiteralObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTemplateLiteralObject<D, P>::TorqueGeneratedTemplateLiteralObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
    : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTemplateLiteralObject_NonInline(*this));
}
