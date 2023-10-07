// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseCapability<D, P>::promise() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseCapability::promise(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseCapability<D, P>::promise(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kPromiseOffset);
  DCHECK(IsJSReceiver(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
template<class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_promise(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsUndefined(value));
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseCapability<D, P>::resolve() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseCapability::resolve(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseCapability<D, P>::resolve(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kResolveOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
template<class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_resolve(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kResolveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kResolveOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseCapability<D, P>::reject() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseCapability::reject(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseCapability<D, P>::reject(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kRejectOffset);
  DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
template<class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_reject(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value) || IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value));
  WRITE_FIELD(*this, kRejectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=5&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPromiseCapability<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPromiseCapability<D, P>::TorqueGeneratedPromiseCapability(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPromiseCapability_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=32&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReaction<D, P>::next() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReaction::next(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=32&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReaction<D, P>::next(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kNextOffset);
  DCHECK(IsZero(value) || IsPromiseReaction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=32&c=3
template<class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_next(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsZero(value) || IsPromiseReaction(value));
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=33&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReaction<D, P>::reject_handler() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReaction::reject_handler(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=33&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReaction<D, P>::reject_handler(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kRejectHandlerOffset);
  DCHECK(IsUndefined(value) || IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=33&c=3
template<class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_reject_handler(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  WRITE_FIELD(*this, kRejectHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectHandlerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReaction<D, P>::fulfill_handler() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReaction::fulfill_handler(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReaction<D, P>::fulfill_handler(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kFulfillHandlerOffset);
  DCHECK(IsUndefined(value) || IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
template<class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_fulfill_handler(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  WRITE_FIELD(*this, kFulfillHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFulfillHandlerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReaction<D, P>::promise_or_capability() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReaction::promise_or_capability(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReaction<D, P>::promise_or_capability(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kPromiseOrCapabilityOffset);
  DCHECK(IsUndefined(value) || IsJSPromise(value) || IsPromiseCapability(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
template<class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_promise_or_capability(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsJSPromise(value) || IsPromiseCapability(value));
  WRITE_FIELD(*this, kPromiseOrCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOrCapabilityOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=38&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReaction<D, P>::continuation_preserved_embedder_data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReaction::continuation_preserved_embedder_data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=38&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReaction<D, P>::continuation_preserved_embedder_data(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kContinuationPreservedEmbedderDataOffset);
  DCHECK(IsHeapObject(value) || IsSmi(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=38&c=3
template<class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_continuation_preserved_embedder_data(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsHeapObject(value) || IsSmi(value));
  WRITE_FIELD(*this, kContinuationPreservedEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContinuationPreservedEmbedderDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=31&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPromiseReaction<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPromiseReaction<D, P>::TorqueGeneratedPromiseReaction(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPromiseReaction_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=55&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReactionJobTask<D, P>::argument() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReactionJobTask::argument(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=55&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReactionJobTask<D, P>::argument(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kArgumentOffset);
  DCHECK(IsHeapObject(value) || IsSmi(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=55&c=3
template<class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_argument(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsHeapObject(value) || IsSmi(value));
  WRITE_FIELD(*this, kArgumentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArgumentOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=56&c=3
template<class D, class P>
Tagged<Context> TorqueGeneratedPromiseReactionJobTask<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReactionJobTask::context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=56&c=3
template<class D, class P>
Tagged<Context> TorqueGeneratedPromiseReactionJobTask<D, P>::context(PtrComprCageBase cage_base) const {
  Tagged<Context> value = TaggedField<Tagged<Context>>::load(cage_base, *this, kContextOffset);
  DCHECK(IsContext(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=56&c=3
template<class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_context(Tagged<Context> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsContext(value));
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=57&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReactionJobTask<D, P>::handler() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReactionJobTask::handler(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=57&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReactionJobTask<D, P>::handler(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kHandlerOffset);
  DCHECK(IsUndefined(value) || IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=57&c=3
template<class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_handler(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsCallableApiObject(value) || IsCallableJSProxy(value) || IsJSFunction(value) || IsJSBoundFunction(value) || IsJSWrappedFunction(value));
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReactionJobTask<D, P>::promise_or_capability() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReactionJobTask::promise_or_capability(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
template<class D, class P>
Tagged<HeapObject> TorqueGeneratedPromiseReactionJobTask<D, P>::promise_or_capability(PtrComprCageBase cage_base) const {
  Tagged<HeapObject> value = TaggedField<Tagged<HeapObject>>::load(cage_base, *this, kPromiseOrCapabilityOffset);
  DCHECK(IsUndefined(value) || IsJSPromise(value) || IsPromiseCapability(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
template<class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_promise_or_capability(Tagged<HeapObject> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsUndefined(value) || IsJSPromise(value) || IsPromiseCapability(value));
  WRITE_FIELD(*this, kPromiseOrCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOrCapabilityOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=61&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReactionJobTask<D, P>::continuation_preserved_embedder_data() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseReactionJobTask::continuation_preserved_embedder_data(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=61&c=3
template<class D, class P>
Tagged<Object> TorqueGeneratedPromiseReactionJobTask<D, P>::continuation_preserved_embedder_data(PtrComprCageBase cage_base) const {
  Tagged<Object> value = TaggedField<Tagged<Object>>::load(cage_base, *this, kContinuationPreservedEmbedderDataOffset);
  DCHECK(IsHeapObject(value) || IsSmi(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=61&c=3
template<class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_continuation_preserved_embedder_data(Tagged<Object> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsHeapObject(value) || IsSmi(value));
  WRITE_FIELD(*this, kContinuationPreservedEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContinuationPreservedEmbedderDataOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=53&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPromiseReactionJobTask<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPromiseReactionJobTask<D, P>::TorqueGeneratedPromiseReactionJobTask(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPromiseReactionJobTask_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=64&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPromiseFulfillReactionJobTask<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPromiseFulfillReactionJobTask<D, P>::TorqueGeneratedPromiseFulfillReactionJobTask(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPromiseFulfillReactionJobTask_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=66&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPromiseRejectReactionJobTask<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPromiseRejectReactionJobTask<D, P>::TorqueGeneratedPromiseRejectReactionJobTask(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPromiseRejectReactionJobTask_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=69&c=3
template<class D, class P>
Tagged<Context> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::context() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::context(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=69&c=3
template<class D, class P>
Tagged<Context> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::context(PtrComprCageBase cage_base) const {
  Tagged<Context> value = TaggedField<Tagged<Context>>::load(cage_base, *this, kContextOffset);
  DCHECK(IsContext(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=69&c=3
template<class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_context(Tagged<Context> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsContext(value));
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=70&c=3
template<class D, class P>
Tagged<JSPromise> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::promise_to_resolve() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::promise_to_resolve(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=70&c=3
template<class D, class P>
Tagged<JSPromise> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::promise_to_resolve(PtrComprCageBase cage_base) const {
  Tagged<JSPromise> value = TaggedField<Tagged<JSPromise>>::load(cage_base, *this, kPromiseToResolveOffset);
  DCHECK(IsJSPromise(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=70&c=3
template<class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_promise_to_resolve(Tagged<JSPromise> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSPromise(value));
  WRITE_FIELD(*this, kPromiseToResolveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseToResolveOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::thenable() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::thenable(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::thenable(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kThenableOffset);
  DCHECK(IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
template<class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_thenable(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value));
  WRITE_FIELD(*this, kThenableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kThenableOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::then() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::then(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
template<class D, class P>
Tagged<JSReceiver> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::then(PtrComprCageBase cage_base) const {
  Tagged<JSReceiver> value = TaggedField<Tagged<JSReceiver>>::load(cage_base, *this, kThenOffset);
  DCHECK(IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
template<class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_then(Tagged<JSReceiver> value, WriteBarrierMode mode) {
  SLOW_DCHECK(IsJSReceiver(value));
  WRITE_FIELD(*this, kThenOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kThenOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=68&c=1
template<class D, class P>
Tagged<D> TorqueGeneratedPromiseResolveThenableJobTask<D, P>::cast(Tagged<Object> object) {
    return Tagged<D>(D(object.ptr()));
}

template<class D, class P>
inline TorqueGeneratedPromiseResolveThenableJobTask<D, P>::TorqueGeneratedPromiseResolveThenableJobTask(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsPromiseResolveThenableJobTask_NonInline(*this));
}
