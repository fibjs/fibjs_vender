// Provides the ability to read object properties in
// postmortem or remote scenarios, where the debuggee's
// memory is not part of the current process's address
// space and must be read using a callback function.

#ifndef V8_GEN_TORQUE_GENERATED_CLASS_DEBUG_READERS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_DEBUG_READERS_TQ_H_

#include <cstdint>
#include <vector>

#include "tools/debug_helper/debug-helper-internal.h"

namespace v8_debug_helper_internal {

class TqHeapObject : public TqObject {
 public:
  inline TqHeapObject(uintptr_t address) : TqObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetMapAddress() const;
  Value<uintptr_t> GetMapValue(d::MemoryAccessor accessor ) const;
};

class TqContext : public TqHeapObject {
 public:
  inline TqContext(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScopeInfoAddress() const;
  Value<uintptr_t> GetScopeInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPreviousAddress() const;
  Value<uintptr_t> GetPreviousValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExtensionAddress() const;
  Value<uintptr_t> GetExtensionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNativeContextAddress() const;
  Value<uintptr_t> GetNativeContextValue(d::MemoryAccessor accessor ) const;
};

class TqJSReceiver : public TqHeapObject {
 public:
  inline TqJSReceiver(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetPropertiesOrHashAddress() const;
  Value<uintptr_t> GetPropertiesOrHashValue(d::MemoryAccessor accessor ) const;
};

class TqHeapNumber : public TqHeapObject {
 public:
  inline TqHeapNumber(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValueAddress() const;
  Value<double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqOddball : public TqHeapObject {
 public:
  inline TqOddball(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetToNumberRawAddress() const;
  Value<double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetToNumberRawValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToStringAddress() const;
  Value<uintptr_t> GetToStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToNumberAddress() const;
  Value<uintptr_t> GetToNumberValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTypeOfAddress() const;
  Value<uintptr_t> GetTypeOfValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKindAddress() const;
  Value<uintptr_t> GetKindValue(d::MemoryAccessor accessor ) const;
};

class TqName : public TqHeapObject {
 public:
  inline TqName(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetHashFieldAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetHashFieldValue(d::MemoryAccessor accessor ) const;
};

class TqSymbol : public TqName {
 public:
  inline TqSymbol(uintptr_t address) : TqName(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFlagsAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
};

class TqString : public TqName {
 public:
  inline TqString(uintptr_t address) : TqName(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqBigIntBase : public TqHeapObject {
 public:
  inline TqBigIntBase(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqFixedArrayBase : public TqHeapObject {
 public:
  inline TqFixedArrayBase(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqFixedArray : public TqFixedArrayBase {
 public:
  inline TqFixedArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqConsString : public TqString {
 public:
  inline TqConsString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFirstAddress() const;
  Value<uintptr_t> GetFirstValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSecondAddress() const;
  Value<uintptr_t> GetSecondValue(d::MemoryAccessor accessor ) const;
};

class TqExternalString : public TqString {
 public:
  inline TqExternalString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetResourceAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetResourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResourceDataAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetResourceDataValue(d::MemoryAccessor accessor ) const;
};

class TqExternalOneByteString : public TqExternalString {
 public:
  inline TqExternalOneByteString(uintptr_t address) : TqExternalString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqExternalTwoByteString : public TqExternalString {
 public:
  inline TqExternalTwoByteString(uintptr_t address) : TqExternalString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqInternalizedString : public TqString {
 public:
  inline TqInternalizedString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqSeqString : public TqString {
 public:
  inline TqSeqString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqSeqOneByteString : public TqSeqString {
 public:
  inline TqSeqOneByteString(uintptr_t address) : TqSeqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCharsAddress() const;
  Value<char /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetCharsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqSeqTwoByteString : public TqSeqString {
 public:
  inline TqSeqTwoByteString(uintptr_t address) : TqSeqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCharsAddress() const;
  Value<char16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetCharsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqSlicedString : public TqString {
 public:
  inline TqSlicedString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetParentAddress() const;
  Value<uintptr_t> GetParentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOffsetAddress() const;
  Value<uintptr_t> GetOffsetValue(d::MemoryAccessor accessor ) const;
};

class TqThinString : public TqString {
 public:
  inline TqThinString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetActualAddress() const;
  Value<uintptr_t> GetActualValue(d::MemoryAccessor accessor ) const;
};

class TqStruct : public TqHeapObject {
 public:
  inline TqStruct(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqTuple2 : public TqStruct {
 public:
  inline TqTuple2(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValue1Address() const;
  Value<uintptr_t> GetValue1Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetValue2Address() const;
  Value<uintptr_t> GetValue2Value(d::MemoryAccessor accessor ) const;
};

class TqTuple3 : public TqTuple2 {
 public:
  inline TqTuple3(uintptr_t address) : TqTuple2(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValue3Address() const;
  Value<uintptr_t> GetValue3Value(d::MemoryAccessor accessor ) const;
};

class TqFixedDoubleArray : public TqFixedArrayBase {
 public:
  inline TqFixedDoubleArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFloatsAddress() const;
  Value<double /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFloatsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqWeakFixedArray : public TqHeapObject {
 public:
  inline TqWeakFixedArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqByteArray : public TqFixedArrayBase {
 public:
  inline TqByteArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqMap : public TqHeapObject {
 public:
  inline TqMap(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetInstanceSizeInWordsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetInstanceSizeInWordsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInObjectPropertiesStartOrConstructorFunctionIndexAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetInObjectPropertiesStartOrConstructorFunctionIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUsedOrUnusedInstanceSizeInWordsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetUsedOrUnusedInstanceSizeInWordsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetVisitorIdAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetVisitorIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceTypeAddress() const;
  Value<v8::internal::InstanceType /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetInstanceTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitFieldAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetBitFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitField2Address() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetBitField2Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitField3Address() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetBitField3Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeAddress() const;
  Value<uintptr_t> GetPrototypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetConstructorOrBackPointerAddress() const;
  Value<uintptr_t> GetConstructorOrBackPointerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceDescriptorsAddress() const;
  Value<uintptr_t> GetInstanceDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLayoutDescriptorAddress() const;
  Value<uintptr_t> GetLayoutDescriptorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDependentCodeAddress() const;
  Value<uintptr_t> GetDependentCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeValidityCellAddress() const;
  Value<uintptr_t> GetPrototypeValidityCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTransitionsOrPrototypeInfoAddress() const;
  Value<uintptr_t> GetTransitionsOrPrototypeInfoValue(d::MemoryAccessor accessor ) const;
};

class TqEnumCache : public TqStruct {
 public:
  inline TqEnumCache(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetKeysAddress() const;
  Value<uintptr_t> GetKeysValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndicesAddress() const;
  Value<uintptr_t> GetIndicesValue(d::MemoryAccessor accessor ) const;
};

class TqSourcePositionTableWithFrameCache : public TqStruct {
 public:
  inline TqSourcePositionTableWithFrameCache(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSourcePositionTableAddress() const;
  Value<uintptr_t> GetSourcePositionTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStackFrameCacheAddress() const;
  Value<uintptr_t> GetStackFrameCacheValue(d::MemoryAccessor accessor ) const;
};

class TqDescriptorArray : public TqHeapObject {
 public:
  inline TqDescriptorArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNumberOfAllDescriptorsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetNumberOfAllDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfDescriptorsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetNumberOfDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawNumberOfMarkedDescriptorsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetRawNumberOfMarkedDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFiller16BitsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFiller16BitsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEnumCacheAddress() const;
  Value<uintptr_t> GetEnumCacheValue(d::MemoryAccessor accessor ) const;
};

class TqJSObject : public TqJSReceiver {
 public:
  inline TqJSObject(uintptr_t address) : TqJSReceiver(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetElementsAddress() const;
  Value<uintptr_t> GetElementsValue(d::MemoryAccessor accessor ) const;
};

class TqJSFunction : public TqJSObject {
 public:
  inline TqJSFunction(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFeedbackCellAddress() const;
  Value<uintptr_t> GetFeedbackCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCodeAddress() const;
  Value<uintptr_t> GetCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeOrInitialMapAddress() const;
  Value<uintptr_t> GetPrototypeOrInitialMapValue(d::MemoryAccessor accessor ) const;
};

class TqJSProxy : public TqJSReceiver {
 public:
  inline TqJSProxy(uintptr_t address) : TqJSReceiver(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetTargetAddress() const;
  Value<uintptr_t> GetTargetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHandlerAddress() const;
  Value<uintptr_t> GetHandlerValue(d::MemoryAccessor accessor ) const;
};

class TqJSProxyRevocableResult : public TqJSObject {
 public:
  inline TqJSProxyRevocableResult(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetProxyAddress() const;
  Value<uintptr_t> GetProxyValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRevokeAddress() const;
  Value<uintptr_t> GetRevokeValue(d::MemoryAccessor accessor ) const;
};

class TqJSGlobalProxy : public TqJSObject {
 public:
  inline TqJSGlobalProxy(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNativeContextAddress() const;
  Value<uintptr_t> GetNativeContextValue(d::MemoryAccessor accessor ) const;
};

class TqJSPrimitiveWrapper : public TqJSObject {
 public:
  inline TqJSPrimitiveWrapper(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqJSArgumentsObject : public TqJSObject {
 public:
  inline TqJSArgumentsObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSArgumentsObjectWithLength : public TqJSArgumentsObject {
 public:
  inline TqJSArgumentsObjectWithLength(uintptr_t address) : TqJSArgumentsObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqJSSloppyArgumentsObject : public TqJSArgumentsObjectWithLength {
 public:
  inline TqJSSloppyArgumentsObject(uintptr_t address) : TqJSArgumentsObjectWithLength(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCalleeAddress() const;
  Value<uintptr_t> GetCalleeValue(d::MemoryAccessor accessor ) const;
};

class TqJSStrictArgumentsObject : public TqJSArgumentsObjectWithLength {
 public:
  inline TqJSStrictArgumentsObject(uintptr_t address) : TqJSArgumentsObjectWithLength(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSArrayIterator : public TqJSObject {
 public:
  inline TqJSArrayIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetIteratedObjectAddress() const;
  Value<uintptr_t> GetIteratedObjectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextIndexAddress() const;
  Value<uintptr_t> GetNextIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKindAddress() const;
  Value<uintptr_t> GetKindValue(d::MemoryAccessor accessor ) const;
};

class TqJSArray : public TqJSObject {
 public:
  inline TqJSArray(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqCallHandlerInfo : public TqStruct {
 public:
  inline TqCallHandlerInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallbackAddress() const;
  Value<uintptr_t> GetCallbackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetJsCallbackAddress() const;
  Value<uintptr_t> GetJsCallbackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqModule : public TqHeapObject {
 public:
  inline TqModule(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetExportsAddress() const;
  Value<uintptr_t> GetExportsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHashAddress() const;
  Value<uintptr_t> GetHashValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStatusAddress() const;
  Value<uintptr_t> GetStatusValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetModuleNamespaceAddress() const;
  Value<uintptr_t> GetModuleNamespaceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExceptionAddress() const;
  Value<uintptr_t> GetExceptionValue(d::MemoryAccessor accessor ) const;
};

class TqSourceTextModule : public TqModule {
 public:
  inline TqSourceTextModule(uintptr_t address) : TqModule(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCodeAddress() const;
  Value<uintptr_t> GetCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegularExportsAddress() const;
  Value<uintptr_t> GetRegularExportsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegularImportsAddress() const;
  Value<uintptr_t> GetRegularImportsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRequestedModulesAddress() const;
  Value<uintptr_t> GetRequestedModulesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptAddress() const;
  Value<uintptr_t> GetScriptValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetImportMetaAddress() const;
  Value<uintptr_t> GetImportMetaValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDfsIndexAddress() const;
  Value<uintptr_t> GetDfsIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDfsAncestorIndexAddress() const;
  Value<uintptr_t> GetDfsAncestorIndexValue(d::MemoryAccessor accessor ) const;
};

class TqSyntheticModule : public TqModule {
 public:
  inline TqSyntheticModule(uintptr_t address) : TqModule(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExportNamesAddress() const;
  Value<uintptr_t> GetExportNamesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEvaluationStepsAddress() const;
  Value<uintptr_t> GetEvaluationStepsValue(d::MemoryAccessor accessor ) const;
};

class TqJSModuleNamespace : public TqJSObject {
 public:
  inline TqJSModuleNamespace(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetModuleAddress() const;
  Value<uintptr_t> GetModuleValue(d::MemoryAccessor accessor ) const;
};

class TqTemplateList : public TqFixedArray {
 public:
  inline TqTemplateList(uintptr_t address) : TqFixedArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSWeakCollection : public TqJSObject {
 public:
  inline TqJSWeakCollection(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetTableAddress() const;
  Value<uintptr_t> GetTableValue(d::MemoryAccessor accessor ) const;
};

class TqJSWeakSet : public TqJSWeakCollection {
 public:
  inline TqJSWeakSet(uintptr_t address) : TqJSWeakCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSWeakMap : public TqJSWeakCollection {
 public:
  inline TqJSWeakMap(uintptr_t address) : TqJSWeakCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSCollectionIterator : public TqJSObject {
 public:
  inline TqJSCollectionIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetTableAddress() const;
  Value<uintptr_t> GetTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
};

class TqJSMessageObject : public TqJSObject {
 public:
  inline TqJSMessageObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetMessageTypeAddress() const;
  Value<uintptr_t> GetMessageTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetArgumentsAddress() const;
  Value<uintptr_t> GetArgumentsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptAddress() const;
  Value<uintptr_t> GetScriptValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStackFramesAddress() const;
  Value<uintptr_t> GetStackFramesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSharedInfoAddress() const;
  Value<uintptr_t> GetSharedInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBytecodeOffsetAddress() const;
  Value<uintptr_t> GetBytecodeOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStartPositionAddress() const;
  Value<uintptr_t> GetStartPositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEndPositionAddress() const;
  Value<uintptr_t> GetEndPositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetErrorLevelAddress() const;
  Value<uintptr_t> GetErrorLevelValue(d::MemoryAccessor accessor ) const;
};

class TqWeakArrayList : public TqHeapObject {
 public:
  inline TqWeakArrayList(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCapacityAddress() const;
  Value<uintptr_t> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqPrototypeInfo : public TqStruct {
 public:
  inline TqPrototypeInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetJsModuleNamespaceAddress() const;
  Value<uintptr_t> GetJsModuleNamespaceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeUsersAddress() const;
  Value<uintptr_t> GetPrototypeUsersValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegistrySlotAddress() const;
  Value<uintptr_t> GetRegistrySlotValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValidityCellAddress() const;
  Value<uintptr_t> GetValidityCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectCreateMapAddress() const;
  Value<uintptr_t> GetObjectCreateMapValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitFieldAddress() const;
  Value<uintptr_t> GetBitFieldValue(d::MemoryAccessor accessor ) const;
};

class TqScript : public TqStruct {
 public:
  inline TqScript(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSourceAddress() const;
  Value<uintptr_t> GetSourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLineOffsetAddress() const;
  Value<uintptr_t> GetLineOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetColumnOffsetAddress() const;
  Value<uintptr_t> GetColumnOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptTypeAddress() const;
  Value<uintptr_t> GetScriptTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLineEndsAddress() const;
  Value<uintptr_t> GetLineEndsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIdAddress() const;
  Value<uintptr_t> GetIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEvalFromSharedOrWrappedArgumentsAddress() const;
  Value<uintptr_t> GetEvalFromSharedOrWrappedArgumentsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEvalFromPositionAddress() const;
  Value<uintptr_t> GetEvalFromPositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSharedFunctionInfosAddress() const;
  Value<uintptr_t> GetSharedFunctionInfosValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceUrlAddress() const;
  Value<uintptr_t> GetSourceUrlValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceMappingUrlAddress() const;
  Value<uintptr_t> GetSourceMappingUrlValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHostDefinedOptionsAddress() const;
  Value<uintptr_t> GetHostDefinedOptionsValue(d::MemoryAccessor accessor ) const;
};

class TqEmbedderDataArray : public TqHeapObject {
 public:
  inline TqEmbedderDataArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqPreparseData : public TqHeapObject {
 public:
  inline TqPreparseData(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetDataLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetDataLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInnerLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetInnerLengthValue(d::MemoryAccessor accessor ) const;
};

class TqInterpreterData : public TqStruct {
 public:
  inline TqInterpreterData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetBytecodeArrayAddress() const;
  Value<uintptr_t> GetBytecodeArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInterpreterTrampolineAddress() const;
  Value<uintptr_t> GetInterpreterTrampolineValue(d::MemoryAccessor accessor ) const;
};

class TqSharedFunctionInfo : public TqHeapObject {
 public:
  inline TqSharedFunctionInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFunctionDataAddress() const;
  Value<uintptr_t> GetFunctionDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNameOrScopeInfoAddress() const;
  Value<uintptr_t> GetNameOrScopeInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOuterScopeInfoOrFeedbackMetadataAddress() const;
  Value<uintptr_t> GetOuterScopeInfoOrFeedbackMetadataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptOrDebugInfoAddress() const;
  Value<uintptr_t> GetScriptOrDebugInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<int16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFormalParameterCountAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFormalParameterCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExpectedNofPropertiesAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetExpectedNofPropertiesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionTokenOffsetAddress() const;
  Value<int16_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFunctionTokenOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionLiteralIdAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFunctionLiteralIdValue(d::MemoryAccessor accessor ) const;
};

class TqUncompiledData : public TqHeapObject {
 public:
  inline TqUncompiledData(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetInferredNameAddress() const;
  Value<uintptr_t> GetInferredNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStartPositionAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetStartPositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEndPositionAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetEndPositionValue(d::MemoryAccessor accessor ) const;
};

class TqUncompiledDataWithoutPreparseData : public TqUncompiledData {
 public:
  inline TqUncompiledDataWithoutPreparseData(uintptr_t address) : TqUncompiledData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqUncompiledDataWithPreparseData : public TqUncompiledData {
 public:
  inline TqUncompiledDataWithPreparseData(uintptr_t address) : TqUncompiledData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetPreparseDataAddress() const;
  Value<uintptr_t> GetPreparseDataValue(d::MemoryAccessor accessor ) const;
};

class TqJSBoundFunction : public TqJSObject {
 public:
  inline TqJSBoundFunction(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetBoundTargetFunctionAddress() const;
  Value<uintptr_t> GetBoundTargetFunctionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundThisAddress() const;
  Value<uintptr_t> GetBoundThisValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundArgumentsAddress() const;
  Value<uintptr_t> GetBoundArgumentsValue(d::MemoryAccessor accessor ) const;
};

class TqForeign : public TqHeapObject {
 public:
  inline TqForeign(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetForeignAddressAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetForeignAddressValue(d::MemoryAccessor accessor ) const;
};

class TqFreeSpace : public TqHeapObject {
 public:
  inline TqFreeSpace(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSizeAddress() const;
  Value<uintptr_t> GetSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
};

class TqJSArrayBuffer : public TqJSObject {
 public:
  inline TqJSArrayBuffer(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetByteLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetByteLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBackingStoreAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetBackingStoreValue(d::MemoryAccessor accessor ) const;
};

class TqJSArrayBufferView : public TqJSObject {
 public:
  inline TqJSArrayBufferView(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetBufferAddress() const;
  Value<uintptr_t> GetBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetByteOffsetAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetByteOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetByteLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetByteLengthValue(d::MemoryAccessor accessor ) const;
};

class TqJSTypedArray : public TqJSArrayBufferView {
 public:
  inline TqJSTypedArray(uintptr_t address) : TqJSArrayBufferView(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExternalPointerAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetExternalPointerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBasePointerAddress() const;
  Value<uintptr_t> GetBasePointerValue(d::MemoryAccessor accessor ) const;
};

class TqJSCollection : public TqJSObject {
 public:
  inline TqJSCollection(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetTableAddress() const;
  Value<uintptr_t> GetTableValue(d::MemoryAccessor accessor ) const;
};

class TqJSSet : public TqJSCollection {
 public:
  inline TqJSSet(uintptr_t address) : TqJSCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSMap : public TqJSCollection {
 public:
  inline TqJSMap(uintptr_t address) : TqJSCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqJSDate : public TqJSObject {
 public:
  inline TqJSDate(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetYearAddress() const;
  Value<uintptr_t> GetYearValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMonthAddress() const;
  Value<uintptr_t> GetMonthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDayAddress() const;
  Value<uintptr_t> GetDayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWeekdayAddress() const;
  Value<uintptr_t> GetWeekdayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHourAddress() const;
  Value<uintptr_t> GetHourValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMinAddress() const;
  Value<uintptr_t> GetMinValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSecAddress() const;
  Value<uintptr_t> GetSecValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCacheStampAddress() const;
  Value<uintptr_t> GetCacheStampValue(d::MemoryAccessor accessor ) const;
};

class TqJSGlobalObject : public TqJSObject {
 public:
  inline TqJSGlobalObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNativeContextAddress() const;
  Value<uintptr_t> GetNativeContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetGlobalProxyAddress() const;
  Value<uintptr_t> GetGlobalProxyValue(d::MemoryAccessor accessor ) const;
};

class TqJSAsyncFromSyncIterator : public TqJSObject {
 public:
  inline TqJSAsyncFromSyncIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSyncIteratorAddress() const;
  Value<uintptr_t> GetSyncIteratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
};

class TqJSStringIterator : public TqJSObject {
 public:
  inline TqJSStringIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetStringAddress() const;
  Value<uintptr_t> GetStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextIndexAddress() const;
  Value<uintptr_t> GetNextIndexValue(d::MemoryAccessor accessor ) const;
};

class TqTemplateInfo : public TqStruct {
 public:
  inline TqTemplateInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetTagAddress() const;
  Value<uintptr_t> GetTagValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerialNumberAddress() const;
  Value<uintptr_t> GetSerialNumberValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfPropertiesAddress() const;
  Value<uintptr_t> GetNumberOfPropertiesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPropertyListAddress() const;
  Value<uintptr_t> GetPropertyListValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPropertyAccessorsAddress() const;
  Value<uintptr_t> GetPropertyAccessorsValue(d::MemoryAccessor accessor ) const;
};

class TqTemplateObjectDescription : public TqStruct {
 public:
  inline TqTemplateObjectDescription(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetRawStringsAddress() const;
  Value<uintptr_t> GetRawStringsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCookedStringsAddress() const;
  Value<uintptr_t> GetCookedStringsValue(d::MemoryAccessor accessor ) const;
};

class TqFunctionTemplateRareData : public TqStruct {
 public:
  inline TqFunctionTemplateRareData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetPrototypeTemplateAddress() const;
  Value<uintptr_t> GetPrototypeTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeProviderTemplateAddress() const;
  Value<uintptr_t> GetPrototypeProviderTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParentTemplateAddress() const;
  Value<uintptr_t> GetParentTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNamedPropertyHandlerAddress() const;
  Value<uintptr_t> GetNamedPropertyHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexedPropertyHandlerAddress() const;
  Value<uintptr_t> GetIndexedPropertyHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceTemplateAddress() const;
  Value<uintptr_t> GetInstanceTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceCallHandlerAddress() const;
  Value<uintptr_t> GetInstanceCallHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetAccessCheckInfoAddress() const;
  Value<uintptr_t> GetAccessCheckInfoValue(d::MemoryAccessor accessor ) const;
};

class TqFunctionTemplateInfo : public TqTemplateInfo {
 public:
  inline TqFunctionTemplateInfo(uintptr_t address) : TqTemplateInfo(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallCodeAddress() const;
  Value<uintptr_t> GetCallCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetClassNameAddress() const;
  Value<uintptr_t> GetClassNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSignatureAddress() const;
  Value<uintptr_t> GetSignatureValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRareDataAddress() const;
  Value<uintptr_t> GetRareDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagAddress() const;
  Value<uintptr_t> GetFlagValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCachedPropertyNameAddress() const;
  Value<uintptr_t> GetCachedPropertyNameValue(d::MemoryAccessor accessor ) const;
};

class TqObjectTemplateInfo : public TqTemplateInfo {
 public:
  inline TqObjectTemplateInfo(uintptr_t address) : TqTemplateInfo(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetConstructorAddress() const;
  Value<uintptr_t> GetConstructorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqPropertyArray : public TqHeapObject {
 public:
  inline TqPropertyArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLengthAndHashAddress() const;
  Value<uintptr_t> GetLengthAndHashValue(d::MemoryAccessor accessor ) const;
};

class TqPropertyCell : public TqHeapObject {
 public:
  inline TqPropertyCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPropertyDetailsRawAddress() const;
  Value<uintptr_t> GetPropertyDetailsRawValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDependentCodeAddress() const;
  Value<uintptr_t> GetDependentCodeValue(d::MemoryAccessor accessor ) const;
};

class TqJSDataView : public TqJSArrayBufferView {
 public:
  inline TqJSDataView(uintptr_t address) : TqJSArrayBufferView(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetDataPointerAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetDataPointerValue(d::MemoryAccessor accessor ) const;
};

class TqInterceptorInfo : public TqStruct {
 public:
  inline TqInterceptorInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetGetterAddress() const;
  Value<uintptr_t> GetGetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSetterAddress() const;
  Value<uintptr_t> GetSetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetQueryAddress() const;
  Value<uintptr_t> GetQueryValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDescriptorAddress() const;
  Value<uintptr_t> GetDescriptorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDeleterAddress() const;
  Value<uintptr_t> GetDeleterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEnumeratorAddress() const;
  Value<uintptr_t> GetEnumeratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDefinerAddress() const;
  Value<uintptr_t> GetDefinerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqAccessCheckInfo : public TqStruct {
 public:
  inline TqAccessCheckInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallbackAddress() const;
  Value<uintptr_t> GetCallbackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNamedInterceptorAddress() const;
  Value<uintptr_t> GetNamedInterceptorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexedInterceptorAddress() const;
  Value<uintptr_t> GetIndexedInterceptorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqArrayBoilerplateDescription : public TqStruct {
 public:
  inline TqArrayBoilerplateDescription(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetConstantElementsAddress() const;
  Value<uintptr_t> GetConstantElementsValue(d::MemoryAccessor accessor ) const;
};

class TqAliasedArgumentsEntry : public TqStruct {
 public:
  inline TqAliasedArgumentsEntry(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetAliasedContextSlotAddress() const;
  Value<uintptr_t> GetAliasedContextSlotValue(d::MemoryAccessor accessor ) const;
};

class TqCell : public TqHeapObject {
 public:
  inline TqCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqDataHandler : public TqStruct {
 public:
  inline TqDataHandler(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSmiHandlerAddress() const;
  Value<uintptr_t> GetSmiHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValidityCellAddress() const;
  Value<uintptr_t> GetValidityCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetData1Address() const;
  Value<uintptr_t> GetData1Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetData2Address() const;
  Value<uintptr_t> GetData2Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetData3Address() const;
  Value<uintptr_t> GetData3Value(d::MemoryAccessor accessor ) const;
};

class TqJSGeneratorObject : public TqJSObject {
 public:
  inline TqJSGeneratorObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFunctionAddress() const;
  Value<uintptr_t> GetFunctionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetReceiverAddress() const;
  Value<uintptr_t> GetReceiverValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInputOrDebugPosAddress() const;
  Value<uintptr_t> GetInputOrDebugPosValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResumeModeAddress() const;
  Value<uintptr_t> GetResumeModeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContinuationAddress() const;
  Value<uintptr_t> GetContinuationValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParametersAndRegistersAddress() const;
  Value<uintptr_t> GetParametersAndRegistersValue(d::MemoryAccessor accessor ) const;
};

class TqJSAsyncFunctionObject : public TqJSGeneratorObject {
 public:
  inline TqJSAsyncFunctionObject(uintptr_t address) : TqJSGeneratorObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
};

class TqJSAsyncGeneratorObject : public TqJSGeneratorObject {
 public:
  inline TqJSAsyncGeneratorObject(uintptr_t address) : TqJSGeneratorObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetQueueAddress() const;
  Value<uintptr_t> GetQueueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIsAwaitingAddress() const;
  Value<uintptr_t> GetIsAwaitingValue(d::MemoryAccessor accessor ) const;
};

class TqJSPromise : public TqJSObject {
 public:
  inline TqJSPromise(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetReactionsOrResultAddress() const;
  Value<uintptr_t> GetReactionsOrResultValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqMicrotask : public TqStruct {
 public:
  inline TqMicrotask(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqCallbackTask : public TqMicrotask {
 public:
  inline TqCallbackTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallbackAddress() const;
  Value<uintptr_t> GetCallbackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqCallableTask : public TqMicrotask {
 public:
  inline TqCallableTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallableAddress() const;
  Value<uintptr_t> GetCallableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
};

class TqStackFrameInfo : public TqStruct {
 public:
  inline TqStackFrameInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetLineNumberAddress() const;
  Value<uintptr_t> GetLineNumberValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetColumnNumberAddress() const;
  Value<uintptr_t> GetColumnNumberValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseAllIndexAddress() const;
  Value<uintptr_t> GetPromiseAllIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptIdAddress() const;
  Value<uintptr_t> GetScriptIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptNameAddress() const;
  Value<uintptr_t> GetScriptNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptNameOrSourceUrlAddress() const;
  Value<uintptr_t> GetScriptNameOrSourceUrlValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionNameAddress() const;
  Value<uintptr_t> GetFunctionNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMethodNameAddress() const;
  Value<uintptr_t> GetMethodNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTypeNameAddress() const;
  Value<uintptr_t> GetTypeNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEvalOriginAddress() const;
  Value<uintptr_t> GetEvalOriginValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWasmModuleNameAddress() const;
  Value<uintptr_t> GetWasmModuleNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWasmInstanceAddress() const;
  Value<uintptr_t> GetWasmInstanceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagAddress() const;
  Value<uintptr_t> GetFlagValue(d::MemoryAccessor accessor ) const;
};

class TqStackTraceFrame : public TqStruct {
 public:
  inline TqStackTraceFrame(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFrameArrayAddress() const;
  Value<uintptr_t> GetFrameArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFrameIndexAddress() const;
  Value<uintptr_t> GetFrameIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFrameInfoAddress() const;
  Value<uintptr_t> GetFrameInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIdAddress() const;
  Value<uintptr_t> GetIdValue(d::MemoryAccessor accessor ) const;
};

class TqClassPositions : public TqStruct {
 public:
  inline TqClassPositions(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetStartAddress() const;
  Value<uintptr_t> GetStartValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEndAddress() const;
  Value<uintptr_t> GetEndValue(d::MemoryAccessor accessor ) const;
};

class TqWasmExportedFunctionData : public TqStruct {
 public:
  inline TqWasmExportedFunctionData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetWrapperCodeAddress() const;
  Value<uintptr_t> GetWrapperCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceAddress() const;
  Value<uintptr_t> GetInstanceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetJumpTableOffsetAddress() const;
  Value<uintptr_t> GetJumpTableOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionIndexAddress() const;
  Value<uintptr_t> GetFunctionIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCWrapperCodeAddress() const;
  Value<uintptr_t> GetCWrapperCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWasmCallTargetAddress() const;
  Value<uintptr_t> GetWasmCallTargetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPackedArgsSizeAddress() const;
  Value<uintptr_t> GetPackedArgsSizeValue(d::MemoryAccessor accessor ) const;
};

class TqWasmJSFunctionData : public TqStruct {
 public:
  inline TqWasmJSFunctionData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallableAddress() const;
  Value<uintptr_t> GetCallableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWrapperCodeAddress() const;
  Value<uintptr_t> GetWrapperCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerializedReturnCountAddress() const;
  Value<uintptr_t> GetSerializedReturnCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerializedParameterCountAddress() const;
  Value<uintptr_t> GetSerializedParameterCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerializedSignatureAddress() const;
  Value<uintptr_t> GetSerializedSignatureValue(d::MemoryAccessor accessor ) const;
};

class TqWasmCapiFunctionData : public TqStruct {
 public:
  inline TqWasmCapiFunctionData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetCallTargetAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetCallTargetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEmbedderDataAddress() const;
  Value<uintptr_t> GetEmbedderDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWrapperCodeAddress() const;
  Value<uintptr_t> GetWrapperCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerializedSignatureAddress() const;
  Value<uintptr_t> GetSerializedSignatureValue(d::MemoryAccessor accessor ) const;
};

class TqWasmIndirectFunctionTable : public TqStruct {
 public:
  inline TqWasmIndirectFunctionTable(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSizeAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSigIdsAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetSigIdsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTargetsAddress() const;
  Value<void* /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetTargetsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetManagedNativeAllocationsAddress() const;
  Value<uintptr_t> GetManagedNativeAllocationsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRefsAddress() const;
  Value<uintptr_t> GetRefsValue(d::MemoryAccessor accessor ) const;
};

class TqWasmDebugInfo : public TqStruct {
 public:
  inline TqWasmDebugInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetInstanceAddress() const;
  Value<uintptr_t> GetInstanceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInterpreterHandleAddress() const;
  Value<uintptr_t> GetInterpreterHandleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLocalsNamesAddress() const;
  Value<uintptr_t> GetLocalsNamesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCWasmEntriesAddress() const;
  Value<uintptr_t> GetCWasmEntriesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCWasmEntryMapAddress() const;
  Value<uintptr_t> GetCWasmEntryMapValue(d::MemoryAccessor accessor ) const;
};

class TqWasmExceptionTag : public TqStruct {
 public:
  inline TqWasmExceptionTag(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
};

class TqAsyncGeneratorRequest : public TqStruct {
 public:
  inline TqAsyncGeneratorRequest(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResumeModeAddress() const;
  Value<uintptr_t> GetResumeModeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
};

class TqSourceTextModuleInfoEntry : public TqStruct {
 public:
  inline TqSourceTextModuleInfoEntry(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetExportNameAddress() const;
  Value<uintptr_t> GetExportNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLocalNameAddress() const;
  Value<uintptr_t> GetLocalNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetImportNameAddress() const;
  Value<uintptr_t> GetImportNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetModuleRequestAddress() const;
  Value<uintptr_t> GetModuleRequestValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCellIndexAddress() const;
  Value<uintptr_t> GetCellIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBegPosAddress() const;
  Value<uintptr_t> GetBegPosValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEndPosAddress() const;
  Value<uintptr_t> GetEndPosValue(d::MemoryAccessor accessor ) const;
};

class TqPromiseCapability : public TqStruct {
 public:
  inline TqPromiseCapability(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResolveAddress() const;
  Value<uintptr_t> GetResolveValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRejectAddress() const;
  Value<uintptr_t> GetRejectValue(d::MemoryAccessor accessor ) const;
};

class TqPromiseReaction : public TqStruct {
 public:
  inline TqPromiseReaction(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRejectHandlerAddress() const;
  Value<uintptr_t> GetRejectHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFulfillHandlerAddress() const;
  Value<uintptr_t> GetFulfillHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseOrCapabilityAddress() const;
  Value<uintptr_t> GetPromiseOrCapabilityValue(d::MemoryAccessor accessor ) const;
};

class TqPromiseReactionJobTask : public TqMicrotask {
 public:
  inline TqPromiseReactionJobTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetArgumentAddress() const;
  Value<uintptr_t> GetArgumentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHandlerAddress() const;
  Value<uintptr_t> GetHandlerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseOrCapabilityAddress() const;
  Value<uintptr_t> GetPromiseOrCapabilityValue(d::MemoryAccessor accessor ) const;
};

class TqPromiseFulfillReactionJobTask : public TqPromiseReactionJobTask {
 public:
  inline TqPromiseFulfillReactionJobTask(uintptr_t address) : TqPromiseReactionJobTask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqPromiseRejectReactionJobTask : public TqPromiseReactionJobTask {
 public:
  inline TqPromiseRejectReactionJobTask(uintptr_t address) : TqPromiseReactionJobTask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqPromiseResolveThenableJobTask : public TqMicrotask {
 public:
  inline TqPromiseResolveThenableJobTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseToResolveAddress() const;
  Value<uintptr_t> GetPromiseToResolveValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetThenAddress() const;
  Value<uintptr_t> GetThenValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetThenableAddress() const;
  Value<uintptr_t> GetThenableValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExp : public TqJSObject {
 public:
  inline TqJSRegExp(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceAddress() const;
  Value<uintptr_t> GetSourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExpResult : public TqJSArray {
 public:
  inline TqJSRegExpResult(uintptr_t address) : TqJSArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInputAddress() const;
  Value<uintptr_t> GetInputValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetGroupsAddress() const;
  Value<uintptr_t> GetGroupsValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExpStringIterator : public TqJSObject {
 public:
  inline TqJSRegExpStringIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetIteratingRegExpAddress() const;
  Value<uintptr_t> GetIteratingRegExpValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIteratedStringAddress() const;
  Value<uintptr_t> GetIteratedStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqRegExpMatchInfo : public TqFixedArray {
 public:
  inline TqRegExpMatchInfo(uintptr_t address) : TqFixedArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqAccessorInfo : public TqStruct {
 public:
  inline TqAccessorInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExpectedReceiverTypeAddress() const;
  Value<uintptr_t> GetExpectedReceiverTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSetterAddress() const;
  Value<uintptr_t> GetSetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetGetterAddress() const;
  Value<uintptr_t> GetGetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetJsGetterAddress() const;
  Value<uintptr_t> GetJsGetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqAccessorPair : public TqStruct {
 public:
  inline TqAccessorPair(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetGetterAddress() const;
  Value<uintptr_t> GetGetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSetterAddress() const;
  Value<uintptr_t> GetSetterValue(d::MemoryAccessor accessor ) const;
};

class TqBreakPoint : public TqTuple2 {
 public:
  inline TqBreakPoint(uintptr_t address) : TqTuple2(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqBreakPointInfo : public TqTuple2 {
 public:
  inline TqBreakPointInfo(uintptr_t address) : TqTuple2(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqDebugInfo : public TqStruct {
 public:
  inline TqDebugInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDebuggerHintsAddress() const;
  Value<uintptr_t> GetDebuggerHintsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptAddress() const;
  Value<uintptr_t> GetScriptValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOriginalBytecodeArrayAddress() const;
  Value<uintptr_t> GetOriginalBytecodeArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDebugBytecodeArrayAddress() const;
  Value<uintptr_t> GetDebugBytecodeArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBreakPointsAddress() const;
  Value<uintptr_t> GetBreakPointsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCoverageInfoAddress() const;
  Value<uintptr_t> GetCoverageInfoValue(d::MemoryAccessor accessor ) const;
};

class TqFeedbackVector : public TqHeapObject {
 public:
  inline TqFeedbackVector(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptimizedCodeWeakOrSmiAddress() const;
  Value<uintptr_t> GetOptimizedCodeWeakOrSmiValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetClosureFeedbackCellArrayAddress() const;
  Value<uintptr_t> GetClosureFeedbackCellArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInvocationCountAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetInvocationCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetProfilerTicksAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetProfilerTicksValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqFeedbackCell : public TqStruct {
 public:
  inline TqFeedbackCell(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInterruptBudgetAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetInterruptBudgetValue(d::MemoryAccessor accessor ) const;
};

class TqAllocationMemento : public TqStruct {
 public:
  inline TqAllocationMemento(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetAllocationSiteAddress() const;
  Value<uintptr_t> GetAllocationSiteValue(d::MemoryAccessor accessor ) const;
};

class TqWasmModuleObject : public TqJSObject {
 public:
  inline TqWasmModuleObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNativeModuleAddress() const;
  Value<uintptr_t> GetNativeModuleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExportWrappersAddress() const;
  Value<uintptr_t> GetExportWrappersValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptAddress() const;
  Value<uintptr_t> GetScriptValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWeakInstanceListAddress() const;
  Value<uintptr_t> GetWeakInstanceListValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetAsmJsOffsetTableAddress() const;
  Value<uintptr_t> GetAsmJsOffsetTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBreakPointInfosAddress() const;
  Value<uintptr_t> GetBreakPointInfosValue(d::MemoryAccessor accessor ) const;
};

class TqWasmTableObject : public TqJSObject {
 public:
  inline TqWasmTableObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetEntriesAddress() const;
  Value<uintptr_t> GetEntriesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaximumLengthAddress() const;
  Value<uintptr_t> GetMaximumLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDispatchTablesAddress() const;
  Value<uintptr_t> GetDispatchTablesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawTypeAddress() const;
  Value<uintptr_t> GetRawTypeValue(d::MemoryAccessor accessor ) const;
};

class TqWasmMemoryObject : public TqJSObject {
 public:
  inline TqWasmMemoryObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetArrayBufferAddress() const;
  Value<uintptr_t> GetArrayBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaximumPagesAddress() const;
  Value<uintptr_t> GetMaximumPagesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstancesAddress() const;
  Value<uintptr_t> GetInstancesValue(d::MemoryAccessor accessor ) const;
};

class TqWasmGlobalObject : public TqJSObject {
 public:
  inline TqWasmGlobalObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetUntaggedBufferAddress() const;
  Value<uintptr_t> GetUntaggedBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTaggedBufferAddress() const;
  Value<uintptr_t> GetTaggedBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOffsetAddress() const;
  Value<uintptr_t> GetOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqWasmExceptionObject : public TqJSObject {
 public:
  inline TqWasmExceptionObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetSerializedSignatureAddress() const;
  Value<uintptr_t> GetSerializedSignatureValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExceptionTagAddress() const;
  Value<uintptr_t> GetExceptionTagValue(d::MemoryAccessor accessor ) const;
};

class TqAsmWasmData : public TqStruct {
 public:
  inline TqAsmWasmData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetManagedNativeModuleAddress() const;
  Value<uintptr_t> GetManagedNativeModuleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExportWrappersAddress() const;
  Value<uintptr_t> GetExportWrappersValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetAsmJsOffsetTableAddress() const;
  Value<uintptr_t> GetAsmJsOffsetTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUsesBitsetAddress() const;
  Value<uintptr_t> GetUsesBitsetValue(d::MemoryAccessor accessor ) const;
};

class TqJSFinalizationGroup : public TqJSObject {
 public:
  inline TqJSFinalizationGroup(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetNativeContextAddress() const;
  Value<uintptr_t> GetNativeContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCleanupAddress() const;
  Value<uintptr_t> GetCleanupValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetActiveCellsAddress() const;
  Value<uintptr_t> GetActiveCellsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetClearedCellsAddress() const;
  Value<uintptr_t> GetClearedCellsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKeyMapAddress() const;
  Value<uintptr_t> GetKeyMapValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSFinalizationGroupCleanupIterator : public TqJSObject {
 public:
  inline TqJSFinalizationGroupCleanupIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFinalizationGroupAddress() const;
  Value<uintptr_t> GetFinalizationGroupValue(d::MemoryAccessor accessor ) const;
};

class TqWeakCell : public TqHeapObject {
 public:
  inline TqWeakCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetFinalizationGroupAddress() const;
  Value<uintptr_t> GetFinalizationGroupValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTargetAddress() const;
  Value<uintptr_t> GetTargetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHoldingsAddress() const;
  Value<uintptr_t> GetHoldingsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrevAddress() const;
  Value<uintptr_t> GetPrevValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKeyAddress() const;
  Value<uintptr_t> GetKeyValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKeyListPrevAddress() const;
  Value<uintptr_t> GetKeyListPrevValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKeyListNextAddress() const;
  Value<uintptr_t> GetKeyListNextValue(d::MemoryAccessor accessor ) const;
};

class TqJSWeakRef : public TqJSObject {
 public:
  inline TqJSWeakRef(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetTargetAddress() const;
  Value<uintptr_t> GetTargetValue(d::MemoryAccessor accessor ) const;
};

class TqBytecodeArray : public TqFixedArrayBase {
 public:
  inline TqBytecodeArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  uintptr_t GetConstantPoolAddress() const;
  Value<uintptr_t> GetConstantPoolValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHandlerTableAddress() const;
  Value<uintptr_t> GetHandlerTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourcePositionTableAddress() const;
  Value<uintptr_t> GetSourcePositionTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFrameSizeAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetFrameSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParameterSizeAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetParameterSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIncomingNewTargetOrGeneratorRegisterAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetIncomingNewTargetOrGeneratorRegisterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOsrNestingLevelAddress() const;
  Value<int8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetOsrNestingLevelValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBytecodeAgeAddress() const;
  Value<int8_t /*Failing? Ensure constexpr type name is fully qualified and necessary #includes are in debug-helper-internal.h*/> GetBytecodeAgeValue(d::MemoryAccessor accessor ) const;
};

class TqMutableBigInt : public TqBigIntBase {
 public:
  inline TqMutableBigInt(uintptr_t address) : TqBigIntBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
};

class TqObjectVisitor {
 public:
  virtual void VisitObject(const TqObject* object) {}
  virtual void VisitHeapObject(const TqHeapObject* object) {
    VisitObject(object);
  }
  virtual void VisitContext(const TqContext* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSReceiver(const TqJSReceiver* object) {
    VisitHeapObject(object);
  }
  virtual void VisitHeapNumber(const TqHeapNumber* object) {
    VisitHeapObject(object);
  }
  virtual void VisitOddball(const TqOddball* object) {
    VisitHeapObject(object);
  }
  virtual void VisitName(const TqName* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSymbol(const TqSymbol* object) {
    VisitName(object);
  }
  virtual void VisitString(const TqString* object) {
    VisitName(object);
  }
  virtual void VisitBigIntBase(const TqBigIntBase* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFixedArrayBase(const TqFixedArrayBase* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFixedArray(const TqFixedArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitConsString(const TqConsString* object) {
    VisitString(object);
  }
  virtual void VisitExternalString(const TqExternalString* object) {
    VisitString(object);
  }
  virtual void VisitExternalOneByteString(const TqExternalOneByteString* object) {
    VisitExternalString(object);
  }
  virtual void VisitExternalTwoByteString(const TqExternalTwoByteString* object) {
    VisitExternalString(object);
  }
  virtual void VisitInternalizedString(const TqInternalizedString* object) {
    VisitString(object);
  }
  virtual void VisitSeqString(const TqSeqString* object) {
    VisitString(object);
  }
  virtual void VisitSeqOneByteString(const TqSeqOneByteString* object) {
    VisitSeqString(object);
  }
  virtual void VisitSeqTwoByteString(const TqSeqTwoByteString* object) {
    VisitSeqString(object);
  }
  virtual void VisitSlicedString(const TqSlicedString* object) {
    VisitString(object);
  }
  virtual void VisitThinString(const TqThinString* object) {
    VisitString(object);
  }
  virtual void VisitStruct(const TqStruct* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTuple2(const TqTuple2* object) {
    VisitStruct(object);
  }
  virtual void VisitTuple3(const TqTuple3* object) {
    VisitTuple2(object);
  }
  virtual void VisitFixedDoubleArray(const TqFixedDoubleArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitWeakFixedArray(const TqWeakFixedArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitByteArray(const TqByteArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitMap(const TqMap* object) {
    VisitHeapObject(object);
  }
  virtual void VisitEnumCache(const TqEnumCache* object) {
    VisitStruct(object);
  }
  virtual void VisitSourcePositionTableWithFrameCache(const TqSourcePositionTableWithFrameCache* object) {
    VisitStruct(object);
  }
  virtual void VisitDescriptorArray(const TqDescriptorArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSObject(const TqJSObject* object) {
    VisitJSReceiver(object);
  }
  virtual void VisitJSFunction(const TqJSFunction* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSProxy(const TqJSProxy* object) {
    VisitJSReceiver(object);
  }
  virtual void VisitJSProxyRevocableResult(const TqJSProxyRevocableResult* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSGlobalProxy(const TqJSGlobalProxy* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSPrimitiveWrapper(const TqJSPrimitiveWrapper* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSArgumentsObject(const TqJSArgumentsObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSArgumentsObjectWithLength(const TqJSArgumentsObjectWithLength* object) {
    VisitJSArgumentsObject(object);
  }
  virtual void VisitJSSloppyArgumentsObject(const TqJSSloppyArgumentsObject* object) {
    VisitJSArgumentsObjectWithLength(object);
  }
  virtual void VisitJSStrictArgumentsObject(const TqJSStrictArgumentsObject* object) {
    VisitJSArgumentsObjectWithLength(object);
  }
  virtual void VisitJSArrayIterator(const TqJSArrayIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSArray(const TqJSArray* object) {
    VisitJSObject(object);
  }
  virtual void VisitCallHandlerInfo(const TqCallHandlerInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitModule(const TqModule* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSourceTextModule(const TqSourceTextModule* object) {
    VisitModule(object);
  }
  virtual void VisitSyntheticModule(const TqSyntheticModule* object) {
    VisitModule(object);
  }
  virtual void VisitJSModuleNamespace(const TqJSModuleNamespace* object) {
    VisitJSObject(object);
  }
  virtual void VisitTemplateList(const TqTemplateList* object) {
    VisitFixedArray(object);
  }
  virtual void VisitJSWeakCollection(const TqJSWeakCollection* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSWeakSet(const TqJSWeakSet* object) {
    VisitJSWeakCollection(object);
  }
  virtual void VisitJSWeakMap(const TqJSWeakMap* object) {
    VisitJSWeakCollection(object);
  }
  virtual void VisitJSCollectionIterator(const TqJSCollectionIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSMessageObject(const TqJSMessageObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitWeakArrayList(const TqWeakArrayList* object) {
    VisitHeapObject(object);
  }
  virtual void VisitPrototypeInfo(const TqPrototypeInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitScript(const TqScript* object) {
    VisitStruct(object);
  }
  virtual void VisitEmbedderDataArray(const TqEmbedderDataArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitPreparseData(const TqPreparseData* object) {
    VisitHeapObject(object);
  }
  virtual void VisitInterpreterData(const TqInterpreterData* object) {
    VisitStruct(object);
  }
  virtual void VisitSharedFunctionInfo(const TqSharedFunctionInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitUncompiledData(const TqUncompiledData* object) {
    VisitHeapObject(object);
  }
  virtual void VisitUncompiledDataWithoutPreparseData(const TqUncompiledDataWithoutPreparseData* object) {
    VisitUncompiledData(object);
  }
  virtual void VisitUncompiledDataWithPreparseData(const TqUncompiledDataWithPreparseData* object) {
    VisitUncompiledData(object);
  }
  virtual void VisitJSBoundFunction(const TqJSBoundFunction* object) {
    VisitJSObject(object);
  }
  virtual void VisitForeign(const TqForeign* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFreeSpace(const TqFreeSpace* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSArrayBuffer(const TqJSArrayBuffer* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSArrayBufferView(const TqJSArrayBufferView* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTypedArray(const TqJSTypedArray* object) {
    VisitJSArrayBufferView(object);
  }
  virtual void VisitJSCollection(const TqJSCollection* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSet(const TqJSSet* object) {
    VisitJSCollection(object);
  }
  virtual void VisitJSMap(const TqJSMap* object) {
    VisitJSCollection(object);
  }
  virtual void VisitJSDate(const TqJSDate* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSGlobalObject(const TqJSGlobalObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSAsyncFromSyncIterator(const TqJSAsyncFromSyncIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSStringIterator(const TqJSStringIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitTemplateInfo(const TqTemplateInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitTemplateObjectDescription(const TqTemplateObjectDescription* object) {
    VisitStruct(object);
  }
  virtual void VisitFunctionTemplateRareData(const TqFunctionTemplateRareData* object) {
    VisitStruct(object);
  }
  virtual void VisitFunctionTemplateInfo(const TqFunctionTemplateInfo* object) {
    VisitTemplateInfo(object);
  }
  virtual void VisitObjectTemplateInfo(const TqObjectTemplateInfo* object) {
    VisitTemplateInfo(object);
  }
  virtual void VisitPropertyArray(const TqPropertyArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitPropertyCell(const TqPropertyCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSDataView(const TqJSDataView* object) {
    VisitJSArrayBufferView(object);
  }
  virtual void VisitInterceptorInfo(const TqInterceptorInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitAccessCheckInfo(const TqAccessCheckInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitArrayBoilerplateDescription(const TqArrayBoilerplateDescription* object) {
    VisitStruct(object);
  }
  virtual void VisitAliasedArgumentsEntry(const TqAliasedArgumentsEntry* object) {
    VisitStruct(object);
  }
  virtual void VisitCell(const TqCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitDataHandler(const TqDataHandler* object) {
    VisitStruct(object);
  }
  virtual void VisitJSGeneratorObject(const TqJSGeneratorObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSAsyncFunctionObject(const TqJSAsyncFunctionObject* object) {
    VisitJSGeneratorObject(object);
  }
  virtual void VisitJSAsyncGeneratorObject(const TqJSAsyncGeneratorObject* object) {
    VisitJSGeneratorObject(object);
  }
  virtual void VisitJSPromise(const TqJSPromise* object) {
    VisitJSObject(object);
  }
  virtual void VisitMicrotask(const TqMicrotask* object) {
    VisitStruct(object);
  }
  virtual void VisitCallbackTask(const TqCallbackTask* object) {
    VisitMicrotask(object);
  }
  virtual void VisitCallableTask(const TqCallableTask* object) {
    VisitMicrotask(object);
  }
  virtual void VisitStackFrameInfo(const TqStackFrameInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitStackTraceFrame(const TqStackTraceFrame* object) {
    VisitStruct(object);
  }
  virtual void VisitClassPositions(const TqClassPositions* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmExportedFunctionData(const TqWasmExportedFunctionData* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmJSFunctionData(const TqWasmJSFunctionData* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmCapiFunctionData(const TqWasmCapiFunctionData* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmIndirectFunctionTable(const TqWasmIndirectFunctionTable* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmDebugInfo(const TqWasmDebugInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmExceptionTag(const TqWasmExceptionTag* object) {
    VisitStruct(object);
  }
  virtual void VisitAsyncGeneratorRequest(const TqAsyncGeneratorRequest* object) {
    VisitStruct(object);
  }
  virtual void VisitSourceTextModuleInfoEntry(const TqSourceTextModuleInfoEntry* object) {
    VisitStruct(object);
  }
  virtual void VisitPromiseCapability(const TqPromiseCapability* object) {
    VisitStruct(object);
  }
  virtual void VisitPromiseReaction(const TqPromiseReaction* object) {
    VisitStruct(object);
  }
  virtual void VisitPromiseReactionJobTask(const TqPromiseReactionJobTask* object) {
    VisitMicrotask(object);
  }
  virtual void VisitPromiseFulfillReactionJobTask(const TqPromiseFulfillReactionJobTask* object) {
    VisitPromiseReactionJobTask(object);
  }
  virtual void VisitPromiseRejectReactionJobTask(const TqPromiseRejectReactionJobTask* object) {
    VisitPromiseReactionJobTask(object);
  }
  virtual void VisitPromiseResolveThenableJobTask(const TqPromiseResolveThenableJobTask* object) {
    VisitMicrotask(object);
  }
  virtual void VisitJSRegExp(const TqJSRegExp* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSRegExpResult(const TqJSRegExpResult* object) {
    VisitJSArray(object);
  }
  virtual void VisitJSRegExpStringIterator(const TqJSRegExpStringIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitRegExpMatchInfo(const TqRegExpMatchInfo* object) {
    VisitFixedArray(object);
  }
  virtual void VisitAccessorInfo(const TqAccessorInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitAccessorPair(const TqAccessorPair* object) {
    VisitStruct(object);
  }
  virtual void VisitBreakPoint(const TqBreakPoint* object) {
    VisitTuple2(object);
  }
  virtual void VisitBreakPointInfo(const TqBreakPointInfo* object) {
    VisitTuple2(object);
  }
  virtual void VisitDebugInfo(const TqDebugInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitFeedbackVector(const TqFeedbackVector* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFeedbackCell(const TqFeedbackCell* object) {
    VisitStruct(object);
  }
  virtual void VisitAllocationMemento(const TqAllocationMemento* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmModuleObject(const TqWasmModuleObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitWasmTableObject(const TqWasmTableObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitWasmMemoryObject(const TqWasmMemoryObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitWasmGlobalObject(const TqWasmGlobalObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitWasmExceptionObject(const TqWasmExceptionObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitAsmWasmData(const TqAsmWasmData* object) {
    VisitStruct(object);
  }
  virtual void VisitJSFinalizationGroup(const TqJSFinalizationGroup* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSFinalizationGroupCleanupIterator(const TqJSFinalizationGroupCleanupIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitWeakCell(const TqWeakCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSWeakRef(const TqJSWeakRef* object) {
    VisitJSObject(object);
  }
  virtual void VisitBytecodeArray(const TqBytecodeArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitMutableBigInt(const TqMutableBigInt* object) {
    VisitBigIntBase(object);
  }
};
}  // namespace v8_debug_helper_internal
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_DEBUG_READERS_TQ_H_
