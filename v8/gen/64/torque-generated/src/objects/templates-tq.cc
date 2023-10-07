#include "src/objects/templates-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=5&c=1
bool IsTemplateInfo_NonInline(Tagged<HeapObject> o) {
  return IsTemplateInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedTemplateInfo<TemplateInfo, Struct>::TemplateInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::TemplateInfoVerify(TemplateInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=14&c=1
bool IsFunctionTemplateRareData_NonInline(Tagged<HeapObject> o) {
  return IsFunctionTemplateRareData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFunctionTemplateRareData<FunctionTemplateRareData, Struct>::FunctionTemplateRareDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FunctionTemplateRareDataVerify(FunctionTemplateRareData::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=41&c=1
bool IsFunctionTemplateInfo_NonInline(Tagged<HeapObject> o) {
  return IsFunctionTemplateInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedFunctionTemplateInfo<FunctionTemplateInfo, TemplateInfo>::FunctionTemplateInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::FunctionTemplateInfoVerify(FunctionTemplateInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=77&c=1
bool IsObjectTemplateInfo_NonInline(Tagged<HeapObject> o) {
  return IsObjectTemplateInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedObjectTemplateInfo<ObjectTemplateInfo, TemplateInfo>::ObjectTemplateInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ObjectTemplateInfoVerify(ObjectTemplateInfo::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
