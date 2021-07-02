#ifndef V8_GEN_TORQUE_GENERATED_TEST_NAMESPACE_TQ_H_
#define V8_GEN_TORQUE_GENERATED_TEST_NAMESPACE_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

compiler::TNode<BoolT> ElementsKindTestHelper1_335(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
compiler::TNode<BoolT> ElementsKindTestHelper2_336(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
bool ElementsKindTestHelper3_337(compiler::CodeAssemblerState* state_, ElementsKind p_kind);
void LabelTestHelper1_338(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);
void LabelTestHelper2_339(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
void LabelTestHelper3_340(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
void TestConstexpr1_341(compiler::CodeAssemblerState* state_);
void TestConstexprIf_342(compiler::CodeAssemblerState* state_);
void TestConstexprReturn_343(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabel_344(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithOneParameter_345(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestGotoLabelWithTwoParameters_346(compiler::CodeAssemblerState* state_);
void TestBuiltinSpecialization_347(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void LabelTestHelper4_348(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
compiler::TNode<BoolT> CallLabelTestHelper4_349(compiler::CodeAssemblerState* state_, bool p_flag);
compiler::TNode<Oddball> TestPartiallyUnusedLabel_350(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_351(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2);
compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_352(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
void TestMacroSpecialization_353(compiler::CodeAssemblerState* state_);
compiler::TNode<Oddball> TestFunctionPointers_354(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Oddball> TestVariableRedeclaration_355(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestTernaryOperator_356(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestFunctionPointerToGeneric_357(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
compiler::TNode<BuiltinPtr> TestTypeAlias_358(compiler::CodeAssemblerState* state_, compiler::TNode<BuiltinPtr> p_x);
compiler::TNode<Oddball> TestUnsafeCast_359(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
void TestHexLiteral_360(compiler::CodeAssemblerState* state_);
void TestLargeIntegerLiterals_361(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_c);
void TestMultilineAssert_362(compiler::CodeAssemblerState* state_);
void TestNewlineInString_363(compiler::CodeAssemblerState* state_);
  int31_t kConstexprConst_364(compiler::CodeAssemblerState* state_);
  compiler::TNode<IntPtrT> kIntptrConst_365(compiler::CodeAssemblerState* state_);
  compiler::TNode<Smi> kSmiConst_366(compiler::CodeAssemblerState* state_);
void TestModuleConstBindings_367(compiler::CodeAssemblerState* state_);
void TestLocalConstBindings_368(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestStruct1_369(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i);
TorqueStructTestStructA TestStruct2_370(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructA TestStruct3_371(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
TorqueStructTestStructC TestStruct4_372(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void CallTestStructInLabel_374(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestForLoop_375(compiler::CodeAssemblerState* state_);
void TestSubtyping_376(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
compiler::TNode<Int32T> TypeswitchExample_377(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
void TestTypeswitch_378(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestTypeswitchAsanLsanFailure_379(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj);
void TestGenericOverload_380(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestEquality_381(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void BoolToBranch_382(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::CodeAssemblerLabel* label_Taken, compiler::CodeAssemblerLabel* label_NotTaken);
compiler::TNode<BoolT> TestOrAnd1_383(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestOrAnd2_384(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestOrAnd3_385(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr1_386(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr2_387(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
compiler::TNode<BoolT> TestAndOr3_388(compiler::CodeAssemblerState* state_, compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
void TestLogicalOperators_389(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> TestCall_390(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
void TestOtherwiseWithCode1_391(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode2_392(compiler::CodeAssemblerState* state_);
void TestOtherwiseWithCode3_393(compiler::CodeAssemblerState* state_);
void TestForwardLabel_394(compiler::CodeAssemblerState* state_);
void TestQualifiedAccess_395(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch1_396(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch2Wrapper_397(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<Smi> TestCatch2_398(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestCatch3WrapperWithLabel_399(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_Abort);
compiler::TNode<Smi> TestCatch3_400(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestIterator_401(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Map> p_map);
void TestFrame1_402(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestNew_403(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestStructConstructor_404(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
compiler::TNode<FixedArray> NewInternalClass_405(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_x);
void TestInternalClass_406(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestConstInStructs_407(compiler::CodeAssemblerState* state_);
compiler::TNode<Object> TestNewFixedArrayFromSpread_408(compiler::CodeAssemblerState* state_, compiler::TNode<Context> p_context);
void TestReferences_409(compiler::CodeAssemblerState* state_);
void TestStaticAssert_410(compiler::CodeAssemblerState* state_);
compiler::TNode<Smi> LoadInternalClassA_1128(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreInternalClassA_1129(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Number> LoadInternalClassB_1130(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreInternalClassB_1131(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Number> p_v);
void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
compiler::TNode<Smi> LoadSmiPairA_1132(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSmiPairA_1133(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
compiler::TNode<Smi> LoadSmiPairB_1134(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o);
void StoreSmiPairB_1135(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
CodeStubAssembler::Reference _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, compiler::TNode<FixedArray> p_this);
compiler::TNode<Object> GenericMacroTest5ATSmi_1229(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_param);
compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi_1230(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_param, compiler::CodeAssemblerLabel* label_X);
compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1232(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_x);
compiler::TNode<Smi> ExampleGenericOverload5ATSmi_1233(compiler::CodeAssemblerState* state_, compiler::TNode<Smi> p_o);
compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1234(compiler::CodeAssemblerState* state_, compiler::TNode<Object> p_o);
void Swap5ATSmi_1236(compiler::CodeAssemblerState* state_, CodeStubAssembler::Reference p_a, CodeStubAssembler::Reference p_b);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_TEST_NAMESPACE_V8_H_
