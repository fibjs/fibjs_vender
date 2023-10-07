#include "src/objects/name-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=5&c=1
bool IsName_NonInline(Tagged<HeapObject> o) {
  return IsName(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedName<Name, PrimitiveHeapObject>::NameVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::NameVerify(Name::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=29&c=1
bool IsSymbol_NonInline(Tagged<HeapObject> o) {
  return IsSymbol(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSymbol<Symbol, Name>::SymbolVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SymbolVerify(Symbol::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
