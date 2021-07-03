#ifndef V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> ElementsKindTestHelper1_344(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
bool ElementsKindTestHelper2_345(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
void LabelTestHelper1_346(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);
void LabelTestHelper2_347(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
void LabelTestHelper3_348(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
void TestConstexpr1_349(compiler::CodeAssemblerState* state_);
void TestConstexprIf_350(compiler::CodeAssemblerState* state_);
void TestConstexprReturn_351(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabel_352(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithOneParameter_353(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_354(compiler::CodeAssemblerState* state_);
void TestBuiltinSpecialization_355(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void LabelTestHelper4_356(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
compiler::TNode<BoolT> CallLabelTestHelper4_357(compiler::CodeAssemblerState* state_, bool p_flag);
compiler::TNode<Oddball> TestPartiallyUnusedLabel_358(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_359(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2);
compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_360(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
void TestMacroSpecialization_361(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestFunctionPointers_362(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Oddball> TestVariableRedeclaration_363(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestTernaryOperator_364(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestFunctionPointerToGeneric_365(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
compiler::TNode<BuiltinPtr> TestTypeAlias_366(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x);
compiler::TNode<Oddball> TestUnsafeCast_367(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
void TestHexLiteral_368(compiler::CodeAssemblerState* state_);
void TestLargeIntegerLiterals_369(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void TestMultilineAssert_370(compiler::CodeAssemblerState* state_);
void TestNewlineInString_371(compiler::CodeAssemblerState* state_);
  int31_t kConstexprConst_372(compiler::CodeAssemblerState* state_);
  compiler::TNode<IntPtrT> kIntptrConst_373(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSmiConst_374(compiler::CodeAssemblerState* state_);
void TestModuleConstBindings_375(compiler::CodeAssemblerState* state_);
void TestLocalConstBindings_376(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestStruct1_377(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i);
TorqueStructTestStructA TestStruct2_378(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructA TestStruct3_379(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructC TestStruct4_380(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void CallTestStructInLabel_382(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestForLoop_383(compiler::CodeAssemblerState* state_);
void TestSubtyping_384(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
compiler::TNode<Int32T> TypeswitchExample_385(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
void TestTypeswitch_386(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestTypeswitchAsanLsanFailure_387(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj);
void TestGenericOverload_388(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestEquality_389(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void BoolToBranch_390(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::CodeAssemblerLabel* label_Taken, compiler::CodeAssemblerLabel* label_NotTaken);
compiler::TNode<BoolT> TestOrAnd1_391(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestOrAnd2_392(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestOrAnd3_393(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr1_394(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr2_395(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr3_396(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
void TestLogicalOperators_397(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestCall_398(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
void TestOtherwiseWithCode1_399(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode2_400(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode3_401(compiler::CodeAssemblerState* state_);
void TestForwardLabel_402(compiler::CodeAssemblerState* state_);
void TestQualifiedAccess_403(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch1_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch2Wrapper_405(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch2_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch3WrapperWithLabel_407(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);
compiler::TNode<Smi> TestCatch3_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestIterator_409(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map);
void TestFrame1_410(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestNew_411(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStructConstructor_412(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<InternalClass> NewInternalClass_413(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestInternalClass_414(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestConstInStructs_415(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> TestNewFixedArrayFromSpread_416(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestReferences_417(compiler::CodeAssemblerState* state_);
void TestStaticAssert_418(compiler::CodeAssemblerState* state_);
void TestLoadEliminationFixed_419(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestLoadEliminationVariable_420(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantArrayElementCheck_421(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantSmiCheck_422(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<IntPtrT> TestGenericStruct1_423(compiler::CodeAssemblerState* state_);
TorqueStructTestTuple5ATSmi8ATintptr TestGenericStruct2_424(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> LoadInternalClassA_1244(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassA_1245(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> LoadInternalClassB_1246(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassB_1247(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v);
void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
compiler::TNode<Smi> LoadSmiPairA_1248(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairA_1249(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiPairB_1250(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairB_1251(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
TorqueStructReference5ATSmi _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_this);
compiler::TNode<Smi> LoadSmiBoxValue_1252(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxValue_1253(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiBoxUnrelated_1254(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxUnrelated_1255(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Object> GenericMacroTest5ATSmi_1349(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param);
compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1350(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);
compiler::TNode<IntPtrT> Convert8ATintptr17ATconstexpr_int31_1351(compiler::CodeAssemblerState* state_, int31_t p_i);
compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1352(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x);
compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1353(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o);
compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1354(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o);
void Swap5ATSmi_1357(compiler::CodeAssemblerState* state_, TorqueStructReference5ATSmi p_a, TorqueStructReference5ATSmi p_b);
TorqueStructTestTuple5ATSmi8ATintptr TupleSwap8ATintptr5ATSmi_1358(compiler::CodeAssemblerState* state_, TorqueStructTestTuple8ATintptr5ATSmi p_tuple);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_
