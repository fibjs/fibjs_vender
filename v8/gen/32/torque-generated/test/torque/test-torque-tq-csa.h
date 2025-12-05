#ifndef V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_CSA_H_
#define V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_CSA_H_

#include "src/builtins/torque-csa-header-includes.h"

namespace v8 {
namespace internal {

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=12&c=1
TNode<BoolT> ElementsKindTestHelper1_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=22&c=1
bool ElementsKindTestHelper2_0(compiler::CodeAssemblerState* state_, ElementsKind p_kind);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=27&c=1
void LabelTestHelper1_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=32&c=1
void LabelTestHelper2_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=37&c=1
void LabelTestHelper3_0(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=42&c=1
void TestConstexpr1_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=49&c=1
void TestConstexprIf_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=56&c=1
void TestConstexprReturn_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=71&c=1
TNode<Boolean> TestGotoLabel_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=80&c=1
TNode<Boolean> TestGotoLabelWithOneParameter_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=90&c=1
TNode<Boolean> TestGotoLabelWithTwoParameters_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=109&c=1
void TestBuiltinSpecialization_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=117&c=1
void LabelTestHelper4_0(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=126&c=1
TNode<BoolT> CallLabelTestHelper4_0(compiler::CodeAssemblerState* state_, bool p_flag);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=136&c=1
TNode<Boolean> TestPartiallyUnusedLabel_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=152&c=1
TNode<Object> GenericMacroTest_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_param2);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=161&c=1
TNode<Object> GenericMacroTestWithLabels_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=166&c=1
void TestMacroSpecialization_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=192&c=1
TNode<Boolean> TestFunctionPointers_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=201&c=1
TNode<Boolean> TestVariableRedeclaration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=208&c=1
TNode<Smi> TestTernaryOperator_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=214&c=1
void TestFunctionPointerToGeneric_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=226&c=1
TNode<BuiltinPtr> TestTypeAlias_0(compiler::CodeAssemblerState* state_, TNode<BuiltinPtr> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=231&c=1
TNode<Boolean> TestUnsafeCast_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_n);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=242&c=1
void TestHexLiteral_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=248&c=1
void TestLargeIntegerLiterals_0(compiler::CodeAssemblerState* state_, TNode<Context> p_c);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=254&c=1
void TestMultilineAssert_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=262&c=1
void TestNewlineInString_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=267&c=1
int31_t kConstexprConst_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=268&c=1
TNode<IntPtrT> kIntptrConst_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=269&c=1
TNode<Smi> kSmiConst_0(compiler::CodeAssemblerState* state_);
// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=271&c=1
void TestModuleConstBindings_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=278&c=1
void TestLocalConstBindings_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=304&c=1
TNode<Smi> TestStruct1_0(compiler::CodeAssemblerState* state_, TorqueStructTestStructA_0 p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=309&c=1
TorqueStructTestStructA_0 TestStruct2_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=318&c=1
TorqueStructTestStructA_0 TestStruct3_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=344&c=1
TorqueStructTestStructC_0 TestStruct4_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=353&c=1
void CallTestStructInLabel_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=362&c=1
void TestForLoop_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=461&c=1
void TestSubtyping_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=478&c=1
TNode<Int32T> TypeswitchExample_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Union<FixedArray, HeapNumber, Smi>> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=507&c=1
void TestTypeswitch_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=515&c=1
void TestTypeswitchAsanLsanFailure_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_obj);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=537&c=1
void TestGenericOverload_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=545&c=1
void TestEquality_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=555&c=1
TNode<BoolT> TestOrAnd_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=560&c=1
TNode<BoolT> TestAndOr_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=565&c=1
void TestLogicalOperators_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=585&c=1
TNode<Smi> TestCall_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=591&c=1
void TestOtherwiseWithCode1_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=603&c=1
void TestOtherwiseWithCode2_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=613&c=1
void TestOtherwiseWithCode3_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=622&c=1
void TestForwardLabel_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=633&c=1
void TestQualifiedAccess_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=639&c=1
TNode<Smi> TestCatch1_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=650&c=1
void TestCatch2Wrapper_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=655&c=1
TNode<Smi> TestCatch2_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=666&c=1
void TestCatch3WrapperWithLabel_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=672&c=1
TNode<Smi> TestCatch3_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=689&c=1
void TestIterator_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=708&c=1
void TestFrame1_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=724&c=1
void TestNew_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=748&c=1
void TestStructConstructor_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=763&c=1
TNode<InternalClass> Cast_InternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=773&c=1
TNode<InternalClass> NewInternalClass_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=777&c=1
void TestInternalClass_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=796&c=1
void TestConstInStructs_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=807&c=1
void TestParentFrameArguments_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=823&c=1
TNode<Object> TestNewFixedArrayFromSpread_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=1
TNode<SmiPair> Cast_SmiPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=843&c=1
void TestReferences_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=854&c=1
void TestSlices_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=882&c=1
TNode<Undefined> TestSliceEnumeration_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=911&c=1
void TestStaticAssert_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=930&c=1
TNode<SmiBox> Cast_SmiBox_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=939&c=1
void TestLoadEliminationFixed_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=953&c=1
void TestLoadEliminationVariable_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=965&c=1
TNode<Smi> TestRedundantArrayElementCheck_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=980&c=1
TNode<Smi> TestRedundantSmiCheck_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=999&c=1
TNode<IntPtrT> TestGenericStruct1_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1020&c=1
TorqueStructTestTuple_TestTuple_intptr_Smi_TestTuple_Smi_intptr_0 TestGenericStruct2_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1032&c=1
TNode<BoolT> BranchAndWriteResult_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_x, TNode<SmiBox> p_box);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1042&c=1
void TestBranchOnBoolOptimization_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_input);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1062&c=1
void TestBitFieldLoad_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_val, TNode<BoolT> p_expectedA, TNode<Uint16T> p_expectedB, TNode<Uint32T> p_expectedC, TNode<BoolT> p_expectedD);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1072&c=1
void TestBitFieldStore_0(compiler::CodeAssemblerState* state_, TNode<Uint8T> p_val);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1091&c=1
void TestBitFieldInit_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_a, TNode<Uint16T> p_b, TNode<Uint32T> p_c, TNode<BoolT> p_d);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1109&c=1
void TestBitFieldUintptrOps_0(compiler::CodeAssemblerState* state_, TNode<Uint32T> p_val2, TNode<UintPtrT> p_val3);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1150&c=1
void TestBitFieldMultipleFlags_0(compiler::CodeAssemblerState* state_, TNode<BoolT> p_a, TNode<Int32T> p_b, TNode<BoolT> p_c);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=1
TNode<ExportedSubClass> Cast_ExportedSubClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1181&c=1
TNode<ExportedSubClassBase> Cast_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
TNode<AbstractInternalClass> Cast_AbstractInternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1190&c=1
TNode<AbstractInternalClassSubclass1> Cast_AbstractInternalClassSubclass1_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=1
TNode<AbstractInternalClassSubclass2> Cast_AbstractInternalClassSubclass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1199&c=1
TNode<InternalClassWithStructElements> Cast_InternalClassWithStructElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1210&c=1
TNode<ExportedSubClass> TestFullyGeneratedClassFromCpp_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1216&c=1
TNode<ExportedSubClass2> Cast_ExportedSubClass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_obj, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1223&c=1
void TestGeneratedCastOperators_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1257&c=1
void TestNewPretenured_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1264&c=1
void TestWord8Phi_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1277&c=1
void TestOffHeapSlice_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr, TNode<IntPtrT> p_length);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1300&c=1
void TestCallMultiReturnBuiltin_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1307&c=1
TNode<Smi> TestRunLazyTwice_0(compiler::CodeAssemblerState* state_, std::function<TNode<Smi>()> p_lazySmi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1314&c=1
TNode<Smi> GetLazySmi_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1318&c=1
TNode<Smi> AddTwoSmiValues_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_a, TNode<Smi> p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1322&c=1
TNode<Smi> AddSmiAndConstexprValues_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_a, int31_t p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1326&c=1
void TestCreateLazyNodeFromTorque_0(compiler::CodeAssemblerState* state_);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1350&c=1
void TestCellAccessors_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Cell> p_cell);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=769&c=3
TNode<Smi> LoadInternalClassA_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=769&c=3
void StoreInternalClassA_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=770&c=3
TNode<Number> LoadInternalClassB_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=770&c=3
void StoreInternalClassB_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Number> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=764&c=3
void Method_InternalClass_Flip_0(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=833&c=3
TNode<Smi> LoadSmiPairA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=833&c=3
void StoreSmiPairA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=834&c=3
TNode<Smi> LoadSmiPairB_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=834&c=3
void StoreSmiPairB_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=830&c=3
TorqueStructReference_Smi_0 Method_SmiPair_GetA_0(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_this);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=931&c=3
TNode<Smi> LoadSmiBoxValue_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=931&c=3
void StoreSmiBoxValue_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=932&c=3
TNode<Smi> LoadSmiBoxUnrelated_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=932&c=3
void StoreSmiBoxUnrelated_0(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=3
TNode<HeapObject> LoadExportedSubClassBaseA_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1183&c=3
void StoreExportedSubClassBaseA_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1184&c=3
TNode<HeapObject> LoadExportedSubClassBaseB_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1184&c=3
void StoreExportedSubClassBaseB_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClassBase> p_o, TNode<HeapObject> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1176&c=3
TNode<Int32T> LoadExportedSubClassCField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1176&c=3
void StoreExportedSubClassCField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=3
TNode<Int32T> LoadExportedSubClassDField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1177&c=3
void StoreExportedSubClassDField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1178&c=3
TNode<Smi> LoadExportedSubClassEField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1178&c=3
void StoreExportedSubClassEField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1200&c=3
TNode<Int32T> LoadInternalClassWithStructElementsDummy1_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1200&c=3
void StoreInternalClassWithStructElementsDummy1_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
TNode<Int32T> LoadInternalClassWithStructElementsDummy2_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1201&c=3
void StoreInternalClassWithStructElementsDummy2_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1202&c=9
TNode<Smi> LoadInternalClassWithStructElementsCount_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
TNode<Smi> LoadInternalClassWithStructElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1203&c=3
void StoreInternalClassWithStructElementsData_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
TNode<Object> LoadInternalClassWithStructElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1204&c=3
void StoreInternalClassWithStructElementsObject_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<Object> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=3
TorqueStructSlice_Smi_MutableReference_Smi_0 FieldSliceInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=3
TNode<Smi> LoadInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1205&c=3
void StoreInternalClassWithStructElementsEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o, TNode<IntPtrT> p_i, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 FieldSliceInternalClassWithStructElementsMoreEntries_0(compiler::CodeAssemblerState* state_, TNode<InternalClassWithStructElements> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1218&c=3
TNode<Int32T> LoadExportedSubClass2XField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1218&c=3
void StoreExportedSubClass2XField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1219&c=3
TNode<Int32T> LoadExportedSubClass2YField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1219&c=3
void StoreExportedSubClass2YField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Int32T> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1220&c=3
TNode<Smi> LoadExportedSubClass2ZField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1220&c=3
void StoreExportedSubClass2ZField_0(compiler::CodeAssemblerState* state_, TNode<ExportedSubClass2> p_o, TNode<Smi> p_v);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=170&c=11
TNode<Object> GenericMacroTest_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p__param);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=175&c=12
TNode<Object> GenericMacroTestWithLabels_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=481&c=15
TNode<Union<FixedArray, HeapNumber, Smi>> IncrementIfSmi_NumberOrFixedArray_0(compiler::CodeAssemblerState* state_, TNode<Union<FixedArray, HeapNumber, Smi>> p_x);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=482&c=5
TNode<FixedArray> Cast_FixedArray_1(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=541&c=9
TNode<Smi> ExampleGenericOverload_Smi_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=542&c=25
TNode<Object> ExampleGenericOverload_Object_0(compiler::CodeAssemblerState* state_, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=636&c=10
TNode<BoolT> Is_JSArray_Smi_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=763&c=1
TNode<InternalClass> DownCastForTorqueClass_InternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=826&c=10
void InitializeFieldsFromIterator_Object_TestIterator_0(compiler::CodeAssemblerState* state_, TorqueStructSlice_Object_MutableReference_Object_0 p_target, TorqueStructTestIterator_0 p_originIterator);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=829&c=1
TNode<SmiPair> DownCastForTorqueClass_SmiPair_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=849&c=3
void Swap_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructReference_Smi_0 p_a, TorqueStructReference_Smi_0 p_b);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=930&c=1
TNode<SmiBox> DownCastForTorqueClass_SmiBox_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1024&c=24
TorqueStructTestTuple_Smi_intptr_0 TupleSwap_intptr_Smi_0(compiler::CodeAssemblerState* state_, TorqueStructTestTuple_intptr_Smi_0 p_tuple);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1174&c=1
TNode<ExportedSubClass> DownCastForTorqueClass_ExportedSubClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1181&c=1
TNode<ExportedSubClassBase> DownCastForTorqueClass_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1187&c=1
TNode<AbstractInternalClass> DownCastForTorqueClass_AbstractInternalClass_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1190&c=1
TNode<AbstractInternalClassSubclass1> DownCastForTorqueClass_AbstractInternalClassSubclass1_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1192&c=1
TNode<AbstractInternalClassSubclass2> DownCastForTorqueClass_AbstractInternalClassSubclass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1199&c=1
TNode<InternalClassWithStructElements> DownCastForTorqueClass_InternalClassWithStructElements_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1216&c=1
TNode<ExportedSubClass2> DownCastForTorqueClass_ExportedSubClass2_0(compiler::CodeAssemblerState* state_, TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1233&c=10
TNode<BoolT> Is_ExportedSubClassBase_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1234&c=10
TNode<BoolT> Is_ExportedSubClass_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1235&c=11
TNode<BoolT> Is_ExportedSubClass2_Object_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1244&c=11
TNode<BoolT> Is_JSSloppyArgumentsObject_JSFunction_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1246&c=27
TNode<FixedArray> NewFixedArray_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_length, TorqueStructConstantIterator_TheHole_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1247&c=20
TNode<SloppyArgumentsElements> NewSloppyArgumentsElements_ConstantIterator_TheHole_0(compiler::CodeAssemblerState* state_, TNode<Smi> p_length, TNode<Context> p_context, TNode<FixedArray> p_arguments, TorqueStructConstantIterator_TheHole_0 p_it);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1251&c=10
TNode<BoolT> Is_JSArgumentsObject_JSSloppyArgumentsObject_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArgumentsObject> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1260&c=10
TNode<BoolT> Is_ExportedSubClassBase_ExportedSubClassBase_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<ExportedSubClassBase> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1279&c=47
TNode<String> Convert_String_constexpr_string_0(compiler::CodeAssemblerState* state_, const char* p_i);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1279&c=18
TNode<SeqOneByteString> UnsafeCast_SeqOneByteString_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1281&c=10
TorqueStructReference_char8_0 NewOffHeapReference_char8_0(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_ptr);

// https://source.chromium.org/chromium/chromium/src/+/main:v8/test/torque/test-torque.tq?l=1206&c=3
TorqueStructSlice_InternalClassStructElement_MutableReference_InternalClassStructElement_0 NewMutableSlice_InternalClassStructElement_0(compiler::CodeAssemblerState* state_, TNode<Union<HeapObject, TaggedIndex>> p_object, TNode<IntPtrT> p_offset, TNode<IntPtrT> p_length);

} // namespace internal
} // namespace v8

#endif // V8_GEN_TORQUE_GENERATED_TEST_TORQUE_TEST_TORQUE_TQ_CSA_H_
