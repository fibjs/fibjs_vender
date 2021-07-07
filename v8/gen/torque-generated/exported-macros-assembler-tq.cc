#include "torque-generated/exported-macros-assembler-tq.h"
#include "torque-generated/src/builtins/arguments-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/bigint-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"
namespace v8 {
namespace internal {
TorqueStructArgumentsInfo TorqueGeneratedExportedMacrosAssembler::GetArgumentsFrameAndCount(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_f){
return GetArgumentsFrameAndCount_0(state_, p_context, p_f);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::RequireObjectCoercible(compiler::TNode<Context> p_context, compiler::TNode<Object> p_value, const char* p_name){
return RequireObjectCoercible_241(state_, p_context, p_value, p_name);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context){
return IsFastJSArray_246(state_, p_o, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False){
return BranchIfFastJSArray_247(state_, p_o, p_context, label_True, label_False);
}
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArrayForRead(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False){
return BranchIfFastJSArrayForRead_248(state_, p_o, p_context, label_True, label_False);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return IsFastJSArrayWithNoCustomIteration_249(state_, p_context, p_o);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayForReadWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return IsFastJSArrayForReadWithNoCustomIteration_250(state_, p_context, p_o);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::ToStringImpl(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return ToStringImpl_251(state_, p_context, p_o);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsIntegerOrSomeInfinity(compiler::TNode<Object> p_o){
return IsIntegerOrSomeInfinity_254(state_, p_o);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsCanonicalized(compiler::TNode<BigInt> p_bigint){
return IsCanonicalized_259(state_, p_bigint);
}
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePairNoSideEffects(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects){
return LoadKeyValuePairNoSideEffects_267(state_, p_context, p_o, label_MayHaveSideEffects);
}
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePair(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return LoadKeyValuePair_268(state_, p_context, p_o);
}
compiler::TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadTargetFromFrame(){
return LoadTargetFromFrame_304(state_);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::SlotCount(compiler::TNode<FixedArray> p_coverageInfo){
return SlotCount_307(state_, p_coverageInfo);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastRegExpPermissive(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o){
return IsFastRegExpPermissive_327(state_, p_context, p_o);
}
compiler::TNode<JSTypedArray> TorqueGeneratedExportedMacrosAssembler::TypedArraySpeciesCreateByLength(compiler::TNode<Context> p_context, const char* p_methodName, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Smi> p_length){
return TypedArraySpeciesCreateByLength_350(state_, p_context, p_methodName, p_exemplar, p_length);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstexpr1(){
return TestConstexpr1_390(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstexprIf(){
return TestConstexprIf_391(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstexprReturn(){
return TestConstexprReturn_392(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabel(){
return TestGotoLabel_393(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithOneParameter(){
return TestGotoLabelWithOneParameter_394(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithTwoParameters(){
return TestGotoLabelWithTwoParameters_395(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestBuiltinSpecialization(compiler::TNode<Context> p_c){
return TestBuiltinSpecialization_396(state_, p_c);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestPartiallyUnusedLabel(){
return TestPartiallyUnusedLabel_399(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestMacroSpecialization(){
return TestMacroSpecialization_402(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestFunctionPointers(compiler::TNode<Context> p_context){
return TestFunctionPointers_403(state_, p_context);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestVariableRedeclaration(compiler::TNode<Context> p_context){
return TestVariableRedeclaration_404(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestTernaryOperator(compiler::TNode<Smi> p_x){
return TestTernaryOperator_405(state_, p_x);
}
void TorqueGeneratedExportedMacrosAssembler::TestFunctionPointerToGeneric(compiler::TNode<Context> p_c){
return TestFunctionPointerToGeneric_406(state_, p_c);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::TestTypeAlias(compiler::TNode<BuiltinPtr> p_x){
return TestTypeAlias_407(state_, p_x);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestUnsafeCast(compiler::TNode<Context> p_context, compiler::TNode<Number> p_n){
return TestUnsafeCast_408(state_, p_context, p_n);
}
void TorqueGeneratedExportedMacrosAssembler::TestHexLiteral(){
return TestHexLiteral_409(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestLargeIntegerLiterals(compiler::TNode<Context> p_c){
return TestLargeIntegerLiterals_410(state_, p_c);
}
void TorqueGeneratedExportedMacrosAssembler::TestMultilineAssert(){
return TestMultilineAssert_411(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestNewlineInString(){
return TestNewlineInString_412(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestModuleConstBindings(){
return TestModuleConstBindings_416(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestLocalConstBindings(){
return TestLocalConstBindings_417(state_);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestStruct1(TorqueStructTestStructA p_i){
return TestStruct1_418(state_, p_i);
}
TorqueStructTestStructA TorqueGeneratedExportedMacrosAssembler::TestStruct2(compiler::TNode<Context> p_context){
return TestStruct2_419(state_, p_context);
}
TorqueStructTestStructA TorqueGeneratedExportedMacrosAssembler::TestStruct3(compiler::TNode<Context> p_context){
return TestStruct3_420(state_, p_context);
}
TorqueStructTestStructC TorqueGeneratedExportedMacrosAssembler::TestStruct4(compiler::TNode<Context> p_context){
return TestStruct4_421(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::CallTestStructInLabel(compiler::TNode<Context> p_context){
return CallTestStructInLabel_423(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestForLoop(){
return TestForLoop_424(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestSubtyping(compiler::TNode<Smi> p_x){
return TestSubtyping_425(state_, p_x);
}
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitch(compiler::TNode<Context> p_context){
return TestTypeswitch_427(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitchAsanLsanFailure(compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj){
return TestTypeswitchAsanLsanFailure_428(state_, p_context, p_obj);
}
void TorqueGeneratedExportedMacrosAssembler::TestGenericOverload(compiler::TNode<Context> p_context){
return TestGenericOverload_429(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestEquality(compiler::TNode<Context> p_context){
return TestEquality_430(state_, p_context);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestOrAnd(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestOrAnd_431(state_, p_x, p_y, p_z);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestAndOr(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestAndOr_432(state_, p_x, p_y, p_z);
}
void TorqueGeneratedExportedMacrosAssembler::TestLogicalOperators(){
return TestLogicalOperators_433(state_);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCall(compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A){
return TestCall_434(state_, p_i, label_A);
}
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode1(){
return TestOtherwiseWithCode1_435(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode2(){
return TestOtherwiseWithCode2_436(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode3(){
return TestOtherwiseWithCode3_437(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestForwardLabel(){
return TestForwardLabel_438(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestQualifiedAccess(compiler::TNode<Context> p_context){
return TestQualifiedAccess_439(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch1(compiler::TNode<Context> p_context){
return TestCatch1_440(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestCatch2Wrapper(compiler::TNode<Context> p_context){
return TestCatch2Wrapper_441(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch2(compiler::TNode<Context> p_context){
return TestCatch2_442(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestCatch3WrapperWithLabel(compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort){
return TestCatch3WrapperWithLabel_443(state_, p_context, label__Abort);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch3(compiler::TNode<Context> p_context){
return TestCatch3_444(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestIterator(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map){
return TestIterator_445(state_, p_context, p_o, p_map);
}
void TorqueGeneratedExportedMacrosAssembler::TestFrame1(compiler::TNode<Context> p_context){
return TestFrame1_446(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestNew(compiler::TNode<Context> p_context){
return TestNew_447(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestStructConstructor(compiler::TNode<Context> p_context){
return TestStructConstructor_448(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestInternalClass(compiler::TNode<Context> p_context){
return TestInternalClass_450(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstInStructs(){
return TestConstInStructs_451(state_);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::TestNewFixedArrayFromSpread(compiler::TNode<Context> p_context){
return TestNewFixedArrayFromSpread_452(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestReferences(){
return TestReferences_453(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestSlices(){
return TestSlices_454(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestSliceEnumeration(compiler::TNode<Context> p_context){
return TestSliceEnumeration_455(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestStaticAssert(){
return TestStaticAssert_456(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestLoadEliminationFixed(compiler::TNode<Context> p_context){
return TestLoadEliminationFixed_457(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestLoadEliminationVariable(compiler::TNode<Context> p_context){
return TestLoadEliminationVariable_458(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRedundantArrayElementCheck(compiler::TNode<Context> p_context){
return TestRedundantArrayElementCheck_459(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestRedundantSmiCheck(compiler::TNode<Context> p_context){
return TestRedundantSmiCheck_460(state_, p_context);
}
compiler::TNode<IntPtrT> TorqueGeneratedExportedMacrosAssembler::TestGenericStruct1(){
return TestGenericStruct1_461(state_);
}
TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr TorqueGeneratedExportedMacrosAssembler::TestGenericStruct2(){
return TestGenericStruct2_462(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestBranchOnBoolOptimization(compiler::TNode<Context> p_context, compiler::TNode<Smi> p_input){
return TestBranchOnBoolOptimization_464(state_, p_context, p_input);
}
compiler::TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadHeapObjectMap(compiler::TNode<HeapObject> p_o){
return LoadHeapObjectMap_490(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreHeapObjectMap(compiler::TNode<HeapObject> p_o, compiler::TNode<Map> p_v){
return StoreHeapObjectMap_491(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadContextLength(compiler::TNode<Context> p_o){
return LoadContextLength_492(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextLength(compiler::TNode<Context> p_o, compiler::TNode<Smi> p_v){
return StoreContextLength_493(state_, p_o, p_v);
}
compiler::TNode<ScopeInfo> TorqueGeneratedExportedMacrosAssembler::LoadContextScopeInfo(compiler::TNode<Context> p_o){
return LoadContextScopeInfo_494(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextScopeInfo(compiler::TNode<Context> p_o, compiler::TNode<ScopeInfo> p_v){
return StoreContextScopeInfo_495(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextPrevious(compiler::TNode<Context> p_o){
return LoadContextPrevious_496(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextPrevious(compiler::TNode<Context> p_o, compiler::TNode<Object> p_v){
return StoreContextPrevious_497(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextExtension(compiler::TNode<Context> p_o){
return LoadContextExtension_498(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextExtension(compiler::TNode<Context> p_o, compiler::TNode<Object> p_v){
return StoreContextExtension_499(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextNativeContext(compiler::TNode<Context> p_o){
return LoadContextNativeContext_500(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextNativeContext(compiler::TNode<Context> p_o, compiler::TNode<Object> p_v){
return StoreContextNativeContext_501(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSReceiverPropertiesOrHash(compiler::TNode<JSReceiver> p_o){
return LoadJSReceiverPropertiesOrHash_502(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSReceiverPropertiesOrHash(compiler::TNode<JSReceiver> p_o, compiler::TNode<Object> p_v){
return StoreJSReceiverPropertiesOrHash_503(state_, p_o, p_v);
}
compiler::TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadHeapNumberValue(compiler::TNode<HeapNumber> p_o){
return LoadHeapNumberValue_504(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreHeapNumberValue(compiler::TNode<HeapNumber> p_o, compiler::TNode<Float64T> p_v){
return StoreHeapNumberValue_505(state_, p_o, p_v);
}
compiler::TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumberRaw(compiler::TNode<Oddball> p_o){
return LoadOddballToNumberRaw_506(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumberRaw(compiler::TNode<Oddball> p_o, compiler::TNode<Float64T> p_v){
return StoreOddballToNumberRaw_507(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballToString(compiler::TNode<Oddball> p_o){
return LoadOddballToString_508(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToString(compiler::TNode<Oddball> p_o, compiler::TNode<String> p_v){
return StoreOddballToString_509(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumber(compiler::TNode<Oddball> p_o){
return LoadOddballToNumber_510(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumber(compiler::TNode<Oddball> p_o, compiler::TNode<Number> p_v){
return StoreOddballToNumber_511(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballTypeOf(compiler::TNode<Oddball> p_o){
return LoadOddballTypeOf_512(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballTypeOf(compiler::TNode<Oddball> p_o, compiler::TNode<String> p_v){
return StoreOddballTypeOf_513(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadOddballKind(compiler::TNode<Oddball> p_o){
return LoadOddballKind_514(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballKind(compiler::TNode<Oddball> p_o, compiler::TNode<Smi> p_v){
return StoreOddballKind_515(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadNameHashField(compiler::TNode<Name> p_o){
return LoadNameHashField_516(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreNameHashField(compiler::TNode<Name> p_o, compiler::TNode<Uint32T> p_v){
return StoreNameHashField_517(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSymbolFlags(compiler::TNode<Symbol> p_o){
return LoadSymbolFlags_518(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolFlags(compiler::TNode<Symbol> p_o, compiler::TNode<Int32T> p_v){
return StoreSymbolFlags_519(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSymbolName(compiler::TNode<Symbol> p_o){
return LoadSymbolName_520(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolName(compiler::TNode<Symbol> p_o, compiler::TNode<Object> p_v){
return StoreSymbolName_521(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadStringLength(compiler::TNode<String> p_o){
return LoadStringLength_522(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStringLength(compiler::TNode<String> p_o, compiler::TNode<Int32T> p_v){
return StoreStringLength_523(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase> p_o){
return LoadFixedArrayBaseLength_524(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFixedArrayBaseLength(compiler::TNode<FixedArrayBase> p_o, compiler::TNode<Smi> p_v){
return StoreFixedArrayBaseLength_525(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringFirst(compiler::TNode<ConsString> p_o){
return LoadConsStringFirst_526(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringFirst(compiler::TNode<ConsString> p_o, compiler::TNode<String> p_v){
return StoreConsStringFirst_527(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringSecond(compiler::TNode<ConsString> p_o){
return LoadConsStringSecond_528(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringSecond(compiler::TNode<ConsString> p_o, compiler::TNode<String> p_v){
return StoreConsStringSecond_529(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResource(compiler::TNode<ExternalString> p_o){
return LoadExternalStringResource_530(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResource(compiler::TNode<ExternalString> p_o, compiler::TNode<RawPtrT> p_v){
return StoreExternalStringResource_531(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResourceData(compiler::TNode<ExternalString> p_o){
return LoadExternalStringResourceData_532(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResourceData(compiler::TNode<ExternalString> p_o, compiler::TNode<RawPtrT> p_v){
return StoreExternalStringResourceData_533(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringParent(compiler::TNode<SlicedString> p_o){
return LoadSlicedStringParent_534(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringParent(compiler::TNode<SlicedString> p_o, compiler::TNode<String> p_v){
return StoreSlicedStringParent_535(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringOffset(compiler::TNode<SlicedString> p_o){
return LoadSlicedStringOffset_536(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringOffset(compiler::TNode<SlicedString> p_o, compiler::TNode<Smi> p_v){
return StoreSlicedStringOffset_537(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadThinStringActual(compiler::TNode<ThinString> p_o){
return LoadThinStringActual_538(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreThinStringActual(compiler::TNode<ThinString> p_o, compiler::TNode<String> p_v){
return StoreThinStringActual_539(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple2Value1(compiler::TNode<Tuple2> p_o){
return LoadTuple2Value1_540(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTuple2Value1(compiler::TNode<Tuple2> p_o, compiler::TNode<Object> p_v){
return StoreTuple2Value1_541(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple2Value2(compiler::TNode<Tuple2> p_o){
return LoadTuple2Value2_542(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTuple2Value2(compiler::TNode<Tuple2> p_o, compiler::TNode<Object> p_v){
return StoreTuple2Value2_543(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple3Value3(compiler::TNode<Tuple3> p_o){
return LoadTuple3Value3_544(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTuple3Value3(compiler::TNode<Tuple3> p_o, compiler::TNode<Object> p_v){
return StoreTuple3Value3_545(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakFixedArrayLength(compiler::TNode<WeakFixedArray> p_o){
return LoadWeakFixedArrayLength_546(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakFixedArrayLength(compiler::TNode<WeakFixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreWeakFixedArrayLength_547(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceSizeInWords(compiler::TNode<Map> p_o){
return LoadMapInstanceSizeInWords_548(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceSizeInWords(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapInstanceSizeInWords_549(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInObjectPropertiesStartOrConstructorFunctionIndex(compiler::TNode<Map> p_o){
return LoadMapInObjectPropertiesStartOrConstructorFunctionIndex_550(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInObjectPropertiesStartOrConstructorFunctionIndex(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapInObjectPropertiesStartOrConstructorFunctionIndex_551(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapUsedOrUnusedInstanceSizeInWords(compiler::TNode<Map> p_o){
return LoadMapUsedOrUnusedInstanceSizeInWords_552(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapUsedOrUnusedInstanceSizeInWords(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapUsedOrUnusedInstanceSizeInWords_553(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapVisitorId(compiler::TNode<Map> p_o){
return LoadMapVisitorId_554(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapVisitorId(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapVisitorId_555(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceType(compiler::TNode<Map> p_o){
return LoadMapInstanceType_556(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceType(compiler::TNode<Map> p_o, compiler::TNode<Uint16T> p_v){
return StoreMapInstanceType_557(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField(compiler::TNode<Map> p_o){
return LoadMapBitField_558(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapBitField_559(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField2(compiler::TNode<Map> p_o){
return LoadMapBitField2_560(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField2(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapBitField2_561(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField3(compiler::TNode<Map> p_o){
return LoadMapBitField3_562(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField3(compiler::TNode<Map> p_o, compiler::TNode<Uint32T> p_v){
return StoreMapBitField3_563(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapOptionalPadding(compiler::TNode<Map> p_o){
return LoadMapOptionalPadding_564(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapOptionalPadding(compiler::TNode<Map> p_o, compiler::TNode<Uint32T> p_v){
return StoreMapOptionalPadding_565(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototype(compiler::TNode<Map> p_o){
return LoadMapPrototype_566(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototype(compiler::TNode<Map> p_o, compiler::TNode<HeapObject> p_v){
return StoreMapPrototype_567(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapConstructorOrBackPointer(compiler::TNode<Map> p_o){
return LoadMapConstructorOrBackPointer_568(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapConstructorOrBackPointer(compiler::TNode<Map> p_o, compiler::TNode<Object> p_v){
return StoreMapConstructorOrBackPointer_569(state_, p_o, p_v);
}
compiler::TNode<DescriptorArray> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceDescriptors(compiler::TNode<Map> p_o){
return LoadMapInstanceDescriptors_570(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceDescriptors(compiler::TNode<Map> p_o, compiler::TNode<DescriptorArray> p_v){
return StoreMapInstanceDescriptors_571(state_, p_o, p_v);
}
compiler::TNode<LayoutDescriptor> TorqueGeneratedExportedMacrosAssembler::LoadMapLayoutDescriptor(compiler::TNode<Map> p_o){
return LoadMapLayoutDescriptor_572(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapLayoutDescriptor(compiler::TNode<Map> p_o, compiler::TNode<LayoutDescriptor> p_v){
return StoreMapLayoutDescriptor_573(state_, p_o, p_v);
}
compiler::TNode<WeakFixedArray> TorqueGeneratedExportedMacrosAssembler::LoadMapDependentCode(compiler::TNode<Map> p_o){
return LoadMapDependentCode_574(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapDependentCode(compiler::TNode<Map> p_o, compiler::TNode<WeakFixedArray> p_v){
return StoreMapDependentCode_575(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototypeValidityCell(compiler::TNode<Map> p_o){
return LoadMapPrototypeValidityCell_576(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototypeValidityCell(compiler::TNode<Map> p_o, compiler::TNode<Object> p_v){
return StoreMapPrototypeValidityCell_577(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapTransitionsOrPrototypeInfo(compiler::TNode<Map> p_o){
return LoadMapTransitionsOrPrototypeInfo_578(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapTransitionsOrPrototypeInfo(compiler::TNode<Map> p_o, compiler::TNode<Object> p_v){
return StoreMapTransitionsOrPrototypeInfo_579(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheKeys(compiler::TNode<EnumCache> p_o){
return LoadEnumCacheKeys_580(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheKeys(compiler::TNode<EnumCache> p_o, compiler::TNode<FixedArray> p_v){
return StoreEnumCacheKeys_581(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheIndices(compiler::TNode<EnumCache> p_o){
return LoadEnumCacheIndices_582(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheIndices(compiler::TNode<EnumCache> p_o, compiler::TNode<FixedArray> p_v){
return StoreEnumCacheIndices_583(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadSourcePositionTableWithFrameCacheSourcePositionTable(compiler::TNode<SourcePositionTableWithFrameCache> p_o){
return LoadSourcePositionTableWithFrameCacheSourcePositionTable_584(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourcePositionTableWithFrameCacheSourcePositionTable(compiler::TNode<SourcePositionTableWithFrameCache> p_o, compiler::TNode<ByteArray> p_v){
return StoreSourcePositionTableWithFrameCacheSourcePositionTable_585(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSourcePositionTableWithFrameCacheStackFrameCache(compiler::TNode<SourcePositionTableWithFrameCache> p_o){
return LoadSourcePositionTableWithFrameCacheStackFrameCache_586(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourcePositionTableWithFrameCacheStackFrameCache(compiler::TNode<SourcePositionTableWithFrameCache> p_o, compiler::TNode<Object> p_v){
return StoreSourcePositionTableWithFrameCacheStackFrameCache_587(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfAllDescriptors(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayNumberOfAllDescriptors_588(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayNumberOfAllDescriptors(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayNumberOfAllDescriptors_589(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfDescriptors(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayNumberOfDescriptors_590(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayNumberOfDescriptors(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayNumberOfDescriptors_591(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayRawNumberOfMarkedDescriptors(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayRawNumberOfMarkedDescriptors_592(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayRawNumberOfMarkedDescriptors(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayRawNumberOfMarkedDescriptors_593(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayFiller16Bits(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayFiller16Bits_594(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayFiller16Bits(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayFiller16Bits_595(state_, p_o, p_v);
}
compiler::TNode<EnumCache> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayEnumCache(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayEnumCache_596(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayEnumCache(compiler::TNode<DescriptorArray> p_o, compiler::TNode<EnumCache> p_v){
return StoreDescriptorArrayEnumCache_597(state_, p_o, p_v);
}
compiler::TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadJSObjectElements(compiler::TNode<JSObject> p_o){
return LoadJSObjectElements_598(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSObjectElements(compiler::TNode<JSObject> p_o, compiler::TNode<FixedArrayBase> p_v){
return StoreJSObjectElements_599(state_, p_o, p_v);
}
compiler::TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionSharedFunctionInfo_600(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction> p_o, compiler::TNode<SharedFunctionInfo> p_v){
return StoreJSFunctionSharedFunctionInfo_601(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionContext(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionContext_602(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionContext(compiler::TNode<JSFunction> p_o, compiler::TNode<Context> p_v){
return StoreJSFunctionContext_603(state_, p_o, p_v);
}
compiler::TNode<FeedbackCell> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionFeedbackCell(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionFeedbackCell_604(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionFeedbackCell(compiler::TNode<JSFunction> p_o, compiler::TNode<FeedbackCell> p_v){
return StoreJSFunctionFeedbackCell_605(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionCode(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionCode_606(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionCode(compiler::TNode<JSFunction> p_o, compiler::TNode<Code> p_v){
return StoreJSFunctionCode_607(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionPrototypeOrInitialMap_608(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSFunctionPrototypeOrInitialMap_609(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyTarget(compiler::TNode<JSProxy> p_o){
return LoadJSProxyTarget_610(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyTarget(compiler::TNode<JSProxy> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSProxyTarget_611(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyHandler(compiler::TNode<JSProxy> p_o){
return LoadJSProxyHandler_612(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyHandler(compiler::TNode<JSProxy> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSProxyHandler_613(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultProxy(compiler::TNode<JSProxyRevocableResult> p_o){
return LoadJSProxyRevocableResultProxy_614(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultProxy(compiler::TNode<JSProxyRevocableResult> p_o, compiler::TNode<Object> p_v){
return StoreJSProxyRevocableResultProxy_615(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultRevoke(compiler::TNode<JSProxyRevocableResult> p_o){
return LoadJSProxyRevocableResultRevoke_616(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultRevoke(compiler::TNode<JSProxyRevocableResult> p_o, compiler::TNode<Object> p_v){
return StoreJSProxyRevocableResultRevoke_617(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalProxyNativeContext(compiler::TNode<JSGlobalProxy> p_o){
return LoadJSGlobalProxyNativeContext_618(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalProxyNativeContext(compiler::TNode<JSGlobalProxy> p_o, compiler::TNode<Object> p_v){
return StoreJSGlobalProxyNativeContext_619(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSPrimitiveWrapperValue(compiler::TNode<JSPrimitiveWrapper> p_o){
return LoadJSPrimitiveWrapperValue_620(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSPrimitiveWrapperValue(compiler::TNode<JSPrimitiveWrapper> p_o, compiler::TNode<Object> p_v){
return StoreJSPrimitiveWrapperValue_621(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength> p_o){
return LoadJSArgumentsObjectWithLengthLength_622(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength> p_o, compiler::TNode<Object> p_v){
return StoreJSArgumentsObjectWithLengthLength_623(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSSloppyArgumentsObjectCallee(compiler::TNode<JSSloppyArgumentsObject> p_o){
return LoadJSSloppyArgumentsObjectCallee_624(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSSloppyArgumentsObjectCallee(compiler::TNode<JSSloppyArgumentsObject> p_o, compiler::TNode<Object> p_v){
return StoreJSSloppyArgumentsObjectCallee_625(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorIteratedObject(compiler::TNode<JSArrayIterator> p_o){
return LoadJSArrayIteratorIteratedObject_626(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorIteratedObject(compiler::TNode<JSArrayIterator> p_o, compiler::TNode<JSReceiver> p_v){
return StoreJSArrayIteratorIteratedObject_627(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorNextIndex(compiler::TNode<JSArrayIterator> p_o){
return LoadJSArrayIteratorNextIndex_628(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorNextIndex(compiler::TNode<JSArrayIterator> p_o, compiler::TNode<Number> p_v){
return StoreJSArrayIteratorNextIndex_629(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorKind(compiler::TNode<JSArrayIterator> p_o){
return LoadJSArrayIteratorKind_630(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorKind(compiler::TNode<JSArrayIterator> p_o, compiler::TNode<Smi> p_v){
return StoreJSArrayIteratorKind_631(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayLength(compiler::TNode<JSArray> p_o){
return LoadJSArrayLength_632(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayLength(compiler::TNode<JSArray> p_o, compiler::TNode<Number> p_v){
return StoreJSArrayLength_633(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallHandlerInfoCallback(compiler::TNode<CallHandlerInfo> p_o){
return LoadCallHandlerInfoCallback_634(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallHandlerInfoCallback(compiler::TNode<CallHandlerInfo> p_o, compiler::TNode<Object> p_v){
return StoreCallHandlerInfoCallback_635(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallHandlerInfoJsCallback(compiler::TNode<CallHandlerInfo> p_o){
return LoadCallHandlerInfoJsCallback_636(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallHandlerInfoJsCallback(compiler::TNode<CallHandlerInfo> p_o, compiler::TNode<Object> p_v){
return StoreCallHandlerInfoJsCallback_637(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCallHandlerInfoData(compiler::TNode<CallHandlerInfo> p_o){
return LoadCallHandlerInfoData_638(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallHandlerInfoData(compiler::TNode<CallHandlerInfo> p_o, compiler::TNode<Object> p_v){
return StoreCallHandlerInfoData_639(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadModuleExports(compiler::TNode<Module> p_o){
return LoadModuleExports_640(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleExports(compiler::TNode<Module> p_o, compiler::TNode<FixedArray> p_v){
return StoreModuleExports_641(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleHash(compiler::TNode<Module> p_o){
return LoadModuleHash_642(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleHash(compiler::TNode<Module> p_o, compiler::TNode<Smi> p_v){
return StoreModuleHash_643(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleStatus(compiler::TNode<Module> p_o){
return LoadModuleStatus_644(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleStatus(compiler::TNode<Module> p_o, compiler::TNode<Smi> p_v){
return StoreModuleStatus_645(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadModuleModuleNamespace(compiler::TNode<Module> p_o){
return LoadModuleModuleNamespace_646(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleModuleNamespace(compiler::TNode<Module> p_o, compiler::TNode<HeapObject> p_v){
return StoreModuleModuleNamespace_647(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadModuleException(compiler::TNode<Module> p_o){
return LoadModuleException_648(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleException(compiler::TNode<Module> p_o, compiler::TNode<Object> p_v){
return StoreModuleException_649(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleCode(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleCode_650(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleCode(compiler::TNode<SourceTextModule> p_o, compiler::TNode<HeapObject> p_v){
return StoreSourceTextModuleCode_651(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRegularExports(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleRegularExports_652(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRegularExports(compiler::TNode<SourceTextModule> p_o, compiler::TNode<FixedArray> p_v){
return StoreSourceTextModuleRegularExports_653(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRegularImports(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleRegularImports_654(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRegularImports(compiler::TNode<SourceTextModule> p_o, compiler::TNode<FixedArray> p_v){
return StoreSourceTextModuleRegularImports_655(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleRequestedModules(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleRequestedModules_656(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleRequestedModules(compiler::TNode<SourceTextModule> p_o, compiler::TNode<FixedArray> p_v){
return StoreSourceTextModuleRequestedModules_657(state_, p_o, p_v);
}
compiler::TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleScript(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleScript_658(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleScript(compiler::TNode<SourceTextModule> p_o, compiler::TNode<Script> p_v){
return StoreSourceTextModuleScript_659(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleImportMeta(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleImportMeta_660(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleImportMeta(compiler::TNode<SourceTextModule> p_o, compiler::TNode<HeapObject> p_v){
return StoreSourceTextModuleImportMeta_661(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleDfsIndex(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleDfsIndex_662(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleDfsIndex(compiler::TNode<SourceTextModule> p_o, compiler::TNode<Smi> p_v){
return StoreSourceTextModuleDfsIndex_663(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleDfsAncestorIndex(compiler::TNode<SourceTextModule> p_o){
return LoadSourceTextModuleDfsAncestorIndex_664(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleDfsAncestorIndex(compiler::TNode<SourceTextModule> p_o, compiler::TNode<Smi> p_v){
return StoreSourceTextModuleDfsAncestorIndex_665(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleName(compiler::TNode<SyntheticModule> p_o){
return LoadSyntheticModuleName_666(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleName(compiler::TNode<SyntheticModule> p_o, compiler::TNode<String> p_v){
return StoreSyntheticModuleName_667(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleExportNames(compiler::TNode<SyntheticModule> p_o){
return LoadSyntheticModuleExportNames_668(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleExportNames(compiler::TNode<SyntheticModule> p_o, compiler::TNode<FixedArray> p_v){
return StoreSyntheticModuleExportNames_669(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadSyntheticModuleEvaluationSteps(compiler::TNode<SyntheticModule> p_o){
return LoadSyntheticModuleEvaluationSteps_670(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSyntheticModuleEvaluationSteps(compiler::TNode<SyntheticModule> p_o, compiler::TNode<Foreign> p_v){
return StoreSyntheticModuleEvaluationSteps_671(state_, p_o, p_v);
}
compiler::TNode<Module> TorqueGeneratedExportedMacrosAssembler::LoadJSModuleNamespaceModule(compiler::TNode<JSModuleNamespace> p_o){
return LoadJSModuleNamespaceModule_672(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSModuleNamespaceModule(compiler::TNode<JSModuleNamespace> p_o, compiler::TNode<Module> p_v){
return StoreJSModuleNamespaceModule_673(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakCollectionTable(compiler::TNode<JSWeakCollection> p_o){
return LoadJSWeakCollectionTable_674(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakCollectionTable(compiler::TNode<JSWeakCollection> p_o, compiler::TNode<Object> p_v){
return StoreJSWeakCollectionTable_675(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorTable(compiler::TNode<JSCollectionIterator> p_o){
return LoadJSCollectionIteratorTable_676(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorTable(compiler::TNode<JSCollectionIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSCollectionIteratorTable_677(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorIndex(compiler::TNode<JSCollectionIterator> p_o){
return LoadJSCollectionIteratorIndex_678(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorIndex(compiler::TNode<JSCollectionIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSCollectionIteratorIndex_679(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectMessageType(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectMessageType_680(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectMessageType(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectMessageType_681(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectArguments(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectArguments_682(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectArguments(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Object> p_v){
return StoreJSMessageObjectArguments_683(state_, p_o, p_v);
}
compiler::TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectScript(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectScript_684(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectScript(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Script> p_v){
return StoreJSMessageObjectScript_685(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStackFrames(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectStackFrames_686(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStackFrames(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Object> p_v){
return StoreJSMessageObjectStackFrames_687(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectSharedInfo(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectSharedInfo_688(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectSharedInfo(compiler::TNode<JSMessageObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSMessageObjectSharedInfo_689(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectBytecodeOffset(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectBytecodeOffset_690(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectBytecodeOffset(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectBytecodeOffset_691(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStartPosition(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectStartPosition_692(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStartPosition(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectStartPosition_693(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectEndPosition(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectEndPosition_694(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectEndPosition(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectEndPosition_695(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectErrorLevel(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectErrorLevel_696(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectErrorLevel(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectErrorLevel_697(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListCapacity(compiler::TNode<WeakArrayList> p_o){
return LoadWeakArrayListCapacity_698(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakArrayListCapacity(compiler::TNode<WeakArrayList> p_o, compiler::TNode<Smi> p_v){
return StoreWeakArrayListCapacity_699(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakArrayListLength(compiler::TNode<WeakArrayList> p_o){
return LoadWeakArrayListLength_700(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakArrayListLength(compiler::TNode<WeakArrayList> p_o, compiler::TNode<Smi> p_v){
return StoreWeakArrayListLength_701(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoJsModuleNamespace(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoJsModuleNamespace_702(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoJsModuleNamespace(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<HeapObject> p_v){
return StorePrototypeInfoJsModuleNamespace_703(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoPrototypeUsers(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoPrototypeUsers_704(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoPrototypeUsers(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Object> p_v){
return StorePrototypeInfoPrototypeUsers_705(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoRegistrySlot(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoRegistrySlot_706(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoRegistrySlot(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Smi> p_v){
return StorePrototypeInfoRegistrySlot_707(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoValidityCell(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoValidityCell_708(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoValidityCell(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Object> p_v){
return StorePrototypeInfoValidityCell_709(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoObjectCreateMap(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoObjectCreateMap_710(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoObjectCreateMap(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<HeapObject> p_v){
return StorePrototypeInfoObjectCreateMap_711(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoBitField(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoBitField_712(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoBitField(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Smi> p_v){
return StorePrototypeInfoBitField_713(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSource(compiler::TNode<Script> p_o){
return LoadScriptSource_714(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSource(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSource_715(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptName(compiler::TNode<Script> p_o){
return LoadScriptName_716(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptName(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptName_717(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineOffset(compiler::TNode<Script> p_o){
return LoadScriptLineOffset_718(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineOffset(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptLineOffset_719(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptColumnOffset(compiler::TNode<Script> p_o){
return LoadScriptColumnOffset_720(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptColumnOffset(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptColumnOffset_721(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptContext(compiler::TNode<Script> p_o){
return LoadScriptContext_722(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContext(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptContext_723(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptScriptType(compiler::TNode<Script> p_o){
return LoadScriptScriptType_724(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptScriptType(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptScriptType_725(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineEnds(compiler::TNode<Script> p_o){
return LoadScriptLineEnds_726(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineEnds(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptLineEnds_727(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptId(compiler::TNode<Script> p_o){
return LoadScriptId_728(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptId(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptId_729(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromSharedOrWrappedArguments(compiler::TNode<Script> p_o){
return LoadScriptEvalFromSharedOrWrappedArguments_730(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromSharedOrWrappedArguments(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptEvalFromSharedOrWrappedArguments_731(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromPosition(compiler::TNode<Script> p_o){
return LoadScriptEvalFromPosition_732(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromPosition(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptEvalFromPosition_733(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSharedFunctionInfos(compiler::TNode<Script> p_o){
return LoadScriptSharedFunctionInfos_734(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSharedFunctionInfos(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSharedFunctionInfos_735(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptFlags(compiler::TNode<Script> p_o){
return LoadScriptFlags_736(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptFlags(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptFlags_737(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceUrl(compiler::TNode<Script> p_o){
return LoadScriptSourceUrl_738(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceUrl(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSourceUrl_739(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceMappingUrl(compiler::TNode<Script> p_o){
return LoadScriptSourceMappingUrl_740(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceMappingUrl(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSourceMappingUrl_741(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptHostDefinedOptions(compiler::TNode<Script> p_o){
return LoadScriptHostDefinedOptions_742(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptHostDefinedOptions(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptHostDefinedOptions_743(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadEmbedderDataArrayLength(compiler::TNode<EmbedderDataArray> p_o){
return LoadEmbedderDataArrayLength_744(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreEmbedderDataArrayLength(compiler::TNode<EmbedderDataArray> p_o, compiler::TNode<Smi> p_v){
return StoreEmbedderDataArrayLength_745(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataDataLength(compiler::TNode<PreparseData> p_o){
return LoadPreparseDataDataLength_746(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataDataLength(compiler::TNode<PreparseData> p_o, compiler::TNode<Int32T> p_v){
return StorePreparseDataDataLength_747(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataInnerLength(compiler::TNode<PreparseData> p_o){
return LoadPreparseDataInnerLength_748(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataInnerLength(compiler::TNode<PreparseData> p_o, compiler::TNode<Int32T> p_v){
return StorePreparseDataInnerLength_749(state_, p_o, p_v);
}
compiler::TNode<BytecodeArray> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataBytecodeArray(compiler::TNode<InterpreterData> p_o){
return LoadInterpreterDataBytecodeArray_750(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataBytecodeArray(compiler::TNode<InterpreterData> p_o, compiler::TNode<BytecodeArray> p_v){
return StoreInterpreterDataBytecodeArray_751(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataInterpreterTrampoline(compiler::TNode<InterpreterData> p_o){
return LoadInterpreterDataInterpreterTrampoline_752(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataInterpreterTrampoline(compiler::TNode<InterpreterData> p_o, compiler::TNode<Code> p_v){
return StoreInterpreterDataInterpreterTrampoline_753(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionData(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFunctionData_754(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionData(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Object> p_v){
return StoreSharedFunctionInfoFunctionData_755(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoNameOrScopeInfo(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoNameOrScopeInfo_756(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoNameOrScopeInfo(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Object> p_v){
return StoreSharedFunctionInfoNameOrScopeInfo_757(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_758(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_759(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoScriptOrDebugInfo(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoScriptOrDebugInfo_760(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoScriptOrDebugInfo(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreSharedFunctionInfoScriptOrDebugInfo_761(state_, p_o, p_v);
}
compiler::TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoLength(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoLength_762(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoLength(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int16T> p_v){
return StoreSharedFunctionInfoLength_763(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFormalParameterCount_764(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Uint16T> p_v){
return StoreSharedFunctionInfoFormalParameterCount_765(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoExpectedNofProperties(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoExpectedNofProperties_766(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoExpectedNofProperties(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Uint16T> p_v){
return StoreSharedFunctionInfoExpectedNofProperties_767(state_, p_o, p_v);
}
compiler::TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionTokenOffset(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFunctionTokenOffset_768(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionTokenOffset(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int16T> p_v){
return StoreSharedFunctionInfoFunctionTokenOffset_769(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFlags(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFlags_770(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFlags(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v){
return StoreSharedFunctionInfoFlags_771(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionLiteralId(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFunctionLiteralId_772(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionLiteralId(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v){
return StoreSharedFunctionInfoFunctionLiteralId_773(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataInferredName(compiler::TNode<UncompiledData> p_o){
return LoadUncompiledDataInferredName_774(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataInferredName(compiler::TNode<UncompiledData> p_o, compiler::TNode<String> p_v){
return StoreUncompiledDataInferredName_775(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataStartPosition(compiler::TNode<UncompiledData> p_o){
return LoadUncompiledDataStartPosition_776(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataStartPosition(compiler::TNode<UncompiledData> p_o, compiler::TNode<Int32T> p_v){
return StoreUncompiledDataStartPosition_777(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataEndPosition(compiler::TNode<UncompiledData> p_o){
return LoadUncompiledDataEndPosition_778(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataEndPosition(compiler::TNode<UncompiledData> p_o, compiler::TNode<Int32T> p_v){
return StoreUncompiledDataEndPosition_779(state_, p_o, p_v);
}
compiler::TNode<PreparseData> TorqueGeneratedExportedMacrosAssembler::LoadUncompiledDataWithPreparseDataPreparseData(compiler::TNode<UncompiledDataWithPreparseData> p_o){
return LoadUncompiledDataWithPreparseDataPreparseData_780(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreUncompiledDataWithPreparseDataPreparseData(compiler::TNode<UncompiledDataWithPreparseData> p_o, compiler::TNode<PreparseData> p_v){
return StoreUncompiledDataWithPreparseDataPreparseData_781(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundTargetFunction(compiler::TNode<JSBoundFunction> p_o){
return LoadJSBoundFunctionBoundTargetFunction_782(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundTargetFunction(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<JSReceiver> p_v){
return StoreJSBoundFunctionBoundTargetFunction_783(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundThis(compiler::TNode<JSBoundFunction> p_o){
return LoadJSBoundFunctionBoundThis_784(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundThis(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<Object> p_v){
return StoreJSBoundFunctionBoundThis_785(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundArguments(compiler::TNode<JSBoundFunction> p_o){
return LoadJSBoundFunctionBoundArguments_786(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundArguments(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<FixedArray> p_v){
return StoreJSBoundFunctionBoundArguments_787(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadForeignForeignAddress(compiler::TNode<Foreign> p_o){
return LoadForeignForeignAddress_788(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreForeignForeignAddress(compiler::TNode<Foreign> p_o, compiler::TNode<RawPtrT> p_v){
return StoreForeignForeignAddress_789(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFreeSpaceSize(compiler::TNode<FreeSpace> p_o){
return LoadFreeSpaceSize_790(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFreeSpaceSize(compiler::TNode<FreeSpace> p_o, compiler::TNode<Smi> p_v){
return StoreFreeSpaceSize_791(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFreeSpaceNext(compiler::TNode<FreeSpace> p_o){
return LoadFreeSpaceNext_792(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFreeSpaceNext(compiler::TNode<FreeSpace> p_o, compiler::TNode<Object> p_v){
return StoreFreeSpaceNext_793(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferByteLength(compiler::TNode<JSArrayBuffer> p_o){
return LoadJSArrayBufferByteLength_794(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferByteLength(compiler::TNode<JSArrayBuffer> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSArrayBufferByteLength_795(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer> p_o){
return LoadJSArrayBufferBackingStore_796(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer> p_o, compiler::TNode<RawPtrT> p_v){
return StoreJSArrayBufferBackingStore_797(state_, p_o, p_v);
}
compiler::TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView> p_o){
return LoadJSArrayBufferViewBuffer_798(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<JSArrayBuffer> p_v){
return StoreJSArrayBufferViewBuffer_799(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView> p_o){
return LoadJSArrayBufferViewByteOffset_800(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSArrayBufferViewByteOffset_801(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView> p_o){
return LoadJSArrayBufferViewByteLength_802(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSArrayBufferViewByteLength_803(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayLength(compiler::TNode<JSTypedArray> p_o){
return LoadJSTypedArrayLength_804(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayLength(compiler::TNode<JSTypedArray> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSTypedArrayLength_805(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayExternalPointer(compiler::TNode<JSTypedArray> p_o){
return LoadJSTypedArrayExternalPointer_806(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayExternalPointer(compiler::TNode<JSTypedArray> p_o, compiler::TNode<RawPtrT> p_v){
return StoreJSTypedArrayExternalPointer_807(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayBasePointer(compiler::TNode<JSTypedArray> p_o){
return LoadJSTypedArrayBasePointer_808(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayBasePointer(compiler::TNode<JSTypedArray> p_o, compiler::TNode<Object> p_v){
return StoreJSTypedArrayBasePointer_809(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionTable(compiler::TNode<JSCollection> p_o){
return LoadJSCollectionTable_810(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionTable(compiler::TNode<JSCollection> p_o, compiler::TNode<Object> p_v){
return StoreJSCollectionTable_811(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateValue(compiler::TNode<JSDate> p_o){
return LoadJSDateValue_812(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateValue(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateValue_813(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateYear(compiler::TNode<JSDate> p_o){
return LoadJSDateYear_814(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateYear(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateYear_815(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMonth(compiler::TNode<JSDate> p_o){
return LoadJSDateMonth_816(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMonth(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateMonth_817(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateDay(compiler::TNode<JSDate> p_o){
return LoadJSDateDay_818(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateDay(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateDay_819(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateWeekday(compiler::TNode<JSDate> p_o){
return LoadJSDateWeekday_820(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateWeekday(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateWeekday_821(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateHour(compiler::TNode<JSDate> p_o){
return LoadJSDateHour_822(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateHour(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateHour_823(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMin(compiler::TNode<JSDate> p_o){
return LoadJSDateMin_824(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMin(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateMin_825(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateSec(compiler::TNode<JSDate> p_o){
return LoadJSDateSec_826(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateSec(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateSec_827(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateCacheStamp(compiler::TNode<JSDate> p_o){
return LoadJSDateCacheStamp_828(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateCacheStamp(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateCacheStamp_829(state_, p_o, p_v);
}
compiler::TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectNativeContext(compiler::TNode<JSGlobalObject> p_o){
return LoadJSGlobalObjectNativeContext_830(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectNativeContext(compiler::TNode<JSGlobalObject> p_o, compiler::TNode<NativeContext> p_v){
return StoreJSGlobalObjectNativeContext_831(state_, p_o, p_v);
}
compiler::TNode<JSGlobalProxy> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectGlobalProxy(compiler::TNode<JSGlobalObject> p_o){
return LoadJSGlobalObjectGlobalProxy_832(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectGlobalProxy(compiler::TNode<JSGlobalObject> p_o, compiler::TNode<JSGlobalProxy> p_v){
return StoreJSGlobalObjectGlobalProxy_833(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorSyncIterator(compiler::TNode<JSAsyncFromSyncIterator> p_o){
return LoadJSAsyncFromSyncIteratorSyncIterator_834(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorSyncIterator(compiler::TNode<JSAsyncFromSyncIterator> p_o, compiler::TNode<JSReceiver> p_v){
return StoreJSAsyncFromSyncIteratorSyncIterator_835(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorNext(compiler::TNode<JSAsyncFromSyncIterator> p_o){
return LoadJSAsyncFromSyncIteratorNext_836(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorNext(compiler::TNode<JSAsyncFromSyncIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSAsyncFromSyncIteratorNext_837(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorString(compiler::TNode<JSStringIterator> p_o){
return LoadJSStringIteratorString_838(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorString(compiler::TNode<JSStringIterator> p_o, compiler::TNode<String> p_v){
return StoreJSStringIteratorString_839(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorNextIndex(compiler::TNode<JSStringIterator> p_o){
return LoadJSStringIteratorNextIndex_840(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorNextIndex(compiler::TNode<JSStringIterator> p_o, compiler::TNode<Smi> p_v){
return StoreJSStringIteratorNextIndex_841(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoTag(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoTag_842(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoTag(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoTag_843(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoSerialNumber(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoSerialNumber_844(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoSerialNumber(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoSerialNumber_845(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoNumberOfProperties(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoNumberOfProperties_846(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoNumberOfProperties(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Smi> p_v){
return StoreTemplateInfoNumberOfProperties_847(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoPropertyList(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoPropertyList_848(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoPropertyList(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoPropertyList_849(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoPropertyAccessors(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoPropertyAccessors_850(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoPropertyAccessors(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoPropertyAccessors_851(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionRawStrings(compiler::TNode<TemplateObjectDescription> p_o){
return LoadTemplateObjectDescriptionRawStrings_852(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionRawStrings(compiler::TNode<TemplateObjectDescription> p_o, compiler::TNode<FixedArray> p_v){
return StoreTemplateObjectDescriptionRawStrings_853(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionCookedStrings(compiler::TNode<TemplateObjectDescription> p_o){
return LoadTemplateObjectDescriptionCookedStrings_854(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionCookedStrings(compiler::TNode<TemplateObjectDescription> p_o, compiler::TNode<FixedArray> p_v){
return StoreTemplateObjectDescriptionCookedStrings_855(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataPrototypeTemplate_856(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataPrototypeTemplate_857(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeProviderTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataPrototypeProviderTemplate_858(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeProviderTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataPrototypeProviderTemplate_859(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataParentTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataParentTemplate_860(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataParentTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataParentTemplate_861(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataNamedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataNamedPropertyHandler_862(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataNamedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataNamedPropertyHandler_863(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataIndexedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataIndexedPropertyHandler_864(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataIndexedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataIndexedPropertyHandler_865(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataInstanceTemplate_866(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataInstanceTemplate_867(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceCallHandler(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataInstanceCallHandler_868(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceCallHandler(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataInstanceCallHandler_869(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataAccessCheckInfo(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataAccessCheckInfo_870(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataAccessCheckInfo(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataAccessCheckInfo_871(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCallCode(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoCallCode_872(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCallCode(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoCallCode_873(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoClassName(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoClassName_874(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoClassName(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoClassName_875(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSignature(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoSignature_876(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSignature(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoSignature_877(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoRareData(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoRareData_878(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoRareData(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreFunctionTemplateInfoRareData_879(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSharedFunctionInfo(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoSharedFunctionInfo_880(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSharedFunctionInfo(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoSharedFunctionInfo_881(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoFlag(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoFlag_882(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoFlag(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Smi> p_v){
return StoreFunctionTemplateInfoFlag_883(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoLength(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoLength_884(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoLength(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Smi> p_v){
return StoreFunctionTemplateInfoLength_885(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCachedPropertyName(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoCachedPropertyName_886(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCachedPropertyName(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoCachedPropertyName_887(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoConstructor(compiler::TNode<ObjectTemplateInfo> p_o){
return LoadObjectTemplateInfoConstructor_888(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoConstructor(compiler::TNode<ObjectTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreObjectTemplateInfoConstructor_889(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoData(compiler::TNode<ObjectTemplateInfo> p_o){
return LoadObjectTemplateInfoData_890(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoData(compiler::TNode<ObjectTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreObjectTemplateInfoData_891(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyArrayLengthAndHash(compiler::TNode<PropertyArray> p_o){
return LoadPropertyArrayLengthAndHash_892(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyArrayLengthAndHash(compiler::TNode<PropertyArray> p_o, compiler::TNode<Smi> p_v){
return StorePropertyArrayLengthAndHash_893(state_, p_o, p_v);
}
compiler::TNode<Name> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellName(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellName_894(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellName(compiler::TNode<PropertyCell> p_o, compiler::TNode<Name> p_v){
return StorePropertyCellName_895(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellPropertyDetailsRaw(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellPropertyDetailsRaw_896(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellPropertyDetailsRaw(compiler::TNode<PropertyCell> p_o, compiler::TNode<Smi> p_v){
return StorePropertyCellPropertyDetailsRaw_897(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellValue(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellValue_898(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellValue(compiler::TNode<PropertyCell> p_o, compiler::TNode<Object> p_v){
return StorePropertyCellValue_899(state_, p_o, p_v);
}
compiler::TNode<WeakFixedArray> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellDependentCode(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellDependentCode_900(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellDependentCode(compiler::TNode<PropertyCell> p_o, compiler::TNode<WeakFixedArray> p_v){
return StorePropertyCellDependentCode_901(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSDataViewDataPointer(compiler::TNode<JSDataView> p_o){
return LoadJSDataViewDataPointer_902(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataViewDataPointer(compiler::TNode<JSDataView> p_o, compiler::TNode<RawPtrT> p_v){
return StoreJSDataViewDataPointer_903(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoGetter(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoGetter_904(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoGetter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoGetter_905(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoSetter(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoSetter_906(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoSetter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoSetter_907(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoQuery(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoQuery_908(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoQuery(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoQuery_909(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDescriptor(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoDescriptor_910(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDescriptor(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoDescriptor_911(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDeleter(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoDeleter_912(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDeleter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoDeleter_913(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoEnumerator(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoEnumerator_914(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoEnumerator(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoEnumerator_915(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDefiner(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoDefiner_916(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDefiner(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoDefiner_917(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoData(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoData_918(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoData(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoData_919(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoFlags(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoFlags_920(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoFlags(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Smi> p_v){
return StoreInterceptorInfoFlags_921(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoCallback(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoCallback_922(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoCallback(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoCallback_923(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoNamedInterceptor(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoNamedInterceptor_924(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoNamedInterceptor(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoNamedInterceptor_925(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoIndexedInterceptor(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoIndexedInterceptor_926(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoIndexedInterceptor(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoIndexedInterceptor_927(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoData(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoData_928(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoData(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoData_929(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionFlags(compiler::TNode<ArrayBoilerplateDescription> p_o){
return LoadArrayBoilerplateDescriptionFlags_930(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionFlags(compiler::TNode<ArrayBoilerplateDescription> p_o, compiler::TNode<Smi> p_v){
return StoreArrayBoilerplateDescriptionFlags_931(state_, p_o, p_v);
}
compiler::TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionConstantElements(compiler::TNode<ArrayBoilerplateDescription> p_o){
return LoadArrayBoilerplateDescriptionConstantElements_932(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionConstantElements(compiler::TNode<ArrayBoilerplateDescription> p_o, compiler::TNode<FixedArrayBase> p_v){
return StoreArrayBoilerplateDescriptionConstantElements_933(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAliasedArgumentsEntryAliasedContextSlot(compiler::TNode<AliasedArgumentsEntry> p_o){
return LoadAliasedArgumentsEntryAliasedContextSlot_934(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAliasedArgumentsEntryAliasedContextSlot(compiler::TNode<AliasedArgumentsEntry> p_o, compiler::TNode<Smi> p_v){
return StoreAliasedArgumentsEntryAliasedContextSlot_935(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCellValue(compiler::TNode<Cell> p_o){
return LoadCellValue_936(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCellValue(compiler::TNode<Cell> p_o, compiler::TNode<Object> p_v){
return StoreCellValue_937(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerSmiHandler(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerSmiHandler_938(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerSmiHandler(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerSmiHandler_939(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerValidityCell(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerValidityCell_940(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerValidityCell(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerValidityCell_941(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData1(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerData1_942(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData1(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerData1_943(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData2(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerData2_944(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData2(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerData2_945(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData3(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerData3_946(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData3(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerData3_947(state_, p_o, p_v);
}
compiler::TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectFunction(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectFunction_948(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectFunction(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<JSFunction> p_v){
return StoreJSGeneratorObjectFunction_949(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContext(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectContext_950(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContext(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Context> p_v){
return StoreJSGeneratorObjectContext_951(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectReceiver(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectReceiver_952(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectReceiver(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Object> p_v){
return StoreJSGeneratorObjectReceiver_953(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectInputOrDebugPos(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectInputOrDebugPos_954(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectInputOrDebugPos(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Object> p_v){
return StoreJSGeneratorObjectInputOrDebugPos_955(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectResumeMode(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectResumeMode_956(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectResumeMode(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSGeneratorObjectResumeMode_957(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContinuation(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectContinuation_958(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContinuation(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSGeneratorObjectContinuation_959(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectParametersAndRegisters(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectParametersAndRegisters_960(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectParametersAndRegisters(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreJSGeneratorObjectParametersAndRegisters_961(state_, p_o, p_v);
}
compiler::TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFunctionObjectPromise(compiler::TNode<JSAsyncFunctionObject> p_o){
return LoadJSAsyncFunctionObjectPromise_962(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFunctionObjectPromise(compiler::TNode<JSAsyncFunctionObject> p_o, compiler::TNode<JSPromise> p_v){
return StoreJSAsyncFunctionObjectPromise_963(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectQueue(compiler::TNode<JSAsyncGeneratorObject> p_o){
return LoadJSAsyncGeneratorObjectQueue_964(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectQueue(compiler::TNode<JSAsyncGeneratorObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSAsyncGeneratorObjectQueue_965(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectIsAwaiting(compiler::TNode<JSAsyncGeneratorObject> p_o){
return LoadJSAsyncGeneratorObjectIsAwaiting_966(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectIsAwaiting(compiler::TNode<JSAsyncGeneratorObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSAsyncGeneratorObjectIsAwaiting_967(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseReactionsOrResult(compiler::TNode<JSPromise> p_o){
return LoadJSPromiseReactionsOrResult_968(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseReactionsOrResult(compiler::TNode<JSPromise> p_o, compiler::TNode<Object> p_v){
return StoreJSPromiseReactionsOrResult_969(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseFlags(compiler::TNode<JSPromise> p_o){
return LoadJSPromiseFlags_970(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseFlags(compiler::TNode<JSPromise> p_o, compiler::TNode<Smi> p_v){
return StoreJSPromiseFlags_971(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskCallback(compiler::TNode<CallbackTask> p_o){
return LoadCallbackTaskCallback_972(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskCallback(compiler::TNode<CallbackTask> p_o, compiler::TNode<Foreign> p_v){
return StoreCallbackTaskCallback_973(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskData(compiler::TNode<CallbackTask> p_o){
return LoadCallbackTaskData_974(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskData(compiler::TNode<CallbackTask> p_o, compiler::TNode<Foreign> p_v){
return StoreCallbackTaskData_975(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskCallable(compiler::TNode<CallableTask> p_o){
return LoadCallableTaskCallable_976(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskCallable(compiler::TNode<CallableTask> p_o, compiler::TNode<JSReceiver> p_v){
return StoreCallableTaskCallable_977(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskContext(compiler::TNode<CallableTask> p_o){
return LoadCallableTaskContext_978(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskContext(compiler::TNode<CallableTask> p_o, compiler::TNode<Context> p_v){
return StoreCallableTaskContext_979(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoLineNumber(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoLineNumber_980(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoLineNumber(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoLineNumber_981(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoColumnNumber(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoColumnNumber_982(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoColumnNumber(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoColumnNumber_983(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoPromiseAllIndex(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoPromiseAllIndex_984(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoPromiseAllIndex(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoPromiseAllIndex_985(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoScriptId(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoScriptId_986(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoScriptId(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoScriptId_987(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoScriptName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoScriptName_988(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoScriptName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoScriptName_989(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoScriptNameOrSourceUrl(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoScriptNameOrSourceUrl_990(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoScriptNameOrSourceUrl(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoScriptNameOrSourceUrl_991(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFunctionName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoFunctionName_992(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFunctionName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoFunctionName_993(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoMethodName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoMethodName_994(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoMethodName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoMethodName_995(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoTypeName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoTypeName_996(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoTypeName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoTypeName_997(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoEvalOrigin(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoEvalOrigin_998(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoEvalOrigin(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoEvalOrigin_999(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoWasmModuleName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoWasmModuleName_1000(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoWasmModuleName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoWasmModuleName_1001(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoWasmInstance(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoWasmInstance_1002(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoWasmInstance(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackFrameInfoWasmInstance_1003(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFlag(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoFlag_1004(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFlag(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoFlag_1005(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameFrameArray(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameFrameArray_1006(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameFrameArray(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackTraceFrameFrameArray_1007(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameFrameIndex(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameFrameIndex_1008(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameFrameIndex(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<Smi> p_v){
return StoreStackTraceFrameFrameIndex_1009(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameFrameInfo(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameFrameInfo_1010(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameFrameInfo(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<HeapObject> p_v){
return StoreStackTraceFrameFrameInfo_1011(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameId(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameId_1012(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameId(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<Smi> p_v){
return StoreStackTraceFrameId_1013(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassPositionsStart(compiler::TNode<ClassPositions> p_o){
return LoadClassPositionsStart_1014(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreClassPositionsStart(compiler::TNode<ClassPositions> p_o, compiler::TNode<Smi> p_v){
return StoreClassPositionsStart_1015(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassPositionsEnd(compiler::TNode<ClassPositions> p_o){
return LoadClassPositionsEnd_1016(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreClassPositionsEnd(compiler::TNode<ClassPositions> p_o, compiler::TNode<Smi> p_v){
return StoreClassPositionsEnd_1017(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataWrapperCode(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataWrapperCode_1018(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataWrapperCode(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Code> p_v){
return StoreWasmExportedFunctionDataWrapperCode_1019(state_, p_o, p_v);
}
compiler::TNode<JSObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataInstance(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataInstance_1020(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataInstance(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<JSObject> p_v){
return StoreWasmExportedFunctionDataInstance_1021(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataJumpTableOffset(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataJumpTableOffset_1022(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataJumpTableOffset(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExportedFunctionDataJumpTableOffset_1023(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataFunctionIndex(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataFunctionIndex_1024(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataFunctionIndex(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExportedFunctionDataFunctionIndex_1025(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataCWrapperCode(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataCWrapperCode_1026(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataCWrapperCode(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Object> p_v){
return StoreWasmExportedFunctionDataCWrapperCode_1027(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataWasmCallTarget(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataWasmCallTarget_1028(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataWasmCallTarget(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Object> p_v){
return StoreWasmExportedFunctionDataWasmCallTarget_1029(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataPackedArgsSize(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataPackedArgsSize_1030(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataPackedArgsSize(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExportedFunctionDataPackedArgsSize_1031(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataCallable(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataCallable_1032(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataCallable(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<JSReceiver> p_v){
return StoreWasmJSFunctionDataCallable_1033(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataWrapperCode(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataWrapperCode_1034(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataWrapperCode(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<Code> p_v){
return StoreWasmJSFunctionDataWrapperCode_1035(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedReturnCount(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataSerializedReturnCount_1036(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedReturnCount(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmJSFunctionDataSerializedReturnCount_1037(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedParameterCount(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataSerializedParameterCount_1038(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedParameterCount(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmJSFunctionDataSerializedParameterCount_1039(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedSignature(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataSerializedSignature_1040(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedSignature(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<ByteArray> p_v){
return StoreWasmJSFunctionDataSerializedSignature_1041(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataCallTarget(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataCallTarget_1042(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataCallTarget(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<RawPtrT> p_v){
return StoreWasmCapiFunctionDataCallTarget_1043(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataEmbedderData(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataEmbedderData_1044(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataEmbedderData(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<Foreign> p_v){
return StoreWasmCapiFunctionDataEmbedderData_1045(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataWrapperCode(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataWrapperCode_1046(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataWrapperCode(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<Code> p_v){
return StoreWasmCapiFunctionDataWrapperCode_1047(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataSerializedSignature(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataSerializedSignature_1048(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataSerializedSignature(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<ByteArray> p_v){
return StoreWasmCapiFunctionDataSerializedSignature_1049(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableSize(compiler::TNode<WasmIndirectFunctionTable> p_o){
return LoadWasmIndirectFunctionTableSize_1050(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableSize(compiler::TNode<WasmIndirectFunctionTable> p_o, compiler::TNode<Uint32T> p_v){
return StoreWasmIndirectFunctionTableSize_1051(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableOptionalPadding(compiler::TNode<WasmIndirectFunctionTable> p_o){
return LoadWasmIndirectFunctionTableOptionalPadding_1052(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableOptionalPadding(compiler::TNode<WasmIndirectFunctionTable> p_o, compiler::TNode<Uint32T> p_v){
return StoreWasmIndirectFunctionTableOptionalPadding_1053(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableSigIds(compiler::TNode<WasmIndirectFunctionTable> p_o){
return LoadWasmIndirectFunctionTableSigIds_1054(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableSigIds(compiler::TNode<WasmIndirectFunctionTable> p_o, compiler::TNode<RawPtrT> p_v){
return StoreWasmIndirectFunctionTableSigIds_1055(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableTargets(compiler::TNode<WasmIndirectFunctionTable> p_o){
return LoadWasmIndirectFunctionTableTargets_1056(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableTargets(compiler::TNode<WasmIndirectFunctionTable> p_o, compiler::TNode<RawPtrT> p_v){
return StoreWasmIndirectFunctionTableTargets_1057(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableManagedNativeAllocations(compiler::TNode<WasmIndirectFunctionTable> p_o){
return LoadWasmIndirectFunctionTableManagedNativeAllocations_1058(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableManagedNativeAllocations(compiler::TNode<WasmIndirectFunctionTable> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmIndirectFunctionTableManagedNativeAllocations_1059(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmIndirectFunctionTableRefs(compiler::TNode<WasmIndirectFunctionTable> p_o){
return LoadWasmIndirectFunctionTableRefs_1060(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmIndirectFunctionTableRefs(compiler::TNode<WasmIndirectFunctionTable> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmIndirectFunctionTableRefs_1061(state_, p_o, p_v);
}
compiler::TNode<JSObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoInstance(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoInstance_1062(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoInstance(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<JSObject> p_v){
return StoreWasmDebugInfoInstance_1063(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoInterpreterHandle(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoInterpreterHandle_1064(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoInterpreterHandle(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoInterpreterHandle_1065(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoLocalsNames(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoLocalsNames_1066(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoLocalsNames(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoLocalsNames_1067(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoCWasmEntries(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoCWasmEntries_1068(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoCWasmEntries(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoCWasmEntries_1069(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoCWasmEntryMap(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoCWasmEntryMap_1070(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoCWasmEntryMap(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoCWasmEntryMap_1071(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionTagIndex(compiler::TNode<WasmExceptionTag> p_o){
return LoadWasmExceptionTagIndex_1072(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionTagIndex(compiler::TNode<WasmExceptionTag> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExceptionTagIndex_1073(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestNext(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestNext_1074(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestNext(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<HeapObject> p_v){
return StoreAsyncGeneratorRequestNext_1075(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestResumeMode(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestResumeMode_1076(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestResumeMode(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<Smi> p_v){
return StoreAsyncGeneratorRequestResumeMode_1077(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestValue(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestValue_1078(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestValue(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<Object> p_v){
return StoreAsyncGeneratorRequestValue_1079(state_, p_o, p_v);
}
compiler::TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestPromise(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestPromise_1080(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestPromise(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<JSPromise> p_v){
return StoreAsyncGeneratorRequestPromise_1081(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryExportName(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryExportName_1082(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryExportName(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v){
return StoreSourceTextModuleInfoEntryExportName_1083(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryLocalName(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryLocalName_1084(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryLocalName(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v){
return StoreSourceTextModuleInfoEntryLocalName_1085(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryImportName(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryImportName_1086(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryImportName(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v){
return StoreSourceTextModuleInfoEntryImportName_1087(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryModuleRequest(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryModuleRequest_1088(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryModuleRequest(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreSourceTextModuleInfoEntryModuleRequest_1089(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryCellIndex(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryCellIndex_1090(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryCellIndex(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreSourceTextModuleInfoEntryCellIndex_1091(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryBegPos(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryBegPos_1092(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryBegPos(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreSourceTextModuleInfoEntryBegPos_1093(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSourceTextModuleInfoEntryEndPos(compiler::TNode<SourceTextModuleInfoEntry> p_o){
return LoadSourceTextModuleInfoEntryEndPos_1094(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourceTextModuleInfoEntryEndPos(compiler::TNode<SourceTextModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreSourceTextModuleInfoEntryEndPos_1095(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityPromise(compiler::TNode<PromiseCapability> p_o){
return LoadPromiseCapabilityPromise_1096(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityPromise(compiler::TNode<PromiseCapability> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseCapabilityPromise_1097(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityResolve(compiler::TNode<PromiseCapability> p_o){
return LoadPromiseCapabilityResolve_1098(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityResolve(compiler::TNode<PromiseCapability> p_o, compiler::TNode<Object> p_v){
return StorePromiseCapabilityResolve_1099(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityReject(compiler::TNode<PromiseCapability> p_o){
return LoadPromiseCapabilityReject_1100(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityReject(compiler::TNode<PromiseCapability> p_o, compiler::TNode<Object> p_v){
return StorePromiseCapabilityReject_1101(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionNext(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionNext_1102(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionNext(compiler::TNode<PromiseReaction> p_o, compiler::TNode<Object> p_v){
return StorePromiseReactionNext_1103(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionRejectHandler(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionRejectHandler_1104(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionRejectHandler(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionRejectHandler_1105(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionFulfillHandler(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionFulfillHandler_1106(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionFulfillHandler(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionFulfillHandler_1107(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionPromiseOrCapability(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionPromiseOrCapability_1108(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionPromiseOrCapability(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionPromiseOrCapability_1109(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskArgument(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskArgument_1110(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskArgument(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<Object> p_v){
return StorePromiseReactionJobTaskArgument_1111(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskContext(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskContext_1112(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskContext(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<Context> p_v){
return StorePromiseReactionJobTaskContext_1113(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskHandler(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskHandler_1114(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskHandler(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionJobTaskHandler_1115(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskPromiseOrCapability(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskPromiseOrCapability_1116(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskPromiseOrCapability(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionJobTaskPromiseOrCapability_1117(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskContext(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskContext_1118(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskContext(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<Context> p_v){
return StorePromiseResolveThenableJobTaskContext_1119(state_, p_o, p_v);
}
compiler::TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskPromiseToResolve(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskPromiseToResolve_1120(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskPromiseToResolve(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<JSPromise> p_v){
return StorePromiseResolveThenableJobTaskPromiseToResolve_1121(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThen(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskThen_1122(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThen(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<JSReceiver> p_v){
return StorePromiseResolveThenableJobTaskThen_1123(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThenable(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskThenable_1124(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThenable(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<JSReceiver> p_v){
return StorePromiseResolveThenableJobTaskThenable_1125(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpData(compiler::TNode<JSRegExp> p_o){
return LoadJSRegExpData_1126(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpData(compiler::TNode<JSRegExp> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSRegExpData_1127(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpSource(compiler::TNode<JSRegExp> p_o){
return LoadJSRegExpSource_1128(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpSource(compiler::TNode<JSRegExp> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSRegExpSource_1129(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpFlags(compiler::TNode<JSRegExp> p_o){
return LoadJSRegExpFlags_1130(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpFlags(compiler::TNode<JSRegExp> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpFlags_1131(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultIndex(compiler::TNode<JSRegExpResult> p_o){
return LoadJSRegExpResultIndex_1132(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultIndex(compiler::TNode<JSRegExpResult> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpResultIndex_1133(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultInput(compiler::TNode<JSRegExpResult> p_o){
return LoadJSRegExpResultInput_1134(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultInput(compiler::TNode<JSRegExpResult> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpResultInput_1135(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultGroups(compiler::TNode<JSRegExpResult> p_o){
return LoadJSRegExpResultGroups_1136(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultGroups(compiler::TNode<JSRegExpResult> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpResultGroups_1137(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratingRegExp(compiler::TNode<JSRegExpStringIterator> p_o){
return LoadJSRegExpStringIteratorIteratingRegExp_1138(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratingRegExp(compiler::TNode<JSRegExpStringIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpStringIteratorIteratingRegExp_1139(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratedString(compiler::TNode<JSRegExpStringIterator> p_o){
return LoadJSRegExpStringIteratorIteratedString_1140(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratedString(compiler::TNode<JSRegExpStringIterator> p_o, compiler::TNode<String> p_v){
return StoreJSRegExpStringIteratorIteratedString_1141(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorFlags(compiler::TNode<JSRegExpStringIterator> p_o){
return LoadJSRegExpStringIteratorFlags_1142(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorFlags(compiler::TNode<JSRegExpStringIterator> p_o, compiler::TNode<Smi> p_v){
return StoreJSRegExpStringIteratorFlags_1143(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoName(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoName_1144(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoName(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoName_1145(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoFlags(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoFlags_1146(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoFlags(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Smi> p_v){
return StoreAccessorInfoFlags_1147(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoExpectedReceiverType(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoExpectedReceiverType_1148(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoExpectedReceiverType(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoExpectedReceiverType_1149(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoSetter(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoSetter_1150(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoSetter(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoSetter_1151(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoGetter(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoGetter_1152(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoGetter(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoGetter_1153(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoJsGetter(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoJsGetter_1154(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoJsGetter(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoJsGetter_1155(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoData(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoData_1156(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoData(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoData_1157(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorPairGetter(compiler::TNode<AccessorPair> p_o){
return LoadAccessorPairGetter_1158(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorPairGetter(compiler::TNode<AccessorPair> p_o, compiler::TNode<Object> p_v){
return StoreAccessorPairGetter_1159(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorPairSetter(compiler::TNode<AccessorPair> p_o){
return LoadAccessorPairSetter_1160(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorPairSetter(compiler::TNode<AccessorPair> p_o, compiler::TNode<Object> p_v){
return StoreAccessorPairSetter_1161(state_, p_o, p_v);
}
compiler::TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoSharedFunctionInfo(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoSharedFunctionInfo_1162(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoSharedFunctionInfo(compiler::TNode<DebugInfo> p_o, compiler::TNode<SharedFunctionInfo> p_v){
return StoreDebugInfoSharedFunctionInfo_1163(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebuggerHints(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoDebuggerHints_1164(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebuggerHints(compiler::TNode<DebugInfo> p_o, compiler::TNode<Smi> p_v){
return StoreDebugInfoDebuggerHints_1165(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoScript(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoScript_1166(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoScript(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoScript_1167(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoOriginalBytecodeArray(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoOriginalBytecodeArray_1168(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoOriginalBytecodeArray(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoOriginalBytecodeArray_1169(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebugBytecodeArray(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoDebugBytecodeArray_1170(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebugBytecodeArray(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoDebugBytecodeArray_1171(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoBreakPoints(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoBreakPoints_1172(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoBreakPoints(compiler::TNode<DebugInfo> p_o, compiler::TNode<FixedArray> p_v){
return StoreDebugInfoBreakPoints_1173(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoFlags(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoFlags_1174(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoFlags(compiler::TNode<DebugInfo> p_o, compiler::TNode<Smi> p_v){
return StoreDebugInfoFlags_1175(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoCoverageInfo(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoCoverageInfo_1176(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoCoverageInfo(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoCoverageInfo_1177(state_, p_o, p_v);
}
compiler::TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorSharedFunctionInfo(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorSharedFunctionInfo_1178(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorSharedFunctionInfo(compiler::TNode<FeedbackVector> p_o, compiler::TNode<SharedFunctionInfo> p_v){
return StoreFeedbackVectorSharedFunctionInfo_1179(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorOptimizedCodeWeakOrSmi(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorOptimizedCodeWeakOrSmi_1180(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorOptimizedCodeWeakOrSmi(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Object> p_v){
return StoreFeedbackVectorOptimizedCodeWeakOrSmi_1181(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorClosureFeedbackCellArray(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorClosureFeedbackCellArray_1182(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorClosureFeedbackCellArray(compiler::TNode<FeedbackVector> p_o, compiler::TNode<FixedArray> p_v){
return StoreFeedbackVectorClosureFeedbackCellArray_1183(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorLength(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorLength_1184(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorLength(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackVectorLength_1185(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorInvocationCount(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorInvocationCount_1186(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorInvocationCount(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackVectorInvocationCount_1187(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorProfilerTicks(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorProfilerTicks_1188(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorProfilerTicks(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackVectorProfilerTicks_1189(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorPadding(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorPadding_1190(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorPadding(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Uint32T> p_v){
return StoreFeedbackVectorPadding_1191(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellValue(compiler::TNode<FeedbackCell> p_o){
return LoadFeedbackCellValue_1192(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellValue(compiler::TNode<FeedbackCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreFeedbackCellValue_1193(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellInterruptBudget(compiler::TNode<FeedbackCell> p_o){
return LoadFeedbackCellInterruptBudget_1194(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellInterruptBudget(compiler::TNode<FeedbackCell> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackCellInterruptBudget_1195(state_, p_o, p_v);
}
compiler::TNode<Struct> TorqueGeneratedExportedMacrosAssembler::LoadAllocationMementoAllocationSite(compiler::TNode<AllocationMemento> p_o){
return LoadAllocationMementoAllocationSite_1196(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAllocationMementoAllocationSite(compiler::TNode<AllocationMemento> p_o, compiler::TNode<Struct> p_v){
return StoreAllocationMementoAllocationSite_1197(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectNativeModule(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectNativeModule_1198(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectNativeModule(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<Foreign> p_v){
return StoreWasmModuleObjectNativeModule_1199(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectExportWrappers(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectExportWrappers_1200(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectExportWrappers(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmModuleObjectExportWrappers_1201(state_, p_o, p_v);
}
compiler::TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectScript(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectScript_1202(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectScript(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<Script> p_v){
return StoreWasmModuleObjectScript_1203(state_, p_o, p_v);
}
compiler::TNode<WeakArrayList> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectWeakInstanceList(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectWeakInstanceList_1204(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectWeakInstanceList(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<WeakArrayList> p_v){
return StoreWasmModuleObjectWeakInstanceList_1205(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectAsmJsOffsetTable(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectAsmJsOffsetTable_1206(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectAsmJsOffsetTable(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmModuleObjectAsmJsOffsetTable_1207(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectBreakPointInfos(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectBreakPointInfos_1208(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectBreakPointInfos(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmModuleObjectBreakPointInfos_1209(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectEntries(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectEntries_1210(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectEntries(compiler::TNode<WasmTableObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmTableObjectEntries_1211(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectMaximumLength(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectMaximumLength_1212(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectMaximumLength(compiler::TNode<WasmTableObject> p_o, compiler::TNode<Object> p_v){
return StoreWasmTableObjectMaximumLength_1213(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectDispatchTables(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectDispatchTables_1214(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectDispatchTables(compiler::TNode<WasmTableObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmTableObjectDispatchTables_1215(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectRawType(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectRawType_1216(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectRawType(compiler::TNode<WasmTableObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmTableObjectRawType_1217(state_, p_o, p_v);
}
compiler::TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectArrayBuffer(compiler::TNode<WasmMemoryObject> p_o){
return LoadWasmMemoryObjectArrayBuffer_1218(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectArrayBuffer(compiler::TNode<WasmMemoryObject> p_o, compiler::TNode<JSArrayBuffer> p_v){
return StoreWasmMemoryObjectArrayBuffer_1219(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectMaximumPages(compiler::TNode<WasmMemoryObject> p_o){
return LoadWasmMemoryObjectMaximumPages_1220(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectMaximumPages(compiler::TNode<WasmMemoryObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmMemoryObjectMaximumPages_1221(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectInstances(compiler::TNode<WasmMemoryObject> p_o){
return LoadWasmMemoryObjectInstances_1222(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectInstances(compiler::TNode<WasmMemoryObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmMemoryObjectInstances_1223(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectUntaggedBuffer(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectUntaggedBuffer_1224(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectUntaggedBuffer(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmGlobalObjectUntaggedBuffer_1225(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectTaggedBuffer(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectTaggedBuffer_1226(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectTaggedBuffer(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmGlobalObjectTaggedBuffer_1227(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectOffset(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectOffset_1228(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectOffset(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmGlobalObjectOffset_1229(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectFlags(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectFlags_1230(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectFlags(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmGlobalObjectFlags_1231(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionObjectSerializedSignature(compiler::TNode<WasmExceptionObject> p_o){
return LoadWasmExceptionObjectSerializedSignature_1232(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionObjectSerializedSignature(compiler::TNode<WasmExceptionObject> p_o, compiler::TNode<ByteArray> p_v){
return StoreWasmExceptionObjectSerializedSignature_1233(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionObjectExceptionTag(compiler::TNode<WasmExceptionObject> p_o){
return LoadWasmExceptionObjectExceptionTag_1234(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionObjectExceptionTag(compiler::TNode<WasmExceptionObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmExceptionObjectExceptionTag_1235(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataManagedNativeModule(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataManagedNativeModule_1236(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataManagedNativeModule(compiler::TNode<AsmWasmData> p_o, compiler::TNode<Foreign> p_v){
return StoreAsmWasmDataManagedNativeModule_1237(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataExportWrappers(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataExportWrappers_1238(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataExportWrappers(compiler::TNode<AsmWasmData> p_o, compiler::TNode<FixedArray> p_v){
return StoreAsmWasmDataExportWrappers_1239(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataAsmJsOffsetTable(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataAsmJsOffsetTable_1240(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataAsmJsOffsetTable(compiler::TNode<AsmWasmData> p_o, compiler::TNode<ByteArray> p_v){
return StoreAsmWasmDataAsmJsOffsetTable_1241(state_, p_o, p_v);
}
compiler::TNode<HeapNumber> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataUsesBitset(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataUsesBitset_1242(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataUsesBitset(compiler::TNode<AsmWasmData> p_o, compiler::TNode<HeapNumber> p_v){
return StoreAsmWasmDataUsesBitset_1243(state_, p_o, p_v);
}
compiler::TNode<NativeContext> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupNativeContext(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupNativeContext_1244(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupNativeContext(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<NativeContext> p_v){
return StoreJSFinalizationGroupNativeContext_1245(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupCleanup(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupCleanup_1246(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupCleanup(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<Object> p_v){
return StoreJSFinalizationGroupCleanup_1247(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupActiveCells(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupActiveCells_1248(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupActiveCells(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSFinalizationGroupActiveCells_1249(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupClearedCells(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupClearedCells_1250(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupClearedCells(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSFinalizationGroupClearedCells_1251(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupKeyMap(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupKeyMap_1252(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupKeyMap(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<Object> p_v){
return StoreJSFinalizationGroupKeyMap_1253(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupNext(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupNext_1254(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupNext(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSFinalizationGroupNext_1255(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupFlags(compiler::TNode<JSFinalizationGroup> p_o){
return LoadJSFinalizationGroupFlags_1256(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupFlags(compiler::TNode<JSFinalizationGroup> p_o, compiler::TNode<Smi> p_v){
return StoreJSFinalizationGroupFlags_1257(state_, p_o, p_v);
}
compiler::TNode<JSFinalizationGroup> TorqueGeneratedExportedMacrosAssembler::LoadJSFinalizationGroupCleanupIteratorFinalizationGroup(compiler::TNode<JSFinalizationGroupCleanupIterator> p_o){
return LoadJSFinalizationGroupCleanupIteratorFinalizationGroup_1258(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFinalizationGroupCleanupIteratorFinalizationGroup(compiler::TNode<JSFinalizationGroupCleanupIterator> p_o, compiler::TNode<JSFinalizationGroup> p_v){
return StoreJSFinalizationGroupCleanupIteratorFinalizationGroup_1259(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellFinalizationGroup(compiler::TNode<WeakCell> p_o){
return LoadWeakCellFinalizationGroup_1260(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellFinalizationGroup(compiler::TNode<WeakCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreWeakCellFinalizationGroup_1261(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellTarget(compiler::TNode<WeakCell> p_o){
return LoadWeakCellTarget_1262(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellTarget(compiler::TNode<WeakCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreWeakCellTarget_1263(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellHoldings(compiler::TNode<WeakCell> p_o){
return LoadWeakCellHoldings_1264(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellHoldings(compiler::TNode<WeakCell> p_o, compiler::TNode<Object> p_v){
return StoreWeakCellHoldings_1265(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellPrev(compiler::TNode<WeakCell> p_o){
return LoadWeakCellPrev_1266(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellPrev(compiler::TNode<WeakCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreWeakCellPrev_1267(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellNext(compiler::TNode<WeakCell> p_o){
return LoadWeakCellNext_1268(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellNext(compiler::TNode<WeakCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreWeakCellNext_1269(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKey(compiler::TNode<WeakCell> p_o){
return LoadWeakCellKey_1270(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKey(compiler::TNode<WeakCell> p_o, compiler::TNode<Object> p_v){
return StoreWeakCellKey_1271(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKeyListPrev(compiler::TNode<WeakCell> p_o){
return LoadWeakCellKeyListPrev_1272(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKeyListPrev(compiler::TNode<WeakCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreWeakCellKeyListPrev_1273(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWeakCellKeyListNext(compiler::TNode<WeakCell> p_o){
return LoadWeakCellKeyListNext_1274(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakCellKeyListNext(compiler::TNode<WeakCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreWeakCellKeyListNext_1275(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakRefTarget(compiler::TNode<JSWeakRef> p_o){
return LoadJSWeakRefTarget_1276(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakRefTarget(compiler::TNode<JSWeakRef> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSWeakRefTarget_1277(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayConstantPool(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayConstantPool_1278(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayConstantPool(compiler::TNode<BytecodeArray> p_o, compiler::TNode<FixedArray> p_v){
return StoreBytecodeArrayConstantPool_1279(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayHandlerTable(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayHandlerTable_1280(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayHandlerTable(compiler::TNode<BytecodeArray> p_o, compiler::TNode<ByteArray> p_v){
return StoreBytecodeArrayHandlerTable_1281(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArraySourcePositionTable(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArraySourcePositionTable_1282(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArraySourcePositionTable(compiler::TNode<BytecodeArray> p_o, compiler::TNode<HeapObject> p_v){
return StoreBytecodeArraySourcePositionTable_1283(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayFrameSize(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayFrameSize_1284(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayFrameSize(compiler::TNode<BytecodeArray> p_o, compiler::TNode<Int32T> p_v){
return StoreBytecodeArrayFrameSize_1285(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayParameterSize(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayParameterSize_1286(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayParameterSize(compiler::TNode<BytecodeArray> p_o, compiler::TNode<Int32T> p_v){
return StoreBytecodeArrayParameterSize_1287(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayIncomingNewTargetOrGeneratorRegister_1288(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister(compiler::TNode<BytecodeArray> p_o, compiler::TNode<Int32T> p_v){
return StoreBytecodeArrayIncomingNewTargetOrGeneratorRegister_1289(state_, p_o, p_v);
}
compiler::TNode<Int8T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayOsrNestingLevel(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayOsrNestingLevel_1290(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayOsrNestingLevel(compiler::TNode<BytecodeArray> p_o, compiler::TNode<Int8T> p_v){
return StoreBytecodeArrayOsrNestingLevel_1291(state_, p_o, p_v);
}
compiler::TNode<Int8T> TorqueGeneratedExportedMacrosAssembler::LoadBytecodeArrayBytecodeAge(compiler::TNode<BytecodeArray> p_o){
return LoadBytecodeArrayBytecodeAge_1292(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreBytecodeArrayBytecodeAge(compiler::TNode<BytecodeArray> p_o, compiler::TNode<Int8T> p_v){
return StoreBytecodeArrayBytecodeAge_1293(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassA(compiler::TNode<InternalClass> p_o){
return LoadInternalClassA_1294(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassA(compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v){
return StoreInternalClassA_1295(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassB(compiler::TNode<InternalClass> p_o){
return LoadInternalClassB_1296(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassB(compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v){
return StoreInternalClassB_1297(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairA(compiler::TNode<SmiPair> p_o){
return LoadSmiPairA_1298(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairA(compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v){
return StoreSmiPairA_1299(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairB(compiler::TNode<SmiPair> p_o){
return LoadSmiPairB_1300(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairB(compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v){
return StoreSmiPairB_1301(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiBoxValue(compiler::TNode<SmiBox> p_o){
return LoadSmiBoxValue_1302(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSmiBoxValue(compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v){
return StoreSmiBoxValue_1303(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiBoxUnrelated(compiler::TNode<SmiBox> p_o){
return LoadSmiBoxUnrelated_1304(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSmiBoxUnrelated(compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v){
return StoreSmiBoxUnrelated_1305(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadSortStateReceiver(compiler::TNode<SortState> p_o){
return LoadSortStateReceiver_1306(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateReceiver(compiler::TNode<SortState> p_o, compiler::TNode<JSReceiver> p_v){
return StoreSortStateReceiver_1307(state_, p_o, p_v);
}
compiler::TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverMap(compiler::TNode<SortState> p_o){
return LoadSortStateInitialReceiverMap_1308(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverMap(compiler::TNode<SortState> p_o, compiler::TNode<Map> p_v){
return StoreSortStateInitialReceiverMap_1309(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverLength(compiler::TNode<SortState> p_o){
return LoadSortStateInitialReceiverLength_1310(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverLength(compiler::TNode<SortState> p_o, compiler::TNode<Number> p_v){
return StoreSortStateInitialReceiverLength_1311(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSortStateUserCmpFn(compiler::TNode<SortState> p_o){
return LoadSortStateUserCmpFn_1312(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateUserCmpFn(compiler::TNode<SortState> p_o, compiler::TNode<HeapObject> p_v){
return StoreSortStateUserCmpFn_1313(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortComparePtr(compiler::TNode<SortState> p_o){
return LoadSortStateSortComparePtr_1314(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortComparePtr(compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateSortComparePtr_1315(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateLoadFn(compiler::TNode<SortState> p_o){
return LoadSortStateLoadFn_1316(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateLoadFn(compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateLoadFn_1317(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateStoreFn(compiler::TNode<SortState> p_o){
return LoadSortStateStoreFn_1318(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateStoreFn(compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateStoreFn_1319(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateDeleteFn(compiler::TNode<SortState> p_o){
return LoadSortStateDeleteFn_1320(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateDeleteFn(compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateDeleteFn_1321(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateCanUseSameAccessorFn(compiler::TNode<SortState> p_o){
return LoadSortStateCanUseSameAccessorFn_1322(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateCanUseSameAccessorFn(compiler::TNode<SortState> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateCanUseSameAccessorFn_1323(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateMinGallop(compiler::TNode<SortState> p_o){
return LoadSortStateMinGallop_1324(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateMinGallop(compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v){
return StoreSortStateMinGallop_1325(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRunsSize(compiler::TNode<SortState> p_o){
return LoadSortStatePendingRunsSize_1326(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRunsSize(compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v){
return StoreSortStatePendingRunsSize_1327(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRuns(compiler::TNode<SortState> p_o){
return LoadSortStatePendingRuns_1328(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRuns(compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v){
return StoreSortStatePendingRuns_1329(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateWorkArray(compiler::TNode<SortState> p_o){
return LoadSortStateWorkArray_1330(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateWorkArray(compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v){
return StoreSortStateWorkArray_1331(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateTempArray(compiler::TNode<SortState> p_o){
return LoadSortStateTempArray_1332(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateTempArray(compiler::TNode<SortState> p_o, compiler::TNode<FixedArray> p_v){
return StoreSortStateTempArray_1333(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortLength(compiler::TNode<SortState> p_o){
return LoadSortStateSortLength_1334(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortLength(compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v){
return StoreSortStateSortLength_1335(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateNumberOfUndefined(compiler::TNode<SortState> p_o){
return LoadSortStateNumberOfUndefined_1336(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateNumberOfUndefined(compiler::TNode<SortState> p_o, compiler::TNode<Smi> p_v){
return StoreSortStateNumberOfUndefined_1337(state_, p_o, p_v);
}
}  // namespace internal
}  // namespace v8
