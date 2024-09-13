// Provides the ability to read object properties in
// postmortem or remote scenarios, where the debuggee's
// memory is not part of the current process's address
// space and must be read using a callback function.

#ifndef V8_GEN_TORQUE_GENERATED_CLASS_DEBUG_READERS_H_
#define V8_GEN_TORQUE_GENERATED_CLASS_DEBUG_READERS_H_

#include <cstdint>
#include <vector>

#include "src/ast/ast.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-call-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-object-gen.h"
#include "src/builtins/builtins-promise-gen.h"
#include "src/builtins/builtins-promise.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins-wasm-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/debug/debug-wasm-objects.h"
#include "src/heap/factory-inl.h"
#include "src/ic/binary-op-assembler.h"
#include "src/ic/handler-configuration-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/call-site-info.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/intl-objects.h"
#include "src/objects/js-atomics-synchronization.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-display-names.h"
#include "src/objects/js-disposable-stack.h"
#include "src/objects/js-duration-format.h"
#include "src/objects/js-function.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-iterator-helpers.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-raw-json.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-segment-iterator-inl.h"
#include "src/objects/js-segmenter.h"
#include "src/objects/js-segments.h"
#include "src/objects/js-shadow-realm.h"
#include "src/objects/js-shared-array.h"
#include "src/objects/js-struct.h"
#include "src/objects/js-temporal-objects.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/ordered-hash-table.h"
#include "src/objects/property-array.h"
#include "src/objects/property-descriptor-object.h"
#include "src/objects/source-text-module.h"
#include "src/objects/swiss-hash-table-helpers.h"
#include "src/objects/swiss-name-dictionary.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/objects/torque-defined-classes.h"
#include "src/objects/turbofan-types.h"
#include "src/objects/turboshaft-types.h"
#include "src/torque/runtime-support.h"
#include "src/wasm/value-type.h"
#include "src/wasm/wasm-linkage.h"

#include "tools/debug_helper/debug-helper-internal.h"

// Unset a wingdi.h macro that causes conflicts.
#ifdef GetBValue
#undef GetBValue
#endif

namespace v8 {
namespace internal {
namespace debug_helper_internal {

class TqHeapObject : public TqObject {
 public:
  inline TqHeapObject(uintptr_t address) : TqObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetMapAddress() const;
  Value<uintptr_t> GetMapValue(d::MemoryAccessor accessor ) const;
};

class TqPrimitiveHeapObject : public TqHeapObject {
 public:
  inline TqPrimitiveHeapObject(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqHeapNumber : public TqPrimitiveHeapObject {
 public:
  inline TqHeapNumber(uintptr_t address) : TqPrimitiveHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqName : public TqPrimitiveHeapObject {
 public:
  inline TqName(uintptr_t address) : TqPrimitiveHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRawHashFieldAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawHashFieldValue(d::MemoryAccessor accessor ) const;
};

class TqString : public TqName {
 public:
  inline TqString(uintptr_t address) : TqName(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqSymbol : public TqName {
 public:
  inline TqSymbol(uintptr_t address) : TqName(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDescriptionAddress() const;
  Value<uintptr_t> GetDescriptionValue(d::MemoryAccessor accessor ) const;
};

class TqOddball : public TqPrimitiveHeapObject {
 public:
  inline TqOddball(uintptr_t address) : TqPrimitiveHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetToNumberRawAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetToNumberRawValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToStringAddress() const;
  Value<uintptr_t> GetToStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToNumberAddress() const;
  Value<uintptr_t> GetToNumberValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTypeOfAddress() const;
  Value<uintptr_t> GetTypeOfValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKindAddress() const;
  Value<uintptr_t> GetKindValue(d::MemoryAccessor accessor ) const;
};

class TqBoolean : public TqOddball {
 public:
  inline TqBoolean(uintptr_t address) : TqOddball(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqNull : public TqOddball {
 public:
  inline TqNull(uintptr_t address) : TqOddball(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqUndefined : public TqOddball {
 public:
  inline TqUndefined(uintptr_t address) : TqOddball(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSReceiver : public TqHeapObject {
 public:
  inline TqJSReceiver(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPropertiesOrHashAddress() const;
  Value<uintptr_t> GetPropertiesOrHashValue(d::MemoryAccessor accessor ) const;
};

class TqContext : public TqHeapObject {
 public:
  inline TqContext(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetElementsAddress() const;
  Value<uintptr_t> GetElementsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqJSObject : public TqJSReceiver {
 public:
  inline TqJSObject(uintptr_t address) : TqJSReceiver(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetElementsAddress() const;
  Value<uintptr_t> GetElementsValue(d::MemoryAccessor accessor ) const;
};

class TqJSObjectWithEmbedderSlots : public TqJSObject {
 public:
  inline TqJSObjectWithEmbedderSlots(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSPromise : public TqJSObjectWithEmbedderSlots {
 public:
  inline TqJSPromise(uintptr_t address) : TqJSObjectWithEmbedderSlots(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetReactionsOrResultAddress() const;
  Value<uintptr_t> GetReactionsOrResultValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSFunctionOrBoundFunctionOrWrappedFunction : public TqJSObject {
 public:
  inline TqJSFunctionOrBoundFunctionOrWrappedFunction(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSFunction : public TqJSFunctionOrBoundFunctionOrWrappedFunction {
 public:
  inline TqJSFunction(uintptr_t address) : TqJSFunctionOrBoundFunctionOrWrappedFunction(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFeedbackCellAddress() const;
  Value<uintptr_t> GetFeedbackCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeOrInitialMapAddress() const;
  Value<uintptr_t> GetPrototypeOrInitialMapValue(d::MemoryAccessor accessor ) const;
};

class TqFixedArrayBase : public TqHeapObject {
 public:
  inline TqFixedArrayBase(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqFixedArray : public TqFixedArrayBase {
 public:
  inline TqFixedArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTrustedObject : public TqHeapObject {
 public:
  inline TqTrustedObject(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqWeakFixedArray : public TqHeapObject {
 public:
  inline TqWeakFixedArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqForeign : public TqHeapObject {
 public:
  inline TqForeign(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetForeignAddressAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetForeignAddressValue(d::MemoryAccessor accessor ) const;
};

class TqJSProxy : public TqJSReceiver {
 public:
  inline TqJSProxy(uintptr_t address) : TqJSReceiver(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTargetAddress() const;
  Value<uintptr_t> GetTargetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHandlerAddress() const;
  Value<uintptr_t> GetHandlerValue(d::MemoryAccessor accessor ) const;
};

class TqJSBoundFunction : public TqJSFunctionOrBoundFunctionOrWrappedFunction {
 public:
  inline TqJSBoundFunction(uintptr_t address) : TqJSFunctionOrBoundFunctionOrWrappedFunction(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBoundTargetFunctionAddress() const;
  Value<uintptr_t> GetBoundTargetFunctionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundThisAddress() const;
  Value<uintptr_t> GetBoundThisValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundArgumentsAddress() const;
  Value<uintptr_t> GetBoundArgumentsValue(d::MemoryAccessor accessor ) const;
};

class TqJSWrappedFunction : public TqJSFunctionOrBoundFunctionOrWrappedFunction {
 public:
  inline TqJSWrappedFunction(uintptr_t address) : TqJSFunctionOrBoundFunctionOrWrappedFunction(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetWrappedTargetFunctionAddress() const;
  Value<uintptr_t> GetWrappedTargetFunctionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
};

class TqHole : public TqHeapObject {
 public:
  inline TqHole(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRawNumericValueAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawNumericValueValue(d::MemoryAccessor accessor ) const;
};

class TqJSAPIObjectWithEmbedderSlots : public TqJSObject {
 public:
  inline TqJSAPIObjectWithEmbedderSlots(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCppHeapWrappableAddress() const;
  Value<CppHeapPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCppHeapWrappableValue(d::MemoryAccessor accessor ) const;
};

class TqJSCustomElementsObject : public TqJSObject {
 public:
  inline TqJSCustomElementsObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSSpecialObject : public TqJSCustomElementsObject {
 public:
  inline TqJSSpecialObject(uintptr_t address) : TqJSCustomElementsObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCppHeapWrappableAddress() const;
  Value<CppHeapPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCppHeapWrappableValue(d::MemoryAccessor accessor ) const;
};

class TqMap : public TqHeapObject {
 public:
  inline TqMap(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetInstanceSizeInWordsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInstanceSizeInWordsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInobjectPropertiesStartOrConstructorFunctionIndexAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInobjectPropertiesStartOrConstructorFunctionIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUsedOrUnusedInstanceSizeInWordsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetUsedOrUnusedInstanceSizeInWordsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetVisitorIdAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetVisitorIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceTypeAddress() const;
  Value<InstanceType /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInstanceTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitFieldAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitField2Address() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitField2Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitField3Address() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitField3Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeAddress() const;
  Value<uintptr_t> GetPrototypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetConstructorOrBackPointerOrNativeContextAddress() const;
  Value<uintptr_t> GetConstructorOrBackPointerOrNativeContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceDescriptorsAddress() const;
  Value<uintptr_t> GetInstanceDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDependentCodeAddress() const;
  Value<uintptr_t> GetDependentCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeValidityCellAddress() const;
  Value<uintptr_t> GetPrototypeValidityCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTransitionsOrPrototypeInfoAddress() const;
  Value<uintptr_t> GetTransitionsOrPrototypeInfoValue(d::MemoryAccessor accessor ) const;
};

class TqWeakCell : public TqHeapObject {
 public:
  inline TqWeakCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFinalizationRegistryAddress() const;
  Value<uintptr_t> GetFinalizationRegistryValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTargetAddress() const;
  Value<uintptr_t> GetTargetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUnregisterTokenAddress() const;
  Value<uintptr_t> GetUnregisterTokenValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHoldingsAddress() const;
  Value<uintptr_t> GetHoldingsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrevAddress() const;
  Value<uintptr_t> GetPrevValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKeyListPrevAddress() const;
  Value<uintptr_t> GetKeyListPrevValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetKeyListNextAddress() const;
  Value<uintptr_t> GetKeyListNextValue(d::MemoryAccessor accessor ) const;
};

class TqTemplateInfo : public TqHeapObject {
 public:
  inline TqTemplateInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSerialNumberAddress() const;
  Value<uintptr_t> GetSerialNumberValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfPropertiesAddress() const;
  Value<uintptr_t> GetNumberOfPropertiesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPropertyListAddress() const;
  Value<uintptr_t> GetPropertyListValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPropertyAccessorsAddress() const;
  Value<uintptr_t> GetPropertyAccessorsValue(d::MemoryAccessor accessor ) const;
};

class TqFunctionTemplateInfo : public TqTemplateInfo {
 public:
  inline TqFunctionTemplateInfo(uintptr_t address) : TqTemplateInfo(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetClassNameAddress() const;
  Value<uintptr_t> GetClassNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInterfaceNameAddress() const;
  Value<uintptr_t> GetInterfaceNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSignatureAddress() const;
  Value<uintptr_t> GetSignatureValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRareDataAddress() const;
  Value<uintptr_t> GetRareDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCachedPropertyNameAddress() const;
  Value<uintptr_t> GetCachedPropertyNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCallbackDataAddress() const;
  Value<uintptr_t> GetCallbackDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlagValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<int16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceTypeAddress() const;
  Value<InstanceType /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInstanceTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExceptionContextAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetExceptionContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaybeRedirectedCallbackAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMaybeRedirectedCallbackValue(d::MemoryAccessor accessor ) const;
};

class TqWasmFuncRef : public TqHeapObject {
 public:
  inline TqWasmFuncRef(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTrustedInternalAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedInternalValue(d::MemoryAccessor accessor ) const;
};

class TqWasmNull : public TqHeapObject {
 public:
  inline TqWasmNull(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSCollection : public TqJSObject {
 public:
  inline TqJSCollection(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTableAddress() const;
  Value<uintptr_t> GetTableValue(d::MemoryAccessor accessor ) const;
};

class TqJSSet : public TqJSCollection {
 public:
  inline TqJSSet(uintptr_t address) : TqJSCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSMap : public TqJSCollection {
 public:
  inline TqJSMap(uintptr_t address) : TqJSCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqStruct : public TqHeapObject {
 public:
  inline TqStruct(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqPromiseCapability : public TqStruct {
 public:
  inline TqPromiseCapability(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResolveAddress() const;
  Value<uintptr_t> GetResolveValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRejectAddress() const;
  Value<uintptr_t> GetRejectValue(d::MemoryAccessor accessor ) const;
};

class TqJSArrayBufferView : public TqJSAPIObjectWithEmbedderSlots {
 public:
  inline TqJSArrayBufferView(uintptr_t address) : TqJSAPIObjectWithEmbedderSlots(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBufferAddress() const;
  Value<uintptr_t> GetBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitFieldAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawByteOffsetAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawByteOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawByteLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawByteLengthValue(d::MemoryAccessor accessor ) const;
};

class TqJSTypedArray : public TqJSArrayBufferView {
 public:
  inline TqJSTypedArray(uintptr_t address) : TqJSArrayBufferView(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRawLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExternalPointerAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetExternalPointerValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBasePointerAddress() const;
  Value<uintptr_t> GetBasePointerValue(d::MemoryAccessor accessor ) const;
};

class TqDataHandler : public TqStruct {
 public:
  inline TqDataHandler(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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

class TqAllocationMemento : public TqStruct {
 public:
  inline TqAllocationMemento(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetAllocationSiteAddress() const;
  Value<uintptr_t> GetAllocationSiteValue(d::MemoryAccessor accessor ) const;
};

class TqInterceptorInfo : public TqStruct {
 public:
  inline TqInterceptorInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCallbackAddress() const;
  Value<uintptr_t> GetCallbackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNamedInterceptorAddress() const;
  Value<uintptr_t> GetNamedInterceptorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexedInterceptorAddress() const;
  Value<uintptr_t> GetIndexedInterceptorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqAccessorInfo : public TqHeapObject {
 public:
  inline TqAccessorInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaybeRedirectedGetterAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMaybeRedirectedGetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSetterAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqJSArgumentsObject : public TqJSObject {
 public:
  inline TqJSArgumentsObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSSloppyArgumentsObject : public TqJSArgumentsObject {
 public:
  inline TqJSSloppyArgumentsObject(uintptr_t address) : TqJSArgumentsObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalleeAddress() const;
  Value<uintptr_t> GetCalleeValue(d::MemoryAccessor accessor ) const;
};

class TqJSStrictArgumentsObject : public TqJSArgumentsObject {
 public:
  inline TqJSStrictArgumentsObject(uintptr_t address) : TqJSArgumentsObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqSloppyArgumentsElements : public TqFixedArrayBase {
 public:
  inline TqSloppyArgumentsElements(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetArgumentsAddress() const;
  Value<uintptr_t> GetArgumentsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMappedEntriesAddress() const;
  Value<uintptr_t> GetMappedEntriesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqAliasedArgumentsEntry : public TqStruct {
 public:
  inline TqAliasedArgumentsEntry(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetAliasedContextSlotAddress() const;
  Value<uintptr_t> GetAliasedContextSlotValue(d::MemoryAccessor accessor ) const;
};

class TqCallSiteInfo : public TqStruct {
 public:
  inline TqCallSiteInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCodeObjectAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCodeObjectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetReceiverOrInstanceAddress() const;
  Value<uintptr_t> GetReceiverOrInstanceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionAddress() const;
  Value<uintptr_t> GetFunctionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCodeOffsetOrSourcePositionAddress() const;
  Value<uintptr_t> GetCodeOffsetOrSourcePositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParametersAddress() const;
  Value<uintptr_t> GetParametersValue(d::MemoryAccessor accessor ) const;
};

class TqCell : public TqHeapObject {
 public:
  inline TqCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqWeakArrayList : public TqHeapObject {
 public:
  inline TqWeakArrayList(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCapacityAddress() const;
  Value<uintptr_t> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqExposedTrustedObject : public TqTrustedObject {
 public:
  inline TqExposedTrustedObject(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqBytecodeArray : public TqExposedTrustedObject {
 public:
  inline TqBytecodeArray(uintptr_t address) : TqExposedTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWrapperAddress() const;
  Value<uintptr_t> GetWrapperValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourcePositionTableAddress() const;
  Value<uintptr_t> GetSourcePositionTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHandlerTableAddress() const;
  Value<uintptr_t> GetHandlerTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetConstantPoolAddress() const;
  Value<uintptr_t> GetConstantPoolValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFrameSizeAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFrameSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParameterSizeAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetParameterSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaxArgumentsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMaxArgumentsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIncomingNewTargetOrGeneratorRegisterAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetIncomingNewTargetOrGeneratorRegisterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBytesAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBytesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqBytecodeWrapper : public TqStruct {
 public:
  inline TqBytecodeWrapper(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBytecodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBytecodeValue(d::MemoryAccessor accessor ) const;
};

class TqScriptContextTable : public TqHeapObject {
 public:
  inline TqScriptContextTable(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCapacityAddress() const;
  Value<uintptr_t> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNamesToContextIndexAddress() const;
  Value<uintptr_t> GetNamesToContextIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqScopeInfo : public TqHeapObject {
 public:
  inline TqScopeInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParameterCountAddress() const;
  Value<uintptr_t> GetParameterCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextLocalCountAddress() const;
  Value<uintptr_t> GetContextLocalCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPositionInfoAddress() const;
  uintptr_t GetModuleVariableCountAddress() const;
  Value<uintptr_t> GetModuleVariableCountValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqFixedDoubleArray : public TqFixedArrayBase {
 public:
  inline TqFixedDoubleArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFloatsAddress() const;
};

class TqRegExpMatchInfo : public TqHeapObject {
 public:
  inline TqRegExpMatchInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfCaptureRegistersAddress() const;
  Value<uintptr_t> GetNumberOfCaptureRegistersValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLastSubjectAddress() const;
  Value<uintptr_t> GetLastSubjectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLastInputAddress() const;
  Value<uintptr_t> GetLastInputValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqBreakPoint : public TqStruct {
 public:
  inline TqBreakPoint(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIdAddress() const;
  Value<uintptr_t> GetIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetConditionAddress() const;
  Value<uintptr_t> GetConditionValue(d::MemoryAccessor accessor ) const;
};

class TqBreakPointInfo : public TqStruct {
 public:
  inline TqBreakPointInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSourcePositionAddress() const;
  Value<uintptr_t> GetSourcePositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBreakPointsAddress() const;
  Value<uintptr_t> GetBreakPointsValue(d::MemoryAccessor accessor ) const;
};

class TqDebugInfo : public TqStruct {
 public:
  inline TqDebugInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSharedAddress() const;
  Value<uintptr_t> GetSharedValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDebuggerHintsAddress() const;
  Value<uintptr_t> GetDebuggerHintsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBreakPointsAddress() const;
  Value<uintptr_t> GetBreakPointsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCoverageInfoAddress() const;
  Value<uintptr_t> GetCoverageInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOriginalBytecodeArrayAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOriginalBytecodeArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDebugBytecodeArrayAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDebugBytecodeArrayValue(d::MemoryAccessor accessor ) const;
};

class TqCoverageInfo : public TqHeapObject {
 public:
  inline TqCoverageInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSlotCountAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSlotCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSlotsAddress() const;
};

class TqStackFrameInfo : public TqStruct {
 public:
  inline TqStackFrameInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSharedOrScriptAddress() const;
  Value<uintptr_t> GetSharedOrScriptValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionNameAddress() const;
  Value<uintptr_t> GetFunctionNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqErrorStackData : public TqStruct {
 public:
  inline TqErrorStackData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCallSiteInfosOrFormattedStackAddress() const;
  Value<uintptr_t> GetCallSiteInfosOrFormattedStackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLimitOrStackFrameInfosAddress() const;
  Value<uintptr_t> GetLimitOrStackFrameInfosValue(d::MemoryAccessor accessor ) const;
};

class TqEnumCache : public TqStruct {
 public:
  inline TqEnumCache(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetKeysAddress() const;
  Value<uintptr_t> GetKeysValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndicesAddress() const;
  Value<uintptr_t> GetIndicesValue(d::MemoryAccessor accessor ) const;
};

class TqAccessorPair : public TqStruct {
 public:
  inline TqAccessorPair(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetGetterAddress() const;
  Value<uintptr_t> GetGetterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSetterAddress() const;
  Value<uintptr_t> GetSetterValue(d::MemoryAccessor accessor ) const;
};

class TqClassPositions : public TqStruct {
 public:
  inline TqClassPositions(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetStartAddress() const;
  Value<uintptr_t> GetStartValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEndAddress() const;
  Value<uintptr_t> GetEndValue(d::MemoryAccessor accessor ) const;
};

class TqDescriptorArray : public TqHeapObject {
 public:
  inline TqDescriptorArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNumberOfAllDescriptorsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfAllDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfDescriptorsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfDescriptorsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawGcStateAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawGcStateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEnumCacheAddress() const;
  Value<uintptr_t> GetEnumCacheValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDescriptorsAddress() const;
};

class TqStrongDescriptorArray : public TqDescriptorArray {
 public:
  inline TqStrongDescriptorArray(uintptr_t address) : TqDescriptorArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqEmbedderDataArray : public TqHeapObject {
 public:
  inline TqEmbedderDataArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqFeedbackCell : public TqStruct {
 public:
  inline TqFeedbackCell(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInterruptBudgetAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInterruptBudgetValue(d::MemoryAccessor accessor ) const;
};

class TqClosureFeedbackCellArray : public TqHeapObject {
 public:
  inline TqClosureFeedbackCellArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCapacityAddress() const;
  Value<uintptr_t> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqFeedbackVector : public TqHeapObject {
 public:
  inline TqFeedbackVector(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInvocationCountAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInvocationCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInvocationCountBeforeStableAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetInvocationCountBeforeStableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOsrStateAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOsrStateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSharedFunctionInfoAddress() const;
  Value<uintptr_t> GetSharedFunctionInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetClosureFeedbackCellArrayAddress() const;
  Value<uintptr_t> GetClosureFeedbackCellArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParentFeedbackCellAddress() const;
  Value<uintptr_t> GetParentFeedbackCellValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaybeOptimizedCodeAddress() const;
  Value<uintptr_t> GetMaybeOptimizedCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawFeedbackSlotsAddress() const;
  Value<uintptr_t> GetRawFeedbackSlotsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTrustedFixedArray : public TqTrustedObject {
 public:
  inline TqTrustedFixedArray(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqProtectedFixedArray : public TqTrustedObject {
 public:
  inline TqProtectedFixedArray(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTrustedWeakFixedArray : public TqTrustedObject {
 public:
  inline TqTrustedWeakFixedArray(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqByteArray : public TqFixedArrayBase {
 public:
  inline TqByteArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBytesAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBytesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTrustedByteArray : public TqTrustedObject {
 public:
  inline TqTrustedByteArray(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBytesAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBytesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqExternalPointerArray : public TqFixedArrayBase {
 public:
  inline TqExternalPointerArray(uintptr_t address) : TqFixedArrayBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPointersAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPointersValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqArrayList : public TqHeapObject {
 public:
  inline TqArrayList(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCapacityAddress() const;
  Value<uintptr_t> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectsAddress() const;
  Value<uintptr_t> GetObjectsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTrustedForeign : public TqTrustedObject {
 public:
  inline TqTrustedForeign(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetForeignAddressAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetForeignAddressValue(d::MemoryAccessor accessor ) const;
};

class TqFreeSpace : public TqHeapObject {
 public:
  inline TqFreeSpace(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSizeAddress() const;
  Value<uintptr_t> GetSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
};

class TqJSArrayBuffer : public TqJSAPIObjectWithEmbedderSlots {
 public:
  inline TqJSArrayBuffer(uintptr_t address) : TqJSAPIObjectWithEmbedderSlots(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDetachKeyAddress() const;
  Value<uintptr_t> GetDetachKeyValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawByteLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawByteLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawMaxByteLengthAddress() const;
  Value<uintptr_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetRawMaxByteLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBackingStoreAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBackingStoreValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExtensionAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetExtensionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitFieldAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqJSDataViewOrRabGsabDataView : public TqJSArrayBufferView {
 public:
  inline TqJSDataViewOrRabGsabDataView(uintptr_t address) : TqJSArrayBufferView(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDataPointerAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDataPointerValue(d::MemoryAccessor accessor ) const;
};

class TqJSDataView : public TqJSDataViewOrRabGsabDataView {
 public:
  inline TqJSDataView(uintptr_t address) : TqJSDataViewOrRabGsabDataView(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSRabGsabDataView : public TqJSDataViewOrRabGsabDataView {
 public:
  inline TqJSRabGsabDataView(uintptr_t address) : TqJSDataViewOrRabGsabDataView(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSArrayIterator : public TqJSObject {
 public:
  inline TqJSArrayIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uintptr_t> GetLengthValue(d::MemoryAccessor accessor ) const;
};

class TqTemplateLiteralObject : public TqJSArray {
 public:
  inline TqTemplateLiteralObject(uintptr_t address) : TqJSArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRawAddress() const;
  Value<uintptr_t> GetRawValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionLiteralIdAddress() const;
  Value<uintptr_t> GetFunctionLiteralIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSlotIdAddress() const;
  Value<uintptr_t> GetSlotIdValue(d::MemoryAccessor accessor ) const;
};

class TqAlwaysSharedSpaceJSObject : public TqJSObject {
 public:
  inline TqAlwaysSharedSpaceJSObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSSynchronizationPrimitive : public TqAlwaysSharedSpaceJSObject {
 public:
  inline TqJSSynchronizationPrimitive(uintptr_t address) : TqAlwaysSharedSpaceJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetWaiterQueueHeadAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetWaiterQueueHeadValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStateAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetStateValue(d::MemoryAccessor accessor ) const;
};

class TqJSAtomicsMutex : public TqJSSynchronizationPrimitive {
 public:
  inline TqJSAtomicsMutex(uintptr_t address) : TqJSSynchronizationPrimitive(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetOwnerThreadIdAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOwnerThreadIdValue(d::MemoryAccessor accessor ) const;
};

class TqJSAtomicsCondition : public TqJSSynchronizationPrimitive {
 public:
  inline TqJSAtomicsCondition(uintptr_t address) : TqJSSynchronizationPrimitive(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqJSCollectionIterator : public TqJSObject {
 public:
  inline TqJSCollectionIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTableAddress() const;
  Value<uintptr_t> GetTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
};

class TqJSWeakCollection : public TqJSObject {
 public:
  inline TqJSWeakCollection(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTableAddress() const;
  Value<uintptr_t> GetTableValue(d::MemoryAccessor accessor ) const;
};

class TqJSWeakSet : public TqJSWeakCollection {
 public:
  inline TqJSWeakSet(uintptr_t address) : TqJSWeakCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSWeakMap : public TqJSWeakCollection {
 public:
  inline TqJSWeakMap(uintptr_t address) : TqJSWeakCollection(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSDisposableStackBase : public TqJSObject {
 public:
  inline TqJSDisposableStackBase(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetStackAddress() const;
  Value<uintptr_t> GetStackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStatusAddress() const;
  Value<uintptr_t> GetStatusValue(d::MemoryAccessor accessor ) const;
};

class TqJSSyncDisposableStack : public TqJSDisposableStackBase {
 public:
  inline TqJSSyncDisposableStack(uintptr_t address) : TqJSDisposableStackBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSAsyncDisposableStack : public TqJSDisposableStackBase {
 public:
  inline TqJSAsyncDisposableStack(uintptr_t address) : TqJSDisposableStackBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSGeneratorObject : public TqJSObject {
 public:
  inline TqJSGeneratorObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
};

class TqJSAsyncGeneratorObject : public TqJSGeneratorObject {
 public:
  inline TqJSAsyncGeneratorObject(uintptr_t address) : TqJSGeneratorObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetQueueAddress() const;
  Value<uintptr_t> GetQueueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIsAwaitingAddress() const;
  Value<uintptr_t> GetIsAwaitingValue(d::MemoryAccessor accessor ) const;
};

class TqAsyncGeneratorRequest : public TqStruct {
 public:
  inline TqAsyncGeneratorRequest(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResumeModeAddress() const;
  Value<uintptr_t> GetResumeModeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
};

class TqJSIteratorHelper : public TqJSObject {
 public:
  inline TqJSIteratorHelper(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetUnderlyingObjectAddress() const;
  Value<uintptr_t> GetUnderlyingObjectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUnderlyingNextAddress() const;
  Value<uintptr_t> GetUnderlyingNextValue(d::MemoryAccessor accessor ) const;
};

class TqJSIteratorMapHelper : public TqJSIteratorHelper {
 public:
  inline TqJSIteratorMapHelper(uintptr_t address) : TqJSIteratorHelper(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetMapperAddress() const;
  Value<uintptr_t> GetMapperValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCounterAddress() const;
  Value<uintptr_t> GetCounterValue(d::MemoryAccessor accessor ) const;
};

class TqJSIteratorFilterHelper : public TqJSIteratorHelper {
 public:
  inline TqJSIteratorFilterHelper(uintptr_t address) : TqJSIteratorHelper(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPredicateAddress() const;
  Value<uintptr_t> GetPredicateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCounterAddress() const;
  Value<uintptr_t> GetCounterValue(d::MemoryAccessor accessor ) const;
};

class TqJSIteratorTakeHelper : public TqJSIteratorHelper {
 public:
  inline TqJSIteratorTakeHelper(uintptr_t address) : TqJSIteratorHelper(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRemainingAddress() const;
  Value<uintptr_t> GetRemainingValue(d::MemoryAccessor accessor ) const;
};

class TqJSIteratorDropHelper : public TqJSIteratorHelper {
 public:
  inline TqJSIteratorDropHelper(uintptr_t address) : TqJSIteratorHelper(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRemainingAddress() const;
  Value<uintptr_t> GetRemainingValue(d::MemoryAccessor accessor ) const;
};

class TqJSIteratorFlatMapHelper : public TqJSIteratorHelper {
 public:
  inline TqJSIteratorFlatMapHelper(uintptr_t address) : TqJSIteratorHelper(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetMapperAddress() const;
  Value<uintptr_t> GetMapperValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCounterAddress() const;
  Value<uintptr_t> GetCounterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInnerIteratorAddress() const;
  uintptr_t GetInnerAliveAddress() const;
  Value<uintptr_t> GetInnerAliveValue(d::MemoryAccessor accessor ) const;
};

class TqJSExternalObject : public TqJSObject {
 public:
  inline TqJSExternalObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqJSGlobalProxy : public TqJSSpecialObject {
 public:
  inline TqJSGlobalProxy(uintptr_t address) : TqJSSpecialObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSGlobalObject : public TqJSSpecialObject {
 public:
  inline TqJSGlobalObject(uintptr_t address) : TqJSSpecialObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetGlobalProxyAddress() const;
  Value<uintptr_t> GetGlobalProxyValue(d::MemoryAccessor accessor ) const;
};

class TqJSPrimitiveWrapper : public TqJSCustomElementsObject {
 public:
  inline TqJSPrimitiveWrapper(uintptr_t address) : TqJSCustomElementsObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
};

class TqJSMessageObject : public TqJSObject {
 public:
  inline TqJSMessageObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetMessageTypeAddress() const;
  Value<uintptr_t> GetMessageTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetArgumentAddress() const;
  Value<uintptr_t> GetArgumentValue(d::MemoryAccessor accessor ) const;
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

class TqJSDate : public TqJSObject {
 public:
  inline TqJSDate(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetValueValue(d::MemoryAccessor accessor ) const;
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

class TqJSAsyncFromSyncIterator : public TqJSObject {
 public:
  inline TqJSAsyncFromSyncIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSyncIteratorAddress() const;
  Value<uintptr_t> GetSyncIteratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNextAddress() const;
  Value<uintptr_t> GetNextValue(d::MemoryAccessor accessor ) const;
};

class TqJSStringIterator : public TqJSObject {
 public:
  inline TqJSStringIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetStringAddress() const;
  Value<uintptr_t> GetStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
};

class TqJSValidIteratorWrapper : public TqJSObject {
 public:
  inline TqJSValidIteratorWrapper(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetUnderlyingAddress() const;
};

class TqJSProxyRevocableResult : public TqJSObject {
 public:
  inline TqJSProxyRevocableResult(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetProxyAddress() const;
  Value<uintptr_t> GetProxyValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRevokeAddress() const;
  Value<uintptr_t> GetRevokeValue(d::MemoryAccessor accessor ) const;
};

class TqJSRawJson : public TqJSObject {
 public:
  inline TqJSRawJson(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSRegExpStringIterator : public TqJSObject {
 public:
  inline TqJSRegExpStringIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIteratingRegExpAddress() const;
  Value<uintptr_t> GetIteratingRegExpValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIteratedStringAddress() const;
  Value<uintptr_t> GetIteratedStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqRegExpData : public TqExposedTrustedObject {
 public:
  inline TqRegExpData(uintptr_t address) : TqExposedTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTypeTagAddress() const;
  Value<uintptr_t> GetTypeTagValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceAddress() const;
  Value<uintptr_t> GetSourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWrapperAddress() const;
  Value<uintptr_t> GetWrapperValue(d::MemoryAccessor accessor ) const;
};

class TqAtomRegExpData : public TqRegExpData {
 public:
  inline TqAtomRegExpData(uintptr_t address) : TqRegExpData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPatternAddress() const;
  Value<uintptr_t> GetPatternValue(d::MemoryAccessor accessor ) const;
};

class TqIrRegExpData : public TqRegExpData {
 public:
  inline TqIrRegExpData(uintptr_t address) : TqRegExpData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLatin1BytecodeAddress() const;
  Value<uintptr_t> GetLatin1BytecodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUc16BytecodeAddress() const;
  Value<uintptr_t> GetUc16BytecodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLatin1CodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetLatin1CodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUc16CodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetUc16CodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCaptureNameMapAddress() const;
  Value<uintptr_t> GetCaptureNameMapValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaxRegisterCountAddress() const;
  Value<uintptr_t> GetMaxRegisterCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCaptureCountAddress() const;
  Value<uintptr_t> GetCaptureCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTicksUntilTierUpAddress() const;
  Value<uintptr_t> GetTicksUntilTierUpValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBacktrackLimitAddress() const;
  Value<uintptr_t> GetBacktrackLimitValue(d::MemoryAccessor accessor ) const;
};

class TqRegExpDataWrapper : public TqStruct {
 public:
  inline TqRegExpDataWrapper(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExp : public TqJSObject {
 public:
  inline TqJSRegExp(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceAddress() const;
  Value<uintptr_t> GetSourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExpResult : public TqJSArray {
 public:
  inline TqJSRegExpResult(uintptr_t address) : TqJSArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInputAddress() const;
  Value<uintptr_t> GetInputValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetGroupsAddress() const;
  Value<uintptr_t> GetGroupsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNamesAddress() const;
  Value<uintptr_t> GetNamesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegexpInputAddress() const;
  Value<uintptr_t> GetRegexpInputValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegexpLastIndexAddress() const;
  Value<uintptr_t> GetRegexpLastIndexValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExpResultWithIndices : public TqJSRegExpResult {
 public:
  inline TqJSRegExpResultWithIndices(uintptr_t address) : TqJSRegExpResult(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIndicesAddress() const;
  Value<uintptr_t> GetIndicesValue(d::MemoryAccessor accessor ) const;
};

class TqJSRegExpResultIndices : public TqJSArray {
 public:
  inline TqJSRegExpResultIndices(uintptr_t address) : TqJSArray(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetGroupsAddress() const;
  Value<uintptr_t> GetGroupsValue(d::MemoryAccessor accessor ) const;
};

class TqJSShadowRealm : public TqJSObject {
 public:
  inline TqJSShadowRealm(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNativeContextAddress() const;
  Value<uintptr_t> GetNativeContextValue(d::MemoryAccessor accessor ) const;
};

class TqJSSharedArray : public TqAlwaysSharedSpaceJSObject {
 public:
  inline TqJSSharedArray(uintptr_t address) : TqAlwaysSharedSpaceJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSSharedStruct : public TqAlwaysSharedSpaceJSObject {
 public:
  inline TqJSSharedStruct(uintptr_t address) : TqAlwaysSharedSpaceJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqJSTemporalCalendar : public TqJSObject {
 public:
  inline TqJSTemporalCalendar(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalDuration : public TqJSObject {
 public:
  inline TqJSTemporalDuration(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetYearsAddress() const;
  Value<uintptr_t> GetYearsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMonthsAddress() const;
  Value<uintptr_t> GetMonthsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWeeksAddress() const;
  Value<uintptr_t> GetWeeksValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDaysAddress() const;
  Value<uintptr_t> GetDaysValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHoursAddress() const;
  Value<uintptr_t> GetHoursValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMinutesAddress() const;
  Value<uintptr_t> GetMinutesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSecondsAddress() const;
  Value<uintptr_t> GetSecondsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMillisecondsAddress() const;
  Value<uintptr_t> GetMillisecondsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMicrosecondsAddress() const;
  Value<uintptr_t> GetMicrosecondsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNanosecondsAddress() const;
  Value<uintptr_t> GetNanosecondsValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalInstant : public TqJSObject {
 public:
  inline TqJSTemporalInstant(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNanosecondsAddress() const;
  Value<uintptr_t> GetNanosecondsValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalPlainDateTime : public TqJSObject {
 public:
  inline TqJSTemporalPlainDateTime(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetYearMonthDayAddress() const;
  Value<uintptr_t> GetYearMonthDayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHourMinuteSecondAddress() const;
  Value<uintptr_t> GetHourMinuteSecondValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSecondPartsAddress() const;
  Value<uintptr_t> GetSecondPartsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalendarAddress() const;
  Value<uintptr_t> GetCalendarValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalPlainDate : public TqJSObject {
 public:
  inline TqJSTemporalPlainDate(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetYearMonthDayAddress() const;
  Value<uintptr_t> GetYearMonthDayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalendarAddress() const;
  Value<uintptr_t> GetCalendarValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalPlainMonthDay : public TqJSObject {
 public:
  inline TqJSTemporalPlainMonthDay(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetYearMonthDayAddress() const;
  Value<uintptr_t> GetYearMonthDayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalendarAddress() const;
  Value<uintptr_t> GetCalendarValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalPlainTime : public TqJSObject {
 public:
  inline TqJSTemporalPlainTime(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetHourMinuteSecondAddress() const;
  Value<uintptr_t> GetHourMinuteSecondValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSecondPartsAddress() const;
  Value<uintptr_t> GetSecondPartsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalendarAddress() const;
  Value<uintptr_t> GetCalendarValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalPlainYearMonth : public TqJSObject {
 public:
  inline TqJSTemporalPlainYearMonth(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetYearMonthDayAddress() const;
  Value<uintptr_t> GetYearMonthDayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalendarAddress() const;
  Value<uintptr_t> GetCalendarValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalTimeZone : public TqJSObject {
 public:
  inline TqJSTemporalTimeZone(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDetailsAddress() const;
  Value<uintptr_t> GetDetailsValue(d::MemoryAccessor accessor ) const;
};

class TqJSTemporalZonedDateTime : public TqJSObject {
 public:
  inline TqJSTemporalZonedDateTime(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNanosecondsAddress() const;
  Value<uintptr_t> GetNanosecondsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTimeZoneAddress() const;
  Value<uintptr_t> GetTimeZoneValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCalendarAddress() const;
  Value<uintptr_t> GetCalendarValue(d::MemoryAccessor accessor ) const;
};

class TqJSFinalizationRegistry : public TqJSObject {
 public:
  inline TqJSFinalizationRegistry(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  uintptr_t GetNextDirtyAddress() const;
  Value<uintptr_t> GetNextDirtyValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSWeakRef : public TqJSObject {
 public:
  inline TqJSWeakRef(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTargetAddress() const;
  Value<uintptr_t> GetTargetValue(d::MemoryAccessor accessor ) const;
};

class TqObjectBoilerplateDescription : public TqHeapObject {
 public:
  inline TqObjectBoilerplateDescription(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCapacityAddress() const;
  Value<uintptr_t> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBackingStoreSizeAddress() const;
  Value<uintptr_t> GetBackingStoreSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawEntriesAddress() const;
  Value<uintptr_t> GetRawEntriesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqArrayBoilerplateDescription : public TqStruct {
 public:
  inline TqArrayBoilerplateDescription(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetConstantElementsAddress() const;
  Value<uintptr_t> GetConstantElementsValue(d::MemoryAccessor accessor ) const;
};

class TqRegExpBoilerplateDescription : public TqStruct {
 public:
  inline TqRegExpBoilerplateDescription(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceAddress() const;
  Value<uintptr_t> GetSourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqClassBoilerplate : public TqStruct {
 public:
  inline TqClassBoilerplate(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetArgumentsCountAddress() const;
  Value<uintptr_t> GetArgumentsCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStaticPropertiesTemplateAddress() const;
  Value<uintptr_t> GetStaticPropertiesTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStaticElementsTemplateAddress() const;
  Value<uintptr_t> GetStaticElementsTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStaticComputedPropertiesAddress() const;
  Value<uintptr_t> GetStaticComputedPropertiesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstancePropertiesTemplateAddress() const;
  Value<uintptr_t> GetInstancePropertiesTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceElementsTemplateAddress() const;
  Value<uintptr_t> GetInstanceElementsTemplateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstanceComputedPropertiesAddress() const;
  Value<uintptr_t> GetInstanceComputedPropertiesValue(d::MemoryAccessor accessor ) const;
};

class TqMegaDomHandler : public TqHeapObject {
 public:
  inline TqMegaDomHandler(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetAccessorAddress() const;
  Value<uintptr_t> GetAccessorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
};

class TqMicrotask : public TqStruct {
 public:
  inline TqMicrotask(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetContinuationPreservedEmbedderDataAddress() const;
  Value<uintptr_t> GetContinuationPreservedEmbedderDataValue(d::MemoryAccessor accessor ) const;
};

class TqCallbackTask : public TqMicrotask {
 public:
  inline TqCallbackTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCallbackAddress() const;
  Value<uintptr_t> GetCallbackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqCallableTask : public TqMicrotask {
 public:
  inline TqCallableTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCallableAddress() const;
  Value<uintptr_t> GetCallableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
};

class TqModule : public TqHeapObject {
 public:
  inline TqModule(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  uintptr_t GetTopLevelCapabilityAddress() const;
  Value<uintptr_t> GetTopLevelCapabilityValue(d::MemoryAccessor accessor ) const;
};

class TqJSModuleNamespace : public TqJSSpecialObject {
 public:
  inline TqJSModuleNamespace(uintptr_t address) : TqJSSpecialObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetModuleAddress() const;
  Value<uintptr_t> GetModuleValue(d::MemoryAccessor accessor ) const;
};

class TqScriptOrModule : public TqStruct {
 public:
  inline TqScriptOrModule(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetResourceNameAddress() const;
  Value<uintptr_t> GetResourceNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHostDefinedOptionsAddress() const;
  Value<uintptr_t> GetHostDefinedOptionsValue(d::MemoryAccessor accessor ) const;
};

class TqTrue : public TqBoolean {
 public:
  inline TqTrue(uintptr_t address) : TqBoolean(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqFalse : public TqBoolean {
 public:
  inline TqFalse(uintptr_t address) : TqBoolean(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqSmallOrderedHashTable : public TqHeapObject {
 public:
  inline TqSmallOrderedHashTable(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqSmallOrderedHashSet : public TqSmallOrderedHashTable {
 public:
  inline TqSmallOrderedHashSet(uintptr_t address) : TqSmallOrderedHashTable(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNumberOfElementsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfElementsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfDeletedElementsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfDeletedElementsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfBucketsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfBucketsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPaddingAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPaddingValue(d::MemoryAccessor accessor , size_t offset) const;
  uintptr_t GetDataTableAddress() const;
  Value<uintptr_t> GetDataTableValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqSmallOrderedHashMap : public TqSmallOrderedHashTable {
 public:
  inline TqSmallOrderedHashMap(uintptr_t address) : TqSmallOrderedHashTable(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNumberOfElementsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfElementsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfDeletedElementsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfDeletedElementsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfBucketsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfBucketsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPaddingAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPaddingValue(d::MemoryAccessor accessor , size_t offset) const;
  uintptr_t GetDataTableAddress() const;
};

class TqSmallOrderedNameDictionary : public TqSmallOrderedHashTable {
 public:
  inline TqSmallOrderedNameDictionary(uintptr_t address) : TqSmallOrderedHashTable(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetHashAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetHashValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPadding0Address() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPadding0Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfElementsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfElementsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfDeletedElementsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfDeletedElementsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfBucketsAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNumberOfBucketsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPadding1Address() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPadding1Value(d::MemoryAccessor accessor , size_t offset) const;
  uintptr_t GetDataTableAddress() const;
};

class TqPromiseReaction : public TqStruct {
 public:
  inline TqPromiseReaction(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetContinuationPreservedEmbedderDataAddress() const;
  Value<uintptr_t> GetContinuationPreservedEmbedderDataValue(d::MemoryAccessor accessor ) const;
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
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqPromiseRejectReactionJobTask : public TqPromiseReactionJobTask {
 public:
  inline TqPromiseRejectReactionJobTask(uintptr_t address) : TqPromiseReactionJobTask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqPromiseResolveThenableJobTask : public TqMicrotask {
 public:
  inline TqPromiseResolveThenableJobTask(uintptr_t address) : TqMicrotask(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetContextAddress() const;
  Value<uintptr_t> GetContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseToResolveAddress() const;
  Value<uintptr_t> GetPromiseToResolveValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetThenableAddress() const;
  Value<uintptr_t> GetThenableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetThenAddress() const;
  Value<uintptr_t> GetThenValue(d::MemoryAccessor accessor ) const;
};

class TqPropertyArray : public TqHeapObject {
 public:
  inline TqPropertyArray(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAndHashAddress() const;
  Value<uintptr_t> GetLengthAndHashValue(d::MemoryAccessor accessor ) const;
};

class TqPropertyCell : public TqHeapObject {
 public:
  inline TqPropertyCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPropertyDetailsRawAddress() const;
  Value<uintptr_t> GetPropertyDetailsRawValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDependentCodeAddress() const;
  Value<uintptr_t> GetDependentCodeValue(d::MemoryAccessor accessor ) const;
};

class TqConstTrackingLetCell : public TqHeapObject {
 public:
  inline TqConstTrackingLetCell(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDependentCodeAddress() const;
  Value<uintptr_t> GetDependentCodeValue(d::MemoryAccessor accessor ) const;
};

class TqPropertyDescriptorObject : public TqStruct {
 public:
  inline TqPropertyDescriptorObject(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetGetAddress() const;
  Value<uintptr_t> GetGetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSetAddress() const;
  Value<uintptr_t> GetSetValue(d::MemoryAccessor accessor ) const;
};

class TqPrototypeInfo : public TqStruct {
 public:
  inline TqPrototypeInfo(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetModuleNamespaceAddress() const;
  Value<uintptr_t> GetModuleNamespaceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeUsersAddress() const;
  Value<uintptr_t> GetPrototypeUsersValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPrototypeChainEnumCacheAddress() const;
  Value<uintptr_t> GetPrototypeChainEnumCacheValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegistrySlotAddress() const;
  Value<uintptr_t> GetRegistrySlotValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitFieldAddress() const;
  Value<uintptr_t> GetBitFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDerivedMapsAddress() const;
  Value<uintptr_t> GetDerivedMapsValue(d::MemoryAccessor accessor ) const;
};

class TqScript : public TqStruct {
 public:
  inline TqScript(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSourceAddress() const;
  Value<uintptr_t> GetSourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLineOffsetAddress() const;
  Value<uintptr_t> GetLineOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetColumnOffsetAddress() const;
  Value<uintptr_t> GetColumnOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetContextDataAddress() const;
  Value<uintptr_t> GetContextDataValue(d::MemoryAccessor accessor ) const;
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
  uintptr_t GetInfosAddress() const;
  Value<uintptr_t> GetInfosValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCompiledLazyFunctionPositionsAddress() const;
  Value<uintptr_t> GetCompiledLazyFunctionPositionsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceUrlAddress() const;
  Value<uintptr_t> GetSourceUrlValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceMappingUrlAddress() const;
  Value<uintptr_t> GetSourceMappingUrlValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHostDefinedOptionsAddress() const;
  Value<uintptr_t> GetHostDefinedOptionsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSourceHashAddress() const;
  Value<uintptr_t> GetSourceHashValue(d::MemoryAccessor accessor ) const;
};

class TqPreparseData : public TqHeapObject {
 public:
  inline TqPreparseData(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDataLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDataLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetChildrenLengthAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetChildrenLengthValue(d::MemoryAccessor accessor ) const;
};

class TqInterpreterData : public TqExposedTrustedObject {
 public:
  inline TqInterpreterData(uintptr_t address) : TqExposedTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBytecodeArrayAddress() const;
  Value<uintptr_t> GetBytecodeArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInterpreterTrampolineAddress() const;
  Value<uintptr_t> GetInterpreterTrampolineValue(d::MemoryAccessor accessor ) const;
};

class TqSharedFunctionInfo : public TqHeapObject {
 public:
  inline TqSharedFunctionInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTrustedFunctionDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedFunctionDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUntrustedFunctionDataAddress() const;
  Value<uintptr_t> GetUntrustedFunctionDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNameOrScopeInfoAddress() const;
  Value<uintptr_t> GetNameOrScopeInfoValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOuterScopeInfoOrFeedbackMetadataAddress() const;
  Value<uintptr_t> GetOuterScopeInfoOrFeedbackMetadataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptAddress() const;
  Value<uintptr_t> GetScriptValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLengthAddress() const;
  Value<int16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFormalParameterCountAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFormalParameterCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionTokenOffsetAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFunctionTokenOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExpectedNofPropertiesAddress() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetExpectedNofPropertiesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlags2Address() const;
  Value<uint8_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlags2Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionLiteralIdAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFunctionLiteralIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUniqueIdAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetUniqueIdValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetAgeAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetAgeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPaddingAddress() const;
  Value<uint16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqSharedFunctionInfoWrapper : public TqTrustedObject {
 public:
  inline TqSharedFunctionInfoWrapper(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSharedInfoAddress() const;
  Value<uintptr_t> GetSharedInfoValue(d::MemoryAccessor accessor ) const;
};

class TqUncompiledData : public TqExposedTrustedObject {
 public:
  inline TqUncompiledData(uintptr_t address) : TqExposedTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetInferredNameAddress() const;
  Value<uintptr_t> GetInferredNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStartPositionAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetStartPositionValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEndPositionAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetEndPositionValue(d::MemoryAccessor accessor ) const;
};

class TqUncompiledDataWithoutPreparseData : public TqUncompiledData {
 public:
  inline TqUncompiledDataWithoutPreparseData(uintptr_t address) : TqUncompiledData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqUncompiledDataWithPreparseData : public TqUncompiledData {
 public:
  inline TqUncompiledDataWithPreparseData(uintptr_t address) : TqUncompiledData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPreparseDataAddress() const;
  Value<uintptr_t> GetPreparseDataValue(d::MemoryAccessor accessor ) const;
};

class TqUncompiledDataWithoutPreparseDataWithJob : public TqUncompiledDataWithoutPreparseData {
 public:
  inline TqUncompiledDataWithoutPreparseDataWithJob(uintptr_t address) : TqUncompiledDataWithoutPreparseData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetJobAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetJobValue(d::MemoryAccessor accessor ) const;
};

class TqUncompiledDataWithPreparseDataAndJob : public TqUncompiledDataWithPreparseData {
 public:
  inline TqUncompiledDataWithPreparseDataAndJob(uintptr_t address) : TqUncompiledDataWithPreparseData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetJobAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetJobValue(d::MemoryAccessor accessor ) const;
};

class TqOnHeapBasicBlockProfilerData : public TqHeapObject {
 public:
  inline TqOnHeapBasicBlockProfilerData(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBlockIdsAddress() const;
  Value<uintptr_t> GetBlockIdsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCountsAddress() const;
  Value<uintptr_t> GetCountsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBranchesAddress() const;
  Value<uintptr_t> GetBranchesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScheduleAddress() const;
  Value<uintptr_t> GetScheduleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCodeAddress() const;
  Value<uintptr_t> GetCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHashAddress() const;
  Value<uintptr_t> GetHashValue(d::MemoryAccessor accessor ) const;
};

class TqSourceTextModule : public TqModule {
 public:
  inline TqSourceTextModule(uintptr_t address) : TqModule(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCodeAddress() const;
  Value<uintptr_t> GetCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegularExportsAddress() const;
  Value<uintptr_t> GetRegularExportsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRegularImportsAddress() const;
  Value<uintptr_t> GetRegularImportsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRequestedModulesAddress() const;
  Value<uintptr_t> GetRequestedModulesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetImportMetaAddress() const;
  Value<uintptr_t> GetImportMetaValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCycleRootAddress() const;
  Value<uintptr_t> GetCycleRootValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetAsyncParentModulesAddress() const;
  Value<uintptr_t> GetAsyncParentModulesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDfsIndexAddress() const;
  Value<uintptr_t> GetDfsIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDfsAncestorIndexAddress() const;
  Value<uintptr_t> GetDfsAncestorIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPendingAsyncDependenciesAddress() const;
  Value<uintptr_t> GetPendingAsyncDependenciesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqModuleRequest : public TqStruct {
 public:
  inline TqModuleRequest(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSpecifierAddress() const;
  Value<uintptr_t> GetSpecifierValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetImportAttributesAddress() const;
  Value<uintptr_t> GetImportAttributesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqSourceTextModuleInfoEntry : public TqStruct {
 public:
  inline TqSourceTextModuleInfoEntry(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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

class TqConsString : public TqString {
 public:
  inline TqConsString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFirstAddress() const;
  Value<uintptr_t> GetFirstValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSecondAddress() const;
  Value<uintptr_t> GetSecondValue(d::MemoryAccessor accessor ) const;
};

class TqExternalString : public TqString {
 public:
  inline TqExternalString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetResourceAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetResourceValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResourceDataAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetResourceDataValue(d::MemoryAccessor accessor ) const;
};

class TqExternalOneByteString : public TqExternalString {
 public:
  inline TqExternalOneByteString(uintptr_t address) : TqExternalString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqExternalTwoByteString : public TqExternalString {
 public:
  inline TqExternalTwoByteString(uintptr_t address) : TqExternalString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqInternalizedString : public TqString {
 public:
  inline TqInternalizedString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqSeqString : public TqString {
 public:
  inline TqSeqString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqSeqOneByteString : public TqSeqString {
 public:
  inline TqSeqOneByteString(uintptr_t address) : TqSeqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCharsAddress() const;
  Value<char /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCharsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqSeqTwoByteString : public TqSeqString {
 public:
  inline TqSeqTwoByteString(uintptr_t address) : TqSeqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCharsAddress() const;
  Value<char16_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCharsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqSlicedString : public TqString {
 public:
  inline TqSlicedString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetParentAddress() const;
  Value<uintptr_t> GetParentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOffsetAddress() const;
  Value<uintptr_t> GetOffsetValue(d::MemoryAccessor accessor ) const;
};

class TqThinString : public TqString {
 public:
  inline TqThinString(uintptr_t address) : TqString(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetActualAddress() const;
  Value<uintptr_t> GetActualValue(d::MemoryAccessor accessor ) const;
};

class TqTuple2 : public TqStruct {
 public:
  inline TqTuple2(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValue1Address() const;
  Value<uintptr_t> GetValue1Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetValue2Address() const;
  Value<uintptr_t> GetValue2Value(d::MemoryAccessor accessor ) const;
};

class TqSwissNameDictionary : public TqHeapObject {
 public:
  inline TqSwissNameDictionary(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetHashAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetHashValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCapacityAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCapacityValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMetaTableAddress() const;
  Value<uintptr_t> GetMetaTableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataTableAddress() const;
  Value<uintptr_t> GetDataTableValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqSyntheticModule : public TqModule {
 public:
  inline TqSyntheticModule(uintptr_t address) : TqModule(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNameAddress() const;
  Value<uintptr_t> GetNameValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExportNamesAddress() const;
  Value<uintptr_t> GetExportNamesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEvaluationStepsAddress() const;
  Value<uintptr_t> GetEvaluationStepsValue(d::MemoryAccessor accessor ) const;
};

class TqTemplateObjectDescription : public TqStruct {
 public:
  inline TqTemplateObjectDescription(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetRawStringsAddress() const;
  Value<uintptr_t> GetRawStringsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCookedStringsAddress() const;
  Value<uintptr_t> GetCookedStringsValue(d::MemoryAccessor accessor ) const;
};

class TqFunctionTemplateRareData : public TqStruct {
 public:
  inline TqFunctionTemplateRareData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
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
  uintptr_t GetCFunctionOverloadsAddress() const;
  Value<uintptr_t> GetCFunctionOverloadsValue(d::MemoryAccessor accessor ) const;
};

class TqObjectTemplateInfo : public TqTemplateInfo {
 public:
  inline TqObjectTemplateInfo(uintptr_t address) : TqTemplateInfo(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetConstructorAddress() const;
  Value<uintptr_t> GetConstructorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
};

class TqDictionaryTemplateInfo : public TqHeapObject {
 public:
  inline TqDictionaryTemplateInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPropertyNamesAddress() const;
  Value<uintptr_t> GetPropertyNamesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerialNumberAddress() const;
  Value<uintptr_t> GetSerialNumberValue(d::MemoryAccessor accessor ) const;
};

class TqTurbofanType : public TqHeapObject {
 public:
  inline TqTurbofanType(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqTurbofanBitsetType : public TqTurbofanType {
 public:
  inline TqTurbofanBitsetType(uintptr_t address) : TqTurbofanType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetBitsetLowAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitsetLowValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBitsetHighAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetBitsetHighValue(d::MemoryAccessor accessor ) const;
};

class TqTurbofanUnionType : public TqTurbofanType {
 public:
  inline TqTurbofanUnionType(uintptr_t address) : TqTurbofanType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetType1Address() const;
  Value<uintptr_t> GetType1Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetType2Address() const;
  Value<uintptr_t> GetType2Value(d::MemoryAccessor accessor ) const;
};

class TqTurbofanRangeType : public TqTurbofanType {
 public:
  inline TqTurbofanRangeType(uintptr_t address) : TqTurbofanType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetMinAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMinValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaxAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMaxValue(d::MemoryAccessor accessor ) const;
};

class TqTurbofanHeapConstantType : public TqTurbofanType {
 public:
  inline TqTurbofanHeapConstantType(uintptr_t address) : TqTurbofanType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetConstantAddress() const;
  Value<uintptr_t> GetConstantValue(d::MemoryAccessor accessor ) const;
};

class TqTurbofanOtherNumberConstantType : public TqTurbofanType {
 public:
  inline TqTurbofanOtherNumberConstantType(uintptr_t address) : TqTurbofanType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetConstantAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetConstantValue(d::MemoryAccessor accessor ) const;
};

class TqTurboshaftType : public TqHeapObject {
 public:
  inline TqTurboshaftType(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqTurboshaftWord32Type : public TqTurboshaftType {
 public:
  inline TqTurboshaftWord32Type(uintptr_t address) : TqTurboshaftType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqTurboshaftWord32RangeType : public TqTurboshaftWord32Type {
 public:
  inline TqTurboshaftWord32RangeType(uintptr_t address) : TqTurboshaftWord32Type(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFromAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFromValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetToValue(d::MemoryAccessor accessor ) const;
};

class TqTurboshaftWord32SetType : public TqTurboshaftWord32Type {
 public:
  inline TqTurboshaftWord32SetType(uintptr_t address) : TqTurboshaftWord32Type(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSetSizeAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSetSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetElementsAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetElementsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTurboshaftWord64Type : public TqTurboshaftType {
 public:
  inline TqTurboshaftWord64Type(uintptr_t address) : TqTurboshaftType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqTurboshaftWord64RangeType : public TqTurboshaftWord64Type {
 public:
  inline TqTurboshaftWord64RangeType(uintptr_t address) : TqTurboshaftWord64Type(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetFromHighAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFromHighValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFromLowAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetFromLowValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToHighAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetToHighValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetToLowAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetToLowValue(d::MemoryAccessor accessor ) const;
};

class TqTurboshaftWord64SetType : public TqTurboshaftWord64Type {
 public:
  inline TqTurboshaftWord64SetType(uintptr_t address) : TqTurboshaftWord64Type(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSetSizeAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSetSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetElementsHighAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetElementsHighValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqTurboshaftFloat64Type : public TqTurboshaftType {
 public:
  inline TqTurboshaftFloat64Type(uintptr_t address) : TqTurboshaftType(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSpecialValuesAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSpecialValuesValue(d::MemoryAccessor accessor ) const;
};

class TqTurboshaftFloat64RangeType : public TqTurboshaftFloat64Type {
 public:
  inline TqTurboshaftFloat64RangeType(uintptr_t address) : TqTurboshaftFloat64Type(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMinAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMinValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaxAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetMaxValue(d::MemoryAccessor accessor ) const;
};

class TqTurboshaftFloat64SetType : public TqTurboshaftFloat64Type {
 public:
  inline TqTurboshaftFloat64SetType(uintptr_t address) : TqTurboshaftFloat64Type(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSetSizeAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSetSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetElementsAddress() const;
  Value<double /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetElementsValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqInternalClass : public TqHeapObject {
 public:
  inline TqInternalClass(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetAAddress() const;
  Value<uintptr_t> GetAValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBAddress() const;
  Value<uintptr_t> GetBValue(d::MemoryAccessor accessor ) const;
};

class TqSmiPair : public TqHeapObject {
 public:
  inline TqSmiPair(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetAAddress() const;
  Value<uintptr_t> GetAValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBAddress() const;
  Value<uintptr_t> GetBValue(d::MemoryAccessor accessor ) const;
};

class TqSmiBox : public TqHeapObject {
 public:
  inline TqSmiBox(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetValueAddress() const;
  Value<uintptr_t> GetValueValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUnrelatedAddress() const;
  Value<uintptr_t> GetUnrelatedValue(d::MemoryAccessor accessor ) const;
};

class TqExportedSubClassBase : public TqHeapObject {
 public:
  inline TqExportedSubClassBase(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetAAddress() const;
  Value<uintptr_t> GetAValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBAddress() const;
  Value<uintptr_t> GetBValue(d::MemoryAccessor accessor ) const;
};

class TqExportedSubClass : public TqExportedSubClassBase {
 public:
  inline TqExportedSubClass(uintptr_t address) : TqExportedSubClassBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCFieldAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDFieldAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEFieldAddress() const;
  Value<uintptr_t> GetEFieldValue(d::MemoryAccessor accessor ) const;
};

class TqAbstractInternalClass : public TqHeapObject {
 public:
  inline TqAbstractInternalClass(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqAbstractInternalClassSubclass1 : public TqAbstractInternalClass {
 public:
  inline TqAbstractInternalClassSubclass1(uintptr_t address) : TqAbstractInternalClass(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqAbstractInternalClassSubclass2 : public TqAbstractInternalClass {
 public:
  inline TqAbstractInternalClassSubclass2(uintptr_t address) : TqAbstractInternalClass(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqInternalClassWithStructElements : public TqHeapObject {
 public:
  inline TqInternalClassWithStructElements(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetDummy1Address() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDummy1Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetDummy2Address() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetDummy2Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetCountAddress() const;
  Value<uintptr_t> GetCountValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDataAddress() const;
  Value<uintptr_t> GetDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetObjectAddress() const;
  Value<uintptr_t> GetObjectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetEntriesAddress() const;
  Value<uintptr_t> GetEntriesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqExportedSubClass2 : public TqExportedSubClassBase {
 public:
  inline TqExportedSubClass2(uintptr_t address) : TqExportedSubClassBase(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetXFieldAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetXFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetYFieldAddress() const;
  Value<int32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetYFieldValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetZFieldAddress() const;
  Value<uintptr_t> GetZFieldValue(d::MemoryAccessor accessor ) const;
};

class TqSortState : public TqHeapObject {
 public:
  inline TqSortState(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetReceiverAddress() const;
  Value<uintptr_t> GetReceiverValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInitialReceiverMapAddress() const;
  Value<uintptr_t> GetInitialReceiverMapValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInitialReceiverLengthAddress() const;
  Value<uintptr_t> GetInitialReceiverLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUserCmpFnAddress() const;
  Value<uintptr_t> GetUserCmpFnValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSortComparePtrAddress() const;
  Value<uintptr_t> GetSortComparePtrValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLoadFnAddress() const;
  Value<uintptr_t> GetLoadFnValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStoreFnAddress() const;
  Value<uintptr_t> GetStoreFnValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDeleteFnAddress() const;
  Value<uintptr_t> GetDeleteFnValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCanUseSameAccessorFnAddress() const;
  Value<uintptr_t> GetCanUseSameAccessorFnValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMinGallopAddress() const;
  Value<uintptr_t> GetMinGallopValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPendingRunsSizeAddress() const;
  Value<uintptr_t> GetPendingRunsSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPendingRunsAddress() const;
  Value<uintptr_t> GetPendingRunsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWorkArrayAddress() const;
  Value<uintptr_t> GetWorkArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTempArrayAddress() const;
  Value<uintptr_t> GetTempArrayValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSortLengthAddress() const;
  Value<uintptr_t> GetSortLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberOfUndefinedAddress() const;
  Value<uintptr_t> GetNumberOfUndefinedValue(d::MemoryAccessor accessor ) const;
};

class TqJSV8BreakIterator : public TqJSObject {
 public:
  inline TqJSV8BreakIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBreakIteratorAddress() const;
  Value<uintptr_t> GetBreakIteratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUnicodeStringAddress() const;
  Value<uintptr_t> GetUnicodeStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundAdoptTextAddress() const;
  Value<uintptr_t> GetBoundAdoptTextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundFirstAddress() const;
  Value<uintptr_t> GetBoundFirstValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundNextAddress() const;
  Value<uintptr_t> GetBoundNextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundCurrentAddress() const;
  Value<uintptr_t> GetBoundCurrentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundBreakTypeAddress() const;
  Value<uintptr_t> GetBoundBreakTypeValue(d::MemoryAccessor accessor ) const;
};

class TqJSCollator : public TqJSObject {
 public:
  inline TqJSCollator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIcuCollatorAddress() const;
  Value<uintptr_t> GetIcuCollatorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundCompareAddress() const;
  Value<uintptr_t> GetBoundCompareValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
};

class TqJSDateTimeFormat : public TqJSObject {
 public:
  inline TqJSDateTimeFormat(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuLocaleAddress() const;
  Value<uintptr_t> GetIcuLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuSimpleDateFormatAddress() const;
  Value<uintptr_t> GetIcuSimpleDateFormatValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuDateIntervalFormatAddress() const;
  Value<uintptr_t> GetIcuDateIntervalFormatValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundFormatAddress() const;
  Value<uintptr_t> GetBoundFormatValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSDisplayNames : public TqJSObject {
 public:
  inline TqJSDisplayNames(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetInternalAddress() const;
  Value<uintptr_t> GetInternalValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSDurationFormat : public TqJSObject {
 public:
  inline TqJSDurationFormat(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetStyleFlagsAddress() const;
  Value<uintptr_t> GetStyleFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetDisplayFlagsAddress() const;
  Value<uintptr_t> GetDisplayFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuLocaleAddress() const;
  Value<uintptr_t> GetIcuLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuNumberFormatterAddress() const;
  Value<uintptr_t> GetIcuNumberFormatterValue(d::MemoryAccessor accessor ) const;
};

class TqJSListFormat : public TqJSObject {
 public:
  inline TqJSListFormat(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuFormatterAddress() const;
  Value<uintptr_t> GetIcuFormatterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSLocale : public TqJSObject {
 public:
  inline TqJSLocale(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIcuLocaleAddress() const;
  Value<uintptr_t> GetIcuLocaleValue(d::MemoryAccessor accessor ) const;
};

class TqJSNumberFormat : public TqJSObject {
 public:
  inline TqJSNumberFormat(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuNumberFormatterAddress() const;
  Value<uintptr_t> GetIcuNumberFormatterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetBoundFormatAddress() const;
  Value<uintptr_t> GetBoundFormatValue(d::MemoryAccessor accessor ) const;
};

class TqJSPluralRules : public TqJSObject {
 public:
  inline TqJSPluralRules(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuPluralRulesAddress() const;
  Value<uintptr_t> GetIcuPluralRulesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuNumberFormatterAddress() const;
  Value<uintptr_t> GetIcuNumberFormatterValue(d::MemoryAccessor accessor ) const;
};

class TqJSRelativeTimeFormat : public TqJSObject {
 public:
  inline TqJSRelativeTimeFormat(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNumberingSystemAddress() const;
  Value<uintptr_t> GetNumberingSystemValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuFormatterAddress() const;
  Value<uintptr_t> GetIcuFormatterValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSSegmentIterator : public TqJSObject {
 public:
  inline TqJSSegmentIterator(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIcuBreakIteratorAddress() const;
  Value<uintptr_t> GetIcuBreakIteratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawStringAddress() const;
  Value<uintptr_t> GetRawStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUnicodeStringAddress() const;
  Value<uintptr_t> GetUnicodeStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSSegmentDataObject : public TqJSObject {
 public:
  inline TqJSSegmentDataObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSegmentAddress() const;
  Value<uintptr_t> GetSegmentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetInputAddress() const;
  Value<uintptr_t> GetInputValue(d::MemoryAccessor accessor ) const;
};

class TqJSSegmentDataObjectWithIsWordLike : public TqJSSegmentDataObject {
 public:
  inline TqJSSegmentDataObjectWithIsWordLike(uintptr_t address) : TqJSSegmentDataObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIsWordLikeAddress() const;
  Value<uintptr_t> GetIsWordLikeValue(d::MemoryAccessor accessor ) const;
};

class TqJSSegmenter : public TqJSObject {
 public:
  inline TqJSSegmenter(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLocaleAddress() const;
  Value<uintptr_t> GetLocaleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIcuBreakIteratorAddress() const;
  Value<uintptr_t> GetIcuBreakIteratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqJSSegments : public TqJSObject {
 public:
  inline TqJSSegments(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIcuBreakIteratorAddress() const;
  Value<uintptr_t> GetIcuBreakIteratorValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawStringAddress() const;
  Value<uintptr_t> GetRawStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUnicodeStringAddress() const;
  Value<uintptr_t> GetUnicodeStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFlagsAddress() const;
  Value<uintptr_t> GetFlagsValue(d::MemoryAccessor accessor ) const;
};

class TqWasmImportData : public TqTrustedObject {
 public:
  inline TqWasmImportData(uintptr_t address) : TqTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetProtectedInstanceDataAddress() const;
  Value<uintptr_t> GetProtectedInstanceDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetNativeContextAddress() const;
  Value<uintptr_t> GetNativeContextValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCallableAddress() const;
  Value<uintptr_t> GetCallableValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSuspendAddress() const;
  Value<uintptr_t> GetSuspendValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWrapperBudgetAddress() const;
  Value<uintptr_t> GetWrapperBudgetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCallOriginAddress() const;
  Value<uintptr_t> GetCallOriginValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSigAddress() const;
  Value<uintptr_t> GetSigValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCodeValue(d::MemoryAccessor accessor ) const;
};

class TqWasmInstanceObject : public TqJSObject {
 public:
  inline TqWasmInstanceObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTrustedDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetModuleObjectAddress() const;
  Value<uintptr_t> GetModuleObjectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExportsObjectAddress() const;
  Value<uintptr_t> GetExportsObjectValue(d::MemoryAccessor accessor ) const;
};

class TqWasmFastApiCallData : public TqHeapObject {
 public:
  inline TqWasmFastApiCallData(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSignatureAddress() const;
  Value<uintptr_t> GetSignatureValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCallbackDataAddress() const;
  Value<uintptr_t> GetCallbackDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCachedMapAddress() const;
  Value<uintptr_t> GetCachedMapValue(d::MemoryAccessor accessor ) const;
};

class TqWasmInternalFunction : public TqExposedTrustedObject {
 public:
  inline TqWasmInternalFunction(uintptr_t address) : TqExposedTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetProtectedImplicitArgAddress() const;
  Value<uintptr_t> GetProtectedImplicitArgValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetExternalAddress() const;
  Value<uintptr_t> GetExternalValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionIndexAddress() const;
  Value<uintptr_t> GetFunctionIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCallTargetAddress() const;
  Value<Address /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCallTargetValue(d::MemoryAccessor accessor ) const;
};

class TqWasmFunctionData : public TqExposedTrustedObject {
 public:
  inline TqWasmFunctionData(uintptr_t address) : TqExposedTrustedObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetWrapperCodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetWrapperCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFuncRefAddress() const;
  Value<uintptr_t> GetFuncRefValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetJsPromiseFlagsAddress() const;
  Value<uintptr_t> GetJsPromiseFlagsValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetProtectedInternalAddress() const;
  Value<uintptr_t> GetProtectedInternalValue(d::MemoryAccessor accessor ) const;
};

class TqWasmExportedFunctionData : public TqWasmFunctionData {
 public:
  inline TqWasmExportedFunctionData(uintptr_t address) : TqWasmFunctionData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetProtectedInstanceDataAddress() const;
  Value<uintptr_t> GetProtectedInstanceDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetFunctionIndexAddress() const;
  Value<uintptr_t> GetFunctionIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetWrapperBudgetAddress() const;
  Value<uintptr_t> GetWrapperBudgetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCanonicalTypeIndexAddress() const;
  Value<uintptr_t> GetCanonicalTypeIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPackedArgsSizeAddress() const;
  Value<uintptr_t> GetPackedArgsSizeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCWrapperCodeAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetCWrapperCodeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSigAddress() const;
  Value<const wasm::FunctionSig* /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetSigValue(d::MemoryAccessor accessor ) const;
};

class TqWasmJSFunctionData : public TqWasmFunctionData {
 public:
  inline TqWasmJSFunctionData(uintptr_t address) : TqWasmFunctionData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCanonicalSigIndexAddress() const;
  Value<uintptr_t> GetCanonicalSigIndexValue(d::MemoryAccessor accessor ) const;
};

class TqWasmCapiFunctionData : public TqWasmFunctionData {
 public:
  inline TqWasmCapiFunctionData(uintptr_t address) : TqWasmFunctionData(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetEmbedderDataAddress() const;
  Value<uintptr_t> GetEmbedderDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSerializedSignatureAddress() const;
  Value<uintptr_t> GetSerializedSignatureValue(d::MemoryAccessor accessor ) const;
};

class TqWasmResumeData : public TqHeapObject {
 public:
  inline TqWasmResumeData(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSuspenderAddress() const;
  Value<uintptr_t> GetSuspenderValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOnResumeAddress() const;
  Value<uintptr_t> GetOnResumeValue(d::MemoryAccessor accessor ) const;
};

class TqWasmContinuationObject : public TqHeapObject {
 public:
  inline TqWasmContinuationObject(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetParentAddress() const;
  Value<uintptr_t> GetParentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStackAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetStackValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetJmpbufAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetJmpbufValue(d::MemoryAccessor accessor ) const;
};

class TqWasmSuspenderObject : public TqHeapObject {
 public:
  inline TqWasmSuspenderObject(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetContinuationAddress() const;
  Value<uintptr_t> GetContinuationValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetParentAddress() const;
  Value<uintptr_t> GetParentValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetPromiseAddress() const;
  Value<uintptr_t> GetPromiseValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetResumeAddress() const;
  Value<uintptr_t> GetResumeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRejectAddress() const;
  Value<uintptr_t> GetRejectValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetStateAddress() const;
  Value<uintptr_t> GetStateValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetHasJsFramesAddress() const;
  Value<uintptr_t> GetHasJsFramesValue(d::MemoryAccessor accessor ) const;
};

class TqWasmExceptionTag : public TqStruct {
 public:
  inline TqWasmExceptionTag(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetIndexAddress() const;
  Value<uintptr_t> GetIndexValue(d::MemoryAccessor accessor ) const;
};

class TqWasmModuleObject : public TqJSObject {
 public:
  inline TqWasmModuleObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetManagedNativeModuleAddress() const;
  Value<uintptr_t> GetManagedNativeModuleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetScriptAddress() const;
  Value<uintptr_t> GetScriptValue(d::MemoryAccessor accessor ) const;
};

class TqWasmTableObject : public TqJSObject {
 public:
  inline TqWasmTableObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetEntriesAddress() const;
  Value<uintptr_t> GetEntriesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCurrentLengthAddress() const;
  Value<uintptr_t> GetCurrentLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaximumLengthAddress() const;
  Value<uintptr_t> GetMaximumLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUsesAddress() const;
  Value<uintptr_t> GetUsesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawTypeAddress() const;
  Value<uintptr_t> GetRawTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIsTable64Address() const;
  Value<uintptr_t> GetIsTable64Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetTrustedDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedDataValue(d::MemoryAccessor accessor ) const;
};

class TqWasmMemoryObject : public TqJSObject {
 public:
  inline TqWasmMemoryObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetArrayBufferAddress() const;
  Value<uintptr_t> GetArrayBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetMaximumPagesAddress() const;
  Value<uintptr_t> GetMaximumPagesValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIsMemory64Address() const;
  Value<uintptr_t> GetIsMemory64Value(d::MemoryAccessor accessor ) const;
  uintptr_t GetInstancesAddress() const;
  Value<uintptr_t> GetInstancesValue(d::MemoryAccessor accessor ) const;
};

class TqWasmGlobalObject : public TqJSObject {
 public:
  inline TqWasmGlobalObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetTrustedDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUntaggedBufferAddress() const;
  Value<uintptr_t> GetUntaggedBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTaggedBufferAddress() const;
  Value<uintptr_t> GetTaggedBufferValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOffsetAddress() const;
  Value<uintptr_t> GetOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetRawTypeAddress() const;
  Value<uintptr_t> GetRawTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetIsMutableAddress() const;
  Value<uintptr_t> GetIsMutableValue(d::MemoryAccessor accessor ) const;
};

class TqWasmTagObject : public TqJSObject {
 public:
  inline TqWasmTagObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetSerializedSignatureAddress() const;
  Value<uintptr_t> GetSerializedSignatureValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTagAddress() const;
  Value<uintptr_t> GetTagValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetCanonicalTypeIndexAddress() const;
  Value<uintptr_t> GetCanonicalTypeIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTrustedDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedDataValue(d::MemoryAccessor accessor ) const;
};

class TqAsmWasmData : public TqStruct {
 public:
  inline TqAsmWasmData(uintptr_t address) : TqStruct(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetManagedNativeModuleAddress() const;
  Value<uintptr_t> GetManagedNativeModuleValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetUsesBitsetAddress() const;
  Value<uintptr_t> GetUsesBitsetValue(d::MemoryAccessor accessor ) const;
};

class TqWasmTypeInfo : public TqHeapObject {
 public:
  inline TqWasmTypeInfo(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetNativeTypeAddress() const;
  Value<ExternalPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetNativeTypeValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTypeIndexAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTypeIndexValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetTrustedDataAddress() const;
  Value<TrustedPointer_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetTrustedDataValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSupertypesLengthAddress() const;
  Value<uintptr_t> GetSupertypesLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetSupertypesAddress() const;
  Value<uintptr_t> GetSupertypesValue(d::MemoryAccessor accessor , size_t offset) const;
};

class TqWasmObject : public TqJSReceiver {
 public:
  inline TqWasmObject(uintptr_t address) : TqJSReceiver(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqWasmStruct : public TqWasmObject {
 public:
  inline TqWasmStruct(uintptr_t address) : TqWasmObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
};

class TqWasmArray : public TqWasmObject {
 public:
  inline TqWasmArray(uintptr_t address) : TqWasmObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetLengthAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetLengthValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqWasmStringViewIter : public TqHeapObject {
 public:
  inline TqWasmStringViewIter(uintptr_t address) : TqHeapObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetStringAddress() const;
  Value<uintptr_t> GetStringValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOffsetAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOffsetValue(d::MemoryAccessor accessor ) const;
  uintptr_t GetOptionalPaddingAddress() const;
  Value<uint32_t /*Failing? Ensure constexpr type name is correct, and the necessary #include is in any .tq file*/> GetOptionalPaddingValue(d::MemoryAccessor accessor ) const;
};

class TqWasmSuspendingObject : public TqJSObject {
 public:
  inline TqWasmSuspendingObject(uintptr_t address) : TqJSObject(address) {}
  std::vector<std::unique_ptr<ObjectProperty>> GetProperties(
      d::MemoryAccessor accessor) const override;
  const char* GetName() const override;
  void Visit(TqObjectVisitor* visitor) const override;
  bool IsSuperclassOf(const TqObject* other) const override;
  uintptr_t GetCallableAddress() const;
  Value<uintptr_t> GetCallableValue(d::MemoryAccessor accessor ) const;
};

class TqObjectVisitor {
 public:
  virtual void VisitObject(const TqObject* object) {}
  virtual void VisitHeapObject(const TqHeapObject* object) {
    VisitObject(object);
  }
  virtual void VisitPrimitiveHeapObject(const TqPrimitiveHeapObject* object) {
    VisitHeapObject(object);
  }
  virtual void VisitHeapNumber(const TqHeapNumber* object) {
    VisitPrimitiveHeapObject(object);
  }
  virtual void VisitName(const TqName* object) {
    VisitPrimitiveHeapObject(object);
  }
  virtual void VisitString(const TqString* object) {
    VisitName(object);
  }
  virtual void VisitSymbol(const TqSymbol* object) {
    VisitName(object);
  }
  virtual void VisitOddball(const TqOddball* object) {
    VisitPrimitiveHeapObject(object);
  }
  virtual void VisitBoolean(const TqBoolean* object) {
    VisitOddball(object);
  }
  virtual void VisitNull(const TqNull* object) {
    VisitOddball(object);
  }
  virtual void VisitUndefined(const TqUndefined* object) {
    VisitOddball(object);
  }
  virtual void VisitJSReceiver(const TqJSReceiver* object) {
    VisitHeapObject(object);
  }
  virtual void VisitContext(const TqContext* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSObject(const TqJSObject* object) {
    VisitJSReceiver(object);
  }
  virtual void VisitJSObjectWithEmbedderSlots(const TqJSObjectWithEmbedderSlots* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSPromise(const TqJSPromise* object) {
    VisitJSObjectWithEmbedderSlots(object);
  }
  virtual void VisitJSFunctionOrBoundFunctionOrWrappedFunction(const TqJSFunctionOrBoundFunctionOrWrappedFunction* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSFunction(const TqJSFunction* object) {
    VisitJSFunctionOrBoundFunctionOrWrappedFunction(object);
  }
  virtual void VisitFixedArrayBase(const TqFixedArrayBase* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFixedArray(const TqFixedArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitTrustedObject(const TqTrustedObject* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWeakFixedArray(const TqWeakFixedArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitForeign(const TqForeign* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSProxy(const TqJSProxy* object) {
    VisitJSReceiver(object);
  }
  virtual void VisitJSBoundFunction(const TqJSBoundFunction* object) {
    VisitJSFunctionOrBoundFunctionOrWrappedFunction(object);
  }
  virtual void VisitJSWrappedFunction(const TqJSWrappedFunction* object) {
    VisitJSFunctionOrBoundFunctionOrWrappedFunction(object);
  }
  virtual void VisitHole(const TqHole* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSAPIObjectWithEmbedderSlots(const TqJSAPIObjectWithEmbedderSlots* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSCustomElementsObject(const TqJSCustomElementsObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSpecialObject(const TqJSSpecialObject* object) {
    VisitJSCustomElementsObject(object);
  }
  virtual void VisitMap(const TqMap* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWeakCell(const TqWeakCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTemplateInfo(const TqTemplateInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFunctionTemplateInfo(const TqFunctionTemplateInfo* object) {
    VisitTemplateInfo(object);
  }
  virtual void VisitWasmFuncRef(const TqWasmFuncRef* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmNull(const TqWasmNull* object) {
    VisitHeapObject(object);
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
  virtual void VisitStruct(const TqStruct* object) {
    VisitHeapObject(object);
  }
  virtual void VisitPromiseCapability(const TqPromiseCapability* object) {
    VisitStruct(object);
  }
  virtual void VisitJSArrayBufferView(const TqJSArrayBufferView* object) {
    VisitJSAPIObjectWithEmbedderSlots(object);
  }
  virtual void VisitJSTypedArray(const TqJSTypedArray* object) {
    VisitJSArrayBufferView(object);
  }
  virtual void VisitDataHandler(const TqDataHandler* object) {
    VisitStruct(object);
  }
  virtual void VisitAllocationMemento(const TqAllocationMemento* object) {
    VisitStruct(object);
  }
  virtual void VisitInterceptorInfo(const TqInterceptorInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitAccessCheckInfo(const TqAccessCheckInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitAccessorInfo(const TqAccessorInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSArgumentsObject(const TqJSArgumentsObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSloppyArgumentsObject(const TqJSSloppyArgumentsObject* object) {
    VisitJSArgumentsObject(object);
  }
  virtual void VisitJSStrictArgumentsObject(const TqJSStrictArgumentsObject* object) {
    VisitJSArgumentsObject(object);
  }
  virtual void VisitSloppyArgumentsElements(const TqSloppyArgumentsElements* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitAliasedArgumentsEntry(const TqAliasedArgumentsEntry* object) {
    VisitStruct(object);
  }
  virtual void VisitCallSiteInfo(const TqCallSiteInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitCell(const TqCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWeakArrayList(const TqWeakArrayList* object) {
    VisitHeapObject(object);
  }
  virtual void VisitExposedTrustedObject(const TqExposedTrustedObject* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitBytecodeArray(const TqBytecodeArray* object) {
    VisitExposedTrustedObject(object);
  }
  virtual void VisitBytecodeWrapper(const TqBytecodeWrapper* object) {
    VisitStruct(object);
  }
  virtual void VisitScriptContextTable(const TqScriptContextTable* object) {
    VisitHeapObject(object);
  }
  virtual void VisitScopeInfo(const TqScopeInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFixedDoubleArray(const TqFixedDoubleArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitRegExpMatchInfo(const TqRegExpMatchInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitBreakPoint(const TqBreakPoint* object) {
    VisitStruct(object);
  }
  virtual void VisitBreakPointInfo(const TqBreakPointInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitDebugInfo(const TqDebugInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitCoverageInfo(const TqCoverageInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitStackFrameInfo(const TqStackFrameInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitErrorStackData(const TqErrorStackData* object) {
    VisitStruct(object);
  }
  virtual void VisitEnumCache(const TqEnumCache* object) {
    VisitStruct(object);
  }
  virtual void VisitAccessorPair(const TqAccessorPair* object) {
    VisitStruct(object);
  }
  virtual void VisitClassPositions(const TqClassPositions* object) {
    VisitStruct(object);
  }
  virtual void VisitDescriptorArray(const TqDescriptorArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitStrongDescriptorArray(const TqStrongDescriptorArray* object) {
    VisitDescriptorArray(object);
  }
  virtual void VisitEmbedderDataArray(const TqEmbedderDataArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFeedbackCell(const TqFeedbackCell* object) {
    VisitStruct(object);
  }
  virtual void VisitClosureFeedbackCellArray(const TqClosureFeedbackCellArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitFeedbackVector(const TqFeedbackVector* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTrustedFixedArray(const TqTrustedFixedArray* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitProtectedFixedArray(const TqProtectedFixedArray* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitTrustedWeakFixedArray(const TqTrustedWeakFixedArray* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitByteArray(const TqByteArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitTrustedByteArray(const TqTrustedByteArray* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitExternalPointerArray(const TqExternalPointerArray* object) {
    VisitFixedArrayBase(object);
  }
  virtual void VisitArrayList(const TqArrayList* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTrustedForeign(const TqTrustedForeign* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitFreeSpace(const TqFreeSpace* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSArrayBuffer(const TqJSArrayBuffer* object) {
    VisitJSAPIObjectWithEmbedderSlots(object);
  }
  virtual void VisitJSDataViewOrRabGsabDataView(const TqJSDataViewOrRabGsabDataView* object) {
    VisitJSArrayBufferView(object);
  }
  virtual void VisitJSDataView(const TqJSDataView* object) {
    VisitJSDataViewOrRabGsabDataView(object);
  }
  virtual void VisitJSRabGsabDataView(const TqJSRabGsabDataView* object) {
    VisitJSDataViewOrRabGsabDataView(object);
  }
  virtual void VisitJSArrayIterator(const TqJSArrayIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSArray(const TqJSArray* object) {
    VisitJSObject(object);
  }
  virtual void VisitTemplateLiteralObject(const TqTemplateLiteralObject* object) {
    VisitJSArray(object);
  }
  virtual void VisitAlwaysSharedSpaceJSObject(const TqAlwaysSharedSpaceJSObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSynchronizationPrimitive(const TqJSSynchronizationPrimitive* object) {
    VisitAlwaysSharedSpaceJSObject(object);
  }
  virtual void VisitJSAtomicsMutex(const TqJSAtomicsMutex* object) {
    VisitJSSynchronizationPrimitive(object);
  }
  virtual void VisitJSAtomicsCondition(const TqJSAtomicsCondition* object) {
    VisitJSSynchronizationPrimitive(object);
  }
  virtual void VisitJSCollectionIterator(const TqJSCollectionIterator* object) {
    VisitJSObject(object);
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
  virtual void VisitJSDisposableStackBase(const TqJSDisposableStackBase* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSyncDisposableStack(const TqJSSyncDisposableStack* object) {
    VisitJSDisposableStackBase(object);
  }
  virtual void VisitJSAsyncDisposableStack(const TqJSAsyncDisposableStack* object) {
    VisitJSDisposableStackBase(object);
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
  virtual void VisitAsyncGeneratorRequest(const TqAsyncGeneratorRequest* object) {
    VisitStruct(object);
  }
  virtual void VisitJSIteratorHelper(const TqJSIteratorHelper* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSIteratorMapHelper(const TqJSIteratorMapHelper* object) {
    VisitJSIteratorHelper(object);
  }
  virtual void VisitJSIteratorFilterHelper(const TqJSIteratorFilterHelper* object) {
    VisitJSIteratorHelper(object);
  }
  virtual void VisitJSIteratorTakeHelper(const TqJSIteratorTakeHelper* object) {
    VisitJSIteratorHelper(object);
  }
  virtual void VisitJSIteratorDropHelper(const TqJSIteratorDropHelper* object) {
    VisitJSIteratorHelper(object);
  }
  virtual void VisitJSIteratorFlatMapHelper(const TqJSIteratorFlatMapHelper* object) {
    VisitJSIteratorHelper(object);
  }
  virtual void VisitJSExternalObject(const TqJSExternalObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSGlobalProxy(const TqJSGlobalProxy* object) {
    VisitJSSpecialObject(object);
  }
  virtual void VisitJSGlobalObject(const TqJSGlobalObject* object) {
    VisitJSSpecialObject(object);
  }
  virtual void VisitJSPrimitiveWrapper(const TqJSPrimitiveWrapper* object) {
    VisitJSCustomElementsObject(object);
  }
  virtual void VisitJSMessageObject(const TqJSMessageObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSDate(const TqJSDate* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSAsyncFromSyncIterator(const TqJSAsyncFromSyncIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSStringIterator(const TqJSStringIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSValidIteratorWrapper(const TqJSValidIteratorWrapper* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSProxyRevocableResult(const TqJSProxyRevocableResult* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSRawJson(const TqJSRawJson* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSRegExpStringIterator(const TqJSRegExpStringIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitRegExpData(const TqRegExpData* object) {
    VisitExposedTrustedObject(object);
  }
  virtual void VisitAtomRegExpData(const TqAtomRegExpData* object) {
    VisitRegExpData(object);
  }
  virtual void VisitIrRegExpData(const TqIrRegExpData* object) {
    VisitRegExpData(object);
  }
  virtual void VisitRegExpDataWrapper(const TqRegExpDataWrapper* object) {
    VisitStruct(object);
  }
  virtual void VisitJSRegExp(const TqJSRegExp* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSRegExpResult(const TqJSRegExpResult* object) {
    VisitJSArray(object);
  }
  virtual void VisitJSRegExpResultWithIndices(const TqJSRegExpResultWithIndices* object) {
    VisitJSRegExpResult(object);
  }
  virtual void VisitJSRegExpResultIndices(const TqJSRegExpResultIndices* object) {
    VisitJSArray(object);
  }
  virtual void VisitJSShadowRealm(const TqJSShadowRealm* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSharedArray(const TqJSSharedArray* object) {
    VisitAlwaysSharedSpaceJSObject(object);
  }
  virtual void VisitJSSharedStruct(const TqJSSharedStruct* object) {
    VisitAlwaysSharedSpaceJSObject(object);
  }
  virtual void VisitJSTemporalCalendar(const TqJSTemporalCalendar* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalDuration(const TqJSTemporalDuration* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalInstant(const TqJSTemporalInstant* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalPlainDateTime(const TqJSTemporalPlainDateTime* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalPlainDate(const TqJSTemporalPlainDate* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalPlainMonthDay(const TqJSTemporalPlainMonthDay* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalPlainTime(const TqJSTemporalPlainTime* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalPlainYearMonth(const TqJSTemporalPlainYearMonth* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalTimeZone(const TqJSTemporalTimeZone* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSTemporalZonedDateTime(const TqJSTemporalZonedDateTime* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSFinalizationRegistry(const TqJSFinalizationRegistry* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSWeakRef(const TqJSWeakRef* object) {
    VisitJSObject(object);
  }
  virtual void VisitObjectBoilerplateDescription(const TqObjectBoilerplateDescription* object) {
    VisitHeapObject(object);
  }
  virtual void VisitArrayBoilerplateDescription(const TqArrayBoilerplateDescription* object) {
    VisitStruct(object);
  }
  virtual void VisitRegExpBoilerplateDescription(const TqRegExpBoilerplateDescription* object) {
    VisitStruct(object);
  }
  virtual void VisitClassBoilerplate(const TqClassBoilerplate* object) {
    VisitStruct(object);
  }
  virtual void VisitMegaDomHandler(const TqMegaDomHandler* object) {
    VisitHeapObject(object);
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
  virtual void VisitModule(const TqModule* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSModuleNamespace(const TqJSModuleNamespace* object) {
    VisitJSSpecialObject(object);
  }
  virtual void VisitScriptOrModule(const TqScriptOrModule* object) {
    VisitStruct(object);
  }
  virtual void VisitTrue(const TqTrue* object) {
    VisitBoolean(object);
  }
  virtual void VisitFalse(const TqFalse* object) {
    VisitBoolean(object);
  }
  virtual void VisitSmallOrderedHashTable(const TqSmallOrderedHashTable* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSmallOrderedHashSet(const TqSmallOrderedHashSet* object) {
    VisitSmallOrderedHashTable(object);
  }
  virtual void VisitSmallOrderedHashMap(const TqSmallOrderedHashMap* object) {
    VisitSmallOrderedHashTable(object);
  }
  virtual void VisitSmallOrderedNameDictionary(const TqSmallOrderedNameDictionary* object) {
    VisitSmallOrderedHashTable(object);
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
  virtual void VisitPropertyArray(const TqPropertyArray* object) {
    VisitHeapObject(object);
  }
  virtual void VisitPropertyCell(const TqPropertyCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitConstTrackingLetCell(const TqConstTrackingLetCell* object) {
    VisitHeapObject(object);
  }
  virtual void VisitPropertyDescriptorObject(const TqPropertyDescriptorObject* object) {
    VisitStruct(object);
  }
  virtual void VisitPrototypeInfo(const TqPrototypeInfo* object) {
    VisitStruct(object);
  }
  virtual void VisitScript(const TqScript* object) {
    VisitStruct(object);
  }
  virtual void VisitPreparseData(const TqPreparseData* object) {
    VisitHeapObject(object);
  }
  virtual void VisitInterpreterData(const TqInterpreterData* object) {
    VisitExposedTrustedObject(object);
  }
  virtual void VisitSharedFunctionInfo(const TqSharedFunctionInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSharedFunctionInfoWrapper(const TqSharedFunctionInfoWrapper* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitUncompiledData(const TqUncompiledData* object) {
    VisitExposedTrustedObject(object);
  }
  virtual void VisitUncompiledDataWithoutPreparseData(const TqUncompiledDataWithoutPreparseData* object) {
    VisitUncompiledData(object);
  }
  virtual void VisitUncompiledDataWithPreparseData(const TqUncompiledDataWithPreparseData* object) {
    VisitUncompiledData(object);
  }
  virtual void VisitUncompiledDataWithoutPreparseDataWithJob(const TqUncompiledDataWithoutPreparseDataWithJob* object) {
    VisitUncompiledDataWithoutPreparseData(object);
  }
  virtual void VisitUncompiledDataWithPreparseDataAndJob(const TqUncompiledDataWithPreparseDataAndJob* object) {
    VisitUncompiledDataWithPreparseData(object);
  }
  virtual void VisitOnHeapBasicBlockProfilerData(const TqOnHeapBasicBlockProfilerData* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSourceTextModule(const TqSourceTextModule* object) {
    VisitModule(object);
  }
  virtual void VisitModuleRequest(const TqModuleRequest* object) {
    VisitStruct(object);
  }
  virtual void VisitSourceTextModuleInfoEntry(const TqSourceTextModuleInfoEntry* object) {
    VisitStruct(object);
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
  virtual void VisitTuple2(const TqTuple2* object) {
    VisitStruct(object);
  }
  virtual void VisitSwissNameDictionary(const TqSwissNameDictionary* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSyntheticModule(const TqSyntheticModule* object) {
    VisitModule(object);
  }
  virtual void VisitTemplateObjectDescription(const TqTemplateObjectDescription* object) {
    VisitStruct(object);
  }
  virtual void VisitFunctionTemplateRareData(const TqFunctionTemplateRareData* object) {
    VisitStruct(object);
  }
  virtual void VisitObjectTemplateInfo(const TqObjectTemplateInfo* object) {
    VisitTemplateInfo(object);
  }
  virtual void VisitDictionaryTemplateInfo(const TqDictionaryTemplateInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTurbofanType(const TqTurbofanType* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTurbofanBitsetType(const TqTurbofanBitsetType* object) {
    VisitTurbofanType(object);
  }
  virtual void VisitTurbofanUnionType(const TqTurbofanUnionType* object) {
    VisitTurbofanType(object);
  }
  virtual void VisitTurbofanRangeType(const TqTurbofanRangeType* object) {
    VisitTurbofanType(object);
  }
  virtual void VisitTurbofanHeapConstantType(const TqTurbofanHeapConstantType* object) {
    VisitTurbofanType(object);
  }
  virtual void VisitTurbofanOtherNumberConstantType(const TqTurbofanOtherNumberConstantType* object) {
    VisitTurbofanType(object);
  }
  virtual void VisitTurboshaftType(const TqTurboshaftType* object) {
    VisitHeapObject(object);
  }
  virtual void VisitTurboshaftWord32Type(const TqTurboshaftWord32Type* object) {
    VisitTurboshaftType(object);
  }
  virtual void VisitTurboshaftWord32RangeType(const TqTurboshaftWord32RangeType* object) {
    VisitTurboshaftWord32Type(object);
  }
  virtual void VisitTurboshaftWord32SetType(const TqTurboshaftWord32SetType* object) {
    VisitTurboshaftWord32Type(object);
  }
  virtual void VisitTurboshaftWord64Type(const TqTurboshaftWord64Type* object) {
    VisitTurboshaftType(object);
  }
  virtual void VisitTurboshaftWord64RangeType(const TqTurboshaftWord64RangeType* object) {
    VisitTurboshaftWord64Type(object);
  }
  virtual void VisitTurboshaftWord64SetType(const TqTurboshaftWord64SetType* object) {
    VisitTurboshaftWord64Type(object);
  }
  virtual void VisitTurboshaftFloat64Type(const TqTurboshaftFloat64Type* object) {
    VisitTurboshaftType(object);
  }
  virtual void VisitTurboshaftFloat64RangeType(const TqTurboshaftFloat64RangeType* object) {
    VisitTurboshaftFloat64Type(object);
  }
  virtual void VisitTurboshaftFloat64SetType(const TqTurboshaftFloat64SetType* object) {
    VisitTurboshaftFloat64Type(object);
  }
  virtual void VisitInternalClass(const TqInternalClass* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSmiPair(const TqSmiPair* object) {
    VisitHeapObject(object);
  }
  virtual void VisitSmiBox(const TqSmiBox* object) {
    VisitHeapObject(object);
  }
  virtual void VisitExportedSubClassBase(const TqExportedSubClassBase* object) {
    VisitHeapObject(object);
  }
  virtual void VisitExportedSubClass(const TqExportedSubClass* object) {
    VisitExportedSubClassBase(object);
  }
  virtual void VisitAbstractInternalClass(const TqAbstractInternalClass* object) {
    VisitHeapObject(object);
  }
  virtual void VisitAbstractInternalClassSubclass1(const TqAbstractInternalClassSubclass1* object) {
    VisitAbstractInternalClass(object);
  }
  virtual void VisitAbstractInternalClassSubclass2(const TqAbstractInternalClassSubclass2* object) {
    VisitAbstractInternalClass(object);
  }
  virtual void VisitInternalClassWithStructElements(const TqInternalClassWithStructElements* object) {
    VisitHeapObject(object);
  }
  virtual void VisitExportedSubClass2(const TqExportedSubClass2* object) {
    VisitExportedSubClassBase(object);
  }
  virtual void VisitSortState(const TqSortState* object) {
    VisitHeapObject(object);
  }
  virtual void VisitJSV8BreakIterator(const TqJSV8BreakIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSCollator(const TqJSCollator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSDateTimeFormat(const TqJSDateTimeFormat* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSDisplayNames(const TqJSDisplayNames* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSDurationFormat(const TqJSDurationFormat* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSListFormat(const TqJSListFormat* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSLocale(const TqJSLocale* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSNumberFormat(const TqJSNumberFormat* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSPluralRules(const TqJSPluralRules* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSRelativeTimeFormat(const TqJSRelativeTimeFormat* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSegmentIterator(const TqJSSegmentIterator* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSegmentDataObject(const TqJSSegmentDataObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSegmentDataObjectWithIsWordLike(const TqJSSegmentDataObjectWithIsWordLike* object) {
    VisitJSSegmentDataObject(object);
  }
  virtual void VisitJSSegmenter(const TqJSSegmenter* object) {
    VisitJSObject(object);
  }
  virtual void VisitJSSegments(const TqJSSegments* object) {
    VisitJSObject(object);
  }
  virtual void VisitWasmImportData(const TqWasmImportData* object) {
    VisitTrustedObject(object);
  }
  virtual void VisitWasmInstanceObject(const TqWasmInstanceObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitWasmFastApiCallData(const TqWasmFastApiCallData* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmInternalFunction(const TqWasmInternalFunction* object) {
    VisitExposedTrustedObject(object);
  }
  virtual void VisitWasmFunctionData(const TqWasmFunctionData* object) {
    VisitExposedTrustedObject(object);
  }
  virtual void VisitWasmExportedFunctionData(const TqWasmExportedFunctionData* object) {
    VisitWasmFunctionData(object);
  }
  virtual void VisitWasmJSFunctionData(const TqWasmJSFunctionData* object) {
    VisitWasmFunctionData(object);
  }
  virtual void VisitWasmCapiFunctionData(const TqWasmCapiFunctionData* object) {
    VisitWasmFunctionData(object);
  }
  virtual void VisitWasmResumeData(const TqWasmResumeData* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmContinuationObject(const TqWasmContinuationObject* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmSuspenderObject(const TqWasmSuspenderObject* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmExceptionTag(const TqWasmExceptionTag* object) {
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
  virtual void VisitWasmTagObject(const TqWasmTagObject* object) {
    VisitJSObject(object);
  }
  virtual void VisitAsmWasmData(const TqAsmWasmData* object) {
    VisitStruct(object);
  }
  virtual void VisitWasmTypeInfo(const TqWasmTypeInfo* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmObject(const TqWasmObject* object) {
    VisitJSReceiver(object);
  }
  virtual void VisitWasmStruct(const TqWasmStruct* object) {
    VisitWasmObject(object);
  }
  virtual void VisitWasmArray(const TqWasmArray* object) {
    VisitWasmObject(object);
  }
  virtual void VisitWasmStringViewIter(const TqWasmStringViewIter* object) {
    VisitHeapObject(object);
  }
  virtual void VisitWasmSuspendingObject(const TqWasmSuspendingObject* object) {
    VisitJSObject(object);
  }
};
}  // namespace debug_helper_internal
}  // namespace internal
}  // namespace v8
#endif  // V8_GEN_TORQUE_GENERATED_CLASS_DEBUG_READERS_H_
