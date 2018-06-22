#ifndef V8_TORQUE_TEST_FROM_DSL_BASE_H__
#define V8_TORQUE_TEST_FROM_DSL_BASE_H__

#include "src/builtins/builtins-test-gen.h"


namespace v8 {
namespace internal {

class TestBuiltinsFromDSLAssembler: public TestBuiltinsAssembler {
 public:
  explicit TestBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : TestBuiltinsAssembler(state) {}

  using Node = compiler::Node;
  template <class T>
  using TNode = compiler::TNode<T>;
  template <class T>
  using SloppyTNode = compiler::SloppyTNode<T>;

  TNode<BoolT> ElementsKindTestHelper1(ElementsKind p_kind);
  TNode<BoolT> ElementsKindTestHelper2(ElementsKind p_kind);
  bool ElementsKindTestHelper3(ElementsKind p_kind);
  void LabelTestHelper1(Label* label_Label1_145);
  void LabelTestHelper2(Label* label_Label2_146, TVariable<Smi>* Label20115);
  void LabelTestHelper3(Label* label_Label3_147, TVariable<String>* Label30116, TVariable<Smi>* Label31117);
  void TestConstexpr1();
  void TestConstexprIf();
  void TestConstexprReturn();
  TNode<Oddball> TestGotoLabel();
  TNode<Oddball> TestGotoLabelWithOneParameter();
  TNode<Oddball> TestGotoLabelWithTwoParameters();
  void TestBuiltinSpecialization(TNode<Context> p_c);
  void LabelTestHelper4(bool p_flag, Label* label_Label4_151, Label* label_Label5_152);
  TNode<BoolT> CallLabelTestHelper4(bool p_flag);
  TNode<Oddball> TestPartiallyUnusedLabel();
  TNode<Object> GenericMacroTest8ATObject(TNode<Object> p_param2);
  TNode<Object> GenericMacroTestWithLabels8ATObject(TNode<Object> p_param2, Label* label_Y_160);
  void TestMacroSpecialization();
  TNode<Oddball> TestFunctionPointers(TNode<Context> p_context);
  TNode<Oddball> TestVariableRedeclaration(TNode<Context> p_context);
  void TestFunctionPointerToGeneric(TNode<Context> p_c);
};

}  // namepsace internal
}  // namespace v8

#endif  // V8_TORQUE_TEST_FROM_DSL_BASE_H__
