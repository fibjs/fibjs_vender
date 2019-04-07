#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "builtins-array-from-dsl-gen.h"

namespace v8 {
namespace internal {

using Node = compiler::Node;

compiler::TNode<Number> ArrayBuiltinsFromDSLAssembler::GetLengthProperty(TNode<Context> p_context, TNode<Object> p_o) {
  TVARIABLE(Number, _return_67_impl);
  auto _return_67 = &_return_67_impl;
  USE(_return_67);
  Label label_macro_end_584_impl(this, {_return_67});
  Label* label_macro_end_584 = &label_macro_end_584_impl;
  USE(label_macro_end_584);
  // ../../src/builtins/array.tq:6:63
  {
    // ../../src/builtins/array.tq:7:4
    {
      Label label__True_19_impl(this);
      Label* label__True_19 = &label__True_19_impl;
      USE(label__True_19);
      Label label__False_20_impl(this);
      Label* label__False_20 = &label__False_20_impl;
      USE(label__False_20);
      Label label_if_done_label_456_585_impl(this, {});
      Label* label_if_done_label_456_585 = &label_if_done_label_456_585_impl;
      USE(label_if_done_label_456_585);
      BranchIfFastJSArray(p_o, p_context, label__True_19, label__False_20);
      if (label__True_19->is_used())
      {
        BIND(label__True_19);
        // ../../src/builtins/array.tq:7:41
        {
          // ../../src/builtins/array.tq:8:6
          TNode<JSArray> t88 = UncheckedCast<JSArray>(unsafe_cast9ATJSArray(p_o));
          USE(t88);
          TVARIABLE(JSArray, a_68_impl);
          auto a_68 = &a_68_impl;
          USE(a_68);
          *a_68 = t88;
          // ../../src/builtins/array.tq:9:6
          TNode<Smi> t89 = UncheckedCast<Smi>(LoadFastJSArrayLength((*a_68).value()));
          *_return_67 = t89;
          Goto(label_macro_end_584);
        }
      }
      if (label__False_20->is_used())
      {
        BIND(label__False_20);
        // ../../src/builtins/array.tq:11:6
        {
          // ../../src/builtins/array.tq:12:8
          const char* t90 = "length";
          TNode<Object> t91 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t90));
          TNode<Object> t92 = UncheckedCast<Object>(GetProperty(p_context, p_o, t91));
          USE(t92);
          TNode<Number> t93 = UncheckedCast<Number>(ToLength_Inline(p_context, t92));
          USE(t93);
          *_return_67 = t93;
          Goto(label_macro_end_584);
        }
      }
    }
  }
  BIND(label_macro_end_584);
  return (*_return_67).value();
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArraySplice(TNode<Context> p_context, CodeStubArguments* p_args, TNode<Object> p_o, TNode<Number> p_originalLengthNumber, TNode<Number> p_actualStartNumber, TNode<Smi> p_insertCount, TNode<Number> p_actualDeleteCountNumber, Label* label_Bailout_21) {
  TVARIABLE(Object, _return_69_impl);
  auto _return_69 = &_return_69_impl;
  USE(_return_69);
  Label label_macro_end_586_impl(this, {_return_69});
  Label* label_macro_end_586 = &label_macro_end_586_impl;
  USE(label_macro_end_586);
  // ../../src/builtins/array.tq:20:17
  {
    // ../../src/builtins/array.tq:21:4
    TNode<Smi> t94 = UncheckedCast<Smi>(cast5ATSmi(p_originalLengthNumber, label_Bailout_21));
    USE(t94);
    TVARIABLE(Smi, originalLength_70_impl);
    auto originalLength_70 = &originalLength_70_impl;
    USE(originalLength_70);
    *originalLength_70 = t94;
    // ../../src/builtins/array.tq:22:4
    TNode<Smi> t95 = UncheckedCast<Smi>(cast5ATSmi(p_actualStartNumber, label_Bailout_21));
    USE(t95);
    TVARIABLE(Smi, actualStart_71_impl);
    auto actualStart_71 = &actualStart_71_impl;
    USE(actualStart_71);
    *actualStart_71 = t95;
    // ../../src/builtins/array.tq:23:4
    TNode<Smi> t96 = UncheckedCast<Smi>(cast5ATSmi(p_actualDeleteCountNumber, label_Bailout_21));
    USE(t96);
    TVARIABLE(Smi, actualDeleteCount_72_impl);
    auto actualDeleteCount_72 = &actualDeleteCount_72_impl;
    USE(actualDeleteCount_72);
    *actualDeleteCount_72 = t96;
    // ../../src/builtins/array.tq:25:4
    TNode<Smi> t97 = UncheckedCast<Smi>(SmiSub(p_insertCount, (*actualDeleteCount_72).value()));
    USE(t97);
    TVARIABLE(Smi, lengthDelta_73_impl);
    auto lengthDelta_73 = &lengthDelta_73_impl;
    USE(lengthDelta_73);
    *lengthDelta_73 = t97;
    // ../../src/builtins/array.tq:26:4
    TNode<Smi> t98 = UncheckedCast<Smi>(SmiAdd((*originalLength_70).value(), (*lengthDelta_73).value()));
    USE(t98);
    TVARIABLE(Smi, newLength_74_impl);
    auto newLength_74 = &newLength_74_impl;
    USE(newLength_74);
    *newLength_74 = t98;
    // ../../src/builtins/array.tq:28:4
    TNode<JSArray> t99 = UncheckedCast<JSArray>(cast9ATJSArray(p_o, label_Bailout_21));
    USE(t99);
    TVARIABLE(JSArray, a_75_impl);
    auto a_75 = &a_75_impl;
    USE(a_75);
    *a_75 = t99;
    // ../../src/builtins/array.tq:30:4
    TNode<Map> t100 = UncheckedCast<Map>(LoadMap((*a_75).value()));
    TVARIABLE(Map, map_76_impl);
    auto map_76 = &map_76_impl;
    USE(map_76);
    *map_76 = t100;
    // ../../src/builtins/array.tq:31:4
    {
      Label label__True_22_impl(this);
      Label* label__True_22 = &label__True_22_impl;
      USE(label__True_22);
      Label label__False_23_impl(this, {});
      Label* label__False_23 = &label__False_23_impl;
      USE(label__False_23);
      TNode<BoolT> t101 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(p_context, (*map_76).value()));
      USE(t101);
      TNode<BoolT> t102 = UncheckedCast<BoolT>(Word32BinaryNot(t101));
      USE(t102);
      Branch(t102, label__True_22, label__False_23);
      if (label__True_22->is_used())
      {
        BIND(label__True_22);
        // ../../src/builtins/array.tq:31:57
        Goto(label_Bailout_21);
      }
      BIND(label__False_23);
    }
    // ../../src/builtins/array.tq:32:4
    {
      Label label__True_24_impl(this);
      Label* label__True_24 = &label__True_24_impl;
      USE(label__True_24);
      Label label__False_25_impl(this, {});
      Label* label__False_25 = &label__False_25_impl;
      USE(label__False_25);
      TNode<BoolT> t103 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
      USE(t103);
      Branch(t103, label__True_24, label__False_25);
      if (label__True_24->is_used())
      {
        BIND(label__True_24);
        // ../../src/builtins/array.tq:32:44
        Goto(label_Bailout_21);
      }
      BIND(label__False_25);
    }
    // ../../src/builtins/array.tq:33:4
    {
      Label label__True_26_impl(this);
      Label* label__True_26 = &label__True_26_impl;
      USE(label__True_26);
      Label label__False_27_impl(this, {});
      Label* label__False_27 = &label__False_27_impl;
      USE(label__False_27);
      TNode<BoolT> t104 = UncheckedCast<BoolT>(IsArraySpeciesProtectorCellInvalid());
      USE(t104);
      Branch(t104, label__True_26, label__False_27);
      if (label__True_26->is_used())
      {
        BIND(label__True_26);
        // ../../src/builtins/array.tq:33:46
        Goto(label_Bailout_21);
      }
      BIND(label__False_27);
    }
    // ../../src/builtins/array.tq:36:4
    TNode<Int32T> t105 = UncheckedCast<Int32T>(EnsureArrayPushable((*map_76).value(), label_Bailout_21));
    USE(t105);
    TVARIABLE(Int32T, elementsKind_77_impl);
    auto elementsKind_77 = &elementsKind_77_impl;
    USE(elementsKind_77);
    *elementsKind_77 = t105;
    // ../../src/builtins/array.tq:37:4
    {
      Label label__True_28_impl(this);
      Label* label__True_28 = &label__True_28_impl;
      USE(label__True_28);
      Label label__False_29_impl(this, {});
      Label* label__False_29 = &label__False_29_impl;
      USE(label__False_29);
      TNode<BoolT> t106 = UncheckedCast<BoolT>(IsFastElementsKind((*elementsKind_77).value()));
      USE(t106);
      TNode<BoolT> t107 = UncheckedCast<BoolT>(Word32BinaryNot(t106));
      USE(t107);
      Branch(t107, label__True_28, label__False_29);
      if (label__True_28->is_used())
      {
        BIND(label__True_28);
        // ../../src/builtins/array.tq:37:43
        Goto(label_Bailout_21);
      }
      BIND(label__False_29);
    }
    // ../../src/builtins/array.tq:40:4
    {
      Label label__True_30_impl(this);
      Label* label__True_30 = &label__True_30_impl;
      USE(label__True_30);
      Label label__False_31_impl(this, {});
      Label* label__False_31 = &label__False_31_impl;
      USE(label__False_31);
      TNode<BoolT> t108 = UncheckedCast<BoolT>(IsFastSmiOrTaggedElementsKind((*elementsKind_77).value()));
      USE(t108);
      TNode<BoolT> t109 = UncheckedCast<BoolT>(Word32BinaryNot(t108));
      USE(t109);
      Branch(t109, label__True_30, label__False_31);
      if (label__True_30->is_used())
      {
        BIND(label__True_30);
        // ../../src/builtins/array.tq:40:54
        Goto(label_Bailout_21);
      }
      BIND(label__False_31);
    }
    // ../../src/builtins/array.tq:42:4
    {
      Label label__True_32_impl(this);
      Label* label__True_32 = &label__True_32_impl;
      USE(label__True_32);
      Label label__False_33_impl(this, {});
      Label* label__False_33 = &label__False_33_impl;
      USE(label__False_33);
      TNode<BoolT> t110 = UncheckedCast<BoolT>(IsFastSmiElementsKind((*elementsKind_77).value()));
      USE(t110);
      Branch(t110, label__True_32, label__False_33);
      if (label__True_32->is_used())
      {
        BIND(label__True_32);
        // ../../src/builtins/array.tq:42:45
        {
          // ../../src/builtins/array.tq:43:6
          int31_t t111 = 2;
          TNode<IntPtrT> t112 = UncheckedCast<IntPtrT>(GetArgumentsLength(p_args));
          Label label_body_457_587_impl(this);
          Label* label_body_457_587 = &label_body_457_587_impl;
          USE(label_body_457_587);
          Label label_increment_458_588_impl(this);
          Label* label_increment_458_588 = &label_increment_458_588_impl;
          USE(label_increment_458_588);
          Label label_exit_459_589_impl(this);
          Label* label_exit_459_589 = &label_exit_459_589_impl;
          USE(label_exit_459_589);
          TVARIABLE(IntPtrT, _for_index_t113_460_impl);
          auto _for_index_t113_460 = &_for_index_t113_460_impl;
          USE(_for_index_t113_460);
          TNode<IntPtrT> t114 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t111));
          *_for_index_t113_460 = t114;
          Label label_header_461_590_impl(this, {_for_index_t113_460});
          Label* label_header_461_590 = &label_header_461_590_impl;
          USE(label_header_461_590);
          Goto(label_header_461_590);
          BIND(label_header_461_590);
          TNode<BoolT> t115 = UncheckedCast<BoolT>(IntPtrLessThan((*_for_index_t113_460).value(), t112));
          Branch(t115, label_body_457_587, label_exit_459_589);
          BIND(label_body_457_587);
          TNode<Object> t116 = UncheckedCast<Object>(GetArgumentValue(p_args, (*_for_index_t113_460).value()));
          TVARIABLE(Object, e_78_impl);
          auto e_78 = &e_78_impl;
          USE(e_78);
          *e_78 = t116;
          // ../../src/builtins/array.tq:43:40
          {
            // ../../src/builtins/array.tq:44:8
            {
              Label label__True_34_impl(this);
              Label* label__True_34 = &label__True_34_impl;
              USE(label__True_34);
              Label label__False_35_impl(this, {});
              Label* label__False_35 = &label__False_35_impl;
              USE(label__False_35);
              TNode<BoolT> t117 = UncheckedCast<BoolT>(TaggedIsNotSmi((*e_78).value()));
              USE(t117);
              Branch(t117, label__True_34, label__False_35);
              if (label__True_34->is_used())
              {
                BIND(label__True_34);
                // ../../src/builtins/array.tq:44:31
                Goto(label_Bailout_21);
              }
              BIND(label__False_35);
            }
          }
          Goto(label_increment_458_588);
          BIND(label_increment_458_588);
          TNode<IntPtrT> t118 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(1));
          TNode<IntPtrT> t119 = UncheckedCast<IntPtrT>(IntPtrAdd((*_for_index_t113_460).value(), t118));
          *_for_index_t113_460 = t119;
          Goto(label_header_461_590);
          BIND(label_exit_459_589);
        }
        Goto(label__False_33);
      }
      BIND(label__False_33);
    }
    // ../../src/builtins/array.tq:49:4
    TNode<Number> t120 = UncheckedCast<Number>(LoadJSArrayLength((*a_75).value()));
    TNode<Smi> t121 = UncheckedCast<Smi>(cast5ATSmi(t120, label_Bailout_21));
    USE(t121);
    TVARIABLE(Smi, length_79_impl);
    auto length_79 = &length_79_impl;
    USE(length_79);
    *length_79 = t121;
    // ../../src/builtins/array.tq:50:4
    {
      Label label__True_36_impl(this);
      Label* label__True_36 = &label__True_36_impl;
      USE(label__True_36);
      Label label__False_37_impl(this, {});
      Label* label__False_37 = &label__False_37_impl;
      USE(label__False_37);
      TNode<BoolT> t122 = UncheckedCast<BoolT>(SmiNotEqual((*originalLength_70).value(), (*length_79).value()));
      USE(t122);
      Branch(t122, label__True_36, label__False_37);
      if (label__True_36->is_used())
      {
        BIND(label__True_36);
        // ../../src/builtins/array.tq:50:34
        Goto(label_Bailout_21);
      }
      BIND(label__False_37);
    }
    // ../../src/builtins/array.tq:52:4
    TNode<JSArray> t123 = UncheckedCast<JSArray>(CallBuiltin(Builtins::kExtractFastJSArray, p_context, (*a_75).value(), (*actualStart_71).value(), (*actualDeleteCount_72).value()));
    USE(t123);
    TVARIABLE(JSArray, deletedResult_80_impl);
    auto deletedResult_80 = &deletedResult_80_impl;
    USE(deletedResult_80);
    *deletedResult_80 = t123;
    // ../../src/builtins/array.tq:55:4
    {
      Label label__True_38_impl(this);
      Label* label__True_38 = &label__True_38_impl;
      USE(label__True_38);
      Label label__False_39_impl(this, {});
      Label* label__False_39 = &label__False_39_impl;
      USE(label__False_39);
      int31_t t124 = 0;
      TNode<Smi> t125 = UncheckedCast<Smi>(from_constexpr5ATSmi(t124));
      TNode<BoolT> t126 = UncheckedCast<BoolT>(SmiEqual((*newLength_74).value(), t125));
      USE(t126);
      Branch(t126, label__True_38, label__False_39);
      if (label__True_38->is_used())
      {
        BIND(label__True_38);
        // ../../src/builtins/array.tq:55:24
        {
          // ../../src/builtins/array.tq:56:6
          StoreElements((*a_75).value(), kEmptyFixedArray());
          // ../../src/builtins/array.tq:57:6
          int31_t t127 = 0;
          TNode<Smi> t128 = UncheckedCast<Smi>(from_constexpr5ATSmi(t127));
          StoreJSArrayLength((*a_75).value(), t128);
          // ../../src/builtins/array.tq:58:6
          *_return_69 = (*deletedResult_80).value();
          Goto(label_macro_end_586);
        }
      }
      BIND(label__False_39);
    }
    // ../../src/builtins/array.tq:61:4
    TNode<FixedArrayBase> t129 = UncheckedCast<FixedArrayBase>(LoadElements((*a_75).value()));
    TNode<FixedArray> t130 = UncheckedCast<FixedArray>(cast12ATFixedArray(t129, label_Bailout_21));
    USE(t130);
    TVARIABLE(FixedArray, elements_81_impl);
    auto elements_81 = &elements_81_impl;
    USE(elements_81);
    *elements_81 = t130;
    // ../../src/builtins/array.tq:62:4
    TNode<Map> t131 = UncheckedCast<Map>(LoadMap((*elements_81).value()));
    TVARIABLE(Map, elementsMap_82_impl);
    auto elementsMap_82 = &elementsMap_82_impl;
    USE(elementsMap_82);
    *elementsMap_82 = t131;
    // ../../src/builtins/array.tq:66:4
    TVARIABLE(FixedArray, newElements_83_impl);
    auto newElements_83 = &newElements_83_impl;
    USE(newElements_83);
    *newElements_83 = (*elements_81).value();
    // ../../src/builtins/array.tq:67:4
    {
      Label label__True_40_impl(this);
      Label* label__True_40 = &label__True_40_impl;
      USE(label__True_40);
      Label label__False_41_impl(this, {newElements_83});
      Label* label__False_41 = &label__False_41_impl;
      USE(label__False_41);
      Label label__False_42_impl(this);
      Label* label__False_42 = &label__False_42_impl;
      USE(label__False_42);
      TNode<BoolT> t132 = UncheckedCast<BoolT>(WordEqual((*elementsMap_82).value(), kCOWMap()));
      USE(t132);
      GotoIf(t132, label__True_40);
      int31_t t133 = 0;
      TNode<Smi> t134 = UncheckedCast<Smi>(from_constexpr5ATSmi(t133));
      TNode<BoolT> t135 = UncheckedCast<BoolT>(SmiGreaterThan((*lengthDelta_73).value(), t134));
      USE(t135);
      Branch(t135, label__True_40, label__False_41);
      if (label__True_40->is_used())
      {
        BIND(label__True_40);
        // ../../src/builtins/array.tq:67:55
        {
          // ../../src/builtins/array.tq:68:6
          int31_t t136 = 0;
          TNode<Smi> t137 = UncheckedCast<Smi>(from_constexpr5ATSmi(t136));
          TNode<FixedArray> t138 = UncheckedCast<FixedArray>(ExtractFixedArray((*elements_81).value(), t137, (*actualStart_71).value(), (*newLength_74).value(), ExtractFixedArrayFlag::kAllFixedArrays));
          USE(t138);
          *newElements_83 = t138;
          // ../../src/builtins/array.tq:70:6
          StoreMap((*newElements_83).value(), (*elementsMap_82).value());
          // ../../src/builtins/array.tq:71:6
          StoreElements((*a_75).value(), (*newElements_83).value());
        }
        Goto(label__False_41);
      }
      BIND(label__False_41);
    }
    // ../../src/builtins/array.tq:75:4
    // ../../src/builtins/array.tq:78:4
    TVARIABLE(Smi, k_84_impl);
    auto k_84 = &k_84_impl;
    USE(k_84);
    *k_84 = (*actualStart_71).value();
    // ../../src/builtins/array.tq:79:4
    {
      Label label__True_43_impl(this);
      Label* label__True_43 = &label__True_43_impl;
      USE(label__True_43);
      Label label__False_44_impl(this, {k_84});
      Label* label__False_44 = &label__False_44_impl;
      USE(label__False_44);
      int31_t t139 = 0;
      TNode<Smi> t140 = UncheckedCast<Smi>(from_constexpr5ATSmi(t139));
      TNode<BoolT> t141 = UncheckedCast<BoolT>(SmiGreaterThan(p_insertCount, t140));
      USE(t141);
      Branch(t141, label__True_43, label__False_44);
      if (label__True_43->is_used())
      {
        BIND(label__True_43);
        // ../../src/builtins/array.tq:79:25
        {
          // ../../src/builtins/array.tq:80:6
          int31_t t142 = 2;
          TNode<IntPtrT> t143 = UncheckedCast<IntPtrT>(GetArgumentsLength(p_args));
          Label label_body_462_591_impl(this);
          Label* label_body_462_591 = &label_body_462_591_impl;
          USE(label_body_462_591);
          Label label_increment_463_592_impl(this);
          Label* label_increment_463_592 = &label_increment_463_592_impl;
          USE(label_increment_463_592);
          Label label_exit_464_593_impl(this);
          Label* label_exit_464_593 = &label_exit_464_593_impl;
          USE(label_exit_464_593);
          TVARIABLE(IntPtrT, _for_index_t144_465_impl);
          auto _for_index_t144_465 = &_for_index_t144_465_impl;
          USE(_for_index_t144_465);
          TNode<IntPtrT> t145 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t142));
          *_for_index_t144_465 = t145;
          Label label_header_466_594_impl(this, {k_84, _for_index_t144_465});
          Label* label_header_466_594 = &label_header_466_594_impl;
          USE(label_header_466_594);
          Goto(label_header_466_594);
          BIND(label_header_466_594);
          TNode<BoolT> t146 = UncheckedCast<BoolT>(IntPtrLessThan((*_for_index_t144_465).value(), t143));
          Branch(t146, label_body_462_591, label_exit_464_593);
          BIND(label_body_462_591);
          TNode<Object> t147 = UncheckedCast<Object>(GetArgumentValue(p_args, (*_for_index_t144_465).value()));
          TVARIABLE(Object, e_85_impl);
          auto e_85 = &e_85_impl;
          USE(e_85);
          *e_85 = t147;
          // ../../src/builtins/array.tq:80:40
          {
            // ../../src/builtins/array.tq:81:8
            TNode<Smi> t148 = (*k_84).value();
            USE(t148);
            TNode<Smi> t149 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
            TNode<Smi> t150 = UncheckedCast<Smi>(SmiAdd((*k_84).value(), t149));
            *k_84 = t150;
            StoreFixedArrayElementSmi((*newElements_83).value(), t148, (*e_85).value());
          }
          Goto(label_increment_463_592);
          BIND(label_increment_463_592);
          TNode<IntPtrT> t151 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(1));
          TNode<IntPtrT> t152 = UncheckedCast<IntPtrT>(IntPtrAdd((*_for_index_t144_465).value(), t151));
          *_for_index_t144_465 = t152;
          Goto(label_header_466_594);
          BIND(label_exit_464_593);
        }
        Goto(label__False_44);
      }
      BIND(label__False_44);
    }
    // ../../src/builtins/array.tq:86:4
    TNode<Smi> t153 = UncheckedCast<Smi>(SmiSub((*length_79).value(), (*actualStart_71).value()));
    USE(t153);
    TNode<Smi> t154 = UncheckedCast<Smi>(SmiSub(t153, (*actualDeleteCount_72).value()));
    USE(t154);
    TVARIABLE(Smi, count_86_impl);
    auto count_86 = &count_86_impl;
    USE(count_86);
    *count_86 = t154;
    // ../../src/builtins/array.tq:87:4
    {
      Label label__True_45_impl(this);
      Label* label__True_45 = &label__True_45_impl;
      USE(label__True_45);
      Label label__False_46_impl(this);
      Label* label__False_46 = &label__False_46_impl;
      USE(label__False_46);
      Label label_header_467_595_impl(this, {k_84, count_86});
      Label* label_header_467_595 = &label_header_467_595_impl;
      USE(label_header_467_595);
      Goto(label_header_467_595);
      BIND(label_header_467_595);
      int31_t t155 = 0;
      TNode<Smi> t156 = UncheckedCast<Smi>(from_constexpr5ATSmi(t155));
      TNode<BoolT> t157 = UncheckedCast<BoolT>(SmiGreaterThan((*count_86).value(), t156));
      USE(t157);
      Branch(t157, label__True_45, label__False_46);
      if (label__True_45->is_used())
      {
        BIND(label__True_45);
        // ../../src/builtins/array.tq:87:22
        {
          // ../../src/builtins/array.tq:88:6
          TNode<Smi> t158 = UncheckedCast<Smi>(SmiSub((*k_84).value(), (*lengthDelta_73).value()));
          USE(t158);
          TNode<Object> t159 = UncheckedCast<Object>(LoadFixedArrayElement((*elements_81).value(), t158));
          TVARIABLE(Object, e_87_impl);
          auto e_87 = &e_87_impl;
          USE(e_87);
          *e_87 = t159;
          // ../../src/builtins/array.tq:89:6
          TNode<Smi> t160 = (*k_84).value();
          USE(t160);
          TNode<Smi> t161 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
          TNode<Smi> t162 = UncheckedCast<Smi>(SmiAdd((*k_84).value(), t161));
          *k_84 = t162;
          StoreFixedArrayElementSmi((*newElements_83).value(), t160, (*e_87).value());
          // ../../src/builtins/array.tq:90:6
          TNode<Smi> t163 = (*count_86).value();
          USE(t163);
          TNode<Smi> t164 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
          TNode<Smi> t165 = UncheckedCast<Smi>(SmiSub((*count_86).value(), t164));
          *count_86 = t165;
        }
        Goto(label_header_467_595);
      }
      BIND(label__False_46);
    }
    // ../../src/builtins/array.tq:96:4
    {
      Label label__True_47_impl(this);
      Label* label__True_47 = &label__True_47_impl;
      USE(label__True_47);
      Label label__False_48_impl(this, {k_84});
      Label* label__False_48 = &label__False_48_impl;
      USE(label__False_48);
      TNode<BoolT> t166 = UncheckedCast<BoolT>(WordEqual((*elements_81).value(), (*newElements_83).value()));
      USE(t166);
      Branch(t166, label__True_47, label__False_48);
      if (label__True_47->is_used())
      {
        BIND(label__True_47);
        // ../../src/builtins/array.tq:96:33
        {
          // ../../src/builtins/array.tq:97:6
          TNode<Smi> t167 = UncheckedCast<Smi>(LoadFixedArrayBaseLength((*elements_81).value()));
          TVARIABLE(Smi, limit_88_impl);
          auto limit_88 = &limit_88_impl;
          USE(limit_88);
          *limit_88 = t167;
          // ../../src/builtins/array.tq:98:6
          {
            Label label__True_49_impl(this);
            Label* label__True_49 = &label__True_49_impl;
            USE(label__True_49);
            Label label__False_50_impl(this);
            Label* label__False_50 = &label__False_50_impl;
            USE(label__False_50);
            Label label_header_468_596_impl(this, {k_84});
            Label* label_header_468_596 = &label_header_468_596_impl;
            USE(label_header_468_596);
            Goto(label_header_468_596);
            BIND(label_header_468_596);
            TNode<BoolT> t168 = UncheckedCast<BoolT>(SmiLessThan((*k_84).value(), (*limit_88).value()));
            USE(t168);
            Branch(t168, label__True_49, label__False_50);
            if (label__True_49->is_used())
            {
              BIND(label__True_49);
              // ../../src/builtins/array.tq:98:24
              {
                // ../../src/builtins/array.tq:99:8
                TNode<Smi> t169 = (*k_84).value();
                USE(t169);
                TNode<Smi> t170 = UncheckedCast<Smi>(from_constexpr5ATSmi(1));
                TNode<Smi> t171 = UncheckedCast<Smi>(SmiAdd((*k_84).value(), t170));
                *k_84 = t171;
                StoreFixedArrayElementSmi((*newElements_83).value(), t169, Hole());
              }
              Goto(label_header_468_596);
            }
            BIND(label__False_50);
          }
        }
        Goto(label__False_48);
      }
      BIND(label__False_48);
    }
    // ../../src/builtins/array.tq:104:4
    StoreJSArrayLength((*a_75).value(), (*newLength_74).value());
    // ../../src/builtins/array.tq:106:4
    *_return_69 = (*deletedResult_80).value();
    Goto(label_macro_end_586);
  }
  BIND(label_macro_end_586);
  return (*_return_69).value();
}

TF_BUILTIN(ArraySpliceTorque, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array.tq:111:64
  {
    // ../../src/builtins/array.tq:113:4
    TNode<JSReceiver> t172 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, p_context, p_receiver));
    USE(t172);
    TVARIABLE(Object, o_89_impl);
    auto o_89 = &o_89_impl;
    USE(o_89);
    *o_89 = t172;
    // ../../src/builtins/array.tq:116:4
    TNode<Number> t173 = UncheckedCast<Number>(GetLengthProperty(p_context, (*o_89).value()));
    USE(t173);
    TVARIABLE(Number, len_90_impl);
    auto len_90 = &len_90_impl;
    USE(len_90);
    *len_90 = t173;
    // ../../src/builtins/array.tq:119:4
    int31_t t174 = 0;
    TNode<IntPtrT> t175 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t174));
    TNode<Object> t176 = UncheckedCast<Object>(GetArgumentValue(arguments, t175));
    TVARIABLE(Object, start_91_impl);
    auto start_91 = &start_91_impl;
    USE(start_91);
    *start_91 = t176;
    // ../../src/builtins/array.tq:120:4
    TNode<Number> t177 = UncheckedCast<Number>(ToInteger_Inline(p_context, (*start_91).value()));
    USE(t177);
    TVARIABLE(Number, relativeStart_92_impl);
    auto relativeStart_92 = &relativeStart_92_impl;
    USE(relativeStart_92);
    *relativeStart_92 = t177;
    // ../../src/builtins/array.tq:125:4
    auto t178 = [=]() {
      TNode<Number> t180 = UncheckedCast<Number>(NumberAdd((*len_90).value(), (*relativeStart_92).value()));
      USE(t180);
      int31_t t181 = 0;
      TNode<Number> t182 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t181));
      TNode<Number> t183 = UncheckedCast<Number>(NumberMax(t180, t182));
      USE(t183);
      return t183;
    };
    auto t179 = [=]() {
      TNode<Number> t184 = UncheckedCast<Number>(NumberMin((*relativeStart_92).value(), (*len_90).value()));
      USE(t184);
      return t184;
    };
    TVARIABLE(Number, t185_469_impl);
    auto t185_469 = &t185_469_impl;
    USE(t185_469);
    {
      Label label__True_51_impl(this);
      Label* label__True_51 = &label__True_51_impl;
      USE(label__True_51);
      Label label__False_52_impl(this);
      Label* label__False_52 = &label__False_52_impl;
      USE(label__False_52);
      Label label__done_470_597_impl(this, {t185_469});
      Label* label__done_470_597 = &label__done_470_597_impl;
      USE(label__done_470_597);
      int31_t t186 = 0;
      TNode<Number> t187 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t186));
      BranchIfNumberLessThan((*relativeStart_92).value(), t187, label__True_51, label__False_52);
      BIND(label__True_51);
            *t185_469 = t178();
      Goto(label__done_470_597);
      BIND(label__False_52);
            *t185_469 = t179();
      Goto(label__done_470_597);
      BIND(label__done_470_597);
    }
    TVARIABLE(Number, actualStart_93_impl);
    auto actualStart_93 = &actualStart_93_impl;
    USE(actualStart_93);
    *actualStart_93 = (*t185_469).value();
    // ../../src/builtins/array.tq:129:4
    TVARIABLE(Smi, insertCount_94_impl);
    auto insertCount_94 = &insertCount_94_impl;
    USE(insertCount_94);
    // ../../src/builtins/array.tq:130:4
    TVARIABLE(Number, actualDeleteCount_95_impl);
    auto actualDeleteCount_95 = &actualDeleteCount_95_impl;
    USE(actualDeleteCount_95);
    // ../../src/builtins/array.tq:132:4
    {
      Label label__True_53_impl(this);
      Label* label__True_53 = &label__True_53_impl;
      USE(label__True_53);
      Label label__False_54_impl(this);
      Label* label__False_54 = &label__False_54_impl;
      USE(label__False_54);
      Label label_if_done_label_471_598_impl(this, {insertCount_94, actualDeleteCount_95});
      Label* label_if_done_label_471_598 = &label_if_done_label_471_598_impl;
      USE(label_if_done_label_471_598);
      TNode<IntPtrT> t188 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t189 = 0;
      TNode<IntPtrT> t190 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t189));
      TNode<BoolT> t191 = UncheckedCast<BoolT>(WordEqual(t188, t190));
      USE(t191);
      Branch(t191, label__True_53, label__False_54);
      if (label__True_53->is_used())
      {
        BIND(label__True_53);
        // ../../src/builtins/array.tq:132:31
        {
          // ../../src/builtins/array.tq:134:6
          int31_t t192 = 0;
          TNode<Smi> t193 = UncheckedCast<Smi>(from_constexpr5ATSmi(t192));
          *insertCount_94 = t193;
          // ../../src/builtins/array.tq:136:6
          int31_t t194 = 0;
          TNode<Number> t195 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t194));
          *actualDeleteCount_95 = t195;
        }
        Goto(label_if_done_label_471_598);
      }
      if (label__False_54->is_used())
      {
        BIND(label__False_54);
        // ../../src/builtins/array.tq:138:11
        {
          Label label__True_55_impl(this);
          Label* label__True_55 = &label__True_55_impl;
          USE(label__True_55);
          Label label__False_56_impl(this);
          Label* label__False_56 = &label__False_56_impl;
          USE(label__False_56);
          Label label_if_done_label_472_599_impl(this, {insertCount_94, actualDeleteCount_95});
          Label* label_if_done_label_472_599 = &label_if_done_label_472_599_impl;
          USE(label_if_done_label_472_599);
          TNode<IntPtrT> t196 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
          int31_t t197 = 1;
          TNode<IntPtrT> t198 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t197));
          TNode<BoolT> t199 = UncheckedCast<BoolT>(WordEqual(t196, t198));
          USE(t199);
          Branch(t199, label__True_55, label__False_56);
          if (label__True_55->is_used())
          {
            BIND(label__True_55);
            // ../../src/builtins/array.tq:138:38
            {
              // ../../src/builtins/array.tq:140:6
              int31_t t200 = 0;
              TNode<Smi> t201 = UncheckedCast<Smi>(from_constexpr5ATSmi(t200));
              *insertCount_94 = t201;
              // ../../src/builtins/array.tq:142:6
              TNode<Number> t202 = UncheckedCast<Number>(NumberSub((*len_90).value(), (*actualStart_93).value()));
              USE(t202);
              *actualDeleteCount_95 = t202;
            }
            Goto(label_if_done_label_472_599);
          }
          if (label__False_56->is_used())
          {
            BIND(label__False_56);
            // ../../src/builtins/array.tq:144:11
            {
              // ../../src/builtins/array.tq:146:6
              TNode<IntPtrT> t203 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
              TNode<Smi> t204 = UncheckedCast<Smi>(convert5ATSmi(t203));
              USE(t204);
              int31_t t205 = 2;
              TNode<Smi> t206 = UncheckedCast<Smi>(from_constexpr5ATSmi(t205));
              TNode<Smi> t207 = UncheckedCast<Smi>(SmiSub(t204, t206));
              USE(t207);
              *insertCount_94 = t207;
              // ../../src/builtins/array.tq:148:6
              int31_t t208 = 1;
              TNode<IntPtrT> t209 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t208));
              TNode<Object> t210 = UncheckedCast<Object>(GetArgumentValue(arguments, t209));
              TVARIABLE(Object, deleteCount_96_impl);
              auto deleteCount_96 = &deleteCount_96_impl;
              USE(deleteCount_96);
              *deleteCount_96 = t210;
              // ../../src/builtins/array.tq:149:6
              TNode<Number> t211 = UncheckedCast<Number>(ToInteger_Inline(p_context, (*deleteCount_96).value()));
              USE(t211);
              TVARIABLE(Number, dc_97_impl);
              auto dc_97 = &dc_97_impl;
              USE(dc_97);
              *dc_97 = t211;
              // ../../src/builtins/array.tq:151:6
              int31_t t212 = 0;
              TNode<Number> t213 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t212));
              TNode<Number> t214 = UncheckedCast<Number>(NumberMax((*dc_97).value(), t213));
              USE(t214);
              TNode<Number> t215 = UncheckedCast<Number>(NumberSub((*len_90).value(), (*actualStart_93).value()));
              USE(t215);
              TNode<Number> t216 = UncheckedCast<Number>(NumberMin(t214, t215));
              USE(t216);
              *actualDeleteCount_95 = t216;
            }
            Goto(label_if_done_label_472_599);
          }
          BIND(label_if_done_label_472_599);
        }
        Goto(label_if_done_label_471_598);
      }
      BIND(label_if_done_label_471_598);
    }
    // ../../src/builtins/array.tq:156:4
    {
      Label label__True_57_impl(this);
      Label* label__True_57 = &label__True_57_impl;
      USE(label__True_57);
      Label label__False_58_impl(this, {});
      Label* label__False_58 = &label__False_58_impl;
      USE(label__False_58);
      TNode<Number> t217 = UncheckedCast<Number>(NumberAdd((*len_90).value(), (*insertCount_94).value()));
      USE(t217);
      TNode<Number> t218 = UncheckedCast<Number>(NumberSub(t217, (*actualDeleteCount_95).value()));
      USE(t218);
      TNode<Number> t219 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(kMaxSafeInteger));
      BranchIfNumberGreaterThan(t218, t219, label__True_57, label__False_58);
      if (label__True_57->is_used())
      {
        BIND(label__True_57);
        // ../../src/builtins/array.tq:156:65
        {
          // ../../src/builtins/array.tq:157:6
          ThrowRangeError(p_context, MessageTemplate::kInvalidArrayLength);
        }
      }
      BIND(label__False_58);
    }
    // ../../src/builtins/array.tq:160:4
    {
      Label label_try_done_473_600_impl(this);
      Label* label_try_done_473_600 = &label_try_done_473_600_impl;
      USE(label_try_done_473_600);
      Label label_Bailout_59_impl(this);
      Label* label_Bailout_59 = &label_Bailout_59_impl;
      USE(label_Bailout_59);
      Label label_try_begin_474_601_impl(this);
      Label* label_try_begin_474_601 = &label_try_begin_474_601_impl;
      USE(label_try_begin_474_601);
      Goto(label_try_begin_474_601);
      if (label_try_begin_474_601->is_used())
      {
        BIND(label_try_begin_474_601);
        // ../../src/builtins/array.tq:160:8
        {
          // ../../src/builtins/array.tq:161:6
          TNode<Object> t220 = UncheckedCast<Object>(FastArraySplice(p_context, arguments, (*o_89).value(), (*len_90).value(), (*actualStart_93).value(), (*insertCount_94).value(), (*actualDeleteCount_95).value(), label_Bailout_59));
          USE(t220);
          arguments->PopAndReturn(t220);
        }
      }
      if (label_Bailout_59->is_used())
      {
        BIND(label_Bailout_59);
        // ../../src/builtins/array.tq:165:18
        {
        }
        Goto(label_try_done_473_600);
      }
      BIND(label_try_done_473_600);
    }
    // ../../src/builtins/array.tq:170:4
    TNode<Object> t221 = UncheckedCast<Object>(ArraySpeciesCreate(p_context, (*o_89).value(), (*actualDeleteCount_95).value()));
    USE(t221);
    TVARIABLE(Object, a_98_impl);
    auto a_98 = &a_98_impl;
    USE(a_98);
    *a_98 = t221;
    // ../../src/builtins/array.tq:173:4
    int31_t t222 = 0;
    TVARIABLE(Number, k_99_impl);
    auto k_99 = &k_99_impl;
    USE(k_99);
    TNode<Number> t223 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t222));
    *k_99 = t223;
    // ../../src/builtins/array.tq:176:4
    {
      Label label__True_60_impl(this);
      Label* label__True_60 = &label__True_60_impl;
      USE(label__True_60);
      Label label__False_61_impl(this);
      Label* label__False_61 = &label__False_61_impl;
      USE(label__False_61);
      Label label_header_475_602_impl(this, {k_99});
      Label* label_header_475_602 = &label_header_475_602_impl;
      USE(label_header_475_602);
      Goto(label_header_475_602);
      BIND(label_header_475_602);
      BranchIfNumberLessThan((*k_99).value(), (*actualDeleteCount_95).value(), label__True_60, label__False_61);
      if (label__True_60->is_used())
      {
        BIND(label__True_60);
        // ../../src/builtins/array.tq:176:34
        {
          // ../../src/builtins/array.tq:178:6
          TNode<Number> t224 = UncheckedCast<Number>(NumberAdd((*actualStart_93).value(), (*k_99).value()));
          USE(t224);
          TNode<String> t225 = UncheckedCast<String>(ToString_Inline(p_context, t224));
          USE(t225);
          TVARIABLE(String, from_100_impl);
          auto from_100 = &from_100_impl;
          USE(from_100);
          *from_100 = t225;
          // ../../src/builtins/array.tq:181:6
          TNode<Oddball> t226 = UncheckedCast<Oddball>(HasPropertyObject((*o_89).value(), (*from_100).value(), p_context, kHasProperty));
          USE(t226);
          TVARIABLE(Oddball, fromPresent_101_impl);
          auto fromPresent_101 = &fromPresent_101_impl;
          USE(fromPresent_101);
          *fromPresent_101 = t226;
          // ../../src/builtins/array.tq:185:6
          {
            Label label__True_62_impl(this);
            Label* label__True_62 = &label__True_62_impl;
            USE(label__True_62);
            Label label__False_63_impl(this, {});
            Label* label__False_63 = &label__False_63_impl;
            USE(label__False_63);
            TNode<BoolT> t227 = UncheckedCast<BoolT>(WordEqual((*fromPresent_101).value(), True()));
            USE(t227);
            Branch(t227, label__True_62, label__False_63);
            if (label__True_62->is_used())
            {
              BIND(label__True_62);
              // ../../src/builtins/array.tq:185:31
              {
                // ../../src/builtins/array.tq:187:8
                TNode<Object> t228 = UncheckedCast<Object>(GetProperty(p_context, (*o_89).value(), (*from_100).value()));
                USE(t228);
                TVARIABLE(Object, fromValue_102_impl);
                auto fromValue_102 = &fromValue_102_impl;
                USE(fromValue_102);
                *fromValue_102 = t228;
                // ../../src/builtins/array.tq:190:8
                TNode<String> t229 = UncheckedCast<String>(ToString_Inline(p_context, (*k_99).value()));
                USE(t229);
                CallRuntime(Runtime::kCreateDataProperty, p_context, (*a_98).value(), t229, (*fromValue_102).value());
              }
              Goto(label__False_63);
            }
            BIND(label__False_63);
          }
          // ../../src/builtins/array.tq:194:6
          int31_t t230 = 1;
          TNode<Number> t231 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t230));
          TNode<Number> t232 = UncheckedCast<Number>(NumberAdd((*k_99).value(), t231));
          USE(t232);
          *k_99 = t232;
        }
        Goto(label_header_475_602);
      }
      BIND(label__False_61);
    }
    // ../../src/builtins/array.tq:198:4
    const char* t233 = "length";
    TNode<Object> t234 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t233));
    TNode<Smi> t235 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
    CallRuntime(Runtime::kSetProperty, p_context, (*a_98).value(), t234, (*actualDeleteCount_95).value(), t235);
    // ../../src/builtins/array.tq:205:4
    TVARIABLE(Number, itemCount_103_impl);
    auto itemCount_103 = &itemCount_103_impl;
    USE(itemCount_103);
    *itemCount_103 = (*insertCount_94).value();
    // ../../src/builtins/array.tq:208:4
    {
      Label label__True_64_impl(this);
      Label* label__True_64 = &label__True_64_impl;
      USE(label__True_64);
      Label label__False_65_impl(this);
      Label* label__False_65 = &label__False_65_impl;
      USE(label__False_65);
      Label label_if_done_label_476_603_impl(this, {});
      Label* label_if_done_label_476_603 = &label_if_done_label_476_603_impl;
      USE(label_if_done_label_476_603);
      BranchIfNumberLessThan((*itemCount_103).value(), (*actualDeleteCount_95).value(), label__True_64, label__False_65);
      if (label__True_64->is_used())
      {
        BIND(label__True_64);
        // ../../src/builtins/array.tq:208:39
        {
          // ../../src/builtins/array.tq:210:6
          TVARIABLE(Number, k_104_impl);
          auto k_104 = &k_104_impl;
          USE(k_104);
          *k_104 = (*actualStart_93).value();
          // ../../src/builtins/array.tq:213:6
          {
            Label label__True_66_impl(this);
            Label* label__True_66 = &label__True_66_impl;
            USE(label__True_66);
            Label label__False_67_impl(this);
            Label* label__False_67 = &label__False_67_impl;
            USE(label__False_67);
            Label label_header_477_604_impl(this, {k_104});
            Label* label_header_477_604 = &label_header_477_604_impl;
            USE(label_header_477_604);
            Goto(label_header_477_604);
            BIND(label_header_477_604);
            TNode<Number> t236 = UncheckedCast<Number>(NumberSub((*len_90).value(), (*actualDeleteCount_95).value()));
            USE(t236);
            BranchIfNumberLessThan((*k_104).value(), t236, label__True_66, label__False_67);
            if (label__True_66->is_used())
            {
              BIND(label__True_66);
              // ../../src/builtins/array.tq:213:44
              {
                // ../../src/builtins/array.tq:215:8
                TNode<Number> t237 = UncheckedCast<Number>(NumberAdd((*k_104).value(), (*actualDeleteCount_95).value()));
                USE(t237);
                TNode<String> t238 = UncheckedCast<String>(ToString_Inline(p_context, t237));
                USE(t238);
                TVARIABLE(String, from_105_impl);
                auto from_105 = &from_105_impl;
                USE(from_105);
                *from_105 = t238;
                // ../../src/builtins/array.tq:217:8
                TNode<Number> t239 = UncheckedCast<Number>(NumberAdd((*k_104).value(), (*itemCount_103).value()));
                USE(t239);
                TNode<String> t240 = UncheckedCast<String>(ToString_Inline(p_context, t239));
                USE(t240);
                TVARIABLE(String, to_106_impl);
                auto to_106 = &to_106_impl;
                USE(to_106);
                *to_106 = t240;
                // ../../src/builtins/array.tq:220:8
                TNode<Oddball> t241 = UncheckedCast<Oddball>(HasPropertyObject((*o_89).value(), (*from_105).value(), p_context, kHasProperty));
                USE(t241);
                TVARIABLE(Oddball, fromPresent_107_impl);
                auto fromPresent_107 = &fromPresent_107_impl;
                USE(fromPresent_107);
                *fromPresent_107 = t241;
                // ../../src/builtins/array.tq:224:8
                {
                  Label label__True_68_impl(this);
                  Label* label__True_68 = &label__True_68_impl;
                  USE(label__True_68);
                  Label label__False_69_impl(this);
                  Label* label__False_69 = &label__False_69_impl;
                  USE(label__False_69);
                  Label label_if_done_label_478_605_impl(this, {});
                  Label* label_if_done_label_478_605 = &label_if_done_label_478_605_impl;
                  USE(label_if_done_label_478_605);
                  TNode<BoolT> t242 = UncheckedCast<BoolT>(WordEqual((*fromPresent_107).value(), True()));
                  USE(t242);
                  Branch(t242, label__True_68, label__False_69);
                  if (label__True_68->is_used())
                  {
                    BIND(label__True_68);
                    // ../../src/builtins/array.tq:224:33
                    {
                      // ../../src/builtins/array.tq:226:10
                      TNode<Object> t243 = UncheckedCast<Object>(GetProperty(p_context, (*o_89).value(), (*from_105).value()));
                      USE(t243);
                      TVARIABLE(Object, fromValue_108_impl);
                      auto fromValue_108 = &fromValue_108_impl;
                      USE(fromValue_108);
                      *fromValue_108 = t243;
                      // ../../src/builtins/array.tq:229:10
                      TNode<Smi> t244 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                      CallRuntime(Runtime::kSetProperty, p_context, (*o_89).value(), (*to_106).value(), (*fromValue_108).value(), t244);
                    }
                    Goto(label_if_done_label_478_605);
                  }
                  if (label__False_69->is_used())
                  {
                    BIND(label__False_69);
                    // ../../src/builtins/array.tq:232:15
                    {
                      // ../../src/builtins/array.tq:234:10
                      TNode<Smi> t245 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                      CallRuntime(Runtime::kDeleteProperty, p_context, (*o_89).value(), (*to_106).value(), t245);
                    }
                    Goto(label_if_done_label_478_605);
                  }
                  BIND(label_if_done_label_478_605);
                }
                // ../../src/builtins/array.tq:237:8
                int31_t t246 = 1;
                TNode<Number> t247 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t246));
                TNode<Number> t248 = UncheckedCast<Number>(NumberAdd((*k_104).value(), t247));
                USE(t248);
                *k_104 = t248;
              }
              Goto(label_header_477_604);
            }
            BIND(label__False_67);
          }
          // ../../src/builtins/array.tq:241:6
          *k_104 = (*len_90).value();
          // ../../src/builtins/array.tq:243:6
          {
            Label label__True_70_impl(this);
            Label* label__True_70 = &label__True_70_impl;
            USE(label__True_70);
            Label label__False_71_impl(this);
            Label* label__False_71 = &label__False_71_impl;
            USE(label__False_71);
            Label label_header_479_606_impl(this, {k_104});
            Label* label_header_479_606 = &label_header_479_606_impl;
            USE(label_header_479_606);
            Goto(label_header_479_606);
            BIND(label_header_479_606);
            TNode<Number> t249 = UncheckedCast<Number>(NumberSub((*len_90).value(), (*actualDeleteCount_95).value()));
            USE(t249);
            TNode<Number> t250 = UncheckedCast<Number>(NumberAdd(t249, (*itemCount_103).value()));
            USE(t250);
            BranchIfNumberGreaterThan((*k_104).value(), t250, label__True_70, label__False_71);
            if (label__True_70->is_used())
            {
              BIND(label__True_70);
              // ../../src/builtins/array.tq:243:56
              {
                // ../../src/builtins/array.tq:245:8
                int31_t t251 = 1;
                TNode<Number> t252 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t251));
                TNode<Number> t253 = UncheckedCast<Number>(NumberSub((*k_104).value(), t252));
                USE(t253);
                TNode<String> t254 = UncheckedCast<String>(ToString_Inline(p_context, t253));
                USE(t254);
                TNode<Smi> t255 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                CallRuntime(Runtime::kDeleteProperty, p_context, (*o_89).value(), t254, t255);
                // ../../src/builtins/array.tq:248:8
                int31_t t256 = 1;
                TNode<Number> t257 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t256));
                TNode<Number> t258 = UncheckedCast<Number>(NumberSub((*k_104).value(), t257));
                USE(t258);
                *k_104 = t258;
              }
              Goto(label_header_479_606);
            }
            BIND(label__False_71);
          }
        }
        Goto(label_if_done_label_476_603);
      }
      if (label__False_65->is_used())
      {
        BIND(label__False_65);
        // ../../src/builtins/array.tq:251:11
        {
          Label label__True_72_impl(this);
          Label* label__True_72 = &label__True_72_impl;
          USE(label__True_72);
          Label label__False_73_impl(this, {});
          Label* label__False_73 = &label__False_73_impl;
          USE(label__False_73);
          BranchIfNumberGreaterThan((*itemCount_103).value(), (*actualDeleteCount_95).value(), label__True_72, label__False_73);
          if (label__True_72->is_used())
          {
            BIND(label__True_72);
            // ../../src/builtins/array.tq:251:46
            {
              // ../../src/builtins/array.tq:253:6
              TNode<Number> t259 = UncheckedCast<Number>(NumberSub((*len_90).value(), (*actualDeleteCount_95).value()));
              USE(t259);
              TVARIABLE(Number, k_109_impl);
              auto k_109 = &k_109_impl;
              USE(k_109);
              *k_109 = t259;
              // ../../src/builtins/array.tq:256:6
              {
                Label label__True_74_impl(this);
                Label* label__True_74 = &label__True_74_impl;
                USE(label__True_74);
                Label label__False_75_impl(this);
                Label* label__False_75 = &label__False_75_impl;
                USE(label__False_75);
                Label label_header_480_607_impl(this, {k_109});
                Label* label_header_480_607 = &label_header_480_607_impl;
                USE(label_header_480_607);
                Goto(label_header_480_607);
                BIND(label_header_480_607);
                BranchIfNumberGreaterThan((*k_109).value(), (*actualStart_93).value(), label__True_74, label__False_75);
                if (label__True_74->is_used())
                {
                  BIND(label__True_74);
                  // ../../src/builtins/array.tq:256:30
                  {
                    // ../../src/builtins/array.tq:258:8
                    TNode<Number> t260 = UncheckedCast<Number>(NumberAdd((*k_109).value(), (*actualDeleteCount_95).value()));
                    USE(t260);
                    int31_t t261 = 1;
                    TNode<Number> t262 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t261));
                    TNode<Number> t263 = UncheckedCast<Number>(NumberSub(t260, t262));
                    USE(t263);
                    TNode<String> t264 = UncheckedCast<String>(ToString_Inline(p_context, t263));
                    USE(t264);
                    TVARIABLE(String, from_110_impl);
                    auto from_110 = &from_110_impl;
                    USE(from_110);
                    *from_110 = t264;
                    // ../../src/builtins/array.tq:261:8
                    TNode<Number> t265 = UncheckedCast<Number>(NumberAdd((*k_109).value(), (*itemCount_103).value()));
                    USE(t265);
                    int31_t t266 = 1;
                    TNode<Number> t267 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t266));
                    TNode<Number> t268 = UncheckedCast<Number>(NumberSub(t265, t267));
                    USE(t268);
                    TNode<String> t269 = UncheckedCast<String>(ToString_Inline(p_context, t268));
                    USE(t269);
                    TVARIABLE(String, to_111_impl);
                    auto to_111 = &to_111_impl;
                    USE(to_111);
                    *to_111 = t269;
                    // ../../src/builtins/array.tq:264:8
                    TNode<Oddball> t270 = UncheckedCast<Oddball>(HasPropertyObject((*o_89).value(), (*from_110).value(), p_context, kHasProperty));
                    USE(t270);
                    TVARIABLE(Oddball, fromPresent_112_impl);
                    auto fromPresent_112 = &fromPresent_112_impl;
                    USE(fromPresent_112);
                    *fromPresent_112 = t270;
                    // ../../src/builtins/array.tq:268:8
                    {
                      Label label__True_76_impl(this);
                      Label* label__True_76 = &label__True_76_impl;
                      USE(label__True_76);
                      Label label__False_77_impl(this);
                      Label* label__False_77 = &label__False_77_impl;
                      USE(label__False_77);
                      Label label_if_done_label_481_608_impl(this, {});
                      Label* label_if_done_label_481_608 = &label_if_done_label_481_608_impl;
                      USE(label_if_done_label_481_608);
                      TNode<BoolT> t271 = UncheckedCast<BoolT>(WordEqual((*fromPresent_112).value(), True()));
                      USE(t271);
                      Branch(t271, label__True_76, label__False_77);
                      if (label__True_76->is_used())
                      {
                        BIND(label__True_76);
                        // ../../src/builtins/array.tq:268:33
                        {
                          // ../../src/builtins/array.tq:270:10
                          TNode<Object> t272 = UncheckedCast<Object>(GetProperty(p_context, (*o_89).value(), (*from_110).value()));
                          USE(t272);
                          TVARIABLE(Object, fromValue_113_impl);
                          auto fromValue_113 = &fromValue_113_impl;
                          USE(fromValue_113);
                          *fromValue_113 = t272;
                          // ../../src/builtins/array.tq:273:10
                          TNode<Smi> t273 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                          CallRuntime(Runtime::kSetProperty, p_context, (*o_89).value(), (*to_111).value(), (*fromValue_113).value(), t273);
                        }
                        Goto(label_if_done_label_481_608);
                      }
                      if (label__False_77->is_used())
                      {
                        BIND(label__False_77);
                        // ../../src/builtins/array.tq:276:15
                        {
                          // ../../src/builtins/array.tq:278:10
                          TNode<Smi> t274 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
                          CallRuntime(Runtime::kDeleteProperty, p_context, (*o_89).value(), (*to_111).value(), t274);
                        }
                        Goto(label_if_done_label_481_608);
                      }
                      BIND(label_if_done_label_481_608);
                    }
                    // ../../src/builtins/array.tq:282:8
                    int31_t t275 = 1;
                    TNode<Number> t276 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t275));
                    TNode<Number> t277 = UncheckedCast<Number>(NumberSub((*k_109).value(), t276));
                    USE(t277);
                    *k_109 = t277;
                  }
                  Goto(label_header_480_607);
                }
                BIND(label__False_75);
              }
            }
            Goto(label__False_73);
          }
          BIND(label__False_73);
        }
        Goto(label_if_done_label_476_603);
      }
      BIND(label_if_done_label_476_603);
    }
    // ../../src/builtins/array.tq:287:4
    *k_99 = (*actualStart_93).value();
    // ../../src/builtins/array.tq:292:4
    {
      Label label__True_78_impl(this);
      Label* label__True_78 = &label__True_78_impl;
      USE(label__True_78);
      Label label__False_79_impl(this, {k_99});
      Label* label__False_79 = &label__False_79_impl;
      USE(label__False_79);
      TNode<IntPtrT> t278 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
      int31_t t279 = 2;
      TNode<IntPtrT> t280 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t279));
      TNode<BoolT> t281 = UncheckedCast<BoolT>(IntPtrGreaterThan(t278, t280));
      USE(t281);
      Branch(t281, label__True_78, label__False_79);
      if (label__True_78->is_used())
      {
        BIND(label__True_78);
        // ../../src/builtins/array.tq:292:30
        {
          // ../../src/builtins/array.tq:293:6
          int31_t t282 = 2;
          TNode<IntPtrT> t283 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
          Label label_body_482_609_impl(this);
          Label* label_body_482_609 = &label_body_482_609_impl;
          USE(label_body_482_609);
          Label label_increment_483_610_impl(this);
          Label* label_increment_483_610 = &label_increment_483_610_impl;
          USE(label_increment_483_610);
          Label label_exit_484_611_impl(this);
          Label* label_exit_484_611 = &label_exit_484_611_impl;
          USE(label_exit_484_611);
          TVARIABLE(IntPtrT, _for_index_t284_485_impl);
          auto _for_index_t284_485 = &_for_index_t284_485_impl;
          USE(_for_index_t284_485);
          TNode<IntPtrT> t285 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t282));
          *_for_index_t284_485 = t285;
          Label label_header_486_612_impl(this, {k_99, _for_index_t284_485});
          Label* label_header_486_612 = &label_header_486_612_impl;
          USE(label_header_486_612);
          Goto(label_header_486_612);
          BIND(label_header_486_612);
          TNode<BoolT> t286 = UncheckedCast<BoolT>(IntPtrLessThan((*_for_index_t284_485).value(), t283));
          Branch(t286, label_body_482_609, label_exit_484_611);
          BIND(label_body_482_609);
          TNode<Object> t287 = UncheckedCast<Object>(GetArgumentValue(arguments, (*_for_index_t284_485).value()));
          TVARIABLE(Object, e_114_impl);
          auto e_114 = &e_114_impl;
          USE(e_114);
          *e_114 = t287;
          // ../../src/builtins/array.tq:293:45
          {
            // ../../src/builtins/array.tq:295:8
            TNode<String> t288 = UncheckedCast<String>(ToString_Inline(p_context, (*k_99).value()));
            USE(t288);
            TNode<Smi> t289 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
            CallRuntime(Runtime::kSetProperty, p_context, (*o_89).value(), t288, (*e_114).value(), t289);
            // ../../src/builtins/array.tq:298:8
            int31_t t290 = 1;
            TNode<Number> t291 = UncheckedCast<Number>(from_constexpr22UT12ATHeapNumber5ATSmi(t290));
            TNode<Number> t292 = UncheckedCast<Number>(NumberAdd((*k_99).value(), t291));
            USE(t292);
            *k_99 = t292;
          }
          Goto(label_increment_483_610);
          BIND(label_increment_483_610);
          TNode<IntPtrT> t293 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(1));
          TNode<IntPtrT> t294 = UncheckedCast<IntPtrT>(IntPtrAdd((*_for_index_t284_485).value(), t293));
          *_for_index_t284_485 = t294;
          Goto(label_header_486_612);
          BIND(label_exit_484_611);
        }
        Goto(label__False_79);
      }
      BIND(label__False_79);
    }
    // ../../src/builtins/array.tq:304:4
    const char* t295 = "length";
    TNode<Number> t296 = UncheckedCast<Number>(NumberSub((*len_90).value(), (*actualDeleteCount_95).value()));
    USE(t296);
    TNode<Number> t297 = UncheckedCast<Number>(NumberAdd(t296, (*itemCount_103).value()));
    USE(t297);
    TNode<Object> t298 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t295));
    TNode<Smi> t299 = UncheckedCast<Smi>(from_constexpr14ATLanguageMode(LanguageMode::kStrict));
    CallRuntime(Runtime::kSetProperty, p_context, (*o_89).value(), t298, t297, t299);
    // ../../src/builtins/array.tq:307:4
    arguments->PopAndReturn((*a_98).value());
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::ArrayForEachTorqueContinuation(TNode<Context> p_context, TNode<Object> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, TNode<Smi> p_initial_k) {
  TVARIABLE(Object, _return_115_impl);
  auto _return_115 = &_return_115_impl;
  USE(_return_115);
  Label label_macro_end_613_impl(this, {_return_115});
  Label* label_macro_end_613 = &label_macro_end_613_impl;
  USE(label_macro_end_613);
  // ../../src/builtins/array-foreach.tq:8:47
  {
    // ../../src/builtins/array-foreach.tq:11:4
    TVARIABLE(Smi, k_116_impl);
    auto k_116 = &k_116_impl;
    USE(k_116);
    *k_116 = p_initial_k;
    Label label__True_80_impl(this);
    Label* label__True_80 = &label__True_80_impl;
    USE(label__True_80);
    Label label__False_81_impl(this);
    Label* label__False_81 = &label__False_81_impl;
    USE(label__False_81);
    Label label_header_487_614_impl(this, {k_116});
    Label* label_header_487_614 = &label_header_487_614_impl;
    USE(label_header_487_614);
    Goto(label_header_487_614);
    BIND(label_header_487_614);
    Label label_assignment_488_615_impl(this);
    Label* label_assignment_488_615 = &label_assignment_488_615_impl;
    USE(label_assignment_488_615);
    BranchIfNumberLessThan((*k_116).value(), p_len, label__True_80, label__False_81);
    if (label__True_80->is_used())
    {
      BIND(label__True_80);
      // ../../src/builtins/array-foreach.tq:11:53
      {
        // ../../src/builtins/array-foreach.tq:13:6
        TNode<String> t300 = UncheckedCast<String>(ToString_Inline(p_context, (*k_116).value()));
        USE(t300);
        TVARIABLE(String, pK_117_impl);
        auto pK_117 = &pK_117_impl;
        USE(pK_117);
        *pK_117 = t300;
        // ../../src/builtins/array-foreach.tq:16:6
        TNode<Oddball> t301 = UncheckedCast<Oddball>(HasPropertyObject(p_o, (*pK_117).value(), p_context, kHasProperty));
        USE(t301);
        TVARIABLE(Oddball, kPresent_118_impl);
        auto kPresent_118 = &kPresent_118_impl;
        USE(kPresent_118);
        *kPresent_118 = t301;
        // ../../src/builtins/array-foreach.tq:19:6
        {
          Label label__True_82_impl(this);
          Label* label__True_82 = &label__True_82_impl;
          USE(label__True_82);
          Label label__False_83_impl(this, {});
          Label* label__False_83 = &label__False_83_impl;
          USE(label__False_83);
          TNode<BoolT> t302 = UncheckedCast<BoolT>(WordEqual((*kPresent_118).value(), True()));
          USE(t302);
          Branch(t302, label__True_82, label__False_83);
          if (label__True_82->is_used())
          {
            BIND(label__True_82);
            // ../../src/builtins/array-foreach.tq:19:28
            {
              // ../../src/builtins/array-foreach.tq:21:8
              TNode<Object> t303 = UncheckedCast<Object>(GetProperty(p_context, p_o, (*pK_117).value()));
              USE(t303);
              TVARIABLE(Object, kValue_119_impl);
              auto kValue_119 = &kValue_119_impl;
              USE(kValue_119);
              *kValue_119 = t303;
              // ../../src/builtins/array-foreach.tq:24:8
              TNode<Object> t304 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, (*kValue_119).value(), (*k_116).value(), p_o));
              USE(t304);
            }
            Goto(label__False_83);
          }
          BIND(label__False_83);
        }
      }
      Goto(label_assignment_488_615);
    }
    {
      BIND(label_assignment_488_615);
      int31_t t305 = 1;
      TNode<Smi> t306 = UncheckedCast<Smi>(from_constexpr5ATSmi(t305));
      TNode<Smi> t307 = UncheckedCast<Smi>(SmiAdd((*k_116).value(), t306));
      USE(t307);
      *k_116 = t307;
      Goto(label_header_487_614);
    }
    BIND(label__False_81);
    // ../../src/builtins/array-foreach.tq:29:4
    *_return_115 = Undefined();
    Goto(label_macro_end_613);
  }
  BIND(label_macro_end_613);
  return (*_return_115).value();
}

TF_BUILTIN(ArrayForEachLoopEagerDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  // ../../src/builtins/array-foreach.tq:34:48
  {
    // ../../src/builtins/array-foreach.tq:35:4
    TNode<Object> t308 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, p_context, p_receiver, p_callback, p_thisArg, Undefined(), p_receiver, p_initialK, p_length, Undefined()));
    USE(t308);
    Return(t308);
  }
}

TF_BUILTIN(ArrayForEachLoopLazyDeoptContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_result = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(p_result);
  // ../../src/builtins/array-foreach.tq:42:64
  {
    // ../../src/builtins/array-foreach.tq:43:4
    TNode<Object> t309 = UncheckedCast<Object>(CallBuiltin(Builtins::kArrayForEachLoopContinuation, p_context, p_receiver, p_callback, p_thisArg, Undefined(), p_receiver, p_initialK, p_length, Undefined()));
    USE(t309);
    Return(t309);
  }
}

TF_BUILTIN(ArrayForEachLoopContinuation, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  TNode<Object> p_receiver = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(p_receiver);
  TNode<Object> p_callback = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(p_callback);
  TNode<Object> p_thisArg = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(p_thisArg);
  TNode<Object> p_array = UncheckedCast<Object>(Parameter(Descriptor::kArray));
  USE(p_array);
  TNode<Object> p_object = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(p_object);
  TNode<Object> p_initialK = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(p_initialK);
  TNode<Object> p_length = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(p_length);
  TNode<Object> p_to = UncheckedCast<Object>(Parameter(Descriptor::kTo));
  USE(p_to);
  // ../../src/builtins/array-foreach.tq:51:26
  {
    // ../../src/builtins/array-foreach.tq:52:4
    {
      Label label_try_done_489_616_impl(this);
      Label* label_try_done_489_616 = &label_try_done_489_616_impl;
      USE(label_try_done_489_616);
      Label label_Unexpected_84_impl(this);
      Label* label_Unexpected_84 = &label_Unexpected_84_impl;
      USE(label_Unexpected_84);
      Label label_try_begin_490_617_impl(this);
      Label* label_try_begin_490_617 = &label_try_begin_490_617_impl;
      USE(label_try_begin_490_617);
      Goto(label_try_begin_490_617);
      if (label_try_begin_490_617->is_used())
      {
        BIND(label_try_begin_490_617);
        // ../../src/builtins/array-foreach.tq:52:8
        {
          // ../../src/builtins/array-foreach.tq:53:6
          TNode<JSReceiver> t310 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(p_callback, label_Unexpected_84));
          USE(t310);
          TVARIABLE(JSReceiver, callbackfn_120_impl);
          auto callbackfn_120 = &callbackfn_120_impl;
          USE(callbackfn_120);
          *callbackfn_120 = t310;
          // ../../src/builtins/array-foreach.tq:54:6
          TNode<Smi> t311 = UncheckedCast<Smi>(cast5ATSmi(p_initialK, label_Unexpected_84));
          USE(t311);
          TVARIABLE(Smi, k_121_impl);
          auto k_121 = &k_121_impl;
          USE(k_121);
          *k_121 = t311;
          // ../../src/builtins/array-foreach.tq:55:6
          TNode<Number> t312 = UncheckedCast<Number>(cast22UT12ATHeapNumber5ATSmi(p_length, label_Unexpected_84));
          USE(t312);
          TVARIABLE(Number, number_length_122_impl);
          auto number_length_122 = &number_length_122_impl;
          USE(number_length_122);
          *number_length_122 = t312;
          // ../../src/builtins/array-foreach.tq:57:6
          TNode<Object> t313 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(p_context, p_object, (*number_length_122).value(), (*callbackfn_120).value(), p_thisArg, (*k_121).value()));
          USE(t313);
          Return(t313);
        }
      }
      if (label_Unexpected_84->is_used())
      {
        BIND(label_Unexpected_84);
        // ../../src/builtins/array-foreach.tq:60:21
        {
          // ../../src/builtins/array-foreach.tq:61:6
          Unreachable();
        }
      }
    }
  }
}

compiler::TNode<Object> ArrayBuiltinsFromDSLAssembler::FastArrayForEach(TNode<Context> p_context, TNode<Object> p_o, TNode<Number> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_85, TVariable<Smi>* Bailout0_123) {
  TVARIABLE(Object, _return_124_impl);
  auto _return_124 = &_return_124_impl;
  USE(_return_124);
  Label label_macro_end_618_impl(this, {_return_124});
  Label* label_macro_end_618 = &label_macro_end_618_impl;
  USE(label_macro_end_618);
  // ../../src/builtins/array-foreach.tq:102:15
  {
    // ../../src/builtins/array-foreach.tq:103:4
    int31_t t314 = 0;
    TVARIABLE(Smi, k_125_impl);
    auto k_125 = &k_125_impl;
    USE(k_125);
    TNode<Smi> t315 = UncheckedCast<Smi>(from_constexpr5ATSmi(t314));
    *k_125 = t315;
    // ../../src/builtins/array-foreach.tq:104:4
    {
      Label label_try_done_491_619_impl(this);
      Label* label_try_done_491_619 = &label_try_done_491_619_impl;
      USE(label_try_done_491_619);
      Label label_Slow_86_impl(this);
      Label* label_Slow_86 = &label_Slow_86_impl;
      USE(label_Slow_86);
      Label label_try_begin_492_620_impl(this);
      Label* label_try_begin_492_620 = &label_try_begin_492_620_impl;
      USE(label_try_begin_492_620);
      Goto(label_try_begin_492_620);
      if (label_try_begin_492_620->is_used())
      {
        BIND(label_try_begin_492_620);
        // ../../src/builtins/array-foreach.tq:104:8
        {
          // ../../src/builtins/array-foreach.tq:105:6
          TNode<Smi> t316 = UncheckedCast<Smi>(cast5ATSmi(p_len, label_Slow_86));
          USE(t316);
          TVARIABLE(Smi, smi_len_126_impl);
          auto smi_len_126 = &smi_len_126_impl;
          USE(smi_len_126);
          *smi_len_126 = t316;
          // ../../src/builtins/array-foreach.tq:106:6
          TNode<JSArray> t317 = UncheckedCast<JSArray>(cast9ATJSArray(p_o, label_Slow_86));
          USE(t317);
          TVARIABLE(JSArray, a_127_impl);
          auto a_127 = &a_127_impl;
          USE(a_127);
          *a_127 = t317;
          // ../../src/builtins/array-foreach.tq:107:6
          TNode<Map> t318 = UncheckedCast<Map>(LoadMap((*a_127).value()));
          TVARIABLE(Map, map_128_impl);
          auto map_128 = &map_128_impl;
          USE(map_128);
          *map_128 = t318;
          // ../../src/builtins/array-foreach.tq:109:6
          {
            Label label__True_87_impl(this);
            Label* label__True_87 = &label__True_87_impl;
            USE(label__True_87);
            Label label__False_88_impl(this, {});
            Label* label__False_88 = &label__False_88_impl;
            USE(label__False_88);
            TNode<BoolT> t319 = UncheckedCast<BoolT>(IsPrototypeInitialArrayPrototype(p_context, (*map_128).value()));
            USE(t319);
            TNode<BoolT> t320 = UncheckedCast<BoolT>(Word32BinaryNot(t319));
            USE(t320);
            Branch(t320, label__True_87, label__False_88);
            if (label__True_87->is_used())
            {
              BIND(label__True_87);
              // ../../src/builtins/array-foreach.tq:109:59
              Goto(label_Slow_86);
            }
            BIND(label__False_88);
          }
          // ../../src/builtins/array-foreach.tq:110:6
          TNode<Int32T> t321 = UncheckedCast<Int32T>(LoadMapElementsKind((*map_128).value()));
          TVARIABLE(Int32T, elementsKind_129_impl);
          auto elementsKind_129 = &elementsKind_129_impl;
          USE(elementsKind_129);
          *elementsKind_129 = t321;
          // ../../src/builtins/array-foreach.tq:111:6
          {
            Label label__True_89_impl(this);
            Label* label__True_89 = &label__True_89_impl;
            USE(label__True_89);
            Label label__False_90_impl(this, {});
            Label* label__False_90 = &label__False_90_impl;
            USE(label__False_90);
            TNode<BoolT> t322 = UncheckedCast<BoolT>(IsFastElementsKind((*elementsKind_129).value()));
            USE(t322);
            TNode<BoolT> t323 = UncheckedCast<BoolT>(Word32BinaryNot(t322));
            USE(t323);
            Branch(t323, label__True_89, label__False_90);
            if (label__True_89->is_used())
            {
              BIND(label__True_89);
              // ../../src/builtins/array-foreach.tq:111:45
              Goto(label_Slow_86);
            }
            BIND(label__False_90);
          }
          // ../../src/builtins/array-foreach.tq:113:6
          {
            Label label__True_91_impl(this);
            Label* label__True_91 = &label__True_91_impl;
            USE(label__True_91);
            Label label__False_92_impl(this);
            Label* label__False_92 = &label__False_92_impl;
            USE(label__False_92);
            Label label_if_done_label_493_621_impl(this, {});
            Label* label_if_done_label_493_621 = &label_if_done_label_493_621_impl;
            USE(label_if_done_label_493_621);
            TNode<BoolT> t324 = UncheckedCast<BoolT>(IsElementsKindGreaterThan((*elementsKind_129).value(), HOLEY_ELEMENTS));
            USE(t324);
            Branch(t324, label__True_91, label__False_92);
            if (label__True_91->is_used())
            {
              BIND(label__True_91);
              // ../../src/builtins/array-foreach.tq:113:67
              {
                // ../../src/builtins/array-foreach.tq:114:8
                VisitAllElements18ATFixedDoubleArray(p_context, (*a_127).value(), (*smi_len_126).value(), p_callbackfn, p_thisArg, label_Bailout_85, Bailout0_123);
              }
              Goto(label_if_done_label_493_621);
            }
            if (label__False_92->is_used())
            {
              BIND(label__False_92);
              // ../../src/builtins/array-foreach.tq:117:13
              {
                // ../../src/builtins/array-foreach.tq:118:8
                VisitAllElements12ATFixedArray(p_context, (*a_127).value(), (*smi_len_126).value(), p_callbackfn, p_thisArg, label_Bailout_85, Bailout0_123);
              }
              Goto(label_if_done_label_493_621);
            }
            BIND(label_if_done_label_493_621);
          }
        }
        Goto(label_try_done_491_619);
      }
      if (label_Slow_86->is_used())
      {
        BIND(label_Slow_86);
        // ../../src/builtins/array-foreach.tq:122:15
        {
          // ../../src/builtins/array-foreach.tq:123:6
          *Bailout0_123 = (*k_125).value();
          Goto(label_Bailout_85);
        }
      }
      BIND(label_try_done_491_619);
    }
    // ../../src/builtins/array-foreach.tq:125:4
    *_return_124 = Undefined();
    Goto(label_macro_end_618);
  }
  BIND(label_macro_end_618);
  return (*_return_124).value();
}

TF_BUILTIN(ArrayForEach, ArrayBuiltinsFromDSLAssembler) {
  TNode<Context> p_context = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(p_context);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> p_receiver = arguments_impl.GetReceiver();
  auto arguments = &arguments_impl;
  USE(arguments);
  USE(p_receiver);
  // ../../src/builtins/array-foreach.tq:130:64
  {
    // ../../src/builtins/array-foreach.tq:131:4
    {
      Label label_try_done_494_622_impl(this);
      Label* label_try_done_494_622 = &label_try_done_494_622_impl;
      USE(label_try_done_494_622);
      Label label_TypeError_93_impl(this);
      Label* label_TypeError_93 = &label_TypeError_93_impl;
      USE(label_TypeError_93);
      Label label_NullOrUndefinedError_94_impl(this);
      Label* label_NullOrUndefinedError_94 = &label_NullOrUndefinedError_94_impl;
      USE(label_NullOrUndefinedError_94);
      Label label_try_begin_495_623_impl(this);
      Label* label_try_begin_495_623 = &label_try_begin_495_623_impl;
      USE(label_try_begin_495_623);
      Goto(label_try_begin_495_623);
      if (label_try_begin_495_623->is_used())
      {
        BIND(label_try_begin_495_623);
        // ../../src/builtins/array-foreach.tq:131:8
        {
          // ../../src/builtins/array-foreach.tq:132:6
          {
            Label label__True_95_impl(this);
            Label* label__True_95 = &label__True_95_impl;
            USE(label__True_95);
            Label label__False_96_impl(this, {});
            Label* label__False_96 = &label__False_96_impl;
            USE(label__False_96);
            TNode<BoolT> t325 = UncheckedCast<BoolT>(IsNullOrUndefined(p_receiver));
            USE(t325);
            Branch(t325, label__True_95, label__False_96);
            if (label__True_95->is_used())
            {
              BIND(label__True_95);
              // ../../src/builtins/array-foreach.tq:132:39
              {
                // ../../src/builtins/array-foreach.tq:133:8
                Goto(label_NullOrUndefinedError_94);
              }
            }
            BIND(label__False_96);
          }
          // ../../src/builtins/array-foreach.tq:137:6
          TNode<JSReceiver> t326 = UncheckedCast<JSReceiver>(CallBuiltin(Builtins::kToObject, p_context, p_receiver));
          USE(t326);
          TVARIABLE(Object, o_130_impl);
          auto o_130 = &o_130_impl;
          USE(o_130);
          *o_130 = t326;
          // ../../src/builtins/array-foreach.tq:140:6
          TNode<Number> t327 = UncheckedCast<Number>(GetLengthProperty(p_context, (*o_130).value()));
          USE(t327);
          TVARIABLE(Number, len_131_impl);
          auto len_131 = &len_131_impl;
          USE(len_131);
          *len_131 = t327;
          // ../../src/builtins/array-foreach.tq:143:6
          {
            Label label__True_97_impl(this);
            Label* label__True_97 = &label__True_97_impl;
            USE(label__True_97);
            Label label__False_98_impl(this, {});
            Label* label__False_98 = &label__False_98_impl;
            USE(label__False_98);
            TNode<IntPtrT> t328 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
            int31_t t329 = 0;
            TNode<IntPtrT> t330 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t329));
            TNode<BoolT> t331 = UncheckedCast<BoolT>(WordEqual(t328, t330));
            USE(t331);
            Branch(t331, label__True_97, label__False_98);
            if (label__True_97->is_used())
            {
              BIND(label__True_97);
              // ../../src/builtins/array-foreach.tq:143:33
              {
                // ../../src/builtins/array-foreach.tq:144:8
                Goto(label_TypeError_93);
              }
            }
            BIND(label__False_98);
          }
          // ../../src/builtins/array-foreach.tq:146:6
          int31_t t332 = 0;
          TNode<IntPtrT> t333 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t332));
          TNode<Object> t334 = UncheckedCast<Object>(GetArgumentValue(arguments, t333));
          TNode<JSReceiver> t335 = UncheckedCast<JSReceiver>(cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(t334, label_TypeError_93));
          USE(t335);
          TVARIABLE(JSReceiver, callbackfn_132_impl);
          auto callbackfn_132 = &callbackfn_132_impl;
          USE(callbackfn_132);
          *callbackfn_132 = t335;
          // ../../src/builtins/array-foreach.tq:150:6
          auto t336 = [=]() {
            int31_t t338 = 1;
            TNode<IntPtrT> t339 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t338));
            TNode<Object> t340 = UncheckedCast<Object>(GetArgumentValue(arguments, t339));
            return t340;
          };
          auto t337 = [=]() {
            return Undefined();
          };
          TVARIABLE(Object, t341_496_impl);
          auto t341_496 = &t341_496_impl;
          USE(t341_496);
          {
            Label label__True_99_impl(this);
            Label* label__True_99 = &label__True_99_impl;
            USE(label__True_99);
            Label label__False_100_impl(this);
            Label* label__False_100 = &label__False_100_impl;
            USE(label__False_100);
            Label label__done_497_624_impl(this, {t341_496});
            Label* label__done_497_624 = &label__done_497_624_impl;
            USE(label__done_497_624);
            TNode<IntPtrT> t342 = UncheckedCast<IntPtrT>(GetArgumentsLength(arguments));
            int31_t t343 = 1;
            TNode<IntPtrT> t344 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t343));
            TNode<BoolT> t345 = UncheckedCast<BoolT>(IntPtrGreaterThan(t342, t344));
            USE(t345);
            Branch(t345, label__True_99, label__False_100);
            BIND(label__True_99);
                        *t341_496 = t336();
            Goto(label__done_497_624);
            BIND(label__False_100);
                        *t341_496 = t337();
            Goto(label__done_497_624);
            BIND(label__done_497_624);
          }
          TVARIABLE(Object, thisArg_133_impl);
          auto thisArg_133 = &thisArg_133_impl;
          USE(thisArg_133);
          *thisArg_133 = (*t341_496).value();
          // ../../src/builtins/array-foreach.tq:153:6
          int31_t t346 = 0;
          TVARIABLE(Smi, k_134_impl);
          auto k_134 = &k_134_impl;
          USE(k_134);
          TNode<Smi> t347 = UncheckedCast<Smi>(from_constexpr5ATSmi(t346));
          *k_134 = t347;
          // ../../src/builtins/array-foreach.tq:154:6
          {
            Label label_try_done_498_625_impl(this);
            Label* label_try_done_498_625 = &label_try_done_498_625_impl;
            USE(label_try_done_498_625);
            Label label_Bailout_101_impl(this);
            Label* label_Bailout_101 = &label_Bailout_101_impl;
            USE(label_Bailout_101);
            TVARIABLE(Smi, k_value_135_impl);
            auto k_value_135 = &k_value_135_impl;
            USE(k_value_135);
            Label label_try_begin_499_626_impl(this);
            Label* label_try_begin_499_626 = &label_try_begin_499_626_impl;
            USE(label_try_begin_499_626);
            Goto(label_try_begin_499_626);
            if (label_try_begin_499_626->is_used())
            {
              BIND(label_try_begin_499_626);
              // ../../src/builtins/array-foreach.tq:154:10
              {
                // ../../src/builtins/array-foreach.tq:155:8
                TNode<Object> t348 = UncheckedCast<Object>(FastArrayForEach(p_context, (*o_130).value(), (*len_131).value(), (*callbackfn_132).value(), (*thisArg_133).value(), label_Bailout_101, k_value_135));
                USE(t348);
                arguments->PopAndReturn(t348);
              }
            }
            if (label_Bailout_101->is_used())
            {
              BIND(label_Bailout_101);
              // ../../src/builtins/array-foreach.tq:158:34
              {
                // ../../src/builtins/array-foreach.tq:159:8
                *k_134 = (*k_value_135).value();
              }
              Goto(label_try_done_498_625);
            }
            BIND(label_try_done_498_625);
          }
          // ../../src/builtins/array-foreach.tq:162:6
          TNode<Object> t349 = UncheckedCast<Object>(ArrayForEachTorqueContinuation(p_context, (*o_130).value(), (*len_131).value(), (*callbackfn_132).value(), (*thisArg_133).value(), (*k_134).value()));
          USE(t349);
          arguments->PopAndReturn(t349);
        }
      }
      if (label_TypeError_93->is_used())
      {
        BIND(label_TypeError_93);
        // ../../src/builtins/array-foreach.tq:165:20
        {
          // ../../src/builtins/array-foreach.tq:166:6
          int31_t t350 = 0;
          TNode<IntPtrT> t351 = UncheckedCast<IntPtrT>(from_constexpr8ATintptr(t350));
          TNode<Object> t352 = UncheckedCast<Object>(GetArgumentValue(arguments, t351));
          ThrowTypeError(p_context, MessageTemplate::kCalledNonCallable, t352);
        }
      }
      if (label_NullOrUndefinedError_94->is_used())
      {
        BIND(label_NullOrUndefinedError_94);
        // ../../src/builtins/array-foreach.tq:168:31
        {
          // ../../src/builtins/array-foreach.tq:169:6
          const char* t353 = "Array.prototype.forEach";
          TNode<Object> t354 = UncheckedCast<Object>(from_constexpr22UT12ATHeapObject5ATSmi(t353));
          ThrowTypeError(p_context, MessageTemplate::kCalledOnNullOrUndefined, t354);
        }
      }
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements18ATFixedDoubleArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_491, TVariable<Smi>* Bailout0_424) {
  Label label_macro_end_805_impl(this, {});
  Label* label_macro_end_805 = &label_macro_end_805_impl;
  USE(label_macro_end_805);
  // ../../src/builtins/array-foreach.tq:68:15
  {
    // ../../src/builtins/array-foreach.tq:69:4
    int31_t t1878 = 0;
    TVARIABLE(Smi, k_425_impl);
    auto k_425 = &k_425_impl;
    USE(k_425);
    TNode<Smi> t1879 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1878));
    *k_425 = t1879;
    // ../../src/builtins/array-foreach.tq:70:4
    TNode<Map> t1880 = UncheckedCast<Map>(LoadMap(p_a));
    TVARIABLE(Map, map_426_impl);
    auto map_426 = &map_426_impl;
    USE(map_426);
    *map_426 = t1880;
    // ../../src/builtins/array-foreach.tq:72:4
    {
      Label label_try_done_658_806_impl(this);
      Label* label_try_done_658_806 = &label_try_done_658_806_impl;
      USE(label_try_done_658_806);
      Label label_Slow_492_impl(this);
      Label* label_Slow_492 = &label_Slow_492_impl;
      USE(label_Slow_492);
      Label label_try_begin_659_807_impl(this);
      Label* label_try_begin_659_807 = &label_try_begin_659_807_impl;
      USE(label_try_begin_659_807);
      Goto(label_try_begin_659_807);
      if (label_try_begin_659_807->is_used())
      {
        BIND(label_try_begin_659_807);
        // ../../src/builtins/array-foreach.tq:72:8
        {
          // ../../src/builtins/array-foreach.tq:74:6
          Label label__True_493_impl(this);
          Label* label__True_493 = &label__True_493_impl;
          USE(label__True_493);
          Label label__False_494_impl(this);
          Label* label__False_494 = &label__False_494_impl;
          USE(label__False_494);
          Label label_header_660_808_impl(this, {k_425});
          Label* label_header_660_808 = &label_header_660_808_impl;
          USE(label_header_660_808);
          Goto(label_header_660_808);
          BIND(label_header_660_808);
          Label label_assignment_661_809_impl(this);
          Label* label_assignment_661_809 = &label_assignment_661_809_impl;
          USE(label_assignment_661_809);
          TNode<BoolT> t1881 = UncheckedCast<BoolT>(SmiLessThan((*k_425).value(), p_len));
          USE(t1881);
          Branch(t1881, label__True_493, label__False_494);
          if (label__True_493->is_used())
          {
            BIND(label__True_493);
            // ../../src/builtins/array-foreach.tq:74:33
            {
              // ../../src/builtins/array-foreach.tq:76:8
              {
                Label label__True_495_impl(this);
                Label* label__True_495 = &label__True_495_impl;
                USE(label__True_495);
                Label label__False_496_impl(this, {});
                Label* label__False_496 = &label__False_496_impl;
                USE(label__False_496);
                TNode<Map> t1882 = UncheckedCast<Map>(LoadMap(p_a));
                TNode<BoolT> t1883 = UncheckedCast<BoolT>(WordNotEqual((*map_426).value(), t1882));
                USE(t1883);
                Branch(t1883, label__True_495, label__False_496);
                if (label__True_495->is_used())
                {
                  BIND(label__True_495);
                  // ../../src/builtins/array-foreach.tq:76:26
                  Goto(label_Slow_492);
                }
                BIND(label__False_496);
              }
              // ../../src/builtins/array-foreach.tq:78:8
              {
                Label label__True_497_impl(this);
                Label* label__True_497 = &label__True_497_impl;
                USE(label__True_497);
                Label label__False_498_impl(this, {});
                Label* label__False_498 = &label__False_498_impl;
                USE(label__False_498);
                TNode<Number> t1884 = UncheckedCast<Number>(LoadJSArrayLength(p_a));
                BranchIfNumberGreaterThanOrEqual((*k_425).value(), t1884, label__True_497, label__False_498);
                if (label__True_497->is_used())
                {
                  BIND(label__True_497);
                  // ../../src/builtins/array-foreach.tq:78:27
                  Goto(label_Slow_492);
                }
                BIND(label__False_498);
              }
              // ../../src/builtins/array-foreach.tq:80:8
              {
                Label label_try_done_662_810_impl(this);
                Label* label_try_done_662_810 = &label_try_done_662_810_impl;
                USE(label_try_done_662_810);
                Label label_FoundHole_499_impl(this);
                Label* label_FoundHole_499 = &label_FoundHole_499_impl;
                USE(label_FoundHole_499);
                Label label_try_begin_663_811_impl(this);
                Label* label_try_begin_663_811 = &label_try_begin_663_811_impl;
                USE(label_try_begin_663_811);
                Goto(label_try_begin_663_811);
                if (label_try_begin_663_811->is_used())
                {
                  BIND(label_try_begin_663_811);
                  // ../../src/builtins/array-foreach.tq:80:12
                  {
                    // ../../src/builtins/array-foreach.tq:81:10
                    TNode<Object> t1885 = UncheckedCast<Object>(LoadElementNoHole18ATFixedDoubleArray(p_a, (*k_425).value(), label_FoundHole_499));
                    USE(t1885);
                    TVARIABLE(Object, value_427_impl);
                    auto value_427 = &value_427_impl;
                    USE(value_427);
                    *value_427 = t1885;
                    // ../../src/builtins/array-foreach.tq:83:10
                    TNode<Object> t1886 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, (*value_427).value(), (*k_425).value(), p_a));
                    USE(t1886);
                  }
                  Goto(label_try_done_662_810);
                }
                if (label_FoundHole_499->is_used())
                {
                  BIND(label_FoundHole_499);
                  // ../../src/builtins/array-foreach.tq:85:24
                  {
                    // ../../src/builtins/array-foreach.tq:90:10
                    {
                      Label label__True_500_impl(this);
                      Label* label__True_500 = &label__True_500_impl;
                      USE(label__True_500);
                      Label label__False_501_impl(this, {});
                      Label* label__False_501 = &label__False_501_impl;
                      USE(label__False_501);
                      TNode<BoolT> t1887 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(t1887);
                      Branch(t1887, label__True_500, label__False_501);
                      if (label__True_500->is_used())
                      {
                        BIND(label__True_500);
                        // ../../src/builtins/array-foreach.tq:90:50
                        *Bailout0_424 = (*k_425).value();
                        Goto(label_Bailout_491);
                      }
                      BIND(label__False_501);
                    }
                  }
                  Goto(label_try_done_662_810);
                }
                BIND(label_try_done_662_810);
              }
            }
            Goto(label_assignment_661_809);
          }
          {
            BIND(label_assignment_661_809);
            int31_t t1888 = 1;
            TNode<Smi> t1889 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1888));
            TNode<Smi> t1890 = UncheckedCast<Smi>(SmiAdd((*k_425).value(), t1889));
            USE(t1890);
            *k_425 = t1890;
            Goto(label_header_660_808);
          }
          BIND(label__False_494);
        }
        Goto(label_try_done_658_806);
      }
      if (label_Slow_492->is_used())
      {
        BIND(label_Slow_492);
        // ../../src/builtins/array-foreach.tq:94:15
        {
          // ../../src/builtins/array-foreach.tq:95:6
          *Bailout0_424 = (*k_425).value();
          Goto(label_Bailout_491);
        }
      }
      BIND(label_try_done_658_806);
    }
  }
}

void ArrayBuiltinsFromDSLAssembler::VisitAllElements12ATFixedArray(TNode<Context> p_context, TNode<JSArray> p_a, TNode<Smi> p_len, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg, Label* label_Bailout_502, TVariable<Smi>* Bailout0_428) {
  Label label_macro_end_812_impl(this, {});
  Label* label_macro_end_812 = &label_macro_end_812_impl;
  USE(label_macro_end_812);
  // ../../src/builtins/array-foreach.tq:68:15
  {
    // ../../src/builtins/array-foreach.tq:69:4
    int31_t t1891 = 0;
    TVARIABLE(Smi, k_429_impl);
    auto k_429 = &k_429_impl;
    USE(k_429);
    TNode<Smi> t1892 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1891));
    *k_429 = t1892;
    // ../../src/builtins/array-foreach.tq:70:4
    TNode<Map> t1893 = UncheckedCast<Map>(LoadMap(p_a));
    TVARIABLE(Map, map_430_impl);
    auto map_430 = &map_430_impl;
    USE(map_430);
    *map_430 = t1893;
    // ../../src/builtins/array-foreach.tq:72:4
    {
      Label label_try_done_664_813_impl(this);
      Label* label_try_done_664_813 = &label_try_done_664_813_impl;
      USE(label_try_done_664_813);
      Label label_Slow_503_impl(this);
      Label* label_Slow_503 = &label_Slow_503_impl;
      USE(label_Slow_503);
      Label label_try_begin_665_814_impl(this);
      Label* label_try_begin_665_814 = &label_try_begin_665_814_impl;
      USE(label_try_begin_665_814);
      Goto(label_try_begin_665_814);
      if (label_try_begin_665_814->is_used())
      {
        BIND(label_try_begin_665_814);
        // ../../src/builtins/array-foreach.tq:72:8
        {
          // ../../src/builtins/array-foreach.tq:74:6
          Label label__True_504_impl(this);
          Label* label__True_504 = &label__True_504_impl;
          USE(label__True_504);
          Label label__False_505_impl(this);
          Label* label__False_505 = &label__False_505_impl;
          USE(label__False_505);
          Label label_header_666_815_impl(this, {k_429});
          Label* label_header_666_815 = &label_header_666_815_impl;
          USE(label_header_666_815);
          Goto(label_header_666_815);
          BIND(label_header_666_815);
          Label label_assignment_667_816_impl(this);
          Label* label_assignment_667_816 = &label_assignment_667_816_impl;
          USE(label_assignment_667_816);
          TNode<BoolT> t1894 = UncheckedCast<BoolT>(SmiLessThan((*k_429).value(), p_len));
          USE(t1894);
          Branch(t1894, label__True_504, label__False_505);
          if (label__True_504->is_used())
          {
            BIND(label__True_504);
            // ../../src/builtins/array-foreach.tq:74:33
            {
              // ../../src/builtins/array-foreach.tq:76:8
              {
                Label label__True_506_impl(this);
                Label* label__True_506 = &label__True_506_impl;
                USE(label__True_506);
                Label label__False_507_impl(this, {});
                Label* label__False_507 = &label__False_507_impl;
                USE(label__False_507);
                TNode<Map> t1895 = UncheckedCast<Map>(LoadMap(p_a));
                TNode<BoolT> t1896 = UncheckedCast<BoolT>(WordNotEqual((*map_430).value(), t1895));
                USE(t1896);
                Branch(t1896, label__True_506, label__False_507);
                if (label__True_506->is_used())
                {
                  BIND(label__True_506);
                  // ../../src/builtins/array-foreach.tq:76:26
                  Goto(label_Slow_503);
                }
                BIND(label__False_507);
              }
              // ../../src/builtins/array-foreach.tq:78:8
              {
                Label label__True_508_impl(this);
                Label* label__True_508 = &label__True_508_impl;
                USE(label__True_508);
                Label label__False_509_impl(this, {});
                Label* label__False_509 = &label__False_509_impl;
                USE(label__False_509);
                TNode<Number> t1897 = UncheckedCast<Number>(LoadJSArrayLength(p_a));
                BranchIfNumberGreaterThanOrEqual((*k_429).value(), t1897, label__True_508, label__False_509);
                if (label__True_508->is_used())
                {
                  BIND(label__True_508);
                  // ../../src/builtins/array-foreach.tq:78:27
                  Goto(label_Slow_503);
                }
                BIND(label__False_509);
              }
              // ../../src/builtins/array-foreach.tq:80:8
              {
                Label label_try_done_668_817_impl(this);
                Label* label_try_done_668_817 = &label_try_done_668_817_impl;
                USE(label_try_done_668_817);
                Label label_FoundHole_510_impl(this);
                Label* label_FoundHole_510 = &label_FoundHole_510_impl;
                USE(label_FoundHole_510);
                Label label_try_begin_669_818_impl(this);
                Label* label_try_begin_669_818 = &label_try_begin_669_818_impl;
                USE(label_try_begin_669_818);
                Goto(label_try_begin_669_818);
                if (label_try_begin_669_818->is_used())
                {
                  BIND(label_try_begin_669_818);
                  // ../../src/builtins/array-foreach.tq:80:12
                  {
                    // ../../src/builtins/array-foreach.tq:81:10
                    TNode<Object> t1898 = UncheckedCast<Object>(LoadElementNoHole12ATFixedArray(p_a, (*k_429).value(), label_FoundHole_510));
                    USE(t1898);
                    TVARIABLE(Object, value_431_impl);
                    auto value_431 = &value_431_impl;
                    USE(value_431);
                    *value_431 = t1898;
                    // ../../src/builtins/array-foreach.tq:83:10
                    TNode<Object> t1899 = UncheckedCast<Object>(Call(p_context, p_callbackfn, p_thisArg, (*value_431).value(), (*k_429).value(), p_a));
                    USE(t1899);
                  }
                  Goto(label_try_done_668_817);
                }
                if (label_FoundHole_510->is_used())
                {
                  BIND(label_FoundHole_510);
                  // ../../src/builtins/array-foreach.tq:85:24
                  {
                    // ../../src/builtins/array-foreach.tq:90:10
                    {
                      Label label__True_511_impl(this);
                      Label* label__True_511 = &label__True_511_impl;
                      USE(label__True_511);
                      Label label__False_512_impl(this, {});
                      Label* label__False_512 = &label__False_512_impl;
                      USE(label__False_512);
                      TNode<BoolT> t1900 = UncheckedCast<BoolT>(IsNoElementsProtectorCellInvalid());
                      USE(t1900);
                      Branch(t1900, label__True_511, label__False_512);
                      if (label__True_511->is_used())
                      {
                        BIND(label__True_511);
                        // ../../src/builtins/array-foreach.tq:90:50
                        *Bailout0_428 = (*k_429).value();
                        Goto(label_Bailout_502);
                      }
                      BIND(label__False_512);
                    }
                  }
                  Goto(label_try_done_668_817);
                }
                BIND(label_try_done_668_817);
              }
            }
            Goto(label_assignment_667_816);
          }
          {
            BIND(label_assignment_667_816);
            int31_t t1901 = 1;
            TNode<Smi> t1902 = UncheckedCast<Smi>(from_constexpr5ATSmi(t1901));
            TNode<Smi> t1903 = UncheckedCast<Smi>(SmiAdd((*k_429).value(), t1902));
            USE(t1903);
            *k_429 = t1903;
            Goto(label_header_666_815);
          }
          BIND(label__False_505);
        }
        Goto(label_try_done_664_813);
      }
      if (label_Slow_503->is_used())
      {
        BIND(label_Slow_503);
        // ../../src/builtins/array-foreach.tq:94:15
        {
          // ../../src/builtins/array-foreach.tq:95:6
          *Bailout0_428 = (*k_429).value();
          Goto(label_Bailout_502);
        }
      }
      BIND(label_try_done_664_813);
    }
  }
}

}  // namepsace internal
}  // namespace v8

