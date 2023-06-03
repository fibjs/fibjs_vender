#ifdef VERIFY_HEAP
#include "torque-generated/class-verifiers.h"

#include "src/objects/all-objects-inl.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"
namespace v8 {
namespace internal {
#include "torque-generated/test/torque/test-torque-tq-inl.inc"
void TorqueGeneratedClassVerifiers::ContextVerify(Context o, Isolate* isolate) {
  CHECK(o.IsContext(isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
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
  CHECK(o.IsJSReceiver(isolate));
  {
    Object properties_or_hash__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, properties_or_hash__value);
    CHECK(properties_or_hash__value.IsSmi() || properties_or_hash__value.IsFixedArrayBase() || properties_or_hash__value.IsPropertyArray() || properties_or_hash__value.IsSwissNameDictionary());
  }
}
void TorqueGeneratedClassVerifiers::PrimitiveHeapObjectVerify(PrimitiveHeapObject o, Isolate* isolate) {
  CHECK(o.IsPrimitiveHeapObject(isolate));
}
void TorqueGeneratedClassVerifiers::HeapNumberVerify(HeapNumber o, Isolate* isolate) {
  o.PrimitiveHeapObjectVerify(isolate);
  CHECK(o.IsHeapNumber(isolate));
}
void TorqueGeneratedClassVerifiers::NameVerify(Name o, Isolate* isolate) {
  o.PrimitiveHeapObjectVerify(isolate);
  CHECK(o.IsName(isolate));
}
void TorqueGeneratedClassVerifiers::StringVerify(String o, Isolate* isolate) {
  o.NameVerify(isolate);
  CHECK(o.IsString(isolate));
}
void TorqueGeneratedClassVerifiers::SymbolVerify(Symbol o, Isolate* isolate) {
  o.NameVerify(isolate);
  CHECK(o.IsSymbol(isolate));
  {
    Object description__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, description__value);
    CHECK(description__value.IsString() || description__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::FixedArrayBaseVerify(FixedArrayBase o, Isolate* isolate) {
  CHECK(o.IsFixedArrayBase(isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::FixedArrayVerify(FixedArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsFixedArray(isolate));
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
  CHECK(o.IsJSObject(isolate));
  {
    Object elements__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, elements__value);
    CHECK(elements__value.IsFixedArrayBase());
  }
}
void TorqueGeneratedClassVerifiers::WeakFixedArrayVerify(WeakFixedArray o, Isolate* isolate) {
  CHECK(o.IsWeakFixedArray(isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
  intptr_t objects__offset, objects__length;
  std::tie(std::ignore, objects__offset, objects__length) = TqRuntimeFieldSliceWeakFixedArrayObjects(o);
  CHECK_EQ(objects__offset, static_cast<int>(objects__offset));
  CHECK_EQ(objects__length, static_cast<int>(objects__length));
  for (int i = 0; i < static_cast<int>(objects__length); ++i) {
    MaybeObject objects__value = TaggedField<MaybeObject>::load(o, static_cast<int>(objects__offset) + i * kTaggedSize);
    MaybeObject::VerifyMaybeObjectPointer(isolate, objects__value);
    CHECK(objects__value.IsCleared() || (!objects__value.IsWeak() && objects__value.GetHeapObjectOrSmi().IsHeapObject()) || (!objects__value.IsWeak() && objects__value.GetHeapObjectOrSmi().IsSmi()) || objects__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::ForeignVerify(Foreign o, Isolate* isolate) {
  CHECK(o.IsForeign(isolate));
}
void TorqueGeneratedClassVerifiers::JSProxyVerify(JSProxy o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  CHECK(o.IsJSProxy(isolate));
  {
    Object target__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, target__value);
    CHECK(target__value.IsJSReceiver() || target__value.IsNull());
  }
  {
    Object handler__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, handler__value);
    CHECK(handler__value.IsJSReceiver() || handler__value.IsNull());
  }
}
void TorqueGeneratedClassVerifiers::JSFunctionOrBoundFunctionOrWrappedFunctionVerify(JSFunctionOrBoundFunctionOrWrappedFunction o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSFunctionOrBoundFunctionOrWrappedFunction(isolate));
}
void TorqueGeneratedClassVerifiers::JSFunctionVerify(JSFunction o, Isolate* isolate) {
  o.JSFunctionOrBoundFunctionOrWrappedFunctionVerify(isolate);
  CHECK(o.IsJSFunction(isolate));
  {
    Object shared_function_info__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(shared_function_info__value.IsSharedFunctionInfo());
  }
  {
    Object context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object feedback_cell__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, feedback_cell__value);
    CHECK(feedback_cell__value.IsFeedbackCell());
  }
  {
    Object code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, code__value);
    CHECK(code__value.IsCode());
  }
  {
    Object prototype_or_initial_map__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, prototype_or_initial_map__value);
    CHECK(prototype_or_initial_map__value.IsJSReceiver() || prototype_or_initial_map__value.IsMap());
  }
}
void TorqueGeneratedClassVerifiers::JSBoundFunctionVerify(JSBoundFunction o, Isolate* isolate) {
  o.JSFunctionOrBoundFunctionOrWrappedFunctionVerify(isolate);
  CHECK(o.IsJSBoundFunction(isolate));
  {
    Object bound_target_function__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, bound_target_function__value);
    CHECK(bound_target_function__value.IsCallableApiObject() || bound_target_function__value.IsCallableJSProxy() || bound_target_function__value.IsJSFunction() || bound_target_function__value.IsJSBoundFunction() || bound_target_function__value.IsJSWrappedFunction());
  }
  {
    Object bound_this__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, bound_this__value);
    CHECK(bound_this__value.IsJSReceiver() || bound_this__value.IsSmi() || bound_this__value.IsHeapNumber() || bound_this__value.IsBigInt() || bound_this__value.IsString() || bound_this__value.IsSymbol() || bound_this__value.IsTrue() || bound_this__value.IsFalse() || bound_this__value.IsNull() || bound_this__value.IsUndefined() || bound_this__value.IsSourceTextModule());
  }
  {
    Object bound_arguments__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, bound_arguments__value);
    CHECK(bound_arguments__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::JSWrappedFunctionVerify(JSWrappedFunction o, Isolate* isolate) {
  o.JSFunctionOrBoundFunctionOrWrappedFunctionVerify(isolate);
  CHECK(o.IsJSWrappedFunction(isolate));
  {
    Object wrapped_target_function__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, wrapped_target_function__value);
    CHECK(wrapped_target_function__value.IsCallableApiObject() || wrapped_target_function__value.IsCallableJSProxy() || wrapped_target_function__value.IsJSFunction() || wrapped_target_function__value.IsJSBoundFunction() || wrapped_target_function__value.IsJSWrappedFunction());
  }
  {
    Object context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsNativeContext());
  }
}
void TorqueGeneratedClassVerifiers::JSObjectWithEmbedderSlotsVerify(JSObjectWithEmbedderSlots o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSObjectWithEmbedderSlots(isolate));
}
void TorqueGeneratedClassVerifiers::JSCustomElementsObjectVerify(JSCustomElementsObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSCustomElementsObject(isolate));
}
void TorqueGeneratedClassVerifiers::JSSpecialObjectVerify(JSSpecialObject o, Isolate* isolate) {
  o.JSCustomElementsObjectVerify(isolate);
  CHECK(o.IsJSSpecialObject(isolate));
}
void TorqueGeneratedClassVerifiers::MapVerify(Map o, Isolate* isolate) {
  CHECK(o.IsMap(isolate));
  {
    Object prototype__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, prototype__value);
    CHECK(prototype__value.IsJSReceiver() || prototype__value.IsNull());
  }
  {
    Object constructor_or_back_pointer_or_native_context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, constructor_or_back_pointer_or_native_context__value);
  }
  {
    Object instance_descriptors__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, instance_descriptors__value);
    CHECK(instance_descriptors__value.IsDescriptorArray());
  }
  {
    Object dependent_code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, dependent_code__value);
    CHECK(dependent_code__value.IsDependentCode());
  }
  {
    Object prototype_validity_cell__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, prototype_validity_cell__value);
    CHECK(prototype_validity_cell__value.IsSmi() || prototype_validity_cell__value.IsCell());
  }
  {
    MaybeObject transitions_or_prototype_info__value = TaggedField<MaybeObject>::load(o, 64);
    MaybeObject::VerifyMaybeObjectPointer(isolate, transitions_or_prototype_info__value);
    CHECK(transitions_or_prototype_info__value.IsCleared() || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsSmi()) || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsTransitionArray()) || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsMap()) || (transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsMap()) || (!transitions_or_prototype_info__value.IsWeak() && transitions_or_prototype_info__value.GetHeapObjectOrSmi().IsPrototypeInfo()));
  }
}
void TorqueGeneratedClassVerifiers::WeakCellVerify(WeakCell o, Isolate* isolate) {
  CHECK(o.IsWeakCell(isolate));
  {
    Object finalization_registry__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, finalization_registry__value);
    CHECK(finalization_registry__value.IsUndefined() || finalization_registry__value.IsJSFinalizationRegistry());
  }
  {
    Object target__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, target__value);
    CHECK(target__value.IsJSReceiver() || target__value.IsSymbol() || target__value.IsUndefined());
  }
  {
    Object unregister_token__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, unregister_token__value);
    CHECK(unregister_token__value.IsJSReceiver() || unregister_token__value.IsSymbol() || unregister_token__value.IsUndefined());
  }
  {
    Object holdings__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, holdings__value);
    CHECK(holdings__value.IsJSReceiver() || holdings__value.IsSmi() || holdings__value.IsHeapNumber() || holdings__value.IsBigInt() || holdings__value.IsString() || holdings__value.IsSymbol() || holdings__value.IsTrue() || holdings__value.IsFalse() || holdings__value.IsNull() || holdings__value.IsUndefined());
  }
  {
    Object prev__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, prev__value);
    CHECK(prev__value.IsUndefined() || prev__value.IsWeakCell());
  }
  {
    Object next__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsUndefined() || next__value.IsWeakCell());
  }
  {
    Object key_list_prev__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, key_list_prev__value);
    CHECK(key_list_prev__value.IsUndefined() || key_list_prev__value.IsWeakCell());
  }
  {
    Object key_list_next__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, key_list_next__value);
    CHECK(key_list_next__value.IsUndefined() || key_list_next__value.IsWeakCell());
  }
}
void TorqueGeneratedClassVerifiers::WasmInternalFunctionVerify(WasmInternalFunction o, Isolate* isolate) {
  CHECK(o.IsWasmInternalFunction(isolate));
  {
    Object ref__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, ref__value);
    CHECK(ref__value.IsWasmInstanceObject() || ref__value.IsWasmApiFunctionRef());
  }
  {
    Object external__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, external__value);
    CHECK(external__value.IsUndefined() || external__value.IsJSFunction());
  }
  {
    Object code__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, code__value);
    CHECK(code__value.IsCode());
  }
  {
    Object function_index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, function_index__value);
    CHECK(function_index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmNullVerify(WasmNull o, Isolate* isolate) {
  CHECK(o.IsWasmNull(isolate));
}
void TorqueGeneratedClassVerifiers::JSPromiseVerify(JSPromise o, Isolate* isolate) {
  o.JSObjectWithEmbedderSlotsVerify(isolate);
  CHECK(o.IsJSPromise(isolate));
  {
    Object reactions_or_result__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, reactions_or_result__value);
    CHECK(reactions_or_result__value.IsJSReceiver() || reactions_or_result__value.IsSmi() || reactions_or_result__value.IsHeapNumber() || reactions_or_result__value.IsBigInt() || reactions_or_result__value.IsString() || reactions_or_result__value.IsSymbol() || reactions_or_result__value.IsTrue() || reactions_or_result__value.IsFalse() || reactions_or_result__value.IsNull() || reactions_or_result__value.IsUndefined() || reactions_or_result__value.IsPromiseReaction());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::StructVerify(Struct o, Isolate* isolate) {
  CHECK(o.IsStruct(isolate));
}
void TorqueGeneratedClassVerifiers::PromiseCapabilityVerify(PromiseCapability o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPromiseCapability(isolate));
  {
    Object promise__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(promise__value.IsJSReceiver() || promise__value.IsUndefined());
  }
  {
    Object resolve__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, resolve__value);
  }
  {
    Object reject__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, reject__value);
  }
}
void TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(JSArrayBufferView o, Isolate* isolate) {
  o.JSObjectWithEmbedderSlotsVerify(isolate);
  CHECK(o.IsJSArrayBufferView(isolate));
  {
    Object buffer__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, buffer__value);
    CHECK(buffer__value.IsJSArrayBuffer());
  }
}
void TorqueGeneratedClassVerifiers::JSTypedArrayVerify(JSTypedArray o, Isolate* isolate) {
  o.JSArrayBufferViewVerify(isolate);
  CHECK(o.IsJSTypedArray(isolate));
  {
    Object base_pointer__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, base_pointer__value);
    CHECK(base_pointer__value.IsSmi() || base_pointer__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::DataHandlerVerify(DataHandler o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsDataHandler(isolate));
  {
    Object smi_handler__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, smi_handler__value);
    CHECK(smi_handler__value.IsSmi() || smi_handler__value.IsCode());
  }
  {
    Object validity_cell__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, validity_cell__value);
    CHECK(validity_cell__value.IsSmi() || validity_cell__value.IsCell());
  }
  {
    MaybeObject data1__value = TaggedField<MaybeObject>::load(o, 24);
    MaybeObject::VerifyMaybeObjectPointer(isolate, data1__value);
    CHECK(data1__value.IsCleared() || (!data1__value.IsWeak() && data1__value.GetHeapObjectOrSmi().IsHeapObject()) || (!data1__value.IsWeak() && data1__value.GetHeapObjectOrSmi().IsSmi()) || data1__value.IsWeak());
  }
  {
    MaybeObject data2__value = TaggedField<MaybeObject>::load(o, 32);
    MaybeObject::VerifyMaybeObjectPointer(isolate, data2__value);
    CHECK(data2__value.IsCleared() || (!data2__value.IsWeak() && data2__value.GetHeapObjectOrSmi().IsHeapObject()) || (!data2__value.IsWeak() && data2__value.GetHeapObjectOrSmi().IsSmi()) || data2__value.IsWeak());
  }
  {
    MaybeObject data3__value = TaggedField<MaybeObject>::load(o, 40);
    MaybeObject::VerifyMaybeObjectPointer(isolate, data3__value);
    CHECK(data3__value.IsCleared() || (!data3__value.IsWeak() && data3__value.GetHeapObjectOrSmi().IsHeapObject()) || (!data3__value.IsWeak() && data3__value.GetHeapObjectOrSmi().IsSmi()) || data3__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::AllocationMementoVerify(AllocationMemento o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAllocationMemento(isolate));
  {
    Object allocation_site__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, allocation_site__value);
    CHECK(allocation_site__value.IsAllocationSite());
  }
}
void TorqueGeneratedClassVerifiers::CallHandlerInfoVerify(CallHandlerInfo o, Isolate* isolate) {
  CHECK(o.IsCallHandlerInfo(isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::InterceptorInfoVerify(InterceptorInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsInterceptorInfo(isolate));
  {
    Object getter__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, getter__value);
    CHECK(getter__value.IsUndefined() || getter__value.IsZero() || getter__value.IsNonNullForeign());
  }
  {
    Object setter__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, setter__value);
    CHECK(setter__value.IsUndefined() || setter__value.IsZero() || setter__value.IsNonNullForeign());
  }
  {
    Object query__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, query__value);
    CHECK(query__value.IsUndefined() || query__value.IsZero() || query__value.IsNonNullForeign());
  }
  {
    Object descriptor__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, descriptor__value);
    CHECK(descriptor__value.IsUndefined() || descriptor__value.IsZero() || descriptor__value.IsNonNullForeign());
  }
  {
    Object deleter__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, deleter__value);
    CHECK(deleter__value.IsUndefined() || deleter__value.IsZero() || deleter__value.IsNonNullForeign());
  }
  {
    Object enumerator__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, enumerator__value);
    CHECK(enumerator__value.IsUndefined() || enumerator__value.IsZero() || enumerator__value.IsNonNullForeign());
  }
  {
    Object definer__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, definer__value);
    CHECK(definer__value.IsUndefined() || definer__value.IsZero() || definer__value.IsNonNullForeign());
  }
  {
    Object data__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, data__value);
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AccessCheckInfoVerify(AccessCheckInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAccessCheckInfo(isolate));
  {
    Object callback__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(callback__value.IsUndefined() || callback__value.IsZero() || callback__value.IsForeign());
  }
  {
    Object named_interceptor__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, named_interceptor__value);
    CHECK(named_interceptor__value.IsUndefined() || named_interceptor__value.IsZero() || named_interceptor__value.IsInterceptorInfo());
  }
  {
    Object indexed_interceptor__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, indexed_interceptor__value);
    CHECK(indexed_interceptor__value.IsUndefined() || indexed_interceptor__value.IsZero() || indexed_interceptor__value.IsInterceptorInfo());
  }
  {
    Object data__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::AccessorInfoVerify(AccessorInfo o, Isolate* isolate) {
  CHECK(o.IsAccessorInfo(isolate));
  {
    Object name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsName());
  }
  {
    Object data__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, data__value);
  }
}
void TorqueGeneratedClassVerifiers::JSArgumentsObjectVerify(JSArgumentsObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArgumentsObject(isolate));
}
void TorqueGeneratedClassVerifiers::SloppyArgumentsElementsVerify(SloppyArgumentsElements o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsSloppyArgumentsElements(isolate));
  {
    Object context__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object arguments__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, arguments__value);
    CHECK(arguments__value.IsFixedArray());
  }
  intptr_t mapped_entries__offset, mapped_entries__length;
  std::tie(std::ignore, mapped_entries__offset, mapped_entries__length) = TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries(o);
  CHECK_EQ(mapped_entries__offset, static_cast<int>(mapped_entries__offset));
  CHECK_EQ(mapped_entries__length, static_cast<int>(mapped_entries__length));
  for (int i = 0; i < static_cast<int>(mapped_entries__length); ++i) {
    Object mapped_entries__value = TaggedField<Object>::load(o, static_cast<int>(mapped_entries__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, mapped_entries__value);
    CHECK(mapped_entries__value.IsSmi() || mapped_entries__value.IsTheHole());
  }
}
void TorqueGeneratedClassVerifiers::AliasedArgumentsEntryVerify(AliasedArgumentsEntry o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAliasedArgumentsEntry(isolate));
  {
    Object aliased_context_slot__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, aliased_context_slot__value);
    CHECK(aliased_context_slot__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::CallSiteInfoVerify(CallSiteInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsCallSiteInfo(isolate));
  {
    Object receiver_or_instance__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, receiver_or_instance__value);
    CHECK(receiver_or_instance__value.IsJSReceiver() || receiver_or_instance__value.IsSmi() || receiver_or_instance__value.IsHeapNumber() || receiver_or_instance__value.IsBigInt() || receiver_or_instance__value.IsString() || receiver_or_instance__value.IsSymbol() || receiver_or_instance__value.IsTrue() || receiver_or_instance__value.IsFalse() || receiver_or_instance__value.IsNull() || receiver_or_instance__value.IsUndefined());
  }
  {
    Object function__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, function__value);
    CHECK(function__value.IsSmi() || function__value.IsJSFunction());
  }
  {
    Object code_object__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, code_object__value);
    CHECK(code_object__value.IsHeapObject());
  }
  {
    Object code_offset_or_source_position__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, code_offset_or_source_position__value);
    CHECK(code_offset_or_source_position__value.IsSmi());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object parameters__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, parameters__value);
    CHECK(parameters__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::CellVerify(Cell o, Isolate* isolate) {
  CHECK(o.IsCell(isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value__value);
  }
}
void TorqueGeneratedClassVerifiers::BytecodeArrayVerify(BytecodeArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsBytecodeArray(isolate));
  {
    Object constant_pool__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, constant_pool__value);
    CHECK(constant_pool__value.IsFixedArray());
  }
  {
    Object handler_table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, handler_table__value);
    CHECK(handler_table__value.IsByteArray());
  }
  {
    Object source_position_table__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, source_position_table__value);
    CHECK(source_position_table__value.IsUndefined() || source_position_table__value.IsException() || source_position_table__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::ScopeInfoVerify(ScopeInfo o, Isolate* isolate) {
  CHECK(o.IsScopeInfo(isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object parameter_count__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, parameter_count__value);
    CHECK(parameter_count__value.IsSmi());
  }
  {
    Object context_local_count__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, context_local_count__value);
    CHECK(context_local_count__value.IsSmi());
  }
  intptr_t context_local_names__offset, context_local_names__length;
  std::tie(std::ignore, context_local_names__offset, context_local_names__length) = TqRuntimeFieldSliceScopeInfoContextLocalNames(o);
  CHECK_EQ(context_local_names__offset, static_cast<int>(context_local_names__offset));
  CHECK_EQ(context_local_names__length, static_cast<int>(context_local_names__length));
  for (int i = 0; i < static_cast<int>(context_local_names__length); ++i) {
    Object context_local_names__value = TaggedField<Object>::load(o, static_cast<int>(context_local_names__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, context_local_names__value);
    CHECK(context_local_names__value.IsString());
  }
  intptr_t context_local_names_hashtable__offset, context_local_names_hashtable__length;
  std::tie(std::ignore, context_local_names_hashtable__offset, context_local_names_hashtable__length) = TqRuntimeFieldSliceScopeInfoContextLocalNamesHashtable(o);
  CHECK_EQ(context_local_names_hashtable__offset, static_cast<int>(context_local_names_hashtable__offset));
  CHECK_EQ(context_local_names_hashtable__length, static_cast<int>(context_local_names_hashtable__length));
  for (int i = 0; i < static_cast<int>(context_local_names_hashtable__length); ++i) {
    Object context_local_names_hashtable__value = TaggedField<Object>::load(o, static_cast<int>(context_local_names_hashtable__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, context_local_names_hashtable__value);
    CHECK(context_local_names_hashtable__value.IsNameToIndexHashTable());
  }
  intptr_t context_local_infos__offset, context_local_infos__length;
  std::tie(std::ignore, context_local_infos__offset, context_local_infos__length) = TqRuntimeFieldSliceScopeInfoContextLocalInfos(o);
  CHECK_EQ(context_local_infos__offset, static_cast<int>(context_local_infos__offset));
  CHECK_EQ(context_local_infos__length, static_cast<int>(context_local_infos__length));
  for (int i = 0; i < static_cast<int>(context_local_infos__length); ++i) {
    Object context_local_infos__value = TaggedField<Object>::load(o, static_cast<int>(context_local_infos__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, context_local_infos__value);
    CHECK(context_local_infos__value.IsSmi());
  }
  intptr_t saved_class_variable_info__offset, saved_class_variable_info__length;
  std::tie(std::ignore, saved_class_variable_info__offset, saved_class_variable_info__length) = TqRuntimeFieldSliceScopeInfoSavedClassVariableInfo(o);
  CHECK_EQ(saved_class_variable_info__offset, static_cast<int>(saved_class_variable_info__offset));
  CHECK_EQ(saved_class_variable_info__length, static_cast<int>(saved_class_variable_info__length));
  for (int i = 0; i < static_cast<int>(saved_class_variable_info__length); ++i) {
    Object saved_class_variable_info__value = TaggedField<Object>::load(o, static_cast<int>(saved_class_variable_info__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, saved_class_variable_info__value);
    CHECK(saved_class_variable_info__value.IsSmi());
  }
  intptr_t function_variable_info__offset, function_variable_info__length;
  std::tie(std::ignore, function_variable_info__offset, function_variable_info__length) = TqRuntimeFieldSliceScopeInfoFunctionVariableInfo(o);
  CHECK_EQ(function_variable_info__offset, static_cast<int>(function_variable_info__offset));
  CHECK_EQ(function_variable_info__length, static_cast<int>(function_variable_info__length));
  for (int i = 0; i < static_cast<int>(function_variable_info__length); ++i) {
    Object name__value = TaggedField<Object>::load(o, static_cast<int>(function_variable_info__offset) + 0 + i * 16);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsString() || name__value.IsZero());
    Object context_or_stack_slot_index__value = TaggedField<Object>::load(o, static_cast<int>(function_variable_info__offset) + 8 + i * 16);
    Object::VerifyPointer(isolate, context_or_stack_slot_index__value);
    CHECK(context_or_stack_slot_index__value.IsSmi());
  }
  intptr_t inferred_function_name__offset, inferred_function_name__length;
  std::tie(std::ignore, inferred_function_name__offset, inferred_function_name__length) = TqRuntimeFieldSliceScopeInfoInferredFunctionName(o);
  CHECK_EQ(inferred_function_name__offset, static_cast<int>(inferred_function_name__offset));
  CHECK_EQ(inferred_function_name__length, static_cast<int>(inferred_function_name__length));
  for (int i = 0; i < static_cast<int>(inferred_function_name__length); ++i) {
    Object inferred_function_name__value = TaggedField<Object>::load(o, static_cast<int>(inferred_function_name__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, inferred_function_name__value);
    CHECK(inferred_function_name__value.IsString() || inferred_function_name__value.IsUndefined());
  }
  intptr_t position_info__offset, position_info__length;
  std::tie(std::ignore, position_info__offset, position_info__length) = TqRuntimeFieldSliceScopeInfoPositionInfo(o);
  CHECK_EQ(position_info__offset, static_cast<int>(position_info__offset));
  CHECK_EQ(position_info__length, static_cast<int>(position_info__length));
  for (int i = 0; i < static_cast<int>(position_info__length); ++i) {
    Object start__value = TaggedField<Object>::load(o, static_cast<int>(position_info__offset) + 0 + i * 16);
    Object::VerifyPointer(isolate, start__value);
    CHECK(start__value.IsSmi());
    Object end__value = TaggedField<Object>::load(o, static_cast<int>(position_info__offset) + 8 + i * 16);
    Object::VerifyPointer(isolate, end__value);
    CHECK(end__value.IsSmi());
  }
  intptr_t outer_scope_info__offset, outer_scope_info__length;
  std::tie(std::ignore, outer_scope_info__offset, outer_scope_info__length) = TqRuntimeFieldSliceScopeInfoOuterScopeInfo(o);
  CHECK_EQ(outer_scope_info__offset, static_cast<int>(outer_scope_info__offset));
  CHECK_EQ(outer_scope_info__length, static_cast<int>(outer_scope_info__length));
  for (int i = 0; i < static_cast<int>(outer_scope_info__length); ++i) {
    Object outer_scope_info__value = TaggedField<Object>::load(o, static_cast<int>(outer_scope_info__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, outer_scope_info__value);
    CHECK(outer_scope_info__value.IsTheHole() || outer_scope_info__value.IsScopeInfo());
  }
  intptr_t locals_block_list__offset, locals_block_list__length;
  std::tie(std::ignore, locals_block_list__offset, locals_block_list__length) = TqRuntimeFieldSliceScopeInfoLocalsBlockList(o);
  CHECK_EQ(locals_block_list__offset, static_cast<int>(locals_block_list__offset));
  CHECK_EQ(locals_block_list__length, static_cast<int>(locals_block_list__length));
  for (int i = 0; i < static_cast<int>(locals_block_list__length); ++i) {
    Object locals_block_list__value = TaggedField<Object>::load(o, static_cast<int>(locals_block_list__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, locals_block_list__value);
    CHECK(locals_block_list__value.IsHashTable());
  }
  intptr_t module_info__offset, module_info__length;
  std::tie(std::ignore, module_info__offset, module_info__length) = TqRuntimeFieldSliceScopeInfoModuleInfo(o);
  CHECK_EQ(module_info__offset, static_cast<int>(module_info__offset));
  CHECK_EQ(module_info__length, static_cast<int>(module_info__length));
  for (int i = 0; i < static_cast<int>(module_info__length); ++i) {
    Object module_info__value = TaggedField<Object>::load(o, static_cast<int>(module_info__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, module_info__value);
    CHECK(module_info__value.IsSourceTextModuleInfo());
  }
  intptr_t module_variable_count__offset, module_variable_count__length;
  std::tie(std::ignore, module_variable_count__offset, module_variable_count__length) = TqRuntimeFieldSliceScopeInfoModuleVariableCount(o);
  CHECK_EQ(module_variable_count__offset, static_cast<int>(module_variable_count__offset));
  CHECK_EQ(module_variable_count__length, static_cast<int>(module_variable_count__length));
  for (int i = 0; i < static_cast<int>(module_variable_count__length); ++i) {
    Object module_variable_count__value = TaggedField<Object>::load(o, static_cast<int>(module_variable_count__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, module_variable_count__value);
    CHECK(module_variable_count__value.IsSmi());
  }
  intptr_t module_variables__offset, module_variables__length;
  std::tie(std::ignore, module_variables__offset, module_variables__length) = TqRuntimeFieldSliceScopeInfoModuleVariables(o);
  CHECK_EQ(module_variables__offset, static_cast<int>(module_variables__offset));
  CHECK_EQ(module_variables__length, static_cast<int>(module_variables__length));
  for (int i = 0; i < static_cast<int>(module_variables__length); ++i) {
    Object name__value = TaggedField<Object>::load(o, static_cast<int>(module_variables__offset) + 0 + i * 24);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsString());
    Object index__value = TaggedField<Object>::load(o, static_cast<int>(module_variables__offset) + 8 + i * 24);
    Object::VerifyPointer(isolate, index__value);
    CHECK(index__value.IsSmi());
    Object properties__value = TaggedField<Object>::load(o, static_cast<int>(module_variables__offset) + 16 + i * 24);
    Object::VerifyPointer(isolate, properties__value);
    CHECK(properties__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::FixedDoubleArrayVerify(FixedDoubleArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsFixedDoubleArray(isolate));
}
void TorqueGeneratedClassVerifiers::RegExpMatchInfoVerify(RegExpMatchInfo o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(o.IsRegExpMatchInfo(isolate));
}
void TorqueGeneratedClassVerifiers::BreakPointVerify(BreakPoint o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsBreakPoint(isolate));
  {
    Object id__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, id__value);
    CHECK(id__value.IsSmi());
  }
  {
    Object condition__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, condition__value);
    CHECK(condition__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::BreakPointInfoVerify(BreakPointInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsBreakPointInfo(isolate));
  {
    Object source_position__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, source_position__value);
    CHECK(source_position__value.IsSmi());
  }
  {
    Object break_points__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, break_points__value);
    CHECK(break_points__value.IsUndefined() || break_points__value.IsFixedArray() || break_points__value.IsBreakPoint());
  }
}
void TorqueGeneratedClassVerifiers::DebugInfoVerify(DebugInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsDebugInfo(isolate));
  {
    Object shared__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, shared__value);
    CHECK(shared__value.IsSharedFunctionInfo());
  }
  {
    Object debugger_hints__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, debugger_hints__value);
    CHECK(debugger_hints__value.IsSmi());
  }
  {
    Object script__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsUndefined() || script__value.IsScript());
  }
  {
    Object original_bytecode_array__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, original_bytecode_array__value);
    CHECK(original_bytecode_array__value.IsUndefined() || original_bytecode_array__value.IsBytecodeArray());
  }
  {
    Object debug_bytecode_array__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, debug_bytecode_array__value);
    CHECK(debug_bytecode_array__value.IsUndefined() || debug_bytecode_array__value.IsBytecodeArray());
  }
  {
    Object break_points__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, break_points__value);
    CHECK(break_points__value.IsFixedArray());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object coverage_info__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, coverage_info__value);
    CHECK(coverage_info__value.IsUndefined() || coverage_info__value.IsCoverageInfo());
  }
}
void TorqueGeneratedClassVerifiers::CoverageInfoVerify(CoverageInfo o, Isolate* isolate) {
  CHECK(o.IsCoverageInfo(isolate));
  intptr_t slots__offset, slots__length;
  std::tie(std::ignore, slots__offset, slots__length) = TqRuntimeFieldSliceCoverageInfoSlots(o);
  CHECK_EQ(slots__offset, static_cast<int>(slots__offset));
  CHECK_EQ(slots__length, static_cast<int>(slots__length));
  for (int i = 0; i < static_cast<int>(slots__length); ++i) {
  }
}
void TorqueGeneratedClassVerifiers::StackFrameInfoVerify(StackFrameInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsStackFrameInfo(isolate));
  {
    Object shared_or_script__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, shared_or_script__value);
    CHECK(shared_or_script__value.IsScript() || shared_or_script__value.IsSharedFunctionInfo());
  }
  {
    Object function_name__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, function_name__value);
    CHECK(function_name__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ErrorStackDataVerify(ErrorStackData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsErrorStackData(isolate));
  {
    Object call_site_infos_or_formatted_stack__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, call_site_infos_or_formatted_stack__value);
    CHECK(call_site_infos_or_formatted_stack__value.IsJSReceiver() || call_site_infos_or_formatted_stack__value.IsSmi() || call_site_infos_or_formatted_stack__value.IsHeapNumber() || call_site_infos_or_formatted_stack__value.IsBigInt() || call_site_infos_or_formatted_stack__value.IsString() || call_site_infos_or_formatted_stack__value.IsSymbol() || call_site_infos_or_formatted_stack__value.IsTrue() || call_site_infos_or_formatted_stack__value.IsFalse() || call_site_infos_or_formatted_stack__value.IsNull() || call_site_infos_or_formatted_stack__value.IsUndefined() || call_site_infos_or_formatted_stack__value.IsFixedArray());
  }
  {
    Object limit_or_stack_frame_infos__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, limit_or_stack_frame_infos__value);
    CHECK(limit_or_stack_frame_infos__value.IsSmi() || limit_or_stack_frame_infos__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::PromiseOnStackVerify(PromiseOnStack o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPromiseOnStack(isolate));
  {
    Object prev__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, prev__value);
    CHECK(prev__value.IsZero() || prev__value.IsPromiseOnStack());
  }
  {
    MaybeObject promise__value = TaggedField<MaybeObject>::load(o, 16);
    MaybeObject::VerifyMaybeObjectPointer(isolate, promise__value);
    CHECK(promise__value.IsCleared() || (promise__value.IsWeak() && promise__value.GetHeapObjectOrSmi().IsJSObject()));
  }
}
void TorqueGeneratedClassVerifiers::EnumCacheVerify(EnumCache o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsEnumCache(isolate));
  {
    Object keys__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, keys__value);
    CHECK(keys__value.IsFixedArray());
  }
  {
    Object indices__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, indices__value);
    CHECK(indices__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::AccessorPairVerify(AccessorPair o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAccessorPair(isolate));
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
  CHECK(o.IsClassPositions(isolate));
  {
    Object start__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, start__value);
    CHECK(start__value.IsSmi());
  }
  {
    Object end__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, end__value);
    CHECK(end__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::DescriptorArrayVerify(DescriptorArray o, Isolate* isolate) {
  CHECK(o.IsDescriptorArray(isolate));
  {
    Object enum_cache__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, enum_cache__value);
    CHECK(enum_cache__value.IsEnumCache());
  }
  intptr_t descriptors__offset, descriptors__length;
  std::tie(std::ignore, descriptors__offset, descriptors__length) = TqRuntimeFieldSliceDescriptorArrayDescriptors(o);
  CHECK_EQ(descriptors__offset, static_cast<int>(descriptors__offset));
  CHECK_EQ(descriptors__length, static_cast<int>(descriptors__length));
  for (int i = 0; i < static_cast<int>(descriptors__length); ++i) {
    Object key__value = TaggedField<Object>::load(o, static_cast<int>(descriptors__offset) + 0 + i * 24);
    Object::VerifyPointer(isolate, key__value);
    CHECK(key__value.IsName() || key__value.IsUndefined());
    Object details__value = TaggedField<Object>::load(o, static_cast<int>(descriptors__offset) + 8 + i * 24);
    Object::VerifyPointer(isolate, details__value);
    CHECK(details__value.IsSmi() || details__value.IsUndefined());
    MaybeObject value__value = TaggedField<MaybeObject>::load(o, static_cast<int>(descriptors__offset) + 16 + i * 24);
    MaybeObject::VerifyMaybeObjectPointer(isolate, value__value);
    CHECK(value__value.IsCleared() || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsJSReceiver()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsSmi()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsHeapNumber()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsBigInt()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsString()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsSymbol()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsTrue()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsFalse()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsNull()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsUndefined()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsAccessorInfo()) || (value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsMap()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsAccessorPair()) || (!value__value.IsWeak() && value__value.GetHeapObjectOrSmi().IsClassPositions()));
  }
}
void TorqueGeneratedClassVerifiers::StrongDescriptorArrayVerify(StrongDescriptorArray o, Isolate* isolate) {
  o.DescriptorArrayVerify(isolate);
  CHECK(o.IsStrongDescriptorArray(isolate));
}
void TorqueGeneratedClassVerifiers::EmbedderDataArrayVerify(EmbedderDataArray o, Isolate* isolate) {
  CHECK(o.IsEmbedderDataArray(isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::FeedbackCellVerify(FeedbackCell o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsFeedbackCell(isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsUndefined() || value__value.IsFixedArray() || value__value.IsFeedbackVector());
  }
}
void TorqueGeneratedClassVerifiers::FeedbackVectorVerify(FeedbackVector o, Isolate* isolate) {
  CHECK(o.IsFeedbackVector(isolate));
  {
    Object shared_function_info__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(shared_function_info__value.IsSharedFunctionInfo());
  }
  {
    Object closure_feedback_cell_array__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, closure_feedback_cell_array__value);
    CHECK(closure_feedback_cell_array__value.IsClosureFeedbackCellArray());
  }
  {
    Object parent_feedback_cell__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, parent_feedback_cell__value);
    CHECK(parent_feedback_cell__value.IsFeedbackCell());
  }
  {
    MaybeObject maybe_optimized_code__value = TaggedField<MaybeObject>::load(o, 48);
    MaybeObject::VerifyMaybeObjectPointer(isolate, maybe_optimized_code__value);
    CHECK(maybe_optimized_code__value.IsCleared() || (maybe_optimized_code__value.IsWeak() && maybe_optimized_code__value.GetHeapObjectOrSmi().IsCode()));
  }
  intptr_t raw_feedback_slots__offset, raw_feedback_slots__length;
  std::tie(std::ignore, raw_feedback_slots__offset, raw_feedback_slots__length) = TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots(o);
  CHECK_EQ(raw_feedback_slots__offset, static_cast<int>(raw_feedback_slots__offset));
  CHECK_EQ(raw_feedback_slots__length, static_cast<int>(raw_feedback_slots__length));
  for (int i = 0; i < static_cast<int>(raw_feedback_slots__length); ++i) {
    MaybeObject raw_feedback_slots__value = TaggedField<MaybeObject>::load(o, static_cast<int>(raw_feedback_slots__offset) + i * kTaggedSize);
    MaybeObject::VerifyMaybeObjectPointer(isolate, raw_feedback_slots__value);
    CHECK(raw_feedback_slots__value.IsCleared() || (!raw_feedback_slots__value.IsWeak() && raw_feedback_slots__value.GetHeapObjectOrSmi().IsHeapObject()) || (!raw_feedback_slots__value.IsWeak() && raw_feedback_slots__value.GetHeapObjectOrSmi().IsSmi()) || raw_feedback_slots__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::ByteArrayVerify(ByteArray o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsByteArray(isolate));
}
void TorqueGeneratedClassVerifiers::ArrayListVerify(ArrayList o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(o.IsArrayList(isolate));
}
void TorqueGeneratedClassVerifiers::TemplateListVerify(TemplateList o, Isolate* isolate) {
  o.FixedArrayVerify(isolate);
  CHECK(o.IsTemplateList(isolate));
}
void TorqueGeneratedClassVerifiers::WeakArrayListVerify(WeakArrayList o, Isolate* isolate) {
  CHECK(o.IsWeakArrayList(isolate));
  {
    Object capacity__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, capacity__value);
    CHECK(capacity__value.IsSmi());
  }
  {
    Object length__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
  intptr_t objects__offset, objects__length;
  std::tie(std::ignore, objects__offset, objects__length) = TqRuntimeFieldSliceWeakArrayListObjects(o);
  CHECK_EQ(objects__offset, static_cast<int>(objects__offset));
  CHECK_EQ(objects__length, static_cast<int>(objects__length));
  for (int i = 0; i < static_cast<int>(objects__length); ++i) {
    MaybeObject objects__value = TaggedField<MaybeObject>::load(o, static_cast<int>(objects__offset) + i * kTaggedSize);
    MaybeObject::VerifyMaybeObjectPointer(isolate, objects__value);
    CHECK(objects__value.IsCleared() || (!objects__value.IsWeak() && objects__value.GetHeapObjectOrSmi().IsHeapObject()) || (!objects__value.IsWeak() && objects__value.GetHeapObjectOrSmi().IsSmi()) || objects__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::FreeSpaceVerify(FreeSpace o, Isolate* isolate) {
  CHECK(o.IsFreeSpace(isolate));
  {
    Object size__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, size__value);
    CHECK(size__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSArrayBufferVerify(JSArrayBuffer o, Isolate* isolate) {
  o.JSObjectWithEmbedderSlotsVerify(isolate);
  CHECK(o.IsJSArrayBuffer(isolate));
  {
    Object detach_key__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, detach_key__value);
  }
}
void TorqueGeneratedClassVerifiers::JSDataViewOrRabGsabDataViewVerify(JSDataViewOrRabGsabDataView o, Isolate* isolate) {
  o.JSArrayBufferViewVerify(isolate);
  CHECK(o.IsJSDataViewOrRabGsabDataView(isolate));
}
void TorqueGeneratedClassVerifiers::JSDataViewVerify(JSDataView o, Isolate* isolate) {
  o.JSDataViewOrRabGsabDataViewVerify(isolate);
  CHECK(o.IsJSDataView(isolate));
}
void TorqueGeneratedClassVerifiers::JSRabGsabDataViewVerify(JSRabGsabDataView o, Isolate* isolate) {
  o.JSDataViewOrRabGsabDataViewVerify(isolate);
  CHECK(o.IsJSRabGsabDataView(isolate));
}
void TorqueGeneratedClassVerifiers::JSArrayIteratorVerify(JSArrayIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArrayIterator(isolate));
  {
    Object iterated_object__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, iterated_object__value);
    CHECK(iterated_object__value.IsJSReceiver());
  }
  {
    Object next_index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, next_index__value);
    CHECK(next_index__value.IsSmi() || next_index__value.IsHeapNumber());
  }
  {
    Object kind__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, kind__value);
    CHECK(kind__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSArrayVerify(JSArray o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSArray(isolate));
  {
    Object length__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi() || length__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::TemplateLiteralObjectVerify(TemplateLiteralObject o, Isolate* isolate) {
  o.JSArrayVerify(isolate);
  CHECK(o.IsTemplateLiteralObject(isolate));
  {
    Object raw__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, raw__value);
    CHECK(raw__value.IsJSArray());
  }
  {
    Object function_literal_id__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, function_literal_id__value);
    CHECK(function_literal_id__value.IsSmi());
  }
  {
    Object slot_id__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, slot_id__value);
    CHECK(slot_id__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AlwaysSharedSpaceJSObjectVerify(AlwaysSharedSpaceJSObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsAlwaysSharedSpaceJSObject(isolate));
}
void TorqueGeneratedClassVerifiers::JSSynchronizationPrimitiveVerify(JSSynchronizationPrimitive o, Isolate* isolate) {
  o.AlwaysSharedSpaceJSObjectVerify(isolate);
  CHECK(o.IsJSSynchronizationPrimitive(isolate));
}
void TorqueGeneratedClassVerifiers::JSAtomicsMutexVerify(JSAtomicsMutex o, Isolate* isolate) {
  o.JSSynchronizationPrimitiveVerify(isolate);
  CHECK(o.IsJSAtomicsMutex(isolate));
}
void TorqueGeneratedClassVerifiers::JSAtomicsConditionVerify(JSAtomicsCondition o, Isolate* isolate) {
  o.JSSynchronizationPrimitiveVerify(isolate);
  CHECK(o.IsJSAtomicsCondition(isolate));
}
void TorqueGeneratedClassVerifiers::JSCollectionIteratorVerify(JSCollectionIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSCollectionIterator(isolate));
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
  CHECK(o.IsJSCollection(isolate));
  {
    Object table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, table__value);
  }
}
void TorqueGeneratedClassVerifiers::JSSetVerify(JSSet o, Isolate* isolate) {
  o.JSCollectionVerify(isolate);
  CHECK(o.IsJSSet(isolate));
}
void TorqueGeneratedClassVerifiers::JSMapVerify(JSMap o, Isolate* isolate) {
  o.JSCollectionVerify(isolate);
  CHECK(o.IsJSMap(isolate));
}
void TorqueGeneratedClassVerifiers::JSWeakCollectionVerify(JSWeakCollection o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSWeakCollection(isolate));
  {
    Object table__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, table__value);
  }
}
void TorqueGeneratedClassVerifiers::JSWeakSetVerify(JSWeakSet o, Isolate* isolate) {
  o.JSWeakCollectionVerify(isolate);
  CHECK(o.IsJSWeakSet(isolate));
}
void TorqueGeneratedClassVerifiers::JSWeakMapVerify(JSWeakMap o, Isolate* isolate) {
  o.JSWeakCollectionVerify(isolate);
  CHECK(o.IsJSWeakMap(isolate));
}
void TorqueGeneratedClassVerifiers::JSGeneratorObjectVerify(JSGeneratorObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSGeneratorObject(isolate));
  {
    Object function__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, function__value);
    CHECK(function__value.IsJSFunction());
  }
  {
    Object context__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object receiver__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, receiver__value);
    CHECK(receiver__value.IsJSReceiver() || receiver__value.IsSmi() || receiver__value.IsHeapNumber() || receiver__value.IsBigInt() || receiver__value.IsString() || receiver__value.IsSymbol() || receiver__value.IsTrue() || receiver__value.IsFalse() || receiver__value.IsNull() || receiver__value.IsUndefined());
  }
  {
    Object input_or_debug_pos__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, input_or_debug_pos__value);
  }
  {
    Object resume_mode__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, resume_mode__value);
    CHECK(resume_mode__value.IsSmi());
  }
  {
    Object continuation__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, continuation__value);
    CHECK(continuation__value.IsSmi());
  }
  {
    Object parameters_and_registers__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, parameters_and_registers__value);
    CHECK(parameters_and_registers__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncFunctionObjectVerify(JSAsyncFunctionObject o, Isolate* isolate) {
  o.JSGeneratorObjectVerify(isolate);
  CHECK(o.IsJSAsyncFunctionObject(isolate));
  {
    Object promise__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(promise__value.IsJSPromise());
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncGeneratorObjectVerify(JSAsyncGeneratorObject o, Isolate* isolate) {
  o.JSGeneratorObjectVerify(isolate);
  CHECK(o.IsJSAsyncGeneratorObject(isolate));
  {
    Object queue__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, queue__value);
    CHECK(queue__value.IsHeapObject());
  }
  {
    Object is_awaiting__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, is_awaiting__value);
    CHECK(is_awaiting__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AsyncGeneratorRequestVerify(AsyncGeneratorRequest o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAsyncGeneratorRequest(isolate));
  {
    Object next__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsUndefined() || next__value.IsAsyncGeneratorRequest());
  }
  {
    Object resume_mode__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, resume_mode__value);
    CHECK(resume_mode__value.IsSmi());
  }
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
  }
  {
    Object promise__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, promise__value);
    CHECK(promise__value.IsJSPromise());
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorHelperVerify(JSIteratorHelper o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSIteratorHelper(isolate));
  {
    Object object__value = TaggedField<Object>::load(o, 24 + 0);
    Object::VerifyPointer(isolate, object__value);
    CHECK(object__value.IsJSReceiver());
    Object next__value = TaggedField<Object>::load(o, 24 + 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsJSReceiver() || next__value.IsSmi() || next__value.IsHeapNumber() || next__value.IsBigInt() || next__value.IsString() || next__value.IsSymbol() || next__value.IsTrue() || next__value.IsFalse() || next__value.IsNull() || next__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorMapHelperVerify(JSIteratorMapHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(o.IsJSIteratorMapHelper(isolate));
  {
    Object mapper__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, mapper__value);
    CHECK(mapper__value.IsCallableApiObject() || mapper__value.IsCallableJSProxy() || mapper__value.IsJSFunction() || mapper__value.IsJSBoundFunction() || mapper__value.IsJSWrappedFunction());
  }
  {
    Object counter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, counter__value);
    CHECK(counter__value.IsSmi() || counter__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorFilterHelperVerify(JSIteratorFilterHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(o.IsJSIteratorFilterHelper(isolate));
  {
    Object predicate__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, predicate__value);
    CHECK(predicate__value.IsCallableApiObject() || predicate__value.IsCallableJSProxy() || predicate__value.IsJSFunction() || predicate__value.IsJSBoundFunction() || predicate__value.IsJSWrappedFunction());
  }
  {
    Object counter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, counter__value);
    CHECK(counter__value.IsSmi() || counter__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorTakeHelperVerify(JSIteratorTakeHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(o.IsJSIteratorTakeHelper(isolate));
  {
    Object remaining__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, remaining__value);
    CHECK(remaining__value.IsSmi() || remaining__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorDropHelperVerify(JSIteratorDropHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(o.IsJSIteratorDropHelper(isolate));
  {
    Object remaining__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, remaining__value);
    CHECK(remaining__value.IsSmi() || remaining__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSIteratorFlatMapHelperVerify(JSIteratorFlatMapHelper o, Isolate* isolate) {
  o.JSIteratorHelperVerify(isolate);
  CHECK(o.IsJSIteratorFlatMapHelper(isolate));
  {
    Object mapper__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, mapper__value);
    CHECK(mapper__value.IsCallableApiObject() || mapper__value.IsCallableJSProxy() || mapper__value.IsJSFunction() || mapper__value.IsJSBoundFunction() || mapper__value.IsJSWrappedFunction());
  }
  {
    Object counter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, counter__value);
    CHECK(counter__value.IsSmi() || counter__value.IsHeapNumber());
  }
  {
    Object object__value = TaggedField<Object>::load(o, 56 + 0);
    Object::VerifyPointer(isolate, object__value);
    CHECK(object__value.IsJSReceiver());
    Object next__value = TaggedField<Object>::load(o, 56 + 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsJSReceiver() || next__value.IsSmi() || next__value.IsHeapNumber() || next__value.IsBigInt() || next__value.IsString() || next__value.IsSymbol() || next__value.IsTrue() || next__value.IsFalse() || next__value.IsNull() || next__value.IsUndefined());
  }
  {
    Object innerAlive__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, innerAlive__value);
    CHECK(innerAlive__value.IsTrue() || innerAlive__value.IsFalse());
  }
}
void TorqueGeneratedClassVerifiers::JSExternalObjectVerify(JSExternalObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSExternalObject(isolate));
}
void TorqueGeneratedClassVerifiers::JSGlobalProxyVerify(JSGlobalProxy o, Isolate* isolate) {
  o.JSSpecialObjectVerify(isolate);
  CHECK(o.IsJSGlobalProxy(isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
  }
}
void TorqueGeneratedClassVerifiers::JSGlobalObjectVerify(JSGlobalObject o, Isolate* isolate) {
  o.JSSpecialObjectVerify(isolate);
  CHECK(o.IsJSGlobalObject(isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(native_context__value.IsNativeContext());
  }
  {
    Object global_proxy__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, global_proxy__value);
    CHECK(global_proxy__value.IsJSGlobalProxy());
  }
}
void TorqueGeneratedClassVerifiers::JSPrimitiveWrapperVerify(JSPrimitiveWrapper o, Isolate* isolate) {
  o.JSCustomElementsObjectVerify(isolate);
  CHECK(o.IsJSPrimitiveWrapper(isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsJSReceiver() || value__value.IsSmi() || value__value.IsHeapNumber() || value__value.IsBigInt() || value__value.IsString() || value__value.IsSymbol() || value__value.IsTrue() || value__value.IsFalse() || value__value.IsNull() || value__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::JSMessageObjectVerify(JSMessageObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSMessageObject(isolate));
  {
    Object message_type__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, message_type__value);
    CHECK(message_type__value.IsSmi());
  }
  {
    Object argument__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, argument__value);
  }
  {
    Object script__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsScript());
  }
  {
    Object stack_frames__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, stack_frames__value);
  }
  {
    Object shared_info__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, shared_info__value);
    CHECK(shared_info__value.IsSmi() || shared_info__value.IsSharedFunctionInfo());
  }
  {
    Object bytecode_offset__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, bytecode_offset__value);
    CHECK(bytecode_offset__value.IsSmi());
  }
  {
    Object start_position__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, start_position__value);
    CHECK(start_position__value.IsSmi());
  }
  {
    Object end_position__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, end_position__value);
    CHECK(end_position__value.IsSmi());
  }
  {
    Object error_level__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, error_level__value);
    CHECK(error_level__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSDateVerify(JSDate o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSDate(isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsSmi() || value__value.IsHeapNumber() || value__value.IsUndefined());
  }
  {
    Object year__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, year__value);
    CHECK(year__value.IsSmi() || year__value.IsUndefined() || year__value.IsNaN());
  }
  {
    Object month__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, month__value);
    CHECK(month__value.IsSmi() || month__value.IsUndefined() || month__value.IsNaN());
  }
  {
    Object day__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, day__value);
    CHECK(day__value.IsSmi() || day__value.IsUndefined() || day__value.IsNaN());
  }
  {
    Object weekday__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, weekday__value);
    CHECK(weekday__value.IsSmi() || weekday__value.IsUndefined() || weekday__value.IsNaN());
  }
  {
    Object hour__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, hour__value);
    CHECK(hour__value.IsSmi() || hour__value.IsUndefined() || hour__value.IsNaN());
  }
  {
    Object min__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, min__value);
    CHECK(min__value.IsSmi() || min__value.IsUndefined() || min__value.IsNaN());
  }
  {
    Object sec__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, sec__value);
    CHECK(sec__value.IsSmi() || sec__value.IsUndefined() || sec__value.IsNaN());
  }
  {
    Object cache_stamp__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, cache_stamp__value);
    CHECK(cache_stamp__value.IsSmi() || cache_stamp__value.IsUndefined() || cache_stamp__value.IsNaN());
  }
}
void TorqueGeneratedClassVerifiers::JSAsyncFromSyncIteratorVerify(JSAsyncFromSyncIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSAsyncFromSyncIterator(isolate));
  {
    Object sync_iterator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, sync_iterator__value);
    CHECK(sync_iterator__value.IsJSReceiver());
  }
  {
    Object next__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, next__value);
  }
}
void TorqueGeneratedClassVerifiers::JSStringIteratorVerify(JSStringIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSStringIterator(isolate));
  {
    Object string__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, string__value);
    CHECK(string__value.IsString());
  }
  {
    Object index__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, index__value);
    CHECK(index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSValidIteratorWrapperVerify(JSValidIteratorWrapper o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSValidIteratorWrapper(isolate));
  {
    Object object__value = TaggedField<Object>::load(o, 24 + 0);
    Object::VerifyPointer(isolate, object__value);
    CHECK(object__value.IsJSReceiver());
    Object next__value = TaggedField<Object>::load(o, 24 + 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsJSReceiver() || next__value.IsSmi() || next__value.IsHeapNumber() || next__value.IsBigInt() || next__value.IsString() || next__value.IsSymbol() || next__value.IsTrue() || next__value.IsFalse() || next__value.IsNull() || next__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::JSRawJsonVerify(JSRawJson o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRawJson(isolate));
}
void TorqueGeneratedClassVerifiers::JSRegExpStringIteratorVerify(JSRegExpStringIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRegExpStringIterator(isolate));
  {
    Object iterating_reg_exp__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, iterating_reg_exp__value);
    CHECK(iterating_reg_exp__value.IsJSReceiver());
  }
  {
    Object iterated_string__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, iterated_string__value);
    CHECK(iterated_string__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSRegExpVerify(JSRegExp o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRegExp(isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsUndefined() || data__value.IsFixedArray());
  }
  {
    Object source__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, source__value);
    CHECK(source__value.IsString() || source__value.IsUndefined());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsUndefined() || flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSShadowRealmVerify(JSShadowRealm o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSShadowRealm(isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(native_context__value.IsNativeContext());
  }
}
void TorqueGeneratedClassVerifiers::JSSharedArrayVerify(JSSharedArray o, Isolate* isolate) {
  o.AlwaysSharedSpaceJSObjectVerify(isolate);
  CHECK(o.IsJSSharedArray(isolate));
}
void TorqueGeneratedClassVerifiers::JSSharedStructVerify(JSSharedStruct o, Isolate* isolate) {
  o.AlwaysSharedSpaceJSObjectVerify(isolate);
  CHECK(o.IsJSSharedStruct(isolate));
}
void TorqueGeneratedClassVerifiers::JSTemporalCalendarVerify(JSTemporalCalendar o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalCalendar(isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalDurationVerify(JSTemporalDuration o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalDuration(isolate));
  {
    Object years__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, years__value);
    CHECK(years__value.IsSmi() || years__value.IsHeapNumber());
  }
  {
    Object months__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, months__value);
    CHECK(months__value.IsSmi() || months__value.IsHeapNumber());
  }
  {
    Object weeks__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, weeks__value);
    CHECK(weeks__value.IsSmi() || weeks__value.IsHeapNumber());
  }
  {
    Object days__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, days__value);
    CHECK(days__value.IsSmi() || days__value.IsHeapNumber());
  }
  {
    Object hours__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, hours__value);
    CHECK(hours__value.IsSmi() || hours__value.IsHeapNumber());
  }
  {
    Object minutes__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, minutes__value);
    CHECK(minutes__value.IsSmi() || minutes__value.IsHeapNumber());
  }
  {
    Object seconds__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, seconds__value);
    CHECK(seconds__value.IsSmi() || seconds__value.IsHeapNumber());
  }
  {
    Object milliseconds__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, milliseconds__value);
    CHECK(milliseconds__value.IsSmi() || milliseconds__value.IsHeapNumber());
  }
  {
    Object microseconds__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, microseconds__value);
    CHECK(microseconds__value.IsSmi() || microseconds__value.IsHeapNumber());
  }
  {
    Object nanoseconds__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, nanoseconds__value);
    CHECK(nanoseconds__value.IsSmi() || nanoseconds__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalInstantVerify(JSTemporalInstant o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalInstant(isolate));
  {
    Object nanoseconds__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, nanoseconds__value);
    CHECK(nanoseconds__value.IsBigInt());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainDateTimeVerify(JSTemporalPlainDateTime o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalPlainDateTime(isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(year_month_day__value.IsSmi());
  }
  {
    Object hour_minute_second__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, hour_minute_second__value);
    CHECK(hour_minute_second__value.IsSmi());
  }
  {
    Object second_parts__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, second_parts__value);
    CHECK(second_parts__value.IsSmi());
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(calendar__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainDateVerify(JSTemporalPlainDate o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalPlainDate(isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(year_month_day__value.IsSmi());
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(calendar__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainMonthDayVerify(JSTemporalPlainMonthDay o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalPlainMonthDay(isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(year_month_day__value.IsSmi());
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(calendar__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainTimeVerify(JSTemporalPlainTime o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalPlainTime(isolate));
  {
    Object hour_minute_second__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, hour_minute_second__value);
    CHECK(hour_minute_second__value.IsSmi());
  }
  {
    Object second_parts__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, second_parts__value);
    CHECK(second_parts__value.IsSmi());
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(calendar__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalPlainYearMonthVerify(JSTemporalPlainYearMonth o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalPlainYearMonth(isolate));
  {
    Object year_month_day__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, year_month_day__value);
    CHECK(year_month_day__value.IsSmi());
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(calendar__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalTimeZoneVerify(JSTemporalTimeZone o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalTimeZone(isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object details__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, details__value);
    CHECK(details__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSTemporalZonedDateTimeVerify(JSTemporalZonedDateTime o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSTemporalZonedDateTime(isolate));
  {
    Object nanoseconds__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, nanoseconds__value);
    CHECK(nanoseconds__value.IsBigInt());
  }
  {
    Object time_zone__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, time_zone__value);
    CHECK(time_zone__value.IsJSReceiver());
  }
  {
    Object calendar__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, calendar__value);
    CHECK(calendar__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::JSFinalizationRegistryVerify(JSFinalizationRegistry o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSFinalizationRegistry(isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(native_context__value.IsNativeContext());
  }
  {
    Object cleanup__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, cleanup__value);
    CHECK(cleanup__value.IsCallableApiObject() || cleanup__value.IsCallableJSProxy() || cleanup__value.IsJSFunction() || cleanup__value.IsJSBoundFunction() || cleanup__value.IsJSWrappedFunction());
  }
  {
    Object active_cells__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, active_cells__value);
    CHECK(active_cells__value.IsUndefined() || active_cells__value.IsWeakCell());
  }
  {
    Object cleared_cells__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, cleared_cells__value);
    CHECK(cleared_cells__value.IsUndefined() || cleared_cells__value.IsWeakCell());
  }
  {
    Object key_map__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, key_map__value);
  }
  {
    Object next_dirty__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, next_dirty__value);
    CHECK(next_dirty__value.IsUndefined() || next_dirty__value.IsJSFinalizationRegistry());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSWeakRefVerify(JSWeakRef o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSWeakRef(isolate));
  {
    Object target__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, target__value);
    CHECK(target__value.IsJSReceiver() || target__value.IsSymbol() || target__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::ArrayBoilerplateDescriptionVerify(ArrayBoilerplateDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsArrayBoilerplateDescription(isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object constant_elements__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, constant_elements__value);
    CHECK(constant_elements__value.IsFixedArrayBase());
  }
}
void TorqueGeneratedClassVerifiers::RegExpBoilerplateDescriptionVerify(RegExpBoilerplateDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsRegExpBoilerplateDescription(isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsFixedArray());
  }
  {
    Object source__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, source__value);
    CHECK(source__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::MegaDomHandlerVerify(MegaDomHandler o, Isolate* isolate) {
  CHECK(o.IsMegaDomHandler(isolate));
  {
    MaybeObject accessor__value = TaggedField<MaybeObject>::load(o, 8);
    MaybeObject::VerifyMaybeObjectPointer(isolate, accessor__value);
    CHECK(accessor__value.IsCleared() || (!accessor__value.IsWeak() && accessor__value.GetHeapObjectOrSmi().IsHeapObject()) || (!accessor__value.IsWeak() && accessor__value.GetHeapObjectOrSmi().IsSmi()) || accessor__value.IsWeak());
  }
  {
    MaybeObject context__value = TaggedField<MaybeObject>::load(o, 16);
    MaybeObject::VerifyMaybeObjectPointer(isolate, context__value);
    CHECK(context__value.IsCleared() || (!context__value.IsWeak() && context__value.GetHeapObjectOrSmi().IsHeapObject()) || (!context__value.IsWeak() && context__value.GetHeapObjectOrSmi().IsSmi()) || context__value.IsWeak());
  }
}
void TorqueGeneratedClassVerifiers::MicrotaskVerify(Microtask o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsMicrotask(isolate));
}
void TorqueGeneratedClassVerifiers::CallbackTaskVerify(CallbackTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsCallbackTask(isolate));
  {
    Object callback__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, callback__value);
    CHECK(callback__value.IsForeign());
  }
  {
    Object data__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::CallableTaskVerify(CallableTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsCallableTask(isolate));
  {
    Object callable__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, callable__value);
    CHECK(callable__value.IsJSReceiver());
  }
  {
    Object context__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
}
void TorqueGeneratedClassVerifiers::ModuleVerify(Module o, Isolate* isolate) {
  CHECK(o.IsModule(isolate));
  {
    Object exports__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, exports__value);
    CHECK(exports__value.IsObjectHashTable());
  }
  {
    Object hash__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, hash__value);
    CHECK(hash__value.IsSmi());
  }
  {
    Object status__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, status__value);
    CHECK(status__value.IsSmi());
  }
  {
    Object module_namespace__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, module_namespace__value);
    CHECK(module_namespace__value.IsUndefined() || module_namespace__value.IsJSModuleNamespace());
  }
  {
    Object exception__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, exception__value);
  }
  {
    Object top_level_capability__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, top_level_capability__value);
    CHECK(top_level_capability__value.IsUndefined() || top_level_capability__value.IsJSPromise());
  }
}
void TorqueGeneratedClassVerifiers::JSModuleNamespaceVerify(JSModuleNamespace o, Isolate* isolate) {
  o.JSSpecialObjectVerify(isolate);
  CHECK(o.IsJSModuleNamespace(isolate));
  {
    Object module__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, module__value);
    CHECK(module__value.IsModule());
  }
}
void TorqueGeneratedClassVerifiers::ScriptOrModuleVerify(ScriptOrModule o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsScriptOrModule(isolate));
  {
    Object resource_name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, resource_name__value);
  }
  {
    Object host_defined_options__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, host_defined_options__value);
    CHECK(host_defined_options__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::PromiseReactionVerify(PromiseReaction o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPromiseReaction(isolate));
  {
    Object next__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, next__value);
    CHECK(next__value.IsZero() || next__value.IsPromiseReaction());
  }
  {
    Object reject_handler__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, reject_handler__value);
    CHECK(reject_handler__value.IsUndefined() || reject_handler__value.IsCallableApiObject() || reject_handler__value.IsCallableJSProxy() || reject_handler__value.IsJSFunction() || reject_handler__value.IsJSBoundFunction() || reject_handler__value.IsJSWrappedFunction());
  }
  {
    Object fulfill_handler__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, fulfill_handler__value);
    CHECK(fulfill_handler__value.IsUndefined() || fulfill_handler__value.IsCallableApiObject() || fulfill_handler__value.IsCallableJSProxy() || fulfill_handler__value.IsJSFunction() || fulfill_handler__value.IsJSBoundFunction() || fulfill_handler__value.IsJSWrappedFunction());
  }
  {
    Object promise_or_capability__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, promise_or_capability__value);
    CHECK(promise_or_capability__value.IsUndefined() || promise_or_capability__value.IsJSPromise() || promise_or_capability__value.IsPromiseCapability());
  }
  {
    Object continuation_preserved_embedder_data__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, continuation_preserved_embedder_data__value);
  }
}
void TorqueGeneratedClassVerifiers::PromiseReactionJobTaskVerify(PromiseReactionJobTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsPromiseReactionJobTask(isolate));
  {
    Object argument__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, argument__value);
  }
  {
    Object context__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object handler__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, handler__value);
    CHECK(handler__value.IsUndefined() || handler__value.IsCallableApiObject() || handler__value.IsCallableJSProxy() || handler__value.IsJSFunction() || handler__value.IsJSBoundFunction() || handler__value.IsJSWrappedFunction());
  }
  {
    Object promise_or_capability__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, promise_or_capability__value);
    CHECK(promise_or_capability__value.IsUndefined() || promise_or_capability__value.IsJSPromise() || promise_or_capability__value.IsPromiseCapability());
  }
  {
    Object continuation_preserved_embedder_data__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, continuation_preserved_embedder_data__value);
  }
}
void TorqueGeneratedClassVerifiers::PromiseFulfillReactionJobTaskVerify(PromiseFulfillReactionJobTask o, Isolate* isolate) {
  o.PromiseReactionJobTaskVerify(isolate);
  CHECK(o.IsPromiseFulfillReactionJobTask(isolate));
}
void TorqueGeneratedClassVerifiers::PromiseRejectReactionJobTaskVerify(PromiseRejectReactionJobTask o, Isolate* isolate) {
  o.PromiseReactionJobTaskVerify(isolate);
  CHECK(o.IsPromiseRejectReactionJobTask(isolate));
}
void TorqueGeneratedClassVerifiers::PromiseResolveThenableJobTaskVerify(PromiseResolveThenableJobTask o, Isolate* isolate) {
  o.MicrotaskVerify(isolate);
  CHECK(o.IsPromiseResolveThenableJobTask(isolate));
  {
    Object context__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, context__value);
    CHECK(context__value.IsContext());
  }
  {
    Object promise_to_resolve__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, promise_to_resolve__value);
    CHECK(promise_to_resolve__value.IsJSPromise());
  }
  {
    Object thenable__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, thenable__value);
    CHECK(thenable__value.IsJSReceiver());
  }
  {
    Object then__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, then__value);
    CHECK(then__value.IsJSReceiver());
  }
}
void TorqueGeneratedClassVerifiers::PropertyArrayVerify(PropertyArray o, Isolate* isolate) {
  CHECK(o.IsPropertyArray(isolate));
  {
    Object length_and_hash__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, length_and_hash__value);
    CHECK(length_and_hash__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::PropertyCellVerify(PropertyCell o, Isolate* isolate) {
  CHECK(o.IsPropertyCell(isolate));
  {
    Object name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsString() || name__value.IsPublicSymbol() || name__value.IsPrivateSymbol());
  }
  {
    Object property_details_raw__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, property_details_raw__value);
    CHECK(property_details_raw__value.IsSmi());
  }
  {
    Object value__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, value__value);
  }
  {
    Object dependent_code__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, dependent_code__value);
    CHECK(dependent_code__value.IsDependentCode());
  }
}
void TorqueGeneratedClassVerifiers::PropertyDescriptorObjectVerify(PropertyDescriptorObject o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPropertyDescriptorObject(isolate));
  {
    Object flags__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object value__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsJSReceiver() || value__value.IsSmi() || value__value.IsHeapNumber() || value__value.IsBigInt() || value__value.IsString() || value__value.IsSymbol() || value__value.IsTrue() || value__value.IsFalse() || value__value.IsNull() || value__value.IsUndefined() || value__value.IsTheHole());
  }
  {
    Object get__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, get__value);
    CHECK(get__value.IsJSReceiver() || get__value.IsSmi() || get__value.IsHeapNumber() || get__value.IsBigInt() || get__value.IsString() || get__value.IsSymbol() || get__value.IsTrue() || get__value.IsFalse() || get__value.IsNull() || get__value.IsUndefined() || get__value.IsTheHole());
  }
  {
    Object set__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, set__value);
    CHECK(set__value.IsJSReceiver() || set__value.IsSmi() || set__value.IsHeapNumber() || set__value.IsBigInt() || set__value.IsString() || set__value.IsSymbol() || set__value.IsTrue() || set__value.IsFalse() || set__value.IsNull() || set__value.IsUndefined() || set__value.IsTheHole());
  }
}
void TorqueGeneratedClassVerifiers::PrototypeInfoVerify(PrototypeInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsPrototypeInfo(isolate));
  {
    Object module_namespace__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, module_namespace__value);
    CHECK(module_namespace__value.IsUndefined() || module_namespace__value.IsJSModuleNamespace());
  }
  {
    Object prototype_users__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, prototype_users__value);
    CHECK(prototype_users__value.IsZero() || prototype_users__value.IsWeakArrayList());
  }
  {
    Object prototype_chain_enum_cache__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, prototype_chain_enum_cache__value);
    CHECK(prototype_chain_enum_cache__value.IsUndefined() || prototype_chain_enum_cache__value.IsFixedArray() || prototype_chain_enum_cache__value.IsZero());
  }
  {
    Object registry_slot__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, registry_slot__value);
    CHECK(registry_slot__value.IsSmi());
  }
  {
    Object bit_field__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, bit_field__value);
    CHECK(bit_field__value.IsSmi());
  }
  {
    MaybeObject object_create_map__value = TaggedField<MaybeObject>::load(o, 48);
    MaybeObject::VerifyMaybeObjectPointer(isolate, object_create_map__value);
    CHECK(object_create_map__value.IsCleared() || (!object_create_map__value.IsWeak() && object_create_map__value.GetHeapObjectOrSmi().IsUndefined()) || (object_create_map__value.IsWeak() && object_create_map__value.GetHeapObjectOrSmi().IsMap()));
  }
}
void TorqueGeneratedClassVerifiers::ScriptVerify(Script o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsScript(isolate));
  {
    Object source__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, source__value);
    CHECK(source__value.IsString() || source__value.IsUndefined());
  }
  {
    Object name__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, name__value);
  }
  {
    Object line_offset__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, line_offset__value);
    CHECK(line_offset__value.IsSmi());
  }
  {
    Object column_offset__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, column_offset__value);
    CHECK(column_offset__value.IsSmi());
  }
  {
    Object context_data__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, context_data__value);
    CHECK(context_data__value.IsSmi() || context_data__value.IsSymbol() || context_data__value.IsUndefined());
  }
  {
    Object script_type__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, script_type__value);
    CHECK(script_type__value.IsSmi());
  }
  {
    Object line_ends__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, line_ends__value);
    CHECK(line_ends__value.IsSmi() || line_ends__value.IsFixedArray());
  }
  {
    Object id__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, id__value);
    CHECK(id__value.IsSmi());
  }
  {
    Object eval_from_shared_or_wrapped_arguments__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, eval_from_shared_or_wrapped_arguments__value);
    CHECK(eval_from_shared_or_wrapped_arguments__value.IsUndefined() || eval_from_shared_or_wrapped_arguments__value.IsFixedArray() || eval_from_shared_or_wrapped_arguments__value.IsSharedFunctionInfo());
  }
  {
    Object eval_from_position__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, eval_from_position__value);
    CHECK(eval_from_position__value.IsSmi() || eval_from_position__value.IsForeign());
  }
  {
    Object shared_function_infos__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, shared_function_infos__value);
    CHECK(shared_function_infos__value.IsWeakFixedArray() || shared_function_infos__value.IsWeakArrayList());
  }
  {
    Object compiled_lazy_function_positions__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, compiled_lazy_function_positions__value);
    CHECK(compiled_lazy_function_positions__value.IsUndefined() || compiled_lazy_function_positions__value.IsArrayList());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object source_url__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, source_url__value);
    CHECK(source_url__value.IsString() || source_url__value.IsUndefined());
  }
  {
    Object source_mapping_url__value = TaggedField<Object>::load(o, 120);
    Object::VerifyPointer(isolate, source_mapping_url__value);
  }
  {
    Object host_defined_options__value = TaggedField<Object>::load(o, 128);
    Object::VerifyPointer(isolate, host_defined_options__value);
    CHECK(host_defined_options__value.IsFixedArray());
  }
  {
    Object source_hash__value = TaggedField<Object>::load(o, 136);
    Object::VerifyPointer(isolate, source_hash__value);
    CHECK(source_hash__value.IsString() || source_hash__value.IsUndefined());
  }
}
void TorqueGeneratedClassVerifiers::PreparseDataVerify(PreparseData o, Isolate* isolate) {
  CHECK(o.IsPreparseData(isolate));
}
void TorqueGeneratedClassVerifiers::InterpreterDataVerify(InterpreterData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsInterpreterData(isolate));
  {
    Object bytecode_array__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, bytecode_array__value);
    CHECK(bytecode_array__value.IsBytecodeArray());
  }
  {
    Object interpreter_trampoline__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, interpreter_trampoline__value);
    CHECK(interpreter_trampoline__value.IsCode());
  }
}
void TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify(SharedFunctionInfo o, Isolate* isolate) {
  CHECK(o.IsSharedFunctionInfo(isolate));
  {
    Object function_data__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, function_data__value);
  }
  {
    Object name_or_scope_info__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, name_or_scope_info__value);
    CHECK(name_or_scope_info__value.IsString() || name_or_scope_info__value.IsNoSharedNameSentinel() || name_or_scope_info__value.IsScopeInfo());
  }
  {
    Object outer_scope_info_or_feedback_metadata__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, outer_scope_info_or_feedback_metadata__value);
    CHECK(outer_scope_info_or_feedback_metadata__value.IsHeapObject());
  }
  {
    Object script_or_debug_info__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, script_or_debug_info__value);
    CHECK(script_or_debug_info__value.IsUndefined() || script_or_debug_info__value.IsDebugInfo() || script_or_debug_info__value.IsScript());
  }
}
void TorqueGeneratedClassVerifiers::UncompiledDataVerify(UncompiledData o, Isolate* isolate) {
  CHECK(o.IsUncompiledData(isolate));
  {
    Object inferred_name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, inferred_name__value);
    CHECK(inferred_name__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataVerify(UncompiledDataWithoutPreparseData o, Isolate* isolate) {
  o.UncompiledDataVerify(isolate);
  CHECK(o.IsUncompiledDataWithoutPreparseData(isolate));
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataVerify(UncompiledDataWithPreparseData o, Isolate* isolate) {
  o.UncompiledDataVerify(isolate);
  CHECK(o.IsUncompiledDataWithPreparseData(isolate));
  {
    Object preparse_data__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, preparse_data__value);
    CHECK(preparse_data__value.IsPreparseData());
  }
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithoutPreparseDataWithJobVerify(UncompiledDataWithoutPreparseDataWithJob o, Isolate* isolate) {
  o.UncompiledDataWithoutPreparseDataVerify(isolate);
  CHECK(o.IsUncompiledDataWithoutPreparseDataWithJob(isolate));
}
void TorqueGeneratedClassVerifiers::UncompiledDataWithPreparseDataAndJobVerify(UncompiledDataWithPreparseDataAndJob o, Isolate* isolate) {
  o.UncompiledDataWithPreparseDataVerify(isolate);
  CHECK(o.IsUncompiledDataWithPreparseDataAndJob(isolate));
}
void TorqueGeneratedClassVerifiers::OnHeapBasicBlockProfilerDataVerify(OnHeapBasicBlockProfilerData o, Isolate* isolate) {
  CHECK(o.IsOnHeapBasicBlockProfilerData(isolate));
  {
    Object block_ids__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, block_ids__value);
    CHECK(block_ids__value.IsByteArray());
  }
  {
    Object counts__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, counts__value);
    CHECK(counts__value.IsByteArray());
  }
  {
    Object branches__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, branches__value);
    CHECK(branches__value.IsByteArray());
  }
  {
    Object name__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsString());
  }
  {
    Object schedule__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, schedule__value);
    CHECK(schedule__value.IsString());
  }
  {
    Object code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, code__value);
    CHECK(code__value.IsString());
  }
  {
    Object hash__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, hash__value);
    CHECK(hash__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SourceTextModuleVerify(SourceTextModule o, Isolate* isolate) {
  o.ModuleVerify(isolate);
  CHECK(o.IsSourceTextModule(isolate));
  {
    Object code__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, code__value);
    CHECK(code__value.IsJSFunction() || code__value.IsJSGeneratorObject() || code__value.IsSharedFunctionInfo());
  }
  {
    Object regular_exports__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, regular_exports__value);
    CHECK(regular_exports__value.IsFixedArray());
  }
  {
    Object regular_imports__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, regular_imports__value);
    CHECK(regular_imports__value.IsFixedArray());
  }
  {
    Object requested_modules__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, requested_modules__value);
    CHECK(requested_modules__value.IsFixedArray());
  }
  {
    Object import_meta__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, import_meta__value);
    CHECK(import_meta__value.IsJSObject() || import_meta__value.IsTheHole());
  }
  {
    Object cycle_root__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, cycle_root__value);
    CHECK(cycle_root__value.IsTheHole() || cycle_root__value.IsSourceTextModule());
  }
  {
    Object async_parent_modules__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, async_parent_modules__value);
    CHECK(async_parent_modules__value.IsArrayList());
  }
  {
    Object dfs_index__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, dfs_index__value);
    CHECK(dfs_index__value.IsSmi());
  }
  {
    Object dfs_ancestor_index__value = TaggedField<Object>::load(o, 120);
    Object::VerifyPointer(isolate, dfs_ancestor_index__value);
    CHECK(dfs_ancestor_index__value.IsSmi());
  }
  {
    Object pending_async_dependencies__value = TaggedField<Object>::load(o, 128);
    Object::VerifyPointer(isolate, pending_async_dependencies__value);
    CHECK(pending_async_dependencies__value.IsSmi());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 136);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ModuleRequestVerify(ModuleRequest o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsModuleRequest(isolate));
  {
    Object specifier__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, specifier__value);
    CHECK(specifier__value.IsString());
  }
  {
    Object import_assertions__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, import_assertions__value);
    CHECK(import_assertions__value.IsFixedArray());
  }
  {
    Object position__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, position__value);
    CHECK(position__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SourceTextModuleInfoEntryVerify(SourceTextModuleInfoEntry o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsSourceTextModuleInfoEntry(isolate));
  {
    Object export_name__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, export_name__value);
    CHECK(export_name__value.IsString() || export_name__value.IsUndefined());
  }
  {
    Object local_name__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, local_name__value);
    CHECK(local_name__value.IsString() || local_name__value.IsUndefined());
  }
  {
    Object import_name__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, import_name__value);
    CHECK(import_name__value.IsString() || import_name__value.IsUndefined());
  }
  {
    Object module_request__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, module_request__value);
    CHECK(module_request__value.IsSmi());
  }
  {
    Object cell_index__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, cell_index__value);
    CHECK(cell_index__value.IsSmi());
  }
  {
    Object beg_pos__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, beg_pos__value);
    CHECK(beg_pos__value.IsSmi());
  }
  {
    Object end_pos__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, end_pos__value);
    CHECK(end_pos__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ConsStringVerify(ConsString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsConsString(isolate));
  {
    Object first__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, first__value);
    CHECK(first__value.IsString());
  }
  {
    Object second__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, second__value);
    CHECK(second__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::ExternalStringVerify(ExternalString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsExternalString(isolate));
}
void TorqueGeneratedClassVerifiers::ExternalOneByteStringVerify(ExternalOneByteString o, Isolate* isolate) {
  o.ExternalStringVerify(isolate);
  CHECK(o.IsExternalOneByteString(isolate));
}
void TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify(ExternalTwoByteString o, Isolate* isolate) {
  o.ExternalStringVerify(isolate);
  CHECK(o.IsExternalTwoByteString(isolate));
}
void TorqueGeneratedClassVerifiers::InternalizedStringVerify(InternalizedString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsInternalizedString(isolate));
}
void TorqueGeneratedClassVerifiers::SeqStringVerify(SeqString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsSeqString(isolate));
}
void TorqueGeneratedClassVerifiers::SeqOneByteStringVerify(SeqOneByteString o, Isolate* isolate) {
  o.SeqStringVerify(isolate);
  CHECK(o.IsSeqOneByteString(isolate));
}
void TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(SeqTwoByteString o, Isolate* isolate) {
  o.SeqStringVerify(isolate);
  CHECK(o.IsSeqTwoByteString(isolate));
}
void TorqueGeneratedClassVerifiers::SlicedStringVerify(SlicedString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsSlicedString(isolate));
  {
    Object parent__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(parent__value.IsString());
  }
  {
    Object offset__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, offset__value);
    CHECK(offset__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ThinStringVerify(ThinString o, Isolate* isolate) {
  o.StringVerify(isolate);
  CHECK(o.IsThinString(isolate));
  {
    Object actual__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, actual__value);
    CHECK(actual__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::Tuple2Verify(Tuple2 o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsTuple2(isolate));
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
  CHECK(o.IsSyntheticModule(isolate));
  {
    Object name__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, name__value);
    CHECK(name__value.IsString());
  }
  {
    Object export_names__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, export_names__value);
    CHECK(export_names__value.IsFixedArray());
  }
  {
    Object evaluation_steps__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, evaluation_steps__value);
    CHECK(evaluation_steps__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::TemplateObjectDescriptionVerify(TemplateObjectDescription o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsTemplateObjectDescription(isolate));
  {
    Object raw_strings__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, raw_strings__value);
    CHECK(raw_strings__value.IsFixedArray());
  }
  {
    Object cooked_strings__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, cooked_strings__value);
    CHECK(cooked_strings__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::TemplateInfoVerify(TemplateInfo o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsTemplateInfo(isolate));
  {
    Object tag__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, tag__value);
    CHECK(tag__value.IsSmi());
  }
  {
    Object serial_number__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, serial_number__value);
    CHECK(serial_number__value.IsSmi());
  }
  {
    Object number_of_properties__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, number_of_properties__value);
    CHECK(number_of_properties__value.IsSmi());
  }
  {
    Object property_list__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, property_list__value);
    CHECK(property_list__value.IsUndefined() || property_list__value.IsTemplateList());
  }
  {
    Object property_accessors__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, property_accessors__value);
    CHECK(property_accessors__value.IsUndefined() || property_accessors__value.IsTemplateList());
  }
}
void TorqueGeneratedClassVerifiers::FunctionTemplateRareDataVerify(FunctionTemplateRareData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsFunctionTemplateRareData(isolate));
  {
    Object prototype_template__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, prototype_template__value);
    CHECK(prototype_template__value.IsUndefined() || prototype_template__value.IsObjectTemplateInfo());
  }
  {
    Object prototype_provider_template__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, prototype_provider_template__value);
    CHECK(prototype_provider_template__value.IsUndefined() || prototype_provider_template__value.IsFunctionTemplateInfo());
  }
  {
    Object parent_template__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, parent_template__value);
    CHECK(parent_template__value.IsUndefined() || parent_template__value.IsFunctionTemplateInfo());
  }
  {
    Object named_property_handler__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, named_property_handler__value);
    CHECK(named_property_handler__value.IsUndefined() || named_property_handler__value.IsInterceptorInfo());
  }
  {
    Object indexed_property_handler__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, indexed_property_handler__value);
    CHECK(indexed_property_handler__value.IsUndefined() || indexed_property_handler__value.IsInterceptorInfo());
  }
  {
    Object instance_template__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, instance_template__value);
    CHECK(instance_template__value.IsUndefined() || instance_template__value.IsObjectTemplateInfo());
  }
  {
    Object instance_call_handler__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, instance_call_handler__value);
    CHECK(instance_call_handler__value.IsUndefined() || instance_call_handler__value.IsCallHandlerInfo());
  }
  {
    Object access_check_info__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, access_check_info__value);
    CHECK(access_check_info__value.IsUndefined() || access_check_info__value.IsAccessCheckInfo());
  }
  {
    Object c_function_overloads__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, c_function_overloads__value);
    CHECK(c_function_overloads__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::FunctionTemplateInfoVerify(FunctionTemplateInfo o, Isolate* isolate) {
  o.TemplateInfoVerify(isolate);
  CHECK(o.IsFunctionTemplateInfo(isolate));
  {
    Object call_code__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, call_code__value);
    CHECK(call_code__value.IsUndefined() || call_code__value.IsCallHandlerInfo());
  }
  {
    Object class_name__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, class_name__value);
    CHECK(class_name__value.IsString() || class_name__value.IsUndefined());
  }
  {
    Object signature__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, signature__value);
    CHECK(signature__value.IsUndefined() || signature__value.IsFunctionTemplateInfo());
  }
  {
    Object rare_data__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, rare_data__value);
    CHECK(rare_data__value.IsUndefined() || rare_data__value.IsFunctionTemplateRareData());
  }
  {
    Object shared_function_info__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, shared_function_info__value);
    CHECK(shared_function_info__value.IsUndefined() || shared_function_info__value.IsSharedFunctionInfo());
  }
  {
    Object flag__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, flag__value);
    CHECK(flag__value.IsSmi());
  }
  {
    Object length__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, length__value);
    CHECK(length__value.IsSmi());
  }
  {
    Object cached_property_name__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, cached_property_name__value);
  }
  {
    Object instance_type__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, instance_type__value);
    CHECK(instance_type__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ObjectTemplateInfoVerify(ObjectTemplateInfo o, Isolate* isolate) {
  o.TemplateInfoVerify(isolate);
  CHECK(o.IsObjectTemplateInfo(isolate));
  {
    Object constructor__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, constructor__value);
    CHECK(constructor__value.IsUndefined() || constructor__value.IsFunctionTemplateInfo());
  }
  {
    Object data__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::TurbofanTypeVerify(TurbofanType o, Isolate* isolate) {
  CHECK(o.IsTurbofanType(isolate));
}
void TorqueGeneratedClassVerifiers::TurbofanBitsetTypeVerify(TurbofanBitsetType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(o.IsTurbofanBitsetType(isolate));
}
void TorqueGeneratedClassVerifiers::TurbofanUnionTypeVerify(TurbofanUnionType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(o.IsTurbofanUnionType(isolate));
  {
    Object type1__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, type1__value);
    CHECK(type1__value.IsTurbofanType());
  }
  {
    Object type2__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, type2__value);
    CHECK(type2__value.IsTurbofanType());
  }
}
void TorqueGeneratedClassVerifiers::TurbofanRangeTypeVerify(TurbofanRangeType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(o.IsTurbofanRangeType(isolate));
}
void TorqueGeneratedClassVerifiers::TurbofanHeapConstantTypeVerify(TurbofanHeapConstantType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(o.IsTurbofanHeapConstantType(isolate));
  {
    Object constant__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, constant__value);
    CHECK(constant__value.IsHeapObject());
  }
}
void TorqueGeneratedClassVerifiers::TurbofanOtherNumberConstantTypeVerify(TurbofanOtherNumberConstantType o, Isolate* isolate) {
  o.TurbofanTypeVerify(isolate);
  CHECK(o.IsTurbofanOtherNumberConstantType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftTypeVerify(TurboshaftType o, Isolate* isolate) {
  CHECK(o.IsTurboshaftType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord32TypeVerify(TurboshaftWord32Type o, Isolate* isolate) {
  o.TurboshaftTypeVerify(isolate);
  CHECK(o.IsTurboshaftWord32Type(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord32RangeTypeVerify(TurboshaftWord32RangeType o, Isolate* isolate) {
  o.TurboshaftWord32TypeVerify(isolate);
  CHECK(o.IsTurboshaftWord32RangeType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord32SetTypeVerify(TurboshaftWord32SetType o, Isolate* isolate) {
  o.TurboshaftWord32TypeVerify(isolate);
  CHECK(o.IsTurboshaftWord32SetType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord64TypeVerify(TurboshaftWord64Type o, Isolate* isolate) {
  o.TurboshaftTypeVerify(isolate);
  CHECK(o.IsTurboshaftWord64Type(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord64RangeTypeVerify(TurboshaftWord64RangeType o, Isolate* isolate) {
  o.TurboshaftWord64TypeVerify(isolate);
  CHECK(o.IsTurboshaftWord64RangeType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftWord64SetTypeVerify(TurboshaftWord64SetType o, Isolate* isolate) {
  o.TurboshaftWord64TypeVerify(isolate);
  CHECK(o.IsTurboshaftWord64SetType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftFloat64TypeVerify(TurboshaftFloat64Type o, Isolate* isolate) {
  o.TurboshaftTypeVerify(isolate);
  CHECK(o.IsTurboshaftFloat64Type(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftFloat64RangeTypeVerify(TurboshaftFloat64RangeType o, Isolate* isolate) {
  o.TurboshaftFloat64TypeVerify(isolate);
  CHECK(o.IsTurboshaftFloat64RangeType(isolate));
}
void TorqueGeneratedClassVerifiers::TurboshaftFloat64SetTypeVerify(TurboshaftFloat64SetType o, Isolate* isolate) {
  o.TurboshaftFloat64TypeVerify(isolate);
  CHECK(o.IsTurboshaftFloat64SetType(isolate));
}
void TorqueGeneratedClassVerifiers::InternalClassVerify(InternalClass o, Isolate* isolate) {
  CHECK(o.IsInternalClass(isolate));
  {
    Object a__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, a__value);
    CHECK(a__value.IsSmi());
  }
  {
    Object b__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(b__value.IsSmi() || b__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::SmiPairVerify(SmiPair o, Isolate* isolate) {
  CHECK(o.IsSmiPair(isolate));
  {
    Object a__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, a__value);
    CHECK(a__value.IsSmi());
  }
  {
    Object b__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(b__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SmiBoxVerify(SmiBox o, Isolate* isolate) {
  CHECK(o.IsSmiBox(isolate));
  {
    Object value__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, value__value);
    CHECK(value__value.IsSmi());
  }
  {
    Object unrelated__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, unrelated__value);
    CHECK(unrelated__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ExportedSubClassBaseVerify(ExportedSubClassBase o, Isolate* isolate) {
  CHECK(o.IsExportedSubClassBase(isolate));
  {
    Object a__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, a__value);
    CHECK(a__value.IsHeapObject());
  }
  {
    Object b__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(b__value.IsHeapObject());
  }
}
void TorqueGeneratedClassVerifiers::ExportedSubClassVerify(ExportedSubClass o, Isolate* isolate) {
  o.ExportedSubClassBaseVerify(isolate);
  CHECK(o.IsExportedSubClass(isolate));
  {
    Object e_field__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, e_field__value);
    CHECK(e_field__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AbstractInternalClassVerify(AbstractInternalClass o, Isolate* isolate) {
  CHECK(o.IsAbstractInternalClass(isolate));
}
void TorqueGeneratedClassVerifiers::AbstractInternalClassSubclass1Verify(AbstractInternalClassSubclass1 o, Isolate* isolate) {
  o.AbstractInternalClassVerify(isolate);
  CHECK(o.IsAbstractInternalClassSubclass1(isolate));
}
void TorqueGeneratedClassVerifiers::AbstractInternalClassSubclass2Verify(AbstractInternalClassSubclass2 o, Isolate* isolate) {
  o.AbstractInternalClassVerify(isolate);
  CHECK(o.IsAbstractInternalClassSubclass2(isolate));
}
void TorqueGeneratedClassVerifiers::InternalClassWithSmiElementsVerify(InternalClassWithSmiElements o, Isolate* isolate) {
  o.FixedArrayBaseVerify(isolate);
  CHECK(o.IsInternalClassWithSmiElements(isolate));
  {
    Object data__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsSmi());
  }
  {
    Object object__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, object__value);
    CHECK(object__value.IsOddball());
  }
  intptr_t entries__offset, entries__length;
  std::tie(std::ignore, entries__offset, entries__length) = TqRuntimeFieldSliceInternalClassWithSmiElementsEntries(o);
  CHECK_EQ(entries__offset, static_cast<int>(entries__offset));
  CHECK_EQ(entries__length, static_cast<int>(entries__length));
  for (int i = 0; i < static_cast<int>(entries__length); ++i) {
    Object entries__value = TaggedField<Object>::load(o, static_cast<int>(entries__offset) + i * kTaggedSize);
    Object::VerifyPointer(isolate, entries__value);
    CHECK(entries__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::InternalClassWithStructElementsVerify(InternalClassWithStructElements o, Isolate* isolate) {
  CHECK(o.IsInternalClassWithStructElements(isolate));
  {
    Object count__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, count__value);
    CHECK(count__value.IsSmi());
  }
  {
    Object data__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, data__value);
    CHECK(data__value.IsSmi());
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
    CHECK(entries__value.IsSmi());
  }
  intptr_t more_entries__offset, more_entries__length;
  std::tie(std::ignore, more_entries__offset, more_entries__length) = TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(o);
  CHECK_EQ(more_entries__offset, static_cast<int>(more_entries__offset));
  CHECK_EQ(more_entries__length, static_cast<int>(more_entries__length));
  for (int i = 0; i < static_cast<int>(more_entries__length); ++i) {
    Object a__value = TaggedField<Object>::load(o, static_cast<int>(more_entries__offset) + 0 + i * 16);
    Object::VerifyPointer(isolate, a__value);
    CHECK(a__value.IsSmi());
    Object b__value = TaggedField<Object>::load(o, static_cast<int>(more_entries__offset) + 8 + i * 16);
    Object::VerifyPointer(isolate, b__value);
    CHECK(b__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::ExportedSubClass2Verify(ExportedSubClass2 o, Isolate* isolate) {
  o.ExportedSubClassBaseVerify(isolate);
  CHECK(o.IsExportedSubClass2(isolate));
  {
    Object z_field__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, z_field__value);
    CHECK(z_field__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::SortStateVerify(SortState o, Isolate* isolate) {
  CHECK(o.IsSortState(isolate));
  {
    Object receiver__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, receiver__value);
    CHECK(receiver__value.IsJSReceiver());
  }
  {
    Object initialReceiverMap__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, initialReceiverMap__value);
    CHECK(initialReceiverMap__value.IsMap());
  }
  {
    Object initialReceiverLength__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, initialReceiverLength__value);
    CHECK(initialReceiverLength__value.IsSmi() || initialReceiverLength__value.IsHeapNumber());
  }
  {
    Object userCmpFn__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, userCmpFn__value);
    CHECK(userCmpFn__value.IsUndefined() || userCmpFn__value.IsCallableApiObject() || userCmpFn__value.IsCallableJSProxy() || userCmpFn__value.IsJSFunction() || userCmpFn__value.IsJSBoundFunction() || userCmpFn__value.IsJSWrappedFunction());
  }
  {
    Object sortComparePtr__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, sortComparePtr__value);
    CHECK(sortComparePtr__value.IsSmi());
  }
  {
    Object loadFn__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, loadFn__value);
    CHECK(loadFn__value.IsSmi());
  }
  {
    Object storeFn__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, storeFn__value);
    CHECK(storeFn__value.IsSmi());
  }
  {
    Object deleteFn__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, deleteFn__value);
    CHECK(deleteFn__value.IsSmi());
  }
  {
    Object canUseSameAccessorFn__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, canUseSameAccessorFn__value);
    CHECK(canUseSameAccessorFn__value.IsSmi());
  }
  {
    Object minGallop__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, minGallop__value);
    CHECK(minGallop__value.IsSmi());
  }
  {
    Object pendingRunsSize__value = TaggedField<Object>::load(o, 88);
    Object::VerifyPointer(isolate, pendingRunsSize__value);
    CHECK(pendingRunsSize__value.IsSmi());
  }
  {
    Object pendingRuns__value = TaggedField<Object>::load(o, 96);
    Object::VerifyPointer(isolate, pendingRuns__value);
    CHECK(pendingRuns__value.IsFixedArray());
  }
  {
    Object workArray__value = TaggedField<Object>::load(o, 104);
    Object::VerifyPointer(isolate, workArray__value);
    CHECK(workArray__value.IsFixedArray());
  }
  {
    Object tempArray__value = TaggedField<Object>::load(o, 112);
    Object::VerifyPointer(isolate, tempArray__value);
    CHECK(tempArray__value.IsFixedArray());
  }
  {
    Object sortLength__value = TaggedField<Object>::load(o, 120);
    Object::VerifyPointer(isolate, sortLength__value);
    CHECK(sortLength__value.IsSmi());
  }
  {
    Object numberOfUndefined__value = TaggedField<Object>::load(o, 128);
    Object::VerifyPointer(isolate, numberOfUndefined__value);
    CHECK(numberOfUndefined__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSV8BreakIteratorVerify(JSV8BreakIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSV8BreakIterator(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object break_iterator__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, break_iterator__value);
    CHECK(break_iterator__value.IsForeign());
  }
  {
    Object unicode_string__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(unicode_string__value.IsForeign());
  }
  {
    Object bound_adopt_text__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, bound_adopt_text__value);
    CHECK(bound_adopt_text__value.IsUndefined() || bound_adopt_text__value.IsJSFunction());
  }
  {
    Object bound_first__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, bound_first__value);
    CHECK(bound_first__value.IsUndefined() || bound_first__value.IsJSFunction());
  }
  {
    Object bound_next__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, bound_next__value);
    CHECK(bound_next__value.IsUndefined() || bound_next__value.IsJSFunction());
  }
  {
    Object bound_current__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, bound_current__value);
    CHECK(bound_current__value.IsUndefined() || bound_current__value.IsJSFunction());
  }
  {
    Object bound_break_type__value = TaggedField<Object>::load(o, 80);
    Object::VerifyPointer(isolate, bound_break_type__value);
    CHECK(bound_break_type__value.IsUndefined() || bound_break_type__value.IsJSFunction());
  }
}
void TorqueGeneratedClassVerifiers::JSCollatorVerify(JSCollator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSCollator(isolate));
  {
    Object icu_collator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_collator__value);
    CHECK(icu_collator__value.IsForeign());
  }
  {
    Object bound_compare__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, bound_compare__value);
    CHECK(bound_compare__value.IsUndefined() || bound_compare__value.IsJSFunction());
  }
  {
    Object locale__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
}
void TorqueGeneratedClassVerifiers::JSDateTimeFormatVerify(JSDateTimeFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSDateTimeFormat(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_locale__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(icu_locale__value.IsForeign());
  }
  {
    Object icu_simple_date_format__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_simple_date_format__value);
    CHECK(icu_simple_date_format__value.IsForeign());
  }
  {
    Object icu_date_interval_format__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, icu_date_interval_format__value);
    CHECK(icu_date_interval_format__value.IsForeign());
  }
  {
    Object bound_format__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, bound_format__value);
    CHECK(bound_format__value.IsUndefined() || bound_format__value.IsJSFunction());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSDisplayNamesVerify(JSDisplayNames o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSDisplayNames(isolate));
  {
    Object internal__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, internal__value);
    CHECK(internal__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSDurationFormatVerify(JSDurationFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSDurationFormat(isolate));
  {
    Object style_flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, style_flags__value);
    CHECK(style_flags__value.IsSmi());
  }
  {
    Object display_flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, display_flags__value);
    CHECK(display_flags__value.IsSmi());
  }
  {
    Object icu_locale__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(icu_locale__value.IsForeign());
  }
  {
    Object icu_number_formatter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(icu_number_formatter__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::JSListFormatVerify(JSListFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSListFormat(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_formatter__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_formatter__value);
    CHECK(icu_formatter__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSLocaleVerify(JSLocale o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSLocale(isolate));
  {
    Object icu_locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_locale__value);
    CHECK(icu_locale__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::JSNumberFormatVerify(JSNumberFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSNumberFormat(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_number_formatter__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(icu_number_formatter__value.IsForeign());
  }
  {
    Object bound_format__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, bound_format__value);
    CHECK(bound_format__value.IsUndefined() || bound_format__value.IsJSFunction());
  }
}
void TorqueGeneratedClassVerifiers::JSPluralRulesVerify(JSPluralRules o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSPluralRules(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
  {
    Object icu_plural_rules__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_plural_rules__value);
    CHECK(icu_plural_rules__value.IsForeign());
  }
  {
    Object icu_number_formatter__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, icu_number_formatter__value);
    CHECK(icu_number_formatter__value.IsForeign());
  }
}
void TorqueGeneratedClassVerifiers::JSRelativeTimeFormatVerify(JSRelativeTimeFormat o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSRelativeTimeFormat(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object numberingSystem__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, numberingSystem__value);
    CHECK(numberingSystem__value.IsString());
  }
  {
    Object icu_formatter__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, icu_formatter__value);
    CHECK(icu_formatter__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSSegmentIteratorVerify(JSSegmentIterator o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSSegmentIterator(isolate));
  {
    Object icu_break_iterator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(icu_break_iterator__value.IsForeign());
  }
  {
    Object unicode_string__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(unicode_string__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSSegmenterVerify(JSSegmenter o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSSegmenter(isolate));
  {
    Object locale__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, locale__value);
    CHECK(locale__value.IsString());
  }
  {
    Object icu_break_iterator__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(icu_break_iterator__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::JSSegmentsVerify(JSSegments o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsJSSegments(isolate));
  {
    Object icu_break_iterator__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, icu_break_iterator__value);
    CHECK(icu_break_iterator__value.IsForeign());
  }
  {
    Object unicode_string__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, unicode_string__value);
    CHECK(unicode_string__value.IsForeign());
  }
  {
    Object flags__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, flags__value);
    CHECK(flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmObjectVerify(WasmObject o, Isolate* isolate) {
  o.JSReceiverVerify(isolate);
  CHECK(o.IsWasmObject(isolate));
}
void TorqueGeneratedClassVerifiers::WasmArrayVerify(WasmArray o, Isolate* isolate) {
  o.WasmObjectVerify(isolate);
  CHECK(o.IsWasmArray(isolate));
}
void TorqueGeneratedClassVerifiers::WasmApiFunctionRefVerify(WasmApiFunctionRef o, Isolate* isolate) {
  CHECK(o.IsWasmApiFunctionRef(isolate));
  {
    Object native_context__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, native_context__value);
    CHECK(native_context__value.IsNativeContext());
  }
  {
    Object callable__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, callable__value);
    CHECK(callable__value.IsJSReceiver() || callable__value.IsUndefined());
  }
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsUndefined() || instance__value.IsWasmInstanceObject());
  }
  {
    Object suspend__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, suspend__value);
    CHECK(suspend__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmFunctionDataVerify(WasmFunctionData o, Isolate* isolate) {
  CHECK(o.IsWasmFunctionData(isolate));
  {
    Object internal__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, internal__value);
    CHECK(internal__value.IsWasmInternalFunction());
  }
  {
    Object wrapper_code__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, wrapper_code__value);
    CHECK(wrapper_code__value.IsCode());
  }
  {
    Object js_promise_flags__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, js_promise_flags__value);
    CHECK(js_promise_flags__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmExportedFunctionDataVerify(WasmExportedFunctionData o, Isolate* isolate) {
  o.WasmFunctionDataVerify(isolate);
  CHECK(o.IsWasmExportedFunctionData(isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsWasmInstanceObject());
  }
  {
    Object function_index__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, function_index__value);
    CHECK(function_index__value.IsSmi());
  }
  {
    Object wrapper_budget__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, wrapper_budget__value);
    CHECK(wrapper_budget__value.IsSmi());
  }
  {
    Object c_wrapper_code__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, c_wrapper_code__value);
    CHECK(c_wrapper_code__value.IsCode());
  }
  {
    Object packed_args_size__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, packed_args_size__value);
    CHECK(packed_args_size__value.IsSmi());
  }
  {
    Object canonical_type_index__value = TaggedField<Object>::load(o, 72);
    Object::VerifyPointer(isolate, canonical_type_index__value);
    CHECK(canonical_type_index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify(WasmJSFunctionData o, Isolate* isolate) {
  o.WasmFunctionDataVerify(isolate);
  CHECK(o.IsWasmJSFunctionData(isolate));
  {
    Object serialized_return_count__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, serialized_return_count__value);
    CHECK(serialized_return_count__value.IsSmi());
  }
  {
    Object serialized_parameter_count__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, serialized_parameter_count__value);
    CHECK(serialized_parameter_count__value.IsSmi());
  }
  {
    Object serialized_signature__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(serialized_signature__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmCapiFunctionDataVerify(WasmCapiFunctionData o, Isolate* isolate) {
  o.WasmFunctionDataVerify(isolate);
  CHECK(o.IsWasmCapiFunctionData(isolate));
  {
    Object embedder_data__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, embedder_data__value);
    CHECK(embedder_data__value.IsForeign());
  }
  {
    Object serialized_signature__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(serialized_signature__value.IsByteArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmResumeDataVerify(WasmResumeData o, Isolate* isolate) {
  CHECK(o.IsWasmResumeData(isolate));
  {
    Object suspender__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, suspender__value);
    CHECK(suspender__value.IsWasmSuspenderObject());
  }
  {
    Object on_resume__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, on_resume__value);
    CHECK(on_resume__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmIndirectFunctionTableVerify(WasmIndirectFunctionTable o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmIndirectFunctionTable(isolate));
  {
    Object sig_ids__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, sig_ids__value);
    CHECK(sig_ids__value.IsByteArray());
  }
  {
    Object targets__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, targets__value);
    CHECK(targets__value.IsByteArray());
  }
  {
    Object refs__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, refs__value);
    CHECK(refs__value.IsFixedArray());
  }
}
void TorqueGeneratedClassVerifiers::WasmContinuationObjectVerify(WasmContinuationObject o, Isolate* isolate) {
  CHECK(o.IsWasmContinuationObject(isolate));
  {
    Object stack__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, stack__value);
    CHECK(stack__value.IsForeign());
  }
  {
    Object parent__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(parent__value.IsUndefined() || parent__value.IsWasmContinuationObject());
  }
}
void TorqueGeneratedClassVerifiers::WasmSuspenderObjectVerify(WasmSuspenderObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmSuspenderObject(isolate));
  {
    Object continuation__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, continuation__value);
    CHECK(continuation__value.IsUndefined() || continuation__value.IsWasmContinuationObject());
  }
  {
    Object parent__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, parent__value);
    CHECK(parent__value.IsUndefined() || parent__value.IsWasmSuspenderObject());
  }
  {
    Object resume__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, resume__value);
    CHECK(resume__value.IsUndefined() || resume__value.IsJSObject());
  }
  {
    Object reject__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, reject__value);
    CHECK(reject__value.IsUndefined() || reject__value.IsJSObject());
  }
  {
    Object state__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, state__value);
    CHECK(state__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(WasmExceptionTag o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsWasmExceptionTag(isolate));
  {
    Object index__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, index__value);
    CHECK(index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmModuleObjectVerify(WasmModuleObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmModuleObject(isolate));
  {
    Object managed_native_module__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, managed_native_module__value);
    CHECK(managed_native_module__value.IsForeign());
  }
  {
    Object script__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, script__value);
    CHECK(script__value.IsScript());
  }
}
void TorqueGeneratedClassVerifiers::WasmTableObjectVerify(WasmTableObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmTableObject(isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsUndefined() || instance__value.IsWasmInstanceObject());
  }
  {
    Object entries__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, entries__value);
    CHECK(entries__value.IsFixedArray());
  }
  {
    Object current_length__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, current_length__value);
    CHECK(current_length__value.IsSmi());
  }
  {
    Object maximum_length__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, maximum_length__value);
    CHECK(maximum_length__value.IsSmi() || maximum_length__value.IsHeapNumber() || maximum_length__value.IsUndefined());
  }
  {
    Object dispatch_tables__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, dispatch_tables__value);
    CHECK(dispatch_tables__value.IsFixedArray());
  }
  {
    Object raw_type__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, raw_type__value);
    CHECK(raw_type__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmMemoryObjectVerify(WasmMemoryObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmMemoryObject(isolate));
  {
    Object array_buffer__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, array_buffer__value);
    CHECK(array_buffer__value.IsJSArrayBuffer());
  }
  {
    Object maximum_pages__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, maximum_pages__value);
    CHECK(maximum_pages__value.IsSmi());
  }
  {
    Object is_memory64__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, is_memory64__value);
    CHECK(is_memory64__value.IsSmi());
  }
  {
    Object instances__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, instances__value);
    CHECK(instances__value.IsUndefined() || instances__value.IsWeakArrayList());
  }
}
void TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify(WasmGlobalObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmGlobalObject(isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsUndefined() || instance__value.IsWasmInstanceObject());
  }
  {
    Object untagged_buffer__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, untagged_buffer__value);
    CHECK(untagged_buffer__value.IsUndefined() || untagged_buffer__value.IsJSArrayBuffer());
  }
  {
    Object tagged_buffer__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, tagged_buffer__value);
    CHECK(tagged_buffer__value.IsUndefined() || tagged_buffer__value.IsFixedArray());
  }
  {
    Object offset__value = TaggedField<Object>::load(o, 48);
    Object::VerifyPointer(isolate, offset__value);
    CHECK(offset__value.IsSmi());
  }
  {
    Object raw_type__value = TaggedField<Object>::load(o, 56);
    Object::VerifyPointer(isolate, raw_type__value);
    CHECK(raw_type__value.IsSmi());
  }
  {
    Object is_mutable__value = TaggedField<Object>::load(o, 64);
    Object::VerifyPointer(isolate, is_mutable__value);
    CHECK(is_mutable__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::WasmTagObjectVerify(WasmTagObject o, Isolate* isolate) {
  o.JSObjectVerify(isolate);
  CHECK(o.IsWasmTagObject(isolate));
  {
    Object serialized_signature__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, serialized_signature__value);
    CHECK(serialized_signature__value.IsByteArray());
  }
  {
    Object tag__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, tag__value);
    CHECK(tag__value.IsHeapObject());
  }
  {
    Object canonical_type_index__value = TaggedField<Object>::load(o, 40);
    Object::VerifyPointer(isolate, canonical_type_index__value);
    CHECK(canonical_type_index__value.IsSmi());
  }
}
void TorqueGeneratedClassVerifiers::AsmWasmDataVerify(AsmWasmData o, Isolate* isolate) {
  o.StructVerify(isolate);
  CHECK(o.IsAsmWasmData(isolate));
  {
    Object managed_native_module__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, managed_native_module__value);
    CHECK(managed_native_module__value.IsForeign());
  }
  {
    Object uses_bitset__value = TaggedField<Object>::load(o, 16);
    Object::VerifyPointer(isolate, uses_bitset__value);
    CHECK(uses_bitset__value.IsHeapNumber());
  }
}
void TorqueGeneratedClassVerifiers::WasmTypeInfoVerify(WasmTypeInfo o, Isolate* isolate) {
  CHECK(o.IsWasmTypeInfo(isolate));
  {
    Object instance__value = TaggedField<Object>::load(o, 24);
    Object::VerifyPointer(isolate, instance__value);
    CHECK(instance__value.IsWasmInstanceObject());
  }
  {
    Object supertypes_length__value = TaggedField<Object>::load(o, 32);
    Object::VerifyPointer(isolate, supertypes_length__value);
    CHECK(supertypes_length__value.IsSmi());
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
void TorqueGeneratedClassVerifiers::WasmStructVerify(WasmStruct o, Isolate* isolate) {
  o.WasmObjectVerify(isolate);
  CHECK(o.IsWasmStruct(isolate));
}
void TorqueGeneratedClassVerifiers::WasmStringViewIterVerify(WasmStringViewIter o, Isolate* isolate) {
  CHECK(o.IsWasmStringViewIter(isolate));
  {
    Object string__value = TaggedField<Object>::load(o, 8);
    Object::VerifyPointer(isolate, string__value);
    CHECK(string__value.IsString());
  }
}
}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"
#endif  // VERIFY_HEAP
