#include "src/objects/js-array-buffer-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=63&c=1
bool IsJSArrayBufferView_NonInline(Tagged<HeapObject> o) {
  return IsJSArrayBufferView(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArrayBufferView<JSArrayBufferView, JSObjectWithEmbedderSlots>::JSArrayBufferViewVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(JSArrayBufferView::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=109&c=1
bool IsJSTypedArray_NonInline(Tagged<HeapObject> o) {
  return IsJSTypedArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSTypedArray<JSTypedArray, JSArrayBufferView>::JSTypedArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSTypedArrayVerify(JSTypedArray::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=14&c=1
bool IsJSArrayBuffer_NonInline(Tagged<HeapObject> o) {
  return IsJSArrayBuffer(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSArrayBuffer<JSArrayBuffer, JSObjectWithEmbedderSlots>::JSArrayBufferVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSArrayBufferVerify(JSArrayBuffer::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=127&c=1
bool IsJSDataViewOrRabGsabDataView_NonInline(Tagged<HeapObject> o) {
  return IsJSDataViewOrRabGsabDataView(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDataViewOrRabGsabDataView<JSDataViewOrRabGsabDataView, JSArrayBufferView>::JSDataViewOrRabGsabDataViewVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDataViewOrRabGsabDataViewVerify(JSDataViewOrRabGsabDataView::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=133&c=1
bool IsJSDataView_NonInline(Tagged<HeapObject> o) {
  return IsJSDataView(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSDataView<JSDataView, JSDataViewOrRabGsabDataView>::JSDataViewVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSDataViewVerify(JSDataView::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=135&c=1
bool IsJSRabGsabDataView_NonInline(Tagged<HeapObject> o) {
  return IsJSRabGsabDataView(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedJSRabGsabDataView<JSRabGsabDataView, JSDataViewOrRabGsabDataView>::JSRabGsabDataViewVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::JSRabGsabDataViewVerify(JSRabGsabDataView::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
