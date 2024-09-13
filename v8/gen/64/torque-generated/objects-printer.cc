#ifdef OBJECT_PRINT
#include <iosfwd>

#include "src/objects/all-objects-inl.h"

namespace v8 {
namespace internal {
template <>
void TorqueGeneratedJSObject<JSObject, JSReceiver>::JSObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSObjectWithEmbedderSlots<JSObjectWithEmbedderSlots, JSObject>::JSObjectWithEmbedderSlotsPrint(std::ostream& os) {
  this->PrintHeader(os, "JSObjectWithEmbedderSlots");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSPromise<JSPromise, JSObjectWithEmbedderSlots>::JSPromisePrint(std::ostream& os) {
  this->PrintHeader(os, "JSPromise");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - reactions_or_result: " << Brief(this->reactions_or_result());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSFunction<JSFunction, JSFunctionOrBoundFunctionOrWrappedFunction>::JSFunctionPrint(std::ostream& os) {
  this->PrintHeader(os, "JSFunction");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - shared_function_info: " << Brief(this->shared_function_info());
  os << "\n - context: " << Brief(this->context());
  os << "\n - feedback_cell: " << Brief(this->feedback_cell());
  os << "\n - prototype_or_initial_map: " << Brief(this->prototype_or_initial_map());
  os << '\n';
}

template <>
void TorqueGeneratedForeign<Foreign, HeapObject>::ForeignPrint(std::ostream& os) {
  this->PrintHeader(os, "Foreign");
  os << '\n';
}

template <>
void TorqueGeneratedJSProxy<JSProxy, JSReceiver>::JSProxyPrint(std::ostream& os) {
  this->PrintHeader(os, "JSProxy");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - target: " << Brief(this->target());
  os << "\n - handler: " << Brief(this->handler());
  os << '\n';
}

template <>
void TorqueGeneratedJSBoundFunction<JSBoundFunction, JSFunctionOrBoundFunctionOrWrappedFunction>::JSBoundFunctionPrint(std::ostream& os) {
  this->PrintHeader(os, "JSBoundFunction");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - bound_target_function: " << Brief(this->bound_target_function());
  os << "\n - bound_this: " << Brief(this->bound_this());
  os << "\n - bound_arguments: " << Brief(this->bound_arguments());
  os << '\n';
}

template <>
void TorqueGeneratedJSWrappedFunction<JSWrappedFunction, JSFunctionOrBoundFunctionOrWrappedFunction>::JSWrappedFunctionPrint(std::ostream& os) {
  this->PrintHeader(os, "JSWrappedFunction");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - wrapped_target_function: " << Brief(this->wrapped_target_function());
  os << "\n - context: " << Brief(this->context());
  os << '\n';
}

template <>
void TorqueGeneratedMap<Map, HeapObject>::MapPrint(std::ostream& os) {
  this->PrintHeader(os, "Map");
  os << "\n - instance_size_in_words: " << this->instance_size_in_words();
  os << "\n - inobject_properties_start_or_constructor_function_index: " << this->inobject_properties_start_or_constructor_function_index();
  os << "\n - used_or_unused_instance_size_in_words: " << this->used_or_unused_instance_size_in_words();
  os << "\n - visitor_id: " << this->visitor_id();
  os << "\n - instance_type: " << this->instance_type();
  os << "\n - bit_field: " << this->bit_field();
  os << "\n - bit_field2: " << this->bit_field2();
  os << "\n - bit_field3: " << this->bit_field3();
  os << "\n - optional_padding: " << this->optional_padding();
  os << "\n - prototype: " << Brief(this->prototype());
  os << "\n - constructor_or_back_pointer_or_native_context: " << Brief(this->constructor_or_back_pointer_or_native_context());
  os << "\n - instance_descriptors: " << Brief(this->instance_descriptors());
  os << "\n - dependent_code: " << Brief(this->dependent_code());
  os << "\n - prototype_validity_cell: " << Brief(this->prototype_validity_cell());
  os << "\n - transitions_or_prototype_info: " << Brief(this->transitions_or_prototype_info());
  os << '\n';
}

template <>
void TorqueGeneratedWeakCell<WeakCell, HeapObject>::WeakCellPrint(std::ostream& os) {
  this->PrintHeader(os, "WeakCell");
  os << "\n - finalization_registry: " << Brief(this->finalization_registry());
  os << "\n - target: " << Brief(this->target());
  os << "\n - unregister_token: " << Brief(this->unregister_token());
  os << "\n - holdings: " << Brief(this->holdings());
  os << "\n - prev: " << Brief(this->prev());
  os << "\n - next: " << Brief(this->next());
  os << "\n - key_list_prev: " << Brief(this->key_list_prev());
  os << "\n - key_list_next: " << Brief(this->key_list_next());
  os << '\n';
}

template <>
void TorqueGeneratedFunctionTemplateInfo<FunctionTemplateInfo, TemplateInfo>::FunctionTemplateInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "FunctionTemplateInfo");
  os << "\n - serial_number: " << this->TemplateInfo::TorqueGeneratedClass::serial_number();
  os << "\n - number_of_properties: " << this->TemplateInfo::TorqueGeneratedClass::number_of_properties();
  os << "\n - property_list: " << Brief(this->TemplateInfo::TorqueGeneratedClass::property_list());
  os << "\n - property_accessors: " << Brief(this->TemplateInfo::TorqueGeneratedClass::property_accessors());
  os << "\n - class_name: " << Brief(this->class_name());
  os << "\n - interface_name: " << Brief(this->interface_name());
  os << "\n - signature: " << Brief(this->signature());
  os << "\n - rare_data: " << Brief(this->rare_data(kAcquireLoad));
  os << "\n - shared_function_info: " << Brief(this->shared_function_info());
  os << "\n - cached_property_name: " << Brief(this->cached_property_name());
  os << "\n - callback_data: " << Brief(this->callback_data(kAcquireLoad));
  os << "\n - flag: " << this->flag();
  os << "\n - length: " << this->length();
  os << "\n - instance_type: " << this->instance_type();
  os << "\n - exception_context: " << this->exception_context();
  os << "\n - optional_padding: " << this->optional_padding();
  os << '\n';
}

template <>
void TorqueGeneratedWasmFuncRef<WasmFuncRef, HeapObject>::WasmFuncRefPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmFuncRef");
  os << '\n';
}

template <>
void TorqueGeneratedWasmNull<WasmNull, HeapObject>::WasmNullPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmNull");
  os << '\n';
}

template <>
void TorqueGeneratedJSSet<JSSet, JSCollection>::JSSetPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSet");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - table: " << Brief(this->JSCollection::TorqueGeneratedClass::table());
  os << '\n';
}

template <>
void TorqueGeneratedJSMap<JSMap, JSCollection>::JSMapPrint(std::ostream& os) {
  this->PrintHeader(os, "JSMap");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - table: " << Brief(this->JSCollection::TorqueGeneratedClass::table());
  os << '\n';
}

template <>
void TorqueGeneratedPromiseCapability<PromiseCapability, Struct>::PromiseCapabilityPrint(std::ostream& os) {
  this->PrintHeader(os, "PromiseCapability");
  os << "\n - promise: " << Brief(this->promise());
  os << "\n - resolve: " << Brief(this->resolve());
  os << "\n - reject: " << Brief(this->reject());
  os << '\n';
}

template <>
void TorqueGeneratedJSTypedArray<JSTypedArray, JSArrayBufferView>::JSTypedArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "JSTypedArray");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSAPIObjectWithEmbedderSlots::TorqueGeneratedClass::cpp_heap_wrappable();
  os << "\n - buffer: " << Brief(this->JSArrayBufferView::TorqueGeneratedClass::buffer());
  os << "\n - bit_field: " << this->JSArrayBufferView::TorqueGeneratedClass::bit_field();
  os << "\n - optional_padding: " << this->JSArrayBufferView::TorqueGeneratedClass::optional_padding();
  os << "\n - raw_byte_offset: " << this->JSArrayBufferView::TorqueGeneratedClass::raw_byte_offset();
  os << "\n - raw_byte_length: " << this->JSArrayBufferView::TorqueGeneratedClass::raw_byte_length();
  os << "\n - raw_length: " << this->raw_length();
  os << "\n - external_pointer: " << this->external_pointer();
  os << "\n - base_pointer: " << Brief(this->base_pointer());
  os << '\n';
}

template <>
void TorqueGeneratedAllocationMemento<AllocationMemento, Struct>::AllocationMementoPrint(std::ostream& os) {
  this->PrintHeader(os, "AllocationMemento");
  os << "\n - allocation_site: " << Brief(this->allocation_site());
  os << '\n';
}

template <>
void TorqueGeneratedInterceptorInfo<InterceptorInfo, Struct>::InterceptorInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "InterceptorInfo");
  os << "\n - getter: " << Brief(this->getter());
  os << "\n - setter: " << Brief(this->setter());
  os << "\n - query: " << Brief(this->query());
  os << "\n - descriptor: " << Brief(this->descriptor());
  os << "\n - deleter: " << Brief(this->deleter());
  os << "\n - enumerator: " << Brief(this->enumerator());
  os << "\n - definer: " << Brief(this->definer());
  os << "\n - data: " << Brief(this->data());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedAccessCheckInfo<AccessCheckInfo, Struct>::AccessCheckInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "AccessCheckInfo");
  os << "\n - callback: " << Brief(this->callback());
  os << "\n - named_interceptor: " << Brief(this->named_interceptor());
  os << "\n - indexed_interceptor: " << Brief(this->indexed_interceptor());
  os << "\n - data: " << Brief(this->data());
  os << '\n';
}

template <>
void TorqueGeneratedAccessorInfo<AccessorInfo, HeapObject>::AccessorInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "AccessorInfo");
  os << "\n - name: " << Brief(this->name());
  os << "\n - data: " << Brief(this->data());
  os << "\n - flags: " << this->flags();
  os << "\n - optional_padding: " << this->optional_padding();
  os << '\n';
}

template <>
void TorqueGeneratedJSArgumentsObject<JSArgumentsObject, JSObject>::JSArgumentsObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSArgumentsObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSSloppyArgumentsObject<JSSloppyArgumentsObject, JSArgumentsObject>::JSSloppyArgumentsObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSloppyArgumentsObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->length());
  os << "\n - callee: " << Brief(this->callee());
  os << '\n';
}

template <>
void TorqueGeneratedJSStrictArgumentsObject<JSStrictArgumentsObject, JSArgumentsObject>::JSStrictArgumentsObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSStrictArgumentsObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->length());
  os << '\n';
}

template <>
void TorqueGeneratedAliasedArgumentsEntry<AliasedArgumentsEntry, Struct>::AliasedArgumentsEntryPrint(std::ostream& os) {
  this->PrintHeader(os, "AliasedArgumentsEntry");
  os << "\n - aliased_context_slot: " << this->aliased_context_slot();
  os << '\n';
}

template <>
void TorqueGeneratedCallSiteInfo<CallSiteInfo, Struct>::CallSiteInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "CallSiteInfo");
  os << "\n - receiver_or_instance: " << Brief(this->receiver_or_instance());
  os << "\n - function: " << Brief(this->function());
  os << "\n - code_offset_or_source_position: " << this->code_offset_or_source_position();
  os << "\n - flags: " << this->flags();
  os << "\n - parameters: " << Brief(this->parameters());
  os << '\n';
}

template <>
void TorqueGeneratedCell<Cell, HeapObject>::CellPrint(std::ostream& os) {
  this->PrintHeader(os, "Cell");
  os << "\n - value: " << Brief(this->value());
  os << '\n';
}

template <>
void TorqueGeneratedWeakArrayList<WeakArrayList, HeapObject>::WeakArrayListPrint(std::ostream& os) {
  this->PrintHeader(os, "WeakArrayList");
  os << "\n - capacity: " << this->capacity();
  os << "\n - length: " << this->length();
  os << '\n';
}

template <>
void TorqueGeneratedScopeInfo<ScopeInfo, HeapObject>::ScopeInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "ScopeInfo");
  os << "\n - flags: " << this->flags();
  os << "\n - optional_padding: " << this->optional_padding();
  os << "\n - parameter_count: " << this->parameter_count();
  os << "\n - context_local_count: " << this->context_local_count();
  os << "\n - position_info: " << " <struct field printing still unimplemented>";
  os << '\n';
}

template <>
void TorqueGeneratedBreakPoint<BreakPoint, Struct>::BreakPointPrint(std::ostream& os) {
  this->PrintHeader(os, "BreakPoint");
  os << "\n - id: " << this->id();
  os << "\n - condition: " << Brief(this->condition());
  os << '\n';
}

template <>
void TorqueGeneratedBreakPointInfo<BreakPointInfo, Struct>::BreakPointInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "BreakPointInfo");
  os << "\n - source_position: " << this->source_position();
  os << "\n - break_points: " << Brief(this->break_points());
  os << '\n';
}

template <>
void TorqueGeneratedDebugInfo<DebugInfo, Struct>::DebugInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "DebugInfo");
  os << "\n - shared: " << Brief(this->shared());
  os << "\n - debugger_hints: " << this->debugger_hints();
  os << "\n - break_points: " << Brief(this->break_points());
  os << "\n - flags: " << this->flags(kRelaxedLoad);
  os << "\n - coverage_info: " << Brief(this->coverage_info());
  os << '\n';
}

template <>
void TorqueGeneratedCoverageInfo<CoverageInfo, HeapObject>::CoverageInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "CoverageInfo");
  os << "\n - slot_count: " << this->slot_count();
  os << '\n';
}

template <>
void TorqueGeneratedStackFrameInfo<StackFrameInfo, Struct>::StackFrameInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "StackFrameInfo");
  os << "\n - shared_or_script: " << Brief(this->shared_or_script());
  os << "\n - function_name: " << Brief(this->function_name());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedErrorStackData<ErrorStackData, Struct>::ErrorStackDataPrint(std::ostream& os) {
  this->PrintHeader(os, "ErrorStackData");
  os << "\n - call_site_infos_or_formatted_stack: " << Brief(this->call_site_infos_or_formatted_stack());
  os << "\n - limit_or_stack_frame_infos: " << Brief(this->limit_or_stack_frame_infos());
  os << '\n';
}

template <>
void TorqueGeneratedEnumCache<EnumCache, Struct>::EnumCachePrint(std::ostream& os) {
  this->PrintHeader(os, "EnumCache");
  os << "\n - keys: " << Brief(this->keys());
  os << "\n - indices: " << Brief(this->indices());
  os << '\n';
}

template <>
void TorqueGeneratedAccessorPair<AccessorPair, Struct>::AccessorPairPrint(std::ostream& os) {
  this->PrintHeader(os, "AccessorPair");
  os << "\n - getter: " << Brief(this->getter());
  os << "\n - setter: " << Brief(this->setter());
  os << '\n';
}

template <>
void TorqueGeneratedClassPositions<ClassPositions, Struct>::ClassPositionsPrint(std::ostream& os) {
  this->PrintHeader(os, "ClassPositions");
  os << "\n - start: " << this->start();
  os << "\n - end: " << this->end();
  os << '\n';
}

template <>
void TorqueGeneratedDescriptorArray<DescriptorArray, HeapObject>::DescriptorArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "DescriptorArray");
  os << "\n - number_of_all_descriptors: " << this->number_of_all_descriptors();
  os << "\n - number_of_descriptors: " << this->number_of_descriptors();
  os << "\n - raw_gc_state: " << this->raw_gc_state();
  os << "\n - enum_cache: " << Brief(this->enum_cache());
  os << '\n';
}

template <>
void TorqueGeneratedStrongDescriptorArray<StrongDescriptorArray, DescriptorArray>::StrongDescriptorArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "StrongDescriptorArray");
  os << "\n - number_of_all_descriptors: " << this->DescriptorArray::TorqueGeneratedClass::number_of_all_descriptors();
  os << "\n - number_of_descriptors: " << this->DescriptorArray::TorqueGeneratedClass::number_of_descriptors();
  os << "\n - raw_gc_state: " << this->DescriptorArray::TorqueGeneratedClass::raw_gc_state();
  os << "\n - enum_cache: " << Brief(this->DescriptorArray::TorqueGeneratedClass::enum_cache());
  os << '\n';
}

template <>
void TorqueGeneratedEmbedderDataArray<EmbedderDataArray, HeapObject>::EmbedderDataArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "EmbedderDataArray");
  os << "\n - length: " << this->length();
  os << '\n';
}

template <>
void TorqueGeneratedFeedbackCell<FeedbackCell, Struct>::FeedbackCellPrint(std::ostream& os) {
  this->PrintHeader(os, "FeedbackCell");
  os << "\n - value: " << Brief(this->value());
  os << "\n - interrupt_budget: " << this->interrupt_budget();
  os << '\n';
}

template <>
void TorqueGeneratedFeedbackVector<FeedbackVector, HeapObject>::FeedbackVectorPrint(std::ostream& os) {
  this->PrintHeader(os, "FeedbackVector");
  os << "\n - length: " << this->length();
  os << "\n - invocation_count: " << this->invocation_count();
  os << "\n - optional_padding: " << this->optional_padding();
  os << "\n - invocation_count_before_stable: " << this->invocation_count_before_stable();
  os << "\n - osr_state: " << this->osr_state();
  os << "\n - flags: " << this->flags();
  os << "\n - shared_function_info: " << Brief(this->shared_function_info());
  os << "\n - closure_feedback_cell_array: " << Brief(this->closure_feedback_cell_array());
  os << "\n - parent_feedback_cell: " << Brief(this->parent_feedback_cell());
  os << "\n - maybe_optimized_code: " << Brief(this->maybe_optimized_code());
  os << '\n';
}

template <>
void TorqueGeneratedTrustedForeign<TrustedForeign, TrustedObject>::TrustedForeignPrint(std::ostream& os) {
  this->PrintHeader(os, "TrustedForeign");
  os << "\n - foreign_address: " << this->foreign_address();
  os << '\n';
}

template <>
void TorqueGeneratedFreeSpace<FreeSpace, HeapObject>::FreeSpacePrint(std::ostream& os) {
  this->PrintHeader(os, "FreeSpace");
  os << "\n - size: " << this->size();
  os << "\n - next: " << Brief(this->next());
  os << '\n';
}

template <>
void TorqueGeneratedJSArrayBuffer<JSArrayBuffer, JSAPIObjectWithEmbedderSlots>::JSArrayBufferPrint(std::ostream& os) {
  this->PrintHeader(os, "JSArrayBuffer");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSAPIObjectWithEmbedderSlots::TorqueGeneratedClass::cpp_heap_wrappable();
  os << "\n - detach_key: " << Brief(this->detach_key());
  os << "\n - raw_byte_length: " << this->raw_byte_length();
  os << "\n - raw_max_byte_length: " << this->raw_max_byte_length();
  os << "\n - backing_store: " << this->backing_store();
  os << "\n - bit_field: " << this->bit_field();
  os << "\n - optional_padding: " << this->optional_padding();
  os << '\n';
}

template <>
void TorqueGeneratedJSDataView<JSDataView, JSDataViewOrRabGsabDataView>::JSDataViewPrint(std::ostream& os) {
  this->PrintHeader(os, "JSDataView");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSAPIObjectWithEmbedderSlots::TorqueGeneratedClass::cpp_heap_wrappable();
  os << "\n - buffer: " << Brief(this->JSArrayBufferView::TorqueGeneratedClass::buffer());
  os << "\n - bit_field: " << this->JSArrayBufferView::TorqueGeneratedClass::bit_field();
  os << "\n - optional_padding: " << this->JSArrayBufferView::TorqueGeneratedClass::optional_padding();
  os << "\n - raw_byte_offset: " << this->JSArrayBufferView::TorqueGeneratedClass::raw_byte_offset();
  os << "\n - raw_byte_length: " << this->JSArrayBufferView::TorqueGeneratedClass::raw_byte_length();
  os << "\n - data_pointer: " << this->JSDataViewOrRabGsabDataView::TorqueGeneratedClass::data_pointer();
  os << '\n';
}

template <>
void TorqueGeneratedJSRabGsabDataView<JSRabGsabDataView, JSDataViewOrRabGsabDataView>::JSRabGsabDataViewPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRabGsabDataView");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSAPIObjectWithEmbedderSlots::TorqueGeneratedClass::cpp_heap_wrappable();
  os << "\n - buffer: " << Brief(this->JSArrayBufferView::TorqueGeneratedClass::buffer());
  os << "\n - bit_field: " << this->JSArrayBufferView::TorqueGeneratedClass::bit_field();
  os << "\n - optional_padding: " << this->JSArrayBufferView::TorqueGeneratedClass::optional_padding();
  os << "\n - raw_byte_offset: " << this->JSArrayBufferView::TorqueGeneratedClass::raw_byte_offset();
  os << "\n - raw_byte_length: " << this->JSArrayBufferView::TorqueGeneratedClass::raw_byte_length();
  os << "\n - data_pointer: " << this->JSDataViewOrRabGsabDataView::TorqueGeneratedClass::data_pointer();
  os << '\n';
}

template <>
void TorqueGeneratedJSArrayIterator<JSArrayIterator, JSObject>::JSArrayIteratorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSArrayIterator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - iterated_object: " << Brief(this->iterated_object());
  os << "\n - next_index: " << Brief(this->next_index());
  os << "\n - kind: " << this->kind();
  os << '\n';
}

template <>
void TorqueGeneratedJSArray<JSArray, JSObject>::JSArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "JSArray");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->length());
  os << '\n';
}

template <>
void TorqueGeneratedTemplateLiteralObject<TemplateLiteralObject, JSArray>::TemplateLiteralObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "TemplateLiteralObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->JSArray::TorqueGeneratedClass::length());
  os << "\n - raw: " << Brief(this->raw());
  os << "\n - function_literal_id: " << this->function_literal_id();
  os << "\n - slot_id: " << this->slot_id();
  os << '\n';
}

template <>
void TorqueGeneratedJSAtomicsMutex<JSAtomicsMutex, JSSynchronizationPrimitive>::JSAtomicsMutexPrint(std::ostream& os) {
  this->PrintHeader(os, "JSAtomicsMutex");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - state: " << this->JSSynchronizationPrimitive::TorqueGeneratedClass::state();
  os << "\n - owner_thread_id: " << this->owner_thread_id();
  os << '\n';
}

template <>
void TorqueGeneratedJSAtomicsCondition<JSAtomicsCondition, JSSynchronizationPrimitive>::JSAtomicsConditionPrint(std::ostream& os) {
  this->PrintHeader(os, "JSAtomicsCondition");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - state: " << this->JSSynchronizationPrimitive::TorqueGeneratedClass::state();
  os << "\n - optional_padding: " << this->optional_padding();
  os << '\n';
}

template <>
void TorqueGeneratedJSWeakSet<JSWeakSet, JSWeakCollection>::JSWeakSetPrint(std::ostream& os) {
  this->PrintHeader(os, "JSWeakSet");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - table: " << Brief(this->JSWeakCollection::TorqueGeneratedClass::table());
  os << '\n';
}

template <>
void TorqueGeneratedJSWeakMap<JSWeakMap, JSWeakCollection>::JSWeakMapPrint(std::ostream& os) {
  this->PrintHeader(os, "JSWeakMap");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - table: " << Brief(this->JSWeakCollection::TorqueGeneratedClass::table());
  os << '\n';
}

template <>
void TorqueGeneratedJSDisposableStackBase<JSDisposableStackBase, JSObject>::JSDisposableStackBasePrint(std::ostream& os) {
  this->PrintHeader(os, "JSDisposableStackBase");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - stack: " << Brief(this->stack());
  os << "\n - status: " << this->status();
  os << '\n';
}

template <>
void TorqueGeneratedJSSyncDisposableStack<JSSyncDisposableStack, JSDisposableStackBase>::JSSyncDisposableStackPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSyncDisposableStack");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - stack: " << Brief(this->JSDisposableStackBase::TorqueGeneratedClass::stack());
  os << "\n - status: " << this->JSDisposableStackBase::TorqueGeneratedClass::status();
  os << '\n';
}

template <>
void TorqueGeneratedJSAsyncDisposableStack<JSAsyncDisposableStack, JSDisposableStackBase>::JSAsyncDisposableStackPrint(std::ostream& os) {
  this->PrintHeader(os, "JSAsyncDisposableStack");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - stack: " << Brief(this->JSDisposableStackBase::TorqueGeneratedClass::stack());
  os << "\n - status: " << this->JSDisposableStackBase::TorqueGeneratedClass::status();
  os << '\n';
}

template <>
void TorqueGeneratedJSGeneratorObject<JSGeneratorObject, JSObject>::JSGeneratorObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSGeneratorObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - function: " << Brief(this->function());
  os << "\n - context: " << Brief(this->context());
  os << "\n - receiver: " << Brief(this->receiver());
  os << "\n - input_or_debug_pos: " << Brief(this->input_or_debug_pos());
  os << "\n - resume_mode: " << this->resume_mode();
  os << "\n - continuation: " << this->continuation();
  os << "\n - parameters_and_registers: " << Brief(this->parameters_and_registers());
  os << '\n';
}

template <>
void TorqueGeneratedJSAsyncFunctionObject<JSAsyncFunctionObject, JSGeneratorObject>::JSAsyncFunctionObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSAsyncFunctionObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - function: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::function());
  os << "\n - context: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::context());
  os << "\n - receiver: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::receiver());
  os << "\n - input_or_debug_pos: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::input_or_debug_pos());
  os << "\n - resume_mode: " << this->JSGeneratorObject::TorqueGeneratedClass::resume_mode();
  os << "\n - continuation: " << this->JSGeneratorObject::TorqueGeneratedClass::continuation();
  os << "\n - parameters_and_registers: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::parameters_and_registers());
  os << "\n - promise: " << Brief(this->promise());
  os << '\n';
}

template <>
void TorqueGeneratedJSAsyncGeneratorObject<JSAsyncGeneratorObject, JSGeneratorObject>::JSAsyncGeneratorObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSAsyncGeneratorObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - function: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::function());
  os << "\n - context: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::context());
  os << "\n - receiver: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::receiver());
  os << "\n - input_or_debug_pos: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::input_or_debug_pos());
  os << "\n - resume_mode: " << this->JSGeneratorObject::TorqueGeneratedClass::resume_mode();
  os << "\n - continuation: " << this->JSGeneratorObject::TorqueGeneratedClass::continuation();
  os << "\n - parameters_and_registers: " << Brief(this->JSGeneratorObject::TorqueGeneratedClass::parameters_and_registers());
  os << "\n - queue: " << Brief(this->queue());
  os << "\n - is_awaiting: " << this->is_awaiting();
  os << '\n';
}

template <>
void TorqueGeneratedAsyncGeneratorRequest<AsyncGeneratorRequest, Struct>::AsyncGeneratorRequestPrint(std::ostream& os) {
  this->PrintHeader(os, "AsyncGeneratorRequest");
  os << "\n - next: " << Brief(this->next());
  os << "\n - resume_mode: " << this->resume_mode();
  os << "\n - value: " << Brief(this->value());
  os << "\n - promise: " << Brief(this->promise());
  os << '\n';
}

template <>
void TorqueGeneratedJSIteratorMapHelper<JSIteratorMapHelper, JSIteratorHelper>::JSIteratorMapHelperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSIteratorMapHelper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - underlying_object: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_object());
  os << "\n - underlying_next: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_next());
  os << "\n - mapper: " << Brief(this->mapper());
  os << "\n - counter: " << Brief(this->counter());
  os << '\n';
}

template <>
void TorqueGeneratedJSIteratorFilterHelper<JSIteratorFilterHelper, JSIteratorHelper>::JSIteratorFilterHelperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSIteratorFilterHelper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - underlying_object: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_object());
  os << "\n - underlying_next: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_next());
  os << "\n - predicate: " << Brief(this->predicate());
  os << "\n - counter: " << Brief(this->counter());
  os << '\n';
}

template <>
void TorqueGeneratedJSIteratorTakeHelper<JSIteratorTakeHelper, JSIteratorHelper>::JSIteratorTakeHelperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSIteratorTakeHelper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - underlying_object: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_object());
  os << "\n - underlying_next: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_next());
  os << "\n - remaining: " << Brief(this->remaining());
  os << '\n';
}

template <>
void TorqueGeneratedJSIteratorDropHelper<JSIteratorDropHelper, JSIteratorHelper>::JSIteratorDropHelperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSIteratorDropHelper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - underlying_object: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_object());
  os << "\n - underlying_next: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_next());
  os << "\n - remaining: " << Brief(this->remaining());
  os << '\n';
}

template <>
void TorqueGeneratedJSIteratorFlatMapHelper<JSIteratorFlatMapHelper, JSIteratorHelper>::JSIteratorFlatMapHelperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSIteratorFlatMapHelper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - underlying_object: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_object());
  os << "\n - underlying_next: " << Brief(this->JSIteratorHelper::TorqueGeneratedClass::underlying_next());
  os << "\n - mapper: " << Brief(this->mapper());
  os << "\n - counter: " << Brief(this->counter());
  os << "\n - innerIterator: " << " <struct field printing still unimplemented>";
  os << "\n - innerAlive: " << Brief(this->innerAlive());
  os << '\n';
}

template <>
void TorqueGeneratedJSExternalObject<JSExternalObject, JSObject>::JSExternalObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSExternalObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSGlobalProxy<JSGlobalProxy, JSSpecialObject>::JSGlobalProxyPrint(std::ostream& os) {
  this->PrintHeader(os, "JSGlobalProxy");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSSpecialObject::TorqueGeneratedClass::cpp_heap_wrappable();
  os << '\n';
}

template <>
void TorqueGeneratedJSGlobalObject<JSGlobalObject, JSSpecialObject>::JSGlobalObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSGlobalObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSSpecialObject::TorqueGeneratedClass::cpp_heap_wrappable();
  os << "\n - global_proxy: " << Brief(this->global_proxy());
  os << '\n';
}

template <>
void TorqueGeneratedJSPrimitiveWrapper<JSPrimitiveWrapper, JSCustomElementsObject>::JSPrimitiveWrapperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSPrimitiveWrapper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - value: " << Brief(this->value());
  os << '\n';
}

template <>
void TorqueGeneratedJSMessageObject<JSMessageObject, JSObject>::JSMessageObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSMessageObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - message_type: " << this->message_type();
  os << "\n - argument: " << Brief(this->argument());
  os << "\n - script: " << Brief(this->script());
  os << "\n - stack_frames: " << Brief(this->stack_frames());
  os << "\n - shared_info: " << Brief(this->shared_info());
  os << "\n - bytecode_offset: " << this->bytecode_offset();
  os << "\n - start_position: " << this->start_position();
  os << "\n - end_position: " << this->end_position();
  os << "\n - error_level: " << this->error_level();
  os << '\n';
}

template <>
void TorqueGeneratedJSDate<JSDate, JSObject>::JSDatePrint(std::ostream& os) {
  this->PrintHeader(os, "JSDate");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - value: " << this->value();
  os << "\n - year: " << Brief(this->year());
  os << "\n - month: " << Brief(this->month());
  os << "\n - day: " << Brief(this->day());
  os << "\n - weekday: " << Brief(this->weekday());
  os << "\n - hour: " << Brief(this->hour());
  os << "\n - min: " << Brief(this->min());
  os << "\n - sec: " << Brief(this->sec());
  os << "\n - cache_stamp: " << Brief(this->cache_stamp());
  os << '\n';
}

template <>
void TorqueGeneratedJSAsyncFromSyncIterator<JSAsyncFromSyncIterator, JSObject>::JSAsyncFromSyncIteratorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSAsyncFromSyncIterator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - sync_iterator: " << Brief(this->sync_iterator());
  os << "\n - next: " << Brief(this->next());
  os << '\n';
}

template <>
void TorqueGeneratedJSStringIterator<JSStringIterator, JSObject>::JSStringIteratorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSStringIterator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - string: " << Brief(this->string());
  os << "\n - index: " << this->index();
  os << '\n';
}

template <>
void TorqueGeneratedJSValidIteratorWrapper<JSValidIteratorWrapper, JSObject>::JSValidIteratorWrapperPrint(std::ostream& os) {
  this->PrintHeader(os, "JSValidIteratorWrapper");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - underlying: " << " <struct field printing still unimplemented>";
  os << '\n';
}

template <>
void TorqueGeneratedJSProxyRevocableResult<JSProxyRevocableResult, JSObject>::JSProxyRevocableResultPrint(std::ostream& os) {
  this->PrintHeader(os, "JSProxyRevocableResult");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - proxy: " << Brief(this->proxy());
  os << "\n - revoke: " << Brief(this->revoke());
  os << '\n';
}

template <>
void TorqueGeneratedJSRawJson<JSRawJson, JSObject>::JSRawJsonPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRawJson");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSRegExpStringIterator<JSRegExpStringIterator, JSObject>::JSRegExpStringIteratorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRegExpStringIterator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - iterating_reg_exp: " << Brief(this->iterating_reg_exp());
  os << "\n - iterated_string: " << Brief(this->iterated_string());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSRegExp<JSRegExp, JSObject>::JSRegExpPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRegExp");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - source: " << Brief(this->source());
  os << "\n - flags: " << Brief(this->flags());
  os << '\n';
}

template <>
void TorqueGeneratedJSRegExpResult<JSRegExpResult, JSArray>::JSRegExpResultPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRegExpResult");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->JSArray::TorqueGeneratedClass::length());
  os << "\n - index: " << Brief(this->index());
  os << "\n - input: " << Brief(this->input());
  os << "\n - groups: " << Brief(this->groups());
  os << "\n - names: " << Brief(this->names());
  os << "\n - regexp_input: " << Brief(this->regexp_input());
  os << "\n - regexp_last_index: " << this->regexp_last_index();
  os << '\n';
}

template <>
void TorqueGeneratedJSRegExpResultWithIndices<JSRegExpResultWithIndices, JSRegExpResult>::JSRegExpResultWithIndicesPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRegExpResultWithIndices");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->JSArray::TorqueGeneratedClass::length());
  os << "\n - index: " << Brief(this->JSRegExpResult::TorqueGeneratedClass::index());
  os << "\n - input: " << Brief(this->JSRegExpResult::TorqueGeneratedClass::input());
  os << "\n - groups: " << Brief(this->JSRegExpResult::TorqueGeneratedClass::groups());
  os << "\n - names: " << Brief(this->JSRegExpResult::TorqueGeneratedClass::names());
  os << "\n - regexp_input: " << Brief(this->JSRegExpResult::TorqueGeneratedClass::regexp_input());
  os << "\n - regexp_last_index: " << this->JSRegExpResult::TorqueGeneratedClass::regexp_last_index();
  os << "\n - indices: " << Brief(this->indices());
  os << '\n';
}

template <>
void TorqueGeneratedJSRegExpResultIndices<JSRegExpResultIndices, JSArray>::JSRegExpResultIndicesPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRegExpResultIndices");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - length: " << Brief(this->JSArray::TorqueGeneratedClass::length());
  os << "\n - groups: " << Brief(this->groups());
  os << '\n';
}

template <>
void TorqueGeneratedJSShadowRealm<JSShadowRealm, JSObject>::JSShadowRealmPrint(std::ostream& os) {
  this->PrintHeader(os, "JSShadowRealm");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - native_context: " << Brief(this->native_context());
  os << '\n';
}

template <>
void TorqueGeneratedJSSharedArray<JSSharedArray, AlwaysSharedSpaceJSObject>::JSSharedArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSharedArray");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSSharedStruct<JSSharedStruct, AlwaysSharedSpaceJSObject>::JSSharedStructPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSharedStruct");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalCalendar<JSTemporalCalendar, JSObject>::JSTemporalCalendarPrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalCalendar");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalDuration<JSTemporalDuration, JSObject>::JSTemporalDurationPrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalDuration");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - years: " << Brief(this->years());
  os << "\n - months: " << Brief(this->months());
  os << "\n - weeks: " << Brief(this->weeks());
  os << "\n - days: " << Brief(this->days());
  os << "\n - hours: " << Brief(this->hours());
  os << "\n - minutes: " << Brief(this->minutes());
  os << "\n - seconds: " << Brief(this->seconds());
  os << "\n - milliseconds: " << Brief(this->milliseconds());
  os << "\n - microseconds: " << Brief(this->microseconds());
  os << "\n - nanoseconds: " << Brief(this->nanoseconds());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalInstant<JSTemporalInstant, JSObject>::JSTemporalInstantPrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalInstant");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - nanoseconds: " << Brief(this->nanoseconds());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalPlainDateTime<JSTemporalPlainDateTime, JSObject>::JSTemporalPlainDateTimePrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalPlainDateTime");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - year_month_day: " << this->year_month_day();
  os << "\n - hour_minute_second: " << this->hour_minute_second();
  os << "\n - second_parts: " << this->second_parts();
  os << "\n - calendar: " << Brief(this->calendar());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalPlainDate<JSTemporalPlainDate, JSObject>::JSTemporalPlainDatePrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalPlainDate");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - year_month_day: " << this->year_month_day();
  os << "\n - calendar: " << Brief(this->calendar());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalPlainMonthDay<JSTemporalPlainMonthDay, JSObject>::JSTemporalPlainMonthDayPrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalPlainMonthDay");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - year_month_day: " << this->year_month_day();
  os << "\n - calendar: " << Brief(this->calendar());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalPlainTime<JSTemporalPlainTime, JSObject>::JSTemporalPlainTimePrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalPlainTime");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - hour_minute_second: " << this->hour_minute_second();
  os << "\n - second_parts: " << this->second_parts();
  os << "\n - calendar: " << Brief(this->calendar());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalPlainYearMonth<JSTemporalPlainYearMonth, JSObject>::JSTemporalPlainYearMonthPrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalPlainYearMonth");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - year_month_day: " << this->year_month_day();
  os << "\n - calendar: " << Brief(this->calendar());
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalTimeZone<JSTemporalTimeZone, JSObject>::JSTemporalTimeZonePrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalTimeZone");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - flags: " << this->flags();
  os << "\n - details: " << this->details();
  os << '\n';
}

template <>
void TorqueGeneratedJSTemporalZonedDateTime<JSTemporalZonedDateTime, JSObject>::JSTemporalZonedDateTimePrint(std::ostream& os) {
  this->PrintHeader(os, "JSTemporalZonedDateTime");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - nanoseconds: " << Brief(this->nanoseconds());
  os << "\n - time_zone: " << Brief(this->time_zone());
  os << "\n - calendar: " << Brief(this->calendar());
  os << '\n';
}

template <>
void TorqueGeneratedJSFinalizationRegistry<JSFinalizationRegistry, JSObject>::JSFinalizationRegistryPrint(std::ostream& os) {
  this->PrintHeader(os, "JSFinalizationRegistry");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - native_context: " << Brief(this->native_context());
  os << "\n - cleanup: " << Brief(this->cleanup());
  os << "\n - active_cells: " << Brief(this->active_cells());
  os << "\n - cleared_cells: " << Brief(this->cleared_cells());
  os << "\n - key_map: " << Brief(this->key_map());
  os << "\n - next_dirty: " << Brief(this->next_dirty());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSWeakRef<JSWeakRef, JSObject>::JSWeakRefPrint(std::ostream& os) {
  this->PrintHeader(os, "JSWeakRef");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - target: " << Brief(this->target());
  os << '\n';
}

template <>
void TorqueGeneratedArrayBoilerplateDescription<ArrayBoilerplateDescription, Struct>::ArrayBoilerplateDescriptionPrint(std::ostream& os) {
  this->PrintHeader(os, "ArrayBoilerplateDescription");
  os << "\n - flags: " << this->flags();
  os << "\n - constant_elements: " << Brief(this->constant_elements());
  os << '\n';
}

template <>
void TorqueGeneratedMegaDomHandler<MegaDomHandler, HeapObject>::MegaDomHandlerPrint(std::ostream& os) {
  this->PrintHeader(os, "MegaDomHandler");
  os << "\n - accessor: " << Brief(this->accessor());
  os << "\n - context: " << Brief(this->context());
  os << '\n';
}

template <>
void TorqueGeneratedCallbackTask<CallbackTask, Microtask>::CallbackTaskPrint(std::ostream& os) {
  this->PrintHeader(os, "CallbackTask");
  os << "\n - continuation_preserved_embedder_data: " << Brief(this->Microtask::TorqueGeneratedClass::continuation_preserved_embedder_data());
  os << "\n - callback: " << Brief(this->callback());
  os << "\n - data: " << Brief(this->data());
  os << '\n';
}

template <>
void TorqueGeneratedCallableTask<CallableTask, Microtask>::CallableTaskPrint(std::ostream& os) {
  this->PrintHeader(os, "CallableTask");
  os << "\n - continuation_preserved_embedder_data: " << Brief(this->Microtask::TorqueGeneratedClass::continuation_preserved_embedder_data());
  os << "\n - callable: " << Brief(this->callable());
  os << "\n - context: " << Brief(this->context());
  os << '\n';
}

template <>
void TorqueGeneratedJSModuleNamespace<JSModuleNamespace, JSSpecialObject>::JSModuleNamespacePrint(std::ostream& os) {
  this->PrintHeader(os, "JSModuleNamespace");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - cpp_heap_wrappable: " << this->JSSpecialObject::TorqueGeneratedClass::cpp_heap_wrappable();
  os << "\n - module: " << Brief(this->module());
  os << '\n';
}

template <>
void TorqueGeneratedScriptOrModule<ScriptOrModule, Struct>::ScriptOrModulePrint(std::ostream& os) {
  this->PrintHeader(os, "ScriptOrModule");
  os << "\n - resource_name: " << Brief(this->resource_name());
  os << "\n - host_defined_options: " << Brief(this->host_defined_options());
  os << '\n';
}

template <>
void TorqueGeneratedPromiseReaction<PromiseReaction, Struct>::PromiseReactionPrint(std::ostream& os) {
  this->PrintHeader(os, "PromiseReaction");
  os << "\n - continuation_preserved_embedder_data: " << Brief(this->continuation_preserved_embedder_data());
  os << "\n - next: " << Brief(this->next());
  os << "\n - reject_handler: " << Brief(this->reject_handler());
  os << "\n - fulfill_handler: " << Brief(this->fulfill_handler());
  os << "\n - promise_or_capability: " << Brief(this->promise_or_capability());
  os << '\n';
}

template <>
void TorqueGeneratedPromiseFulfillReactionJobTask<PromiseFulfillReactionJobTask, PromiseReactionJobTask>::PromiseFulfillReactionJobTaskPrint(std::ostream& os) {
  this->PrintHeader(os, "PromiseFulfillReactionJobTask");
  os << "\n - continuation_preserved_embedder_data: " << Brief(this->Microtask::TorqueGeneratedClass::continuation_preserved_embedder_data());
  os << "\n - argument: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::argument());
  os << "\n - context: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::context());
  os << "\n - handler: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::handler());
  os << "\n - promise_or_capability: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::promise_or_capability());
  os << '\n';
}

template <>
void TorqueGeneratedPromiseRejectReactionJobTask<PromiseRejectReactionJobTask, PromiseReactionJobTask>::PromiseRejectReactionJobTaskPrint(std::ostream& os) {
  this->PrintHeader(os, "PromiseRejectReactionJobTask");
  os << "\n - continuation_preserved_embedder_data: " << Brief(this->Microtask::TorqueGeneratedClass::continuation_preserved_embedder_data());
  os << "\n - argument: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::argument());
  os << "\n - context: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::context());
  os << "\n - handler: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::handler());
  os << "\n - promise_or_capability: " << Brief(this->PromiseReactionJobTask::TorqueGeneratedClass::promise_or_capability());
  os << '\n';
}

template <>
void TorqueGeneratedPromiseResolveThenableJobTask<PromiseResolveThenableJobTask, Microtask>::PromiseResolveThenableJobTaskPrint(std::ostream& os) {
  this->PrintHeader(os, "PromiseResolveThenableJobTask");
  os << "\n - continuation_preserved_embedder_data: " << Brief(this->Microtask::TorqueGeneratedClass::continuation_preserved_embedder_data());
  os << "\n - context: " << Brief(this->context());
  os << "\n - promise_to_resolve: " << Brief(this->promise_to_resolve());
  os << "\n - thenable: " << Brief(this->thenable());
  os << "\n - then: " << Brief(this->then());
  os << '\n';
}

template <>
void TorqueGeneratedPropertyArray<PropertyArray, HeapObject>::PropertyArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "PropertyArray");
  os << "\n - length_and_hash: " << this->length_and_hash();
  os << '\n';
}

template <>
void TorqueGeneratedPropertyCell<PropertyCell, HeapObject>::PropertyCellPrint(std::ostream& os) {
  this->PrintHeader(os, "PropertyCell");
  os << "\n - name: " << Brief(this->name());
  os << "\n - property_details_raw: " << this->property_details_raw();
  os << "\n - value: " << Brief(this->value());
  os << "\n - dependent_code: " << Brief(this->dependent_code());
  os << '\n';
}

template <>
void TorqueGeneratedConstTrackingLetCell<ConstTrackingLetCell, HeapObject>::ConstTrackingLetCellPrint(std::ostream& os) {
  this->PrintHeader(os, "ConstTrackingLetCell");
  os << "\n - dependent_code: " << Brief(this->dependent_code());
  os << '\n';
}

template <>
void TorqueGeneratedPropertyDescriptorObject<PropertyDescriptorObject, Struct>::PropertyDescriptorObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "PropertyDescriptorObject");
  os << "\n - flags: " << this->flags();
  os << "\n - value: " << Brief(this->value());
  os << "\n - get: " << Brief(this->get());
  os << "\n - set: " << Brief(this->set());
  os << '\n';
}

template <>
void TorqueGeneratedPrototypeInfo<PrototypeInfo, Struct>::PrototypeInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "PrototypeInfo");
  os << "\n - module_namespace: " << Brief(this->module_namespace());
  os << "\n - prototype_users: " << Brief(this->prototype_users());
  os << "\n - prototype_chain_enum_cache: " << Brief(this->prototype_chain_enum_cache());
  os << "\n - registry_slot: " << this->registry_slot();
  os << "\n - bit_field: " << this->bit_field();
  os << "\n - derived_maps: " << Brief(this->derived_maps());
  os << '\n';
}

template <>
void TorqueGeneratedScript<Script, Struct>::ScriptPrint(std::ostream& os) {
  this->PrintHeader(os, "Script");
  os << "\n - source: " << Brief(this->source());
  os << "\n - name: " << Brief(this->name());
  os << "\n - line_offset: " << this->line_offset();
  os << "\n - column_offset: " << this->column_offset();
  os << "\n - context_data: " << Brief(this->context_data());
  os << "\n - script_type: " << this->script_type();
  os << "\n - line_ends: " << Brief(this->line_ends());
  os << "\n - id: " << this->id();
  os << "\n - eval_from_shared_or_wrapped_arguments: " << Brief(this->eval_from_shared_or_wrapped_arguments());
  os << "\n - eval_from_position: " << Brief(this->eval_from_position());
  os << "\n - infos: " << Brief(this->infos());
  os << "\n - compiled_lazy_function_positions: " << Brief(this->compiled_lazy_function_positions());
  os << "\n - flags: " << this->flags();
  os << "\n - source_url: " << Brief(this->source_url());
  os << "\n - source_mapping_url: " << Brief(this->source_mapping_url());
  os << "\n - host_defined_options: " << Brief(this->host_defined_options());
  os << "\n - source_hash: " << Brief(this->source_hash());
  os << '\n';
}

template <>
void TorqueGeneratedPreparseData<PreparseData, HeapObject>::PreparseDataPrint(std::ostream& os) {
  this->PrintHeader(os, "PreparseData");
  os << "\n - data_length: " << this->data_length();
  os << "\n - children_length: " << this->children_length();
  os << '\n';
}

template <>
void TorqueGeneratedInterpreterData<InterpreterData, ExposedTrustedObject>::InterpreterDataPrint(std::ostream& os) {
  this->PrintHeader(os, "InterpreterData");
  os << '\n';
}

template <>
void TorqueGeneratedSharedFunctionInfo<SharedFunctionInfo, HeapObject>::SharedFunctionInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "SharedFunctionInfo");
  os << "\n - untrusted_function_data: " << Brief(this->untrusted_function_data());
  os << "\n - name_or_scope_info: " << Brief(this->name_or_scope_info());
  os << "\n - outer_scope_info_or_feedback_metadata: " << Brief(this->outer_scope_info_or_feedback_metadata());
  os << "\n - script: " << Brief(this->script());
  os << "\n - length: " << this->length();
  os << "\n - formal_parameter_count: " << this->formal_parameter_count();
  os << "\n - function_token_offset: " << this->function_token_offset();
  os << "\n - expected_nof_properties: " << this->expected_nof_properties();
  os << "\n - flags2: " << this->flags2();
  os << "\n - flags: " << this->flags();
  os << "\n - function_literal_id: " << this->function_literal_id();
  os << "\n - unique_id: " << this->unique_id();
  os << "\n - age: " << this->age();
  os << "\n - padding: " << this->padding();
  os << '\n';
}

template <>
void TorqueGeneratedUncompiledDataWithoutPreparseData<UncompiledDataWithoutPreparseData, UncompiledData>::UncompiledDataWithoutPreparseDataPrint(std::ostream& os) {
  this->PrintHeader(os, "UncompiledDataWithoutPreparseData");
  os << "\n - inferred_name: " << Brief(this->UncompiledData::TorqueGeneratedClass::inferred_name());
  os << "\n - start_position: " << this->UncompiledData::TorqueGeneratedClass::start_position();
  os << "\n - end_position: " << this->UncompiledData::TorqueGeneratedClass::end_position();
  os << '\n';
}

template <>
void TorqueGeneratedUncompiledDataWithPreparseData<UncompiledDataWithPreparseData, UncompiledData>::UncompiledDataWithPreparseDataPrint(std::ostream& os) {
  this->PrintHeader(os, "UncompiledDataWithPreparseData");
  os << "\n - inferred_name: " << Brief(this->UncompiledData::TorqueGeneratedClass::inferred_name());
  os << "\n - start_position: " << this->UncompiledData::TorqueGeneratedClass::start_position();
  os << "\n - end_position: " << this->UncompiledData::TorqueGeneratedClass::end_position();
  os << "\n - preparse_data: " << Brief(this->preparse_data());
  os << '\n';
}

template <>
void TorqueGeneratedUncompiledDataWithoutPreparseDataWithJob<UncompiledDataWithoutPreparseDataWithJob, UncompiledDataWithoutPreparseData>::UncompiledDataWithoutPreparseDataWithJobPrint(std::ostream& os) {
  this->PrintHeader(os, "UncompiledDataWithoutPreparseDataWithJob");
  os << "\n - inferred_name: " << Brief(this->UncompiledData::TorqueGeneratedClass::inferred_name());
  os << "\n - start_position: " << this->UncompiledData::TorqueGeneratedClass::start_position();
  os << "\n - end_position: " << this->UncompiledData::TorqueGeneratedClass::end_position();
  os << "\n - job: " << this->job();
  os << '\n';
}

template <>
void TorqueGeneratedUncompiledDataWithPreparseDataAndJob<UncompiledDataWithPreparseDataAndJob, UncompiledDataWithPreparseData>::UncompiledDataWithPreparseDataAndJobPrint(std::ostream& os) {
  this->PrintHeader(os, "UncompiledDataWithPreparseDataAndJob");
  os << "\n - inferred_name: " << Brief(this->UncompiledData::TorqueGeneratedClass::inferred_name());
  os << "\n - start_position: " << this->UncompiledData::TorqueGeneratedClass::start_position();
  os << "\n - end_position: " << this->UncompiledData::TorqueGeneratedClass::end_position();
  os << "\n - preparse_data: " << Brief(this->UncompiledDataWithPreparseData::TorqueGeneratedClass::preparse_data());
  os << "\n - job: " << this->job();
  os << '\n';
}

template <>
void TorqueGeneratedOnHeapBasicBlockProfilerData<OnHeapBasicBlockProfilerData, HeapObject>::OnHeapBasicBlockProfilerDataPrint(std::ostream& os) {
  this->PrintHeader(os, "OnHeapBasicBlockProfilerData");
  os << "\n - block_ids: " << Brief(this->block_ids());
  os << "\n - counts: " << Brief(this->counts());
  os << "\n - branches: " << Brief(this->branches());
  os << "\n - name: " << Brief(this->name());
  os << "\n - schedule: " << Brief(this->schedule());
  os << "\n - code: " << Brief(this->code());
  os << "\n - hash: " << this->hash();
  os << '\n';
}

template <>
void TorqueGeneratedSourceTextModule<SourceTextModule, Module>::SourceTextModulePrint(std::ostream& os) {
  this->PrintHeader(os, "SourceTextModule");
  os << "\n - exports: " << Brief(this->Module::TorqueGeneratedClass::exports());
  os << "\n - hash: " << this->Module::TorqueGeneratedClass::hash();
  os << "\n - status: " << this->Module::TorqueGeneratedClass::status();
  os << "\n - module_namespace: " << Brief(this->Module::TorqueGeneratedClass::module_namespace());
  os << "\n - exception: " << Brief(this->Module::TorqueGeneratedClass::exception());
  os << "\n - top_level_capability: " << Brief(this->Module::TorqueGeneratedClass::top_level_capability());
  os << "\n - code: " << Brief(this->code());
  os << "\n - regular_exports: " << Brief(this->regular_exports());
  os << "\n - regular_imports: " << Brief(this->regular_imports());
  os << "\n - requested_modules: " << Brief(this->requested_modules());
  os << "\n - import_meta: " << Brief(this->import_meta(kAcquireLoad));
  os << "\n - cycle_root: " << Brief(this->cycle_root());
  os << "\n - async_parent_modules: " << Brief(this->async_parent_modules());
  os << "\n - dfs_index: " << this->dfs_index();
  os << "\n - dfs_ancestor_index: " << this->dfs_ancestor_index();
  os << "\n - pending_async_dependencies: " << this->pending_async_dependencies();
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedModuleRequest<ModuleRequest, Struct>::ModuleRequestPrint(std::ostream& os) {
  this->PrintHeader(os, "ModuleRequest");
  os << "\n - specifier: " << Brief(this->specifier());
  os << "\n - import_attributes: " << Brief(this->import_attributes());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedSourceTextModuleInfoEntry<SourceTextModuleInfoEntry, Struct>::SourceTextModuleInfoEntryPrint(std::ostream& os) {
  this->PrintHeader(os, "SourceTextModuleInfoEntry");
  os << "\n - export_name: " << Brief(this->export_name());
  os << "\n - local_name: " << Brief(this->local_name());
  os << "\n - import_name: " << Brief(this->import_name());
  os << "\n - module_request: " << this->module_request();
  os << "\n - cell_index: " << this->cell_index();
  os << "\n - beg_pos: " << this->beg_pos();
  os << "\n - end_pos: " << this->end_pos();
  os << '\n';
}

template <>
void TorqueGeneratedTuple2<Tuple2, Struct>::Tuple2Print(std::ostream& os) {
  this->PrintHeader(os, "Tuple2");
  os << "\n - value1: " << Brief(this->value1());
  os << "\n - value2: " << Brief(this->value2());
  os << '\n';
}

template <>
void TorqueGeneratedSyntheticModule<SyntheticModule, Module>::SyntheticModulePrint(std::ostream& os) {
  this->PrintHeader(os, "SyntheticModule");
  os << "\n - exports: " << Brief(this->Module::TorqueGeneratedClass::exports());
  os << "\n - hash: " << this->Module::TorqueGeneratedClass::hash();
  os << "\n - status: " << this->Module::TorqueGeneratedClass::status();
  os << "\n - module_namespace: " << Brief(this->Module::TorqueGeneratedClass::module_namespace());
  os << "\n - exception: " << Brief(this->Module::TorqueGeneratedClass::exception());
  os << "\n - top_level_capability: " << Brief(this->Module::TorqueGeneratedClass::top_level_capability());
  os << "\n - name: " << Brief(this->name());
  os << "\n - export_names: " << Brief(this->export_names());
  os << "\n - evaluation_steps: " << Brief(this->evaluation_steps());
  os << '\n';
}

template <>
void TorqueGeneratedTemplateObjectDescription<TemplateObjectDescription, Struct>::TemplateObjectDescriptionPrint(std::ostream& os) {
  this->PrintHeader(os, "TemplateObjectDescription");
  os << "\n - raw_strings: " << Brief(this->raw_strings());
  os << "\n - cooked_strings: " << Brief(this->cooked_strings());
  os << '\n';
}

template <>
void TorqueGeneratedFunctionTemplateRareData<FunctionTemplateRareData, Struct>::FunctionTemplateRareDataPrint(std::ostream& os) {
  this->PrintHeader(os, "FunctionTemplateRareData");
  os << "\n - prototype_template: " << Brief(this->prototype_template());
  os << "\n - prototype_provider_template: " << Brief(this->prototype_provider_template());
  os << "\n - parent_template: " << Brief(this->parent_template());
  os << "\n - named_property_handler: " << Brief(this->named_property_handler());
  os << "\n - indexed_property_handler: " << Brief(this->indexed_property_handler());
  os << "\n - instance_template: " << Brief(this->instance_template());
  os << "\n - instance_call_handler: " << Brief(this->instance_call_handler());
  os << "\n - access_check_info: " << Brief(this->access_check_info());
  os << "\n - c_function_overloads: " << Brief(this->c_function_overloads());
  os << '\n';
}

template <>
void TorqueGeneratedObjectTemplateInfo<ObjectTemplateInfo, TemplateInfo>::ObjectTemplateInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "ObjectTemplateInfo");
  os << "\n - serial_number: " << this->TemplateInfo::TorqueGeneratedClass::serial_number();
  os << "\n - number_of_properties: " << this->TemplateInfo::TorqueGeneratedClass::number_of_properties();
  os << "\n - property_list: " << Brief(this->TemplateInfo::TorqueGeneratedClass::property_list());
  os << "\n - property_accessors: " << Brief(this->TemplateInfo::TorqueGeneratedClass::property_accessors());
  os << "\n - constructor: " << Brief(this->constructor());
  os << "\n - data: " << this->data();
  os << '\n';
}

template <>
void TorqueGeneratedDictionaryTemplateInfo<DictionaryTemplateInfo, HeapObject>::DictionaryTemplateInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "DictionaryTemplateInfo");
  os << "\n - property_names: " << Brief(this->property_names());
  os << "\n - serial_number: " << this->serial_number();
  os << '\n';
}

template <>
void TorqueGeneratedTurbofanType<TurbofanType, HeapObject>::TurbofanTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurbofanType");
  os << '\n';
}

template <>
void TorqueGeneratedTurbofanBitsetType<TurbofanBitsetType, TurbofanType>::TurbofanBitsetTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurbofanBitsetType");
  os << "\n - bitset_low: " << this->bitset_low();
  os << "\n - bitset_high: " << this->bitset_high();
  os << '\n';
}

template <>
void TorqueGeneratedTurbofanUnionType<TurbofanUnionType, TurbofanType>::TurbofanUnionTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurbofanUnionType");
  os << "\n - type1: " << Brief(this->type1());
  os << "\n - type2: " << Brief(this->type2());
  os << '\n';
}

template <>
void TorqueGeneratedTurbofanRangeType<TurbofanRangeType, TurbofanType>::TurbofanRangeTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurbofanRangeType");
  os << "\n - min: " << this->min();
  os << "\n - max: " << this->max();
  os << '\n';
}

template <>
void TorqueGeneratedTurbofanHeapConstantType<TurbofanHeapConstantType, TurbofanType>::TurbofanHeapConstantTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurbofanHeapConstantType");
  os << "\n - constant: " << Brief(this->constant());
  os << '\n';
}

template <>
void TorqueGeneratedTurbofanOtherNumberConstantType<TurbofanOtherNumberConstantType, TurbofanType>::TurbofanOtherNumberConstantTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurbofanOtherNumberConstantType");
  os << "\n - constant: " << this->constant();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftWord32Type<TurboshaftWord32Type, TurboshaftType>::TurboshaftWord32TypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftWord32Type");
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftWord32RangeType<TurboshaftWord32RangeType, TurboshaftWord32Type>::TurboshaftWord32RangeTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftWord32RangeType");
  os << "\n - from: " << this->from();
  os << "\n - to: " << this->to();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftWord32SetType<TurboshaftWord32SetType, TurboshaftWord32Type>::TurboshaftWord32SetTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftWord32SetType");
  os << "\n - set_size: " << this->set_size();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftWord64Type<TurboshaftWord64Type, TurboshaftType>::TurboshaftWord64TypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftWord64Type");
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftWord64RangeType<TurboshaftWord64RangeType, TurboshaftWord64Type>::TurboshaftWord64RangeTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftWord64RangeType");
  os << "\n - from_high: " << this->from_high();
  os << "\n - from_low: " << this->from_low();
  os << "\n - to_high: " << this->to_high();
  os << "\n - to_low: " << this->to_low();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftWord64SetType<TurboshaftWord64SetType, TurboshaftWord64Type>::TurboshaftWord64SetTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftWord64SetType");
  os << "\n - set_size: " << this->set_size();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftFloat64Type<TurboshaftFloat64Type, TurboshaftType>::TurboshaftFloat64TypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftFloat64Type");
  os << "\n - special_values: " << this->special_values();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftFloat64RangeType<TurboshaftFloat64RangeType, TurboshaftFloat64Type>::TurboshaftFloat64RangeTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftFloat64RangeType");
  os << "\n - special_values: " << this->TurboshaftFloat64Type::TorqueGeneratedClass::special_values();
  os << "\n - _padding: " << this->_padding();
  os << "\n - min: " << this->min();
  os << "\n - max: " << this->max();
  os << '\n';
}

template <>
void TorqueGeneratedTurboshaftFloat64SetType<TurboshaftFloat64SetType, TurboshaftFloat64Type>::TurboshaftFloat64SetTypePrint(std::ostream& os) {
  this->PrintHeader(os, "TurboshaftFloat64SetType");
  os << "\n - special_values: " << this->TurboshaftFloat64Type::TorqueGeneratedClass::special_values();
  os << "\n - set_size: " << this->set_size();
  os << '\n';
}

template <>
void TorqueGeneratedInternalClass<InternalClass, HeapObject>::InternalClassPrint(std::ostream& os) {
  this->PrintHeader(os, "InternalClass");
  os << "\n - a: " << this->a();
  os << "\n - b: " << Brief(this->b());
  os << '\n';
}

template <>
void TorqueGeneratedSmiPair<SmiPair, HeapObject>::SmiPairPrint(std::ostream& os) {
  this->PrintHeader(os, "SmiPair");
  os << "\n - a: " << this->a();
  os << "\n - b: " << this->b();
  os << '\n';
}

template <>
void TorqueGeneratedSmiBox<SmiBox, HeapObject>::SmiBoxPrint(std::ostream& os) {
  this->PrintHeader(os, "SmiBox");
  os << "\n - value: " << this->value();
  os << "\n - unrelated: " << this->unrelated();
  os << '\n';
}

template <>
void TorqueGeneratedExportedSubClassBase<ExportedSubClassBase, HeapObject>::ExportedSubClassBasePrint(std::ostream& os) {
  this->PrintHeader(os, "ExportedSubClassBase");
  os << "\n - a: " << Brief(this->a());
  os << "\n - b: " << Brief(this->b());
  os << '\n';
}

template <>
void TorqueGeneratedExportedSubClass<ExportedSubClass, ExportedSubClassBase>::ExportedSubClassPrint(std::ostream& os) {
  this->PrintHeader(os, "ExportedSubClass");
  os << "\n - a: " << Brief(this->ExportedSubClassBase::TorqueGeneratedClass::a());
  os << "\n - b: " << Brief(this->ExportedSubClassBase::TorqueGeneratedClass::b());
  os << "\n - c_field: " << this->c_field();
  os << "\n - d_field: " << this->d_field();
  os << "\n - e_field: " << this->e_field();
  os << '\n';
}

template <>
void TorqueGeneratedAbstractInternalClass<AbstractInternalClass, HeapObject>::AbstractInternalClassPrint(std::ostream& os) {
  this->PrintHeader(os, "AbstractInternalClass");
  os << '\n';
}

template <>
void TorqueGeneratedAbstractInternalClassSubclass1<AbstractInternalClassSubclass1, AbstractInternalClass>::AbstractInternalClassSubclass1Print(std::ostream& os) {
  this->PrintHeader(os, "AbstractInternalClassSubclass1");
  os << '\n';
}

template <>
void TorqueGeneratedAbstractInternalClassSubclass2<AbstractInternalClassSubclass2, AbstractInternalClass>::AbstractInternalClassSubclass2Print(std::ostream& os) {
  this->PrintHeader(os, "AbstractInternalClassSubclass2");
  os << '\n';
}

template <>
void TorqueGeneratedInternalClassWithStructElements<InternalClassWithStructElements, HeapObject>::InternalClassWithStructElementsPrint(std::ostream& os) {
  this->PrintHeader(os, "InternalClassWithStructElements");
  os << "\n - dummy1: " << this->dummy1();
  os << "\n - dummy2: " << this->dummy2();
  os << "\n - count: " << this->count();
  os << "\n - data: " << this->data();
  os << "\n - object: " << Brief(this->object());
  os << '\n';
}

template <>
void TorqueGeneratedExportedSubClass2<ExportedSubClass2, ExportedSubClassBase>::ExportedSubClass2Print(std::ostream& os) {
  this->PrintHeader(os, "ExportedSubClass2");
  os << "\n - a: " << Brief(this->ExportedSubClassBase::TorqueGeneratedClass::a());
  os << "\n - b: " << Brief(this->ExportedSubClassBase::TorqueGeneratedClass::b());
  os << "\n - x_field: " << this->x_field();
  os << "\n - y_field: " << this->y_field();
  os << "\n - z_field: " << this->z_field();
  os << '\n';
}

template <>
void TorqueGeneratedSortState<SortState, HeapObject>::SortStatePrint(std::ostream& os) {
  this->PrintHeader(os, "SortState");
  os << "\n - receiver: " << Brief(this->receiver());
  os << "\n - initialReceiverMap: " << Brief(this->initialReceiverMap());
  os << "\n - initialReceiverLength: " << Brief(this->initialReceiverLength());
  os << "\n - userCmpFn: " << Brief(this->userCmpFn());
  os << "\n - sortComparePtr: " << this->sortComparePtr();
  os << "\n - loadFn: " << this->loadFn();
  os << "\n - storeFn: " << this->storeFn();
  os << "\n - deleteFn: " << this->deleteFn();
  os << "\n - canUseSameAccessorFn: " << this->canUseSameAccessorFn();
  os << "\n - minGallop: " << this->minGallop();
  os << "\n - pendingRunsSize: " << this->pendingRunsSize();
  os << "\n - pendingRuns: " << Brief(this->pendingRuns());
  os << "\n - workArray: " << Brief(this->workArray());
  os << "\n - tempArray: " << Brief(this->tempArray());
  os << "\n - sortLength: " << this->sortLength();
  os << "\n - numberOfUndefined: " << this->numberOfUndefined();
  os << '\n';
}

template <>
void TorqueGeneratedJSV8BreakIterator<JSV8BreakIterator, JSObject>::JSV8BreakIteratorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSV8BreakIterator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - break_iterator: " << Brief(this->break_iterator());
  os << "\n - unicode_string: " << Brief(this->unicode_string());
  os << "\n - bound_adopt_text: " << Brief(this->bound_adopt_text());
  os << "\n - bound_first: " << Brief(this->bound_first());
  os << "\n - bound_next: " << Brief(this->bound_next());
  os << "\n - bound_current: " << Brief(this->bound_current());
  os << "\n - bound_break_type: " << Brief(this->bound_break_type());
  os << '\n';
}

template <>
void TorqueGeneratedJSCollator<JSCollator, JSObject>::JSCollatorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSCollator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - icu_collator: " << Brief(this->icu_collator());
  os << "\n - bound_compare: " << Brief(this->bound_compare());
  os << "\n - locale: " << Brief(this->locale());
  os << '\n';
}

template <>
void TorqueGeneratedJSDateTimeFormat<JSDateTimeFormat, JSObject>::JSDateTimeFormatPrint(std::ostream& os) {
  this->PrintHeader(os, "JSDateTimeFormat");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - icu_locale: " << Brief(this->icu_locale());
  os << "\n - icu_simple_date_format: " << Brief(this->icu_simple_date_format());
  os << "\n - icu_date_interval_format: " << Brief(this->icu_date_interval_format());
  os << "\n - bound_format: " << Brief(this->bound_format());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSDisplayNames<JSDisplayNames, JSObject>::JSDisplayNamesPrint(std::ostream& os) {
  this->PrintHeader(os, "JSDisplayNames");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - internal: " << Brief(this->internal());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSDurationFormat<JSDurationFormat, JSObject>::JSDurationFormatPrint(std::ostream& os) {
  this->PrintHeader(os, "JSDurationFormat");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - style_flags: " << this->style_flags();
  os << "\n - display_flags: " << this->display_flags();
  os << "\n - icu_locale: " << Brief(this->icu_locale());
  os << "\n - icu_number_formatter: " << Brief(this->icu_number_formatter());
  os << '\n';
}

template <>
void TorqueGeneratedJSListFormat<JSListFormat, JSObject>::JSListFormatPrint(std::ostream& os) {
  this->PrintHeader(os, "JSListFormat");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - icu_formatter: " << Brief(this->icu_formatter());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSLocale<JSLocale, JSObject>::JSLocalePrint(std::ostream& os) {
  this->PrintHeader(os, "JSLocale");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - icu_locale: " << Brief(this->icu_locale());
  os << '\n';
}

template <>
void TorqueGeneratedJSNumberFormat<JSNumberFormat, JSObject>::JSNumberFormatPrint(std::ostream& os) {
  this->PrintHeader(os, "JSNumberFormat");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - icu_number_formatter: " << Brief(this->icu_number_formatter());
  os << "\n - bound_format: " << Brief(this->bound_format());
  os << '\n';
}

template <>
void TorqueGeneratedJSPluralRules<JSPluralRules, JSObject>::JSPluralRulesPrint(std::ostream& os) {
  this->PrintHeader(os, "JSPluralRules");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - flags: " << this->flags();
  os << "\n - icu_plural_rules: " << Brief(this->icu_plural_rules());
  os << "\n - icu_number_formatter: " << Brief(this->icu_number_formatter());
  os << '\n';
}

template <>
void TorqueGeneratedJSRelativeTimeFormat<JSRelativeTimeFormat, JSObject>::JSRelativeTimeFormatPrint(std::ostream& os) {
  this->PrintHeader(os, "JSRelativeTimeFormat");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - numberingSystem: " << Brief(this->numberingSystem());
  os << "\n - icu_formatter: " << Brief(this->icu_formatter());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSSegmentIterator<JSSegmentIterator, JSObject>::JSSegmentIteratorPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSegmentIterator");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - icu_break_iterator: " << Brief(this->icu_break_iterator());
  os << "\n - raw_string: " << Brief(this->raw_string());
  os << "\n - unicode_string: " << Brief(this->unicode_string());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSSegmentDataObject<JSSegmentDataObject, JSObject>::JSSegmentDataObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSegmentDataObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - segment: " << Brief(this->segment());
  os << "\n - index: " << Brief(this->index());
  os << "\n - input: " << Brief(this->input());
  os << '\n';
}

template <>
void TorqueGeneratedJSSegmentDataObjectWithIsWordLike<JSSegmentDataObjectWithIsWordLike, JSSegmentDataObject>::JSSegmentDataObjectWithIsWordLikePrint(std::ostream& os) {
  this->PrintHeader(os, "JSSegmentDataObjectWithIsWordLike");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - segment: " << Brief(this->JSSegmentDataObject::TorqueGeneratedClass::segment());
  os << "\n - index: " << Brief(this->JSSegmentDataObject::TorqueGeneratedClass::index());
  os << "\n - input: " << Brief(this->JSSegmentDataObject::TorqueGeneratedClass::input());
  os << "\n - is_word_like: " << Brief(this->is_word_like());
  os << '\n';
}

template <>
void TorqueGeneratedJSSegmenter<JSSegmenter, JSObject>::JSSegmenterPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSegmenter");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - locale: " << Brief(this->locale());
  os << "\n - icu_break_iterator: " << Brief(this->icu_break_iterator());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedJSSegments<JSSegments, JSObject>::JSSegmentsPrint(std::ostream& os) {
  this->PrintHeader(os, "JSSegments");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - icu_break_iterator: " << Brief(this->icu_break_iterator());
  os << "\n - raw_string: " << Brief(this->raw_string());
  os << "\n - unicode_string: " << Brief(this->unicode_string());
  os << "\n - flags: " << this->flags();
  os << '\n';
}

template <>
void TorqueGeneratedWasmImportData<WasmImportData, TrustedObject>::WasmImportDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmImportData");
  os << "\n - native_context: " << Brief(this->native_context());
  os << "\n - callable: " << Brief(this->callable());
  os << "\n - suspend: " << this->suspend();
  os << "\n - wrapper_budget: " << this->wrapper_budget();
  os << "\n - call_origin: " << Brief(this->call_origin());
  os << "\n - sig: " << Brief(this->sig());
  os << '\n';
}

template <>
void TorqueGeneratedWasmInstanceObject<WasmInstanceObject, JSObject>::WasmInstanceObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmInstanceObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - module_object: " << Brief(this->module_object());
  os << "\n - exports_object: " << Brief(this->exports_object());
  os << '\n';
}

template <>
void TorqueGeneratedWasmFastApiCallData<WasmFastApiCallData, HeapObject>::WasmFastApiCallDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmFastApiCallData");
  os << "\n - signature: " << Brief(this->signature());
  os << "\n - callback_data: " << Brief(this->callback_data());
  os << "\n - cached_map: " << Brief(this->cached_map());
  os << '\n';
}

template <>
void TorqueGeneratedWasmInternalFunction<WasmInternalFunction, ExposedTrustedObject>::WasmInternalFunctionPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmInternalFunction");
  os << "\n - external: " << Brief(this->external());
  os << "\n - function_index: " << this->function_index();
  os << "\n - call_target: " << this->call_target();
  os << '\n';
}

template <>
void TorqueGeneratedWasmFunctionData<WasmFunctionData, ExposedTrustedObject>::WasmFunctionDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmFunctionData");
  os << "\n - func_ref: " << Brief(this->func_ref());
  os << "\n - js_promise_flags: " << this->js_promise_flags();
  os << '\n';
}

template <>
void TorqueGeneratedWasmExportedFunctionData<WasmExportedFunctionData, WasmFunctionData>::WasmExportedFunctionDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmExportedFunctionData");
  os << "\n - func_ref: " << Brief(this->WasmFunctionData::TorqueGeneratedClass::func_ref());
  os << "\n - js_promise_flags: " << this->WasmFunctionData::TorqueGeneratedClass::js_promise_flags();
  os << "\n - function_index: " << this->function_index();
  os << "\n - wrapper_budget: " << Brief(this->wrapper_budget());
  os << "\n - canonical_type_index: " << this->canonical_type_index();
  os << "\n - packed_args_size: " << this->packed_args_size();
  os << "\n - sig: " << this->sig();
  os << '\n';
}

template <>
void TorqueGeneratedWasmJSFunctionData<WasmJSFunctionData, WasmFunctionData>::WasmJSFunctionDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmJSFunctionData");
  os << "\n - func_ref: " << Brief(this->WasmFunctionData::TorqueGeneratedClass::func_ref());
  os << "\n - js_promise_flags: " << this->WasmFunctionData::TorqueGeneratedClass::js_promise_flags();
  os << "\n - canonical_sig_index: " << this->canonical_sig_index();
  os << '\n';
}

template <>
void TorqueGeneratedWasmCapiFunctionData<WasmCapiFunctionData, WasmFunctionData>::WasmCapiFunctionDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmCapiFunctionData");
  os << "\n - func_ref: " << Brief(this->WasmFunctionData::TorqueGeneratedClass::func_ref());
  os << "\n - js_promise_flags: " << this->WasmFunctionData::TorqueGeneratedClass::js_promise_flags();
  os << "\n - embedder_data: " << Brief(this->embedder_data());
  os << "\n - serialized_signature: " << Brief(this->serialized_signature());
  os << '\n';
}

template <>
void TorqueGeneratedWasmResumeData<WasmResumeData, HeapObject>::WasmResumeDataPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmResumeData");
  os << "\n - suspender: " << Brief(this->suspender());
  os << "\n - on_resume: " << this->on_resume();
  os << '\n';
}

template <>
void TorqueGeneratedWasmContinuationObject<WasmContinuationObject, HeapObject>::WasmContinuationObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmContinuationObject");
  os << "\n - parent: " << Brief(this->parent());
  os << '\n';
}

template <>
void TorqueGeneratedWasmSuspenderObject<WasmSuspenderObject, HeapObject>::WasmSuspenderObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmSuspenderObject");
  os << "\n - continuation: " << Brief(this->continuation());
  os << "\n - parent: " << Brief(this->parent());
  os << "\n - promise: " << Brief(this->promise());
  os << "\n - resume: " << Brief(this->resume());
  os << "\n - reject: " << Brief(this->reject());
  os << "\n - state: " << this->state();
  os << "\n - has_js_frames: " << this->has_js_frames();
  os << '\n';
}

template <>
void TorqueGeneratedWasmExceptionTag<WasmExceptionTag, Struct>::WasmExceptionTagPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmExceptionTag");
  os << "\n - index: " << this->index();
  os << '\n';
}

template <>
void TorqueGeneratedWasmModuleObject<WasmModuleObject, JSObject>::WasmModuleObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmModuleObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - managed_native_module: " << Brief(this->managed_native_module());
  os << "\n - script: " << Brief(this->script());
  os << '\n';
}

template <>
void TorqueGeneratedWasmTableObject<WasmTableObject, JSObject>::WasmTableObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmTableObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - entries: " << Brief(this->entries());
  os << "\n - current_length: " << this->current_length();
  os << "\n - maximum_length: " << Brief(this->maximum_length());
  os << "\n - uses: " << Brief(this->uses());
  os << "\n - raw_type: " << this->raw_type();
  os << "\n - is_table64: " << this->is_table64();
  os << '\n';
}

template <>
void TorqueGeneratedWasmMemoryObject<WasmMemoryObject, JSObject>::WasmMemoryObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmMemoryObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - array_buffer: " << Brief(this->array_buffer());
  os << "\n - maximum_pages: " << this->maximum_pages();
  os << "\n - is_memory64: " << this->is_memory64();
  os << "\n - instances: " << Brief(this->instances());
  os << '\n';
}

template <>
void TorqueGeneratedWasmGlobalObject<WasmGlobalObject, JSObject>::WasmGlobalObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmGlobalObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - untagged_buffer: " << Brief(this->untagged_buffer());
  os << "\n - tagged_buffer: " << Brief(this->tagged_buffer());
  os << "\n - offset: " << this->offset();
  os << "\n - raw_type: " << this->raw_type();
  os << "\n - is_mutable: " << this->is_mutable();
  os << '\n';
}

template <>
void TorqueGeneratedWasmTagObject<WasmTagObject, JSObject>::WasmTagObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmTagObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - serialized_signature: " << Brief(this->serialized_signature());
  os << "\n - tag: " << Brief(this->tag());
  os << "\n - canonical_type_index: " << this->canonical_type_index();
  os << '\n';
}

template <>
void TorqueGeneratedAsmWasmData<AsmWasmData, Struct>::AsmWasmDataPrint(std::ostream& os) {
  this->PrintHeader(os, "AsmWasmData");
  os << "\n - managed_native_module: " << Brief(this->managed_native_module());
  os << "\n - uses_bitset: " << Brief(this->uses_bitset());
  os << '\n';
}

template <>
void TorqueGeneratedWasmTypeInfo<WasmTypeInfo, HeapObject>::WasmTypeInfoPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmTypeInfo");
  os << "\n - type_index: " << this->type_index();
  os << "\n - optional_padding: " << this->optional_padding();
  os << "\n - supertypes_length: " << this->supertypes_length();
  os << '\n';
}

template <>
void TorqueGeneratedWasmStruct<WasmStruct, WasmObject>::WasmStructPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmStruct");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << '\n';
}

template <>
void TorqueGeneratedWasmArray<WasmArray, WasmObject>::WasmArrayPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmArray");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - length: " << this->length();
  os << "\n - optional_padding: " << this->optional_padding();
  os << '\n';
}

template <>
void TorqueGeneratedWasmStringViewIter<WasmStringViewIter, HeapObject>::WasmStringViewIterPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmStringViewIter");
  os << "\n - string: " << Brief(this->string());
  os << "\n - offset: " << this->offset();
  os << "\n - optional_padding: " << this->optional_padding();
  os << '\n';
}

template <>
void TorqueGeneratedWasmSuspendingObject<WasmSuspendingObject, JSObject>::WasmSuspendingObjectPrint(std::ostream& os) {
  this->PrintHeader(os, "WasmSuspendingObject");
  os << "\n - properties_or_hash: " << Brief(this->JSReceiver::TorqueGeneratedClass::properties_or_hash());
  os << "\n - elements: " << Brief(this->JSObject::TorqueGeneratedClass::elements());
  os << "\n - callable: " << Brief(this->callable());
  os << '\n';
}

}  // namespace internal
}  // namespace v8
#endif  // OBJECT_PRINT
