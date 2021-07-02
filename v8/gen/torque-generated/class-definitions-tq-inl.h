#ifndef V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_

#include "torque-generated/class-definitions-tq.h"

#include "src/objects/objects-inl.h"


// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
template <class D, class P>
Smi TorqueGeneratedFixedArrayBase<D, P>::length() const {
  return Smi::cast(READ_FIELD(*this, kLengthOffset));
}
template <class D, class P>
void TorqueGeneratedFixedArrayBase<D, P>::set_length(Smi value) {
  DCHECK(value.IsSmi());
  WRITE_FIELD(*this, kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedFixedArrayBase<D, P>::TorqueGeneratedFixedArrayBase(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsFixedArrayBase());
}
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
  Object value = READ_FIELD(*this, kToStringOffset);
  return String::cast(value);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kToStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToStringOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number() const {
  Object value = READ_FIELD(*this, kToNumberOffset);
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
  Object value = READ_FIELD(*this, kTypeOfOffset);
  return String::cast(value);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_type_of(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kTypeOfOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTypeOfOffset, value, mode);
}

template <class D, class P>
Smi TorqueGeneratedOddball<D, P>::kind() const {
  return Smi::cast(READ_FIELD(*this, kKindOffset));
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
template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(this->IsStruct());
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1() const {
  Object value = READ_FIELD(*this, kValue1Offset);
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
  Object value = READ_FIELD(*this, kValue2Offset);
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
  Object value = READ_FIELD(*this, kValue3Offset);
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
}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_INL_H_
