#include "src/objects/property-cell-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=6&c=1
bool IsPropertyCell_NonInline(Tagged<HeapObject> o) {
  return IsPropertyCell(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPropertyCell<PropertyCell, HeapObject>::PropertyCellVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PropertyCellVerify(Cast<PropertyCell>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=15&c=1
bool IsConstTrackingLetCell_NonInline(Tagged<HeapObject> o) {
  return IsConstTrackingLetCell(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedConstTrackingLetCell<ConstTrackingLetCell, HeapObject>::ConstTrackingLetCellVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ConstTrackingLetCellVerify(Cast<ConstTrackingLetCell>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
