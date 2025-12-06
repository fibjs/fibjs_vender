// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
template<class D, class P>
CppHeapPointer_t TorqueGeneratedCppHeapExternalObject<D, P>::cpp_heap_wrappable() const {
  CppHeapPointer_t value = this->template ReadField<CppHeapPointer_t>(kCppHeapWrappableOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cpp-heap-external-object.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedCppHeapExternalObject<D, P>::set_cpp_heap_wrappable(CppHeapPointer_t value) {
  this->template WriteField<CppHeapPointer_t>(kCppHeapWrappableOffset, value);
}

template<class D, class P>
inline TorqueGeneratedCppHeapExternalObject<D, P>::TorqueGeneratedCppHeapExternalObject(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsCppHeapExternalObject_NonInline(*this));
}
