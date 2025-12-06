// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
template<class D, class P>
Tagged<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>> TorqueGeneratedJSPromise<D, P>::reactions_or_result() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSPromise::reactions_or_result(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
template<class D, class P>
Tagged<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>> TorqueGeneratedJSPromise<D, P>::reactions_or_result(PtrComprCageBase cage_base) const {
  Tagged<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>> value = TaggedField<Tagged<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>>>::load(cage_base, *this, kReactionsOrResultOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsJSReceiver(value) || IsPromiseReaction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
template<class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_reactions_or_result(Tagged<Union<BigInt, Boolean, HeapNumber, JSReceiver, Null, PromiseReaction, Smi, String, Symbol, Undefined>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsJSReceiver(value) || IsPromiseReaction(value)));
  WRITE_FIELD(*this, kReactionsOrResultOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReactionsOrResultOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
template<class D, class P>
int TorqueGeneratedJSPromise<D, P>::flags() const {
  int value = TaggedField<Smi>::load(*this, kFlagsOffset).value();
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
template<class D, class P>
void TorqueGeneratedJSPromise<D, P>::set_flags(int value) {
  // bitfield struct JSPromiseFlags
  WRITE_FIELD(*this, kFlagsOffset, Smi::From31BitPattern(value));
}

template<class D, class P>
inline TorqueGeneratedJSPromise<D, P>::TorqueGeneratedJSPromise(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSPromise_NonInline(*this));
}
