#include "src/objects/string-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=7&c=1
bool IsString_NonInline(Tagged<HeapObject> o) {
  return IsString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedString<String, Name>::StringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StringVerify(String::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=65&c=1
bool IsConsString_NonInline(Tagged<HeapObject> o) {
  return IsConsString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedConsString<ConsString, String>::ConsStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ConsStringVerify(ConsString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=81&c=1
bool IsExternalString_NonInline(Tagged<HeapObject> o) {
  return IsExternalString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalString<ExternalString, String>::ExternalStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalStringVerify(ExternalString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=103&c=1
bool IsExternalOneByteString_NonInline(Tagged<HeapObject> o) {
  return IsExternalOneByteString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalOneByteString<ExternalOneByteString, ExternalString>::ExternalOneByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalOneByteStringVerify(ExternalOneByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=114&c=1
bool IsExternalTwoByteString_NonInline(Tagged<HeapObject> o) {
  return IsExternalTwoByteString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedExternalTwoByteString<ExternalTwoByteString, ExternalString>::ExternalTwoByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify(ExternalTwoByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=125&c=1
bool IsInternalizedString_NonInline(Tagged<HeapObject> o) {
  return IsInternalizedString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedInternalizedString<InternalizedString, String>::InternalizedStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::InternalizedStringVerify(InternalizedString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=128&c=1
bool IsSeqString_NonInline(Tagged<HeapObject> o) {
  return IsSeqString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqString<SeqString, String>::SeqStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqStringVerify(SeqString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=131&c=1
bool IsSeqOneByteString_NonInline(Tagged<HeapObject> o) {
  return IsSeqOneByteString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqOneByteString<SeqOneByteString, SeqString>::SeqOneByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqOneByteStringVerify(SeqOneByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=136&c=1
bool IsSeqTwoByteString_NonInline(Tagged<HeapObject> o) {
  return IsSeqTwoByteString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSeqTwoByteString<SeqTwoByteString, SeqString>::SeqTwoByteStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(SeqTwoByteString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=142&c=1
bool IsSlicedString_NonInline(Tagged<HeapObject> o) {
  return IsSlicedString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedSlicedString<SlicedString, String>::SlicedStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::SlicedStringVerify(SlicedString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=149&c=1
bool IsThinString_NonInline(Tagged<HeapObject> o) {
  return IsThinString(o);
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedThinString<ThinString, String>::ThinStringVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::ThinStringVerify(ThinString::cast(*this), isolate);
}


#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
