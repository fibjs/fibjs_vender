#include "src/objects/contexts-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/objects-inl.h"

#include "src/objects/instance-type-inl.h"

#include "src/objects/contexts.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=5&c=1
bool IsContext_NonInline(Tagged<HeapObject> o) {
  return IsContext(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedContext<Context, HeapObject>::ContextVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ContextVerify(Cast<Context>(*this), isolate);
}


#endif  // VERIFY_HEAP
// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=17&c=1
class TorqueGeneratedScriptContextTableAsserts {
  static constexpr int kStartOfStrongFieldsOffset = sizeof(HeapObjectLayout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=9
  static constexpr int kCapacityOffset = sizeof(HeapObjectLayout);
  static constexpr int kCapacityOffsetEnd = kCapacityOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=3
  static constexpr int kLengthOffset = kCapacityOffsetEnd + 1;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=21&c=3
  static constexpr int kNamesToContextIndexOffset = kLengthOffsetEnd + 1;
  static constexpr int kNamesToContextIndexOffsetEnd = kNamesToContextIndexOffset + kTaggedSize - 1;
  static constexpr int kHeaderSize = kNamesToContextIndexOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
  static constexpr int kObjectsOffset = kNamesToContextIndexOffsetEnd + 1;
  static constexpr int kObjectsOffsetEnd = kObjectsOffset + 0 - 1;
  static constexpr int kEndOfStrongFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kObjectsOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kObjectsOffsetEnd + 1;

  static_assert(kCapacityOffset == offsetof(ScriptContextTable, capacity_),
                "Value of ScriptContextTable::kCapacityOffset defined in Torque and offset of field ScriptContextTable::capacity in C++ do not match");
  static_assert(kLengthOffset == offsetof(ScriptContextTable, length_),
                "Value of ScriptContextTable::kLengthOffset defined in Torque and offset of field ScriptContextTable::length in C++ do not match");
  static_assert(kNamesToContextIndexOffset == offsetof(ScriptContextTable, names_to_context_index_),
                "Value of ScriptContextTable::kNamesToContextIndexOffset defined in Torque and offset of field ScriptContextTable::names_to_context_index in C++ do not match");
  static_assert(kObjectsOffset == OFFSET_OF_DATA_START(ScriptContextTable),
                "Value of ScriptContextTable::kObjectsOffset defined in Torque and offset of field ScriptContextTable::objects in C++ do not match");
};

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=25&c=1
class TorqueGeneratedContextCellAsserts {
  static constexpr int kStartOfStrongFieldsOffset = sizeof(HeapObjectLayout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=28&c=3
  static constexpr int kTaggedValueOffset = sizeof(HeapObjectLayout);
  static constexpr int kTaggedValueOffsetEnd = kTaggedValueOffset + kTaggedSize - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=29&c=3
  static constexpr int kDependentCodeOffset = kTaggedValueOffsetEnd + 1;
  static constexpr int kDependentCodeOffsetEnd = kDependentCodeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kDependentCodeOffsetEnd + 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=30&c=3
  static constexpr int kStateOffset = kDependentCodeOffsetEnd + 1;
  static constexpr int kStateOffsetEnd = kStateOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=31&c=28
  static constexpr int kOptionalPaddingOffset = kStateOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + kInt32Size - 1;
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=32&c=3
  static constexpr int kDoubleValueOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kDoubleValueOffsetEnd = kDoubleValueOffset + kDoubleSize - 1;
  static constexpr int kStartOfWeakFieldsOffset = kDoubleValueOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kDoubleValueOffsetEnd + 1;
  static constexpr int kHeaderSize = kDoubleValueOffsetEnd + 1;
  static constexpr int kSize = kDoubleValueOffsetEnd + 1;

  static_assert(kTaggedValueOffset == offsetof(ContextCell, tagged_value_),
                "Value of ContextCell::kTaggedValueOffset defined in Torque and offset of field ContextCell::tagged_value in C++ do not match");
  static_assert(kDependentCodeOffset == offsetof(ContextCell, dependent_code_),
                "Value of ContextCell::kDependentCodeOffset defined in Torque and offset of field ContextCell::dependent_code in C++ do not match");
  static_assert(kStateOffset == offsetof(ContextCell, state_),
                "Value of ContextCell::kStateOffset defined in Torque and offset of field ContextCell::state in C++ do not match");
  static_assert(kOptionalPaddingOffset == offsetof(ContextCell, optional_padding_),
                "Value of ContextCell::kOptionalPaddingOffset defined in Torque and offset of field ContextCell::optional_padding in C++ do not match");
  static_assert(kDoubleValueOffset == offsetof(ContextCell, double_value_),
                "Value of ContextCell::kDoubleValueOffset defined in Torque and offset of field ContextCell::double_value in C++ do not match");
  static_assert(kSize == sizeof(ContextCell));
};

} // namespace internal
} // namespace v8
