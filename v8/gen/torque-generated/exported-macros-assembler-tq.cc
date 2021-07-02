#include "torque-generated/exported-macros-assembler-tq.h"
#include "torque-generated/builtins-base-gen-tq.h"
#include "torque-generated/builtins-arguments-gen-tq.h"
#include "torque-generated/builtins-array-copywithin-gen-tq.h"
#include "torque-generated/builtins-array-gen-tq.h"
#include "torque-generated/builtins-array-filter-gen-tq.h"
#include "torque-generated/builtins-array-find-gen-tq.h"
#include "torque-generated/builtins-array-findindex-gen-tq.h"
#include "torque-generated/builtins-array-foreach-gen-tq.h"
#include "torque-generated/builtins-array-join-gen-tq.h"
#include "torque-generated/builtins-array-lastindexof-gen-tq.h"
#include "torque-generated/builtins-array-map-gen-tq.h"
#include "torque-generated/builtins-array-of-gen-tq.h"
#include "torque-generated/builtins-array-reverse-gen-tq.h"
#include "torque-generated/builtins-array-shift-gen-tq.h"
#include "torque-generated/builtins-array-slice-gen-tq.h"
#include "torque-generated/builtins-array-splice-gen-tq.h"
#include "torque-generated/builtins-array-unshift-gen-tq.h"
#include "torque-generated/builtins-runtime-gen-tq.h"
#include "torque-generated/builtins-boolean-gen-tq.h"
#include "torque-generated/builtins-collections-gen-tq.h"
#include "torque-generated/builtins-data-view-gen-tq.h"
#include "torque-generated/builtins-extras-utils-gen-tq.h"
#include "torque-generated/builtins-growable-fixed-array-gen-tq.h"
#include "torque-generated/builtins-internal-coverage-gen-tq.h"
#include "torque-generated/builtins-iterator-gen-tq.h"
#include "torque-generated/builtins-math-gen-tq.h"
#include "torque-generated/builtins-object-gen-tq.h"
#include "torque-generated/builtins-proxy-gen-tq.h"
#include "torque-generated/builtins-regexp-replace-gen-tq.h"
#include "torque-generated/builtins-regexp-gen-tq.h"
#include "torque-generated/builtins-string-gen-tq.h"
#include "torque-generated/builtins-string-html-gen-tq.h"
#include "torque-generated/builtins-string-iterator-gen-tq.h"
#include "torque-generated/builtins-string-repeat-gen-tq.h"
#include "torque-generated/builtins-string-slice-gen-tq.h"
#include "torque-generated/builtins-string-substring-gen-tq.h"
#include "torque-generated/builtins-typed-array-createtypedarray-gen-tq.h"
#include "torque-generated/builtins-typed-array-every-gen-tq.h"
#include "torque-generated/builtins-typed-array-filter-gen-tq.h"
#include "torque-generated/builtins-typed-array-find-gen-tq.h"
#include "torque-generated/builtins-typed-array-findindex-gen-tq.h"
#include "torque-generated/builtins-typed-array-foreach-gen-tq.h"
#include "torque-generated/builtins-typed-array-reduce-gen-tq.h"
#include "torque-generated/builtins-typed-array-reduceright-gen-tq.h"
#include "torque-generated/builtins-typed-array-slice-gen-tq.h"
#include "torque-generated/builtins-typed-array-some-gen-tq.h"
#include "torque-generated/builtins-typed-array-subarray-gen-tq.h"
#include "torque-generated/builtins-typed-array-gen-tq.h"
#include "torque-generated/builtins-test-gen-tq.h"
namespace v8 {
namespace internal {
TorqueStructArgumentsInfo TorqueGeneratedExportedMacrosAssembler::GetArgumentsFrameAndCount(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_f){
return GetArgumentsFrameAndCount_0(state_, p_context, p_f);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context){
return IsFastJSArray_221(state_, p_o, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False){
return BranchIfFastJSArray_222(state_, p_o, p_context, label_True, label_False);
}
void TorqueGeneratedExportedMacrosAssembler::BranchIfFastJSArrayForRead(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False){
return BranchIfFastJSArrayForRead_223(state_, p_o, p_context, label_True, label_False);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return IsFastJSArrayWithNoCustomIteration_226(state_, p_context, p_o);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::IsFastJSArrayForReadWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return IsFastJSArrayForReadWithNoCustomIteration_227(state_, p_context, p_o);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::ToStringImpl(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return ToStringImpl_228(state_, p_context, p_o);
}
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePairNoSideEffects(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects){
return LoadKeyValuePairNoSideEffects_229(state_, p_context, p_o, label_MayHaveSideEffects);
}
TorqueStructKeyValuePair TorqueGeneratedExportedMacrosAssembler::LoadKeyValuePair(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o){
return LoadKeyValuePair_230(state_, p_context, p_o);
}
compiler::TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadTargetFromFrame(){
return LoadTargetFromFrame_269(state_);
}
compiler::TNode<JSTypedArray> TorqueGeneratedExportedMacrosAssembler::TypedArraySpeciesCreateByLength(compiler::TNode<Context> p_context, const char* p_methodName, compiler::TNode<JSTypedArray> p_exemplar, compiler::TNode<Smi> p_length){
return TypedArraySpeciesCreateByLength_298(state_, p_context, p_methodName, p_exemplar, p_length);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstexpr1(){
return TestConstexpr1_341(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstexprIf(){
return TestConstexprIf_342(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstexprReturn(){
return TestConstexprReturn_343(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabel(){
return TestGotoLabel_344(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithOneParameter(){
return TestGotoLabelWithOneParameter_345(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestGotoLabelWithTwoParameters(){
return TestGotoLabelWithTwoParameters_346(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestBuiltinSpecialization(compiler::TNode<Context> p_c){
return TestBuiltinSpecialization_347(state_, p_c);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestPartiallyUnusedLabel(){
return TestPartiallyUnusedLabel_350(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestMacroSpecialization(){
return TestMacroSpecialization_353(state_);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestFunctionPointers(compiler::TNode<Context> p_context){
return TestFunctionPointers_354(state_, p_context);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestVariableRedeclaration(compiler::TNode<Context> p_context){
return TestVariableRedeclaration_355(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestTernaryOperator(compiler::TNode<Smi> p_x){
return TestTernaryOperator_356(state_, p_x);
}
void TorqueGeneratedExportedMacrosAssembler::TestFunctionPointerToGeneric(compiler::TNode<Context> p_c){
return TestFunctionPointerToGeneric_357(state_, p_c);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::TestTypeAlias(compiler::TNode<BuiltinPtr> p_x){
return TestTypeAlias_358(state_, p_x);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::TestUnsafeCast(compiler::TNode<Context> p_context, compiler::TNode<Number> p_n){
return TestUnsafeCast_359(state_, p_context, p_n);
}
void TorqueGeneratedExportedMacrosAssembler::TestHexLiteral(){
return TestHexLiteral_360(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestLargeIntegerLiterals(compiler::TNode<Context> p_c){
return TestLargeIntegerLiterals_361(state_, p_c);
}
void TorqueGeneratedExportedMacrosAssembler::TestMultilineAssert(){
return TestMultilineAssert_362(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestNewlineInString(){
return TestNewlineInString_363(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestModuleConstBindings(){
return TestModuleConstBindings_367(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestLocalConstBindings(){
return TestLocalConstBindings_368(state_);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestStruct1(TorqueStructTestStructA p_i){
return TestStruct1_369(state_, p_i);
}
TorqueStructTestStructA TorqueGeneratedExportedMacrosAssembler::TestStruct2(compiler::TNode<Context> p_context){
return TestStruct2_370(state_, p_context);
}
TorqueStructTestStructA TorqueGeneratedExportedMacrosAssembler::TestStruct3(compiler::TNode<Context> p_context){
return TestStruct3_371(state_, p_context);
}
TorqueStructTestStructC TorqueGeneratedExportedMacrosAssembler::TestStruct4(compiler::TNode<Context> p_context){
return TestStruct4_372(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestForLoop(){
return TestForLoop_375(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestSubtyping(compiler::TNode<Smi> p_x){
return TestSubtyping_376(state_, p_x);
}
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitch(compiler::TNode<Context> p_context){
return TestTypeswitch_378(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestTypeswitchAsanLsanFailure(compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj){
return TestTypeswitchAsanLsanFailure_379(state_, p_context, p_obj);
}
void TorqueGeneratedExportedMacrosAssembler::TestGenericOverload(compiler::TNode<Context> p_context){
return TestGenericOverload_380(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestEquality(compiler::TNode<Context> p_context){
return TestEquality_381(state_, p_context);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestOrAnd1(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestOrAnd1_383(state_, p_x, p_y, p_z);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestOrAnd2(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestOrAnd2_384(state_, p_x, p_y, p_z);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestOrAnd3(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestOrAnd3_385(state_, p_x, p_y, p_z);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestAndOr1(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestAndOr1_386(state_, p_x, p_y, p_z);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestAndOr2(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestAndOr2_387(state_, p_x, p_y, p_z);
}
compiler::TNode<BoolT> TorqueGeneratedExportedMacrosAssembler::TestAndOr3(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z){
return TestAndOr3_388(state_, p_x, p_y, p_z);
}
void TorqueGeneratedExportedMacrosAssembler::TestLogicalOperators(){
return TestLogicalOperators_389(state_);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCall(compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A){
return TestCall_390(state_, p_i, label_A);
}
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode1(){
return TestOtherwiseWithCode1_391(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode2(){
return TestOtherwiseWithCode2_392(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestOtherwiseWithCode3(){
return TestOtherwiseWithCode3_393(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestForwardLabel(){
return TestForwardLabel_394(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestQualifiedAccess(compiler::TNode<Context> p_context){
return TestQualifiedAccess_395(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch1(compiler::TNode<Context> p_context){
return TestCatch1_396(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestCatch2Wrapper(compiler::TNode<Context> p_context){
return TestCatch2Wrapper_397(state_, p_context);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch2(compiler::TNode<Context> p_context){
return TestCatch2_398(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestCatch3WrapperWithLabel(compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_Abort){
return TestCatch3WrapperWithLabel_399(state_, p_context, label_Abort);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::TestCatch3(compiler::TNode<Context> p_context){
return TestCatch3_400(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestIterator(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Map> p_map){
return TestIterator_401(state_, p_context, p_o, p_map);
}
void TorqueGeneratedExportedMacrosAssembler::TestFrame1(compiler::TNode<Context> p_context){
return TestFrame1_402(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestNew(compiler::TNode<Context> p_context){
return TestNew_403(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestStructConstructor(compiler::TNode<Context> p_context){
return TestStructConstructor_404(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestInternalClass(compiler::TNode<Context> p_context){
return TestInternalClass_406(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestConstInStructs(){
return TestConstInStructs_407(state_);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::TestNewFixedArrayFromSpread(compiler::TNode<Context> p_context){
return TestNewFixedArrayFromSpread_408(state_, p_context);
}
void TorqueGeneratedExportedMacrosAssembler::TestReferences(){
return TestReferences_409(state_);
}
void TorqueGeneratedExportedMacrosAssembler::TestStaticAssert(){
return TestStaticAssert_410(state_);
}
compiler::TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadHeapObjectMap(compiler::TNode<HeapObject> p_o){
return LoadHeapObjectMap_436(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreHeapObjectMap(compiler::TNode<HeapObject> p_o, compiler::TNode<Map> p_v){
return StoreHeapObjectMap_437(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadContextLength(compiler::TNode<Context> p_o){
return LoadContextLength_438(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextLength(compiler::TNode<Context> p_o, compiler::TNode<Smi> p_v){
return StoreContextLength_439(state_, p_o, p_v);
}
compiler::TNode<ScopeInfo> TorqueGeneratedExportedMacrosAssembler::LoadContextScopeInfo(compiler::TNode<Context> p_o){
return LoadContextScopeInfo_440(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextScopeInfo(compiler::TNode<Context> p_o, compiler::TNode<ScopeInfo> p_v){
return StoreContextScopeInfo_441(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextPrevious(compiler::TNode<Context> p_o){
return LoadContextPrevious_442(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextPrevious(compiler::TNode<Context> p_o, compiler::TNode<Object> p_v){
return StoreContextPrevious_443(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextExtension(compiler::TNode<Context> p_o){
return LoadContextExtension_444(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextExtension(compiler::TNode<Context> p_o, compiler::TNode<Object> p_v){
return StoreContextExtension_445(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadContextNativeContext(compiler::TNode<Context> p_o){
return LoadContextNativeContext_446(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreContextNativeContext(compiler::TNode<Context> p_o, compiler::TNode<Object> p_v){
return StoreContextNativeContext_447(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSReceiverPropertiesOrHash(compiler::TNode<JSReceiver> p_o){
return LoadJSReceiverPropertiesOrHash_448(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSReceiverPropertiesOrHash(compiler::TNode<JSReceiver> p_o, compiler::TNode<Object> p_v){
return StoreJSReceiverPropertiesOrHash_449(state_, p_o, p_v);
}
compiler::TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadHeapNumberValue(compiler::TNode<HeapNumber> p_o){
return LoadHeapNumberValue_450(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreHeapNumberValue(compiler::TNode<HeapNumber> p_o, compiler::TNode<Float64T> p_v){
return StoreHeapNumberValue_451(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFixedArrayBaseLength(compiler::TNode<FixedArrayBase> p_o){
return LoadFixedArrayBaseLength_452(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFixedArrayBaseLength(compiler::TNode<FixedArrayBase> p_o, compiler::TNode<Smi> p_v){
return StoreFixedArrayBaseLength_453(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadNameHashField(compiler::TNode<Name> p_o){
return LoadNameHashField_454(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreNameHashField(compiler::TNode<Name> p_o, compiler::TNode<Int32T> p_v){
return StoreNameHashField_455(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadStringLength(compiler::TNode<String> p_o){
return LoadStringLength_456(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStringLength(compiler::TNode<String> p_o, compiler::TNode<Uint32T> p_v){
return StoreStringLength_457(state_, p_o, p_v);
}
compiler::TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadJSObjectElements(compiler::TNode<JSObject> p_o){
return LoadJSObjectElements_458(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSObjectElements(compiler::TNode<JSObject> p_o, compiler::TNode<FixedArrayBase> p_v){
return StoreJSObjectElements_459(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayLength(compiler::TNode<JSArray> p_o){
return LoadJSArrayLength_460(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayLength(compiler::TNode<JSArray> p_o, compiler::TNode<Number> p_v){
return StoreJSArrayLength_461(state_, p_o, p_v);
}
compiler::TNode<Float64T> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumberRaw(compiler::TNode<Oddball> p_o){
return LoadOddballToNumberRaw_462(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumberRaw(compiler::TNode<Oddball> p_o, compiler::TNode<Float64T> p_v){
return StoreOddballToNumberRaw_463(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballToString(compiler::TNode<Oddball> p_o){
return LoadOddballToString_464(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToString(compiler::TNode<Oddball> p_o, compiler::TNode<String> p_v){
return StoreOddballToString_465(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadOddballToNumber(compiler::TNode<Oddball> p_o){
return LoadOddballToNumber_466(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballToNumber(compiler::TNode<Oddball> p_o, compiler::TNode<Number> p_v){
return StoreOddballToNumber_467(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadOddballTypeOf(compiler::TNode<Oddball> p_o){
return LoadOddballTypeOf_468(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballTypeOf(compiler::TNode<Oddball> p_o, compiler::TNode<String> p_v){
return StoreOddballTypeOf_469(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadOddballKind(compiler::TNode<Oddball> p_o){
return LoadOddballKind_470(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreOddballKind(compiler::TNode<Oddball> p_o, compiler::TNode<Smi> p_v){
return StoreOddballKind_471(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSymbolFlags(compiler::TNode<Symbol> p_o){
return LoadSymbolFlags_472(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolFlags(compiler::TNode<Symbol> p_o, compiler::TNode<Int32T> p_v){
return StoreSymbolFlags_473(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSymbolName(compiler::TNode<Symbol> p_o){
return LoadSymbolName_474(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSymbolName(compiler::TNode<Symbol> p_o, compiler::TNode<Object> p_v){
return StoreSymbolName_475(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringFirst(compiler::TNode<ConsString> p_o){
return LoadConsStringFirst_476(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringFirst(compiler::TNode<ConsString> p_o, compiler::TNode<String> p_v){
return StoreConsStringFirst_477(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadConsStringSecond(compiler::TNode<ConsString> p_o){
return LoadConsStringSecond_478(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreConsStringSecond(compiler::TNode<ConsString> p_o, compiler::TNode<String> p_v){
return StoreConsStringSecond_479(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResource(compiler::TNode<ExternalString> p_o){
return LoadExternalStringResource_480(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResource(compiler::TNode<ExternalString> p_o, compiler::TNode<RawPtrT> p_v){
return StoreExternalStringResource_481(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadExternalStringResourceData(compiler::TNode<ExternalString> p_o){
return LoadExternalStringResourceData_482(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreExternalStringResourceData(compiler::TNode<ExternalString> p_o, compiler::TNode<RawPtrT> p_v){
return StoreExternalStringResourceData_483(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringParent(compiler::TNode<SlicedString> p_o){
return LoadSlicedStringParent_484(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringParent(compiler::TNode<SlicedString> p_o, compiler::TNode<String> p_v){
return StoreSlicedStringParent_485(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSlicedStringOffset(compiler::TNode<SlicedString> p_o){
return LoadSlicedStringOffset_486(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSlicedStringOffset(compiler::TNode<SlicedString> p_o, compiler::TNode<Smi> p_v){
return StoreSlicedStringOffset_487(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadThinStringActual(compiler::TNode<ThinString> p_o){
return LoadThinStringActual_488(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreThinStringActual(compiler::TNode<ThinString> p_o, compiler::TNode<String> p_v){
return StoreThinStringActual_489(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple2Value1(compiler::TNode<Tuple2> p_o){
return LoadTuple2Value1_490(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTuple2Value1(compiler::TNode<Tuple2> p_o, compiler::TNode<Object> p_v){
return StoreTuple2Value1_491(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple2Value2(compiler::TNode<Tuple2> p_o){
return LoadTuple2Value2_492(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTuple2Value2(compiler::TNode<Tuple2> p_o, compiler::TNode<Object> p_v){
return StoreTuple2Value2_493(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTuple3Value3(compiler::TNode<Tuple3> p_o){
return LoadTuple3Value3_494(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTuple3Value3(compiler::TNode<Tuple3> p_o, compiler::TNode<Object> p_v){
return StoreTuple3Value3_495(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWeakFixedArrayLength(compiler::TNode<WeakFixedArray> p_o){
return LoadWeakFixedArrayLength_496(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWeakFixedArrayLength(compiler::TNode<WeakFixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreWeakFixedArrayLength_497(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceSizeInWords(compiler::TNode<Map> p_o){
return LoadMapInstanceSizeInWords_498(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceSizeInWords(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapInstanceSizeInWords_499(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapInObjectPropertiesStartOrConstructorFunctionIndex(compiler::TNode<Map> p_o){
return LoadMapInObjectPropertiesStartOrConstructorFunctionIndex_500(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInObjectPropertiesStartOrConstructorFunctionIndex(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapInObjectPropertiesStartOrConstructorFunctionIndex_501(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapUsedOrUnusedInstanceSizeInWords(compiler::TNode<Map> p_o){
return LoadMapUsedOrUnusedInstanceSizeInWords_502(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapUsedOrUnusedInstanceSizeInWords(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapUsedOrUnusedInstanceSizeInWords_503(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapVisitorId(compiler::TNode<Map> p_o){
return LoadMapVisitorId_504(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapVisitorId(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapVisitorId_505(state_, p_o, p_v);
}
compiler::TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceType(compiler::TNode<Map> p_o){
return LoadMapInstanceType_506(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceType(compiler::TNode<Map> p_o, compiler::TNode<Int16T> p_v){
return StoreMapInstanceType_507(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField(compiler::TNode<Map> p_o){
return LoadMapBitField_508(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapBitField_509(state_, p_o, p_v);
}
compiler::TNode<Uint8T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField2(compiler::TNode<Map> p_o){
return LoadMapBitField2_510(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField2(compiler::TNode<Map> p_o, compiler::TNode<Uint8T> p_v){
return StoreMapBitField2_511(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapBitField3(compiler::TNode<Map> p_o){
return LoadMapBitField3_512(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapBitField3(compiler::TNode<Map> p_o, compiler::TNode<Uint32T> p_v){
return StoreMapBitField3_513(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadMapOptionalPadding(compiler::TNode<Map> p_o){
return LoadMapOptionalPadding_514(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapOptionalPadding(compiler::TNode<Map> p_o, compiler::TNode<Uint32T> p_v){
return StoreMapOptionalPadding_515(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototype(compiler::TNode<Map> p_o){
return LoadMapPrototype_516(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototype(compiler::TNode<Map> p_o, compiler::TNode<HeapObject> p_v){
return StoreMapPrototype_517(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapConstructorOrBackPointer(compiler::TNode<Map> p_o){
return LoadMapConstructorOrBackPointer_518(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapConstructorOrBackPointer(compiler::TNode<Map> p_o, compiler::TNode<Object> p_v){
return StoreMapConstructorOrBackPointer_519(state_, p_o, p_v);
}
compiler::TNode<DescriptorArray> TorqueGeneratedExportedMacrosAssembler::LoadMapInstanceDescriptors(compiler::TNode<Map> p_o){
return LoadMapInstanceDescriptors_520(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapInstanceDescriptors(compiler::TNode<Map> p_o, compiler::TNode<DescriptorArray> p_v){
return StoreMapInstanceDescriptors_521(state_, p_o, p_v);
}
compiler::TNode<LayoutDescriptor> TorqueGeneratedExportedMacrosAssembler::LoadMapLayoutDescriptor(compiler::TNode<Map> p_o){
return LoadMapLayoutDescriptor_522(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapLayoutDescriptor(compiler::TNode<Map> p_o, compiler::TNode<LayoutDescriptor> p_v){
return StoreMapLayoutDescriptor_523(state_, p_o, p_v);
}
compiler::TNode<WeakFixedArray> TorqueGeneratedExportedMacrosAssembler::LoadMapDependentCode(compiler::TNode<Map> p_o){
return LoadMapDependentCode_524(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapDependentCode(compiler::TNode<Map> p_o, compiler::TNode<WeakFixedArray> p_v){
return StoreMapDependentCode_525(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapPrototypeValidityCell(compiler::TNode<Map> p_o){
return LoadMapPrototypeValidityCell_526(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapPrototypeValidityCell(compiler::TNode<Map> p_o, compiler::TNode<Object> p_v){
return StoreMapPrototypeValidityCell_527(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadMapTransitionsOrPrototypeInfo(compiler::TNode<Map> p_o){
return LoadMapTransitionsOrPrototypeInfo_528(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreMapTransitionsOrPrototypeInfo(compiler::TNode<Map> p_o, compiler::TNode<Object> p_v){
return StoreMapTransitionsOrPrototypeInfo_529(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheKeys(compiler::TNode<EnumCache> p_o){
return LoadEnumCacheKeys_530(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheKeys(compiler::TNode<EnumCache> p_o, compiler::TNode<FixedArray> p_v){
return StoreEnumCacheKeys_531(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadEnumCacheIndices(compiler::TNode<EnumCache> p_o){
return LoadEnumCacheIndices_532(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreEnumCacheIndices(compiler::TNode<EnumCache> p_o, compiler::TNode<FixedArray> p_v){
return StoreEnumCacheIndices_533(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadSourcePositionTableWithFrameCacheSourcePositionTable(compiler::TNode<SourcePositionTableWithFrameCache> p_o){
return LoadSourcePositionTableWithFrameCacheSourcePositionTable_534(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourcePositionTableWithFrameCacheSourcePositionTable(compiler::TNode<SourcePositionTableWithFrameCache> p_o, compiler::TNode<ByteArray> p_v){
return StoreSourcePositionTableWithFrameCacheSourcePositionTable_535(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSourcePositionTableWithFrameCacheStackFrameCache(compiler::TNode<SourcePositionTableWithFrameCache> p_o){
return LoadSourcePositionTableWithFrameCacheStackFrameCache_536(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSourcePositionTableWithFrameCacheStackFrameCache(compiler::TNode<SourcePositionTableWithFrameCache> p_o, compiler::TNode<Object> p_v){
return StoreSourcePositionTableWithFrameCacheStackFrameCache_537(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfAllDescriptors(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayNumberOfAllDescriptors_538(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayNumberOfAllDescriptors(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayNumberOfAllDescriptors_539(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayNumberOfDescriptors(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayNumberOfDescriptors_540(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayNumberOfDescriptors(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayNumberOfDescriptors_541(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayRawNumberOfMarkedDescriptors(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayRawNumberOfMarkedDescriptors_542(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayRawNumberOfMarkedDescriptors(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayRawNumberOfMarkedDescriptors_543(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayFiller16Bits(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayFiller16Bits_544(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayFiller16Bits(compiler::TNode<DescriptorArray> p_o, compiler::TNode<Uint16T> p_v){
return StoreDescriptorArrayFiller16Bits_545(state_, p_o, p_v);
}
compiler::TNode<EnumCache> TorqueGeneratedExportedMacrosAssembler::LoadDescriptorArrayEnumCache(compiler::TNode<DescriptorArray> p_o){
return LoadDescriptorArrayEnumCache_546(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDescriptorArrayEnumCache(compiler::TNode<DescriptorArray> p_o, compiler::TNode<EnumCache> p_v){
return StoreDescriptorArrayEnumCache_547(state_, p_o, p_v);
}
compiler::TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionSharedFunctionInfo_548(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction> p_o, compiler::TNode<SharedFunctionInfo> p_v){
return StoreJSFunctionSharedFunctionInfo_549(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionContext(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionContext_550(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionContext(compiler::TNode<JSFunction> p_o, compiler::TNode<Context> p_v){
return StoreJSFunctionContext_551(state_, p_o, p_v);
}
compiler::TNode<FeedbackCell> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionFeedbackCell(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionFeedbackCell_552(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionFeedbackCell(compiler::TNode<JSFunction> p_o, compiler::TNode<FeedbackCell> p_v){
return StoreJSFunctionFeedbackCell_553(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionCode(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionCode_554(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionCode(compiler::TNode<JSFunction> p_o, compiler::TNode<Code> p_v){
return StoreJSFunctionCode_555(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction> p_o){
return LoadJSFunctionPrototypeOrInitialMap_556(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSFunctionPrototypeOrInitialMap(compiler::TNode<JSFunction> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSFunctionPrototypeOrInitialMap_557(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyTarget(compiler::TNode<JSProxy> p_o){
return LoadJSProxyTarget_558(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyTarget(compiler::TNode<JSProxy> p_o, compiler::TNode<Object> p_v){
return StoreJSProxyTarget_559(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyHandler(compiler::TNode<JSProxy> p_o){
return LoadJSProxyHandler_560(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyHandler(compiler::TNode<JSProxy> p_o, compiler::TNode<Object> p_v){
return StoreJSProxyHandler_561(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultProxy(compiler::TNode<JSProxyRevocableResult> p_o){
return LoadJSProxyRevocableResultProxy_562(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultProxy(compiler::TNode<JSProxyRevocableResult> p_o, compiler::TNode<Object> p_v){
return StoreJSProxyRevocableResultProxy_563(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSProxyRevocableResultRevoke(compiler::TNode<JSProxyRevocableResult> p_o){
return LoadJSProxyRevocableResultRevoke_564(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSProxyRevocableResultRevoke(compiler::TNode<JSProxyRevocableResult> p_o, compiler::TNode<Object> p_v){
return StoreJSProxyRevocableResultRevoke_565(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalProxyNativeContext(compiler::TNode<JSGlobalProxy> p_o){
return LoadJSGlobalProxyNativeContext_566(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalProxyNativeContext(compiler::TNode<JSGlobalProxy> p_o, compiler::TNode<Object> p_v){
return StoreJSGlobalProxyNativeContext_567(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSValueValue(compiler::TNode<JSValue> p_o){
return LoadJSValueValue_568(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSValueValue(compiler::TNode<JSValue> p_o, compiler::TNode<Object> p_v){
return StoreJSValueValue_569(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength> p_o){
return LoadJSArgumentsObjectWithLengthLength_570(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArgumentsObjectWithLengthLength(compiler::TNode<JSArgumentsObjectWithLength> p_o, compiler::TNode<Object> p_v){
return StoreJSArgumentsObjectWithLengthLength_571(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSSloppyArgumentsObjectCallee(compiler::TNode<JSSloppyArgumentsObject> p_o){
return LoadJSSloppyArgumentsObjectCallee_572(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSSloppyArgumentsObjectCallee(compiler::TNode<JSSloppyArgumentsObject> p_o, compiler::TNode<Object> p_v){
return StoreJSSloppyArgumentsObjectCallee_573(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorIteratedObject(compiler::TNode<JSArrayIterator> p_o){
return LoadJSArrayIteratorIteratedObject_574(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorIteratedObject(compiler::TNode<JSArrayIterator> p_o, compiler::TNode<JSReceiver> p_v){
return StoreJSArrayIteratorIteratedObject_575(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorNextIndex(compiler::TNode<JSArrayIterator> p_o){
return LoadJSArrayIteratorNextIndex_576(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorNextIndex(compiler::TNode<JSArrayIterator> p_o, compiler::TNode<Number> p_v){
return StoreJSArrayIteratorNextIndex_577(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayIteratorKind(compiler::TNode<JSArrayIterator> p_o){
return LoadJSArrayIteratorKind_578(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayIteratorKind(compiler::TNode<JSArrayIterator> p_o, compiler::TNode<Smi> p_v){
return StoreJSArrayIteratorKind_579(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSWeakCollectionTable(compiler::TNode<JSWeakCollection> p_o){
return LoadJSWeakCollectionTable_580(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSWeakCollectionTable(compiler::TNode<JSWeakCollection> p_o, compiler::TNode<Object> p_v){
return StoreJSWeakCollectionTable_581(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorTable(compiler::TNode<JSCollectionIterator> p_o){
return LoadJSCollectionIteratorTable_582(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorTable(compiler::TNode<JSCollectionIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSCollectionIteratorTable_583(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionIteratorIndex(compiler::TNode<JSCollectionIterator> p_o){
return LoadJSCollectionIteratorIndex_584(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionIteratorIndex(compiler::TNode<JSCollectionIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSCollectionIteratorIndex_585(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectMessageType(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectMessageType_586(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectMessageType(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectMessageType_587(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectArguments(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectArguments_588(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectArguments(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Object> p_v){
return StoreJSMessageObjectArguments_589(state_, p_o, p_v);
}
compiler::TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectScript(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectScript_590(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectScript(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Script> p_v){
return StoreJSMessageObjectScript_591(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStackFrames(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectStackFrames_592(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStackFrames(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Object> p_v){
return StoreJSMessageObjectStackFrames_593(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectSharedInfo(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectSharedInfo_594(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectSharedInfo(compiler::TNode<JSMessageObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSMessageObjectSharedInfo_595(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectBytecodeOffset(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectBytecodeOffset_596(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectBytecodeOffset(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectBytecodeOffset_597(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectStartPosition(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectStartPosition_598(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectStartPosition(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectStartPosition_599(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectEndPosition(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectEndPosition_600(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectEndPosition(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectEndPosition_601(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSMessageObjectErrorLevel(compiler::TNode<JSMessageObject> p_o){
return LoadJSMessageObjectErrorLevel_602(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSMessageObjectErrorLevel(compiler::TNode<JSMessageObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSMessageObjectErrorLevel_603(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoJsModuleNamespace(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoJsModuleNamespace_604(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoJsModuleNamespace(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<HeapObject> p_v){
return StorePrototypeInfoJsModuleNamespace_605(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoPrototypeUsers(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoPrototypeUsers_606(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoPrototypeUsers(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Object> p_v){
return StorePrototypeInfoPrototypeUsers_607(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoRegistrySlot(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoRegistrySlot_608(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoRegistrySlot(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Smi> p_v){
return StorePrototypeInfoRegistrySlot_609(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoValidityCell(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoValidityCell_610(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoValidityCell(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Object> p_v){
return StorePrototypeInfoValidityCell_611(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoObjectCreateMap(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoObjectCreateMap_612(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoObjectCreateMap(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Object> p_v){
return StorePrototypeInfoObjectCreateMap_613(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPrototypeInfoBitField(compiler::TNode<PrototypeInfo> p_o){
return LoadPrototypeInfoBitField_614(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePrototypeInfoBitField(compiler::TNode<PrototypeInfo> p_o, compiler::TNode<Smi> p_v){
return StorePrototypeInfoBitField_615(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSource(compiler::TNode<Script> p_o){
return LoadScriptSource_616(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSource(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSource_617(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptName(compiler::TNode<Script> p_o){
return LoadScriptName_618(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptName(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptName_619(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineOffset(compiler::TNode<Script> p_o){
return LoadScriptLineOffset_620(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineOffset(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptLineOffset_621(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptColumnOffset(compiler::TNode<Script> p_o){
return LoadScriptColumnOffset_622(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptColumnOffset(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptColumnOffset_623(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptContext(compiler::TNode<Script> p_o){
return LoadScriptContext_624(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptContext(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptContext_625(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptScriptType(compiler::TNode<Script> p_o){
return LoadScriptScriptType_626(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptScriptType(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptScriptType_627(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptLineEnds(compiler::TNode<Script> p_o){
return LoadScriptLineEnds_628(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptLineEnds(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptLineEnds_629(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptId(compiler::TNode<Script> p_o){
return LoadScriptId_630(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptId(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptId_631(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromSharedOrWrappedArguments(compiler::TNode<Script> p_o){
return LoadScriptEvalFromSharedOrWrappedArguments_632(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromSharedOrWrappedArguments(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptEvalFromSharedOrWrappedArguments_633(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptEvalFromPosition(compiler::TNode<Script> p_o){
return LoadScriptEvalFromPosition_634(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptEvalFromPosition(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptEvalFromPosition_635(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSharedFunctionInfos(compiler::TNode<Script> p_o){
return LoadScriptSharedFunctionInfos_636(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSharedFunctionInfos(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSharedFunctionInfos_637(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadScriptFlags(compiler::TNode<Script> p_o){
return LoadScriptFlags_638(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptFlags(compiler::TNode<Script> p_o, compiler::TNode<Smi> p_v){
return StoreScriptFlags_639(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceUrl(compiler::TNode<Script> p_o){
return LoadScriptSourceUrl_640(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceUrl(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSourceUrl_641(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptSourceMappingUrl(compiler::TNode<Script> p_o){
return LoadScriptSourceMappingUrl_642(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptSourceMappingUrl(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptSourceMappingUrl_643(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadScriptHostDefinedOptions(compiler::TNode<Script> p_o){
return LoadScriptHostDefinedOptions_644(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreScriptHostDefinedOptions(compiler::TNode<Script> p_o, compiler::TNode<Object> p_v){
return StoreScriptHostDefinedOptions_645(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadEmbedderDataArrayLength(compiler::TNode<EmbedderDataArray> p_o){
return LoadEmbedderDataArrayLength_646(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreEmbedderDataArrayLength(compiler::TNode<EmbedderDataArray> p_o, compiler::TNode<Smi> p_v){
return StoreEmbedderDataArrayLength_647(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataDataLength(compiler::TNode<PreparseData> p_o){
return LoadPreparseDataDataLength_648(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataDataLength(compiler::TNode<PreparseData> p_o, compiler::TNode<Int32T> p_v){
return StorePreparseDataDataLength_649(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadPreparseDataInnerLength(compiler::TNode<PreparseData> p_o){
return LoadPreparseDataInnerLength_650(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePreparseDataInnerLength(compiler::TNode<PreparseData> p_o, compiler::TNode<Int32T> p_v){
return StorePreparseDataInnerLength_651(state_, p_o, p_v);
}
compiler::TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataBytecodeArray(compiler::TNode<InterpreterData> p_o){
return LoadInterpreterDataBytecodeArray_652(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataBytecodeArray(compiler::TNode<InterpreterData> p_o, compiler::TNode<FixedArrayBase> p_v){
return StoreInterpreterDataBytecodeArray_653(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadInterpreterDataInterpreterTrampoline(compiler::TNode<InterpreterData> p_o){
return LoadInterpreterDataInterpreterTrampoline_654(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterpreterDataInterpreterTrampoline(compiler::TNode<InterpreterData> p_o, compiler::TNode<Code> p_v){
return StoreInterpreterDataInterpreterTrampoline_655(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionData(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFunctionData_656(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionData(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Object> p_v){
return StoreSharedFunctionInfoFunctionData_657(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoNameOrScopeInfo(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoNameOrScopeInfo_658(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoNameOrScopeInfo(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Object> p_v){
return StoreSharedFunctionInfoNameOrScopeInfo_659(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_660(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreSharedFunctionInfoOuterScopeInfoOrFeedbackMetadata_661(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoScriptOrDebugInfo(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoScriptOrDebugInfo_662(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoScriptOrDebugInfo(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreSharedFunctionInfoScriptOrDebugInfo_663(state_, p_o, p_v);
}
compiler::TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoLength(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoLength_664(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoLength(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int16T> p_v){
return StoreSharedFunctionInfoLength_665(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFormalParameterCount_666(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Uint16T> p_v){
return StoreSharedFunctionInfoFormalParameterCount_667(state_, p_o, p_v);
}
compiler::TNode<Uint16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoExpectedNofProperties(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoExpectedNofProperties_668(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoExpectedNofProperties(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Uint16T> p_v){
return StoreSharedFunctionInfoExpectedNofProperties_669(state_, p_o, p_v);
}
compiler::TNode<Int16T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFunctionTokenOffset(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFunctionTokenOffset_670(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFunctionTokenOffset(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int16T> p_v){
return StoreSharedFunctionInfoFunctionTokenOffset_671(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadSharedFunctionInfoFlags(compiler::TNode<SharedFunctionInfo> p_o){
return LoadSharedFunctionInfoFlags_672(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSharedFunctionInfoFlags(compiler::TNode<SharedFunctionInfo> p_o, compiler::TNode<Int32T> p_v){
return StoreSharedFunctionInfoFlags_673(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundTargetFunction(compiler::TNode<JSBoundFunction> p_o){
return LoadJSBoundFunctionBoundTargetFunction_674(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundTargetFunction(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<JSReceiver> p_v){
return StoreJSBoundFunctionBoundTargetFunction_675(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundThis(compiler::TNode<JSBoundFunction> p_o){
return LoadJSBoundFunctionBoundThis_676(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundThis(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<Object> p_v){
return StoreJSBoundFunctionBoundThis_677(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSBoundFunctionBoundArguments(compiler::TNode<JSBoundFunction> p_o){
return LoadJSBoundFunctionBoundArguments_678(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSBoundFunctionBoundArguments(compiler::TNode<JSBoundFunction> p_o, compiler::TNode<FixedArray> p_v){
return StoreJSBoundFunctionBoundArguments_679(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFreeSpaceSize(compiler::TNode<FreeSpace> p_o){
return LoadFreeSpaceSize_680(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFreeSpaceSize(compiler::TNode<FreeSpace> p_o, compiler::TNode<Smi> p_v){
return StoreFreeSpaceSize_681(state_, p_o, p_v);
}
compiler::TNode<FreeSpace> TorqueGeneratedExportedMacrosAssembler::LoadFreeSpaceNext(compiler::TNode<FreeSpace> p_o){
return LoadFreeSpaceNext_682(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFreeSpaceNext(compiler::TNode<FreeSpace> p_o, compiler::TNode<FreeSpace> p_v){
return StoreFreeSpaceNext_683(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferByteLength(compiler::TNode<JSArrayBuffer> p_o){
return LoadJSArrayBufferByteLength_684(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferByteLength(compiler::TNode<JSArrayBuffer> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSArrayBufferByteLength_685(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer> p_o){
return LoadJSArrayBufferBackingStore_686(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer> p_o, compiler::TNode<RawPtrT> p_v){
return StoreJSArrayBufferBackingStore_687(state_, p_o, p_v);
}
compiler::TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView> p_o){
return LoadJSArrayBufferViewBuffer_688(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<JSArrayBuffer> p_v){
return StoreJSArrayBufferViewBuffer_689(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView> p_o){
return LoadJSArrayBufferViewByteOffset_690(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSArrayBufferViewByteOffset_691(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView> p_o){
return LoadJSArrayBufferViewByteLength_692(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSArrayBufferViewByteLength_693(state_, p_o, p_v);
}
compiler::TNode<UintPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayLength(compiler::TNode<JSTypedArray> p_o){
return LoadJSTypedArrayLength_694(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayLength(compiler::TNode<JSTypedArray> p_o, compiler::TNode<UintPtrT> p_v){
return StoreJSTypedArrayLength_695(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayExternalPointer(compiler::TNode<JSTypedArray> p_o){
return LoadJSTypedArrayExternalPointer_696(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayExternalPointer(compiler::TNode<JSTypedArray> p_o, compiler::TNode<RawPtrT> p_v){
return StoreJSTypedArrayExternalPointer_697(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSTypedArrayBasePointer(compiler::TNode<JSTypedArray> p_o){
return LoadJSTypedArrayBasePointer_698(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSTypedArrayBasePointer(compiler::TNode<JSTypedArray> p_o, compiler::TNode<Object> p_v){
return StoreJSTypedArrayBasePointer_699(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAccessorPropertyDescriptorGet(compiler::TNode<JSAccessorPropertyDescriptor> p_o){
return LoadJSAccessorPropertyDescriptorGet_700(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAccessorPropertyDescriptorGet(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSAccessorPropertyDescriptorGet_701(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAccessorPropertyDescriptorSet(compiler::TNode<JSAccessorPropertyDescriptor> p_o){
return LoadJSAccessorPropertyDescriptorSet_702(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAccessorPropertyDescriptorSet(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSAccessorPropertyDescriptorSet_703(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAccessorPropertyDescriptorEnumerable(compiler::TNode<JSAccessorPropertyDescriptor> p_o){
return LoadJSAccessorPropertyDescriptorEnumerable_704(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAccessorPropertyDescriptorEnumerable(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSAccessorPropertyDescriptorEnumerable_705(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAccessorPropertyDescriptorConfigurable(compiler::TNode<JSAccessorPropertyDescriptor> p_o){
return LoadJSAccessorPropertyDescriptorConfigurable_706(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAccessorPropertyDescriptorConfigurable(compiler::TNode<JSAccessorPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSAccessorPropertyDescriptorConfigurable_707(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSCollectionTable(compiler::TNode<JSCollection> p_o){
return LoadJSCollectionTable_708(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSCollectionTable(compiler::TNode<JSCollection> p_o, compiler::TNode<Object> p_v){
return StoreJSCollectionTable_709(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateValue(compiler::TNode<JSDate> p_o){
return LoadJSDateValue_710(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateValue(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateValue_711(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateYear(compiler::TNode<JSDate> p_o){
return LoadJSDateYear_712(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateYear(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateYear_713(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMonth(compiler::TNode<JSDate> p_o){
return LoadJSDateMonth_714(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMonth(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateMonth_715(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateDay(compiler::TNode<JSDate> p_o){
return LoadJSDateDay_716(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateDay(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateDay_717(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateWeekday(compiler::TNode<JSDate> p_o){
return LoadJSDateWeekday_718(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateWeekday(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateWeekday_719(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateHour(compiler::TNode<JSDate> p_o){
return LoadJSDateHour_720(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateHour(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateHour_721(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateMin(compiler::TNode<JSDate> p_o){
return LoadJSDateMin_722(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateMin(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateMin_723(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateSec(compiler::TNode<JSDate> p_o){
return LoadJSDateSec_724(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateSec(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateSec_725(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDateCacheStamp(compiler::TNode<JSDate> p_o){
return LoadJSDateCacheStamp_726(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDateCacheStamp(compiler::TNode<JSDate> p_o, compiler::TNode<Object> p_v){
return StoreJSDateCacheStamp_727(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectNativeContext(compiler::TNode<JSGlobalObject> p_o){
return LoadJSGlobalObjectNativeContext_728(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectNativeContext(compiler::TNode<JSGlobalObject> p_o, compiler::TNode<Context> p_v){
return StoreJSGlobalObjectNativeContext_729(state_, p_o, p_v);
}
compiler::TNode<JSGlobalProxy> TorqueGeneratedExportedMacrosAssembler::LoadJSGlobalObjectGlobalProxy(compiler::TNode<JSGlobalObject> p_o){
return LoadJSGlobalObjectGlobalProxy_730(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGlobalObjectGlobalProxy(compiler::TNode<JSGlobalObject> p_o, compiler::TNode<JSGlobalProxy> p_v){
return StoreJSGlobalObjectGlobalProxy_731(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorSyncIterator(compiler::TNode<JSAsyncFromSyncIterator> p_o){
return LoadJSAsyncFromSyncIteratorSyncIterator_732(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorSyncIterator(compiler::TNode<JSAsyncFromSyncIterator> p_o, compiler::TNode<JSReceiver> p_v){
return StoreJSAsyncFromSyncIteratorSyncIterator_733(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFromSyncIteratorNext(compiler::TNode<JSAsyncFromSyncIterator> p_o){
return LoadJSAsyncFromSyncIteratorNext_734(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFromSyncIteratorNext(compiler::TNode<JSAsyncFromSyncIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSAsyncFromSyncIteratorNext_735(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorString(compiler::TNode<JSStringIterator> p_o){
return LoadJSStringIteratorString_736(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorString(compiler::TNode<JSStringIterator> p_o, compiler::TNode<String> p_v){
return StoreJSStringIteratorString_737(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSStringIteratorNextIndex(compiler::TNode<JSStringIterator> p_o){
return LoadJSStringIteratorNextIndex_738(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSStringIteratorNextIndex(compiler::TNode<JSStringIterator> p_o, compiler::TNode<Smi> p_v){
return StoreJSStringIteratorNextIndex_739(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDataPropertyDescriptorValue(compiler::TNode<JSDataPropertyDescriptor> p_o){
return LoadJSDataPropertyDescriptorValue_740(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataPropertyDescriptorValue(compiler::TNode<JSDataPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSDataPropertyDescriptorValue_741(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDataPropertyDescriptorWritable(compiler::TNode<JSDataPropertyDescriptor> p_o){
return LoadJSDataPropertyDescriptorWritable_742(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataPropertyDescriptorWritable(compiler::TNode<JSDataPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSDataPropertyDescriptorWritable_743(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDataPropertyDescriptorEnumerable(compiler::TNode<JSDataPropertyDescriptor> p_o){
return LoadJSDataPropertyDescriptorEnumerable_744(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataPropertyDescriptorEnumerable(compiler::TNode<JSDataPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSDataPropertyDescriptorEnumerable_745(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSDataPropertyDescriptorConfigurable(compiler::TNode<JSDataPropertyDescriptor> p_o){
return LoadJSDataPropertyDescriptorConfigurable_746(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataPropertyDescriptorConfigurable(compiler::TNode<JSDataPropertyDescriptor> p_o, compiler::TNode<Object> p_v){
return StoreJSDataPropertyDescriptorConfigurable_747(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoTag(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoTag_748(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoTag(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoTag_749(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoSerialNumber(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoSerialNumber_750(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoSerialNumber(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoSerialNumber_751(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoNumberOfProperties(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoNumberOfProperties_752(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoNumberOfProperties(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Smi> p_v){
return StoreTemplateInfoNumberOfProperties_753(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoPropertyList(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoPropertyList_754(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoPropertyList(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoPropertyList_755(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadTemplateInfoPropertyAccessors(compiler::TNode<TemplateInfo> p_o){
return LoadTemplateInfoPropertyAccessors_756(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateInfoPropertyAccessors(compiler::TNode<TemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreTemplateInfoPropertyAccessors_757(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionRawStrings(compiler::TNode<TemplateObjectDescription> p_o){
return LoadTemplateObjectDescriptionRawStrings_758(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionRawStrings(compiler::TNode<TemplateObjectDescription> p_o, compiler::TNode<FixedArray> p_v){
return StoreTemplateObjectDescriptionRawStrings_759(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadTemplateObjectDescriptionCookedStrings(compiler::TNode<TemplateObjectDescription> p_o){
return LoadTemplateObjectDescriptionCookedStrings_760(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreTemplateObjectDescriptionCookedStrings(compiler::TNode<TemplateObjectDescription> p_o, compiler::TNode<FixedArray> p_v){
return StoreTemplateObjectDescriptionCookedStrings_761(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataPrototypeTemplate_762(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataPrototypeTemplate_763(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataPrototypeProviderTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataPrototypeProviderTemplate_764(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataPrototypeProviderTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataPrototypeProviderTemplate_765(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataParentTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataParentTemplate_766(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataParentTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataParentTemplate_767(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataNamedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataNamedPropertyHandler_768(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataNamedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataNamedPropertyHandler_769(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataIndexedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataIndexedPropertyHandler_770(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataIndexedPropertyHandler(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataIndexedPropertyHandler_771(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceTemplate(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataInstanceTemplate_772(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceTemplate(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataInstanceTemplate_773(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataInstanceCallHandler(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataInstanceCallHandler_774(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataInstanceCallHandler(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataInstanceCallHandler_775(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateRareDataAccessCheckInfo(compiler::TNode<FunctionTemplateRareData> p_o){
return LoadFunctionTemplateRareDataAccessCheckInfo_776(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateRareDataAccessCheckInfo(compiler::TNode<FunctionTemplateRareData> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateRareDataAccessCheckInfo_777(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCallCode(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoCallCode_778(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCallCode(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoCallCode_779(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoClassName(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoClassName_780(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoClassName(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoClassName_781(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSignature(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoSignature_782(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSignature(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoSignature_783(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoFunctionTemplateRareData(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoFunctionTemplateRareData_784(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoFunctionTemplateRareData(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoFunctionTemplateRareData_785(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoSharedFunctionInfo(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoSharedFunctionInfo_786(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoSharedFunctionInfo(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoSharedFunctionInfo_787(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoFlag(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoFlag_788(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoFlag(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Smi> p_v){
return StoreFunctionTemplateInfoFlag_789(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoLength(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoLength_790(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoLength(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Smi> p_v){
return StoreFunctionTemplateInfoLength_791(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFunctionTemplateInfoCachedPropertyName(compiler::TNode<FunctionTemplateInfo> p_o){
return LoadFunctionTemplateInfoCachedPropertyName_792(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFunctionTemplateInfoCachedPropertyName(compiler::TNode<FunctionTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreFunctionTemplateInfoCachedPropertyName_793(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoConstructor(compiler::TNode<ObjectTemplateInfo> p_o){
return LoadObjectTemplateInfoConstructor_794(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoConstructor(compiler::TNode<ObjectTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreObjectTemplateInfoConstructor_795(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadObjectTemplateInfoData(compiler::TNode<ObjectTemplateInfo> p_o){
return LoadObjectTemplateInfoData_796(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreObjectTemplateInfoData(compiler::TNode<ObjectTemplateInfo> p_o, compiler::TNode<Object> p_v){
return StoreObjectTemplateInfoData_797(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyArrayLengthAndHash(compiler::TNode<PropertyArray> p_o){
return LoadPropertyArrayLengthAndHash_798(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyArrayLengthAndHash(compiler::TNode<PropertyArray> p_o, compiler::TNode<Smi> p_v){
return StorePropertyArrayLengthAndHash_799(state_, p_o, p_v);
}
compiler::TNode<Name> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellName(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellName_800(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellName(compiler::TNode<PropertyCell> p_o, compiler::TNode<Name> p_v){
return StorePropertyCellName_801(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellPropertyDetailsRaw(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellPropertyDetailsRaw_802(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellPropertyDetailsRaw(compiler::TNode<PropertyCell> p_o, compiler::TNode<Smi> p_v){
return StorePropertyCellPropertyDetailsRaw_803(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellValue(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellValue_804(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellValue(compiler::TNode<PropertyCell> p_o, compiler::TNode<Object> p_v){
return StorePropertyCellValue_805(state_, p_o, p_v);
}
compiler::TNode<WeakFixedArray> TorqueGeneratedExportedMacrosAssembler::LoadPropertyCellDependentCode(compiler::TNode<PropertyCell> p_o){
return LoadPropertyCellDependentCode_806(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePropertyCellDependentCode(compiler::TNode<PropertyCell> p_o, compiler::TNode<WeakFixedArray> p_v){
return StorePropertyCellDependentCode_807(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadJSDataViewDataPointer(compiler::TNode<JSDataView> p_o){
return LoadJSDataViewDataPointer_808(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSDataViewDataPointer(compiler::TNode<JSDataView> p_o, compiler::TNode<RawPtrT> p_v){
return StoreJSDataViewDataPointer_809(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadForeignForeignAddress(compiler::TNode<Foreign> p_o){
return LoadForeignForeignAddress_810(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreForeignForeignAddress(compiler::TNode<Foreign> p_o, compiler::TNode<RawPtrT> p_v){
return StoreForeignForeignAddress_811(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoGetter(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoGetter_812(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoGetter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoGetter_813(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoSetter(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoSetter_814(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoSetter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoSetter_815(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoQuery(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoQuery_816(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoQuery(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoQuery_817(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDescriptor(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoDescriptor_818(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDescriptor(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoDescriptor_819(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDeleter(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoDeleter_820(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDeleter(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoDeleter_821(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoEnumerator(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoEnumerator_822(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoEnumerator(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoEnumerator_823(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoDefiner(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoDefiner_824(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoDefiner(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoDefiner_825(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoData(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoData_826(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoData(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Object> p_v){
return StoreInterceptorInfoData_827(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInterceptorInfoFlags(compiler::TNode<InterceptorInfo> p_o){
return LoadInterceptorInfoFlags_828(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInterceptorInfoFlags(compiler::TNode<InterceptorInfo> p_o, compiler::TNode<Smi> p_v){
return StoreInterceptorInfoFlags_829(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoCallback(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoCallback_830(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoCallback(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoCallback_831(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoNamedInterceptor(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoNamedInterceptor_832(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoNamedInterceptor(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoNamedInterceptor_833(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoIndexedInterceptor(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoIndexedInterceptor_834(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoIndexedInterceptor(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoIndexedInterceptor_835(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessCheckInfoData(compiler::TNode<AccessCheckInfo> p_o){
return LoadAccessCheckInfoData_836(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessCheckInfoData(compiler::TNode<AccessCheckInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessCheckInfoData_837(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionFlags(compiler::TNode<ArrayBoilerplateDescription> p_o){
return LoadArrayBoilerplateDescriptionFlags_838(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionFlags(compiler::TNode<ArrayBoilerplateDescription> p_o, compiler::TNode<Smi> p_v){
return StoreArrayBoilerplateDescriptionFlags_839(state_, p_o, p_v);
}
compiler::TNode<FixedArrayBase> TorqueGeneratedExportedMacrosAssembler::LoadArrayBoilerplateDescriptionConstantElements(compiler::TNode<ArrayBoilerplateDescription> p_o){
return LoadArrayBoilerplateDescriptionConstantElements_840(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreArrayBoilerplateDescriptionConstantElements(compiler::TNode<ArrayBoilerplateDescription> p_o, compiler::TNode<FixedArrayBase> p_v){
return StoreArrayBoilerplateDescriptionConstantElements_841(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAliasedArgumentsEntryAliasedContextSlot(compiler::TNode<AliasedArgumentsEntry> p_o){
return LoadAliasedArgumentsEntryAliasedContextSlot_842(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAliasedArgumentsEntryAliasedContextSlot(compiler::TNode<AliasedArgumentsEntry> p_o, compiler::TNode<Smi> p_v){
return StoreAliasedArgumentsEntryAliasedContextSlot_843(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadCellValue(compiler::TNode<Cell> p_o){
return LoadCellValue_844(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCellValue(compiler::TNode<Cell> p_o, compiler::TNode<Object> p_v){
return StoreCellValue_845(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerSmiHandler(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerSmiHandler_846(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerSmiHandler(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerSmiHandler_847(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerValidityCell(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerValidityCell_848(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerValidityCell(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerValidityCell_849(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData1(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerData1_850(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData1(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerData1_851(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData2(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerData2_852(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData2(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerData2_853(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadDataHandlerData3(compiler::TNode<DataHandler> p_o){
return LoadDataHandlerData3_854(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDataHandlerData3(compiler::TNode<DataHandler> p_o, compiler::TNode<Object> p_v){
return StoreDataHandlerData3_855(state_, p_o, p_v);
}
compiler::TNode<JSFunction> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectFunction(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectFunction_856(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectFunction(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<JSFunction> p_v){
return StoreJSGeneratorObjectFunction_857(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContext(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectContext_858(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContext(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Context> p_v){
return StoreJSGeneratorObjectContext_859(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectReceiver(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectReceiver_860(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectReceiver(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Object> p_v){
return StoreJSGeneratorObjectReceiver_861(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectInputOrDebugPos(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectInputOrDebugPos_862(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectInputOrDebugPos(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Object> p_v){
return StoreJSGeneratorObjectInputOrDebugPos_863(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectResumeMode(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectResumeMode_864(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectResumeMode(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSGeneratorObjectResumeMode_865(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectContinuation(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectContinuation_866(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectContinuation(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSGeneratorObjectContinuation_867(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadJSGeneratorObjectParametersAndRegisters(compiler::TNode<JSGeneratorObject> p_o){
return LoadJSGeneratorObjectParametersAndRegisters_868(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSGeneratorObjectParametersAndRegisters(compiler::TNode<JSGeneratorObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreJSGeneratorObjectParametersAndRegisters_869(state_, p_o, p_v);
}
compiler::TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncFunctionObjectPromise(compiler::TNode<JSAsyncFunctionObject> p_o){
return LoadJSAsyncFunctionObjectPromise_870(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncFunctionObjectPromise(compiler::TNode<JSAsyncFunctionObject> p_o, compiler::TNode<JSPromise> p_v){
return StoreJSAsyncFunctionObjectPromise_871(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectQueue(compiler::TNode<JSAsyncGeneratorObject> p_o){
return LoadJSAsyncGeneratorObjectQueue_872(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectQueue(compiler::TNode<JSAsyncGeneratorObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSAsyncGeneratorObjectQueue_873(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSAsyncGeneratorObjectIsAwaiting(compiler::TNode<JSAsyncGeneratorObject> p_o){
return LoadJSAsyncGeneratorObjectIsAwaiting_874(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSAsyncGeneratorObjectIsAwaiting(compiler::TNode<JSAsyncGeneratorObject> p_o, compiler::TNode<Smi> p_v){
return StoreJSAsyncGeneratorObjectIsAwaiting_875(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseReactionsOrResult(compiler::TNode<JSPromise> p_o){
return LoadJSPromiseReactionsOrResult_876(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseReactionsOrResult(compiler::TNode<JSPromise> p_o, compiler::TNode<Object> p_v){
return StoreJSPromiseReactionsOrResult_877(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSPromiseFlags(compiler::TNode<JSPromise> p_o){
return LoadJSPromiseFlags_878(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSPromiseFlags(compiler::TNode<JSPromise> p_o, compiler::TNode<Smi> p_v){
return StoreJSPromiseFlags_879(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskCallback(compiler::TNode<CallbackTask> p_o){
return LoadCallbackTaskCallback_880(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskCallback(compiler::TNode<CallbackTask> p_o, compiler::TNode<Foreign> p_v){
return StoreCallbackTaskCallback_881(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadCallbackTaskData(compiler::TNode<CallbackTask> p_o){
return LoadCallbackTaskData_882(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallbackTaskData(compiler::TNode<CallbackTask> p_o, compiler::TNode<Foreign> p_v){
return StoreCallbackTaskData_883(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskCallable(compiler::TNode<CallableTask> p_o){
return LoadCallableTaskCallable_884(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskCallable(compiler::TNode<CallableTask> p_o, compiler::TNode<JSReceiver> p_v){
return StoreCallableTaskCallable_885(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadCallableTaskContext(compiler::TNode<CallableTask> p_o){
return LoadCallableTaskContext_886(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreCallableTaskContext(compiler::TNode<CallableTask> p_o, compiler::TNode<Context> p_v){
return StoreCallableTaskContext_887(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoLineNumber(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoLineNumber_888(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoLineNumber(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoLineNumber_889(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoColumnNumber(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoColumnNumber_890(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoColumnNumber(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoColumnNumber_891(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoPromiseAllIndex(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoPromiseAllIndex_892(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoPromiseAllIndex(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoPromiseAllIndex_893(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoScriptId(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoScriptId_894(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoScriptId(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoScriptId_895(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoScriptName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoScriptName_896(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoScriptName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v){
return StoreStackFrameInfoScriptName_897(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoScriptNameOrSourceUrl(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoScriptNameOrSourceUrl_898(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoScriptNameOrSourceUrl(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v){
return StoreStackFrameInfoScriptNameOrSourceUrl_899(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFunctionName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoFunctionName_900(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFunctionName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v){
return StoreStackFrameInfoFunctionName_901(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoWasmModuleName(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoWasmModuleName_902(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoWasmModuleName(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Object> p_v){
return StoreStackFrameInfoWasmModuleName_903(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackFrameInfoFlag(compiler::TNode<StackFrameInfo> p_o){
return LoadStackFrameInfoFlag_904(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackFrameInfoFlag(compiler::TNode<StackFrameInfo> p_o, compiler::TNode<Smi> p_v){
return StoreStackFrameInfoFlag_905(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameFrameArray(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameFrameArray_906(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameFrameArray(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<Object> p_v){
return StoreStackTraceFrameFrameArray_907(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameFrameIndex(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameFrameIndex_908(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameFrameIndex(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<Smi> p_v){
return StoreStackTraceFrameFrameIndex_909(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameFrameInfo(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameFrameInfo_910(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameFrameInfo(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<Object> p_v){
return StoreStackTraceFrameFrameInfo_911(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadStackTraceFrameId(compiler::TNode<StackTraceFrame> p_o){
return LoadStackTraceFrameId_912(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreStackTraceFrameId(compiler::TNode<StackTraceFrame> p_o, compiler::TNode<Smi> p_v){
return StoreStackTraceFrameId_913(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassPositionsStart(compiler::TNode<ClassPositions> p_o){
return LoadClassPositionsStart_914(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreClassPositionsStart(compiler::TNode<ClassPositions> p_o, compiler::TNode<Smi> p_v){
return StoreClassPositionsStart_915(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadClassPositionsEnd(compiler::TNode<ClassPositions> p_o){
return LoadClassPositionsEnd_916(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreClassPositionsEnd(compiler::TNode<ClassPositions> p_o, compiler::TNode<Smi> p_v){
return StoreClassPositionsEnd_917(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataWrapperCode(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataWrapperCode_918(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataWrapperCode(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Code> p_v){
return StoreWasmExportedFunctionDataWrapperCode_919(state_, p_o, p_v);
}
compiler::TNode<JSObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataInstance(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataInstance_920(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataInstance(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<JSObject> p_v){
return StoreWasmExportedFunctionDataInstance_921(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataJumpTableOffset(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataJumpTableOffset_922(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataJumpTableOffset(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExportedFunctionDataJumpTableOffset_923(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExportedFunctionDataFunctionIndex(compiler::TNode<WasmExportedFunctionData> p_o){
return LoadWasmExportedFunctionDataFunctionIndex_924(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExportedFunctionDataFunctionIndex(compiler::TNode<WasmExportedFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExportedFunctionDataFunctionIndex_925(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataWrapperCode(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataWrapperCode_926(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataWrapperCode(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<Code> p_v){
return StoreWasmJSFunctionDataWrapperCode_927(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedReturnCount(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataSerializedReturnCount_928(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedReturnCount(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmJSFunctionDataSerializedReturnCount_929(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedParameterCount(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataSerializedParameterCount_930(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedParameterCount(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<Smi> p_v){
return StoreWasmJSFunctionDataSerializedParameterCount_931(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmJSFunctionDataSerializedSignature(compiler::TNode<WasmJSFunctionData> p_o){
return LoadWasmJSFunctionDataSerializedSignature_932(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmJSFunctionDataSerializedSignature(compiler::TNode<WasmJSFunctionData> p_o, compiler::TNode<ByteArray> p_v){
return StoreWasmJSFunctionDataSerializedSignature_933(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataCallTarget(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataCallTarget_934(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataCallTarget(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<RawPtrT> p_v){
return StoreWasmCapiFunctionDataCallTarget_935(state_, p_o, p_v);
}
compiler::TNode<RawPtrT> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataEmbedderData(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataEmbedderData_936(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataEmbedderData(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<RawPtrT> p_v){
return StoreWasmCapiFunctionDataEmbedderData_937(state_, p_o, p_v);
}
compiler::TNode<Code> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataWrapperCode(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataWrapperCode_938(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataWrapperCode(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<Code> p_v){
return StoreWasmCapiFunctionDataWrapperCode_939(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmCapiFunctionDataSerializedSignature(compiler::TNode<WasmCapiFunctionData> p_o){
return LoadWasmCapiFunctionDataSerializedSignature_940(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmCapiFunctionDataSerializedSignature(compiler::TNode<WasmCapiFunctionData> p_o, compiler::TNode<ByteArray> p_v){
return StoreWasmCapiFunctionDataSerializedSignature_941(state_, p_o, p_v);
}
compiler::TNode<JSObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoInstance(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoInstance_942(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoInstance(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<JSObject> p_v){
return StoreWasmDebugInfoInstance_943(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoInterpreterHandle(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoInterpreterHandle_944(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoInterpreterHandle(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoInterpreterHandle_945(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoLocalsNames(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoLocalsNames_946(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoLocalsNames(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoLocalsNames_947(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoCWasmEntries(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoCWasmEntries_948(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoCWasmEntries(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoCWasmEntries_949(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmDebugInfoCWasmEntryMap(compiler::TNode<WasmDebugInfo> p_o){
return LoadWasmDebugInfoCWasmEntryMap_950(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmDebugInfoCWasmEntryMap(compiler::TNode<WasmDebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmDebugInfoCWasmEntryMap_951(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionTagIndex(compiler::TNode<WasmExceptionTag> p_o){
return LoadWasmExceptionTagIndex_952(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionTagIndex(compiler::TNode<WasmExceptionTag> p_o, compiler::TNode<Smi> p_v){
return StoreWasmExceptionTagIndex_953(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestNext(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestNext_954(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestNext(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<HeapObject> p_v){
return StoreAsyncGeneratorRequestNext_955(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestResumeMode(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestResumeMode_956(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestResumeMode(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<Smi> p_v){
return StoreAsyncGeneratorRequestResumeMode_957(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestValue(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestValue_958(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestValue(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<Object> p_v){
return StoreAsyncGeneratorRequestValue_959(state_, p_o, p_v);
}
compiler::TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadAsyncGeneratorRequestPromise(compiler::TNode<AsyncGeneratorRequest> p_o){
return LoadAsyncGeneratorRequestPromise_960(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsyncGeneratorRequestPromise(compiler::TNode<AsyncGeneratorRequest> p_o, compiler::TNode<JSPromise> p_v){
return StoreAsyncGeneratorRequestPromise_961(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryExportName(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryExportName_962(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryExportName(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v){
return StoreModuleInfoEntryExportName_963(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryLocalName(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryLocalName_964(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryLocalName(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v){
return StoreModuleInfoEntryLocalName_965(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryImportName(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryImportName_966(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryImportName(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<HeapObject> p_v){
return StoreModuleInfoEntryImportName_967(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryModuleRequest(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryModuleRequest_968(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryModuleRequest(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreModuleInfoEntryModuleRequest_969(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryCellIndex(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryCellIndex_970(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryCellIndex(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreModuleInfoEntryCellIndex_971(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryBegPos(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryBegPos_972(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryBegPos(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreModuleInfoEntryBegPos_973(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadModuleInfoEntryEndPos(compiler::TNode<ModuleInfoEntry> p_o){
return LoadModuleInfoEntryEndPos_974(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreModuleInfoEntryEndPos(compiler::TNode<ModuleInfoEntry> p_o, compiler::TNode<Smi> p_v){
return StoreModuleInfoEntryEndPos_975(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityPromise(compiler::TNode<PromiseCapability> p_o){
return LoadPromiseCapabilityPromise_976(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityPromise(compiler::TNode<PromiseCapability> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseCapabilityPromise_977(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityResolve(compiler::TNode<PromiseCapability> p_o){
return LoadPromiseCapabilityResolve_978(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityResolve(compiler::TNode<PromiseCapability> p_o, compiler::TNode<Object> p_v){
return StorePromiseCapabilityResolve_979(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseCapabilityReject(compiler::TNode<PromiseCapability> p_o){
return LoadPromiseCapabilityReject_980(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseCapabilityReject(compiler::TNode<PromiseCapability> p_o, compiler::TNode<Object> p_v){
return StorePromiseCapabilityReject_981(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionNext(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionNext_982(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionNext(compiler::TNode<PromiseReaction> p_o, compiler::TNode<Object> p_v){
return StorePromiseReactionNext_983(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionRejectHandler(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionRejectHandler_984(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionRejectHandler(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionRejectHandler_985(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionFulfillHandler(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionFulfillHandler_986(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionFulfillHandler(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionFulfillHandler_987(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionPromiseOrCapability(compiler::TNode<PromiseReaction> p_o){
return LoadPromiseReactionPromiseOrCapability_988(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionPromiseOrCapability(compiler::TNode<PromiseReaction> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionPromiseOrCapability_989(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskArgument(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskArgument_990(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskArgument(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<Object> p_v){
return StorePromiseReactionJobTaskArgument_991(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskContext(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskContext_992(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskContext(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<Context> p_v){
return StorePromiseReactionJobTaskContext_993(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskHandler(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskHandler_994(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskHandler(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionJobTaskHandler_995(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadPromiseReactionJobTaskPromiseOrCapability(compiler::TNode<PromiseReactionJobTask> p_o){
return LoadPromiseReactionJobTaskPromiseOrCapability_996(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseReactionJobTaskPromiseOrCapability(compiler::TNode<PromiseReactionJobTask> p_o, compiler::TNode<HeapObject> p_v){
return StorePromiseReactionJobTaskPromiseOrCapability_997(state_, p_o, p_v);
}
compiler::TNode<Context> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskContext(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskContext_998(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskContext(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<Context> p_v){
return StorePromiseResolveThenableJobTaskContext_999(state_, p_o, p_v);
}
compiler::TNode<JSPromise> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskPromiseToResolve(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskPromiseToResolve_1000(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskPromiseToResolve(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<JSPromise> p_v){
return StorePromiseResolveThenableJobTaskPromiseToResolve_1001(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThen(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskThen_1002(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThen(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<JSReceiver> p_v){
return StorePromiseResolveThenableJobTaskThen_1003(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadPromiseResolveThenableJobTaskThenable(compiler::TNode<PromiseResolveThenableJobTask> p_o){
return LoadPromiseResolveThenableJobTaskThenable_1004(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StorePromiseResolveThenableJobTaskThenable(compiler::TNode<PromiseResolveThenableJobTask> p_o, compiler::TNode<JSReceiver> p_v){
return StorePromiseResolveThenableJobTaskThenable_1005(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpData(compiler::TNode<JSRegExp> p_o){
return LoadJSRegExpData_1006(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpData(compiler::TNode<JSRegExp> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSRegExpData_1007(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpSource(compiler::TNode<JSRegExp> p_o){
return LoadJSRegExpSource_1008(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpSource(compiler::TNode<JSRegExp> p_o, compiler::TNode<HeapObject> p_v){
return StoreJSRegExpSource_1009(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpFlags(compiler::TNode<JSRegExp> p_o){
return LoadJSRegExpFlags_1010(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpFlags(compiler::TNode<JSRegExp> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpFlags_1011(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorResultValue(compiler::TNode<JSIteratorResult> p_o){
return LoadJSIteratorResultValue_1012(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorResultValue(compiler::TNode<JSIteratorResult> p_o, compiler::TNode<Object> p_v){
return StoreJSIteratorResultValue_1013(state_, p_o, p_v);
}
compiler::TNode<Oddball> TorqueGeneratedExportedMacrosAssembler::LoadJSIteratorResultDone(compiler::TNode<JSIteratorResult> p_o){
return LoadJSIteratorResultDone_1014(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSIteratorResultDone(compiler::TNode<JSIteratorResult> p_o, compiler::TNode<Oddball> p_v){
return StoreJSIteratorResultDone_1015(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultIndex(compiler::TNode<JSRegExpResult> p_o){
return LoadJSRegExpResultIndex_1016(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultIndex(compiler::TNode<JSRegExpResult> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpResultIndex_1017(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultInput(compiler::TNode<JSRegExpResult> p_o){
return LoadJSRegExpResultInput_1018(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultInput(compiler::TNode<JSRegExpResult> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpResultInput_1019(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpResultGroups(compiler::TNode<JSRegExpResult> p_o){
return LoadJSRegExpResultGroups_1020(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpResultGroups(compiler::TNode<JSRegExpResult> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpResultGroups_1021(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratingRegExp(compiler::TNode<JSRegExpStringIterator> p_o){
return LoadJSRegExpStringIteratorIteratingRegExp_1022(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratingRegExp(compiler::TNode<JSRegExpStringIterator> p_o, compiler::TNode<Object> p_v){
return StoreJSRegExpStringIteratorIteratingRegExp_1023(state_, p_o, p_v);
}
compiler::TNode<String> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorIteratedString(compiler::TNode<JSRegExpStringIterator> p_o){
return LoadJSRegExpStringIteratorIteratedString_1024(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorIteratedString(compiler::TNode<JSRegExpStringIterator> p_o, compiler::TNode<String> p_v){
return StoreJSRegExpStringIteratorIteratedString_1025(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadJSRegExpStringIteratorFlags(compiler::TNode<JSRegExpStringIterator> p_o){
return LoadJSRegExpStringIteratorFlags_1026(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreJSRegExpStringIteratorFlags(compiler::TNode<JSRegExpStringIterator> p_o, compiler::TNode<Smi> p_v){
return StoreJSRegExpStringIteratorFlags_1027(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoName(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoName_1028(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoName(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoName_1029(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoFlags(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoFlags_1030(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoFlags(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Smi> p_v){
return StoreAccessorInfoFlags_1031(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoExpectedReceiverType(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoExpectedReceiverType_1032(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoExpectedReceiverType(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoExpectedReceiverType_1033(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoSetter(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoSetter_1034(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoSetter(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoSetter_1035(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoGetter(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoGetter_1036(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoGetter(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoGetter_1037(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoJsGetter(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoJsGetter_1038(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoJsGetter(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoJsGetter_1039(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorInfoData(compiler::TNode<AccessorInfo> p_o){
return LoadAccessorInfoData_1040(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorInfoData(compiler::TNode<AccessorInfo> p_o, compiler::TNode<Object> p_v){
return StoreAccessorInfoData_1041(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorPairGetter(compiler::TNode<AccessorPair> p_o){
return LoadAccessorPairGetter_1042(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorPairGetter(compiler::TNode<AccessorPair> p_o, compiler::TNode<Object> p_v){
return StoreAccessorPairGetter_1043(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadAccessorPairSetter(compiler::TNode<AccessorPair> p_o){
return LoadAccessorPairSetter_1044(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAccessorPairSetter(compiler::TNode<AccessorPair> p_o, compiler::TNode<Object> p_v){
return StoreAccessorPairSetter_1045(state_, p_o, p_v);
}
compiler::TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoSharedFunctionInfo(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoSharedFunctionInfo_1046(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoSharedFunctionInfo(compiler::TNode<DebugInfo> p_o, compiler::TNode<SharedFunctionInfo> p_v){
return StoreDebugInfoSharedFunctionInfo_1047(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebuggerHints(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoDebuggerHints_1048(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebuggerHints(compiler::TNode<DebugInfo> p_o, compiler::TNode<Smi> p_v){
return StoreDebugInfoDebuggerHints_1049(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoScript(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoScript_1050(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoScript(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoScript_1051(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoOriginalBytecodeArray(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoOriginalBytecodeArray_1052(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoOriginalBytecodeArray(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoOriginalBytecodeArray_1053(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoDebugBytecodeArray(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoDebugBytecodeArray_1054(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoDebugBytecodeArray(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoDebugBytecodeArray_1055(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoBreakPoints(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoBreakPoints_1056(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoBreakPoints(compiler::TNode<DebugInfo> p_o, compiler::TNode<FixedArray> p_v){
return StoreDebugInfoBreakPoints_1057(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoFlags(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoFlags_1058(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoFlags(compiler::TNode<DebugInfo> p_o, compiler::TNode<Smi> p_v){
return StoreDebugInfoFlags_1059(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadDebugInfoCoverageInfo(compiler::TNode<DebugInfo> p_o){
return LoadDebugInfoCoverageInfo_1060(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreDebugInfoCoverageInfo(compiler::TNode<DebugInfo> p_o, compiler::TNode<HeapObject> p_v){
return StoreDebugInfoCoverageInfo_1061(state_, p_o, p_v);
}
compiler::TNode<SharedFunctionInfo> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorSharedFunctionInfo(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorSharedFunctionInfo_1062(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorSharedFunctionInfo(compiler::TNode<FeedbackVector> p_o, compiler::TNode<SharedFunctionInfo> p_v){
return StoreFeedbackVectorSharedFunctionInfo_1063(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorOptimizedCodeWeakOrSmi(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorOptimizedCodeWeakOrSmi_1064(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorOptimizedCodeWeakOrSmi(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Object> p_v){
return StoreFeedbackVectorOptimizedCodeWeakOrSmi_1065(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorClosureFeedbackCellArray(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorClosureFeedbackCellArray_1066(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorClosureFeedbackCellArray(compiler::TNode<FeedbackVector> p_o, compiler::TNode<FixedArray> p_v){
return StoreFeedbackVectorClosureFeedbackCellArray_1067(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorLength(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorLength_1068(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorLength(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackVectorLength_1069(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorInvocationCount(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorInvocationCount_1070(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorInvocationCount(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackVectorInvocationCount_1071(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorProfilerTicks(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorProfilerTicks_1072(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorProfilerTicks(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackVectorProfilerTicks_1073(state_, p_o, p_v);
}
compiler::TNode<Uint32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackVectorPadding(compiler::TNode<FeedbackVector> p_o){
return LoadFeedbackVectorPadding_1074(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackVectorPadding(compiler::TNode<FeedbackVector> p_o, compiler::TNode<Uint32T> p_v){
return StoreFeedbackVectorPadding_1075(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellValue(compiler::TNode<FeedbackCell> p_o){
return LoadFeedbackCellValue_1076(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellValue(compiler::TNode<FeedbackCell> p_o, compiler::TNode<HeapObject> p_v){
return StoreFeedbackCellValue_1077(state_, p_o, p_v);
}
compiler::TNode<Int32T> TorqueGeneratedExportedMacrosAssembler::LoadFeedbackCellInterruptBudget(compiler::TNode<FeedbackCell> p_o){
return LoadFeedbackCellInterruptBudget_1078(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreFeedbackCellInterruptBudget(compiler::TNode<FeedbackCell> p_o, compiler::TNode<Int32T> p_v){
return StoreFeedbackCellInterruptBudget_1079(state_, p_o, p_v);
}
compiler::TNode<Struct> TorqueGeneratedExportedMacrosAssembler::LoadAllocationMementoAllocationSite(compiler::TNode<AllocationMemento> p_o){
return LoadAllocationMementoAllocationSite_1080(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAllocationMementoAllocationSite(compiler::TNode<AllocationMemento> p_o, compiler::TNode<Struct> p_v){
return StoreAllocationMementoAllocationSite_1081(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectNativeModule(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectNativeModule_1082(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectNativeModule(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<Foreign> p_v){
return StoreWasmModuleObjectNativeModule_1083(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectExportWrappers(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectExportWrappers_1084(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectExportWrappers(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmModuleObjectExportWrappers_1085(state_, p_o, p_v);
}
compiler::TNode<Script> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectScript(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectScript_1086(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectScript(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<Script> p_v){
return StoreWasmModuleObjectScript_1087(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectWeakInstanceList(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectWeakInstanceList_1088(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectWeakInstanceList(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmModuleObjectWeakInstanceList_1089(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectAsmJsOffsetTable(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectAsmJsOffsetTable_1090(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectAsmJsOffsetTable(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmModuleObjectAsmJsOffsetTable_1091(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmModuleObjectBreakPointInfos(compiler::TNode<WasmModuleObject> p_o){
return LoadWasmModuleObjectBreakPointInfos_1092(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmModuleObjectBreakPointInfos(compiler::TNode<WasmModuleObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmModuleObjectBreakPointInfos_1093(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectEntries(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectEntries_1094(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectEntries(compiler::TNode<WasmTableObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmTableObjectEntries_1095(state_, p_o, p_v);
}
compiler::TNode<Object> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectMaximumLength(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectMaximumLength_1096(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectMaximumLength(compiler::TNode<WasmTableObject> p_o, compiler::TNode<Object> p_v){
return StoreWasmTableObjectMaximumLength_1097(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectDispatchTables(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectDispatchTables_1098(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectDispatchTables(compiler::TNode<WasmTableObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmTableObjectDispatchTables_1099(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmTableObjectRawType(compiler::TNode<WasmTableObject> p_o){
return LoadWasmTableObjectRawType_1100(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmTableObjectRawType(compiler::TNode<WasmTableObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmTableObjectRawType_1101(state_, p_o, p_v);
}
compiler::TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectArrayBuffer(compiler::TNode<WasmMemoryObject> p_o){
return LoadWasmMemoryObjectArrayBuffer_1102(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectArrayBuffer(compiler::TNode<WasmMemoryObject> p_o, compiler::TNode<JSArrayBuffer> p_v){
return StoreWasmMemoryObjectArrayBuffer_1103(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectMaximumPages(compiler::TNode<WasmMemoryObject> p_o){
return LoadWasmMemoryObjectMaximumPages_1104(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectMaximumPages(compiler::TNode<WasmMemoryObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmMemoryObjectMaximumPages_1105(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmMemoryObjectInstances(compiler::TNode<WasmMemoryObject> p_o){
return LoadWasmMemoryObjectInstances_1106(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmMemoryObjectInstances(compiler::TNode<WasmMemoryObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmMemoryObjectInstances_1107(state_, p_o, p_v);
}
compiler::TNode<JSArrayBuffer> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectUntaggedBuffer(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectUntaggedBuffer_1108(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectUntaggedBuffer(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<JSArrayBuffer> p_v){
return StoreWasmGlobalObjectUntaggedBuffer_1109(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectTaggedBuffer(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectTaggedBuffer_1110(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectTaggedBuffer(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<FixedArray> p_v){
return StoreWasmGlobalObjectTaggedBuffer_1111(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectOffset(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectOffset_1112(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectOffset(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmGlobalObjectOffset_1113(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadWasmGlobalObjectFlags(compiler::TNode<WasmGlobalObject> p_o){
return LoadWasmGlobalObjectFlags_1114(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmGlobalObjectFlags(compiler::TNode<WasmGlobalObject> p_o, compiler::TNode<Smi> p_v){
return StoreWasmGlobalObjectFlags_1115(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionObjectSerializedSignature(compiler::TNode<WasmExceptionObject> p_o){
return LoadWasmExceptionObjectSerializedSignature_1116(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionObjectSerializedSignature(compiler::TNode<WasmExceptionObject> p_o, compiler::TNode<ByteArray> p_v){
return StoreWasmExceptionObjectSerializedSignature_1117(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadWasmExceptionObjectExceptionTag(compiler::TNode<WasmExceptionObject> p_o){
return LoadWasmExceptionObjectExceptionTag_1118(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreWasmExceptionObjectExceptionTag(compiler::TNode<WasmExceptionObject> p_o, compiler::TNode<HeapObject> p_v){
return StoreWasmExceptionObjectExceptionTag_1119(state_, p_o, p_v);
}
compiler::TNode<Foreign> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataManagedNativeModule(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataManagedNativeModule_1120(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataManagedNativeModule(compiler::TNode<AsmWasmData> p_o, compiler::TNode<Foreign> p_v){
return StoreAsmWasmDataManagedNativeModule_1121(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataExportWrappers(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataExportWrappers_1122(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataExportWrappers(compiler::TNode<AsmWasmData> p_o, compiler::TNode<FixedArray> p_v){
return StoreAsmWasmDataExportWrappers_1123(state_, p_o, p_v);
}
compiler::TNode<ByteArray> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataAsmJsOffsetTable(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataAsmJsOffsetTable_1124(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataAsmJsOffsetTable(compiler::TNode<AsmWasmData> p_o, compiler::TNode<ByteArray> p_v){
return StoreAsmWasmDataAsmJsOffsetTable_1125(state_, p_o, p_v);
}
compiler::TNode<HeapNumber> TorqueGeneratedExportedMacrosAssembler::LoadAsmWasmDataUsesBitset(compiler::TNode<AsmWasmData> p_o){
return LoadAsmWasmDataUsesBitset_1126(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreAsmWasmDataUsesBitset(compiler::TNode<AsmWasmData> p_o, compiler::TNode<HeapNumber> p_v){
return StoreAsmWasmDataUsesBitset_1127(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassA(compiler::TNode<FixedArray> p_o){
return LoadInternalClassA_1128(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassA(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreInternalClassA_1129(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadInternalClassB(compiler::TNode<FixedArray> p_o){
return LoadInternalClassB_1130(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreInternalClassB(compiler::TNode<FixedArray> p_o, compiler::TNode<Number> p_v){
return StoreInternalClassB_1131(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairA(compiler::TNode<FixedArray> p_o){
return LoadSmiPairA_1132(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairA(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreSmiPairA_1133(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSmiPairB(compiler::TNode<FixedArray> p_o){
return LoadSmiPairB_1134(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSmiPairB(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreSmiPairB_1135(state_, p_o, p_v);
}
compiler::TNode<JSReceiver> TorqueGeneratedExportedMacrosAssembler::LoadSortStateReceiver(compiler::TNode<FixedArray> p_o){
return LoadSortStateReceiver_1136(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateReceiver(compiler::TNode<FixedArray> p_o, compiler::TNode<JSReceiver> p_v){
return StoreSortStateReceiver_1137(state_, p_o, p_v);
}
compiler::TNode<Map> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverMap(compiler::TNode<FixedArray> p_o){
return LoadSortStateInitialReceiverMap_1138(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverMap(compiler::TNode<FixedArray> p_o, compiler::TNode<Map> p_v){
return StoreSortStateInitialReceiverMap_1139(state_, p_o, p_v);
}
compiler::TNode<Number> TorqueGeneratedExportedMacrosAssembler::LoadSortStateInitialReceiverLength(compiler::TNode<FixedArray> p_o){
return LoadSortStateInitialReceiverLength_1140(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateInitialReceiverLength(compiler::TNode<FixedArray> p_o, compiler::TNode<Number> p_v){
return StoreSortStateInitialReceiverLength_1141(state_, p_o, p_v);
}
compiler::TNode<HeapObject> TorqueGeneratedExportedMacrosAssembler::LoadSortStateUserCmpFn(compiler::TNode<FixedArray> p_o){
return LoadSortStateUserCmpFn_1142(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateUserCmpFn(compiler::TNode<FixedArray> p_o, compiler::TNode<HeapObject> p_v){
return StoreSortStateUserCmpFn_1143(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortComparePtr(compiler::TNode<FixedArray> p_o){
return LoadSortStateSortComparePtr_1144(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortComparePtr(compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateSortComparePtr_1145(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateLoadFn(compiler::TNode<FixedArray> p_o){
return LoadSortStateLoadFn_1146(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateLoadFn(compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateLoadFn_1147(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateStoreFn(compiler::TNode<FixedArray> p_o){
return LoadSortStateStoreFn_1148(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateStoreFn(compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateStoreFn_1149(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateDeleteFn(compiler::TNode<FixedArray> p_o){
return LoadSortStateDeleteFn_1150(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateDeleteFn(compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateDeleteFn_1151(state_, p_o, p_v);
}
compiler::TNode<BuiltinPtr> TorqueGeneratedExportedMacrosAssembler::LoadSortStateCanUseSameAccessorFn(compiler::TNode<FixedArray> p_o){
return LoadSortStateCanUseSameAccessorFn_1152(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateCanUseSameAccessorFn(compiler::TNode<FixedArray> p_o, compiler::TNode<BuiltinPtr> p_v){
return StoreSortStateCanUseSameAccessorFn_1153(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateMinGallop(compiler::TNode<FixedArray> p_o){
return LoadSortStateMinGallop_1154(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateMinGallop(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreSortStateMinGallop_1155(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRunsSize(compiler::TNode<FixedArray> p_o){
return LoadSortStatePendingRunsSize_1156(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRunsSize(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreSortStatePendingRunsSize_1157(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStatePendingRuns(compiler::TNode<FixedArray> p_o){
return LoadSortStatePendingRuns_1158(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStatePendingRuns(compiler::TNode<FixedArray> p_o, compiler::TNode<FixedArray> p_v){
return StoreSortStatePendingRuns_1159(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateWorkArray(compiler::TNode<FixedArray> p_o){
return LoadSortStateWorkArray_1160(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateWorkArray(compiler::TNode<FixedArray> p_o, compiler::TNode<FixedArray> p_v){
return StoreSortStateWorkArray_1161(state_, p_o, p_v);
}
compiler::TNode<FixedArray> TorqueGeneratedExportedMacrosAssembler::LoadSortStateTempArray(compiler::TNode<FixedArray> p_o){
return LoadSortStateTempArray_1162(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateTempArray(compiler::TNode<FixedArray> p_o, compiler::TNode<FixedArray> p_v){
return StoreSortStateTempArray_1163(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateSortLength(compiler::TNode<FixedArray> p_o){
return LoadSortStateSortLength_1164(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateSortLength(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreSortStateSortLength_1165(state_, p_o, p_v);
}
compiler::TNode<Smi> TorqueGeneratedExportedMacrosAssembler::LoadSortStateNumberOfUndefined(compiler::TNode<FixedArray> p_o){
return LoadSortStateNumberOfUndefined_1166(state_, p_o);
}
void TorqueGeneratedExportedMacrosAssembler::StoreSortStateNumberOfUndefined(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v){
return StoreSortStateNumberOfUndefined_1167(state_, p_o, p_v);
}
}  // namespace internal
}  // namespace v8
