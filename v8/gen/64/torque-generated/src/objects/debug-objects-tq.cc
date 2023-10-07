#include "src/objects/debug-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=5&c=1
bool IsBreakPoint_NonInline(Tagged<HeapObject> o) {
  return IsBreakPoint(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedBreakPoint<BreakPoint, Struct>::BreakPointVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::BreakPointVerify(BreakPoint::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=10&c=1
bool IsBreakPointInfo_NonInline(Tagged<HeapObject> o) {
  return IsBreakPointInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedBreakPointInfo<BreakPointInfo, Struct>::BreakPointInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::BreakPointInfoVerify(BreakPointInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=33&c=1
bool IsDebugInfo_NonInline(Tagged<HeapObject> o) {
  return IsDebugInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedDebugInfo<DebugInfo, Struct>::DebugInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::DebugInfoVerify(DebugInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=64&c=1
bool IsCoverageInfo_NonInline(Tagged<HeapObject> o) {
  return IsCoverageInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedCoverageInfo<CoverageInfo, HeapObject>::CoverageInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::CoverageInfoVerify(CoverageInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=74&c=1
bool IsStackFrameInfo_NonInline(Tagged<HeapObject> o) {
  return IsStackFrameInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStackFrameInfo<StackFrameInfo, Struct>::StackFrameInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StackFrameInfoVerify(StackFrameInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=115&c=1
bool IsErrorStackData_NonInline(Tagged<HeapObject> o) {
  return IsErrorStackData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedErrorStackData<ErrorStackData, Struct>::ErrorStackDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ErrorStackDataVerify(ErrorStackData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=129&c=1
bool IsPromiseOnStack_NonInline(Tagged<HeapObject> o) {
  return IsPromiseOnStack(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedPromiseOnStack<PromiseOnStack, Struct>::PromiseOnStackVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::PromiseOnStackVerify(PromiseOnStack::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
