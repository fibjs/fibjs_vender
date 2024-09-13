// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=27&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedJSDisposableStackBase<D, P>::stack() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSDisposableStackBase::stack(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=27&c=3
template<class D, class P>
Tagged<FixedArray> TorqueGeneratedJSDisposableStackBase<D, P>::stack(PtrComprCageBase cage_base) const {
  Tagged<FixedArray> value = TaggedField<Tagged<FixedArray>>::load(cage_base, *this, kStackOffset);
  DCHECK(IsFixedArray(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=27&c=3
template<class D, class P>
void TorqueGeneratedJSDisposableStackBase<D, P>::set_stack(Tagged<FixedArray> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsFixedArray(value));
  WRITE_FIELD(*this, kStackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStackOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=28&c=3
template<class D, class P>
int TorqueGeneratedJSDisposableStackBase<D, P>::status() const {
  int value = TaggedField<Smi>::load(*this, kStatusOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=28&c=3
template<class D, class P>
void TorqueGeneratedJSDisposableStackBase<D, P>::set_status(int value) {
  WRITE_FIELD(*this, kStatusOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSDisposableStackBase<D, P>::TorqueGeneratedJSDisposableStackBase(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSDisposableStackBase_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSyncDisposableStack<D, P>::TorqueGeneratedJSSyncDisposableStack(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSSyncDisposableStack_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncDisposableStack<D, P>::TorqueGeneratedJSAsyncDisposableStack(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSAsyncDisposableStack_NonInline(*this));
}
