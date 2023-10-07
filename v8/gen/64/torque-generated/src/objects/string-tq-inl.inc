// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=134&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqOneByteStringChars(SeqOneByteString p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=139&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqTwoByteStringChars(SeqTwoByteString p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=73&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(int31_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=210&c=1
inline intptr_t TqRuntimeConvert_intptr_int32_0(int32_t p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=8&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=134&c=9
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char8_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=937&c=26
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char16_0(Object p_object, intptr_t p_offset, intptr_t p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=79&c=1
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_intptr_0(intptr_t p_i);

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=134&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqOneByteStringChars(SeqOneByteString p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(12);
  tmp1 = (p_o).ReadField<int32_t>(tmp0);
  tmp2 = TqRuntimeConvert_intptr_int32_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x10ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewConstSlice_char8_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=139&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqTwoByteStringChars(SeqTwoByteString p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  int32_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(12);
  tmp1 = (p_o).ReadField<int32_t>(tmp0);
  tmp2 = TqRuntimeConvert_intptr_int32_0(tmp1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_IntegerLiteral_0(IntegerLiteral(false, 0x10ull));
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewConstSlice_char16_0(p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::make_tuple(tmp4, tmp5, tmp6);
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars
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
#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/convert.tq?l=210&c=1
intptr_t TqRuntimeConvert_intptr_int32_0(int32_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(p_i);
  goto block2;

  block2:
  return tmp0;
}

#endif // V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
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
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=134&c=9
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char8_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
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

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0
#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm.tq?l=937&c=26
std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char16_0(Object p_object, intptr_t p_offset, intptr_t p_length) {
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

#endif // V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0
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
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=46&c=9
template<class D, class P>
int32_t TorqueGeneratedString<D, P>::length() const {
  int32_t value = this->template ReadField<int32_t>(kLengthOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=46&c=9
template<class D, class P>
void TorqueGeneratedString<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=7&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=77&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedConsString<D, P>::first() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedConsString::first(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=77&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedConsString<D, P>::first(PtrComprCageBase cage_base) const {
  Tagged<String> value = TaggedField<Tagged<String>>::load(cage_base, *this, kFirstOffset);
  DCHECK(IsString(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=77&c=3
template<class D, class P>
void TorqueGeneratedConsString<D, P>::set_first(Tagged<String> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value));
  WRITE_FIELD(*this, kFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFirstOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedConsString<D, P>::second() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedConsString::second(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedConsString<D, P>::second(PtrComprCageBase cage_base) const {
  Tagged<String> value = TaggedField<Tagged<String>>::load(cage_base, *this, kSecondOffset);
  DCHECK(IsString(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
template<class D, class P>
void TorqueGeneratedConsString<D, P>::set_second(Tagged<String> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value));
  WRITE_FIELD(*this, kSecondOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecondOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=65&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedConsString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsConsString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=81&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedExternalString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedExternalString<D, P>::TorqueGeneratedExternalString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExternalString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=103&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedExternalOneByteString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedExternalOneByteString<D, P>::TorqueGeneratedExternalOneByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExternalOneByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedExternalTwoByteString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedExternalTwoByteString<D, P>::TorqueGeneratedExternalTwoByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsExternalTwoByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=125&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedInternalizedString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsInternalizedString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=128&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedSeqString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSeqString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=134&c=9
template<class D, class P>
char TorqueGeneratedSeqOneByteString<D, P>::chars(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt8Size;
  char value = this->template ReadField<char>(offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=134&c=9
template<class D, class P>
void TorqueGeneratedSeqOneByteString<D, P>::set_chars(int i, char value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt8Size;
  this->template WriteField<char>(offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=131&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedSeqOneByteString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSeqOneByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=139&c=9
template<class D, class P>
char16_t TorqueGeneratedSeqTwoByteString<D, P>::chars(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt16Size;
  char16_t value = this->template ReadField<char16_t>(offset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=139&c=9
template<class D, class P>
void TorqueGeneratedSeqTwoByteString<D, P>::set_chars(int i, char16_t value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this ->length());
  int offset = kCharsOffset + i * kUInt16Size;
  this->template WriteField<char16_t>(offset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=136&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedSeqTwoByteString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSeqTwoByteString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=145&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedSlicedString<D, P>::parent() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedSlicedString::parent(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=145&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedSlicedString<D, P>::parent(PtrComprCageBase cage_base) const {
  Tagged<String> value = TaggedField<Tagged<String>>::load(cage_base, *this, kParentOffset);
  DCHECK(IsString(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=145&c=3
template<class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_parent(Tagged<String> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value));
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=146&c=3
template<class D, class P>
int TorqueGeneratedSlicedString<D, P>::offset() const {
  int value = TaggedField<Smi>::load(*this, kOffsetOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=146&c=3
template<class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_offset(int value) {
  WRITE_FIELD(*this, kOffsetOffset, Smi::FromInt(value));
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=142&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedSlicedString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsSlicedString_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=152&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedThinString<D, P>::actual() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedThinString::actual(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=152&c=3
template<class D, class P>
Tagged<String> TorqueGeneratedThinString<D, P>::actual(PtrComprCageBase cage_base) const {
  Tagged<String> value = TaggedField<Tagged<String>>::load(cage_base, *this, kActualOffset);
  DCHECK(IsString(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=152&c=3
template<class D, class P>
void TorqueGeneratedThinString<D, P>::set_actual(Tagged<String> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsString(value));
  WRITE_FIELD(*this, kActualOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kActualOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=149&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedThinString<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsThinString_NonInline(*this));
}
