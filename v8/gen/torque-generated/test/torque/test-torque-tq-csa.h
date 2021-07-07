#ifndef V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> ElementsKindTestHelper1_385(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
bool ElementsKindTestHelper2_386(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
void LabelTestHelper1_387(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);
void LabelTestHelper2_388(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
void LabelTestHelper3_389(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
void TestConstexpr1_390(compiler::CodeAssemblerState* state_);
void TestConstexprIf_391(compiler::CodeAssemblerState* state_);
void TestConstexprReturn_392(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabel_393(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithOneParameter_394(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_395(compiler::CodeAssemblerState* state_);
void TestBuiltinSpecialization_396(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void LabelTestHelper4_397(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
compiler::TNode<BoolT> CallLabelTestHelper4_398(compiler::CodeAssemblerState* state_, bool p_flag);
compiler::TNode<Oddball> TestPartiallyUnusedLabel_399(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_400(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2);
compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_401(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
void TestMacroSpecialization_402(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestFunctionPointers_403(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Oddball> TestVariableRedeclaration_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestTernaryOperator_405(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestFunctionPointerToGeneric_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
compiler::TNode<BuiltinPtr> TestTypeAlias_407(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x);
compiler::TNode<Oddball> TestUnsafeCast_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
void TestHexLiteral_409(compiler::CodeAssemblerState* state_);
void TestLargeIntegerLiterals_410(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void TestMultilineAssert_411(compiler::CodeAssemblerState* state_);
void TestNewlineInString_412(compiler::CodeAssemblerState* state_);
  int31_t kConstexprConst_413(compiler::CodeAssemblerState* state_);
  compiler::TNode<IntPtrT> kIntptrConst_414(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSmiConst_415(compiler::CodeAssemblerState* state_);
void TestModuleConstBindings_416(compiler::CodeAssemblerState* state_);
void TestLocalConstBindings_417(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestStruct1_418(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i);
TorqueStructTestStructA TestStruct2_419(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructA TestStruct3_420(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructC TestStruct4_421(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void CallTestStructInLabel_423(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestForLoop_424(compiler::CodeAssemblerState* state_);
void TestSubtyping_425(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
compiler::TNode<Int32T> TypeswitchExample_426(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
void TestTypeswitch_427(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestTypeswitchAsanLsanFailure_428(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj);
void TestGenericOverload_429(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestEquality_430(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<BoolT> TestOrAnd_431(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr_432(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
void TestLogicalOperators_433(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestCall_434(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
void TestOtherwiseWithCode1_435(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode2_436(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode3_437(compiler::CodeAssemblerState* state_);
void TestForwardLabel_438(compiler::CodeAssemblerState* state_);
void TestQualifiedAccess_439(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch1_440(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch2Wrapper_441(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch2_442(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch3WrapperWithLabel_443(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);
compiler::TNode<Smi> TestCatch3_444(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestIterator_445(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Map> p_map);
void TestFrame1_446(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestNew_447(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStructConstructor_448(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<InternalClass> NewInternalClass_449(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestInternalClass_450(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestConstInStructs_451(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> TestNewFixedArrayFromSpread_452(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestReferences_453(compiler::CodeAssemblerState* state_);
void TestSlices_454(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestSliceEnumeration_455(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStaticAssert_456(compiler::CodeAssemblerState* state_);
void TestLoadEliminationFixed_457(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestLoadEliminationVariable_458(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantArrayElementCheck_459(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestRedundantSmiCheck_460(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<IntPtrT> TestGenericStruct1_461(compiler::CodeAssemblerState* state_);
TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr TestGenericStruct2_462(compiler::CodeAssemblerState* state_);
compiler::TNode<BoolT> BranchAndWriteResult_463(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x, compiler::TNode<SmiBox> p_box);
void TestBranchOnBoolOptimization_464(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_input);
compiler::TNode<Smi> LoadInternalClassA_1294(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassA_1295(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> LoadInternalClassB_1296(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o);
void StoreInternalClassB_1297(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_o, compiler::TNode<Number> p_v);
void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
compiler::TNode<Smi> LoadSmiPairA_1298(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairA_1299(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiPairB_1300(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o);
void StoreSmiPairB_1301(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_o, compiler::TNode<Smi> p_v);
TorqueStructReference5ATSmi _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<SmiPair> p_this);
compiler::TNode<Smi> LoadSmiBoxValue_1302(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxValue_1303(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiBoxUnrelated_1304(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o);
void StoreSmiBoxUnrelated_1305(compiler::CodeAssemblerState* state_, compiler::TNode<SmiBox> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Object> GenericMacroTest5ATSmi_1408(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param);
compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1409(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);
compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1410(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x);
compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1411(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o);
compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1412(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o);
compiler::TNode<BoolT> Is7JSArray5ATSmi_1413(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Smi> p_o);
void Swap5ATSmi_1416(compiler::CodeAssemblerState* state_, TorqueStructReference5ATSmi p_a, TorqueStructReference5ATSmi p_b);
TorqueStructTestTuple5ATSmi8ATintptr TupleSwap8ATintptr5ATSmi_1417(compiler::CodeAssemblerState* state_, TorqueStructTestTuple8ATintptr5ATSmi p_tuple);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_H_
