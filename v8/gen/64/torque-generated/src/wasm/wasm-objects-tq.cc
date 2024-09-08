#include "src/wasm/wasm-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=83&c=1
bool IsWasmFuncRef_NonInline(Tagged<HeapObject> o) {
  return IsWasmFuncRef(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmFuncRef<WasmFuncRef, HeapObject>::WasmFuncRefVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmFuncRefVerify(Cast<WasmFuncRef>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=283&c=1
bool IsWasmNull_NonInline(Tagged<HeapObject> o) {
  return IsWasmNull(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmNull<WasmNull, HeapObject>::WasmNullVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmNullVerify(Cast<WasmNull>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=28&c=1
bool IsWasmImportData_NonInline(Tagged<HeapObject> o) {
  return IsWasmImportData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmImportData<WasmImportData, TrustedObject>::WasmImportDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmImportDataVerify(Cast<WasmImportData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=20&c=1
bool IsWasmInstanceObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmInstanceObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmInstanceObject<WasmInstanceObject, JSObject>::WasmInstanceObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmInstanceObjectVerify(Cast<WasmInstanceObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=55&c=1
bool IsWasmInternalFunction_NonInline(Tagged<HeapObject> o) {
  return IsWasmInternalFunction(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmInternalFunction<WasmInternalFunction, ExposedTrustedObject>::WasmInternalFunctionVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmInternalFunctionVerify(Cast<WasmInternalFunction>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=92&c=1
bool IsWasmFunctionData_NonInline(Tagged<HeapObject> o) {
  return IsWasmFunctionData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmFunctionData<WasmFunctionData, ExposedTrustedObject>::WasmFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmFunctionDataVerify(Cast<WasmFunctionData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=108&c=1
bool IsWasmExportedFunctionData_NonInline(Tagged<HeapObject> o) {
  return IsWasmExportedFunctionData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmExportedFunctionData<WasmExportedFunctionData, WasmFunctionData>::WasmExportedFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmExportedFunctionDataVerify(Cast<WasmExportedFunctionData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=131&c=1
bool IsWasmJSFunctionData_NonInline(Tagged<HeapObject> o) {
  return IsWasmJSFunctionData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmJSFunctionData<WasmJSFunctionData, WasmFunctionData>::WasmJSFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify(Cast<WasmJSFunctionData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=135&c=1
bool IsWasmCapiFunctionData_NonInline(Tagged<HeapObject> o) {
  return IsWasmCapiFunctionData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmCapiFunctionData<WasmCapiFunctionData, WasmFunctionData>::WasmCapiFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmCapiFunctionDataVerify(Cast<WasmCapiFunctionData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=140&c=1
bool IsWasmResumeData_NonInline(Tagged<HeapObject> o) {
  return IsWasmResumeData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmResumeData<WasmResumeData, HeapObject>::WasmResumeDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmResumeDataVerify(Cast<WasmResumeData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=145&c=1
bool IsWasmContinuationObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmContinuationObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmContinuationObject<WasmContinuationObject, HeapObject>::WasmContinuationObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmContinuationObjectVerify(Cast<WasmContinuationObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=151&c=1
bool IsWasmSuspenderObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmSuspenderObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmSuspenderObject<WasmSuspenderObject, HeapObject>::WasmSuspenderObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmSuspenderObjectVerify(Cast<WasmSuspenderObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=164&c=1
bool IsWasmExceptionTag_NonInline(Tagged<HeapObject> o) {
  return IsWasmExceptionTag(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmExceptionTag<WasmExceptionTag, Struct>::WasmExceptionTagVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(Cast<WasmExceptionTag>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=173&c=1
bool IsWasmModuleObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmModuleObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmModuleObject<WasmModuleObject, JSObject>::WasmModuleObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmModuleObjectVerify(Cast<WasmModuleObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=180&c=1
bool IsWasmTableObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmTableObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTableObject<WasmTableObject, JSObject>::WasmTableObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTableObjectVerify(Cast<WasmTableObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=203&c=1
bool IsWasmMemoryObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmMemoryObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmMemoryObject<WasmMemoryObject, JSObject>::WasmMemoryObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmMemoryObjectVerify(Cast<WasmMemoryObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=210&c=1
bool IsWasmGlobalObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmGlobalObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmGlobalObject<WasmGlobalObject, JSObject>::WasmGlobalObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify(Cast<WasmGlobalObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=224&c=1
bool IsWasmTagObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmTagObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTagObject<WasmTagObject, JSObject>::WasmTagObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTagObjectVerify(Cast<WasmTagObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=233&c=1
bool IsAsmWasmData_NonInline(Tagged<HeapObject> o) {
  return IsAsmWasmData(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedAsmWasmData<AsmWasmData, Struct>::AsmWasmDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::AsmWasmDataVerify(Cast<AsmWasmData>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=238&c=1
bool IsWasmTypeInfo_NonInline(Tagged<HeapObject> o) {
  return IsWasmTypeInfo(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTypeInfo<WasmTypeInfo, HeapObject>::WasmTypeInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTypeInfoVerify(Cast<WasmTypeInfo>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=261&c=1
bool IsWasmObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmObject<WasmObject, JSReceiver>::WasmObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmObjectVerify(Cast<WasmObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=264&c=1
bool IsWasmStruct_NonInline(Tagged<HeapObject> o) {
  return IsWasmStruct(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmStruct<WasmStruct, WasmObject>::WasmStructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmStructVerify(Cast<WasmStruct>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=267&c=1
bool IsWasmArray_NonInline(Tagged<HeapObject> o) {
  return IsWasmArray(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmArray<WasmArray, WasmObject>::WasmArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmArrayVerify(Cast<WasmArray>(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=288&c=1
bool IsWasmSuspendingObject_NonInline(Tagged<HeapObject> o) {
  return IsWasmSuspendingObject(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmSuspendingObject<WasmSuspendingObject, JSObject>::WasmSuspendingObjectVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmSuspendingObjectVerify(Cast<WasmSuspendingObject>(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
