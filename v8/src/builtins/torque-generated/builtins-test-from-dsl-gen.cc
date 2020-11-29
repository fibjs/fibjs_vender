#include "src/builtins/builtins-test-gen.h"
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
  TVARIABLE(BoolT, _return_333_impl);
  auto _return_333 = &_return_333_impl;
  USE(_return_333);
  Label label_macro_end_1237_impl(this, {_return_333});
  Label* label_macro_end_1237 = &label_macro_end_1237_impl;
  USE(label_macro_end_1237);
  // ../../test/torque/test-torque.tq:6:69
  {
    // ../../test/torque/test-torque.tq:7:5
    {
      Label label__False_469_impl(this);
      Label* label__False_469 = &label__False_469_impl;
      USE(label__False_469);
      bool t1792 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
      USE(implicit_cast<bool>(t1792));
      bool t1793 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
      USE(implicit_cast<bool>(t1793));
      if ((implicit_cast<bool>((implicit_cast<bool>(t1792) || implicit_cast<bool>(t1793))))) {
        // ../../test/torque/test-torque.tq:7:73
        {
          // ../../test/torque/test-torque.tq:8:9
          TNode<BoolT> t1794 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_333 = implicit_cast<TNode<BoolT>>(t1794);
          Goto(label_macro_end_1237);
        }
      } else {
        // ../../test/torque/test-torque.tq:10:10
        {
          // ../../test/torque/test-torque.tq:11:7
          TNode<BoolT> t1795 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_333 = implicit_cast<TNode<BoolT>>(t1795);
          Goto(label_macro_end_1237);
        }
      }
    }
  }
  BIND(label_macro_end_1237);
  return implicit_cast<TNode<BoolT>>((*_return_333).value());
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::ElementsKindTestHelper2(ElementsKind p_kind) {
  TVARIABLE(BoolT, _return_334_impl);
  auto _return_334 = &_return_334_impl;
  USE(_return_334);
  Label label_macro_end_1238_impl(this, {_return_334});
  Label* label_macro_end_1238 = &label_macro_end_1238_impl;
  USE(label_macro_end_1238);
  // ../../test/torque/test-torque.tq:15:69
  {
    // ../../test/torque/test-torque.tq:16:5
    Label label__False_470_impl(this);
    Label* label__False_470 = &label__False_470_impl;
    USE(label__False_470);
    bool t1796 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1796));
    bool t1797 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1797));
    TNode<BoolT> t1798 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>((implicit_cast<bool>(t1796) || implicit_cast<bool>(t1797)))));
    *_return_334 = implicit_cast<TNode<BoolT>>(t1798);
    Goto(label_macro_end_1238);
  }
  BIND(label_macro_end_1238);
  return implicit_cast<TNode<BoolT>>((*_return_334).value());
}

bool TestBuiltinsFromDSLAssembler::ElementsKindTestHelper3(ElementsKind p_kind) {
  bool _return_335_impl;
  auto _return_335 = &_return_335_impl;
  USE(_return_335);
  Label label_macro_end_1239_impl(this, {});
  Label* label_macro_end_1239 = &label_macro_end_1239_impl;
  USE(label_macro_end_1239);
  // ../../test/torque/test-torque.tq:19:79
  {
    // ../../test/torque/test-torque.tq:20:5
    Label label__False_471_impl(this);
    Label* label__False_471 = &label__False_471_impl;
    USE(label__False_471);
    bool t1799 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1799));
    bool t1800 = ElementsKindEqual(implicit_cast<ElementsKind>(p_kind), implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1800));
    *_return_335 = implicit_cast<bool>((implicit_cast<bool>(t1799) || implicit_cast<bool>(t1800)));
    Goto(label_macro_end_1239);
  }
  BIND(label_macro_end_1239);
  return implicit_cast<bool>((*_return_335));
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper1(Label* label_Label1_472) {
  Label label_macro_end_1240_impl(this, {});
  Label* label_macro_end_1240 = &label_macro_end_1240_impl;
  USE(label_macro_end_1240);
  // ../../test/torque/test-torque.tq:24:17
  {
    // ../../test/torque/test-torque.tq:25:5
    Goto(label_Label1_472);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper2(Label* label_Label2_473, TVariable<Smi>* Label20_336) {
  Label label_macro_end_1241_impl(this, {});
  Label* label_macro_end_1241 = &label_macro_end_1241_impl;
  USE(label_macro_end_1241);
  // ../../test/torque/test-torque.tq:29:22
  {
    // ../../test/torque/test-torque.tq:30:5
    int31_t t1801 = 42;
    TNode<Smi> t1802 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1801)));
    *Label20_336 = implicit_cast<TNode<Smi>>(t1802);
    Goto(label_Label2_473);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper3(Label* label_Label3_474, TVariable<String>* Label30_337, TVariable<Smi>* Label31_338) {
  Label label_macro_end_1242_impl(this, {});
  Label* label_macro_end_1242 = &label_macro_end_1242_impl;
  USE(label_macro_end_1242);
  // ../../test/torque/test-torque.tq:34:30
  {
    // ../../test/torque/test-torque.tq:35:5
    const char* t1803 = "foo";
    TNode<String> t1804 = UncheckedCast<String>(from_constexpr8ATString(implicit_cast<const char*>(t1803)));
    *Label30_337 = implicit_cast<TNode<String>>(t1804);
    int31_t t1805 = 7;
    TNode<Smi> t1806 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1805)));
    *Label31_338 = implicit_cast<TNode<Smi>>(t1806);
    Goto(label_Label3_474);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexpr1() {
  Label label_macro_end_1243_impl(this, {});
  Label* label_macro_end_1243 = &label_macro_end_1243_impl;
  USE(label_macro_end_1243);
  // ../../test/torque/test-torque.tq:38:26
  {
    // ../../test/torque/test-torque.tq:39:5
    Label label__True_475_impl(this);
    Label* label__True_475 = &label__True_475_impl;
    USE(label__True_475);
    Label label__False_476_impl(this);
    Label* label__False_476 = &label__False_476_impl;
    USE(label__False_476);
    bool t1807 = IsFastElementsKind(implicit_cast<ElementsKind>(PACKED_SMI_ELEMENTS));
    USE(implicit_cast<bool>(t1807));
    TNode<BoolT> t1808 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1807)));
    USE(implicit_cast<TNode<BoolT>>(t1808));
    Branch(implicit_cast<TNode<BoolT>>(t1808), label__True_475, label__False_476);
    BIND(label__False_476);
    Print("assert 'from_constexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed at ../../test/torque/test-torque.tq:39:5");
    Unreachable();
    BIND(label__True_475);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprIf() {
  Label label_macro_end_1244_impl(this, {});
  Label* label_macro_end_1244 = &label_macro_end_1244_impl;
  USE(label_macro_end_1244);
  // ../../test/torque/test-torque.tq:42:27
  {
    // ../../test/torque/test-torque.tq:43:5
    Label label__True_477_impl(this);
    Label* label__True_477 = &label__True_477_impl;
    USE(label__True_477);
    Label label__False_478_impl(this);
    Label* label__False_478 = &label__False_478_impl;
    USE(label__False_478);
    TNode<BoolT> t1809 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT8_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1809));
    Branch(implicit_cast<TNode<BoolT>>(t1809), label__True_477, label__False_478);
    BIND(label__False_478);
    Print("assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed at ../../test/torque/test-torque.tq:43:5");
    Unreachable();
    BIND(label__True_477);
    // ../../test/torque/test-torque.tq:44:5
    Label label__True_479_impl(this);
    Label* label__True_479 = &label__True_479_impl;
    USE(label__True_479);
    Label label__False_480_impl(this);
    Label* label__False_480 = &label__False_480_impl;
    USE(label__False_480);
    TNode<BoolT> t1810 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT16_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1810));
    Branch(implicit_cast<TNode<BoolT>>(t1810), label__True_479, label__False_480);
    BIND(label__False_480);
    Print("assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed at ../../test/torque/test-torque.tq:44:5");
    Unreachable();
    BIND(label__True_479);
    // ../../test/torque/test-torque.tq:45:5
    Label label__True_481_impl(this);
    Label* label__True_481 = &label__True_481_impl;
    USE(label__True_481);
    Label label__False_482_impl(this);
    Label* label__False_482 = &label__False_482_impl;
    USE(label__False_482);
    TNode<BoolT> t1811 = UncheckedCast<BoolT>(ElementsKindTestHelper1(implicit_cast<ElementsKind>(UINT32_ELEMENTS)));
    USE(implicit_cast<TNode<BoolT>>(t1811));
    TNode<BoolT> t1812 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1811)));
    USE(implicit_cast<TNode<BoolT>>(t1812));
    Branch(implicit_cast<TNode<BoolT>>(t1812), label__True_481, label__False_482);
    BIND(label__False_482);
    Print("assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed at ../../test/torque/test-torque.tq:45:5");
    Unreachable();
    BIND(label__True_481);
  }
}

void TestBuiltinsFromDSLAssembler::TestConstexprReturn() {
  Label label_macro_end_1245_impl(this, {});
  Label* label_macro_end_1245 = &label_macro_end_1245_impl;
  USE(label_macro_end_1245);
  // ../../test/torque/test-torque.tq:48:31
  {
    // ../../test/torque/test-torque.tq:49:5
    Label label__True_483_impl(this);
    Label* label__True_483 = &label__True_483_impl;
    USE(label__True_483);
    Label label__False_484_impl(this);
    Label* label__False_484 = &label__False_484_impl;
    USE(label__False_484);
    bool t1813 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT8_ELEMENTS));
    USE(implicit_cast<bool>(t1813));
    TNode<BoolT> t1814 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1813)));
    USE(implicit_cast<TNode<BoolT>>(t1814));
    Branch(implicit_cast<TNode<BoolT>>(t1814), label__True_483, label__False_484);
    BIND(label__False_484);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT8_ELEMENTS))' failed at ../../test/torque/test-torque.tq:49:5");
    Unreachable();
    BIND(label__True_483);
    // ../../test/torque/test-torque.tq:50:5
    Label label__True_485_impl(this);
    Label* label__True_485 = &label__True_485_impl;
    USE(label__True_485);
    Label label__False_486_impl(this);
    Label* label__False_486 = &label__False_486_impl;
    USE(label__False_486);
    bool t1815 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT16_ELEMENTS));
    USE(implicit_cast<bool>(t1815));
    TNode<BoolT> t1816 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1815)));
    USE(implicit_cast<TNode<BoolT>>(t1816));
    Branch(implicit_cast<TNode<BoolT>>(t1816), label__True_485, label__False_486);
    BIND(label__False_486);
    Print("assert 'from_constexpr<bool>(ElementsKindTestHelper3(UINT16_ELEMENTS))' failed at ../../test/torque/test-torque.tq:50:5");
    Unreachable();
    BIND(label__True_485);
    // ../../test/torque/test-torque.tq:51:5
    Label label__True_487_impl(this);
    Label* label__True_487 = &label__True_487_impl;
    USE(label__True_487);
    Label label__False_488_impl(this);
    Label* label__False_488 = &label__False_488_impl;
    USE(label__False_488);
    bool t1817 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1817));
    TNode<BoolT> t1818 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1817)));
    USE(implicit_cast<TNode<BoolT>>(t1818));
    TNode<BoolT> t1819 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>(t1818)));
    USE(implicit_cast<TNode<BoolT>>(t1819));
    Branch(implicit_cast<TNode<BoolT>>(t1819), label__True_487, label__False_488);
    BIND(label__False_488);
    Print("assert '!from_constexpr<bool>(ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:51:5");
    Unreachable();
    BIND(label__True_487);
    // ../../test/torque/test-torque.tq:52:5
    Label label__True_489_impl(this);
    Label* label__True_489 = &label__True_489_impl;
    USE(label__True_489);
    Label label__False_490_impl(this);
    Label* label__False_490 = &label__False_490_impl;
    USE(label__False_490);
    bool t1820 = ElementsKindTestHelper3(implicit_cast<ElementsKind>(UINT32_ELEMENTS));
    USE(implicit_cast<bool>(t1820));
    bool t1821 = ConstexprBoolNot(implicit_cast<bool>(t1820));
    USE(implicit_cast<bool>(t1821));
    TNode<BoolT> t1822 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1821)));
    USE(implicit_cast<TNode<BoolT>>(t1822));
    Branch(implicit_cast<TNode<BoolT>>(t1822), label__True_489, label__False_490);
    BIND(label__False_490);
    Print("assert 'from_constexpr<bool>(!ElementsKindTestHelper3(UINT32_ELEMENTS))' failed at ../../test/torque/test-torque.tq:52:5");
    Unreachable();
    BIND(label__True_489);
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabel() {
  TVARIABLE(Oddball, _return_339_impl);
  auto _return_339 = &_return_339_impl;
  USE(_return_339);
  Label label_macro_end_1246_impl(this, {_return_339});
  Label* label_macro_end_1246 = &label_macro_end_1246_impl;
  USE(label_macro_end_1246);
  // ../../test/torque/test-torque.tq:55:34
  {
    // ../../test/torque/test-torque.tq:56:5
    {
      Label label_try_done_824_1247_impl(this);
      Label* label_try_done_824_1247 = &label_try_done_824_1247_impl;
      USE(label_try_done_824_1247);
      Label label_Label1_491_impl(this);
      Label* label_Label1_491 = &label_Label1_491_impl;
      USE(label_Label1_491);
      Label label_try_begin_825_1248_impl(this);
      Label* label_try_begin_825_1248 = &label_try_begin_825_1248_impl;
      USE(label_try_begin_825_1248);
      Goto(label_try_begin_825_1248);
      if (label_try_begin_825_1248->is_used())
      {
        BIND(label_try_begin_825_1248);
        // ../../test/torque/test-torque.tq:56:9
        {
          // ../../test/torque/test-torque.tq:57:7
          LabelTestHelper1(label_Label1_491);
        }
      }
      if (label_Label1_491->is_used())
      {
        BIND(label_Label1_491);
        // ../../test/torque/test-torque.tq:59:18
        {
          // ../../test/torque/test-torque.tq:60:7
          *_return_339 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1246);
        }
      }
    }
  }
  BIND(label_macro_end_1246);
  return implicit_cast<TNode<Oddball>>((*_return_339).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithOneParameter() {
  TVARIABLE(Oddball, _return_340_impl);
  auto _return_340 = &_return_340_impl;
  USE(_return_340);
  Label label_macro_end_1249_impl(this, {_return_340});
  Label* label_macro_end_1249 = &label_macro_end_1249_impl;
  USE(label_macro_end_1249);
  // ../../test/torque/test-torque.tq:64:50
  {
    // ../../test/torque/test-torque.tq:65:5
    {
      Label label_try_done_826_1250_impl(this);
      Label* label_try_done_826_1250 = &label_try_done_826_1250_impl;
      USE(label_try_done_826_1250);
      Label label_Label2_492_impl(this);
      Label* label_Label2_492 = &label_Label2_492_impl;
      USE(label_Label2_492);
      TVARIABLE(Smi, smi_341_impl);
      auto smi_341 = &smi_341_impl;
      USE(smi_341);
      Label label_try_begin_827_1251_impl(this);
      Label* label_try_begin_827_1251 = &label_try_begin_827_1251_impl;
      USE(label_try_begin_827_1251);
      Goto(label_try_begin_827_1251);
      if (label_try_begin_827_1251->is_used())
      {
        BIND(label_try_begin_827_1251);
        // ../../test/torque/test-torque.tq:65:9
        {
          // ../../test/torque/test-torque.tq:66:7
          LabelTestHelper2(label_Label2_492, smi_341);
        }
      }
      if (label_Label2_492->is_used())
      {
        BIND(label_Label2_492);
        // ../../test/torque/test-torque.tq:68:28
        {
          // ../../test/torque/test-torque.tq:69:7
          Label label__True_493_impl(this);
          Label* label__True_493 = &label__True_493_impl;
          USE(label__True_493);
          Label label__False_494_impl(this);
          Label* label__False_494 = &label__False_494_impl;
          USE(label__False_494);
          int31_t t1823 = 42;
          TNode<Smi> t1824 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1823)));
          TNode<BoolT> t1825 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_341).value()), implicit_cast<TNode<Smi>>(t1824)));
          USE(implicit_cast<TNode<BoolT>>(t1825));
          Branch(implicit_cast<TNode<BoolT>>(t1825), label__True_493, label__False_494);
          BIND(label__False_494);
          Print("assert 'smi == 42' failed at ../../test/torque/test-torque.tq:69:7");
          Unreachable();
          BIND(label__True_493);
          // ../../test/torque/test-torque.tq:70:7
          *_return_340 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1249);
        }
      }
    }
  }
  BIND(label_macro_end_1249);
  return implicit_cast<TNode<Oddball>>((*_return_340).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestGotoLabelWithTwoParameters() {
  TVARIABLE(Oddball, _return_342_impl);
  auto _return_342 = &_return_342_impl;
  USE(_return_342);
  Label label_macro_end_1252_impl(this, {_return_342});
  Label* label_macro_end_1252 = &label_macro_end_1252_impl;
  USE(label_macro_end_1252);
  // ../../test/torque/test-torque.tq:74:51
  {
    // ../../test/torque/test-torque.tq:75:5
    {
      Label label_try_done_828_1253_impl(this);
      Label* label_try_done_828_1253 = &label_try_done_828_1253_impl;
      USE(label_try_done_828_1253);
      Label label_Label3_495_impl(this);
      Label* label_Label3_495 = &label_Label3_495_impl;
      USE(label_Label3_495);
      TVARIABLE(String, str_343_impl);
      auto str_343 = &str_343_impl;
      USE(str_343);
      TVARIABLE(Smi, smi_344_impl);
      auto smi_344 = &smi_344_impl;
      USE(smi_344);
      Label label_try_begin_829_1254_impl(this);
      Label* label_try_begin_829_1254 = &label_try_begin_829_1254_impl;
      USE(label_try_begin_829_1254);
      Goto(label_try_begin_829_1254);
      if (label_try_begin_829_1254->is_used())
      {
        BIND(label_try_begin_829_1254);
        // ../../test/torque/test-torque.tq:75:9
        {
          // ../../test/torque/test-torque.tq:76:7
          LabelTestHelper3(label_Label3_495, str_343, smi_344);
        }
      }
      if (label_Label3_495->is_used())
      {
        BIND(label_Label3_495);
        // ../../test/torque/test-torque.tq:78:41
        {
          // ../../test/torque/test-torque.tq:79:7
          Label label__True_496_impl(this);
          Label* label__True_496 = &label__True_496_impl;
          USE(label__True_496);
          Label label__False_497_impl(this);
          Label* label__False_497 = &label__False_497_impl;
          USE(label__False_497);
          const char* t1826 = "foo";
          TNode<Object> t1827 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(implicit_cast<const char*>(t1826)));
          TNode<BoolT> t1828 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>((*str_343).value()), implicit_cast<TNode<Object>>(t1827)));
          USE(implicit_cast<TNode<BoolT>>(t1828));
          Branch(implicit_cast<TNode<BoolT>>(t1828), label__True_496, label__False_497);
          BIND(label__False_497);
          Print("assert 'str == 'foo'' failed at ../../test/torque/test-torque.tq:79:7");
          Unreachable();
          BIND(label__True_496);
          // ../../test/torque/test-torque.tq:80:7
          Label label__True_498_impl(this);
          Label* label__True_498 = &label__True_498_impl;
          USE(label__True_498);
          Label label__False_499_impl(this);
          Label* label__False_499 = &label__False_499_impl;
          USE(label__False_499);
          int31_t t1829 = 7;
          TNode<Smi> t1830 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1829)));
          TNode<BoolT> t1831 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*smi_344).value()), implicit_cast<TNode<Smi>>(t1830)));
          USE(implicit_cast<TNode<BoolT>>(t1831));
          Branch(implicit_cast<TNode<BoolT>>(t1831), label__True_498, label__False_499);
          BIND(label__False_499);
          Print("assert 'smi == 7' failed at ../../test/torque/test-torque.tq:80:7");
          Unreachable();
          BIND(label__True_498);
          // ../../test/torque/test-torque.tq:81:7
          *_return_342 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1252);
        }
      }
    }
  }
  BIND(label_macro_end_1252);
  return implicit_cast<TNode<Oddball>>((*_return_342).value());
}

TF_BUILTIN(GenericBuiltinTest22UT12ATHeapObject5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Object> p_param = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:89:65
  {
    // ../../test/torque/test-torque.tq:90:5
    Return(implicit_cast<TNode<Object>>(p_param));
  }
}

void TestBuiltinsFromDSLAssembler::TestBuiltinSpecialization(TNode<Context> p_c) {
  Label label_macro_end_1255_impl(this, {});
  Label* label_macro_end_1255 = &label_macro_end_1255_impl;
  USE(label_macro_end_1255);
  // ../../test/torque/test-torque.tq:93:47
  {
    // ../../test/torque/test-torque.tq:94:5
    Label label__True_500_impl(this);
    Label* label__True_500 = &label__True_500_impl;
    USE(label__True_500);
    Label label__False_501_impl(this);
    Label* label__False_501 = &label__False_501_impl;
    USE(label__False_501);
    int31_t t1832 = 0;
    TNode<Smi> t1833 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1832)));
    TNode<Object> t1834 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1833)));
    USE(implicit_cast<TNode<Object>>(t1834));
    TNode<BoolT> t1835 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1834), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1835));
    Branch(implicit_cast<TNode<BoolT>>(t1835), label__True_500, label__False_501);
    BIND(label__False_501);
    Print("assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed at ../../test/torque/test-torque.tq:94:5");
    Unreachable();
    BIND(label__True_500);
    // ../../test/torque/test-torque.tq:95:5
    Label label__True_502_impl(this);
    Label* label__True_502 = &label__True_502_impl;
    USE(label__True_502);
    Label label__False_503_impl(this);
    Label* label__False_503 = &label__False_503_impl;
    USE(label__False_503);
    int31_t t1836 = 1;
    TNode<Smi> t1837 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1836)));
    TNode<Object> t1838 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1837)));
    USE(implicit_cast<TNode<Object>>(t1838));
    TNode<BoolT> t1839 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1838), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1839));
    Branch(implicit_cast<TNode<BoolT>>(t1839), label__True_502, label__False_503);
    BIND(label__False_503);
    Print("assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed at ../../test/torque/test-torque.tq:95:5");
    Unreachable();
    BIND(label__True_502);
    // ../../test/torque/test-torque.tq:96:5
    Label label__True_504_impl(this);
    Label* label__True_504 = &label__True_504_impl;
    USE(label__True_504);
    Label label__False_505_impl(this);
    Label* label__False_505 = &label__False_505_impl;
    USE(label__False_505);
    TNode<Object> t1840 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1840));
    TNode<BoolT> t1841 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1840), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1841));
    Branch(implicit_cast<TNode<BoolT>>(t1841), label__True_504, label__False_505);
    BIND(label__False_505);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:96:5");
    Unreachable();
    BIND(label__True_504);
    // ../../test/torque/test-torque.tq:97:5
    Label label__True_506_impl(this);
    Label* label__True_506 = &label__True_506_impl;
    USE(label__True_506);
    Label label__False_507_impl(this);
    Label* label__False_507 = &label__False_507_impl;
    USE(label__False_507);
    TNode<Object> t1842 = UncheckedCast<Object>(CallBuiltin(Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1842));
    TNode<BoolT> t1843 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1842), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1843));
    Branch(implicit_cast<TNode<BoolT>>(t1843), label__True_506, label__False_507);
    BIND(label__False_507);
    Print("assert 'GenericBuiltinTest<Object>(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:97:5");
    Unreachable();
    BIND(label__True_506);
  }
}

void TestBuiltinsFromDSLAssembler::LabelTestHelper4(bool p_flag, Label* label_Label4_508, Label* label_Label5_509) {
  Label label_macro_end_1256_impl(this, {});
  Label* label_macro_end_1256 = &label_macro_end_1256_impl;
  USE(label_macro_end_1256);
  // ../../test/torque/test-torque.tq:100:77
  {
    // ../../test/torque/test-torque.tq:101:5
    {
      if ((implicit_cast<bool>(p_flag))) {
        // ../../test/torque/test-torque.tq:101:24
        {
          // ../../test/torque/test-torque.tq:102:7
          Goto(label_Label4_508);
        }
      } else {
        // ../../test/torque/test-torque.tq:103:12
        {
          // ../../test/torque/test-torque.tq:104:7
          Goto(label_Label5_509);
        }
      }
    }
  }
}

compiler::TNode<BoolT> TestBuiltinsFromDSLAssembler::CallLabelTestHelper4(bool p_flag) {
  TVARIABLE(BoolT, _return_345_impl);
  auto _return_345 = &_return_345_impl;
  USE(_return_345);
  Label label_macro_end_1257_impl(this, {_return_345});
  Label* label_macro_end_1257 = &label_macro_end_1257_impl;
  USE(label_macro_end_1257);
  // ../../test/torque/test-torque.tq:108:58
  {
    // ../../test/torque/test-torque.tq:109:5
    {
      Label label_try_done_830_1258_impl(this);
      Label* label_try_done_830_1258 = &label_try_done_830_1258_impl;
      USE(label_try_done_830_1258);
      Label label_Label4_512_impl(this);
      Label* label_Label4_512 = &label_Label4_512_impl;
      USE(label_Label4_512);
      Label label_Label5_513_impl(this);
      Label* label_Label5_513 = &label_Label5_513_impl;
      USE(label_Label5_513);
      Label label_try_begin_831_1259_impl(this);
      Label* label_try_begin_831_1259 = &label_try_begin_831_1259_impl;
      USE(label_try_begin_831_1259);
      Goto(label_try_begin_831_1259);
      if (label_try_begin_831_1259->is_used())
      {
        BIND(label_try_begin_831_1259);
        // ../../test/torque/test-torque.tq:109:9
        {
          // ../../test/torque/test-torque.tq:110:7
          LabelTestHelper4(implicit_cast<bool>(p_flag), label_Label4_512, label_Label5_513);
        }
      }
      if (label_Label4_512->is_used())
      {
        BIND(label_Label4_512);
        // ../../test/torque/test-torque.tq:112:18
        {
          // ../../test/torque/test-torque.tq:113:7
          TNode<BoolT> t1844 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(true)));
          *_return_345 = implicit_cast<TNode<BoolT>>(t1844);
          Goto(label_macro_end_1257);
        }
      }
      if (label_Label5_513->is_used())
      {
        BIND(label_Label5_513);
        // ../../test/torque/test-torque.tq:115:18
        {
          // ../../test/torque/test-torque.tq:116:7
          TNode<BoolT> t1845 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(false)));
          *_return_345 = implicit_cast<TNode<BoolT>>(t1845);
          Goto(label_macro_end_1257);
        }
      }
    }
  }
  BIND(label_macro_end_1257);
  return implicit_cast<TNode<BoolT>>((*_return_345).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestPartiallyUnusedLabel() {
  TVARIABLE(Oddball, _return_346_impl);
  auto _return_346 = &_return_346_impl;
  USE(_return_346);
  Label label_macro_end_1260_impl(this, {_return_346});
  Label* label_macro_end_1260 = &label_macro_end_1260_impl;
  USE(label_macro_end_1260);
  // ../../test/torque/test-torque.tq:120:45
  {
    // ../../test/torque/test-torque.tq:121:5
    TNode<BoolT> t1846 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(true)));
    USE(implicit_cast<TNode<BoolT>>(t1846));
    TVARIABLE(BoolT, r1_347_impl);
    auto r1_347 = &r1_347_impl;
    USE(r1_347);
    *r1_347 = implicit_cast<TNode<BoolT>>(t1846);
    // ../../test/torque/test-torque.tq:122:5
    TNode<BoolT> t1847 = UncheckedCast<BoolT>(CallLabelTestHelper4(implicit_cast<bool>(false)));
    USE(implicit_cast<TNode<BoolT>>(t1847));
    TVARIABLE(BoolT, r2_348_impl);
    auto r2_348 = &r2_348_impl;
    USE(r2_348);
    *r2_348 = implicit_cast<TNode<BoolT>>(t1847);
    // ../../test/torque/test-torque.tq:124:5
    {
      Label label__True_514_impl(this);
      Label* label__True_514 = &label__True_514_impl;
      USE(label__True_514);
      Label label__False_515_impl(this);
      Label* label__False_515 = &label__False_515_impl;
      USE(label__False_515);
      Label label_if_done_label_832_1261_impl(this, {});
      Label* label_if_done_label_832_1261 = &label_if_done_label_832_1261_impl;
      USE(label_if_done_label_832_1261);
      Label label__True_516_impl(this);
      Label* label__True_516 = &label__True_516_impl;
      USE(label__True_516);
      GotoIfNot(implicit_cast<TNode<BoolT>>((*r1_347).value()), label__False_515);
      TNode<BoolT> t1848 = UncheckedCast<BoolT>(Word32BinaryNot(implicit_cast<TNode<BoolT>>((*r2_348).value())));
      USE(implicit_cast<TNode<BoolT>>(t1848));
      Branch(implicit_cast<TNode<BoolT>>(t1848), label__True_514, label__False_515);
      if (label__True_514->is_used())
      {
        BIND(label__True_514);
        // ../../test/torque/test-torque.tq:124:20
        {
          // ../../test/torque/test-torque.tq:125:7
          *_return_346 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1260);
        }
      }
      if (label__False_515->is_used())
      {
        BIND(label__False_515);
        // ../../test/torque/test-torque.tq:126:12
        {
          // ../../test/torque/test-torque.tq:127:7
          *_return_346 = implicit_cast<TNode<Oddball>>(False());
          Goto(label_macro_end_1260);
        }
      }
    }
  }
  BIND(label_macro_end_1260);
  return implicit_cast<TNode<Oddball>>((*_return_346).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest22UT12ATHeapObject5ATSmi(TNode<Object> p_param2) {
  TVARIABLE(Object, _return_349_impl);
  auto _return_349 = &_return_349_impl;
  USE(_return_349);
  Label label_macro_end_1262_impl(this, {_return_349});
  Label* label_macro_end_1262 = &label_macro_end_1262_impl;
  USE(label_macro_end_1262);
  // ../../test/torque/test-torque.tq:135:52
  {
    // ../../test/torque/test-torque.tq:136:5
    *_return_349 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_1262);
  }
  BIND(label_macro_end_1262);
  return implicit_cast<TNode<Object>>((*_return_349).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(TNode<Object> p_param2, Label* label_Y_517) {
  TVARIABLE(Object, _return_350_impl);
  auto _return_350 = &_return_350_impl;
  USE(_return_350);
  Label label_macro_end_1263_impl(this, {_return_350});
  Label* label_macro_end_1263 = &label_macro_end_1263_impl;
  USE(label_macro_end_1263);
  // ../../test/torque/test-torque.tq:143:71
  {
    // ../../test/torque/test-torque.tq:144:5
    *_return_350 = implicit_cast<TNode<Object>>(p_param2);
    Goto(label_macro_end_1263);
  }
  BIND(label_macro_end_1263);
  return implicit_cast<TNode<Object>>((*_return_350).value());
}

void TestBuiltinsFromDSLAssembler::TestMacroSpecialization() {
  Label label_macro_end_1264_impl(this, {});
  Label* label_macro_end_1264 = &label_macro_end_1264_impl;
  USE(label_macro_end_1264);
  // ../../test/torque/test-torque.tq:147:35
  {
    // ../../test/torque/test-torque.tq:148:5
    {
      Label label_try_done_833_1265_impl(this);
      Label* label_try_done_833_1265 = &label_try_done_833_1265_impl;
      USE(label_try_done_833_1265);
      Label label_Fail_518_impl(this);
      Label* label_Fail_518 = &label_Fail_518_impl;
      USE(label_Fail_518);
      Label label_try_begin_834_1266_impl(this);
      Label* label_try_begin_834_1266 = &label_try_begin_834_1266_impl;
      USE(label_try_begin_834_1266);
      Goto(label_try_begin_834_1266);
      if (label_try_begin_834_1266->is_used())
      {
        BIND(label_try_begin_834_1266);
        // ../../test/torque/test-torque.tq:148:9
        {
          // ../../test/torque/test-torque.tq:149:7
          Label label__True_519_impl(this);
          Label* label__True_519 = &label__True_519_impl;
          USE(label__True_519);
          Label label__False_520_impl(this);
          Label* label__False_520 = &label__False_520_impl;
          USE(label__False_520);
          int31_t t1849 = 0;
          TNode<Smi> t1850 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1849)));
          TNode<Object> t1851 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1850)));
          USE(implicit_cast<TNode<Object>>(t1851));
          TNode<BoolT> t1852 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1851), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1852));
          Branch(implicit_cast<TNode<BoolT>>(t1852), label__True_519, label__False_520);
          BIND(label__False_520);
          Print("assert 'GenericMacroTest<Smi>(0) == Undefined' failed at ../../test/torque/test-torque.tq:149:7");
          Unreachable();
          BIND(label__True_519);
          // ../../test/torque/test-torque.tq:150:7
          Label label__True_521_impl(this);
          Label* label__True_521 = &label__True_521_impl;
          USE(label__True_521);
          Label label__False_522_impl(this);
          Label* label__False_522 = &label__False_522_impl;
          USE(label__False_522);
          int31_t t1853 = 1;
          TNode<Smi> t1854 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1853)));
          TNode<Object> t1855 = UncheckedCast<Object>(GenericMacroTest5ATSmi(implicit_cast<TNode<Smi>>(t1854)));
          USE(implicit_cast<TNode<Object>>(t1855));
          TNode<BoolT> t1856 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1855), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1856));
          Branch(implicit_cast<TNode<BoolT>>(t1856), label__True_521, label__False_522);
          BIND(label__False_522);
          Print("assert 'GenericMacroTest<Smi>(1) == Undefined' failed at ../../test/torque/test-torque.tq:150:7");
          Unreachable();
          BIND(label__True_521);
          // ../../test/torque/test-torque.tq:151:7
          Label label__True_523_impl(this);
          Label* label__True_523 = &label__True_523_impl;
          USE(label__True_523);
          Label label__False_524_impl(this);
          Label* label__False_524 = &label__False_524_impl;
          USE(label__False_524);
          TNode<Object> t1857 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<Object>>(t1857));
          TNode<BoolT> t1858 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1857), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1858));
          Branch(implicit_cast<TNode<BoolT>>(t1858), label__True_523, label__False_524);
          BIND(label__False_524);
          Print("assert 'GenericMacroTest<Object>(Null) == Null' failed at ../../test/torque/test-torque.tq:151:7");
          Unreachable();
          BIND(label__True_523);
          // ../../test/torque/test-torque.tq:152:7
          Label label__True_525_impl(this);
          Label* label__True_525 = &label__True_525_impl;
          USE(label__True_525);
          Label label__False_526_impl(this);
          Label* label__False_526 = &label__False_526_impl;
          USE(label__False_526);
          TNode<Object> t1859 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<Object>>(t1859));
          TNode<BoolT> t1860 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1859), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1860));
          Branch(implicit_cast<TNode<BoolT>>(t1860), label__True_525, label__False_526);
          BIND(label__False_526);
          Print("assert 'GenericMacroTest<Object>(False) == False' failed at ../../test/torque/test-torque.tq:152:7");
          Unreachable();
          BIND(label__True_525);
          // ../../test/torque/test-torque.tq:153:7
          Label label__True_527_impl(this);
          Label* label__True_527 = &label__True_527_impl;
          USE(label__True_527);
          Label label__False_528_impl(this);
          Label* label__False_528 = &label__False_528_impl;
          USE(label__False_528);
          TNode<Object> t1861 = UncheckedCast<Object>(GenericMacroTest22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<Object>>(t1861));
          TNode<BoolT> t1862 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1861), implicit_cast<TNode<Object>>(True())));
          USE(implicit_cast<TNode<BoolT>>(t1862));
          Branch(implicit_cast<TNode<BoolT>>(t1862), label__True_527, label__False_528);
          BIND(label__False_528);
          Print("assert 'GenericMacroTest<Object>(True) == True' failed at ../../test/torque/test-torque.tq:153:7");
          Unreachable();
          BIND(label__True_527);
          // ../../test/torque/test-torque.tq:154:7
          Label label__True_529_impl(this);
          Label* label__True_529 = &label__True_529_impl;
          USE(label__True_529);
          Label label__False_530_impl(this);
          Label* label__False_530 = &label__False_530_impl;
          USE(label__False_530);
          int31_t t1863 = 0;
          TNode<Smi> t1864 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1863)));
          TNode<Object> t1865 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1864), label_Fail_518));
          USE(implicit_cast<TNode<Object>>(t1865));
          TNode<BoolT> t1866 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1865), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1866));
          Branch(implicit_cast<TNode<BoolT>>(t1866), label__True_529, label__False_530);
          BIND(label__False_530);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:154:7");
          Unreachable();
          BIND(label__True_529);
          // ../../test/torque/test-torque.tq:155:7
          Label label__True_531_impl(this);
          Label* label__True_531 = &label__True_531_impl;
          USE(label__True_531);
          Label label__False_532_impl(this);
          Label* label__False_532 = &label__False_532_impl;
          USE(label__False_532);
          int31_t t1867 = 0;
          TNode<Smi> t1868 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1867)));
          TNode<Object> t1869 = UncheckedCast<Object>(GenericMacroTestWithLabels5ATSmi(implicit_cast<TNode<Smi>>(t1868), label_Fail_518));
          USE(implicit_cast<TNode<Object>>(t1869));
          TNode<BoolT> t1870 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1869), implicit_cast<TNode<Object>>(Undefined())));
          USE(implicit_cast<TNode<BoolT>>(t1870));
          Branch(implicit_cast<TNode<BoolT>>(t1870), label__True_531, label__False_532);
          BIND(label__False_532);
          Print("assert 'GenericMacroTestWithLabels<Smi>(0) otherwise Fail == Undefined' failed at ../../test/torque/test-torque.tq:155:7");
          Unreachable();
          BIND(label__True_531);
          // ../../test/torque/test-torque.tq:156:7
          Label label__True_533_impl(this);
          Label* label__True_533 = &label__True_533_impl;
          USE(label__True_533);
          Label label__False_534_impl(this);
          Label* label__False_534 = &label__False_534_impl;
          USE(label__False_534);
          TNode<Object> t1871 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(Null()), label_Fail_518));
          USE(implicit_cast<TNode<Object>>(t1871));
          TNode<BoolT> t1872 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1871), implicit_cast<TNode<Object>>(Null())));
          USE(implicit_cast<TNode<BoolT>>(t1872));
          Branch(implicit_cast<TNode<BoolT>>(t1872), label__True_533, label__False_534);
          BIND(label__False_534);
          Print("assert 'GenericMacroTestWithLabels<Object>(Null) otherwise Fail == Null' failed at ../../test/torque/test-torque.tq:156:7");
          Unreachable();
          BIND(label__True_533);
          // ../../test/torque/test-torque.tq:157:7
          Label label__True_535_impl(this);
          Label* label__True_535 = &label__True_535_impl;
          USE(label__True_535);
          Label label__False_536_impl(this);
          Label* label__False_536 = &label__False_536_impl;
          USE(label__False_536);
          TNode<Object> t1873 = UncheckedCast<Object>(GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>(False()), label_Fail_518));
          USE(implicit_cast<TNode<Object>>(t1873));
          TNode<BoolT> t1874 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1873), implicit_cast<TNode<Object>>(False())));
          USE(implicit_cast<TNode<BoolT>>(t1874));
          Branch(implicit_cast<TNode<BoolT>>(t1874), label__True_535, label__False_536);
          BIND(label__False_536);
          Print("assert 'GenericMacroTestWithLabels<Object>(False) otherwise Fail == False' failed at ../../test/torque/test-torque.tq:157:7");
          Unreachable();
          BIND(label__True_535);
        }
        Goto(label_try_done_833_1265);
      }
      if (label_Fail_518->is_used())
      {
        BIND(label_Fail_518);
        // ../../test/torque/test-torque.tq:159:16
        {
          // ../../test/torque/test-torque.tq:160:7
          Unreachable();
        }
      }
      BIND(label_try_done_833_1265);
    }
  }
}

TF_BUILTIN(TestHelperPlus1, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:164:58
  {
    // ../../test/torque/test-torque.tq:165:5
    int31_t t1875 = 1;
    TNode<Smi> t1876 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1875)));
    TNode<Smi> t1877 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1876)));
    USE(implicit_cast<TNode<Smi>>(t1877));
    Return(implicit_cast<TNode<Smi>>(t1877));
  }
}

TF_BUILTIN(TestHelperPlus2, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Smi> p_x = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(p_x);
  // ../../test/torque/test-torque.tq:167:58
  {
    // ../../test/torque/test-torque.tq:168:5
    int31_t t1878 = 2;
    TNode<Smi> t1879 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1878)));
    TNode<Smi> t1880 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1879)));
    USE(implicit_cast<TNode<Smi>>(t1880));
    Return(implicit_cast<TNode<Smi>>(t1880));
  }
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestFunctionPointers(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_351_impl);
  auto _return_351 = &_return_351_impl;
  USE(_return_351);
  Label label_macro_end_1267_impl(this, {_return_351});
  Label* label_macro_end_1267 = &label_macro_end_1267_impl;
  USE(label_macro_end_1267);
  // ../../test/torque/test-torque.tq:171:57
  {
    // ../../test/torque/test-torque.tq:172:5
    TVARIABLE(Code, fptr_352_impl);
    auto fptr_352 = &fptr_352_impl;
    USE(fptr_352);
    *fptr_352 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).code()));
    // ../../test/torque/test-torque.tq:173:5
    Label label__True_537_impl(this);
    Label* label__True_537 = &label__True_537_impl;
    USE(label__True_537);
    Label label__False_538_impl(this);
    Label* label__False_538 = &label__False_538_impl;
    USE(label__False_538);
    int31_t t1881 = 42;
    TNode<Smi> t1882 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1881)));
    TNode<Smi> t1883 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_352).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1882)));
    USE(implicit_cast<TNode<Smi>>(t1883));
    int31_t t1884 = 43;
    TNode<Smi> t1885 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1884)));
    TNode<BoolT> t1886 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1883), implicit_cast<TNode<Smi>>(t1885)));
    USE(implicit_cast<TNode<BoolT>>(t1886));
    Branch(implicit_cast<TNode<BoolT>>(t1886), label__True_537, label__False_538);
    BIND(label__False_538);
    Print("assert 'fptr(context, 42) == 43' failed at ../../test/torque/test-torque.tq:173:5");
    Unreachable();
    BIND(label__True_537);
    // ../../test/torque/test-torque.tq:174:5
    *fptr_352 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus2).code()));
    // ../../test/torque/test-torque.tq:175:5
    Label label__True_539_impl(this);
    Label* label__True_539 = &label__True_539_impl;
    USE(label__True_539);
    Label label__False_540_impl(this);
    Label* label__False_540 = &label__False_540_impl;
    USE(label__False_540);
    int31_t t1887 = 42;
    TNode<Smi> t1888 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1887)));
    TNode<Smi> t1889 = UncheckedCast<Smi>(CallStub(Builtins::CallableFor(isolate(), Builtins::kTestHelperPlus1).descriptor(), implicit_cast<TNode<Code>>((*fptr_352).value()), implicit_cast<TNode<Context>>(p_context), implicit_cast<TNode<Smi>>(t1888)));
    USE(implicit_cast<TNode<Smi>>(t1889));
    int31_t t1890 = 44;
    TNode<Smi> t1891 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1890)));
    TNode<BoolT> t1892 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1889), implicit_cast<TNode<Smi>>(t1891)));
    USE(implicit_cast<TNode<BoolT>>(t1892));
    Branch(implicit_cast<TNode<BoolT>>(t1892), label__True_539, label__False_540);
    BIND(label__False_540);
    Print("assert 'fptr(context, 42) == 44' failed at ../../test/torque/test-torque.tq:175:5");
    Unreachable();
    BIND(label__True_539);
    // ../../test/torque/test-torque.tq:176:5
    *_return_351 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_1267);
  }
  BIND(label_macro_end_1267);
  return implicit_cast<TNode<Oddball>>((*_return_351).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestVariableRedeclaration(TNode<Context> p_context) {
  TVARIABLE(Oddball, _return_353_impl);
  auto _return_353 = &_return_353_impl;
  USE(_return_353);
  Label label_macro_end_1268_impl(this, {_return_353});
  Label* label_macro_end_1268 = &label_macro_end_1268_impl;
  USE(label_macro_end_1268);
  // ../../test/torque/test-torque.tq:179:62
  {
    // ../../test/torque/test-torque.tq:180:5
    auto t1893 = [=]() {
      int31_t t1895 = 0;
      return implicit_cast<int31_t>(t1895);
    };
    auto t1894 = [=]() {
      int31_t t1896 = 1;
      return implicit_cast<int31_t>(t1896);
    };
    TVARIABLE(Int32T, t1897_835_impl);
    auto t1897_835 = &t1897_835_impl;
    USE(t1897_835);
    {
      Label label__True_541_impl(this);
      Label* label__True_541 = &label__True_541_impl;
      USE(label__True_541);
      Label label__False_542_impl(this);
      Label* label__False_542 = &label__False_542_impl;
      USE(label__False_542);
      Label label__done_836_1269_impl(this, {t1897_835});
      Label* label__done_836_1269 = &label__done_836_1269_impl;
      USE(label__done_836_1269);
      int31_t t1898 = 42;
      int31_t t1899 = 0;
      bool t1900 = ConstexprInt31Equal(implicit_cast<int31_t>(t1898), implicit_cast<int31_t>(t1899));
      USE(implicit_cast<bool>(t1900));
      TNode<BoolT> t1901 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1900)));
      USE(implicit_cast<TNode<BoolT>>(t1901));
      Branch(implicit_cast<TNode<BoolT>>(t1901), label__True_541, label__False_542);
      BIND(label__True_541);
            TNode<Int32T> t1902 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1893())));
      *t1897_835 = implicit_cast<TNode<Int32T>>(t1902);
      Goto(label__done_836_1269);
      BIND(label__False_542);
            TNode<Int32T> t1903 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1894())));
      *t1897_835 = implicit_cast<TNode<Int32T>>(t1903);
      Goto(label__done_836_1269);
      BIND(label__done_836_1269);
    }
    TVARIABLE(Int32T, var1_354_impl);
    auto var1_354 = &var1_354_impl;
    USE(var1_354);
    *var1_354 = implicit_cast<TNode<Int32T>>((*t1897_835).value());
    // ../../test/torque/test-torque.tq:181:5
    auto t1904 = [=]() {
      int31_t t1906 = 1;
      return implicit_cast<int31_t>(t1906);
    };
    auto t1905 = [=]() {
      int31_t t1907 = 0;
      return implicit_cast<int31_t>(t1907);
    };
    TVARIABLE(Int32T, t1908_837_impl);
    auto t1908_837 = &t1908_837_impl;
    USE(t1908_837);
    {
      Label label__True_543_impl(this);
      Label* label__True_543 = &label__True_543_impl;
      USE(label__True_543);
      Label label__False_544_impl(this);
      Label* label__False_544 = &label__False_544_impl;
      USE(label__False_544);
      Label label__done_838_1270_impl(this, {t1908_837});
      Label* label__done_838_1270 = &label__done_838_1270_impl;
      USE(label__done_838_1270);
      int31_t t1909 = 42;
      int31_t t1910 = 0;
      bool t1911 = ConstexprInt31Equal(implicit_cast<int31_t>(t1909), implicit_cast<int31_t>(t1910));
      USE(implicit_cast<bool>(t1911));
      TNode<BoolT> t1912 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1911)));
      USE(implicit_cast<TNode<BoolT>>(t1912));
      Branch(implicit_cast<TNode<BoolT>>(t1912), label__True_543, label__False_544);
      BIND(label__True_543);
            TNode<Int32T> t1913 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1904())));
      *t1908_837 = implicit_cast<TNode<Int32T>>(t1913);
      Goto(label__done_838_1270);
      BIND(label__False_544);
            TNode<Int32T> t1914 = UncheckedCast<Int32T>(from_constexpr7ATint31(implicit_cast<int31_t>(t1905())));
      *t1908_837 = implicit_cast<TNode<Int32T>>(t1914);
      Goto(label__done_838_1270);
      BIND(label__done_838_1270);
    }
    TVARIABLE(Int32T, var2_355_impl);
    auto var2_355 = &var2_355_impl;
    USE(var2_355);
    *var2_355 = implicit_cast<TNode<Int32T>>((*t1908_837).value());
    // ../../test/torque/test-torque.tq:182:5
    *_return_353 = implicit_cast<TNode<Oddball>>(True());
    Goto(label_macro_end_1268);
  }
  BIND(label_macro_end_1268);
  return implicit_cast<TNode<Oddball>>((*_return_353).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestTernaryOperator(TNode<Smi> p_x) {
  TVARIABLE(Smi, _return_356_impl);
  auto _return_356 = &_return_356_impl;
  USE(_return_356);
  Label label_macro_end_1271_impl(this, {_return_356});
  Label* label_macro_end_1271 = &label_macro_end_1271_impl;
  USE(label_macro_end_1271);
  // ../../test/torque/test-torque.tq:185:42
  {
    // ../../test/torque/test-torque.tq:186:5
    auto t1915 = [=]() {
      return implicit_cast<bool>(true);
    };
    auto t1916 = [=]() {
      return implicit_cast<bool>(false);
    };
    TVARIABLE(BoolT, t1917_839_impl);
    auto t1917_839 = &t1917_839_impl;
    USE(t1917_839);
    {
      Label label__True_545_impl(this);
      Label* label__True_545 = &label__True_545_impl;
      USE(label__True_545);
      Label label__False_546_impl(this);
      Label* label__False_546 = &label__False_546_impl;
      USE(label__False_546);
      Label label__done_840_1272_impl(this, {t1917_839});
      Label* label__done_840_1272 = &label__done_840_1272_impl;
      USE(label__done_840_1272);
      int31_t t1918 = 0;
      TNode<Smi> t1919 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1918)));
      TNode<BoolT> t1920 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1919)));
      USE(implicit_cast<TNode<BoolT>>(t1920));
      Branch(implicit_cast<TNode<BoolT>>(t1920), label__True_545, label__False_546);
      BIND(label__True_545);
            TNode<BoolT> t1921 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1915())));
      *t1917_839 = implicit_cast<TNode<BoolT>>(t1921);
      Goto(label__done_840_1272);
      BIND(label__False_546);
            TNode<BoolT> t1922 = UncheckedCast<BoolT>(from_constexpr6ATbool(implicit_cast<bool>(t1916())));
      *t1917_839 = implicit_cast<TNode<BoolT>>(t1922);
      Goto(label__done_840_1272);
      BIND(label__done_840_1272);
    }
    TVARIABLE(BoolT, b_357_impl);
    auto b_357 = &b_357_impl;
    USE(b_357);
    *b_357 = implicit_cast<TNode<BoolT>>((*t1917_839).value());
    // ../../test/torque/test-torque.tq:187:5
    auto t1923 = [=]() {
      int31_t t1925 = 10;
      TNode<Smi> t1926 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1925)));
      TNode<Smi> t1927 = UncheckedCast<Smi>(SmiSub(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1926)));
      USE(implicit_cast<TNode<Smi>>(t1927));
      return implicit_cast<TNode<Smi>>(t1927);
    };
    auto t1924 = [=]() {
      int31_t t1928 = 100;
      TNode<Smi> t1929 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1928)));
      TNode<Smi> t1930 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_x), implicit_cast<TNode<Smi>>(t1929)));
      USE(implicit_cast<TNode<Smi>>(t1930));
      return implicit_cast<TNode<Smi>>(t1930);
    };
    TVARIABLE(Smi, t1931_841_impl);
    auto t1931_841 = &t1931_841_impl;
    USE(t1931_841);
    {
      Label label__True_547_impl(this);
      Label* label__True_547 = &label__True_547_impl;
      USE(label__True_547);
      Label label__False_548_impl(this);
      Label* label__False_548 = &label__False_548_impl;
      USE(label__False_548);
      Label label__done_842_1273_impl(this, {t1931_841});
      Label* label__done_842_1273 = &label__done_842_1273_impl;
      USE(label__done_842_1273);
      Branch(implicit_cast<TNode<BoolT>>((*b_357).value()), label__True_547, label__False_548);
      BIND(label__True_547);
            *t1931_841 = implicit_cast<TNode<Smi>>(t1923());
      Goto(label__done_842_1273);
      BIND(label__False_548);
            *t1931_841 = implicit_cast<TNode<Smi>>(t1924());
      Goto(label__done_842_1273);
      BIND(label__done_842_1273);
    }
    *_return_356 = implicit_cast<TNode<Smi>>((*t1931_841).value());
    Goto(label_macro_end_1271);
  }
  BIND(label_macro_end_1271);
  return implicit_cast<TNode<Smi>>((*_return_356).value());
}

void TestBuiltinsFromDSLAssembler::TestFunctionPointerToGeneric(TNode<Context> p_c) {
  Label label_macro_end_1274_impl(this, {});
  Label* label_macro_end_1274 = &label_macro_end_1274_impl;
  USE(label_macro_end_1274);
  // ../../test/torque/test-torque.tq:190:50
  {
    // ../../test/torque/test-torque.tq:191:5
    TVARIABLE(Code, fptr1_358_impl);
    auto fptr1_358 = &fptr1_358_impl;
    USE(fptr1_358);
    *fptr1_358 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).code()));
    // ../../test/torque/test-torque.tq:192:5
    TVARIABLE(Code, fptr2_359_impl);
    auto fptr2_359 = &fptr2_359_impl;
    USE(fptr2_359);
    *fptr2_359 = implicit_cast<TNode<Code>>(HeapConstant(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).code()));
    // ../../test/torque/test-torque.tq:194:5
    Label label__True_549_impl(this);
    Label* label__True_549 = &label__True_549_impl;
    USE(label__True_549);
    Label label__False_550_impl(this);
    Label* label__False_550 = &label__False_550_impl;
    USE(label__False_550);
    int31_t t1932 = 0;
    TNode<Smi> t1933 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1932)));
    TNode<Object> t1934 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_358).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1933)));
    USE(implicit_cast<TNode<Object>>(t1934));
    TNode<BoolT> t1935 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1934), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1935));
    Branch(implicit_cast<TNode<BoolT>>(t1935), label__True_549, label__False_550);
    BIND(label__False_550);
    Print("assert 'fptr1(c, 0) == Null' failed at ../../test/torque/test-torque.tq:194:5");
    Unreachable();
    BIND(label__True_549);
    // ../../test/torque/test-torque.tq:195:5
    Label label__True_551_impl(this);
    Label* label__True_551 = &label__True_551_impl;
    USE(label__True_551);
    Label label__False_552_impl(this);
    Label* label__False_552 = &label__False_552_impl;
    USE(label__False_552);
    int31_t t1936 = 1;
    TNode<Smi> t1937 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1936)));
    TNode<Object> t1938 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr1_358).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>(t1937)));
    USE(implicit_cast<TNode<Object>>(t1938));
    TNode<BoolT> t1939 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1938), implicit_cast<TNode<Object>>(Null())));
    USE(implicit_cast<TNode<BoolT>>(t1939));
    Branch(implicit_cast<TNode<BoolT>>(t1939), label__True_551, label__False_552);
    BIND(label__False_552);
    Print("assert 'fptr1(c, 1) == Null' failed at ../../test/torque/test-torque.tq:195:5");
    Unreachable();
    BIND(label__True_551);
    // ../../test/torque/test-torque.tq:196:5
    Label label__True_553_impl(this);
    Label* label__True_553 = &label__True_553_impl;
    USE(label__True_553);
    Label label__False_554_impl(this);
    Label* label__False_554 = &label__False_554_impl;
    USE(label__False_554);
    TNode<Object> t1940 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_359).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1940));
    TNode<BoolT> t1941 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1940), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1941));
    Branch(implicit_cast<TNode<BoolT>>(t1941), label__True_553, label__False_554);
    BIND(label__False_554);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:196:5");
    Unreachable();
    BIND(label__True_553);
    // ../../test/torque/test-torque.tq:197:5
    Label label__True_555_impl(this);
    Label* label__True_555 = &label__True_555_impl;
    USE(label__True_555);
    Label label__False_556_impl(this);
    Label* label__False_556 = &label__False_556_impl;
    USE(label__False_556);
    TNode<Object> t1942 = UncheckedCast<Object>(CallStub(Builtins::CallableFor(isolate(), Builtins::kGenericBuiltinTest22UT12ATHeapObject5ATSmi).descriptor(), implicit_cast<TNode<Code>>((*fptr2_359).value()), implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<Object>>(t1942));
    TNode<BoolT> t1943 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<Object>>(t1942), implicit_cast<TNode<Object>>(Undefined())));
    USE(implicit_cast<TNode<BoolT>>(t1943));
    Branch(implicit_cast<TNode<BoolT>>(t1943), label__True_555, label__False_556);
    BIND(label__False_556);
    Print("assert 'fptr2(c, Undefined) == Undefined' failed at ../../test/torque/test-torque.tq:197:5");
    Unreachable();
    BIND(label__True_555);
  }
}

compiler::TNode<Code> TestBuiltinsFromDSLAssembler::TestTypeAlias(TNode<Code> p_x) {
  TVARIABLE(Code, _return_360_impl);
  auto _return_360 = &_return_360_impl;
  USE(_return_360);
  Label label_macro_end_1275_impl(this, {_return_360});
  Label* label_macro_end_1275 = &label_macro_end_1275_impl;
  USE(label_macro_end_1275);
  // ../../test/torque/test-torque.tq:201:42
  {
    // ../../test/torque/test-torque.tq:202:5
    *_return_360 = implicit_cast<TNode<Code>>(p_x);
    Goto(label_macro_end_1275);
  }
  BIND(label_macro_end_1275);
  return implicit_cast<TNode<Code>>((*_return_360).value());
}

compiler::TNode<Oddball> TestBuiltinsFromDSLAssembler::TestUnsafeCast(TNode<Context> p_c, TNode<Number> p_n) {
  TVARIABLE(Oddball, _return_361_impl);
  auto _return_361 = &_return_361_impl;
  USE(_return_361);
  Label label_macro_end_1276_impl(this, {_return_361});
  Label* label_macro_end_1276 = &label_macro_end_1276_impl;
  USE(label_macro_end_1276);
  // ../../test/torque/test-torque.tq:205:56
  {
    // ../../test/torque/test-torque.tq:206:5
    {
      Label label__True_557_impl(this);
      Label* label__True_557 = &label__True_557_impl;
      USE(label__True_557);
      Label label__False_558_impl(this, {});
      Label* label__False_558 = &label__False_558_impl;
      USE(label__False_558);
      TNode<BoolT> t1944 = UncheckedCast<BoolT>(TaggedIsSmi(implicit_cast<TNode<Object>>(p_n)));
      USE(implicit_cast<TNode<BoolT>>(t1944));
      Branch(implicit_cast<TNode<BoolT>>(t1944), label__True_557, label__False_558);
      if (label__True_557->is_used())
      {
        BIND(label__True_557);
        // ../../test/torque/test-torque.tq:206:25
        {
          // ../../test/torque/test-torque.tq:207:7
          TNode<Smi> t1945 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(p_n)));
          USE(implicit_cast<TNode<Smi>>(t1945));
          TVARIABLE(Smi, m_362_impl);
          auto m_362 = &m_362_impl;
          USE(m_362);
          *m_362 = implicit_cast<TNode<Smi>>(t1945);
          // ../../test/torque/test-torque.tq:209:7
          Label label__True_559_impl(this);
          Label* label__True_559 = &label__True_559_impl;
          USE(label__True_559);
          Label label__False_560_impl(this);
          Label* label__False_560 = &label__False_560_impl;
          USE(label__False_560);
          TNode<Smi> t1946 = UncheckedCast<Smi>(CallBuiltin(Builtins::kTestHelperPlus1, implicit_cast<TNode<Context>>(p_c), implicit_cast<TNode<Smi>>((*m_362).value())));
          USE(implicit_cast<TNode<Smi>>(t1946));
          int31_t t1947 = 11;
          TNode<Smi> t1948 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1947)));
          TNode<BoolT> t1949 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t1946), implicit_cast<TNode<Smi>>(t1948)));
          USE(implicit_cast<TNode<BoolT>>(t1949));
          Branch(implicit_cast<TNode<BoolT>>(t1949), label__True_559, label__False_560);
          BIND(label__False_560);
          Print("assert 'TestHelperPlus1(c, m) == 11' failed at ../../test/torque/test-torque.tq:209:7");
          Unreachable();
          BIND(label__True_559);
          // ../../test/torque/test-torque.tq:210:7
          *_return_361 = implicit_cast<TNode<Oddball>>(True());
          Goto(label_macro_end_1276);
        }
      }
      BIND(label__False_558);
    }
    // ../../test/torque/test-torque.tq:212:5
    *_return_361 = implicit_cast<TNode<Oddball>>(False());
    Goto(label_macro_end_1276);
  }
  BIND(label_macro_end_1276);
  return implicit_cast<TNode<Oddball>>((*_return_361).value());
}

void TestBuiltinsFromDSLAssembler::TestHexLiteral() {
  Label label_macro_end_1277_impl(this, {});
  Label* label_macro_end_1277 = &label_macro_end_1277_impl;
  USE(label_macro_end_1277);
  // ../../test/torque/test-torque.tq:215:26
  {
    // ../../test/torque/test-torque.tq:216:5
    Label label__True_561_impl(this);
    Label* label__True_561 = &label__True_561_impl;
    USE(label__True_561);
    Label label__False_562_impl(this);
    Label* label__False_562 = &label__False_562_impl;
    USE(label__False_562);
    int31_t t1950 = 0xffff;
    TNode<IntPtrT> t1951 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(t1950)));
    USE(implicit_cast<TNode<IntPtrT>>(t1951));
    int31_t t1952 = 1;
    TNode<IntPtrT> t1953 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1952)));
    TNode<IntPtrT> t1954 = UncheckedCast<IntPtrT>(IntPtrAdd(implicit_cast<TNode<IntPtrT>>(t1951), implicit_cast<TNode<IntPtrT>>(t1953)));
    USE(implicit_cast<TNode<IntPtrT>>(t1954));
    int31_t t1955 = 0x10000;
    TNode<IntPtrT> t1956 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1955)));
    TNode<BoolT> t1957 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t1954), implicit_cast<TNode<IntPtrT>>(t1956)));
    USE(implicit_cast<TNode<BoolT>>(t1957));
    Branch(implicit_cast<TNode<BoolT>>(t1957), label__True_561, label__False_562);
    BIND(label__False_562);
    Print("assert 'convert<intptr>(0xffff) + 1 == 0x10000' failed at ../../test/torque/test-torque.tq:216:5");
    Unreachable();
    BIND(label__True_561);
    // ../../test/torque/test-torque.tq:217:5
    Label label__True_563_impl(this);
    Label* label__True_563 = &label__True_563_impl;
    USE(label__True_563);
    Label label__False_564_impl(this);
    Label* label__False_564 = &label__False_564_impl;
    USE(label__False_564);
    int31_t t1958 = -0xffff;
    TNode<IntPtrT> t1959 = UncheckedCast<IntPtrT>(convert8ATintptr(implicit_cast<int31_t>(t1958)));
    USE(implicit_cast<TNode<IntPtrT>>(t1959));
    int31_t t1960 = -65535;
    TNode<IntPtrT> t1961 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1960)));
    TNode<BoolT> t1962 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(t1959), implicit_cast<TNode<IntPtrT>>(t1961)));
    USE(implicit_cast<TNode<BoolT>>(t1962));
    Branch(implicit_cast<TNode<BoolT>>(t1962), label__True_563, label__False_564);
    BIND(label__False_564);
    Print("assert 'convert<intptr>(-0xffff) == -65535' failed at ../../test/torque/test-torque.tq:217:5");
    Unreachable();
    BIND(label__True_563);
  }
}

void TestBuiltinsFromDSLAssembler::TestLargeIntegerLiterals(TNode<Context> p_c) {
  Label label_macro_end_1278_impl(this, {});
  Label* label_macro_end_1278 = &label_macro_end_1278_impl;
  USE(label_macro_end_1278);
  // ../../test/torque/test-torque.tq:220:46
  {
    // ../../test/torque/test-torque.tq:221:5
    int32_t t1963 = 0x40000000;
    TVARIABLE(Int32T, x_363_impl);
    auto x_363 = &x_363_impl;
    USE(x_363);
    TNode<Int32T> t1964 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int32_t>(t1963)));
    *x_363 = implicit_cast<TNode<Int32T>>(t1964);
    // ../../test/torque/test-torque.tq:222:5
    int32_t t1965 = 0x7fffffff;
    TVARIABLE(Int32T, y_364_impl);
    auto y_364 = &y_364_impl;
    USE(y_364);
    TNode<Int32T> t1966 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int32_t>(t1965)));
    *y_364 = implicit_cast<TNode<Int32T>>(t1966);
  }
}

void TestBuiltinsFromDSLAssembler::TestMultilineAssert() {
  Label label_macro_end_1279_impl(this, {});
  Label* label_macro_end_1279 = &label_macro_end_1279_impl;
  USE(label_macro_end_1279);
  // ../../test/torque/test-torque.tq:225:31
  {
    // ../../test/torque/test-torque.tq:226:5
    int31_t t1967 = 5;
    TVARIABLE(Smi, someVeryLongVariableNameThatWillCauseLineBreaks_365_impl);
    auto someVeryLongVariableNameThatWillCauseLineBreaks_365 = &someVeryLongVariableNameThatWillCauseLineBreaks_365_impl;
    USE(someVeryLongVariableNameThatWillCauseLineBreaks_365);
    TNode<Smi> t1968 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1967)));
    *someVeryLongVariableNameThatWillCauseLineBreaks_365 = implicit_cast<TNode<Smi>>(t1968);
    // ../../test/torque/test-torque.tq:227:5
    Label label__True_565_impl(this);
    Label* label__True_565 = &label__True_565_impl;
    USE(label__True_565);
    Label label__False_566_impl(this);
    Label* label__False_566 = &label__False_566_impl;
    USE(label__False_566);
    Label label__True_567_impl(this);
    Label* label__True_567 = &label__True_567_impl;
    USE(label__True_567);
    int31_t t1969 = 0;
    TNode<Smi> t1970 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1969)));
    TNode<BoolT> t1971 = UncheckedCast<BoolT>(SmiGreaterThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_365).value()), implicit_cast<TNode<Smi>>(t1970)));
    USE(implicit_cast<TNode<BoolT>>(t1971));
    GotoIfNot(implicit_cast<TNode<BoolT>>(t1971), label__False_566);
    int31_t t1972 = 10;
    TNode<Smi> t1973 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1972)));
    TNode<BoolT> t1974 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*someVeryLongVariableNameThatWillCauseLineBreaks_365).value()), implicit_cast<TNode<Smi>>(t1973)));
    USE(implicit_cast<TNode<BoolT>>(t1974));
    Branch(implicit_cast<TNode<BoolT>>(t1974), label__True_565, label__False_566);
    BIND(label__False_566);
    Print("assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed at ../../test/torque/test-torque.tq:227:5");
    Unreachable();
    BIND(label__True_565);
  }
}

void TestBuiltinsFromDSLAssembler::TestNewlineInString() {
  Label label_macro_end_1280_impl(this, {});
  Label* label_macro_end_1280 = &label_macro_end_1280_impl;
  USE(label_macro_end_1280);
  // ../../test/torque/test-torque.tq:232:31
  {
    // ../../test/torque/test-torque.tq:233:5
    const char* t1975 = "Hello, World!\n";
    Print(implicit_cast<const char*>(t1975));
  }
}

int31_t TestBuiltinsFromDSLAssembler::kConstexprConst() {
  int31_t t1976 = 5;
  return implicit_cast<int31_t>(t1976);
}

compiler::TNode<IntPtrT> TestBuiltinsFromDSLAssembler::kIntptrConst() {
  int31_t t1977 = 4;
  TNode<IntPtrT> t1978 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1977)));
  return implicit_cast<TNode<IntPtrT>>(t1978);
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::kSmiConst() {
  int31_t t1979 = 3;
  TNode<Smi> t1980 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1979)));
  return implicit_cast<TNode<Smi>>(t1980);
}

void TestBuiltinsFromDSLAssembler::TestModuleConstBindings() {
  Label label_macro_end_1281_impl(this, {});
  Label* label_macro_end_1281 = &label_macro_end_1281_impl;
  USE(label_macro_end_1281);
  // ../../test/torque/test-torque.tq:240:35
  {
    // ../../test/torque/test-torque.tq:241:5
    Label label__True_568_impl(this);
    Label* label__True_568 = &label__True_568_impl;
    USE(label__True_568);
    Label label__False_569_impl(this);
    Label* label__False_569 = &label__False_569_impl;
    USE(label__False_569);
    int31_t t1981 = 5;
    TNode<Int32T> t1982 = UncheckedCast<Int32T>(Int32Constant(implicit_cast<int31_t>(t1981)));
    USE(implicit_cast<TNode<Int32T>>(t1982));
    TNode<Int32T> t1983 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(kConstexprConst())));
    TNode<BoolT> t1984 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t1983), implicit_cast<TNode<Int32T>>(t1982)));
    USE(implicit_cast<TNode<BoolT>>(t1984));
    Branch(implicit_cast<TNode<BoolT>>(t1984), label__True_568, label__False_569);
    BIND(label__False_569);
    Print("assert 'kConstexprConst == Int32Constant(5)' failed at ../../test/torque/test-torque.tq:241:5");
    Unreachable();
    BIND(label__True_568);
    // ../../test/torque/test-torque.tq:242:5
    Label label__True_570_impl(this);
    Label* label__True_570 = &label__True_570_impl;
    USE(label__True_570);
    Label label__False_571_impl(this);
    Label* label__False_571 = &label__False_571_impl;
    USE(label__False_571);
    int31_t t1985 = 4;
    TNode<IntPtrT> t1986 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t1985)));
    TNode<BoolT> t1987 = UncheckedCast<BoolT>(WordEqual(implicit_cast<TNode<IntPtrT>>(kIntptrConst()), implicit_cast<TNode<IntPtrT>>(t1986)));
    USE(implicit_cast<TNode<BoolT>>(t1987));
    Branch(implicit_cast<TNode<BoolT>>(t1987), label__True_570, label__False_571);
    BIND(label__False_571);
    Print("assert 'kIntptrConst == 4' failed at ../../test/torque/test-torque.tq:242:5");
    Unreachable();
    BIND(label__True_570);
    // ../../test/torque/test-torque.tq:243:5
    Label label__True_572_impl(this);
    Label* label__True_572 = &label__True_572_impl;
    USE(label__True_572);
    Label label__False_573_impl(this);
    Label* label__False_573 = &label__False_573_impl;
    USE(label__False_573);
    int31_t t1988 = 3;
    TNode<Smi> t1989 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1988)));
    TNode<BoolT> t1990 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(kSmiConst()), implicit_cast<TNode<Smi>>(t1989)));
    USE(implicit_cast<TNode<BoolT>>(t1990));
    Branch(implicit_cast<TNode<BoolT>>(t1990), label__True_572, label__False_573);
    BIND(label__False_573);
    Print("assert 'kSmiConst == 3' failed at ../../test/torque/test-torque.tq:243:5");
    Unreachable();
    BIND(label__True_572);
  }
}

void TestBuiltinsFromDSLAssembler::TestLocalConstBindings() {
  Label label_macro_end_1282_impl(this, {});
  Label* label_macro_end_1282 = &label_macro_end_1282_impl;
  USE(label_macro_end_1282);
  // ../../test/torque/test-torque.tq:246:34
  {
    // ../../test/torque/test-torque.tq:247:5
    int31_t t1991 = 3;
    int31_t x_843_impl;
    auto x_843 = &x_843_impl;
    USE(x_843);
    *x_843 = implicit_cast<int31_t>(t1991);
    // ../../test/torque/test-torque.tq:248:5
    TNode<Smi> x_smi_844_impl;
    auto x_smi_844 = &x_smi_844_impl;
    USE(x_smi_844);
    TNode<Smi> t1992 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_843))));
    *x_smi_844 = implicit_cast<TNode<Smi>>(t1992);
    // ../../test/torque/test-torque.tq:249:5
    {
      // ../../test/torque/test-torque.tq:250:7
      int31_t t1993 = 1;
      TNode<Smi> t1994 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1993)));
      USE(implicit_cast<TNode<Smi>>(t1994));
      TNode<Smi> t1995 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_843))));
      TNode<Smi> t1996 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(t1995), implicit_cast<TNode<Smi>>(t1994)));
      USE(implicit_cast<TNode<Smi>>(t1996));
      TNode<Smi> x_845_impl;
      auto x_845 = &x_845_impl;
      USE(x_845);
      *x_845 = implicit_cast<TNode<Smi>>(t1996);
      // ../../test/torque/test-torque.tq:251:7
      Label label__True_574_impl(this);
      Label* label__True_574 = &label__True_574_impl;
      USE(label__True_574);
      Label label__False_575_impl(this);
      Label* label__False_575 = &label__False_575_impl;
      USE(label__False_575);
      int31_t t1997 = 1;
      TNode<Smi> t1998 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t1997)));
      TNode<Smi> t1999 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*x_smi_844)), implicit_cast<TNode<Smi>>(t1998)));
      USE(implicit_cast<TNode<Smi>>(t1999));
      TNode<BoolT> t2000 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_845)), implicit_cast<TNode<Smi>>(t1999)));
      USE(implicit_cast<TNode<BoolT>>(t2000));
      Branch(implicit_cast<TNode<BoolT>>(t2000), label__True_574, label__False_575);
      BIND(label__False_575);
      Print("assert 'x == x_smi + 1' failed at ../../test/torque/test-torque.tq:251:7");
      Unreachable();
      BIND(label__True_574);
      // ../../test/torque/test-torque.tq:252:7
      TNode<Smi> x_smi_846_impl;
      auto x_smi_846 = &x_smi_846_impl;
      USE(x_smi_846);
      *x_smi_846 = implicit_cast<TNode<Smi>>((*x_845));
      // ../../test/torque/test-torque.tq:253:7
      Label label__True_576_impl(this);
      Label* label__True_576 = &label__True_576_impl;
      USE(label__True_576);
      Label label__False_577_impl(this);
      Label* label__False_577 = &label__False_577_impl;
      USE(label__False_577);
      TNode<BoolT> t2001 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_845)), implicit_cast<TNode<Smi>>((*x_smi_846))));
      USE(implicit_cast<TNode<BoolT>>(t2001));
      Branch(implicit_cast<TNode<BoolT>>(t2001), label__True_576, label__False_577);
      BIND(label__False_577);
      Print("assert 'x == x_smi' failed at ../../test/torque/test-torque.tq:253:7");
      Unreachable();
      BIND(label__True_576);
      // ../../test/torque/test-torque.tq:254:7
      Label label__True_578_impl(this);
      Label* label__True_578 = &label__True_578_impl;
      USE(label__True_578);
      Label label__False_579_impl(this);
      Label* label__False_579 = &label__False_579_impl;
      USE(label__False_579);
      int31_t t2002 = 4;
      TNode<Smi> t2003 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2002)));
      TNode<BoolT> t2004 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_845)), implicit_cast<TNode<Smi>>(t2003)));
      USE(implicit_cast<TNode<BoolT>>(t2004));
      Branch(implicit_cast<TNode<BoolT>>(t2004), label__True_578, label__False_579);
      BIND(label__False_579);
      Print("assert 'x == 4' failed at ../../test/torque/test-torque.tq:254:7");
      Unreachable();
      BIND(label__True_578);
    }
    // ../../test/torque/test-torque.tq:256:5
    Label label__True_580_impl(this);
    Label* label__True_580 = &label__True_580_impl;
    USE(label__True_580);
    Label label__False_581_impl(this);
    Label* label__False_581 = &label__False_581_impl;
    USE(label__False_581);
    int31_t t2005 = 3;
    TNode<Smi> t2006 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2005)));
    TNode<BoolT> t2007 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*x_smi_844)), implicit_cast<TNode<Smi>>(t2006)));
    USE(implicit_cast<TNode<BoolT>>(t2007));
    Branch(implicit_cast<TNode<BoolT>>(t2007), label__True_580, label__False_581);
    BIND(label__False_581);
    Print("assert 'x_smi == 3' failed at ../../test/torque/test-torque.tq:256:5");
    Unreachable();
    BIND(label__True_580);
    // ../../test/torque/test-torque.tq:257:5
    Label label__True_582_impl(this);
    Label* label__True_582 = &label__True_582_impl;
    USE(label__True_582);
    Label label__False_583_impl(this);
    Label* label__False_583 = &label__False_583_impl;
    USE(label__False_583);
    TNode<Smi> t2008 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>((*x_843))));
    TNode<BoolT> t2009 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2008), implicit_cast<TNode<Smi>>((*x_smi_844))));
    USE(implicit_cast<TNode<BoolT>>(t2009));
    Branch(implicit_cast<TNode<BoolT>>(t2009), label__True_582, label__False_583);
    BIND(label__False_583);
    Print("assert 'x == x_smi' failed at ../../test/torque/test-torque.tq:257:5");
    Unreachable();
    BIND(label__True_582);
  }
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::TestStruct1(TestStructA p_i) {
  TVARIABLE(Smi, _return_366_impl);
  auto _return_366 = &_return_366_impl;
  USE(_return_366);
  Label label_macro_end_1283_impl(this, {_return_366});
  Label* label_macro_end_1283 = &label_macro_end_1283_impl;
  USE(label_macro_end_1283);
  // ../../test/torque/test-torque.tq:271:42
  {
    // ../../test/torque/test-torque.tq:272:5
    *_return_366 = implicit_cast<TNode<Smi>>(p_i.i);
    Goto(label_macro_end_1283);
  }
  BIND(label_macro_end_1283);
  return implicit_cast<TNode<Smi>>((*_return_366).value());
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct2() {
  TVARIABLE(FixedArray, _return_indexes_368_impl);
  auto _return_indexes_368 = &_return_indexes_368_impl;
  USE(_return_indexes_368);
  TVARIABLE(Smi, _return_i_369_impl);
  auto _return_i_369 = &_return_i_369_impl;
  USE(_return_i_369);
  TVARIABLE(Number, _return_k_370_impl);
  auto _return_k_370 = &_return_k_370_impl;
  USE(_return_k_370);
  Label label_macro_end_1284_impl(this, {_return_i_369, _return_indexes_368, _return_k_370});
  Label* label_macro_end_1284 = &label_macro_end_1284_impl;
  USE(label_macro_end_1284);
  // ../../test/torque/test-torque.tq:275:36
  {
    // ../../test/torque/test-torque.tq:276:5
    TNode<FixedArray> t2010 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2010));
    int31_t t2011 = 27;
    TNode<Smi> t2012 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2011)));
    int31_t t2013 = 31;
    TNode<Number> t2014 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2013)));
    TestStructA t2015 = {implicit_cast<TNode<FixedArray>>(t2010), implicit_cast<TNode<Smi>>(t2012), implicit_cast<TNode<Number>>(t2014)};
    *_return_indexes_368 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2015).indexes);
    *_return_i_369 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2015).i);
    *_return_k_370 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2015).k);
    Goto(label_macro_end_1284);
  }
  BIND(label_macro_end_1284);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_368).value()), implicit_cast<TNode<Smi>>((*_return_i_369).value()), implicit_cast<TNode<Number>>((*_return_k_370).value())};
}

TestBuiltinsFromDSLAssembler::TestStructA TestBuiltinsFromDSLAssembler::TestStruct3() {
  TVARIABLE(FixedArray, _return_indexes_372_impl);
  auto _return_indexes_372 = &_return_indexes_372_impl;
  USE(_return_indexes_372);
  TVARIABLE(Smi, _return_i_373_impl);
  auto _return_i_373 = &_return_i_373_impl;
  USE(_return_i_373);
  TVARIABLE(Number, _return_k_374_impl);
  auto _return_k_374 = &_return_k_374_impl;
  USE(_return_k_374);
  Label label_macro_end_1285_impl(this, {_return_i_373, _return_indexes_372, _return_k_374});
  Label* label_macro_end_1285 = &label_macro_end_1285_impl;
  USE(label_macro_end_1285);
  // ../../test/torque/test-torque.tq:279:36
  {
    // ../../test/torque/test-torque.tq:280:5
    TNode<FixedArray> t2016 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2016));
    int31_t t2017 = 13;
    TNode<Smi> t2018 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2017)));
    int31_t t2019 = 5;
    TNode<Number> t2020 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2019)));
    TestStructA t2021 = {implicit_cast<TNode<FixedArray>>(t2016), implicit_cast<TNode<Smi>>(t2018), implicit_cast<TNode<Number>>(t2020)};
    TVARIABLE(FixedArray, a_indexes_376_impl);
    auto a_indexes_376 = &a_indexes_376_impl;
    USE(a_indexes_376);
    TVARIABLE(Smi, a_i_377_impl);
    auto a_i_377 = &a_i_377_impl;
    USE(a_i_377);
    TVARIABLE(Number, a_k_378_impl);
    auto a_k_378 = &a_k_378_impl;
    USE(a_k_378);
    *a_indexes_376 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2021).indexes);
    *a_i_377 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2021).i);
    *a_k_378 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2021).k);
    // ../../test/torque/test-torque.tq:282:5
    TVARIABLE(FixedArray, b_indexes_380_impl);
    auto b_indexes_380 = &b_indexes_380_impl;
    USE(b_indexes_380);
    TVARIABLE(Smi, b_i_381_impl);
    auto b_i_381 = &b_i_381_impl;
    USE(b_i_381);
    TVARIABLE(Number, b_k_382_impl);
    auto b_k_382 = &b_k_382_impl;
    USE(b_k_382);
    *b_indexes_380 = implicit_cast<TNode<FixedArray>>((*a_indexes_376).value());
    *b_i_381 = implicit_cast<TNode<Smi>>((*a_i_377).value());
    *b_k_382 = implicit_cast<TNode<Number>>((*a_k_378).value());
    // ../../test/torque/test-torque.tq:283:5
    TestStructA t2022 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2022));
    TVARIABLE(FixedArray, c_indexes_384_impl);
    auto c_indexes_384 = &c_indexes_384_impl;
    USE(c_indexes_384);
    TVARIABLE(Smi, c_i_385_impl);
    auto c_i_385 = &c_i_385_impl;
    USE(c_i_385);
    TVARIABLE(Number, c_k_386_impl);
    auto c_k_386 = &c_k_386_impl;
    USE(c_k_386);
    *c_indexes_384 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(t2022).indexes);
    *c_i_385 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2022).i);
    *c_k_386 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(t2022).k);
    // ../../test/torque/test-torque.tq:284:5
    TNode<Smi> t2023 = UncheckedCast<Smi>(TestStruct1(TestStructA{implicit_cast<TNode<FixedArray>>((*c_indexes_384).value()), implicit_cast<TNode<Smi>>((*c_i_385).value()), implicit_cast<TNode<Number>>((*c_k_386).value())}));
    USE(implicit_cast<TNode<Smi>>(t2023));
    *a_i_377 = implicit_cast<TNode<Smi>>(t2023);
    // ../../test/torque/test-torque.tq:285:5
    *a_k_378 = implicit_cast<TNode<Number>>((*a_i_377).value());
    // ../../test/torque/test-torque.tq:286:5
    TVARIABLE(FixedArray, d_x_indexes_389_impl);
    auto d_x_indexes_389 = &d_x_indexes_389_impl;
    USE(d_x_indexes_389);
    TVARIABLE(Smi, d_x_i_390_impl);
    auto d_x_i_390 = &d_x_i_390_impl;
    USE(d_x_i_390);
    TVARIABLE(Number, d_x_k_391_impl);
    auto d_x_k_391 = &d_x_k_391_impl;
    USE(d_x_k_391);
    TVARIABLE(Smi, d_y_392_impl);
    auto d_y_392 = &d_y_392_impl;
    USE(d_y_392);
    // ../../test/torque/test-torque.tq:287:5
    *d_x_indexes_389 = implicit_cast<TNode<FixedArray>>((*a_indexes_376).value());
    *d_x_i_390 = implicit_cast<TNode<Smi>>((*a_i_377).value());
    *d_x_k_391 = implicit_cast<TNode<Number>>((*a_k_378).value());
    // ../../test/torque/test-torque.tq:288:5
    int31_t t2024 = 7;
    TNode<Smi> t2025 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2024)));
    TestStructB t2026 = {TestStructA{implicit_cast<TNode<FixedArray>>((*a_indexes_376).value()), implicit_cast<TNode<Smi>>((*a_i_377).value()), implicit_cast<TNode<Number>>((*a_k_378).value())}, implicit_cast<TNode<Smi>>(t2025)};
    *d_x_indexes_389 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2026).x).indexes);
    *d_x_i_390 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2026).x).i);
    *d_x_k_391 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructB>(t2026).x).k);
    *d_y_392 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructB>(t2026).y);
    // ../../test/torque/test-torque.tq:289:5
    TVARIABLE(FixedArray, e_indexes_394_impl);
    auto e_indexes_394 = &e_indexes_394_impl;
    USE(e_indexes_394);
    TVARIABLE(Smi, e_i_395_impl);
    auto e_i_395 = &e_i_395_impl;
    USE(e_i_395);
    TVARIABLE(Number, e_k_396_impl);
    auto e_k_396 = &e_k_396_impl;
    USE(e_k_396);
    *e_indexes_394 = implicit_cast<TNode<FixedArray>>((*d_x_indexes_389).value());
    *e_i_395 = implicit_cast<TNode<Smi>>((*d_x_i_390).value());
    *e_k_396 = implicit_cast<TNode<Number>>((*d_x_k_391).value());
    // ../../test/torque/test-torque.tq:290:5
    TNode<FixedArray> t2027 = UncheckedCast<FixedArray>(unsafe_cast12ATFixedArray(implicit_cast<TNode<Object>>(kEmptyFixedArray())));
    USE(implicit_cast<TNode<FixedArray>>(t2027));
    int31_t t2028 = 27;
    TNode<Smi> t2029 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2028)));
    int31_t t2030 = 31;
    TNode<Number> t2031 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<int31_t>(t2030)));
    TestStructA t2032 = {implicit_cast<TNode<FixedArray>>(t2027), implicit_cast<TNode<Smi>>(t2029), implicit_cast<TNode<Number>>(t2031)};
    TVARIABLE(Smi, f_397_impl);
    auto f_397 = &f_397_impl;
    USE(f_397);
    *f_397 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2032).i);
    // ../../test/torque/test-torque.tq:291:5
    TestStructA t2033 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2033));
    *f_397 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(t2033).i);
    // ../../test/torque/test-torque.tq:292:5
    *_return_indexes_372 = implicit_cast<TNode<FixedArray>>((*a_indexes_376).value());
    *_return_i_373 = implicit_cast<TNode<Smi>>((*a_i_377).value());
    *_return_k_374 = implicit_cast<TNode<Number>>((*a_k_378).value());
    Goto(label_macro_end_1285);
  }
  BIND(label_macro_end_1285);
  return TestStructA{implicit_cast<TNode<FixedArray>>((*_return_indexes_372).value()), implicit_cast<TNode<Smi>>((*_return_i_373).value()), implicit_cast<TNode<Number>>((*_return_k_374).value())};
}

TestBuiltinsFromDSLAssembler::TestStructC TestBuiltinsFromDSLAssembler::TestStruct4() {
  TVARIABLE(FixedArray, _return_x_indexes_400_impl);
  auto _return_x_indexes_400 = &_return_x_indexes_400_impl;
  USE(_return_x_indexes_400);
  TVARIABLE(Smi, _return_x_i_401_impl);
  auto _return_x_i_401 = &_return_x_i_401_impl;
  USE(_return_x_i_401);
  TVARIABLE(Number, _return_x_k_402_impl);
  auto _return_x_k_402 = &_return_x_k_402_impl;
  USE(_return_x_k_402);
  TVARIABLE(FixedArray, _return_y_indexes_404_impl);
  auto _return_y_indexes_404 = &_return_y_indexes_404_impl;
  USE(_return_y_indexes_404);
  TVARIABLE(Smi, _return_y_i_405_impl);
  auto _return_y_i_405 = &_return_y_i_405_impl;
  USE(_return_y_i_405);
  TVARIABLE(Number, _return_y_k_406_impl);
  auto _return_y_k_406 = &_return_y_k_406_impl;
  USE(_return_y_k_406);
  Label label_macro_end_1286_impl(this, {_return_x_i_401, _return_x_indexes_400, _return_x_k_402, _return_y_i_405, _return_y_indexes_404, _return_y_k_406});
  Label* label_macro_end_1286 = &label_macro_end_1286_impl;
  USE(label_macro_end_1286);
  // ../../test/torque/test-torque.tq:300:36
  {
    // ../../test/torque/test-torque.tq:301:5
    TestStructA t2034 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2034));
    TestStructA t2035 = (TestStruct2());
    USE(implicit_cast<TestStructA>(t2035));
    TestStructC t2036 = {implicit_cast<TestStructA>(t2034), implicit_cast<TestStructA>(t2035)};
    *_return_x_indexes_400 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2036).x).indexes);
    *_return_x_i_401 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2036).x).i);
    *_return_x_k_402 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2036).x).k);
    *_return_y_indexes_404 = implicit_cast<TNode<FixedArray>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2036).y).indexes);
    *_return_y_i_405 = implicit_cast<TNode<Smi>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2036).y).i);
    *_return_y_k_406 = implicit_cast<TNode<Number>>(implicit_cast<TestStructA>(implicit_cast<TestStructC>(t2036).y).k);
    Goto(label_macro_end_1286);
  }
  BIND(label_macro_end_1286);
  return TestStructC{TestStructA{implicit_cast<TNode<FixedArray>>((*_return_x_indexes_400).value()), implicit_cast<TNode<Smi>>((*_return_x_i_401).value()), implicit_cast<TNode<Number>>((*_return_x_k_402).value())}, TestStructA{implicit_cast<TNode<FixedArray>>((*_return_y_indexes_404).value()), implicit_cast<TNode<Smi>>((*_return_y_i_405).value()), implicit_cast<TNode<Number>>((*_return_y_k_406).value())}};
}

void TestBuiltinsFromDSLAssembler::TestForLoop() {
  Label label_macro_end_1287_impl(this, {});
  Label* label_macro_end_1287 = &label_macro_end_1287_impl;
  USE(label_macro_end_1287);
  // ../../test/torque/test-torque.tq:306:23
  {
    // ../../test/torque/test-torque.tq:307:5
    int31_t t2037 = 0;
    TVARIABLE(Smi, sum_407_impl);
    auto sum_407 = &sum_407_impl;
    USE(sum_407);
    TNode<Smi> t2038 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2037)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2038);
    // ../../test/torque/test-torque.tq:308:5
    int31_t t2039 = 0;
    TVARIABLE(Smi, i_408_impl);
    auto i_408 = &i_408_impl;
    USE(i_408);
    TNode<Smi> t2040 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2039)));
    *i_408 = implicit_cast<TNode<Smi>>(t2040);
    Label label__True_584_impl(this);
    Label* label__True_584 = &label__True_584_impl;
    USE(label__True_584);
    Label label__False_585_impl(this);
    Label* label__False_585 = &label__False_585_impl;
    USE(label__False_585);
    Label label_header_847_1288_impl(this, {i_408, sum_407});
    Label* label_header_847_1288 = &label_header_847_1288_impl;
    USE(label_header_847_1288);
    Goto(label_header_847_1288);
    BIND(label_header_847_1288);
    Label label_action_848_1289_impl(this);
    Label* label_action_848_1289 = &label_action_848_1289_impl;
    USE(label_action_848_1289);
    int31_t t2041 = 5;
    TNode<Smi> t2042 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2041)));
    TNode<BoolT> t2043 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_408).value()), implicit_cast<TNode<Smi>>(t2042)));
    USE(implicit_cast<TNode<BoolT>>(t2043));
    Branch(implicit_cast<TNode<BoolT>>(t2043), label__True_584, label__False_585);
    if (label__True_584->is_used())
    {
      BIND(label__True_584);
      // ../../test/torque/test-torque.tq:308:38
      TNode<Smi> t2044 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*i_408).value())));
      *sum_407 = implicit_cast<TNode<Smi>>(t2044);
      Goto(label_action_848_1289);
    }
    {
      BIND(label_action_848_1289);
      TNode<Smi> t2045 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2046 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_408).value()), implicit_cast<TNode<Smi>>(t2045)));
      *i_408 = implicit_cast<TNode<Smi>>(t2046);
      Goto(label_header_847_1288);
    }
    BIND(label__False_585);
    // ../../test/torque/test-torque.tq:309:5
    Label label__True_586_impl(this);
    Label* label__True_586 = &label__True_586_impl;
    USE(label__True_586);
    Label label__False_587_impl(this);
    Label* label__False_587 = &label__False_587_impl;
    USE(label__False_587);
    int31_t t2047 = 10;
    TNode<Smi> t2048 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2047)));
    TNode<BoolT> t2049 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2048)));
    USE(implicit_cast<TNode<BoolT>>(t2049));
    Branch(implicit_cast<TNode<BoolT>>(t2049), label__True_586, label__False_587);
    BIND(label__False_587);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:309:5");
    Unreachable();
    BIND(label__True_586);
    // ../../test/torque/test-torque.tq:311:5
    int31_t t2050 = 0;
    TNode<Smi> t2051 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2050)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2051);
    // ../../test/torque/test-torque.tq:312:5
    int31_t t2052 = 0;
    TVARIABLE(Smi, j_409_impl);
    auto j_409 = &j_409_impl;
    USE(j_409);
    TNode<Smi> t2053 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2052)));
    *j_409 = implicit_cast<TNode<Smi>>(t2053);
    // ../../test/torque/test-torque.tq:313:5
    Label label__True_588_impl(this);
    Label* label__True_588 = &label__True_588_impl;
    USE(label__True_588);
    Label label__False_589_impl(this);
    Label* label__False_589 = &label__False_589_impl;
    USE(label__False_589);
    Label label_header_849_1290_impl(this, {j_409, sum_407});
    Label* label_header_849_1290 = &label_header_849_1290_impl;
    USE(label_header_849_1290);
    Goto(label_header_849_1290);
    BIND(label_header_849_1290);
    Label label_action_850_1291_impl(this);
    Label* label_action_850_1291 = &label_action_850_1291_impl;
    USE(label_action_850_1291);
    int31_t t2054 = 5;
    TNode<Smi> t2055 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2054)));
    TNode<BoolT> t2056 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2055)));
    USE(implicit_cast<TNode<BoolT>>(t2056));
    Branch(implicit_cast<TNode<BoolT>>(t2056), label__True_588, label__False_589);
    if (label__True_588->is_used())
    {
      BIND(label__True_588);
      // ../../test/torque/test-torque.tq:313:24
      TNode<Smi> t2057 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*j_409).value())));
      *sum_407 = implicit_cast<TNode<Smi>>(t2057);
      Goto(label_action_850_1291);
    }
    {
      BIND(label_action_850_1291);
      TNode<Smi> t2058 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2059 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2058)));
      *j_409 = implicit_cast<TNode<Smi>>(t2059);
      Goto(label_header_849_1290);
    }
    BIND(label__False_589);
    // ../../test/torque/test-torque.tq:314:5
    Label label__True_590_impl(this);
    Label* label__True_590 = &label__True_590_impl;
    USE(label__True_590);
    Label label__False_591_impl(this);
    Label* label__False_591 = &label__False_591_impl;
    USE(label__False_591);
    int31_t t2060 = 10;
    TNode<Smi> t2061 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2060)));
    TNode<BoolT> t2062 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2061)));
    USE(implicit_cast<TNode<BoolT>>(t2062));
    Branch(implicit_cast<TNode<BoolT>>(t2062), label__True_590, label__False_591);
    BIND(label__False_591);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:314:5");
    Unreachable();
    BIND(label__True_590);
    // ../../test/torque/test-torque.tq:316:5
    int31_t t2063 = 0;
    TNode<Smi> t2064 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2063)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2064);
    // ../../test/torque/test-torque.tq:317:5
    int31_t t2065 = 0;
    TNode<Smi> t2066 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2065)));
    *j_409 = implicit_cast<TNode<Smi>>(t2066);
    // ../../test/torque/test-torque.tq:318:5
    Label label__True_592_impl(this);
    Label* label__True_592 = &label__True_592_impl;
    USE(label__True_592);
    Label label__False_593_impl(this);
    Label* label__False_593 = &label__False_593_impl;
    USE(label__False_593);
    Label label_header_851_1292_impl(this, {j_409, sum_407});
    Label* label_header_851_1292 = &label_header_851_1292_impl;
    USE(label_header_851_1292);
    Goto(label_header_851_1292);
    BIND(label_header_851_1292);
    int31_t t2067 = 5;
    TNode<Smi> t2068 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2067)));
    TNode<BoolT> t2069 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2068)));
    USE(implicit_cast<TNode<BoolT>>(t2069));
    Branch(implicit_cast<TNode<BoolT>>(t2069), label__True_592, label__False_593);
    if (label__True_592->is_used())
    {
      BIND(label__True_592);
      // ../../test/torque/test-torque.tq:318:20
      TNode<Smi> t2070 = implicit_cast<TNode<Smi>>((*j_409).value());
      USE(t2070);
      TNode<Smi> t2071 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2072 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2071)));
      *j_409 = implicit_cast<TNode<Smi>>(t2072);
      TNode<Smi> t2073 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2070)));
      *sum_407 = implicit_cast<TNode<Smi>>(t2073);
      Goto(label_header_851_1292);
    }
    BIND(label__False_593);
    // ../../test/torque/test-torque.tq:319:5
    Label label__True_594_impl(this);
    Label* label__True_594 = &label__True_594_impl;
    USE(label__True_594);
    Label label__False_595_impl(this);
    Label* label__False_595 = &label__False_595_impl;
    USE(label__False_595);
    int31_t t2074 = 10;
    TNode<Smi> t2075 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2074)));
    TNode<BoolT> t2076 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2075)));
    USE(implicit_cast<TNode<BoolT>>(t2076));
    Branch(implicit_cast<TNode<BoolT>>(t2076), label__True_594, label__False_595);
    BIND(label__False_595);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:319:5");
    Unreachable();
    BIND(label__True_594);
    // ../../test/torque/test-torque.tq:322:5
    int31_t t2077 = 0;
    TNode<Smi> t2078 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2077)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2078);
    // ../../test/torque/test-torque.tq:323:5
    int31_t t2079 = 0;
    TVARIABLE(Smi, i_410_impl);
    auto i_410 = &i_410_impl;
    USE(i_410);
    TNode<Smi> t2080 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2079)));
    *i_410 = implicit_cast<TNode<Smi>>(t2080);
    Label label__True_596_impl(this);
    Label* label__True_596 = &label__True_596_impl;
    USE(label__True_596);
    Label label__False_597_impl(this);
    Label* label__False_597 = &label__False_597_impl;
    USE(label__False_597);
    Label label_header_852_1293_impl(this, {i_410, sum_407});
    Label* label_header_852_1293 = &label_header_852_1293_impl;
    USE(label_header_852_1293);
    Goto(label_header_852_1293);
    BIND(label_header_852_1293);
    Label label_action_853_1294_impl(this);
    Label* label_action_853_1294 = &label_action_853_1294_impl;
    USE(label_action_853_1294);
    Goto(label__True_596);
    if (label__True_596->is_used())
    {
      BIND(label__True_596);
      // ../../test/torque/test-torque.tq:323:32
      {
        // ../../test/torque/test-torque.tq:324:7
        {
          Label label__True_598_impl(this);
          Label* label__True_598 = &label__True_598_impl;
          USE(label__True_598);
          Label label__False_599_impl(this, {});
          Label* label__False_599 = &label__False_599_impl;
          USE(label__False_599);
          int31_t t2081 = 5;
          TNode<Smi> t2082 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2081)));
          TNode<BoolT> t2083 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_410).value()), implicit_cast<TNode<Smi>>(t2082)));
          USE(implicit_cast<TNode<BoolT>>(t2083));
          Branch(implicit_cast<TNode<BoolT>>(t2083), label__True_598, label__False_599);
          if (label__True_598->is_used())
          {
            BIND(label__True_598);
            // ../../test/torque/test-torque.tq:324:19
            Goto(label__False_597);
          }
          BIND(label__False_599);
        }
        // ../../test/torque/test-torque.tq:325:7
        TNode<Smi> t2084 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*i_410).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2084);
      }
      Goto(label_action_853_1294);
    }
    {
      BIND(label_action_853_1294);
      TNode<Smi> t2085 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2086 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_410).value()), implicit_cast<TNode<Smi>>(t2085)));
      *i_410 = implicit_cast<TNode<Smi>>(t2086);
      Goto(label_header_852_1293);
    }
    BIND(label__False_597);
    // ../../test/torque/test-torque.tq:327:5
    Label label__True_600_impl(this);
    Label* label__True_600 = &label__True_600_impl;
    USE(label__True_600);
    Label label__False_601_impl(this);
    Label* label__False_601 = &label__False_601_impl;
    USE(label__False_601);
    int31_t t2087 = 10;
    TNode<Smi> t2088 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2087)));
    TNode<BoolT> t2089 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2088)));
    USE(implicit_cast<TNode<BoolT>>(t2089));
    Branch(implicit_cast<TNode<BoolT>>(t2089), label__True_600, label__False_601);
    BIND(label__False_601);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:327:5");
    Unreachable();
    BIND(label__True_600);
    // ../../test/torque/test-torque.tq:329:5
    int31_t t2090 = 0;
    TNode<Smi> t2091 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2090)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2091);
    // ../../test/torque/test-torque.tq:330:5
    int31_t t2092 = 0;
    TNode<Smi> t2093 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2092)));
    *j_409 = implicit_cast<TNode<Smi>>(t2093);
    // ../../test/torque/test-torque.tq:331:5
    Label label__True_602_impl(this);
    Label* label__True_602 = &label__True_602_impl;
    USE(label__True_602);
    Label label__False_603_impl(this);
    Label* label__False_603 = &label__False_603_impl;
    USE(label__False_603);
    Label label_header_854_1295_impl(this, {j_409, sum_407});
    Label* label_header_854_1295 = &label_header_854_1295_impl;
    USE(label_header_854_1295);
    Goto(label_header_854_1295);
    BIND(label_header_854_1295);
    Goto(label__True_602);
    if (label__True_602->is_used())
    {
      BIND(label__True_602);
      // ../../test/torque/test-torque.tq:331:14
      {
        // ../../test/torque/test-torque.tq:332:7
        {
          Label label__True_604_impl(this);
          Label* label__True_604 = &label__True_604_impl;
          USE(label__True_604);
          Label label__False_605_impl(this, {});
          Label* label__False_605 = &label__False_605_impl;
          USE(label__False_605);
          int31_t t2094 = 5;
          TNode<Smi> t2095 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2094)));
          TNode<BoolT> t2096 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2095)));
          USE(implicit_cast<TNode<BoolT>>(t2096));
          Branch(implicit_cast<TNode<BoolT>>(t2096), label__True_604, label__False_605);
          if (label__True_604->is_used())
          {
            BIND(label__True_604);
            // ../../test/torque/test-torque.tq:332:19
            Goto(label__False_603);
          }
          BIND(label__False_605);
        }
        // ../../test/torque/test-torque.tq:333:7
        TNode<Smi> t2097 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*j_409).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2097);
        // ../../test/torque/test-torque.tq:334:7
        TNode<Smi> t2098 = implicit_cast<TNode<Smi>>((*j_409).value());
        USE(t2098);
        TNode<Smi> t2099 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2100 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2099)));
        *j_409 = implicit_cast<TNode<Smi>>(t2100);
      }
      Goto(label_header_854_1295);
    }
    BIND(label__False_603);
    // ../../test/torque/test-torque.tq:336:5
    Label label__True_606_impl(this);
    Label* label__True_606 = &label__True_606_impl;
    USE(label__True_606);
    Label label__False_607_impl(this);
    Label* label__False_607 = &label__False_607_impl;
    USE(label__False_607);
    int31_t t2101 = 10;
    TNode<Smi> t2102 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2101)));
    TNode<BoolT> t2103 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2102)));
    USE(implicit_cast<TNode<BoolT>>(t2103));
    Branch(implicit_cast<TNode<BoolT>>(t2103), label__True_606, label__False_607);
    BIND(label__False_607);
    Print("assert 'sum == 10' failed at ../../test/torque/test-torque.tq:336:5");
    Unreachable();
    BIND(label__True_606);
    // ../../test/torque/test-torque.tq:340:5
    int31_t t2104 = 0;
    TNode<Smi> t2105 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2104)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2105);
    // ../../test/torque/test-torque.tq:341:5
    int31_t t2106 = 0;
    TVARIABLE(Smi, i_411_impl);
    auto i_411 = &i_411_impl;
    USE(i_411);
    TNode<Smi> t2107 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2106)));
    *i_411 = implicit_cast<TNode<Smi>>(t2107);
    Label label__True_608_impl(this);
    Label* label__True_608 = &label__True_608_impl;
    USE(label__True_608);
    Label label__False_609_impl(this);
    Label* label__False_609 = &label__False_609_impl;
    USE(label__False_609);
    Label label_header_855_1296_impl(this, {i_411, sum_407});
    Label* label_header_855_1296 = &label_header_855_1296_impl;
    USE(label_header_855_1296);
    Goto(label_header_855_1296);
    BIND(label_header_855_1296);
    Label label_action_856_1297_impl(this);
    Label* label_action_856_1297 = &label_action_856_1297_impl;
    USE(label_action_856_1297);
    int31_t t2108 = 5;
    TNode<Smi> t2109 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2108)));
    TNode<BoolT> t2110 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*i_411).value()), implicit_cast<TNode<Smi>>(t2109)));
    USE(implicit_cast<TNode<BoolT>>(t2110));
    Branch(implicit_cast<TNode<BoolT>>(t2110), label__True_608, label__False_609);
    if (label__True_608->is_used())
    {
      BIND(label__True_608);
      // ../../test/torque/test-torque.tq:341:38
      {
        // ../../test/torque/test-torque.tq:342:7
        {
          Label label__True_610_impl(this);
          Label* label__True_610 = &label__True_610_impl;
          USE(label__True_610);
          Label label__False_611_impl(this, {});
          Label* label__False_611 = &label__False_611_impl;
          USE(label__False_611);
          int31_t t2111 = 3;
          TNode<Smi> t2112 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2111)));
          TNode<BoolT> t2113 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_411).value()), implicit_cast<TNode<Smi>>(t2112)));
          USE(implicit_cast<TNode<BoolT>>(t2113));
          Branch(implicit_cast<TNode<BoolT>>(t2113), label__True_610, label__False_611);
          if (label__True_610->is_used())
          {
            BIND(label__True_610);
            // ../../test/torque/test-torque.tq:342:19
            Goto(label_action_856_1297);
          }
          BIND(label__False_611);
        }
        // ../../test/torque/test-torque.tq:343:7
        TNode<Smi> t2114 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*i_411).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2114);
      }
      Goto(label_action_856_1297);
    }
    {
      BIND(label_action_856_1297);
      TNode<Smi> t2115 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2116 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_411).value()), implicit_cast<TNode<Smi>>(t2115)));
      *i_411 = implicit_cast<TNode<Smi>>(t2116);
      Goto(label_header_855_1296);
    }
    BIND(label__False_609);
    // ../../test/torque/test-torque.tq:345:5
    Label label__True_612_impl(this);
    Label* label__True_612 = &label__True_612_impl;
    USE(label__True_612);
    Label label__False_613_impl(this);
    Label* label__False_613 = &label__False_613_impl;
    USE(label__False_613);
    int31_t t2117 = 7;
    TNode<Smi> t2118 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2117)));
    TNode<BoolT> t2119 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2118)));
    USE(implicit_cast<TNode<BoolT>>(t2119));
    Branch(implicit_cast<TNode<BoolT>>(t2119), label__True_612, label__False_613);
    BIND(label__False_613);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:345:5");
    Unreachable();
    BIND(label__True_612);
    // ../../test/torque/test-torque.tq:347:5
    int31_t t2120 = 0;
    TNode<Smi> t2121 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2120)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2121);
    // ../../test/torque/test-torque.tq:348:5
    int31_t t2122 = 0;
    TNode<Smi> t2123 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2122)));
    *j_409 = implicit_cast<TNode<Smi>>(t2123);
    // ../../test/torque/test-torque.tq:349:5
    Label label__True_614_impl(this);
    Label* label__True_614 = &label__True_614_impl;
    USE(label__True_614);
    Label label__False_615_impl(this);
    Label* label__False_615 = &label__False_615_impl;
    USE(label__False_615);
    Label label_header_857_1298_impl(this, {j_409, sum_407});
    Label* label_header_857_1298 = &label_header_857_1298_impl;
    USE(label_header_857_1298);
    Goto(label_header_857_1298);
    BIND(label_header_857_1298);
    Label label_action_858_1299_impl(this);
    Label* label_action_858_1299 = &label_action_858_1299_impl;
    USE(label_action_858_1299);
    int31_t t2124 = 5;
    TNode<Smi> t2125 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2124)));
    TNode<BoolT> t2126 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2125)));
    USE(implicit_cast<TNode<BoolT>>(t2126));
    Branch(implicit_cast<TNode<BoolT>>(t2126), label__True_614, label__False_615);
    if (label__True_614->is_used())
    {
      BIND(label__True_614);
      // ../../test/torque/test-torque.tq:349:24
      {
        // ../../test/torque/test-torque.tq:350:7
        {
          Label label__True_616_impl(this);
          Label* label__True_616 = &label__True_616_impl;
          USE(label__True_616);
          Label label__False_617_impl(this, {});
          Label* label__False_617 = &label__False_617_impl;
          USE(label__False_617);
          int31_t t2127 = 3;
          TNode<Smi> t2128 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2127)));
          TNode<BoolT> t2129 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2128)));
          USE(implicit_cast<TNode<BoolT>>(t2129));
          Branch(implicit_cast<TNode<BoolT>>(t2129), label__True_616, label__False_617);
          if (label__True_616->is_used())
          {
            BIND(label__True_616);
            // ../../test/torque/test-torque.tq:350:19
            Goto(label_action_858_1299);
          }
          BIND(label__False_617);
        }
        // ../../test/torque/test-torque.tq:351:7
        TNode<Smi> t2130 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*j_409).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2130);
      }
      Goto(label_action_858_1299);
    }
    {
      BIND(label_action_858_1299);
      TNode<Smi> t2131 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2132 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2131)));
      *j_409 = implicit_cast<TNode<Smi>>(t2132);
      Goto(label_header_857_1298);
    }
    BIND(label__False_615);
    // ../../test/torque/test-torque.tq:353:5
    Label label__True_618_impl(this);
    Label* label__True_618 = &label__True_618_impl;
    USE(label__True_618);
    Label label__False_619_impl(this);
    Label* label__False_619 = &label__False_619_impl;
    USE(label__False_619);
    int31_t t2133 = 7;
    TNode<Smi> t2134 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2133)));
    TNode<BoolT> t2135 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2134)));
    USE(implicit_cast<TNode<BoolT>>(t2135));
    Branch(implicit_cast<TNode<BoolT>>(t2135), label__True_618, label__False_619);
    BIND(label__False_619);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:353:5");
    Unreachable();
    BIND(label__True_618);
    // ../../test/torque/test-torque.tq:355:5
    int31_t t2136 = 0;
    TNode<Smi> t2137 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2136)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2137);
    // ../../test/torque/test-torque.tq:356:5
    int31_t t2138 = 0;
    TNode<Smi> t2139 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2138)));
    *j_409 = implicit_cast<TNode<Smi>>(t2139);
    // ../../test/torque/test-torque.tq:357:5
    Label label__True_620_impl(this);
    Label* label__True_620 = &label__True_620_impl;
    USE(label__True_620);
    Label label__False_621_impl(this);
    Label* label__False_621 = &label__False_621_impl;
    USE(label__False_621);
    Label label_header_859_1300_impl(this, {j_409, sum_407});
    Label* label_header_859_1300 = &label_header_859_1300_impl;
    USE(label_header_859_1300);
    Goto(label_header_859_1300);
    BIND(label_header_859_1300);
    int31_t t2140 = 5;
    TNode<Smi> t2141 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2140)));
    TNode<BoolT> t2142 = UncheckedCast<BoolT>(SmiLessThan(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2141)));
    USE(implicit_cast<TNode<BoolT>>(t2142));
    Branch(implicit_cast<TNode<BoolT>>(t2142), label__True_620, label__False_621);
    if (label__True_620->is_used())
    {
      BIND(label__True_620);
      // ../../test/torque/test-torque.tq:357:20
      {
        // ../../test/torque/test-torque.tq:358:7
        {
          Label label__True_622_impl(this);
          Label* label__True_622 = &label__True_622_impl;
          USE(label__True_622);
          Label label__False_623_impl(this, {j_409});
          Label* label__False_623 = &label__False_623_impl;
          USE(label__False_623);
          int31_t t2143 = 3;
          TNode<Smi> t2144 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2143)));
          TNode<BoolT> t2145 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2144)));
          USE(implicit_cast<TNode<BoolT>>(t2145));
          Branch(implicit_cast<TNode<BoolT>>(t2145), label__True_622, label__False_623);
          if (label__True_622->is_used())
          {
            BIND(label__True_622);
            // ../../test/torque/test-torque.tq:358:19
            {
              // ../../test/torque/test-torque.tq:359:9
              TNode<Smi> t2146 = implicit_cast<TNode<Smi>>((*j_409).value());
              USE(t2146);
              TNode<Smi> t2147 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2148 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2147)));
              *j_409 = implicit_cast<TNode<Smi>>(t2148);
              // ../../test/torque/test-torque.tq:360:9
              Goto(label_header_859_1300);
            }
          }
          BIND(label__False_623);
        }
        // ../../test/torque/test-torque.tq:362:7
        TNode<Smi> t2149 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*j_409).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2149);
        // ../../test/torque/test-torque.tq:363:7
        TNode<Smi> t2150 = implicit_cast<TNode<Smi>>((*j_409).value());
        USE(t2150);
        TNode<Smi> t2151 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2152 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2151)));
        *j_409 = implicit_cast<TNode<Smi>>(t2152);
      }
      Goto(label_header_859_1300);
    }
    BIND(label__False_621);
    // ../../test/torque/test-torque.tq:365:5
    Label label__True_624_impl(this);
    Label* label__True_624 = &label__True_624_impl;
    USE(label__True_624);
    Label label__False_625_impl(this);
    Label* label__False_625 = &label__False_625_impl;
    USE(label__False_625);
    int31_t t2153 = 7;
    TNode<Smi> t2154 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2153)));
    TNode<BoolT> t2155 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2154)));
    USE(implicit_cast<TNode<BoolT>>(t2155));
    Branch(implicit_cast<TNode<BoolT>>(t2155), label__True_624, label__False_625);
    BIND(label__False_625);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:365:5");
    Unreachable();
    BIND(label__True_624);
    // ../../test/torque/test-torque.tq:367:5
    int31_t t2156 = 0;
    TNode<Smi> t2157 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2156)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2157);
    // ../../test/torque/test-torque.tq:368:5
    int31_t t2158 = 0;
    TVARIABLE(Smi, i_412_impl);
    auto i_412 = &i_412_impl;
    USE(i_412);
    TNode<Smi> t2159 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2158)));
    *i_412 = implicit_cast<TNode<Smi>>(t2159);
    Label label__True_626_impl(this);
    Label* label__True_626 = &label__True_626_impl;
    USE(label__True_626);
    Label label__False_627_impl(this);
    Label* label__False_627 = &label__False_627_impl;
    USE(label__False_627);
    Label label_header_860_1301_impl(this, {i_412, sum_407});
    Label* label_header_860_1301 = &label_header_860_1301_impl;
    USE(label_header_860_1301);
    Goto(label_header_860_1301);
    BIND(label_header_860_1301);
    Label label_action_861_1302_impl(this);
    Label* label_action_861_1302 = &label_action_861_1302_impl;
    USE(label_action_861_1302);
    Goto(label__True_626);
    if (label__True_626->is_used())
    {
      BIND(label__True_626);
      // ../../test/torque/test-torque.tq:368:32
      {
        // ../../test/torque/test-torque.tq:369:7
        {
          Label label__True_628_impl(this);
          Label* label__True_628 = &label__True_628_impl;
          USE(label__True_628);
          Label label__False_629_impl(this, {});
          Label* label__False_629 = &label__False_629_impl;
          USE(label__False_629);
          int31_t t2160 = 3;
          TNode<Smi> t2161 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2160)));
          TNode<BoolT> t2162 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_412).value()), implicit_cast<TNode<Smi>>(t2161)));
          USE(implicit_cast<TNode<BoolT>>(t2162));
          Branch(implicit_cast<TNode<BoolT>>(t2162), label__True_628, label__False_629);
          if (label__True_628->is_used())
          {
            BIND(label__True_628);
            // ../../test/torque/test-torque.tq:369:19
            Goto(label_action_861_1302);
          }
          BIND(label__False_629);
        }
        // ../../test/torque/test-torque.tq:370:7
        {
          Label label__True_630_impl(this);
          Label* label__True_630 = &label__True_630_impl;
          USE(label__True_630);
          Label label__False_631_impl(this, {});
          Label* label__False_631 = &label__False_631_impl;
          USE(label__False_631);
          int31_t t2163 = 5;
          TNode<Smi> t2164 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2163)));
          TNode<BoolT> t2165 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*i_412).value()), implicit_cast<TNode<Smi>>(t2164)));
          USE(implicit_cast<TNode<BoolT>>(t2165));
          Branch(implicit_cast<TNode<BoolT>>(t2165), label__True_630, label__False_631);
          if (label__True_630->is_used())
          {
            BIND(label__True_630);
            // ../../test/torque/test-torque.tq:370:19
            Goto(label__False_627);
          }
          BIND(label__False_631);
        }
        // ../../test/torque/test-torque.tq:371:7
        TNode<Smi> t2166 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*i_412).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2166);
      }
      Goto(label_action_861_1302);
    }
    {
      BIND(label_action_861_1302);
      TNode<Smi> t2167 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
      TNode<Smi> t2168 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*i_412).value()), implicit_cast<TNode<Smi>>(t2167)));
      *i_412 = implicit_cast<TNode<Smi>>(t2168);
      Goto(label_header_860_1301);
    }
    BIND(label__False_627);
    // ../../test/torque/test-torque.tq:373:5
    Label label__True_632_impl(this);
    Label* label__True_632 = &label__True_632_impl;
    USE(label__True_632);
    Label label__False_633_impl(this);
    Label* label__False_633 = &label__False_633_impl;
    USE(label__False_633);
    int31_t t2169 = 7;
    TNode<Smi> t2170 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2169)));
    TNode<BoolT> t2171 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2170)));
    USE(implicit_cast<TNode<BoolT>>(t2171));
    Branch(implicit_cast<TNode<BoolT>>(t2171), label__True_632, label__False_633);
    BIND(label__False_633);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:373:5");
    Unreachable();
    BIND(label__True_632);
    // ../../test/torque/test-torque.tq:375:5
    int31_t t2172 = 0;
    TNode<Smi> t2173 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2172)));
    *sum_407 = implicit_cast<TNode<Smi>>(t2173);
    // ../../test/torque/test-torque.tq:376:5
    int31_t t2174 = 0;
    TNode<Smi> t2175 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2174)));
    *j_409 = implicit_cast<TNode<Smi>>(t2175);
    // ../../test/torque/test-torque.tq:377:5
    Label label__True_634_impl(this);
    Label* label__True_634 = &label__True_634_impl;
    USE(label__True_634);
    Label label__False_635_impl(this);
    Label* label__False_635 = &label__False_635_impl;
    USE(label__False_635);
    Label label_header_862_1303_impl(this, {j_409, sum_407});
    Label* label_header_862_1303 = &label_header_862_1303_impl;
    USE(label_header_862_1303);
    Goto(label_header_862_1303);
    BIND(label_header_862_1303);
    Goto(label__True_634);
    if (label__True_634->is_used())
    {
      BIND(label__True_634);
      // ../../test/torque/test-torque.tq:377:14
      {
        // ../../test/torque/test-torque.tq:378:7
        {
          Label label__True_636_impl(this);
          Label* label__True_636 = &label__True_636_impl;
          USE(label__True_636);
          Label label__False_637_impl(this, {j_409});
          Label* label__False_637 = &label__False_637_impl;
          USE(label__False_637);
          int31_t t2176 = 3;
          TNode<Smi> t2177 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2176)));
          TNode<BoolT> t2178 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2177)));
          USE(implicit_cast<TNode<BoolT>>(t2178));
          Branch(implicit_cast<TNode<BoolT>>(t2178), label__True_636, label__False_637);
          if (label__True_636->is_used())
          {
            BIND(label__True_636);
            // ../../test/torque/test-torque.tq:378:19
            {
              // ../../test/torque/test-torque.tq:379:9
              TNode<Smi> t2179 = implicit_cast<TNode<Smi>>((*j_409).value());
              USE(t2179);
              TNode<Smi> t2180 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
              TNode<Smi> t2181 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2180)));
              *j_409 = implicit_cast<TNode<Smi>>(t2181);
              // ../../test/torque/test-torque.tq:380:9
              Goto(label_header_862_1303);
            }
          }
          BIND(label__False_637);
        }
        // ../../test/torque/test-torque.tq:383:7
        {
          Label label__True_638_impl(this);
          Label* label__True_638 = &label__True_638_impl;
          USE(label__True_638);
          Label label__False_639_impl(this, {});
          Label* label__False_639 = &label__False_639_impl;
          USE(label__False_639);
          int31_t t2182 = 5;
          TNode<Smi> t2183 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2182)));
          TNode<BoolT> t2184 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2183)));
          USE(implicit_cast<TNode<BoolT>>(t2184));
          Branch(implicit_cast<TNode<BoolT>>(t2184), label__True_638, label__False_639);
          if (label__True_638->is_used())
          {
            BIND(label__True_638);
            // ../../test/torque/test-torque.tq:383:19
            Goto(label__False_635);
          }
          BIND(label__False_639);
        }
        // ../../test/torque/test-torque.tq:384:7
        TNode<Smi> t2185 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>((*j_409).value())));
        *sum_407 = implicit_cast<TNode<Smi>>(t2185);
        // ../../test/torque/test-torque.tq:385:7
        TNode<Smi> t2186 = implicit_cast<TNode<Smi>>((*j_409).value());
        USE(t2186);
        TNode<Smi> t2187 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(1)));
        TNode<Smi> t2188 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*j_409).value()), implicit_cast<TNode<Smi>>(t2187)));
        *j_409 = implicit_cast<TNode<Smi>>(t2188);
      }
      Goto(label_header_862_1303);
    }
    BIND(label__False_635);
    // ../../test/torque/test-torque.tq:387:5
    Label label__True_640_impl(this);
    Label* label__True_640 = &label__True_640_impl;
    USE(label__True_640);
    Label label__False_641_impl(this);
    Label* label__False_641 = &label__False_641_impl;
    USE(label__False_641);
    int31_t t2189 = 7;
    TNode<Smi> t2190 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2189)));
    TNode<BoolT> t2191 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>((*sum_407).value()), implicit_cast<TNode<Smi>>(t2190)));
    USE(implicit_cast<TNode<BoolT>>(t2191));
    Branch(implicit_cast<TNode<BoolT>>(t2191), label__True_640, label__False_641);
    BIND(label__False_641);
    Print("assert 'sum == 7' failed at ../../test/torque/test-torque.tq:387:5");
    Unreachable();
    BIND(label__True_640);
  }
}

void TestBuiltinsFromDSLAssembler::TestSubtyping(TNode<Smi> p_x) {
  Label label_macro_end_1304_impl(this, {});
  Label* label_macro_end_1304 = &label_macro_end_1304_impl;
  USE(label_macro_end_1304);
  // ../../test/torque/test-torque.tq:390:32
  {
    // ../../test/torque/test-torque.tq:391:5
    TNode<Object> foo_863_impl;
    auto foo_863 = &foo_863_impl;
    USE(foo_863);
    *foo_863 = implicit_cast<TNode<Object>>(p_x);
  }
}

compiler::TNode<Int32T> TestBuiltinsFromDSLAssembler::TypeswitchExample(TNode<Object> p_x) {
  TVARIABLE(Int32T, _return_413_impl);
  auto _return_413 = &_return_413_impl;
  USE(_return_413);
  Label label_macro_end_1305_impl(this, {_return_413});
  Label* label_macro_end_1305 = &label_macro_end_1305_impl;
  USE(label_macro_end_1305);
  // ../../test/torque/test-torque.tq:404:60
  {
    // ../../test/torque/test-torque.tq:405:5
    int31_t t2192 = 0;
    TVARIABLE(Int32T, result_414_impl);
    auto result_414 = &result_414_impl;
    USE(result_414);
    TNode<Int32T> t2193 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2192)));
    *result_414 = implicit_cast<TNode<Int32T>>(t2193);
    // ../../test/torque/test-torque.tq:406:5
    {
      // ../../test/torque/test-torque.tq:406:17
      TNode<Object> t2194 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<Object>>(t2194));
      TNode<Object> _value_864_impl;
      auto _value_864 = &_value_864_impl;
      USE(_value_864);
      *_value_864 = implicit_cast<TNode<Object>>(t2194);
      // ../../test/torque/test-torque.tq:407:7
      {
        Label label_try_done_865_1306_impl(this);
        Label* label_try_done_865_1306 = &label_try_done_865_1306_impl;
        USE(label_try_done_865_1306);
        Label label__NextCase_642_impl(this);
        Label* label__NextCase_642 = &label__NextCase_642_impl;
        USE(label__NextCase_642);
        Label label_try_begin_866_1307_impl(this);
        Label* label_try_begin_866_1307 = &label_try_begin_866_1307_impl;
        USE(label_try_begin_866_1307);
        Goto(label_try_begin_866_1307);
        if (label_try_begin_866_1307->is_used())
        {
          BIND(label_try_begin_866_1307);
          // ../../test/torque/test-torque.tq:407:7
          {
            // ../../test/torque/test-torque.tq:407:7
            TNode<FixedArray> t2195 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<Object>>((*_value_864)), label__NextCase_642));
            USE(implicit_cast<TNode<FixedArray>>(t2195));
            TNode<FixedArray> x_867_impl;
            auto x_867 = &x_867_impl;
            USE(x_867);
            *x_867 = implicit_cast<TNode<FixedArray>>(t2195);
            // ../../test/torque/test-torque.tq:407:29
            {
              // ../../test/torque/test-torque.tq:408:9
              int31_t t2196 = 1;
              TNode<Int32T> t2197 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2196)));
              TNode<Int32T> t2198 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_414).value()), implicit_cast<TNode<Int32T>>(t2197)));
              USE(implicit_cast<TNode<Int32T>>(t2198));
              *result_414 = implicit_cast<TNode<Int32T>>(t2198);
            }
          }
          Goto(label_try_done_865_1306);
        }
        if (label__NextCase_642->is_used())
        {
          BIND(label__NextCase_642);
          // ../../test/torque/test-torque.tq:407:7
          {
            // ../../test/torque/test-torque.tq:409:9
            TNode<Number> _case_value_868_impl;
            auto _case_value_868 = &_case_value_868_impl;
            USE(_case_value_868);
            *_case_value_868 = implicit_cast<TNode<Number>>(UncheckedCast<Number>(implicit_cast<TNode<Object>>((*_value_864))));
            // ../../test/torque/test-torque.tq:409:23
            {
              // ../../test/torque/test-torque.tq:410:9
              int31_t t2199 = 2;
              TNode<Int32T> t2200 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2199)));
              TNode<Int32T> t2201 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_414).value()), implicit_cast<TNode<Int32T>>(t2200)));
              USE(implicit_cast<TNode<Int32T>>(t2201));
              *result_414 = implicit_cast<TNode<Int32T>>(t2201);
            }
          }
          Goto(label_try_done_865_1306);
        }
        BIND(label_try_done_865_1306);
      }
    }
    // ../../test/torque/test-torque.tq:414:5
    int31_t t2202 = 10;
    TNode<Int32T> t2203 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2202)));
    TNode<Int32T> t2204 = UncheckedCast<Int32T>(Int32Mul(implicit_cast<TNode<Int32T>>((*result_414).value()), implicit_cast<TNode<Int32T>>(t2203)));
    USE(implicit_cast<TNode<Int32T>>(t2204));
    *result_414 = implicit_cast<TNode<Int32T>>(t2204);
    // ../../test/torque/test-torque.tq:416:5
    {
      // ../../test/torque/test-torque.tq:416:17
      TNode<Object> t2205 = UncheckedCast<Object>(IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(implicit_cast<TNode<Object>>(p_x)));
      USE(implicit_cast<TNode<Object>>(t2205));
      TNode<Object> _value_869_impl;
      auto _value_869 = &_value_869_impl;
      USE(_value_869);
      *_value_869 = implicit_cast<TNode<Object>>(t2205);
      // ../../test/torque/test-torque.tq:417:7
      {
        Label label_try_done_870_1308_impl(this);
        Label* label_try_done_870_1308 = &label_try_done_870_1308_impl;
        USE(label_try_done_870_1308);
        Label label__NextCase_643_impl(this);
        Label* label__NextCase_643 = &label__NextCase_643_impl;
        USE(label__NextCase_643);
        Label label_try_begin_871_1309_impl(this);
        Label* label_try_begin_871_1309 = &label_try_begin_871_1309_impl;
        USE(label_try_begin_871_1309);
        Goto(label_try_begin_871_1309);
        if (label_try_begin_871_1309->is_used())
        {
          BIND(label_try_begin_871_1309);
          // ../../test/torque/test-torque.tq:417:7
          {
            // ../../test/torque/test-torque.tq:417:7
            TNode<Smi> t2206 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>((*_value_869)), label__NextCase_643));
            USE(implicit_cast<TNode<Smi>>(t2206));
            TNode<Smi> x_872_impl;
            auto x_872 = &x_872_impl;
            USE(x_872);
            *x_872 = implicit_cast<TNode<Smi>>(t2206);
            // ../../test/torque/test-torque.tq:417:22
            {
              // ../../test/torque/test-torque.tq:418:9
              TNode<Int32T> t2207 = UncheckedCast<Int32T>(convert7ATint32(implicit_cast<TNode<Smi>>((*x_872))));
              USE(implicit_cast<TNode<Int32T>>(t2207));
              TNode<Int32T> t2208 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_414).value()), implicit_cast<TNode<Int32T>>(t2207)));
              USE(implicit_cast<TNode<Int32T>>(t2208));
              *result_414 = implicit_cast<TNode<Int32T>>(t2208);
            }
          }
          Goto(label_try_done_870_1308);
        }
        if (label__NextCase_643->is_used())
        {
          BIND(label__NextCase_643);
          // ../../test/torque/test-torque.tq:417:7
          {
            // ../../test/torque/test-torque.tq:419:9
            {
              Label label_try_done_873_1310_impl(this);
              Label* label_try_done_873_1310 = &label_try_done_873_1310_impl;
              USE(label_try_done_873_1310);
              Label label__NextCase_644_impl(this);
              Label* label__NextCase_644 = &label__NextCase_644_impl;
              USE(label__NextCase_644);
              Label label_try_begin_874_1311_impl(this);
              Label* label_try_begin_874_1311 = &label_try_begin_874_1311_impl;
              USE(label_try_begin_874_1311);
              Goto(label_try_begin_874_1311);
              if (label_try_begin_874_1311->is_used())
              {
                BIND(label_try_begin_874_1311);
                // ../../test/torque/test-torque.tq:419:9
                {
                  // ../../test/torque/test-torque.tq:419:9
                  TNode<FixedArray> t2209 = UncheckedCast<FixedArray>(cast12ATFixedArray(implicit_cast<TNode<HeapObject>>(UncheckedCast<HeapObject>(implicit_cast<TNode<Object>>((*_value_869)))), label__NextCase_644));
                  USE(implicit_cast<TNode<FixedArray>>(t2209));
                  TNode<FixedArray> a_875_impl;
                  auto a_875 = &a_875_impl;
                  USE(a_875);
                  *a_875 = implicit_cast<TNode<FixedArray>>(t2209);
                  // ../../test/torque/test-torque.tq:419:31
                  {
                    // ../../test/torque/test-torque.tq:420:9
                    TNode<Smi> t2210 = UncheckedCast<Smi>(LoadFixedArrayBaseLength(implicit_cast<TNode<FixedArrayBase>>((*a_875))));
                    TNode<Int32T> t2211 = UncheckedCast<Int32T>(convert7ATint32(implicit_cast<TNode<Smi>>(t2210)));
                    USE(implicit_cast<TNode<Int32T>>(t2211));
                    TNode<Int32T> t2212 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_414).value()), implicit_cast<TNode<Int32T>>(t2211)));
                    USE(implicit_cast<TNode<Int32T>>(t2212));
                    *result_414 = implicit_cast<TNode<Int32T>>(t2212);
                  }
                }
                Goto(label_try_done_873_1310);
              }
              if (label__NextCase_644->is_used())
              {
                BIND(label__NextCase_644);
                // ../../test/torque/test-torque.tq:419:9
                {
                  // ../../test/torque/test-torque.tq:421:9
                  TNode<HeapNumber> x_876_impl;
                  auto x_876 = &x_876_impl;
                  USE(x_876);
                  *x_876 = implicit_cast<TNode<HeapNumber>>(UncheckedCast<HeapNumber>(implicit_cast<TNode<Object>>((*_value_869))));
                  // ../../test/torque/test-torque.tq:421:31
                  {
                    // ../../test/torque/test-torque.tq:422:9
                    int31_t t2213 = 7;
                    TNode<Int32T> t2214 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2213)));
                    TNode<Int32T> t2215 = UncheckedCast<Int32T>(Int32Add(implicit_cast<TNode<Int32T>>((*result_414).value()), implicit_cast<TNode<Int32T>>(t2214)));
                    USE(implicit_cast<TNode<Int32T>>(t2215));
                    *result_414 = implicit_cast<TNode<Int32T>>(t2215);
                  }
                }
                Goto(label_try_done_873_1310);
              }
              BIND(label_try_done_873_1310);
            }
          }
          Goto(label_try_done_870_1308);
        }
        BIND(label_try_done_870_1308);
      }
    }
    // ../../test/torque/test-torque.tq:426:5
    *_return_413 = implicit_cast<TNode<Int32T>>((*result_414).value());
    Goto(label_macro_end_1305);
  }
  BIND(label_macro_end_1305);
  return implicit_cast<TNode<Int32T>>((*_return_413).value());
}

void TestBuiltinsFromDSLAssembler::TestTypeswitch() {
  Label label_macro_end_1312_impl(this, {});
  Label* label_macro_end_1312 = &label_macro_end_1312_impl;
  USE(label_macro_end_1312);
  // ../../test/torque/test-torque.tq:429:26
  {
    // ../../test/torque/test-torque.tq:430:5
    Label label__True_645_impl(this);
    Label* label__True_645 = &label__True_645_impl;
    USE(label__True_645);
    Label label__False_646_impl(this);
    Label* label__False_646 = &label__False_646_impl;
    USE(label__False_646);
    int31_t t2216 = 5;
    TNode<Smi> t2217 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2216)));
    USE(implicit_cast<TNode<Smi>>(t2217));
    TNode<Int32T> t2218 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>(t2217)));
    USE(implicit_cast<TNode<Int32T>>(t2218));
    int31_t t2219 = 26;
    TNode<Int32T> t2220 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2219)));
    TNode<BoolT> t2221 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2218), implicit_cast<TNode<Int32T>>(t2220)));
    USE(implicit_cast<TNode<BoolT>>(t2221));
    Branch(implicit_cast<TNode<BoolT>>(t2221), label__True_645, label__False_646);
    BIND(label__False_646);
    Print("assert 'TypeswitchExample(from_constexpr<Smi>(5)) == 26' failed at ../../test/torque/test-torque.tq:430:5");
    Unreachable();
    BIND(label__True_645);
    // ../../test/torque/test-torque.tq:431:5
    int31_t t2222 = 3;
    TNode<IntPtrT> t2223 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(implicit_cast<int31_t>(t2222)));
    TNode<FixedArray> t2224 = UncheckedCast<FixedArray>(AllocateZeroedFixedArray(implicit_cast<TNode<IntPtrT>>(t2223)));
    USE(implicit_cast<TNode<FixedArray>>(t2224));
    TNode<FixedArray> a_877_impl;
    auto a_877 = &a_877_impl;
    USE(a_877);
    *a_877 = implicit_cast<TNode<FixedArray>>(t2224);
    // ../../test/torque/test-torque.tq:432:5
    Label label__True_647_impl(this);
    Label* label__True_647 = &label__True_647_impl;
    USE(label__True_647);
    Label label__False_648_impl(this);
    Label* label__False_648 = &label__False_648_impl;
    USE(label__False_648);
    TNode<Int32T> t2225 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>((*a_877))));
    USE(implicit_cast<TNode<Int32T>>(t2225));
    int31_t t2226 = 13;
    TNode<Int32T> t2227 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2226)));
    TNode<BoolT> t2228 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2225), implicit_cast<TNode<Int32T>>(t2227)));
    USE(implicit_cast<TNode<BoolT>>(t2228));
    Branch(implicit_cast<TNode<BoolT>>(t2228), label__True_647, label__False_648);
    BIND(label__False_648);
    Print("assert 'TypeswitchExample(a) == 13' failed at ../../test/torque/test-torque.tq:432:5");
    Unreachable();
    BIND(label__True_647);
    // ../../test/torque/test-torque.tq:433:5
    Label label__True_649_impl(this);
    Label* label__True_649 = &label__True_649_impl;
    USE(label__True_649);
    Label label__False_650_impl(this);
    Label* label__False_650 = &label__False_650_impl;
    USE(label__False_650);
    double t2229 = 0.5;
    TNode<Number> t2230 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(implicit_cast<double>(t2229)));
    USE(implicit_cast<TNode<Number>>(t2230));
    TNode<Int32T> t2231 = UncheckedCast<Int32T>(TypeswitchExample(implicit_cast<TNode<Object>>(t2230)));
    USE(implicit_cast<TNode<Int32T>>(t2231));
    int31_t t2232 = 27;
    TNode<Int32T> t2233 = UncheckedCast<Int32T>(from_constexpr7ATint32(implicit_cast<int31_t>(t2232)));
    TNode<BoolT> t2234 = UncheckedCast<BoolT>(Word32Equal(implicit_cast<TNode<Int32T>>(t2231), implicit_cast<TNode<Int32T>>(t2233)));
    USE(implicit_cast<TNode<BoolT>>(t2234));
    Branch(implicit_cast<TNode<BoolT>>(t2234), label__True_649, label__False_650);
    BIND(label__False_650);
    Print("assert 'TypeswitchExample(from_constexpr<Number>(0.5)) == 27' failed at ../../test/torque/test-torque.tq:433:5");
    Unreachable();
    BIND(label__True_649);
  }
}

void TestBuiltinsFromDSLAssembler::TestGenericOverload() {
  Label label_macro_end_1313_impl(this, {});
  Label* label_macro_end_1313 = &label_macro_end_1313_impl;
  USE(label_macro_end_1313);
  // ../../test/torque/test-torque.tq:443:31
  {
    // ../../test/torque/test-torque.tq:444:5
    int31_t t2235 = 5;
    TNode<Smi> x_smi_878_impl;
    auto x_smi_878 = &x_smi_878_impl;
    USE(x_smi_878);
    TNode<Smi> t2236 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2235)));
    *x_smi_878 = implicit_cast<TNode<Smi>>(t2236);
    // ../../test/torque/test-torque.tq:445:5
    TNode<Object> x_object_879_impl;
    auto x_object_879 = &x_object_879_impl;
    USE(x_object_879);
    *x_object_879 = implicit_cast<TNode<Object>>((*x_smi_878));
    // ../../test/torque/test-torque.tq:446:5
    Label label__True_651_impl(this);
    Label* label__True_651 = &label__True_651_impl;
    USE(label__True_651);
    Label label__False_652_impl(this);
    Label* label__False_652 = &label__False_652_impl;
    USE(label__False_652);
    TNode<Smi> t2237 = UncheckedCast<Smi>(ExampleGenericOverload5ATSmi(implicit_cast<TNode<Smi>>((*x_smi_878))));
    USE(implicit_cast<TNode<Smi>>(t2237));
    int31_t t2238 = 6;
    TNode<Smi> t2239 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2238)));
    TNode<BoolT> t2240 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2237), implicit_cast<TNode<Smi>>(t2239)));
    USE(implicit_cast<TNode<BoolT>>(t2240));
    Branch(implicit_cast<TNode<BoolT>>(t2240), label__True_651, label__False_652);
    BIND(label__False_652);
    Print("assert 'ExampleGenericOverload<Smi>(x_smi) == 6' failed at ../../test/torque/test-torque.tq:446:5");
    Unreachable();
    BIND(label__True_651);
    // ../../test/torque/test-torque.tq:447:5
    Label label__True_653_impl(this);
    Label* label__True_653 = &label__True_653_impl;
    USE(label__True_653);
    Label label__False_654_impl(this);
    Label* label__False_654 = &label__False_654_impl;
    USE(label__False_654);
    TNode<Object> t2241 = UncheckedCast<Object>(ExampleGenericOverload22UT12ATHeapObject5ATSmi(implicit_cast<TNode<Object>>((*x_object_879))));
    USE(implicit_cast<TNode<Object>>(t2241));
    TNode<Smi> t2242 = UncheckedCast<Smi>(unsafe_cast5ATSmi(implicit_cast<TNode<Object>>(t2241)));
    USE(implicit_cast<TNode<Smi>>(t2242));
    int31_t t2243 = 5;
    TNode<Smi> t2244 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t2243)));
    TNode<BoolT> t2245 = UncheckedCast<BoolT>(SmiEqual(implicit_cast<TNode<Smi>>(t2242), implicit_cast<TNode<Smi>>(t2244)));
    USE(implicit_cast<TNode<BoolT>>(t2245));
    Branch(implicit_cast<TNode<BoolT>>(t2245), label__True_653, label__False_654);
    BIND(label__False_654);
    Print("assert 'unsafe_cast<Smi>(ExampleGenericOverload<Object>(x_object)) == 5' failed at ../../test/torque/test-torque.tq:447:5");
    Unreachable();
    BIND(label__True_653);
  }
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, TestBuiltinsFromDSLAssembler) {
  TNode<Context> p_c = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_c);
  TNode<Smi> p_param = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(p_param);
  // ../../test/torque/test-torque.tq:85:70
  {
    // ../../test/torque/test-torque.tq:86:5
    Return(implicit_cast<TNode<Object>>(Null()));
  }
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTest5ATSmi(TNode<Smi> p_param) {
  TVARIABLE(Object, _return_549_impl);
  auto _return_549 = &_return_549_impl;
  USE(_return_549);
  Label label_macro_end_1456_impl(this, {_return_549});
  Label* label_macro_end_1456 = &label_macro_end_1456_impl;
  USE(label_macro_end_1456);
  // ../../test/torque/test-torque.tq:131:54
  {
    // ../../test/torque/test-torque.tq:132:5
    *_return_549 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1456);
  }
  BIND(label_macro_end_1456);
  return implicit_cast<TNode<Object>>((*_return_549).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::GenericMacroTestWithLabels5ATSmi(TNode<Smi> p_param, Label* label_X_959) {
  TVARIABLE(Object, _return_550_impl);
  auto _return_550 = &_return_550_impl;
  USE(_return_550);
  Label label_macro_end_1457_impl(this, {_return_550});
  Label* label_macro_end_1457 = &label_macro_end_1457_impl;
  USE(label_macro_end_1457);
  // ../../test/torque/test-torque.tq:139:73
  {
    // ../../test/torque/test-torque.tq:140:5
    *_return_550 = implicit_cast<TNode<Object>>(Undefined());
    Goto(label_macro_end_1457);
  }
  BIND(label_macro_end_1457);
  return implicit_cast<TNode<Object>>((*_return_550).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(TNode<Object> p_x) {
  TVARIABLE(Object, _return_551_impl);
  auto _return_551 = &_return_551_impl;
  USE(_return_551);
  Label label_macro_end_1459_impl(this, {_return_551});
  Label* label_macro_end_1459 = &label_macro_end_1459_impl;
  USE(label_macro_end_1459);
  // ../../test/torque/test-torque.tq:394:45
  {
    // ../../test/torque/test-torque.tq:395:5
    {
      // ../../test/torque/test-torque.tq:395:17
      TNode<Object> _value_1090_impl;
      auto _value_1090 = &_value_1090_impl;
      USE(_value_1090);
      *_value_1090 = implicit_cast<TNode<Object>>(p_x);
      // ../../test/torque/test-torque.tq:396:7
      {
        Label label_try_done_1091_1460_impl(this);
        Label* label_try_done_1091_1460 = &label_try_done_1091_1460_impl;
        USE(label_try_done_1091_1460);
        Label label__NextCase_960_impl(this);
        Label* label__NextCase_960 = &label__NextCase_960_impl;
        USE(label__NextCase_960);
        Label label_try_begin_1092_1461_impl(this);
        Label* label_try_begin_1092_1461 = &label_try_begin_1092_1461_impl;
        USE(label_try_begin_1092_1461);
        Goto(label_try_begin_1092_1461);
        if (label_try_begin_1092_1461->is_used())
        {
          BIND(label_try_begin_1092_1461);
          // ../../test/torque/test-torque.tq:396:7
          {
            // ../../test/torque/test-torque.tq:396:7
            TNode<Smi> t3362 = UncheckedCast<Smi>(cast5ATSmi(implicit_cast<TNode<Object>>((*_value_1090)), label__NextCase_960));
            USE(implicit_cast<TNode<Smi>>(t3362));
            TNode<Smi> x_1093_impl;
            auto x_1093 = &x_1093_impl;
            USE(x_1093);
            *x_1093 = implicit_cast<TNode<Smi>>(t3362);
            // ../../test/torque/test-torque.tq:396:22
            {
              // ../../test/torque/test-torque.tq:397:9
              int31_t t3363 = 1;
              TNode<Smi> t3364 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3363)));
              TNode<Smi> t3365 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>((*x_1093)), implicit_cast<TNode<Smi>>(t3364)));
              USE(implicit_cast<TNode<Smi>>(t3365));
              *_return_551 = implicit_cast<TNode<Object>>(t3365);
              Goto(label_macro_end_1459);
            }
          }
        }
        if (label__NextCase_960->is_used())
        {
          BIND(label__NextCase_960);
          // ../../test/torque/test-torque.tq:396:7
          {
            // ../../test/torque/test-torque.tq:398:9
            TNode<Object> o_1094_impl;
            auto o_1094 = &o_1094_impl;
            USE(o_1094);
            *o_1094 = implicit_cast<TNode<Object>>(UncheckedCast<HeapObject>(implicit_cast<TNode<Object>>((*_value_1090))));
            // ../../test/torque/test-torque.tq:398:22
            {
              // ../../test/torque/test-torque.tq:399:9
              *_return_551 = implicit_cast<TNode<Object>>((*o_1094));
              Goto(label_macro_end_1459);
            }
          }
        }
      }
    }
  }
  BIND(label_macro_end_1459);
  return implicit_cast<TNode<Object>>((*_return_551).value());
}

compiler::TNode<Smi> TestBuiltinsFromDSLAssembler::ExampleGenericOverload5ATSmi(TNode<Smi> p_o) {
  TVARIABLE(Smi, _return_554_impl);
  auto _return_554 = &_return_554_impl;
  USE(_return_554);
  Label label_macro_end_1463_impl(this, {_return_554});
  Label* label_macro_end_1463 = &label_macro_end_1463_impl;
  USE(label_macro_end_1463);
  // ../../test/torque/test-torque.tq:439:54
  {
    // ../../test/torque/test-torque.tq:440:5
    int31_t t3368 = 1;
    TNode<Smi> t3369 = UncheckedCast<Smi>(from_constexpr5ATSmi(implicit_cast<int31_t>(t3368)));
    TNode<Smi> t3370 = UncheckedCast<Smi>(SmiAdd(implicit_cast<TNode<Smi>>(p_o), implicit_cast<TNode<Smi>>(t3369)));
    USE(implicit_cast<TNode<Smi>>(t3370));
    *_return_554 = implicit_cast<TNode<Smi>>(t3370);
    Goto(label_macro_end_1463);
  }
  BIND(label_macro_end_1463);
  return implicit_cast<TNode<Smi>>((*_return_554).value());
}

compiler::TNode<Object> TestBuiltinsFromDSLAssembler::ExampleGenericOverload22UT12ATHeapObject5ATSmi(TNode<Object> p_o) {
  TVARIABLE(Object, _return_555_impl);
  auto _return_555 = &_return_555_impl;
  USE(_return_555);
  Label label_macro_end_1464_impl(this, {_return_555});
  Label* label_macro_end_1464 = &label_macro_end_1464_impl;
  USE(label_macro_end_1464);
  // ../../test/torque/test-torque.tq:436:57
  {
    // ../../test/torque/test-torque.tq:437:5
    *_return_555 = implicit_cast<TNode<Object>>(p_o);
    Goto(label_macro_end_1464);
  }
  BIND(label_macro_end_1464);
  return implicit_cast<TNode<Object>>((*_return_555).value());
}

}  // namespace internal
}  // namespace v8

