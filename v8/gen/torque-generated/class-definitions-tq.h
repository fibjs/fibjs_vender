#ifndef V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_H_

#include "src/objects/heap-number.h"
#include "src/objects/objects.h"
#include "src/objects/smi.h"
#include "torque-generated/field-offsets-tq.h"
#include <type_traits>


// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
using BuiltinPtr = Smi;

class FixedArrayBase;

template <class D, class P>
class TorqueGeneratedFixedArrayBase : public P {
  static_assert(std::is_same<FixedArrayBase, D>::value,
    "Use this class as direct base for FixedArrayBase.");
  static_assert(std::is_same<HeapObject, P>::value,
    "Pass in HeapObject as second template parameter for TorqueGeneratedFixedArrayBase.");
public: 
  using Super = P;
  inline Smi length() const;
  inline void set_length(Smi value);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize;
  static constexpr int kEndOfStrongFieldsOffset = kLengthOffsetEnd;
  static constexpr int kStartOfWeakFieldsOffset = kLengthOffsetEnd;
  static constexpr int kEndOfWeakFieldsOffset = kLengthOffsetEnd;
  static constexpr int kHeaderSize = kLengthOffsetEnd;

public:
  template <class DAlias = D>
  constexpr TorqueGeneratedFixedArrayBase() : P() {
    static_assert(std::is_base_of<TorqueGeneratedFixedArrayBase, 
      DAlias>::value,
      "class TorqueGeneratedFixedArrayBase should be used as direct base for FixedArrayBase.");
  }
  D* operator->() { return static_cast<D*>(this); }
  const D* operator->() const { return static_cast<const D*>(this); }

protected:
  inline explicit TorqueGeneratedFixedArrayBase(Address ptr);
};

class Oddball;

template <class D, class P>
class TorqueGeneratedOddball : public P {
  static_assert(std::is_same<Oddball, D>::value,
    "Use this class as direct base for Oddball.");
  static_assert(std::is_same<HeapObject, P>::value,
    "Pass in HeapObject as second template parameter for TorqueGeneratedOddball.");
public: 
  using Super = P;
  inline double to_number_raw() const;
  inline void set_to_number_raw(double value);

  inline String to_string() const;
  inline void set_to_string(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: Number
  inline Object to_number() const;
  inline void set_to_number(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline String type_of() const;
  inline void set_type_of(String value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline Smi kind() const;
  inline void set_kind(Smi value);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void OddballVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kToNumberRawOffset = P::kHeaderSize;
  static constexpr int kToNumberRawOffsetEnd = kToNumberRawOffset + kDoubleSize;
  static constexpr int kStartOfStrongFieldsOffset = kToNumberRawOffsetEnd;
  static constexpr int kToStringOffset = kToNumberRawOffsetEnd;
  static constexpr int kToStringOffsetEnd = kToStringOffset + kTaggedSize;
  static constexpr int kToNumberOffset = kToStringOffsetEnd;
  static constexpr int kToNumberOffsetEnd = kToNumberOffset + kTaggedSize;
  static constexpr int kTypeOfOffset = kToNumberOffsetEnd;
  static constexpr int kTypeOfOffsetEnd = kTypeOfOffset + kTaggedSize;
  static constexpr int kKindOffset = kTypeOfOffsetEnd;
  static constexpr int kKindOffsetEnd = kKindOffset + kTaggedSize;
  static constexpr int kEndOfStrongFieldsOffset = kKindOffsetEnd;
  static constexpr int kStartOfWeakFieldsOffset = kKindOffsetEnd;
  static constexpr int kEndOfWeakFieldsOffset = kKindOffsetEnd;
  static constexpr int kSize = kKindOffsetEnd;

public:
  template <class DAlias = D>
  constexpr TorqueGeneratedOddball() : P() {
    static_assert(std::is_base_of<TorqueGeneratedOddball, 
      DAlias>::value,
      "class TorqueGeneratedOddball should be used as direct base for Oddball.");
  }
  D* operator->() { return static_cast<D*>(this); }
  const D* operator->() const { return static_cast<const D*>(this); }

protected:
  inline explicit TorqueGeneratedOddball(Address ptr);
};

class Struct;

template <class D, class P>
class TorqueGeneratedStruct : public P {
  static_assert(std::is_same<Struct, D>::value,
    "Use this class as direct base for Struct.");
  static_assert(std::is_same<HeapObject, P>::value,
    "Pass in HeapObject as second template parameter for TorqueGeneratedStruct.");
public: 
  using Super = P;
  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Struct)

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;

public:
  template <class DAlias = D>
  constexpr TorqueGeneratedStruct() : P() {
    static_assert(std::is_base_of<TorqueGeneratedStruct, 
      DAlias>::value,
      "class TorqueGeneratedStruct should be used as direct base for Struct.");
  }
  D* operator->() { return static_cast<D*>(this); }
  const D* operator->() const { return static_cast<const D*>(this); }

protected:
  inline explicit TorqueGeneratedStruct(Address ptr);
};

class Tuple2;

template <class D, class P>
class TorqueGeneratedTuple2 : public P {
  static_assert(std::is_same<Tuple2, D>::value,
    "Use this class as direct base for Tuple2.");
  static_assert(std::is_same<Struct, P>::value,
    "Pass in Struct as second template parameter for TorqueGeneratedTuple2.");
public: 
  using Super = P;
  inline Object value1() const;
  inline void set_value1(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline Object value2() const;
  inline void set_value2(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Tuple2)
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void Tuple2Verify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kValue1Offset = P::kHeaderSize;
  static constexpr int kValue1OffsetEnd = kValue1Offset + kTaggedSize;
  static constexpr int kValue2Offset = kValue1OffsetEnd;
  static constexpr int kValue2OffsetEnd = kValue2Offset + kTaggedSize;
  static constexpr int kEndOfStrongFieldsOffset = kValue2OffsetEnd;
  static constexpr int kStartOfWeakFieldsOffset = kValue2OffsetEnd;
  static constexpr int kEndOfWeakFieldsOffset = kValue2OffsetEnd;
  static constexpr int kHeaderSize = kValue2OffsetEnd;
  static constexpr int kSize = kValue2OffsetEnd;

public:
  template <class DAlias = D>
  constexpr TorqueGeneratedTuple2() : P() {
    static_assert(std::is_base_of<TorqueGeneratedTuple2, 
      DAlias>::value,
      "class TorqueGeneratedTuple2 should be used as direct base for Tuple2.");
  }
  D* operator->() { return static_cast<D*>(this); }
  const D* operator->() const { return static_cast<const D*>(this); }

protected:
  inline explicit TorqueGeneratedTuple2(Address ptr);
};

class Tuple3;

template <class D, class P>
class TorqueGeneratedTuple3 : public P {
  static_assert(std::is_same<Tuple3, D>::value,
    "Use this class as direct base for Tuple3.");
  static_assert(std::is_same<Tuple2, P>::value,
    "Pass in Tuple2 as second template parameter for TorqueGeneratedTuple3.");
public: 
  using Super = P;
  inline Object value3() const;
  inline void set_value3(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(Tuple3)
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void Tuple3Verify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kValue3Offset = P::kHeaderSize;
  static constexpr int kValue3OffsetEnd = kValue3Offset + kTaggedSize;
  static constexpr int kEndOfStrongFieldsOffset = kValue3OffsetEnd;
  static constexpr int kStartOfWeakFieldsOffset = kValue3OffsetEnd;
  static constexpr int kEndOfWeakFieldsOffset = kValue3OffsetEnd;
  static constexpr int kHeaderSize = kValue3OffsetEnd;
  static constexpr int kSize = kValue3OffsetEnd;

public:
  template <class DAlias = D>
  constexpr TorqueGeneratedTuple3() : P() {
    static_assert(std::is_base_of<TorqueGeneratedTuple3, 
      DAlias>::value,
      "class TorqueGeneratedTuple3 should be used as direct base for Tuple3.");
  }
  D* operator->() { return static_cast<D*>(this); }
  const D* operator->() const { return static_cast<const D*>(this); }

protected:
  inline explicit TorqueGeneratedTuple3(Address ptr);
};

}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_DEFINITIONS_TQ_H_
