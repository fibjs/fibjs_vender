#ifdef VERIFY_HEAP
#include "torque-generated/class-verifiers.h"

#include "src/objects/all-objects-inl.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
#include "torque-generated/test/torque/test-torque-tq-inl.inc"
void TorqueGeneratedClassVerifiers::ContextVerify(Context o, Isolate* isolate) {
  CHECK(IsContext(o, isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value));
  }
  intptr_t elements__offset, elements__length;
  std::tie(std::ignore, elements__offset, elements__length) = TqRuntimeFieldSliceContextElements(o);
  CHECK_EQ(elements__offset, static_cast<int>(elements__offset));
  CHECK_EQ(elements__length, static_cast<int>(elements__length));
  for (int i = 0; i < static_cast<int>(elements__length); ++i) {
    Object elements__value = TaggedField<Object>::load(o, static_cast<int>(elements__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, elements__value);
  }
}
void TorqueGeneratedClassVerifiers::JSReceiverVerify(JSReceiver o, Isolate* isolate) {
  CHECK(IsJSReceiver(o, isolate));
  {
    Object properties_or_hash__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, properties_or_hash__value);
    CHECK(IsSmi(properties_or_hash__value) || IsFixedArrayBase(properties_or_hash__value) || IsPropertyArray(properties_or_hash__value) || IsSwissNameDictionary(properties_or_hash__value));
  }
}
void TorqueGeneratedClassVerifiers::PrimitiveHeapObjectVerify(PrimitiveHeapObject o, Isolate* isolate) {
  CHECK(IsPrimitiveHeapObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::HeapNumberVerify(HeapNumber o, Isolate* isolate) {
  o.PrimitiveHeapObjectVerify(isolate);
  CHECK(IsHeapNumber(o, isolate));
}
void TorqueGeneratedClassVerifiers::NameVerify(Name o, Isolate* isolate) {
  o.PrimitiveHeapObjectVerify(isolate);
  CHECK(IsName(o, isolate));
}
void TorqueGeneratedClassVerifiers::StringVerify(String o, Isolate* isolate) {
  o.NameVerify(isolate);
  CHECK(IsString(o, isolate));
}
void TorqueGeneratedClassVerifiers::SymbolVerify(Symbol o, Isolate* isolate) {
  o.NameVerify(isolate);
  CHECK(IsSymbol(o, isolate));
  {
    Object description__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, description__value);
    CHECK(IsString(description__value) || IsUndefined(description__value));
  }
}
void TorqueGeneratedClassVerifiers::FixedArrayBaseVerify(FixedArrayBase o, Isolate* isolate) {
  CHECK(IsFixedArrayBase(o, isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value));
  }
}
void TorqueGeneratedClassVerifiers::FixedArrayVerify(FixedArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsFixedArray(o, isolate));
  intptr_t objects__offset, objects__length;
  std::tie(std::ignore, objects__offset, objects__length) = TqRuntimeFieldSliceFixedArrayObjects(o);
  CHECK_EQ(objects__offset, static_cast<int>(objects__offset));
  CHECK_EQ(objects__length, static_cast<int>(objects__length));
  for (int i = 0; i < static_cast<int>(objects__length); ++i) {
    Object objects__value = TaggedField<Object>::load(o, static_cast<int>(objects__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, objects__value);
  }
}
void TorqueGeneratedClassVerifiers::JSObjectVerify(JSObject o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  CHECK(IsJSObject(o, isolate));
  {
    Object elements__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, elements__value);
    CHECK(IsFixedArrayBase(elements__value));
  }
}
void TorqueGeneratedClassVerifiers::WeakFixedArrayVerify(WeakFixedArray o, Isolate* isolate) {
  CHECK(IsWeakFixedArray(o, isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value));
  }
  intptr_t objects__offset, objects__length;
  std::tie(std::ignore, objects__offset, objects__length) = TqRuntimeFieldSliceWeakFixedArrayObjects(o);
  CHECK_EQ(objects__offset, static_cast<int>(objects__offset));
  CHECK_EQ(objects__length, static_cast<int>(objects__length));
  for (int i = 0; i < static_cast<int>(objects__length); ++i) {
    MaybeObject objects__value = TaggedField<MaybeObject>::load(o, static_cast<int>(objects__offset) + i * kTaggedSize);
    MaybeObject::VerifyMaybeObjectPointer(isolate, objects__value);
    CHECK(objects__value.IsCleared() || (!objects__value.IsWeak() && IsHeapObject(objects__value.GetHeapObjectOrSmi())) || (!objects__value.IsWeak() && IsSmi(objects__value.GetHeapObjectOrSmi())) || objects__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::ForeignVerify(Foreign o, Isolate* isolate) {
  CHECK(IsForeign(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSProxyVerify(JSProxy o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  CHECK(IsJSProxy(o, isolate));
  {
    Object target__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, target__value);
    CHECK(IsJSReceiver(target__value) || IsNull(target__value));
  }
  {
    Object handler__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, handler__value);
    CHECK(IsJSReceiver(handler__value) || IsNull(handler__value));
  }
}
void TorqueGeneratedClassVerifiers::JSFunctionOrBoundFunctionOrWrappedFunctionVerify(JSFunctionOrBoundFunctionOrWrappedFunction o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSFunctionOrBoundFunctionOrWrappedFunction(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSFunctionVerify(JSFunction o, Isolate* isolate) {
  o.JSFunctionOrBoundFunctionOrWrappedFunctionVerify(isolate);
  CHECK(IsJSFunction(o, isolate));
  {
    Object code__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, code__value);
    CHECK(IsCode(code__value));
  }
  {
    Object shared_function_info__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(IsSharedFunctionInfo(shared_function_info__value));
  }
  {
    Object context__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsContext(context__value));
  }
  {
    Object feedback_cell__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, feedback_cell__value);
    CHECK(IsFeedbackCell(feedback_cell__value));
  }
  {
    Object prototype_or_initial_map__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, prototype_or_initial_map__value);
    CHECK(IsJSReceiver(prototype_or_initial_map__value) || IsMap(prototype_or_initial_map__value));
  }
}
void TorqueGeneratedClassVerifiers::JSBoundFunctionVerify(JSBoundFunction o, Isolate* isolate) {
  o.JSFunctionOrBoundFunctionOrWrappedFunctionVerify(isolate);
  CHECK(IsJSBoundFunction(o, isolate));
  {
    Object bound_target_function__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, bound_target_function__value);
    CHECK(IsCallableApiObject(bound_target_function__value) || IsCallableJSProxy(bound_target_function__value) || IsJSFunction(bound_target_function__value) || IsJSBoundFunction(bound_target_function__value) || IsJSWrappedFunction(bound_target_function__value));
  }
  {
    Object bound_this__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, bound_this__value);
    CHECK(IsJSReceiver(bound_this__value) || IsSmi(bound_this__value) || IsHeapNumber(bound_this__value) || IsBigInt(bound_this__value) || IsString(bound_this__value) || IsSymbol(bound_this__value) || IsBoolean(bound_this__value) || IsNull(bound_this__value) || IsUndefined(bound_this__value) || IsSourceTextModule(bound_this__value));
  }
  {
    Object bound_arguments__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, bound_arguments__value);
    CHECK(IsFixedArray(bound_arguments__value));
  }
}
void TorqueGeneratedClassVerifiers::JSWrappedFunctionVerify(JSWrappedFunction o, Isolate* isolate) {
  o.JSFunctionOrBoundFunctionOrWrappedFunctionVerify(isolate);
  CHECK(IsJSWrappedFunction(o, isolate));
  {
    Object wrapped_target_function__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, wrapped_target_function__value);
    CHECK(IsCallableApiObject(wrapped_target_function__value) || IsCallableJSProxy(wrapped_target_function__value) || IsJSFunction(wrapped_target_function__value) || IsJSBoundFunction(wrapped_target_function__value) || IsJSWrappedFunction(wrapped_target_function__value));
  }
  {
    Object context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsNativeContext(context__value));
  }
}
void TorqueGeneratedClassVerifiers::JSObjectWithEmbedderSlotsVerify(JSObjectWithEmbedderSlots o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSObjectWithEmbedderSlots(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSCustomElementsObjectVerify(JSCustomElementsObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSCustomElementsObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSSpecialObjectVerify(JSSpecialObject o, Isolate* isolate) {
  o.JSCustomElementsObjectVerify(isolate);
  CHECK(IsJSSpecialObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::MapVerify(Map o, Isolate* isolate) {
  CHECK(IsMap(o, isolate));
  {
    Object prototype__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, prototype__value);
    CHECK(IsJSReceiver(prototype__value) || IsNull(prototype__value));
  }
  {
    Object constructor_or_back_pointer_or_native_context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, constructor_or_back_pointer_or_native_context__value);
  }
  {
    Object instance_descriptors__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, instance_descriptors__value);
    CHECK(IsDescriptorArray(instance_descriptors__value));
  }
  {
    Object dependent_code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, dependent_code__value);
    CHECK(IsDependentCode(dependent_code__value));
  }
  {
    Object prototype_validity_cell__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, prototype_validity_cell__value);
    CHECK(IsSmi(prototype_validity_cell__value) || IsCell(prototype_validity_cell__value));
  }
  {
    MaybeObject transitions_or_prototype_info__value = TaggedField<MaybeObject>::load(o, 64);
    MaybeObject::VerifyMaybeObjectPointer(isolate, transitions_or_prototype_info__value);
    CHECK(transitions_or_prototype_info__value.IsCleared() || (!transitions_or_prototype_info__value.IsWeak() && IsSmi(transitions_or_prototype_info__value.GetHeapObjectOrSmi())) || (!transitions_or_prototype_info__value.IsWeak() && IsTransitionArray(transitions_or_prototype_info__value.GetHeapObjectOrSmi())) || (!transitions_or_prototype_info__value.IsWeak() && IsMap(transitions_or_prototype_info__value.GetHeapObjectOrSmi())) || (transitions_or_prototype_info__value.IsWeak() && IsMap(transitions_or_prototype_info__value.GetHeapObjectOrSmi())) || (!transitions_or_prototype_info__value.IsWeak() && IsPrototypeInfo(transitions_or_prototype_info__value.GetHeapObjectOrSmi())));
  }
}
void TorqueGeneratedClassVerifiers::WeakCellVerify(WeakCell o, Isolate* isolate) {
  CHECK(IsWeakCell(o, isolate));
  {
    Object finalization_registry__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, finalization_registry__value);
    CHECK(IsUndefined(finalization_registry__value) || IsJSFinalizationRegistry(finalization_registry__value));
  }
  {
    Object target__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, target__value);
    CHECK(IsJSReceiver(target__value) || IsSymbol(target__value) || IsUndefined(target__value));
  }
  {
    Object unregister_token__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, unregister_token__value);
    CHECK(IsJSReceiver(unregister_token__value) || IsSymbol(unregister_token__value) || IsUndefined(unregister_token__value));
  }
  {
    Object holdings__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, holdings__value);
    CHECK(IsJSReceiver(holdings__value) || IsSmi(holdings__value) || IsHeapNumber(holdings__value) || IsBigInt(holdings__value) || IsString(holdings__value) || IsSymbol(holdings__value) || IsBoolean(holdings__value) || IsNull(holdings__value) || IsUndefined(holdings__value));
  }
  {
    Object prev__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, prev__value);
    CHECK(IsUndefined(prev__value) || IsWeakCell(prev__value));
  }
  {
    Object next__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, next__value);
    CHECK(IsUndefined(next__value) || IsWeakCell(next__value));
  }
  {
    Object key_list_prev__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, key_list_prev__value);
    CHECK(IsUndefined(key_list_prev__value) || IsWeakCell(key_list_prev__value));
  }
  {
    Object key_list_next__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, key_list_next__value);
    CHECK(IsUndefined(key_list_next__value) || IsWeakCell(key_list_next__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmInternalFunctionVerify(WasmInternalFunction o, Isolate* isolate) {
  CHECK(IsWasmInternalFunction(o, isolate));
  {
    Object ref__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, ref__value);
    CHECK(IsWasmInstanceObject(ref__value) || IsWasmApiFunctionRef(ref__value));
  }
  {
    Object external__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, external__value);
    CHECK(IsUndefined(external__value) || IsJSFunction(external__value));
  }
  {
    Object code__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, code__value);
    CHECK(IsCode(code__value));
  }
  {
    Object function_index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, function_index__value);
    CHECK(IsSmi(function_index__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmNullVerify(WasmNull o, Isolate* isolate) {
  CHECK(IsWasmNull(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSPromiseVerify(JSPromise o, Isolate* isolate) {
  o.JSObjectWithEmbedderSlotsVerify(isolate);
  CHECK(IsJSPromise(o, isolate));
  {
    Object reactions_or_result__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, reactions_or_result__value);
    CHECK(IsJSReceiver(reactions_or_result__value) || IsSmi(reactions_or_result__value) || IsHeapNumber(reactions_or_result__value) || IsBigInt(reactions_or_result__value) || IsString(reactions_or_result__value) || IsSymbol(reactions_or_result__value) || IsBoolean(reactions_or_result__value) || IsNull(reactions_or_result__value) || IsUndefined(reactions_or_result__value) || IsPromiseReaction(reactions_or_result__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::StructVerify(Struct o, Isolate* isolate) {
  CHECK(IsStruct(o, isolate));
}
void TorqueGeneratedClassVerifiers::PromiseCapabilityVerify(PromiseCapability o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsPromiseCapability(o, isolate));
  {
    Object promise__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(IsJSReceiver(promise__value) || IsUndefined(promise__value));
  }
  {
    Object resolve__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, resolve__value);
    CHECK(IsJSReceiver(resolve__value) || IsSmi(resolve__value) || IsHeapNumber(resolve__value) || IsBigInt(resolve__value) || IsString(resolve__value) || IsSymbol(resolve__value) || IsBoolean(resolve__value) || IsNull(resolve__value) || IsUndefined(resolve__value));
  }
  {
    Object reject__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, reject__value);
    CHECK(IsJSReceiver(reject__value) || IsSmi(reject__value) || IsHeapNumber(reject__value) || IsBigInt(reject__value) || IsString(reject__value) || IsSymbol(reject__value) || IsBoolean(reject__value) || IsNull(reject__value) || IsUndefined(reject__value));
  }
}
void TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(JSArrayBufferView o, Isolate* isolate) {
  o.JSObjectWithEmbedderSlotsVerify(isolate);
  CHECK(IsJSArrayBufferView(o, isolate));
  {
    Object buffer__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, buffer__value);
    CHECK(IsJSArrayBuffer(buffer__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTypedArrayVerify(JSTypedArray o, Isolate* isolate) {
  o.JSArrayBufferViewVerify(isolate);
  CHECK(IsJSTypedArray(o, isolate));
  {
    Object base_pointer__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, base_pointer__value);
    CHECK(IsSmi(base_pointer__value) || IsByteArray(base_pointer__value));
  }
}
void TorqueGeneratedClassVerifiers::DataHandlerVerify(DataHandler o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsDataHandler(o, isolate));
  {
    Object smi_handler__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, smi_handler__value);
    CHECK(IsSmi(smi_handler__value) || IsCode(smi_handler__value));
  }
  {
    Object validity_cell__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, validity_cell__value);
    CHECK(IsSmi(validity_cell__value) || IsCell(validity_cell__value));
  }
  {
    MaybeObject data1__value = TaggedField<MaybeObject>::load(o, 24);
    MaybeObject::VerifyMaybeObjectPointer(isolate, data1__value);
    CHECK(data1__value.IsCleared() || (!data1__value.IsWeak() && IsHeapObject(data1__value.GetHeapObjectOrSmi())) || (!data1__value.IsWeak() && IsSmi(data1__value.GetHeapObjectOrSmi())) || data1__value.IsWeak());
  }
  {
    MaybeObject data2__value = TaggedField<MaybeObject>::load(o, 32);
    MaybeObject::VerifyMaybeObjectPointer(isolate, data2__value);
    CHECK(data2__value.IsCleared() || (!data2__value.IsWeak() && IsHeapObject(data2__value.GetHeapObjectOrSmi())) || (!data2__value.IsWeak() && IsSmi(data2__value.GetHeapObjectOrSmi())) || data2__value.IsWeak());
  }
  {
    MaybeObject data3__value = TaggedField<MaybeObject>::load(o, 40);
    MaybeObject::VerifyMaybeObjectPointer(isolate, data3__value);
    CHECK(data3__value.IsCleared() || (!data3__value.IsWeak() && IsHeapObject(data3__value.GetHeapObjectOrSmi())) || (!data3__value.IsWeak() && IsSmi(data3__value.GetHeapObjectOrSmi())) || data3__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::AllocationMementoVerify(AllocationMemento o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsAllocationMemento(o, isolate));
  {
    Object allocation_site__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, allocation_site__value);
    CHECK(IsAllocationSite(allocation_site__value));
  }
}
void TorqueGeneratedClassVerifiers::CallHandlerInfoVerify(CallHandlerInfo o, Isolate* isolate) {
  CHECK(IsCallHandlerInfo(o, isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, data__value);
  }
  {
    Object owner_template__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, owner_template__value);
    CHECK(IsFunctionTemplateInfo(owner_template__value) || IsObjectTemplateInfo(owner_template__value));
  }
}
void TorqueGeneratedClassVerifiers::InterceptorInfoVerify(InterceptorInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsInterceptorInfo(o, isolate));
  {
    Object getter__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, getter__value);
    CHECK(IsUndefined(getter__value) || IsZero(getter__value) || IsNonNullForeign(getter__value));
  }
  {
    Object setter__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, setter__value);
    CHECK(IsUndefined(setter__value) || IsZero(setter__value) || IsNonNullForeign(setter__value));
  }
  {
    Object query__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, query__value);
    CHECK(IsUndefined(query__value) || IsZero(query__value) || IsNonNullForeign(query__value));
  }
  {
    Object descriptor__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, descriptor__value);
    CHECK(IsUndefined(descriptor__value) || IsZero(descriptor__value) || IsNonNullForeign(descriptor__value));
  }
  {
    Object deleter__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, deleter__value);
    CHECK(IsUndefined(deleter__value) || IsZero(deleter__value) || IsNonNullForeign(deleter__value));
  }
  {
    Object enumerator__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, enumerator__value);
    CHECK(IsUndefined(enumerator__value) || IsZero(enumerator__value) || IsNonNullForeign(enumerator__value));
  }
  {
    Object definer__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, definer__value);
    CHECK(IsUndefined(definer__value) || IsZero(definer__value) || IsNonNullForeign(definer__value));
  }
  {
    Object data__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, data__value);
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::AccessCheckInfoVerify(AccessCheckInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsAccessCheckInfo(o, isolate));
  {
    Object callback__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(IsUndefined(callback__value) || IsZero(callback__value) || IsForeign(callback__value));
  }
  {
    Object named_interceptor__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, named_interceptor__value);
    CHECK(IsUndefined(named_interceptor__value) || IsZero(named_interceptor__value) || IsInterceptorInfo(named_interceptor__value));
  }
  {
    Object indexed_interceptor__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, indexed_interceptor__value);
    CHECK(IsUndefined(indexed_interceptor__value) || IsZero(indexed_interceptor__value) || IsInterceptorInfo(indexed_interceptor__value));
  }
  {
    Object data__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::AccessorInfoVerify(AccessorInfo o, Isolate* isolate) {
  CHECK(IsAccessorInfo(o, isolate));
  {
    Object name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, name__value);
    CHECK(IsName(name__value));
  }
  {
    Object data__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::JSArgumentsObjectVerify(JSArgumentsObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSArgumentsObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::SloppyArgumentsElementsVerify(SloppyArgumentsElements o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsSloppyArgumentsElements(o, isolate));
  {
    Object context__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsContext(context__value));
  }
  {
    Object arguments__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, arguments__value);
    CHECK(IsFixedArray(arguments__value));
  }
  intptr_t mapped_entries__offset, mapped_entries__length;
  std::tie(std::ignore, mapped_entries__offset, mapped_entries__length) = TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries(o);
  CHECK_EQ(mapped_entries__offset, static_cast<int>(mapped_entries__offset));
  CHECK_EQ(mapped_entries__length, static_cast<int>(mapped_entries__length));
  for (int i = 0; i < static_cast<int>(mapped_entries__length); ++i) {
    Object mapped_entries__value = TaggedField<Object>::load(o, static_cast<int>(mapped_entries__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, mapped_entries__value);
    CHECK(IsSmi(mapped_entries__value) || IsTheHole(mapped_entries__value));
  }
}
void TorqueGeneratedClassVerifiers::AliasedArgumentsEntryVerify(AliasedArgumentsEntry o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsAliasedArgumentsEntry(o, isolate));
  {
    Object aliased_context_slot__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, aliased_context_slot__value);
    CHECK(IsSmi(aliased_context_slot__value));
  }
}
void TorqueGeneratedClassVerifiers::CallSiteInfoVerify(CallSiteInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsCallSiteInfo(o, isolate));
  {
    Object receiver_or_instance__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, receiver_or_instance__value);
    CHECK(IsJSReceiver(receiver_or_instance__value) || IsSmi(receiver_or_instance__value) || IsHeapNumber(receiver_or_instance__value) || IsBigInt(receiver_or_instance__value) || IsString(receiver_or_instance__value) || IsSymbol(receiver_or_instance__value) || IsBoolean(receiver_or_instance__value) || IsNull(receiver_or_instance__value) || IsUndefined(receiver_or_instance__value));
  }
  {
    Object function__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, function__value);
    CHECK(IsSmi(function__value) || IsJSFunction(function__value));
  }
  {
    Object code_object__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, code_object__value);
    CHECK(IsHeapObject(code_object__value));
  }
  {
    Object code_offset_or_source_position__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, code_offset_or_source_position__value);
    CHECK(IsSmi(code_offset_or_source_position__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object parameters__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, parameters__value);
    CHECK(IsFixedArray(parameters__value));
  }
}
void TorqueGeneratedClassVerifiers::CellVerify(Cell o, Isolate* isolate) {
  CHECK(IsCell(o, isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value__value);
  }
}
void TorqueGeneratedClassVerifiers::BytecodeArrayVerify(BytecodeArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsBytecodeArray(o, isolate));
  {
    Object constant_pool__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, constant_pool__value);
    CHECK(IsFixedArray(constant_pool__value));
  }
  {
    Object handler_table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, handler_table__value);
    CHECK(IsByteArray(handler_table__value));
  }
  {
    Object source_position_table__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, source_position_table__value);
    CHECK(IsUndefined(source_position_table__value) || IsException(source_position_table__value) || IsByteArray(source_position_table__value));
  }
}
void TorqueGeneratedClassVerifiers::ScopeInfoVerify(ScopeInfo o, Isolate* isolate) {
  CHECK(IsScopeInfo(o, isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object parameter_count__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, parameter_count__value);
    CHECK(IsSmi(parameter_count__value));
  }
  {
    Object context_local_count__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, context_local_count__value);
    CHECK(IsSmi(context_local_count__value));
  }
  intptr_t context_local_names__offset, context_local_names__length;
  std::tie(std::ignore, context_local_names__offset, context_local_names__length) = TqRuntimeFieldSliceScopeInfoContextLocalNames(o);
  CHECK_EQ(context_local_names__offset, static_cast<int>(context_local_names__offset));
  CHECK_EQ(context_local_names__length, static_cast<int>(context_local_names__length));
  for (int i = 0; i < static_cast<int>(context_local_names__length); ++i) {
    Object context_local_names__value = TaggedField<Object>::load(o, static_cast<int>(context_local_names__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, context_local_names__value);
    CHECK(IsString(context_local_names__value));
  }
  intptr_t context_local_names_hashtable__offset, context_local_names_hashtable__length;
  std::tie(std::ignore, context_local_names_hashtable__offset, context_local_names_hashtable__length) = TqRuntimeFieldSliceScopeInfoContextLocalNamesHashtable(o);
  CHECK_EQ(context_local_names_hashtable__offset, static_cast<int>(context_local_names_hashtable__offset));
  CHECK_EQ(context_local_names_hashtable__length, static_cast<int>(context_local_names_hashtable__length));
  for (int i = 0; i < static_cast<int>(context_local_names_hashtable__length); ++i) {
    Object context_local_names_hashtable__value = TaggedField<Object>::load(o, static_cast<int>(context_local_names_hashtable__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, context_local_names_hashtable__value);
    CHECK(IsNameToIndexHashTable(context_local_names_hashtable__value));
  }
  intptr_t context_local_infos__offset, context_local_infos__length;
  std::tie(std::ignore, context_local_infos__offset, context_local_infos__length) = TqRuntimeFieldSliceScopeInfoContextLocalInfos(o);
  CHECK_EQ(context_local_infos__offset, static_cast<int>(context_local_infos__offset));
  CHECK_EQ(context_local_infos__length, static_cast<int>(context_local_infos__length));
  for (int i = 0; i < static_cast<int>(context_local_infos__length); ++i) {
    Object context_local_infos__value = TaggedField<Object>::load(o, static_cast<int>(context_local_infos__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, context_local_infos__value);
    CHECK(IsSmi(context_local_infos__value));
  }
  intptr_t saved_class_variable_info__offset, saved_class_variable_info__length;
  std::tie(std::ignore, saved_class_variable_info__offset, saved_class_variable_info__length) = TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(o);
  CHECK_EQ(saved_class_variable_info__offset, static_cast<int>(saved_class_variable_info__offset));
  CHECK_EQ(saved_class_variable_info__length, static_cast<int>(saved_class_variable_info__length));
  for (int i = 0; i < static_cast<int>(saved_class_variable_info__length); ++i) {
    Object saved_class_variable_info__value = TaggedField<Object>::load(o, static_cast<int>(saved_class_variable_info__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, saved_class_variable_info__value);
    CHECK(IsSmi(saved_class_variable_info__value));
  }
  intptr_t function_variable_info__offset, function_variable_info__length;
  std::tie(std::ignore, function_variable_info__offset, function_variable_info__length) = TqRuntimeFieldSliceScopeInfoFunctionVariableInfo(o);
  CHECK_EQ(function_variable_info__offset, static_cast<int>(function_variable_info__offset));
  CHECK_EQ(function_variable_info__length, static_cast<int>(function_variable_info__length));
  for (int i = 0; i < static_cast<int>(function_variable_info__length); ++i) {
    Object name__value = TaggedField<Object>::load(o, static_cast<int>(function_variable_info__offset) + 0 + i * 16);
    Object::VerifyPointer(isolate, name__value);
    CHECK(IsString(name__value) || IsZero(name__value));
    Object context_or_stack_slot_index__value = TaggedField<Object>::load(o, static_cast<int>(function_variable_info__offset) + 8 + i * 16);
    Object::VerifyPointer(isolate, context_or_stack_slot_index__value);
    CHECK(IsSmi(context_or_stack_slot_index__value));
  }
  intptr_t inferred_function_name__offset, inferred_function_name__length;
  std::tie(std::ignore, inferred_function_name__offset, inferred_function_name__length) = TqRuntimeFieldSliceScopeInfoInferredFunctionName(o);
  CHECK_EQ(inferred_function_name__offset, static_cast<int>(inferred_function_name__offset));
  CHECK_EQ(inferred_function_name__length, static_cast<int>(inferred_function_name__length));
  for (int i = 0; i < static_cast<int>(inferred_function_name__length); ++i) {
    Object inferred_function_name__value = TaggedField<Object>::load(o, static_cast<int>(inferred_function_name__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, inferred_function_name__value);
    CHECK(IsString(inferred_function_name__value) || IsUndefined(inferred_function_name__value));
  }
  intptr_t position_info__offset, position_info__length;
  std::tie(std::ignore, position_info__offset, position_info__length) = TqRuntimeFieldSliceScopeInfoPositionInfo(o);
  CHECK_EQ(position_info__offset, static_cast<int>(position_info__offset));
  CHECK_EQ(position_info__length, static_cast<int>(position_info__length));
  for (int i = 0; i < static_cast<int>(position_info__length); ++i) {
    Object start__value = TaggedField<Object>::load(o, static_cast<int>(position_info__offset) + 0 + i * 16);
    Object::VerifyPointer(isolate, start__value);
    CHECK(IsSmi(start__value));
    Object end__value = TaggedField<Object>::load(o, static_cast<int>(position_info__offset) + 8 + i * 16);
    Object::VerifyPointer(isolate, end__value);
    CHECK(IsSmi(end__value));
  }
  intptr_t outer_scope_info__offset, outer_scope_info__length;
  std::tie(std::ignore, outer_scope_info__offset, outer_scope_info__length) = TqRuntimeFieldSliceScopeInfoOuterScopeInfo(o);
  CHECK_EQ(outer_scope_info__offset, static_cast<int>(outer_scope_info__offset));
  CHECK_EQ(outer_scope_info__length, static_cast<int>(outer_scope_info__length));
  for (int i = 0; i < static_cast<int>(outer_scope_info__length); ++i) {
    Object outer_scope_info__value = TaggedField<Object>::load(o, static_cast<int>(outer_scope_info__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, outer_scope_info__value);
    CHECK(IsTheHole(outer_scope_info__value) || IsScopeInfo(outer_scope_info__value));
  }
  intptr_t locals_block_list__offset, locals_block_list__length;
  std::tie(std::ignore, locals_block_list__offset, locals_block_list__length) = TqRuntimeFieldSliceScopeInfoLocalsBlockList(o);
  CHECK_EQ(locals_block_list__offset, static_cast<int>(locals_block_list__offset));
  CHECK_EQ(locals_block_list__length, static_cast<int>(locals_block_list__length));
  for (int i = 0; i < static_cast<int>(locals_block_list__length); ++i) {
    Object locals_block_list__value = TaggedField<Object>::load(o, static_cast<int>(locals_block_list__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, locals_block_list__value);
    CHECK(IsHashTable(locals_block_list__value));
  }
  intptr_t module_info__offset, module_info__length;
  std::tie(std::ignore, module_info__offset, module_info__length) = TqRuntimeFieldSliceScopeInfoModuleInfo(o);
  CHECK_EQ(module_info__offset, static_cast<int>(module_info__offset));
  CHECK_EQ(module_info__length, static_cast<int>(module_info__length));
  for (int i = 0; i < static_cast<int>(module_info__length); ++i) {
    Object module_info__value = TaggedField<Object>::load(o, static_cast<int>(module_info__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, module_info__value);
    CHECK(IsSourceTextModuleInfo(module_info__value));
  }
  intptr_t module_variable_count__offset, module_variable_count__length;
  std::tie(std::ignore, module_variable_count__offset, module_variable_count__length) = TqRuntimeFieldSliceScopeInfoModuleVariableCount(o);
  CHECK_EQ(module_variable_count__offset, static_cast<int>(module_variable_count__offset));
  CHECK_EQ(module_variable_count__length, static_cast<int>(module_variable_count__length));
  for (int i = 0; i < static_cast<int>(module_variable_count__length); ++i) {
    Object module_variable_count__value = TaggedField<Object>::load(o, static_cast<int>(module_variable_count__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, module_variable_count__value);
    CHECK(IsSmi(module_variable_count__value));
  }
  intptr_t module_variables__offset, module_variables__length;
  std::tie(std::ignore, module_variables__offset, module_variables__length) = TqRuntimeFieldSliceScopeInfoModuleVariables(o);
  CHECK_EQ(module_variables__offset, static_cast<int>(module_variables__offset));
  CHECK_EQ(module_variables__length, static_cast<int>(module_variables__length));
  for (int i = 0; i < static_cast<int>(module_variables__length); ++i) {
    Object name__value = TaggedField<Object>::load(o, static_cast<int>(module_variables__offset) + 0 + i * 24);
    Object::VerifyPointer(isolate, name__value);
    CHECK(IsString(name__value));
    Object index__value = TaggedField<Object>::load(o, static_cast<int>(module_variables__offset) + 8 + i * 24);
    Object::VerifyPointer(isolate, index__value);
    CHECK(IsSmi(index__value));
    Object properties__value = TaggedField<Object>::load(o, static_cast<int>(module_variables__offset) + 16 + i * 24);
    Object::VerifyPointer(isolate, properties__value);
    CHECK(IsSmi(properties__value));
  }
}
void TorqueGeneratedClassVerifiers::FixedDoubleArrayVerify(FixedDoubleArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsFixedDoubleArray(o, isolate));
}
void TorqueGeneratedClassVerifiers::RegExpMatchInfoVerify(RegExpMatchInfo o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(IsRegExpMatchInfo(o, isolate));
}
void TorqueGeneratedClassVerifiers::BreakPointVerify(BreakPoint o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsBreakPoint(o, isolate));
  {
    Object id__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, id__value);
    CHECK(IsSmi(id__value));
  }
  {
    Object condition__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, condition__value);
    CHECK(IsString(condition__value));
  }
}
void TorqueGeneratedClassVerifiers::BreakPointInfoVerify(BreakPointInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsBreakPointInfo(o, isolate));
  {
    Object source_position__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, source_position__value);
    CHECK(IsSmi(source_position__value));
  }
  {
    Object break_points__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, break_points__value);
    CHECK(IsUndefined(break_points__value) || IsFixedArray(break_points__value) || IsBreakPoint(break_points__value));
  }
}
void TorqueGeneratedClassVerifiers::DebugInfoVerify(DebugInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsDebugInfo(o, isolate));
  {
    Object shared__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, shared__value);
    CHECK(IsSharedFunctionInfo(shared__value));
  }
  {
    Object debugger_hints__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, debugger_hints__value);
    CHECK(IsSmi(debugger_hints__value));
  }
  {
    Object original_bytecode_array__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, original_bytecode_array__value);
    CHECK(IsUndefined(original_bytecode_array__value) || IsBytecodeArray(original_bytecode_array__value));
  }
  {
    Object debug_bytecode_array__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, debug_bytecode_array__value);
    CHECK(IsUndefined(debug_bytecode_array__value) || IsBytecodeArray(debug_bytecode_array__value));
  }
  {
    Object break_points__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, break_points__value);
    CHECK(IsFixedArray(break_points__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object coverage_info__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, coverage_info__value);
    CHECK(IsUndefined(coverage_info__value) || IsCoverageInfo(coverage_info__value));
  }
}
void TorqueGeneratedClassVerifiers::CoverageInfoVerify(CoverageInfo o, Isolate* isolate) {
  CHECK(IsCoverageInfo(o, isolate));
  intptr_t slots__offset, slots__length;
  std::tie(std::ignore, slots__offset, slots__length) = TqRuntimeFieldSliceCoverageInfoSlots(o);
  CHECK_EQ(slots__offset, static_cast<int>(slots__offset));
  CHECK_EQ(slots__length, static_cast<int>(slots__length));
  for (int i = 0; i < static_cast<int>(slots__length); ++i) {
  }
}
void TorqueGeneratedClassVerifiers::StackFrameInfoVerify(StackFrameInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsStackFrameInfo(o, isolate));
  {
    Object shared_or_script__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, shared_or_script__value);
    CHECK(IsScript(shared_or_script__value) || IsSharedFunctionInfo(shared_or_script__value));
  }
  {
    Object function_name__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, function_name__value);
    CHECK(IsString(function_name__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::ErrorStackDataVerify(ErrorStackData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsErrorStackData(o, isolate));
  {
    Object call_site_infos_or_formatted_stack__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, call_site_infos_or_formatted_stack__value);
    CHECK(IsJSReceiver(call_site_infos_or_formatted_stack__value) || IsSmi(call_site_infos_or_formatted_stack__value) || IsHeapNumber(call_site_infos_or_formatted_stack__value) || IsBigInt(call_site_infos_or_formatted_stack__value) || IsString(call_site_infos_or_formatted_stack__value) || IsSymbol(call_site_infos_or_formatted_stack__value) || IsBoolean(call_site_infos_or_formatted_stack__value) || IsNull(call_site_infos_or_formatted_stack__value) || IsUndefined(call_site_infos_or_formatted_stack__value) || IsFixedArray(call_site_infos_or_formatted_stack__value));
  }
  {
    Object limit_or_stack_frame_infos__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, limit_or_stack_frame_infos__value);
    CHECK(IsSmi(limit_or_stack_frame_infos__value) || IsFixedArray(limit_or_stack_frame_infos__value));
  }
}
void TorqueGeneratedClassVerifiers::PromiseOnStackVerify(PromiseOnStack o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsPromiseOnStack(o, isolate));
  {
    Object prev__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, prev__value);
    CHECK(IsZero(prev__value) || IsPromiseOnStack(prev__value));
  }
  {
    MaybeObject promise__value = TaggedField<MaybeObject>::load(o, 16);
    MaybeObject::VerifyMaybeObjectPointer(isolate, promise__value);
    CHECK(promise__value.IsCleared() || (promise__value.IsWeak() && IsJSObject(promise__value.GetHeapObjectOrSmi())));
  }
}
void TorqueGeneratedClassVerifiers::EnumCacheVerify(EnumCache o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsEnumCache(o, isolate));
  {
    Object keys__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, keys__value);
    CHECK(IsFixedArray(keys__value));
  }
  {
    Object indices__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, indices__value);
    CHECK(IsFixedArray(indices__value));
  }
}
void TorqueGeneratedClassVerifiers::AccessorPairVerify(AccessorPair o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsAccessorPair(o, isolate));
  {
    Object getter__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, getter__value);
  }
  {
    Object setter__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, setter__value);
  }
}
void TorqueGeneratedClassVerifiers::ClassPositionsVerify(ClassPositions o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsClassPositions(o, isolate));
  {
    Object start__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, start__value);
    CHECK(IsSmi(start__value));
  }
  {
    Object end__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, end__value);
    CHECK(IsSmi(end__value));
  }
}
void TorqueGeneratedClassVerifiers::DescriptorArrayVerify(DescriptorArray o, Isolate* isolate) {
  CHECK(IsDescriptorArray(o, isolate));
  {
    Object enum_cache__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, enum_cache__value);
    CHECK(IsEnumCache(enum_cache__value));
  }
  intptr_t descriptors__offset, descriptors__length;
  std::tie(std::ignore, descriptors__offset, descriptors__length) = TqRuntimeFieldSliceDescriptorArrayDescriptors(o);
  CHECK_EQ(descriptors__offset, static_cast<int>(descriptors__offset));
  CHECK_EQ(descriptors__length, static_cast<int>(descriptors__length));
  for (int i = 0; i < static_cast<int>(descriptors__length); ++i) {
    Object key__value = TaggedField<Object>::load(o, static_cast<int>(descriptors__offset) + 0 + i * 24);
    Object::VerifyPointer(isolate, key__value);
    CHECK(IsName(key__value) || IsUndefined(key__value));
    Object details__value = TaggedField<Object>::load(o, static_cast<int>(descriptors__offset) + 8 + i * 24);
    Object::VerifyPointer(isolate, details__value);
    CHECK(IsSmi(details__value) || IsUndefined(details__value));
    MaybeObject value__value = TaggedField<MaybeObject>::load(o, static_cast<int>(descriptors__offset) + 16 + i * 24);
    MaybeObject::VerifyMaybeObjectPointer(isolate, value__value);
    CHECK(value__value.IsCleared() || (!value__value.IsWeak() && IsJSReceiver(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsSmi(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsHeapNumber(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsBigInt(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsString(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsSymbol(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsBoolean(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsNull(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsUndefined(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsAccessorInfo(value__value.GetHeapObjectOrSmi())) || (value__value.IsWeak() && IsMap(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsAccessorPair(value__value.GetHeapObjectOrSmi())) || (!value__value.IsWeak() && IsClassPositions(value__value.GetHeapObjectOrSmi())));
  }
}
void TorqueGeneratedClassVerifiers::StrongDescriptorArrayVerify(StrongDescriptorArray o, Isolate* isolate) {
  o.DescriptorArrayVerify(isolate);
  CHECK(IsStrongDescriptorArray(o, isolate));
}
void TorqueGeneratedClassVerifiers::EmbedderDataArrayVerify(EmbedderDataArray o, Isolate* isolate) {
  CHECK(IsEmbedderDataArray(o, isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value));
  }
}
void TorqueGeneratedClassVerifiers::FeedbackCellVerify(FeedbackCell o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsFeedbackCell(o, isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value__value);
    CHECK(IsUndefined(value__value) || IsFixedArray(value__value) || IsFeedbackVector(value__value));
  }
}
void TorqueGeneratedClassVerifiers::FeedbackVectorVerify(FeedbackVector o, Isolate* isolate) {
  CHECK(IsFeedbackVector(o, isolate));
  {
    Object shared_function_info__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(IsSharedFunctionInfo(shared_function_info__value));
  }
  {
    Object closure_feedback_cell_array__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, closure_feedback_cell_array__value);
    CHECK(IsClosureFeedbackCellArray(closure_feedback_cell_array__value));
  }
  {
    Object parent_feedback_cell__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, parent_feedback_cell__value);
    CHECK(IsFeedbackCell(parent_feedback_cell__value));
  }
  {
    MaybeObject maybe_optimized_code__value = TaggedField<MaybeObject>::load(o, 48);
    MaybeObject::VerifyMaybeObjectPointer(isolate, maybe_optimized_code__value);
    CHECK(maybe_optimized_code__value.IsCleared() || (maybe_optimized_code__value.IsWeak() && IsCode(maybe_optimized_code__value.GetHeapObjectOrSmi())));
  }
  intptr_t raw_feedback_slots__offset, raw_feedback_slots__length;
  std::tie(std::ignore, raw_feedback_slots__offset, raw_feedback_slots__length) = TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots(o);
  CHECK_EQ(raw_feedback_slots__offset, static_cast<int>(raw_feedback_slots__offset));
  CHECK_EQ(raw_feedback_slots__length, static_cast<int>(raw_feedback_slots__length));
  for (int i = 0; i < static_cast<int>(raw_feedback_slots__length); ++i) {
    MaybeObject raw_feedback_slots__value = TaggedField<MaybeObject>::load(o, static_cast<int>(raw_feedback_slots__offset) + i * kTaggedSize);
    MaybeObject::VerifyMaybeObjectPointer(isolate, raw_feedback_slots__value);
    CHECK(raw_feedback_slots__value.IsCleared() || (!raw_feedback_slots__value.IsWeak() && IsHeapObject(raw_feedback_slots__value.GetHeapObjectOrSmi())) || (!raw_feedback_slots__value.IsWeak() && IsSmi(raw_feedback_slots__value.GetHeapObjectOrSmi())) || raw_feedback_slots__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::ByteArrayVerify(ByteArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsByteArray(o, isolate));
}
void TorqueGeneratedClassVerifiers::ExternalPointerArrayVerify(ExternalPointerArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsExternalPointerArray(o, isolate));
}
void TorqueGeneratedClassVerifiers::ArrayListVerify(ArrayList o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(IsArrayList(o, isolate));
}
void TorqueGeneratedClassVerifiers::TemplateListVerify(TemplateList o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(IsTemplateList(o, isolate));
}
void TorqueGeneratedClassVerifiers::WeakArrayListVerify(WeakArrayList o, Isolate* isolate) {
  CHECK(IsWeakArrayList(o, isolate));
  {
    Object capacity__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, capacity__value);
    CHECK(IsSmi(capacity__value));
  }
  {
    Object length__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value));
  }
  intptr_t objects__offset, objects__length;
  std::tie(std::ignore, objects__offset, objects__length) = TqRuntimeFieldSliceWeakArrayListObjects(o);
  CHECK_EQ(objects__offset, static_cast<int>(objects__offset));
  CHECK_EQ(objects__length, static_cast<int>(objects__length));
  for (int i = 0; i < static_cast<int>(objects__length); ++i) {
    MaybeObject objects__value = TaggedField<MaybeObject>::load(o, static_cast<int>(objects__offset) + i * kTaggedSize);
    MaybeObject::VerifyMaybeObjectPointer(isolate, objects__value);
    CHECK(objects__value.IsCleared() || (!objects__value.IsWeak() && IsHeapObject(objects__value.GetHeapObjectOrSmi())) || (!objects__value.IsWeak() && IsSmi(objects__value.GetHeapObjectOrSmi())) || objects__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::FreeSpaceVerify(FreeSpace o, Isolate* isolate) {
  CHECK(IsFreeSpace(o, isolate));
  {
    Object size__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, size__value);
    CHECK(IsSmi(size__value));
  }
}
void TorqueGeneratedClassVerifiers::JSArrayBufferVerify(JSArrayBuffer o, Isolate* isolate) {
  o.JSObjectWithEmbedderSlotsVerify(isolate);
  CHECK(IsJSArrayBuffer(o, isolate));
  {
    Object detach_key__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, detach_key__value);
  }
}
void TorqueGeneratedClassVerifiers::JSDataViewOrRabGsabDataViewVerify(JSDataViewOrRabGsabDataView o, Isolate* isolate) {
  o.JSArrayBufferViewVerify(isolate);
  CHECK(IsJSDataViewOrRabGsabDataView(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSDataViewVerify(JSDataView o, Isolate* isolate) {
  o.JSDataViewOrRabGsabDataViewVerify(isolate);
  CHECK(IsJSDataView(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSRabGsabDataViewVerify(JSRabGsabDataView o, Isolate* isolate) {
  o.JSDataViewOrRabGsabDataViewVerify(isolate);
  CHECK(IsJSRabGsabDataView(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSArrayIteratorVerify(JSArrayIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSArrayIterator(o, isolate));
  {
    Object iterated_object__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, iterated_object__value);
    CHECK(IsJSReceiver(iterated_object__value));
  }
  {
    Object next_index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, next_index__value);
    CHECK(IsSmi(next_index__value) || IsHeapNumber(next_index__value));
  }
  {
    Object kind__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, kind__value);
    CHECK(IsSmi(kind__value));
  }
}
void TorqueGeneratedClassVerifiers::JSArrayVerify(JSArray o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSArray(o, isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value) || IsHeapNumber(length__value));
  }
}
void TorqueGeneratedClassVerifiers::TemplateLiteralObjectVerify(TemplateLiteralObject o, Isolate* isolate) {
  o.JSArrayVerify(isolate);
  CHECK(IsTemplateLiteralObject(o, isolate));
  {
    Object raw__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, raw__value);
    CHECK(IsJSArray(raw__value));
  }
  {
    Object function_literal_id__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, function_literal_id__value);
    CHECK(IsSmi(function_literal_id__value));
  }
  {
    Object slot_id__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, slot_id__value);
    CHECK(IsSmi(slot_id__value));
  }
}
void TorqueGeneratedClassVerifiers::AlwaysSharedSpaceJSObjectVerify(AlwaysSharedSpaceJSObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsAlwaysSharedSpaceJSObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSSynchronizationPrimitiveVerify(JSSynchronizationPrimitive o, Isolate* isolate) {
  o.AlwaysSharedSpaceJSObjectVerify(isolate);
  CHECK(IsJSSynchronizationPrimitive(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSAtomicsMutexVerify(JSAtomicsMutex o, Isolate* isolate) {
  o.JSSynchronizationPrimitiveVerify(isolate);
  CHECK(IsJSAtomicsMutex(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSAtomicsConditionVerify(JSAtomicsCondition o, Isolate* isolate) {
  o.JSSynchronizationPrimitiveVerify(isolate);
  CHECK(IsJSAtomicsCondition(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSCollectionIteratorVerify(JSCollectionIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSCollectionIterator(o, isolate));
  {
    Object table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, table__value);
  }
  {
    Object index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, index__value);
  }
}
void TorqueGeneratedClassVerifiers::JSCollectionVerify(JSCollection o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSCollection(o, isolate));
  {
    Object table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, table__value);
  }
}
void TorqueGeneratedClassVerifiers::JSSetVerify(JSSet o, Isolate* isolate) {
  o.JSCollectionVerify(isolate);
  CHECK(IsJSSet(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSMapVerify(JSMap o, Isolate* isolate) {
  o.JSCollectionVerify(isolate);
  CHECK(IsJSMap(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSWeakCollectionVerify(JSWeakCollection o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSWeakCollection(o, isolate));
  {
    Object table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, table__value);
  }
}
void TorqueGeneratedClassVerifiers::JSWeakSetVerify(JSWeakSet o, Isolate* isolate) {
  o.JSWeakCollectionVerify(isolate);
  CHECK(IsJSWeakSet(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSWeakMapVerify(JSWeakMap o, Isolate* isolate) {
  o.JSWeakCollectionVerify(isolate);
  CHECK(IsJSWeakMap(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSGeneratorObjectVerify(JSGeneratorObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSGeneratorObject(o, isolate));
  {
    Object function__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, function__value);
    CHECK(IsJSFunction(function__value));
  }
  {
    Object context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsContext(context__value));
  }
  {
    Object receiver__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, receiver__value);
    CHECK(IsJSReceiver(receiver__value) || IsSmi(receiver__value) || IsHeapNumber(receiver__value) || IsBigInt(receiver__value) || IsString(receiver__value) || IsSymbol(receiver__value) || IsBoolean(receiver__value) || IsNull(receiver__value) || IsUndefined(receiver__value));
  }
  {
    Object input_or_debug_pos__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, input_or_debug_pos__value);
  }
  {
    Object resume_mode__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, resume_mode__value);
    CHECK(IsSmi(resume_mode__value));
  }
  {
    Object continuation__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, continuation__value);
    CHECK(IsSmi(continuation__value));
  }
  {
    Object parameters_and_registers__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, parameters_and_registers__value);
    CHECK(IsFixedArray(parameters_and_registers__value));
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncFunctionObjectVerify(JSAsyncFunctionObject o, Isolate* isolate) {
  o.JSGeneratorObjectVerify(isolate);
  CHECK(IsJSAsyncFunctionObject(o, isolate));
  {
    Object promise__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(IsJSPromise(promise__value));
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject o, Isolate* isolate) {
  o.JSGeneratorObjectVerify(isolate);
  CHECK(IsJSAsyncGeneratorObject(o, isolate));
  {
    Object queue__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, queue__value);
    CHECK(IsHeapObject(queue__value));
  }
  {
    Object is_awaiting__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, is_awaiting__value);
    CHECK(IsSmi(is_awaiting__value));
  }
}
void TorqueGeneratedClassVerifiers::AsyncGeneratorRequestVerify(AsyncGeneratorRequest o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsAsyncGeneratorRequest(o, isolate));
  {
    Object next__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(IsUndefined(next__value) || IsAsyncGeneratorRequest(next__value));
  }
  {
    Object resume_mode__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, resume_mode__value);
    CHECK(IsSmi(resume_mode__value));
  }
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
  }
  {
    Object promise__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(IsJSPromise(promise__value));
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorHelperVerify(JSIteratorHelper o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSIteratorHelper(o, isolate));
  {
    Object object__value = TaggedField<Object>::load(o, 24 + 0);
    Object::VerifyPointer(isolate, object__value);
    CHECK(IsJSReceiver(object__value));
    Object next__value = TaggedField<Object>::load(o, 24 + 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(IsJSReceiver(next__value) || IsSmi(next__value) || IsHeapNumber(next__value) || IsBigInt(next__value) || IsString(next__value) || IsSymbol(next__value) || IsBoolean(next__value) || IsNull(next__value) || IsUndefined(next__value));
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorMapHelperVerify(JSIteratorMapHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(IsJSIteratorMapHelper(o, isolate));
  {
    Object mapper__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, mapper__value);
    CHECK(IsCallableApiObject(mapper__value) || IsCallableJSProxy(mapper__value) || IsJSFunction(mapper__value) || IsJSBoundFunction(mapper__value) || IsJSWrappedFunction(mapper__value));
  }
  {
    Object counter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, counter__value);
    CHECK(IsSmi(counter__value) || IsHeapNumber(counter__value));
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorFilterHelperVerify(JSIteratorFilterHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(IsJSIteratorFilterHelper(o, isolate));
  {
    Object predicate__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, predicate__value);
    CHECK(IsCallableApiObject(predicate__value) || IsCallableJSProxy(predicate__value) || IsJSFunction(predicate__value) || IsJSBoundFunction(predicate__value) || IsJSWrappedFunction(predicate__value));
  }
  {
    Object counter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, counter__value);
    CHECK(IsSmi(counter__value) || IsHeapNumber(counter__value));
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorTakeHelperVerify(JSIteratorTakeHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(IsJSIteratorTakeHelper(o, isolate));
  {
    Object remaining__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, remaining__value);
    CHECK(IsSmi(remaining__value) || IsHeapNumber(remaining__value));
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorDropHelperVerify(JSIteratorDropHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(IsJSIteratorDropHelper(o, isolate));
  {
    Object remaining__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, remaining__value);
    CHECK(IsSmi(remaining__value) || IsHeapNumber(remaining__value));
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorFlatMapHelperVerify(JSIteratorFlatMapHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(IsJSIteratorFlatMapHelper(o, isolate));
  {
    Object mapper__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, mapper__value);
    CHECK(IsCallableApiObject(mapper__value) || IsCallableJSProxy(mapper__value) || IsJSFunction(mapper__value) || IsJSBoundFunction(mapper__value) || IsJSWrappedFunction(mapper__value));
  }
  {
    Object counter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, counter__value);
    CHECK(IsSmi(counter__value) || IsHeapNumber(counter__value));
  }
  {
    Object object__value = TaggedField<Object>::load(o, 56 + 0);
    Object::VerifyPointer(isolate, object__value);
    CHECK(IsJSReceiver(object__value));
    Object next__value = TaggedField<Object>::load(o, 56 + 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(IsJSReceiver(next__value) || IsSmi(next__value) || IsHeapNumber(next__value) || IsBigInt(next__value) || IsString(next__value) || IsSymbol(next__value) || IsBoolean(next__value) || IsNull(next__value) || IsUndefined(next__value));
  }
  {
    Object innerAlive__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, innerAlive__value);
    CHECK(IsBoolean(innerAlive__value));
  }
}
void TorqueGeneratedClassVerifiers::JSExternalObjectVerify(JSExternalObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSExternalObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(JSGlobalProxy o, Isolate* isolate) {
  o.JSSpecialObjectVerify(isolate);
  CHECK(IsJSGlobalProxy(o, isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
  }
}
void TorqueGeneratedClassVerifiers::JSGlobalObjectVerify(JSGlobalObject o, Isolate* isolate) {
  o.JSSpecialObjectVerify(isolate);
  CHECK(IsJSGlobalObject(o, isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(IsNativeContext(native_context__value));
  }
  {
    Object global_proxy__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, global_proxy__value);
    CHECK(IsJSGlobalProxy(global_proxy__value));
  }
}
void TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(JSPrimitiveWrapper o, Isolate* isolate) {
  o.JSCustomElementsObjectVerify(isolate);
  CHECK(IsJSPrimitiveWrapper(o, isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
    CHECK(IsJSReceiver(value__value) || IsSmi(value__value) || IsHeapNumber(value__value) || IsBigInt(value__value) || IsString(value__value) || IsSymbol(value__value) || IsBoolean(value__value) || IsNull(value__value) || IsUndefined(value__value));
  }
}
void TorqueGeneratedClassVerifiers::JSMessageObjectVerify(JSMessageObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSMessageObject(o, isolate));
  {
    Object message_type__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, message_type__value);
    CHECK(IsSmi(message_type__value));
  }
  {
    Object argument__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, argument__value);
  }
  {
    Object script__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, script__value);
    CHECK(IsScript(script__value));
  }
  {
    Object stack_frames__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, stack_frames__value);
  }
  {
    Object shared_info__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, shared_info__value);
    CHECK(IsSmi(shared_info__value) || IsSharedFunctionInfo(shared_info__value));
  }
  {
    Object bytecode_offset__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, bytecode_offset__value);
    CHECK(IsSmi(bytecode_offset__value));
  }
  {
    Object start_position__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, start_position__value);
    CHECK(IsSmi(start_position__value));
  }
  {
    Object end_position__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, end_position__value);
    CHECK(IsSmi(end_position__value));
  }
  {
    Object error_level__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, error_level__value);
    CHECK(IsSmi(error_level__value));
  }
}
void TorqueGeneratedClassVerifiers::JSDateVerify(JSDate o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSDate(o, isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
    CHECK(IsSmi(value__value) || IsHeapNumber(value__value) || IsUndefined(value__value));
  }
  {
    Object year__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, year__value);
    CHECK(IsSmi(year__value) || IsUndefined(year__value) || IsNaN(year__value));
  }
  {
    Object month__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, month__value);
    CHECK(IsSmi(month__value) || IsUndefined(month__value) || IsNaN(month__value));
  }
  {
    Object day__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, day__value);
    CHECK(IsSmi(day__value) || IsUndefined(day__value) || IsNaN(day__value));
  }
  {
    Object weekday__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, weekday__value);
    CHECK(IsSmi(weekday__value) || IsUndefined(weekday__value) || IsNaN(weekday__value));
  }
  {
    Object hour__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, hour__value);
    CHECK(IsSmi(hour__value) || IsUndefined(hour__value) || IsNaN(hour__value));
  }
  {
    Object min__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, min__value);
    CHECK(IsSmi(min__value) || IsUndefined(min__value) || IsNaN(min__value));
  }
  {
    Object sec__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, sec__value);
    CHECK(IsSmi(sec__value) || IsUndefined(sec__value) || IsNaN(sec__value));
  }
  {
    Object cache_stamp__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, cache_stamp__value);
    CHECK(IsSmi(cache_stamp__value) || IsUndefined(cache_stamp__value) || IsNaN(cache_stamp__value));
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSAsyncFromSyncIterator(o, isolate));
  {
    Object sync_iterator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, sync_iterator__value);
    CHECK(IsJSReceiver(sync_iterator__value));
  }
  {
    Object next__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, next__value);
  }
}
void TorqueGeneratedClassVerifiers::JSStringIteratorVerify(JSStringIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSStringIterator(o, isolate));
  {
    Object string__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, string__value);
    CHECK(IsString(string__value));
  }
  {
    Object index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, index__value);
    CHECK(IsSmi(index__value));
  }
}
void TorqueGeneratedClassVerifiers::JSValidIteratorWrapperVerify(JSValidIteratorWrapper o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSValidIteratorWrapper(o, isolate));
  {
    Object object__value = TaggedField<Object>::load(o, 24 + 0);
    Object::VerifyPointer(isolate, object__value);
    CHECK(IsJSReceiver(object__value));
    Object next__value = TaggedField<Object>::load(o, 24 + 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(IsJSReceiver(next__value) || IsSmi(next__value) || IsHeapNumber(next__value) || IsBigInt(next__value) || IsString(next__value) || IsSymbol(next__value) || IsBoolean(next__value) || IsNull(next__value) || IsUndefined(next__value));
  }
}
void TorqueGeneratedClassVerifiers::JSRawJsonVerify(JSRawJson o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSRawJson(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSRegExpStringIteratorVerify(JSRegExpStringIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSRegExpStringIterator(o, isolate));
  {
    Object iterating_reg_exp__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, iterating_reg_exp__value);
    CHECK(IsJSReceiver(iterating_reg_exp__value));
  }
  {
    Object iterated_string__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, iterated_string__value);
    CHECK(IsString(iterated_string__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSRegExpVerify(JSRegExp o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSRegExp(o, isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, data__value);
    CHECK(IsUndefined(data__value) || IsFixedArray(data__value));
  }
  {
    Object source__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, source__value);
    CHECK(IsString(source__value) || IsUndefined(source__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsUndefined(flags__value) || IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSShadowRealmVerify(JSShadowRealm o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSShadowRealm(o, isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(IsNativeContext(native_context__value));
  }
}
void TorqueGeneratedClassVerifiers::JSSharedArrayVerify(JSSharedArray o, Isolate* isolate) {
  o.AlwaysSharedSpaceJSObjectVerify(isolate);
  CHECK(IsJSSharedArray(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSSharedStructVerify(JSSharedStruct o, Isolate* isolate) {
  o.AlwaysSharedSpaceJSObjectVerify(isolate);
  CHECK(IsJSSharedStruct(o, isolate));
}
void TorqueGeneratedClassVerifiers::JSTemporalCalendarVerify(JSTemporalCalendar o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalCalendar(o, isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalDurationVerify(JSTemporalDuration o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalDuration(o, isolate));
  {
    Object years__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, years__value);
    CHECK(IsSmi(years__value) || IsHeapNumber(years__value));
  }
  {
    Object months__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, months__value);
    CHECK(IsSmi(months__value) || IsHeapNumber(months__value));
  }
  {
    Object weeks__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, weeks__value);
    CHECK(IsSmi(weeks__value) || IsHeapNumber(weeks__value));
  }
  {
    Object days__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, days__value);
    CHECK(IsSmi(days__value) || IsHeapNumber(days__value));
  }
  {
    Object hours__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, hours__value);
    CHECK(IsSmi(hours__value) || IsHeapNumber(hours__value));
  }
  {
    Object minutes__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, minutes__value);
    CHECK(IsSmi(minutes__value) || IsHeapNumber(minutes__value));
  }
  {
    Object seconds__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, seconds__value);
    CHECK(IsSmi(seconds__value) || IsHeapNumber(seconds__value));
  }
  {
    Object milliseconds__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, milliseconds__value);
    CHECK(IsSmi(milliseconds__value) || IsHeapNumber(milliseconds__value));
  }
  {
    Object microseconds__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, microseconds__value);
    CHECK(IsSmi(microseconds__value) || IsHeapNumber(microseconds__value));
  }
  {
    Object nanoseconds__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, nanoseconds__value);
    CHECK(IsSmi(nanoseconds__value) || IsHeapNumber(nanoseconds__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalInstantVerify(JSTemporalInstant o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalInstant(o, isolate));
  {
    Object nanoseconds__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, nanoseconds__value);
    CHECK(IsBigInt(nanoseconds__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainDateTimeVerify(JSTemporalPlainDateTime o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalPlainDateTime(o, isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(IsSmi(year_month_day__value));
  }
  {
    Object hour_minute_second__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, hour_minute_second__value);
    CHECK(IsSmi(hour_minute_second__value));
  }
  {
    Object second_parts__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, second_parts__value);
    CHECK(IsSmi(second_parts__value));
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(IsJSReceiver(calendar__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainDateVerify(JSTemporalPlainDate o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalPlainDate(o, isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(IsSmi(year_month_day__value));
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(IsJSReceiver(calendar__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainMonthDayVerify(JSTemporalPlainMonthDay o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalPlainMonthDay(o, isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(IsSmi(year_month_day__value));
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(IsJSReceiver(calendar__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainTimeVerify(JSTemporalPlainTime o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalPlainTime(o, isolate));
  {
    Object hour_minute_second__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, hour_minute_second__value);
    CHECK(IsSmi(hour_minute_second__value));
  }
  {
    Object second_parts__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, second_parts__value);
    CHECK(IsSmi(second_parts__value));
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(IsJSReceiver(calendar__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainYearMonthVerify(JSTemporalPlainYearMonth o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalPlainYearMonth(o, isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(IsSmi(year_month_day__value));
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(IsJSReceiver(calendar__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalTimeZoneVerify(JSTemporalTimeZone o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalTimeZone(o, isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object details__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, details__value);
    CHECK(IsSmi(details__value));
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalZonedDateTimeVerify(JSTemporalZonedDateTime o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSTemporalZonedDateTime(o, isolate));
  {
    Object nanoseconds__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, nanoseconds__value);
    CHECK(IsBigInt(nanoseconds__value));
  }
  {
    Object time_zone__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, time_zone__value);
    CHECK(IsJSReceiver(time_zone__value));
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(IsJSReceiver(calendar__value));
  }
}
void TorqueGeneratedClassVerifiers::JSFinalizationRegistryVerify(JSFinalizationRegistry o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSFinalizationRegistry(o, isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(IsNativeContext(native_context__value));
  }
  {
    Object cleanup__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, cleanup__value);
    CHECK(IsCallableApiObject(cleanup__value) || IsCallableJSProxy(cleanup__value) || IsJSFunction(cleanup__value) || IsJSBoundFunction(cleanup__value) || IsJSWrappedFunction(cleanup__value));
  }
  {
    Object active_cells__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, active_cells__value);
    CHECK(IsUndefined(active_cells__value) || IsWeakCell(active_cells__value));
  }
  {
    Object cleared_cells__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, cleared_cells__value);
    CHECK(IsUndefined(cleared_cells__value) || IsWeakCell(cleared_cells__value));
  }
  {
    Object key_map__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, key_map__value);
  }
  {
    Object next_dirty__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, next_dirty__value);
    CHECK(IsUndefined(next_dirty__value) || IsJSFinalizationRegistry(next_dirty__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSWeakRefVerify(JSWeakRef o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSWeakRef(o, isolate));
  {
    Object target__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, target__value);
    CHECK(IsJSReceiver(target__value) || IsSymbol(target__value) || IsUndefined(target__value));
  }
}
void TorqueGeneratedClassVerifiers::ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsArrayBoilerplateDescription(o, isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object constant_elements__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, constant_elements__value);
    CHECK(IsFixedArrayBase(constant_elements__value));
  }
}
void TorqueGeneratedClassVerifiers::RegExpBoilerplateDescriptionVerify(RegExpBoilerplateDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsRegExpBoilerplateDescription(o, isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, data__value);
    CHECK(IsFixedArray(data__value));
  }
  {
    Object source__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, source__value);
    CHECK(IsString(source__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::MegaDomHandlerVerify(MegaDomHandler o, Isolate* isolate) {
  CHECK(IsMegaDomHandler(o, isolate));
  {
    MaybeObject accessor__value = TaggedField<MaybeObject>::load(o, 8);
    MaybeObject::VerifyMaybeObjectPointer(isolate, accessor__value);
    CHECK(accessor__value.IsCleared() || (!accessor__value.IsWeak() && IsHeapObject(accessor__value.GetHeapObjectOrSmi())) || (!accessor__value.IsWeak() && IsSmi(accessor__value.GetHeapObjectOrSmi())) || accessor__value.IsWeak());
  }
  {
    MaybeObject context__value = TaggedField<MaybeObject>::load(o, 16);
    MaybeObject::VerifyMaybeObjectPointer(isolate, context__value);
    CHECK(context__value.IsCleared() || (!context__value.IsWeak() && IsHeapObject(context__value.GetHeapObjectOrSmi())) || (!context__value.IsWeak() && IsSmi(context__value.GetHeapObjectOrSmi())) || context__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::MicrotaskVerify(Microtask o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsMicrotask(o, isolate));
}
void TorqueGeneratedClassVerifiers::CallbackTaskVerify(CallbackTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(IsCallbackTask(o, isolate));
  {
    Object callback__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(IsForeign(callback__value));
  }
  {
    Object data__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, data__value);
    CHECK(IsForeign(data__value));
  }
}
void TorqueGeneratedClassVerifiers::CallableTaskVerify(CallableTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(IsCallableTask(o, isolate));
  {
    Object callable__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, callable__value);
    CHECK(IsJSReceiver(callable__value));
  }
  {
    Object context__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsContext(context__value));
  }
}
void TorqueGeneratedClassVerifiers::ModuleVerify(Module o, Isolate* isolate) {
  CHECK(IsModule(o, isolate));
  {
    Object exports__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, exports__value);
    CHECK(IsObjectHashTable(exports__value));
  }
  {
    Object hash__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, hash__value);
    CHECK(IsSmi(hash__value));
  }
  {
    Object status__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, status__value);
    CHECK(IsSmi(status__value));
  }
  {
    Object module_namespace__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, module_namespace__value);
    CHECK(IsUndefined(module_namespace__value) || IsJSModuleNamespace(module_namespace__value));
  }
  {
    Object exception__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, exception__value);
  }
  {
    Object top_level_capability__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, top_level_capability__value);
    CHECK(IsUndefined(top_level_capability__value) || IsJSPromise(top_level_capability__value));
  }
}
void TorqueGeneratedClassVerifiers::JSModuleNamespaceVerify(JSModuleNamespace o, Isolate* isolate) {
  o.JSSpecialObjectVerify(isolate);
  CHECK(IsJSModuleNamespace(o, isolate));
  {
    Object module__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, module__value);
    CHECK(IsModule(module__value));
  }
}
void TorqueGeneratedClassVerifiers::ScriptOrModuleVerify(ScriptOrModule o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsScriptOrModule(o, isolate));
  {
    Object resource_name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, resource_name__value);
  }
  {
    Object host_defined_options__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, host_defined_options__value);
    CHECK(IsFixedArray(host_defined_options__value));
  }
}
void TorqueGeneratedClassVerifiers::PromiseReactionVerify(PromiseReaction o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsPromiseReaction(o, isolate));
  {
    Object next__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(IsZero(next__value) || IsPromiseReaction(next__value));
  }
  {
    Object reject_handler__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, reject_handler__value);
    CHECK(IsUndefined(reject_handler__value) || IsCallableApiObject(reject_handler__value) || IsCallableJSProxy(reject_handler__value) || IsJSFunction(reject_handler__value) || IsJSBoundFunction(reject_handler__value) || IsJSWrappedFunction(reject_handler__value));
  }
  {
    Object fulfill_handler__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, fulfill_handler__value);
    CHECK(IsUndefined(fulfill_handler__value) || IsCallableApiObject(fulfill_handler__value) || IsCallableJSProxy(fulfill_handler__value) || IsJSFunction(fulfill_handler__value) || IsJSBoundFunction(fulfill_handler__value) || IsJSWrappedFunction(fulfill_handler__value));
  }
  {
    Object promise_or_capability__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, promise_or_capability__value);
    CHECK(IsUndefined(promise_or_capability__value) || IsJSPromise(promise_or_capability__value) || IsPromiseCapability(promise_or_capability__value));
  }
  {
    Object continuation_preserved_embedder_data__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, continuation_preserved_embedder_data__value);
  }
}
void TorqueGeneratedClassVerifiers::PromiseReactionJobTaskVerify(PromiseReactionJobTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(IsPromiseReactionJobTask(o, isolate));
  {
    Object argument__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, argument__value);
  }
  {
    Object context__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsContext(context__value));
  }
  {
    Object handler__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, handler__value);
    CHECK(IsUndefined(handler__value) || IsCallableApiObject(handler__value) || IsCallableJSProxy(handler__value) || IsJSFunction(handler__value) || IsJSBoundFunction(handler__value) || IsJSWrappedFunction(handler__value));
  }
  {
    Object promise_or_capability__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, promise_or_capability__value);
    CHECK(IsUndefined(promise_or_capability__value) || IsJSPromise(promise_or_capability__value) || IsPromiseCapability(promise_or_capability__value));
  }
  {
    Object continuation_preserved_embedder_data__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, continuation_preserved_embedder_data__value);
  }
}
void TorqueGeneratedClassVerifiers::PromiseFulfillReactionJobTaskVerify(PromiseFulfillReactionJobTask o, Isolate* isolate) {
  o.PromiseReactionJobTaskVerify(isolate);
  CHECK(IsPromiseFulfillReactionJobTask(o, isolate));
}
void TorqueGeneratedClassVerifiers::PromiseRejectReactionJobTaskVerify(PromiseRejectReactionJobTask o, Isolate* isolate) {
  o.PromiseReactionJobTaskVerify(isolate);
  CHECK(IsPromiseRejectReactionJobTask(o, isolate));
}
void TorqueGeneratedClassVerifiers::PromiseResolveThenableJobTaskVerify(PromiseResolveThenableJobTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(IsPromiseResolveThenableJobTask(o, isolate));
  {
    Object context__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, context__value);
    CHECK(IsContext(context__value));
  }
  {
    Object promise_to_resolve__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, promise_to_resolve__value);
    CHECK(IsJSPromise(promise_to_resolve__value));
  }
  {
    Object thenable__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, thenable__value);
    CHECK(IsJSReceiver(thenable__value));
  }
  {
    Object then__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, then__value);
    CHECK(IsJSReceiver(then__value));
  }
}
void TorqueGeneratedClassVerifiers::PropertyArrayVerify(PropertyArray o, Isolate* isolate) {
  CHECK(IsPropertyArray(o, isolate));
  {
    Object length_and_hash__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length_and_hash__value);
    CHECK(IsSmi(length_and_hash__value));
  }
}
void TorqueGeneratedClassVerifiers::PropertyCellVerify(PropertyCell o, Isolate* isolate) {
  CHECK(IsPropertyCell(o, isolate));
  {
    Object name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, name__value);
    CHECK(IsString(name__value) || IsPublicSymbol(name__value) || IsPrivateSymbol(name__value));
  }
  {
    Object property_details_raw__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, property_details_raw__value);
    CHECK(IsSmi(property_details_raw__value));
  }
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
  }
  {
    Object dependent_code__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, dependent_code__value);
    CHECK(IsDependentCode(dependent_code__value));
  }
}
void TorqueGeneratedClassVerifiers::PropertyDescriptorObjectVerify(PropertyDescriptorObject o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsPropertyDescriptorObject(o, isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object value__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, value__value);
    CHECK(IsJSReceiver(value__value) || IsSmi(value__value) || IsHeapNumber(value__value) || IsBigInt(value__value) || IsString(value__value) || IsSymbol(value__value) || IsBoolean(value__value) || IsNull(value__value) || IsUndefined(value__value) || IsTheHole(value__value));
  }
  {
    Object get__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, get__value);
    CHECK(IsJSReceiver(get__value) || IsSmi(get__value) || IsHeapNumber(get__value) || IsBigInt(get__value) || IsString(get__value) || IsSymbol(get__value) || IsBoolean(get__value) || IsNull(get__value) || IsUndefined(get__value) || IsTheHole(get__value));
  }
  {
    Object set__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, set__value);
    CHECK(IsJSReceiver(set__value) || IsSmi(set__value) || IsHeapNumber(set__value) || IsBigInt(set__value) || IsString(set__value) || IsSymbol(set__value) || IsBoolean(set__value) || IsNull(set__value) || IsUndefined(set__value) || IsTheHole(set__value));
  }
}
void TorqueGeneratedClassVerifiers::PrototypeInfoVerify(PrototypeInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsPrototypeInfo(o, isolate));
  {
    Object module_namespace__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, module_namespace__value);
    CHECK(IsUndefined(module_namespace__value) || IsJSModuleNamespace(module_namespace__value));
  }
  {
    Object prototype_users__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, prototype_users__value);
    CHECK(IsZero(prototype_users__value) || IsWeakArrayList(prototype_users__value));
  }
  {
    Object prototype_chain_enum_cache__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, prototype_chain_enum_cache__value);
    CHECK(IsUndefined(prototype_chain_enum_cache__value) || IsFixedArray(prototype_chain_enum_cache__value) || IsZero(prototype_chain_enum_cache__value));
  }
  {
    Object registry_slot__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, registry_slot__value);
    CHECK(IsSmi(registry_slot__value));
  }
  {
    Object bit_field__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, bit_field__value);
    CHECK(IsSmi(bit_field__value));
  }
  {
    MaybeObject object_create_map__value = TaggedField<MaybeObject>::load(o, 48);
    MaybeObject::VerifyMaybeObjectPointer(isolate, object_create_map__value);
    CHECK(object_create_map__value.IsCleared() || (!object_create_map__value.IsWeak() && IsUndefined(object_create_map__value.GetHeapObjectOrSmi())) || (object_create_map__value.IsWeak() && IsMap(object_create_map__value.GetHeapObjectOrSmi())));
  }
}
void TorqueGeneratedClassVerifiers::ScriptVerify(Script o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsScript(o, isolate));
  {
    Object source__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, source__value);
    CHECK(IsString(source__value) || IsUndefined(source__value));
  }
  {
    Object name__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, name__value);
  }
  {
    Object line_offset__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, line_offset__value);
    CHECK(IsSmi(line_offset__value));
  }
  {
    Object column_offset__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, column_offset__value);
    CHECK(IsSmi(column_offset__value));
  }
  {
    Object context_data__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, context_data__value);
    CHECK(IsSmi(context_data__value) || IsSymbol(context_data__value) || IsUndefined(context_data__value));
  }
  {
    Object script_type__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, script_type__value);
    CHECK(IsSmi(script_type__value));
  }
  {
    Object line_ends__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, line_ends__value);
    CHECK(IsSmi(line_ends__value) || IsFixedArray(line_ends__value));
  }
  {
    Object id__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, id__value);
    CHECK(IsSmi(id__value));
  }
  {
    Object eval_from_shared_or_wrapped_arguments__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, eval_from_shared_or_wrapped_arguments__value);
    CHECK(IsUndefined(eval_from_shared_or_wrapped_arguments__value) || IsFixedArray(eval_from_shared_or_wrapped_arguments__value) || IsSharedFunctionInfo(eval_from_shared_or_wrapped_arguments__value));
  }
  {
    Object eval_from_position__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, eval_from_position__value);
    CHECK(IsSmi(eval_from_position__value) || IsForeign(eval_from_position__value));
  }
  {
    Object shared_function_infos__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, shared_function_infos__value);
    CHECK(IsWeakFixedArray(shared_function_infos__value) || IsWeakArrayList(shared_function_infos__value));
  }
  {
    Object compiled_lazy_function_positions__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, compiled_lazy_function_positions__value);
    CHECK(IsUndefined(compiled_lazy_function_positions__value) || IsArrayList(compiled_lazy_function_positions__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object source_url__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, source_url__value);
    CHECK(IsString(source_url__value) || IsUndefined(source_url__value));
  }
  {
    Object source_mapping_url__value = TaggedField<Object>::load(o, 120);
    Object::VerifyPointer(isolate, source_mapping_url__value);
  }
  {
    Object host_defined_options__value = TaggedField<Object>::load(o, 128);
    Object::VerifyPointer(isolate, host_defined_options__value);
    CHECK(IsFixedArray(host_defined_options__value));
  }
  {
    Object source_hash__value = TaggedField<Object>::load(o, 136);
    Object::VerifyPointer(isolate, source_hash__value);
    CHECK(IsString(source_hash__value) || IsUndefined(source_hash__value));
  }
}
void TorqueGeneratedClassVerifiers::PreparseDataVerify(PreparseData o, Isolate* isolate) {
  CHECK(IsPreparseData(o, isolate));
}
void TorqueGeneratedClassVerifiers::InterpreterDataVerify(InterpreterData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsInterpreterData(o, isolate));
  {
    Object bytecode_array__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, bytecode_array__value);
    CHECK(IsBytecodeArray(bytecode_array__value));
  }
  {
    Object interpreter_trampoline__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, interpreter_trampoline__value);
    CHECK(IsCode(interpreter_trampoline__value));
  }
}
void TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify(SharedFunctionInfo o, Isolate* isolate) {
  CHECK(IsSharedFunctionInfo(o, isolate));
  {
    Object function_data__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, function_data__value);
  }
  {
    Object name_or_scope_info__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, name_or_scope_info__value);
    CHECK(IsString(name_or_scope_info__value) || IsNoSharedNameSentinel(name_or_scope_info__value) || IsScopeInfo(name_or_scope_info__value));
  }
  {
    Object outer_scope_info_or_feedback_metadata__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, outer_scope_info_or_feedback_metadata__value);
    CHECK(IsHeapObject(outer_scope_info_or_feedback_metadata__value));
  }
  {
    Object script__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, script__value);
    CHECK(IsUndefined(script__value) || IsScript(script__value));
  }
}
void TorqueGeneratedClassVerifiers::UncompiledDataVerify(UncompiledData o, Isolate* isolate) {
  CHECK(IsUncompiledData(o, isolate));
  {
    Object inferred_name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, inferred_name__value);
    CHECK(IsString(inferred_name__value));
  }
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataVerify(UncompiledDataWithoutPreparseData o, Isolate* isolate) {
  o.UncompiledDataVerify(isolate);
  CHECK(IsUncompiledDataWithoutPreparseData(o, isolate));
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataVerify(UncompiledDataWithPreparseData o, Isolate* isolate) {
  o.UncompiledDataVerify(isolate);
  CHECK(IsUncompiledDataWithPreparseData(o, isolate));
  {
    Object preparse_data__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, preparse_data__value);
    CHECK(IsPreparseData(preparse_data__value));
  }
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataWithJobVerify(UncompiledDataWithoutPreparseDataWithJob o, Isolate* isolate) {
  o.UncompiledDataWithoutPreparseDataVerify(isolate);
  CHECK(IsUncompiledDataWithoutPreparseDataWithJob(o, isolate));
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataAndJobVerify(UncompiledDataWithPreparseDataAndJob o, Isolate* isolate) {
  o.UncompiledDataWithPreparseDataVerify(isolate);
  CHECK(IsUncompiledDataWithPreparseDataAndJob(o, isolate));
}
void TorqueGeneratedClassVerifiers::OnHeapBasicBlockProfilerDataVerify(OnHeapBasicBlockProfilerData o, Isolate* isolate) {
  CHECK(IsOnHeapBasicBlockProfilerData(o, isolate));
  {
    Object block_ids__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, block_ids__value);
    CHECK(IsByteArray(block_ids__value));
  }
  {
    Object counts__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, counts__value);
    CHECK(IsByteArray(counts__value));
  }
  {
    Object branches__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, branches__value);
    CHECK(IsByteArray(branches__value));
  }
  {
    Object name__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, name__value);
    CHECK(IsString(name__value));
  }
  {
    Object schedule__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, schedule__value);
    CHECK(IsString(schedule__value));
  }
  {
    Object code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, code__value);
    CHECK(IsString(code__value));
  }
  {
    Object hash__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, hash__value);
    CHECK(IsSmi(hash__value));
  }
}
void TorqueGeneratedClassVerifiers::SourceTextModuleVerify(SourceTextModule o, Isolate* isolate) {
  o.ModuleVerify(isolate);
  CHECK(IsSourceTextModule(o, isolate));
  {
    Object code__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, code__value);
    CHECK(IsJSFunction(code__value) || IsJSGeneratorObject(code__value) || IsSharedFunctionInfo(code__value));
  }
  {
    Object regular_exports__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, regular_exports__value);
    CHECK(IsFixedArray(regular_exports__value));
  }
  {
    Object regular_imports__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, regular_imports__value);
    CHECK(IsFixedArray(regular_imports__value));
  }
  {
    Object requested_modules__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, requested_modules__value);
    CHECK(IsFixedArray(requested_modules__value));
  }
  {
    Object import_meta__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, import_meta__value);
    CHECK(IsJSObject(import_meta__value) || IsTheHole(import_meta__value));
  }
  {
    Object cycle_root__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, cycle_root__value);
    CHECK(IsTheHole(cycle_root__value) || IsSourceTextModule(cycle_root__value));
  }
  {
    Object async_parent_modules__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, async_parent_modules__value);
    CHECK(IsArrayList(async_parent_modules__value));
  }
  {
    Object dfs_index__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, dfs_index__value);
    CHECK(IsSmi(dfs_index__value));
  }
  {
    Object dfs_ancestor_index__value = TaggedField<Object>::load(o, 120);
    Object::VerifyPointer(isolate, dfs_ancestor_index__value);
    CHECK(IsSmi(dfs_ancestor_index__value));
  }
  {
    Object pending_async_dependencies__value = TaggedField<Object>::load(o, 128);
    Object::VerifyPointer(isolate, pending_async_dependencies__value);
    CHECK(IsSmi(pending_async_dependencies__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 136);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::ModuleRequestVerify(ModuleRequest o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsModuleRequest(o, isolate));
  {
    Object specifier__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, specifier__value);
    CHECK(IsString(specifier__value));
  }
  {
    Object import_assertions__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, import_assertions__value);
    CHECK(IsFixedArray(import_assertions__value));
  }
  {
    Object position__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, position__value);
    CHECK(IsSmi(position__value));
  }
}
void TorqueGeneratedClassVerifiers::SourceTextModuleInfoEntryVerify(SourceTextModuleInfoEntry o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsSourceTextModuleInfoEntry(o, isolate));
  {
    Object export_name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, export_name__value);
    CHECK(IsString(export_name__value) || IsUndefined(export_name__value));
  }
  {
    Object local_name__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, local_name__value);
    CHECK(IsString(local_name__value) || IsUndefined(local_name__value));
  }
  {
    Object import_name__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, import_name__value);
    CHECK(IsString(import_name__value) || IsUndefined(import_name__value));
  }
  {
    Object module_request__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, module_request__value);
    CHECK(IsSmi(module_request__value));
  }
  {
    Object cell_index__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, cell_index__value);
    CHECK(IsSmi(cell_index__value));
  }
  {
    Object beg_pos__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, beg_pos__value);
    CHECK(IsSmi(beg_pos__value));
  }
  {
    Object end_pos__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, end_pos__value);
    CHECK(IsSmi(end_pos__value));
  }
}
void TorqueGeneratedClassVerifiers::ConsStringVerify(ConsString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(IsConsString(o, isolate));
  {
    Object first__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, first__value);
    CHECK(IsString(first__value));
  }
  {
    Object second__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, second__value);
    CHECK(IsString(second__value));
  }
}
void TorqueGeneratedClassVerifiers::ExternalStringVerify(ExternalString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(IsExternalString(o, isolate));
}
void TorqueGeneratedClassVerifiers::ExternalOneByteStringVerify(ExternalOneByteString o, Isolate* isolate) {
  o.ExternalStringVerify(isolate);
  CHECK(IsExternalOneByteString(o, isolate));
}
void TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify(ExternalTwoByteString o, Isolate* isolate) {
  o.ExternalStringVerify(isolate);
  CHECK(IsExternalTwoByteString(o, isolate));
}
void TorqueGeneratedClassVerifiers::InternalizedStringVerify(InternalizedString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(IsInternalizedString(o, isolate));
}
void TorqueGeneratedClassVerifiers::SeqStringVerify(SeqString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(IsSeqString(o, isolate));
}
void TorqueGeneratedClassVerifiers::SeqOneByteStringVerify(SeqOneByteString o, Isolate* isolate) {
  o.SeqStringVerify(isolate);
  CHECK(IsSeqOneByteString(o, isolate));
}
void TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(SeqTwoByteString o, Isolate* isolate) {
  o.SeqStringVerify(isolate);
  CHECK(IsSeqTwoByteString(o, isolate));
}
void TorqueGeneratedClassVerifiers::SlicedStringVerify(SlicedString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(IsSlicedString(o, isolate));
  {
    Object parent__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(IsString(parent__value));
  }
  {
    Object offset__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, offset__value);
    CHECK(IsSmi(offset__value));
  }
}
void TorqueGeneratedClassVerifiers::ThinStringVerify(ThinString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(IsThinString(o, isolate));
  {
    Object actual__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, actual__value);
    CHECK(IsString(actual__value));
  }
}
void TorqueGeneratedClassVerifiers::Tuple2Verify(Tuple2 o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsTuple2(o, isolate));
  {
    Object value1__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value1__value);
  }
  {
    Object value2__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, value2__value);
  }
}
void TorqueGeneratedClassVerifiers::SyntheticModuleVerify(SyntheticModule o, Isolate* isolate) {
  o.ModuleVerify(isolate);
  CHECK(IsSyntheticModule(o, isolate));
  {
    Object name__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, name__value);
    CHECK(IsString(name__value));
  }
  {
    Object export_names__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, export_names__value);
    CHECK(IsFixedArray(export_names__value));
  }
  {
    Object evaluation_steps__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, evaluation_steps__value);
    CHECK(IsForeign(evaluation_steps__value));
  }
}
void TorqueGeneratedClassVerifiers::TemplateObjectDescriptionVerify(TemplateObjectDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsTemplateObjectDescription(o, isolate));
  {
    Object raw_strings__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, raw_strings__value);
    CHECK(IsFixedArray(raw_strings__value));
  }
  {
    Object cooked_strings__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, cooked_strings__value);
    CHECK(IsFixedArray(cooked_strings__value));
  }
}
void TorqueGeneratedClassVerifiers::TemplateInfoVerify(TemplateInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsTemplateInfo(o, isolate));
  {
    Object tag__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, tag__value);
    CHECK(IsSmi(tag__value));
  }
  {
    Object serial_number__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, serial_number__value);
    CHECK(IsSmi(serial_number__value));
  }
  {
    Object number_of_properties__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, number_of_properties__value);
    CHECK(IsSmi(number_of_properties__value));
  }
  {
    Object property_list__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, property_list__value);
    CHECK(IsUndefined(property_list__value) || IsTemplateList(property_list__value));
  }
  {
    Object property_accessors__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, property_accessors__value);
    CHECK(IsUndefined(property_accessors__value) || IsTemplateList(property_accessors__value));
  }
}
void TorqueGeneratedClassVerifiers::FunctionTemplateRareDataVerify(FunctionTemplateRareData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsFunctionTemplateRareData(o, isolate));
  {
    Object prototype_template__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, prototype_template__value);
    CHECK(IsUndefined(prototype_template__value) || IsObjectTemplateInfo(prototype_template__value));
  }
  {
    Object prototype_provider_template__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, prototype_provider_template__value);
    CHECK(IsUndefined(prototype_provider_template__value) || IsFunctionTemplateInfo(prototype_provider_template__value));
  }
  {
    Object parent_template__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, parent_template__value);
    CHECK(IsUndefined(parent_template__value) || IsFunctionTemplateInfo(parent_template__value));
  }
  {
    Object named_property_handler__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, named_property_handler__value);
    CHECK(IsUndefined(named_property_handler__value) || IsInterceptorInfo(named_property_handler__value));
  }
  {
    Object indexed_property_handler__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, indexed_property_handler__value);
    CHECK(IsUndefined(indexed_property_handler__value) || IsInterceptorInfo(indexed_property_handler__value));
  }
  {
    Object instance_template__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, instance_template__value);
    CHECK(IsUndefined(instance_template__value) || IsObjectTemplateInfo(instance_template__value));
  }
  {
    Object instance_call_handler__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, instance_call_handler__value);
    CHECK(IsUndefined(instance_call_handler__value) || IsCallHandlerInfo(instance_call_handler__value));
  }
  {
    Object access_check_info__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, access_check_info__value);
    CHECK(IsUndefined(access_check_info__value) || IsAccessCheckInfo(access_check_info__value));
  }
  {
    Object c_function_overloads__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, c_function_overloads__value);
    CHECK(IsFixedArray(c_function_overloads__value));
  }
}
void TorqueGeneratedClassVerifiers::FunctionTemplateInfoVerify(FunctionTemplateInfo o, Isolate* isolate) {
  o.TemplateInfoVerify(isolate);
  CHECK(IsFunctionTemplateInfo(o, isolate));
  {
    Object call_code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, call_code__value);
    CHECK(IsUndefined(call_code__value) || IsCallHandlerInfo(call_code__value));
  }
  {
    Object class_name__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, class_name__value);
    CHECK(IsString(class_name__value) || IsUndefined(class_name__value));
  }
  {
    Object signature__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, signature__value);
    CHECK(IsUndefined(signature__value) || IsFunctionTemplateInfo(signature__value));
  }
  {
    Object rare_data__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, rare_data__value);
    CHECK(IsUndefined(rare_data__value) || IsFunctionTemplateRareData(rare_data__value));
  }
  {
    Object shared_function_info__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(IsUndefined(shared_function_info__value) || IsSharedFunctionInfo(shared_function_info__value));
  }
  {
    Object flag__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, flag__value);
    CHECK(IsSmi(flag__value));
  }
  {
    Object length__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, length__value);
    CHECK(IsSmi(length__value));
  }
  {
    Object cached_property_name__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, cached_property_name__value);
  }
  {
    Object instance_type__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, instance_type__value);
    CHECK(IsSmi(instance_type__value));
  }
}
void TorqueGeneratedClassVerifiers::ObjectTemplateInfoVerify(ObjectTemplateInfo o, Isolate* isolate) {
  o.TemplateInfoVerify(isolate);
  CHECK(IsObjectTemplateInfo(o, isolate));
  {
    Object constructor__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, constructor__value);
    CHECK(IsUndefined(constructor__value) || IsFunctionTemplateInfo(constructor__value));
  }
  {
    Object data__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, data__value);
    CHECK(IsSmi(data__value));
  }
}
void TorqueGeneratedClassVerifiers::TurbofanTypeVerify(TurbofanType o, Isolate* isolate) {
  CHECK(IsTurbofanType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurbofanBitsetTypeVerify(TurbofanBitsetType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(IsTurbofanBitsetType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurbofanUnionTypeVerify(TurbofanUnionType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(IsTurbofanUnionType(o, isolate));
  {
    Object type1__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, type1__value);
    CHECK(IsTurbofanType(type1__value));
  }
  {
    Object type2__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, type2__value);
    CHECK(IsTurbofanType(type2__value));
  }
}
void TorqueGeneratedClassVerifiers::TurbofanRangeTypeVerify(TurbofanRangeType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(IsTurbofanRangeType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurbofanHeapConstantTypeVerify(TurbofanHeapConstantType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(IsTurbofanHeapConstantType(o, isolate));
  {
    Object constant__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, constant__value);
    CHECK(IsHeapObject(constant__value));
  }
}
void TorqueGeneratedClassVerifiers::TurbofanOtherNumberConstantTypeVerify(TurbofanOtherNumberConstantType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(IsTurbofanOtherNumberConstantType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftTypeVerify(TurboshaftType o, Isolate* isolate) {
  CHECK(IsTurboshaftType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord32TypeVerify(TurboshaftWord32Type o, Isolate* isolate) {
  o.TurboshaftTypeVerify(isolate);
  CHECK(IsTurboshaftWord32Type(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord32RangeTypeVerify(TurboshaftWord32RangeType o, Isolate* isolate) {
  o.TurboshaftWord32TypeVerify(isolate);
  CHECK(IsTurboshaftWord32RangeType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord32SetTypeVerify(TurboshaftWord32SetType o, Isolate* isolate) {
  o.TurboshaftWord32TypeVerify(isolate);
  CHECK(IsTurboshaftWord32SetType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord64TypeVerify(TurboshaftWord64Type o, Isolate* isolate) {
  o.TurboshaftTypeVerify(isolate);
  CHECK(IsTurboshaftWord64Type(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord64RangeTypeVerify(TurboshaftWord64RangeType o, Isolate* isolate) {
  o.TurboshaftWord64TypeVerify(isolate);
  CHECK(IsTurboshaftWord64RangeType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord64SetTypeVerify(TurboshaftWord64SetType o, Isolate* isolate) {
  o.TurboshaftWord64TypeVerify(isolate);
  CHECK(IsTurboshaftWord64SetType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftFloat64TypeVerify(TurboshaftFloat64Type o, Isolate* isolate) {
  o.TurboshaftTypeVerify(isolate);
  CHECK(IsTurboshaftFloat64Type(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftFloat64RangeTypeVerify(TurboshaftFloat64RangeType o, Isolate* isolate) {
  o.TurboshaftFloat64TypeVerify(isolate);
  CHECK(IsTurboshaftFloat64RangeType(o, isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftFloat64SetTypeVerify(TurboshaftFloat64SetType o, Isolate* isolate) {
  o.TurboshaftFloat64TypeVerify(isolate);
  CHECK(IsTurboshaftFloat64SetType(o, isolate));
}
void TorqueGeneratedClassVerifiers::InternalClassVerify(InternalClass o, Isolate* isolate) {
  CHECK(IsInternalClass(o, isolate));
  {
    Object a__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, a__value);
    CHECK(IsSmi(a__value));
  }
  {
    Object b__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(IsSmi(b__value) || IsHeapNumber(b__value));
  }
}
void TorqueGeneratedClassVerifiers::SmiPairVerify(SmiPair o, Isolate* isolate) {
  CHECK(IsSmiPair(o, isolate));
  {
    Object a__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, a__value);
    CHECK(IsSmi(a__value));
  }
  {
    Object b__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(IsSmi(b__value));
  }
}
void TorqueGeneratedClassVerifiers::SmiBoxVerify(SmiBox o, Isolate* isolate) {
  CHECK(IsSmiBox(o, isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value__value);
    CHECK(IsSmi(value__value));
  }
  {
    Object unrelated__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, unrelated__value);
    CHECK(IsSmi(unrelated__value));
  }
}
void TorqueGeneratedClassVerifiers::ExportedSubClassBaseVerify(ExportedSubClassBase o, Isolate* isolate) {
  CHECK(IsExportedSubClassBase(o, isolate));
  {
    Object a__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, a__value);
    CHECK(IsHeapObject(a__value));
  }
  {
    Object b__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(IsHeapObject(b__value));
  }
}
void TorqueGeneratedClassVerifiers::ExportedSubClassVerify(ExportedSubClass o, Isolate* isolate) {
  o.ExportedSubClassBaseVerify(isolate);
  CHECK(IsExportedSubClass(o, isolate));
  {
    Object e_field__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, e_field__value);
    CHECK(IsSmi(e_field__value));
  }
}
void TorqueGeneratedClassVerifiers::AbstractInternalClassVerify(AbstractInternalClass o, Isolate* isolate) {
  CHECK(IsAbstractInternalClass(o, isolate));
}
void TorqueGeneratedClassVerifiers::AbstractInternalClassSubclass1Verify(AbstractInternalClassSubclass1 o, Isolate* isolate) {
  o.AbstractInternalClassVerify(isolate);
  CHECK(IsAbstractInternalClassSubclass1(o, isolate));
}
void TorqueGeneratedClassVerifiers::AbstractInternalClassSubclass2Verify(AbstractInternalClassSubclass2 o, Isolate* isolate) {
  o.AbstractInternalClassVerify(isolate);
  CHECK(IsAbstractInternalClassSubclass2(o, isolate));
}
void TorqueGeneratedClassVerifiers::InternalClassWithSmiElementsVerify(InternalClassWithSmiElements o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(IsInternalClassWithSmiElements(o, isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, data__value);
    CHECK(IsSmi(data__value));
  }
  {
    Object object__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, object__value);
    CHECK(IsOddball(object__value));
  }
  intptr_t entries__offset, entries__length;
  std::tie(std::ignore, entries__offset, entries__length) = TqRuntimeFieldSliceInternalClassWithSmiElementsEntries(o);
  CHECK_EQ(entries__offset, static_cast<int>(entries__offset));
  CHECK_EQ(entries__length, static_cast<int>(entries__length));
  for (int i = 0; i < static_cast<int>(entries__length); ++i) {
    Object entries__value = TaggedField<Object>::load(o, static_cast<int>(entries__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, entries__value);
    CHECK(IsSmi(entries__value));
  }
}
void TorqueGeneratedClassVerifiers::InternalClassWithStructElementsVerify(InternalClassWithStructElements o, Isolate* isolate) {
  CHECK(IsInternalClassWithStructElements(o, isolate));
  {
    Object count__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, count__value);
    CHECK(IsSmi(count__value));
  }
  {
    Object data__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, data__value);
    CHECK(IsSmi(data__value));
  }
  {
    Object object__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, object__value);
  }
  intptr_t entries__offset, entries__length;
  std::tie(std::ignore, entries__offset, entries__length) = TqRuntimeFieldSliceInternalClassWithStructElementsEntries(o);
  CHECK_EQ(entries__offset, static_cast<int>(entries__offset));
  CHECK_EQ(entries__length, static_cast<int>(entries__length));
  for (int i = 0; i < static_cast<int>(entries__length); ++i) {
    Object entries__value = TaggedField<Object>::load(o, static_cast<int>(entries__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, entries__value);
    CHECK(IsSmi(entries__value));
  }
  intptr_t more_entries__offset, more_entries__length;
  std::tie(std::ignore, more_entries__offset, more_entries__length) = TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(o);
  CHECK_EQ(more_entries__offset, static_cast<int>(more_entries__offset));
  CHECK_EQ(more_entries__length, static_cast<int>(more_entries__length));
  for (int i = 0; i < static_cast<int>(more_entries__length); ++i) {
    Object a__value = TaggedField<Object>::load(o, static_cast<int>(more_entries__offset) + 0 + i * 16);
    Object::VerifyPointer(isolate, a__value);
    CHECK(IsSmi(a__value));
    Object b__value = TaggedField<Object>::load(o, static_cast<int>(more_entries__offset) + 8 + i * 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(IsSmi(b__value));
  }
}
void TorqueGeneratedClassVerifiers::ExportedSubClass2Verify(ExportedSubClass2 o, Isolate* isolate) {
  o.ExportedSubClassBaseVerify(isolate);
  CHECK(IsExportedSubClass2(o, isolate));
  {
    Object z_field__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, z_field__value);
    CHECK(IsSmi(z_field__value));
  }
}
void TorqueGeneratedClassVerifiers::SortStateVerify(SortState o, Isolate* isolate) {
  CHECK(IsSortState(o, isolate));
  {
    Object receiver__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, receiver__value);
    CHECK(IsJSReceiver(receiver__value));
  }
  {
    Object initialReceiverMap__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, initialReceiverMap__value);
    CHECK(IsMap(initialReceiverMap__value));
  }
  {
    Object initialReceiverLength__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, initialReceiverLength__value);
    CHECK(IsSmi(initialReceiverLength__value) || IsHeapNumber(initialReceiverLength__value));
  }
  {
    Object userCmpFn__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, userCmpFn__value);
    CHECK(IsUndefined(userCmpFn__value) || IsCallableApiObject(userCmpFn__value) || IsCallableJSProxy(userCmpFn__value) || IsJSFunction(userCmpFn__value) || IsJSBoundFunction(userCmpFn__value) || IsJSWrappedFunction(userCmpFn__value));
  }
  {
    Object sortComparePtr__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, sortComparePtr__value);
    CHECK(IsSmi(sortComparePtr__value));
  }
  {
    Object loadFn__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, loadFn__value);
    CHECK(IsSmi(loadFn__value));
  }
  {
    Object storeFn__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, storeFn__value);
    CHECK(IsSmi(storeFn__value));
  }
  {
    Object deleteFn__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, deleteFn__value);
    CHECK(IsSmi(deleteFn__value));
  }
  {
    Object canUseSameAccessorFn__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, canUseSameAccessorFn__value);
    CHECK(IsSmi(canUseSameAccessorFn__value));
  }
  {
    Object minGallop__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, minGallop__value);
    CHECK(IsSmi(minGallop__value));
  }
  {
    Object pendingRunsSize__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, pendingRunsSize__value);
    CHECK(IsSmi(pendingRunsSize__value));
  }
  {
    Object pendingRuns__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, pendingRuns__value);
    CHECK(IsFixedArray(pendingRuns__value));
  }
  {
    Object workArray__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, workArray__value);
    CHECK(IsFixedArray(workArray__value));
  }
  {
    Object tempArray__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, tempArray__value);
    CHECK(IsFixedArray(tempArray__value));
  }
  {
    Object sortLength__value = TaggedField<Object>::load(o, 120);
    Object::VerifyPointer(isolate, sortLength__value);
    CHECK(IsSmi(sortLength__value));
  }
  {
    Object numberOfUndefined__value = TaggedField<Object>::load(o, 128);
    Object::VerifyPointer(isolate, numberOfUndefined__value);
    CHECK(IsSmi(numberOfUndefined__value));
  }
}
void TorqueGeneratedClassVerifiers::JSV8BreakIteratorVerify(JSV8BreakIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSV8BreakIterator(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object break_iterator__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, break_iterator__value);
    CHECK(IsForeign(break_iterator__value));
  }
  {
    Object unicode_string__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(IsForeign(unicode_string__value));
  }
  {
    Object bound_adopt_text__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, bound_adopt_text__value);
    CHECK(IsUndefined(bound_adopt_text__value) || IsJSFunction(bound_adopt_text__value));
  }
  {
    Object bound_first__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, bound_first__value);
    CHECK(IsUndefined(bound_first__value) || IsJSFunction(bound_first__value));
  }
  {
    Object bound_next__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, bound_next__value);
    CHECK(IsUndefined(bound_next__value) || IsJSFunction(bound_next__value));
  }
  {
    Object bound_current__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, bound_current__value);
    CHECK(IsUndefined(bound_current__value) || IsJSFunction(bound_current__value));
  }
  {
    Object bound_break_type__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, bound_break_type__value);
    CHECK(IsUndefined(bound_break_type__value) || IsJSFunction(bound_break_type__value));
  }
}
void TorqueGeneratedClassVerifiers::JSCollatorVerify(JSCollator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSCollator(o, isolate));
  {
    Object icu_collator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_collator__value);
    CHECK(IsForeign(icu_collator__value));
  }
  {
    Object bound_compare__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, bound_compare__value);
    CHECK(IsUndefined(bound_compare__value) || IsJSFunction(bound_compare__value));
  }
  {
    Object locale__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
}
void TorqueGeneratedClassVerifiers::JSDateTimeFormatVerify(JSDateTimeFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSDateTimeFormat(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object icu_locale__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(IsForeign(icu_locale__value));
  }
  {
    Object icu_simple_date_format__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_simple_date_format__value);
    CHECK(IsForeign(icu_simple_date_format__value));
  }
  {
    Object icu_date_interval_format__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, icu_date_interval_format__value);
    CHECK(IsForeign(icu_date_interval_format__value));
  }
  {
    Object bound_format__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, bound_format__value);
    CHECK(IsUndefined(bound_format__value) || IsJSFunction(bound_format__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSDisplayNamesVerify(JSDisplayNames o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSDisplayNames(o, isolate));
  {
    Object internal__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, internal__value);
    CHECK(IsForeign(internal__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSDurationFormatVerify(JSDurationFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSDurationFormat(o, isolate));
  {
    Object style_flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, style_flags__value);
    CHECK(IsSmi(style_flags__value));
  }
  {
    Object display_flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, display_flags__value);
    CHECK(IsSmi(display_flags__value));
  }
  {
    Object icu_locale__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(IsForeign(icu_locale__value));
  }
  {
    Object icu_number_formatter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(IsForeign(icu_number_formatter__value));
  }
}
void TorqueGeneratedClassVerifiers::JSListFormatVerify(JSListFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSListFormat(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object icu_formatter__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_formatter__value);
    CHECK(IsForeign(icu_formatter__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSLocaleVerify(JSLocale o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSLocale(o, isolate));
  {
    Object icu_locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(IsForeign(icu_locale__value));
  }
}
void TorqueGeneratedClassVerifiers::JSNumberFormatVerify(JSNumberFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSNumberFormat(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object icu_number_formatter__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(IsForeign(icu_number_formatter__value));
  }
  {
    Object bound_format__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, bound_format__value);
    CHECK(IsUndefined(bound_format__value) || IsJSFunction(bound_format__value));
  }
}
void TorqueGeneratedClassVerifiers::JSPluralRulesVerify(JSPluralRules o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSPluralRules(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
  {
    Object icu_plural_rules__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_plural_rules__value);
    CHECK(IsForeign(icu_plural_rules__value));
  }
  {
    Object icu_number_formatter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(IsForeign(icu_number_formatter__value));
  }
}
void TorqueGeneratedClassVerifiers::JSRelativeTimeFormatVerify(JSRelativeTimeFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSRelativeTimeFormat(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object numberingSystem__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, numberingSystem__value);
    CHECK(IsString(numberingSystem__value));
  }
  {
    Object icu_formatter__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_formatter__value);
    CHECK(IsForeign(icu_formatter__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSSegmentIteratorVerify(JSSegmentIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSSegmentIterator(o, isolate));
  {
    Object icu_break_iterator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(IsForeign(icu_break_iterator__value));
  }
  {
    Object unicode_string__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(IsForeign(unicode_string__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSSegmenterVerify(JSSegmenter o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSSegmenter(o, isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(IsString(locale__value));
  }
  {
    Object icu_break_iterator__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(IsForeign(icu_break_iterator__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::JSSegmentsVerify(JSSegments o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsJSSegments(o, isolate));
  {
    Object icu_break_iterator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(IsForeign(icu_break_iterator__value));
  }
  {
    Object unicode_string__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(IsForeign(unicode_string__value));
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(IsSmi(flags__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmApiFunctionRefVerify(WasmApiFunctionRef o, Isolate* isolate) {
  CHECK(IsWasmApiFunctionRef(o, isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(IsNativeContext(native_context__value));
  }
  {
    Object callable__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, callable__value);
    CHECK(IsJSReceiver(callable__value) || IsUndefined(callable__value));
  }
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(IsUndefined(instance__value) || IsWasmInstanceObject(instance__value));
  }
  {
    Object suspend__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, suspend__value);
    CHECK(IsSmi(suspend__value));
  }
  {
    Object wrapper_budget__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, wrapper_budget__value);
    CHECK(IsSmi(wrapper_budget__value));
  }
  {
    Object call_origin__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, call_origin__value);
    CHECK(IsSmi(call_origin__value) || IsWasmInternalFunction(call_origin__value) || IsTuple2(call_origin__value));
  }
  {
    Object sig__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, sig__value);
    CHECK(IsByteArray(sig__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmFunctionDataVerify(WasmFunctionData o, Isolate* isolate) {
  CHECK(IsWasmFunctionData(o, isolate));
  {
    Object internal__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, internal__value);
    CHECK(IsWasmInternalFunction(internal__value));
  }
  {
    Object wrapper_code__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, wrapper_code__value);
    CHECK(IsCode(wrapper_code__value));
  }
  {
    Object js_promise_flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, js_promise_flags__value);
    CHECK(IsSmi(js_promise_flags__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmExportedFunctionDataVerify(WasmExportedFunctionData o, Isolate* isolate) {
  o.WasmFunctionDataVerify(isolate);
  CHECK(IsWasmExportedFunctionData(o, isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(IsWasmInstanceObject(instance__value));
  }
  {
    Object function_index__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, function_index__value);
    CHECK(IsSmi(function_index__value));
  }
  {
    Object wrapper_budget__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, wrapper_budget__value);
    CHECK(IsSmi(wrapper_budget__value));
  }
  {
    Object c_wrapper_code__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, c_wrapper_code__value);
    CHECK(IsCode(c_wrapper_code__value));
  }
  {
    Object packed_args_size__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, packed_args_size__value);
    CHECK(IsSmi(packed_args_size__value));
  }
  {
    Object canonical_type_index__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, canonical_type_index__value);
    CHECK(IsSmi(canonical_type_index__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify(WasmJSFunctionData o, Isolate* isolate) {
  o.WasmFunctionDataVerify(isolate);
  CHECK(IsWasmJSFunctionData(o, isolate));
  {
    Object serialized_signature__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(IsByteArray(serialized_signature__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmCapiFunctionDataVerify(WasmCapiFunctionData o, Isolate* isolate) {
  o.WasmFunctionDataVerify(isolate);
  CHECK(IsWasmCapiFunctionData(o, isolate));
  {
    Object embedder_data__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, embedder_data__value);
    CHECK(IsForeign(embedder_data__value));
  }
  {
    Object serialized_signature__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(IsByteArray(serialized_signature__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmResumeDataVerify(WasmResumeData o, Isolate* isolate) {
  CHECK(IsWasmResumeData(o, isolate));
  {
    Object suspender__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, suspender__value);
    CHECK(IsWasmSuspenderObject(suspender__value));
  }
  {
    Object on_resume__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, on_resume__value);
    CHECK(IsSmi(on_resume__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmIndirectFunctionTableVerify(WasmIndirectFunctionTable o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsWasmIndirectFunctionTable(o, isolate));
  {
    Object sig_ids__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, sig_ids__value);
    CHECK(IsByteArray(sig_ids__value));
  }
  {
    Object targets__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, targets__value);
    CHECK(IsExternalPointerArray(targets__value));
  }
  {
    Object refs__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, refs__value);
    CHECK(IsFixedArray(refs__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmContinuationObjectVerify(WasmContinuationObject o, Isolate* isolate) {
  CHECK(IsWasmContinuationObject(o, isolate));
  {
    Object stack__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, stack__value);
    CHECK(IsForeign(stack__value));
  }
  {
    Object parent__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(IsUndefined(parent__value) || IsWasmContinuationObject(parent__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmSuspenderObjectVerify(WasmSuspenderObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsWasmSuspenderObject(o, isolate));
  {
    Object continuation__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, continuation__value);
    CHECK(IsUndefined(continuation__value) || IsWasmContinuationObject(continuation__value));
  }
  {
    Object parent__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(IsUndefined(parent__value) || IsWasmSuspenderObject(parent__value));
  }
  {
    Object promise__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(IsJSPromise(promise__value));
  }
  {
    Object resume__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, resume__value);
    CHECK(IsUndefined(resume__value) || IsJSObject(resume__value));
  }
  {
    Object reject__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, reject__value);
    CHECK(IsUndefined(reject__value) || IsJSObject(reject__value));
  }
  {
    Object state__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, state__value);
    CHECK(IsSmi(state__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(WasmExceptionTag o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsWasmExceptionTag(o, isolate));
  {
    Object index__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, index__value);
    CHECK(IsSmi(index__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmModuleObjectVerify(WasmModuleObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsWasmModuleObject(o, isolate));
  {
    Object managed_native_module__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, managed_native_module__value);
    CHECK(IsForeign(managed_native_module__value));
  }
  {
    Object script__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, script__value);
    CHECK(IsScript(script__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmTableObjectVerify(WasmTableObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsWasmTableObject(o, isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(IsUndefined(instance__value) || IsWasmInstanceObject(instance__value));
  }
  {
    Object entries__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, entries__value);
    CHECK(IsFixedArray(entries__value));
  }
  {
    Object current_length__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, current_length__value);
    CHECK(IsSmi(current_length__value));
  }
  {
    Object maximum_length__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, maximum_length__value);
    CHECK(IsSmi(maximum_length__value) || IsHeapNumber(maximum_length__value) || IsUndefined(maximum_length__value));
  }
  {
    Object dispatch_tables__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, dispatch_tables__value);
    CHECK(IsFixedArray(dispatch_tables__value));
  }
  {
    Object raw_type__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, raw_type__value);
    CHECK(IsSmi(raw_type__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmMemoryObjectVerify(WasmMemoryObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsWasmMemoryObject(o, isolate));
  {
    Object array_buffer__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, array_buffer__value);
    CHECK(IsJSArrayBuffer(array_buffer__value));
  }
  {
    Object maximum_pages__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, maximum_pages__value);
    CHECK(IsSmi(maximum_pages__value));
  }
  {
    Object is_memory64__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, is_memory64__value);
    CHECK(IsSmi(is_memory64__value));
  }
  {
    Object instances__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, instances__value);
    CHECK(IsUndefined(instances__value) || IsWeakArrayList(instances__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify(WasmGlobalObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsWasmGlobalObject(o, isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(IsUndefined(instance__value) || IsWasmInstanceObject(instance__value));
  }
  {
    Object untagged_buffer__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, untagged_buffer__value);
    CHECK(IsUndefined(untagged_buffer__value) || IsJSArrayBuffer(untagged_buffer__value));
  }
  {
    Object tagged_buffer__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, tagged_buffer__value);
    CHECK(IsUndefined(tagged_buffer__value) || IsFixedArray(tagged_buffer__value));
  }
  {
    Object offset__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, offset__value);
    CHECK(IsSmi(offset__value));
  }
  {
    Object raw_type__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, raw_type__value);
    CHECK(IsSmi(raw_type__value));
  }
  {
    Object is_mutable__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, is_mutable__value);
    CHECK(IsSmi(is_mutable__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmTagObjectVerify(WasmTagObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(IsWasmTagObject(o, isolate));
  {
    Object serialized_signature__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(IsByteArray(serialized_signature__value));
  }
  {
    Object tag__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, tag__value);
    CHECK(IsHeapObject(tag__value));
  }
  {
    Object canonical_type_index__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, canonical_type_index__value);
    CHECK(IsSmi(canonical_type_index__value));
  }
}
void TorqueGeneratedClassVerifiers::AsmWasmDataVerify(AsmWasmData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(IsAsmWasmData(o, isolate));
  {
    Object managed_native_module__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, managed_native_module__value);
    CHECK(IsForeign(managed_native_module__value));
  }
  {
    Object uses_bitset__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, uses_bitset__value);
    CHECK(IsHeapNumber(uses_bitset__value));
  }
}
void TorqueGeneratedClassVerifiers::WasmTypeInfoVerify(WasmTypeInfo o, Isolate* isolate) {
  CHECK(IsWasmTypeInfo(o, isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(IsUndefined(instance__value) || IsWasmInstanceObject(instance__value));
  }
  {
    Object supertypes_length__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, supertypes_length__value);
    CHECK(IsSmi(supertypes_length__value));
  }
  intptr_t supertypes__offset, supertypes__length;
  std::tie(std::ignore, supertypes__offset, supertypes__length) = TqRuntimeFieldSliceWasmTypeInfoSupertypes(o);
  CHECK_EQ(supertypes__offset, static_cast<int>(supertypes__offset));
  CHECK_EQ(supertypes__length, static_cast<int>(supertypes__length));
  for (int i = 0; i < static_cast<int>(supertypes__length); ++i) {
    Object supertypes__value = TaggedField<Object>::load(o, static_cast<int>(supertypes__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, supertypes__value);
  }
}
void TorqueGeneratedClassVerifiers::WasmObjectVerify(WasmObject o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  CHECK(IsWasmObject(o, isolate));
}
void TorqueGeneratedClassVerifiers::WasmStructVerify(WasmStruct o, Isolate* isolate) {
  o.WasmObjectVerify(isolate);
  CHECK(IsWasmStruct(o, isolate));
}
void TorqueGeneratedClassVerifiers::WasmArrayVerify(WasmArray o, Isolate* isolate) {
  o.WasmObjectVerify(isolate);
  CHECK(IsWasmArray(o, isolate));
}
void TorqueGeneratedClassVerifiers::WasmStringViewIterVerify(WasmStringViewIter o, Isolate* isolate) {
  CHECK(IsWasmStringViewIter(o, isolate));
  {
    Object string__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, string__value);
    CHECK(IsString(string__value));
  }
}
}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // VERIFY_HEAP
