#ifndef V8_GEN_TORQUE_GENERATED_FIELD_OFFSETS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_FIELD_OFFSETS_TQ_H_

#define TORQUE_GENERATED_CONTEXT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kScopeInfoOffset, kTaggedSize) \
V(kPreviousOffset, kTaggedSize) \
V(kExtensionOffset, kTaggedSize) \
V(kNativeContextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_HEAP_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kMapOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSRECEIVER_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPropertiesOrHashOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_HEAP_NUMBER_FIELDS(V) \
V(kValueOffset, kDoubleSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BIG_INT_BASE_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kObjectsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_ARRAY_BASE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_STRING_FIELDS(V) \
V(kResourceOffset, kSystemPointerSize) \
V(kResourceDataOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_ONE_BYTE_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_TWO_BYTE_STRING_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_DOUBLE_ARRAY_FIELDS(V) \
V(kFloatsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WEAK_FIXED_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BYTE_ARRAY_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MAP_FIELDS(V) \
V(kInstanceSizeInWordsOffset, kUInt8Size) \
V(kInObjectPropertiesStartOrConstructorFunctionIndexOffset, kUInt8Size) \
V(kUsedOrUnusedInstanceSizeInWordsOffset, kUInt8Size) \
V(kVisitorIdOffset, kUInt8Size) \
V(kInstanceTypeOffset, kUInt16Size) \
V(kBitFieldOffset, kUInt8Size) \
V(kBitField2Offset, kUInt8Size) \
V(kBitField3Offset, kInt32Size) \
V(kOptionalPaddingOffset, kInt32Size) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPrototypeOffset, kTaggedSize) \
V(kConstructorOrBackPointerOffset, kTaggedSize) \
V(kInstanceDescriptorsOffset, kTaggedSize) \
V(kLayoutDescriptorOffset, kTaggedSize) \
V(kDependentCodeOffset, kTaggedSize) \
V(kPrototypeValidityCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kTransitionsOrPrototypeInfoOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DESCRIPTOR_ARRAY_FIELDS(V) \
V(kNumberOfAllDescriptorsOffset, kUInt16Size) \
V(kNumberOfDescriptorsOffset, kUInt16Size) \
V(kRawNumberOfMarkedDescriptorsOffset, kUInt16Size) \
V(kFiller16BitsOffset, kUInt16Size) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEnumCacheOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSFUNCTION_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kFeedbackCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kCodeOffset, kTaggedSize) \
V(kPrototypeOrInitialMapOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROXY_REVOCABLE_RESULT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kProxyOffset, kTaggedSize) \
V(kRevokeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARGUMENTS_OBJECT_WITH_LENGTH_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSLOPPY_ARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCalleeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSTRICT_ARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIteratedObjectOffset, kTaggedSize) \
V(kNextIndexOffset, kTaggedSize) \
V(kKindOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MODULE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kExportsOffset, kTaggedSize) \
V(kHashOffset, kTaggedSize) \
V(kStatusOffset, kTaggedSize) \
V(kModuleNamespaceOffset, kTaggedSize) \
V(kExceptionOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_TEMPLATE_LIST_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSMESSAGE_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kMessageTypeOffset, kTaggedSize) \
V(kArgumentsOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kStackFramesOffset, kTaggedSize) \
V(kSharedInfoOffset, kTaggedSize) \
V(kBytecodeOffsetOffset, kTaggedSize) \
V(kStartPositionOffset, kTaggedSize) \
V(kEndPositionOffset, kTaggedSize) \
V(kErrorLevelOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WEAK_ARRAY_LIST_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCapacityOffset, kTaggedSize) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROTOTYPE_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kJsModuleNamespaceOffset, kTaggedSize) \
V(kPrototypeUsersOffset, kTaggedSize) \
V(kRegistrySlotOffset, kTaggedSize) \
V(kValidityCellOffset, kTaggedSize) \
V(kObjectCreateMapOffset, kTaggedSize) \
V(kBitFieldOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SCRIPT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSourceOffset, kTaggedSize) \
V(kNameOffset, kTaggedSize) \
V(kLineOffsetOffset, kTaggedSize) \
V(kColumnOffsetOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kScriptTypeOffset, kTaggedSize) \
V(kLineEndsOffset, kTaggedSize) \
V(kIdOffset, kTaggedSize) \
V(kEvalFromSharedOrWrappedArgumentsOffset, kTaggedSize) \
V(kEvalFromPositionOffset, kTaggedSize) \
V(kSharedFunctionInfosOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kSourceUrlOffset, kTaggedSize) \
V(kSourceMappingUrlOffset, kTaggedSize) \
V(kHostDefinedOptionsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PREPARSE_DATA_FIELDS(V) \
V(kDataLengthOffset, kInt32Size) \
V(kInnerLengthOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERPRETER_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBytecodeArrayOffset, kTaggedSize) \
V(kInterpreterTrampolineOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SHARED_FUNCTION_INFO_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kFunctionDataOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOrScopeInfoOffset, kTaggedSize) \
V(kOuterScopeInfoOrFeedbackMetadataOffset, kTaggedSize) \
V(kScriptOrDebugInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kLengthOffset, kUInt16Size) \
V(kFormalParameterCountOffset, kUInt16Size) \
V(kExpectedNofPropertiesOffset, kUInt16Size) \
V(kFunctionTokenOffsetOffset, kUInt16Size) \
V(kFlagsOffset, kInt32Size) \
V(kFunctionLiteralIdOffset, kInt32Size) \
V(kSize, 0) \

#define TORQUE_GENERATED_FOREIGN_FIELDS(V) \
V(kForeignAddressOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FREE_SPACE_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSizeOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_BUFFER_FIELDS(V) \
V(kByteLengthOffset, kIntptrSize) \
V(kBackingStoreOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_BUFFER_VIEW_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBufferOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kByteOffsetOffset, kIntptrSize) \
V(kByteLengthOffset, kIntptrSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kHeaderSize, 0) \

#define TORQUE_GENERATED_JSTYPED_ARRAY_FIELDS(V) \
V(kLengthOffset, kIntptrSize) \
V(kExternalPointerOffset, kSystemPointerSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBasePointerOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSGLOBAL_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeContextOffset, kTaggedSize) \
V(kGlobalProxyOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSTRING_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kStringOffset, kTaggedSize) \
V(kNextIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROPERTY_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthAndHashOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROPERTY_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kPropertyDetailsRawOffset, kTaggedSize) \
V(kValueOffset, kTaggedSize) \
V(kDependentCodeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSDATA_VIEW_FIELDS(V) \
V(kDataPointerOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DATA_HANDLER_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSmiHandlerOffset, kTaggedSize) \
V(kValidityCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kData1Offset, kTaggedSize) \
V(kData2Offset, kTaggedSize) \
V(kData3Offset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STACK_FRAME_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLineNumberOffset, kTaggedSize) \
V(kColumnNumberOffset, kTaggedSize) \
V(kPromiseAllIndexOffset, kTaggedSize) \
V(kScriptIdOffset, kTaggedSize) \
V(kScriptNameOffset, kTaggedSize) \
V(kScriptNameOrSourceUrlOffset, kTaggedSize) \
V(kFunctionNameOffset, kTaggedSize) \
V(kMethodNameOffset, kTaggedSize) \
V(kTypeNameOffset, kTaggedSize) \
V(kEvalOriginOffset, kTaggedSize) \
V(kWasmModuleNameOffset, kTaggedSize) \
V(kWasmInstanceOffset, kTaggedSize) \
V(kFlagOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_EXPORTED_FUNCTION_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kWrapperCodeOffset, kTaggedSize) \
V(kInstanceOffset, kTaggedSize) \
V(kJumpTableOffsetOffset, kTaggedSize) \
V(kFunctionIndexOffset, kTaggedSize) \
V(kCWrapperCodeOffset, kTaggedSize) \
V(kWasmCallTargetOffset, kTaggedSize) \
V(kPackedArgsSizeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_JSFUNCTION_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallableOffset, kTaggedSize) \
V(kWrapperCodeOffset, kTaggedSize) \
V(kSerializedReturnCountOffset, kTaggedSize) \
V(kSerializedParameterCountOffset, kTaggedSize) \
V(kSerializedSignatureOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_CAPI_FUNCTION_DATA_FIELDS(V) \
V(kCallTargetOffset, kSystemPointerSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEmbedderDataOffset, kTaggedSize) \
V(kWrapperCodeOffset, kTaggedSize) \
V(kSerializedSignatureOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_INDIRECT_FUNCTION_TABLE_FIELDS(V) \
V(kSizeOffset, kInt32Size) \
V(kOptionalPaddingOffset, kInt32Size) \
V(kSigIdsOffset, kSystemPointerSize) \
V(kTargetsOffset, kSystemPointerSize) \
V(kStartOfStrongFieldsOffset, 0) \
V(kManagedNativeAllocationsOffset, kTaggedSize) \
V(kRefsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_DEBUG_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kInstanceOffset, kTaggedSize) \
V(kInterpreterHandleOffset, kTaggedSize) \
V(kLocalsNamesOffset, kTaggedSize) \
V(kCWasmEntriesOffset, kTaggedSize) \
V(kCWasmEntryMapOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_RESULT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIndexOffset, kTaggedSize) \
V(kInputOffset, kTaggedSize) \
V(kGroupsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_REG_EXP_MATCH_INFO_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESSOR_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kExpectedReceiverTypeOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kGetterOffset, kTaggedSize) \
V(kJsGetterOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESSOR_PAIR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kGetterOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BREAK_POINT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BREAK_POINT_INFO_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DEBUG_INFO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kDebuggerHintsOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kOriginalBytecodeArrayOffset, kTaggedSize) \
V(kDebugBytecodeArrayOffset, kTaggedSize) \
V(kBreakPointsOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kCoverageInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FEEDBACK_VECTOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kOptimizedCodeWeakOrSmiOffset, kTaggedSize) \
V(kClosureFeedbackCellArrayOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kLengthOffset, kInt32Size) \
V(kInvocationCountOffset, kInt32Size) \
V(kProfilerTicksOffset, kInt32Size) \
V(kPaddingOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FEEDBACK_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kInterruptBudgetOffset, kInt32Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ALLOCATION_MEMENTO_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kAllocationSiteOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_MODULE_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeModuleOffset, kTaggedSize) \
V(kExportWrappersOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kWeakInstanceListOffset, kTaggedSize) \
V(kAsmJsOffsetTableOffset, kTaggedSize) \
V(kBreakPointInfosOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_TABLE_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEntriesOffset, kTaggedSize) \
V(kMaximumLengthOffset, kTaggedSize) \
V(kDispatchTablesOffset, kTaggedSize) \
V(kRawTypeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_MEMORY_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kArrayBufferOffset, kTaggedSize) \
V(kMaximumPagesOffset, kTaggedSize) \
V(kInstancesOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_GLOBAL_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kUntaggedBufferOffset, kTaggedSize) \
V(kTaggedBufferOffset, kTaggedSize) \
V(kOffsetOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_EXCEPTION_OBJECT_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSerializedSignatureOffset, kTaggedSize) \
V(kExceptionTagOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ASM_WASM_DATA_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kManagedNativeModuleOffset, kTaggedSize) \
V(kExportWrappersOffset, kTaggedSize) \
V(kAsmJsOffsetTableOffset, kTaggedSize) \
V(kUsesBitsetOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSFINALIZATION_GROUP_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeContextOffset, kTaggedSize) \
V(kCleanupOffset, kTaggedSize) \
V(kActiveCellsOffset, kTaggedSize) \
V(kClearedCellsOffset, kTaggedSize) \
V(kKeyMapOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSFINALIZATION_GROUP_CLEANUP_ITERATOR_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFinalizationGroupOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WEAK_CELL_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFinalizationGroupOffset, kTaggedSize) \
V(kTargetOffset, kTaggedSize) \
V(kHoldingsOffset, kTaggedSize) \
V(kPrevOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kKeyOffset, kTaggedSize) \
V(kKeyListPrevOffset, kTaggedSize) \
V(kKeyListNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_REF_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTargetOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BYTECODE_ARRAY_FIELDS(V) \
V(kStartOfStrongFieldsOffset, 0) \
V(kConstantPoolOffset, kTaggedSize) \
V(kHandlerTableOffset, kTaggedSize) \
V(kSourcePositionTableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kFrameSizeOffset, kInt32Size) \
V(kParameterSizeOffset, kInt32Size) \
V(kIncomingNewTargetOrGeneratorRegisterOffset, kInt32Size) \
V(kOsrNestingLevelOffset, kUInt8Size) \
V(kBytecodeAgeOffset, kUInt8Size) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MUTABLE_BIG_INT_FIELDS(V) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kSize, 0) \

#endif  // V8_GEN_TORQUE_GENERATED_FIELD_OFFSETS_TQ_H_
