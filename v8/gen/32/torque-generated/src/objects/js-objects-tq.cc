#include "src/objects/js-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=6&c=1
bool IsJSReceiver_NonInline(Tagged<HeapObject> o) {
  return IsJSReceiver(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSReceiver<JSReceiver, HeapObject>::JSReceiverVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSReceiverVerify(JSReceiver::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=14&c=1
bool IsJSObject_NonInline(Tagged<HeapObject> o) {
  return IsJSObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSObject<JSObject, JSReceiver>::JSObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSObjectVerify(JSObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=48&c=1
bool IsJSObjectWithEmbedderSlots_NonInline(Tagged<HeapObject> o) {
  return IsJSObjectWithEmbedderSlots(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSObjectWithEmbedderSlots<JSObjectWithEmbedderSlots, JSObject>::JSObjectWithEmbedderSlotsVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSObjectWithEmbedderSlotsVerify(JSObjectWithEmbedderSlots::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=51&c=1
bool IsJSCustomElementsObject_NonInline(Tagged<HeapObject> o) {
  return IsJSCustomElementsObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSCustomElementsObject<JSCustomElementsObject, JSObject>::JSCustomElementsObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSCustomElementsObjectVerify(JSCustomElementsObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=57&c=1
bool IsJSSpecialObject_NonInline(Tagged<HeapObject> o) {
  return IsJSSpecialObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSSpecialObject<JSSpecialObject, JSCustomElementsObject>::JSSpecialObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSSpecialObjectVerify(JSSpecialObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=43&c=1
bool IsJSExternalObject_NonInline(Tagged<HeapObject> o) {
  return IsJSExternalObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSExternalObject<JSExternalObject, JSObject>::JSExternalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSExternalObjectVerify(JSExternalObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=104&c=1
bool IsJSGlobalProxy_NonInline(Tagged<HeapObject> o) {
  return IsJSGlobalProxy(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSGlobalProxy<JSGlobalProxy, JSSpecialObject>::JSGlobalProxyVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(JSGlobalProxy::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=110&c=1
bool IsJSGlobalObject_NonInline(Tagged<HeapObject> o) {
  return IsJSGlobalObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSGlobalObject<JSGlobalObject, JSSpecialObject>::JSGlobalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSGlobalObjectVerify(JSGlobalObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=118&c=1
bool IsJSPrimitiveWrapper_NonInline(Tagged<HeapObject> o) {
  return IsJSPrimitiveWrapper(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSPrimitiveWrapper<JSPrimitiveWrapper, JSCustomElementsObject>::JSPrimitiveWrapperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(JSPrimitiveWrapper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=122&c=1
bool IsJSMessageObject_NonInline(Tagged<HeapObject> o) {
  return IsJSMessageObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSMessageObject<JSMessageObject, JSObject>::JSMessageObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSMessageObjectVerify(JSMessageObject::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=141&c=1
bool IsJSDate_NonInline(Tagged<HeapObject> o) {
  return IsJSDate(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDate<JSDate, JSObject>::JSDateVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDateVerify(JSDate::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=161&c=1
bool IsJSAsyncFromSyncIterator_NonInline(Tagged<HeapObject> o) {
  return IsJSAsyncFromSyncIterator(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSAsyncFromSyncIterator<JSAsyncFromSyncIterator, JSObject>::JSAsyncFromSyncIteratorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=168&c=1
bool IsJSStringIterator_NonInline(Tagged<HeapObject> o) {
  return IsJSStringIterator(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSStringIterator<JSStringIterator, JSObject>::JSStringIteratorVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSStringIteratorVerify(JSStringIterator::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=177&c=1
bool IsJSValidIteratorWrapper_NonInline(Tagged<HeapObject> o) {
  return IsJSValidIteratorWrapper(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSValidIteratorWrapper<JSValidIteratorWrapper, JSObject>::JSValidIteratorWrapperVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSValidIteratorWrapperVerify(JSValidIteratorWrapper::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
