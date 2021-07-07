#ifndef V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_

#include "torque-generated/class-definitions-tq.h"

#include "src/objects/js-promise.h"
#include "src/objects/module.h"
#include "src/objects/objects-inl.h"
#include "src/objects/script.h"
#include "src/objects/shared-function-info.h"


// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
template <class D, class P>
double TorqueGeneratedOddball<D, P>::to_number_raw() const {
  return this->template ReadField<double>(kToNumberRawOffset);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_number_raw(double value) {
  this->template WriteField<double>(kToNumberRawOffset, value);
}

template <class D, class P>
String TorqueGeneratedOddball<D, P>::to_string() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::to_string(isolate);
}
template <class D, class P>
String TorqueGeneratedOddball<D, P>::to_string(Isolate* isolate) const {
  return TaggedField<String, kToStringOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kToStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToStringOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::to_number(isolate);
}
template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number(Isolate* isolate) const {
  Object value = TaggedField<Object, kToNumberOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_number(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kToNumberOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToNumberOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedOddball<D, P>::type_of() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::type_of(isolate);
}
template <class D, class P>
String TorqueGeneratedOddball<D, P>::type_of(Isolate* isolate) const {
  return TaggedField<String, kTypeOfOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_type_of(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kTypeOfOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTypeOfOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedOddball<D, P>::kind() const {
  return TaggedField<Smi, kKindOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_kind(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kKindOffset, value);
}

template<class D, class P>
inline TorqueGeneratedOddball<D, P>::TorqueGeneratedOddball(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsOddball());
}
template <class D, class P>
int32_t TorqueGeneratedSymbol<D, P>::flags() const {
  return this->template ReadField<int32_t>(kFlagsOffset);
}
template <class D, class P>
void TorqueGeneratedSymbol<D, P>::set_flags(int32_t value) {
  this->template WriteField<int32_t>(kFlagsOffset, value);
}

template <class D, class P>
Object TorqueGeneratedSymbol<D, P>::name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSymbol::name(isolate);
}
template <class D, class P>
Object TorqueGeneratedSymbol<D, P>::name(Isolate* isolate) const {
  Object value = TaggedField<Object, kNameOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedSymbol<D, P>::set_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSymbol<D, P>::TorqueGeneratedSymbol(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSymbol());
}
template <class D, class P>
uint32_t TorqueGeneratedName<D, P>::hash_field() const {
  return this->template ReadField<uint32_t>(kHashFieldOffset);
}
template <class D, class P>
void TorqueGeneratedName<D, P>::set_hash_field(uint32_t value) {
  this->template WriteField<uint32_t>(kHashFieldOffset, value);
}

template<class D, class P>
inline TorqueGeneratedName<D, P>::TorqueGeneratedName(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsName());
}
template <class D, class P>
int32_t TorqueGeneratedString<D, P>::length() const {
  return this->template ReadField<int32_t>(kLengthOffset);
}
template <class D, class P>
void TorqueGeneratedString<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsString());
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::first() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedConsString::first(isolate);
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::first(Isolate* isolate) const {
  return TaggedField<String, kFirstOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedConsString<D, P>::set_first(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFirstOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedConsString<D, P>::second() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedConsString::second(isolate);
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::second(Isolate* isolate) const {
  return TaggedField<String, kSecondOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedConsString<D, P>::set_second(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kSecondOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecondOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsConsString());
}
template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsInternalizedString());
}
template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSeqString());
}
template <class D, class P>
char TorqueGeneratedSeqOneByteString<D, P>::chars() const {
  return this->template ReadField<char>(kCharsOffset);
}
template <class D, class P>
void TorqueGeneratedSeqOneByteString<D, P>::set_chars(char value) {
  this->template WriteField<char>(kCharsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSeqOneByteString());
}
template <class D, class P>
char16_t TorqueGeneratedSeqTwoByteString<D, P>::chars() const {
  return this->template ReadField<char16_t>(kCharsOffset);
}
template <class D, class P>
void TorqueGeneratedSeqTwoByteString<D, P>::set_chars(char16_t value) {
  this->template WriteField<char16_t>(kCharsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSeqTwoByteString());
}
template <class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSlicedString::parent(isolate);
}
template <class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent(Isolate* isolate) const {
  return TaggedField<String, kParentOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_parent(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSlicedString<D, P>::offset() const {
  return TaggedField<Smi, kOffsetOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_offset(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kOffsetOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSlicedString());
}
template <class D, class P>
String TorqueGeneratedThinString<D, P>::actual() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedThinString::actual(isolate);
}
template <class D, class P>
String TorqueGeneratedThinString<D, P>::actual(Isolate* isolate) const {
  return TaggedField<String, kActualOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedThinString<D, P>::set_actual(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kActualOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kActualOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsThinString());
}
template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsStruct());
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple2::value1(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1(Isolate* isolate) const {
  Object value = TaggedField<Object, kValue1Offset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value1(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValue1Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue1Offset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple2::value2(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2(Isolate* isolate) const {
  Object value = TaggedField<Object, kValue2Offset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value2(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValue2Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue2Offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTuple2<D, P>::TorqueGeneratedTuple2(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
Object TorqueGeneratedTuple3<D, P>::value3() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple3::value3(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple3<D, P>::value3(Isolate* isolate) const {
  Object value = TaggedField<Object, kValue3Offset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple3<D, P>::set_value3(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValue3Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue3Offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTuple3<D, P>::TorqueGeneratedTuple3(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::keys() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedEnumCache::keys(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::keys(Isolate* isolate) const {
  return TaggedField<FixedArray, kKeysOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedEnumCache<D, P>::set_keys(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kKeysOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeysOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::indices() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedEnumCache::indices(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::indices(Isolate* isolate) const {
  return TaggedField<FixedArray, kIndicesOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedEnumCache<D, P>::set_indices(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kIndicesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndicesOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedEnumCache<D, P>::TorqueGeneratedEnumCache(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsEnumCache());
}
template <class D, class P>
ByteArray TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::source_position_table() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourcePositionTableWithFrameCache::source_position_table(isolate);
}
template <class D, class P>
ByteArray TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::source_position_table(Isolate* isolate) const {
  return TaggedField<ByteArray, kSourcePositionTableOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::set_source_position_table(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kSourcePositionTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourcePositionTableOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::stack_frame_cache() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourcePositionTableWithFrameCache::stack_frame_cache(isolate);
}
template <class D, class P>
Object TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::stack_frame_cache(Isolate* isolate) const {
  Object value = TaggedField<Object, kStackFrameCacheOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::set_stack_frame_cache(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kStackFrameCacheOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStackFrameCacheOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSourcePositionTableWithFrameCache<D, P>::TorqueGeneratedSourcePositionTableWithFrameCache(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSourcePositionTableWithFrameCache());
}
template <class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSObject::elements(isolate);
}
template <class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements(Isolate* isolate) const {
  return TaggedField<FixedArrayBase, kElementsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSObject<D, P>::set_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kElementsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSObject<D, P>::TorqueGeneratedJSObject(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::target() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSProxy::target(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::target(Isolate* isolate) const {
  return TaggedField<HeapObject, kTargetOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNull() || value.IsJSReceiver());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSProxy::handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::handler(Isolate* isolate) const {
  return TaggedField<HeapObject, kHandlerOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNull() || value.IsJSReceiver());
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSProxy());
}
template <class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGlobalProxy::native_context(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context(Isolate* isolate) const {
  Object value = TaggedField<Object, kNativeContextOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGlobalProxy<D, P>::set_native_context(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSGlobalProxy<D, P>::TorqueGeneratedJSGlobalProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSGlobalProxy());
}
template <class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPrimitiveWrapper::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value(Isolate* isolate) const {
  Object value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPrimitiveWrapper<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSPrimitiveWrapper<D, P>::TorqueGeneratedJSPrimitiveWrapper(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSPrimitiveWrapper());
}
template<class D, class P>
inline TorqueGeneratedJSArgumentsObject<D, P>::TorqueGeneratedJSArgumentsObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSArgumentsObject());
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::callback() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::callback(Isolate* isolate) const {
  Object value = TaggedField<Object, kCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::js_callback() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::js_callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::js_callback(Isolate* isolate) const {
  Object value = TaggedField<Object, kJsCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_js_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kJsCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kJsCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data(Isolate* isolate) const {
  Object value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallHandlerInfo<D, P>::TorqueGeneratedCallHandlerInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsCallHandlerInfo());
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::code() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::code(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::code(Isolate* isolate) const {
  return TaggedField<HeapObject, kCodeOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_code(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSourceTextModuleInfo() || value.IsJSFunction() || value.IsJSGeneratorObject() || value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_exports() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::regular_exports(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_exports(Isolate* isolate) const {
  return TaggedField<FixedArray, kRegularExportsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_regular_exports(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRegularExportsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRegularExportsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_imports() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::regular_imports(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_imports(Isolate* isolate) const {
  return TaggedField<FixedArray, kRegularImportsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_regular_imports(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRegularImportsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRegularImportsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::requested_modules() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::requested_modules(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::requested_modules(Isolate* isolate) const {
  return TaggedField<FixedArray, kRequestedModulesOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_requested_modules(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRequestedModulesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRequestedModulesOffset, value, mode);
}

template <class D, class P>
Script TorqueGeneratedSourceTextModule<D, P>::script() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::script(isolate);
}
template <class D, class P>
Script TorqueGeneratedSourceTextModule<D, P>::script(Isolate* isolate) const {
  return TaggedField<Script, kScriptOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_script(Script value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsScript());
  WRITE_FIELD(*this, kScriptOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::import_meta() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::import_meta(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::import_meta(Isolate* isolate) const {
  return TaggedField<HeapObject, kImportMetaOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_import_meta(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsTheHole() || value.IsJSObject());
  WRITE_FIELD(*this, kImportMetaOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kImportMetaOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSourceTextModule<D, P>::dfs_index() const {
  return TaggedField<Smi, kDfsIndexOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_dfs_index(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kDfsIndexOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSourceTextModule<D, P>::dfs_ancestor_index() const {
  return TaggedField<Smi, kDfsAncestorIndexOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_dfs_ancestor_index(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kDfsAncestorIndexOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSourceTextModule<D, P>::TorqueGeneratedSourceTextModule(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSourceTextModule());
}
template <class D, class P>
String TorqueGeneratedSyntheticModule<D, P>::name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSyntheticModule::name(isolate);
}
template <class D, class P>
String TorqueGeneratedSyntheticModule<D, P>::name(Isolate* isolate) const {
  return TaggedField<String, kNameOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSyntheticModule<D, P>::set_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSyntheticModule<D, P>::export_names() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSyntheticModule::export_names(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSyntheticModule<D, P>::export_names(Isolate* isolate) const {
  return TaggedField<FixedArray, kExportNamesOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSyntheticModule<D, P>::set_export_names(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kExportNamesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExportNamesOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedSyntheticModule<D, P>::evaluation_steps() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSyntheticModule::evaluation_steps(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedSyntheticModule<D, P>::evaluation_steps(Isolate* isolate) const {
  return TaggedField<Foreign, kEvaluationStepsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSyntheticModule<D, P>::set_evaluation_steps(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kEvaluationStepsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEvaluationStepsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSyntheticModule<D, P>::TorqueGeneratedSyntheticModule(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSyntheticModule());
}
template <class D, class P>
Module TorqueGeneratedJSModuleNamespace<D, P>::module() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSModuleNamespace::module(isolate);
}
template <class D, class P>
Module TorqueGeneratedJSModuleNamespace<D, P>::module(Isolate* isolate) const {
  return TaggedField<Module, kModuleOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSModuleNamespace<D, P>::set_module(Module value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsModule());
  WRITE_FIELD(*this, kModuleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kModuleOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSModuleNamespace<D, P>::TorqueGeneratedJSModuleNamespace(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSModuleNamespace());
}
template <class D, class P>
Object TorqueGeneratedJSWeakCollection<D, P>::table() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSWeakCollection::table(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSWeakCollection<D, P>::table(Isolate* isolate) const {
  Object value = TaggedField<Object, kTableOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSWeakCollection<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSWeakCollection<D, P>::TorqueGeneratedJSWeakCollection(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSWeakCollection());
}
template<class D, class P>
inline TorqueGeneratedJSWeakSet<D, P>::TorqueGeneratedJSWeakSet(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSWeakSet());
}
template<class D, class P>
inline TorqueGeneratedJSWeakMap<D, P>::TorqueGeneratedJSWeakMap(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSWeakMap());
}
template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::table() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollectionIterator::table(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::table(Isolate* isolate) const {
  Object value = TaggedField<Object, kTableOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollectionIterator<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::index() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollectionIterator::index(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::index(Isolate* isolate) const {
  Object value = TaggedField<Object, kIndexOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollectionIterator<D, P>::set_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSCollectionIterator<D, P>::TorqueGeneratedJSCollectionIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSCollectionIterator());
}
template <class D, class P>
Smi TorqueGeneratedEmbedderDataArray<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedEmbedderDataArray<D, P>::set_length(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedEmbedderDataArray<D, P>::TorqueGeneratedEmbedderDataArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsEmbedderDataArray());
}
template <class D, class P>
String TorqueGeneratedUncompiledData<D, P>::inferred_name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedUncompiledData::inferred_name(isolate);
}
template <class D, class P>
String TorqueGeneratedUncompiledData<D, P>::inferred_name(Isolate* isolate) const {
  return TaggedField<String, kInferredNameOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_inferred_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kInferredNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInferredNameOffset, value, mode);
}

template <class D, class P>
int32_t TorqueGeneratedUncompiledData<D, P>::start_position() const {
  return this->template ReadField<int32_t>(kStartPositionOffset);
}
template <class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_start_position(int32_t value) {
  this->template WriteField<int32_t>(kStartPositionOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedUncompiledData<D, P>::end_position() const {
  return this->template ReadField<int32_t>(kEndPositionOffset);
}
template <class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_end_position(int32_t value) {
  this->template WriteField<int32_t>(kEndPositionOffset, value);
}

template<class D, class P>
inline TorqueGeneratedUncompiledData<D, P>::TorqueGeneratedUncompiledData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsUncompiledData());
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseData<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsUncompiledDataWithoutPreparseData());
}
template <class D, class P>
PreparseData TorqueGeneratedUncompiledDataWithPreparseData<D, P>::preparse_data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedUncompiledDataWithPreparseData::preparse_data(isolate);
}
template <class D, class P>
PreparseData TorqueGeneratedUncompiledDataWithPreparseData<D, P>::preparse_data(Isolate* isolate) const {
  return TaggedField<PreparseData, kPreparseDataOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedUncompiledDataWithPreparseData<D, P>::set_preparse_data(PreparseData value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsPreparseData());
  WRITE_FIELD(*this, kPreparseDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPreparseDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseData<D, P>::TorqueGeneratedUncompiledDataWithPreparseData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsUncompiledDataWithPreparseData());
}
template <class D, class P>
JSReceiver TorqueGeneratedJSBoundFunction<D, P>::bound_target_function() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSBoundFunction::bound_target_function(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedJSBoundFunction<D, P>::bound_target_function(Isolate* isolate) const {
  return TaggedField<JSReceiver, kBoundTargetFunctionOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_target_function(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundTargetFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundTargetFunctionOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSBoundFunction<D, P>::bound_this() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSBoundFunction::bound_this(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSBoundFunction<D, P>::bound_this(Isolate* isolate) const {
  Object value = TaggedField<Object, kBoundThisOffset>::load(isolate, *this);
  DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_this(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  WRITE_FIELD(*this, kBoundThisOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundThisOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedJSBoundFunction<D, P>::bound_arguments() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSBoundFunction::bound_arguments(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedJSBoundFunction<D, P>::bound_arguments(Isolate* isolate) const {
  return TaggedField<FixedArray, kBoundArgumentsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSBoundFunction<D, P>::set_bound_arguments(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kBoundArgumentsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundArgumentsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSBoundFunction<D, P>::TorqueGeneratedJSBoundFunction(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSBoundFunction());
}
template <class D, class P>
Object TorqueGeneratedJSCollection<D, P>::table() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollection::table(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSCollection<D, P>::table(Isolate* isolate) const {
  Object value = TaggedField<Object, kTableOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollection<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSCollection<D, P>::TorqueGeneratedJSCollection(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSCollection());
}
template<class D, class P>
inline TorqueGeneratedJSSet<D, P>::TorqueGeneratedJSSet(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSSet());
}
template<class D, class P>
inline TorqueGeneratedJSMap<D, P>::TorqueGeneratedJSMap(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSMap());
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::value() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::value(Isolate* isolate) const {
  Object value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsHeapNumber());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::year() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::year(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::year(Isolate* isolate) const {
  Object value = TaggedField<Object, kYearOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_year(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kYearOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kYearOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::month() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::month(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::month(Isolate* isolate) const {
  Object value = TaggedField<Object, kMonthOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_month(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kMonthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMonthOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::day() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::day(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::day(Isolate* isolate) const {
  Object value = TaggedField<Object, kDayOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_day(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kDayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDayOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::weekday() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::weekday(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::weekday(Isolate* isolate) const {
  Object value = TaggedField<Object, kWeekdayOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_weekday(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kWeekdayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWeekdayOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::hour() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::hour(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::hour(Isolate* isolate) const {
  Object value = TaggedField<Object, kHourOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_hour(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kHourOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHourOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::min() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::min(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::min(Isolate* isolate) const {
  Object value = TaggedField<Object, kMinOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_min(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kMinOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMinOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::sec() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::sec(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::sec(Isolate* isolate) const {
  Object value = TaggedField<Object, kSecOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_sec(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kSecOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::cache_stamp() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::cache_stamp(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::cache_stamp(Isolate* isolate) const {
  Object value = TaggedField<Object, kCacheStampOffset>::load(isolate, *this);
  DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_cache_stamp(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNaN() || value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kCacheStampOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCacheStampOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSDate<D, P>::TorqueGeneratedJSDate(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSDate());
}
template <class D, class P>
JSReceiver TorqueGeneratedJSAsyncFromSyncIterator<D, P>::sync_iterator() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncFromSyncIterator::sync_iterator(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedJSAsyncFromSyncIterator<D, P>::sync_iterator(Isolate* isolate) const {
  return TaggedField<JSReceiver, kSyncIteratorOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSAsyncFromSyncIterator<D, P>::set_sync_iterator(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kSyncIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSyncIteratorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSAsyncFromSyncIterator<D, P>::next() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncFromSyncIterator::next(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSAsyncFromSyncIterator<D, P>::next(Isolate* isolate) const {
  Object value = TaggedField<Object, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSAsyncFromSyncIterator<D, P>::set_next(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSAsyncFromSyncIterator<D, P>::TorqueGeneratedJSAsyncFromSyncIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSAsyncFromSyncIterator());
}
template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::tag() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateInfo::tag(isolate);
}
template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::tag(Isolate* isolate) const {
  Object value = TaggedField<Object, kTagOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_tag(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kTagOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTagOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::serial_number() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateInfo::serial_number(isolate);
}
template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::serial_number(Isolate* isolate) const {
  Object value = TaggedField<Object, kSerialNumberOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_serial_number(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kSerialNumberOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerialNumberOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedTemplateInfo<D, P>::number_of_properties() const {
  return TaggedField<Smi, kNumberOfPropertiesOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_number_of_properties(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kNumberOfPropertiesOffset, value);
}

template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::property_list() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateInfo::property_list(isolate);
}
template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::property_list(Isolate* isolate) const {
  Object value = TaggedField<Object, kPropertyListOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_property_list(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kPropertyListOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPropertyListOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::property_accessors() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateInfo::property_accessors(isolate);
}
template <class D, class P>
Object TorqueGeneratedTemplateInfo<D, P>::property_accessors(Isolate* isolate) const {
  Object value = TaggedField<Object, kPropertyAccessorsOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_property_accessors(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kPropertyAccessorsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPropertyAccessorsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTemplateInfo<D, P>::TorqueGeneratedTemplateInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsTemplateInfo());
}
template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateObjectDescription::raw_strings(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings(Isolate* isolate) const {
  return TaggedField<FixedArray, kRawStringsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_raw_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRawStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRawStringsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateObjectDescription::cooked_strings(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings(Isolate* isolate) const {
  return TaggedField<FixedArray, kCookedStringsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_cooked_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kCookedStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCookedStringsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTemplateObjectDescription<D, P>::TorqueGeneratedTemplateObjectDescription(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsTemplateObjectDescription());
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_template() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::prototype_template(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_template(Isolate* isolate) const {
  Object value = TaggedField<Object, kPrototypeTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_prototype_template(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kPrototypeTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeTemplateOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_provider_template() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::prototype_provider_template(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_provider_template(Isolate* isolate) const {
  Object value = TaggedField<Object, kPrototypeProviderTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_prototype_provider_template(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kPrototypeProviderTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeProviderTemplateOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::parent_template() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::parent_template(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::parent_template(Isolate* isolate) const {
  Object value = TaggedField<Object, kParentTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_parent_template(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kParentTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentTemplateOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::named_property_handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::named_property_handler(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::named_property_handler(Isolate* isolate) const {
  Object value = TaggedField<Object, kNamedPropertyHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_named_property_handler(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kNamedPropertyHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamedPropertyHandlerOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::indexed_property_handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::indexed_property_handler(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::indexed_property_handler(Isolate* isolate) const {
  Object value = TaggedField<Object, kIndexedPropertyHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_indexed_property_handler(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kIndexedPropertyHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexedPropertyHandlerOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::instance_template() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::instance_template(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::instance_template(Isolate* isolate) const {
  Object value = TaggedField<Object, kInstanceTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_instance_template(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kInstanceTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceTemplateOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::instance_call_handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::instance_call_handler(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::instance_call_handler(Isolate* isolate) const {
  Object value = TaggedField<Object, kInstanceCallHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_instance_call_handler(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kInstanceCallHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceCallHandlerOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::access_check_info() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::access_check_info(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::access_check_info(Isolate* isolate) const {
  Object value = TaggedField<Object, kAccessCheckInfoOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_access_check_info(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kAccessCheckInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAccessCheckInfoOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedFunctionTemplateRareData<D, P>::TorqueGeneratedFunctionTemplateRareData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsFunctionTemplateRareData());
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::call_code() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::call_code(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::call_code(Isolate* isolate) const {
  Object value = TaggedField<Object, kCallCodeOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_call_code(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kCallCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallCodeOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::class_name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::class_name(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::class_name(Isolate* isolate) const {
  Object value = TaggedField<Object, kClassNameOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_class_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kClassNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kClassNameOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::signature() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::signature(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::signature(Isolate* isolate) const {
  Object value = TaggedField<Object, kSignatureOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_signature(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSignatureOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::rare_data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::rare_data(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::rare_data(Isolate* isolate) const {
  return TaggedField<HeapObject, kRareDataOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_rare_data(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kRareDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRareDataOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::shared_function_info() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::shared_function_info(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::shared_function_info(Isolate* isolate) const {
  Object value = TaggedField<Object, kSharedFunctionInfoOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_shared_function_info(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kSharedFunctionInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfoOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedFunctionTemplateInfo<D, P>::flag() const {
  return TaggedField<Smi, kFlagOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_flag(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kFlagOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedFunctionTemplateInfo<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_length(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::cached_property_name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::cached_property_name(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::cached_property_name(Isolate* isolate) const {
  Object value = TaggedField<Object, kCachedPropertyNameOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_cached_property_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kCachedPropertyNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCachedPropertyNameOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedFunctionTemplateInfo<D, P>::TorqueGeneratedFunctionTemplateInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsFunctionTemplateInfo());
}
template <class D, class P>
Object TorqueGeneratedObjectTemplateInfo<D, P>::constructor() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedObjectTemplateInfo::constructor(isolate);
}
template <class D, class P>
Object TorqueGeneratedObjectTemplateInfo<D, P>::constructor(Isolate* isolate) const {
  Object value = TaggedField<Object, kConstructorOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedObjectTemplateInfo<D, P>::set_constructor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kConstructorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstructorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedObjectTemplateInfo<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedObjectTemplateInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedObjectTemplateInfo<D, P>::data(Isolate* isolate) const {
  Object value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedObjectTemplateInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedObjectTemplateInfo<D, P>::TorqueGeneratedObjectTemplateInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsObjectTemplateInfo());
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::getter() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::getter(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::getter(Isolate* isolate) const {
  Object value = TaggedField<Object, kGetterOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::setter() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::setter(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::setter(Isolate* isolate) const {
  Object value = TaggedField<Object, kSetterOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_setter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kSetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::query() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::query(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::query(Isolate* isolate) const {
  Object value = TaggedField<Object, kQueryOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_query(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kQueryOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kQueryOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::descriptor() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::descriptor(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::descriptor(Isolate* isolate) const {
  Object value = TaggedField<Object, kDescriptorOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_descriptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kDescriptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDescriptorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::deleter() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::deleter(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::deleter(Isolate* isolate) const {
  Object value = TaggedField<Object, kDeleterOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_deleter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kDeleterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDeleterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::enumerator() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::enumerator(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::enumerator(Isolate* isolate) const {
  Object value = TaggedField<Object, kEnumeratorOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_enumerator(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kEnumeratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEnumeratorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::definer() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::definer(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::definer(Isolate* isolate) const {
  Object value = TaggedField<Object, kDefinerOffset>::load(isolate, *this);
  DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_definer(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNonNullForeign() || value.IsUndefined() || value.IsZero());
  WRITE_FIELD(*this, kDefinerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDefinerOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::data(Isolate* isolate) const {
  Object value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedInterceptorInfo<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_flags(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kFlagsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedInterceptorInfo<D, P>::TorqueGeneratedInterceptorInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsInterceptorInfo());
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::callback() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::callback(Isolate* isolate) const {
  Object value = TaggedField<Object, kCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::named_interceptor(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor(Isolate* isolate) const {
  Object value = TaggedField<Object, kNamedInterceptorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_named_interceptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kNamedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamedInterceptorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::indexed_interceptor(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor(Isolate* isolate) const {
  Object value = TaggedField<Object, kIndexedInterceptorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_indexed_interceptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kIndexedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexedInterceptorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::data(Isolate* isolate) const {
  Object value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAccessCheckInfo<D, P>::TorqueGeneratedAccessCheckInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsAccessCheckInfo());
}
template <class D, class P>
Smi TorqueGeneratedArrayBoilerplateDescription<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_flags(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kFlagsOffset, value);
}

template <class D, class P>
FixedArrayBase TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedArrayBoilerplateDescription::constant_elements(isolate);
}
template <class D, class P>
FixedArrayBase TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements(Isolate* isolate) const {
  return TaggedField<FixedArrayBase, kConstantElementsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_constant_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kConstantElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantElementsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedArrayBoilerplateDescription<D, P>::TorqueGeneratedArrayBoilerplateDescription(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsArrayBoilerplateDescription());
}
template <class D, class P>
Smi TorqueGeneratedAliasedArgumentsEntry<D, P>::aliased_context_slot() const {
  return TaggedField<Smi, kAliasedContextSlotOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedAliasedArgumentsEntry<D, P>::set_aliased_context_slot(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kAliasedContextSlotOffset, value);
}

template<class D, class P>
inline TorqueGeneratedAliasedArgumentsEntry<D, P>::TorqueGeneratedAliasedArgumentsEntry(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsAliasedArgumentsEntry());
}
template <class D, class P>
Object TorqueGeneratedCell<D, P>::value() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCell::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedCell<D, P>::value(Isolate* isolate) const {
  Object value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedCell<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCell<D, P>::TorqueGeneratedCell(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsCell());
}
template <class D, class P>
JSFunction TorqueGeneratedJSGeneratorObject<D, P>::function() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::function(isolate);
}
template <class D, class P>
JSFunction TorqueGeneratedJSGeneratorObject<D, P>::function(Isolate* isolate) const {
  return TaggedField<JSFunction, kFunctionOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_function(JSFunction value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSFunction());
  WRITE_FIELD(*this, kFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionOffset, value, mode);
}

template <class D, class P>
Context TorqueGeneratedJSGeneratorObject<D, P>::context() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedJSGeneratorObject<D, P>::context(Isolate* isolate) const {
  return TaggedField<Context, kContextOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::receiver() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::receiver(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::receiver(Isolate* isolate) const {
  Object value = TaggedField<Object, kReceiverOffset>::load(isolate, *this);
  DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_receiver(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::input_or_debug_pos() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::input_or_debug_pos(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::input_or_debug_pos(Isolate* isolate) const {
  Object value = TaggedField<Object, kInputOrDebugPosOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_input_or_debug_pos(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kInputOrDebugPosOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInputOrDebugPosOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedJSGeneratorObject<D, P>::resume_mode() const {
  return TaggedField<Smi, kResumeModeOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_resume_mode(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kResumeModeOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedJSGeneratorObject<D, P>::continuation() const {
  return TaggedField<Smi, kContinuationOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_continuation(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kContinuationOffset, value);
}

template <class D, class P>
FixedArray TorqueGeneratedJSGeneratorObject<D, P>::parameters_and_registers() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::parameters_and_registers(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedJSGeneratorObject<D, P>::parameters_and_registers(Isolate* isolate) const {
  return TaggedField<FixedArray, kParametersAndRegistersOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_parameters_and_registers(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kParametersAndRegistersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParametersAndRegistersOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSGeneratorObject<D, P>::TorqueGeneratedJSGeneratorObject(Address ptr)
  : P(ptr) {
  // Instance check omitted because class is annotated with @dirtyInstantiatedAbstractClass.
}
template <class D, class P>
JSPromise TorqueGeneratedJSAsyncFunctionObject<D, P>::promise() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncFunctionObject::promise(isolate);
}
template <class D, class P>
JSPromise TorqueGeneratedJSAsyncFunctionObject<D, P>::promise(Isolate* isolate) const {
  return TaggedField<JSPromise, kPromiseOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSAsyncFunctionObject<D, P>::set_promise(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSAsyncFunctionObject<D, P>::TorqueGeneratedJSAsyncFunctionObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSAsyncFunctionObject());
}
template <class D, class P>
HeapObject TorqueGeneratedJSAsyncGeneratorObject<D, P>::queue() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncGeneratorObject::queue(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSAsyncGeneratorObject<D, P>::queue(Isolate* isolate) const {
  return TaggedField<HeapObject, kQueueOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSAsyncGeneratorObject<D, P>::set_queue(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kQueueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kQueueOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedJSAsyncGeneratorObject<D, P>::is_awaiting() const {
  return TaggedField<Smi, kIsAwaitingOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedJSAsyncGeneratorObject<D, P>::set_is_awaiting(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kIsAwaitingOffset, value);
}

template<class D, class P>
inline TorqueGeneratedJSAsyncGeneratorObject<D, P>::TorqueGeneratedJSAsyncGeneratorObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSAsyncGeneratorObject());
}
template <class D, class P>
Object TorqueGeneratedJSPromise<D, P>::reactions_or_result() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPromise::reactions_or_result(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSPromise<D, P>::reactions_or_result(Isolate* isolate) const {
  Object value = TaggedField<Object, kReactionsOrResultOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_reactions_or_result(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kReactionsOrResultOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReactionsOrResultOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedJSPromise<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_flags(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kFlagsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedJSPromise<D, P>::TorqueGeneratedJSPromise(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSPromise());
}
template<class D, class P>
inline TorqueGeneratedMicrotask<D, P>::TorqueGeneratedMicrotask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsMicrotask());
}
template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::callback() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallbackTask::callback(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::callback(Isolate* isolate) const {
  return TaggedField<Foreign, kCallbackOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedCallbackTask<D, P>::set_callback(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallbackTask::data(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::data(Isolate* isolate) const {
  return TaggedField<Foreign, kDataOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedCallbackTask<D, P>::set_data(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallbackTask<D, P>::TorqueGeneratedCallbackTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsCallbackTask());
}
template <class D, class P>
JSReceiver TorqueGeneratedCallableTask<D, P>::callable() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallableTask::callable(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedCallableTask<D, P>::callable(Isolate* isolate) const {
  return TaggedField<JSReceiver, kCallableOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedCallableTask<D, P>::set_callable(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCallableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallableOffset, value, mode);
}

template <class D, class P>
Context TorqueGeneratedCallableTask<D, P>::context() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallableTask::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedCallableTask<D, P>::context(Isolate* isolate) const {
  return TaggedField<Context, kContextOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedCallableTask<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallableTask<D, P>::TorqueGeneratedCallableTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsCallableTask());
}
template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_array() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackTraceFrame::frame_array(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_array(Isolate* isolate) const {
  return TaggedField<HeapObject, kFrameArrayOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_frame_array(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFrameArray() || value.IsUndefined());
  WRITE_FIELD(*this, kFrameArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFrameArrayOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedStackTraceFrame<D, P>::frame_index() const {
  return TaggedField<Smi, kFrameIndexOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_frame_index(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kFrameIndexOffset, value);
}

template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_info() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackTraceFrame::frame_info(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_info(Isolate* isolate) const {
  return TaggedField<HeapObject, kFrameInfoOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_frame_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsStackFrameInfo());
  WRITE_FIELD(*this, kFrameInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFrameInfoOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedStackTraceFrame<D, P>::id() const {
  return TaggedField<Smi, kIdOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_id(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kIdOffset, value);
}

template<class D, class P>
inline TorqueGeneratedStackTraceFrame<D, P>::TorqueGeneratedStackTraceFrame(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsStackTraceFrame());
}
template <class D, class P>
Smi TorqueGeneratedClassPositions<D, P>::start() const {
  return TaggedField<Smi, kStartOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedClassPositions<D, P>::set_start(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kStartOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedClassPositions<D, P>::end() const {
  return TaggedField<Smi, kEndOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedClassPositions<D, P>::set_end(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kEndOffset, value);
}

template<class D, class P>
inline TorqueGeneratedClassPositions<D, P>::TorqueGeneratedClassPositions(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsClassPositions());
}
template <class D, class P>
Smi TorqueGeneratedWasmExceptionTag<D, P>::index() const {
  return TaggedField<Smi, kIndexOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedWasmExceptionTag<D, P>::set_index(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kIndexOffset, value);
}

template<class D, class P>
inline TorqueGeneratedWasmExceptionTag<D, P>::TorqueGeneratedWasmExceptionTag(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsWasmExceptionTag());
}
template <class D, class P>
HeapObject TorqueGeneratedAsyncGeneratorRequest<D, P>::next() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAsyncGeneratorRequest::next(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedAsyncGeneratorRequest<D, P>::next(Isolate* isolate) const {
  return TaggedField<HeapObject, kNextOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsAsyncGeneratorRequest());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedAsyncGeneratorRequest<D, P>::resume_mode() const {
  return TaggedField<Smi, kResumeModeOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_resume_mode(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kResumeModeOffset, value);
}

template <class D, class P>
Object TorqueGeneratedAsyncGeneratorRequest<D, P>::value() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAsyncGeneratorRequest::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedAsyncGeneratorRequest<D, P>::value(Isolate* isolate) const {
  Object value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template <class D, class P>
JSPromise TorqueGeneratedAsyncGeneratorRequest<D, P>::promise() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAsyncGeneratorRequest::promise(isolate);
}
template <class D, class P>
JSPromise TorqueGeneratedAsyncGeneratorRequest<D, P>::promise(Isolate* isolate) const {
  return TaggedField<JSPromise, kPromiseOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_promise(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAsyncGeneratorRequest<D, P>::TorqueGeneratedAsyncGeneratorRequest(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsAsyncGeneratorRequest());
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::export_name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModuleInfoEntry::export_name(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::export_name(Isolate* isolate) const {
  return TaggedField<HeapObject, kExportNameOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_export_name(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  WRITE_FIELD(*this, kExportNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExportNameOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::local_name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModuleInfoEntry::local_name(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::local_name(Isolate* isolate) const {
  return TaggedField<HeapObject, kLocalNameOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_local_name(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  WRITE_FIELD(*this, kLocalNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocalNameOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::import_name() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModuleInfoEntry::import_name(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::import_name(Isolate* isolate) const {
  return TaggedField<HeapObject, kImportNameOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_import_name(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  WRITE_FIELD(*this, kImportNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kImportNameOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSourceTextModuleInfoEntry<D, P>::module_request() const {
  return TaggedField<Smi, kModuleRequestOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_module_request(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kModuleRequestOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSourceTextModuleInfoEntry<D, P>::cell_index() const {
  return TaggedField<Smi, kCellIndexOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_cell_index(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kCellIndexOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSourceTextModuleInfoEntry<D, P>::beg_pos() const {
  return TaggedField<Smi, kBegPosOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_beg_pos(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kBegPosOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSourceTextModuleInfoEntry<D, P>::end_pos() const {
  return TaggedField<Smi, kEndPosOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_end_pos(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kEndPosOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSourceTextModuleInfoEntry<D, P>::TorqueGeneratedSourceTextModuleInfoEntry(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSourceTextModuleInfoEntry());
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseCapability<D, P>::promise() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseCapability::promise(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseCapability<D, P>::promise(Isolate* isolate) const {
  return TaggedField<HeapObject, kPromiseOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_promise(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSReceiver());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::resolve() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseCapability::resolve(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::resolve(Isolate* isolate) const {
  Object value = TaggedField<Object, kResolveOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_resolve(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kResolveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kResolveOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::reject() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseCapability::reject(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::reject(Isolate* isolate) const {
  Object value = TaggedField<Object, kRejectOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_reject(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kRejectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseCapability<D, P>::TorqueGeneratedPromiseCapability(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsPromiseCapability());
}
template <class D, class P>
Object TorqueGeneratedPromiseReaction<D, P>::next() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::next(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseReaction<D, P>::next(Isolate* isolate) const {
  Object value = TaggedField<Object, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsPromiseReaction());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_next(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsPromiseReaction());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::reject_handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::reject_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::reject_handler(Isolate* isolate) const {
  return TaggedField<HeapObject, kRejectHandlerOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_reject_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsUndefined() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kRejectHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::fulfill_handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::fulfill_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::fulfill_handler(Isolate* isolate) const {
  return TaggedField<HeapObject, kFulfillHandlerOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_fulfill_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsUndefined() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kFulfillHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFulfillHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::promise_or_capability() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::promise_or_capability(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::promise_or_capability(Isolate* isolate) const {
  return TaggedField<HeapObject, kPromiseOrCapabilityOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_promise_or_capability(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSPromise() || value.IsPromiseCapability());
  WRITE_FIELD(*this, kPromiseOrCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOrCapabilityOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseReaction<D, P>::TorqueGeneratedPromiseReaction(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsPromiseReaction());
}
template <class D, class P>
Object TorqueGeneratedPromiseReactionJobTask<D, P>::argument() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::argument(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseReactionJobTask<D, P>::argument(Isolate* isolate) const {
  Object value = TaggedField<Object, kArgumentOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_argument(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapObject());
  WRITE_FIELD(*this, kArgumentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArgumentOffset, value, mode);
}

template <class D, class P>
Context TorqueGeneratedPromiseReactionJobTask<D, P>::context() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedPromiseReactionJobTask<D, P>::context(Isolate* isolate) const {
  return TaggedField<Context, kContextOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::handler() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::handler(Isolate* isolate) const {
  return TaggedField<HeapObject, kHandlerOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsUndefined() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::promise_or_capability() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::promise_or_capability(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::promise_or_capability(Isolate* isolate) const {
  return TaggedField<HeapObject, kPromiseOrCapabilityOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_promise_or_capability(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSPromise() || value.IsPromiseCapability());
  WRITE_FIELD(*this, kPromiseOrCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOrCapabilityOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseReactionJobTask<D, P>::TorqueGeneratedPromiseReactionJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsPromiseReactionJobTask());
}
template<class D, class P>
inline TorqueGeneratedPromiseFulfillReactionJobTask<D, P>::TorqueGeneratedPromiseFulfillReactionJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsPromiseFulfillReactionJobTask());
}
template<class D, class P>
inline TorqueGeneratedPromiseRejectReactionJobTask<D, P>::TorqueGeneratedPromiseRejectReactionJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsPromiseRejectReactionJobTask());
}
template <class D, class P>
Context TorqueGeneratedPromiseResolveThenableJobTask<D, P>::context() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedPromiseResolveThenableJobTask<D, P>::context(Isolate* isolate) const {
  return TaggedField<Context, kContextOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
JSPromise TorqueGeneratedPromiseResolveThenableJobTask<D, P>::promise_to_resolve() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::promise_to_resolve(isolate);
}
template <class D, class P>
JSPromise TorqueGeneratedPromiseResolveThenableJobTask<D, P>::promise_to_resolve(Isolate* isolate) const {
  return TaggedField<JSPromise, kPromiseToResolveOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_promise_to_resolve(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseToResolveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseToResolveOffset, value, mode);
}

template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::then() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::then(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::then(Isolate* isolate) const {
  return TaggedField<JSReceiver, kThenOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_then(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kThenOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kThenOffset, value, mode);
}

template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::thenable() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::thenable(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::thenable(Isolate* isolate) const {
  return TaggedField<JSReceiver, kThenableOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_thenable(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kThenableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kThenableOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseResolveThenableJobTask<D, P>::TorqueGeneratedPromiseResolveThenableJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsPromiseResolveThenableJobTask());
}
template <class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::data() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExp::data(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::data(Isolate* isolate) const {
  return TaggedField<HeapObject, kDataOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_data(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::source() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExp::source(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::source(Isolate* isolate) const {
  return TaggedField<HeapObject, kSourceOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_source(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsString());
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSRegExp<D, P>::flags() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExp::flags(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSRegExp<D, P>::flags(Isolate* isolate) const {
  Object value = TaggedField<Object, kFlagsOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_flags(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined());
  WRITE_FIELD(*this, kFlagsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFlagsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSRegExp<D, P>::TorqueGeneratedJSRegExp(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSRegExp());
}
template <class D, class P>
Object TorqueGeneratedJSRegExpStringIterator<D, P>::iterating_reg_exp() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExpStringIterator::iterating_reg_exp(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSRegExpStringIterator<D, P>::iterating_reg_exp(Isolate* isolate) const {
  Object value = TaggedField<Object, kIteratingRegExpOffset>::load(isolate, *this);
  DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExpStringIterator<D, P>::set_iterating_reg_exp(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsBigInt() || value.IsFalse() || value.IsNull() || value.IsSmi() || value.IsTrue() || value.IsUndefined() || value.IsHeapNumber() || value.IsJSReceiver() || value.IsString() || value.IsSymbol());
  WRITE_FIELD(*this, kIteratingRegExpOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratingRegExpOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedJSRegExpStringIterator<D, P>::iterated_string() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExpStringIterator::iterated_string(isolate);
}
template <class D, class P>
String TorqueGeneratedJSRegExpStringIterator<D, P>::iterated_string(Isolate* isolate) const {
  return TaggedField<String, kIteratedStringOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedJSRegExpStringIterator<D, P>::set_iterated_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kIteratedStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratedStringOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedJSRegExpStringIterator<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedJSRegExpStringIterator<D, P>::set_flags(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kFlagsOffset, value);
}

template<class D, class P>
inline TorqueGeneratedJSRegExpStringIterator<D, P>::TorqueGeneratedJSRegExpStringIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsJSRegExpStringIterator());
}
template <class D, class P>
Smi TorqueGeneratedInternalClass<D, P>::a() const {
  return TaggedField<Smi, kAOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_a(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kAOffset, value);
}

template <class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInternalClass::b(isolate);
}
template <class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b(Isolate* isolate) const {
  Object value = TaggedField<Object, kBOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_b(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kBOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedInternalClass<D, P>::TorqueGeneratedInternalClass(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsInternalClass());
}
template <class D, class P>
Smi TorqueGeneratedSmiPair<D, P>::a() const {
  return TaggedField<Smi, kAOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_a(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kAOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSmiPair<D, P>::b() const {
  return TaggedField<Smi, kBOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_b(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kBOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSmiPair<D, P>::TorqueGeneratedSmiPair(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSmiPair());
}
template <class D, class P>
Smi TorqueGeneratedSmiBox<D, P>::value() const {
  return TaggedField<Smi, kValueOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_value(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSmiBox<D, P>::unrelated() const {
  return TaggedField<Smi, kUnrelatedOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_unrelated(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kUnrelatedOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSmiBox<D, P>::TorqueGeneratedSmiBox(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSmiBox());
}
template <class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::receiver(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver(Isolate* isolate) const {
  return TaggedField<JSReceiver, kReceiverOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_receiver(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

template <class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::initialReceiverMap(isolate);
}
template <class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap(Isolate* isolate) const {
  return TaggedField<Map, kInitialReceiverMapOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverMap(Map value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsMap());
  WRITE_FIELD(*this, kInitialReceiverMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverMapOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::initialReceiverLength(isolate);
}
template <class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength(Isolate* isolate) const {
  Object value = TaggedField<Object, kInitialReceiverLengthOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverLength(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kInitialReceiverLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverLengthOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSortState<D, P>::userCmpFn() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::userCmpFn(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSortState<D, P>::userCmpFn(Isolate* isolate) const {
  return TaggedField<HeapObject, kUserCmpFnOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_userCmpFn(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsUndefined() || value.IsJSBoundFunction() || value.IsJSFunction());
  WRITE_FIELD(*this, kUserCmpFnOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUserCmpFnOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::sortComparePtr() const {
  return TaggedField<Smi, kSortComparePtrOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortComparePtr(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kSortComparePtrOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::loadFn() const {
  return TaggedField<Smi, kLoadFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_loadFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kLoadFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::storeFn() const {
  return TaggedField<Smi, kStoreFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_storeFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kStoreFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::deleteFn() const {
  return TaggedField<Smi, kDeleteFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_deleteFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kDeleteFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::canUseSameAccessorFn() const {
  return TaggedField<Smi, kCanUseSameAccessorFnOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_canUseSameAccessorFn(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kCanUseSameAccessorFnOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::minGallop() const {
  return TaggedField<Smi, kMinGallopOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_minGallop(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kMinGallopOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::pendingRunsSize() const {
  return TaggedField<Smi, kPendingRunsSizeOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRunsSize(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kPendingRunsSizeOffset, value);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::pendingRuns(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns(Isolate* isolate) const {
  return TaggedField<FixedArray, kPendingRunsOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRuns(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kPendingRunsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPendingRunsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::workArray(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray(Isolate* isolate) const {
  return TaggedField<FixedArray, kWorkArrayOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_workArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kWorkArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWorkArrayOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray() const {
  Isolate* isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::tempArray(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray(Isolate* isolate) const {
  return TaggedField<FixedArray, kTempArrayOffset>::load(isolate, *this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_tempArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kTempArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTempArrayOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::sortLength() const {
  return TaggedField<Smi, kSortLengthOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortLength(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kSortLengthOffset, value);
}

template <class D, class P>
Smi TorqueGeneratedSortState<D, P>::numberOfUndefined() const {
  return TaggedField<Smi, kNumberOfUndefinedOffset>::load(*this);
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_numberOfUndefined(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kNumberOfUndefinedOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSortState<D, P>::TorqueGeneratedSortState(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsSortState());
}
}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_
