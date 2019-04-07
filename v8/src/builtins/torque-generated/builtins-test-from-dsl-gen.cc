#include "src/builtins/builtins-test-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper1(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_347_impl);
  auto _return_347 = &_return_347_impl;
  USE(_return_347);
  Label label_macro_end_753_impl(this, {_return_347});
  Label* label_macro_end_753 = &label_macro_end_753_impl;
  USE(label_macro_end_753);
  // ../../test/torque/test-torque.tq:6:68
  {
    // ../../test/torque/test-torque.tq:7:4
    {
      Label label__False_384_impl(this);
      Label* label__False_384 = &label__False_384_impl;
      USE(label__False_384);
      bool t1645 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
      USE(t1645);
      bool t1646 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
      USE(t1646);
      if (((t1645 || t1646))) {
        // ../../test/torque/test-torque.tq:7:72
        {
          // ../../test/torque/test-torque.tq:8:8
          TNode<BoolT> t1647 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
          *_return_347 = t1647;
          Goto(label_macro_end_753);
        }
      } else {
        // ../../test/torque/test-torque.tq:10:9
        {
          // ../../test/torque/test-torque.tq:11:6
          TNode<BoolT> t1648 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
          *_return_347 = t1648;
          Goto(label_macro_end_753);
        }
      }
    }
  }
  BIND(label_macro_end_753);
  return (*_return_347).value();
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_348_impl);
  auto _return_348 = &_return_348_impl;
  USE(_return_348);
  Label label_macro_end_754_impl(this, {_return_348});
  Label* label_macro_end_754 = &label_macro_end_754_impl;
  USE(label_macro_end_754);
  // ../../test/torque/test-torque.tq:15:68
  {
    // ../../test/torque/test-torque.tq:16:4
    Label label__False_385_impl(this);
    Label* label__False_385 = &label__False_385_impl;
    USE(label__False_385);
    bool t1649 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
    USE(t1649);
    bool t1650 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
    USE(t1650);
    TNode<BoolT> t1651 = UncheckedCast<BoolT>(from_constexpr6ATbool((t1649 || t1650)));
    *_return_348 = t1651;
    Goto(label_macro_end_754);
  }
  BIND(label_macro_end_754);
  return (*_return_348).value();
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return_349_impl;
  auto _return_349 = &_return_349_impl;
  USE(_return_349);
  Label label_macro_end_755_impl(this, {});
  Label* label_macro_end_755 = &label_macro_end_755_impl;
  USE(label_macro_end_755);
  // ../../test/torque/test-torque.tq:19:78
  {
    // ../../test/torque/test-torque.tq:20:4
    Label label__False_386_impl(this);
    Label* label__False_386 = &label__False_386_impl;
    USE(label__False_386);
    bool t1652 = ElementsKindEqual(p_kind, UINT8_ELEMENTS);
    USE(t1652);
    bool t1653 = ElementsKindEqual(p_kind, UINT16_ELEMENTS);
    USE(t1653);
    *_return_349 = (t1652 || t1653);
    Goto(label_macro_end_755);
  }
  BIND(label_macro_end_755);
  return (*_return_349);
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_387) {
  Label label_macro_end_756_impl(this, {});
  Label* label_macro_end_756 = &label_macro_end_756_impl;
  USE(label_macro_end_756);
  // ../../test/torque/test-torque.tq:24:16
  {
    // ../../test/torque/test-torque.tq:25:4
    Goto(label_Label1_387);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_388, TVariable<Smi>* Label20_350) {
  Label label_macro_end_757_impl(this, {});
  Label* label_macro_end_757 = &label_macro_end_757_impl;
  USE(label_macro_end_757);
  // ../../test/torque/test-torque.tq:29:21
  {
    // ../../test/torque/test-torque.tq:30:4
    int31_t t1654 = 42;
    TNode<Smi> t1655 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1654));
    *Label20_350 = t1655;
    Goto(label_Label2_388);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_389, TVariable<String>* Label30_351, TVariable<Smi>* Label31_352) {
  Label label_macro_end_758_impl(this, {});
  Label* label_macro_end_758 = &label_macro_end_758_impl;
  USE(label_macro_end_758);
  // ../../test/torque/test-torque.tq:34:29
  {
    // ../../test/torque/test-torque.tq:35:4
    const char* t1656 = "foo";
    TNode<String> t1657 = UncheckedCast<String>(from_constexpr8ATString(t1656));
    *Label30_351 = t1657;
    int31_t t1658 = 7;
    TNode<Smi> t1659 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1658));
    *Label31_352 = t1659;
    Goto(label_Label3_389);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_759_impl(this, {});
  Label* label_macro_end_759 = &label_macro_end_759_impl;
  USE(label_macro_end_759);
  // ../../test/torque/test-torque.tq:38:25
  {
    // ../../test/torque/test-torque.tq:39:4
    Label label__True_390_impl(this);
    Label* label__True_390 = &label__True_390_impl;
    USE(label__True_390);
    Label label__False_391_impl(this);
    Label* label__False_391 = &label__False_391_impl;
    USE(label__False_391);
    bool t1660 = IsFastElementsKind(PACKED_SMI_ELEMENTS);
    USE(t1660);
    TNode<BoolT> t1661 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1660));
    USE(t1661);
    Branch(t1661, label__True_390, label__False_391);
    BIND(label__False_391);
    Print("assert 'from_constexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed at ../../test/torque/test-torque.tq:39:4");
    Unreachable();
    BIND(label__True_390);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_760_impl(this, {});
  Label* label_macro_end_760 = &label_macro_end_760_impl;
  USE(label_macro_end_760);
  // ../../test/torque/test-torque.tq:42:26
  {
    // ../../test/torque/test-torque.tq:43:4
    Label label__True_392_impl(this);
    Label* label__True_392 = &label__True_392_impl;
    USE(label__True_392);
    Label label__False_393_impl(this);
    Label* label__False_393 = &label__False_393_impl;
    USE(label__False_393);
    TNode<BoolT> t1662 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT8_ELEMENTS));
    USE(t1662);
    Branch(t1662, label__True_392, label__False_393);
    BIND(label__False_393);
    Print("assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed at ../../test/torque/test-torque.tq:43:4");
    Unreachable();
    BIND(label__True_392);
    // ../../test/torque/test-torque.tq:44:4
    Label label__True_394_impl(this);
    Label* label__True_394 = &label__True_394_impl;
    USE(label__True_394);
    Label label__False_395_impl(this);
    Label* label__False_395 = &label__False_395_impl;
    USE(label__False_395);
    TNode<BoolT> t1663 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT16_ELEMENTS));
    USE(t1663);
    Branch(t1663, label__True_394, label__False_395);
    BIND(label__False_395);
    Print("assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed at ../../test/torque/test-torque.tq:44:4");
    Unreachable();
    BIND(label__True_394);
    // ../../test/torque/test-torque.tq:45:4
    Label label__True_396_impl(this);
    Label* label__True_396 = &label__True_396_impl;
    USE(label__True_396);
    Label label__False_397_impl(this);
    Label* label__False_397 = &label__False_397_impl;
    USE(label__False_397);
    TNode<BoolT> t1664 = UncheckedCast<BoolT>(ElementsKindTestHelper1(UINT32_ELEMENTS));
    USE(t1664);
    TNode<BoolT> t1665 = UncheckedCast<BoolT>(Word32BinaryNot(t1664));
    USE(t1665);
    Branch(t1665, label__True_396, label__False_397);
    BIND(label__False_397);
    Print("assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed at ../../test/torque/test-torque.tq:45:4");
    Unreachable();
    BIND(label__True_396);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_761_impl(this, {});
  Label* label_macro_end_761 = &label_macro_end_761_impl;
  USE(label_macro_end_761);
  // ../../test/torque/test-torque.tq:48:30
  {
    // ../../test/torque/test-torque.tq:49:4
    Label label__True_398_impl(this);
    Label* label__True_398 = &label__True_398_impl;
    USE(label__True_398);
    Label label__False_399_impl(this);
    Label* label__False_399 = &label__False_399_impl;
    USE(label__False_399);
    bool t1666 = ElementsKindTestHelper3(UINT8_ELEMENTS);
    USE(t1666);
    TNode<BoolT> t1667 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1666));
    USE(t1667);
    Branch(t1667, label__True_398, label__False_399);
    BIND(label__False_399);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))' failed at ../../test/torque/test-torque.tq:49:4");
    Unreachable();
    BIND(label__True_398);
    // ../../test/torque/test-torque.tq:50:4
    Label label__True_400_impl(this);
    Label* label__True_400 = &label__True_400_impl;
    USE(label__True_400);
    Label label__False_401_impl(this);
    Label* label__False_401 = &label__False_401_impl;
    USE(label__False_401);
    bool t1668 = ElementsKindTestHelper3(UINT16_ELEMENTS);
    USE(t1668);
    TNode<BoolT> t1669 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1668));
    USE(t1669);
    Branch(t1669, label__True_400, label__False_401);
    BIND(label__False_401);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))' failed at ../../test/torque/test-torque.tq:50:4");
    Unreachable();
    BIND(label__True_400);
    // ../../test/torque/test-torque.tq:51:4
    Label label__True_402_impl(this);
    Label* label__True_402 = &label__True_402_impl;
    USE(label__True_402);
    Label label__False_403_impl(this);
    Label* label__False_403 = &label__False_403_impl;
    USE(label__False_403);
    bool t1670 = ElementsKindTestHelper3(UINT32_ELEMENTS);
    USE(t1670);
    TNode<BoolT> t1671 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1670));
    USE(t1671);
    TNode<BoolT> t1672 = UncheckedCast<BoolT>(Word32BinaryNot(t1671));
    USE(t1672);
    Branch(t1672, label__True_402, label__False_403);
    BIND(label__False_403);
    Print("assert '!from_constexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:51:4");
    Unreachable();
    BIND(label__True_402);
    // ../../test/torque/test-torque.tq:52:4
    Label label__True_404_impl(this);
    Label* label__True_404 = &label__True_404_impl;
    USE(label__True_404);
    Label label__False_405_impl(this);
    Label* label__False_405 = &label__False_405_impl;
    USE(label__False_405);
    bool t1673 = ElementsKindTestHelper3(UINT32_ELEMENTS);
    USE(t1673);
    bool t1674 = ConstexprBoolNot(t1673);
    USE(t1674);
    TNode<BoolT> t1675 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1674));
    USE(t1675);
    Branch(t1675, label__True_404, label__False_405);
    BIND(label__False_405);
    Print("assert 'from_constexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:52:4");
    Unreachable();
    BIND(label__True_404);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  TVARIABLE(Oddball, _return_353_impl);
  auto _return_353 = &_return_353_impl;
  USE(_return_353);
  Label label_macro_end_762_impl(this, {_return_353});
  Label* label_macro_end_762 = &label_macro_end_762_impl;
  USE(label_macro_end_762);
  // ../../test/torque/test-torque.tq:55:33
  {
    // ../../test/torque/test-torque.tq:56:4
    {
      Label label_try_done_639_763_impl(this);
      Label* label_try_done_639_763 = &label_try_done_639_763_impl;
      USE(label_try_done_639_763);
      Label label_Label1_406_impl(this);
      Label* label_Label1_406 = &label_Label1_406_impl;
      USE(label_Label1_406);
      Label label_try_begin_640_764_impl(this);
      Label* label_try_begin_640_764 = &label_try_begin_640_764_impl;
      USE(label_try_begin_640_764);
      Goto(label_try_begin_640_764);
      if (label_try_begin_640_764->is_used())
      {
        BIND(label_try_begin_640_764);
        // ../../test/torque/test-torque.tq:56:8
        {
          // ../../test/torque/test-torque.tq:57:6
          LabelTestHelper1(label_Label1_406);
        }
      }
      if (label_Label1_406->is_used())
      {
        BIND(label_Label1_406);
        // ../../test/torque/test-torque.tq:59:17
        {
          // ../../test/torque/test-torque.tq:60:6
          *_return_353 = True();
          Goto(label_macro_end_762);
        }
      }
    }
  }
  BIND(label_macro_end_762);
  return (*_return_353).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  TVARIABLE(Oddball, _return_354_impl);
  auto _return_354 = &_return_354_impl;
  USE(_return_354);
  Label label_macro_end_765_impl(this, {_return_354});
  Label* label_macro_end_765 = &label_macro_end_765_impl;
  USE(label_macro_end_765);
  // ../../test/torque/test-torque.tq:64:49
  {
    // ../../test/torque/test-torque.tq:65:4
    {
      Label label_try_done_641_766_impl(this);
      Label* label_try_done_641_766 = &label_try_done_641_766_impl;
      USE(label_try_done_641_766);
      Label label_Label2_407_impl(this);
      Label* label_Label2_407 = &label_Label2_407_impl;
      USE(label_Label2_407);
      TVARIABLE(Smi, smi_355_impl);
      auto smi_355 = &smi_355_impl;
      USE(smi_355);
      Label label_try_begin_642_767_impl(this);
      Label* label_try_begin_642_767 = &label_try_begin_642_767_impl;
      USE(label_try_begin_642_767);
      Goto(label_try_begin_642_767);
      if (label_try_begin_642_767->is_used())
      {
        BIND(label_try_begin_642_767);
        // ../../test/torque/test-torque.tq:65:8
        {
          // ../../test/torque/test-torque.tq:66:6
          LabelTestHelper2(label_Label2_407, smi_355);
        }
      }
      if (label_Label2_407->is_used())
      {
        BIND(label_Label2_407);
        // ../../test/torque/test-torque.tq:68:27
        {
          // ../../test/torque/test-torque.tq:69:6
          Label label__True_408_impl(this);
          Label* label__True_408 = &label__True_408_impl;
          USE(label__True_408);
          Label label__False_409_impl(this);
          Label* label__False_409 = &label__False_409_impl;
          USE(label__False_409);
          int31_t t1676 = 42;
          TNode<Smi> t1677 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1676));
          TNode<BoolT> t1678 = UncheckedCast<BoolT>(SmiEqual((*smi_355).value(), t1677));
          USE(t1678);
          Branch(t1678, label__True_408, label__False_409);
          BIND(label__False_409);
          Print("assert 'smi == 42' failed at ../../test/torque/test-torque.tq:69:6");
          Unreachable();
          BIND(label__True_408);
          // ../../test/torque/test-torque.tq:70:6
          *_return_354 = True();
          Goto(label_macro_end_765);
        }
      }
    }
  }
  BIND(label_macro_end_765);
  return (*_return_354).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  TVARIABLE(Oddball, _return_356_impl);
  auto _return_356 = &_return_356_impl;
  USE(_return_356);
  Label label_macro_end_768_impl(this, {_return_356});
  Label* label_macro_end_768 = &label_macro_end_768_impl;
  USE(label_macro_end_768);
  // ../../test/torque/test-torque.tq:74:50
  {
    // ../../test/torque/test-torque.tq:75:4
    {
      Label label_try_done_643_769_impl(this);
      Label* label_try_done_643_769 = &label_try_done_643_769_impl;
      USE(label_try_done_643_769);
      Label label_Label3_410_impl(this);
      Label* label_Label3_410 = &label_Label3_410_impl;
      USE(label_Label3_410);
      TVARIABLE(String, str_357_impl);
      auto str_357 = &str_357_impl;
      USE(str_357);
      TVARIABLE(Smi, smi_358_impl);
      auto smi_358 = &smi_358_impl;
      USE(smi_358);
      Label label_try_begin_644_770_impl(this);
      Label* label_try_begin_644_770 = &label_try_begin_644_770_impl;
      USE(label_try_begin_644_770);
      Goto(label_try_begin_644_770);
      if (label_try_begin_644_770->is_used())
      {
        BIND(label_try_begin_644_770);
        // ../../test/torque/test-torque.tq:75:8
        {
          // ../../test/torque/test-torque.tq:76:6
          LabelTestHelper3(label_Label3_410, str_357, smi_358);
        }
      }
      if (label_Label3_410->is_used())
      {
        BIND(label_Label3_410);
        // ../../test/torque/test-torque.tq:78:40
        {
          // ../../test/torque/test-torque.tq:79:6
          Label label__True_411_impl(this);
          Label* label__True_411 = &label__True_411_impl;
          USE(label__True_411);
          Label label__False_412_impl(this);
          Label* label__False_412 = &label__False_412_impl;
          USE(label__False_412);
          const char* t1679 = "foo";
          TNode<Object> t1680 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t1679));
          TNode<BoolT> t1681 = UncheckedCast<BoolT>(WordEqual((*str_357).value(), t1680));
          USE(t1681);
          Branch(t1681, label__True_411, label__False_412);
          BIND(label__False_412);
          Print("assert 'str == 'foo'' failed at ../../test/torque/test-torque.tq:79:6");
          Unreachable();
          BIND(label__True_411);
          // ../../test/torque/test-torque.tq:80:6
          Label label__True_413_impl(this);
          Label* label__True_413 = &label__True_413_impl;
          USE(label__True_413);
          Label label__False_414_impl(this);
          Label* label__False_414 = &label__False_414_impl;
          USE(label__False_414);
          int31_t t1682 = 7;
          TNode<Smi> t1683 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1682));
          TNode<BoolT> t1684 = UncheckedCast<BoolT>(SmiEqual((*smi_358).value(), t1683));
          USE(t1684);
          Branch(t1684, label__True_413, label__False_414);
          BIND(label__False_414);
          Print("assert 'smi == 7' failed at ../../test/torque/test-torque.tq:80:6");
          Unreachable();
          BIND(label__True_413);
          // ../../test/torque/test-torque.tq:81:6
          *_return_356 = True();
          Goto(label_macro_end_768);
        }
      }
    }
  }
  BIND(label_macro_end_768);
  return (*_return_356).value();
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:89:64
  {
    // ../../test/torque/test-torque.tq:90:4
    Return(p_param);
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_771_impl(this, {});
  Label* label_macro_end_771 = &label_macro_end_771_impl;
  USE(label_macro_end_771);
  // ../../test/torque/test-torque.tq:93:46
  {
    // ../../test/torque/test-torque.tq:94:4
    Label label__True_415_impl(this);
    Label* label__True_415 = &label__True_415_impl;
    USE(label__True_415);
    Label label__False_416_impl(this);
    Label* label__False_416 = &label__False_416_impl;
    USE(label__False_416);
    int31_t t1685 = 0;
    TNode<Smi> t1686 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1685));
    TNode<Object> t1687 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, p_c, t1686));
    USE(t1687);
    TNode<BoolT> t1688 = UncheckedCast<BoolT>(WordEqual(t1687, Null()));
    USE(t1688);
    Branch(t1688, label__True_415, label__False_416);
    BIND(label__False_416);
    Print("assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed at ../../test/torque/test-torque.tq:94:4");
    Unreachable();
    BIND(label__True_415);
    // ../../test/torque/test-torque.tq:95:4
    Label label__True_417_impl(this);
    Label* label__True_417 = &label__True_417_impl;
    USE(label__True_417);
    Label label__False_418_impl(this);
    Label* label__False_418 = &label__False_418_impl;
    USE(label__False_418);
    int31_t t1689 = 1;
    TNode<Smi> t1690 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1689));
    TNode<Object> t1691 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, p_c, t1690));
    USE(t1691);
    TNode<BoolT> t1692 = UncheckedCast<BoolT>(WordEqual(t1691, Null()));
    USE(t1692);
    Branch(t1692, label__True_417, label__False_418);
    BIND(label__False_418);
    Print("assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed at ../../test/torque/test-torque.tq:95:4");
    Unreachable();
    BIND(label__True_417);
    // ../../test/torque/test-torque.tq:96:4
    Label label__True_419_impl(this);
    Label* label__True_419 = &label__True_419_impl;
    USE(label__True_419);
    Label label__False_420_impl(this);
    Label* label__False_420 = &label__False_420_impl;
    USE(label__False_420);
    TNode<Object> t1693 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, p_c, Undefined()));
    USE(t1693);
    TNode<BoolT> t1694 = UncheckedCast<BoolT>(WordEqual(t1693, Undefined()));
    USE(t1694);
    Branch(t1694, label__True_419, label__False_420);
    BIND(label__False_420);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:96:4");
    Unreachable();
    BIND(label__True_419);
    // ../../test/torque/test-torque.tq:97:4
    Label label__True_421_impl(this);
    Label* label__True_421 = &label__True_421_impl;
    USE(label__True_421);
    Label label__False_422_impl(this);
    Label* label__False_422 = &label__False_422_impl;
    USE(label__False_422);
    TNode<Object> t1695 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, p_c, Undefined()));
    USE(t1695);
    TNode<BoolT> t1696 = UncheckedCast<BoolT>(WordEqual(t1695, Undefined()));
    USE(t1696);
    Branch(t1696, label__True_421, label__False_422);
    BIND(label__False_422);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:97:4");
    Unreachable();
    BIND(label__True_421);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_423, Label* label_Label5_424) {
  Label label_macro_end_772_impl(this, {});
  Label* label_macro_end_772 = &label_macro_end_772_impl;
  USE(label_macro_end_772);
  // ../../test/torque/test-torque.tq:100:76
  {
    // ../../test/torque/test-torque.tq:101:4
    {
      if ((p_flag)) {
        // ../../test/torque/test-torque.tq:102:22
        Goto(label_Label4_423);
      } else {
        // ../../test/torque/test-torque.tq:104:6
        Goto(label_Label5_424);
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  TVARIABLE(BoolT, _return_359_impl);
  auto _return_359 = &_return_359_impl;
  USE(_return_359);
  Label label_macro_end_773_impl(this, {_return_359});
  Label* label_macro_end_773 = &label_macro_end_773_impl;
  USE(label_macro_end_773);
  // ../../test/torque/test-torque.tq:107:57
  {
    // ../../test/torque/test-torque.tq:108:4
    {
      Label label_try_done_645_774_impl(this);
      Label* label_try_done_645_774 = &label_try_done_645_774_impl;
      USE(label_try_done_645_774);
      Label label_Label4_427_impl(this);
      Label* label_Label4_427 = &label_Label4_427_impl;
      USE(label_Label4_427);
      Label label_Label5_428_impl(this);
      Label* label_Label5_428 = &label_Label5_428_impl;
      USE(label_Label5_428);
      Label label_try_begin_646_775_impl(this);
      Label* label_try_begin_646_775 = &label_try_begin_646_775_impl;
      USE(label_try_begin_646_775);
      Goto(label_try_begin_646_775);
      if (label_try_begin_646_775->is_used())
      {
        BIND(label_try_begin_646_775);
        // ../../test/torque/test-torque.tq:108:8
        {
          // ../../test/torque/test-torque.tq:109:6
          LabelTestHelper4(p_flag, label_Label4_427, label_Label5_428);
        }
      }
      if (label_Label4_427->is_used())
      {
        BIND(label_Label4_427);
        // ../../test/torque/test-torque.tq:111:17
        {
          // ../../test/torque/test-torque.tq:112:6
          TNode<BoolT> t1697 = UncheckedCast<BoolT>(from_constexpr6ATbool(true));
          *_return_359 = t1697;
          Goto(label_macro_end_773);
        }
      }
      if (label_Label5_428->is_used())
      {
        BIND(label_Label5_428);
        // ../../test/torque/test-torque.tq:114:17
        {
          // ../../test/torque/test-torque.tq:115:6
          TNode<BoolT> t1698 = UncheckedCast<BoolT>(from_constexpr6ATbool(false));
          *_return_359 = t1698;
          Goto(label_macro_end_773);
        }
      }
    }
  }
  BIND(label_macro_end_773);
  return (*_return_359).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  TVARIABLE(Oddball, _return_360_impl);
  auto _return_360 = &_return_360_impl;
  USE(_return_360);
  Label label_macro_end_776_impl(this, {_return_360});
  Label* label_macro_end_776 = &label_macro_end_776_impl;
  USE(label_macro_end_776);
  // ../../test/torque/test-torque.tq:119:44
  {
    // ../../test/torque/test-torque.tq:120:4
    TNode<BoolT> t1699 = UncheckedCast<BoolT>(CallLabelTestHelper4(true));
    USE(t1699);
    TVARIABLE(BoolT, r1_361_impl);
    auto r1_361 = &r1_361_impl;
    USE(r1_361);
    *r1_361 = t1699;
    // ../../test/torque/test-torque.tq:121:4
    TNode<BoolT> t1700 = UncheckedCast<BoolT>(CallLabelTestHelper4(false));
    USE(t1700);
    TVARIABLE(BoolT, r2_362_impl);
    auto r2_362 = &r2_362_impl;
    USE(r2_362);
    *r2_362 = t1700;
    // ../../test/torque/test-torque.tq:123:4
    {
      Label label__True_429_impl(this);
      Label* label__True_429 = &label__True_429_impl;
      USE(label__True_429);
      Label label__False_430_impl(this);
      Label* label__False_430 = &label__False_430_impl;
      USE(label__False_430);
      Label label_if_done_label_647_777_impl(this, {});
      Label* label_if_done_label_647_777 = &label_if_done_label_647_777_impl;
      USE(label_if_done_label_647_777);
      Label label__True_431_impl(this);
      Label* label__True_431 = &label__True_431_impl;
      USE(label__True_431);
      GotoIfNot((*r1_361).value(), label__False_430);
      TNode<BoolT> t1701 = UncheckedCast<BoolT>(Word32BinaryNot((*r2_362).value()));
      USE(t1701);
      Branch(t1701, label__True_429, label__False_430);
      if (label__True_429->is_used())
      {
        BIND(label__True_429);
        // ../../test/torque/test-torque.tq:124:6
        *_return_360 = True();
        Goto(label_macro_end_776);
      }
      if (label__False_430->is_used())
      {
        BIND(label__False_430);
        // ../../test/torque/test-torque.tq:126:6
        *_return_360 = False();
        Goto(label_macro_end_776);
      }
    }
  }
  BIND(label_macro_end_776);
  return (*_return_360).value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  TVARIABLE(Object, _return_363_impl);
  auto _return_363 = &_return_363_impl;
  USE(_return_363);
  Label label_macro_end_778_impl(this, {_return_363});
  Label* label_macro_end_778 = &label_macro_end_778_impl;
  USE(label_macro_end_778);
  // ../../test/torque/test-torque.tq:133:51
  {
    // ../../test/torque/test-torque.tq:134:4
    *_return_363 = p_param2;
    Goto(label_macro_end_778);
  }
  BIND(label_macro_end_778);
  return (*_return_363).value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_432) {
  TVARIABLE(Object, _return_364_impl);
  auto _return_364 = &_return_364_impl;
  USE(_return_364);
  Label label_macro_end_779_impl(this, {_return_364});
  Label* label_macro_end_779 = &label_macro_end_779_impl;
  USE(label_macro_end_779);
  // ../../test/torque/test-torque.tq:141:70
  {
    // ../../test/torque/test-torque.tq:142:4
    *_return_364 = p_param2;
    Goto(label_macro_end_779);
  }
  BIND(label_macro_end_779);
  return (*_return_364).value();
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_780_impl(this, {});
  Label* label_macro_end_780 = &label_macro_end_780_impl;
  USE(label_macro_end_780);
  // ../../test/torque/test-torque.tq:145:34
  {
    // ../../test/torque/test-torque.tq:146:4
    {
      Label label_try_done_648_781_impl(this);
      Label* label_try_done_648_781 = &label_try_done_648_781_impl;
      USE(label_try_done_648_781);
      Label label_Fail_433_impl(this);
      Label* label_Fail_433 = &label_Fail_433_impl;
      USE(label_Fail_433);
      Label label_try_begin_649_782_impl(this);
      Label* label_try_begin_649_782 = &label_try_begin_649_782_impl;
      USE(label_try_begin_649_782);
      Goto(label_try_begin_649_782);
      if (label_try_begin_649_782->is_used())
      {
        BIND(label_try_begin_649_782);
        // ../../test/torque/test-torque.tq:146:8
        {
          // ../../test/torque/test-torque.tq:147:6
          Label label__True_434_impl(this);
          Label* label__True_434 = &label__True_434_impl;
          USE(label__True_434);
          Label label__False_435_impl(this);
          Label* label__False_435 = &label__False_435_impl;
          USE(label__False_435);
          int31_t t1702 = 0;
          TNode<Smi> t1703 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1702));
          TNode<Object> t1704 = UncheckedCast<Object>(GenericMacroTest5ATSmi(t1703));
          USE(t1704);
          TNode<BoolT> t1705 = UncheckedCast<BoolT>(WordEqual(t1704, Undefined()));
          USE(t1705);
          Branch(t1705, label__True_434, label__False_435);
          BIND(label__False_435);
          Print("assert 'GenericMacroTest<Smi>(0) == Undefined' failed at ../../test/torque/test-torque.tq:147:6");
          Unreachable();
          BIND(label__True_434);
          // ../../test/torque/test-torque.tq:148:6
          Label label__True_436_impl(this);
          Label* label__True_436 = &label__True_436_impl;
          USE(label__True_436);
          Label label__False_437_impl(this);
          Label* label__False_437 = &label__False_437_impl;
          USE(label__False_437);
          int31_t t1706 = 1;
          TNode<Smi> t1707 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1706));
          TNode<Object> t1708 = UncheckedCast<Object>(GenericMacroTest5ATSmi(t1707));
          USE(t1708);
          TNode<BoolT> t1709 = UncheckedCast<BoolT>(WordEqual(t1708, Undefined()));
          USE(t1709);
          Branch(t1709, label__True_436, label__False_437);
          BIND(label__False_437);
          Print("assert 'GenericMacroTest<Smi>(1) == Undefined' failed at ../../test/torque/test-torque.tq:148:6");
          Unreachable();
          BIND(label__True_436);
          // ../../test/torque/test-torque.tq:149:6
          Label label__True_438_impl(this);
          Label* label__True_438 = &label__True_438_impl;
          USE(label__True_438);
          Label label__False_439_impl(this);
          Label* label__False_439 = &label__False_439_impl;
          USE(label__False_439);
          TNode<Object> t1710 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(Null()));
          USE(t1710);
          TNode<BoolT> t1711 = UncheckedCast<BoolT>(WordEqual(t1710, Null()));
          USE(t1711);
          Branch(t1711, label__True_438, label__False_439);
          BIND(label__False_439);
          Print("assert 'GenericMacroTest<Object>(Null) == Null' failed at ../../test/torque/test-torque.tq:149:6");
          Unreachable();
          BIND(label__True_438);
          // ../../test/torque/test-torque.tq:150:6
          Label label__True_440_impl(this);
          Label* label__True_440 = &label__True_440_impl;
          USE(label__True_440);
          Label label__False_441_impl(this);
          Label* label__False_441 = &label__False_441_impl;
          USE(label__False_441);
          TNode<Object> t1712 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(False()));
          USE(t1712);
          TNode<BoolT> t1713 = UncheckedCast<BoolT>(WordEqual(t1712, False()));
          USE(t1713);
          Branch(t1713, label__True_440, label__False_441);
          BIND(label__False_441);
          Print("assert 'GenericMacroTest<Object>(False) == False' failed at ../../test/torque/test-torque.tq:150:6");
          Unreachable();
          BIND(label__True_440);
          // ../../test/torque/test-torque.tq:151:6
          Label label__True_442_impl(this);
          Label* label__True_442 = &label__True_442_impl;
          USE(label__True_442);
          Label label__False_443_impl(this);
          Label* label__False_443 = &label__False_443_impl;
          USE(label__False_443);
          TNode<Object> t1714 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(True()));
          USE(t1714);
          TNode<BoolT> t1715 = UncheckedCast<BoolT>(WordEqual(t1714, True()));
          USE(t1715);
          Branch(t1715, label__True_442, label__False_443);
          BIND(label__False_443);
          Print("assert 'GenericMacroTest<Object>(True) == True' failed at ../../test/torque/test-torque.tq:151:6");
          Unreachable();
          BIND(label__True_442);
          // ../../test/torque/test-torque.tq:152:6
          Label label__True_444_impl(this);
          Label* label__True_444 = &label__True_444_impl;
          USE(label__True_444);
          Label label__False_445_impl(this);
          Label* label__False_445 = &label__False_445_impl;
          USE(label__False_445);
          int31_t t1716 = 0;
          TNode<Smi> t1717 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1716));
          TNode<Object> t1718 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(t1717, label_Fail_433));
          USE(t1718);
          TNode<BoolT> t1719 = UncheckedCast<BoolT>(WordEqual(t1718, Undefined()));
          USE(t1719);
          Branch(t1719, label__True_444, label__False_445);
          BIND(label__False_445);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:152:6");
          Unreachable();
          BIND(label__True_444);
          // ../../test/torque/test-torque.tq:153:6
          Label label__True_446_impl(this);
          Label* label__True_446 = &label__True_446_impl;
          USE(label__True_446);
          Label label__False_447_impl(this);
          Label* label__False_447 = &label__False_447_impl;
          USE(label__False_447);
          int31_t t1720 = 0;
          TNode<Smi> t1721 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1720));
          TNode<Object> t1722 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(t1721, label_Fail_433));
          USE(t1722);
          TNode<BoolT> t1723 = UncheckedCast<BoolT>(WordEqual(t1722, Undefined()));
          USE(t1723);
          Branch(t1723, label__True_446, label__False_447);
          BIND(label__False_447);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:153:6");
          Unreachable();
          BIND(label__True_446);
          // ../../test/torque/test-torque.tq:154:6
          Label label__True_448_impl(this);
          Label* label__True_448 = &label__True_448_impl;
          USE(label__True_448);
          Label label__False_449_impl(this);
          Label* label__False_449 = &label__False_449_impl;
          USE(label__False_449);
          TNode<Object> t1724 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(Null(), label_Fail_433));
          USE(t1724);
          TNode<BoolT> t1725 = UncheckedCast<BoolT>(WordEqual(t1724, Null()));
          USE(t1725);
          Branch(t1725, label__True_448, label__False_449);
          BIND(label__False_449);
          Print("assert 'GenericMacroTestWithLabels<Object>(Null) otherwise Fail == Null' failed at ../../test/torque/test-torque.tq:154:6");
          Unreachable();
          BIND(label__True_448);
          // ../../test/torque/test-torque.tq:155:6
          Label label__True_450_impl(this);
          Label* label__True_450 = &label__True_450_impl;
          USE(label__True_450);
          Label label__False_451_impl(this);
          Label* label__False_451 = &label__False_451_impl;
          USE(label__False_451);
          TNode<Object> t1726 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(False(), label_Fail_433));
          USE(t1726);
          TNode<BoolT> t1727 = UncheckedCast<BoolT>(WordEqual(t1726, False()));
          USE(t1727);
          Branch(t1727, label__True_450, label__False_451);
          BIND(label__False_451);
          Print("assert 'GenericMacroTestWithLabels<Object>(False) otherwise Fail == False' failed at ../../test/torque/test-torque.tq:155:6");
          Unreachable();
          BIND(label__True_450);
        }
        Goto(label_try_done_648_781);
      }
      if (label_Fail_433->is_used())
      {
        BIND(label_Fail_433);
        // ../../test/torque/test-torque.tq:157:15
        {
          // ../../test/torque/test-torque.tq:158:6
          Unreachable();
        }
      }
      BIND(label_try_done_648_781);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:162:57
  {
    // ../../test/torque/test-torque.tq:163:4
    int31_t t1728 = 1;
    TNode<Smi> t1729 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1728));
    TNode<Smi> t1730 = UncheckedCast<Smi>(SmiAdd(p_x, t1729));
    USE(t1730);
    Return(t1730);
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:165:57
  {
    // ../../test/torque/test-torque.tq:166:4
    int31_t t1731 = 2;
    TNode<Smi> t1732 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1731));
    TNode<Smi> t1733 = UncheckedCast<Smi>(SmiAdd(p_x, t1732));
    USE(t1733);
    Return(t1733);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_365_impl);
  auto _return_365 = &_return_365_impl;
  USE(_return_365);
  Label label_macro_end_783_impl(this, {_return_365});
  Label* label_macro_end_783 = &label_macro_end_783_impl;
  USE(label_macro_end_783);
  // ../../test/torque/test-torque.tq:169:56
  {
    // ../../test/torque/test-torque.tq:170:4
    TVARIABLE(Code, fptr_366_impl);
    auto fptr_366 = &fptr_366_impl;
    USE(fptr_366);
    *fptr_366 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code());
    // ../../test/torque/test-torque.tq:171:4
    Label label__True_452_impl(this);
    Label* label__True_452 = &label__True_452_impl;
    USE(label__True_452);
    Label label__False_453_impl(this);
    Label* label__False_453 = &label__False_453_impl;
    USE(label__False_453);
    int31_t t1734 = 42;
    TNode<Smi> t1735 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1734));
    TNode<Smi> t1736 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), (*fptr_366).value(), p_context, t1735));
    USE(t1736);
    int31_t t1737 = 43;
    TNode<Smi> t1738 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1737));
    TNode<BoolT> t1739 = UncheckedCast<BoolT>(SmiEqual(t1736, t1738));
    USE(t1739);
    Branch(t1739, label__True_452, label__False_453);
    BIND(label__False_453);
    Print("assert 'fptr(context, 42) == 43' failed at ../../test/torque/test-torque.tq:171:4");
    Unreachable();
    BIND(label__True_452);
    // ../../test/torque/test-torque.tq:172:4
    *fptr_366 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code());
    // ../../test/torque/test-torque.tq:173:4
    Label label__True_454_impl(this);
    Label* label__True_454 = &label__True_454_impl;
    USE(label__True_454);
    Label label__False_455_impl(this);
    Label* label__False_455 = &label__False_455_impl;
    USE(label__False_455);
    int31_t t1740 = 42;
    TNode<Smi> t1741 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1740));
    TNode<Smi> t1742 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), (*fptr_366).value(), p_context, t1741));
    USE(t1742);
    int31_t t1743 = 44;
    TNode<Smi> t1744 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1743));
    TNode<BoolT> t1745 = UncheckedCast<BoolT>(SmiEqual(t1742, t1744));
    USE(t1745);
    Branch(t1745, label__True_454, label__False_455);
    BIND(label__False_455);
    Print("assert 'fptr(context, 42) == 44' failed at ../../test/torque/test-torque.tq:173:4");
    Unreachable();
    BIND(label__True_454);
    // ../../test/torque/test-torque.tq:174:4
    *_return_365 = True();
    Goto(label_macro_end_783);
  }
  BIND(label_macro_end_783);
  return (*_return_365).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_367_impl);
  auto _return_367 = &_return_367_impl;
  USE(_return_367);
  Label label_macro_end_784_impl(this, {_return_367});
  Label* label_macro_end_784 = &label_macro_end_784_impl;
  USE(label_macro_end_784);
  // ../../test/torque/test-torque.tq:177:61
  {
    // ../../test/torque/test-torque.tq:178:4
    auto t1746 = [=]() {
      int31_t t1748 = 0;
      return t1748;
    };
    auto t1747 = [=]() {
      int31_t t1749 = 1;
      return t1749;
    };
    TVARIABLE(Int32T, t1750_650_impl);
    auto t1750_650 = &t1750_650_impl;
    USE(t1750_650);
    {
      Label label__True_456_impl(this);
      Label* label__True_456 = &label__True_456_impl;
      USE(label__True_456);
      Label label__False_457_impl(this);
      Label* label__False_457 = &label__False_457_impl;
      USE(label__False_457);
      Label label__done_651_785_impl(this, {t1750_650});
      Label* label__done_651_785 = &label__done_651_785_impl;
      USE(label__done_651_785);
      int31_t t1751 = 42;
      int31_t t1752 = 0;
      bool t1753 = ConstexprInt31Equal(t1751, t1752);
      USE(t1753);
      TNode<BoolT> t1754 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1753));
      USE(t1754);
      Branch(t1754, label__True_456, label__False_457);
      BIND(label__True_456);
            TNode<Int32T> t1755 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1746()));
      *t1750_650 = t1755;
      Goto(label__done_651_785);
      BIND(label__False_457);
            TNode<Int32T> t1756 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1747()));
      *t1750_650 = t1756;
      Goto(label__done_651_785);
      BIND(label__done_651_785);
    }
    TVARIABLE(Int32T, var1_368_impl);
    auto var1_368 = &var1_368_impl;
    USE(var1_368);
    *var1_368 = (*t1750_650).value();
    // ../../test/torque/test-torque.tq:179:4
    auto t1757 = [=]() {
      int31_t t1759 = 1;
      return t1759;
    };
    auto t1758 = [=]() {
      int31_t t1760 = 0;
      return t1760;
    };
    TVARIABLE(Int32T, t1761_652_impl);
    auto t1761_652 = &t1761_652_impl;
    USE(t1761_652);
    {
      Label label__True_458_impl(this);
      Label* label__True_458 = &label__True_458_impl;
      USE(label__True_458);
      Label label__False_459_impl(this);
      Label* label__False_459 = &label__False_459_impl;
      USE(label__False_459);
      Label label__done_653_786_impl(this, {t1761_652});
      Label* label__done_653_786 = &label__done_653_786_impl;
      USE(label__done_653_786);
      int31_t t1762 = 42;
      int31_t t1763 = 0;
      bool t1764 = ConstexprInt31Equal(t1762, t1763);
      USE(t1764);
      TNode<BoolT> t1765 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1764));
      USE(t1765);
      Branch(t1765, label__True_458, label__False_459);
      BIND(label__True_458);
            TNode<Int32T> t1766 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1757()));
      *t1761_652 = t1766;
      Goto(label__done_653_786);
      BIND(label__False_459);
            TNode<Int32T> t1767 = UncheckedCast<Int32T>(from_constexpr7ATint31(t1758()));
      *t1761_652 = t1767;
      Goto(label__done_653_786);
      BIND(label__done_653_786);
    }
    TVARIABLE(Int32T, var2_369_impl);
    auto var2_369 = &var2_369_impl;
    USE(var2_369);
    *var2_369 = (*t1761_652).value();
    // ../../test/torque/test-torque.tq:180:4
    *_return_367 = True();
    Goto(label_macro_end_784);
  }
  BIND(label_macro_end_784);
  return (*_return_367).value();
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  TVARIABLE(Smi, _return_370_impl);
  auto _return_370 = &_return_370_impl;
  USE(_return_370);
  Label label_macro_end_787_impl(this, {_return_370});
  Label* label_macro_end_787 = &label_macro_end_787_impl;
  USE(label_macro_end_787);
  // ../../test/torque/test-torque.tq:183:41
  {
    // ../../test/torque/test-torque.tq:184:4
    auto t1768 = [=]() {
      return true;
    };
    auto t1769 = [=]() {
      return false;
    };
    TVARIABLE(BoolT, t1770_654_impl);
    auto t1770_654 = &t1770_654_impl;
    USE(t1770_654);
    {
      Label label__True_460_impl(this);
      Label* label__True_460 = &label__True_460_impl;
      USE(label__True_460);
      Label label__False_461_impl(this);
      Label* label__False_461 = &label__False_461_impl;
      USE(label__False_461);
      Label label__done_655_788_impl(this, {t1770_654});
      Label* label__done_655_788 = &label__done_655_788_impl;
      USE(label__done_655_788);
      int31_t t1771 = 0;
      TNode<Smi> t1772 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1771));
      TNode<BoolT> t1773 = UncheckedCast<BoolT>(SmiLessThan(p_x, t1772));
      USE(t1773);
      Branch(t1773, label__True_460, label__False_461);
      BIND(label__True_460);
            TNode<BoolT> t1774 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1768()));
      *t1770_654 = t1774;
      Goto(label__done_655_788);
      BIND(label__False_461);
            TNode<BoolT> t1775 = UncheckedCast<BoolT>(from_constexpr6ATbool(t1769()));
      *t1770_654 = t1775;
      Goto(label__done_655_788);
      BIND(label__done_655_788);
    }
    TVARIABLE(BoolT, b_371_impl);
    auto b_371 = &b_371_impl;
    USE(b_371);
    *b_371 = (*t1770_654).value();
    // ../../test/torque/test-torque.tq:185:4
    auto t1776 = [=]() {
      int31_t t1778 = 10;
      TNode<Smi> t1779 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1778));
      TNode<Smi> t1780 = UncheckedCast<Smi>(SmiSub(p_x, t1779));
      USE(t1780);
      return t1780;
    };
    auto t1777 = [=]() {
      int31_t t1781 = 100;
      TNode<Smi> t1782 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1781));
      TNode<Smi> t1783 = UncheckedCast<Smi>(SmiAdd(p_x, t1782));
      USE(t1783);
      return t1783;
    };
    TVARIABLE(Smi, t1784_656_impl);
    auto t1784_656 = &t1784_656_impl;
    USE(t1784_656);
    {
      Label label__True_462_impl(this);
      Label* label__True_462 = &label__True_462_impl;
      USE(label__True_462);
      Label label__False_463_impl(this);
      Label* label__False_463 = &label__False_463_impl;
      USE(label__False_463);
      Label label__done_657_789_impl(this, {t1784_656});
      Label* label__done_657_789 = &label__done_657_789_impl;
      USE(label__done_657_789);
      Branch((*b_371).value(), label__True_462, label__False_463);
      BIND(label__True_462);
            *t1784_656 = t1776();
      Goto(label__done_657_789);
      BIND(label__False_463);
            *t1784_656 = t1777();
      Goto(label__done_657_789);
      BIND(label__done_657_789);
    }
    *_return_370 = (*t1784_656).value();
    Goto(label_macro_end_787);
  }
  BIND(label_macro_end_787);
  return (*_return_370).value();
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_790_impl(this, {});
  Label* label_macro_end_790 = &label_macro_end_790_impl;
  USE(label_macro_end_790);
  // ../../test/torque/test-torque.tq:188:49
  {
    // ../../test/torque/test-torque.tq:189:4
    TVARIABLE(Code, fptr1_372_impl);
    auto fptr1_372 = &fptr1_372_impl;
    USE(fptr1_372);
    *fptr1_372 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code());
    // ../../test/torque/test-torque.tq:190:4
    TVARIABLE(Code, fptr2_373_impl);
    auto fptr2_373 = &fptr2_373_impl;
    USE(fptr2_373);
    *fptr2_373 = HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code());
    // ../../test/torque/test-torque.tq:192:4
    Label label__True_464_impl(this);
    Label* label__True_464 = &label__True_464_impl;
    USE(label__True_464);
    Label label__False_465_impl(this);
    Label* label__False_465 = &label__False_465_impl;
    USE(label__False_465);
    int31_t t1785 = 0;
    TNode<Smi> t1786 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1785));
    TNode<Object> t1787 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), (*fptr1_372).value(), p_c, t1786));
    USE(t1787);
    TNode<BoolT> t1788 = UncheckedCast<BoolT>(WordEqual(t1787, Null()));
    USE(t1788);
    Branch(t1788, label__True_464, label__False_465);
    BIND(label__False_465);
    Print("assert 'fptr1(c, 0) == Null' failed at ../../test/torque/test-torque.tq:192:4");
    Unreachable();
    BIND(label__True_464);
    // ../../test/torque/test-torque.tq:193:4
    Label label__True_466_impl(this);
    Label* label__True_466 = &label__True_466_impl;
    USE(label__True_466);
    Label label__False_467_impl(this);
    Label* label__False_467 = &label__False_467_impl;
    USE(label__False_467);
    int31_t t1789 = 1;
    TNode<Smi> t1790 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1789));
    TNode<Object> t1791 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), (*fptr1_372).value(), p_c, t1790));
    USE(t1791);
    TNode<BoolT> t1792 = UncheckedCast<BoolT>(WordEqual(t1791, Null()));
    USE(t1792);
    Branch(t1792, label__True_466, label__False_467);
    BIND(label__False_467);
    Print("assert 'fptr1(c, 1) == Null' failed at ../../test/torque/test-torque.tq:193:4");
    Unreachable();
    BIND(label__True_466);
    // ../../test/torque/test-torque.tq:194:4
    Label label__True_468_impl(this);
    Label* label__True_468 = &label__True_468_impl;
    USE(label__True_468);
    Label label__False_469_impl(this);
    Label* label__False_469 = &label__False_469_impl;
    USE(label__False_469);
    TNode<Object> t1793 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), (*fptr2_373).value(), p_c, Undefined()));
    USE(t1793);
    TNode<BoolT> t1794 = UncheckedCast<BoolT>(WordEqual(t1793, Undefined()));
    USE(t1794);
    Branch(t1794, label__True_468, label__False_469);
    BIND(label__False_469);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:194:4");
    Unreachable();
    BIND(label__True_468);
    // ../../test/torque/test-torque.tq:195:4
    Label label__True_470_impl(this);
    Label* label__True_470 = &label__True_470_impl;
    USE(label__True_470);
    Label label__False_471_impl(this);
    Label* label__False_471 = &label__False_471_impl;
    USE(label__False_471);
    TNode<Object> t1795 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), (*fptr2_373).value(), p_c, Undefined()));
    USE(t1795);
    TNode<BoolT> t1796 = UncheckedCast<BoolT>(WordEqual(t1795, Undefined()));
    USE(t1796);
    Branch(t1796, label__True_470, label__False_471);
    BIND(label__False_471);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:195:4");
    Unreachable();
    BIND(label__True_470);
  }
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  TVARIABLE(Code, _return_374_impl);
  auto _return_374 = &_return_374_impl;
  USE(_return_374);
  Label label_macro_end_791_impl(this, {_return_374});
  Label* label_macro_end_791 = &label_macro_end_791_impl;
  USE(label_macro_end_791);
  // ../../test/torque/test-torque.tq:199:41
  {
    // ../../test/torque/test-torque.tq:200:4
    *_return_374 = p_x;
    Goto(label_macro_end_791);
  }
  BIND(label_macro_end_791);
  return (*_return_374).value();
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  TVARIABLE(Oddball, _return_375_impl);
  auto _return_375 = &_return_375_impl;
  USE(_return_375);
  Label label_macro_end_792_impl(this, {_return_375});
  Label* label_macro_end_792 = &label_macro_end_792_impl;
  USE(label_macro_end_792);
  // ../../test/torque/test-torque.tq:203:55
  {
    // ../../test/torque/test-torque.tq:204:4
    {
      Label label__True_472_impl(this);
      Label* label__True_472 = &label__True_472_impl;
      USE(label__True_472);
      Label label__False_473_impl(this, {});
      Label* label__False_473 = &label__False_473_impl;
      USE(label__False_473);
      TNode<BoolT> t1797 = UncheckedCast<BoolT>(TaggedIsSmi(p_n));
      USE(t1797);
      Branch(t1797, label__True_472, label__False_473);
      if (label__True_472->is_used())
      {
        BIND(label__True_472);
        // ../../test/torque/test-torque.tq:204:24
        {
          // ../../test/torque/test-torque.tq:205:6
          TNode<Smi> t1798 = UncheckedCast<Smi>(unsafe_cast5ATSmi(p_n));
          USE(t1798);
          TVARIABLE(Smi, m_376_impl);
          auto m_376 = &m_376_impl;
          USE(m_376);
          *m_376 = t1798;
          // ../../test/torque/test-torque.tq:207:6
          Label label__True_474_impl(this);
          Label* label__True_474 = &label__True_474_impl;
          USE(label__True_474);
          Label label__False_475_impl(this);
          Label* label__False_475 = &label__False_475_impl;
          USE(label__False_475);
          TNode<Smi> t1799 = UncheckedCast<Smi>(CallBuiltin(Builtins::kTestHelperPlus1, p_c, (*m_376).value()));
          USE(t1799);
          int31_t t1800 = 11;
          TNode<Smi> t1801 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1800));
          TNode<BoolT> t1802 = UncheckedCast<BoolT>(SmiEqual(t1799, t1801));
          USE(t1802);
          Branch(t1802, label__True_474, label__False_475);
          BIND(label__False_475);
          Print("assert 'TestHelperPlus1(c, m) == 11' failed at ../../test/torque/test-torque.tq:207:6");
          Unreachable();
          BIND(label__True_474);
          // ../../test/torque/test-torque.tq:208:6
          *_return_375 = True();
          Goto(label_macro_end_792);
        }
      }
      BIND(label__False_473);
    }
    // ../../test/torque/test-torque.tq:210:4
    *_return_375 = False();
    Goto(label_macro_end_792);
  }
  BIND(label_macro_end_792);
  return (*_return_375).value();
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  Label label_macro_end_793_impl(this, {});
  Label* label_macro_end_793 = &label_macro_end_793_impl;
  USE(label_macro_end_793);
  // ../../test/torque/test-torque.tq:213:25
  {
    // ../../test/torque/test-torque.tq:214:4
    Label label__True_476_impl(this);
    Label* label__True_476 = &label__True_476_impl;
    USE(label__True_476);
    Label label__False_477_impl(this);
    Label* label__False_477 = &label__False_477_impl;
    USE(label__False_477);
    int31_t t1803 = 0xffff;
    TNode<IntPtrT> t1804 = UncheckedCast<IntPtrT>(convert8ATintptr(t1803));
    USE(t1804);
    int31_t t1805 = 1;
    TNode<IntPtrT> t1806 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1805));
    TNode<IntPtrT> t1807 = UncheckedCast<IntPtrT>(IntPtrAdd(t1804, t1806));
    USE(t1807);
    int31_t t1808 = 0x10000;
    TNode<IntPtrT> t1809 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1808));
    TNode<BoolT> t1810 = UncheckedCast<BoolT>(WordEqual(t1807, t1809));
    USE(t1810);
    Branch(t1810, label__True_476, label__False_477);
    BIND(label__False_477);
    Print("assert 'convert<intptr>(0xffff) + 1 == 0x10000' failed at ../../test/torque/test-torque.tq:214:4");
    Unreachable();
    BIND(label__True_476);
    // ../../test/torque/test-torque.tq:215:4
    Label label__True_478_impl(this);
    Label* label__True_478 = &label__True_478_impl;
    USE(label__True_478);
    Label label__False_479_impl(this);
    Label* label__False_479 = &label__False_479_impl;
    USE(label__False_479);
    int31_t t1811 = -0xffff;
    TNode<IntPtrT> t1812 = UncheckedCast<IntPtrT>(convert8ATintptr(t1811));
    USE(t1812);
    int31_t t1813 = -65535;
    TNode<IntPtrT> t1814 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1813));
    TNode<BoolT> t1815 = UncheckedCast<BoolT>(WordEqual(t1812, t1814));
    USE(t1815);
    Branch(t1815, label__True_478, label__False_479);
    BIND(label__False_479);
    Print("assert 'convert<intptr>(-0xffff) == -65535' failed at ../../test/torque/test-torque.tq:215:4");
    Unreachable();
    BIND(label__True_478);
  }
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  Label label_macro_end_794_impl(this, {});
  Label* label_macro_end_794 = &label_macro_end_794_impl;
  USE(label_macro_end_794);
  // ../../test/torque/test-torque.tq:218:45
  {
    // ../../test/torque/test-torque.tq:219:4
    int32_t t1816 = 0x40000000;
    TVARIABLE(Int32T, x_377_impl);
    auto x_377 = &x_377_impl;
    USE(x_377);
    TNode<Int32T> t1817 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1816));
    *x_377 = t1817;
    // ../../test/torque/test-torque.tq:220:4
    int32_t t1818 = 0x7fffffff;
    TVARIABLE(Int32T, y_378_impl);
    auto y_378 = &y_378_impl;
    USE(y_378);
    TNode<Int32T> t1819 = UncheckedCast<Int32T>(from_constexpr7ATint32(t1818));
    *y_378 = t1819;
  }
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  Label label_macro_end_795_impl(this, {});
  Label* label_macro_end_795 = &label_macro_end_795_impl;
  USE(label_macro_end_795);
  // ../../test/torque/test-torque.tq:223:30
  {
    // ../../test/torque/test-torque.tq:224:4
    int31_t t1820 = 5;
    TVARIABLE(Smi, someVeryLongVariableNameThatWillCauseLineBreaks_379_impl);
    auto someVeryLongVariableNameThatWillCauseLineBreaks_379 = &someVeryLongVariableNameThatWillCauseLineBreaks_379_impl;
    USE(someVeryLongVariableNameThatWillCauseLineBreaks_379);
    TNode<Smi> t1821 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1820));
    *someVeryLongVariableNameThatWillCauseLineBreaks_379 = t1821;
    // ../../test/torque/test-torque.tq:225:4
    Label label__True_480_impl(this);
    Label* label__True_480 = &label__True_480_impl;
    USE(label__True_480);
    Label label__False_481_impl(this);
    Label* label__False_481 = &label__False_481_impl;
    USE(label__False_481);
    Label label__True_482_impl(this);
    Label* label__True_482 = &label__True_482_impl;
    USE(label__True_482);
    int31_t t1822 = 0;
    TNode<Smi> t1823 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1822));
    TNode<BoolT> t1824 = UncheckedCast<BoolT>(SmiGreaterThan((*someVeryLongVariableNameThatWillCauseLineBreaks_379).value(), t1823));
    USE(t1824);
    GotoIfNot(t1824, label__False_481);
    int31_t t1825 = 10;
    TNode<Smi> t1826 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1825));
    TNode<BoolT> t1827 = UncheckedCast<BoolT>(SmiLessThan((*someVeryLongVariableNameThatWillCauseLineBreaks_379).value(), t1826));
    USE(t1827);
    Branch(t1827, label__True_480, label__False_481);
    BIND(label__False_481);
    Print("assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed at ../../test/torque/test-torque.tq:225:4");
    Unreachable();
    BIND(label__True_480);
  }
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  Label label_macro_end_796_impl(this, {});
  Label* label_macro_end_796 = &label_macro_end_796_impl;
  USE(label_macro_end_796);
  // ../../test/torque/test-torque.tq:230:30
  {
    // ../../test/torque/test-torque.tq:231:4
    const char* t1828 = "Hello, World!\n";
    Print(t1828);
  }
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  int31_t t1829 = 5;
  return t1829;
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  int31_t t1830 = 4;
  TNode<IntPtrT> t1831 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1830));
  return t1831;
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  int31_t t1832 = 3;
  TNode<Smi> t1833 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1832));
  return t1833;
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  Label label_macro_end_797_impl(this, {});
  Label* label_macro_end_797 = &label_macro_end_797_impl;
  USE(label_macro_end_797);
  // ../../test/torque/test-torque.tq:238:34
  {
    // ../../test/torque/test-torque.tq:239:4
    Label label__True_483_impl(this);
    Label* label__True_483 = &label__True_483_impl;
    USE(label__True_483);
    Label label__False_484_impl(this);
    Label* label__False_484 = &label__False_484_impl;
    USE(label__False_484);
    int31_t t1834 = 5;
    TNode<Int32T> t1835 = UncheckedCast<Int32T>(Int32Constant(t1834));
    USE(t1835);
    TNode<Int32T> t1836 = UncheckedCast<Int32T>(from_constexpr7ATint32(kConstexprConst()));
    TNode<BoolT> t1837 = UncheckedCast<BoolT>(Word32Equal(t1836, t1835));
    USE(t1837);
    Branch(t1837, label__True_483, label__False_484);
    BIND(label__False_484);
    Print("assert 'kConstexprConst == Int32Constant(5)' failed at ../../test/torque/test-torque.tq:239:4");
    Unreachable();
    BIND(label__True_483);
    // ../../test/torque/test-torque.tq:240:4
    Label label__True_485_impl(this);
    Label* label__True_485 = &label__True_485_impl;
    USE(label__True_485);
    Label label__False_486_impl(this);
    Label* label__False_486 = &label__False_486_impl;
    USE(label__False_486);
    int31_t t1838 = 4;
    TNode<IntPtrT> t1839 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t1838));
    TNode<BoolT> t1840 = UncheckedCast<BoolT>(WordEqual(kIntptrConst(), t1839));
    USE(t1840);
    Branch(t1840, label__True_485, label__False_486);
    BIND(label__False_486);
    Print("assert 'kIntptrConst == 4' failed at ../../test/torque/test-torque.tq:240:4");
    Unreachable();
    BIND(label__True_485);
    // ../../test/torque/test-torque.tq:241:4
    Label label__True_487_impl(this);
    Label* label__True_487 = &label__True_487_impl;
    USE(label__True_487);
    Label label__False_488_impl(this);
    Label* label__False_488 = &label__False_488_impl;
    USE(label__False_488);
    int31_t t1841 = 3;
    TNode<Smi> t1842 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1841));
    TNode<BoolT> t1843 = UncheckedCast<BoolT>(SmiEqual(kSmiConst(), t1842));
    USE(t1843);
    Branch(t1843, label__True_487, label__False_488);
    BIND(label__False_488);
    Print("assert 'kSmiConst == 3' failed at ../../test/torque/test-torque.tq:241:4");
    Unreachable();
    BIND(label__True_487);
  }
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  Label label_macro_end_798_impl(this, {});
  Label* label_macro_end_798 = &label_macro_end_798_impl;
  USE(label_macro_end_798);
  // ../../test/torque/test-torque.tq:244:33
  {
    // ../../test/torque/test-torque.tq:245:4
    int31_t t1844 = 3;
    TNode<Smi> kSmi_380_impl;
    auto kSmi_380 = &kSmi_380_impl;
    USE(kSmi_380);
    TNode<Smi> t1845 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1844));
    *kSmi_380 = t1845;
    // ../../test/torque/test-torque.tq:246:4
    Label label__True_489_impl(this);
    Label* label__True_489 = &label__True_489_impl;
    USE(label__True_489);
    Label label__False_490_impl(this);
    Label* label__False_490 = &label__False_490_impl;
    USE(label__False_490);
    int31_t t1846 = 3;
    TNode<Smi> t1847 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1846));
    TNode<BoolT> t1848 = UncheckedCast<BoolT>(SmiEqual((*kSmi_380), t1847));
    USE(t1848);
    Branch(t1848, label__True_489, label__False_490);
    BIND(label__False_490);
    Print("assert 'kSmi == 3' failed at ../../test/torque/test-torque.tq:246:4");
    Unreachable();
    BIND(label__True_489);
  }
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  TVARIABLE(Smi, _return_381_impl);
  auto _return_381 = &_return_381_impl;
  USE(_return_381);
  Label label_macro_end_799_impl(this, {_return_381});
  Label* label_macro_end_799 = &label_macro_end_799_impl;
  USE(label_macro_end_799);
  // ../../test/torque/test-torque.tq:260:41
  {
    // ../../test/torque/test-torque.tq:261:4
    *_return_381 = p_i.i;
    Goto(label_macro_end_799);
  }
  BIND(label_macro_end_799);
  return (*_return_381).value();
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  TVARIABLE(FixedArray, _return_indexes_383_impl);
  auto _return_indexes_383 = &_return_indexes_383_impl;
  USE(_return_indexes_383);
  TVARIABLE(Smi, _return_i_384_impl);
  auto _return_i_384 = &_return_i_384_impl;
  USE(_return_i_384);
  TVARIABLE(Number, _return_k_385_impl);
  auto _return_k_385 = &_return_k_385_impl;
  USE(_return_k_385);
  Label label_macro_end_800_impl(this, {_return_indexes_383, _return_i_384, _return_k_385});
  Label* label_macro_end_800 = &label_macro_end_800_impl;
  USE(label_macro_end_800);
  // ../../test/torque/test-torque.tq:264:35
  {
    // ../../test/torque/test-torque.tq:265:4
    TNode<FixedArray> t1849 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(kEmptyFixedArray()));
    USE(t1849);
    int31_t t1850 = 27;
    TNode<Smi> t1851 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1850));
    int31_t t1852 = 31;
    TNode<Number> t1853 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1852));
    TestStructA t1854 = {t1849, t1851, t1853};
    *_return_indexes_383 = t1854.indexes;
    *_return_i_384 = t1854.i;
    *_return_k_385 = t1854.k;
    Goto(label_macro_end_800);
  }
  BIND(label_macro_end_800);
  return TestStructA{(*_return_indexes_383).value(), (*_return_i_384).value(), (*_return_k_385).value()};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  TVARIABLE(FixedArray, _return_indexes_387_impl);
  auto _return_indexes_387 = &_return_indexes_387_impl;
  USE(_return_indexes_387);
  TVARIABLE(Smi, _return_i_388_impl);
  auto _return_i_388 = &_return_i_388_impl;
  USE(_return_i_388);
  TVARIABLE(Number, _return_k_389_impl);
  auto _return_k_389 = &_return_k_389_impl;
  USE(_return_k_389);
  Label label_macro_end_801_impl(this, {_return_indexes_387, _return_i_388, _return_k_389});
  Label* label_macro_end_801 = &label_macro_end_801_impl;
  USE(label_macro_end_801);
  // ../../test/torque/test-torque.tq:268:35
  {
    // ../../test/torque/test-torque.tq:269:4
    TNode<FixedArray> t1855 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(kEmptyFixedArray()));
    USE(t1855);
    int31_t t1856 = 13;
    TNode<Smi> t1857 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1856));
    int31_t t1858 = 5;
    TNode<Number> t1859 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1858));
    TestStructA t1860 = {t1855, t1857, t1859};
    TVARIABLE(FixedArray, a_indexes_391_impl);
    auto a_indexes_391 = &a_indexes_391_impl;
    USE(a_indexes_391);
    TVARIABLE(Smi, a_i_392_impl);
    auto a_i_392 = &a_i_392_impl;
    USE(a_i_392);
    TVARIABLE(Number, a_k_393_impl);
    auto a_k_393 = &a_k_393_impl;
    USE(a_k_393);
    *a_indexes_391 = t1860.indexes;
    *a_i_392 = t1860.i;
    *a_k_393 = t1860.k;
    // ../../test/torque/test-torque.tq:271:4
    TVARIABLE(FixedArray, b_indexes_395_impl);
    auto b_indexes_395 = &b_indexes_395_impl;
    USE(b_indexes_395);
    TVARIABLE(Smi, b_i_396_impl);
    auto b_i_396 = &b_i_396_impl;
    USE(b_i_396);
    TVARIABLE(Number, b_k_397_impl);
    auto b_k_397 = &b_k_397_impl;
    USE(b_k_397);
    *b_indexes_395 = (*a_indexes_391).value();
    *b_i_396 = (*a_i_392).value();
    *b_k_397 = (*a_k_393).value();
    // ../../test/torque/test-torque.tq:272:4
    TestStructA t1861 = (TestStruct2());
    USE(t1861);
    TVARIABLE(FixedArray, c_indexes_399_impl);
    auto c_indexes_399 = &c_indexes_399_impl;
    USE(c_indexes_399);
    TVARIABLE(Smi, c_i_400_impl);
    auto c_i_400 = &c_i_400_impl;
    USE(c_i_400);
    TVARIABLE(Number, c_k_401_impl);
    auto c_k_401 = &c_k_401_impl;
    USE(c_k_401);
    *c_indexes_399 = t1861.indexes;
    *c_i_400 = t1861.i;
    *c_k_401 = t1861.k;
    // ../../test/torque/test-torque.tq:273:4
    TNode<Smi> t1862 = UncheckedCast<Smi>(TestStruct1(TestStructA{(*c_indexes_399).value(), (*c_i_400).value(), (*c_k_401).value()}));
    USE(t1862);
    *a_i_392 = t1862;
    // ../../test/torque/test-torque.tq:274:4
    *a_k_393 = (*a_i_392).value();
    // ../../test/torque/test-torque.tq:275:4
    TVARIABLE(FixedArray, d_x_indexes_404_impl);
    auto d_x_indexes_404 = &d_x_indexes_404_impl;
    USE(d_x_indexes_404);
    TVARIABLE(Smi, d_x_i_405_impl);
    auto d_x_i_405 = &d_x_i_405_impl;
    USE(d_x_i_405);
    TVARIABLE(Number, d_x_k_406_impl);
    auto d_x_k_406 = &d_x_k_406_impl;
    USE(d_x_k_406);
    TVARIABLE(Smi, d_y_407_impl);
    auto d_y_407 = &d_y_407_impl;
    USE(d_y_407);
    // ../../test/torque/test-torque.tq:276:4
    *d_x_indexes_404 = (*a_indexes_391).value();
    *d_x_i_405 = (*a_i_392).value();
    *d_x_k_406 = (*a_k_393).value();
    // ../../test/torque/test-torque.tq:277:4
    int31_t t1863 = 7;
    TNode<Smi> t1864 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1863));
    TestStructB t1865 = {TestStructA{(*a_indexes_391).value(), (*a_i_392).value(), (*a_k_393).value()}, t1864};
    *d_x_indexes_404 = t1865.x.indexes;
    *d_x_i_405 = t1865.x.i;
    *d_x_k_406 = t1865.x.k;
    *d_y_407 = t1865.y;
    // ../../test/torque/test-torque.tq:278:4
    TVARIABLE(FixedArray, e_indexes_409_impl);
    auto e_indexes_409 = &e_indexes_409_impl;
    USE(e_indexes_409);
    TVARIABLE(Smi, e_i_410_impl);
    auto e_i_410 = &e_i_410_impl;
    USE(e_i_410);
    TVARIABLE(Number, e_k_411_impl);
    auto e_k_411 = &e_k_411_impl;
    USE(e_k_411);
    *e_indexes_409 = (*d_x_indexes_404).value();
    *e_i_410 = (*d_x_i_405).value();
    *e_k_411 = (*d_x_k_406).value();
    // ../../test/torque/test-torque.tq:279:4
    TNode<FixedArray> t1866 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(kEmptyFixedArray()));
    USE(t1866);
    int31_t t1867 = 27;
    TNode<Smi> t1868 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1867));
    int31_t t1869 = 31;
    TNode<Number> t1870 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t1869));
    TestStructA t1871 = {t1866, t1868, t1870};
    TVARIABLE(Smi, f_412_impl);
    auto f_412 = &f_412_impl;
    USE(f_412);
    *f_412 = t1871.i;
    // ../../test/torque/test-torque.tq:280:4
    TestStructA t1872 = (TestStruct2());
    USE(t1872);
    *f_412 = t1872.i;
    // ../../test/torque/test-torque.tq:281:4
    *_return_indexes_387 = (*a_indexes_391).value();
    *_return_i_388 = (*a_i_392).value();
    *_return_k_389 = (*a_k_393).value();
    Goto(label_macro_end_801);
  }
  BIND(label_macro_end_801);
  return TestStructA{(*_return_indexes_387).value(), (*_return_i_388).value(), (*_return_k_389).value()};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  TVARIABLE(FixedArray, _return_x_indexes_415_impl);
  auto _return_x_indexes_415 = &_return_x_indexes_415_impl;
  USE(_return_x_indexes_415);
  TVARIABLE(Smi, _return_x_i_416_impl);
  auto _return_x_i_416 = &_return_x_i_416_impl;
  USE(_return_x_i_416);
  TVARIABLE(Number, _return_x_k_417_impl);
  auto _return_x_k_417 = &_return_x_k_417_impl;
  USE(_return_x_k_417);
  TVARIABLE(FixedArray, _return_y_indexes_419_impl);
  auto _return_y_indexes_419 = &_return_y_indexes_419_impl;
  USE(_return_y_indexes_419);
  TVARIABLE(Smi, _return_y_i_420_impl);
  auto _return_y_i_420 = &_return_y_i_420_impl;
  USE(_return_y_i_420);
  TVARIABLE(Number, _return_y_k_421_impl);
  auto _return_y_k_421 = &_return_y_k_421_impl;
  USE(_return_y_k_421);
  Label label_macro_end_802_impl(this, {_return_x_indexes_415, _return_x_i_416, _return_x_k_417, _return_y_indexes_419, _return_y_i_420, _return_y_k_421});
  Label* label_macro_end_802 = &label_macro_end_802_impl;
  USE(label_macro_end_802);
  // ../../test/torque/test-torque.tq:289:35
  {
    // ../../test/torque/test-torque.tq:290:4
    TestStructA t1873 = (TestStruct2());
    USE(t1873);
    TestStructA t1874 = (TestStruct2());
    USE(t1874);
    TestStructC t1875 = {t1873, t1874};
    *_return_x_indexes_415 = t1875.x.indexes;
    *_return_x_i_416 = t1875.x.i;
    *_return_x_k_417 = t1875.x.k;
    *_return_y_indexes_419 = t1875.y.indexes;
    *_return_y_i_420 = t1875.y.i;
    *_return_y_k_421 = t1875.y.k;
    Goto(label_macro_end_802);
  }
  BIND(label_macro_end_802);
  return TestStructC{TestStructA{(*_return_x_indexes_415).value(), (*_return_x_i_416).value(), (*_return_x_k_417).value()}, TestStructA{(*_return_y_indexes_419).value(), (*_return_y_i_420).value(), (*_return_y_k_421).value()}};
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:85:69
  {
    // ../../test/torque/test-torque.tq:86:4
    Return(Null());
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  TVARIABLE(Object, _return_447_impl);
  auto _return_447 = &_return_447_impl;
  USE(_return_447);
  Label label_macro_end_823_impl(this, {_return_447});
  Label* label_macro_end_823 = &label_macro_end_823_impl;
  USE(label_macro_end_823);
  // ../../test/torque/test-torque.tq:129:53
  {
    // ../../test/torque/test-torque.tq:130:4
    *_return_447 = Undefined();
    Goto(label_macro_end_823);
  }
  BIND(label_macro_end_823);
  return (*_return_447).value();
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_513) {
  TVARIABLE(Object, _return_448_impl);
  auto _return_448 = &_return_448_impl;
  USE(_return_448);
  Label label_macro_end_824_impl(this, {_return_448});
  Label* label_macro_end_824 = &label_macro_end_824_impl;
  USE(label_macro_end_824);
  // ../../test/torque/test-torque.tq:137:72
  {
    // ../../test/torque/test-torque.tq:138:4
    *_return_448 = Undefined();
    Goto(label_macro_end_824);
  }
  BIND(label_macro_end_824);
  return (*_return_448).value();
}

}  // namepsace internal
}  // namespace v8

