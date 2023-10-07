class ArrayEveryLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayEveryLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength, kInitialTo)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayEveryLoopContinuationDescriptor)
};

class ArrayFilterLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayFilterLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength, kInitialTo)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayFilterLoopContinuationDescriptor)
};

class ArrayFindLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayFindLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kO, kInitialK, kLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayFindLoopContinuationDescriptor)
};

class ArrayFindIndexLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayFindIndexLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kO, kInitialK, kLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayFindIndexLoopContinuationDescriptor)
};

class ArrayFindLastLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayFindLastLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPredicate, kThisArg, kO, kInitialK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayFindLastLoopContinuationDescriptor)
};

class ArrayFindLastIndexLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayFindLastIndexLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPredicate, kThisArg, kO, kInitialK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayFindLastIndexLoopContinuationDescriptor)
};

class ArrayForEachLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayForEachLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLen, kTo)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayForEachLoopContinuationDescriptor)
};

class LoadJoinElement_DictionaryElements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinElement_DictionaryElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinElement_DictionaryElements_0Descriptor)
};

class LoadJoinElement_FastSmiOrObjectElements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinElement_FastSmiOrObjectElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinElement_FastSmiOrObjectElements_0Descriptor)
};

class LoadJoinElement_FastDoubleElements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinElement_FastDoubleElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinElement_FastDoubleElements_0Descriptor)
};

class ConvertToLocaleStringDescriptor : public StaticCallInterfaceDescriptor<ConvertToLocaleStringDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kElement, kLocales, kOptions)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ConvertToLocaleStringDescriptor)
};

class JoinStackPushDescriptor : public StaticCallInterfaceDescriptor<JoinStackPushDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kStack, kReceiver)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(JoinStackPushDescriptor)
};

class JoinStackPopDescriptor : public StaticCallInterfaceDescriptor<JoinStackPopDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kStack, kReceiver)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(JoinStackPopDescriptor)
};

class ArrayMapLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayMapLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayMapLoopContinuationDescriptor)
};

class ArrayReduceRightLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayReduceRightLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kInitialAccumulator, kO, kInitialK, kLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayReduceRightLoopContinuationDescriptor)
};

class ArrayReduceLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArrayReduceLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kInitialAccumulator, kO, kInitialK, kLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayReduceLoopContinuationDescriptor)
};

class ArraySomeLoopContinuationDescriptor : public StaticCallInterfaceDescriptor<ArraySomeLoopContinuationDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kCallbackfn, kThisArg, kArray, kO, kInitialK, kLength, kInitialTo)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ArraySomeLoopContinuationDescriptor)
};

class GenericArrayToReversedDescriptor : public StaticCallInterfaceDescriptor<GenericArrayToReversedDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GenericArrayToReversedDescriptor)
};

class ArrayTimSortIntoCopyDescriptor : public StaticCallInterfaceDescriptor<ArrayTimSortIntoCopyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayTimSortIntoCopyDescriptor)
};

class GenericArrayWithDescriptor : public StaticCallInterfaceDescriptor<GenericArrayWithDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kLen, kActualIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GenericArrayWithDescriptor)
};

class ToIntegerDescriptor : public StaticCallInterfaceDescriptor<ToIntegerDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToIntegerDescriptor)
};

class FastCreateDataPropertyDescriptor : public StaticCallInterfaceDescriptor<FastCreateDataPropertyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kKey, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(FastCreateDataPropertyDescriptor)
};

class BigIntAddNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntAddNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntAddNoThrowDescriptor)
};

class BigIntAddDescriptor : public StaticCallInterfaceDescriptor<BigIntAddDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntAddDescriptor)
};

class BigIntSubtractNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntSubtractNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntSubtractNoThrowDescriptor)
};

class BigIntSubtractDescriptor : public StaticCallInterfaceDescriptor<BigIntSubtractDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntSubtractDescriptor)
};

class BigIntMultiplyNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntMultiplyNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntMultiplyNoThrowDescriptor)
};

class BigIntMultiplyDescriptor : public StaticCallInterfaceDescriptor<BigIntMultiplyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntMultiplyDescriptor)
};

class BigIntDivideNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntDivideNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntDivideNoThrowDescriptor)
};

class BigIntDivideDescriptor : public StaticCallInterfaceDescriptor<BigIntDivideDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntDivideDescriptor)
};

class BigIntModulusNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntModulusNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntModulusNoThrowDescriptor)
};

class BigIntModulusDescriptor : public StaticCallInterfaceDescriptor<BigIntModulusDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntModulusDescriptor)
};

class BigIntBitwiseAndNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntBitwiseAndNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntBitwiseAndNoThrowDescriptor)
};

class BigIntBitwiseAndDescriptor : public StaticCallInterfaceDescriptor<BigIntBitwiseAndDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntBitwiseAndDescriptor)
};

class BigIntBitwiseOrNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntBitwiseOrNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntBitwiseOrNoThrowDescriptor)
};

class BigIntBitwiseOrDescriptor : public StaticCallInterfaceDescriptor<BigIntBitwiseOrDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntBitwiseOrDescriptor)
};

class BigIntBitwiseXorNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntBitwiseXorNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntBitwiseXorNoThrowDescriptor)
};

class BigIntBitwiseXorDescriptor : public StaticCallInterfaceDescriptor<BigIntBitwiseXorDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntBitwiseXorDescriptor)
};

class BigIntShiftLeftNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntShiftLeftNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntShiftLeftNoThrowDescriptor)
};

class BigIntShiftLeftDescriptor : public StaticCallInterfaceDescriptor<BigIntShiftLeftDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntShiftLeftDescriptor)
};

class BigIntShiftRightNoThrowDescriptor : public StaticCallInterfaceDescriptor<BigIntShiftRightNoThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntShiftRightNoThrowDescriptor)
};

class BigIntShiftRightDescriptor : public StaticCallInterfaceDescriptor<BigIntShiftRightDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kXNum, kYNum)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntShiftRightDescriptor)
};

class BigIntEqualDescriptor : public StaticCallInterfaceDescriptor<BigIntEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntEqualDescriptor)
};

class BigIntLessThanDescriptor : public StaticCallInterfaceDescriptor<BigIntLessThanDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntLessThanDescriptor)
};

class BigIntGreaterThanDescriptor : public StaticCallInterfaceDescriptor<BigIntGreaterThanDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntGreaterThanDescriptor)
};

class BigIntLessThanOrEqualDescriptor : public StaticCallInterfaceDescriptor<BigIntLessThanOrEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntLessThanOrEqualDescriptor)
};

class BigIntGreaterThanOrEqualDescriptor : public StaticCallInterfaceDescriptor<BigIntGreaterThanOrEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntGreaterThanOrEqualDescriptor)
};

class BigIntUnaryMinusDescriptor : public StaticCallInterfaceDescriptor<BigIntUnaryMinusDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kBigint)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(BigIntUnaryMinusDescriptor)
};

class ToStringDescriptor : public StaticCallInterfaceDescriptor<ToStringDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kO)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToStringDescriptor)
};

class StringToListDescriptor : public StaticCallInterfaceDescriptor<StringToListDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(StringToListDescriptor)
};

class StringAddConvertLeftDescriptor : public StaticCallInterfaceDescriptor<StringAddConvertLeftDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(StringAddConvertLeftDescriptor)
};

class StringAddConvertRightDescriptor : public StaticCallInterfaceDescriptor<StringAddConvertRightDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StringAddConvertRightDescriptor)
};

class StringCharAtDescriptor : public StaticCallInterfaceDescriptor<StringCharAtDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kPosition)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(StringCharAtDescriptor)
};

class FastNewClosureBaselineDescriptor : public StaticCallInterfaceDescriptor<FastNewClosureBaselineDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kSharedFunctionInfo, kFeedbackCell)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(FastNewClosureBaselineDescriptor)
};

class FastNewFunctionContextEvalDescriptor : public StaticCallInterfaceDescriptor<FastNewFunctionContextEvalDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kScopeInfo, kSlots)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(FastNewFunctionContextEvalDescriptor)
};

class FastNewFunctionContextFunctionDescriptor : public StaticCallInterfaceDescriptor<FastNewFunctionContextFunctionDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kScopeInfo, kSlots)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(FastNewFunctionContextFunctionDescriptor)
};

class CreateRegExpLiteralDescriptor : public StaticCallInterfaceDescriptor<CreateRegExpLiteralDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kMaybeFeedbackVector, kSlot, kPattern, kFlags)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CreateRegExpLiteralDescriptor)
};

class CreateShallowArrayLiteralDescriptor : public StaticCallInterfaceDescriptor<CreateShallowArrayLiteralDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kMaybeFeedbackVector, kSlot, kConstantElements, kFlags)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CreateShallowArrayLiteralDescriptor)
};

class CreateEmptyArrayLiteralDescriptor : public StaticCallInterfaceDescriptor<CreateEmptyArrayLiteralDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kFeedbackVector, kSlot)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CreateEmptyArrayLiteralDescriptor)
};

class CreateShallowObjectLiteralDescriptor : public StaticCallInterfaceDescriptor<CreateShallowObjectLiteralDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kMaybeFeedbackVector, kSlot, kDesc, kFlags)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CreateShallowObjectLiteralDescriptor)
};

class CreateEmptyLiteralObjectDescriptor : public StaticCallInterfaceDescriptor<CreateEmptyLiteralObjectDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CreateEmptyLiteralObjectDescriptor)
};

class StringToNumberDescriptor : public StaticCallInterfaceDescriptor<StringToNumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(StringToNumberDescriptor)
};

class NonNumberToNumberDescriptor : public StaticCallInterfaceDescriptor<NonNumberToNumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(NonNumberToNumberDescriptor)
};

class NonNumberToNumericDescriptor : public StaticCallInterfaceDescriptor<NonNumberToNumericDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(NonNumberToNumericDescriptor)
};

class ToNumericDescriptor : public StaticCallInterfaceDescriptor<ToNumericDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToNumericDescriptor)
};

class NumberToStringDescriptor : public StaticCallInterfaceDescriptor<NumberToStringDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(NumberToStringDescriptor)
};

class ToBooleanDescriptor : public StaticCallInterfaceDescriptor<ToBooleanDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToBooleanDescriptor)
};

class ToBooleanForBaselineJumpDescriptor : public StaticCallInterfaceDescriptor<ToBooleanForBaselineJumpDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(2, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToBooleanForBaselineJumpDescriptor)
};

class ToLengthDescriptor : public StaticCallInterfaceDescriptor<ToLengthDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToLengthDescriptor)
};

class ToNameDescriptor : public StaticCallInterfaceDescriptor<ToNameDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToNameDescriptor)
};

class ToObjectDescriptor : public StaticCallInterfaceDescriptor<ToObjectDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ToObjectDescriptor)
};

class NonPrimitiveToPrimitive_DefaultDescriptor : public StaticCallInterfaceDescriptor<NonPrimitiveToPrimitive_DefaultDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(NonPrimitiveToPrimitive_DefaultDescriptor)
};

class NonPrimitiveToPrimitive_NumberDescriptor : public StaticCallInterfaceDescriptor<NonPrimitiveToPrimitive_NumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(NonPrimitiveToPrimitive_NumberDescriptor)
};

class NonPrimitiveToPrimitive_StringDescriptor : public StaticCallInterfaceDescriptor<NonPrimitiveToPrimitive_StringDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(NonPrimitiveToPrimitive_StringDescriptor)
};

class OrdinaryToPrimitive_NumberDescriptor : public StaticCallInterfaceDescriptor<OrdinaryToPrimitive_NumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(OrdinaryToPrimitive_NumberDescriptor)
};

class OrdinaryToPrimitive_Number_InlineDescriptor : public StaticCallInterfaceDescriptor<OrdinaryToPrimitive_Number_InlineDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(OrdinaryToPrimitive_Number_InlineDescriptor)
};

class OrdinaryToPrimitive_StringDescriptor : public StaticCallInterfaceDescriptor<OrdinaryToPrimitive_StringDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(OrdinaryToPrimitive_StringDescriptor)
};

class IncBlockCounterDescriptor : public StaticCallInterfaceDescriptor<IncBlockCounterDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kFunction, kCoverageArraySlotIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(IncBlockCounterDescriptor)
};

class GetTemplateObjectDescriptor : public StaticCallInterfaceDescriptor<GetTemplateObjectDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kShared, kDescription, kSlot, kMaybeFeedbackVector)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(GetTemplateObjectDescriptor)
};

class ForInNextDescriptor : public StaticCallInterfaceDescriptor<ForInNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSlot, kReceiver, kCacheArray, kCacheType, kCacheIndex, kFeedbackVector)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ForInNextDescriptor)
};

class GetImportMetaObjectBaselineDescriptor : public StaticCallInterfaceDescriptor<GetImportMetaObjectBaselineDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GetImportMetaObjectBaselineDescriptor)
};

class GetIteratorWithFeedbackDescriptor : public StaticCallInterfaceDescriptor<GetIteratorWithFeedbackDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kLoadSlot, kCallSlot, kMaybeFeedbackVector)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(GetIteratorWithFeedbackDescriptor)
};

class GetIteratorBaselineDescriptor : public StaticCallInterfaceDescriptor<GetIteratorBaselineDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kReceiver, kLoadSlot, kCallSlot)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GetIteratorBaselineDescriptor)
};

class CreateAsyncFromSyncIteratorBaselineDescriptor : public StaticCallInterfaceDescriptor<CreateAsyncFromSyncIteratorBaselineDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kSyncIterator)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CreateAsyncFromSyncIteratorBaselineDescriptor)
};

class CallIteratorWithFeedbackDescriptor : public StaticCallInterfaceDescriptor<CallIteratorWithFeedbackDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kIteratorMethod, kCallSlot, kFeedback)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(CallIteratorWithFeedbackDescriptor)
};

class IteratorMapHelperNextDescriptor : public StaticCallInterfaceDescriptor<IteratorMapHelperNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kHelper)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(IteratorMapHelperNextDescriptor)
};

class IteratorFilterHelperNextDescriptor : public StaticCallInterfaceDescriptor<IteratorFilterHelperNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kHelper)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(IteratorFilterHelperNextDescriptor)
};

class IteratorTakeHelperNextDescriptor : public StaticCallInterfaceDescriptor<IteratorTakeHelperNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kHelper)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(IteratorTakeHelperNextDescriptor)
};

class IteratorDropHelperNextDescriptor : public StaticCallInterfaceDescriptor<IteratorDropHelperNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kHelper)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(IteratorDropHelperNextDescriptor)
};

class IteratorFlatMapHelperNextDescriptor : public StaticCallInterfaceDescriptor<IteratorFlatMapHelperNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kHelper)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(IteratorFlatMapHelperNextDescriptor)
};

class ParseIntDescriptor : public StaticCallInterfaceDescriptor<ParseIntDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kInput, kRadix)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ParseIntDescriptor)
};

class AddDescriptor : public StaticCallInterfaceDescriptor<AddDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeftArg, kRightArg)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(AddDescriptor)
};

class SubtractDescriptor : public StaticCallInterfaceDescriptor<SubtractDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(SubtractDescriptor)
};

class MultiplyDescriptor : public StaticCallInterfaceDescriptor<MultiplyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(MultiplyDescriptor)
};

class DivideDescriptor : public StaticCallInterfaceDescriptor<DivideDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(DivideDescriptor)
};

class ModulusDescriptor : public StaticCallInterfaceDescriptor<ModulusDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ModulusDescriptor)
};

class ExponentiateDescriptor : public StaticCallInterfaceDescriptor<ExponentiateDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ExponentiateDescriptor)
};

class NegateDescriptor : public StaticCallInterfaceDescriptor<NegateDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(NegateDescriptor)
};

class BitwiseNotDescriptor : public StaticCallInterfaceDescriptor<BitwiseNotDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BitwiseNotDescriptor)
};

class DecrementDescriptor : public StaticCallInterfaceDescriptor<DecrementDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(DecrementDescriptor)
};

class IncrementDescriptor : public StaticCallInterfaceDescriptor<IncrementDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(IncrementDescriptor)
};

class ShiftLeftDescriptor : public StaticCallInterfaceDescriptor<ShiftLeftDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ShiftLeftDescriptor)
};

class ShiftRightDescriptor : public StaticCallInterfaceDescriptor<ShiftRightDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ShiftRightDescriptor)
};

class ShiftRightLogicalDescriptor : public StaticCallInterfaceDescriptor<ShiftRightLogicalDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ShiftRightLogicalDescriptor)
};

class BitwiseAndDescriptor : public StaticCallInterfaceDescriptor<BitwiseAndDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BitwiseAndDescriptor)
};

class BitwiseOrDescriptor : public StaticCallInterfaceDescriptor<BitwiseOrDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BitwiseOrDescriptor)
};

class BitwiseXorDescriptor : public StaticCallInterfaceDescriptor<BitwiseXorDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(BitwiseXorDescriptor)
};

class LessThanDescriptor : public StaticCallInterfaceDescriptor<LessThanDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(LessThanDescriptor)
};

class LessThanOrEqualDescriptor : public StaticCallInterfaceDescriptor<LessThanOrEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(LessThanOrEqualDescriptor)
};

class GreaterThanDescriptor : public StaticCallInterfaceDescriptor<GreaterThanDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GreaterThanDescriptor)
};

class GreaterThanOrEqualDescriptor : public StaticCallInterfaceDescriptor<GreaterThanOrEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GreaterThanOrEqualDescriptor)
};

class EqualDescriptor : public StaticCallInterfaceDescriptor<EqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(EqualDescriptor)
};

class StrictEqualDescriptor : public StaticCallInterfaceDescriptor<StrictEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLeft, kRight)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StrictEqualDescriptor)
};

class GroupByGenericDescriptor : public StaticCallInterfaceDescriptor<GroupByGenericDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kItems, kInitialGroups, kCallbackfn, kCoerceToProperty, kMethodName)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(GroupByGenericDescriptor)
};

class CreateObjectWithoutPropertiesDescriptor : public StaticCallInterfaceDescriptor<CreateObjectWithoutPropertiesDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPrototype)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CreateObjectWithoutPropertiesDescriptor)
};

class FulfillPromiseDescriptor : public StaticCallInterfaceDescriptor<FulfillPromiseDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPromise, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(FulfillPromiseDescriptor)
};

class RejectPromiseDescriptor : public StaticCallInterfaceDescriptor<RejectPromiseDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPromise, kReason, kDebugEvent)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(RejectPromiseDescriptor)
};

class NewPromiseCapabilityDescriptor : public StaticCallInterfaceDescriptor<NewPromiseCapabilityDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kMaybeConstructor, kDebugEvent)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(NewPromiseCapabilityDescriptor)
};

class PerformPromiseThenDescriptor : public StaticCallInterfaceDescriptor<PerformPromiseThenDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPromise, kOnFulfilled, kOnRejected, kResultPromise)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(PerformPromiseThenDescriptor)
};

class PromiseResolveThenableJobDescriptor : public StaticCallInterfaceDescriptor<PromiseResolveThenableJobDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPromiseToResolve, kThenable, kThen)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(PromiseResolveThenableJobDescriptor)
};

class PromiseFulfillReactionJobDescriptor : public StaticCallInterfaceDescriptor<PromiseFulfillReactionJobDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue, kHandler, kPromiseOrCapability)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(PromiseFulfillReactionJobDescriptor)
};

class PromiseRejectReactionJobDescriptor : public StaticCallInterfaceDescriptor<PromiseRejectReactionJobDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReason, kHandler, kPromiseOrCapability)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(PromiseRejectReactionJobDescriptor)
};

class PromiseResolveDescriptor : public StaticCallInterfaceDescriptor<PromiseResolveDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kConstructor, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(PromiseResolveDescriptor)
};

class ResolvePromiseDescriptor : public StaticCallInterfaceDescriptor<ResolvePromiseDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kPromise, kResolution)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ResolvePromiseDescriptor)
};

class ProxyDeletePropertyDescriptor : public StaticCallInterfaceDescriptor<ProxyDeletePropertyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy, kName, kLanguageMode)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(ProxyDeletePropertyDescriptor)
};

class ProxyGetPropertyDescriptor : public StaticCallInterfaceDescriptor<ProxyGetPropertyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy, kName, kReceiverValue, kOnNonExistent)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(ProxyGetPropertyDescriptor)
};

class ProxyGetPrototypeOfDescriptor : public StaticCallInterfaceDescriptor<ProxyGetPrototypeOfDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ProxyGetPrototypeOfDescriptor)
};

class ProxyHasPropertyDescriptor : public StaticCallInterfaceDescriptor<ProxyHasPropertyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy, kName)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ProxyHasPropertyDescriptor)
};

class ProxyIsExtensibleDescriptor : public StaticCallInterfaceDescriptor<ProxyIsExtensibleDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ProxyIsExtensibleDescriptor)
};

class ProxyPreventExtensionsDescriptor : public StaticCallInterfaceDescriptor<ProxyPreventExtensionsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy, kDoThrow)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ProxyPreventExtensionsDescriptor)
};

class ProxySetPropertyDescriptor : public StaticCallInterfaceDescriptor<ProxySetPropertyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy, kName, kValue, kReceiverValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ProxySetPropertyDescriptor)
};

class ProxySetPrototypeOfDescriptor : public StaticCallInterfaceDescriptor<ProxySetPrototypeOfDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kProxy, kProto, kDoThrow)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ProxySetPrototypeOfDescriptor)
};

class RegExpPrototypeExecSlowDescriptor : public StaticCallInterfaceDescriptor<RegExpPrototypeExecSlowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kRegexp, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(RegExpPrototypeExecSlowDescriptor)
};

class RegExpMatchFastDescriptor : public StaticCallInterfaceDescriptor<RegExpMatchFastDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(RegExpMatchFastDescriptor)
};

class RegExpReplaceDescriptor : public StaticCallInterfaceDescriptor<RegExpReplaceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kRegexp, kString, kReplaceValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(RegExpReplaceDescriptor)
};

class RegExpSearchFastDescriptor : public StaticCallInterfaceDescriptor<RegExpSearchFastDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(RegExpSearchFastDescriptor)
};

class RegExpSplitDescriptor : public StaticCallInterfaceDescriptor<RegExpSplitDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kRegexp, kString, kLimit)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(RegExpSplitDescriptor)
};

class RegExpPrototypeTestFastDescriptor : public StaticCallInterfaceDescriptor<RegExpPrototypeTestFastDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(RegExpPrototypeTestFastDescriptor)
};

class CreateHTMLDescriptor : public StaticCallInterfaceDescriptor<CreateHTMLDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kMethodName, kTagName, kAttr, kAttrValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CreateHTMLDescriptor)
};

class StringRepeatDescriptor : public StaticCallInterfaceDescriptor<StringRepeatDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kString, kCount)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(StringRepeatDescriptor)
};

class CreateTypedArrayDescriptor : public StaticCallInterfaceDescriptor<CreateTypedArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTarget, kNewTarget, kArg1, kArg2, kArg3)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CreateTypedArrayDescriptor)
};

class TypedArrayMergeSortDescriptor : public StaticCallInterfaceDescriptor<TypedArrayMergeSortDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSource, kFrom, kTo, kTarget, kArray, kComparefn)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(TypedArrayMergeSortDescriptor)
};

class NewSloppyArgumentsElementsDescriptor : public StaticCallInterfaceDescriptor<NewSloppyArgumentsElementsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kFrame, kFormalParameterCount, kArgumentCount)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<RawPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(NewSloppyArgumentsElementsDescriptor)
};

class NewStrictArgumentsElementsDescriptor : public StaticCallInterfaceDescriptor<NewStrictArgumentsElementsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kFrame, kFormalParameterCount, kArgumentCount)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<RawPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(NewStrictArgumentsElementsDescriptor)
};

class NewRestArgumentsElementsDescriptor : public StaticCallInterfaceDescriptor<NewRestArgumentsElementsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kFrame, kFormalParameterCount, kArgumentCount)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<RawPtrT>::value, MachineTypeOf<IntPtrT>::value, MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(NewRestArgumentsElementsDescriptor)
};

class FastNewSloppyArgumentsDescriptor : public StaticCallInterfaceDescriptor<FastNewSloppyArgumentsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kF)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(FastNewSloppyArgumentsDescriptor)
};

class FastNewStrictArgumentsDescriptor : public StaticCallInterfaceDescriptor<FastNewStrictArgumentsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kF)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(FastNewStrictArgumentsDescriptor)
};

class FastNewRestArgumentsDescriptor : public StaticCallInterfaceDescriptor<FastNewRestArgumentsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kF)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(FastNewRestArgumentsDescriptor)
};

class StringSlowFlattenDescriptor : public StaticCallInterfaceDescriptor<StringSlowFlattenDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kCons)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(StringSlowFlattenDescriptor)
};

class StringIndexOfDescriptor : public StaticCallInterfaceDescriptor<StringIndexOfDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kS, kSearchString, kStart)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(StringIndexOfDescriptor)
};

class TestTurbofanTypeDescriptor : public StaticCallInterfaceDescriptor<TestTurbofanTypeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue, kExpectedType)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(TestTurbofanTypeDescriptor)
};

class CheckTurbofanTypeDescriptor : public StaticCallInterfaceDescriptor<CheckTurbofanTypeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue, kExpectedType, kNodeId)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CheckTurbofanTypeDescriptor)
};

class CheckTurboshaftWord32TypeDescriptor : public StaticCallInterfaceDescriptor<CheckTurboshaftWord32TypeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue, kExpectedType, kNodeId)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CheckTurboshaftWord32TypeDescriptor)
};

class CheckTurboshaftWord64TypeDescriptor : public StaticCallInterfaceDescriptor<CheckTurboshaftWord64TypeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValueHigh, kValueLow, kExpectedType, kNodeId)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CheckTurboshaftWord64TypeDescriptor)
};

class GenericBuiltinTest_JSAny_0Descriptor : public StaticCallInterfaceDescriptor<GenericBuiltinTest_JSAny_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kParam)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(GenericBuiltinTest_JSAny_0Descriptor)
};

class TestHelperPlus1Descriptor : public StaticCallInterfaceDescriptor<TestHelperPlus1Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kX)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(TestHelperPlus1Descriptor)
};

class TestHelperPlus2Descriptor : public StaticCallInterfaceDescriptor<TestHelperPlus2Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kX)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(TestHelperPlus2Descriptor)
};

class NewSmiBoxDescriptor : public StaticCallInterfaceDescriptor<NewSmiBoxDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(NewSmiBoxDescriptor)
};

class ReturnTwoValuesDescriptor : public StaticCallInterfaceDescriptor<ReturnTwoValuesDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(2, kValue, kObj)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ReturnTwoValuesDescriptor)
};

class ThrowAsBuiltinDescriptor : public StaticCallInterfaceDescriptor<ThrowAsBuiltinDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(0, kStr)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowAsBuiltinDescriptor)
};

class TestCallNeverDescriptor : public StaticCallInterfaceDescriptor<TestCallNeverDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kA)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(TestCallNeverDescriptor)
};

class Load_FastSmiElements_0Descriptor : public StaticCallInterfaceDescriptor<Load_FastSmiElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Load_FastSmiElements_0Descriptor)
};

class Load_FastObjectElements_0Descriptor : public StaticCallInterfaceDescriptor<Load_FastObjectElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Load_FastObjectElements_0Descriptor)
};

class Load_FastDoubleElements_0Descriptor : public StaticCallInterfaceDescriptor<Load_FastDoubleElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Load_FastDoubleElements_0Descriptor)
};

class Store_FastSmiElements_0Descriptor : public StaticCallInterfaceDescriptor<Store_FastSmiElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(Store_FastSmiElements_0Descriptor)
};

class Store_FastObjectElements_0Descriptor : public StaticCallInterfaceDescriptor<Store_FastObjectElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(Store_FastObjectElements_0Descriptor)
};

class Store_FastDoubleElements_0Descriptor : public StaticCallInterfaceDescriptor<Store_FastDoubleElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(Store_FastDoubleElements_0Descriptor)
};

class Delete_FastSmiElements_0Descriptor : public StaticCallInterfaceDescriptor<Delete_FastSmiElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Delete_FastSmiElements_0Descriptor)
};

class Delete_FastObjectElements_0Descriptor : public StaticCallInterfaceDescriptor<Delete_FastObjectElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Delete_FastObjectElements_0Descriptor)
};

class Delete_FastDoubleElements_0Descriptor : public StaticCallInterfaceDescriptor<Delete_FastDoubleElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Delete_FastDoubleElements_0Descriptor)
};

class SortCompareDefaultDescriptor : public StaticCallInterfaceDescriptor<SortCompareDefaultDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kComparefn, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(SortCompareDefaultDescriptor)
};

class SortCompareUserFnDescriptor : public StaticCallInterfaceDescriptor<SortCompareUserFnDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kComparefn, kX, kY)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(SortCompareUserFnDescriptor)
};

class CanUseSameAccessor_GenericElementsAccessor_0Descriptor : public StaticCallInterfaceDescriptor<CanUseSameAccessor_GenericElementsAccessor_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kInitialReceiverMap, kInitialReceiverLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CanUseSameAccessor_GenericElementsAccessor_0Descriptor)
};

class CopyDescriptor : public StaticCallInterfaceDescriptor<CopyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSource, kSrcPos, kTarget, kDstPos, kLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(CopyDescriptor)
};

class MergeAtDescriptor : public StaticCallInterfaceDescriptor<MergeAtDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kI)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(MergeAtDescriptor)
};

class GallopLeftDescriptor : public StaticCallInterfaceDescriptor<GallopLeftDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kArray, kKey, kBase, kLength, kHint)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(GallopLeftDescriptor)
};

class GallopRightDescriptor : public StaticCallInterfaceDescriptor<GallopRightDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kArray, kKey, kBase, kLength, kHint)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(GallopRightDescriptor)
};

class ArrayTimSortDescriptor : public StaticCallInterfaceDescriptor<ArrayTimSortDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(ArrayTimSortDescriptor)
};

class StringFastLocaleCompareDescriptor : public StaticCallInterfaceDescriptor<StringFastLocaleCompareDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kLocaleCompareFn, kLeft, kRight, kLocales)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StringFastLocaleCompareDescriptor)
};

class JSToWasmHandleReturnsDescriptor : public StaticCallInterfaceDescriptor<JSToWasmHandleReturnsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kInstance, kResultArray, kWrapperBuffer)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<RawPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(JSToWasmHandleReturnsDescriptor)
};

class WasmInt32ToHeapNumberDescriptor : public StaticCallInterfaceDescriptor<WasmInt32ToHeapNumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kVal)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Int32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmInt32ToHeapNumberDescriptor)
};

class WasmFuncRefToJSDescriptor : public StaticCallInterfaceDescriptor<WasmFuncRefToJSDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kVal)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmFuncRefToJSDescriptor)
};

class WasmTaggedNonSmiToInt32Descriptor : public StaticCallInterfaceDescriptor<WasmTaggedNonSmiToInt32Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kVal)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTaggedNonSmiToInt32Descriptor)
};

class WasmTaggedToFloat64Descriptor : public StaticCallInterfaceDescriptor<WasmTaggedToFloat64Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kVal)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Float64T>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTaggedToFloat64Descriptor)
};

class WasmTaggedToFloat32Descriptor : public StaticCallInterfaceDescriptor<WasmTaggedToFloat32Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kVal)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Float32T>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTaggedToFloat32Descriptor)
};

class WasmMemoryGrowDescriptor : public StaticCallInterfaceDescriptor<WasmMemoryGrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kMemIndex, kNumPages)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineTypeOf<Int32T>::value, MachineTypeOf<Int32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmMemoryGrowDescriptor)
};

class WasmTableInitDescriptor : public StaticCallInterfaceDescriptor<WasmTableInitDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kDstRaw, kSrcRaw, kSizeRaw, kTableIndex, kSegmentIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableInitDescriptor)
};

class WasmTableCopyDescriptor : public StaticCallInterfaceDescriptor<WasmTableCopyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kDstRaw, kSrcRaw, kSizeRaw, kDstTable, kSrcTable)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableCopyDescriptor)
};

class WasmTableFillDescriptor : public StaticCallInterfaceDescriptor<WasmTableFillDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTable, kStartRaw, kCountRaw, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedSigned(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableFillDescriptor)
};

class WasmTableGrowDescriptor : public StaticCallInterfaceDescriptor<WasmTableGrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTable, kDeltaRaw, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedSigned(), MachineTypeOf<Uint32T>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableGrowDescriptor)
};

class WasmTableGetDescriptor : public StaticCallInterfaceDescriptor<WasmTableGetDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTableIndex, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<IntPtrT>::value, MachineTypeOf<Int32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableGetDescriptor)
};

class WasmTableSetDescriptor : public StaticCallInterfaceDescriptor<WasmTableSetDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTableIndex, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<IntPtrT>::value, MachineTypeOf<Int32T>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableSetDescriptor)
};

class WasmTableGetFuncRefDescriptor : public StaticCallInterfaceDescriptor<WasmTableGetFuncRefDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTableIndex, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<IntPtrT>::value, MachineTypeOf<Int32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableGetFuncRefDescriptor)
};

class WasmTableSetFuncRefDescriptor : public StaticCallInterfaceDescriptor<WasmTableSetFuncRefDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTableIndex, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<IntPtrT>::value, MachineTypeOf<Int32T>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTableSetFuncRefDescriptor)
};

class WasmRefFuncDescriptor : public StaticCallInterfaceDescriptor<WasmRefFuncDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmRefFuncDescriptor)
};

class WasmInternalFunctionCreateExternalDescriptor : public StaticCallInterfaceDescriptor<WasmInternalFunctionCreateExternalDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kFunc)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmInternalFunctionCreateExternalDescriptor)
};

class WasmAllocateFixedArrayDescriptor : public StaticCallInterfaceDescriptor<WasmAllocateFixedArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kSize)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<IntPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmAllocateFixedArrayDescriptor)
};

class WasmThrowDescriptor : public StaticCallInterfaceDescriptor<WasmThrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kTag, kValues)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmThrowDescriptor)
};

class WasmRethrowDescriptor : public StaticCallInterfaceDescriptor<WasmRethrowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kException)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmRethrowDescriptor)
};

class WasmRethrowExplicitContextDescriptor : public StaticCallInterfaceDescriptor<WasmRethrowExplicitContextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kException, kExplicitContext)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmRethrowExplicitContextDescriptor)
};

class WasmTriggerTierUpDescriptor : public StaticCallInterfaceDescriptor<WasmTriggerTierUpDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTriggerTierUpDescriptor)
};

class WasmStackGuardDescriptor : public StaticCallInterfaceDescriptor<WasmStackGuardDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStackGuardDescriptor)
};

class WasmStackOverflowDescriptor : public StaticCallInterfaceDescriptor<WasmStackOverflowDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStackOverflowDescriptor)
};

class WasmTraceMemoryDescriptor : public StaticCallInterfaceDescriptor<WasmTraceMemoryDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kInfo)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTraceMemoryDescriptor)
};

class WasmTraceEnterDescriptor : public StaticCallInterfaceDescriptor<WasmTraceEnterDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTraceEnterDescriptor)
};

class WasmTraceExitDescriptor : public StaticCallInterfaceDescriptor<WasmTraceExitDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kInfo)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTraceExitDescriptor)
};

class WasmAllocateJSArrayDescriptor : public StaticCallInterfaceDescriptor<WasmAllocateJSArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSize)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmAllocateJSArrayDescriptor)
};

class WasmAllocateStructWithRttDescriptor : public StaticCallInterfaceDescriptor<WasmAllocateStructWithRttDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kRtt, kInstanceSize)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Int32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmAllocateStructWithRttDescriptor)
};

class WasmAllocateArray_UninitializedDescriptor : public StaticCallInterfaceDescriptor<WasmAllocateArray_UninitializedDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kRtt, kLength, kElementSize)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmAllocateArray_UninitializedDescriptor)
};

class WasmArrayNewSegmentDescriptor : public StaticCallInterfaceDescriptor<WasmArrayNewSegmentDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kSegmentIndex, kOffset, kLength, kIsElement, kRtt)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmArrayNewSegmentDescriptor)
};

class WasmArrayInitSegmentDescriptor : public StaticCallInterfaceDescriptor<WasmArrayInitSegmentDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArrayIndex, kSegmentOffset, kLength, kSegmentIndex, kIsElement, kArrayRaw)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmArrayInitSegmentDescriptor)
};

class WasmArrayCopyWithChecksDescriptor : public StaticCallInterfaceDescriptor<WasmArrayCopyWithChecksDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kDstIndex, kSrcIndex, kLength, kDstObject, kSrcObject)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmArrayCopyWithChecksDescriptor)
};

class WasmArrayCopyDescriptor : public StaticCallInterfaceDescriptor<WasmArrayCopyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kDstIndex, kSrcIndex, kLength, kDstObject, kSrcObject)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmArrayCopyDescriptor)
};

class WasmUint32ToNumberDescriptor : public StaticCallInterfaceDescriptor<WasmUint32ToNumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmUint32ToNumberDescriptor)
};

class UintPtr53ToNumberDescriptor : public StaticCallInterfaceDescriptor<UintPtr53ToNumberDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(UintPtr53ToNumberDescriptor)
};

class WasmAtomicNotifyDescriptor : public StaticCallInterfaceDescriptor<WasmAtomicNotifyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kMemoryIndex, kOffset, kCount)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineTypeOf<Int32T>::value, MachineTypeOf<UintPtrT>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmAtomicNotifyDescriptor)
};

class WasmI32AtomicWaitDescriptor : public StaticCallInterfaceDescriptor<WasmI32AtomicWaitDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kMemIndex, kOffset, kExpectedValue, kTimeout)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineTypeOf<Int32T>::value, MachineTypeOf<UintPtrT>::value, MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmI32AtomicWaitDescriptor)
};

class WasmI64AtomicWaitDescriptor : public StaticCallInterfaceDescriptor<WasmI64AtomicWaitDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kMemIndex, kOffset, kExpectedValue, kTimeout)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineTypeOf<Int32T>::value, MachineTypeOf<UintPtrT>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmI64AtomicWaitDescriptor)
};

class CallRefICDescriptor : public StaticCallInterfaceDescriptor<CallRefICDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(2, kVector, kIndex, kFuncref)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<RawPtrT>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<IntPtrT>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(CallRefICDescriptor)
};

class WasmGetOwnPropertyDescriptor : public StaticCallInterfaceDescriptor<WasmGetOwnPropertyDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kObject, kUniqueName)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmGetOwnPropertyDescriptor)
};

class WasmTrapDescriptor : public StaticCallInterfaceDescriptor<WasmTrapDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kError)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmTrapDescriptor)
};

class ThrowWasmTrapUnreachableDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapUnreachableDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapUnreachableDescriptor)
};

class ThrowWasmTrapMemOutOfBoundsDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapMemOutOfBoundsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapMemOutOfBoundsDescriptor)
};

class ThrowWasmTrapUnalignedAccessDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapUnalignedAccessDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapUnalignedAccessDescriptor)
};

class ThrowWasmTrapDivByZeroDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapDivByZeroDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapDivByZeroDescriptor)
};

class ThrowWasmTrapDivUnrepresentableDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapDivUnrepresentableDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapDivUnrepresentableDescriptor)
};

class ThrowWasmTrapRemByZeroDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapRemByZeroDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapRemByZeroDescriptor)
};

class ThrowWasmTrapFloatUnrepresentableDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapFloatUnrepresentableDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapFloatUnrepresentableDescriptor)
};

class ThrowWasmTrapFuncSigMismatchDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapFuncSigMismatchDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapFuncSigMismatchDescriptor)
};

class ThrowWasmTrapDataSegmentOutOfBoundsDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapDataSegmentOutOfBoundsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapDataSegmentOutOfBoundsDescriptor)
};

class ThrowWasmTrapElementSegmentOutOfBoundsDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapElementSegmentOutOfBoundsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapElementSegmentOutOfBoundsDescriptor)
};

class ThrowWasmTrapTableOutOfBoundsDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapTableOutOfBoundsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapTableOutOfBoundsDescriptor)
};

class ThrowWasmTrapRethrowNullDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapRethrowNullDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapRethrowNullDescriptor)
};

class ThrowWasmTrapNullDereferenceDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapNullDereferenceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapNullDereferenceDescriptor)
};

class ThrowWasmTrapIllegalCastDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapIllegalCastDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapIllegalCastDescriptor)
};

class ThrowWasmTrapArrayOutOfBoundsDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapArrayOutOfBoundsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapArrayOutOfBoundsDescriptor)
};

class ThrowWasmTrapArrayTooLargeDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapArrayTooLargeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapArrayTooLargeDescriptor)
};

class ThrowWasmTrapStringOffsetOutOfBoundsDescriptor : public StaticCallInterfaceDescriptor<ThrowWasmTrapStringOffsetOutOfBoundsDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowWasmTrapStringOffsetOutOfBoundsDescriptor)
};

class WasmStringNewWtf8Descriptor : public StaticCallInterfaceDescriptor<WasmStringNewWtf8Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kOffset, kSize, kMemory, kUtf8Variant)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringNewWtf8Descriptor)
};

class WasmStringNewWtf8ArrayDescriptor : public StaticCallInterfaceDescriptor<WasmStringNewWtf8ArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kStart, kEnd, kArray, kUtf8Variant)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringNewWtf8ArrayDescriptor)
};

class WasmStringNewWtf16Descriptor : public StaticCallInterfaceDescriptor<WasmStringNewWtf16Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kMemory, kOffset, kSize)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringNewWtf16Descriptor)
};

class WasmStringNewWtf16ArrayDescriptor : public StaticCallInterfaceDescriptor<WasmStringNewWtf16ArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kStart, kEnd)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringNewWtf16ArrayDescriptor)
};

class WasmStringFromDataSegmentDescriptor : public StaticCallInterfaceDescriptor<WasmStringFromDataSegmentDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kSegmentLength, kArrayStart, kArrayEnd, kSegmentIndex, kSegmentOffset)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringFromDataSegmentDescriptor)
};

class WasmStringAsWtf16Descriptor : public StaticCallInterfaceDescriptor<WasmStringAsWtf16Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kStr)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringAsWtf16Descriptor)
};

class WasmStringConstDescriptor : public StaticCallInterfaceDescriptor<WasmStringConstDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringConstDescriptor)
};

class WasmStringMeasureUtf8Descriptor : public StaticCallInterfaceDescriptor<WasmStringMeasureUtf8Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringMeasureUtf8Descriptor)
};

class WasmStringMeasureWtf8Descriptor : public StaticCallInterfaceDescriptor<WasmStringMeasureWtf8Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringMeasureWtf8Descriptor)
};

class WasmStringEncodeWtf8Descriptor : public StaticCallInterfaceDescriptor<WasmStringEncodeWtf8Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kOffset, kMemory, kUtf8Variant)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringEncodeWtf8Descriptor)
};

class WasmStringEncodeWtf8ArrayDescriptor : public StaticCallInterfaceDescriptor<WasmStringEncodeWtf8ArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kArray, kStart, kUtf8Variant)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringEncodeWtf8ArrayDescriptor)
};

class WasmStringEncodeWtf16Descriptor : public StaticCallInterfaceDescriptor<WasmStringEncodeWtf16Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kOffset, kMemory)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringEncodeWtf16Descriptor)
};

class WasmStringEncodeWtf16ArrayDescriptor : public StaticCallInterfaceDescriptor<WasmStringEncodeWtf16ArrayDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kArray, kStart)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringEncodeWtf16ArrayDescriptor)
};

class ThrowToLowerCaseCalledOnNullDescriptor : public StaticCallInterfaceDescriptor<ThrowToLowerCaseCalledOnNullDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowToLowerCaseCalledOnNullDescriptor)
};

class ThrowIndexOfCalledOnNullDescriptor : public StaticCallInterfaceDescriptor<ThrowIndexOfCalledOnNullDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(ThrowIndexOfCalledOnNullDescriptor)
};

class WasmStringConcatDescriptor : public StaticCallInterfaceDescriptor<WasmStringConcatDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kA, kB)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringConcatDescriptor)
};

class WasmStringEqualDescriptor : public StaticCallInterfaceDescriptor<WasmStringEqualDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kA, kB)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringEqualDescriptor)
};

class WasmStringIsUSVSequenceDescriptor : public StaticCallInterfaceDescriptor<WasmStringIsUSVSequenceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kStr)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringIsUSVSequenceDescriptor)
};

class WasmStringAsWtf8Descriptor : public StaticCallInterfaceDescriptor<WasmStringAsWtf8Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kStr)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringAsWtf8Descriptor)
};

class WasmStringViewWtf8AdvanceDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewWtf8AdvanceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kView, kPos, kBytes)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewWtf8AdvanceDescriptor)
};

class WasmStringViewWtf8EncodeDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewWtf8EncodeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(2, kAddr, kPos, kBytes, kView, kMemory, kUtf8Variant)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<UintPtrT>::value, MachineTypeOf<UintPtrT>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewWtf8EncodeDescriptor)
};

class WasmStringViewWtf8SliceDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewWtf8SliceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kView, kStart, kEnd)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewWtf8SliceDescriptor)
};

class WasmStringViewWtf16GetCodeUnitDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewWtf16GetCodeUnitDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kOffset)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewWtf16GetCodeUnitDescriptor)
};

class WasmStringViewWtf16EncodeDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewWtf16EncodeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kOffset, kStart, kLength, kString, kMemory)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewWtf16EncodeDescriptor)
};

class WasmStringViewWtf16SliceDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewWtf16SliceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kStart, kEnd)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value, MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewWtf16SliceDescriptor)
};

class WasmStringAsIterDescriptor : public StaticCallInterfaceDescriptor<WasmStringAsIterDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringAsIterDescriptor)
};

class WasmStringCodePointAtDescriptor : public StaticCallInterfaceDescriptor<WasmStringCodePointAtDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString, kOffset)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringCodePointAtDescriptor)
};

class WasmStringViewIterNextDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewIterNextDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kView)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewIterNextDescriptor)
};

class WasmStringViewIterAdvanceDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewIterAdvanceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kView, kCodepoints)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewIterAdvanceDescriptor)
};

class WasmStringViewIterRewindDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewIterRewindDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kView, kCodepoints)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Uint32T>::value, MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewIterRewindDescriptor)
};

class WasmStringViewIterSliceDescriptor : public StaticCallInterfaceDescriptor<WasmStringViewIterSliceDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kView, kCodepoints)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringViewIterSliceDescriptor)
};

class WasmIntToStringDescriptor : public StaticCallInterfaceDescriptor<WasmIntToStringDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kX, kRadix)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Int32T>::value, MachineTypeOf<Int32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmIntToStringDescriptor)
};

class WasmStringToDoubleDescriptor : public StaticCallInterfaceDescriptor<WasmStringToDoubleDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kS)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Float64T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringToDoubleDescriptor)
};

class WasmStringFromCodePointDescriptor : public StaticCallInterfaceDescriptor<WasmStringFromCodePointDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kCodePoint)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineTypeOf<Uint32T>::value)
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringFromCodePointDescriptor)
};

class WasmStringHashDescriptor : public StaticCallInterfaceDescriptor<WasmStringHashDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kString)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineTypeOf<Int32T>::value, MachineType::TaggedPointer())
  DECLARE_DEFAULT_DESCRIPTOR(WasmStringHashDescriptor)
};

class WasmExternInternalizeDescriptor : public StaticCallInterfaceDescriptor<WasmExternInternalizeDescriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kExternObject)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(WasmExternInternalizeDescriptor)
};

class LoadJoinElement_GenericElementsAccessor_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinElement_GenericElementsAccessor_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinElement_GenericElementsAccessor_0Descriptor)
};

class LoadJoinTypedElement_Int32Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Int32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Int32Elements_0Descriptor)
};

class LoadJoinTypedElement_Float32Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Float32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Float32Elements_0Descriptor)
};

class LoadJoinTypedElement_Float64Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Float64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Float64Elements_0Descriptor)
};

class LoadJoinTypedElement_Uint8ClampedElements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Uint8ClampedElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Uint8ClampedElements_0Descriptor)
};

class LoadJoinTypedElement_BigUint64Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_BigUint64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_BigUint64Elements_0Descriptor)
};

class LoadJoinTypedElement_BigInt64Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_BigInt64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_BigInt64Elements_0Descriptor)
};

class LoadJoinTypedElement_Uint8Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Uint8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Uint8Elements_0Descriptor)
};

class LoadJoinTypedElement_Int8Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Int8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Int8Elements_0Descriptor)
};

class LoadJoinTypedElement_Uint16Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Uint16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Uint16Elements_0Descriptor)
};

class LoadJoinTypedElement_Int16Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Int16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Int16Elements_0Descriptor)
};

class LoadJoinTypedElement_Uint32Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadJoinTypedElement_Uint32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kK)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadJoinTypedElement_Uint32Elements_0Descriptor)
};

class GenericBuiltinTest_Smi_0Descriptor : public StaticCallInterfaceDescriptor<GenericBuiltinTest_Smi_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kParam)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(GenericBuiltinTest_Smi_0Descriptor)
};

class CanUseSameAccessor_FastDoubleElements_0Descriptor : public StaticCallInterfaceDescriptor<CanUseSameAccessor_FastDoubleElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kInitialReceiverMap, kInitialReceiverLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CanUseSameAccessor_FastDoubleElements_0Descriptor)
};

class CanUseSameAccessor_FastSmiElements_0Descriptor : public StaticCallInterfaceDescriptor<CanUseSameAccessor_FastSmiElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kInitialReceiverMap, kInitialReceiverLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CanUseSameAccessor_FastSmiElements_0Descriptor)
};

class CanUseSameAccessor_FastObjectElements_0Descriptor : public StaticCallInterfaceDescriptor<CanUseSameAccessor_FastObjectElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kReceiver, kInitialReceiverMap, kInitialReceiverLength)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::TaggedPointer(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(CanUseSameAccessor_FastObjectElements_0Descriptor)
};

class LoadNoHasPropertyCheck_GenericElementsAccessor_0Descriptor : public StaticCallInterfaceDescriptor<LoadNoHasPropertyCheck_GenericElementsAccessor_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(LoadNoHasPropertyCheck_GenericElementsAccessor_0Descriptor)
};

class Load_GenericElementsAccessor_0Descriptor : public StaticCallInterfaceDescriptor<Load_GenericElementsAccessor_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Load_GenericElementsAccessor_0Descriptor)
};

class Store_GenericElementsAccessor_0Descriptor : public StaticCallInterfaceDescriptor<Store_GenericElementsAccessor_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned(), MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(Store_GenericElementsAccessor_0Descriptor)
};

class Delete_GenericElementsAccessor_0Descriptor : public StaticCallInterfaceDescriptor<Delete_GenericElementsAccessor_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kSortState, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineType::TaggedSigned())
  DECLARE_DEFAULT_DESCRIPTOR(Delete_GenericElementsAccessor_0Descriptor)
};

class LoadTypedElement_Int32Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Int32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Int32Elements_0Descriptor)
};

class StoreTypedElementNumeric_Int32Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Int32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Int32Elements_0Descriptor)
};

class StoreTypedElementJSAny_Int32Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Int32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Int32Elements_0Descriptor)
};

class LoadTypedElement_Float32Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Float32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Float32Elements_0Descriptor)
};

class StoreTypedElementNumeric_Float32Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Float32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Float32Elements_0Descriptor)
};

class StoreTypedElementJSAny_Float32Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Float32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Float32Elements_0Descriptor)
};

class LoadTypedElement_Float64Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Float64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Float64Elements_0Descriptor)
};

class StoreTypedElementNumeric_Float64Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Float64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Float64Elements_0Descriptor)
};

class StoreTypedElementJSAny_Float64Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Float64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Float64Elements_0Descriptor)
};

class LoadTypedElement_Uint8ClampedElements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Uint8ClampedElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Uint8ClampedElements_0Descriptor)
};

class StoreTypedElementNumeric_Uint8ClampedElements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Uint8ClampedElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Uint8ClampedElements_0Descriptor)
};

class StoreTypedElementJSAny_Uint8ClampedElements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Uint8ClampedElements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Uint8ClampedElements_0Descriptor)
};

class LoadTypedElement_BigUint64Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_BigUint64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_BigUint64Elements_0Descriptor)
};

class StoreTypedElementNumeric_BigUint64Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_BigUint64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_BigUint64Elements_0Descriptor)
};

class StoreTypedElementJSAny_BigUint64Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_BigUint64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_BigUint64Elements_0Descriptor)
};

class LoadTypedElement_BigInt64Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_BigInt64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_BigInt64Elements_0Descriptor)
};

class StoreTypedElementNumeric_BigInt64Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_BigInt64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_BigInt64Elements_0Descriptor)
};

class StoreTypedElementJSAny_BigInt64Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_BigInt64Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_BigInt64Elements_0Descriptor)
};

class LoadTypedElement_Uint8Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Uint8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Uint8Elements_0Descriptor)
};

class StoreTypedElementNumeric_Uint8Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Uint8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Uint8Elements_0Descriptor)
};

class StoreTypedElementJSAny_Uint8Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Uint8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Uint8Elements_0Descriptor)
};

class LoadTypedElement_Int8Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Int8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Int8Elements_0Descriptor)
};

class StoreTypedElementNumeric_Int8Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Int8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Int8Elements_0Descriptor)
};

class StoreTypedElementJSAny_Int8Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Int8Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Int8Elements_0Descriptor)
};

class LoadTypedElement_Uint16Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Uint16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Uint16Elements_0Descriptor)
};

class StoreTypedElementNumeric_Uint16Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Uint16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Uint16Elements_0Descriptor)
};

class StoreTypedElementJSAny_Uint16Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Uint16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Uint16Elements_0Descriptor)
};

class LoadTypedElement_Int16Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Int16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Int16Elements_0Descriptor)
};

class StoreTypedElementNumeric_Int16Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Int16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Int16Elements_0Descriptor)
};

class StoreTypedElementJSAny_Int16Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Int16Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Int16Elements_0Descriptor)
};

class LoadTypedElement_Uint32Elements_0Descriptor : public StaticCallInterfaceDescriptor<LoadTypedElement_Uint32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS_NO_CONTEXT(1, kArray, kIndex)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::AnyTagged(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value)
  DECLARE_DEFAULT_DESCRIPTOR(LoadTypedElement_Uint32Elements_0Descriptor)
};

class StoreTypedElementNumeric_Uint32Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementNumeric_Uint32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementNumeric_Uint32Elements_0Descriptor)
};

class StoreTypedElementJSAny_Uint32Elements_0Descriptor : public StaticCallInterfaceDescriptor<StoreTypedElementJSAny_Uint32Elements_0Descriptor> {
 public:
  DEFINE_RESULT_AND_PARAMETERS(1, kTypedArray, kIndex, kValue)
  DEFINE_RESULT_AND_PARAMETER_TYPES(MachineType::TaggedSigned(), MachineType::TaggedPointer(), MachineTypeOf<UintPtrT>::value, MachineType::AnyTagged())
  DECLARE_DEFAULT_DESCRIPTOR(StoreTypedElementJSAny_Uint32Elements_0Descriptor)
};

