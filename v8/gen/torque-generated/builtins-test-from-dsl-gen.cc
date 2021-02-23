#include "src/builtins/builtins-test-gen.h"
#include "src/objects/arguments.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/bigint.h"
#include "builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper1(ElementsKind p_kind) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    if (((ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      Goto(&block3);
    } else {
      Goto(&block4);
    }
  }

  if (block3.is_used()) {
    Bind(&block3);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block1, tmp0);
  }

  if (block4.is_used()) {
    Bind(&block4);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block1, tmp1);
  }

    TNode<BoolT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<BoolT>{tmp2};
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(FromConstexpr6ATbool(((ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (ElementsKindEqual(p_kind, UINT16_ELEMENTS)))));
    Goto(&block1, tmp0);
  }

    TNode<BoolT> tmp1;
    Bind(&block1, &tmp1);
  return TNode<BoolT>{tmp1};
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    Goto(&block1);
  }

    Bind(&block1);
  return ((ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (ElementsKindEqual(p_kind, UINT16_ELEMENTS)));
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    Goto(&block1);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_Label1);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2, TVariable<Smi>* label_Label2_parameter_0) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(42));
    Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp1;
    Bind(&block1, &tmp1);
    *label_Label2_parameter_0 = tmp1;
    Goto(label_Label2);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3, TVariable<String>* label_Label3_parameter_0, TVariable<Smi>* label_Label3_parameter_1) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<String>(FromConstexpr8ATString("foo"));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<String> tmp2;
    TNode<Smi> tmp3;
    Bind(&block1, &tmp2, &tmp3);
    *label_Label3_parameter_1 = tmp3;
    *label_Label3_parameter_0 = tmp2;
    Goto(label_Label3);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(FromConstexpr6ATbool((IsFastElementsKind(PACKED_SMI_ELEMENTS))));
    Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'FromConstexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))\' failed at ../../test/torque/test-torque.tq:38:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT8_ELEMENTS));
    Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'ElementsKindTestHelper1(UINT8_ELEMENTS)\' failed at ../../test/torque/test-torque.tq:42:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT16_ELEMENTS));
    Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    Bind(&block5);
    Print("assert \'ElementsKindTestHelper1(UINT16_ELEMENTS)\' failed at ../../test/torque/test-torque.tq:43:");
    Unreachable();
  }

  if (block4.is_used()) {
    Bind(&block4);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT32_ELEMENTS));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp2}));
    Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    Bind(&block7);
    Print("assert \'!ElementsKindTestHelper1(UINT32_ELEMENTS)\' failed at ../../test/torque/test-torque.tq:44:");
    Unreachable();
  }

  if (block6.is_used()) {
    Bind(&block6);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(FromConstexpr6ATbool((ElementsKindTestHelper3(UINT8_ELEMENTS))));
    Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'FromConstexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))\' failed at ../../test/torque/test-torque.tq:48:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(FromConstexpr6ATbool((ElementsKindTestHelper3(UINT16_ELEMENTS))));
    Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    Bind(&block5);
    Print("assert \'FromConstexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))\' failed at ../../test/torque/test-torque.tq:49:");
    Unreachable();
  }

  if (block4.is_used()) {
    Bind(&block4);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(FromConstexpr6ATbool((ElementsKindTestHelper3(UINT32_ELEMENTS))));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp2}));
    Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    Bind(&block7);
    Print("assert \'!FromConstexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))\' failed at ../../test/torque/test-torque.tq:50:");
    Unreachable();
  }

  if (block6.is_used()) {
    Bind(&block6);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(FromConstexpr6ATbool((ConstexprBoolNot((ElementsKindTestHelper3(UINT32_ELEMENTS))))));
    Branch(tmp4, &block8, &block9);
  }

  if (block9.is_used()) {
    Bind(&block9);
    Print("assert \'FromConstexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))\' failed at ../../test/torque/test-torque.tq:51:");
    Unreachable();
  }

  if (block8.is_used()) {
    Bind(&block8);
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    Label label0(this);
    LabelTestHelper1(&label0);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4);
    }
  }

  if (block4.is_used()) {
    Bind(&block4);
    Goto(&block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = True();
    Goto(&block1, tmp0);
  }

    TNode<Oddball> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Oddball>{tmp1};
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TVariable<Smi> result_0_0(this);
    Label label0(this);
    LabelTestHelper2(&label0, &result_0_0);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, result_0_0.value());
    }
  }

  if (block4.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block4, &tmp0);
    Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp1;
    Bind(&block3, &tmp1);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(42));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2}));
    Branch(tmp3, &block5, &block6, tmp1);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp4;
    Bind(&block6, &tmp4);
    Print("assert \'smi == 42\' failed at ../../test/torque/test-torque.tq:68:");
    Unreachable();
  }

  if (block5.is_used()) {
    TNode<Smi> tmp5;
    Bind(&block5, &tmp5);
    TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = True();
    Goto(&block1, tmp6);
  }

    TNode<Oddball> tmp7;
    Bind(&block1, &tmp7);
  return TNode<Oddball>{tmp7};
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<String, Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TVariable<String> result_0_0(this);
    TVariable<Smi> result_0_1(this);
    Label label0(this);
    LabelTestHelper3(&label0, &result_0_0, &result_0_1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, result_0_0.value(), result_0_1.value());
    }
  }

  if (block4.is_used()) {
    TNode<String> tmp0;
    TNode<Smi> tmp1;
    Bind(&block4, &tmp0, &tmp1);
    Goto(&block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<String> tmp2;
    TNode<Smi> tmp3;
    Bind(&block3, &tmp2, &tmp3);
    TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Object>(FromConstexpr22UT12ATHeapObject5ATSmi("foo"));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp2}, TNode<Object>{tmp4}));
    Branch(tmp5, &block5, &block6, tmp2, tmp3);
  }

  if (block6.is_used()) {
    TNode<String> tmp6;
    TNode<Smi> tmp7;
    Bind(&block6, &tmp6, &tmp7);
    Print("assert \'str == \'foo\'\' failed at ../../test/torque/test-torque.tq:78:");
    Unreachable();
  }

  if (block5.is_used()) {
    TNode<String> tmp8;
    TNode<Smi> tmp9;
    Bind(&block5, &tmp8, &tmp9);
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp9}, TNode<Smi>{tmp10}));
    Branch(tmp11, &block7, &block8, tmp8, tmp9);
  }

  if (block8.is_used()) {
    TNode<String> tmp12;
    TNode<Smi> tmp13;
    Bind(&block8, &tmp12, &tmp13);
    Print("assert \'smi == 7\' failed at ../../test/torque/test-torque.tq:79:");
    Unreachable();
  }

  if (block7.is_used()) {
    TNode<String> tmp14;
    TNode<Smi> tmp15;
    Bind(&block7, &tmp14, &tmp15);
    TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = True();
    Goto(&block1, tmp16);
  }

    TNode<Oddball> tmp17;
    Bind(&block1, &tmp17);
  return TNode<Oddball>{tmp17};
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(parameter1);
  PLabel<Context, Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    Return(tmp1);
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  PLabel<Context> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_c);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Object> tmp2 = CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp0, tmp1);
    USE(tmp2);
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null();
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp2}, TNode<Object>{tmp3}));
    Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    Bind(&block3, &tmp5);
    Print("assert \'GenericBuiltinTest<Smi>(c, 0) == Null\' failed at ../../test/torque/test-torque.tq:93:");
    Unreachable();
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    Bind(&block2, &tmp6);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Object> tmp8 = CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp6, tmp7);
    USE(tmp8);
    TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Null();
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp8}, TNode<Object>{tmp9}));
    Branch(tmp10, &block4, &block5, tmp6);
  }

  if (block5.is_used()) {
    TNode<Context> tmp11;
    Bind(&block5, &tmp11);
    Print("assert \'GenericBuiltinTest<Smi>(c, 1) == Null\' failed at ../../test/torque/test-torque.tq:94:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    Bind(&block4, &tmp12);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined();
    TNode<Object> tmp14 = CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, tmp12, tmp13);
    USE(tmp14);
    TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Undefined();
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp14}, TNode<Object>{tmp15}));
    Branch(tmp16, &block6, &block7, tmp12);
  }

  if (block7.is_used()) {
    TNode<Context> tmp17;
    Bind(&block7, &tmp17);
    Print("assert \'GenericBuiltinTest<Object>(c, Undefined) == Undefined\' failed at ../../test/torque/test-torque.tq:95:");
    Unreachable();
  }

  if (block6.is_used()) {
    TNode<Context> tmp18;
    Bind(&block6, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined();
    TNode<Object> tmp20 = CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, tmp18, tmp19);
    USE(tmp20);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined();
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp20}, TNode<Object>{tmp21}));
    Branch(tmp22, &block8, &block9, tmp18);
  }

  if (block9.is_used()) {
    TNode<Context> tmp23;
    Bind(&block9, &tmp23);
    Print("assert \'GenericBuiltinTest<Object>(c, Undefined) == Undefined\' failed at ../../test/torque/test-torque.tq:96:");
    Unreachable();
  }

  if (block8.is_used()) {
    TNode<Context> tmp24;
    Bind(&block8, &tmp24);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4, Label* label_Label5) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    if (p_flag) {
      Goto(&block3);
    } else {
      Goto(&block4);
    }
  }

  if (block3.is_used()) {
    Bind(&block3);
    Goto(&block1);
  }

  if (block4.is_used()) {
    Bind(&block4);
    Goto(&block2);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_Label4);
  }

  if (block2.is_used()) {
    Bind(&block2);
    Goto(label_Label5);
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    Label label0(this);
    Label label1(this);
    LabelTestHelper4(p_flag, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block6);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block7);
    }
  }

  if (block6.is_used()) {
    Bind(&block6);
    Goto(&block5);
  }

  if (block7.is_used()) {
    Bind(&block7);
    Goto(&block3);
  }

  if (block5.is_used()) {
    Bind(&block5);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    Bind(&block3);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block1, tmp1);
  }

    TNode<BoolT> tmp2;
    Bind(&block1, &tmp2);
  return TNode<BoolT>{tmp2};
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(CallLabelTestHelper4(true));
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(CallLabelTestHelper4(false));
    Branch(tmp0, &block5, &block3, tmp0, tmp1);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp2;
    TNode<BoolT> tmp3;
    Bind(&block5, &tmp2, &tmp3);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp3}));
    Branch(tmp4, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<BoolT> tmp5;
    TNode<BoolT> tmp6;
    Bind(&block2, &tmp5, &tmp6);
    TNode<Oddball> tmp7;
    USE(tmp7);
    tmp7 = True();
    Goto(&block1, tmp7);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    Bind(&block3, &tmp8, &tmp9);
    TNode<Oddball> tmp10;
    USE(tmp10);
    tmp10 = False();
    Goto(&block1, tmp10);
  }

    TNode<Oddball> tmp11;
    Bind(&block1, &tmp11);
  return TNode<Oddball>{tmp11};
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_param2);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    Goto(&block1, tmp0);
  }

    TNode<Object> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Object>{tmp1};
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_param2);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = Cast5ATSmi(TNode<Object>{tmp0}, &label0);
    Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Smi> tmp6;
    Bind(&block3, &tmp4, &tmp5, &tmp6);
    Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_Y);
  }

    TNode<Object> tmp7;
    Bind(&block2, &tmp7);
  return TNode<Object>{tmp7};
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Object> block16(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Object> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block19(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block18(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block25(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Object> block24(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block22(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Oddball> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Oddball, Object> block28(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block27(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block26(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Object>(GenericMacroTest5ATSmi(TNode<Smi>{tmp1}));
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined();
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp2}, TNode<Object>{tmp3}));
    Branch(tmp4, &block4, &block5, tmp0);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp5;
    Bind(&block5, &tmp5);
    Print("assert \'GenericMacroTest<Smi>(0) == Undefined\' failed at ../../test/torque/test-torque.tq:152:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Smi> tmp6;
    Bind(&block4, &tmp6);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(GenericMacroTest5ATSmi(TNode<Smi>{tmp7}));
    TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Undefined();
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp8}, TNode<Object>{tmp9}));
    Branch(tmp10, &block6, &block7, tmp6);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp11;
    Bind(&block7, &tmp11);
    Print("assert \'GenericMacroTest<Smi>(1) == Undefined\' failed at ../../test/torque/test-torque.tq:153:");
    Unreachable();
  }

  if (block6.is_used()) {
    TNode<Smi> tmp12;
    Bind(&block6, &tmp12);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null();
    TNode<Object> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object>{tmp13}));
    TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Null();
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp14}, TNode<Object>{tmp15}));
    Branch(tmp16, &block8, &block9, tmp12);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp17;
    Bind(&block9, &tmp17);
    Print("assert \'GenericMacroTest<Object>(Null) == Null\' failed at ../../test/torque/test-torque.tq:154:");
    Unreachable();
  }

  if (block8.is_used()) {
    TNode<Smi> tmp18;
    Bind(&block8, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = False();
    TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object>{tmp19}));
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = False();
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp20}, TNode<Object>{tmp21}));
    Branch(tmp22, &block10, &block11, tmp18);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp23;
    Bind(&block11, &tmp23);
    Print("assert \'GenericMacroTest<Object>(False) == False\' failed at ../../test/torque/test-torque.tq:155:");
    Unreachable();
  }

  if (block10.is_used()) {
    TNode<Smi> tmp24;
    Bind(&block10, &tmp24);
    TNode<Oddball> tmp25;
    USE(tmp25);
    tmp25 = True();
    TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object>{tmp25}));
    TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True();
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp26}, TNode<Object>{tmp27}));
    Branch(tmp28, &block12, &block13, tmp24);
  }

  if (block13.is_used()) {
    TNode<Smi> tmp29;
    Bind(&block13, &tmp29);
    Print("assert \'GenericMacroTest<Object>(True) == True\' failed at ../../test/torque/test-torque.tq:156:");
    Unreachable();
  }

  if (block12.is_used()) {
    TNode<Smi> tmp30;
    Bind(&block12, &tmp30);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Object> tmp32;
    USE(tmp32);
    Label label0(this);
    tmp32 = GenericMacroTestWithLabels5ATSmi(TNode<Smi>{tmp31}, &label0);
    Goto(&block16, tmp30, tmp32);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block17, tmp30);
    }
  }

  if (block17.is_used()) {
    TNode<Smi> tmp33;
    Bind(&block17, &tmp33);
    Goto(&block3);
  }

  if (block16.is_used()) {
    TNode<Smi> tmp34;
    TNode<Object> tmp35;
    Bind(&block16, &tmp34, &tmp35);
    TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = Undefined();
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp35}, TNode<Object>{tmp36}));
    Branch(tmp37, &block14, &block15, tmp34);
  }

  if (block15.is_used()) {
    TNode<Smi> tmp38;
    Bind(&block15, &tmp38);
    Print("assert \'(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined\' failed at ../../test/torque/test-torque.tq:157:");
    Unreachable();
  }

  if (block14.is_used()) {
    TNode<Smi> tmp39;
    Bind(&block14, &tmp39);
    TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Object> tmp41;
    USE(tmp41);
    Label label0(this);
    tmp41 = GenericMacroTestWithLabels5ATSmi(TNode<Smi>{tmp40}, &label0);
    Goto(&block20, tmp39, tmp41);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block21, tmp39);
    }
  }

  if (block21.is_used()) {
    TNode<Smi> tmp42;
    Bind(&block21, &tmp42);
    Goto(&block3);
  }

  if (block20.is_used()) {
    TNode<Smi> tmp43;
    TNode<Object> tmp44;
    Bind(&block20, &tmp43, &tmp44);
    TNode<Oddball> tmp45;
    USE(tmp45);
    tmp45 = Undefined();
    TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp44}, TNode<Object>{tmp45}));
    Branch(tmp46, &block18, &block19, tmp43);
  }

  if (block19.is_used()) {
    TNode<Smi> tmp47;
    Bind(&block19, &tmp47);
    Print("assert \'(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined\' failed at ../../test/torque/test-torque.tq:158:");
    Unreachable();
  }

  if (block18.is_used()) {
    TNode<Smi> tmp48;
    Bind(&block18, &tmp48);
    TNode<Object> tmp49;
    USE(tmp49);
    Label label0(this);
    tmp49 = GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object>{tmp48}, &label0);
    Goto(&block24, tmp48, tmp48, tmp49);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block25, tmp48, tmp48);
    }
  }

  if (block25.is_used()) {
    TNode<Smi> tmp50;
    TNode<Smi> tmp51;
    Bind(&block25, &tmp50, &tmp51);
    Goto(&block3);
  }

  if (block24.is_used()) {
    TNode<Smi> tmp52;
    TNode<Smi> tmp53;
    TNode<Object> tmp54;
    Bind(&block24, &tmp52, &tmp53, &tmp54);
    TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp54}, TNode<Object>{tmp52}));
    Branch(tmp55, &block22, &block23, tmp52);
  }

  if (block23.is_used()) {
    TNode<Smi> tmp56;
    Bind(&block23, &tmp56);
    Print("assert \'(GenericMacroTestWithLabels<Object>(smi0) otherwise Fail) == smi0\' failed at ../../test/torque/test-torque.tq:159:");
    Unreachable();
  }

  if (block22.is_used()) {
    TNode<Smi> tmp57;
    Bind(&block22, &tmp57);
    TNode<Oddball> tmp58;
    USE(tmp58);
    tmp58 = False();
    TNode<Object> tmp59;
    USE(tmp59);
    Label label0(this);
    tmp59 = GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object>{tmp58}, &label0);
    Goto(&block28, tmp57, tmp58, tmp59);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block29, tmp57, tmp58);
    }
  }

  if (block29.is_used()) {
    TNode<Smi> tmp60;
    TNode<Oddball> tmp61;
    Bind(&block29, &tmp60, &tmp61);
    Goto(&block27, tmp60);
  }

  if (block28.is_used()) {
    TNode<Smi> tmp62;
    TNode<Oddball> tmp63;
    TNode<Object> tmp64;
    Bind(&block28, &tmp62, &tmp63, &tmp64);
    Goto(&block26, tmp62);
  }

  if (block27.is_used()) {
    TNode<Smi> tmp65;
    Bind(&block27, &tmp65);
    Goto(&block26, tmp65);
  }

  if (block26.is_used()) {
    TNode<Smi> tmp66;
    Bind(&block26, &tmp66);
    Goto(&block2);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    Goto(&block1);
  }

    Bind(&block1);
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  PLabel<Context, Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp1}, TNode<Smi>{tmp2}));
    Return(tmp3);
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  PLabel<Context, Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(2));
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp1}, TNode<Smi>{tmp2}));
    Return(tmp3);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  PLabel<Context> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(42));
    TNode<Smi> tmp2 = CAST(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code())), tmp0, tmp1)); 
    USE(tmp2);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Smi>(FromConstexpr5ATSmi(43));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp3}));
    Branch(tmp4, &block2, &block3, tmp0, UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code())));
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Code> tmp6;
    Bind(&block3, &tmp5, &tmp6);
    Print("assert \'fptr(context, 42) == 43\' failed at ../../test/torque/test-torque.tq:179:");
    Unreachable();
  }

  if (block2.is_used()) {
    TNode<Context> tmp7;
    TNode<Code> tmp8;
    Bind(&block2, &tmp7, &tmp8);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Smi>(FromConstexpr5ATSmi(42));
    TNode<Smi> tmp10 = CAST(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code())), tmp7, tmp9)); 
    USE(tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Smi>(FromConstexpr5ATSmi(44));
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp10}, TNode<Smi>{tmp11}));
    Branch(tmp12, &block4, &block5, tmp7, UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code())), UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code())));
  }

  if (block5.is_used()) {
    TNode<Context> tmp13;
    TNode<Code> tmp14;
    TNode<Code> tmp15;
    Bind(&block5, &tmp13, &tmp14, &tmp15);
    Print("assert \'fptr(context, 42) == 44\' failed at ../../test/torque/test-torque.tq:181:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp16;
    TNode<Code> tmp17;
    TNode<Code> tmp18;
    Bind(&block4, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = True();
    Goto(&block1, tmp19);
  }

    TNode<Oddball> tmp20;
    Bind(&block1, &tmp20);
  return TNode<Oddball>{tmp20};
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  PLabel<Context> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Int32T> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Int32T> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Int32T> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Int32T> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Int32T, Int32T> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    Bind(&block0, &tmp0);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(FromConstexpr6ATbool((ConstexprInt31Equal(42, 0))));
    Branch(tmp1, &block4, &block5, tmp0);
  }

  if (block4.is_used()) {
    TNode<Context> tmp2;
    Bind(&block4, &tmp2);
    Goto(&block3, tmp2);
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    Bind(&block5, &tmp3);
    TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Int32T>(FromConstexpr7ATint31(1));
    Goto(&block6, tmp3, tmp4);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    Bind(&block3, &tmp5);
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Int32T>(FromConstexpr7ATint31(0));
    Goto(&block6, tmp5, tmp6);
  }

  if (block6.is_used()) {
    TNode<Context> tmp7;
    TNode<Int32T> tmp8;
    Bind(&block6, &tmp7, &tmp8);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<BoolT>(FromConstexpr6ATbool((ConstexprInt31Equal(42, 0))));
    Branch(tmp9, &block9, &block10, tmp7, tmp8);
  }

  if (block9.is_used()) {
    TNode<Context> tmp10;
    TNode<Int32T> tmp11;
    Bind(&block9, &tmp10, &tmp11);
    Goto(&block8, tmp10, tmp11);
  }

  if (block10.is_used()) {
    TNode<Context> tmp12;
    TNode<Int32T> tmp13;
    Bind(&block10, &tmp12, &tmp13);
    TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<Int32T>(FromConstexpr7ATint31(0));
    Goto(&block11, tmp12, tmp13, tmp14);
  }

  if (block8.is_used()) {
    TNode<Context> tmp15;
    TNode<Int32T> tmp16;
    Bind(&block8, &tmp15, &tmp16);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<Int32T>(FromConstexpr7ATint31(1));
    Goto(&block11, tmp15, tmp16, tmp17);
  }

  if (block11.is_used()) {
    TNode<Context> tmp18;
    TNode<Int32T> tmp19;
    TNode<Int32T> tmp20;
    Bind(&block11, &tmp18, &tmp19, &tmp20);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = True();
    Goto(&block1, tmp21);
  }

    TNode<Oddball> tmp22;
    Bind(&block1, &tmp22);
  return TNode<Oddball>{tmp22};
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, BoolT, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, BoolT, Smi> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1}));
    Branch(tmp2, &block4, &block5, tmp0);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp3;
    Bind(&block4, &tmp3);
    Goto(&block3, tmp3);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp4;
    Bind(&block5, &tmp4);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp4, tmp5);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp6;
    Bind(&block3, &tmp6);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp6, tmp7);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp8;
    TNode<BoolT> tmp9;
    Bind(&block6, &tmp8, &tmp9);
    Branch(tmp9, &block9, &block10, tmp8, tmp9);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp10;
    TNode<BoolT> tmp11;
    Bind(&block9, &tmp10, &tmp11);
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Smi>(SmiSub(TNode<Smi>{tmp10}, TNode<Smi>{tmp12}));
    Goto(&block8, tmp10, tmp11, tmp13);
  }

  if (block10.is_used()) {
    TNode<Smi> tmp14;
    TNode<BoolT> tmp15;
    Bind(&block10, &tmp14, &tmp15);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<Smi>(FromConstexpr5ATSmi(100));
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp14}, TNode<Smi>{tmp16}));
    Goto(&block11, tmp14, tmp15, tmp17);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp18;
    TNode<BoolT> tmp19;
    TNode<Smi> tmp20;
    Bind(&block8, &tmp18, &tmp19, &tmp20);
    Goto(&block11, tmp18, tmp19, tmp20);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp21;
    TNode<BoolT> tmp22;
    TNode<Smi> tmp23;
    Bind(&block11, &tmp21, &tmp22, &tmp23);
    Goto(&block1, tmp23);
  }

    TNode<Smi> tmp24;
    Bind(&block1, &tmp24);
  return TNode<Smi>{tmp24};
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  PLabel<Context> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Code, Code> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_c);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Object> tmp2 = CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code())), tmp0, tmp1); 
    USE(tmp2);
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null();
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp2}, TNode<Object>{tmp3}));
    Branch(tmp4, &block2, &block3, tmp0, UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code())), UncheckedCast<Code>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code())));
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Code> tmp6;
    TNode<Code> tmp7;
    Bind(&block3, &tmp5, &tmp6, &tmp7);
    Print("assert \'fptr1(c, 0) == Null\' failed at ../../test/torque/test-torque.tq:200:");
    Unreachable();
  }

  if (block2.is_used()) {
    TNode<Context> tmp8;
    TNode<Code> tmp9;
    TNode<Code> tmp10;
    Bind(&block2, &tmp8, &tmp9, &tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Object> tmp12 = CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), tmp9, tmp8, tmp11); 
    USE(tmp12);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null();
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp12}, TNode<Object>{tmp13}));
    Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Code> tmp16;
    TNode<Code> tmp17;
    Bind(&block5, &tmp15, &tmp16, &tmp17);
    Print("assert \'fptr1(c, 1) == Null\' failed at ../../test/torque/test-torque.tq:201:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp18;
    TNode<Code> tmp19;
    TNode<Code> tmp20;
    Bind(&block4, &tmp18, &tmp19, &tmp20);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined();
    TNode<Object> tmp22 = CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), tmp20, tmp18, tmp21); 
    USE(tmp22);
    TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = Undefined();
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp22}, TNode<Object>{tmp23}));
    Branch(tmp24, &block6, &block7, tmp18, tmp19, tmp20);
  }

  if (block7.is_used()) {
    TNode<Context> tmp25;
    TNode<Code> tmp26;
    TNode<Code> tmp27;
    Bind(&block7, &tmp25, &tmp26, &tmp27);
    Print("assert \'fptr2(c, Undefined) == Undefined\' failed at ../../test/torque/test-torque.tq:202:");
    Unreachable();
  }

  if (block6.is_used()) {
    TNode<Context> tmp28;
    TNode<Code> tmp29;
    TNode<Code> tmp30;
    Bind(&block6, &tmp28, &tmp29, &tmp30);
    TNode<Oddball> tmp31;
    USE(tmp31);
    tmp31 = Undefined();
    TNode<Object> tmp32 = CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), tmp30, tmp28, tmp31); 
    USE(tmp32);
    TNode<Oddball> tmp33;
    USE(tmp33);
    tmp33 = Undefined();
    TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = UncheckedCast<BoolT>(WordEqual(TNode<Object>{tmp32}, TNode<Object>{tmp33}));
    Branch(tmp34, &block8, &block9, tmp28, tmp29, tmp30);
  }

  if (block9.is_used()) {
    TNode<Context> tmp35;
    TNode<Code> tmp36;
    TNode<Code> tmp37;
    Bind(&block9, &tmp35, &tmp36, &tmp37);
    Print("assert \'fptr2(c, Undefined) == Undefined\' failed at ../../test/torque/test-torque.tq:203:");
    Unreachable();
  }

  if (block8.is_used()) {
    TNode<Context> tmp38;
    TNode<Code> tmp39;
    TNode<Code> tmp40;
    Bind(&block8, &tmp38, &tmp39, &tmp40);
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  PLabel<Code> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Code> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Code> tmp0;
    Bind(&block0, &tmp0);
    Goto(&block1, tmp0);
  }

    TNode<Code> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Code>{tmp1};
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  PLabel<Context, Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Number> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Number, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Number, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Context, Number> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Oddball> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_c, p_n);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Number> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(TaggedIsSmi(TNode<Object>{tmp1}));
    Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    TNode<Context> tmp3;
    TNode<Number> tmp4;
    Bind(&block2, &tmp3, &tmp4);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<Smi>(UnsafeCast5ATSmi(TNode<Object>{tmp4}));
    TNode<Smi> tmp6 = CAST(CallBuiltin(Builtins::kTestHelperPlus1, tmp3, tmp5));
    USE(tmp6);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Smi>(FromConstexpr5ATSmi(11));
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp6}, TNode<Smi>{tmp7}));
    Branch(tmp8, &block4, &block5, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<Context> tmp9;
    TNode<Number> tmp10;
    TNode<Smi> tmp11;
    Bind(&block5, &tmp9, &tmp10, &tmp11);
    Print("assert \'TestHelperPlus1(c, m) == 11\' failed at ../../test/torque/test-torque.tq:215:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    TNode<Number> tmp13;
    TNode<Smi> tmp14;
    Bind(&block4, &tmp12, &tmp13, &tmp14);
    TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = True();
    Goto(&block1, tmp15);
  }

  if (block3.is_used()) {
    TNode<Context> tmp16;
    TNode<Number> tmp17;
    Bind(&block3, &tmp16, &tmp17);
    TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = False();
    Goto(&block1, tmp18);
  }

    TNode<Oddball> tmp19;
    Bind(&block1, &tmp19);
  return TNode<Oddball>{tmp19};
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<IntPtrT>(Convert8ATintptr(0xffff));
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(1));
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<IntPtrT>(IntPtrAdd(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1}));
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(0x10000));
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3}));
    Branch(tmp4, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'Convert<intptr>(0xffff) + 1 == 0x10000\' failed at ../../test/torque/test-torque.tq:222:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<IntPtrT>(Convert8ATintptr(-0xffff));
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(-65535));
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(WordEqual(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6}));
    Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    Bind(&block5);
    Print("assert \'Convert<intptr>(-0xffff) == -65535\' failed at ../../test/torque/test-torque.tq:223:");
    Unreachable();
  }

  if (block4.is_used()) {
    Bind(&block4);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  PLabel<Context> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_c);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0x40000000));
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0x7fffffff));
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(SmiGreaterThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1}));
    Branch(tmp2, &block4, &block3, tmp0);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp3;
    Bind(&block4, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4}));
    Branch(tmp5, &block2, &block3, tmp3);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp6;
    Bind(&block3, &tmp6);
    Print("assert \'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10\' failed at ../../test/torque/test-torque.tq:233:");
    Unreachable();
  }

  if (block2.is_used()) {
    TNode<Smi> tmp7;
    Bind(&block2, &tmp7);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    Print("Hello, World!\n");
    Goto(&block1);
  }

    Bind(&block1);
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
return 5;
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(4));
return TNode<IntPtrT>{tmp0};
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
return TNode<Smi>{tmp0};
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Int32T>(Int32Constant(5));
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(FromConstexpr7ATint32(kConstexprConst()));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp0}));
    Branch(tmp2, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'kConstexprConst == Int32Constant(5)\' failed at ../../test/torque/test-torque.tq:247:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = kIntptrConst();
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(4));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4}));
    Branch(tmp5, &block4, &block5);
  }

  if (block5.is_used()) {
    Bind(&block5);
    Print("assert \'kIntptrConst == 4\' failed at ../../test/torque/test-torque.tq:248:");
    Unreachable();
  }

  if (block4.is_used()) {
    Bind(&block4);
    TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = kSmiConst();
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp6}, TNode<Smi>{tmp7}));
    Branch(tmp8, &block6, &block7);
  }

  if (block7.is_used()) {
    Bind(&block7);
    Print("assert \'kSmiConst == 3\' failed at ../../test/torque/test-torque.tq:249:");
    Unreachable();
  }

  if (block6.is_used()) {
    Bind(&block6);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp2}, TNode<Smi>{tmp1}));
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp4}));
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp5}));
    Branch(tmp6, &block2, &block3, tmp0, tmp3);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    Bind(&block3, &tmp7, &tmp8);
    Print("assert \'x == xSmi + 1\' failed at ../../test/torque/test-torque.tq:257:");
    Unreachable();
  }

  if (block2.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    Bind(&block2, &tmp9, &tmp10);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp10}, TNode<Smi>{tmp10}));
    Branch(tmp11, &block4, &block5, tmp9, tmp10, tmp10);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    Bind(&block5, &tmp12, &tmp13, &tmp14);
    Print("assert \'x == xSmi\' failed at ../../test/torque/test-torque.tq:259:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    Bind(&block4, &tmp15, &tmp16, &tmp17);
    TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<Smi>(FromConstexpr5ATSmi(4));
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp18}));
    Branch(tmp19, &block6, &block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp20;
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    Bind(&block7, &tmp20, &tmp21, &tmp22);
    Print("assert \'x == 4\' failed at ../../test/torque/test-torque.tq:260:");
    Unreachable();
  }

  if (block6.is_used()) {
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    TNode<Smi> tmp25;
    Bind(&block6, &tmp23, &tmp24, &tmp25);
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp23}, TNode<Smi>{tmp26}));
    Branch(tmp27, &block8, &block9, tmp23, tmp24, tmp25);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp28;
    TNode<Smi> tmp29;
    TNode<Smi> tmp30;
    Bind(&block9, &tmp28, &tmp29, &tmp30);
    Print("assert \'xSmi == 3\' failed at ../../test/torque/test-torque.tq:262:");
    Unreachable();
  }

  if (block8.is_used()) {
    TNode<Smi> tmp31;
    TNode<Smi> tmp32;
    TNode<Smi> tmp33;
    Bind(&block8, &tmp31, &tmp32, &tmp33);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp34}, TNode<Smi>{tmp31}));
    Branch(tmp35, &block10, &block11, tmp31, tmp32, tmp33);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<Smi> tmp38;
    Bind(&block11, &tmp36, &tmp37, &tmp38);
    Print("assert \'x == xSmi\' failed at ../../test/torque/test-torque.tq:263:");
    Unreachable();
  }

  if (block10.is_used()) {
    TNode<Smi> tmp39;
    TNode<Smi> tmp40;
    TNode<Smi> tmp41;
    Bind(&block10, &tmp39, &tmp40, &tmp41);
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  PLabel<FixedArray, Smi, Number> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i.indexes, p_i.i, p_i.k);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Number> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Goto(&block1, tmp1);
  }

    TNode<Smi> tmp3;
    Bind(&block1, &tmp3);
  return TNode<Smi>{tmp3};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray, Smi, Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<FixedArrayBase> tmp0;
    USE(tmp0);
    tmp0 = kEmptyFixedArray();
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(TNode<Object>{tmp0}));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(27));
    TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(31));
    Goto(&block1, tmp1, tmp2, tmp3);
  }

    TNode<FixedArray> tmp4;
    TNode<Smi> tmp5;
    TNode<Number> tmp6;
    Bind(&block1, &tmp4, &tmp5, &tmp6);
  return TestStructA{TNode<FixedArray>{tmp4}, TNode<Smi>{tmp5}, TNode<Number>{tmp6}};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray, Smi, Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<FixedArrayBase> tmp0;
    USE(tmp0);
    tmp0 = kEmptyFixedArray();
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(TNode<Object>{tmp0}));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(13));
    TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(5));
    TNode<FixedArray> tmp4;
    USE(tmp4);
    TNode<Smi> tmp5;
    USE(tmp5);
    TNode<Number> tmp6;
    USE(tmp6);
    std::tie(tmp4, tmp5, tmp6) = TestStruct2().Flatten();
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Smi>(TestStruct1(TestStructA{TNode<FixedArray>{tmp4}, TNode<Smi>{tmp5}, TNode<Number>{tmp6}}));
    TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<FixedArrayBase> tmp9;
    USE(tmp9);
    tmp9 = kEmptyFixedArray();
    TNode<FixedArray> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<FixedArray>(UnsafeCast12ATFixedArray(TNode<Object>{tmp9}));
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Smi>(FromConstexpr5ATSmi(27));
    TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(31));
    TNode<FixedArray> tmp13;
    USE(tmp13);
    TNode<Smi> tmp14;
    USE(tmp14);
    TNode<Number> tmp15;
    USE(tmp15);
    std::tie(tmp13, tmp14, tmp15) = TestStruct2().Flatten();
    Goto(&block1, tmp1, tmp7, tmp7);
  }

    TNode<FixedArray> tmp16;
    TNode<Smi> tmp17;
    TNode<Number> tmp18;
    Bind(&block1, &tmp16, &tmp17, &tmp18);
  return TestStructA{TNode<FixedArray>{tmp16}, TNode<Smi>{tmp17}, TNode<Number>{tmp18}};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray, Smi, Number, FixedArray, Smi, Number> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<FixedArray> tmp0;
    USE(tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    TNode<Number> tmp2;
    USE(tmp2);
    std::tie(tmp0, tmp1, tmp2) = TestStruct2().Flatten();
    TNode<FixedArray> tmp3;
    USE(tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    TNode<Number> tmp5;
    USE(tmp5);
    std::tie(tmp3, tmp4, tmp5) = TestStruct2().Flatten();
    Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

    TNode<FixedArray> tmp6;
    TNode<Smi> tmp7;
    TNode<Number> tmp8;
    TNode<FixedArray> tmp9;
    TNode<Smi> tmp10;
    TNode<Number> tmp11;
    Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
  return TestStructC{TestStructA{TNode<FixedArray>{tmp6}, TNode<Smi>{tmp7}, TNode<Number>{tmp8}}, TestStructA{TNode<FixedArray>{tmp9}, TNode<Smi>{tmp10}, TNode<Number>{tmp11}}};
}

void TestBuiltinsFromDSLAssembler::TestForLoop() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block16(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block18(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block19(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block24(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block22(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block26(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block25(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block27(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block30(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block31(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block28(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block33(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block32(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block36(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block34(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block38(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block39(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block37(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block35(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block41(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block40(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block44(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block42(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block46(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block47(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block45(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block43(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block49(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block48(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block52(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block50(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block53(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block54(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block51(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block56(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block55(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block59(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block57(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block61(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block62(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block63(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block64(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block60(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block58(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block66(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block65(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block69(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block67(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block70(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block71(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block72(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block73(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block68(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block75(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block74(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4}));
    Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    Bind(&block2, &tmp6, &tmp7);
    TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp6}, TNode<Smi>{tmp7}));
    Goto(&block5, tmp8, tmp7);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    Bind(&block5, &tmp9, &tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp10}, TNode<Smi>{tmp11}));
    Goto(&block4, tmp9, tmp12);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    Bind(&block3, &tmp13, &tmp14);
    TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp13}, TNode<Smi>{tmp15}));
    Branch(tmp16, &block6, &block7, tmp13);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp17;
    Bind(&block7, &tmp17);
    Print("assert \'sum == 10\' failed at ../../test/torque/test-torque.tq:316:");
    Unreachable();
  }

  if (block6.is_used()) {
    TNode<Smi> tmp18;
    Bind(&block6, &tmp18);
    TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block10, tmp19, tmp20);
  }

  if (block10.is_used()) {
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    Bind(&block10, &tmp21, &tmp22);
    TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp22}, TNode<Smi>{tmp23}));
    Branch(tmp24, &block8, &block9, tmp21, tmp22);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp25;
    TNode<Smi> tmp26;
    Bind(&block8, &tmp25, &tmp26);
    TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp25}, TNode<Smi>{tmp26}));
    Goto(&block11, tmp27, tmp26);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp28;
    TNode<Smi> tmp29;
    Bind(&block11, &tmp28, &tmp29);
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp29}, TNode<Smi>{tmp30}));
    Goto(&block10, tmp28, tmp31);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp32;
    TNode<Smi> tmp33;
    Bind(&block9, &tmp32, &tmp33);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp32}, TNode<Smi>{tmp34}));
    Branch(tmp35, &block12, &block13, tmp32, tmp33);
  }

  if (block13.is_used()) {
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    Bind(&block13, &tmp36, &tmp37);
    Print("assert \'sum == 10\' failed at ../../test/torque/test-torque.tq:321:");
    Unreachable();
  }

  if (block12.is_used()) {
    TNode<Smi> tmp38;
    TNode<Smi> tmp39;
    Bind(&block12, &tmp38, &tmp39);
    TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block16, tmp40, tmp41);
  }

  if (block16.is_used()) {
    TNode<Smi> tmp42;
    TNode<Smi> tmp43;
    Bind(&block16, &tmp42, &tmp43);
    TNode<Smi> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp43}, TNode<Smi>{tmp44}));
    Branch(tmp45, &block14, &block15, tmp42, tmp43);
  }

  if (block14.is_used()) {
    TNode<Smi> tmp46;
    TNode<Smi> tmp47;
    Bind(&block14, &tmp46, &tmp47);
    TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp47}, TNode<Smi>{tmp48}));
    TNode<Smi> tmp50;
    USE(tmp50);
    tmp50 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp46}, TNode<Smi>{tmp47}));
    Goto(&block16, tmp50, tmp49);
  }

  if (block15.is_used()) {
    TNode<Smi> tmp51;
    TNode<Smi> tmp52;
    Bind(&block15, &tmp51, &tmp52);
    TNode<Smi> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp51}, TNode<Smi>{tmp53}));
    Branch(tmp54, &block17, &block18, tmp51, tmp52);
  }

  if (block18.is_used()) {
    TNode<Smi> tmp55;
    TNode<Smi> tmp56;
    Bind(&block18, &tmp55, &tmp56);
    Print("assert \'sum == 10\' failed at ../../test/torque/test-torque.tq:326:");
    Unreachable();
  }

  if (block17.is_used()) {
    TNode<Smi> tmp57;
    TNode<Smi> tmp58;
    Bind(&block17, &tmp57, &tmp58);
    TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block21, tmp59, tmp58, tmp60);
  }

  if (block21.is_used()) {
    TNode<Smi> tmp61;
    TNode<Smi> tmp62;
    TNode<Smi> tmp63;
    Bind(&block21, &tmp61, &tmp62, &tmp63);
    Goto(&block19, tmp61, tmp62, tmp63);
  }

  if (block19.is_used()) {
    TNode<Smi> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    Bind(&block19, &tmp64, &tmp65, &tmp66);
    TNode<Smi> tmp67;
    USE(tmp67);
    tmp67 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp66}, TNode<Smi>{tmp67}));
    Branch(tmp68, &block23, &block24, tmp64, tmp65, tmp66);
  }

  if (block23.is_used()) {
    TNode<Smi> tmp69;
    TNode<Smi> tmp70;
    TNode<Smi> tmp71;
    Bind(&block23, &tmp69, &tmp70, &tmp71);
    Goto(&block20, tmp69, tmp70, tmp71);
  }

  if (block24.is_used()) {
    TNode<Smi> tmp72;
    TNode<Smi> tmp73;
    TNode<Smi> tmp74;
    Bind(&block24, &tmp72, &tmp73, &tmp74);
    TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp72}, TNode<Smi>{tmp74}));
    Goto(&block22, tmp75, tmp73, tmp74);
  }

  if (block22.is_used()) {
    TNode<Smi> tmp76;
    TNode<Smi> tmp77;
    TNode<Smi> tmp78;
    Bind(&block22, &tmp76, &tmp77, &tmp78);
    TNode<Smi> tmp79;
    USE(tmp79);
    tmp79 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp80;
    USE(tmp80);
    tmp80 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp78}, TNode<Smi>{tmp79}));
    Goto(&block21, tmp76, tmp77, tmp80);
  }

  if (block20.is_used()) {
    TNode<Smi> tmp81;
    TNode<Smi> tmp82;
    TNode<Smi> tmp83;
    Bind(&block20, &tmp81, &tmp82, &tmp83);
    TNode<Smi> tmp84;
    USE(tmp84);
    tmp84 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp81}, TNode<Smi>{tmp84}));
    Branch(tmp85, &block25, &block26, tmp81, tmp82);
  }

  if (block26.is_used()) {
    TNode<Smi> tmp86;
    TNode<Smi> tmp87;
    Bind(&block26, &tmp86, &tmp87);
    Print("assert \'sum == 10\' failed at ../../test/torque/test-torque.tq:334:");
    Unreachable();
  }

  if (block25.is_used()) {
    TNode<Smi> tmp88;
    TNode<Smi> tmp89;
    Bind(&block25, &tmp88, &tmp89);
    TNode<Smi> tmp90;
    USE(tmp90);
    tmp90 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block29, tmp90, tmp91);
  }

  if (block29.is_used()) {
    TNode<Smi> tmp92;
    TNode<Smi> tmp93;
    Bind(&block29, &tmp92, &tmp93);
    Goto(&block27, tmp92, tmp93);
  }

  if (block27.is_used()) {
    TNode<Smi> tmp94;
    TNode<Smi> tmp95;
    Bind(&block27, &tmp94, &tmp95);
    TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp95}, TNode<Smi>{tmp96}));
    Branch(tmp97, &block30, &block31, tmp94, tmp95);
  }

  if (block30.is_used()) {
    TNode<Smi> tmp98;
    TNode<Smi> tmp99;
    Bind(&block30, &tmp98, &tmp99);
    Goto(&block28, tmp98, tmp99);
  }

  if (block31.is_used()) {
    TNode<Smi> tmp100;
    TNode<Smi> tmp101;
    Bind(&block31, &tmp100, &tmp101);
    TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp100}, TNode<Smi>{tmp101}));
    TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp101}, TNode<Smi>{tmp103}));
    Goto(&block29, tmp102, tmp104);
  }

  if (block28.is_used()) {
    TNode<Smi> tmp105;
    TNode<Smi> tmp106;
    Bind(&block28, &tmp105, &tmp106);
    TNode<Smi> tmp107;
    USE(tmp107);
    tmp107 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp108;
    USE(tmp108);
    tmp108 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp105}, TNode<Smi>{tmp107}));
    Branch(tmp108, &block32, &block33, tmp105, tmp106);
  }

  if (block33.is_used()) {
    TNode<Smi> tmp109;
    TNode<Smi> tmp110;
    Bind(&block33, &tmp109, &tmp110);
    Print("assert \'sum == 10\' failed at ../../test/torque/test-torque.tq:343:");
    Unreachable();
  }

  if (block32.is_used()) {
    TNode<Smi> tmp111;
    TNode<Smi> tmp112;
    Bind(&block32, &tmp111, &tmp112);
    TNode<Smi> tmp113;
    USE(tmp113);
    tmp113 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block36, tmp113, tmp112, tmp114);
  }

  if (block36.is_used()) {
    TNode<Smi> tmp115;
    TNode<Smi> tmp116;
    TNode<Smi> tmp117;
    Bind(&block36, &tmp115, &tmp116, &tmp117);
    TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp117}, TNode<Smi>{tmp118}));
    Branch(tmp119, &block34, &block35, tmp115, tmp116, tmp117);
  }

  if (block34.is_used()) {
    TNode<Smi> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    Bind(&block34, &tmp120, &tmp121, &tmp122);
    TNode<Smi> tmp123;
    USE(tmp123);
    tmp123 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp122}, TNode<Smi>{tmp123}));
    Branch(tmp124, &block38, &block39, tmp120, tmp121, tmp122);
  }

  if (block38.is_used()) {
    TNode<Smi> tmp125;
    TNode<Smi> tmp126;
    TNode<Smi> tmp127;
    Bind(&block38, &tmp125, &tmp126, &tmp127);
    Goto(&block37, tmp125, tmp126, tmp127);
  }

  if (block39.is_used()) {
    TNode<Smi> tmp128;
    TNode<Smi> tmp129;
    TNode<Smi> tmp130;
    Bind(&block39, &tmp128, &tmp129, &tmp130);
    TNode<Smi> tmp131;
    USE(tmp131);
    tmp131 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp128}, TNode<Smi>{tmp130}));
    Goto(&block37, tmp131, tmp129, tmp130);
  }

  if (block37.is_used()) {
    TNode<Smi> tmp132;
    TNode<Smi> tmp133;
    TNode<Smi> tmp134;
    Bind(&block37, &tmp132, &tmp133, &tmp134);
    TNode<Smi> tmp135;
    USE(tmp135);
    tmp135 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp136;
    USE(tmp136);
    tmp136 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp134}, TNode<Smi>{tmp135}));
    Goto(&block36, tmp132, tmp133, tmp136);
  }

  if (block35.is_used()) {
    TNode<Smi> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    Bind(&block35, &tmp137, &tmp138, &tmp139);
    TNode<Smi> tmp140;
    USE(tmp140);
    tmp140 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp137}, TNode<Smi>{tmp140}));
    Branch(tmp141, &block40, &block41, tmp137, tmp138);
  }

  if (block41.is_used()) {
    TNode<Smi> tmp142;
    TNode<Smi> tmp143;
    Bind(&block41, &tmp142, &tmp143);
    Print("assert \'sum == 7\' failed at ../../test/torque/test-torque.tq:352:");
    Unreachable();
  }

  if (block40.is_used()) {
    TNode<Smi> tmp144;
    TNode<Smi> tmp145;
    Bind(&block40, &tmp144, &tmp145);
    TNode<Smi> tmp146;
    USE(tmp146);
    tmp146 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp147;
    USE(tmp147);
    tmp147 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block44, tmp146, tmp147);
  }

  if (block44.is_used()) {
    TNode<Smi> tmp148;
    TNode<Smi> tmp149;
    Bind(&block44, &tmp148, &tmp149);
    TNode<Smi> tmp150;
    USE(tmp150);
    tmp150 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp149}, TNode<Smi>{tmp150}));
    Branch(tmp151, &block42, &block43, tmp148, tmp149);
  }

  if (block42.is_used()) {
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    Bind(&block42, &tmp152, &tmp153);
    TNode<Smi> tmp154;
    USE(tmp154);
    tmp154 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp155;
    USE(tmp155);
    tmp155 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp153}, TNode<Smi>{tmp154}));
    Branch(tmp155, &block46, &block47, tmp152, tmp153);
  }

  if (block46.is_used()) {
    TNode<Smi> tmp156;
    TNode<Smi> tmp157;
    Bind(&block46, &tmp156, &tmp157);
    Goto(&block45, tmp156, tmp157);
  }

  if (block47.is_used()) {
    TNode<Smi> tmp158;
    TNode<Smi> tmp159;
    Bind(&block47, &tmp158, &tmp159);
    TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp158}, TNode<Smi>{tmp159}));
    Goto(&block45, tmp160, tmp159);
  }

  if (block45.is_used()) {
    TNode<Smi> tmp161;
    TNode<Smi> tmp162;
    Bind(&block45, &tmp161, &tmp162);
    TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp164;
    USE(tmp164);
    tmp164 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp162}, TNode<Smi>{tmp163}));
    Goto(&block44, tmp161, tmp164);
  }

  if (block43.is_used()) {
    TNode<Smi> tmp165;
    TNode<Smi> tmp166;
    Bind(&block43, &tmp165, &tmp166);
    TNode<Smi> tmp167;
    USE(tmp167);
    tmp167 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<BoolT> tmp168;
    USE(tmp168);
    tmp168 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp165}, TNode<Smi>{tmp167}));
    Branch(tmp168, &block48, &block49, tmp165, tmp166);
  }

  if (block49.is_used()) {
    TNode<Smi> tmp169;
    TNode<Smi> tmp170;
    Bind(&block49, &tmp169, &tmp170);
    Print("assert \'sum == 7\' failed at ../../test/torque/test-torque.tq:360:");
    Unreachable();
  }

  if (block48.is_used()) {
    TNode<Smi> tmp171;
    TNode<Smi> tmp172;
    Bind(&block48, &tmp171, &tmp172);
    TNode<Smi> tmp173;
    USE(tmp173);
    tmp173 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp174;
    USE(tmp174);
    tmp174 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block52, tmp173, tmp174);
  }

  if (block52.is_used()) {
    TNode<Smi> tmp175;
    TNode<Smi> tmp176;
    Bind(&block52, &tmp175, &tmp176);
    TNode<Smi> tmp177;
    USE(tmp177);
    tmp177 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp176}, TNode<Smi>{tmp177}));
    Branch(tmp178, &block50, &block51, tmp175, tmp176);
  }

  if (block50.is_used()) {
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    Bind(&block50, &tmp179, &tmp180);
    TNode<Smi> tmp181;
    USE(tmp181);
    tmp181 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp182;
    USE(tmp182);
    tmp182 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp180}, TNode<Smi>{tmp181}));
    Branch(tmp182, &block53, &block54, tmp179, tmp180);
  }

  if (block53.is_used()) {
    TNode<Smi> tmp183;
    TNode<Smi> tmp184;
    Bind(&block53, &tmp183, &tmp184);
    TNode<Smi> tmp185;
    USE(tmp185);
    tmp185 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp186;
    USE(tmp186);
    tmp186 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp184}, TNode<Smi>{tmp185}));
    Goto(&block52, tmp183, tmp186);
  }

  if (block54.is_used()) {
    TNode<Smi> tmp187;
    TNode<Smi> tmp188;
    Bind(&block54, &tmp187, &tmp188);
    TNode<Smi> tmp189;
    USE(tmp189);
    tmp189 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp187}, TNode<Smi>{tmp188}));
    TNode<Smi> tmp190;
    USE(tmp190);
    tmp190 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp191;
    USE(tmp191);
    tmp191 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp188}, TNode<Smi>{tmp190}));
    Goto(&block52, tmp189, tmp191);
  }

  if (block51.is_used()) {
    TNode<Smi> tmp192;
    TNode<Smi> tmp193;
    Bind(&block51, &tmp192, &tmp193);
    TNode<Smi> tmp194;
    USE(tmp194);
    tmp194 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp192}, TNode<Smi>{tmp194}));
    Branch(tmp195, &block55, &block56, tmp192, tmp193);
  }

  if (block56.is_used()) {
    TNode<Smi> tmp196;
    TNode<Smi> tmp197;
    Bind(&block56, &tmp196, &tmp197);
    Print("assert \'sum == 7\' failed at ../../test/torque/test-torque.tq:372:");
    Unreachable();
  }

  if (block55.is_used()) {
    TNode<Smi> tmp198;
    TNode<Smi> tmp199;
    Bind(&block55, &tmp198, &tmp199);
    TNode<Smi> tmp200;
    USE(tmp200);
    tmp200 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp201;
    USE(tmp201);
    tmp201 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block59, tmp200, tmp199, tmp201);
  }

  if (block59.is_used()) {
    TNode<Smi> tmp202;
    TNode<Smi> tmp203;
    TNode<Smi> tmp204;
    Bind(&block59, &tmp202, &tmp203, &tmp204);
    Goto(&block57, tmp202, tmp203, tmp204);
  }

  if (block57.is_used()) {
    TNode<Smi> tmp205;
    TNode<Smi> tmp206;
    TNode<Smi> tmp207;
    Bind(&block57, &tmp205, &tmp206, &tmp207);
    TNode<Smi> tmp208;
    USE(tmp208);
    tmp208 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp207}, TNode<Smi>{tmp208}));
    Branch(tmp209, &block61, &block62, tmp205, tmp206, tmp207);
  }

  if (block61.is_used()) {
    TNode<Smi> tmp210;
    TNode<Smi> tmp211;
    TNode<Smi> tmp212;
    Bind(&block61, &tmp210, &tmp211, &tmp212);
    Goto(&block60, tmp210, tmp211, tmp212);
  }

  if (block62.is_used()) {
    TNode<Smi> tmp213;
    TNode<Smi> tmp214;
    TNode<Smi> tmp215;
    Bind(&block62, &tmp213, &tmp214, &tmp215);
    TNode<Smi> tmp216;
    USE(tmp216);
    tmp216 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp217;
    USE(tmp217);
    tmp217 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp215}, TNode<Smi>{tmp216}));
    Branch(tmp217, &block63, &block64, tmp213, tmp214, tmp215);
  }

  if (block63.is_used()) {
    TNode<Smi> tmp218;
    TNode<Smi> tmp219;
    TNode<Smi> tmp220;
    Bind(&block63, &tmp218, &tmp219, &tmp220);
    Goto(&block58, tmp218, tmp219, tmp220);
  }

  if (block64.is_used()) {
    TNode<Smi> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    Bind(&block64, &tmp221, &tmp222, &tmp223);
    TNode<Smi> tmp224;
    USE(tmp224);
    tmp224 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp221}, TNode<Smi>{tmp223}));
    Goto(&block60, tmp224, tmp222, tmp223);
  }

  if (block60.is_used()) {
    TNode<Smi> tmp225;
    TNode<Smi> tmp226;
    TNode<Smi> tmp227;
    Bind(&block60, &tmp225, &tmp226, &tmp227);
    TNode<Smi> tmp228;
    USE(tmp228);
    tmp228 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp229;
    USE(tmp229);
    tmp229 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp227}, TNode<Smi>{tmp228}));
    Goto(&block59, tmp225, tmp226, tmp229);
  }

  if (block58.is_used()) {
    TNode<Smi> tmp230;
    TNode<Smi> tmp231;
    TNode<Smi> tmp232;
    Bind(&block58, &tmp230, &tmp231, &tmp232);
    TNode<Smi> tmp233;
    USE(tmp233);
    tmp233 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<BoolT> tmp234;
    USE(tmp234);
    tmp234 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp230}, TNode<Smi>{tmp233}));
    Branch(tmp234, &block65, &block66, tmp230, tmp231);
  }

  if (block66.is_used()) {
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    Bind(&block66, &tmp235, &tmp236);
    Print("assert \'sum == 7\' failed at ../../test/torque/test-torque.tq:380:");
    Unreachable();
  }

  if (block65.is_used()) {
    TNode<Smi> tmp237;
    TNode<Smi> tmp238;
    Bind(&block65, &tmp237, &tmp238);
    TNode<Smi> tmp239;
    USE(tmp239);
    tmp239 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp240;
    USE(tmp240);
    tmp240 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block69, tmp239, tmp240);
  }

  if (block69.is_used()) {
    TNode<Smi> tmp241;
    TNode<Smi> tmp242;
    Bind(&block69, &tmp241, &tmp242);
    Goto(&block67, tmp241, tmp242);
  }

  if (block67.is_used()) {
    TNode<Smi> tmp243;
    TNode<Smi> tmp244;
    Bind(&block67, &tmp243, &tmp244);
    TNode<Smi> tmp245;
    USE(tmp245);
    tmp245 = UncheckedCast<Smi>(FromConstexpr5ATSmi(3));
    TNode<BoolT> tmp246;
    USE(tmp246);
    tmp246 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp244}, TNode<Smi>{tmp245}));
    Branch(tmp246, &block70, &block71, tmp243, tmp244);
  }

  if (block70.is_used()) {
    TNode<Smi> tmp247;
    TNode<Smi> tmp248;
    Bind(&block70, &tmp247, &tmp248);
    TNode<Smi> tmp249;
    USE(tmp249);
    tmp249 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp250;
    USE(tmp250);
    tmp250 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp248}, TNode<Smi>{tmp249}));
    Goto(&block69, tmp247, tmp250);
  }

  if (block71.is_used()) {
    TNode<Smi> tmp251;
    TNode<Smi> tmp252;
    Bind(&block71, &tmp251, &tmp252);
    TNode<Smi> tmp253;
    USE(tmp253);
    tmp253 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp254;
    USE(tmp254);
    tmp254 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp252}, TNode<Smi>{tmp253}));
    Branch(tmp254, &block72, &block73, tmp251, tmp252);
  }

  if (block72.is_used()) {
    TNode<Smi> tmp255;
    TNode<Smi> tmp256;
    Bind(&block72, &tmp255, &tmp256);
    Goto(&block68, tmp255, tmp256);
  }

  if (block73.is_used()) {
    TNode<Smi> tmp257;
    TNode<Smi> tmp258;
    Bind(&block73, &tmp257, &tmp258);
    TNode<Smi> tmp259;
    USE(tmp259);
    tmp259 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp257}, TNode<Smi>{tmp258}));
    TNode<Smi> tmp260;
    USE(tmp260);
    tmp260 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp261;
    USE(tmp261);
    tmp261 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp258}, TNode<Smi>{tmp260}));
    Goto(&block69, tmp259, tmp261);
  }

  if (block68.is_used()) {
    TNode<Smi> tmp262;
    TNode<Smi> tmp263;
    Bind(&block68, &tmp262, &tmp263);
    TNode<Smi> tmp264;
    USE(tmp264);
    tmp264 = UncheckedCast<Smi>(FromConstexpr5ATSmi(7));
    TNode<BoolT> tmp265;
    USE(tmp265);
    tmp265 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp262}, TNode<Smi>{tmp264}));
    Branch(tmp265, &block74, &block75, tmp262, tmp263);
  }

  if (block75.is_used()) {
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    Bind(&block75, &tmp266, &tmp267);
    Print("assert \'sum == 7\' failed at ../../test/torque/test-torque.tq:394:");
    Unreachable();
  }

  if (block74.is_used()) {
    TNode<Smi> tmp268;
    TNode<Smi> tmp269;
    Bind(&block74, &tmp268, &tmp269);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestSubtyping(TNode<Smi> p_x) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Int32T> TestBuiltinsFromDSLAssembler::TypeswitchExample(TNode<Object> p_x) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Object, FixedArray> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object, Object> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object, Object, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object, HeapObject> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object, HeapObject, FixedArray> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Int32T, Object, Int32T, Object> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Int32T> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(FromConstexpr7ATint32(0));
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(TNode<Object>{tmp0}));
    TNode<FixedArray> tmp3;
    USE(tmp3);
    Label label0(this);
    tmp3 = Cast12ATFixedArray(TNode<Object>{tmp2}, &label0);
    Goto(&block4, tmp0, tmp1, tmp2, tmp2, tmp3);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp1, tmp2, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Object> tmp4;
    TNode<Int32T> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Object> tmp8;
    TNode<Int32T> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<FixedArray> tmp12;
    Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    TNode<Int32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Int32T>(FromConstexpr7ATint32(1));
    TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp13}));
    Goto(&block2, tmp8, tmp14, tmp10);
  }

  if (block3.is_used()) {
    TNode<Object> tmp15;
    TNode<Int32T> tmp16;
    TNode<Object> tmp17;
    Bind(&block3, &tmp15, &tmp16, &tmp17);
    TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<Int32T>(FromConstexpr7ATint32(2));
    TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp18}));
    Goto(&block2, tmp15, tmp19, tmp17);
  }

  if (block2.is_used()) {
    TNode<Object> tmp20;
    TNode<Int32T> tmp21;
    TNode<Object> tmp22;
    Bind(&block2, &tmp20, &tmp21, &tmp22);
    TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<Int32T>(FromConstexpr7ATint32(10));
    TNode<Int32T> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<Int32T>(Int32Mul(TNode<Int32T>{tmp21}, TNode<Int32T>{tmp23}));
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(TNode<Object>{tmp20}));
    TNode<Smi> tmp26;
    USE(tmp26);
    Label label0(this);
    tmp26 = Cast5ATSmi(TNode<Object>{tmp25}, &label0);
    Goto(&block8, tmp20, tmp24, tmp22, tmp24, tmp25, tmp25, tmp26);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp20, tmp24, tmp22, tmp24, tmp25, tmp25);
    }
  }

  if (block9.is_used()) {
    TNode<Object> tmp27;
    TNode<Int32T> tmp28;
    TNode<Object> tmp29;
    TNode<Int32T> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    Bind(&block9, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    Goto(&block7, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block8.is_used()) {
    TNode<Object> tmp33;
    TNode<Int32T> tmp34;
    TNode<Object> tmp35;
    TNode<Int32T> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<Smi> tmp39;
    Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<Int32T> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<Int32T>(Convert7ATint32(TNode<Smi>{tmp39}));
    TNode<Int32T> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp34}, TNode<Int32T>{tmp40}));
    Goto(&block6, tmp33, tmp41, tmp35, tmp36, tmp37);
  }

  if (block7.is_used()) {
    TNode<Object> tmp42;
    TNode<Int32T> tmp43;
    TNode<Object> tmp44;
    TNode<Int32T> tmp45;
    TNode<Object> tmp46;
    Bind(&block7, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    TNode<FixedArray> tmp47;
    USE(tmp47);
    Label label0(this);
    tmp47 = Cast12ATFixedArray(TNode<HeapObject>{UncheckedCast<HeapObject>(tmp46)}, &label0);
    Goto(&block12, tmp42, tmp43, tmp44, tmp45, tmp46, UncheckedCast<HeapObject>(tmp46), tmp47);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block13, tmp42, tmp43, tmp44, tmp45, tmp46, UncheckedCast<HeapObject>(tmp46));
    }
  }

  if (block13.is_used()) {
    TNode<Object> tmp48;
    TNode<Int32T> tmp49;
    TNode<Object> tmp50;
    TNode<Int32T> tmp51;
    TNode<Object> tmp52;
    TNode<HeapObject> tmp53;
    Bind(&block13, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    Goto(&block11, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block12.is_used()) {
    TNode<Object> tmp54;
    TNode<Int32T> tmp55;
    TNode<Object> tmp56;
    TNode<Int32T> tmp57;
    TNode<Object> tmp58;
    TNode<HeapObject> tmp59;
    TNode<FixedArray> tmp60;
    Bind(&block12, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    TNode<Smi> tmp61;
    USE(tmp61);
    tmp61 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(TNode<FixedArrayBase>{tmp60}));
    TNode<Int32T> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<Int32T>(Convert7ATint32(TNode<Smi>{tmp61}));
    TNode<Int32T> tmp63;
    USE(tmp63);
    tmp63 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp55}, TNode<Int32T>{tmp62}));
    Goto(&block10, tmp54, tmp63, tmp56, tmp57, tmp58);
  }

  if (block11.is_used()) {
    TNode<Object> tmp64;
    TNode<Int32T> tmp65;
    TNode<Object> tmp66;
    TNode<Int32T> tmp67;
    TNode<Object> tmp68;
    Bind(&block11, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = UncheckedCast<Int32T>(FromConstexpr7ATint32(7));
    TNode<Int32T> tmp70;
    USE(tmp70);
    tmp70 = UncheckedCast<Int32T>(Int32Add(TNode<Int32T>{tmp65}, TNode<Int32T>{tmp69}));
    Goto(&block10, tmp64, tmp70, tmp66, tmp67, tmp68);
  }

  if (block10.is_used()) {
    TNode<Object> tmp71;
    TNode<Int32T> tmp72;
    TNode<Object> tmp73;
    TNode<Int32T> tmp74;
    TNode<Object> tmp75;
    Bind(&block10, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    Goto(&block6, tmp71, tmp72, tmp73, tmp74, tmp75);
  }

  if (block6.is_used()) {
    TNode<Object> tmp76;
    TNode<Int32T> tmp77;
    TNode<Object> tmp78;
    TNode<Int32T> tmp79;
    TNode<Object> tmp80;
    Bind(&block6, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    Goto(&block1, tmp77);
  }

    TNode<Int32T> tmp81;
    Bind(&block1, &tmp81);
  return TNode<Int32T>{tmp81};
}

void TestBuiltinsFromDSLAssembler::TestTypeswitch() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<FixedArray> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Int32T>(TypeswitchExample(TNode<Object>{tmp0}));
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Int32T>(FromConstexpr7ATint32(26));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp2}));
    Branch(tmp3, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'TypeswitchExample(FromConstexpr<Smi>(5)) == 26\' failed at ../../test/torque/test-torque.tq:441:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<IntPtrT>(FromConstexpr8ATintptr(3));
    TNode<FixedArray> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(TNode<IntPtrT>{tmp4}));
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<Int32T>(TypeswitchExample(TNode<Object>{tmp5}));
    TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<Int32T>(FromConstexpr7ATint32(13));
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<BoolT>(Word32Equal(TNode<Int32T>{tmp6}, TNode<Int32T>{tmp7}));
    Branch(tmp8, &block4, &block5, tmp5);
  }

  if (block5.is_used()) {
    TNode<FixedArray> tmp9;
    Bind(&block5, &tmp9);
    Print("assert \'TypeswitchExample(a) == 13\' failed at ../../test/torque/test-torque.tq:443:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<FixedArray> tmp10;
    Bind(&block4, &tmp10);
    TNode<Number> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Number>(FromConstexpr22UT12ATHeapNumber5ATSmi(0.5));
    TNode<Int32T> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Int32T>(TypeswitchExample(TNode<Object>{tmp11}));
    TNode<Int32T> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<Int32T>(FromConstexpr7ATint32(27));
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<BoolT>(Word32Equal(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp13}));
    Branch(tmp14, &block6, &block7, tmp10);
  }

  if (block7.is_used()) {
    TNode<FixedArray> tmp15;
    Bind(&block7, &tmp15);
    Print("assert \'TypeswitchExample(FromConstexpr<Number>(0.5)) == 27\' failed at ../../test/torque/test-torque.tq:444:");
    Unreachable();
  }

  if (block6.is_used()) {
    TNode<FixedArray> tmp16;
    Bind(&block6, &tmp16);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestGenericOverload() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Object> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(ExampleGenericOverload5ATSmi(TNode<Smi>{tmp0}));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(6));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2}));
    Branch(tmp3, &block2, &block3, tmp0, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp4;
    TNode<Object> tmp5;
    Bind(&block3, &tmp4, &tmp5);
    Print("assert \'ExampleGenericOverload<Smi>(xSmi) == 6\' failed at ../../test/torque/test-torque.tq:457:");
    Unreachable();
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Object> tmp7;
    Bind(&block2, &tmp6, &tmp7);
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<Object>(ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object>{tmp7}));
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Smi>(UnsafeCast5ATSmi(TNode<Object>{tmp8}));
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<BoolT>(SmiEqual(TNode<Smi>{tmp9}, TNode<Smi>{tmp10}));
    Branch(tmp11, &block4, &block5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp12;
    TNode<Object> tmp13;
    Bind(&block5, &tmp12, &tmp13);
    Print("assert \'UnsafeCast<Smi>(ExampleGenericOverload<Object>(xObject)) == 5\' failed at ../../test/torque/test-torque.tq:458:");
    Unreachable();
  }

  if (block4.is_used()) {
    TNode<Smi> tmp14;
    TNode<Object> tmp15;
    Bind(&block4, &tmp14, &tmp15);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::BoolToBranch(TNode<BoolT> p_x, Label* label_Taken, Label* label_NotTaken) {
  PLabel<BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    Bind(&block0, &tmp0);
    Branch(tmp0, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp1;
    Bind(&block3, &tmp1);
    Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp2;
    Bind(&block4, &tmp2);
    Goto(&block2);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_Taken);
  }

  if (block2.is_used()) {
    Bind(&block2);
    Goto(label_NotTaken);
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestOrAnd1(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  PLabel<BoolT, BoolT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Label label0(this);
    Label label1(this);
    BoolToBranch(TNode<BoolT>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block8, tmp0, tmp1, tmp2, tmp0);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block9, tmp0, tmp1, tmp2, tmp0);
    }
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    TNode<BoolT> tmp6;
    Bind(&block8, &tmp3, &tmp4, &tmp5, &tmp6);
    Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    TNode<BoolT> tmp10;
    Bind(&block9, &tmp7, &tmp8, &tmp9, &tmp10);
    Goto(&block7, tmp7, tmp8, tmp9);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    Bind(&block7, &tmp11, &tmp12, &tmp13);
    Branch(tmp12, &block10, &block5, tmp11, tmp12, tmp13);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    Bind(&block10, &tmp14, &tmp15, &tmp16);
    Branch(tmp16, &block4, &block5, tmp14, tmp15, tmp16);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    Bind(&block4, &tmp17, &tmp18, &tmp19);
    Goto(&block3, tmp17, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    TNode<BoolT> tmp22;
    Bind(&block5, &tmp20, &tmp21, &tmp22);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp20, tmp21, tmp22, tmp23);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    Bind(&block3, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31);
    Goto(&block1, tmp31);
  }

    TNode<BoolT> tmp32;
    Bind(&block1, &tmp32);
  return TNode<BoolT>{tmp32};
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestOrAnd2(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  PLabel<BoolT, BoolT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Branch(tmp0, &block4, &block7, tmp0, tmp1, tmp2);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    Bind(&block7, &tmp3, &tmp4, &tmp5);
    Label label0(this);
    Label label1(this);
    BoolToBranch(TNode<BoolT>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp3, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block10, tmp3, tmp4, tmp5, tmp4);
    }
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp6;
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    Bind(&block9, &tmp6, &tmp7, &tmp8, &tmp9);
    Goto(&block8, tmp6, tmp7, tmp8);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp10;
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    Bind(&block10, &tmp10, &tmp11, &tmp12, &tmp13);
    Goto(&block5, tmp10, tmp11, tmp12);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    Bind(&block8, &tmp14, &tmp15, &tmp16);
    Branch(tmp16, &block4, &block5, tmp14, tmp15, tmp16);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    Bind(&block4, &tmp17, &tmp18, &tmp19);
    Goto(&block3, tmp17, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    TNode<BoolT> tmp22;
    Bind(&block5, &tmp20, &tmp21, &tmp22);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp20, tmp21, tmp22, tmp23);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    Bind(&block3, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31);
    Goto(&block1, tmp31);
  }

    TNode<BoolT> tmp32;
    Bind(&block1, &tmp32);
  return TNode<BoolT>{tmp32};
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestOrAnd3(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  PLabel<BoolT, BoolT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Branch(tmp0, &block4, &block7, tmp0, tmp1, tmp2);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    Bind(&block7, &tmp3, &tmp4, &tmp5);
    Branch(tmp4, &block8, &block5, tmp3, tmp4, tmp5);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp6;
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    Bind(&block8, &tmp6, &tmp7, &tmp8);
    Label label0(this);
    Label label1(this);
    BoolToBranch(TNode<BoolT>{tmp8}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp6, tmp7, tmp8, tmp8);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block10, tmp6, tmp7, tmp8, tmp8);
    }
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp9;
    TNode<BoolT> tmp10;
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    Bind(&block9, &tmp9, &tmp10, &tmp11, &tmp12);
    Goto(&block4, tmp9, tmp10, tmp11);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp13;
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    Bind(&block10, &tmp13, &tmp14, &tmp15, &tmp16);
    Goto(&block5, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    Bind(&block4, &tmp17, &tmp18, &tmp19);
    Goto(&block3, tmp17, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    TNode<BoolT> tmp22;
    Bind(&block5, &tmp20, &tmp21, &tmp22);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp20, tmp21, tmp22, tmp23);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    Bind(&block3, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31);
    Goto(&block1, tmp31);
  }

    TNode<BoolT> tmp32;
    Bind(&block1, &tmp32);
  return TNode<BoolT>{tmp32};
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestAndOr1(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  PLabel<BoolT, BoolT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Label label0(this);
    Label label1(this);
    BoolToBranch(TNode<BoolT>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp0, tmp1, tmp2, tmp0);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block10, tmp0, tmp1, tmp2, tmp0);
    }
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    TNode<BoolT> tmp6;
    Bind(&block9, &tmp3, &tmp4, &tmp5, &tmp6);
    Goto(&block8, tmp3, tmp4, tmp5);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    TNode<BoolT> tmp10;
    Bind(&block10, &tmp7, &tmp8, &tmp9, &tmp10);
    Goto(&block7, tmp7, tmp8, tmp9);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    Bind(&block8, &tmp11, &tmp12, &tmp13);
    Branch(tmp12, &block4, &block7, tmp11, tmp12, tmp13);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    Bind(&block7, &tmp14, &tmp15, &tmp16);
    Branch(tmp16, &block4, &block5, tmp14, tmp15, tmp16);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    Bind(&block4, &tmp17, &tmp18, &tmp19);
    Goto(&block3, tmp17, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    TNode<BoolT> tmp22;
    Bind(&block5, &tmp20, &tmp21, &tmp22);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp20, tmp21, tmp22, tmp23);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    Bind(&block3, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31);
    Goto(&block1, tmp31);
  }

    TNode<BoolT> tmp32;
    Bind(&block1, &tmp32);
  return TNode<BoolT>{tmp32};
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestAndOr2(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  PLabel<BoolT, BoolT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Branch(tmp0, &block8, &block7, tmp0, tmp1, tmp2);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    Bind(&block8, &tmp3, &tmp4, &tmp5);
    Label label0(this);
    Label label1(this);
    BoolToBranch(TNode<BoolT>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp3, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block10, tmp3, tmp4, tmp5, tmp4);
    }
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp6;
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    Bind(&block9, &tmp6, &tmp7, &tmp8, &tmp9);
    Goto(&block4, tmp6, tmp7, tmp8);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp10;
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    Bind(&block10, &tmp10, &tmp11, &tmp12, &tmp13);
    Goto(&block7, tmp10, tmp11, tmp12);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    Bind(&block7, &tmp14, &tmp15, &tmp16);
    Branch(tmp16, &block4, &block5, tmp14, tmp15, tmp16);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    Bind(&block4, &tmp17, &tmp18, &tmp19);
    Goto(&block3, tmp17, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    TNode<BoolT> tmp22;
    Bind(&block5, &tmp20, &tmp21, &tmp22);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp20, tmp21, tmp22, tmp23);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    Bind(&block3, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31);
    Goto(&block1, tmp31);
  }

    TNode<BoolT> tmp32;
    Bind(&block1, &tmp32);
  return TNode<BoolT>{tmp32};
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::TestAndOr3(TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  PLabel<BoolT, BoolT, BoolT> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT, BoolT, BoolT, BoolT> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<BoolT> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    Bind(&block0, &tmp0, &tmp1, &tmp2);
    Branch(tmp0, &block8, &block7, tmp0, tmp1, tmp2);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    Bind(&block8, &tmp3, &tmp4, &tmp5);
    Branch(tmp4, &block4, &block7, tmp3, tmp4, tmp5);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp6;
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    Bind(&block7, &tmp6, &tmp7, &tmp8);
    Label label0(this);
    Label label1(this);
    BoolToBranch(TNode<BoolT>{tmp8}, &label0, &label1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp6, tmp7, tmp8, tmp8);
    }
    if (label1.is_used()) {
      Bind(&label1);
      Goto(&block10, tmp6, tmp7, tmp8, tmp8);
    }
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp9;
    TNode<BoolT> tmp10;
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    Bind(&block9, &tmp9, &tmp10, &tmp11, &tmp12);
    Goto(&block4, tmp9, tmp10, tmp11);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp13;
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    Bind(&block10, &tmp13, &tmp14, &tmp15, &tmp16);
    Goto(&block5, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    Bind(&block4, &tmp17, &tmp18, &tmp19);
    Goto(&block3, tmp17, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    TNode<BoolT> tmp22;
    Bind(&block5, &tmp20, &tmp21, &tmp22);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    Goto(&block6, tmp20, tmp21, tmp22, tmp23);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    Bind(&block3, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    Goto(&block6, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31);
    Goto(&block1, tmp31);
  }

    TNode<BoolT> tmp32;
    Bind(&block1, &tmp32);
  return TNode<BoolT>{tmp32};
}

void TestBuiltinsFromDSLAssembler::TestLogicalOperators() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block11(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block10(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block13(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block12(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block15(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block14(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block17(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block16(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block19(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block18(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block21(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block20(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block23(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block22(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block25(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block24(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block27(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block26(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block29(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block28(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block31(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block30(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block33(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block32(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block35(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block34(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block37(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block36(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block39(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block38(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block41(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block40(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block43(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block42(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block45(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block44(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block47(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block46(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block49(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block48(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block51(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block50(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block53(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block52(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block55(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block54(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block57(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block56(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block59(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block58(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block61(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block60(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block63(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block62(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block65(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block64(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block67(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block66(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block69(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block68(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block71(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block70(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block73(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block72(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block75(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block74(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block77(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block76(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block79(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block78(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block81(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block80(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block83(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block82(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block85(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block84(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block87(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block86(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block89(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block88(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block91(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block90(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block93(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block92(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block95(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block94(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block97(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block96(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp0}, TNode<BoolT>{tmp1}, TNode<BoolT>{tmp2}));
    Branch(tmp3, &block2, &block3);
  }

  if (block3.is_used()) {
    Bind(&block3);
    Print("assert \'TestAndOr1(true, true, true)\' failed at ../../test/torque/test-torque.tq:495:");
    Unreachable();
  }

  if (block2.is_used()) {
    Bind(&block2);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp4}, TNode<BoolT>{tmp5}, TNode<BoolT>{tmp6}));
    Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    Bind(&block5);
    Print("assert \'TestAndOr2(true, true, true)\' failed at ../../test/torque/test-torque.tq:496:");
    Unreachable();
  }

  if (block4.is_used()) {
    Bind(&block4);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp8}, TNode<BoolT>{tmp9}, TNode<BoolT>{tmp10}));
    Branch(tmp11, &block6, &block7);
  }

  if (block7.is_used()) {
    Bind(&block7);
    Print("assert \'TestAndOr3(true, true, true)\' failed at ../../test/torque/test-torque.tq:497:");
    Unreachable();
  }

  if (block6.is_used()) {
    Bind(&block6);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp12}, TNode<BoolT>{tmp13}, TNode<BoolT>{tmp14}));
    Branch(tmp15, &block8, &block9);
  }

  if (block9.is_used()) {
    Bind(&block9);
    Print("assert \'TestAndOr1(true, true, false)\' failed at ../../test/torque/test-torque.tq:498:");
    Unreachable();
  }

  if (block8.is_used()) {
    Bind(&block8);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp16}, TNode<BoolT>{tmp17}, TNode<BoolT>{tmp18}));
    Branch(tmp19, &block10, &block11);
  }

  if (block11.is_used()) {
    Bind(&block11);
    Print("assert \'TestAndOr2(true, true, false)\' failed at ../../test/torque/test-torque.tq:499:");
    Unreachable();
  }

  if (block10.is_used()) {
    Bind(&block10);
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp20}, TNode<BoolT>{tmp21}, TNode<BoolT>{tmp22}));
    Branch(tmp23, &block12, &block13);
  }

  if (block13.is_used()) {
    Bind(&block13);
    Print("assert \'TestAndOr3(true, true, false)\' failed at ../../test/torque/test-torque.tq:500:");
    Unreachable();
  }

  if (block12.is_used()) {
    Bind(&block12);
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp24}, TNode<BoolT>{tmp25}, TNode<BoolT>{tmp26}));
    Branch(tmp27, &block14, &block15);
  }

  if (block15.is_used()) {
    Bind(&block15);
    Print("assert \'TestAndOr1(true, false, true)\' failed at ../../test/torque/test-torque.tq:501:");
    Unreachable();
  }

  if (block14.is_used()) {
    Bind(&block14);
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp28}, TNode<BoolT>{tmp29}, TNode<BoolT>{tmp30}));
    Branch(tmp31, &block16, &block17);
  }

  if (block17.is_used()) {
    Bind(&block17);
    Print("assert \'TestAndOr2(true, false, true)\' failed at ../../test/torque/test-torque.tq:502:");
    Unreachable();
  }

  if (block16.is_used()) {
    Bind(&block16);
    TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp32}, TNode<BoolT>{tmp33}, TNode<BoolT>{tmp34}));
    Branch(tmp35, &block18, &block19);
  }

  if (block19.is_used()) {
    Bind(&block19);
    Print("assert \'TestAndOr3(true, false, true)\' failed at ../../test/torque/test-torque.tq:503:");
    Unreachable();
  }

  if (block18.is_used()) {
    Bind(&block18);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp36}, TNode<BoolT>{tmp37}, TNode<BoolT>{tmp38}));
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp39}));
    Branch(tmp40, &block20, &block21);
  }

  if (block21.is_used()) {
    Bind(&block21);
    Print("assert \'!TestAndOr1(true, false, false)\' failed at ../../test/torque/test-torque.tq:504:");
    Unreachable();
  }

  if (block20.is_used()) {
    Bind(&block20);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp41}, TNode<BoolT>{tmp42}, TNode<BoolT>{tmp43}));
    TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp44}));
    Branch(tmp45, &block22, &block23);
  }

  if (block23.is_used()) {
    Bind(&block23);
    Print("assert \'!TestAndOr2(true, false, false)\' failed at ../../test/torque/test-torque.tq:505:");
    Unreachable();
  }

  if (block22.is_used()) {
    Bind(&block22);
    TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp47;
    USE(tmp47);
    tmp47 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp48;
    USE(tmp48);
    tmp48 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp46}, TNode<BoolT>{tmp47}, TNode<BoolT>{tmp48}));
    TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp49}));
    Branch(tmp50, &block24, &block25);
  }

  if (block25.is_used()) {
    Bind(&block25);
    Print("assert \'!TestAndOr3(true, false, false)\' failed at ../../test/torque/test-torque.tq:506:");
    Unreachable();
  }

  if (block24.is_used()) {
    Bind(&block24);
    TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp51}, TNode<BoolT>{tmp52}, TNode<BoolT>{tmp53}));
    Branch(tmp54, &block26, &block27);
  }

  if (block27.is_used()) {
    Bind(&block27);
    Print("assert \'TestAndOr1(false, true, true)\' failed at ../../test/torque/test-torque.tq:507:");
    Unreachable();
  }

  if (block26.is_used()) {
    Bind(&block26);
    TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp57;
    USE(tmp57);
    tmp57 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp55}, TNode<BoolT>{tmp56}, TNode<BoolT>{tmp57}));
    Branch(tmp58, &block28, &block29);
  }

  if (block29.is_used()) {
    Bind(&block29);
    Print("assert \'TestAndOr2(false, true, true)\' failed at ../../test/torque/test-torque.tq:508:");
    Unreachable();
  }

  if (block28.is_used()) {
    Bind(&block28);
    TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp59}, TNode<BoolT>{tmp60}, TNode<BoolT>{tmp61}));
    Branch(tmp62, &block30, &block31);
  }

  if (block31.is_used()) {
    Bind(&block31);
    Print("assert \'TestAndOr3(false, true, true)\' failed at ../../test/torque/test-torque.tq:509:");
    Unreachable();
  }

  if (block30.is_used()) {
    Bind(&block30);
    TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp63}, TNode<BoolT>{tmp64}, TNode<BoolT>{tmp65}));
    TNode<BoolT> tmp67;
    USE(tmp67);
    tmp67 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp66}));
    Branch(tmp67, &block32, &block33);
  }

  if (block33.is_used()) {
    Bind(&block33);
    Print("assert \'!TestAndOr1(false, true, false)\' failed at ../../test/torque/test-torque.tq:510:");
    Unreachable();
  }

  if (block32.is_used()) {
    Bind(&block32);
    TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp70;
    USE(tmp70);
    tmp70 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp71;
    USE(tmp71);
    tmp71 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp68}, TNode<BoolT>{tmp69}, TNode<BoolT>{tmp70}));
    TNode<BoolT> tmp72;
    USE(tmp72);
    tmp72 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp71}));
    Branch(tmp72, &block34, &block35);
  }

  if (block35.is_used()) {
    Bind(&block35);
    Print("assert \'!TestAndOr2(false, true, false)\' failed at ../../test/torque/test-torque.tq:511:");
    Unreachable();
  }

  if (block34.is_used()) {
    Bind(&block34);
    TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp74;
    USE(tmp74);
    tmp74 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp76;
    USE(tmp76);
    tmp76 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp73}, TNode<BoolT>{tmp74}, TNode<BoolT>{tmp75}));
    TNode<BoolT> tmp77;
    USE(tmp77);
    tmp77 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp76}));
    Branch(tmp77, &block36, &block37);
  }

  if (block37.is_used()) {
    Bind(&block37);
    Print("assert \'!TestAndOr3(false, true, false)\' failed at ../../test/torque/test-torque.tq:512:");
    Unreachable();
  }

  if (block36.is_used()) {
    Bind(&block36);
    TNode<BoolT> tmp78;
    USE(tmp78);
    tmp78 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp79;
    USE(tmp79);
    tmp79 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp80;
    USE(tmp80);
    tmp80 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp78}, TNode<BoolT>{tmp79}, TNode<BoolT>{tmp80}));
    Branch(tmp81, &block38, &block39);
  }

  if (block39.is_used()) {
    Bind(&block39);
    Print("assert \'TestAndOr1(false, false, true)\' failed at ../../test/torque/test-torque.tq:513:");
    Unreachable();
  }

  if (block38.is_used()) {
    Bind(&block38);
    TNode<BoolT> tmp82;
    USE(tmp82);
    tmp82 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp84;
    USE(tmp84);
    tmp84 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp82}, TNode<BoolT>{tmp83}, TNode<BoolT>{tmp84}));
    Branch(tmp85, &block40, &block41);
  }

  if (block41.is_used()) {
    Bind(&block41);
    Print("assert \'TestAndOr2(false, false, true)\' failed at ../../test/torque/test-torque.tq:514:");
    Unreachable();
  }

  if (block40.is_used()) {
    Bind(&block40);
    TNode<BoolT> tmp86;
    USE(tmp86);
    tmp86 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp87;
    USE(tmp87);
    tmp87 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp88;
    USE(tmp88);
    tmp88 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp89;
    USE(tmp89);
    tmp89 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp86}, TNode<BoolT>{tmp87}, TNode<BoolT>{tmp88}));
    Branch(tmp89, &block42, &block43);
  }

  if (block43.is_used()) {
    Bind(&block43);
    Print("assert \'TestAndOr3(false, false, true)\' failed at ../../test/torque/test-torque.tq:515:");
    Unreachable();
  }

  if (block42.is_used()) {
    Bind(&block42);
    TNode<BoolT> tmp90;
    USE(tmp90);
    tmp90 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp91;
    USE(tmp91);
    tmp91 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp92;
    USE(tmp92);
    tmp92 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp93;
    USE(tmp93);
    tmp93 = UncheckedCast<BoolT>(TestAndOr1(TNode<BoolT>{tmp90}, TNode<BoolT>{tmp91}, TNode<BoolT>{tmp92}));
    TNode<BoolT> tmp94;
    USE(tmp94);
    tmp94 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp93}));
    Branch(tmp94, &block44, &block45);
  }

  if (block45.is_used()) {
    Bind(&block45);
    Print("assert \'!TestAndOr1(false, false, false)\' failed at ../../test/torque/test-torque.tq:516:");
    Unreachable();
  }

  if (block44.is_used()) {
    Bind(&block44);
    TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp98;
    USE(tmp98);
    tmp98 = UncheckedCast<BoolT>(TestAndOr2(TNode<BoolT>{tmp95}, TNode<BoolT>{tmp96}, TNode<BoolT>{tmp97}));
    TNode<BoolT> tmp99;
    USE(tmp99);
    tmp99 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp98}));
    Branch(tmp99, &block46, &block47);
  }

  if (block47.is_used()) {
    Bind(&block47);
    Print("assert \'!TestAndOr2(false, false, false)\' failed at ../../test/torque/test-torque.tq:517:");
    Unreachable();
  }

  if (block46.is_used()) {
    Bind(&block46);
    TNode<BoolT> tmp100;
    USE(tmp100);
    tmp100 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp101;
    USE(tmp101);
    tmp101 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp102;
    USE(tmp102);
    tmp102 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = UncheckedCast<BoolT>(TestAndOr3(TNode<BoolT>{tmp100}, TNode<BoolT>{tmp101}, TNode<BoolT>{tmp102}));
    TNode<BoolT> tmp104;
    USE(tmp104);
    tmp104 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp103}));
    Branch(tmp104, &block48, &block49);
  }

  if (block49.is_used()) {
    Bind(&block49);
    Print("assert \'!TestAndOr3(false, false, false)\' failed at ../../test/torque/test-torque.tq:518:");
    Unreachable();
  }

  if (block48.is_used()) {
    Bind(&block48);
    TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp106;
    USE(tmp106);
    tmp106 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp107;
    USE(tmp107);
    tmp107 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp108;
    USE(tmp108);
    tmp108 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp105}, TNode<BoolT>{tmp106}, TNode<BoolT>{tmp107}));
    Branch(tmp108, &block50, &block51);
  }

  if (block51.is_used()) {
    Bind(&block51);
    Print("assert \'TestOrAnd1(true, true, true)\' failed at ../../test/torque/test-torque.tq:519:");
    Unreachable();
  }

  if (block50.is_used()) {
    Bind(&block50);
    TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp110;
    USE(tmp110);
    tmp110 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp111;
    USE(tmp111);
    tmp111 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp109}, TNode<BoolT>{tmp110}, TNode<BoolT>{tmp111}));
    Branch(tmp112, &block52, &block53);
  }

  if (block53.is_used()) {
    Bind(&block53);
    Print("assert \'TestOrAnd2(true, true, true)\' failed at ../../test/torque/test-torque.tq:520:");
    Unreachable();
  }

  if (block52.is_used()) {
    Bind(&block52);
    TNode<BoolT> tmp113;
    USE(tmp113);
    tmp113 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp114;
    USE(tmp114);
    tmp114 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp115;
    USE(tmp115);
    tmp115 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp116;
    USE(tmp116);
    tmp116 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp113}, TNode<BoolT>{tmp114}, TNode<BoolT>{tmp115}));
    Branch(tmp116, &block54, &block55);
  }

  if (block55.is_used()) {
    Bind(&block55);
    Print("assert \'TestOrAnd3(true, true, true)\' failed at ../../test/torque/test-torque.tq:521:");
    Unreachable();
  }

  if (block54.is_used()) {
    Bind(&block54);
    TNode<BoolT> tmp117;
    USE(tmp117);
    tmp117 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp118;
    USE(tmp118);
    tmp118 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp120;
    USE(tmp120);
    tmp120 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp117}, TNode<BoolT>{tmp118}, TNode<BoolT>{tmp119}));
    Branch(tmp120, &block56, &block57);
  }

  if (block57.is_used()) {
    Bind(&block57);
    Print("assert \'TestOrAnd1(true, true, false)\' failed at ../../test/torque/test-torque.tq:522:");
    Unreachable();
  }

  if (block56.is_used()) {
    Bind(&block56);
    TNode<BoolT> tmp121;
    USE(tmp121);
    tmp121 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp123;
    USE(tmp123);
    tmp123 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp121}, TNode<BoolT>{tmp122}, TNode<BoolT>{tmp123}));
    Branch(tmp124, &block58, &block59);
  }

  if (block59.is_used()) {
    Bind(&block59);
    Print("assert \'TestOrAnd2(true, true, false)\' failed at ../../test/torque/test-torque.tq:523:");
    Unreachable();
  }

  if (block58.is_used()) {
    Bind(&block58);
    TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp126;
    USE(tmp126);
    tmp126 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp127;
    USE(tmp127);
    tmp127 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp128;
    USE(tmp128);
    tmp128 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp125}, TNode<BoolT>{tmp126}, TNode<BoolT>{tmp127}));
    Branch(tmp128, &block60, &block61);
  }

  if (block61.is_used()) {
    Bind(&block61);
    Print("assert \'TestOrAnd3(true, true, false)\' failed at ../../test/torque/test-torque.tq:524:");
    Unreachable();
  }

  if (block60.is_used()) {
    Bind(&block60);
    TNode<BoolT> tmp129;
    USE(tmp129);
    tmp129 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp130;
    USE(tmp130);
    tmp130 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp131;
    USE(tmp131);
    tmp131 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp132;
    USE(tmp132);
    tmp132 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp129}, TNode<BoolT>{tmp130}, TNode<BoolT>{tmp131}));
    Branch(tmp132, &block62, &block63);
  }

  if (block63.is_used()) {
    Bind(&block63);
    Print("assert \'TestOrAnd1(true, false, true)\' failed at ../../test/torque/test-torque.tq:525:");
    Unreachable();
  }

  if (block62.is_used()) {
    Bind(&block62);
    TNode<BoolT> tmp133;
    USE(tmp133);
    tmp133 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp134;
    USE(tmp134);
    tmp134 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp135;
    USE(tmp135);
    tmp135 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp136;
    USE(tmp136);
    tmp136 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp133}, TNode<BoolT>{tmp134}, TNode<BoolT>{tmp135}));
    Branch(tmp136, &block64, &block65);
  }

  if (block65.is_used()) {
    Bind(&block65);
    Print("assert \'TestOrAnd2(true, false, true)\' failed at ../../test/torque/test-torque.tq:526:");
    Unreachable();
  }

  if (block64.is_used()) {
    Bind(&block64);
    TNode<BoolT> tmp137;
    USE(tmp137);
    tmp137 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp138;
    USE(tmp138);
    tmp138 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp139;
    USE(tmp139);
    tmp139 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp140;
    USE(tmp140);
    tmp140 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp137}, TNode<BoolT>{tmp138}, TNode<BoolT>{tmp139}));
    Branch(tmp140, &block66, &block67);
  }

  if (block67.is_used()) {
    Bind(&block67);
    Print("assert \'TestOrAnd3(true, false, true)\' failed at ../../test/torque/test-torque.tq:527:");
    Unreachable();
  }

  if (block66.is_used()) {
    Bind(&block66);
    TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp142;
    USE(tmp142);
    tmp142 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp143;
    USE(tmp143);
    tmp143 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp144;
    USE(tmp144);
    tmp144 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp141}, TNode<BoolT>{tmp142}, TNode<BoolT>{tmp143}));
    Branch(tmp144, &block68, &block69);
  }

  if (block69.is_used()) {
    Bind(&block69);
    Print("assert \'TestOrAnd1(true, false, false)\' failed at ../../test/torque/test-torque.tq:528:");
    Unreachable();
  }

  if (block68.is_used()) {
    Bind(&block68);
    TNode<BoolT> tmp145;
    USE(tmp145);
    tmp145 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp146;
    USE(tmp146);
    tmp146 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp148;
    USE(tmp148);
    tmp148 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp145}, TNode<BoolT>{tmp146}, TNode<BoolT>{tmp147}));
    Branch(tmp148, &block70, &block71);
  }

  if (block71.is_used()) {
    Bind(&block71);
    Print("assert \'TestOrAnd2(true, false, false)\' failed at ../../test/torque/test-torque.tq:529:");
    Unreachable();
  }

  if (block70.is_used()) {
    Bind(&block70);
    TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp150;
    USE(tmp150);
    tmp150 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp152;
    USE(tmp152);
    tmp152 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp149}, TNode<BoolT>{tmp150}, TNode<BoolT>{tmp151}));
    Branch(tmp152, &block72, &block73);
  }

  if (block73.is_used()) {
    Bind(&block73);
    Print("assert \'TestOrAnd3(true, false, false)\' failed at ../../test/torque/test-torque.tq:530:");
    Unreachable();
  }

  if (block72.is_used()) {
    Bind(&block72);
    TNode<BoolT> tmp153;
    USE(tmp153);
    tmp153 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp154;
    USE(tmp154);
    tmp154 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp155;
    USE(tmp155);
    tmp155 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp156;
    USE(tmp156);
    tmp156 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp153}, TNode<BoolT>{tmp154}, TNode<BoolT>{tmp155}));
    Branch(tmp156, &block74, &block75);
  }

  if (block75.is_used()) {
    Bind(&block75);
    Print("assert \'TestOrAnd1(false, true, true)\' failed at ../../test/torque/test-torque.tq:531:");
    Unreachable();
  }

  if (block74.is_used()) {
    Bind(&block74);
    TNode<BoolT> tmp157;
    USE(tmp157);
    tmp157 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp158;
    USE(tmp158);
    tmp158 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp159;
    USE(tmp159);
    tmp159 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp160;
    USE(tmp160);
    tmp160 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp157}, TNode<BoolT>{tmp158}, TNode<BoolT>{tmp159}));
    Branch(tmp160, &block76, &block77);
  }

  if (block77.is_used()) {
    Bind(&block77);
    Print("assert \'TestOrAnd2(false, true, true)\' failed at ../../test/torque/test-torque.tq:532:");
    Unreachable();
  }

  if (block76.is_used()) {
    Bind(&block76);
    TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp162;
    USE(tmp162);
    tmp162 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp163;
    USE(tmp163);
    tmp163 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp161}, TNode<BoolT>{tmp162}, TNode<BoolT>{tmp163}));
    Branch(tmp164, &block78, &block79);
  }

  if (block79.is_used()) {
    Bind(&block79);
    Print("assert \'TestOrAnd3(false, true, true)\' failed at ../../test/torque/test-torque.tq:533:");
    Unreachable();
  }

  if (block78.is_used()) {
    Bind(&block78);
    TNode<BoolT> tmp165;
    USE(tmp165);
    tmp165 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp166;
    USE(tmp166);
    tmp166 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp167;
    USE(tmp167);
    tmp167 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp168;
    USE(tmp168);
    tmp168 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp165}, TNode<BoolT>{tmp166}, TNode<BoolT>{tmp167}));
    TNode<BoolT> tmp169;
    USE(tmp169);
    tmp169 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp168}));
    Branch(tmp169, &block80, &block81);
  }

  if (block81.is_used()) {
    Bind(&block81);
    Print("assert \'!TestOrAnd1(false, true, false)\' failed at ../../test/torque/test-torque.tq:534:");
    Unreachable();
  }

  if (block80.is_used()) {
    Bind(&block80);
    TNode<BoolT> tmp170;
    USE(tmp170);
    tmp170 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp171;
    USE(tmp171);
    tmp171 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp172;
    USE(tmp172);
    tmp172 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp173;
    USE(tmp173);
    tmp173 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp170}, TNode<BoolT>{tmp171}, TNode<BoolT>{tmp172}));
    TNode<BoolT> tmp174;
    USE(tmp174);
    tmp174 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp173}));
    Branch(tmp174, &block82, &block83);
  }

  if (block83.is_used()) {
    Bind(&block83);
    Print("assert \'!TestOrAnd2(false, true, false)\' failed at ../../test/torque/test-torque.tq:535:");
    Unreachable();
  }

  if (block82.is_used()) {
    Bind(&block82);
    TNode<BoolT> tmp175;
    USE(tmp175);
    tmp175 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp176;
    USE(tmp176);
    tmp176 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp177;
    USE(tmp177);
    tmp177 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp175}, TNode<BoolT>{tmp176}, TNode<BoolT>{tmp177}));
    TNode<BoolT> tmp179;
    USE(tmp179);
    tmp179 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp178}));
    Branch(tmp179, &block84, &block85);
  }

  if (block85.is_used()) {
    Bind(&block85);
    Print("assert \'!TestOrAnd3(false, true, false)\' failed at ../../test/torque/test-torque.tq:536:");
    Unreachable();
  }

  if (block84.is_used()) {
    Bind(&block84);
    TNode<BoolT> tmp180;
    USE(tmp180);
    tmp180 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp181;
    USE(tmp181);
    tmp181 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp182;
    USE(tmp182);
    tmp182 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp183;
    USE(tmp183);
    tmp183 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp180}, TNode<BoolT>{tmp181}, TNode<BoolT>{tmp182}));
    TNode<BoolT> tmp184;
    USE(tmp184);
    tmp184 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp183}));
    Branch(tmp184, &block86, &block87);
  }

  if (block87.is_used()) {
    Bind(&block87);
    Print("assert \'!TestOrAnd1(false, false, true)\' failed at ../../test/torque/test-torque.tq:537:");
    Unreachable();
  }

  if (block86.is_used()) {
    Bind(&block86);
    TNode<BoolT> tmp185;
    USE(tmp185);
    tmp185 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp186;
    USE(tmp186);
    tmp186 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp187;
    USE(tmp187);
    tmp187 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp188;
    USE(tmp188);
    tmp188 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp185}, TNode<BoolT>{tmp186}, TNode<BoolT>{tmp187}));
    TNode<BoolT> tmp189;
    USE(tmp189);
    tmp189 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp188}));
    Branch(tmp189, &block88, &block89);
  }

  if (block89.is_used()) {
    Bind(&block89);
    Print("assert \'!TestOrAnd2(false, false, true)\' failed at ../../test/torque/test-torque.tq:538:");
    Unreachable();
  }

  if (block88.is_used()) {
    Bind(&block88);
    TNode<BoolT> tmp190;
    USE(tmp190);
    tmp190 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp191;
    USE(tmp191);
    tmp191 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp192;
    USE(tmp192);
    tmp192 = UncheckedCast<BoolT>(FromConstexpr6ATbool(true));
    TNode<BoolT> tmp193;
    USE(tmp193);
    tmp193 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp190}, TNode<BoolT>{tmp191}, TNode<BoolT>{tmp192}));
    TNode<BoolT> tmp194;
    USE(tmp194);
    tmp194 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp193}));
    Branch(tmp194, &block90, &block91);
  }

  if (block91.is_used()) {
    Bind(&block91);
    Print("assert \'!TestOrAnd3(false, false, true)\' failed at ../../test/torque/test-torque.tq:539:");
    Unreachable();
  }

  if (block90.is_used()) {
    Bind(&block90);
    TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp196;
    USE(tmp196);
    tmp196 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp197;
    USE(tmp197);
    tmp197 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp198;
    USE(tmp198);
    tmp198 = UncheckedCast<BoolT>(TestOrAnd1(TNode<BoolT>{tmp195}, TNode<BoolT>{tmp196}, TNode<BoolT>{tmp197}));
    TNode<BoolT> tmp199;
    USE(tmp199);
    tmp199 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp198}));
    Branch(tmp199, &block92, &block93);
  }

  if (block93.is_used()) {
    Bind(&block93);
    Print("assert \'!TestOrAnd1(false, false, false)\' failed at ../../test/torque/test-torque.tq:540:");
    Unreachable();
  }

  if (block92.is_used()) {
    Bind(&block92);
    TNode<BoolT> tmp200;
    USE(tmp200);
    tmp200 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp201;
    USE(tmp201);
    tmp201 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp202;
    USE(tmp202);
    tmp202 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp203;
    USE(tmp203);
    tmp203 = UncheckedCast<BoolT>(TestOrAnd2(TNode<BoolT>{tmp200}, TNode<BoolT>{tmp201}, TNode<BoolT>{tmp202}));
    TNode<BoolT> tmp204;
    USE(tmp204);
    tmp204 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp203}));
    Branch(tmp204, &block94, &block95);
  }

  if (block95.is_used()) {
    Bind(&block95);
    Print("assert \'!TestOrAnd2(false, false, false)\' failed at ../../test/torque/test-torque.tq:541:");
    Unreachable();
  }

  if (block94.is_used()) {
    Bind(&block94);
    TNode<BoolT> tmp205;
    USE(tmp205);
    tmp205 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp206;
    USE(tmp206);
    tmp206 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp207;
    USE(tmp207);
    tmp207 = UncheckedCast<BoolT>(FromConstexpr6ATbool(false));
    TNode<BoolT> tmp208;
    USE(tmp208);
    tmp208 = UncheckedCast<BoolT>(TestOrAnd3(TNode<BoolT>{tmp205}, TNode<BoolT>{tmp206}, TNode<BoolT>{tmp207}));
    TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = UncheckedCast<BoolT>(Word32BinaryNot(TNode<BoolT>{tmp208}));
    Branch(tmp209, &block96, &block97);
  }

  if (block97.is_used()) {
    Bind(&block97);
    Print("assert \'!TestOrAnd3(false, false, false)\' failed at ../../test/torque/test-torque.tq:542:");
    Unreachable();
  }

  if (block96.is_used()) {
    Bind(&block96);
    Goto(&block1);
  }

    Bind(&block1);
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestCall(TNode<Smi> p_i, Label* label_A) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1}));
    Branch(tmp2, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp3;
    Bind(&block3, &tmp3);
    Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp4;
    Bind(&block4, &tmp4);
    Goto(&block1);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_A);
  }

    TNode<Smi> tmp5;
    Bind(&block2, &tmp5);
  return TNode<Smi>{tmp5};
}

void TestBuiltinsFromDSLAssembler::TestOtherwiseWithCode1() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<Smi> tmp3;
    USE(tmp3);
    Label label0(this);
    tmp3 = TestCall(TNode<Smi>{tmp2}, &label0);
    Goto(&block6, tmp0, tmp1, tmp3);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block7, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    Bind(&block7, &tmp4, &tmp5);
    Goto(&block5, tmp4, tmp5);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    Bind(&block6, &tmp6, &tmp7, &tmp8);
    Goto(&block4, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    Bind(&block5, &tmp9, &tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp10}, TNode<Smi>{tmp11}));
    Goto(&block3, tmp9, tmp12, tmp12);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    Bind(&block4, &tmp13, &tmp14, &tmp15);
    Goto(&block2, tmp13, tmp14);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    Bind(&block3, &tmp16, &tmp17, &tmp18);
    Goto(&block2, tmp18, tmp17);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    Bind(&block2, &tmp19, &tmp20);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestOtherwiseWithCode2() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4}));
    Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    Bind(&block2, &tmp6, &tmp7);
    TNode<Smi> tmp8;
    USE(tmp8);
    Label label0(this);
    tmp8 = TestCall(TNode<Smi>{tmp7}, &label0);
    Goto(&block8, tmp6, tmp7, tmp7, tmp8);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp6, tmp7, tmp7);
    }
  }

  if (block9.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    Bind(&block9, &tmp9, &tmp10, &tmp11);
    Goto(&block7, tmp9, tmp10);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15);
    Goto(&block6, tmp12, tmp13, tmp15);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    Bind(&block7, &tmp16, &tmp17);
    Goto(&block3, tmp16, tmp17);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    Bind(&block6, &tmp18, &tmp19, &tmp20);
    TNode<Smi> tmp21;
    USE(tmp21);
    tmp21 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp22;
    USE(tmp22);
    tmp22 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp18}, TNode<Smi>{tmp21}));
    Goto(&block5, tmp22, tmp19);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    Bind(&block5, &tmp23, &tmp24);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp24}, TNode<Smi>{tmp25}));
    Goto(&block4, tmp23, tmp26);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp27;
    TNode<Smi> tmp28;
    Bind(&block3, &tmp27, &tmp28);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestOtherwiseWithCode3() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi, Smi> block9(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi, Smi, Smi> block8(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi> block7(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi, Smi, Smi> block6(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi, Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(0));
    Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    Bind(&block4, &tmp2, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = UncheckedCast<Smi>(FromConstexpr5ATSmi(10));
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = UncheckedCast<BoolT>(SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4}));
    Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    Bind(&block2, &tmp6, &tmp7);
    TNode<Smi> tmp8;
    USE(tmp8);
    Label label0(this);
    tmp8 = TestCall(TNode<Smi>{tmp7}, &label0);
    Goto(&block8, tmp6, tmp7, tmp6, tmp7, tmp8);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block9, tmp6, tmp7, tmp6, tmp7);
    }
  }

  if (block9.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    TNode<Smi> tmp12;
    Bind(&block9, &tmp9, &tmp10, &tmp11, &tmp12);
    Goto(&block7, tmp9, tmp10, tmp11);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    Bind(&block8, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    Goto(&block6, tmp13, tmp14, tmp15, tmp17);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    Bind(&block7, &tmp18, &tmp19, &tmp20);
    Goto(&block3, tmp18, tmp19);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp23}, TNode<Smi>{tmp24}));
    Goto(&block5, tmp25, tmp22);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    Bind(&block5, &tmp26, &tmp27);
    TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp29;
    USE(tmp29);
    tmp29 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp27}, TNode<Smi>{tmp28}));
    Goto(&block4, tmp26, tmp29);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp30;
    TNode<Smi> tmp31;
    Bind(&block3, &tmp30, &tmp31);
    Goto(&block1);
  }

    Bind(&block1);
}

void TestBuiltinsFromDSLAssembler::TestForwardLabel() {
  PLabel<> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0);

  if (block0.is_used()) {
    Bind(&block0);
    Goto(&block5);
  }

  if (block5.is_used()) {
    Bind(&block5);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = UncheckedCast<Smi>(FromConstexpr5ATSmi(5));
    Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp1;
    Bind(&block3, &tmp1);
    Goto(&block2, tmp1);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp2;
    Bind(&block2, &tmp2);
    Goto(&block1);
  }

    Bind(&block1);
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(parameter1);
  PLabel<Context, Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    Bind(&block0, &tmp0, &tmp1);
    TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null();
    Return(tmp2);
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_param);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined();
    Goto(&block1, tmp1);
  }

    TNode<Object> tmp2;
    Bind(&block1, &tmp2);
  return TNode<Object>{tmp2};
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block2(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_param);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined();
    Goto(&block2, tmp1);
  }

  if (block1.is_used()) {
    Bind(&block1);
    Goto(label_X);
  }

    TNode<Object> tmp2;
    Bind(&block2, &tmp2);
  return TNode<Object>{tmp2};
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(TNode<Object> p_x) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, Object> block5(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object, Object, Smi> block4(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object, Object> block3(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    Label label0(this);
    tmp1 = Cast5ATSmi(TNode<Object>{tmp0}, &label0);
    Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      Bind(&label0);
      Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    Bind(&block5, &tmp2, &tmp3, &tmp4);
    Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<Smi> tmp8;
    Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp8}, TNode<Smi>{tmp9}));
    Goto(&block1, tmp10);
  }

  if (block3.is_used()) {
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    Bind(&block3, &tmp11, &tmp12);
    Goto(&block1, UncheckedCast<HeapObject>(tmp12));
  }

    TNode<Object> tmp13;
    Bind(&block1, &tmp13);
  return TNode<Object>{tmp13};
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::ExampleGenericOverload5ATSmi(TNode<Smi> p_o) {
  PLabel<Smi> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Smi> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    Bind(&block0, &tmp0);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = UncheckedCast<Smi>(FromConstexpr5ATSmi(1));
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = UncheckedCast<Smi>(SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp1}));
    Goto(&block1, tmp2);
  }

    TNode<Smi> tmp3;
    Bind(&block1, &tmp3);
  return TNode<Smi>{tmp3};
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  PLabel<Object> block0(this, compiler::CodeAssemblerLabel::kNonDeferred);
  PLabel<Object> block1(this, compiler::CodeAssemblerLabel::kNonDeferred);
    Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    Bind(&block0, &tmp0);
    Goto(&block1, tmp0);
  }

    TNode<Object> tmp1;
    Bind(&block1, &tmp1);
  return TNode<Object>{tmp1};
}

}  // namespace internal
}  // namespace v8

