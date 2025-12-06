#include "src/objects/allocation-site.h"

namespace v8 {
namespace internal {

// Definition https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=7&c=1
class TorqueGeneratedAllocationMementoAsserts {
  static constexpr int kStartOfStrongFieldsOffset = sizeof(StructLayout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=9&c=3
  static constexpr int kAllocationSiteOffset = sizeof(StructLayout);
  static constexpr int kAllocationSiteOffsetEnd = kAllocationSiteOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kAllocationSiteOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kAllocationSiteOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kAllocationSiteOffsetEnd + 1;
  static constexpr int kHeaderSize = kAllocationSiteOffsetEnd + 1;
  static constexpr int kSize = kAllocationSiteOffsetEnd + 1;

  static_assert(kAllocationSiteOffset == offsetof(AllocationMemento, allocation_site_),
                "Value of AllocationMemento::kAllocationSiteOffset defined in Torque and offset of field AllocationMemento::allocation_site in C++ do not match");
  static_assert(kSize == sizeof(AllocationMemento));
};

} // namespace internal
} // namespace v8
