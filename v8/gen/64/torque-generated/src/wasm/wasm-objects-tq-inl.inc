// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceWasmTypeInfoSupertypes(WasmTypeInfo p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=73&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=296&c=1
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Object_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=79&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWasmTypeInfoSupertypes
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWasmTypeInfoSupertypes

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceWasmTypeInfoSupertypes(WasmTypeInfo p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  Smi tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(32);
  tmp1 = TaggedField<Smi>::load(*static_cast<HeapObject*>(&p_o), static_cast<int>(tmp0));
  tmp2 = TqRuntimeConvert_intptr_Smi_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x28ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_Object_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWasmTypeInfoSupertypes
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=73&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=296&c=1
intptr_t TqRuntimeConvert_intptr_Smi_0(Smi p_s) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::SmiUntag(p_s);
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_intptr_0((TorqueRuntimeMacroShims::CodeStubAssembler::ConstexprIntegerLiteralToIntptr(p_i)));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Object_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Object_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Object_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::make_tuple(p_object, p_offset, p_length));
  goto block2;

  block2:
  return std::make_tuple(tmp0, tmp1, tmp2);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Object_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=79&c=1
intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (CastToUnderlyingTypeIfEnum(p_i));
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_intptr_0
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmInternalFunction<D, P>::ref() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmInternalFunction::ref(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmInternalFunction<D, P>::ref(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kRefOffset);
  DCHECK(IsWasmInstanceObject(value) || IsWasmApiFunctionRef(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=42&c=3
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_ref(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsWasmInstanceObject(value) || IsWasmApiFunctionRef(value));
  WRITE_FIELD(*this, kRefOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRefOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=44&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmInternalFunction<D, P>::external() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmInternalFunction::external(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=44&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmInternalFunction<D, P>::external(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kExternalOffset);
  DCHECK(IsUndefined(value) || IsJSFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=44&c=3
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_external(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsJSFunction(value));
  WRITE_FIELD(*this, kExternalOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExternalOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=3
template<class D, class P>
Tagged<Code> TorqueGeneratedWasmInternalFunction<D, P>::code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmInternalFunction::code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=3
template<class D, class P>
Tagged<Code> TorqueGeneratedWasmInternalFunction<D, P>::code(PtrComprCageBase cage_base) const {
  Tagged<Code> value = TaggedField<Tagged<Code>>::load(cage_base, *this, kCodeOffset);
  DCHECK(IsCode(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=46&c=3
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_code(Tagged<Code> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsCode(value));
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
template<class D, class P>
int TorqueGeneratedWasmInternalFunction<D, P>::function_index() const {
  int value = TaggedField<Smi>::load(*this, kFunctionIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
template<class D, class P>
void TorqueGeneratedWasmInternalFunction<D, P>::set_function_index(int value) {
  WRITE_FIELD(*this, kFunctionIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=35&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmInternalFunction<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmInternalFunction<D, P>::TorqueGeneratedWasmInternalFunction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmInternalFunction_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=236&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmNull<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmNull<D, P>::TorqueGeneratedWasmNull(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmNull_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
template<class D, class P>
Tagged<NativeContext> TorqueGeneratedWasmApiFunctionRef<D, P>::native_context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::native_context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
template<class D, class P>
Tagged<NativeContext> TorqueGeneratedWasmApiFunctionRef<D, P>::native_context(PtrComprCageBase cage_base) const {
  Tagged<NativeContext> value = TaggedField<Tagged<NativeContext>>::load(cage_base, *this, kNativeContextOffset);
  DCHECK(IsNativeContext(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_native_context(Tagged<NativeContext> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsNativeContext(value));
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmApiFunctionRef<D, P>::callable() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::callable(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmApiFunctionRef<D, P>::callable(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kCallableOffset);
  DCHECK(IsJSReceiver(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_callable(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsUndefined(value));
  WRITE_FIELD(*this, kCallableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmApiFunctionRef<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmApiFunctionRef<D, P>::instance(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kInstanceOffset);
  DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=25&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_instance(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=26&c=3
template<class D, class P>
int TorqueGeneratedWasmApiFunctionRef<D, P>::suspend() const {
  int value = TaggedField<Smi>::load(*this, kSuspendOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=26&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_suspend(int value) {
  WRITE_FIELD(*this, kSuspendOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=27&c=3
template<class D, class P>
int TorqueGeneratedWasmApiFunctionRef<D, P>::wrapper_budget() const {
  int value = TaggedField<Smi>::load(*this, kWrapperBudgetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=27&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_wrapper_budget(int value) {
  WRITE_FIELD(*this, kWrapperBudgetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=28&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedWasmApiFunctionRef<D, P>::call_origin() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::call_origin(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=28&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedWasmApiFunctionRef<D, P>::call_origin(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kCallOriginOffset);
  DCHECK(IsSmi(value) || IsWasmInternalFunction(value) || IsTuple2(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_call_origin(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsWasmInternalFunction(value) || IsTuple2(value));
  WRITE_FIELD(*this, kCallOriginOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallOriginOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=30&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmApiFunctionRef<D, P>::sig() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmApiFunctionRef::sig(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=30&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmApiFunctionRef<D, P>::sig(PtrComprCageBase cage_base) const {
  Tagged<PodArray<wasm::ValueType>> value = TaggedField<Tagged<PodArray<wasm::ValueType>>>::load(cage_base, *this, kSigOffset);
  DCHECK(IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=30&c=3
template<class D, class P>
void TorqueGeneratedWasmApiFunctionRef<D, P>::set_sig(Tagged<PodArray<wasm::ValueType>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsByteArray(value));
  WRITE_FIELD(*this, kSigOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSigOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmApiFunctionRef<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmApiFunctionRef<D, P>::TorqueGeneratedWasmApiFunctionRef(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmApiFunctionRef_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
template<class D, class P>
Tagged<WasmInternalFunction> TorqueGeneratedWasmFunctionData<D, P>::internal() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmFunctionData::internal(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
template<class D, class P>
Tagged<WasmInternalFunction> TorqueGeneratedWasmFunctionData<D, P>::internal(PtrComprCageBase cage_base) const {
  Tagged<WasmInternalFunction> value = TaggedField<Tagged<WasmInternalFunction>>::load(cage_base, *this, kInternalOffset);
  DCHECK(IsWasmInternalFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=58&c=3
template<class D, class P>
void TorqueGeneratedWasmFunctionData<D, P>::set_internal(Tagged<WasmInternalFunction> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsWasmInternalFunction(value));
  WRITE_FIELD(*this, kInternalOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInternalOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
template<class D, class P>
Tagged<Code> TorqueGeneratedWasmFunctionData<D, P>::wrapper_code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmFunctionData::wrapper_code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
template<class D, class P>
Tagged<Code> TorqueGeneratedWasmFunctionData<D, P>::wrapper_code(PtrComprCageBase cage_base) const {
  Tagged<Code> value = TaggedField<Tagged<Code>>::load(cage_base, *this, kWrapperCodeOffset);
  DCHECK(IsCode(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=60&c=3
template<class D, class P>
void TorqueGeneratedWasmFunctionData<D, P>::set_wrapper_code(Tagged<Code> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsCode(value));
  WRITE_FIELD(*this, kWrapperCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWrapperCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=62&c=3
template<class D, class P>
int TorqueGeneratedWasmFunctionData<D, P>::js_promise_flags() const {
  int value = TaggedField<Smi>::load(*this, kJsPromiseFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=62&c=3
template<class D, class P>
void TorqueGeneratedWasmFunctionData<D, P>::set_js_promise_flags(int value) {
  WRITE_FIELD(*this, kJsPromiseFlagsOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=56&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmFunctionData<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmFunctionData<D, P>::TorqueGeneratedWasmFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
template<class D, class P>
Tagged<WasmInstanceObject> TorqueGeneratedWasmExportedFunctionData<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmExportedFunctionData::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
template<class D, class P>
Tagged<WasmInstanceObject> TorqueGeneratedWasmExportedFunctionData<D, P>::instance(PtrComprCageBase cage_base) const {
  Tagged<WasmInstanceObject> value = TaggedField<Tagged<WasmInstanceObject>>::load(cage_base, *this, kInstanceOffset);
  DCHECK(IsWasmInstanceObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=69&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_instance(Tagged<WasmInstanceObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsWasmInstanceObject(value));
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::function_index() const {
  int value = TaggedField<Smi>::load(*this, kFunctionIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_function_index(int value) {
  WRITE_FIELD(*this, kFunctionIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=71&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::wrapper_budget() const {
  int value = TaggedField<Smi>::load(*this, kWrapperBudgetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=71&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_wrapper_budget(int value) {
  WRITE_FIELD(*this, kWrapperBudgetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
template<class D, class P>
Tagged<Code> TorqueGeneratedWasmExportedFunctionData<D, P>::c_wrapper_code() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmExportedFunctionData::c_wrapper_code(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
template<class D, class P>
Tagged<Code> TorqueGeneratedWasmExportedFunctionData<D, P>::c_wrapper_code(PtrComprCageBase cage_base) const {
  Tagged<Code> value = TaggedField<Tagged<Code>>::load(cage_base, *this, kCWrapperCodeOffset);
  DCHECK(IsCode(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=74&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_c_wrapper_code(Tagged<Code> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsCode(value));
  WRITE_FIELD(*this, kCWrapperCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCWrapperCodeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::packed_args_size() const {
  int value = TaggedField<Smi>::load(*this, kPackedArgsSizeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=75&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_packed_args_size(int value) {
  WRITE_FIELD(*this, kPackedArgsSizeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=3
template<class D, class P>
int TorqueGeneratedWasmExportedFunctionData<D, P>::canonical_type_index() const {
  int value = TaggedField<Smi>::load(*this, kCanonicalTypeIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=76&c=3
template<class D, class P>
void TorqueGeneratedWasmExportedFunctionData<D, P>::set_canonical_type_index(int value) {
  WRITE_FIELD(*this, kCanonicalTypeIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmExportedFunctionData<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmExportedFunctionData<D, P>::TorqueGeneratedWasmExportedFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmExportedFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmJSFunctionData<D, P>::serialized_signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmJSFunctionData::serialized_signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmJSFunctionData<D, P>::serialized_signature(PtrComprCageBase cage_base) const {
  Tagged<PodArray<wasm::ValueType>> value = TaggedField<Tagged<PodArray<wasm::ValueType>>>::load(cage_base, *this, kSerializedSignatureOffset);
  DCHECK(IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=84&c=3
template<class D, class P>
void TorqueGeneratedWasmJSFunctionData<D, P>::set_serialized_signature(Tagged<PodArray<wasm::ValueType>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsByteArray(value));
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmJSFunctionData<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmJSFunctionData<D, P>::TorqueGeneratedWasmJSFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmJSFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedWasmCapiFunctionData<D, P>::embedder_data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmCapiFunctionData::embedder_data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedWasmCapiFunctionData<D, P>::embedder_data(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kEmbedderDataOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=88&c=3
template<class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_embedder_data(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsForeign(value));
  WRITE_FIELD(*this, kEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEmbedderDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=89&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmCapiFunctionData<D, P>::serialized_signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmCapiFunctionData::serialized_signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=89&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmCapiFunctionData<D, P>::serialized_signature(PtrComprCageBase cage_base) const {
  Tagged<PodArray<wasm::ValueType>> value = TaggedField<Tagged<PodArray<wasm::ValueType>>>::load(cage_base, *this, kSerializedSignatureOffset);
  DCHECK(IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=89&c=3
template<class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_serialized_signature(Tagged<PodArray<wasm::ValueType>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsByteArray(value));
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=87&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmCapiFunctionData<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmCapiFunctionData<D, P>::TorqueGeneratedWasmCapiFunctionData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmCapiFunctionData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
template<class D, class P>
Tagged<WasmSuspenderObject> TorqueGeneratedWasmResumeData<D, P>::suspender() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmResumeData::suspender(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
template<class D, class P>
Tagged<WasmSuspenderObject> TorqueGeneratedWasmResumeData<D, P>::suspender(PtrComprCageBase cage_base) const {
  Tagged<WasmSuspenderObject> value = TaggedField<Tagged<WasmSuspenderObject>>::load(cage_base, *this, kSuspenderOffset);
  DCHECK(IsWasmSuspenderObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=93&c=3
template<class D, class P>
void TorqueGeneratedWasmResumeData<D, P>::set_suspender(Tagged<WasmSuspenderObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsWasmSuspenderObject(value));
  WRITE_FIELD(*this, kSuspenderOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSuspenderOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
template<class D, class P>
int TorqueGeneratedWasmResumeData<D, P>::on_resume() const {
  int value = TaggedField<Smi>::load(*this, kOnResumeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
template<class D, class P>
void TorqueGeneratedWasmResumeData<D, P>::set_on_resume(int value) {
  WRITE_FIELD(*this, kOnResumeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmResumeData<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmResumeData<D, P>::TorqueGeneratedWasmResumeData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmResumeData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
template<class D, class P>
Tagged<ByteArray> TorqueGeneratedWasmIndirectFunctionTable<D, P>::sig_ids() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmIndirectFunctionTable::sig_ids(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
template<class D, class P>
Tagged<ByteArray> TorqueGeneratedWasmIndirectFunctionTable<D, P>::sig_ids(PtrComprCageBase cage_base) const {
  Tagged<ByteArray> value = TaggedField<Tagged<ByteArray>>::load(cage_base, *this, kSigIdsOffset);
  DCHECK(IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=98&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_sig_ids(Tagged<ByteArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsByteArray(value));
  WRITE_FIELD(*this, kSigIdsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSigIdsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
template<class D, class P>
Tagged<ExternalPointerArray> TorqueGeneratedWasmIndirectFunctionTable<D, P>::targets() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmIndirectFunctionTable::targets(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
template<class D, class P>
Tagged<ExternalPointerArray> TorqueGeneratedWasmIndirectFunctionTable<D, P>::targets(PtrComprCageBase cage_base) const {
  Tagged<ExternalPointerArray> value = TaggedField<Tagged<ExternalPointerArray>>::load(cage_base, *this, kTargetsOffset);
  DCHECK(IsExternalPointerArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_targets(Tagged<ExternalPointerArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsExternalPointerArray(value));
  WRITE_FIELD(*this, kTargetsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedWasmIndirectFunctionTable<D, P>::refs() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmIndirectFunctionTable::refs(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedWasmIndirectFunctionTable<D, P>::refs(PtrComprCageBase cage_base) const {
  Tagged<FixedArray> value = TaggedField<Tagged<FixedArray>>::load(cage_base, *this, kRefsOffset);
  DCHECK(IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=100&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_refs(Tagged<FixedArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArray(value));
  WRITE_FIELD(*this, kRefsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRefsOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=3
template<class D, class P>
uint32_t TorqueGeneratedWasmIndirectFunctionTable<D, P>::size() const {
  uint32_t value = this->template ReadField<uint32_t>(kSizeOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=101&c=3
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_size(uint32_t value) {
  this->template WriteField<uint32_t>(kSizeOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=28
template<class D, class P>
uint32_t TorqueGeneratedWasmIndirectFunctionTable<D, P>::optional_padding() const {
  uint32_t value = this->template ReadField<uint32_t>(kOptionalPaddingOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=28
template<class D, class P>
void TorqueGeneratedWasmIndirectFunctionTable<D, P>::set_optional_padding(uint32_t value) {
  this->template WriteField<uint32_t>(kOptionalPaddingOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmIndirectFunctionTable<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmIndirectFunctionTable<D, P>::TorqueGeneratedWasmIndirectFunctionTable(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmIndirectFunctionTable_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedWasmContinuationObject<D, P>::stack() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmContinuationObject::stack(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
template<class D, class P>
Tagged<Foreign> TorqueGeneratedWasmContinuationObject<D, P>::stack(PtrComprCageBase cage_base) const {
  Tagged<Foreign> value = TaggedField<Tagged<Foreign>>::load(cage_base, *this, kStackOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=107&c=3
template<class D, class P>
void TorqueGeneratedWasmContinuationObject<D, P>::set_stack(Tagged<Foreign> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsForeign(value));
  WRITE_FIELD(*this, kStackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStackOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmContinuationObject<D, P>::parent() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmContinuationObject::parent(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmContinuationObject<D, P>::parent(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kParentOffset);
  DCHECK(IsUndefined(value) || IsWasmContinuationObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=3
template<class D, class P>
void TorqueGeneratedWasmContinuationObject<D, P>::set_parent(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmContinuationObject(value));
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=106&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmContinuationObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmContinuationObject<D, P>::TorqueGeneratedWasmContinuationObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmContinuationObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=113&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::continuation() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::continuation(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=113&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::continuation(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kContinuationOffset);
  DCHECK(IsUndefined(value) || IsWasmContinuationObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=113&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_continuation(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmContinuationObject(value));
  WRITE_FIELD(*this, kContinuationOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContinuationOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::parent() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::parent(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::parent(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kParentOffset);
  DCHECK(IsUndefined(value) || IsWasmSuspenderObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=114&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_parent(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmSuspenderObject(value));
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=115&c=3
template<class D, class P>
Tagged<JSPromise> TorqueGeneratedWasmSuspenderObject<D, P>::promise() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::promise(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=115&c=3
template<class D, class P>
Tagged<JSPromise> TorqueGeneratedWasmSuspenderObject<D, P>::promise(PtrComprCageBase cage_base) const {
  Tagged<JSPromise> value = TaggedField<Tagged<JSPromise>>::load(cage_base, *this, kPromiseOffset);
  DCHECK(IsJSPromise(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=115&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_promise(Tagged<JSPromise> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSPromise(value));
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::resume() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::resume(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::resume(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kResumeOffset);
  DCHECK(IsUndefined(value) || IsJSObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_resume(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsJSObject(value));
  WRITE_FIELD(*this, kResumeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kResumeOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::reject() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmSuspenderObject::reject(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmSuspenderObject<D, P>::reject(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kRejectOffset);
  DCHECK(IsUndefined(value) || IsJSObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=117&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_reject(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsJSObject(value));
  WRITE_FIELD(*this, kRejectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
template<class D, class P>
int TorqueGeneratedWasmSuspenderObject<D, P>::state() const {
  int value = TaggedField<Smi>::load(*this, kStateOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=118&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_state(int value) {
  WRITE_FIELD(*this, kStateOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=122&c=3
template<class D, class P>
uint32_t TorqueGeneratedWasmSuspenderObject<D, P>::wasm_to_js_counter() const {
  uint32_t value = this->template ReadField<uint32_t>(kWasmToJsCounterOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=122&c=3
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_wasm_to_js_counter(uint32_t value) {
  this->template WriteField<uint32_t>(kWasmToJsCounterOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=28
template<class D, class P>
uint32_t TorqueGeneratedWasmSuspenderObject<D, P>::optional_padding() const {
  uint32_t value = this->template ReadField<uint32_t>(kOptionalPaddingOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=123&c=28
template<class D, class P>
void TorqueGeneratedWasmSuspenderObject<D, P>::set_optional_padding(uint32_t value) {
  this->template WriteField<uint32_t>(kOptionalPaddingOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=112&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmSuspenderObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmSuspenderObject<D, P>::TorqueGeneratedWasmSuspenderObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmSuspenderObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
template<class D, class P>
int TorqueGeneratedWasmExceptionTag<D, P>::index() const {
  int value = TaggedField<Smi>::load(*this, kIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=3
template<class D, class P>
void TorqueGeneratedWasmExceptionTag<D, P>::set_index(int value) {
  WRITE_FIELD(*this, kIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=127&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmExceptionTag<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmExceptionTag<D, P>::TorqueGeneratedWasmExceptionTag(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmExceptionTag_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=137&c=3
template<class D, class P>
Tagged<Managed<wasm::NativeModule>> TorqueGeneratedWasmModuleObject<D, P>::managed_native_module() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmModuleObject::managed_native_module(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=137&c=3
template<class D, class P>
Tagged<Managed<wasm::NativeModule>> TorqueGeneratedWasmModuleObject<D, P>::managed_native_module(PtrComprCageBase cage_base) const {
  Tagged<Managed<wasm::NativeModule>> value = TaggedField<Tagged<Managed<wasm::NativeModule>>>::load(cage_base, *this, kManagedNativeModuleOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=137&c=3
template<class D, class P>
void TorqueGeneratedWasmModuleObject<D, P>::set_managed_native_module(Tagged<Managed<wasm::NativeModule>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsForeign(value));
  WRITE_FIELD(*this, kManagedNativeModuleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kManagedNativeModuleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=3
template<class D, class P>
Tagged<Script> TorqueGeneratedWasmModuleObject<D, P>::script() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmModuleObject::script(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=3
template<class D, class P>
Tagged<Script> TorqueGeneratedWasmModuleObject<D, P>::script(PtrComprCageBase cage_base) const {
  Tagged<Script> value = TaggedField<Tagged<Script>>::load(cage_base, *this, kScriptOffset);
  DCHECK(IsScript(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=138&c=3
template<class D, class P>
void TorqueGeneratedWasmModuleObject<D, P>::set_script(Tagged<Script> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsScript(value));
  WRITE_FIELD(*this, kScriptOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=136&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmModuleObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmModuleObject<D, P>::TorqueGeneratedWasmModuleObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmModuleObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmTableObject<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmTableObject<D, P>::instance(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kInstanceOffset);
  DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_instance(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedWasmTableObject<D, P>::entries() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::entries(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedWasmTableObject<D, P>::entries(PtrComprCageBase cage_base) const {
  Tagged<FixedArray> value = TaggedField<Tagged<FixedArray>>::load(cage_base, *this, kEntriesOffset);
  DCHECK(IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=149&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_entries(Tagged<FixedArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArray(value));
  WRITE_FIELD(*this, kEntriesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEntriesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
template<class D, class P>
int TorqueGeneratedWasmTableObject<D, P>::current_length() const {
  int value = TaggedField<Smi>::load(*this, kCurrentLengthOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=150&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_current_length(int value) {
  WRITE_FIELD(*this, kCurrentLengthOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedWasmTableObject<D, P>::maximum_length() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::maximum_length(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedWasmTableObject<D, P>::maximum_length(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kMaximumLengthOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_maximum_length(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsSmi(value) || IsHeapNumber(value) || IsUndefined(value));
  WRITE_FIELD(*this, kMaximumLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMaximumLengthOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedWasmTableObject<D, P>::dispatch_tables() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTableObject::dispatch_tables(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedWasmTableObject<D, P>::dispatch_tables(PtrComprCageBase cage_base) const {
  Tagged<FixedArray> value = TaggedField<Tagged<FixedArray>>::load(cage_base, *this, kDispatchTablesOffset);
  DCHECK(IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_dispatch_tables(Tagged<FixedArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArray(value));
  WRITE_FIELD(*this, kDispatchTablesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDispatchTablesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
template<class D, class P>
int TorqueGeneratedWasmTableObject<D, P>::raw_type() const {
  int value = TaggedField<Smi>::load(*this, kRawTypeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
template<class D, class P>
void TorqueGeneratedWasmTableObject<D, P>::set_raw_type(int value) {
  WRITE_FIELD(*this, kRawTypeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmTableObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmTableObject<D, P>::TorqueGeneratedWasmTableObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmTableObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
template<class D, class P>
Tagged<JSArrayBuffer> TorqueGeneratedWasmMemoryObject<D, P>::array_buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmMemoryObject::array_buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
template<class D, class P>
Tagged<JSArrayBuffer> TorqueGeneratedWasmMemoryObject<D, P>::array_buffer(PtrComprCageBase cage_base) const {
  Tagged<JSArrayBuffer> value = TaggedField<Tagged<JSArrayBuffer>>::load(cage_base, *this, kArrayBufferOffset);
  DCHECK(IsJSArrayBuffer(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_array_buffer(Tagged<JSArrayBuffer> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSArrayBuffer(value));
  WRITE_FIELD(*this, kArrayBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArrayBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=158&c=3
template<class D, class P>
int TorqueGeneratedWasmMemoryObject<D, P>::maximum_pages() const {
  int value = TaggedField<Smi>::load(*this, kMaximumPagesOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=158&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_maximum_pages(int value) {
  WRITE_FIELD(*this, kMaximumPagesOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=3
template<class D, class P>
int TorqueGeneratedWasmMemoryObject<D, P>::is_memory64() const {
  int value = TaggedField<Smi>::load(*this, kIsMemory64Offset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=159&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_is_memory64(int value) {
  WRITE_FIELD(*this, kIsMemory64Offset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmMemoryObject<D, P>::instances() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmMemoryObject::instances(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmMemoryObject<D, P>::instances(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kInstancesOffset);
  DCHECK(IsUndefined(value) || IsWeakArrayList(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=160&c=3
template<class D, class P>
void TorqueGeneratedWasmMemoryObject<D, P>::set_instances(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWeakArrayList(value));
  WRITE_FIELD(*this, kInstancesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstancesOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmMemoryObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmMemoryObject<D, P>::TorqueGeneratedWasmMemoryObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmMemoryObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmGlobalObject<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmGlobalObject::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmGlobalObject<D, P>::instance(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kInstanceOffset);
  DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_instance(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmGlobalObject<D, P>::untagged_buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmGlobalObject::untagged_buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmGlobalObject<D, P>::untagged_buffer(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kUntaggedBufferOffset);
  DCHECK(IsUndefined(value) || IsJSArrayBuffer(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=169&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_untagged_buffer(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsJSArrayBuffer(value));
  WRITE_FIELD(*this, kUntaggedBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUntaggedBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=170&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmGlobalObject<D, P>::tagged_buffer() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmGlobalObject::tagged_buffer(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=170&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmGlobalObject<D, P>::tagged_buffer(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kTaggedBufferOffset);
  DCHECK(IsUndefined(value) || IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=170&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_tagged_buffer(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsFixedArray(value));
  WRITE_FIELD(*this, kTaggedBufferOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTaggedBufferOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=171&c=3
template<class D, class P>
int TorqueGeneratedWasmGlobalObject<D, P>::offset() const {
  int value = TaggedField<Smi>::load(*this, kOffsetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=171&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_offset(int value) {
  WRITE_FIELD(*this, kOffsetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=3
template<class D, class P>
int TorqueGeneratedWasmGlobalObject<D, P>::raw_type() const {
  int value = TaggedField<Smi>::load(*this, kRawTypeOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=172&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_raw_type(int value) {
  WRITE_FIELD(*this, kRawTypeOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
template<class D, class P>
int TorqueGeneratedWasmGlobalObject<D, P>::is_mutable() const {
  int value = TaggedField<Smi>::load(*this, kIsMutableOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
template<class D, class P>
void TorqueGeneratedWasmGlobalObject<D, P>::set_is_mutable(int value) {
  WRITE_FIELD(*this, kIsMutableOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=163&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmGlobalObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmGlobalObject<D, P>::TorqueGeneratedWasmGlobalObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmGlobalObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=179&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmTagObject<D, P>::serialized_signature() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTagObject::serialized_signature(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=179&c=3
template<class D, class P>
Tagged<PodArray<wasm::ValueType>> TorqueGeneratedWasmTagObject<D, P>::serialized_signature(PtrComprCageBase cage_base) const {
  Tagged<PodArray<wasm::ValueType>> value = TaggedField<Tagged<PodArray<wasm::ValueType>>>::load(cage_base, *this, kSerializedSignatureOffset);
  DCHECK(IsByteArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=179&c=3
template<class D, class P>
void TorqueGeneratedWasmTagObject<D, P>::set_serialized_signature(Tagged<PodArray<wasm::ValueType>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsByteArray(value));
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmTagObject<D, P>::tag() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTagObject::tag(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmTagObject<D, P>::tag(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kTagOffset);
  DCHECK(IsHeapObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=3
template<class D, class P>
void TorqueGeneratedWasmTagObject<D, P>::set_tag(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsHeapObject(value));
  WRITE_FIELD(*this, kTagOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTagOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=181&c=3
template<class D, class P>
int TorqueGeneratedWasmTagObject<D, P>::canonical_type_index() const {
  int value = TaggedField<Smi>::load(*this, kCanonicalTypeIndexOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=181&c=3
template<class D, class P>
void TorqueGeneratedWasmTagObject<D, P>::set_canonical_type_index(int value) {
  WRITE_FIELD(*this, kCanonicalTypeIndexOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=178&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmTagObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmTagObject<D, P>::TorqueGeneratedWasmTagObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmTagObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=187&c=3
template<class D, class P>
Tagged<Managed<wasm::NativeModule>> TorqueGeneratedAsmWasmData<D, P>::managed_native_module() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsmWasmData::managed_native_module(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=187&c=3
template<class D, class P>
Tagged<Managed<wasm::NativeModule>> TorqueGeneratedAsmWasmData<D, P>::managed_native_module(PtrComprCageBase cage_base) const {
  Tagged<Managed<wasm::NativeModule>> value = TaggedField<Tagged<Managed<wasm::NativeModule>>>::load(cage_base, *this, kManagedNativeModuleOffset);
  DCHECK(IsForeign(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=187&c=3
template<class D, class P>
void TorqueGeneratedAsmWasmData<D, P>::set_managed_native_module(Tagged<Managed<wasm::NativeModule>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsForeign(value));
  WRITE_FIELD(*this, kManagedNativeModuleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kManagedNativeModuleOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=188&c=3
template<class D, class P>
Tagged<HeapNumber> TorqueGeneratedAsmWasmData<D, P>::uses_bitset() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedAsmWasmData::uses_bitset(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=188&c=3
template<class D, class P>
Tagged<HeapNumber> TorqueGeneratedAsmWasmData<D, P>::uses_bitset(PtrComprCageBase cage_base) const {
  Tagged<HeapNumber> value = TaggedField<Tagged<HeapNumber>>::load(cage_base, *this, kUsesBitsetOffset);
  DCHECK(IsHeapNumber(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=188&c=3
template<class D, class P>
void TorqueGeneratedAsmWasmData<D, P>::set_uses_bitset(Tagged<HeapNumber> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsHeapNumber(value));
  WRITE_FIELD(*this, kUsesBitsetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUsesBitsetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=186&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedAsmWasmData<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedAsmWasmData<D, P>::TorqueGeneratedAsmWasmData(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsAsmWasmData_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=201&c=3
template<class D, class P>
uint32_t TorqueGeneratedWasmTypeInfo<D, P>::type_index() const {
  uint32_t value = this->template ReadField<uint32_t>(kTypeIndexOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=201&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_type_index(uint32_t value) {
  this->template WriteField<uint32_t>(kTypeIndexOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=202&c=28
template<class D, class P>
uint32_t TorqueGeneratedWasmTypeInfo<D, P>::optional_padding() const {
  uint32_t value = this->template ReadField<uint32_t>(kOptionalPaddingOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=202&c=28
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_optional_padding(uint32_t value) {
  this->template WriteField<uint32_t>(kOptionalPaddingOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=205&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmTypeInfo<D, P>::instance() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTypeInfo::instance(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=205&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedWasmTypeInfo<D, P>::instance(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kInstanceOffset);
  DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=205&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_instance(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsWasmInstanceObject(value));
  WRITE_FIELD(*this, kInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=206&c=9
template<class D, class P>
int TorqueGeneratedWasmTypeInfo<D, P>::supertypes_length() const {
  int value = TaggedField<Smi>::load(*this, kSupertypesLengthOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=206&c=9
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_supertypes_length(int value) {
  WRITE_FIELD(*this, kSupertypesLengthOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedWasmTypeInfo<D, P>::supertypes(int i) const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedWasmTypeInfo::supertypes(cage_base, i);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedWasmTypeInfo<D, P>::supertypes(PtrComprCageBase cage_base, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->supertypes_length());
  int offset = kSupertypesOffset + i * kTaggedSize;
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, offset);
  DCHECK(IsHeapObject(value) || IsSmi(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
template<class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_supertypes(int i, Tagged<Object> value, WriteBarrierMode mode) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->supertypes_length());
  int offset = kSupertypesOffset + i * kTaggedSize;
  SLOW_DCHECK(IsHeapObject(value) || IsSmi(value));
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=191&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmTypeInfo<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmTypeInfo<D, P>::TorqueGeneratedWasmTypeInfo(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmTypeInfo_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=214&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmObject<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmObject<D, P>::TorqueGeneratedWasmObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmObject_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=217&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmStruct<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmStruct<D, P>::TorqueGeneratedWasmStruct(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmStruct_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=222&c=3
template<class D, class P>
uint32_t TorqueGeneratedWasmArray<D, P>::length() const {
  uint32_t value = this->template ReadField<uint32_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=222&c=3
template<class D, class P>
void TorqueGeneratedWasmArray<D, P>::set_length(uint32_t value) {
  this->template WriteField<uint32_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=224&c=28
template<class D, class P>
uint32_t TorqueGeneratedWasmArray<D, P>::optional_padding() const {
  uint32_t value = this->template ReadField<uint32_t>(kOptionalPaddingOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=224&c=28
template<class D, class P>
void TorqueGeneratedWasmArray<D, P>::set_optional_padding(uint32_t value) {
  this->template WriteField<uint32_t>(kOptionalPaddingOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=220&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedWasmArray<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedWasmArray<D, P>::TorqueGeneratedWasmArray(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsWasmArray_NonInline(*this));
}
