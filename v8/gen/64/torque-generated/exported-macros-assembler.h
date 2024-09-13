#ifndef V8_GEN_TORQUE_GENERATED_EXPORTED_MACROS_ASSEMBLER_H_
#define V8_GEN_TORQUE_GENERATED_EXPORTED_MACROS_ASSEMBLER_H_

#include "src/compiler/code-assembler.h"
#include "src/execution/frames.h"
#include "torque-generated/csa-types.h"
namespace v8 {
namespace internal {
class V8_EXPORT_PRIVATE TorqueGeneratedExportedMacrosAssembler {
 public:
  explicit TorqueGeneratedExportedMacrosAssembler(compiler::CodeAssemblerState* state) : state_(state) {
    USE(state_);
  }
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/array.tq?l=64&c=1
  void EnsureArrayLengthWritable(TNode<Context> p_context, TNode<Map> p_map, compiler::CodeAssemblerLabel* label_Bailout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=708&c=1
  TNode<Number> ToInteger_Inline(TNode<Context> p_context, TNode<Object> p_input);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1579&c=1
  TNode<Object> RequireObjectCoercible(TNode<Context> p_context, TNode<Object> p_value, const char* p_name);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1677&c=1
  TNode<UintPtrT> ChangeUintPtrNumberToUintPtr(TNode<Number> p_value);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1687&c=1
  TNode<UintPtrT> ChangeSafeIntegerNumberToUintPtr(TNode<Number> p_value, compiler::CodeAssemblerLabel* label_IfUIntPtrOverflow);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1711&c=1
  TNode<UintPtrT> ToIndex(TNode<Context> p_context, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_IfRangeError);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1810&c=1
  TNode<UintPtrT> ConvertAndClampRelativeIndex(TNode<Context> p_context, TNode<Object> p_index, TNode<UintPtrT> p_length);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1819&c=1
  TNode<UintPtrT> ConvertAndClampRelativeIndex(TNode<Number> p_indexNumber, TNode<UintPtrT> p_length);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1878&c=1
  TNode<UintPtrT> ClampToIndexRange(TNode<Context> p_context, TNode<Object> p_index, TNode<UintPtrT> p_limit);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1887&c=1
  TNode<UintPtrT> ClampToIndexRange(TNode<Number> p_indexNumber, TNode<UintPtrT> p_limit);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1924&c=1
  TNode<BoolT> IsFastJSArray(TNode<Object> p_o, TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1932&c=1
  void BranchIfFastJSArray(TNode<Object> p_o, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1942&c=1
  void BranchIfFastJSArrayForRead(TNode<Object> p_o, TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1955&c=1
  TNode<BoolT> IsFastJSArrayWithNoCustomIteration(TNode<Context> p_context, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/base.tq?l=1960&c=1
  TNode<BoolT> IsFastJSArrayForReadWithNoCustomIteration(TNode<Context> p_context, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/builtins-string.tq?l=13&c=1
  TNode<String> ToStringImpl(TNode<Context> p_context, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=12&c=1
  TNode<BoolT> IsAccessorInfo(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=17&c=1
  TNode<BoolT> IsAccessorPair(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=22&c=1
  TNode<BoolT> IsAllocationSite(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=27&c=1
  TNode<BoolT> IsCell(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=32&c=1
  TNode<BoolT> IsInstructionStream(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=37&c=1
  TNode<BoolT> IsCode(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=42&c=1
  TNode<BoolT> IsContext(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=47&c=1
  TNode<BoolT> IsCoverageInfo(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=52&c=1
  TNode<BoolT> IsDebugInfo(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=57&c=1
  TNode<BoolT> IsFixedDoubleArray(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=62&c=1
  TNode<BoolT> IsFeedbackCell(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=67&c=1
  TNode<BoolT> IsFeedbackVector(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=72&c=1
  TNode<BoolT> IsHeapNumber(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=77&c=1
  TNode<BoolT> IsNativeContext(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=82&c=1
  TNode<BoolT> IsNumber(TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=87&c=1
  TNode<BoolT> IsPrivateSymbol(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=92&c=1
  TNode<BoolT> IsPromiseCapability(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=97&c=1
  TNode<BoolT> IsPromiseFulfillReactionJobTask(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=102&c=1
  TNode<BoolT> IsPromiseReaction(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=107&c=1
  TNode<BoolT> IsPromiseRejectReactionJobTask(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=112&c=1
  TNode<BoolT> IsSharedFunctionInfo(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/cast.tq?l=117&c=1
  TNode<BoolT> IsSymbol(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=220&c=1
  TorqueStructKeyValuePair LoadKeyValuePairNoSideEffects(TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/collections.tq?l=254&c=1
  TorqueStructKeyValuePair LoadKeyValuePair(TNode<Context> p_context, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/frames.tq?l=134&c=1
  TNode<JSFunction> LoadTargetFromFrame();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=9&c=1
  void CollectCallFeedback(TNode<Object> p_maybeTarget, std::function<TNode<Object>()> p_maybeReceiver, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=17&c=1
  void CollectInstanceOfFeedback(TNode<Object> p_maybeTarget, TNode<Context> p_context, TNode<HeapObject> p_maybeFeedbackVector, TNode<UintPtrT> p_slotId);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/ic.tq?l=25&c=1
  void CollectConstructFeedback(TNode<Context> p_context, TNode<Object> p_target, TNode<Object> p_newTarget, TNode<HeapObject> p_maybeFeedbackVector, TNode<TaggedIndex> p_slotId, UpdateFeedbackMode p_updateFeedbackMode, compiler::CodeAssemblerLabel* label_ConstructGeneric, compiler::CodeAssemblerLabel* label_ConstructArray, compiler::TypedCodeAssemblerVariable<AllocationSite>* label_ConstructArray_parameter_0);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/internal.tq?l=49&c=1
  TNode<Object> ForInNextSlow(TNode<Context> p_context, TNode<UintPtrT> p_slot, TNode<HeapObject> p_receiver, TNode<Object> p_key, TNode<Object> p_cacheType, TNode<HeapObject> p_maybeFeedbackVector, UpdateFeedbackMode p_guaranteedFeedback);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=107&c=1
  TorqueStructIteratorRecord GetIteratorRecordAfterCreateAsyncFromSyncIterator(TNode<Context> p_context, TorqueStructIteratorRecord p_asyncIterator);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=141&c=1
  void IteratorCloseOnException(TNode<Context> p_context, TorqueStructIteratorRecord p_iterator);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/iterator.tq?l=163&c=1
  void IteratorClose(TNode<Context> p_context, TorqueStructIteratorRecord p_iterator);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/math.tq?l=119&c=1
  TNode<Number> MathPowImpl(TNode<Context> p_context, TNode<Object> p_base, TNode<Object> p_exponent);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/number.tq?l=104&c=1
  TNode<String> IntToDecimalString(TNode<Int32T> p_x);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=321&c=1
  TNode<HeapObject> ToPropertyDescriptor(TNode<Context> p_context, TNode<Object> p_object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/object.tq?l=341&c=1
  TNode<Object> FromPropertyDescriptor(TNode<Context> p_context, TNode<Object> p_object);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=287&c=1
  TNode<Context> CreatePromiseCapabilitiesExecutorContext(TNode<NativeContext> p_nativeContext, TNode<PromiseCapability> p_capability);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=300&c=1
  TNode<PromiseCapability> CreatePromiseCapability(TNode<HeapObject> p_promise, TNode<HeapObject> p_resolve, TNode<HeapObject> p_reject);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=324&c=1
  TorqueStructPromiseResolvingFunctions CreatePromiseResolvingFunctions(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Boolean> p_debugEvent, TNode<NativeContext> p_nativeContext);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-abstract-operations.tq?l=449&c=1
  void PerformPromiseThenImpl(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<HeapObject> p_onFulfilled, TNode<HeapObject> p_onRejected, TNode<HeapObject> p_resultPromiseOrCapability);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-all.tq?l=56&c=1
  TNode<Context> CreatePromiseResolvingFunctionsContext(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Boolean> p_debugEvent, TNode<NativeContext> p_nativeContext);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=41&c=1
  TNode<BoolT> PromiseHasHandler(TNode<JSPromise> p_promise);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=46&c=1
  void PromiseInit(TNode<JSPromise> p_promise);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=133&c=1
  void RunContextPromiseHookInit(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Object> p_parent);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=149&c=1
  void RunContextPromiseHookResolve(TNode<Context> p_context, TNode<JSPromise> p_promise);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=161&c=1
  void RunContextPromiseHookResolve(TNode<Context> p_context, TNode<JSPromise> p_promise, TNode<Uint32T> p_flags);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=168&c=1
  void RunContextPromiseHookBefore(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=181&c=1
  void RunContextPromiseHookBefore(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=191&c=1
  void RunContextPromiseHookAfter(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=204&c=1
  void RunContextPromiseHookAfter(TNode<Context> p_context, TNode<HeapObject> p_promiseOrCapability, TNode<Uint32T> p_flags);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=268&c=1
  TNode<JSPromise> NewJSPromise(TNode<Context> p_context, TNode<Object> p_parent);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=279&c=1
  TNode<JSPromise> NewJSPromise(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/promise-misc.tq?l=286&c=1
  TNode<JSPromise> NewJSPromise(TNode<Context> p_context, Promise::PromiseState p_status, TNode<Object> p_result);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-exec.tq?l=9&c=1
  TNode<Object> RegExpPrototypeExecBodyFast(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp-match-all.tq?l=12&c=1
  TNode<Object> RegExpPrototypeMatchAllImpl(TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_receiver, TNode<Object> p_string);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=35&c=1
  TNode<BoolT> IsFastRegExpPermissive(TNode<Context> p_context, TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=42&c=1
  TNode<Object> RegExpExec(TNode<Context> p_context, TNode<JSReceiver> p_receiver, TNode<String> p_string);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=138&c=1
  TNode<RegExpMatchInfo> RegExpPrototypeExecBodyWithoutResultFast(TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, compiler::CodeAssemblerLabel* label_IfDidNotMatch);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=347&c=1
  TNode<Object> LoadLastIndex(TNode<Context> p_context, TNode<Object> p_regexp, bool p_isFastPath);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=355&c=1
  TNode<Number> LoadLastIndexAsLength(TNode<Context> p_context, TNode<JSRegExp> p_regexp, bool p_isFastPath);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=376&c=1
  void StoreLastIndex(TNode<Context> p_context, TNode<Object> p_regexp, TNode<Number> p_value, bool p_isFastPath);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=404&c=1
  TNode<BoolT> IsRegExp(TNode<Context> p_context, TNode<Object> p_obj);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=435&c=1
  TNode<Object> RegExpCreate(TNode<Context> p_context, TNode<NativeContext> p_nativeContext, TNode<Object> p_maybeString, TNode<String> p_flags);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/regexp.tq?l=448&c=1
  TNode<Object> RegExpCreate(TNode<Context> p_context, TNode<Map> p_initialMap, TNode<Object> p_maybeString, TNode<String> p_flags);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/string-trim.tq?l=15&c=1
  TNode<BoolT> IsWhiteSpaceOrLineTerminator(TNode<Uint16T> p_charCode);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-createtypedarray.tq?l=331&c=1
  TNode<JSTypedArray> TypedArrayCreateByLength(TNode<Context> p_context, TNode<JSReceiver> p_constructor, TNode<Number> p_length, const char* p_methodName);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/typed-array-createtypedarray.tq?l=481&c=1
  TNode<JSTypedArray> TypedArraySpeciesCreateByLength(TNode<Context> p_context, const char* p_methodName, TNode<JSTypedArray> p_exemplar, TNode<UintPtrT> p_length);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=10&c=1
  TNode<BoolT> IsJSArgumentsObjectWithLength(TNode<Context> p_context, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=226&c=1
  TNode<JSArray> EmitFastNewAllArguments(TNode<Context> p_context, TNode<RawPtrT> p_frame, TNode<IntPtrT> p_argc);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=233&c=1
  TNode<JSArray> EmitFastNewRestArguments(TNode<Context> p_context, TNode<JSFunction> p__f);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=240&c=1
  TNode<JSArgumentsObject> EmitFastNewStrictArguments(TNode<Context> p_context, TNode<JSFunction> p__f);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=247&c=1
  TNode<JSArgumentsObject> EmitFastNewSloppyArguments(TNode<Context> p_context, TNode<JSFunction> p_f);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=330&c=1
  TNode<Object> SloppyArgumentsLoad(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=337&c=1
  TNode<Object> SloppyArgumentsHas(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, compiler::CodeAssemblerLabel* label_Bailout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=344&c=1
  TNode<Object> SloppyArgumentsStore(TNode<JSObject> p_receiver, TNode<Object> p_keyObject, TNode<Object> p_value, compiler::CodeAssemblerLabel* label_Bailout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=39&c=1
  TNode<Context> AllocateSyntheticFunctionContext(TNode<NativeContext> p_nativeContext, int31_t p_slots);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=196&c=1
  TNode<Object> LoadContextElement(TNode<Context> p_c, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=201&c=1
  TNode<Object> LoadContextElement(TNode<Context> p_c, TNode<Smi> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=206&c=1
  TNode<Object> LoadContextElement(TNode<Context> p_c, int32_t p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=211&c=1
  void StoreContextElement(TNode<Context> p_c, TNode<IntPtrT> p_i, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=216&c=1
  void StoreContextElement(TNode<Context> p_c, TNode<Smi> p_i, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=221&c=1
  void StoreContextElement(TNode<Context> p_c, int32_t p_i, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=226&c=1
  void StoreContextElementAndUpdateSideData(TNode<Context> p_c, TNode<IntPtrT> p_i, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=233&c=1
  void StoreContextElementAndUpdateSideData(TNode<Context> p_c, int32_t p_i, TNode<Object> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=37&c=1
  TNode<BoolT> IsDetachedBuffer(TNode<JSArrayBuffer> p_buffer);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=42&c=1
  TNode<BoolT> IsSharedArrayBuffer(TNode<JSArrayBuffer> p_buffer);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=47&c=1
  TNode<BoolT> IsResizableArrayBuffer(TNode<JSArrayBuffer> p_buffer);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=83&c=1
  TNode<BoolT> IsVariableLengthJSArrayBufferView(TNode<JSArrayBufferView> p_array);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=88&c=1
  TNode<BoolT> IsLengthTrackingJSArrayBufferView(TNode<JSArrayBufferView> p_array);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=119&c=1
  TNode<BoolT> IsOnHeapTypedArray(TNode<JSTypedArray> p_array);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=39&c=1
  TNode<JSArrayIterator> CreateArrayIterator(TNode<NativeContext> p_context, TNode<JSReceiver> p_array, IterationKind p_kind, TNode<Number> p_nextIndex);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=54&c=1
  TNode<JSArrayIterator> CreateArrayIterator(TNode<NativeContext> p_context, TNode<JSReceiver> p_array, IterationKind p_kind);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=80&c=1
  TNode<PrototypeInfo> LoadMapPrototypeInfo(TNode<Map> p_m, compiler::CodeAssemblerLabel* label_HasNoPrototypeInfo);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=87&c=1
  TNode<BoolT> IsSimpleObjectMap(TNode<Map> p_map);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=39&c=1
  TNode<SmallOrderedHashSet> AllocateSmallOrderedHashSet(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=78&c=1
  TNode<SmallOrderedHashMap> AllocateSmallOrderedHashMap(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=114&c=1
  TNode<BoolT> IsCompatiblePropertyDescriptor(TNode<BoolT> p_extensible, TNode<HeapObject> p_newDesc, TNode<HeapObject> p_current);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=131&c=1
  void CompletePropertyDescriptor(TNode<PropertyDescriptorObject> p_desc);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=196&c=1
  TNode<IntPtrT> IndexOfLocalName(TNode<ScopeInfo> p_scopeInfo, TNode<Name> p_name, compiler::CodeAssemblerLabel* label_NotFound);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=121&c=1
  TNode<Uint16T> LoadSharedFunctionInfoFormalParameterCountWithoutReceiver(TNode<SharedFunctionInfo> p_sfi);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=132&c=1
  TNode<Uint16T> LoadSharedFunctionInfoFormalParameterCountWithReceiver(TNode<SharedFunctionInfo> p_sfi);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=138&c=1
  TNode<BoolT> IsSharedFunctionInfoDontAdaptArguments(TNode<SharedFunctionInfo> p_sfi);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=208&c=1
  TNode<String> AllocateSeqOneByteString(TNode<Uint32T> p_length);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=214&c=1
  TNode<String> AllocateSeqTwoByteString(TNode<Uint32T> p_length);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=62&c=1
  TNode<IntPtrT> SwissNameDictionaryCapacityFor(TNode<IntPtrT> p_atLeastSpaceFor);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=83&c=1
  TNode<IntPtrT> SwissNameDictionaryMaxUsableCapacity(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=95&c=1
  TNode<IntPtrT> SwissNameDictionarySizeFor(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=105&c=1
  TNode<IntPtrT> SwissNameDictionaryMetaTableSizePerEntryFor(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=117&c=1
  TNode<IntPtrT> SwissNameDictionaryMetaTableSizeFor(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=134&c=1
  TNode<IntPtrT> SwissNameDictionaryDataTableStartOffsetMT();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=139&c=1
  TNode<IntPtrT> SwissNameDictionaryCtrlTableStartOffsetMT(TNode<IntPtrT> p_capacity);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=248&c=1
  void SwissNameDictionaryDelete(TNode<SwissNameDictionary> p_table, TNode<IntPtrT> p_entry, compiler::CodeAssemblerLabel* label_Shrunk, compiler::TypedCodeAssemblerVariable<SwissNameDictionary>* label_Shrunk_parameter_0);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=277&c=1
  void SwissNameDictionaryFindEntrySIMD(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=285&c=1
  void SwissNameDictionaryFindEntryPortable(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, compiler::CodeAssemblerLabel* label_Found, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_Found_parameter_0, compiler::CodeAssemblerLabel* label_NotFound);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=300&c=1
  void SwissNameDictionaryAddSIMD(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=308&c=1
  void SwissNameDictionaryAddPortable(TNode<SwissNameDictionary> p_table, TNode<Name> p_key, TNode<Object> p_value, TNode<Uint8T> p_propertyDetails, compiler::CodeAssemblerLabel* label_Bailout);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=42&c=1
  void TestConstexpr1();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=48&c=1
  void TestConstexprIf();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=55&c=1
  void TestConstexprReturn();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=67&c=1
  TNode<Boolean> TestGotoLabel();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=76&c=1
  TNode<Boolean> TestGotoLabelWithOneParameter();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=86&c=1
  TNode<Boolean> TestGotoLabelWithTwoParameters();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=105&c=1
  void TestBuiltinSpecialization();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=132&c=1
  TNode<Boolean> TestPartiallyUnusedLabel();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=162&c=1
  void TestMacroSpecialization();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=188&c=1
  TNode<Boolean> TestFunctionPointers(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=197&c=1
  TNode<Boolean> TestVariableRedeclaration(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=204&c=1
  TNode<Smi> TestTernaryOperator(TNode<Smi> p_x);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=210&c=1
  void TestFunctionPointerToGeneric();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=222&c=1
  TNode<BuiltinPtr> TestTypeAlias(TNode<BuiltinPtr> p_x);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=227&c=1
  TNode<Boolean> TestUnsafeCast(TNode<Context> p_context, TNode<Number> p_n);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=238&c=1
  void TestHexLiteral();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=244&c=1
  void TestLargeIntegerLiterals(TNode<Context> p_c);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=250&c=1
  void TestMultilineAssert();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=258&c=1
  void TestNewlineInString();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=267&c=1
  void TestModuleConstBindings();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=274&c=1
  void TestLocalConstBindings();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=300&c=1
  TNode<Smi> TestStruct1(TorqueStructTestStructA_0 p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=305&c=1
  TorqueStructTestStructA_0 TestStruct2(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=314&c=1
  TorqueStructTestStructA_0 TestStruct3(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=340&c=1
  TorqueStructTestStructC_0 TestStruct4(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=349&c=1
  void CallTestStructInLabel(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=358&c=1
  void TestForLoop();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=457&c=1
  void TestSubtyping(TNode<Smi> p_x);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=503&c=1
  void TestTypeswitch(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=511&c=1
  void TestTypeswitchAsanLsanFailure(TNode<Context> p_context, TNode<Object> p_obj);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=533&c=1
  void TestGenericOverload(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=541&c=1
  void TestEquality(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=551&c=1
  TNode<BoolT> TestOrAnd(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=556&c=1
  TNode<BoolT> TestAndOr(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=561&c=1
  void TestLogicalOperators();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=581&c=1
  TNode<Smi> TestCall(TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=587&c=1
  void TestOtherwiseWithCode1();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=599&c=1
  void TestOtherwiseWithCode2();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=609&c=1
  void TestOtherwiseWithCode3();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=618&c=1
  void TestForwardLabel();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=629&c=1
  void TestQualifiedAccess(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=635&c=1
  TNode<Smi> TestCatch1(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=646&c=1
  void TestCatch2Wrapper(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=651&c=1
  TNode<Smi> TestCatch2(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=662&c=1
  void TestCatch3WrapperWithLabel(TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=668&c=1
  TNode<Smi> TestCatch3(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=685&c=1
  void TestIterator(TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=704&c=1
  void TestFrame1(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=720&c=1
  void TestNew(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=744&c=1
  void TestStructConstructor(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=773&c=1
  void TestInternalClass(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=792&c=1
  void TestConstInStructs();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=803&c=1
  void TestParentFrameArguments(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=819&c=1
  TNode<Object> TestNewFixedArrayFromSpread(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=839&c=1
  void TestReferences();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=850&c=1
  void TestSlices();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=878&c=1
  TNode<Undefined> TestSliceEnumeration(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=907&c=1
  void TestStaticAssert();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=935&c=1
  void TestLoadEliminationFixed(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=949&c=1
  void TestLoadEliminationVariable(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=961&c=1
  TNode<Smi> TestRedundantArrayElementCheck(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=976&c=1
  TNode<Smi> TestRedundantSmiCheck(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=995&c=1
  TNode<IntPtrT> TestGenericStruct1();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1016&c=1
  TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0 TestGenericStruct2();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1038&c=1
  void TestBranchOnBoolOptimization(TNode<Context> p_context, TNode<Smi> p_input);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1058&c=1
  void TestBitFieldLoad(TNode<Uint8T> p_val, TNode<BoolT> p_expectedA, TNode<Uint16T> p_expectedB, TNode<Uint32T> p_expectedC, TNode<BoolT> p_expectedD);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1068&c=1
  void TestBitFieldStore(TNode<Uint8T> p_val);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1087&c=1
  void TestBitFieldInit(TNode<BoolT> p_a, TNode<Uint16T> p_b, TNode<Uint32T> p_c, TNode<BoolT> p_d);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1105&c=1
  void TestBitFieldUintptrOps(TNode<Uint32T> p_val2, TNode<UintPtrT> p_val3);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1146&c=1
  void TestBitFieldMultipleFlags(TNode<BoolT> p_a, TNode<Int32T> p_b, TNode<BoolT> p_c);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=1
  TNode<ExportedSubClass> TestFullyGeneratedClassFromCpp();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1219&c=1
  void TestGeneratedCastOperators(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1253&c=1
  void TestNewPretenured(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1260&c=1
  void TestWord8Phi();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1273&c=1
  void TestOffHeapSlice(TNode<RawPtrT> p_ptr, TNode<IntPtrT> p_length);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1296&c=1
  void TestCallMultiReturnBuiltin(TNode<Context> p_context);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1303&c=1
  TNode<Smi> TestRunLazyTwice(std::function<TNode<Smi>()> p_lazySmi);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1322&c=1
  void TestCreateLazyNodeFromTorque();
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/builtins/wasm-to-js.tq?l=53&c=1
  TorqueStructWasmToJSResult WasmToJSWrapper(TNode<WasmImportData> p_ref);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-object.tq?l=10&c=9
  TNode<Map> LoadHeapObjectMap(TNode<HeapObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=9&c=3
  TNode<Float64T> LoadHeapNumberValue(TNode<HeapNumber> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/heap-number.tq?l=9&c=3
  void StoreHeapNumberValue(TNode<HeapNumber> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=8&c=3
  TNode<Uint32T> LoadNameRawHashField(TNode<Name> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=8&c=3
  void StoreNameRawHashField(TNode<Name> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=47&c=9
  TNode<Int32T> LoadStringLength(TNode<String> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=32&c=3
  TNode<Uint32T> LoadSymbolFlags(TNode<Symbol> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=32&c=3
  void StoreSymbolFlags(TNode<Symbol> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=33&c=3
  TNode<PrimitiveHeapObject> LoadSymbolDescription(TNode<Symbol> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/name.tq?l=33&c=3
  void StoreSymbolDescription(TNode<Symbol> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
  TNode<Float64T> LoadOddballToNumberRaw(TNode<Oddball> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=9&c=3
  void StoreOddballToNumberRaw(TNode<Oddball> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
  TNode<String> LoadOddballToString(TNode<Oddball> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=10&c=3
  void StoreOddballToString(TNode<Oddball> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
  TNode<Number> LoadOddballToNumber(TNode<Oddball> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=11&c=3
  void StoreOddballToNumber(TNode<Oddball> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
  TNode<String> LoadOddballTypeOf(TNode<Oddball> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=12&c=3
  void StoreOddballTypeOf(TNode<Oddball> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
  TNode<Smi> LoadOddballKind(TNode<Oddball> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/oddball.tq?l=13&c=3
  void StoreOddballKind(TNode<Oddball> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
  TNode<Object> LoadJSReceiverPropertiesOrHash(TNode<JSReceiver> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=9&c=3
  void StoreJSReceiverPropertiesOrHash(TNode<JSReceiver> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=13&c=9
  TNode<Smi> LoadContextLength(TNode<Context> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceContextElements(TNode<Context> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  TNode<Object> LoadContextElements(TNode<Context> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=14&c=3
  void StoreContextElements(TNode<Context> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
  TNode<FixedArrayBase> LoadJSObjectElements(TNode<JSObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=33&c=3
  void StoreJSObjectElements(TNode<JSObject> p_o, TNode<FixedArrayBase> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
  TNode<Object> LoadJSPromiseReactionsOrResult(TNode<JSPromise> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=34&c=3
  void StoreJSPromiseReactionsOrResult(TNode<JSPromise> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
  TNode<Smi> LoadJSPromiseFlags(TNode<JSPromise> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-promise.tq?l=35&c=3
  void StoreJSPromiseFlags(TNode<JSPromise> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
  TNode<TrustedPointerT> LoadJSFunctionCode(TNode<JSFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=33&c=3
  void StoreJSFunctionCode(TNode<JSFunction> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
  TNode<SharedFunctionInfo> LoadJSFunctionSharedFunctionInfo(TNode<JSFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=35&c=3
  void StoreJSFunctionSharedFunctionInfo(TNode<JSFunction> p_o, TNode<SharedFunctionInfo> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=3
  TNode<Context> LoadJSFunctionContext(TNode<JSFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=36&c=3
  void StoreJSFunctionContext(TNode<JSFunction> p_o, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=37&c=3
  TNode<FeedbackCell> LoadJSFunctionFeedbackCell(TNode<JSFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=37&c=3
  void StoreJSFunctionFeedbackCell(TNode<JSFunction> p_o, TNode<FeedbackCell> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
  TNode<HeapObject> LoadJSFunctionPrototypeOrInitialMap(TNode<JSFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=39&c=3
  void StoreJSFunctionPrototypeOrInitialMap(TNode<JSFunction> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=8&c=9
  TNode<Smi> LoadFixedArrayBaseLength(TNode<FixedArrayBase> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
  TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceFixedArrayObjects(TNode<FixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
  TNode<Object> LoadFixedArrayObjects(TNode<FixedArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=14&c=3
  void StoreFixedArrayObjects(TNode<FixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=38&c=9
  TNode<Smi> LoadWeakFixedArrayLength(TNode<WeakFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
  TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceWeakFixedArrayObjects(TNode<WeakFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
  TNode<MaybeObject> LoadWeakFixedArrayObjects(TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=39&c=3
  void StoreWeakFixedArrayObjects(TNode<WeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
  TNode<ExternalPointerT> LoadForeignForeignAddress(TNode<Foreign> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=7&c=3
  void StoreForeignForeignAddress(TNode<Foreign> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
  TNode<HeapObject> LoadJSProxyTarget(TNode<JSProxy> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=6&c=3
  void StoreJSProxyTarget(TNode<JSProxy> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
  TNode<HeapObject> LoadJSProxyHandler(TNode<JSProxy> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=7&c=3
  void StoreJSProxyHandler(TNode<JSProxy> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=11&c=3
  TNode<JSReceiver> LoadJSBoundFunctionBoundTargetFunction(TNode<JSBoundFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=11&c=3
  void StoreJSBoundFunctionBoundTargetFunction(TNode<JSBoundFunction> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=14&c=3
  TNode<Object> LoadJSBoundFunctionBoundThis(TNode<JSBoundFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=14&c=3
  void StoreJSBoundFunctionBoundThis(TNode<JSBoundFunction> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=17&c=3
  TNode<FixedArray> LoadJSBoundFunctionBoundArguments(TNode<JSBoundFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=17&c=3
  void StoreJSBoundFunctionBoundArguments(TNode<JSBoundFunction> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=23&c=3
  TNode<JSReceiver> LoadJSWrappedFunctionWrappedTargetFunction(TNode<JSWrappedFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=23&c=3
  void StoreJSWrappedFunctionWrappedTargetFunction(TNode<JSWrappedFunction> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=25&c=3
  TNode<NativeContext> LoadJSWrappedFunctionContext(TNode<JSWrappedFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-function.tq?l=25&c=3
  void StoreJSWrappedFunctionContext(TNode<JSWrappedFunction> p_o, TNode<NativeContext> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=7&c=3
  TNode<Float64T> LoadHoleRawNumericValue(TNode<Hole> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/hole.tq?l=7&c=3
  void StoreHoleRawNumericValue(TNode<Hole> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=56&c=3
  TNode<CppHeapPointerT> LoadJSAPIObjectWithEmbedderSlotsCppHeapWrappable(TNode<JSAPIObjectWithEmbedderSlots> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=56&c=3
  void StoreJSAPIObjectWithEmbedderSlotsCppHeapWrappable(TNode<JSAPIObjectWithEmbedderSlots> p_o, TNode<CppHeapPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=70&c=3
  TNode<CppHeapPointerT> LoadJSSpecialObjectCppHeapWrappable(TNode<JSSpecialObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=70&c=3
  void StoreJSSpecialObjectCppHeapWrappable(TNode<JSSpecialObject> p_o, TNode<CppHeapPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
  TNode<Uint8T> LoadMapInstanceSizeInWords(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=59&c=3
  void StoreMapInstanceSizeInWords(TNode<Map> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
  TNode<Uint8T> LoadMapInobjectPropertiesStartOrConstructorFunctionIndex(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=60&c=3
  void StoreMapInobjectPropertiesStartOrConstructorFunctionIndex(TNode<Map> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
  TNode<Uint8T> LoadMapUsedOrUnusedInstanceSizeInWords(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=61&c=3
  void StoreMapUsedOrUnusedInstanceSizeInWords(TNode<Map> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
  TNode<Uint8T> LoadMapVisitorId(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=62&c=3
  void StoreMapVisitorId(TNode<Map> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
  TNode<Uint16T> LoadMapInstanceType(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=63&c=3
  void StoreMapInstanceType(TNode<Map> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
  TNode<Uint8T> LoadMapBitField(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=64&c=3
  void StoreMapBitField(TNode<Map> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
  TNode<Uint8T> LoadMapBitField2(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=65&c=3
  void StoreMapBitField2(TNode<Map> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
  TNode<Uint32T> LoadMapBitField3(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=66&c=3
  void StoreMapBitField3(TNode<Map> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=68&c=28
  TNode<Uint32T> LoadMapOptionalPadding(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=68&c=28
  void StoreMapOptionalPadding(TNode<Map> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
  TNode<HeapObject> LoadMapPrototype(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=71&c=3
  void StoreMapPrototype(TNode<Map> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
  TNode<Object> LoadMapConstructorOrBackPointerOrNativeContext(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=72&c=3
  void StoreMapConstructorOrBackPointerOrNativeContext(TNode<Map> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
  TNode<DescriptorArray> LoadMapInstanceDescriptors(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=73&c=3
  void StoreMapInstanceDescriptors(TNode<Map> p_o, TNode<DescriptorArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
  TNode<WeakArrayList> LoadMapDependentCode(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=74&c=3
  void StoreMapDependentCode(TNode<Map> p_o, TNode<WeakArrayList> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
  TNode<Object> LoadMapPrototypeValidityCell(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=75&c=3
  void StoreMapPrototypeValidityCell(TNode<Map> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
  TNode<MaybeObject> LoadMapTransitionsOrPrototypeInfo(TNode<Map> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/map.tq?l=76&c=3
  void StoreMapTransitionsOrPrototypeInfo(TNode<Map> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
  TNode<HeapObject> LoadWeakCellFinalizationRegistry(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=22&c=3
  void StoreWeakCellFinalizationRegistry(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
  TNode<HeapObject> LoadWeakCellTarget(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=23&c=3
  void StoreWeakCellTarget(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
  TNode<HeapObject> LoadWeakCellUnregisterToken(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=24&c=3
  void StoreWeakCellUnregisterToken(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
  TNode<Object> LoadWeakCellHoldings(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=25&c=3
  void StoreWeakCellHoldings(TNode<WeakCell> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
  TNode<HeapObject> LoadWeakCellPrev(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=29&c=3
  void StoreWeakCellPrev(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
  TNode<HeapObject> LoadWeakCellNext(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=30&c=3
  void StoreWeakCellNext(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
  TNode<HeapObject> LoadWeakCellKeyListPrev(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=38&c=3
  void StoreWeakCellKeyListPrev(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
  TNode<HeapObject> LoadWeakCellKeyListNext(TNode<WeakCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=39&c=3
  void StoreWeakCellKeyListNext(TNode<WeakCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=7&c=3
  TNode<Smi> LoadTemplateInfoSerialNumber(TNode<TemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=7&c=3
  void StoreTemplateInfoSerialNumber(TNode<TemplateInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=8&c=3
  TNode<Smi> LoadTemplateInfoNumberOfProperties(TNode<TemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=8&c=3
  void StoreTemplateInfoNumberOfProperties(TNode<TemplateInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=9&c=3
  TNode<HeapObject> LoadTemplateInfoPropertyList(TNode<TemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=9&c=3
  void StoreTemplateInfoPropertyList(TNode<TemplateInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=10&c=3
  TNode<HeapObject> LoadTemplateInfoPropertyAccessors(TNode<TemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=10&c=3
  void StoreTemplateInfoPropertyAccessors(TNode<TemplateInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=46&c=3
  TNode<PrimitiveHeapObject> LoadFunctionTemplateInfoClassName(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=46&c=3
  void StoreFunctionTemplateInfoClassName(TNode<FunctionTemplateInfo> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=50&c=3
  TNode<PrimitiveHeapObject> LoadFunctionTemplateInfoInterfaceName(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=50&c=3
  void StoreFunctionTemplateInfoInterfaceName(TNode<FunctionTemplateInfo> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=55&c=3
  TNode<HeapObject> LoadFunctionTemplateInfoSignature(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=55&c=3
  void StoreFunctionTemplateInfoSignature(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=61&c=3
  TNode<HeapObject> LoadFunctionTemplateInfoRareData(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=61&c=3
  void StoreFunctionTemplateInfoRareData(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=62&c=3
  TNode<HeapObject> LoadFunctionTemplateInfoSharedFunctionInfo(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=62&c=3
  void StoreFunctionTemplateInfoSharedFunctionInfo(TNode<FunctionTemplateInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=66&c=3
  TNode<Object> LoadFunctionTemplateInfoCachedPropertyName(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=66&c=3
  void StoreFunctionTemplateInfoCachedPropertyName(TNode<FunctionTemplateInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=73&c=36
  TNode<Object> LoadFunctionTemplateInfoCallbackData(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=73&c=36
  void StoreFunctionTemplateInfoCallbackData(TNode<FunctionTemplateInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=76&c=3
  TNode<Uint32T> LoadFunctionTemplateInfoFlag(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=76&c=3
  void StoreFunctionTemplateInfoFlag(TNode<FunctionTemplateInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=78&c=3
  TNode<Int16T> LoadFunctionTemplateInfoLength(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=78&c=3
  void StoreFunctionTemplateInfoLength(TNode<FunctionTemplateInfo> p_o, TNode<Int16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=81&c=3
  TNode<Uint16T> LoadFunctionTemplateInfoInstanceType(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=81&c=3
  void StoreFunctionTemplateInfoInstanceType(TNode<FunctionTemplateInfo> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=86&c=3
  TNode<Uint32T> LoadFunctionTemplateInfoExceptionContext(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=86&c=3
  void StoreFunctionTemplateInfoExceptionContext(TNode<FunctionTemplateInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=88&c=28
  TNode<Uint32T> LoadFunctionTemplateInfoOptionalPadding(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=88&c=28
  void StoreFunctionTemplateInfoOptionalPadding(TNode<FunctionTemplateInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=95&c=3
  TNode<ExternalPointerT> LoadFunctionTemplateInfoMaybeRedirectedCallback(TNode<FunctionTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=95&c=3
  void StoreFunctionTemplateInfoMaybeRedirectedCallback(TNode<FunctionTemplateInfo> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=85&c=3
  TNode<TrustedPointerT> LoadWasmFuncRefTrustedInternal(TNode<WasmFuncRef> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=85&c=3
  void StoreWasmFuncRefTrustedInternal(TNode<WasmFuncRef> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
  TNode<Object> LoadJSCollectionTable(TNode<JSCollection> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=10&c=3
  void StoreJSCollectionTable(TNode<JSCollection> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
  TNode<HeapObject> LoadPromiseCapabilityPromise(TNode<PromiseCapability> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=6&c=3
  void StorePromiseCapabilityPromise(TNode<PromiseCapability> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
  TNode<Object> LoadPromiseCapabilityResolve(TNode<PromiseCapability> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=12&c=3
  void StorePromiseCapabilityResolve(TNode<PromiseCapability> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
  TNode<Object> LoadPromiseCapabilityReject(TNode<PromiseCapability> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=13&c=3
  void StorePromiseCapabilityReject(TNode<PromiseCapability> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=65&c=3
  TNode<JSArrayBuffer> LoadJSArrayBufferViewBuffer(TNode<JSArrayBufferView> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=65&c=3
  void StoreJSArrayBufferViewBuffer(TNode<JSArrayBufferView> p_o, TNode<JSArrayBuffer> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
  TNode<Uint32T> LoadJSArrayBufferViewBitField(TNode<JSArrayBufferView> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=66&c=3
  void StoreJSArrayBufferViewBitField(TNode<JSArrayBufferView> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=67&c=28
  TNode<Uint32T> LoadJSArrayBufferViewOptionalPadding(TNode<JSArrayBufferView> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=67&c=28
  void StoreJSArrayBufferViewOptionalPadding(TNode<JSArrayBufferView> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
  TNode<UintPtrT> LoadJSArrayBufferViewRawByteOffset(TNode<JSArrayBufferView> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=69&c=3
  void StoreJSArrayBufferViewRawByteOffset(TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=3
  TNode<UintPtrT> LoadJSArrayBufferViewRawByteLength(TNode<JSArrayBufferView> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=71&c=3
  void StoreJSArrayBufferViewRawByteLength(TNode<JSArrayBufferView> p_o, TNode<UintPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=109&c=3
  TNode<UintPtrT> LoadJSTypedArrayRawLength(TNode<JSTypedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=109&c=3
  void StoreJSTypedArrayRawLength(TNode<JSTypedArray> p_o, TNode<UintPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=3
  TNode<RawPtrT> LoadJSTypedArrayExternalPointer(TNode<JSTypedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=111&c=3
  void StoreJSTypedArrayExternalPointer(TNode<JSTypedArray> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
  TNode<Object> LoadJSTypedArrayBasePointer(TNode<JSTypedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=112&c=3
  void StoreJSTypedArrayBasePointer(TNode<JSTypedArray> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=3
  TNode<Object> LoadDataHandlerSmiHandler(TNode<DataHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=13&c=3
  void StoreDataHandlerSmiHandler(TNode<DataHandler> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=16&c=3
  TNode<Object> LoadDataHandlerValidityCell(TNode<DataHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=16&c=3
  void StoreDataHandlerValidityCell(TNode<DataHandler> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=19&c=3
  TNode<MaybeObject> LoadDataHandlerData1(TNode<DataHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=19&c=3
  void StoreDataHandlerData1(TNode<DataHandler> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
  TNode<MaybeObject> LoadDataHandlerData2(TNode<DataHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=20&c=3
  void StoreDataHandlerData2(TNode<DataHandler> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
  TNode<MaybeObject> LoadDataHandlerData3(TNode<DataHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/data-handler.tq?l=21&c=3
  void StoreDataHandlerData3(TNode<DataHandler> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
  TNode<AllocationSite> LoadAllocationMementoAllocationSite(TNode<AllocationMemento> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/allocation-site.tq?l=8&c=3
  void StoreAllocationMementoAllocationSite(TNode<AllocationMemento> p_o, TNode<AllocationSite> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
  TNode<Object> LoadInterceptorInfoGetter(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=14&c=3
  void StoreInterceptorInfoGetter(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=15&c=3
  TNode<Object> LoadInterceptorInfoSetter(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=15&c=3
  void StoreInterceptorInfoSetter(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=16&c=3
  TNode<Object> LoadInterceptorInfoQuery(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=16&c=3
  void StoreInterceptorInfoQuery(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=17&c=3
  TNode<Object> LoadInterceptorInfoDescriptor(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=17&c=3
  void StoreInterceptorInfoDescriptor(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=18&c=3
  TNode<Object> LoadInterceptorInfoDeleter(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=18&c=3
  void StoreInterceptorInfoDeleter(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=3
  TNode<Object> LoadInterceptorInfoEnumerator(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=19&c=3
  void StoreInterceptorInfoEnumerator(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=20&c=3
  TNode<Object> LoadInterceptorInfoDefiner(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=20&c=3
  void StoreInterceptorInfoDefiner(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=3
  TNode<Object> LoadInterceptorInfoData(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=21&c=3
  void StoreInterceptorInfoData(TNode<InterceptorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
  TNode<Smi> LoadInterceptorInfoFlags(TNode<InterceptorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=22&c=3
  void StoreInterceptorInfoFlags(TNode<InterceptorInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
  TNode<Object> LoadAccessCheckInfoCallback(TNode<AccessCheckInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=26&c=3
  void StoreAccessCheckInfoCallback(TNode<AccessCheckInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
  TNode<Object> LoadAccessCheckInfoNamedInterceptor(TNode<AccessCheckInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=27&c=3
  void StoreAccessCheckInfoNamedInterceptor(TNode<AccessCheckInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
  TNode<Object> LoadAccessCheckInfoIndexedInterceptor(TNode<AccessCheckInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=28&c=3
  void StoreAccessCheckInfoIndexedInterceptor(TNode<AccessCheckInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
  TNode<Object> LoadAccessCheckInfoData(TNode<AccessCheckInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=29&c=3
  void StoreAccessCheckInfoData(TNode<AccessCheckInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=43&c=3
  TNode<Name> LoadAccessorInfoName(TNode<AccessorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=43&c=3
  void StoreAccessorInfoName(TNode<AccessorInfo> p_o, TNode<Name> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=44&c=3
  TNode<Object> LoadAccessorInfoData(TNode<AccessorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=44&c=3
  void StoreAccessorInfoData(TNode<AccessorInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=48&c=3
  TNode<ExternalPointerT> LoadAccessorInfoMaybeRedirectedGetter(TNode<AccessorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=48&c=3
  void StoreAccessorInfoMaybeRedirectedGetter(TNode<AccessorInfo> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=49&c=3
  TNode<ExternalPointerT> LoadAccessorInfoSetter(TNode<AccessorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=49&c=3
  void StoreAccessorInfoSetter(TNode<AccessorInfo> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=50&c=3
  TNode<Uint32T> LoadAccessorInfoFlags(TNode<AccessorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=50&c=3
  void StoreAccessorInfoFlags(TNode<AccessorInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=28
  TNode<Uint32T> LoadAccessorInfoOptionalPadding(TNode<AccessorInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/api-callbacks.tq?l=51&c=28
  void StoreAccessorInfoOptionalPadding(TNode<AccessorInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
  TNode<Object> LoadJSSloppyArgumentsObjectLength(TNode<JSArgumentsObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=18&c=3
  void StoreJSSloppyArgumentsObjectLength(TNode<JSArgumentsObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
  TNode<Object> LoadJSSloppyArgumentsObjectCallee(TNode<JSArgumentsObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=19&c=3
  void StoreJSSloppyArgumentsObjectCallee(TNode<JSArgumentsObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
  TNode<Object> LoadJSStrictArgumentsObjectLength(TNode<JSArgumentsObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=24&c=3
  void StoreJSStrictArgumentsObjectLength(TNode<JSArgumentsObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=29&c=3
  TNode<Context> LoadSloppyArgumentsElementsContext(TNode<SloppyArgumentsElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=29&c=3
  void StoreSloppyArgumentsElementsContext(TNode<SloppyArgumentsElements> p_o, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=30&c=3
  TNode<FixedArray> LoadSloppyArgumentsElementsArguments(TNode<SloppyArgumentsElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=30&c=3
  void StoreSloppyArgumentsElementsArguments(TNode<SloppyArgumentsElements> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=31&c=3
  TorqueStructSlice_Smi_OR_TheHole_MutableReference_Smi_OR_TheHole_0 FieldSliceSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=31&c=3
  TNode<Object> LoadSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=31&c=3
  void StoreSloppyArgumentsElementsMappedEntries(TNode<SloppyArgumentsElements> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=42&c=3
  TNode<Smi> LoadAliasedArgumentsEntryAliasedContextSlot(TNode<AliasedArgumentsEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/arguments.tq?l=42&c=3
  void StoreAliasedArgumentsEntryAliasedContextSlot(TNode<AliasedArgumentsEntry> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
  TNode<TrustedPointerT> LoadCallSiteInfoCodeObject(TNode<CallSiteInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=22&c=3
  void StoreCallSiteInfoCodeObject(TNode<CallSiteInfo> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
  TNode<Object> LoadCallSiteInfoReceiverOrInstance(TNode<CallSiteInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=23&c=3
  void StoreCallSiteInfoReceiverOrInstance(TNode<CallSiteInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=24&c=3
  TNode<Object> LoadCallSiteInfoFunction(TNode<CallSiteInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=24&c=3
  void StoreCallSiteInfoFunction(TNode<CallSiteInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=25&c=3
  TNode<Smi> LoadCallSiteInfoCodeOffsetOrSourcePosition(TNode<CallSiteInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=25&c=3
  void StoreCallSiteInfoCodeOffsetOrSourcePosition(TNode<CallSiteInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=26&c=3
  TNode<Smi> LoadCallSiteInfoFlags(TNode<CallSiteInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=26&c=3
  void StoreCallSiteInfoFlags(TNode<CallSiteInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=27&c=3
  TNode<FixedArray> LoadCallSiteInfoParameters(TNode<CallSiteInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/call-site-info.tq?l=27&c=3
  void StoreCallSiteInfoParameters(TNode<CallSiteInfo> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
  TNode<Object> LoadCellValue(TNode<Cell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/cell.tq?l=6&c=3
  void StoreCellValue(TNode<Cell> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=75&c=9
  TNode<Smi> LoadWeakArrayListCapacity(TNode<WeakArrayList> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=76&c=3
  TNode<Smi> LoadWeakArrayListLength(TNode<WeakArrayList> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=76&c=3
  void StoreWeakArrayListLength(TNode<WeakArrayList> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=77&c=19
  TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceWeakArrayListObjects(TNode<WeakArrayList> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=77&c=19
  TNode<MaybeObject> LoadWeakArrayListObjects(TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=77&c=19
  void StoreWeakArrayListObjects(TNode<WeakArrayList> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=9&c=9
  TNode<Smi> LoadBytecodeArrayLength(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=10&c=3
  TNode<BytecodeWrapper> LoadBytecodeArrayWrapper(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=10&c=3
  void StoreBytecodeArrayWrapper(TNode<BytecodeArray> p_o, TNode<BytecodeWrapper> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
  TNode<MaybeObject> LoadBytecodeArraySourcePositionTable(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=11&c=3
  void StoreBytecodeArraySourcePositionTable(TNode<BytecodeArray> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=12&c=3
  TNode<MaybeObject> LoadBytecodeArrayHandlerTable(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=12&c=3
  void StoreBytecodeArrayHandlerTable(TNode<BytecodeArray> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=13&c=3
  TNode<MaybeObject> LoadBytecodeArrayConstantPool(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=13&c=3
  void StoreBytecodeArrayConstantPool(TNode<BytecodeArray> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=14&c=3
  TNode<Int32T> LoadBytecodeArrayFrameSize(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=14&c=3
  void StoreBytecodeArrayFrameSize(TNode<BytecodeArray> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=15&c=3
  TNode<Uint16T> LoadBytecodeArrayParameterSize(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=15&c=3
  void StoreBytecodeArrayParameterSize(TNode<BytecodeArray> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=16&c=3
  TNode<Uint16T> LoadBytecodeArrayMaxArguments(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=16&c=3
  void StoreBytecodeArrayMaxArguments(TNode<BytecodeArray> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=17&c=3
  TNode<Int32T> LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=17&c=3
  void StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister(TNode<BytecodeArray> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=18&c=28
  TNode<Uint32T> LoadBytecodeArrayOptionalPadding(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=18&c=28
  void StoreBytecodeArrayOptionalPadding(TNode<BytecodeArray> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=20&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceBytecodeArrayBytes(TNode<BytecodeArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=20&c=3
  TNode<Uint8T> LoadBytecodeArrayBytes(TNode<BytecodeArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=20&c=3
  void StoreBytecodeArrayBytes(TNode<BytecodeArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=28&c=3
  TNode<TrustedPointerT> LoadBytecodeWrapperBytecode(TNode<BytecodeWrapper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/bytecode-array.tq?l=28&c=3
  void StoreBytecodeWrapperBytecode(TNode<BytecodeWrapper> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=19&c=9
  TNode<Smi> LoadScriptContextTableCapacity(TNode<ScriptContextTable> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=3
  TNode<Smi> LoadScriptContextTableLength(TNode<ScriptContextTable> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=20&c=3
  void StoreScriptContextTableLength(TNode<ScriptContextTable> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=21&c=3
  TNode<NameToIndexHashTable> LoadScriptContextTableNamesToContextIndex(TNode<ScriptContextTable> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=21&c=3
  void StoreScriptContextTableNamesToContextIndex(TNode<ScriptContextTable> p_o, TNode<NameToIndexHashTable> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
  TorqueStructSlice_Context_MutableReference_Context_0 FieldSliceScriptContextTableObjects(TNode<ScriptContextTable> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
  TNode<Context> LoadScriptContextTableObjects(TNode<ScriptContextTable> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/contexts.tq?l=22&c=3
  void StoreScriptContextTableObjects(TNode<ScriptContextTable> p_o, TNode<IntPtrT> p_i, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=116&c=9
  TNode<Uint32T> LoadScopeInfoFlags(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=118&c=28
  TNode<Uint32T> LoadScopeInfoOptionalPadding(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=118&c=28
  void StoreScopeInfoOptionalPadding(TNode<ScopeInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=122&c=3
  TNode<Smi> LoadScopeInfoParameterCount(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=122&c=3
  void StoreScopeInfoParameterCount(TNode<ScopeInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=126&c=9
  TNode<Smi> LoadScopeInfoContextLocalCount(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
  TorqueStructPositionInfo_0 LoadScopeInfoPositionInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=129&c=3
  void StoreScopeInfoPositionInfo(TNode<ScopeInfo> p_o, TorqueStructPositionInfo_0 p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=134&c=9
  TorqueStructSlice_Smi_ConstReference_Smi_0 FieldSliceScopeInfoModuleVariableCount(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=134&c=9
  TNode<Smi> LoadScopeInfoModuleVariableCount(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=140&c=3
  TorqueStructSlice_String_MutableReference_String_0 FieldSliceScopeInfoContextLocalNames(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=140&c=3
  TNode<String> LoadScopeInfoContextLocalNames(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=140&c=3
  void StoreScopeInfoContextLocalNames(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=145&c=3
  TorqueStructSlice_NameToIndexHashTable_MutableReference_NameToIndexHashTable_0 FieldSliceScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=145&c=3
  TNode<NameToIndexHashTable> LoadScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=145&c=3
  void StoreScopeInfoContextLocalNamesHashtable(TNode<ScopeInfo> p_o, TNode<NameToIndexHashTable> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=151&c=3
  TorqueStructSlice_SmiTagged_VariableProperties_MutableReference_SmiTagged_VariableProperties_0 FieldSliceScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=151&c=3
  TNode<Smi> LoadScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=151&c=3
  void StoreScopeInfoContextLocalInfos(TNode<ScopeInfo> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=157&c=3
  TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=157&c=3
  TNode<Smi> LoadScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=157&c=3
  void StoreScopeInfoSavedClassVariableInfo(TNode<ScopeInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=163&c=3
  TorqueStructSlice_FunctionVariableInfo_MutableReference_FunctionVariableInfo_0 FieldSliceScopeInfoFunctionVariableInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=168&c=3
  TorqueStructSlice_String_OR_Undefined_MutableReference_String_OR_Undefined_0 FieldSliceScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=168&c=3
  TNode<PrimitiveHeapObject> LoadScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=168&c=3
  void StoreScopeInfoInferredFunctionName(TNode<ScopeInfo> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=170&c=3
  TorqueStructSlice_TheHole_OR_ScopeInfo_MutableReference_TheHole_OR_ScopeInfo_0 FieldSliceScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=170&c=3
  TNode<HeapObject> LoadScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=170&c=3
  void StoreScopeInfoOuterScopeInfo(TNode<ScopeInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  TorqueStructSlice_SourceTextModuleInfo_MutableReference_SourceTextModuleInfo_0 FieldSliceScopeInfoModuleInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  TNode<FixedArray> LoadScopeInfoModuleInfo(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=174&c=3
  void StoreScopeInfoModuleInfo(TNode<ScopeInfo> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/scope-info.tq?l=176&c=3
  TorqueStructSlice_ModuleVariable_MutableReference_ModuleVariable_0 FieldSliceScopeInfoModuleVariables(TNode<ScopeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=33&c=3
  TorqueStructSlice_float64_or_hole_MutableReference_float64_or_hole_0 FieldSliceFixedDoubleArrayFloats(TNode<FixedDoubleArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=14&c=9
  TNode<Smi> LoadRegExpMatchInfoLength(TNode<RegExpMatchInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=15&c=3
  TNode<Smi> LoadRegExpMatchInfoNumberOfCaptureRegisters(TNode<RegExpMatchInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=15&c=3
  void StoreRegExpMatchInfoNumberOfCaptureRegisters(TNode<RegExpMatchInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=16&c=3
  TNode<String> LoadRegExpMatchInfoLastSubject(TNode<RegExpMatchInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=16&c=3
  void StoreRegExpMatchInfoLastSubject(TNode<RegExpMatchInfo> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=17&c=3
  TNode<Object> LoadRegExpMatchInfoLastInput(TNode<RegExpMatchInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=17&c=3
  void StoreRegExpMatchInfoLastInput(TNode<RegExpMatchInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
  TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceRegExpMatchInfoObjects(TNode<RegExpMatchInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
  TNode<Smi> LoadRegExpMatchInfoObjects(TNode<RegExpMatchInfo> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/regexp-match-info.tq?l=19&c=3
  void StoreRegExpMatchInfoObjects(TNode<RegExpMatchInfo> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
  TNode<Smi> LoadBreakPointId(TNode<BreakPoint> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=6&c=3
  void StoreBreakPointId(TNode<BreakPoint> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
  TNode<String> LoadBreakPointCondition(TNode<BreakPoint> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=7&c=3
  void StoreBreakPointCondition(TNode<BreakPoint> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
  TNode<Smi> LoadBreakPointInfoSourcePosition(TNode<BreakPointInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=12&c=3
  void StoreBreakPointInfoSourcePosition(TNode<BreakPointInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
  TNode<HeapObject> LoadBreakPointInfoBreakPoints(TNode<BreakPointInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=14&c=3
  void StoreBreakPointInfoBreakPoints(TNode<BreakPointInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
  TNode<SharedFunctionInfo> LoadDebugInfoShared(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=34&c=3
  void StoreDebugInfoShared(TNode<DebugInfo> p_o, TNode<SharedFunctionInfo> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
  TNode<Smi> LoadDebugInfoDebuggerHints(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=36&c=3
  void StoreDebugInfoDebuggerHints(TNode<DebugInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
  TNode<FixedArray> LoadDebugInfoBreakPoints(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=38&c=3
  void StoreDebugInfoBreakPoints(TNode<DebugInfo> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=40&c=36
  TNode<Smi> LoadDebugInfoFlags(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=40&c=36
  void StoreDebugInfoFlags(TNode<DebugInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=41&c=3
  TNode<HeapObject> LoadDebugInfoCoverageInfo(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=41&c=3
  void StoreDebugInfoCoverageInfo(TNode<DebugInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=45&c=3
  TNode<TrustedPointerT> LoadDebugInfoOriginalBytecodeArray(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=45&c=3
  void StoreDebugInfoOriginalBytecodeArray(TNode<DebugInfo> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=49&c=3
  TNode<TrustedPointerT> LoadDebugInfoDebugBytecodeArray(TNode<DebugInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=49&c=3
  void StoreDebugInfoDebugBytecodeArray(TNode<DebugInfo> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=63&c=9
  TNode<Int32T> LoadCoverageInfoSlotCount(TNode<CoverageInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=64&c=3
  TorqueStructSlice_CoverageInfoSlot_MutableReference_CoverageInfoSlot_0 FieldSliceCoverageInfoSlots(TNode<CoverageInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=79&c=3
  TNode<HeapObject> LoadStackFrameInfoSharedOrScript(TNode<StackFrameInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=79&c=3
  void StoreStackFrameInfoSharedOrScript(TNode<StackFrameInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=80&c=3
  TNode<String> LoadStackFrameInfoFunctionName(TNode<StackFrameInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=80&c=3
  void StoreStackFrameInfoFunctionName(TNode<StackFrameInfo> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=81&c=3
  TNode<Smi> LoadStackFrameInfoFlags(TNode<StackFrameInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=81&c=3
  void StoreStackFrameInfoFlags(TNode<StackFrameInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=3
  TNode<Object> LoadErrorStackDataCallSiteInfosOrFormattedStack(TNode<ErrorStackData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=117&c=3
  void StoreErrorStackDataCallSiteInfosOrFormattedStack(TNode<ErrorStackData> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=124&c=3
  TNode<Object> LoadErrorStackDataLimitOrStackFrameInfos(TNode<ErrorStackData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/debug-objects.tq?l=124&c=3
  void StoreErrorStackDataLimitOrStackFrameInfos(TNode<ErrorStackData> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=6&c=3
  TNode<FixedArray> LoadEnumCacheKeys(TNode<EnumCache> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=6&c=3
  void StoreEnumCacheKeys(TNode<EnumCache> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=7&c=3
  TNode<FixedArray> LoadEnumCacheIndices(TNode<EnumCache> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=7&c=3
  void StoreEnumCacheIndices(TNode<EnumCache> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=3
  TNode<Object> LoadAccessorPairGetter(TNode<AccessorPair> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=19&c=3
  void StoreAccessorPairGetter(TNode<AccessorPair> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
  TNode<Object> LoadAccessorPairSetter(TNode<AccessorPair> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=20&c=3
  void StoreAccessorPairSetter(TNode<AccessorPair> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=3
  TNode<Smi> LoadClassPositionsStart(TNode<ClassPositions> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=14&c=3
  void StoreClassPositionsStart(TNode<ClassPositions> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
  TNode<Smi> LoadClassPositionsEnd(TNode<ClassPositions> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=15&c=3
  void StoreClassPositionsEnd(TNode<ClassPositions> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=21&c=9
  TNode<Uint16T> LoadDescriptorArrayNumberOfAllDescriptors(TNode<DescriptorArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=22&c=3
  TNode<Uint16T> LoadDescriptorArrayNumberOfDescriptors(TNode<DescriptorArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=22&c=3
  void StoreDescriptorArrayNumberOfDescriptors(TNode<DescriptorArray> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
  TNode<Uint32T> LoadDescriptorArrayRawGcState(TNode<DescriptorArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=25&c=3
  void StoreDescriptorArrayRawGcState(TNode<DescriptorArray> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=26&c=3
  TNode<EnumCache> LoadDescriptorArrayEnumCache(TNode<DescriptorArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=26&c=3
  void StoreDescriptorArrayEnumCache(TNode<DescriptorArray> p_o, TNode<EnumCache> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/descriptor-array.tq?l=27&c=3
  TorqueStructSlice_DescriptorEntry_MutableReference_DescriptorEntry_0 FieldSliceDescriptorArrayDescriptors(TNode<DescriptorArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
  TNode<Smi> LoadEmbedderDataArrayLength(TNode<EmbedderDataArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/embedder-data-array.tq?l=7&c=3
  void StoreEmbedderDataArrayLength(TNode<EmbedderDataArray> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
  TNode<HeapObject> LoadFeedbackCellValue(TNode<FeedbackCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=6&c=3
  void StoreFeedbackCellValue(TNode<FeedbackCell> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=8&c=3
  TNode<Int32T> LoadFeedbackCellInterruptBudget(TNode<FeedbackCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-cell.tq?l=8&c=3
  void StoreFeedbackCellInterruptBudget(TNode<FeedbackCell> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=37&c=9
  TNode<Smi> LoadClosureFeedbackCellArrayCapacity(TNode<ClosureFeedbackCellArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=38&c=3
  TorqueStructSlice_FeedbackCell_MutableReference_FeedbackCell_0 FieldSliceClosureFeedbackCellArrayObjects(TNode<ClosureFeedbackCellArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=38&c=3
  TNode<FeedbackCell> LoadClosureFeedbackCellArrayObjects(TNode<ClosureFeedbackCellArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=38&c=3
  void StoreClosureFeedbackCellArrayObjects(TNode<ClosureFeedbackCellArray> p_o, TNode<IntPtrT> p_i, TNode<FeedbackCell> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=43&c=9
  TNode<Int32T> LoadFeedbackVectorLength(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=44&c=3
  TNode<Int32T> LoadFeedbackVectorInvocationCount(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=44&c=3
  void StoreFeedbackVectorInvocationCount(TNode<FeedbackVector> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=45&c=28
  TNode<Uint32T> LoadFeedbackVectorOptionalPadding(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=45&c=28
  void StoreFeedbackVectorOptionalPadding(TNode<FeedbackVector> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=46&c=3
  TNode<Uint8T> LoadFeedbackVectorInvocationCountBeforeStable(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=46&c=3
  void StoreFeedbackVectorInvocationCountBeforeStable(TNode<FeedbackVector> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=47&c=3
  TNode<Uint8T> LoadFeedbackVectorOsrState(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=47&c=3
  void StoreFeedbackVectorOsrState(TNode<FeedbackVector> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=48&c=3
  TNode<Uint16T> LoadFeedbackVectorFlags(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=48&c=3
  void StoreFeedbackVectorFlags(TNode<FeedbackVector> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=49&c=3
  TNode<SharedFunctionInfo> LoadFeedbackVectorSharedFunctionInfo(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=49&c=3
  void StoreFeedbackVectorSharedFunctionInfo(TNode<FeedbackVector> p_o, TNode<SharedFunctionInfo> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=50&c=3
  TNode<ClosureFeedbackCellArray> LoadFeedbackVectorClosureFeedbackCellArray(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=50&c=3
  void StoreFeedbackVectorClosureFeedbackCellArray(TNode<FeedbackVector> p_o, TNode<ClosureFeedbackCellArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=51&c=3
  TNode<FeedbackCell> LoadFeedbackVectorParentFeedbackCell(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=51&c=3
  void StoreFeedbackVectorParentFeedbackCell(TNode<FeedbackVector> p_o, TNode<FeedbackCell> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=54&c=3
  TNode<MaybeObject> LoadFeedbackVectorMaybeOptimizedCode(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=54&c=3
  void StoreFeedbackVectorMaybeOptimizedCode(TNode<FeedbackVector> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=55&c=19
  TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=55&c=19
  TNode<MaybeObject> LoadFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/feedback-vector.tq?l=55&c=19
  void StoreFeedbackVectorRawFeedbackSlots(TNode<FeedbackVector> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=21&c=9
  TNode<Smi> LoadTrustedFixedArrayLength(TNode<TrustedFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
  TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceTrustedFixedArrayObjects(TNode<TrustedFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
  TNode<Object> LoadTrustedFixedArrayObjects(TNode<TrustedFixedArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=22&c=3
  void StoreTrustedFixedArrayObjects(TNode<TrustedFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=27&c=9
  TNode<Smi> LoadProtectedFixedArrayLength(TNode<ProtectedFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
  TorqueStructSlice_Smi_OR_TrustedObject_MutableReference_Smi_OR_TrustedObject_0 FieldSliceProtectedFixedArrayObjects(TNode<ProtectedFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
  TNode<Object> LoadProtectedFixedArrayObjects(TNode<ProtectedFixedArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=28&c=3
  void StoreProtectedFixedArrayObjects(TNode<ProtectedFixedArray> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=44&c=9
  TNode<Smi> LoadTrustedWeakFixedArrayLength(TNode<TrustedWeakFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
  TorqueStructSlice_MaybeObject_MutableReference_MaybeObject_0 FieldSliceTrustedWeakFixedArrayObjects(TNode<TrustedWeakFixedArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
  TNode<MaybeObject> LoadTrustedWeakFixedArrayObjects(TNode<TrustedWeakFixedArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=45&c=3
  void StoreTrustedWeakFixedArrayObjects(TNode<TrustedWeakFixedArray> p_o, TNode<IntPtrT> p_i, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=50&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceByteArrayBytes(TNode<ByteArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=50&c=3
  TNode<Uint8T> LoadByteArrayBytes(TNode<ByteArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=50&c=3
  void StoreByteArrayBytes(TNode<ByteArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=55&c=9
  TNode<Smi> LoadTrustedByteArrayLength(TNode<TrustedByteArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=56&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceTrustedByteArrayBytes(TNode<TrustedByteArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=56&c=3
  TNode<Uint8T> LoadTrustedByteArrayBytes(TNode<TrustedByteArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=56&c=3
  void StoreTrustedByteArrayBytes(TNode<TrustedByteArray> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=61&c=3
  TorqueStructSlice_ExternalPointer_MutableReference_ExternalPointer_0 FieldSliceExternalPointerArrayPointers(TNode<ExternalPointerArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=61&c=3
  TNode<ExternalPointerT> LoadExternalPointerArrayPointers(TNode<ExternalPointerArray> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=61&c=3
  void StoreExternalPointerArrayPointers(TNode<ExternalPointerArray> p_o, TNode<IntPtrT> p_i, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=68&c=9
  TNode<Smi> LoadArrayListCapacity(TNode<ArrayList> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=69&c=3
  TNode<Smi> LoadArrayListLength(TNode<ArrayList> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=69&c=3
  void StoreArrayListLength(TNode<ArrayList> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=70&c=3
  TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceArrayListObjects(TNode<ArrayList> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=70&c=3
  TNode<Object> LoadArrayListObjects(TNode<ArrayList> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/fixed-array.tq?l=70&c=3
  void StoreArrayListObjects(TNode<ArrayList> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=11&c=3
  TNode<RawPtrT> LoadTrustedForeignForeignAddress(TNode<TrustedForeign> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/foreign.tq?l=11&c=3
  void StoreTrustedForeignForeignAddress(TNode<TrustedForeign> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
  TNode<Smi> LoadFreeSpaceSize(TNode<FreeSpace> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=6&c=3
  void StoreFreeSpaceSize(TNode<FreeSpace> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
  TNode<MaybeObject> LoadFreeSpaceNext(TNode<FreeSpace> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/free-space.tq?l=7&c=3
  void StoreFreeSpaceNext(TNode<FreeSpace> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
  TNode<Object> LoadJSArrayBufferDetachKey(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=15&c=3
  void StoreJSArrayBufferDetachKey(TNode<JSArrayBuffer> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=17&c=3
  TNode<UintPtrT> LoadJSArrayBufferRawByteLength(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=17&c=3
  void StoreJSArrayBufferRawByteLength(TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
  TNode<UintPtrT> LoadJSArrayBufferRawMaxByteLength(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=19&c=3
  void StoreJSArrayBufferRawMaxByteLength(TNode<JSArrayBuffer> p_o, TNode<UintPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
  TNode<RawPtrT> LoadJSArrayBufferBackingStore(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=21&c=3
  void StoreJSArrayBufferBackingStore(TNode<JSArrayBuffer> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
  TNode<ExternalPointerT> LoadJSArrayBufferExtension(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=22&c=3
  void StoreJSArrayBufferExtension(TNode<JSArrayBuffer> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=23&c=3
  TNode<Uint32T> LoadJSArrayBufferBitField(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=23&c=3
  void StoreJSArrayBufferBitField(TNode<JSArrayBuffer> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=25&c=28
  TNode<Uint32T> LoadJSArrayBufferOptionalPadding(TNode<JSArrayBuffer> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=25&c=28
  void StoreJSArrayBufferOptionalPadding(TNode<JSArrayBuffer> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=128&c=3
  TNode<RawPtrT> LoadJSDataViewOrRabGsabDataViewDataPointer(TNode<JSDataViewOrRabGsabDataView> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array-buffer.tq?l=128&c=3
  void StoreJSDataViewOrRabGsabDataViewDataPointer(TNode<JSDataViewOrRabGsabDataView> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
  TNode<JSReceiver> LoadJSArrayIteratorIteratedObject(TNode<JSArrayIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=8&c=3
  void StoreJSArrayIteratorIteratedObject(TNode<JSArrayIterator> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
  TNode<Number> LoadJSArrayIteratorNextIndex(TNode<JSArrayIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=33&c=3
  void StoreJSArrayIteratorNextIndex(TNode<JSArrayIterator> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
  TNode<Smi> LoadJSArrayIteratorKind(TNode<JSArrayIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=35&c=3
  void StoreJSArrayIteratorKind(TNode<JSArrayIterator> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=65&c=3
  TNode<Number> LoadJSArrayLength(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=65&c=3
  void StoreJSArrayLength(TNode<JSArray> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=71&c=3
  TNode<JSArray> LoadTemplateLiteralObjectRaw(TNode<TemplateLiteralObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=71&c=3
  void StoreTemplateLiteralObjectRaw(TNode<TemplateLiteralObject> p_o, TNode<JSArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=72&c=3
  TNode<Smi> LoadTemplateLiteralObjectFunctionLiteralId(TNode<TemplateLiteralObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=72&c=3
  void StoreTemplateLiteralObjectFunctionLiteralId(TNode<TemplateLiteralObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=73&c=3
  TNode<Smi> LoadTemplateLiteralObjectSlotId(TNode<TemplateLiteralObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-array.tq?l=73&c=3
  void StoreTemplateLiteralObjectSlotId(TNode<TemplateLiteralObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=3
  TNode<ExternalPointerT> LoadJSSynchronizationPrimitiveWaiterQueueHead(TNode<JSSynchronizationPrimitive> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=7&c=3
  void StoreJSSynchronizationPrimitiveWaiterQueueHead(TNode<JSSynchronizationPrimitive> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=8&c=3
  TNode<Uint32T> LoadJSSynchronizationPrimitiveState(TNode<JSSynchronizationPrimitive> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=8&c=3
  void StoreJSSynchronizationPrimitiveState(TNode<JSSynchronizationPrimitive> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
  TNode<Int32T> LoadJSAtomicsMutexOwnerThreadId(TNode<JSAtomicsMutex> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=12&c=3
  void StoreJSAtomicsMutexOwnerThreadId(TNode<JSAtomicsMutex> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=16&c=28
  TNode<Uint32T> LoadJSAtomicsConditionOptionalPadding(TNode<JSAtomicsCondition> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-atomics-synchronization.tq?l=16&c=28
  void StoreJSAtomicsConditionOptionalPadding(TNode<JSAtomicsCondition> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
  TNode<Object> LoadJSCollectionIteratorTable(TNode<JSCollectionIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=8&c=3
  void StoreJSCollectionIteratorTable(TNode<JSCollectionIterator> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
  TNode<Object> LoadJSCollectionIteratorIndex(TNode<JSCollectionIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection-iterator.tq?l=10&c=3
  void StoreJSCollectionIteratorIndex(TNode<JSCollectionIterator> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
  TNode<Object> LoadJSWeakCollectionTable(TNode<JSWeakCollection> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collection.tq?l=18&c=3
  void StoreJSWeakCollectionTable(TNode<JSWeakCollection> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=27&c=3
  TNode<FixedArray> LoadJSDisposableStackBaseStack(TNode<JSDisposableStackBase> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=27&c=3
  void StoreJSDisposableStackBaseStack(TNode<JSDisposableStackBase> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=28&c=3
  TNode<Smi> LoadJSDisposableStackBaseStatus(TNode<JSDisposableStackBase> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-disposable-stack.tq?l=28&c=3
  void StoreJSDisposableStackBaseStatus(TNode<JSDisposableStackBase> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
  TNode<JSFunction> LoadJSGeneratorObjectFunction(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=6&c=3
  void StoreJSGeneratorObjectFunction(TNode<JSGeneratorObject> p_o, TNode<JSFunction> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
  TNode<Context> LoadJSGeneratorObjectContext(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=7&c=3
  void StoreJSGeneratorObjectContext(TNode<JSGeneratorObject> p_o, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
  TNode<Object> LoadJSGeneratorObjectReceiver(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=8&c=3
  void StoreJSGeneratorObjectReceiver(TNode<JSGeneratorObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
  TNode<Object> LoadJSGeneratorObjectInputOrDebugPos(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=14&c=3
  void StoreJSGeneratorObjectInputOrDebugPos(TNode<JSGeneratorObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
  TNode<Smi> LoadJSGeneratorObjectResumeMode(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=17&c=3
  void StoreJSGeneratorObjectResumeMode(TNode<JSGeneratorObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
  TNode<Smi> LoadJSGeneratorObjectContinuation(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=22&c=3
  void StoreJSGeneratorObjectContinuation(TNode<JSGeneratorObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
  TNode<FixedArray> LoadJSGeneratorObjectParametersAndRegisters(TNode<JSGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=25&c=3
  void StoreJSGeneratorObjectParametersAndRegisters(TNode<JSGeneratorObject> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
  TNode<JSPromise> LoadJSAsyncFunctionObjectPromise(TNode<JSAsyncFunctionObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=29&c=3
  void StoreJSAsyncFunctionObjectPromise(TNode<JSAsyncFunctionObject> p_o, TNode<JSPromise> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
  TNode<HeapObject> LoadJSAsyncGeneratorObjectQueue(TNode<JSAsyncGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=35&c=3
  void StoreJSAsyncGeneratorObjectQueue(TNode<JSAsyncGeneratorObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
  TNode<Smi> LoadJSAsyncGeneratorObjectIsAwaiting(TNode<JSAsyncGeneratorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=37&c=3
  void StoreJSAsyncGeneratorObjectIsAwaiting(TNode<JSAsyncGeneratorObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
  TNode<HeapObject> LoadAsyncGeneratorRequestNext(TNode<AsyncGeneratorRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=41&c=3
  void StoreAsyncGeneratorRequestNext(TNode<AsyncGeneratorRequest> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
  TNode<Smi> LoadAsyncGeneratorRequestResumeMode(TNode<AsyncGeneratorRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=42&c=3
  void StoreAsyncGeneratorRequestResumeMode(TNode<AsyncGeneratorRequest> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
  TNode<Object> LoadAsyncGeneratorRequestValue(TNode<AsyncGeneratorRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=43&c=3
  void StoreAsyncGeneratorRequestValue(TNode<AsyncGeneratorRequest> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
  TNode<JSPromise> LoadAsyncGeneratorRequestPromise(TNode<AsyncGeneratorRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-generator.tq?l=44&c=3
  void StoreAsyncGeneratorRequestPromise(TNode<AsyncGeneratorRequest> p_o, TNode<JSPromise> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=9&c=3
  TNode<HeapObject> LoadJSIteratorHelperUnderlyingObject(TNode<JSIteratorHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=9&c=3
  void StoreJSIteratorHelperUnderlyingObject(TNode<JSIteratorHelper> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=3
  TNode<Object> LoadJSIteratorHelperUnderlyingNext(TNode<JSIteratorHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=10&c=3
  void StoreJSIteratorHelperUnderlyingNext(TNode<JSIteratorHelper> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=14&c=3
  TNode<JSReceiver> LoadJSIteratorMapHelperMapper(TNode<JSIteratorMapHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=14&c=3
  void StoreJSIteratorMapHelperMapper(TNode<JSIteratorMapHelper> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=3
  TNode<Number> LoadJSIteratorMapHelperCounter(TNode<JSIteratorMapHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=15&c=3
  void StoreJSIteratorMapHelperCounter(TNode<JSIteratorMapHelper> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=19&c=3
  TNode<JSReceiver> LoadJSIteratorFilterHelperPredicate(TNode<JSIteratorFilterHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=19&c=3
  void StoreJSIteratorFilterHelperPredicate(TNode<JSIteratorFilterHelper> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=3
  TNode<Number> LoadJSIteratorFilterHelperCounter(TNode<JSIteratorFilterHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=20&c=3
  void StoreJSIteratorFilterHelperCounter(TNode<JSIteratorFilterHelper> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=3
  TNode<Number> LoadJSIteratorTakeHelperRemaining(TNode<JSIteratorTakeHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=24&c=3
  void StoreJSIteratorTakeHelperRemaining(TNode<JSIteratorTakeHelper> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=3
  TNode<Number> LoadJSIteratorDropHelperRemaining(TNode<JSIteratorDropHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=28&c=3
  void StoreJSIteratorDropHelperRemaining(TNode<JSIteratorDropHelper> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
  TNode<JSReceiver> LoadJSIteratorFlatMapHelperMapper(TNode<JSIteratorFlatMapHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=32&c=3
  void StoreJSIteratorFlatMapHelperMapper(TNode<JSIteratorFlatMapHelper> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=33&c=3
  TNode<Number> LoadJSIteratorFlatMapHelperCounter(TNode<JSIteratorFlatMapHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=33&c=3
  void StoreJSIteratorFlatMapHelperCounter(TNode<JSIteratorFlatMapHelper> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=34&c=3
  TorqueStructIteratorRecord LoadJSIteratorFlatMapHelperInnerIterator(TNode<JSIteratorFlatMapHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=34&c=3
  void StoreJSIteratorFlatMapHelperInnerIterator(TNode<JSIteratorFlatMapHelper> p_o, TorqueStructIteratorRecord p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=35&c=3
  TNode<Boolean> LoadJSIteratorFlatMapHelperInnerAlive(TNode<JSIteratorFlatMapHelper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-iterator-helpers.tq?l=35&c=3
  void StoreJSIteratorFlatMapHelperInnerAlive(TNode<JSIteratorFlatMapHelper> p_o, TNode<Boolean> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=44&c=3
  TNode<ExternalPointerT> LoadJSExternalObjectValue(TNode<JSExternalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=44&c=3
  void StoreJSExternalObjectValue(TNode<JSExternalObject> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=120&c=3
  TNode<JSGlobalProxy> LoadJSGlobalObjectGlobalProxy(TNode<JSGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=120&c=3
  void StoreJSGlobalObjectGlobalProxy(TNode<JSGlobalObject> p_o, TNode<JSGlobalProxy> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=124&c=3
  TNode<Object> LoadJSPrimitiveWrapperValue(TNode<JSPrimitiveWrapper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=124&c=3
  void StoreJSPrimitiveWrapperValue(TNode<JSPrimitiveWrapper> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=129&c=3
  TNode<Smi> LoadJSMessageObjectMessageType(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=129&c=3
  void StoreJSMessageObjectMessageType(TNode<JSMessageObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=131&c=3
  TNode<Object> LoadJSMessageObjectArgument(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=131&c=3
  void StoreJSMessageObjectArgument(TNode<JSMessageObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
  TNode<Script> LoadJSMessageObjectScript(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=133&c=3
  void StoreJSMessageObjectScript(TNode<JSMessageObject> p_o, TNode<Script> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
  TNode<Object> LoadJSMessageObjectStackFrames(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=135&c=3
  void StoreJSMessageObjectStackFrames(TNode<JSMessageObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=136&c=3
  TNode<Object> LoadJSMessageObjectSharedInfo(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=136&c=3
  void StoreJSMessageObjectSharedInfo(TNode<JSMessageObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=140&c=3
  TNode<Smi> LoadJSMessageObjectBytecodeOffset(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=140&c=3
  void StoreJSMessageObjectBytecodeOffset(TNode<JSMessageObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=141&c=3
  TNode<Smi> LoadJSMessageObjectStartPosition(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=141&c=3
  void StoreJSMessageObjectStartPosition(TNode<JSMessageObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
  TNode<Smi> LoadJSMessageObjectEndPosition(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=142&c=3
  void StoreJSMessageObjectEndPosition(TNode<JSMessageObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=143&c=3
  TNode<Smi> LoadJSMessageObjectErrorLevel(TNode<JSMessageObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=143&c=3
  void StoreJSMessageObjectErrorLevel(TNode<JSMessageObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
  TNode<Float64T> LoadJSDateValue(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=150&c=3
  void StoreJSDateValue(TNode<JSDate> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=153&c=3
  TNode<Object> LoadJSDateYear(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=153&c=3
  void StoreJSDateYear(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=154&c=3
  TNode<Object> LoadJSDateMonth(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=154&c=3
  void StoreJSDateMonth(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
  TNode<Object> LoadJSDateDay(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=155&c=3
  void StoreJSDateDay(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=156&c=3
  TNode<Object> LoadJSDateWeekday(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=156&c=3
  void StoreJSDateWeekday(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=157&c=3
  TNode<Object> LoadJSDateHour(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=157&c=3
  void StoreJSDateHour(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=3
  TNode<Object> LoadJSDateMin(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=158&c=3
  void StoreJSDateMin(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
  TNode<Object> LoadJSDateSec(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=159&c=3
  void StoreJSDateSec(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=163&c=3
  TNode<Object> LoadJSDateCacheStamp(TNode<JSDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=163&c=3
  void StoreJSDateCacheStamp(TNode<JSDate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
  TNode<JSReceiver> LoadJSAsyncFromSyncIteratorSyncIterator(TNode<JSAsyncFromSyncIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=167&c=3
  void StoreJSAsyncFromSyncIteratorSyncIterator(TNode<JSAsyncFromSyncIterator> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=170&c=3
  TNode<Object> LoadJSAsyncFromSyncIteratorNext(TNode<JSAsyncFromSyncIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=170&c=3
  void StoreJSAsyncFromSyncIteratorNext(TNode<JSAsyncFromSyncIterator> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=175&c=3
  TNode<String> LoadJSStringIteratorString(TNode<JSStringIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=175&c=3
  void StoreJSStringIteratorString(TNode<JSStringIterator> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=177&c=3
  TNode<Smi> LoadJSStringIteratorIndex(TNode<JSStringIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=177&c=3
  void StoreJSStringIteratorIndex(TNode<JSStringIterator> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=184&c=3
  TorqueStructIteratorRecord LoadJSValidIteratorWrapperUnderlying(TNode<JSValidIteratorWrapper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-objects.tq?l=184&c=3
  void StoreJSValidIteratorWrapperUnderlying(TNode<JSValidIteratorWrapper> p_o, TorqueStructIteratorRecord p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
  TNode<Object> LoadJSProxyRevocableResultProxy(TNode<JSObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=11&c=3
  void StoreJSProxyRevocableResultProxy(TNode<JSObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
  TNode<Object> LoadJSProxyRevocableResultRevoke(TNode<JSObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-proxy.tq?l=12&c=3
  void StoreJSProxyRevocableResultRevoke(TNode<JSObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
  TNode<JSReceiver> LoadJSRegExpStringIteratorIteratingRegExp(TNode<JSRegExpStringIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=13&c=3
  void StoreJSRegExpStringIteratorIteratingRegExp(TNode<JSRegExpStringIterator> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
  TNode<String> LoadJSRegExpStringIteratorIteratedString(TNode<JSRegExpStringIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=15&c=3
  void StoreJSRegExpStringIteratorIteratedString(TNode<JSRegExpStringIterator> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
  TNode<Smi> LoadJSRegExpStringIteratorFlags(TNode<JSRegExpStringIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp-string-iterator.tq?l=16&c=3
  void StoreJSRegExpStringIteratorFlags(TNode<JSRegExpStringIterator> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
  TNode<Smi> LoadRegExpDataTypeTag(TNode<RegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=19&c=3
  void StoreRegExpDataTypeTag(TNode<RegExpData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
  TNode<String> LoadRegExpDataSource(TNode<RegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=20&c=3
  void StoreRegExpDataSource(TNode<RegExpData> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=21&c=3
  TNode<Smi> LoadRegExpDataFlags(TNode<RegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=21&c=3
  void StoreRegExpDataFlags(TNode<RegExpData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=22&c=3
  TNode<RegExpDataWrapper> LoadRegExpDataWrapper(TNode<RegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=22&c=3
  void StoreRegExpDataWrapper(TNode<RegExpData> p_o, TNode<RegExpDataWrapper> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=27&c=9
  TNode<String> LoadAtomRegExpDataPattern(TNode<AtomRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=34&c=3
  TNode<MaybeObject> LoadIrRegExpDataLatin1Bytecode(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=34&c=3
  void StoreIrRegExpDataLatin1Bytecode(TNode<IrRegExpData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=35&c=3
  TNode<MaybeObject> LoadIrRegExpDataUc16Bytecode(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=35&c=3
  void StoreIrRegExpDataUc16Bytecode(TNode<IrRegExpData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=36&c=3
  TNode<TrustedPointerT> LoadIrRegExpDataLatin1Code(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=36&c=3
  void StoreIrRegExpDataLatin1Code(TNode<IrRegExpData> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=3
  TNode<TrustedPointerT> LoadIrRegExpDataUc16Code(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=37&c=3
  void StoreIrRegExpDataUc16Code(TNode<IrRegExpData> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=38&c=3
  TNode<FixedArray> LoadIrRegExpDataCaptureNameMap(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=38&c=3
  void StoreIrRegExpDataCaptureNameMap(TNode<IrRegExpData> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=39&c=3
  TNode<Smi> LoadIrRegExpDataMaxRegisterCount(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=39&c=3
  void StoreIrRegExpDataMaxRegisterCount(TNode<IrRegExpData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=40&c=3
  TNode<Smi> LoadIrRegExpDataCaptureCount(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=40&c=3
  void StoreIrRegExpDataCaptureCount(TNode<IrRegExpData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=41&c=3
  TNode<Smi> LoadIrRegExpDataTicksUntilTierUp(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=41&c=3
  void StoreIrRegExpDataTicksUntilTierUp(TNode<IrRegExpData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=42&c=3
  TNode<Smi> LoadIrRegExpDataBacktrackLimit(TNode<IrRegExpData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=42&c=3
  void StoreIrRegExpDataBacktrackLimit(TNode<IrRegExpData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
  TNode<TrustedPointerT> LoadRegExpDataWrapperData(TNode<RegExpDataWrapper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=47&c=3
  void StoreRegExpDataWrapperData(TNode<RegExpDataWrapper> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
  TNode<TrustedPointerT> LoadJSRegExpData(TNode<JSRegExp> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=51&c=3
  void StoreJSRegExpData(TNode<JSRegExp> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
  TNode<PrimitiveHeapObject> LoadJSRegExpSource(TNode<JSRegExp> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=52&c=3
  void StoreJSRegExpSource(TNode<JSRegExp> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
  TNode<Object> LoadJSRegExpFlags(TNode<JSRegExp> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=53&c=3
  void StoreJSRegExpFlags(TNode<JSRegExp> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=80&c=3
  TNode<Object> LoadJSRegExpResultIndex(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=80&c=3
  void StoreJSRegExpResultIndex(TNode<JSArray> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=81&c=3
  TNode<Object> LoadJSRegExpResultInput(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=81&c=3
  void StoreJSRegExpResultInput(TNode<JSArray> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=82&c=3
  TNode<Object> LoadJSRegExpResultGroups(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=82&c=3
  void StoreJSRegExpResultGroups(TNode<JSArray> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=85&c=3
  TNode<HeapObject> LoadJSRegExpResultNames(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=85&c=3
  void StoreJSRegExpResultNames(TNode<JSArray> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=86&c=3
  TNode<String> LoadJSRegExpResultRegexpInput(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=86&c=3
  void StoreJSRegExpResultRegexpInput(TNode<JSArray> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=87&c=3
  TNode<Smi> LoadJSRegExpResultRegexpLastIndex(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=87&c=3
  void StoreJSRegExpResultRegexpLastIndex(TNode<JSArray> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=91&c=3
  TNode<Object> LoadJSRegExpResultWithIndicesIndices(TNode<JSRegExpResult> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=91&c=3
  void StoreJSRegExpResultWithIndicesIndices(TNode<JSRegExpResult> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=97&c=3
  TNode<Object> LoadJSRegExpResultIndicesGroups(TNode<JSArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-regexp.tq?l=97&c=3
  void StoreJSRegExpResultIndicesGroups(TNode<JSArray> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
  TNode<NativeContext> LoadJSShadowRealmNativeContext(TNode<JSShadowRealm> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-shadow-realm.tq?l=6&c=3
  void StoreJSShadowRealmNativeContext(TNode<JSShadowRealm> p_o, TNode<NativeContext> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
  TNode<Smi> LoadJSTemporalCalendarFlags(TNode<JSTemporalCalendar> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=38&c=3
  void StoreJSTemporalCalendarFlags(TNode<JSTemporalCalendar> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
  TNode<Number> LoadJSTemporalDurationYears(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=42&c=3
  void StoreJSTemporalDurationYears(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
  TNode<Number> LoadJSTemporalDurationMonths(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=43&c=3
  void StoreJSTemporalDurationMonths(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
  TNode<Number> LoadJSTemporalDurationWeeks(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=44&c=3
  void StoreJSTemporalDurationWeeks(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
  TNode<Number> LoadJSTemporalDurationDays(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=45&c=3
  void StoreJSTemporalDurationDays(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
  TNode<Number> LoadJSTemporalDurationHours(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=46&c=3
  void StoreJSTemporalDurationHours(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
  TNode<Number> LoadJSTemporalDurationMinutes(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=47&c=3
  void StoreJSTemporalDurationMinutes(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
  TNode<Number> LoadJSTemporalDurationSeconds(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=48&c=3
  void StoreJSTemporalDurationSeconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
  TNode<Number> LoadJSTemporalDurationMilliseconds(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=49&c=3
  void StoreJSTemporalDurationMilliseconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
  TNode<Number> LoadJSTemporalDurationMicroseconds(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=50&c=3
  void StoreJSTemporalDurationMicroseconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
  TNode<Number> LoadJSTemporalDurationNanoseconds(TNode<JSTemporalDuration> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=51&c=3
  void StoreJSTemporalDurationNanoseconds(TNode<JSTemporalDuration> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=55&c=3
  TNode<BigInt> LoadJSTemporalInstantNanoseconds(TNode<JSTemporalInstant> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=55&c=3
  void StoreJSTemporalInstantNanoseconds(TNode<JSTemporalInstant> p_o, TNode<BigInt> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
  TNode<Smi> LoadJSTemporalPlainDateTimeYearMonthDay(TNode<JSTemporalPlainDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=59&c=3
  void StoreJSTemporalPlainDateTimeYearMonthDay(TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
  TNode<Smi> LoadJSTemporalPlainDateTimeHourMinuteSecond(TNode<JSTemporalPlainDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=60&c=3
  void StoreJSTemporalPlainDateTimeHourMinuteSecond(TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=61&c=3
  TNode<Smi> LoadJSTemporalPlainDateTimeSecondParts(TNode<JSTemporalPlainDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=61&c=3
  void StoreJSTemporalPlainDateTimeSecondParts(TNode<JSTemporalPlainDateTime> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=62&c=3
  TNode<JSReceiver> LoadJSTemporalPlainDateTimeCalendar(TNode<JSTemporalPlainDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=62&c=3
  void StoreJSTemporalPlainDateTimeCalendar(TNode<JSTemporalPlainDateTime> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=66&c=3
  TNode<Smi> LoadJSTemporalPlainDateYearMonthDay(TNode<JSTemporalPlainDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=66&c=3
  void StoreJSTemporalPlainDateYearMonthDay(TNode<JSTemporalPlainDate> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=67&c=3
  TNode<JSReceiver> LoadJSTemporalPlainDateCalendar(TNode<JSTemporalPlainDate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=67&c=3
  void StoreJSTemporalPlainDateCalendar(TNode<JSTemporalPlainDate> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=71&c=3
  TNode<Smi> LoadJSTemporalPlainMonthDayYearMonthDay(TNode<JSTemporalPlainMonthDay> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=71&c=3
  void StoreJSTemporalPlainMonthDayYearMonthDay(TNode<JSTemporalPlainMonthDay> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=72&c=3
  TNode<JSReceiver> LoadJSTemporalPlainMonthDayCalendar(TNode<JSTemporalPlainMonthDay> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=72&c=3
  void StoreJSTemporalPlainMonthDayCalendar(TNode<JSTemporalPlainMonthDay> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
  TNode<Smi> LoadJSTemporalPlainTimeHourMinuteSecond(TNode<JSTemporalPlainTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=76&c=3
  void StoreJSTemporalPlainTimeHourMinuteSecond(TNode<JSTemporalPlainTime> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=77&c=3
  TNode<Smi> LoadJSTemporalPlainTimeSecondParts(TNode<JSTemporalPlainTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=77&c=3
  void StoreJSTemporalPlainTimeSecondParts(TNode<JSTemporalPlainTime> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=78&c=3
  TNode<JSReceiver> LoadJSTemporalPlainTimeCalendar(TNode<JSTemporalPlainTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=78&c=3
  void StoreJSTemporalPlainTimeCalendar(TNode<JSTemporalPlainTime> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=82&c=3
  TNode<Smi> LoadJSTemporalPlainYearMonthYearMonthDay(TNode<JSTemporalPlainYearMonth> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=82&c=3
  void StoreJSTemporalPlainYearMonthYearMonthDay(TNode<JSTemporalPlainYearMonth> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=83&c=3
  TNode<JSReceiver> LoadJSTemporalPlainYearMonthCalendar(TNode<JSTemporalPlainYearMonth> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=83&c=3
  void StoreJSTemporalPlainYearMonthCalendar(TNode<JSTemporalPlainYearMonth> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=87&c=3
  TNode<Smi> LoadJSTemporalTimeZoneFlags(TNode<JSTemporalTimeZone> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=87&c=3
  void StoreJSTemporalTimeZoneFlags(TNode<JSTemporalTimeZone> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=88&c=3
  TNode<Smi> LoadJSTemporalTimeZoneDetails(TNode<JSTemporalTimeZone> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=88&c=3
  void StoreJSTemporalTimeZoneDetails(TNode<JSTemporalTimeZone> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
  TNode<BigInt> LoadJSTemporalZonedDateTimeNanoseconds(TNode<JSTemporalZonedDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=92&c=3
  void StoreJSTemporalZonedDateTimeNanoseconds(TNode<JSTemporalZonedDateTime> p_o, TNode<BigInt> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=93&c=3
  TNode<JSReceiver> LoadJSTemporalZonedDateTimeTimeZone(TNode<JSTemporalZonedDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=93&c=3
  void StoreJSTemporalZonedDateTimeTimeZone(TNode<JSTemporalZonedDateTime> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=94&c=3
  TNode<JSReceiver> LoadJSTemporalZonedDateTimeCalendar(TNode<JSTemporalZonedDateTime> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-temporal-objects.tq?l=94&c=3
  void StoreJSTemporalZonedDateTimeCalendar(TNode<JSTemporalZonedDateTime> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
  TNode<NativeContext> LoadJSFinalizationRegistryNativeContext(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=10&c=3
  void StoreJSFinalizationRegistryNativeContext(TNode<JSFinalizationRegistry> p_o, TNode<NativeContext> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
  TNode<JSReceiver> LoadJSFinalizationRegistryCleanup(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=11&c=3
  void StoreJSFinalizationRegistryCleanup(TNode<JSFinalizationRegistry> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
  TNode<HeapObject> LoadJSFinalizationRegistryActiveCells(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=12&c=3
  void StoreJSFinalizationRegistryActiveCells(TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
  TNode<HeapObject> LoadJSFinalizationRegistryClearedCells(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=13&c=3
  void StoreJSFinalizationRegistryClearedCells(TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
  TNode<Object> LoadJSFinalizationRegistryKeyMap(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=14&c=3
  void StoreJSFinalizationRegistryKeyMap(TNode<JSFinalizationRegistry> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
  TNode<HeapObject> LoadJSFinalizationRegistryNextDirty(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=17&c=3
  void StoreJSFinalizationRegistryNextDirty(TNode<JSFinalizationRegistry> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
  TNode<Smi> LoadJSFinalizationRegistryFlags(TNode<JSFinalizationRegistry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=18&c=3
  void StoreJSFinalizationRegistryFlags(TNode<JSFinalizationRegistry> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=43&c=3
  TNode<HeapObject> LoadJSWeakRefTarget(TNode<JSWeakRef> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-weak-refs.tq?l=43&c=3
  void StoreJSWeakRefTarget(TNode<JSWeakRef> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=7&c=9
  TNode<Smi> LoadObjectBoilerplateDescriptionCapacity(TNode<ObjectBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=8&c=3
  TNode<Smi> LoadObjectBoilerplateDescriptionBackingStoreSize(TNode<ObjectBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=8&c=3
  void StoreObjectBoilerplateDescriptionBackingStoreSize(TNode<ObjectBoilerplateDescription> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=9&c=3
  TNode<Smi> LoadObjectBoilerplateDescriptionFlags(TNode<ObjectBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=9&c=3
  void StoreObjectBoilerplateDescriptionFlags(TNode<ObjectBoilerplateDescription> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=3
  TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceObjectBoilerplateDescriptionRawEntries(TNode<ObjectBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=3
  TNode<Object> LoadObjectBoilerplateDescriptionRawEntries(TNode<ObjectBoilerplateDescription> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=10&c=3
  void StoreObjectBoilerplateDescriptionRawEntries(TNode<ObjectBoilerplateDescription> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=14&c=3
  TNode<Smi> LoadArrayBoilerplateDescriptionFlags(TNode<ArrayBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=14&c=3
  void StoreArrayBoilerplateDescriptionFlags(TNode<ArrayBoilerplateDescription> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=15&c=3
  TNode<FixedArrayBase> LoadArrayBoilerplateDescriptionConstantElements(TNode<ArrayBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=15&c=3
  void StoreArrayBoilerplateDescriptionConstantElements(TNode<ArrayBoilerplateDescription> p_o, TNode<FixedArrayBase> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=20&c=3
  TNode<TrustedPointerT> LoadRegExpBoilerplateDescriptionData(TNode<RegExpBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=20&c=3
  void StoreRegExpBoilerplateDescriptionData(TNode<RegExpBoilerplateDescription> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=21&c=3
  TNode<String> LoadRegExpBoilerplateDescriptionSource(TNode<RegExpBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=21&c=3
  void StoreRegExpBoilerplateDescriptionSource(TNode<RegExpBoilerplateDescription> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=22&c=3
  TNode<Smi> LoadRegExpBoilerplateDescriptionFlags(TNode<RegExpBoilerplateDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=22&c=3
  void StoreRegExpBoilerplateDescriptionFlags(TNode<RegExpBoilerplateDescription> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=27&c=3
  TNode<Smi> LoadClassBoilerplateArgumentsCount(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=27&c=3
  void StoreClassBoilerplateArgumentsCount(TNode<ClassBoilerplate> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=28&c=3
  TNode<Object> LoadClassBoilerplateStaticPropertiesTemplate(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=28&c=3
  void StoreClassBoilerplateStaticPropertiesTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=29&c=3
  TNode<Object> LoadClassBoilerplateStaticElementsTemplate(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=29&c=3
  void StoreClassBoilerplateStaticElementsTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=30&c=3
  TNode<FixedArray> LoadClassBoilerplateStaticComputedProperties(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=30&c=3
  void StoreClassBoilerplateStaticComputedProperties(TNode<ClassBoilerplate> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=31&c=3
  TNode<Object> LoadClassBoilerplateInstancePropertiesTemplate(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=31&c=3
  void StoreClassBoilerplateInstancePropertiesTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=32&c=3
  TNode<Object> LoadClassBoilerplateInstanceElementsTemplate(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=32&c=3
  void StoreClassBoilerplateInstanceElementsTemplate(TNode<ClassBoilerplate> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=33&c=3
  TNode<FixedArray> LoadClassBoilerplateInstanceComputedProperties(TNode<ClassBoilerplate> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/literal-objects.tq?l=33&c=3
  void StoreClassBoilerplateInstanceComputedProperties(TNode<ClassBoilerplate> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
  TNode<MaybeObject> LoadMegaDomHandlerAccessor(TNode<MegaDomHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=7&c=3
  void StoreMegaDomHandlerAccessor(TNode<MegaDomHandler> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
  TNode<MaybeObject> LoadMegaDomHandlerContext(TNode<MegaDomHandler> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/megadom-handler.tq?l=8&c=3
  void StoreMegaDomHandlerContext(TNode<MegaDomHandler> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=8&c=3
  TNode<Object> LoadMicrotaskContinuationPreservedEmbedderData(TNode<Microtask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=8&c=3
  void StoreMicrotaskContinuationPreservedEmbedderData(TNode<Microtask> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=12&c=3
  TNode<Foreign> LoadCallbackTaskCallback(TNode<CallbackTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=12&c=3
  void StoreCallbackTaskCallback(TNode<CallbackTask> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=13&c=3
  TNode<Foreign> LoadCallbackTaskData(TNode<CallbackTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=13&c=3
  void StoreCallbackTaskData(TNode<CallbackTask> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=17&c=3
  TNode<JSReceiver> LoadCallableTaskCallable(TNode<CallableTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=17&c=3
  void StoreCallableTaskCallable(TNode<CallableTask> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=18&c=3
  TNode<Context> LoadCallableTaskContext(TNode<CallableTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/microtask.tq?l=18&c=3
  void StoreCallableTaskContext(TNode<CallableTask> p_o, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
  TNode<ObjectHashTable> LoadModuleExports(TNode<Module> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=8&c=3
  void StoreModuleExports(TNode<Module> p_o, TNode<ObjectHashTable> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
  TNode<Smi> LoadModuleHash(TNode<Module> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=10&c=3
  void StoreModuleHash(TNode<Module> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
  TNode<Smi> LoadModuleStatus(TNode<Module> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=11&c=3
  void StoreModuleStatus(TNode<Module> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
  TNode<HeapObject> LoadModuleModuleNamespace(TNode<Module> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=12&c=3
  void StoreModuleModuleNamespace(TNode<Module> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
  TNode<Object> LoadModuleException(TNode<Module> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=14&c=3
  void StoreModuleException(TNode<Module> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
  TNode<HeapObject> LoadModuleTopLevelCapability(TNode<Module> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=17&c=3
  void StoreModuleTopLevelCapability(TNode<Module> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
  TNode<Module> LoadJSModuleNamespaceModule(TNode<JSModuleNamespace> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=21&c=3
  void StoreJSModuleNamespaceModule(TNode<JSModuleNamespace> p_o, TNode<Module> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
  TNode<Object> LoadScriptOrModuleResourceName(TNode<ScriptOrModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=25&c=3
  void StoreScriptOrModuleResourceName(TNode<ScriptOrModule> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
  TNode<FixedArray> LoadScriptOrModuleHostDefinedOptions(TNode<ScriptOrModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/module.tq?l=26&c=3
  void StoreScriptOrModuleHostDefinedOptions(TNode<ScriptOrModule> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=27&c=3
  TNode<Uint8T> LoadSmallOrderedHashSetNumberOfElements(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=27&c=3
  void StoreSmallOrderedHashSetNumberOfElements(TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
  TNode<Uint8T> LoadSmallOrderedHashSetNumberOfDeletedElements(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=28&c=3
  void StoreSmallOrderedHashSetNumberOfDeletedElements(TNode<SmallOrderedHashSet> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=29&c=9
  TNode<Uint8T> LoadSmallOrderedHashSetNumberOfBuckets(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=28
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=28
  TNode<Uint8T> LoadSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=30&c=28
  void StoreSmallOrderedHashSetPadding(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=3
  TorqueStructSlice_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_MutableReference_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_0 FieldSliceSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=3
  TNode<Object> LoadSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=32&c=3
  void StoreSmallOrderedHashSetDataTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=34&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=34&c=3
  TNode<Uint8T> LoadSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=34&c=3
  void StoreSmallOrderedHashSetHashTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
  TNode<Uint8T> LoadSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=35&c=3
  void StoreSmallOrderedHashSetChainTable(TNode<SmallOrderedHashSet> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=66&c=3
  TNode<Uint8T> LoadSmallOrderedHashMapNumberOfElements(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=66&c=3
  void StoreSmallOrderedHashMapNumberOfElements(TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
  TNode<Uint8T> LoadSmallOrderedHashMapNumberOfDeletedElements(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=67&c=3
  void StoreSmallOrderedHashMapNumberOfDeletedElements(TNode<SmallOrderedHashMap> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=68&c=9
  TNode<Uint8T> LoadSmallOrderedHashMapNumberOfBuckets(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=28
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=28
  TNode<Uint8T> LoadSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=69&c=28
  void StoreSmallOrderedHashMapPadding(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=71&c=3
  TorqueStructSlice_HashMapEntry_MutableReference_HashMapEntry_0 FieldSliceSmallOrderedHashMapDataTable(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=73&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=73&c=3
  TNode<Uint8T> LoadSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=73&c=3
  void StoreSmallOrderedHashMapHashTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
  TNode<Uint8T> LoadSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=74&c=3
  void StoreSmallOrderedHashMapChainTable(TNode<SmallOrderedHashMap> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=103&c=3
  TNode<Int32T> LoadSmallOrderedNameDictionaryHash(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=103&c=3
  void StoreSmallOrderedNameDictionaryHash(TNode<SmallOrderedNameDictionary> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=28
  TNode<Int32T> LoadSmallOrderedNameDictionaryPadding0(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=104&c=28
  void StoreSmallOrderedNameDictionaryPadding0(TNode<SmallOrderedNameDictionary> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=106&c=3
  TNode<Uint8T> LoadSmallOrderedNameDictionaryNumberOfElements(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=106&c=3
  void StoreSmallOrderedNameDictionaryNumberOfElements(TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
  TNode<Uint8T> LoadSmallOrderedNameDictionaryNumberOfDeletedElements(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=107&c=3
  void StoreSmallOrderedNameDictionaryNumberOfDeletedElements(TNode<SmallOrderedNameDictionary> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=108&c=9
  TNode<Uint8T> LoadSmallOrderedNameDictionaryNumberOfBuckets(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=28
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=28
  TNode<Uint8T> LoadSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=109&c=28
  void StoreSmallOrderedNameDictionaryPadding1(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=111&c=3
  TorqueStructSlice_NameDictionaryEntry_MutableReference_NameDictionaryEntry_0 FieldSliceSmallOrderedNameDictionaryDataTable(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=113&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=113&c=3
  TNode<Uint8T> LoadSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=113&c=3
  void StoreSmallOrderedNameDictionaryHashTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
  TNode<Uint8T> LoadSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/ordered-hash-table.tq?l=114&c=3
  void StoreSmallOrderedNameDictionaryChainTable(TNode<SmallOrderedNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
  TNode<Object> LoadPromiseReactionContinuationPreservedEmbedderData(TNode<PromiseReaction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=34&c=3
  void StorePromiseReactionContinuationPreservedEmbedderData(TNode<PromiseReaction> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=35&c=3
  TNode<Object> LoadPromiseReactionNext(TNode<PromiseReaction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=35&c=3
  void StorePromiseReactionNext(TNode<PromiseReaction> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=36&c=3
  TNode<HeapObject> LoadPromiseReactionRejectHandler(TNode<PromiseReaction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=36&c=3
  void StorePromiseReactionRejectHandler(TNode<PromiseReaction> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
  TNode<HeapObject> LoadPromiseReactionFulfillHandler(TNode<PromiseReaction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=37&c=3
  void StorePromiseReactionFulfillHandler(TNode<PromiseReaction> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=40&c=3
  TNode<HeapObject> LoadPromiseReactionPromiseOrCapability(TNode<PromiseReaction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=40&c=3
  void StorePromiseReactionPromiseOrCapability(TNode<PromiseReaction> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=58&c=3
  TNode<Object> LoadPromiseReactionJobTaskArgument(TNode<PromiseReactionJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=58&c=3
  void StorePromiseReactionJobTaskArgument(TNode<PromiseReactionJobTask> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=59&c=3
  TNode<Context> LoadPromiseReactionJobTaskContext(TNode<PromiseReactionJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=59&c=3
  void StorePromiseReactionJobTaskContext(TNode<PromiseReactionJobTask> p_o, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
  TNode<HeapObject> LoadPromiseReactionJobTaskHandler(TNode<PromiseReactionJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=60&c=3
  void StorePromiseReactionJobTaskHandler(TNode<PromiseReactionJobTask> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=63&c=3
  TNode<HeapObject> LoadPromiseReactionJobTaskPromiseOrCapability(TNode<PromiseReactionJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=63&c=3
  void StorePromiseReactionJobTaskPromiseOrCapability(TNode<PromiseReactionJobTask> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
  TNode<Context> LoadPromiseResolveThenableJobTaskContext(TNode<PromiseResolveThenableJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=71&c=3
  void StorePromiseResolveThenableJobTaskContext(TNode<PromiseResolveThenableJobTask> p_o, TNode<Context> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
  TNode<JSPromise> LoadPromiseResolveThenableJobTaskPromiseToResolve(TNode<PromiseResolveThenableJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=72&c=3
  void StorePromiseResolveThenableJobTaskPromiseToResolve(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSPromise> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=73&c=3
  TNode<JSReceiver> LoadPromiseResolveThenableJobTaskThenable(TNode<PromiseResolveThenableJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=73&c=3
  void StorePromiseResolveThenableJobTaskThenable(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=74&c=3
  TNode<JSReceiver> LoadPromiseResolveThenableJobTaskThen(TNode<PromiseResolveThenableJobTask> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/promise.tq?l=74&c=3
  void StorePromiseResolveThenableJobTaskThen(TNode<PromiseResolveThenableJobTask> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=6&c=3
  TNode<Smi> LoadPropertyArrayLengthAndHash(TNode<PropertyArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-array.tq?l=6&c=3
  void StorePropertyArrayLengthAndHash(TNode<PropertyArray> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
  TNode<Name> LoadPropertyCellName(TNode<PropertyCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=7&c=3
  void StorePropertyCellName(TNode<PropertyCell> p_o, TNode<Name> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
  TNode<Smi> LoadPropertyCellPropertyDetailsRaw(TNode<PropertyCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=8&c=3
  void StorePropertyCellPropertyDetailsRaw(TNode<PropertyCell> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
  TNode<Object> LoadPropertyCellValue(TNode<PropertyCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=9&c=3
  void StorePropertyCellValue(TNode<PropertyCell> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=10&c=3
  TNode<WeakArrayList> LoadPropertyCellDependentCode(TNode<PropertyCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=10&c=3
  void StorePropertyCellDependentCode(TNode<PropertyCell> p_o, TNode<WeakArrayList> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=16&c=3
  TNode<WeakArrayList> LoadConstTrackingLetCellDependentCode(TNode<ConstTrackingLetCell> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-cell.tq?l=16&c=3
  void StoreConstTrackingLetCellDependentCode(TNode<ConstTrackingLetCell> p_o, TNode<WeakArrayList> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=47&c=3
  TNode<Smi> LoadPropertyDescriptorObjectFlags(TNode<PropertyDescriptorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=47&c=3
  void StorePropertyDescriptorObjectFlags(TNode<PropertyDescriptorObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
  TNode<Object> LoadPropertyDescriptorObjectValue(TNode<PropertyDescriptorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=48&c=3
  void StorePropertyDescriptorObjectValue(TNode<PropertyDescriptorObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
  TNode<Object> LoadPropertyDescriptorObjectGet(TNode<PropertyDescriptorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=49&c=3
  void StorePropertyDescriptorObjectGet(TNode<PropertyDescriptorObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
  TNode<Object> LoadPropertyDescriptorObjectSet(TNode<PropertyDescriptorObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/property-descriptor-object.tq?l=50&c=3
  void StorePropertyDescriptorObjectSet(TNode<PropertyDescriptorObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
  TNode<HeapObject> LoadPrototypeInfoModuleNamespace(TNode<PrototypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=14&c=3
  void StorePrototypeInfoModuleNamespace(TNode<PrototypeInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
  TNode<Object> LoadPrototypeInfoPrototypeUsers(TNode<PrototypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=18&c=3
  void StorePrototypeInfoPrototypeUsers(TNode<PrototypeInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
  TNode<Object> LoadPrototypeInfoPrototypeChainEnumCache(TNode<PrototypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=20&c=3
  void StorePrototypeInfoPrototypeChainEnumCache(TNode<PrototypeInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
  TNode<Smi> LoadPrototypeInfoRegistrySlot(TNode<PrototypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=24&c=3
  void StorePrototypeInfoRegistrySlot(TNode<PrototypeInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
  TNode<Smi> LoadPrototypeInfoBitField(TNode<PrototypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=26&c=3
  void StorePrototypeInfoBitField(TNode<PrototypeInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=31&c=3
  TNode<HeapObject> LoadPrototypeInfoDerivedMaps(TNode<PrototypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/prototype-info.tq?l=31&c=3
  void StorePrototypeInfoDerivedMaps(TNode<PrototypeInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=21&c=3
  TNode<PrimitiveHeapObject> LoadScriptSource(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=21&c=3
  void StoreScriptSource(TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=24&c=3
  TNode<Object> LoadScriptName(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=24&c=3
  void StoreScriptName(TNode<Script> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=27&c=3
  TNode<Smi> LoadScriptLineOffset(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=27&c=3
  void StoreScriptLineOffset(TNode<Script> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=31&c=3
  TNode<Smi> LoadScriptColumnOffset(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=31&c=3
  void StoreScriptColumnOffset(TNode<Script> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
  TNode<Object> LoadScriptContextData(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=34&c=3
  void StoreScriptContextData(TNode<Script> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=36&c=3
  TNode<Smi> LoadScriptScriptType(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=36&c=3
  void StoreScriptScriptType(TNode<Script> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=39&c=3
  TNode<Object> LoadScriptLineEnds(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=39&c=3
  void StoreScriptLineEnds(TNode<Script> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=42&c=3
  TNode<Smi> LoadScriptId(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=42&c=3
  void StoreScriptId(TNode<Script> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=47&c=3
  TNode<HeapObject> LoadScriptEvalFromSharedOrWrappedArguments(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=47&c=3
  void StoreScriptEvalFromSharedOrWrappedArguments(TNode<Script> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
  TNode<Object> LoadScriptEvalFromPosition(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=49&c=3
  void StoreScriptEvalFromPosition(TNode<Script> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=50&c=3
  TNode<HeapObject> LoadScriptInfos(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=50&c=3
  void StoreScriptInfos(TNode<Script> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=54&c=3
  TNode<HeapObject> LoadScriptCompiledLazyFunctionPositions(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=54&c=3
  void StoreScriptCompiledLazyFunctionPositions(TNode<Script> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=57&c=3
  TNode<Smi> LoadScriptFlags(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=57&c=3
  void StoreScriptFlags(TNode<Script> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=60&c=3
  TNode<PrimitiveHeapObject> LoadScriptSourceUrl(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=60&c=3
  void StoreScriptSourceUrl(TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=63&c=3
  TNode<Object> LoadScriptSourceMappingUrl(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=63&c=3
  void StoreScriptSourceMappingUrl(TNode<Script> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=66&c=3
  TNode<FixedArray> LoadScriptHostDefinedOptions(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=66&c=3
  void StoreScriptHostDefinedOptions(TNode<Script> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=75&c=3
  TNode<PrimitiveHeapObject> LoadScriptSourceHash(TNode<Script> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/script.tq?l=75&c=3
  void StoreScriptSourceHash(TNode<Script> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=9&c=3
  TNode<Int32T> LoadPreparseDataDataLength(TNode<PreparseData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=9&c=3
  void StorePreparseDataDataLength(TNode<PreparseData> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=10&c=3
  TNode<Int32T> LoadPreparseDataChildrenLength(TNode<PreparseData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=10&c=3
  void StorePreparseDataChildrenLength(TNode<PreparseData> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=14&c=3
  TNode<MaybeObject> LoadInterpreterDataBytecodeArray(TNode<InterpreterData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=14&c=3
  void StoreInterpreterDataBytecodeArray(TNode<InterpreterData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=15&c=3
  TNode<MaybeObject> LoadInterpreterDataInterpreterTrampoline(TNode<InterpreterData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=15&c=3
  void StoreInterpreterDataInterpreterTrampoline(TNode<InterpreterData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
  TNode<TrustedPointerT> LoadSharedFunctionInfoTrustedFunctionData(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=70&c=3
  void StoreSharedFunctionInfoTrustedFunctionData(TNode<SharedFunctionInfo> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
  TNode<Object> LoadSharedFunctionInfoUntrustedFunctionData(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=74&c=3
  void StoreSharedFunctionInfoUntrustedFunctionData(TNode<SharedFunctionInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
  TNode<Object> LoadSharedFunctionInfoNameOrScopeInfo(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=75&c=3
  void StoreSharedFunctionInfoNameOrScopeInfo(TNode<SharedFunctionInfo> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
  TNode<HeapObject> LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=76&c=3
  void StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=77&c=3
  TNode<HeapObject> LoadSharedFunctionInfoScript(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=77&c=3
  void StoreSharedFunctionInfoScript(TNode<SharedFunctionInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=83&c=3
  TNode<Int16T> LoadSharedFunctionInfoLength(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=83&c=3
  void StoreSharedFunctionInfoLength(TNode<SharedFunctionInfo> p_o, TNode<Int16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=88&c=3
  TNode<Uint16T> LoadSharedFunctionInfoFormalParameterCount(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=88&c=3
  void StoreSharedFunctionInfoFormalParameterCount(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=89&c=3
  TNode<Uint16T> LoadSharedFunctionInfoFunctionTokenOffset(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=89&c=3
  void StoreSharedFunctionInfoFunctionTokenOffset(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=92&c=3
  TNode<Uint8T> LoadSharedFunctionInfoExpectedNofProperties(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=92&c=3
  void StoreSharedFunctionInfoExpectedNofProperties(TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=93&c=3
  TNode<Uint8T> LoadSharedFunctionInfoFlags2(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=93&c=3
  void StoreSharedFunctionInfoFlags2(TNode<SharedFunctionInfo> p_o, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=94&c=3
  TNode<Uint32T> LoadSharedFunctionInfoFlags(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=94&c=3
  void StoreSharedFunctionInfoFlags(TNode<SharedFunctionInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=98&c=3
  TNode<Int32T> LoadSharedFunctionInfoFunctionLiteralId(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=98&c=3
  void StoreSharedFunctionInfoFunctionLiteralId(TNode<SharedFunctionInfo> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=102&c=3
  TNode<Int32T> LoadSharedFunctionInfoUniqueId(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=102&c=3
  void StoreSharedFunctionInfoUniqueId(TNode<SharedFunctionInfo> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=105&c=3
  TNode<Uint16T> LoadSharedFunctionInfoAge(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=105&c=3
  void StoreSharedFunctionInfoAge(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=106&c=3
  TNode<Uint16T> LoadSharedFunctionInfoPadding(TNode<SharedFunctionInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=106&c=3
  void StoreSharedFunctionInfoPadding(TNode<SharedFunctionInfo> p_o, TNode<Uint16T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
  TNode<SharedFunctionInfo> LoadSharedFunctionInfoWrapperSharedInfo(TNode<SharedFunctionInfoWrapper> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=115&c=3
  void StoreSharedFunctionInfoWrapperSharedInfo(TNode<SharedFunctionInfoWrapper> p_o, TNode<SharedFunctionInfo> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=146&c=3
  TNode<String> LoadUncompiledDataInferredName(TNode<UncompiledData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=146&c=3
  void StoreUncompiledDataInferredName(TNode<UncompiledData> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
  TNode<Int32T> LoadUncompiledDataStartPosition(TNode<UncompiledData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=147&c=3
  void StoreUncompiledDataStartPosition(TNode<UncompiledData> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=148&c=3
  TNode<Int32T> LoadUncompiledDataEndPosition(TNode<UncompiledData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=148&c=3
  void StoreUncompiledDataEndPosition(TNode<UncompiledData> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=158&c=3
  TNode<PreparseData> LoadUncompiledDataWithPreparseDataPreparseData(TNode<UncompiledDataWithPreparseData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=158&c=3
  void StoreUncompiledDataWithPreparseDataPreparseData(TNode<UncompiledDataWithPreparseData> p_o, TNode<PreparseData> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=165&c=3
  TNode<RawPtrT> LoadUncompiledDataWithoutPreparseDataWithJobJob(TNode<UncompiledDataWithoutPreparseDataWithJob> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=165&c=3
  void StoreUncompiledDataWithoutPreparseDataWithJobJob(TNode<UncompiledDataWithoutPreparseDataWithJob> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=172&c=3
  TNode<RawPtrT> LoadUncompiledDataWithPreparseDataAndJobJob(TNode<UncompiledDataWithPreparseDataAndJob> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=172&c=3
  void StoreUncompiledDataWithPreparseDataAndJobJob(TNode<UncompiledDataWithPreparseDataAndJob> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=187&c=3
  TNode<ByteArray> LoadOnHeapBasicBlockProfilerDataBlockIds(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=187&c=3
  void StoreOnHeapBasicBlockProfilerDataBlockIds(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=188&c=3
  TNode<ByteArray> LoadOnHeapBasicBlockProfilerDataCounts(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=188&c=3
  void StoreOnHeapBasicBlockProfilerDataCounts(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=189&c=3
  TNode<ByteArray> LoadOnHeapBasicBlockProfilerDataBranches(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=189&c=3
  void StoreOnHeapBasicBlockProfilerDataBranches(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=190&c=3
  TNode<String> LoadOnHeapBasicBlockProfilerDataName(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=190&c=3
  void StoreOnHeapBasicBlockProfilerDataName(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=191&c=3
  TNode<String> LoadOnHeapBasicBlockProfilerDataSchedule(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=191&c=3
  void StoreOnHeapBasicBlockProfilerDataSchedule(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=192&c=3
  TNode<String> LoadOnHeapBasicBlockProfilerDataCode(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=192&c=3
  void StoreOnHeapBasicBlockProfilerDataCode(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=193&c=3
  TNode<Smi> LoadOnHeapBasicBlockProfilerDataHash(TNode<OnHeapBasicBlockProfilerData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/shared-function-info.tq?l=193&c=3
  void StoreOnHeapBasicBlockProfilerDataHash(TNode<OnHeapBasicBlockProfilerData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
  TNode<HeapObject> LoadSourceTextModuleCode(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=14&c=3
  void StoreSourceTextModuleCode(TNode<SourceTextModule> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
  TNode<FixedArray> LoadSourceTextModuleRegularExports(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=20&c=3
  void StoreSourceTextModuleRegularExports(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
  TNode<FixedArray> LoadSourceTextModuleRegularImports(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=21&c=3
  void StoreSourceTextModuleRegularImports(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
  TNode<FixedArray> LoadSourceTextModuleRequestedModules(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=26&c=3
  void StoreSourceTextModuleRequestedModules(TNode<SourceTextModule> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
  TNode<HeapObject> LoadSourceTextModuleImportMeta(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=31&c=36
  void StoreSourceTextModuleImportMeta(TNode<SourceTextModule> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
  TNode<HeapObject> LoadSourceTextModuleCycleRoot(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=36&c=3
  void StoreSourceTextModuleCycleRoot(TNode<SourceTextModule> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
  TNode<ArrayList> LoadSourceTextModuleAsyncParentModules(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=38&c=3
  void StoreSourceTextModuleAsyncParentModules(TNode<SourceTextModule> p_o, TNode<ArrayList> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
  TNode<Smi> LoadSourceTextModuleDfsIndex(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=41&c=3
  void StoreSourceTextModuleDfsIndex(TNode<SourceTextModule> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
  TNode<Smi> LoadSourceTextModuleDfsAncestorIndex(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=42&c=3
  void StoreSourceTextModuleDfsAncestorIndex(TNode<SourceTextModule> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
  TNode<Smi> LoadSourceTextModulePendingAsyncDependencies(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=45&c=3
  void StoreSourceTextModulePendingAsyncDependencies(TNode<SourceTextModule> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
  TNode<Smi> LoadSourceTextModuleFlags(TNode<SourceTextModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=47&c=3
  void StoreSourceTextModuleFlags(TNode<SourceTextModule> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
  TNode<String> LoadModuleRequestSpecifier(TNode<ModuleRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=59&c=3
  void StoreModuleRequestSpecifier(TNode<ModuleRequest> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
  TNode<FixedArray> LoadModuleRequestImportAttributes(TNode<ModuleRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=63&c=3
  void StoreModuleRequestImportAttributes(TNode<ModuleRequest> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
  TNode<Smi> LoadModuleRequestFlags(TNode<ModuleRequest> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=65&c=3
  void StoreModuleRequestFlags(TNode<ModuleRequest> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
  TNode<PrimitiveHeapObject> LoadSourceTextModuleInfoEntryExportName(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=69&c=3
  void StoreSourceTextModuleInfoEntryExportName(TNode<SourceTextModuleInfoEntry> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
  TNode<PrimitiveHeapObject> LoadSourceTextModuleInfoEntryLocalName(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=70&c=3
  void StoreSourceTextModuleInfoEntryLocalName(TNode<SourceTextModuleInfoEntry> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
  TNode<PrimitiveHeapObject> LoadSourceTextModuleInfoEntryImportName(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=71&c=3
  void StoreSourceTextModuleInfoEntryImportName(TNode<SourceTextModuleInfoEntry> p_o, TNode<PrimitiveHeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
  TNode<Smi> LoadSourceTextModuleInfoEntryModuleRequest(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=72&c=3
  void StoreSourceTextModuleInfoEntryModuleRequest(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
  TNode<Smi> LoadSourceTextModuleInfoEntryCellIndex(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=73&c=3
  void StoreSourceTextModuleInfoEntryCellIndex(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
  TNode<Smi> LoadSourceTextModuleInfoEntryBegPos(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=74&c=3
  void StoreSourceTextModuleInfoEntryBegPos(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
  TNode<Smi> LoadSourceTextModuleInfoEntryEndPos(TNode<SourceTextModuleInfoEntry> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/source-text-module.tq?l=75&c=3
  void StoreSourceTextModuleInfoEntryEndPos(TNode<SourceTextModuleInfoEntry> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
  TNode<String> LoadConsStringFirst(TNode<ConsString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=78&c=3
  void StoreConsStringFirst(TNode<ConsString> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=79&c=3
  TNode<String> LoadConsStringSecond(TNode<ConsString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=79&c=3
  void StoreConsStringSecond(TNode<ConsString> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=86&c=3
  TNode<ExternalPointerT> LoadExternalStringResource(TNode<ExternalString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=86&c=3
  void StoreExternalStringResource(TNode<ExternalString> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=88&c=3
  TNode<ExternalPointerT> LoadExternalStringResourceData(TNode<ExternalString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=88&c=3
  void StoreExternalStringResourceData(TNode<ExternalString> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=141&c=9
  TorqueStructSlice_char8_ConstReference_char8_0 FieldSliceSeqOneByteStringChars(TNode<SeqOneByteString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=141&c=9
  TNode<Uint8T> LoadSeqOneByteStringChars(TNode<SeqOneByteString> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=147&c=9
  TorqueStructSlice_char16_ConstReference_char16_0 FieldSliceSeqTwoByteStringChars(TNode<SeqTwoByteString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=147&c=9
  TNode<Uint16T> LoadSeqTwoByteStringChars(TNode<SeqTwoByteString> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=153&c=3
  TNode<String> LoadSlicedStringParent(TNode<SlicedString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=153&c=3
  void StoreSlicedStringParent(TNode<SlicedString> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=154&c=3
  TNode<Smi> LoadSlicedStringOffset(TNode<SlicedString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=154&c=3
  void StoreSlicedStringOffset(TNode<SlicedString> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=160&c=3
  TNode<String> LoadThinStringActual(TNode<ThinString> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/string.tq?l=160&c=3
  void StoreThinStringActual(TNode<ThinString> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=3
  TNode<Object> LoadTuple2Value1(TNode<Tuple2> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=9&c=3
  void StoreTuple2Value1(TNode<Tuple2> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
  TNode<Object> LoadTuple2Value2(TNode<Tuple2> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/struct.tq?l=10&c=3
  void StoreTuple2Value2(TNode<Tuple2> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
  TNode<Uint32T> LoadSwissNameDictionaryHash(TNode<SwissNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=9&c=3
  void StoreSwissNameDictionaryHash(TNode<SwissNameDictionary> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=10&c=9
  TNode<Int32T> LoadSwissNameDictionaryCapacity(TNode<SwissNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
  TNode<ByteArray> LoadSwissNameDictionaryMetaTable(TNode<SwissNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=11&c=3
  void StoreSwissNameDictionaryMetaTable(TNode<SwissNameDictionary> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
  TorqueStructSlice_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_MutableReference_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_Boolean_OR_Null_OR_Undefined_OR_JSReceiver_OR_TheHole_0 FieldSliceSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
  TNode<Object> LoadSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=12&c=3
  void StoreSwissNameDictionaryDataTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
  TNode<Uint8T> LoadSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=13&c=3
  void StoreSwissNameDictionaryCtrlTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
  TorqueStructSlice_uint8_MutableReference_uint8_0 FieldSliceSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
  TNode<Uint8T> LoadSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/swiss-name-dictionary.tq?l=14&c=3
  void StoreSwissNameDictionaryPropertyDetailsTable(TNode<SwissNameDictionary> p_o, TNode<IntPtrT> p_i, TNode<Uint8T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
  TNode<String> LoadSyntheticModuleName(TNode<SyntheticModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=6&c=3
  void StoreSyntheticModuleName(TNode<SyntheticModule> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
  TNode<FixedArray> LoadSyntheticModuleExportNames(TNode<SyntheticModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=7&c=3
  void StoreSyntheticModuleExportNames(TNode<SyntheticModule> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
  TNode<Foreign> LoadSyntheticModuleEvaluationSteps(TNode<SyntheticModule> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/synthetic-module.tq?l=8&c=3
  void StoreSyntheticModuleEvaluationSteps(TNode<SyntheticModule> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
  TNode<FixedArray> LoadTemplateObjectDescriptionRawStrings(TNode<TemplateObjectDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=6&c=3
  void StoreTemplateObjectDescriptionRawStrings(TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
  TNode<FixedArray> LoadTemplateObjectDescriptionCookedStrings(TNode<TemplateObjectDescription> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/template-objects.tq?l=7&c=3
  void StoreTemplateObjectDescriptionCookedStrings(TNode<TemplateObjectDescription> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=15&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataPrototypeTemplate(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=15&c=3
  void StoreFunctionTemplateRareDataPrototypeTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=16&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataPrototypeProviderTemplate(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=16&c=3
  void StoreFunctionTemplateRareDataPrototypeProviderTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=17&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataParentTemplate(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=17&c=3
  void StoreFunctionTemplateRareDataParentTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataNamedPropertyHandler(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=18&c=3
  void StoreFunctionTemplateRareDataNamedPropertyHandler(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataIndexedPropertyHandler(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=19&c=3
  void StoreFunctionTemplateRareDataIndexedPropertyHandler(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataInstanceTemplate(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=20&c=3
  void StoreFunctionTemplateRareDataInstanceTemplate(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=21&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataInstanceCallHandler(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=21&c=3
  void StoreFunctionTemplateRareDataInstanceCallHandler(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=22&c=3
  TNode<HeapObject> LoadFunctionTemplateRareDataAccessCheckInfo(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=22&c=3
  void StoreFunctionTemplateRareDataAccessCheckInfo(TNode<FunctionTemplateRareData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=23&c=3
  TNode<FixedArray> LoadFunctionTemplateRareDataCFunctionOverloads(TNode<FunctionTemplateRareData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=23&c=3
  void StoreFunctionTemplateRareDataCFunctionOverloads(TNode<FunctionTemplateRareData> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=106&c=3
  TNode<HeapObject> LoadObjectTemplateInfoConstructor(TNode<ObjectTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=106&c=3
  void StoreObjectTemplateInfoConstructor(TNode<ObjectTemplateInfo> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=107&c=3
  TNode<Smi> LoadObjectTemplateInfoData(TNode<ObjectTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=107&c=3
  void StoreObjectTemplateInfoData(TNode<ObjectTemplateInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=112&c=3
  TNode<FixedArray> LoadDictionaryTemplateInfoPropertyNames(TNode<DictionaryTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=112&c=3
  void StoreDictionaryTemplateInfoPropertyNames(TNode<DictionaryTemplateInfo> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=113&c=3
  TNode<Smi> LoadDictionaryTemplateInfoSerialNumber(TNode<DictionaryTemplateInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/templates.tq?l=113&c=3
  void StoreDictionaryTemplateInfoSerialNumber(TNode<DictionaryTemplateInfo> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
  TNode<Uint32T> LoadTurbofanBitsetTypeBitsetLow(TNode<TurbofanBitsetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=62&c=3
  void StoreTurbofanBitsetTypeBitsetLow(TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=63&c=3
  TNode<Uint32T> LoadTurbofanBitsetTypeBitsetHigh(TNode<TurbofanBitsetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=63&c=3
  void StoreTurbofanBitsetTypeBitsetHigh(TNode<TurbofanBitsetType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
  TNode<TurbofanType> LoadTurbofanUnionTypeType1(TNode<TurbofanUnionType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=68&c=3
  void StoreTurbofanUnionTypeType1(TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=69&c=3
  TNode<TurbofanType> LoadTurbofanUnionTypeType2(TNode<TurbofanUnionType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=69&c=3
  void StoreTurbofanUnionTypeType2(TNode<TurbofanUnionType> p_o, TNode<TurbofanType> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
  TNode<Float64T> LoadTurbofanRangeTypeMin(TNode<TurbofanRangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=74&c=3
  void StoreTurbofanRangeTypeMin(TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=75&c=3
  TNode<Float64T> LoadTurbofanRangeTypeMax(TNode<TurbofanRangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=75&c=3
  void StoreTurbofanRangeTypeMax(TNode<TurbofanRangeType> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=80&c=3
  TNode<HeapObject> LoadTurbofanHeapConstantTypeConstant(TNode<TurbofanHeapConstantType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=80&c=3
  void StoreTurbofanHeapConstantTypeConstant(TNode<TurbofanHeapConstantType> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=85&c=3
  TNode<Float64T> LoadTurbofanOtherNumberConstantTypeConstant(TNode<TurbofanOtherNumberConstantType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turbofan-types.tq?l=85&c=3
  void StoreTurbofanOtherNumberConstantTypeConstant(TNode<TurbofanOtherNumberConstantType> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=29&c=3
  TNode<Uint32T> LoadTurboshaftWord32RangeTypeFrom(TNode<TurboshaftWord32RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=29&c=3
  void StoreTurboshaftWord32RangeTypeFrom(TNode<TurboshaftWord32RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=30&c=3
  TNode<Uint32T> LoadTurboshaftWord32RangeTypeTo(TNode<TurboshaftWord32RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=30&c=3
  void StoreTurboshaftWord32RangeTypeTo(TNode<TurboshaftWord32RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=37&c=9
  TNode<Uint32T> LoadTurboshaftWord32SetTypeSetSize(TNode<TurboshaftWord32SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=38&c=3
  TorqueStructSlice_uint32_MutableReference_uint32_0 FieldSliceTurboshaftWord32SetTypeElements(TNode<TurboshaftWord32SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=38&c=3
  TNode<Uint32T> LoadTurboshaftWord32SetTypeElements(TNode<TurboshaftWord32SetType> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=38&c=3
  void StoreTurboshaftWord32SetTypeElements(TNode<TurboshaftWord32SetType> p_o, TNode<IntPtrT> p_i, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=50&c=3
  TNode<Uint32T> LoadTurboshaftWord64RangeTypeFromHigh(TNode<TurboshaftWord64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=50&c=3
  void StoreTurboshaftWord64RangeTypeFromHigh(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=51&c=3
  TNode<Uint32T> LoadTurboshaftWord64RangeTypeFromLow(TNode<TurboshaftWord64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=51&c=3
  void StoreTurboshaftWord64RangeTypeFromLow(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=52&c=3
  TNode<Uint32T> LoadTurboshaftWord64RangeTypeToHigh(TNode<TurboshaftWord64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=52&c=3
  void StoreTurboshaftWord64RangeTypeToHigh(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=53&c=3
  TNode<Uint32T> LoadTurboshaftWord64RangeTypeToLow(TNode<TurboshaftWord64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=53&c=3
  void StoreTurboshaftWord64RangeTypeToLow(TNode<TurboshaftWord64RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=60&c=9
  TNode<Uint32T> LoadTurboshaftWord64SetTypeSetSize(TNode<TurboshaftWord64SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=61&c=3
  TorqueStructSlice_uint32_MutableReference_uint32_0 FieldSliceTurboshaftWord64SetTypeElementsHigh(TNode<TurboshaftWord64SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=61&c=3
  TNode<Uint32T> LoadTurboshaftWord64SetTypeElementsHigh(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=61&c=3
  void StoreTurboshaftWord64SetTypeElementsHigh(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=62&c=3
  TorqueStructSlice_uint32_MutableReference_uint32_0 FieldSliceTurboshaftWord64SetTypeElementsLow(TNode<TurboshaftWord64SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=62&c=3
  TNode<Uint32T> LoadTurboshaftWord64SetTypeElementsLow(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=62&c=3
  void StoreTurboshaftWord64SetTypeElementsLow(TNode<TurboshaftWord64SetType> p_o, TNode<IntPtrT> p_i, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=69&c=3
  TNode<Uint32T> LoadTurboshaftFloat64TypeSpecialValues(TNode<TurboshaftFloat64Type> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=69&c=3
  void StoreTurboshaftFloat64TypeSpecialValues(TNode<TurboshaftFloat64Type> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=76&c=3
  TNode<Uint32T> LoadTurboshaftFloat64RangeTypePadding(TNode<TurboshaftFloat64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=76&c=3
  void StoreTurboshaftFloat64RangeTypePadding(TNode<TurboshaftFloat64RangeType> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=77&c=3
  TNode<Float64T> LoadTurboshaftFloat64RangeTypeMin(TNode<TurboshaftFloat64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=77&c=3
  void StoreTurboshaftFloat64RangeTypeMin(TNode<TurboshaftFloat64RangeType> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=78&c=3
  TNode<Float64T> LoadTurboshaftFloat64RangeTypeMax(TNode<TurboshaftFloat64RangeType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=78&c=3
  void StoreTurboshaftFloat64RangeTypeMax(TNode<TurboshaftFloat64RangeType> p_o, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=85&c=9
  TNode<Uint32T> LoadTurboshaftFloat64SetTypeSetSize(TNode<TurboshaftFloat64SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=86&c=3
  TorqueStructSlice_float64_MutableReference_float64_0 FieldSliceTurboshaftFloat64SetTypeElements(TNode<TurboshaftFloat64SetType> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=86&c=3
  TNode<Float64T> LoadTurboshaftFloat64SetTypeElements(TNode<TurboshaftFloat64SetType> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/turboshaft-types.tq?l=86&c=3
  void StoreTurboshaftFloat64SetTypeElements(TNode<TurboshaftFloat64SetType> p_o, TNode<IntPtrT> p_i, TNode<Float64T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
  TNode<Smi> LoadInternalClassA(TNode<InternalClass> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=765&c=3
  void StoreInternalClassA(TNode<InternalClass> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
  TNode<Number> LoadInternalClassB(TNode<InternalClass> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=766&c=3
  void StoreInternalClassB(TNode<InternalClass> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
  TNode<Smi> LoadSmiPairA(TNode<SmiPair> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=3
  void StoreSmiPairA(TNode<SmiPair> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
  TNode<Smi> LoadSmiPairB(TNode<SmiPair> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
  void StoreSmiPairB(TNode<SmiPair> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
  TNode<Smi> LoadSmiBoxValue(TNode<SmiBox> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=927&c=3
  void StoreSmiBoxValue(TNode<SmiBox> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
  TNode<Smi> LoadSmiBoxUnrelated(TNode<SmiBox> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=928&c=3
  void StoreSmiBoxUnrelated(TNode<SmiBox> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
  TNode<HeapObject> LoadExportedSubClassBaseA(TNode<ExportedSubClassBase> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1179&c=3
  void StoreExportedSubClassBaseA(TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
  TNode<HeapObject> LoadExportedSubClassBaseB(TNode<ExportedSubClassBase> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1180&c=3
  void StoreExportedSubClassBaseB(TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
  TNode<Int32T> LoadExportedSubClassCField(TNode<ExportedSubClass> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1172&c=3
  void StoreExportedSubClassCField(TNode<ExportedSubClass> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
  TNode<Int32T> LoadExportedSubClassDField(TNode<ExportedSubClass> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1173&c=3
  void StoreExportedSubClassDField(TNode<ExportedSubClass> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
  TNode<Smi> LoadExportedSubClassEField(TNode<ExportedSubClass> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=3
  void StoreExportedSubClassEField(TNode<ExportedSubClass> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1196&c=3
  TNode<Int32T> LoadInternalClassWithStructElementsDummy1(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1196&c=3
  void StoreInternalClassWithStructElementsDummy1(TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1197&c=3
  TNode<Int32T> LoadInternalClassWithStructElementsDummy2(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1197&c=3
  void StoreInternalClassWithStructElementsDummy2(TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1198&c=9
  TNode<Smi> LoadInternalClassWithStructElementsCount(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1199&c=3
  TNode<Smi> LoadInternalClassWithStructElementsData(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1199&c=3
  void StoreInternalClassWithStructElementsData(TNode<InternalClassWithStructElements> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1200&c=3
  TNode<Object> LoadInternalClassWithStructElementsObject(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1200&c=3
  void StoreInternalClassWithStructElementsObject(TNode<InternalClassWithStructElements> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
  TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
  TNode<Smi> LoadInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
  void StoreInternalClassWithStructElementsEntries(TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=3
  TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 FieldSliceInternalClassWithStructElementsMoreEntries(TNode<InternalClassWithStructElements> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1214&c=3
  TNode<Int32T> LoadExportedSubClass2XField(TNode<ExportedSubClass2> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1214&c=3
  void StoreExportedSubClass2XField(TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1215&c=3
  TNode<Int32T> LoadExportedSubClass2YField(TNode<ExportedSubClass2> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1215&c=3
  void StoreExportedSubClass2YField(TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1216&c=3
  TNode<Smi> LoadExportedSubClass2ZField(TNode<ExportedSubClass2> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1216&c=3
  void StoreExportedSubClass2ZField(TNode<ExportedSubClass2> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=47&c=3
  TNode<JSReceiver> LoadSortStateReceiver(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=47&c=3
  void StoreSortStateReceiver(TNode<SortState> p_o, TNode<JSReceiver> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
  TNode<Map> LoadSortStateInitialReceiverMap(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=52&c=3
  void StoreSortStateInitialReceiverMap(TNode<SortState> p_o, TNode<Map> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=53&c=3
  TNode<Number> LoadSortStateInitialReceiverLength(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=53&c=3
  void StoreSortStateInitialReceiverLength(TNode<SortState> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=56&c=3
  TNode<HeapObject> LoadSortStateUserCmpFn(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=56&c=3
  void StoreSortStateUserCmpFn(TNode<SortState> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=61&c=3
  TNode<BuiltinPtr> LoadSortStateSortComparePtr(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=61&c=3
  void StoreSortStateSortComparePtr(TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=66&c=3
  TNode<BuiltinPtr> LoadSortStateLoadFn(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=66&c=3
  void StoreSortStateLoadFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=67&c=3
  TNode<BuiltinPtr> LoadSortStateStoreFn(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=67&c=3
  void StoreSortStateStoreFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=68&c=3
  TNode<BuiltinPtr> LoadSortStateDeleteFn(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=68&c=3
  void StoreSortStateDeleteFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=69&c=3
  TNode<BuiltinPtr> LoadSortStateCanUseSameAccessorFn(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=69&c=3
  void StoreSortStateCanUseSameAccessorFn(TNode<SortState> p_o, TNode<BuiltinPtr> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=74&c=3
  TNode<Smi> LoadSortStateMinGallop(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=74&c=3
  void StoreSortStateMinGallop(TNode<SortState> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=86&c=3
  TNode<Smi> LoadSortStatePendingRunsSize(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=86&c=3
  void StoreSortStatePendingRunsSize(TNode<SortState> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=87&c=3
  TNode<FixedArray> LoadSortStatePendingRuns(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=87&c=3
  void StoreSortStatePendingRuns(TNode<SortState> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=92&c=3
  TNode<FixedArray> LoadSortStateWorkArray(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=92&c=3
  void StoreSortStateWorkArray(TNode<SortState> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=95&c=3
  TNode<FixedArray> LoadSortStateTempArray(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=95&c=3
  void StoreSortStateTempArray(TNode<SortState> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
  TNode<Smi> LoadSortStateSortLength(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=98&c=3
  void StoreSortStateSortLength(TNode<SortState> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=102&c=3
  TNode<Smi> LoadSortStateNumberOfUndefined(TNode<SortState> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/third_party/v8/builtins/array-sort.tq?l=102&c=3
  void StoreSortStateNumberOfUndefined(TNode<SortState> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
  TNode<String> LoadJSV8BreakIteratorLocale(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=8&c=3
  void StoreJSV8BreakIteratorLocale(TNode<JSV8BreakIterator> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
  TNode<Foreign> LoadJSV8BreakIteratorBreakIterator(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=9&c=3
  void StoreJSV8BreakIteratorBreakIterator(TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
  TNode<Foreign> LoadJSV8BreakIteratorUnicodeString(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=10&c=3
  void StoreJSV8BreakIteratorUnicodeString(TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
  TNode<HeapObject> LoadJSV8BreakIteratorBoundAdoptText(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=11&c=3
  void StoreJSV8BreakIteratorBoundAdoptText(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
  TNode<HeapObject> LoadJSV8BreakIteratorBoundFirst(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=12&c=3
  void StoreJSV8BreakIteratorBoundFirst(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
  TNode<HeapObject> LoadJSV8BreakIteratorBoundNext(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=13&c=3
  void StoreJSV8BreakIteratorBoundNext(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
  TNode<HeapObject> LoadJSV8BreakIteratorBoundCurrent(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=14&c=3
  void StoreJSV8BreakIteratorBoundCurrent(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
  TNode<HeapObject> LoadJSV8BreakIteratorBoundBreakType(TNode<JSV8BreakIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-break-iterator.tq?l=15&c=3
  void StoreJSV8BreakIteratorBoundBreakType(TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
  TNode<Foreign> LoadJSCollatorIcuCollator(TNode<JSCollator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=8&c=3
  void StoreJSCollatorIcuCollator(TNode<JSCollator> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
  TNode<HeapObject> LoadJSCollatorBoundCompare(TNode<JSCollator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=9&c=3
  void StoreJSCollatorBoundCompare(TNode<JSCollator> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
  TNode<String> LoadJSCollatorLocale(TNode<JSCollator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-collator.tq?l=10&c=3
  void StoreJSCollatorLocale(TNode<JSCollator> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=17&c=3
  TNode<String> LoadJSDateTimeFormatLocale(TNode<JSDateTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=17&c=3
  void StoreJSDateTimeFormatLocale(TNode<JSDateTimeFormat> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=18&c=3
  TNode<Foreign> LoadJSDateTimeFormatIcuLocale(TNode<JSDateTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=18&c=3
  void StoreJSDateTimeFormatIcuLocale(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=19&c=3
  TNode<Foreign> LoadJSDateTimeFormatIcuSimpleDateFormat(TNode<JSDateTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=19&c=3
  void StoreJSDateTimeFormatIcuSimpleDateFormat(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=20&c=3
  TNode<Foreign> LoadJSDateTimeFormatIcuDateIntervalFormat(TNode<JSDateTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=20&c=3
  void StoreJSDateTimeFormatIcuDateIntervalFormat(TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=21&c=3
  TNode<HeapObject> LoadJSDateTimeFormatBoundFormat(TNode<JSDateTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=21&c=3
  void StoreJSDateTimeFormatBoundFormat(TNode<JSDateTimeFormat> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=22&c=3
  TNode<Smi> LoadJSDateTimeFormatFlags(TNode<JSDateTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-date-time-format.tq?l=22&c=3
  void StoreJSDateTimeFormatFlags(TNode<JSDateTimeFormat> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
  TNode<Foreign> LoadJSDisplayNamesInternal(TNode<JSDisplayNames> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=19&c=3
  void StoreJSDisplayNamesInternal(TNode<JSDisplayNames> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
  TNode<Smi> LoadJSDisplayNamesFlags(TNode<JSDisplayNames> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-display-names.tq?l=20&c=3
  void StoreJSDisplayNamesFlags(TNode<JSDisplayNames> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=44&c=3
  TNode<Smi> LoadJSDurationFormatStyleFlags(TNode<JSDurationFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=44&c=3
  void StoreJSDurationFormatStyleFlags(TNode<JSDurationFormat> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=45&c=3
  TNode<Smi> LoadJSDurationFormatDisplayFlags(TNode<JSDurationFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=45&c=3
  void StoreJSDurationFormatDisplayFlags(TNode<JSDurationFormat> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=46&c=3
  TNode<Foreign> LoadJSDurationFormatIcuLocale(TNode<JSDurationFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=46&c=3
  void StoreJSDurationFormatIcuLocale(TNode<JSDurationFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=47&c=3
  TNode<Foreign> LoadJSDurationFormatIcuNumberFormatter(TNode<JSDurationFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-duration-format.tq?l=47&c=3
  void StoreJSDurationFormatIcuNumberFormatter(TNode<JSDurationFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
  TNode<String> LoadJSListFormatLocale(TNode<JSListFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=15&c=3
  void StoreJSListFormatLocale(TNode<JSListFormat> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
  TNode<Foreign> LoadJSListFormatIcuFormatter(TNode<JSListFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=16&c=3
  void StoreJSListFormatIcuFormatter(TNode<JSListFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
  TNode<Smi> LoadJSListFormatFlags(TNode<JSListFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-list-format.tq?l=17&c=3
  void StoreJSListFormatFlags(TNode<JSListFormat> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
  TNode<Foreign> LoadJSLocaleIcuLocale(TNode<JSLocale> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-locale.tq?l=8&c=3
  void StoreJSLocaleIcuLocale(TNode<JSLocale> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
  TNode<String> LoadJSNumberFormatLocale(TNode<JSNumberFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=8&c=3
  void StoreJSNumberFormatLocale(TNode<JSNumberFormat> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
  TNode<Foreign> LoadJSNumberFormatIcuNumberFormatter(TNode<JSNumberFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=9&c=3
  void StoreJSNumberFormatIcuNumberFormatter(TNode<JSNumberFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
  TNode<HeapObject> LoadJSNumberFormatBoundFormat(TNode<JSNumberFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-number-format.tq?l=11&c=3
  void StoreJSNumberFormatBoundFormat(TNode<JSNumberFormat> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
  TNode<String> LoadJSPluralRulesLocale(TNode<JSPluralRules> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=13&c=3
  void StoreJSPluralRulesLocale(TNode<JSPluralRules> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
  TNode<Smi> LoadJSPluralRulesFlags(TNode<JSPluralRules> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=14&c=3
  void StoreJSPluralRulesFlags(TNode<JSPluralRules> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
  TNode<Foreign> LoadJSPluralRulesIcuPluralRules(TNode<JSPluralRules> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=15&c=3
  void StoreJSPluralRulesIcuPluralRules(TNode<JSPluralRules> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
  TNode<Foreign> LoadJSPluralRulesIcuNumberFormatter(TNode<JSPluralRules> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-plural-rules.tq?l=16&c=3
  void StoreJSPluralRulesIcuNumberFormatter(TNode<JSPluralRules> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
  TNode<String> LoadJSRelativeTimeFormatLocale(TNode<JSRelativeTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=14&c=3
  void StoreJSRelativeTimeFormatLocale(TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
  TNode<String> LoadJSRelativeTimeFormatNumberingSystem(TNode<JSRelativeTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=15&c=3
  void StoreJSRelativeTimeFormatNumberingSystem(TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
  TNode<Foreign> LoadJSRelativeTimeFormatIcuFormatter(TNode<JSRelativeTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=16&c=3
  void StoreJSRelativeTimeFormatIcuFormatter(TNode<JSRelativeTimeFormat> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
  TNode<Smi> LoadJSRelativeTimeFormatFlags(TNode<JSRelativeTimeFormat> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-relative-time-format.tq?l=17&c=3
  void StoreJSRelativeTimeFormatFlags(TNode<JSRelativeTimeFormat> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
  TNode<Foreign> LoadJSSegmentIteratorIcuBreakIterator(TNode<JSSegmentIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=12&c=3
  void StoreJSSegmentIteratorIcuBreakIterator(TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
  TNode<String> LoadJSSegmentIteratorRawString(TNode<JSSegmentIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=13&c=3
  void StoreJSSegmentIteratorRawString(TNode<JSSegmentIterator> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
  TNode<Foreign> LoadJSSegmentIteratorUnicodeString(TNode<JSSegmentIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=14&c=3
  void StoreJSSegmentIteratorUnicodeString(TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=15&c=3
  TNode<Smi> LoadJSSegmentIteratorFlags(TNode<JSSegmentIterator> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=15&c=3
  void StoreJSSegmentIteratorFlags(TNode<JSSegmentIterator> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=21&c=3
  TNode<String> LoadJSSegmentDataObjectSegment(TNode<JSSegmentDataObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=21&c=3
  void StoreJSSegmentDataObjectSegment(TNode<JSSegmentDataObject> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=22&c=3
  TNode<Number> LoadJSSegmentDataObjectIndex(TNode<JSSegmentDataObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=22&c=3
  void StoreJSSegmentDataObjectIndex(TNode<JSSegmentDataObject> p_o, TNode<Number> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=23&c=3
  TNode<String> LoadJSSegmentDataObjectInput(TNode<JSSegmentDataObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=23&c=3
  void StoreJSSegmentDataObjectInput(TNode<JSSegmentDataObject> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=29&c=3
  TNode<Boolean> LoadJSSegmentDataObjectWithIsWordLikeIsWordLike(TNode<JSSegmentDataObjectWithIsWordLike> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segment-iterator.tq?l=29&c=3
  void StoreJSSegmentDataObjectWithIsWordLikeIsWordLike(TNode<JSSegmentDataObjectWithIsWordLike> p_o, TNode<Boolean> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
  TNode<String> LoadJSSegmenterLocale(TNode<JSSegmenter> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=14&c=3
  void StoreJSSegmenterLocale(TNode<JSSegmenter> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
  TNode<Foreign> LoadJSSegmenterIcuBreakIterator(TNode<JSSegmenter> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=15&c=3
  void StoreJSSegmenterIcuBreakIterator(TNode<JSSegmenter> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
  TNode<Smi> LoadJSSegmenterFlags(TNode<JSSegmenter> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segmenter.tq?l=16&c=3
  void StoreJSSegmenterFlags(TNode<JSSegmenter> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
  TNode<Foreign> LoadJSSegmentsIcuBreakIterator(TNode<JSSegments> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=12&c=3
  void StoreJSSegmentsIcuBreakIterator(TNode<JSSegments> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
  TNode<String> LoadJSSegmentsRawString(TNode<JSSegments> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=13&c=3
  void StoreJSSegmentsRawString(TNode<JSSegments> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
  TNode<Foreign> LoadJSSegmentsUnicodeString(TNode<JSSegments> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=14&c=3
  void StoreJSSegmentsUnicodeString(TNode<JSSegments> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=15&c=3
  TNode<Smi> LoadJSSegmentsFlags(TNode<JSSegments> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/objects/js-segments.tq?l=15&c=3
  void StoreJSSegmentsFlags(TNode<JSSegments> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=32&c=3
  TNode<MaybeObject> LoadWasmImportDataProtectedInstanceData(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=32&c=3
  void StoreWasmImportDataProtectedInstanceData(TNode<WasmImportData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=33&c=3
  TNode<NativeContext> LoadWasmImportDataNativeContext(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=33&c=3
  void StoreWasmImportDataNativeContext(TNode<WasmImportData> p_o, TNode<NativeContext> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=34&c=3
  TNode<HeapObject> LoadWasmImportDataCallable(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=34&c=3
  void StoreWasmImportDataCallable(TNode<WasmImportData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=35&c=3
  TNode<Smi> LoadWasmImportDataSuspend(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=35&c=3
  void StoreWasmImportDataSuspend(TNode<WasmImportData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=36&c=3
  TNode<Smi> LoadWasmImportDataWrapperBudget(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=36&c=3
  void StoreWasmImportDataWrapperBudget(TNode<WasmImportData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=37&c=3
  TNode<Object> LoadWasmImportDataCallOrigin(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=37&c=3
  void StoreWasmImportDataCallOrigin(TNode<WasmImportData> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=39&c=3
  TNode<ByteArray> LoadWasmImportDataSig(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=39&c=3
  void StoreWasmImportDataSig(TNode<WasmImportData> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=41&c=3
  TNode<TrustedPointerT> LoadWasmImportDataCode(TNode<WasmImportData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=41&c=3
  void StoreWasmImportDataCode(TNode<WasmImportData> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  TNode<TrustedPointerT> LoadWasmInstanceObjectTrustedData(TNode<WasmInstanceObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=21&c=3
  void StoreWasmInstanceObjectTrustedData(TNode<WasmInstanceObject> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  TNode<WasmModuleObject> LoadWasmInstanceObjectModuleObject(TNode<WasmInstanceObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=22&c=3
  void StoreWasmInstanceObjectModuleObject(TNode<WasmInstanceObject> p_o, TNode<WasmModuleObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
  TNode<JSObject> LoadWasmInstanceObjectExportsObject(TNode<WasmInstanceObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=23&c=3
  void StoreWasmInstanceObjectExportsObject(TNode<WasmInstanceObject> p_o, TNode<JSObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
  TNode<HeapObject> LoadWasmFastApiCallDataSignature(TNode<WasmFastApiCallData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=48&c=3
  void StoreWasmFastApiCallDataSignature(TNode<WasmFastApiCallData> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=49&c=3
  TNode<Object> LoadWasmFastApiCallDataCallbackData(TNode<WasmFastApiCallData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=49&c=3
  void StoreWasmFastApiCallDataCallbackData(TNode<WasmFastApiCallData> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=3
  TNode<MaybeObject> LoadWasmFastApiCallDataCachedMap(TNode<WasmFastApiCallData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=50&c=3
  void StoreWasmFastApiCallDataCachedMap(TNode<WasmFastApiCallData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=62&c=3
  TNode<MaybeObject> LoadWasmInternalFunctionProtectedImplicitArg(TNode<WasmInternalFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=62&c=3
  void StoreWasmInternalFunctionProtectedImplicitArg(TNode<WasmInternalFunction> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=3
  TNode<HeapObject> LoadWasmInternalFunctionExternal(TNode<WasmInternalFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=65&c=3
  void StoreWasmInternalFunctionExternal(TNode<WasmInternalFunction> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=68&c=3
  TNode<Smi> LoadWasmInternalFunctionFunctionIndex(TNode<WasmInternalFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=68&c=3
  void StoreWasmInternalFunctionFunctionIndex(TNode<WasmInternalFunction> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
  TNode<RawPtrT> LoadWasmInternalFunctionCallTarget(TNode<WasmInternalFunction> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=70&c=3
  void StoreWasmInternalFunctionCallTarget(TNode<WasmInternalFunction> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  TNode<TrustedPointerT> LoadWasmFunctionDataWrapperCode(TNode<WasmFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=94&c=3
  void StoreWasmFunctionDataWrapperCode(TNode<WasmFunctionData> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=3
  TNode<WasmFuncRef> LoadWasmFunctionDataFuncRef(TNode<WasmFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=97&c=3
  void StoreWasmFunctionDataFuncRef(TNode<WasmFunctionData> p_o, TNode<WasmFuncRef> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
  TNode<Smi> LoadWasmFunctionDataJsPromiseFlags(TNode<WasmFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=99&c=3
  void StoreWasmFunctionDataJsPromiseFlags(TNode<WasmFunctionData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=3
  TNode<MaybeObject> LoadWasmFunctionDataProtectedInternal(TNode<WasmFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=102&c=3
  void StoreWasmFunctionDataProtectedInternal(TNode<WasmFunctionData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=112&c=3
  TNode<MaybeObject> LoadWasmExportedFunctionDataProtectedInstanceData(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=112&c=3
  void StoreWasmExportedFunctionDataProtectedInstanceData(TNode<WasmExportedFunctionData> p_o, TNode<MaybeObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=113&c=3
  TNode<Smi> LoadWasmExportedFunctionDataFunctionIndex(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=113&c=3
  void StoreWasmExportedFunctionDataFunctionIndex(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=115&c=3
  TNode<Cell> LoadWasmExportedFunctionDataWrapperBudget(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=115&c=3
  void StoreWasmExportedFunctionDataWrapperBudget(TNode<WasmExportedFunctionData> p_o, TNode<Cell> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
  TNode<Smi> LoadWasmExportedFunctionDataCanonicalTypeIndex(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=116&c=3
  void StoreWasmExportedFunctionDataCanonicalTypeIndex(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=3
  TNode<Smi> LoadWasmExportedFunctionDataPackedArgsSize(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=121&c=3
  void StoreWasmExportedFunctionDataPackedArgsSize(TNode<WasmExportedFunctionData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=122&c=3
  TNode<TrustedPointerT> LoadWasmExportedFunctionDataCWrapperCode(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=122&c=3
  void StoreWasmExportedFunctionDataCWrapperCode(TNode<WasmExportedFunctionData> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=124&c=3
  TNode<RawPtrT> LoadWasmExportedFunctionDataSig(TNode<WasmExportedFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=124&c=3
  void StoreWasmExportedFunctionDataSig(TNode<WasmExportedFunctionData> p_o, TNode<RawPtrT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  TNode<Smi> LoadWasmJSFunctionDataCanonicalSigIndex(TNode<WasmJSFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=132&c=3
  void StoreWasmJSFunctionDataCanonicalSigIndex(TNode<WasmJSFunctionData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=136&c=3
  TNode<Foreign> LoadWasmCapiFunctionDataEmbedderData(TNode<WasmCapiFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=136&c=3
  void StoreWasmCapiFunctionDataEmbedderData(TNode<WasmCapiFunctionData> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=137&c=3
  TNode<ByteArray> LoadWasmCapiFunctionDataSerializedSignature(TNode<WasmCapiFunctionData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=137&c=3
  void StoreWasmCapiFunctionDataSerializedSignature(TNode<WasmCapiFunctionData> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
  TNode<WasmSuspenderObject> LoadWasmResumeDataSuspender(TNode<WasmResumeData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=141&c=3
  void StoreWasmResumeDataSuspender(TNode<WasmResumeData> p_o, TNode<WasmSuspenderObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=142&c=3
  TNode<Smi> LoadWasmResumeDataOnResume(TNode<WasmResumeData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=142&c=3
  void StoreWasmResumeDataOnResume(TNode<WasmResumeData> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
  TNode<HeapObject> LoadWasmContinuationObjectParent(TNode<WasmContinuationObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=146&c=3
  void StoreWasmContinuationObjectParent(TNode<WasmContinuationObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=147&c=3
  TNode<ExternalPointerT> LoadWasmContinuationObjectStack(TNode<WasmContinuationObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=147&c=3
  void StoreWasmContinuationObjectStack(TNode<WasmContinuationObject> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=148&c=3
  TNode<ExternalPointerT> LoadWasmContinuationObjectJmpbuf(TNode<WasmContinuationObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=148&c=3
  void StoreWasmContinuationObjectJmpbuf(TNode<WasmContinuationObject> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  TNode<HeapObject> LoadWasmSuspenderObjectContinuation(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=152&c=3
  void StoreWasmSuspenderObjectContinuation(TNode<WasmSuspenderObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  TNode<HeapObject> LoadWasmSuspenderObjectParent(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=153&c=3
  void StoreWasmSuspenderObjectParent(TNode<WasmSuspenderObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=154&c=3
  TNode<JSPromise> LoadWasmSuspenderObjectPromise(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=154&c=3
  void StoreWasmSuspenderObjectPromise(TNode<WasmSuspenderObject> p_o, TNode<JSPromise> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=155&c=3
  TNode<HeapObject> LoadWasmSuspenderObjectResume(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=155&c=3
  void StoreWasmSuspenderObjectResume(TNode<WasmSuspenderObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
  TNode<HeapObject> LoadWasmSuspenderObjectReject(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=156&c=3
  void StoreWasmSuspenderObjectReject(TNode<WasmSuspenderObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
  TNode<Smi> LoadWasmSuspenderObjectState(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=157&c=3
  void StoreWasmSuspenderObjectState(TNode<WasmSuspenderObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
  TNode<Smi> LoadWasmSuspenderObjectHasJsFrames(TNode<WasmSuspenderObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=161&c=3
  void StoreWasmSuspenderObjectHasJsFrames(TNode<WasmSuspenderObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
  TNode<Smi> LoadWasmExceptionTagIndex(TNode<WasmExceptionTag> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=168&c=3
  void StoreWasmExceptionTagIndex(TNode<WasmExceptionTag> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  TNode<Foreign> LoadWasmModuleObjectManagedNativeModule(TNode<WasmModuleObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=174&c=3
  void StoreWasmModuleObjectManagedNativeModule(TNode<WasmModuleObject> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
  TNode<Script> LoadWasmModuleObjectScript(TNode<WasmModuleObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=175&c=3
  void StoreWasmModuleObjectScript(TNode<WasmModuleObject> p_o, TNode<Script> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=3
  TNode<FixedArray> LoadWasmTableObjectEntries(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=189&c=3
  void StoreWasmTableObjectEntries(TNode<WasmTableObject> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=190&c=3
  TNode<Smi> LoadWasmTableObjectCurrentLength(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=190&c=3
  void StoreWasmTableObjectCurrentLength(TNode<WasmTableObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=191&c=3
  TNode<Object> LoadWasmTableObjectMaximumLength(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=191&c=3
  void StoreWasmTableObjectMaximumLength(TNode<WasmTableObject> p_o, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=194&c=3
  TNode<FixedArray> LoadWasmTableObjectUses(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=194&c=3
  void StoreWasmTableObjectUses(TNode<WasmTableObject> p_o, TNode<FixedArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
  TNode<Smi> LoadWasmTableObjectRawType(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=195&c=3
  void StoreWasmTableObjectRawType(TNode<WasmTableObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=196&c=3
  TNode<Smi> LoadWasmTableObjectIsTable64(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=196&c=3
  void StoreWasmTableObjectIsTable64(TNode<WasmTableObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=200&c=3
  TNode<TrustedPointerT> LoadWasmTableObjectTrustedData(TNode<WasmTableObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=200&c=3
  void StoreWasmTableObjectTrustedData(TNode<WasmTableObject> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=204&c=3
  TNode<JSArrayBuffer> LoadWasmMemoryObjectArrayBuffer(TNode<WasmMemoryObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=204&c=3
  void StoreWasmMemoryObjectArrayBuffer(TNode<WasmMemoryObject> p_o, TNode<JSArrayBuffer> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=205&c=3
  TNode<Smi> LoadWasmMemoryObjectMaximumPages(TNode<WasmMemoryObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=205&c=3
  void StoreWasmMemoryObjectMaximumPages(TNode<WasmMemoryObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=206&c=3
  TNode<Smi> LoadWasmMemoryObjectIsMemory64(TNode<WasmMemoryObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=206&c=3
  void StoreWasmMemoryObjectIsMemory64(TNode<WasmMemoryObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
  TNode<WeakArrayList> LoadWasmMemoryObjectInstances(TNode<WasmMemoryObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=207&c=3
  void StoreWasmMemoryObjectInstances(TNode<WasmMemoryObject> p_o, TNode<WeakArrayList> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=214&c=3
  TNode<TrustedPointerT> LoadWasmGlobalObjectTrustedData(TNode<WasmGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=214&c=3
  void StoreWasmGlobalObjectTrustedData(TNode<WasmGlobalObject> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=3
  TNode<HeapObject> LoadWasmGlobalObjectUntaggedBuffer(TNode<WasmGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=215&c=3
  void StoreWasmGlobalObjectUntaggedBuffer(TNode<WasmGlobalObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=216&c=3
  TNode<HeapObject> LoadWasmGlobalObjectTaggedBuffer(TNode<WasmGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=216&c=3
  void StoreWasmGlobalObjectTaggedBuffer(TNode<WasmGlobalObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=217&c=3
  TNode<Smi> LoadWasmGlobalObjectOffset(TNode<WasmGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=217&c=3
  void StoreWasmGlobalObjectOffset(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=218&c=3
  TNode<Smi> LoadWasmGlobalObjectRawType(TNode<WasmGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=218&c=3
  void StoreWasmGlobalObjectRawType(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=221&c=3
  TNode<Smi> LoadWasmGlobalObjectIsMutable(TNode<WasmGlobalObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=221&c=3
  void StoreWasmGlobalObjectIsMutable(TNode<WasmGlobalObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=225&c=3
  TNode<ByteArray> LoadWasmTagObjectSerializedSignature(TNode<WasmTagObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=225&c=3
  void StoreWasmTagObjectSerializedSignature(TNode<WasmTagObject> p_o, TNode<ByteArray> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=226&c=3
  TNode<HeapObject> LoadWasmTagObjectTag(TNode<WasmTagObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=226&c=3
  void StoreWasmTagObjectTag(TNode<WasmTagObject> p_o, TNode<HeapObject> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=227&c=3
  TNode<Smi> LoadWasmTagObjectCanonicalTypeIndex(TNode<WasmTagObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=227&c=3
  void StoreWasmTagObjectCanonicalTypeIndex(TNode<WasmTagObject> p_o, TNode<Smi> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=228&c=3
  TNode<TrustedPointerT> LoadWasmTagObjectTrustedData(TNode<WasmTagObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=228&c=3
  void StoreWasmTagObjectTrustedData(TNode<WasmTagObject> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=234&c=3
  TNode<Foreign> LoadAsmWasmDataManagedNativeModule(TNode<AsmWasmData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=234&c=3
  void StoreAsmWasmDataManagedNativeModule(TNode<AsmWasmData> p_o, TNode<Foreign> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=235&c=3
  TNode<HeapNumber> LoadAsmWasmDataUsesBitset(TNode<AsmWasmData> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=235&c=3
  void StoreAsmWasmDataUsesBitset(TNode<AsmWasmData> p_o, TNode<HeapNumber> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=247&c=3
  TNode<ExternalPointerT> LoadWasmTypeInfoNativeType(TNode<WasmTypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=247&c=3
  void StoreWasmTypeInfoNativeType(TNode<WasmTypeInfo> p_o, TNode<ExternalPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=248&c=3
  TNode<Uint32T> LoadWasmTypeInfoTypeIndex(TNode<WasmTypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=248&c=3
  void StoreWasmTypeInfoTypeIndex(TNode<WasmTypeInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=249&c=28
  TNode<Uint32T> LoadWasmTypeInfoOptionalPadding(TNode<WasmTypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=249&c=28
  void StoreWasmTypeInfoOptionalPadding(TNode<WasmTypeInfo> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=252&c=3
  TNode<TrustedPointerT> LoadWasmTypeInfoTrustedData(TNode<WasmTypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=252&c=3
  void StoreWasmTypeInfoTrustedData(TNode<WasmTypeInfo> p_o, TNode<TrustedPointerT> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=253&c=9
  TNode<Smi> LoadWasmTypeInfoSupertypesLength(TNode<WasmTypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=254&c=3
  TorqueStructSlice_Object_MutableReference_Object_0 FieldSliceWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=254&c=3
  TNode<Object> LoadWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o, TNode<IntPtrT> p_i);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=254&c=3
  void StoreWasmTypeInfoSupertypes(TNode<WasmTypeInfo> p_o, TNode<IntPtrT> p_i, TNode<Object> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=269&c=3
  TNode<Uint32T> LoadWasmArrayLength(TNode<WasmArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=269&c=3
  void StoreWasmArrayLength(TNode<WasmArray> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=271&c=28
  TNode<Uint32T> LoadWasmArrayOptionalPadding(TNode<WasmArray> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=271&c=28
  void StoreWasmArrayOptionalPadding(TNode<WasmArray> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=276&c=3
  TNode<String> LoadWasmStringViewIterString(TNode<WasmStringViewIter> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=276&c=3
  void StoreWasmStringViewIterString(TNode<WasmStringViewIter> p_o, TNode<String> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=277&c=3
  TNode<Uint32T> LoadWasmStringViewIterOffset(TNode<WasmStringViewIter> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=277&c=3
  void StoreWasmStringViewIterOffset(TNode<WasmStringViewIter> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=279&c=28
  TNode<Uint32T> LoadWasmStringViewIterOptionalPadding(TNode<WasmStringViewIter> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=279&c=28
  void StoreWasmStringViewIterOptionalPadding(TNode<WasmStringViewIter> p_o, TNode<Uint32T> p_v);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=289&c=3
  TNode<JSReceiver> LoadWasmSuspendingObjectCallable(TNode<WasmSuspendingObject> p_o);
  // https://source.chromium.org/chromium/chromium/src/+/main:v8/src/wasm/wasm-objects.tq?l=289&c=3
  void StoreWasmSuspendingObjectCallable(TNode<WasmSuspendingObject> p_o, TNode<JSReceiver> p_v);
 private:
  compiler::CodeAssemblerState* state_;
};
}  // namespace internal
}  // namespace v8
#endif  // V8_GEN_TORQUE_GENERATED_EXPORTED_MACROS_ASSEMBLER_H_
