#ifdef OBJECT_PRINT
#include "src/objects/objects.h"

#include <iosfwd>

#include "src/objects/struct-inl.h"

#include "src/objects/template-objects-inl.h"

namespace v8 {
namespace internal {
template <>
void TorqueGeneratedStruct<Struct, HeapObject>::StructPrint(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedStruct");
  os << "\n";
}

template <>
void TorqueGeneratedTuple2<Tuple2, Struct>::Tuple2Print(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedTuple2");
  os << "\n - value1: " << Brief(this->value1());
  os << "\n - value2: " << Brief(this->value2());
  os << "\n";
}

template <>
void TorqueGeneratedTuple3<Tuple3, Tuple2>::Tuple3Print(std::ostream& os) {
  this->PrintHeader(os, "TorqueGeneratedTuple3");
  os << "\n - value1: " << Brief(this->value1());
  os << "\n - value2: " << Brief(this->value2());
  os << "\n - value3: " << Brief(this->value3());
  os << "\n";
}


void EnumCache::EnumCachePrint(std::ostream& os) {
  this->PrintHeader(os, "EnumCache");
  os << "\n - keys: " << Brief(this->keys());
  os << "\n - indices: " << Brief(this->indices());
  os << "\n";
}


void SourcePositionTableWithFrameCache::SourcePositionTableWithFrameCachePrint(std::ostream& os) {
  this->PrintHeader(os, "SourcePositionTableWithFrameCache");
  os << "\n - source_position_table: " << Brief(this->source_position_table());
  os << "\n - stack_frame_cache: " << Brief(this->stack_frame_cache());
  os << "\n";
}


void TemplateObjectDescription::TemplateObjectDescriptionPrint(std::ostream& os) {
  this->PrintHeader(os, "TemplateObjectDescription");
  os << "\n - raw_strings: " << Brief(this->raw_strings());
  os << "\n - cooked_strings: " << Brief(this->cooked_strings());
  os << "\n";
}

}  // namespace internal
}  // namespace v8
#endif  // OBJECT_PRINT
