// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
template<class D, class P>
Tagged<Union<JSReceiver, Null>> TorqueGeneratedJSProxy<D, P>::target() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxy::target(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
template<class D, class P>
Tagged<Union<JSReceiver, Null>> TorqueGeneratedJSProxy<D, P>::target(PtrComprCageBase cage_base) const {
  Tagged<Union<JSReceiver, Null>> value = TaggedField<Tagged<Union<JSReceiver, Null>>>::load(cage_base, *this, kTargetOffset);
  DCHECK(IsNull(value) || IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
template<class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_target(Tagged<Union<JSReceiver, Null>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsNull(value) || IsJSReceiver(value)));
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=8&c=3
template<class D, class P>
Tagged<Union<JSReceiver, Null>> TorqueGeneratedJSProxy<D, P>::handler() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxy::handler(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=8&c=3
template<class D, class P>
Tagged<Union<JSReceiver, Null>> TorqueGeneratedJSProxy<D, P>::handler(PtrComprCageBase cage_base) const {
  Tagged<Union<JSReceiver, Null>> value = TaggedField<Tagged<Union<JSReceiver, Null>>>::load(cage_base, *this, kHandlerOffset);
  DCHECK(IsNull(value) || IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=8&c=3
template<class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_handler(Tagged<Union<JSReceiver, Null>> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsNull(value) || IsJSReceiver(value)));
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=9&c=3
template<class D, class P>
int32_t TorqueGeneratedJSProxy<D, P>::flags() const {
  int32_t value = this->template ReadField<int32_t>(kFlagsOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=9&c=3
template<class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_flags(int32_t value) {
  this->template WriteField<int32_t>(kFlagsOffset, value);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=10&c=28
template<class D, class P>
uint32_t TorqueGeneratedJSProxy<D, P>::padding() const {
  uint32_t value = this->template ReadField<uint32_t>(kPaddingOffset);
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=10&c=28
template<class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_padding(uint32_t value) {
  this->template WriteField<uint32_t>(kPaddingOffset, value);
}

template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSProxy_NonInline(*this));
}
// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=14&c=3
template<class D, class P>
Tagged<JSAny> TorqueGeneratedJSProxyRevocableResult<D, P>::proxy() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxyRevocableResult::proxy(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=14&c=3
template<class D, class P>
Tagged<JSAny> TorqueGeneratedJSProxyRevocableResult<D, P>::proxy(PtrComprCageBase cage_base) const {
  Tagged<JSAny> value = TaggedField<Tagged<JSAny>>::load(cage_base, *this, kProxyOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=14&c=3
template<class D, class P>
void TorqueGeneratedJSProxyRevocableResult<D, P>::set_proxy(Tagged<JSAny> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsJSReceiver(value)));
  WRITE_FIELD(*this, kProxyOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kProxyOffset, value, mode);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=15&c=3
template<class D, class P>
Tagged<JSAny> TorqueGeneratedJSProxyRevocableResult<D, P>::revoke() const {
  PtrComprCageBase cage_base = GetPtrComprCageBase(*this);
  return TorqueGeneratedJSProxyRevocableResult::revoke(cage_base);
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=15&c=3
template<class D, class P>
Tagged<JSAny> TorqueGeneratedJSProxyRevocableResult<D, P>::revoke(PtrComprCageBase cage_base) const {
  Tagged<JSAny> value = TaggedField<Tagged<JSAny>>::load(cage_base, *this, kRevokeOffset);
  DCHECK(IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsJSReceiver(value));
  return value;
}

// https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=15&c=3
template<class D, class P>
void TorqueGeneratedJSProxyRevocableResult<D, P>::set_revoke(Tagged<JSAny> value, WriteBarrierMode mode) {
  SLOW_DCHECK(!IsolateGroup::current()->shared_read_only_heap()->roots_init_complete() || (IsSmi(value) || IsHeapNumber(value) || IsBigInt(value) || IsString(value) || IsSymbol(value) || IsBoolean(value) || IsNull(value) || IsUndefined(value) || IsJSReceiver(value)));
  WRITE_FIELD(*this, kRevokeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRevokeOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSProxyRevocableResult<D, P>::TorqueGeneratedJSProxyRevocableResult(Address ptr)
    : P(ptr) {
  SLOW_DCHECK(IsJSObject_NonInline(*this));
}
