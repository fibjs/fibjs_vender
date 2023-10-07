// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=9&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedBytecodeArray<D, P>::constant_pool() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedBytecodeArray::constant_pool(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=9&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedBytecodeArray<D, P>::constant_pool(PtrComprCageBase cage_base) const {
  Tagged<FixedArray> value = TaggedField<Tagged<FixedArray>>::load(cage_base, *this, kConstantPoolOffset);
  DCHECK(IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=9&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_constant_pool(Tagged<FixedArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArray(value));
  WRITE_FIELD(*this, kConstantPoolOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantPoolOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
template<class D, class P>
Tagged<ByteArray> TorqueGeneratedBytecodeArray<D, P>::handler_table() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedBytecodeArray::handler_table(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
template<class D, class P>
Tagged<ByteArray> TorqueGeneratedBytecodeArray<D, P>::handler_table(PtrComprCageBase cage_base) const {
  Tagged<ByteArray> value = TaggedField<Tagged<ByteArray>>::load(cage_base, *this, kHandlerTableOffset);
  DCHECK(IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_handler_table(Tagged<ByteArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsByteArray(value));
  WRITE_FIELD(*this, kHandlerTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=21&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedBytecodeArray<D, P>::source_position_table(AcquireLoadTag) const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedBytecodeArray::source_position_table(cage_base, kAcquireLoad);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=21&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedBytecodeArray<D, P>::source_position_table(PtrComprCageBase cage_base, AcquireLoadTag) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::Acquire_Load(cage_base, *this, kSourcePositionTableOffset);
  DCHECK(IsUndefined(value) || IsException(value) || IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_source_position_table(Tagged<HeapObject> value, ReleaseStoreTag, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsException(value) || IsByteArray(value));
  RELEASE_WRITE_FIELD(*this, kSourcePositionTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourcePositionTableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=22&c=3
template<class D, class P>
int32_t TorqueGeneratedBytecodeArray<D, P>::frame_size() const {
  int32_t value = this->template ReadField<int32_t>(kFrameSizeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_frame_size(int32_t value) {
  this->template WriteField<int32_t>(kFrameSizeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=23&c=3
template<class D, class P>
int32_t TorqueGeneratedBytecodeArray<D, P>::parameter_size() const {
  int32_t value = this->template ReadField<int32_t>(kParameterSizeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=23&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_parameter_size(int32_t value) {
  this->template WriteField<int32_t>(kParameterSizeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=24&c=3
template<class D, class P>
int32_t TorqueGeneratedBytecodeArray<D, P>::incoming_new_target_or_generator_register() const {
  int32_t value = this->template ReadField<int32_t>(kIncomingNewTargetOrGeneratorRegisterOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=24&c=3
template<class D, class P>
void TorqueGeneratedBytecodeArray<D, P>::set_incoming_new_target_or_generator_register(int32_t value) {
  this->template WriteField<int32_t>(kIncomingNewTargetOrGeneratorRegisterOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=7&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedBytecodeArray<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedBytecodeArray<D, P>::TorqueGeneratedBytecodeArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsBytecodeArray_NonInline(*this));
}
