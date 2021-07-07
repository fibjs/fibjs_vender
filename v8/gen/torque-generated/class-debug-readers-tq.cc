#include "torque-generated/class-debug-readers-tq.h"
#include "include/v8-internal.h"

namespace i = v8::internal;

namespace v8_debug_helper_internal {

const char* TqHeapObject::GetName() const {
  return "v8::internal::HeapObject";
}

void TqHeapObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitHeapObject(this);
}

uintptr_t TqHeapObject::GetMapAddress() const {
  return address_ - i::kHeapObjectTag + 0;
}

Value<uintptr_t> TqHeapObject::GetMapValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMapAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqHeapObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("map", "v8::internal::Map", "v8::internal::Map", GetMapAddress()));
  return result;
}

const char* TqContext::GetName() const {
  return "v8::internal::Context";
}

void TqContext::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitContext(this);
}

uintptr_t TqContext::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqContext::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqContext::GetScopeInfoAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqContext::GetScopeInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScopeInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqContext::GetPreviousAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqContext::GetPreviousValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPreviousAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqContext::GetExtensionAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqContext::GetExtensionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExtensionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqContext::GetNativeContextAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqContext::GetNativeContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNativeContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqContext::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("scope_info", "v8::internal::HeapObject", "v8::internal::HeapObject", GetScopeInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("previous", "v8::internal::Object", "v8::internal::Object", GetPreviousAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("extension", "v8::internal::Object", "v8::internal::Object", GetExtensionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("native_context", "v8::internal::Object", "v8::internal::Object", GetNativeContextAddress()));
  return result;
}

const char* TqJSReceiver::GetName() const {
  return "v8::internal::JSReceiver";
}

void TqJSReceiver::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSReceiver(this);
}

uintptr_t TqJSReceiver::GetPropertiesOrHashAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqJSReceiver::GetPropertiesOrHashValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPropertiesOrHashAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSReceiver::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("properties_or_hash", "v8::internal::Object", "v8::internal::Object", GetPropertiesOrHashAddress()));
  return result;
}

const char* TqHeapNumber::GetName() const {
  return "v8::internal::HeapNumber";
}

void TqHeapNumber::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitHeapNumber(this);
}

uintptr_t TqHeapNumber::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqHeapNumber::GetValueValue(d::MemoryAccessor accessor) const {
  double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqHeapNumber::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "double", "double", GetValueAddress()));
  return result;
}

const char* TqOddball::GetName() const {
  return "v8::internal::Oddball";
}

void TqOddball::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitOddball(this);
}

uintptr_t TqOddball::GetToNumberRawAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqOddball::GetToNumberRawValue(d::MemoryAccessor accessor) const {
  double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetToNumberRawAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqOddball::GetToStringAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqOddball::GetToStringValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetToStringAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqOddball::GetToNumberAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqOddball::GetToNumberValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetToNumberAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqOddball::GetTypeOfAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqOddball::GetTypeOfValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTypeOfAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqOddball::GetKindAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqOddball::GetKindValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKindAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqOddball::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("to_number_raw", "double", "double", GetToNumberRawAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("to_string", "v8::internal::String", "v8::internal::String", GetToStringAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("to_number", "v8::internal::Object", "v8::internal::Object", GetToNumberAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("type_of", "v8::internal::String", "v8::internal::String", GetTypeOfAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("kind", "v8::internal::Object", "v8::internal::Object", GetKindAddress()));
  return result;
}

const char* TqName::GetName() const {
  return "v8::internal::Name";
}

void TqName::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitName(this);
}

uintptr_t TqName::GetHashFieldAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqName::GetHashFieldValue(d::MemoryAccessor accessor) const {
  uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetHashFieldAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqName::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("hash_field", "uint32_t", "uint32_t", GetHashFieldAddress()));
  return result;
}

const char* TqSymbol::GetName() const {
  return "v8::internal::Symbol";
}

void TqSymbol::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSymbol(this);
}

uintptr_t TqSymbol::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 12;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSymbol::GetFlagsValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqSymbol::GetNameAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqSymbol::GetNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSymbol::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqName::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "int32_t", "int32_t", GetFlagsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("name", "v8::internal::Object", "v8::internal::Object", GetNameAddress()));
  return result;
}

const char* TqString::GetName() const {
  return "v8::internal::String";
}

void TqString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitString(this);
}

uintptr_t TqString::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 12;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqString::GetLengthValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqName::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "int32_t", "int32_t", GetLengthAddress()));
  return result;
}

const char* TqBigIntBase::GetName() const {
  return "v8::internal::BigIntBase";
}

void TqBigIntBase::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitBigIntBase(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqBigIntBase::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  return result;
}

const char* TqFixedArrayBase::GetName() const {
  return "v8::internal::FixedArrayBase";
}

void TqFixedArrayBase::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFixedArrayBase(this);
}

uintptr_t TqFixedArrayBase::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqFixedArrayBase::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFixedArrayBase::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  return result;
}

const char* TqFixedArray::GetName() const {
  return "v8::internal::FixedArray";
}

void TqFixedArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFixedArray(this);
}

uintptr_t TqFixedArray::GetObjectsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqFixedArray::GetObjectsValue(d::MemoryAccessor accessor, size_t offset) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetObjectsAddress() + offset * sizeof(value), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFixedArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqFixedArrayBase::GetProperties(accessor);
  Value<uintptr_t> indexed_field_count = GetLengthValue(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("objects", "v8::internal::Object", "v8::internal::Object", GetObjectsAddress(), i::PlatformSmiTagging::SmiToInt(indexed_field_count.value), GetArrayKind(indexed_field_count.validity)));
  return result;
}

const char* TqConsString::GetName() const {
  return "v8::internal::ConsString";
}

void TqConsString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitConsString(this);
}

uintptr_t TqConsString::GetFirstAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqConsString::GetFirstValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFirstAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqConsString::GetSecondAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqConsString::GetSecondValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSecondAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqConsString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqString::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("first", "v8::internal::String", "v8::internal::String", GetFirstAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("second", "v8::internal::String", "v8::internal::String", GetSecondAddress()));
  return result;
}

const char* TqExternalString::GetName() const {
  return "v8::internal::ExternalString";
}

void TqExternalString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitExternalString(this);
}

uintptr_t TqExternalString::GetResourceAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqExternalString::GetResourceValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetResourceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqExternalString::GetResourceDataAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqExternalString::GetResourceDataValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetResourceDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqExternalString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqString::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("resource", "void*", "void*", GetResourceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("resource_data", "void*", "void*", GetResourceDataAddress()));
  return result;
}

const char* TqExternalOneByteString::GetName() const {
  return "v8::internal::ExternalOneByteString";
}

void TqExternalOneByteString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitExternalOneByteString(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqExternalOneByteString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqExternalString::GetProperties(accessor);
  return result;
}

const char* TqExternalTwoByteString::GetName() const {
  return "v8::internal::ExternalTwoByteString";
}

void TqExternalTwoByteString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitExternalTwoByteString(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqExternalTwoByteString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqExternalString::GetProperties(accessor);
  return result;
}

const char* TqInternalizedString::GetName() const {
  return "v8::internal::InternalizedString";
}

void TqInternalizedString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitInternalizedString(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqInternalizedString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqString::GetProperties(accessor);
  return result;
}

const char* TqSeqString::GetName() const {
  return "v8::internal::SeqString";
}

void TqSeqString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSeqString(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqSeqString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqString::GetProperties(accessor);
  return result;
}

const char* TqSeqOneByteString::GetName() const {
  return "v8::internal::SeqOneByteString";
}

void TqSeqOneByteString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSeqOneByteString(this);
}

uintptr_t TqSeqOneByteString::GetCharsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<char /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSeqOneByteString::GetCharsValue(d::MemoryAccessor accessor, size_t offset) const {
  char /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetCharsAddress() + offset * sizeof(value), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSeqOneByteString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqSeqString::GetProperties(accessor);
  Value<int32_t> indexed_field_count = GetLengthValue(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("chars", "char", "char", GetCharsAddress(), indexed_field_count.value, GetArrayKind(indexed_field_count.validity)));
  return result;
}

const char* TqSeqTwoByteString::GetName() const {
  return "v8::internal::SeqTwoByteString";
}

void TqSeqTwoByteString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSeqTwoByteString(this);
}

uintptr_t TqSeqTwoByteString::GetCharsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<char16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSeqTwoByteString::GetCharsValue(d::MemoryAccessor accessor, size_t offset) const {
  char16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetCharsAddress() + offset * sizeof(value), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSeqTwoByteString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqSeqString::GetProperties(accessor);
  Value<int32_t> indexed_field_count = GetLengthValue(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("chars", "char16_t", "char16_t", GetCharsAddress(), indexed_field_count.value, GetArrayKind(indexed_field_count.validity)));
  return result;
}

const char* TqSlicedString::GetName() const {
  return "v8::internal::SlicedString";
}

void TqSlicedString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSlicedString(this);
}

uintptr_t TqSlicedString::GetParentAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqSlicedString::GetParentValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetParentAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSlicedString::GetOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqSlicedString::GetOffsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSlicedString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqString::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("parent", "v8::internal::String", "v8::internal::String", GetParentAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("offset", "v8::internal::Object", "v8::internal::Object", GetOffsetAddress()));
  return result;
}

const char* TqThinString::GetName() const {
  return "v8::internal::ThinString";
}

void TqThinString::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitThinString(this);
}

uintptr_t TqThinString::GetActualAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqThinString::GetActualValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetActualAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqThinString::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqString::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("actual", "v8::internal::String", "v8::internal::String", GetActualAddress()));
  return result;
}

const char* TqStruct::GetName() const {
  return "v8::internal::Struct";
}

void TqStruct::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitStruct(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqStruct::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  return result;
}

const char* TqTuple2::GetName() const {
  return "v8::internal::Tuple2";
}

void TqTuple2::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitTuple2(this);
}

uintptr_t TqTuple2::GetValue1Address() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqTuple2::GetValue1Value(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValue1Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqTuple2::GetValue2Address() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqTuple2::GetValue2Value(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValue2Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqTuple2::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value1", "v8::internal::Object", "v8::internal::Object", GetValue1Address()));
  result.push_back(v8::base::make_unique<ObjectProperty>("value2", "v8::internal::Object", "v8::internal::Object", GetValue2Address()));
  return result;
}

const char* TqTuple3::GetName() const {
  return "v8::internal::Tuple3";
}

void TqTuple3::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitTuple3(this);
}

uintptr_t TqTuple3::GetValue3Address() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqTuple3::GetValue3Value(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValue3Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqTuple3::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqTuple2::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value3", "v8::internal::Object", "v8::internal::Object", GetValue3Address()));
  return result;
}

const char* TqFixedDoubleArray::GetName() const {
  return "v8::internal::FixedDoubleArray";
}

void TqFixedDoubleArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFixedDoubleArray(this);
}

uintptr_t TqFixedDoubleArray::GetFloatsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqFixedDoubleArray::GetFloatsValue(d::MemoryAccessor accessor, size_t offset) const {
  double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFloatsAddress() + offset * sizeof(value), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFixedDoubleArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqFixedArrayBase::GetProperties(accessor);
  Value<uintptr_t> indexed_field_count = GetLengthValue(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("floats", "double", "double", GetFloatsAddress(), i::PlatformSmiTagging::SmiToInt(indexed_field_count.value), GetArrayKind(indexed_field_count.validity)));
  return result;
}

const char* TqWeakFixedArray::GetName() const {
  return "v8::internal::WeakFixedArray";
}

void TqWeakFixedArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWeakFixedArray(this);
}

uintptr_t TqWeakFixedArray::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWeakFixedArray::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWeakFixedArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  return result;
}

const char* TqByteArray::GetName() const {
  return "v8::internal::ByteArray";
}

void TqByteArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitByteArray(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqByteArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqFixedArrayBase::GetProperties(accessor);
  return result;
}

const char* TqMap::GetName() const {
  return "v8::internal::Map";
}

void TqMap::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitMap(this);
}

uintptr_t TqMap::GetInstanceSizeInWordsAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetInstanceSizeInWordsValue(d::MemoryAccessor accessor) const {
  uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetInstanceSizeInWordsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetInObjectPropertiesStartOrConstructorFunctionIndexAddress() const {
  return address_ - i::kHeapObjectTag + 9;
}

Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetInObjectPropertiesStartOrConstructorFunctionIndexValue(d::MemoryAccessor accessor) const {
  uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetInObjectPropertiesStartOrConstructorFunctionIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetUsedOrUnusedInstanceSizeInWordsAddress() const {
  return address_ - i::kHeapObjectTag + 10;
}

Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetUsedOrUnusedInstanceSizeInWordsValue(d::MemoryAccessor accessor) const {
  uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetUsedOrUnusedInstanceSizeInWordsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetVisitorIdAddress() const {
  return address_ - i::kHeapObjectTag + 11;
}

Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetVisitorIdValue(d::MemoryAccessor accessor) const {
  uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetVisitorIdAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetInstanceTypeAddress() const {
  return address_ - i::kHeapObjectTag + 12;
}

Value<v8::internal::InstanceType /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetInstanceTypeValue(d::MemoryAccessor accessor) const {
  v8::internal::InstanceType /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetInstanceTypeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetBitFieldAddress() const {
  return address_ - i::kHeapObjectTag + 14;
}

Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetBitFieldValue(d::MemoryAccessor accessor) const {
  uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetBitFieldAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetBitField2Address() const {
  return address_ - i::kHeapObjectTag + 15;
}

Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetBitField2Value(d::MemoryAccessor accessor) const {
  uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetBitField2Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetBitField3Address() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetBitField3Value(d::MemoryAccessor accessor) const {
  uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetBitField3Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetOptionalPaddingAddress() const {
  return address_ - i::kHeapObjectTag + 20;
}

Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqMap::GetOptionalPaddingValue(d::MemoryAccessor accessor) const {
  uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetOptionalPaddingAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqMap::GetPrototypeAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqMap::GetPrototypeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrototypeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqMap::GetConstructorOrBackPointerAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqMap::GetConstructorOrBackPointerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetConstructorOrBackPointerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqMap::GetInstanceDescriptorsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqMap::GetInstanceDescriptorsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInstanceDescriptorsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqMap::GetLayoutDescriptorAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqMap::GetLayoutDescriptorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLayoutDescriptorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqMap::GetDependentCodeAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqMap::GetDependentCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDependentCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqMap::GetPrototypeValidityCellAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqMap::GetPrototypeValidityCellValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrototypeValidityCellAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqMap::GetTransitionsOrPrototypeInfoAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqMap::GetTransitionsOrPrototypeInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTransitionsOrPrototypeInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqMap::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("instance_size_in_words", "uint8_t", "uint8_t", GetInstanceSizeInWordsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("in_object_properties_start_or_constructor_function_index", "uint8_t", "uint8_t", GetInObjectPropertiesStartOrConstructorFunctionIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("used_or_unused_instance_size_in_words", "uint8_t", "uint8_t", GetUsedOrUnusedInstanceSizeInWordsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("visitor_id", "uint8_t", "uint8_t", GetVisitorIdAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("instance_type", "v8::internal::InstanceType", "v8::internal::InstanceType", GetInstanceTypeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bit_field", "uint8_t", "uint8_t", GetBitFieldAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bit_field2", "uint8_t", "uint8_t", GetBitField2Address()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bit_field3", "uint32_t", "uint32_t", GetBitField3Address()));
  result.push_back(v8::base::make_unique<ObjectProperty>("optional_padding", "uint32_t", "uint32_t", GetOptionalPaddingAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("prototype", "v8::internal::HeapObject", "v8::internal::HeapObject", GetPrototypeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("constructor_or_back_pointer", "v8::internal::Object", "v8::internal::Object", GetConstructorOrBackPointerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("instance_descriptors", "v8::internal::DescriptorArray", "v8::internal::DescriptorArray", GetInstanceDescriptorsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("layout_descriptor", "v8::internal::ByteArray", "v8::internal::ByteArray", GetLayoutDescriptorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("dependent_code", "v8::internal::WeakFixedArray", "v8::internal::WeakFixedArray", GetDependentCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("prototype_validity_cell", "v8::internal::Object", "v8::internal::Object", GetPrototypeValidityCellAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("transitions_or_prototype_info", "v8::internal::Object", "v8::internal::Object", GetTransitionsOrPrototypeInfoAddress()));
  return result;
}

const char* TqEnumCache::GetName() const {
  return "v8::internal::EnumCache";
}

void TqEnumCache::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitEnumCache(this);
}

uintptr_t TqEnumCache::GetKeysAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqEnumCache::GetKeysValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKeysAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqEnumCache::GetIndicesAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqEnumCache::GetIndicesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIndicesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqEnumCache::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("keys", "v8::internal::FixedArray", "v8::internal::FixedArray", GetKeysAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("indices", "v8::internal::FixedArray", "v8::internal::FixedArray", GetIndicesAddress()));
  return result;
}

const char* TqSourcePositionTableWithFrameCache::GetName() const {
  return "v8::internal::SourcePositionTableWithFrameCache";
}

void TqSourcePositionTableWithFrameCache::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSourcePositionTableWithFrameCache(this);
}

uintptr_t TqSourcePositionTableWithFrameCache::GetSourcePositionTableAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqSourcePositionTableWithFrameCache::GetSourcePositionTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSourcePositionTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourcePositionTableWithFrameCache::GetStackFrameCacheAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqSourcePositionTableWithFrameCache::GetStackFrameCacheValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetStackFrameCacheAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSourcePositionTableWithFrameCache::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("source_position_table", "v8::internal::ByteArray", "v8::internal::ByteArray", GetSourcePositionTableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("stack_frame_cache", "v8::internal::Object", "v8::internal::Object", GetStackFrameCacheAddress()));
  return result;
}

const char* TqDescriptorArray::GetName() const {
  return "v8::internal::DescriptorArray";
}

void TqDescriptorArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitDescriptorArray(this);
}

uintptr_t TqDescriptorArray::GetNumberOfAllDescriptorsAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqDescriptorArray::GetNumberOfAllDescriptorsValue(d::MemoryAccessor accessor) const {
  uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetNumberOfAllDescriptorsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqDescriptorArray::GetNumberOfDescriptorsAddress() const {
  return address_ - i::kHeapObjectTag + 10;
}

Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqDescriptorArray::GetNumberOfDescriptorsValue(d::MemoryAccessor accessor) const {
  uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetNumberOfDescriptorsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqDescriptorArray::GetRawNumberOfMarkedDescriptorsAddress() const {
  return address_ - i::kHeapObjectTag + 12;
}

Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqDescriptorArray::GetRawNumberOfMarkedDescriptorsValue(d::MemoryAccessor accessor) const {
  uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetRawNumberOfMarkedDescriptorsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqDescriptorArray::GetFiller16BitsAddress() const {
  return address_ - i::kHeapObjectTag + 14;
}

Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqDescriptorArray::GetFiller16BitsValue(d::MemoryAccessor accessor) const {
  uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFiller16BitsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqDescriptorArray::GetEnumCacheAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqDescriptorArray::GetEnumCacheValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEnumCacheAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqDescriptorArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("number_of_all_descriptors", "uint16_t", "uint16_t", GetNumberOfAllDescriptorsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("number_of_descriptors", "uint16_t", "uint16_t", GetNumberOfDescriptorsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("raw_number_of_marked_descriptors", "uint16_t", "uint16_t", GetRawNumberOfMarkedDescriptorsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("filler16_bits", "uint16_t", "uint16_t", GetFiller16BitsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("enum_cache", "v8::internal::EnumCache", "v8::internal::EnumCache", GetEnumCacheAddress()));
  return result;
}

const char* TqJSObject::GetName() const {
  return "v8::internal::JSObject";
}

void TqJSObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSObject(this);
}

uintptr_t TqJSObject::GetElementsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqJSObject::GetElementsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetElementsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSReceiver::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("elements", "v8::internal::FixedArrayBase", "v8::internal::FixedArrayBase", GetElementsAddress()));
  return result;
}

const char* TqJSFunction::GetName() const {
  return "v8::internal::JSFunction";
}

void TqJSFunction::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSFunction(this);
}

uintptr_t TqJSFunction::GetSharedFunctionInfoAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSFunction::GetSharedFunctionInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSharedFunctionInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFunction::GetContextAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSFunction::GetContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFunction::GetFeedbackCellAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSFunction::GetFeedbackCellValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFeedbackCellAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFunction::GetCodeAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqJSFunction::GetCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFunction::GetPrototypeOrInitialMapAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqJSFunction::GetPrototypeOrInitialMapValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrototypeOrInitialMapAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSFunction::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("shared_function_info", "v8::internal::SharedFunctionInfo", "v8::internal::SharedFunctionInfo", GetSharedFunctionInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("context", "v8::internal::Context", "v8::internal::Context", GetContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("feedback_cell", "v8::internal::FeedbackCell", "v8::internal::FeedbackCell", GetFeedbackCellAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("code", "v8::internal::HeapObject", "v8::internal::HeapObject", GetCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("prototype_or_initial_map", "v8::internal::HeapObject", "v8::internal::HeapObject", GetPrototypeOrInitialMapAddress()));
  return result;
}

const char* TqJSProxy::GetName() const {
  return "v8::internal::JSProxy";
}

void TqJSProxy::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSProxy(this);
}

uintptr_t TqJSProxy::GetTargetAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqJSProxy::GetTargetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTargetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSProxy::GetHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSProxy::GetHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSProxy::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSReceiver::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("target", "v8::internal::HeapObject", "v8::internal::HeapObject", GetTargetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("handler", "v8::internal::HeapObject", "v8::internal::HeapObject", GetHandlerAddress()));
  return result;
}

const char* TqJSProxyRevocableResult::GetName() const {
  return "v8::internal::JSProxyRevocableResult";
}

void TqJSProxyRevocableResult::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSProxyRevocableResult(this);
}

uintptr_t TqJSProxyRevocableResult::GetProxyAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSProxyRevocableResult::GetProxyValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetProxyAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSProxyRevocableResult::GetRevokeAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSProxyRevocableResult::GetRevokeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRevokeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSProxyRevocableResult::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("proxy", "v8::internal::Object", "v8::internal::Object", GetProxyAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("revoke", "v8::internal::Object", "v8::internal::Object", GetRevokeAddress()));
  return result;
}

const char* TqJSGlobalProxy::GetName() const {
  return "v8::internal::JSGlobalProxy";
}

void TqJSGlobalProxy::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSGlobalProxy(this);
}

uintptr_t TqJSGlobalProxy::GetNativeContextAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSGlobalProxy::GetNativeContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNativeContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSGlobalProxy::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("native_context", "v8::internal::Object", "v8::internal::Object", GetNativeContextAddress()));
  return result;
}

const char* TqJSPrimitiveWrapper::GetName() const {
  return "v8::internal::JSPrimitiveWrapper";
}

void TqJSPrimitiveWrapper::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSPrimitiveWrapper(this);
}

uintptr_t TqJSPrimitiveWrapper::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSPrimitiveWrapper::GetValueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSPrimitiveWrapper::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "v8::internal::Object", "v8::internal::Object", GetValueAddress()));
  return result;
}

const char* TqJSArgumentsObject::GetName() const {
  return "v8::internal::JSArgumentsObject";
}

void TqJSArgumentsObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSArgumentsObject(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSArgumentsObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  return result;
}

const char* TqJSArgumentsObjectWithLength::GetName() const {
  return "v8::internal::JSArgumentsObjectWithLength";
}

void TqJSArgumentsObjectWithLength::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSArgumentsObjectWithLength(this);
}

uintptr_t TqJSArgumentsObjectWithLength::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSArgumentsObjectWithLength::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSArgumentsObjectWithLength::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSArgumentsObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  return result;
}

const char* TqJSSloppyArgumentsObject::GetName() const {
  return "v8::internal::JSSloppyArgumentsObject";
}

void TqJSSloppyArgumentsObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSSloppyArgumentsObject(this);
}

uintptr_t TqJSSloppyArgumentsObject::GetCalleeAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSSloppyArgumentsObject::GetCalleeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCalleeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSSloppyArgumentsObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSArgumentsObjectWithLength::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("callee", "v8::internal::Object", "v8::internal::Object", GetCalleeAddress()));
  return result;
}

const char* TqJSStrictArgumentsObject::GetName() const {
  return "v8::internal::JSStrictArgumentsObject";
}

void TqJSStrictArgumentsObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSStrictArgumentsObject(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSStrictArgumentsObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSArgumentsObjectWithLength::GetProperties(accessor);
  return result;
}

const char* TqJSArrayIterator::GetName() const {
  return "v8::internal::JSArrayIterator";
}

void TqJSArrayIterator::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSArrayIterator(this);
}

uintptr_t TqJSArrayIterator::GetIteratedObjectAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSArrayIterator::GetIteratedObjectValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIteratedObjectAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSArrayIterator::GetNextIndexAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSArrayIterator::GetNextIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSArrayIterator::GetKindAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSArrayIterator::GetKindValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKindAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSArrayIterator::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("iterated_object", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetIteratedObjectAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("next_index", "v8::internal::Object", "v8::internal::Object", GetNextIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("kind", "v8::internal::Object", "v8::internal::Object", GetKindAddress()));
  return result;
}

const char* TqJSArray::GetName() const {
  return "v8::internal::JSArray";
}

void TqJSArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSArray(this);
}

uintptr_t TqJSArray::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSArray::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  return result;
}

const char* TqCallHandlerInfo::GetName() const {
  return "v8::internal::CallHandlerInfo";
}

void TqCallHandlerInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitCallHandlerInfo(this);
}

uintptr_t TqCallHandlerInfo::GetCallbackAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqCallHandlerInfo::GetCallbackValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCallbackAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqCallHandlerInfo::GetJsCallbackAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqCallHandlerInfo::GetJsCallbackValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetJsCallbackAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqCallHandlerInfo::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqCallHandlerInfo::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqCallHandlerInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("callback", "v8::internal::Object", "v8::internal::Object", GetCallbackAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("js_callback", "v8::internal::Object", "v8::internal::Object", GetJsCallbackAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::Object", "v8::internal::Object", GetDataAddress()));
  return result;
}

const char* TqModule::GetName() const {
  return "v8::internal::Module";
}

void TqModule::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitModule(this);
}

uintptr_t TqModule::GetExportsAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqModule::GetExportsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExportsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqModule::GetHashAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqModule::GetHashValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHashAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqModule::GetStatusAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqModule::GetStatusValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetStatusAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqModule::GetModuleNamespaceAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqModule::GetModuleNamespaceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetModuleNamespaceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqModule::GetExceptionAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqModule::GetExceptionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExceptionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqModule::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("exports", "v8::internal::FixedArray", "v8::internal::FixedArray", GetExportsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("hash", "v8::internal::Object", "v8::internal::Object", GetHashAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("status", "v8::internal::Object", "v8::internal::Object", GetStatusAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("module_namespace", "v8::internal::HeapObject", "v8::internal::HeapObject", GetModuleNamespaceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("exception", "v8::internal::Object", "v8::internal::Object", GetExceptionAddress()));
  return result;
}

const char* TqSourceTextModule::GetName() const {
  return "v8::internal::SourceTextModule";
}

void TqSourceTextModule::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSourceTextModule(this);
}

uintptr_t TqSourceTextModule::GetCodeAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqSourceTextModule::GetCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetRegularExportsAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqSourceTextModule::GetRegularExportsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRegularExportsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetRegularImportsAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqSourceTextModule::GetRegularImportsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRegularImportsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetRequestedModulesAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqSourceTextModule::GetRequestedModulesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRequestedModulesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetScriptAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqSourceTextModule::GetScriptValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetImportMetaAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqSourceTextModule::GetImportMetaValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetImportMetaAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetDfsIndexAddress() const {
  return address_ - i::kHeapObjectTag + 96;
}

Value<uintptr_t> TqSourceTextModule::GetDfsIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDfsIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModule::GetDfsAncestorIndexAddress() const {
  return address_ - i::kHeapObjectTag + 104;
}

Value<uintptr_t> TqSourceTextModule::GetDfsAncestorIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDfsAncestorIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSourceTextModule::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqModule::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("code", "v8::internal::HeapObject", "v8::internal::HeapObject", GetCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("regular_exports", "v8::internal::FixedArray", "v8::internal::FixedArray", GetRegularExportsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("regular_imports", "v8::internal::FixedArray", "v8::internal::FixedArray", GetRegularImportsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("requested_modules", "v8::internal::FixedArray", "v8::internal::FixedArray", GetRequestedModulesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script", "v8::internal::Script", "v8::internal::Script", GetScriptAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("import_meta", "v8::internal::HeapObject", "v8::internal::HeapObject", GetImportMetaAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("dfs_index", "v8::internal::Object", "v8::internal::Object", GetDfsIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("dfs_ancestor_index", "v8::internal::Object", "v8::internal::Object", GetDfsAncestorIndexAddress()));
  return result;
}

const char* TqSyntheticModule::GetName() const {
  return "v8::internal::SyntheticModule";
}

void TqSyntheticModule::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSyntheticModule(this);
}

uintptr_t TqSyntheticModule::GetNameAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqSyntheticModule::GetNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSyntheticModule::GetExportNamesAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqSyntheticModule::GetExportNamesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExportNamesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSyntheticModule::GetEvaluationStepsAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqSyntheticModule::GetEvaluationStepsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEvaluationStepsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSyntheticModule::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqModule::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("name", "v8::internal::String", "v8::internal::String", GetNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("export_names", "v8::internal::FixedArray", "v8::internal::FixedArray", GetExportNamesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("evaluation_steps", "v8::internal::Foreign", "v8::internal::Foreign", GetEvaluationStepsAddress()));
  return result;
}

const char* TqJSModuleNamespace::GetName() const {
  return "v8::internal::JSModuleNamespace";
}

void TqJSModuleNamespace::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSModuleNamespace(this);
}

uintptr_t TqJSModuleNamespace::GetModuleAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSModuleNamespace::GetModuleValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetModuleAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSModuleNamespace::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("module", "v8::internal::Module", "v8::internal::Module", GetModuleAddress()));
  return result;
}

const char* TqTemplateList::GetName() const {
  return "v8::internal::TemplateList";
}

void TqTemplateList::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitTemplateList(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqTemplateList::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqFixedArray::GetProperties(accessor);
  return result;
}

const char* TqJSWeakCollection::GetName() const {
  return "v8::internal::JSWeakCollection";
}

void TqJSWeakCollection::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSWeakCollection(this);
}

uintptr_t TqJSWeakCollection::GetTableAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSWeakCollection::GetTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSWeakCollection::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("table", "v8::internal::Object", "v8::internal::Object", GetTableAddress()));
  return result;
}

const char* TqJSWeakSet::GetName() const {
  return "v8::internal::JSWeakSet";
}

void TqJSWeakSet::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSWeakSet(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSWeakSet::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSWeakCollection::GetProperties(accessor);
  return result;
}

const char* TqJSWeakMap::GetName() const {
  return "v8::internal::JSWeakMap";
}

void TqJSWeakMap::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSWeakMap(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSWeakMap::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSWeakCollection::GetProperties(accessor);
  return result;
}

const char* TqJSCollectionIterator::GetName() const {
  return "v8::internal::JSCollectionIterator";
}

void TqJSCollectionIterator::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSCollectionIterator(this);
}

uintptr_t TqJSCollectionIterator::GetTableAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSCollectionIterator::GetTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSCollectionIterator::GetIndexAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSCollectionIterator::GetIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSCollectionIterator::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("table", "v8::internal::Object", "v8::internal::Object", GetTableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("index", "v8::internal::Object", "v8::internal::Object", GetIndexAddress()));
  return result;
}

const char* TqJSMessageObject::GetName() const {
  return "v8::internal::JSMessageObject";
}

void TqJSMessageObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSMessageObject(this);
}

uintptr_t TqJSMessageObject::GetMessageTypeAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSMessageObject::GetMessageTypeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMessageTypeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetArgumentsAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSMessageObject::GetArgumentsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetArgumentsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetScriptAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSMessageObject::GetScriptValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetStackFramesAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqJSMessageObject::GetStackFramesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetStackFramesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetSharedInfoAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqJSMessageObject::GetSharedInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSharedInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetBytecodeOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqJSMessageObject::GetBytecodeOffsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBytecodeOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetStartPositionAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqJSMessageObject::GetStartPositionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetStartPositionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetEndPositionAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqJSMessageObject::GetEndPositionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEndPositionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSMessageObject::GetErrorLevelAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqJSMessageObject::GetErrorLevelValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetErrorLevelAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSMessageObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("message_type", "v8::internal::Object", "v8::internal::Object", GetMessageTypeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("arguments", "v8::internal::Object", "v8::internal::Object", GetArgumentsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script", "v8::internal::Script", "v8::internal::Script", GetScriptAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("stack_frames", "v8::internal::Object", "v8::internal::Object", GetStackFramesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("shared_info", "v8::internal::HeapObject", "v8::internal::HeapObject", GetSharedInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bytecode_offset", "v8::internal::Object", "v8::internal::Object", GetBytecodeOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("start_position", "v8::internal::Object", "v8::internal::Object", GetStartPositionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("end_position", "v8::internal::Object", "v8::internal::Object", GetEndPositionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("error_level", "v8::internal::Object", "v8::internal::Object", GetErrorLevelAddress()));
  return result;
}

const char* TqWeakArrayList::GetName() const {
  return "v8::internal::WeakArrayList";
}

void TqWeakArrayList::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWeakArrayList(this);
}

uintptr_t TqWeakArrayList::GetCapacityAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWeakArrayList::GetCapacityValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCapacityAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakArrayList::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqWeakArrayList::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWeakArrayList::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("capacity", "v8::internal::Object", "v8::internal::Object", GetCapacityAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  return result;
}

const char* TqPrototypeInfo::GetName() const {
  return "v8::internal::PrototypeInfo";
}

void TqPrototypeInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPrototypeInfo(this);
}

uintptr_t TqPrototypeInfo::GetJsModuleNamespaceAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPrototypeInfo::GetJsModuleNamespaceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetJsModuleNamespaceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPrototypeInfo::GetPrototypeUsersAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqPrototypeInfo::GetPrototypeUsersValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrototypeUsersAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPrototypeInfo::GetRegistrySlotAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqPrototypeInfo::GetRegistrySlotValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRegistrySlotAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPrototypeInfo::GetValidityCellAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqPrototypeInfo::GetValidityCellValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValidityCellAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPrototypeInfo::GetObjectCreateMapAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqPrototypeInfo::GetObjectCreateMapValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetObjectCreateMapAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPrototypeInfo::GetBitFieldAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqPrototypeInfo::GetBitFieldValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBitFieldAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPrototypeInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("js_module_namespace", "v8::internal::HeapObject", "v8::internal::HeapObject", GetJsModuleNamespaceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("prototype_users", "v8::internal::Object", "v8::internal::Object", GetPrototypeUsersAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("registry_slot", "v8::internal::Object", "v8::internal::Object", GetRegistrySlotAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("validity_cell", "v8::internal::Object", "v8::internal::Object", GetValidityCellAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("object_create_map", "v8::internal::HeapObject", "v8::internal::HeapObject", GetObjectCreateMapAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bit_field", "v8::internal::Object", "v8::internal::Object", GetBitFieldAddress()));
  return result;
}

const char* TqScript::GetName() const {
  return "v8::internal::Script";
}

void TqScript::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitScript(this);
}

uintptr_t TqScript::GetSourceAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqScript::GetSourceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSourceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetNameAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqScript::GetNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetLineOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqScript::GetLineOffsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLineOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetColumnOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqScript::GetColumnOffsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetColumnOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetContextAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqScript::GetContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetScriptTypeAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqScript::GetScriptTypeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptTypeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetLineEndsAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqScript::GetLineEndsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLineEndsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetIdAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqScript::GetIdValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIdAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetEvalFromSharedOrWrappedArgumentsAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqScript::GetEvalFromSharedOrWrappedArgumentsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEvalFromSharedOrWrappedArgumentsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetEvalFromPositionAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqScript::GetEvalFromPositionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEvalFromPositionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetSharedFunctionInfosAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqScript::GetSharedFunctionInfosValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSharedFunctionInfosAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 96;
}

Value<uintptr_t> TqScript::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetSourceUrlAddress() const {
  return address_ - i::kHeapObjectTag + 104;
}

Value<uintptr_t> TqScript::GetSourceUrlValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSourceUrlAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetSourceMappingUrlAddress() const {
  return address_ - i::kHeapObjectTag + 112;
}

Value<uintptr_t> TqScript::GetSourceMappingUrlValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSourceMappingUrlAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqScript::GetHostDefinedOptionsAddress() const {
  return address_ - i::kHeapObjectTag + 120;
}

Value<uintptr_t> TqScript::GetHostDefinedOptionsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHostDefinedOptionsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqScript::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("source", "v8::internal::Object", "v8::internal::Object", GetSourceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("name", "v8::internal::Object", "v8::internal::Object", GetNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("line_offset", "v8::internal::Object", "v8::internal::Object", GetLineOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("column_offset", "v8::internal::Object", "v8::internal::Object", GetColumnOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("context", "v8::internal::Object", "v8::internal::Object", GetContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script_type", "v8::internal::Object", "v8::internal::Object", GetScriptTypeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("line_ends", "v8::internal::Object", "v8::internal::Object", GetLineEndsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("id", "v8::internal::Object", "v8::internal::Object", GetIdAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("eval_from_shared_or_wrapped_arguments", "v8::internal::Object", "v8::internal::Object", GetEvalFromSharedOrWrappedArgumentsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("eval_from_position", "v8::internal::Object", "v8::internal::Object", GetEvalFromPositionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("shared_function_infos", "v8::internal::Object", "v8::internal::Object", GetSharedFunctionInfosAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("source_url", "v8::internal::Object", "v8::internal::Object", GetSourceUrlAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("source_mapping_url", "v8::internal::Object", "v8::internal::Object", GetSourceMappingUrlAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("host_defined_options", "v8::internal::Object", "v8::internal::Object", GetHostDefinedOptionsAddress()));
  return result;
}

const char* TqEmbedderDataArray::GetName() const {
  return "v8::internal::EmbedderDataArray";
}

void TqEmbedderDataArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitEmbedderDataArray(this);
}

uintptr_t TqEmbedderDataArray::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqEmbedderDataArray::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqEmbedderDataArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  return result;
}

const char* TqPreparseData::GetName() const {
  return "v8::internal::PreparseData";
}

void TqPreparseData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPreparseData(this);
}

uintptr_t TqPreparseData::GetDataLengthAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqPreparseData::GetDataLengthValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetDataLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqPreparseData::GetInnerLengthAddress() const {
  return address_ - i::kHeapObjectTag + 12;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqPreparseData::GetInnerLengthValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetInnerLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPreparseData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("data_length", "int32_t", "int32_t", GetDataLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("inner_length", "int32_t", "int32_t", GetInnerLengthAddress()));
  return result;
}

const char* TqInterpreterData::GetName() const {
  return "v8::internal::InterpreterData";
}

void TqInterpreterData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitInterpreterData(this);
}

uintptr_t TqInterpreterData::GetBytecodeArrayAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqInterpreterData::GetBytecodeArrayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBytecodeArrayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterpreterData::GetInterpreterTrampolineAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqInterpreterData::GetInterpreterTrampolineValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInterpreterTrampolineAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqInterpreterData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("bytecode_array", "v8::internal::BytecodeArray", "v8::internal::BytecodeArray", GetBytecodeArrayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("interpreter_trampoline", "v8::internal::HeapObject", "v8::internal::HeapObject", GetInterpreterTrampolineAddress()));
  return result;
}

const char* TqSharedFunctionInfo::GetName() const {
  return "v8::internal::SharedFunctionInfo";
}

void TqSharedFunctionInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSharedFunctionInfo(this);
}

uintptr_t TqSharedFunctionInfo::GetFunctionDataAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqSharedFunctionInfo::GetFunctionDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFunctionDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSharedFunctionInfo::GetNameOrScopeInfoAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqSharedFunctionInfo::GetNameOrScopeInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNameOrScopeInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSharedFunctionInfo::GetOuterScopeInfoOrFeedbackMetadataAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqSharedFunctionInfo::GetOuterScopeInfoOrFeedbackMetadataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetOuterScopeInfoOrFeedbackMetadataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSharedFunctionInfo::GetScriptOrDebugInfoAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqSharedFunctionInfo::GetScriptOrDebugInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptOrDebugInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSharedFunctionInfo::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<int16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSharedFunctionInfo::GetLengthValue(d::MemoryAccessor accessor) const {
  int16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqSharedFunctionInfo::GetFormalParameterCountAddress() const {
  return address_ - i::kHeapObjectTag + 42;
}

Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSharedFunctionInfo::GetFormalParameterCountValue(d::MemoryAccessor accessor) const {
  uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFormalParameterCountAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqSharedFunctionInfo::GetExpectedNofPropertiesAddress() const {
  return address_ - i::kHeapObjectTag + 44;
}

Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSharedFunctionInfo::GetExpectedNofPropertiesValue(d::MemoryAccessor accessor) const {
  uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetExpectedNofPropertiesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqSharedFunctionInfo::GetFunctionTokenOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 46;
}

Value<int16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSharedFunctionInfo::GetFunctionTokenOffsetValue(d::MemoryAccessor accessor) const {
  int16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFunctionTokenOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqSharedFunctionInfo::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSharedFunctionInfo::GetFlagsValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqSharedFunctionInfo::GetFunctionLiteralIdAddress() const {
  return address_ - i::kHeapObjectTag + 52;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqSharedFunctionInfo::GetFunctionLiteralIdValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFunctionLiteralIdAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSharedFunctionInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("function_data", "v8::internal::Object", "v8::internal::Object", GetFunctionDataAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("name_or_scope_info", "v8::internal::Object", "v8::internal::Object", GetNameOrScopeInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("outer_scope_info_or_feedback_metadata", "v8::internal::HeapObject", "v8::internal::HeapObject", GetOuterScopeInfoOrFeedbackMetadataAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script_or_debug_info", "v8::internal::HeapObject", "v8::internal::HeapObject", GetScriptOrDebugInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "int16_t", "int16_t", GetLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("formal_parameter_count", "uint16_t", "uint16_t", GetFormalParameterCountAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("expected_nof_properties", "uint16_t", "uint16_t", GetExpectedNofPropertiesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("function_token_offset", "int16_t", "int16_t", GetFunctionTokenOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "int32_t", "int32_t", GetFlagsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("function_literal_id", "int32_t", "int32_t", GetFunctionLiteralIdAddress()));
  return result;
}

const char* TqUncompiledData::GetName() const {
  return "v8::internal::UncompiledData";
}

void TqUncompiledData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitUncompiledData(this);
}

uintptr_t TqUncompiledData::GetInferredNameAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqUncompiledData::GetInferredNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInferredNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqUncompiledData::GetStartPositionAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqUncompiledData::GetStartPositionValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetStartPositionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqUncompiledData::GetEndPositionAddress() const {
  return address_ - i::kHeapObjectTag + 20;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqUncompiledData::GetEndPositionValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetEndPositionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqUncompiledData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("inferred_name", "v8::internal::String", "v8::internal::String", GetInferredNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("start_position", "int32_t", "int32_t", GetStartPositionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("end_position", "int32_t", "int32_t", GetEndPositionAddress()));
  return result;
}

const char* TqUncompiledDataWithoutPreparseData::GetName() const {
  return "v8::internal::UncompiledDataWithoutPreparseData";
}

void TqUncompiledDataWithoutPreparseData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitUncompiledDataWithoutPreparseData(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqUncompiledDataWithoutPreparseData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqUncompiledData::GetProperties(accessor);
  return result;
}

const char* TqUncompiledDataWithPreparseData::GetName() const {
  return "v8::internal::UncompiledDataWithPreparseData";
}

void TqUncompiledDataWithPreparseData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitUncompiledDataWithPreparseData(this);
}

uintptr_t TqUncompiledDataWithPreparseData::GetPreparseDataAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqUncompiledDataWithPreparseData::GetPreparseDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPreparseDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqUncompiledDataWithPreparseData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqUncompiledData::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("preparse_data", "v8::internal::PreparseData", "v8::internal::PreparseData", GetPreparseDataAddress()));
  return result;
}

const char* TqJSBoundFunction::GetName() const {
  return "v8::internal::JSBoundFunction";
}

void TqJSBoundFunction::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSBoundFunction(this);
}

uintptr_t TqJSBoundFunction::GetBoundTargetFunctionAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSBoundFunction::GetBoundTargetFunctionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBoundTargetFunctionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSBoundFunction::GetBoundThisAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSBoundFunction::GetBoundThisValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBoundThisAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSBoundFunction::GetBoundArgumentsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSBoundFunction::GetBoundArgumentsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBoundArgumentsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSBoundFunction::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("bound_target_function", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetBoundTargetFunctionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bound_this", "v8::internal::Object", "v8::internal::Object", GetBoundThisAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bound_arguments", "v8::internal::FixedArray", "v8::internal::FixedArray", GetBoundArgumentsAddress()));
  return result;
}

const char* TqForeign::GetName() const {
  return "v8::internal::Foreign";
}

void TqForeign::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitForeign(this);
}

uintptr_t TqForeign::GetForeignAddressAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqForeign::GetForeignAddressValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetForeignAddressAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqForeign::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("foreign_address", "void*", "void*", GetForeignAddressAddress()));
  return result;
}

const char* TqFreeSpace::GetName() const {
  return "v8::internal::FreeSpace";
}

void TqFreeSpace::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFreeSpace(this);
}

uintptr_t TqFreeSpace::GetSizeAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqFreeSpace::GetSizeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSizeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFreeSpace::GetNextAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqFreeSpace::GetNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFreeSpace::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("size", "v8::internal::Object", "v8::internal::Object", GetSizeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("next", "v8::internal::Object", "v8::internal::Object", GetNextAddress()));
  return result;
}

const char* TqJSArrayBuffer::GetName() const {
  return "v8::internal::JSArrayBuffer";
}

void TqJSArrayBuffer::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSArrayBuffer(this);
}

uintptr_t TqJSArrayBuffer::GetByteLengthAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSArrayBuffer::GetByteLengthValue(d::MemoryAccessor accessor) const {
  uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetByteLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqJSArrayBuffer::GetBackingStoreAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSArrayBuffer::GetBackingStoreValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetBackingStoreAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSArrayBuffer::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("byte_length", "uintptr_t", "uintptr_t", GetByteLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("backing_store", "void*", "void*", GetBackingStoreAddress()));
  return result;
}

const char* TqJSArrayBufferView::GetName() const {
  return "v8::internal::JSArrayBufferView";
}

void TqJSArrayBufferView::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSArrayBufferView(this);
}

uintptr_t TqJSArrayBufferView::GetBufferAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSArrayBufferView::GetBufferValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBufferAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSArrayBufferView::GetByteOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSArrayBufferView::GetByteOffsetValue(d::MemoryAccessor accessor) const {
  uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetByteOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqJSArrayBufferView::GetByteLengthAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSArrayBufferView::GetByteLengthValue(d::MemoryAccessor accessor) const {
  uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetByteLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSArrayBufferView::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("buffer", "v8::internal::JSArrayBuffer", "v8::internal::JSArrayBuffer", GetBufferAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("byte_offset", "uintptr_t", "uintptr_t", GetByteOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("byte_length", "uintptr_t", "uintptr_t", GetByteLengthAddress()));
  return result;
}

const char* TqJSTypedArray::GetName() const {
  return "v8::internal::JSTypedArray";
}

void TqJSTypedArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSTypedArray(this);
}

uintptr_t TqJSTypedArray::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSTypedArray::GetLengthValue(d::MemoryAccessor accessor) const {
  uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqJSTypedArray::GetExternalPointerAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSTypedArray::GetExternalPointerValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetExternalPointerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqJSTypedArray::GetBasePointerAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqJSTypedArray::GetBasePointerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBasePointerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSTypedArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSArrayBufferView::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "uintptr_t", "uintptr_t", GetLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("external_pointer", "void*", "void*", GetExternalPointerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("base_pointer", "v8::internal::Object", "v8::internal::Object", GetBasePointerAddress()));
  return result;
}

const char* TqJSCollection::GetName() const {
  return "v8::internal::JSCollection";
}

void TqJSCollection::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSCollection(this);
}

uintptr_t TqJSCollection::GetTableAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSCollection::GetTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSCollection::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("table", "v8::internal::Object", "v8::internal::Object", GetTableAddress()));
  return result;
}

const char* TqJSSet::GetName() const {
  return "v8::internal::JSSet";
}

void TqJSSet::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSSet(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSSet::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSCollection::GetProperties(accessor);
  return result;
}

const char* TqJSMap::GetName() const {
  return "v8::internal::JSMap";
}

void TqJSMap::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSMap(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSMap::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSCollection::GetProperties(accessor);
  return result;
}

const char* TqJSDate::GetName() const {
  return "v8::internal::JSDate";
}

void TqJSDate::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSDate(this);
}

uintptr_t TqJSDate::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSDate::GetValueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetYearAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSDate::GetYearValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetYearAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetMonthAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSDate::GetMonthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMonthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetDayAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqJSDate::GetDayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetWeekdayAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqJSDate::GetWeekdayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWeekdayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetHourAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqJSDate::GetHourValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHourAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetMinAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqJSDate::GetMinValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMinAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetSecAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqJSDate::GetSecValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSecAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSDate::GetCacheStampAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqJSDate::GetCacheStampValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCacheStampAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSDate::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "v8::internal::Object", "v8::internal::Object", GetValueAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("year", "v8::internal::Object", "v8::internal::Object", GetYearAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("month", "v8::internal::Object", "v8::internal::Object", GetMonthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("day", "v8::internal::Object", "v8::internal::Object", GetDayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("weekday", "v8::internal::Object", "v8::internal::Object", GetWeekdayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("hour", "v8::internal::Object", "v8::internal::Object", GetHourAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("min", "v8::internal::Object", "v8::internal::Object", GetMinAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("sec", "v8::internal::Object", "v8::internal::Object", GetSecAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("cache_stamp", "v8::internal::Object", "v8::internal::Object", GetCacheStampAddress()));
  return result;
}

const char* TqJSGlobalObject::GetName() const {
  return "v8::internal::JSGlobalObject";
}

void TqJSGlobalObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSGlobalObject(this);
}

uintptr_t TqJSGlobalObject::GetNativeContextAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSGlobalObject::GetNativeContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNativeContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGlobalObject::GetGlobalProxyAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSGlobalObject::GetGlobalProxyValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetGlobalProxyAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSGlobalObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("native_context", "v8::internal::Context", "v8::internal::Context", GetNativeContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("global_proxy", "v8::internal::JSGlobalProxy", "v8::internal::JSGlobalProxy", GetGlobalProxyAddress()));
  return result;
}

const char* TqJSAsyncFromSyncIterator::GetName() const {
  return "v8::internal::JSAsyncFromSyncIterator";
}

void TqJSAsyncFromSyncIterator::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSAsyncFromSyncIterator(this);
}

uintptr_t TqJSAsyncFromSyncIterator::GetSyncIteratorAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSAsyncFromSyncIterator::GetSyncIteratorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSyncIteratorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSAsyncFromSyncIterator::GetNextAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSAsyncFromSyncIterator::GetNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSAsyncFromSyncIterator::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("sync_iterator", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetSyncIteratorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("next", "v8::internal::Object", "v8::internal::Object", GetNextAddress()));
  return result;
}

const char* TqJSStringIterator::GetName() const {
  return "v8::internal::JSStringIterator";
}

void TqJSStringIterator::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSStringIterator(this);
}

uintptr_t TqJSStringIterator::GetStringAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSStringIterator::GetStringValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetStringAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSStringIterator::GetNextIndexAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSStringIterator::GetNextIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSStringIterator::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("string", "v8::internal::String", "v8::internal::String", GetStringAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("next_index", "v8::internal::Object", "v8::internal::Object", GetNextIndexAddress()));
  return result;
}

const char* TqTemplateInfo::GetName() const {
  return "v8::internal::TemplateInfo";
}

void TqTemplateInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitTemplateInfo(this);
}

uintptr_t TqTemplateInfo::GetTagAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqTemplateInfo::GetTagValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTagAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqTemplateInfo::GetSerialNumberAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqTemplateInfo::GetSerialNumberValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSerialNumberAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqTemplateInfo::GetNumberOfPropertiesAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqTemplateInfo::GetNumberOfPropertiesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNumberOfPropertiesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqTemplateInfo::GetPropertyListAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqTemplateInfo::GetPropertyListValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPropertyListAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqTemplateInfo::GetPropertyAccessorsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqTemplateInfo::GetPropertyAccessorsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPropertyAccessorsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqTemplateInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("tag", "v8::internal::Object", "v8::internal::Object", GetTagAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("serial_number", "v8::internal::Object", "v8::internal::Object", GetSerialNumberAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("number_of_properties", "v8::internal::Object", "v8::internal::Object", GetNumberOfPropertiesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("property_list", "v8::internal::Object", "v8::internal::Object", GetPropertyListAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("property_accessors", "v8::internal::Object", "v8::internal::Object", GetPropertyAccessorsAddress()));
  return result;
}

const char* TqTemplateObjectDescription::GetName() const {
  return "v8::internal::TemplateObjectDescription";
}

void TqTemplateObjectDescription::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitTemplateObjectDescription(this);
}

uintptr_t TqTemplateObjectDescription::GetRawStringsAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqTemplateObjectDescription::GetRawStringsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRawStringsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqTemplateObjectDescription::GetCookedStringsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqTemplateObjectDescription::GetCookedStringsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCookedStringsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqTemplateObjectDescription::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("raw_strings", "v8::internal::FixedArray", "v8::internal::FixedArray", GetRawStringsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("cooked_strings", "v8::internal::FixedArray", "v8::internal::FixedArray", GetCookedStringsAddress()));
  return result;
}

const char* TqFunctionTemplateRareData::GetName() const {
  return "v8::internal::FunctionTemplateRareData";
}

void TqFunctionTemplateRareData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFunctionTemplateRareData(this);
}

uintptr_t TqFunctionTemplateRareData::GetPrototypeTemplateAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetPrototypeTemplateValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrototypeTemplateAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetPrototypeProviderTemplateAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetPrototypeProviderTemplateValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrototypeProviderTemplateAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetParentTemplateAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetParentTemplateValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetParentTemplateAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetNamedPropertyHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetNamedPropertyHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNamedPropertyHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetIndexedPropertyHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetIndexedPropertyHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIndexedPropertyHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetInstanceTemplateAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetInstanceTemplateValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInstanceTemplateAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetInstanceCallHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetInstanceCallHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInstanceCallHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateRareData::GetAccessCheckInfoAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqFunctionTemplateRareData::GetAccessCheckInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetAccessCheckInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFunctionTemplateRareData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("prototype_template", "v8::internal::Object", "v8::internal::Object", GetPrototypeTemplateAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("prototype_provider_template", "v8::internal::Object", "v8::internal::Object", GetPrototypeProviderTemplateAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("parent_template", "v8::internal::Object", "v8::internal::Object", GetParentTemplateAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("named_property_handler", "v8::internal::Object", "v8::internal::Object", GetNamedPropertyHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("indexed_property_handler", "v8::internal::Object", "v8::internal::Object", GetIndexedPropertyHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("instance_template", "v8::internal::Object", "v8::internal::Object", GetInstanceTemplateAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("instance_call_handler", "v8::internal::Object", "v8::internal::Object", GetInstanceCallHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("access_check_info", "v8::internal::Object", "v8::internal::Object", GetAccessCheckInfoAddress()));
  return result;
}

const char* TqFunctionTemplateInfo::GetName() const {
  return "v8::internal::FunctionTemplateInfo";
}

void TqFunctionTemplateInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFunctionTemplateInfo(this);
}

uintptr_t TqFunctionTemplateInfo::GetCallCodeAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetCallCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCallCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetClassNameAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetClassNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetClassNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetSignatureAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetSignatureValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSignatureAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetRareDataAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetRareDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRareDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetSharedFunctionInfoAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetSharedFunctionInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSharedFunctionInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetFlagAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetFlagValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 96;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFunctionTemplateInfo::GetCachedPropertyNameAddress() const {
  return address_ - i::kHeapObjectTag + 104;
}

Value<uintptr_t> TqFunctionTemplateInfo::GetCachedPropertyNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCachedPropertyNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFunctionTemplateInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqTemplateInfo::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("call_code", "v8::internal::Object", "v8::internal::Object", GetCallCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("class_name", "v8::internal::Object", "v8::internal::Object", GetClassNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("signature", "v8::internal::Object", "v8::internal::Object", GetSignatureAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("rare_data", "v8::internal::HeapObject", "v8::internal::HeapObject", GetRareDataAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("shared_function_info", "v8::internal::Object", "v8::internal::Object", GetSharedFunctionInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flag", "v8::internal::Object", "v8::internal::Object", GetFlagAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "v8::internal::Object", "v8::internal::Object", GetLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("cached_property_name", "v8::internal::Object", "v8::internal::Object", GetCachedPropertyNameAddress()));
  return result;
}

const char* TqObjectTemplateInfo::GetName() const {
  return "v8::internal::ObjectTemplateInfo";
}

void TqObjectTemplateInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitObjectTemplateInfo(this);
}

uintptr_t TqObjectTemplateInfo::GetConstructorAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqObjectTemplateInfo::GetConstructorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetConstructorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqObjectTemplateInfo::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqObjectTemplateInfo::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqObjectTemplateInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqTemplateInfo::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("constructor", "v8::internal::Object", "v8::internal::Object", GetConstructorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::Object", "v8::internal::Object", GetDataAddress()));
  return result;
}

const char* TqPropertyArray::GetName() const {
  return "v8::internal::PropertyArray";
}

void TqPropertyArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPropertyArray(this);
}

uintptr_t TqPropertyArray::GetLengthAndHashAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPropertyArray::GetLengthAndHashValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLengthAndHashAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPropertyArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("length_and_hash", "v8::internal::Object", "v8::internal::Object", GetLengthAndHashAddress()));
  return result;
}

const char* TqPropertyCell::GetName() const {
  return "v8::internal::PropertyCell";
}

void TqPropertyCell::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPropertyCell(this);
}

uintptr_t TqPropertyCell::GetNameAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPropertyCell::GetNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPropertyCell::GetPropertyDetailsRawAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqPropertyCell::GetPropertyDetailsRawValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPropertyDetailsRawAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPropertyCell::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqPropertyCell::GetValueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPropertyCell::GetDependentCodeAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqPropertyCell::GetDependentCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDependentCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPropertyCell::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("name", "v8::internal::Name", "v8::internal::Name", GetNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("property_details_raw", "v8::internal::Object", "v8::internal::Object", GetPropertyDetailsRawAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "v8::internal::Object", "v8::internal::Object", GetValueAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("dependent_code", "v8::internal::WeakFixedArray", "v8::internal::WeakFixedArray", GetDependentCodeAddress()));
  return result;
}

const char* TqJSDataView::GetName() const {
  return "v8::internal::JSDataView";
}

void TqJSDataView::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSDataView(this);
}

uintptr_t TqJSDataView::GetDataPointerAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqJSDataView::GetDataPointerValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetDataPointerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSDataView::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSArrayBufferView::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("data_pointer", "void*", "void*", GetDataPointerAddress()));
  return result;
}

const char* TqInterceptorInfo::GetName() const {
  return "v8::internal::InterceptorInfo";
}

void TqInterceptorInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitInterceptorInfo(this);
}

uintptr_t TqInterceptorInfo::GetGetterAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqInterceptorInfo::GetGetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetGetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetSetterAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqInterceptorInfo::GetSetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetQueryAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqInterceptorInfo::GetQueryValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetQueryAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetDescriptorAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqInterceptorInfo::GetDescriptorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDescriptorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetDeleterAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqInterceptorInfo::GetDeleterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDeleterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetEnumeratorAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqInterceptorInfo::GetEnumeratorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEnumeratorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetDefinerAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqInterceptorInfo::GetDefinerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDefinerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqInterceptorInfo::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqInterceptorInfo::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqInterceptorInfo::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqInterceptorInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("getter", "v8::internal::Object", "v8::internal::Object", GetGetterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("setter", "v8::internal::Object", "v8::internal::Object", GetSetterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("query", "v8::internal::Object", "v8::internal::Object", GetQueryAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("descriptor", "v8::internal::Object", "v8::internal::Object", GetDescriptorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("deleter", "v8::internal::Object", "v8::internal::Object", GetDeleterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("enumerator", "v8::internal::Object", "v8::internal::Object", GetEnumeratorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("definer", "v8::internal::Object", "v8::internal::Object", GetDefinerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::Object", "v8::internal::Object", GetDataAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  return result;
}

const char* TqAccessCheckInfo::GetName() const {
  return "v8::internal::AccessCheckInfo";
}

void TqAccessCheckInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAccessCheckInfo(this);
}

uintptr_t TqAccessCheckInfo::GetCallbackAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAccessCheckInfo::GetCallbackValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCallbackAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessCheckInfo::GetNamedInterceptorAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqAccessCheckInfo::GetNamedInterceptorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNamedInterceptorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessCheckInfo::GetIndexedInterceptorAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqAccessCheckInfo::GetIndexedInterceptorValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIndexedInterceptorAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessCheckInfo::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqAccessCheckInfo::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAccessCheckInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("callback", "v8::internal::Object", "v8::internal::Object", GetCallbackAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("named_interceptor", "v8::internal::Object", "v8::internal::Object", GetNamedInterceptorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("indexed_interceptor", "v8::internal::Object", "v8::internal::Object", GetIndexedInterceptorAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::Object", "v8::internal::Object", GetDataAddress()));
  return result;
}

const char* TqArrayBoilerplateDescription::GetName() const {
  return "v8::internal::ArrayBoilerplateDescription";
}

void TqArrayBoilerplateDescription::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitArrayBoilerplateDescription(this);
}

uintptr_t TqArrayBoilerplateDescription::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqArrayBoilerplateDescription::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqArrayBoilerplateDescription::GetConstantElementsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqArrayBoilerplateDescription::GetConstantElementsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetConstantElementsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqArrayBoilerplateDescription::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("constant_elements", "v8::internal::FixedArrayBase", "v8::internal::FixedArrayBase", GetConstantElementsAddress()));
  return result;
}

const char* TqAliasedArgumentsEntry::GetName() const {
  return "v8::internal::AliasedArgumentsEntry";
}

void TqAliasedArgumentsEntry::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAliasedArgumentsEntry(this);
}

uintptr_t TqAliasedArgumentsEntry::GetAliasedContextSlotAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAliasedArgumentsEntry::GetAliasedContextSlotValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetAliasedContextSlotAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAliasedArgumentsEntry::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("aliased_context_slot", "v8::internal::Object", "v8::internal::Object", GetAliasedContextSlotAddress()));
  return result;
}

const char* TqCell::GetName() const {
  return "v8::internal::Cell";
}

void TqCell::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitCell(this);
}

uintptr_t TqCell::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqCell::GetValueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqCell::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "v8::internal::Object", "v8::internal::Object", GetValueAddress()));
  return result;
}

const char* TqDataHandler::GetName() const {
  return "v8::internal::DataHandler";
}

void TqDataHandler::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitDataHandler(this);
}

uintptr_t TqDataHandler::GetSmiHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqDataHandler::GetSmiHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSmiHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDataHandler::GetValidityCellAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqDataHandler::GetValidityCellValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValidityCellAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDataHandler::GetData1Address() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqDataHandler::GetData1Value(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetData1Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDataHandler::GetData2Address() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqDataHandler::GetData2Value(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetData2Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDataHandler::GetData3Address() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqDataHandler::GetData3Value(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetData3Address(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqDataHandler::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("smi_handler", "v8::internal::Object", "v8::internal::Object", GetSmiHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("validity_cell", "v8::internal::Object", "v8::internal::Object", GetValidityCellAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data_1", "v8::internal::Object", "v8::internal::Object", GetData1Address()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data_2", "v8::internal::Object", "v8::internal::Object", GetData2Address()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data_3", "v8::internal::Object", "v8::internal::Object", GetData3Address()));
  return result;
}

const char* TqJSGeneratorObject::GetName() const {
  return "v8::internal::JSGeneratorObject";
}

void TqJSGeneratorObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSGeneratorObject(this);
}

uintptr_t TqJSGeneratorObject::GetFunctionAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSGeneratorObject::GetFunctionValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFunctionAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGeneratorObject::GetContextAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSGeneratorObject::GetContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGeneratorObject::GetReceiverAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSGeneratorObject::GetReceiverValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetReceiverAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGeneratorObject::GetInputOrDebugPosAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqJSGeneratorObject::GetInputOrDebugPosValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInputOrDebugPosAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGeneratorObject::GetResumeModeAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqJSGeneratorObject::GetResumeModeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetResumeModeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGeneratorObject::GetContinuationAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqJSGeneratorObject::GetContinuationValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContinuationAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSGeneratorObject::GetParametersAndRegistersAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqJSGeneratorObject::GetParametersAndRegistersValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetParametersAndRegistersAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSGeneratorObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("function", "v8::internal::JSFunction", "v8::internal::JSFunction", GetFunctionAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("context", "v8::internal::Context", "v8::internal::Context", GetContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("receiver", "v8::internal::Object", "v8::internal::Object", GetReceiverAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("input_or_debug_pos", "v8::internal::Object", "v8::internal::Object", GetInputOrDebugPosAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("resume_mode", "v8::internal::Object", "v8::internal::Object", GetResumeModeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("continuation", "v8::internal::Object", "v8::internal::Object", GetContinuationAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("parameters_and_registers", "v8::internal::FixedArray", "v8::internal::FixedArray", GetParametersAndRegistersAddress()));
  return result;
}

const char* TqJSAsyncFunctionObject::GetName() const {
  return "v8::internal::JSAsyncFunctionObject";
}

void TqJSAsyncFunctionObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSAsyncFunctionObject(this);
}

uintptr_t TqJSAsyncFunctionObject::GetPromiseAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqJSAsyncFunctionObject::GetPromiseValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSAsyncFunctionObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSGeneratorObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("promise", "v8::internal::JSPromise", "v8::internal::JSPromise", GetPromiseAddress()));
  return result;
}

const char* TqJSAsyncGeneratorObject::GetName() const {
  return "v8::internal::JSAsyncGeneratorObject";
}

void TqJSAsyncGeneratorObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSAsyncGeneratorObject(this);
}

uintptr_t TqJSAsyncGeneratorObject::GetQueueAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqJSAsyncGeneratorObject::GetQueueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetQueueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSAsyncGeneratorObject::GetIsAwaitingAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqJSAsyncGeneratorObject::GetIsAwaitingValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIsAwaitingAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSAsyncGeneratorObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSGeneratorObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("queue", "v8::internal::HeapObject", "v8::internal::HeapObject", GetQueueAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("is_awaiting", "v8::internal::Object", "v8::internal::Object", GetIsAwaitingAddress()));
  return result;
}

const char* TqJSPromise::GetName() const {
  return "v8::internal::JSPromise";
}

void TqJSPromise::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSPromise(this);
}

uintptr_t TqJSPromise::GetReactionsOrResultAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSPromise::GetReactionsOrResultValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetReactionsOrResultAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSPromise::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSPromise::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSPromise::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("reactions_or_result", "v8::internal::Object", "v8::internal::Object", GetReactionsOrResultAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  return result;
}

const char* TqMicrotask::GetName() const {
  return "v8::internal::Microtask";
}

void TqMicrotask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitMicrotask(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqMicrotask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  return result;
}

const char* TqCallbackTask::GetName() const {
  return "v8::internal::CallbackTask";
}

void TqCallbackTask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitCallbackTask(this);
}

uintptr_t TqCallbackTask::GetCallbackAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqCallbackTask::GetCallbackValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCallbackAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqCallbackTask::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqCallbackTask::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqCallbackTask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqMicrotask::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("callback", "v8::internal::Foreign", "v8::internal::Foreign", GetCallbackAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::Foreign", "v8::internal::Foreign", GetDataAddress()));
  return result;
}

const char* TqCallableTask::GetName() const {
  return "v8::internal::CallableTask";
}

void TqCallableTask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitCallableTask(this);
}

uintptr_t TqCallableTask::GetCallableAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqCallableTask::GetCallableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCallableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqCallableTask::GetContextAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqCallableTask::GetContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqCallableTask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqMicrotask::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("callable", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetCallableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("context", "v8::internal::Context", "v8::internal::Context", GetContextAddress()));
  return result;
}

const char* TqStackFrameInfo::GetName() const {
  return "v8::internal::StackFrameInfo";
}

void TqStackFrameInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitStackFrameInfo(this);
}

uintptr_t TqStackFrameInfo::GetLineNumberAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqStackFrameInfo::GetLineNumberValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLineNumberAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetColumnNumberAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqStackFrameInfo::GetColumnNumberValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetColumnNumberAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetPromiseAllIndexAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqStackFrameInfo::GetPromiseAllIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseAllIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetScriptIdAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqStackFrameInfo::GetScriptIdValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptIdAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetScriptNameAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqStackFrameInfo::GetScriptNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetScriptNameOrSourceUrlAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqStackFrameInfo::GetScriptNameOrSourceUrlValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptNameOrSourceUrlAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetFunctionNameAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqStackFrameInfo::GetFunctionNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFunctionNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetMethodNameAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqStackFrameInfo::GetMethodNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMethodNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetTypeNameAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqStackFrameInfo::GetTypeNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTypeNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetEvalOriginAddress() const {
  return address_ - i::kHeapObjectTag + 80;
}

Value<uintptr_t> TqStackFrameInfo::GetEvalOriginValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEvalOriginAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetWasmModuleNameAddress() const {
  return address_ - i::kHeapObjectTag + 88;
}

Value<uintptr_t> TqStackFrameInfo::GetWasmModuleNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWasmModuleNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetWasmInstanceAddress() const {
  return address_ - i::kHeapObjectTag + 96;
}

Value<uintptr_t> TqStackFrameInfo::GetWasmInstanceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWasmInstanceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackFrameInfo::GetFlagAddress() const {
  return address_ - i::kHeapObjectTag + 104;
}

Value<uintptr_t> TqStackFrameInfo::GetFlagValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqStackFrameInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("line_number", "v8::internal::Object", "v8::internal::Object", GetLineNumberAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("column_number", "v8::internal::Object", "v8::internal::Object", GetColumnNumberAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("promise_all_index", "v8::internal::Object", "v8::internal::Object", GetPromiseAllIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script_id", "v8::internal::Object", "v8::internal::Object", GetScriptIdAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetScriptNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script_name_or_source_url", "v8::internal::HeapObject", "v8::internal::HeapObject", GetScriptNameOrSourceUrlAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("function_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetFunctionNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("method_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetMethodNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("type_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetTypeNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("eval_origin", "v8::internal::HeapObject", "v8::internal::HeapObject", GetEvalOriginAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("wasm_module_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetWasmModuleNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("wasm_instance", "v8::internal::HeapObject", "v8::internal::HeapObject", GetWasmInstanceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flag", "v8::internal::Object", "v8::internal::Object", GetFlagAddress()));
  return result;
}

const char* TqStackTraceFrame::GetName() const {
  return "v8::internal::StackTraceFrame";
}

void TqStackTraceFrame::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitStackTraceFrame(this);
}

uintptr_t TqStackTraceFrame::GetFrameArrayAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqStackTraceFrame::GetFrameArrayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFrameArrayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackTraceFrame::GetFrameIndexAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqStackTraceFrame::GetFrameIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFrameIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackTraceFrame::GetFrameInfoAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqStackTraceFrame::GetFrameInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFrameInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqStackTraceFrame::GetIdAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqStackTraceFrame::GetIdValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIdAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqStackTraceFrame::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("frame_array", "v8::internal::HeapObject", "v8::internal::HeapObject", GetFrameArrayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("frame_index", "v8::internal::Object", "v8::internal::Object", GetFrameIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("frame_info", "v8::internal::HeapObject", "v8::internal::HeapObject", GetFrameInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("id", "v8::internal::Object", "v8::internal::Object", GetIdAddress()));
  return result;
}

const char* TqClassPositions::GetName() const {
  return "v8::internal::ClassPositions";
}

void TqClassPositions::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitClassPositions(this);
}

uintptr_t TqClassPositions::GetStartAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqClassPositions::GetStartValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetStartAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqClassPositions::GetEndAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqClassPositions::GetEndValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEndAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqClassPositions::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("start", "v8::internal::Object", "v8::internal::Object", GetStartAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("end", "v8::internal::Object", "v8::internal::Object", GetEndAddress()));
  return result;
}

const char* TqWasmExportedFunctionData::GetName() const {
  return "v8::internal::WasmExportedFunctionData";
}

void TqWasmExportedFunctionData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmExportedFunctionData(this);
}

uintptr_t TqWasmExportedFunctionData::GetWrapperCodeAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetWrapperCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWrapperCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExportedFunctionData::GetInstanceAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetInstanceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInstanceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExportedFunctionData::GetJumpTableOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetJumpTableOffsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetJumpTableOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExportedFunctionData::GetFunctionIndexAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetFunctionIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFunctionIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExportedFunctionData::GetCWrapperCodeAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetCWrapperCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCWrapperCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExportedFunctionData::GetWasmCallTargetAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetWasmCallTargetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWasmCallTargetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExportedFunctionData::GetPackedArgsSizeAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqWasmExportedFunctionData::GetPackedArgsSizeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPackedArgsSizeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmExportedFunctionData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("wrapper_code", "v8::internal::HeapObject", "v8::internal::HeapObject", GetWrapperCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("instance", "v8::internal::JSObject", "v8::internal::JSObject", GetInstanceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("jump_table_offset", "v8::internal::Object", "v8::internal::Object", GetJumpTableOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("function_index", "v8::internal::Object", "v8::internal::Object", GetFunctionIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("c_wrapper_code", "v8::internal::Object", "v8::internal::Object", GetCWrapperCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("wasm_call_target", "v8::internal::Object", "v8::internal::Object", GetWasmCallTargetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("packed_args_size", "v8::internal::Object", "v8::internal::Object", GetPackedArgsSizeAddress()));
  return result;
}

const char* TqWasmJSFunctionData::GetName() const {
  return "v8::internal::WasmJSFunctionData";
}

void TqWasmJSFunctionData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmJSFunctionData(this);
}

uintptr_t TqWasmJSFunctionData::GetCallableAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWasmJSFunctionData::GetCallableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCallableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmJSFunctionData::GetWrapperCodeAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqWasmJSFunctionData::GetWrapperCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWrapperCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmJSFunctionData::GetSerializedReturnCountAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmJSFunctionData::GetSerializedReturnCountValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSerializedReturnCountAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmJSFunctionData::GetSerializedParameterCountAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmJSFunctionData::GetSerializedParameterCountValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSerializedParameterCountAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmJSFunctionData::GetSerializedSignatureAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmJSFunctionData::GetSerializedSignatureValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSerializedSignatureAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmJSFunctionData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("callable", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetCallableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("wrapper_code", "v8::internal::HeapObject", "v8::internal::HeapObject", GetWrapperCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("serialized_return_count", "v8::internal::Object", "v8::internal::Object", GetSerializedReturnCountAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("serialized_parameter_count", "v8::internal::Object", "v8::internal::Object", GetSerializedParameterCountAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("serialized_signature", "v8::internal::ByteArray", "v8::internal::ByteArray", GetSerializedSignatureAddress()));
  return result;
}

const char* TqWasmCapiFunctionData::GetName() const {
  return "v8::internal::WasmCapiFunctionData";
}

void TqWasmCapiFunctionData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmCapiFunctionData(this);
}

uintptr_t TqWasmCapiFunctionData::GetCallTargetAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqWasmCapiFunctionData::GetCallTargetValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetCallTargetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqWasmCapiFunctionData::GetEmbedderDataAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqWasmCapiFunctionData::GetEmbedderDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEmbedderDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmCapiFunctionData::GetWrapperCodeAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmCapiFunctionData::GetWrapperCodeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWrapperCodeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmCapiFunctionData::GetSerializedSignatureAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmCapiFunctionData::GetSerializedSignatureValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSerializedSignatureAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmCapiFunctionData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("call_target", "void*", "void*", GetCallTargetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("embedder_data", "v8::internal::Foreign", "v8::internal::Foreign", GetEmbedderDataAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("wrapper_code", "v8::internal::HeapObject", "v8::internal::HeapObject", GetWrapperCodeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("serialized_signature", "v8::internal::ByteArray", "v8::internal::ByteArray", GetSerializedSignatureAddress()));
  return result;
}

const char* TqWasmIndirectFunctionTable::GetName() const {
  return "v8::internal::WasmIndirectFunctionTable";
}

void TqWasmIndirectFunctionTable::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmIndirectFunctionTable(this);
}

uintptr_t TqWasmIndirectFunctionTable::GetSizeAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqWasmIndirectFunctionTable::GetSizeValue(d::MemoryAccessor accessor) const {
  uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetSizeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqWasmIndirectFunctionTable::GetOptionalPaddingAddress() const {
  return address_ - i::kHeapObjectTag + 12;
}

Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqWasmIndirectFunctionTable::GetOptionalPaddingValue(d::MemoryAccessor accessor) const {
  uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetOptionalPaddingAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqWasmIndirectFunctionTable::GetSigIdsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqWasmIndirectFunctionTable::GetSigIdsValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetSigIdsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqWasmIndirectFunctionTable::GetTargetsAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqWasmIndirectFunctionTable::GetTargetsValue(d::MemoryAccessor accessor) const {
  void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetTargetsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqWasmIndirectFunctionTable::GetManagedNativeAllocationsAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmIndirectFunctionTable::GetManagedNativeAllocationsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetManagedNativeAllocationsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmIndirectFunctionTable::GetRefsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmIndirectFunctionTable::GetRefsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRefsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmIndirectFunctionTable::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("size", "uint32_t", "uint32_t", GetSizeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("optional_padding", "uint32_t", "uint32_t", GetOptionalPaddingAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("sig_ids", "void*", "void*", GetSigIdsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("targets", "void*", "void*", GetTargetsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("managed_native_allocations", "v8::internal::HeapObject", "v8::internal::HeapObject", GetManagedNativeAllocationsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("refs", "v8::internal::FixedArray", "v8::internal::FixedArray", GetRefsAddress()));
  return result;
}

const char* TqWasmDebugInfo::GetName() const {
  return "v8::internal::WasmDebugInfo";
}

void TqWasmDebugInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmDebugInfo(this);
}

uintptr_t TqWasmDebugInfo::GetInstanceAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWasmDebugInfo::GetInstanceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInstanceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmDebugInfo::GetInterpreterHandleAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqWasmDebugInfo::GetInterpreterHandleValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInterpreterHandleAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmDebugInfo::GetLocalsNamesAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmDebugInfo::GetLocalsNamesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLocalsNamesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmDebugInfo::GetCWasmEntriesAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmDebugInfo::GetCWasmEntriesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCWasmEntriesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmDebugInfo::GetCWasmEntryMapAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmDebugInfo::GetCWasmEntryMapValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCWasmEntryMapAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmDebugInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("instance", "v8::internal::JSObject", "v8::internal::JSObject", GetInstanceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("interpreter_handle", "v8::internal::HeapObject", "v8::internal::HeapObject", GetInterpreterHandleAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("locals_names", "v8::internal::HeapObject", "v8::internal::HeapObject", GetLocalsNamesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("c_wasm_entries", "v8::internal::HeapObject", "v8::internal::HeapObject", GetCWasmEntriesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("c_wasm_entry_map", "v8::internal::HeapObject", "v8::internal::HeapObject", GetCWasmEntryMapAddress()));
  return result;
}

const char* TqWasmExceptionTag::GetName() const {
  return "v8::internal::WasmExceptionTag";
}

void TqWasmExceptionTag::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmExceptionTag(this);
}

uintptr_t TqWasmExceptionTag::GetIndexAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWasmExceptionTag::GetIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmExceptionTag::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("index", "v8::internal::Object", "v8::internal::Object", GetIndexAddress()));
  return result;
}

const char* TqAsyncGeneratorRequest::GetName() const {
  return "v8::internal::AsyncGeneratorRequest";
}

void TqAsyncGeneratorRequest::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAsyncGeneratorRequest(this);
}

uintptr_t TqAsyncGeneratorRequest::GetNextAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAsyncGeneratorRequest::GetNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAsyncGeneratorRequest::GetResumeModeAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqAsyncGeneratorRequest::GetResumeModeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetResumeModeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAsyncGeneratorRequest::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqAsyncGeneratorRequest::GetValueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAsyncGeneratorRequest::GetPromiseAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqAsyncGeneratorRequest::GetPromiseValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAsyncGeneratorRequest::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("next", "v8::internal::HeapObject", "v8::internal::HeapObject", GetNextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("resume_mode", "v8::internal::Object", "v8::internal::Object", GetResumeModeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "v8::internal::Object", "v8::internal::Object", GetValueAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("promise", "v8::internal::JSPromise", "v8::internal::JSPromise", GetPromiseAddress()));
  return result;
}

const char* TqSourceTextModuleInfoEntry::GetName() const {
  return "v8::internal::SourceTextModuleInfoEntry";
}

void TqSourceTextModuleInfoEntry::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitSourceTextModuleInfoEntry(this);
}

uintptr_t TqSourceTextModuleInfoEntry::GetExportNameAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetExportNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExportNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModuleInfoEntry::GetLocalNameAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetLocalNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetLocalNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModuleInfoEntry::GetImportNameAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetImportNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetImportNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModuleInfoEntry::GetModuleRequestAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetModuleRequestValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetModuleRequestAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModuleInfoEntry::GetCellIndexAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetCellIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCellIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModuleInfoEntry::GetBegPosAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetBegPosValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBegPosAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqSourceTextModuleInfoEntry::GetEndPosAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqSourceTextModuleInfoEntry::GetEndPosValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEndPosAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqSourceTextModuleInfoEntry::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("export_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetExportNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("local_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetLocalNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("import_name", "v8::internal::HeapObject", "v8::internal::HeapObject", GetImportNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("module_request", "v8::internal::Object", "v8::internal::Object", GetModuleRequestAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("cell_index", "v8::internal::Object", "v8::internal::Object", GetCellIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("beg_pos", "v8::internal::Object", "v8::internal::Object", GetBegPosAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("end_pos", "v8::internal::Object", "v8::internal::Object", GetEndPosAddress()));
  return result;
}

const char* TqPromiseCapability::GetName() const {
  return "v8::internal::PromiseCapability";
}

void TqPromiseCapability::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPromiseCapability(this);
}

uintptr_t TqPromiseCapability::GetPromiseAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPromiseCapability::GetPromiseValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseCapability::GetResolveAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqPromiseCapability::GetResolveValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetResolveAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseCapability::GetRejectAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqPromiseCapability::GetRejectValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRejectAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPromiseCapability::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("promise", "v8::internal::HeapObject", "v8::internal::HeapObject", GetPromiseAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("resolve", "v8::internal::Object", "v8::internal::Object", GetResolveAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("reject", "v8::internal::Object", "v8::internal::Object", GetRejectAddress()));
  return result;
}

const char* TqPromiseReaction::GetName() const {
  return "v8::internal::PromiseReaction";
}

void TqPromiseReaction::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPromiseReaction(this);
}

uintptr_t TqPromiseReaction::GetNextAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPromiseReaction::GetNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseReaction::GetRejectHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqPromiseReaction::GetRejectHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRejectHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseReaction::GetFulfillHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqPromiseReaction::GetFulfillHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFulfillHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseReaction::GetPromiseOrCapabilityAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqPromiseReaction::GetPromiseOrCapabilityValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseOrCapabilityAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPromiseReaction::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("next", "v8::internal::Object", "v8::internal::Object", GetNextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("reject_handler", "v8::internal::HeapObject", "v8::internal::HeapObject", GetRejectHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("fulfill_handler", "v8::internal::HeapObject", "v8::internal::HeapObject", GetFulfillHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("promise_or_capability", "v8::internal::HeapObject", "v8::internal::HeapObject", GetPromiseOrCapabilityAddress()));
  return result;
}

const char* TqPromiseReactionJobTask::GetName() const {
  return "v8::internal::PromiseReactionJobTask";
}

void TqPromiseReactionJobTask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPromiseReactionJobTask(this);
}

uintptr_t TqPromiseReactionJobTask::GetArgumentAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPromiseReactionJobTask::GetArgumentValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetArgumentAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseReactionJobTask::GetContextAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqPromiseReactionJobTask::GetContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseReactionJobTask::GetHandlerAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqPromiseReactionJobTask::GetHandlerValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHandlerAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseReactionJobTask::GetPromiseOrCapabilityAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqPromiseReactionJobTask::GetPromiseOrCapabilityValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseOrCapabilityAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPromiseReactionJobTask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqMicrotask::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("argument", "v8::internal::Object", "v8::internal::Object", GetArgumentAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("context", "v8::internal::Context", "v8::internal::Context", GetContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("handler", "v8::internal::HeapObject", "v8::internal::HeapObject", GetHandlerAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("promise_or_capability", "v8::internal::HeapObject", "v8::internal::HeapObject", GetPromiseOrCapabilityAddress()));
  return result;
}

const char* TqPromiseFulfillReactionJobTask::GetName() const {
  return "v8::internal::PromiseFulfillReactionJobTask";
}

void TqPromiseFulfillReactionJobTask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPromiseFulfillReactionJobTask(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqPromiseFulfillReactionJobTask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqPromiseReactionJobTask::GetProperties(accessor);
  return result;
}

const char* TqPromiseRejectReactionJobTask::GetName() const {
  return "v8::internal::PromiseRejectReactionJobTask";
}

void TqPromiseRejectReactionJobTask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPromiseRejectReactionJobTask(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqPromiseRejectReactionJobTask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqPromiseReactionJobTask::GetProperties(accessor);
  return result;
}

const char* TqPromiseResolveThenableJobTask::GetName() const {
  return "v8::internal::PromiseResolveThenableJobTask";
}

void TqPromiseResolveThenableJobTask::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitPromiseResolveThenableJobTask(this);
}

uintptr_t TqPromiseResolveThenableJobTask::GetContextAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqPromiseResolveThenableJobTask::GetContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseResolveThenableJobTask::GetPromiseToResolveAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqPromiseResolveThenableJobTask::GetPromiseToResolveValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPromiseToResolveAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseResolveThenableJobTask::GetThenAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqPromiseResolveThenableJobTask::GetThenValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetThenAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqPromiseResolveThenableJobTask::GetThenableAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqPromiseResolveThenableJobTask::GetThenableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetThenableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqPromiseResolveThenableJobTask::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqMicrotask::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("context", "v8::internal::Context", "v8::internal::Context", GetContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("promise_to_resolve", "v8::internal::JSPromise", "v8::internal::JSPromise", GetPromiseToResolveAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("then", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetThenAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("thenable", "v8::internal::JSReceiver", "v8::internal::JSReceiver", GetThenableAddress()));
  return result;
}

const char* TqJSRegExp::GetName() const {
  return "v8::internal::JSRegExp";
}

void TqJSRegExp::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSRegExp(this);
}

uintptr_t TqJSRegExp::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSRegExp::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSRegExp::GetSourceAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSRegExp::GetSourceValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSourceAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSRegExp::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSRegExp::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSRegExp::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::HeapObject", "v8::internal::HeapObject", GetDataAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("source", "v8::internal::HeapObject", "v8::internal::HeapObject", GetSourceAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  return result;
}

const char* TqJSRegExpResult::GetName() const {
  return "v8::internal::JSRegExpResult";
}

void TqJSRegExpResult::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSRegExpResult(this);
}

uintptr_t TqJSRegExpResult::GetIndexAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSRegExpResult::GetIndexValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIndexAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSRegExpResult::GetInputAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSRegExpResult::GetInputValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInputAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSRegExpResult::GetGroupsAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqJSRegExpResult::GetGroupsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetGroupsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSRegExpResult::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSArray::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("index", "v8::internal::Object", "v8::internal::Object", GetIndexAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("input", "v8::internal::Object", "v8::internal::Object", GetInputAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("groups", "v8::internal::Object", "v8::internal::Object", GetGroupsAddress()));
  return result;
}

const char* TqJSRegExpStringIterator::GetName() const {
  return "v8::internal::JSRegExpStringIterator";
}

void TqJSRegExpStringIterator::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSRegExpStringIterator(this);
}

uintptr_t TqJSRegExpStringIterator::GetIteratingRegExpAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSRegExpStringIterator::GetIteratingRegExpValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIteratingRegExpAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSRegExpStringIterator::GetIteratedStringAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSRegExpStringIterator::GetIteratedStringValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetIteratedStringAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSRegExpStringIterator::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSRegExpStringIterator::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSRegExpStringIterator::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("iterating_reg_exp", "v8::internal::Object", "v8::internal::Object", GetIteratingRegExpAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("iterated_string", "v8::internal::String", "v8::internal::String", GetIteratedStringAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  return result;
}

const char* TqRegExpMatchInfo::GetName() const {
  return "v8::internal::RegExpMatchInfo";
}

void TqRegExpMatchInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitRegExpMatchInfo(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqRegExpMatchInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqFixedArray::GetProperties(accessor);
  return result;
}

const char* TqAccessorInfo::GetName() const {
  return "v8::internal::AccessorInfo";
}

void TqAccessorInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAccessorInfo(this);
}

uintptr_t TqAccessorInfo::GetNameAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAccessorInfo::GetNameValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNameAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorInfo::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqAccessorInfo::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorInfo::GetExpectedReceiverTypeAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqAccessorInfo::GetExpectedReceiverTypeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExpectedReceiverTypeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorInfo::GetSetterAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqAccessorInfo::GetSetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorInfo::GetGetterAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqAccessorInfo::GetGetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetGetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorInfo::GetJsGetterAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqAccessorInfo::GetJsGetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetJsGetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorInfo::GetDataAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqAccessorInfo::GetDataValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDataAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAccessorInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("name", "v8::internal::Object", "v8::internal::Object", GetNameAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("expected_receiver_type", "v8::internal::Object", "v8::internal::Object", GetExpectedReceiverTypeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("setter", "v8::internal::Object", "v8::internal::Object", GetSetterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("getter", "v8::internal::Object", "v8::internal::Object", GetGetterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("js_getter", "v8::internal::Object", "v8::internal::Object", GetJsGetterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("data", "v8::internal::Object", "v8::internal::Object", GetDataAddress()));
  return result;
}

const char* TqAccessorPair::GetName() const {
  return "v8::internal::AccessorPair";
}

void TqAccessorPair::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAccessorPair(this);
}

uintptr_t TqAccessorPair::GetGetterAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAccessorPair::GetGetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetGetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAccessorPair::GetSetterAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqAccessorPair::GetSetterValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSetterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAccessorPair::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("getter", "v8::internal::Object", "v8::internal::Object", GetGetterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("setter", "v8::internal::Object", "v8::internal::Object", GetSetterAddress()));
  return result;
}

const char* TqBreakPoint::GetName() const {
  return "v8::internal::BreakPoint";
}

void TqBreakPoint::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitBreakPoint(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqBreakPoint::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqTuple2::GetProperties(accessor);
  return result;
}

const char* TqBreakPointInfo::GetName() const {
  return "v8::internal::BreakPointInfo";
}

void TqBreakPointInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitBreakPointInfo(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqBreakPointInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqTuple2::GetProperties(accessor);
  return result;
}

const char* TqDebugInfo::GetName() const {
  return "v8::internal::DebugInfo";
}

void TqDebugInfo::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitDebugInfo(this);
}

uintptr_t TqDebugInfo::GetSharedFunctionInfoAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqDebugInfo::GetSharedFunctionInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSharedFunctionInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetDebuggerHintsAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqDebugInfo::GetDebuggerHintsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDebuggerHintsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetScriptAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqDebugInfo::GetScriptValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetOriginalBytecodeArrayAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqDebugInfo::GetOriginalBytecodeArrayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetOriginalBytecodeArrayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetDebugBytecodeArrayAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqDebugInfo::GetDebugBytecodeArrayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDebugBytecodeArrayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetBreakPointsAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqDebugInfo::GetBreakPointsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBreakPointsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqDebugInfo::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqDebugInfo::GetCoverageInfoAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqDebugInfo::GetCoverageInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCoverageInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqDebugInfo::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("shared_function_info", "v8::internal::SharedFunctionInfo", "v8::internal::SharedFunctionInfo", GetSharedFunctionInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("debugger_hints", "v8::internal::Object", "v8::internal::Object", GetDebuggerHintsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script", "v8::internal::HeapObject", "v8::internal::HeapObject", GetScriptAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("original_bytecode_array", "v8::internal::HeapObject", "v8::internal::HeapObject", GetOriginalBytecodeArrayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("debug_bytecode_array", "v8::internal::HeapObject", "v8::internal::HeapObject", GetDebugBytecodeArrayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("break_points", "v8::internal::FixedArray", "v8::internal::FixedArray", GetBreakPointsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("coverage_info", "v8::internal::HeapObject", "v8::internal::HeapObject", GetCoverageInfoAddress()));
  return result;
}

const char* TqFeedbackVector::GetName() const {
  return "v8::internal::FeedbackVector";
}

void TqFeedbackVector::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFeedbackVector(this);
}

uintptr_t TqFeedbackVector::GetSharedFunctionInfoAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqFeedbackVector::GetSharedFunctionInfoValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSharedFunctionInfoAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFeedbackVector::GetOptimizedCodeWeakOrSmiAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqFeedbackVector::GetOptimizedCodeWeakOrSmiValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetOptimizedCodeWeakOrSmiAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFeedbackVector::GetClosureFeedbackCellArrayAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqFeedbackVector::GetClosureFeedbackCellArrayValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetClosureFeedbackCellArrayAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFeedbackVector::GetLengthAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqFeedbackVector::GetLengthValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqFeedbackVector::GetInvocationCountAddress() const {
  return address_ - i::kHeapObjectTag + 36;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqFeedbackVector::GetInvocationCountValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetInvocationCountAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqFeedbackVector::GetProfilerTicksAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqFeedbackVector::GetProfilerTicksValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetProfilerTicksAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqFeedbackVector::GetPaddingAddress() const {
  return address_ - i::kHeapObjectTag + 44;
}

Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqFeedbackVector::GetPaddingValue(d::MemoryAccessor accessor) const {
  uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetPaddingAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFeedbackVector::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("shared_function_info", "v8::internal::SharedFunctionInfo", "v8::internal::SharedFunctionInfo", GetSharedFunctionInfoAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("optimized_code_weak_or_smi", "v8::internal::Object", "v8::internal::Object", GetOptimizedCodeWeakOrSmiAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("closure_feedback_cell_array", "v8::internal::FixedArray", "v8::internal::FixedArray", GetClosureFeedbackCellArrayAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("length", "int32_t", "int32_t", GetLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("invocation_count", "int32_t", "int32_t", GetInvocationCountAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("profiler_ticks", "int32_t", "int32_t", GetProfilerTicksAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("padding", "uint32_t", "uint32_t", GetPaddingAddress()));
  return result;
}

const char* TqFeedbackCell::GetName() const {
  return "v8::internal::FeedbackCell";
}

void TqFeedbackCell::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitFeedbackCell(this);
}

uintptr_t TqFeedbackCell::GetValueAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqFeedbackCell::GetValueValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetValueAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqFeedbackCell::GetInterruptBudgetAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqFeedbackCell::GetInterruptBudgetValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetInterruptBudgetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqFeedbackCell::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("value", "v8::internal::HeapObject", "v8::internal::HeapObject", GetValueAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("interrupt_budget", "int32_t", "int32_t", GetInterruptBudgetAddress()));
  return result;
}

const char* TqAllocationMemento::GetName() const {
  return "v8::internal::AllocationMemento";
}

void TqAllocationMemento::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAllocationMemento(this);
}

uintptr_t TqAllocationMemento::GetAllocationSiteAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAllocationMemento::GetAllocationSiteValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetAllocationSiteAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAllocationMemento::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("allocation_site", "v8::internal::Struct", "v8::internal::Struct", GetAllocationSiteAddress()));
  return result;
}

const char* TqWasmModuleObject::GetName() const {
  return "v8::internal::WasmModuleObject";
}

void TqWasmModuleObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmModuleObject(this);
}

uintptr_t TqWasmModuleObject::GetNativeModuleAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmModuleObject::GetNativeModuleValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNativeModuleAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmModuleObject::GetExportWrappersAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmModuleObject::GetExportWrappersValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExportWrappersAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmModuleObject::GetScriptAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmModuleObject::GetScriptValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetScriptAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmModuleObject::GetWeakInstanceListAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqWasmModuleObject::GetWeakInstanceListValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetWeakInstanceListAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmModuleObject::GetAsmJsOffsetTableAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqWasmModuleObject::GetAsmJsOffsetTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetAsmJsOffsetTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmModuleObject::GetBreakPointInfosAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqWasmModuleObject::GetBreakPointInfosValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetBreakPointInfosAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmModuleObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("native_module", "v8::internal::Foreign", "v8::internal::Foreign", GetNativeModuleAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("export_wrappers", "v8::internal::FixedArray", "v8::internal::FixedArray", GetExportWrappersAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("script", "v8::internal::Script", "v8::internal::Script", GetScriptAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("weak_instance_list", "v8::internal::WeakArrayList", "v8::internal::WeakArrayList", GetWeakInstanceListAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("asm_js_offset_table", "v8::internal::HeapObject", "v8::internal::HeapObject", GetAsmJsOffsetTableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("break_point_infos", "v8::internal::HeapObject", "v8::internal::HeapObject", GetBreakPointInfosAddress()));
  return result;
}

const char* TqWasmTableObject::GetName() const {
  return "v8::internal::WasmTableObject";
}

void TqWasmTableObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmTableObject(this);
}

uintptr_t TqWasmTableObject::GetEntriesAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmTableObject::GetEntriesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetEntriesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmTableObject::GetMaximumLengthAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmTableObject::GetMaximumLengthValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMaximumLengthAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmTableObject::GetDispatchTablesAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmTableObject::GetDispatchTablesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetDispatchTablesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmTableObject::GetRawTypeAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqWasmTableObject::GetRawTypeValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetRawTypeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmTableObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("entries", "v8::internal::FixedArray", "v8::internal::FixedArray", GetEntriesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("maximum_length", "v8::internal::Object", "v8::internal::Object", GetMaximumLengthAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("dispatch_tables", "v8::internal::FixedArray", "v8::internal::FixedArray", GetDispatchTablesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("raw_type", "v8::internal::Object", "v8::internal::Object", GetRawTypeAddress()));
  return result;
}

const char* TqWasmMemoryObject::GetName() const {
  return "v8::internal::WasmMemoryObject";
}

void TqWasmMemoryObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmMemoryObject(this);
}

uintptr_t TqWasmMemoryObject::GetArrayBufferAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmMemoryObject::GetArrayBufferValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetArrayBufferAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmMemoryObject::GetMaximumPagesAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmMemoryObject::GetMaximumPagesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetMaximumPagesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmMemoryObject::GetInstancesAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmMemoryObject::GetInstancesValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetInstancesAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmMemoryObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("array_buffer", "v8::internal::JSArrayBuffer", "v8::internal::JSArrayBuffer", GetArrayBufferAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("maximum_pages", "v8::internal::Object", "v8::internal::Object", GetMaximumPagesAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("instances", "v8::internal::HeapObject", "v8::internal::HeapObject", GetInstancesAddress()));
  return result;
}

const char* TqWasmGlobalObject::GetName() const {
  return "v8::internal::WasmGlobalObject";
}

void TqWasmGlobalObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmGlobalObject(this);
}

uintptr_t TqWasmGlobalObject::GetUntaggedBufferAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmGlobalObject::GetUntaggedBufferValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetUntaggedBufferAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmGlobalObject::GetTaggedBufferAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmGlobalObject::GetTaggedBufferValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTaggedBufferAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmGlobalObject::GetOffsetAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWasmGlobalObject::GetOffsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetOffsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmGlobalObject::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqWasmGlobalObject::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmGlobalObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("untagged_buffer", "v8::internal::HeapObject", "v8::internal::HeapObject", GetUntaggedBufferAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("tagged_buffer", "v8::internal::HeapObject", "v8::internal::HeapObject", GetTaggedBufferAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("offset", "v8::internal::Object", "v8::internal::Object", GetOffsetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  return result;
}

const char* TqWasmExceptionObject::GetName() const {
  return "v8::internal::WasmExceptionObject";
}

void TqWasmExceptionObject::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWasmExceptionObject(this);
}

uintptr_t TqWasmExceptionObject::GetSerializedSignatureAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWasmExceptionObject::GetSerializedSignatureValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSerializedSignatureAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWasmExceptionObject::GetExceptionTagAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWasmExceptionObject::GetExceptionTagValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExceptionTagAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWasmExceptionObject::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("serialized_signature", "v8::internal::ByteArray", "v8::internal::ByteArray", GetSerializedSignatureAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("exception_tag", "v8::internal::HeapObject", "v8::internal::HeapObject", GetExceptionTagAddress()));
  return result;
}

const char* TqAsmWasmData::GetName() const {
  return "v8::internal::AsmWasmData";
}

void TqAsmWasmData::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitAsmWasmData(this);
}

uintptr_t TqAsmWasmData::GetManagedNativeModuleAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqAsmWasmData::GetManagedNativeModuleValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetManagedNativeModuleAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAsmWasmData::GetExportWrappersAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqAsmWasmData::GetExportWrappersValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetExportWrappersAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAsmWasmData::GetAsmJsOffsetTableAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqAsmWasmData::GetAsmJsOffsetTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetAsmJsOffsetTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqAsmWasmData::GetUsesBitsetAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqAsmWasmData::GetUsesBitsetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetUsesBitsetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqAsmWasmData::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqStruct::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("managed_native_module", "v8::internal::Foreign", "v8::internal::Foreign", GetManagedNativeModuleAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("export_wrappers", "v8::internal::FixedArray", "v8::internal::FixedArray", GetExportWrappersAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("asm_js_offset_table", "v8::internal::ByteArray", "v8::internal::ByteArray", GetAsmJsOffsetTableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("uses_bitset", "v8::internal::HeapNumber", "v8::internal::HeapNumber", GetUsesBitsetAddress()));
  return result;
}

const char* TqJSFinalizationGroup::GetName() const {
  return "v8::internal::JSFinalizationGroup";
}

void TqJSFinalizationGroup::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSFinalizationGroup(this);
}

uintptr_t TqJSFinalizationGroup::GetNativeContextAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSFinalizationGroup::GetNativeContextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNativeContextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFinalizationGroup::GetCleanupAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqJSFinalizationGroup::GetCleanupValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetCleanupAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFinalizationGroup::GetActiveCellsAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqJSFinalizationGroup::GetActiveCellsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetActiveCellsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFinalizationGroup::GetClearedCellsAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqJSFinalizationGroup::GetClearedCellsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetClearedCellsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFinalizationGroup::GetKeyMapAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqJSFinalizationGroup::GetKeyMapValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKeyMapAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFinalizationGroup::GetNextAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqJSFinalizationGroup::GetNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqJSFinalizationGroup::GetFlagsAddress() const {
  return address_ - i::kHeapObjectTag + 72;
}

Value<uintptr_t> TqJSFinalizationGroup::GetFlagsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFlagsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSFinalizationGroup::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("native_context", "v8::internal::Context", "v8::internal::Context", GetNativeContextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("cleanup", "v8::internal::Object", "v8::internal::Object", GetCleanupAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("active_cells", "v8::internal::HeapObject", "v8::internal::HeapObject", GetActiveCellsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("cleared_cells", "v8::internal::HeapObject", "v8::internal::HeapObject", GetClearedCellsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("key_map", "v8::internal::Object", "v8::internal::Object", GetKeyMapAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("next", "v8::internal::HeapObject", "v8::internal::HeapObject", GetNextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("flags", "v8::internal::Object", "v8::internal::Object", GetFlagsAddress()));
  return result;
}

const char* TqJSFinalizationGroupCleanupIterator::GetName() const {
  return "v8::internal::JSFinalizationGroupCleanupIterator";
}

void TqJSFinalizationGroupCleanupIterator::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSFinalizationGroupCleanupIterator(this);
}

uintptr_t TqJSFinalizationGroupCleanupIterator::GetFinalizationGroupAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSFinalizationGroupCleanupIterator::GetFinalizationGroupValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFinalizationGroupAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSFinalizationGroupCleanupIterator::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("finalization_group", "v8::internal::JSFinalizationGroup", "v8::internal::JSFinalizationGroup", GetFinalizationGroupAddress()));
  return result;
}

const char* TqWeakCell::GetName() const {
  return "v8::internal::WeakCell";
}

void TqWeakCell::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitWeakCell(this);
}

uintptr_t TqWeakCell::GetFinalizationGroupAddress() const {
  return address_ - i::kHeapObjectTag + 8;
}

Value<uintptr_t> TqWeakCell::GetFinalizationGroupValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetFinalizationGroupAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetTargetAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqWeakCell::GetTargetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTargetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetHoldingsAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqWeakCell::GetHoldingsValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHoldingsAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetPrevAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqWeakCell::GetPrevValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetPrevAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetNextAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<uintptr_t> TqWeakCell::GetNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetKeyAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<uintptr_t> TqWeakCell::GetKeyValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKeyAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetKeyListPrevAddress() const {
  return address_ - i::kHeapObjectTag + 56;
}

Value<uintptr_t> TqWeakCell::GetKeyListPrevValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKeyListPrevAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqWeakCell::GetKeyListNextAddress() const {
  return address_ - i::kHeapObjectTag + 64;
}

Value<uintptr_t> TqWeakCell::GetKeyListNextValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetKeyListNextAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqWeakCell::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqHeapObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("finalization_group", "v8::internal::HeapObject", "v8::internal::HeapObject", GetFinalizationGroupAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("target", "v8::internal::HeapObject", "v8::internal::HeapObject", GetTargetAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("holdings", "v8::internal::Object", "v8::internal::Object", GetHoldingsAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("prev", "v8::internal::HeapObject", "v8::internal::HeapObject", GetPrevAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("next", "v8::internal::HeapObject", "v8::internal::HeapObject", GetNextAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("key", "v8::internal::Object", "v8::internal::Object", GetKeyAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("key_list_prev", "v8::internal::HeapObject", "v8::internal::HeapObject", GetKeyListPrevAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("key_list_next", "v8::internal::HeapObject", "v8::internal::HeapObject", GetKeyListNextAddress()));
  return result;
}

const char* TqJSWeakRef::GetName() const {
  return "v8::internal::JSWeakRef";
}

void TqJSWeakRef::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitJSWeakRef(this);
}

uintptr_t TqJSWeakRef::GetTargetAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqJSWeakRef::GetTargetValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetTargetAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

std::vector<std::unique_ptr<ObjectProperty>> TqJSWeakRef::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqJSObject::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("target", "v8::internal::HeapObject", "v8::internal::HeapObject", GetTargetAddress()));
  return result;
}

const char* TqBytecodeArray::GetName() const {
  return "v8::internal::BytecodeArray";
}

void TqBytecodeArray::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitBytecodeArray(this);
}

uintptr_t TqBytecodeArray::GetConstantPoolAddress() const {
  return address_ - i::kHeapObjectTag + 16;
}

Value<uintptr_t> TqBytecodeArray::GetConstantPoolValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetConstantPoolAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqBytecodeArray::GetHandlerTableAddress() const {
  return address_ - i::kHeapObjectTag + 24;
}

Value<uintptr_t> TqBytecodeArray::GetHandlerTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetHandlerTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqBytecodeArray::GetSourcePositionTableAddress() const {
  return address_ - i::kHeapObjectTag + 32;
}

Value<uintptr_t> TqBytecodeArray::GetSourcePositionTableValue(d::MemoryAccessor accessor) const {
  i::Tagged_t value{};
  d::MemoryAccessResult validity = accessor(GetSourcePositionTableAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, Decompress(value, address_)};
}

uintptr_t TqBytecodeArray::GetFrameSizeAddress() const {
  return address_ - i::kHeapObjectTag + 40;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqBytecodeArray::GetFrameSizeValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetFrameSizeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqBytecodeArray::GetParameterSizeAddress() const {
  return address_ - i::kHeapObjectTag + 44;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqBytecodeArray::GetParameterSizeValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetParameterSizeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqBytecodeArray::GetIncomingNewTargetOrGeneratorRegisterAddress() const {
  return address_ - i::kHeapObjectTag + 48;
}

Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqBytecodeArray::GetIncomingNewTargetOrGeneratorRegisterValue(d::MemoryAccessor accessor) const {
  int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetIncomingNewTargetOrGeneratorRegisterAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqBytecodeArray::GetOsrNestingLevelAddress() const {
  return address_ - i::kHeapObjectTag + 52;
}

Value<int8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqBytecodeArray::GetOsrNestingLevelValue(d::MemoryAccessor accessor) const {
  int8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetOsrNestingLevelAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

uintptr_t TqBytecodeArray::GetBytecodeAgeAddress() const {
  return address_ - i::kHeapObjectTag + 53;
}

Value<int8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> TqBytecodeArray::GetBytecodeAgeValue(d::MemoryAccessor accessor) const {
  int8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/ value{};
  d::MemoryAccessResult validity = accessor(GetBytecodeAgeAddress(), reinterpret_cast<uint8_t*>(&value), sizeof(value));
  return {validity, value};
}

std::vector<std::unique_ptr<ObjectProperty>> TqBytecodeArray::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqFixedArrayBase::GetProperties(accessor);
  result.push_back(v8::base::make_unique<ObjectProperty>("constant_pool", "v8::internal::FixedArray", "v8::internal::FixedArray", GetConstantPoolAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("handler_table", "v8::internal::ByteArray", "v8::internal::ByteArray", GetHandlerTableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("source_position_table", "v8::internal::HeapObject", "v8::internal::HeapObject", GetSourcePositionTableAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("frame_size", "int32_t", "int32_t", GetFrameSizeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("parameter_size", "int32_t", "int32_t", GetParameterSizeAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("incoming_new_target_or_generator_register", "int32_t", "int32_t", GetIncomingNewTargetOrGeneratorRegisterAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("osr_nesting_level", "int8_t", "int8_t", GetOsrNestingLevelAddress()));
  result.push_back(v8::base::make_unique<ObjectProperty>("bytecode_age", "int8_t", "int8_t", GetBytecodeAgeAddress()));
  return result;
}

const char* TqMutableBigInt::GetName() const {
  return "v8::internal::MutableBigInt";
}

void TqMutableBigInt::Visit(TqObjectVisitor* visitor) const {
  visitor->VisitMutableBigInt(this);
}

std::vector<std::unique_ptr<ObjectProperty>> TqMutableBigInt::GetProperties(d::MemoryAccessor accessor) const {
  std::vector<std::unique_ptr<ObjectProperty>> result = TqBigIntBase::GetProperties(accessor);
  return result;
}
}  // namespace v8_debug_helper_internal
