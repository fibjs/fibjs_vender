#ifndef V8_GEN_TORQUE_GENERATED_BUILTIN_DEFINITIONS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_BUILTIN_DEFINITIONS_TQ_H_


#define BUILTIN_LIST_FROM_TORQUE(CPP, TFJ, TFC, TFS, TFH, ASM) \
TFJ(ArrayPrototypeCopyWithin, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayEveryLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kThisArg, kInitialK, kLength) \
TFJ(ArrayEveryLoopLazyDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kInitialK, kLength, kResult) \
TFS(ArrayEveryLoopContinuation, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength, kInitialTo) \
TFJ(ArrayEvery, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayFilterLoopEagerDeoptContinuation, 6, kReceiver, kCallback, kThisArg, kArray, kInitialK, kLength, kInitialTo) \
TFJ(ArrayFilterLoopLazyDeoptContinuation, 8, kReceiver, kCallback, kThisArg, kArray, kInitialK, kLength, kValueK, kInitialTo, kResult) \
TFS(ArrayFilterLoopContinuation, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength, kInitialTo) \
TFJ(ArrayFilter, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayFindLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kThisArg, kInitialK, kLength) \
TFJ(ArrayFindLoopLazyDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kInitialK, kLength, kResult) \
TFJ(ArrayFindLoopAfterCallbackLazyDeoptContinuation, 6, kReceiver, kCallback, kThisArg, kInitialK, kLength, kFoundValue, kIsFound) \
TFS(ArrayFindLoopContinuation, kReceiver, kCallbackfn, kThisArg, kO, kInitialK, kLength) \
TFJ(ArrayPrototypeFind, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayFindIndexLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kThisArg, kInitialK, kLength) \
TFJ(ArrayFindIndexLoopLazyDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kInitialK, kLength, kResult) \
TFJ(ArrayFindIndexLoopAfterCallbackLazyDeoptContinuation, 6, kReceiver, kCallback, kThisArg, kInitialK, kLength, kFoundValue, kIsFound) \
TFS(ArrayFindIndexLoopContinuation, kReceiver, kCallbackfn, kThisArg, kO, kInitialK, kLength) \
TFJ(ArrayPrototypeFindIndex, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayForEachLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kThisArg, kInitialK, kLength) \
TFJ(ArrayForEachLoopLazyDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kInitialK, kLength, kResult) \
TFS(ArrayForEachLoopContinuation, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLen, kTo) \
TFJ(ArrayForEach, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(LoadJoinElement20ATDictionaryElements, kReceiver, kK) \
TFS(LoadJoinElement25ATFastSmiOrObjectElements, kReceiver, kK) \
TFS(LoadJoinElement20ATFastDoubleElements, kReceiver, kK) \
TFS(ConvertToLocaleString, kElement, kLocales, kOptions) \
TFS(JoinStackPush, kStack, kReceiver) \
TFS(JoinStackPop, kStack, kReceiver) \
TFJ(ArrayPrototypeJoin, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeToLocaleString, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeToString, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeJoin, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeToLocaleString, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeLastIndexOf, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayMapLoopEagerDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kArray, kInitialK, kLength) \
TFJ(ArrayMapLoopLazyDeoptContinuation, 6, kReceiver, kCallback, kThisArg, kArray, kInitialK, kLength, kResult) \
TFS(ArrayMapLoopContinuation, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength) \
TFJ(ArrayMap, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayOf, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayReduceRightPreLoopEagerDeoptContinuation, 2, kReceiver, kCallback, kLength) \
TFJ(ArrayReduceRightLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kInitialK, kLength, kAccumulator) \
TFJ(ArrayReduceRightLoopLazyDeoptContinuation, 4, kReceiver, kCallback, kInitialK, kLength, kResult) \
TFS(ArrayReduceRightLoopContinuation, kReceiver, kCallbackfn, kInitialAccumulator, kO, kInitialK, kLength) \
TFJ(ArrayReduceRight, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayReducePreLoopEagerDeoptContinuation, 2, kReceiver, kCallback, kLength) \
TFJ(ArrayReduceLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kInitialK, kLength, kAccumulator) \
TFJ(ArrayReduceLoopLazyDeoptContinuation, 4, kReceiver, kCallback, kInitialK, kLength, kResult) \
TFS(ArrayReduceLoopContinuation, kReceiver, kCallbackfn, kInitialAccumulator, kO, kInitialK, kLength) \
TFJ(ArrayReduce, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeReverse, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeShift, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeSlice, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArraySomeLoopEagerDeoptContinuation, 4, kReceiver, kCallback, kThisArg, kInitialK, kLength) \
TFJ(ArraySomeLoopLazyDeoptContinuation, 5, kReceiver, kCallback, kThisArg, kInitialK, kLength, kResult) \
TFS(ArraySomeLoopContinuation, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength, kInitialTo) \
TFJ(ArraySome, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeSplice, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ArrayPrototypeUnshift, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(ToString, kO) \
TFS(FastCreateDataProperty, kReceiver, kKey, kValue) \
TFS(CheckNumberInRange, kValue, kMin, kMax) \
TFS(BigIntAddNoThrow, kX, kY) \
TFS(BigIntAdd, kXNum, kYNum) \
TFS(BigIntUnaryMinus, kBigint) \
TFJ(BooleanConstructor, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetBuffer, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetByteLength, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetByteOffset, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetUint8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetInt8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetUint16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetInt16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetUint32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetInt32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetFloat32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetFloat64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetBigUint64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeGetBigInt64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetUint8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetInt8, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetUint16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetInt16, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetUint32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetInt32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetFloat32, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetFloat64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetBigUint64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(DataViewPrototypeSetBigInt64, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ExtrasUtilsCreatePrivateSymbol, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ExtrasUtilsMarkPromiseAsHandled, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ExtrasUtilsPromiseState, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(IncBlockCounter, kFunction, kCoverageArraySlotIndex) \
TFS(GetIteratorWithFeedback, kReceiver, kFeedbackSlot, kFeedback) \
TFJ(MathAcos, 1, kReceiver, kX) \
TFJ(MathAcosh, 1, kReceiver, kX) \
TFJ(MathAsin, 1, kReceiver, kX) \
TFJ(MathAsinh, 1, kReceiver, kX) \
TFJ(MathAtan, 1, kReceiver, kX) \
TFJ(MathAtan2, 2, kReceiver, kY, kX) \
TFJ(MathAtanh, 1, kReceiver, kX) \
TFJ(MathCbrt, 1, kReceiver, kX) \
TFJ(MathClz32, 1, kReceiver, kX) \
TFJ(MathCos, 1, kReceiver, kX) \
TFJ(MathCosh, 1, kReceiver, kX) \
TFJ(MathExp, 1, kReceiver, kX) \
TFJ(MathExpm1, 1, kReceiver, kX) \
TFJ(MathFround, 1, kReceiver, kX) \
TFJ(MathLog, 1, kReceiver, kX) \
TFJ(MathLog1p, 1, kReceiver, kX) \
TFJ(MathLog10, 1, kReceiver, kX) \
TFJ(MathLog2, 1, kReceiver, kX) \
TFJ(MathSin, 1, kReceiver, kX) \
TFJ(MathSign, 1, kReceiver, kX) \
TFJ(MathSinh, 1, kReceiver, kX) \
TFJ(MathSqrt, 1, kReceiver, kX) \
TFJ(MathTan, 1, kReceiver, kX) \
TFJ(MathTanh, 1, kReceiver, kX) \
TFJ(MathHypot, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ObjectFromEntries, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ObjectIsExtensible, 1, kReceiver, kObject) \
TFJ(ObjectPreventExtensions, 1, kReceiver, kObject) \
TFJ(ObjectGetPrototypeOf, 1, kReceiver, kObject) \
TFJ(ObjectSetPrototypeOf, 2, kReceiver, kObject, kProto) \
TFJ(ProxyConstructor, 2, kReceiver, kTarget, kHandler) \
TFS(ProxyDeleteProperty, kProxy, kName, kLanguageMode) \
TFS(ProxyGetProperty, kProxy, kName, kReceiverValue, kOnNonExistent) \
TFS(ProxyGetPrototypeOf, kProxy) \
TFS(ProxyHasProperty, kProxy, kName) \
TFS(ProxyIsExtensible, kProxy) \
TFS(ProxyPreventExtensions, kProxy, kDoThrow) \
TFJ(ProxyRevocable, 2, kReceiver, kTarget, kHandler) \
TFJ(ProxyRevoke, 0, kReceiver) \
TFS(ProxySetProperty, kProxy, kName, kValue, kReceiverValue) \
TFS(ProxySetPrototypeOf, kProxy, kProto, kDoThrow) \
TFJ(ReflectIsExtensible, 1, kReceiver, kObject) \
TFJ(ReflectPreventExtensions, 1, kReceiver, kObject) \
TFJ(ReflectGetPrototypeOf, 1, kReceiver, kObject) \
TFJ(ReflectSetPrototypeOf, 2, kReceiver, kObject, kProto) \
TFJ(ReflectGet, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(ReflectDeleteProperty, 2, kReceiver, kObject, kKey) \
TFS(RegExpMatchFast, kReceiver, kString) \
TFJ(RegExpPrototypeMatch, 1, kReceiver, kString) \
TFS(RegExpReplace, kRegexp, kString, kReplaceValue) \
TFJ(RegExpPrototypeReplace, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(RegExpPrototypeSourceGetter, 0, kReceiver) \
TFJ(RegExpPrototypeTest, 1, kReceiver, kString) \
TFS(RegExpPrototypeTestFast, kReceiver, kString) \
TFJ(RegExpPrototypeGlobalGetter, 0, kReceiver) \
TFJ(RegExpPrototypeIgnoreCaseGetter, 0, kReceiver) \
TFJ(RegExpPrototypeMultilineGetter, 0, kReceiver) \
TFJ(RegExpPrototypeDotAllGetter, 0, kReceiver) \
TFJ(RegExpPrototypeStickyGetter, 0, kReceiver) \
TFJ(RegExpPrototypeUnicodeGetter, 0, kReceiver) \
TFJ(RegExpPrototypeFlagsGetter, 0, kReceiver) \
TFJ(StringPrototypeToString, 0, kReceiver) \
TFJ(StringPrototypeValueOf, 0, kReceiver) \
TFS(StringToList, kString) \
TFJ(StringPrototypeCharAt, 1, kReceiver, kPosition) \
TFJ(StringPrototypeCharCodeAt, 1, kReceiver, kPosition) \
TFJ(StringPrototypeCodePointAt, 1, kReceiver, kPosition) \
TFJ(StringPrototypeConcat, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringConstructor, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(StringAddConvertLeft, kLeft, kRight) \
TFS(StringAddConvertRight, kLeft, kRight) \
TFJ(StringPrototypeEndsWith, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(CreateHTML, kReceiver, kMethodName, kTagName, kAttr, kAttrValue) \
TFJ(StringPrototypeAnchor, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeBig, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeBlink, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeBold, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeFontcolor, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeFontsize, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeFixed, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeItalics, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeLink, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeSmall, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeStrike, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeSub, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeSup, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeIterator, 0, kReceiver) \
TFJ(StringIteratorPrototypeNext, 0, kReceiver) \
TFJ(StringPrototypePadStart, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypePadEnd, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(StringRepeat, kString, kCount) \
TFJ(StringPrototypeRepeat, 1, kReceiver, kCount) \
TFJ(StringPrototypeSlice, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeStartsWith, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(StringPrototypeSubstring, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(CreateTypedArray, kTarget, kNewTarget, kArg1, kArg2, kArg3) \
TFJ(TypedArrayPrototypeEvery, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeFilter, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeFind, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeFindIndex, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeForEach, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeReduce, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeReduceRight, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeSlice, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeSome, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFJ(TypedArrayPrototypeSubArray, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(TypedArrayMergeSort, kArray, kComparefn, kSource, kFrom, kTo, kTarget) \
TFJ(TypedArrayPrototypeSort, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(GenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, kParam) \
TFS(TestHelperPlus1, kX) \
TFS(TestHelperPlus2, kX) \
TFS(NewSmiBox, kValue) \
TFS(Load17ATFastSmiElements, kSortState, kIndex) \
TFS(Load20ATFastObjectElements, kSortState, kIndex) \
TFS(Load20ATFastDoubleElements, kSortState, kIndex) \
TFS(Store17ATFastSmiElements, kSortState, kIndex, kValue) \
TFS(Store20ATFastObjectElements, kSortState, kIndex, kValue) \
TFS(Store20ATFastDoubleElements, kSortState, kIndex, kValue) \
TFS(Delete17ATFastSmiElements, kSortState, kIndex) \
TFS(Delete20ATFastObjectElements, kSortState, kIndex) \
TFS(Delete20ATFastDoubleElements, kSortState, kIndex) \
TFS(SortCompareDefault, kComparefn, kX, kY) \
TFS(SortCompareUserFn, kComparefn, kX, kY) \
TFS(CanUseSameAccessor25ATGenericElementsAccessor, kReceiver, kInitialReceiverMap, kInitialReceiverLength) \
TFS(Copy, kSource, kSrcPos, kTarget, kDstPos, kLength) \
TFS(MergeAt, kSortState, kI) \
TFS(GallopLeft, kSortState, kArray, kKey, kBase, kLength, kHint) \
TFS(GallopRight, kSortState, kArray, kKey, kBase, kLength, kHint) \
TFS(ArrayTimSort, kSortState) \
TFJ(ArrayPrototypeSort, SharedFunctionInfo::kDontAdaptArgumentsSentinel) \
TFS(LoadJoinElement25ATGenericElementsAccessor, kReceiver, kK) \
TFS(LoadJoinTypedElement15ATInt32Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement17ATFloat32Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement17ATFloat64Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement22ATUint8ClampedElements, kReceiver, kK) \
TFS(LoadJoinTypedElement19ATBigUint64Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement18ATBigInt64Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement15ATUint8Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement14ATInt8Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement16ATUint16Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement15ATInt16Elements, kReceiver, kK) \
TFS(LoadJoinTypedElement16ATUint32Elements, kReceiver, kK) \
TFS(LoadFixedElement15ATInt32Elements, kArray, kIndex) \
TFS(LoadFixedElement17ATFloat32Elements, kArray, kIndex) \
TFS(LoadFixedElement17ATFloat64Elements, kArray, kIndex) \
TFS(LoadFixedElement22ATUint8ClampedElements, kArray, kIndex) \
TFS(LoadFixedElement19ATBigUint64Elements, kArray, kIndex) \
TFS(LoadFixedElement18ATBigInt64Elements, kArray, kIndex) \
TFS(LoadFixedElement15ATUint8Elements, kArray, kIndex) \
TFS(LoadFixedElement14ATInt8Elements, kArray, kIndex) \
TFS(LoadFixedElement16ATUint16Elements, kArray, kIndex) \
TFS(LoadFixedElement15ATInt16Elements, kArray, kIndex) \
TFS(LoadFixedElement16ATUint32Elements, kArray, kIndex) \
TFS(StoreFixedElement15ATInt32Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement17ATFloat32Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement17ATFloat64Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement22ATUint8ClampedElements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement19ATBigUint64Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement18ATBigInt64Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement15ATUint8Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement14ATInt8Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement16ATUint16Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement15ATInt16Elements, kTypedArray, kIndex, kValue) \
TFS(StoreFixedElement16ATUint32Elements, kTypedArray, kIndex, kValue) \
TFS(GenericBuiltinTest5ATSmi, kParam) \
TFS(CanUseSameAccessor20ATFastDoubleElements, kReceiver, kInitialReceiverMap, kInitialReceiverLength) \
TFS(CanUseSameAccessor17ATFastSmiElements, kReceiver, kInitialReceiverMap, kInitialReceiverLength) \
TFS(CanUseSameAccessor20ATFastObjectElements, kReceiver, kInitialReceiverMap, kInitialReceiverLength) \
TFS(Load25ATGenericElementsAccessor, kSortState, kIndex) \
TFS(Store25ATGenericElementsAccessor, kSortState, kIndex, kValue) \
TFS(Delete25ATGenericElementsAccessor, kSortState, kIndex) \

#define TORQUE_FUNCTION_POINTER_TYPE_TO_BUILTIN_MAP(V) \
  V(0,LoadJoinElement20ATDictionaryElements)\
  V(1,LoadFixedElement15ATInt32Elements)\
  V(2,StoreFixedElement15ATInt32Elements)\
  V(3,GenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol)\
  V(4,Load17ATFastSmiElements)\
  V(5,Store17ATFastSmiElements)\
  V(6,Delete17ATFastSmiElements)\
  V(7,CanUseSameAccessor25ATGenericElementsAccessor)\
  V(8,SortCompareDefault)\
  V(9,TestHelperPlus1)\
  V(10,GenericBuiltinTest5ATSmi)\

#endif  // V8_GEN_TORQUE_GENERATED_BUILTIN_DEFINITIONS_TQ_H_
