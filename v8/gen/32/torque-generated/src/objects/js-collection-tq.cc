#include "src/objects/js-collection-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=5&c=1
bool IsJSCollection_NonInline(Tagged<HeapObject> o) {
  return IsJSCollection(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSCollection<JSCollection, JSObject>::JSCollectionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSCollectionVerify(JSCollection::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=1
bool IsJSSet_NonInline(Tagged<HeapObject> o) {
  return IsJSSet(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSet<JSSet, JSCollection>::JSSetVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSetVerify(JSSet::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=11&c=1
bool IsJSMap_NonInline(Tagged<HeapObject> o) {
  return IsJSMap(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSMap<JSMap, JSCollection>::JSMapVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSMapVerify(JSMap::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=13&c=1
bool IsJSWeakCollection_NonInline(Tagged<HeapObject> o) {
  return IsJSWeakCollection(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakCollection<JSWeakCollection, JSObject>::JSWeakCollectionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakCollectionVerify(JSWeakCollection::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=1
bool IsJSWeakSet_NonInline(Tagged<HeapObject> o) {
  return IsJSWeakSet(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakSet<JSWeakSet, JSWeakCollection>::JSWeakSetVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakSetVerify(JSWeakSet::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=19&c=1
bool IsJSWeakMap_NonInline(Tagged<HeapObject> o) {
  return IsJSWeakMap(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSWeakMap<JSWeakMap, JSWeakCollection>::JSWeakMapVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSWeakMapVerify(JSWeakMap::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
